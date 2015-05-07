<?php

/**
 * @file
 * Definition of views_handler_area_result.
 */

/**
 * Views area handler to display some configurable result summary.
 *
 * @ingroup views_area_handlers
 */
class search_keyword_handler_area_keywords extends views_handler_area {

  function option_definition() {
    $options = parent::option_definition();

    $options['content'] = array(
      'default' => 'Displaying @start - @end of @total',
      'translatable' => TRUE,
    );

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $variables = array(
      'items' => array(
          '@keywords -- keywords that you entered',
          '@total -- the total records in the set',
      ),
    );
    $list = theme('item_list', $variables);
      $form['content'] = array(
          '#title' => t('Display'),
          '#type' => 'textarea',
          '#rows' => 3,
          '#default_value' => $this->options['content'],
          '#description' => t('You may use HTML code in this field. The following tokens are supported:') . $list,
      );
  }


  /**
   * Find out the information to render.
   */
  function render($empty = FALSE) {
    // Must have options and does not work on summaries.
    if (!isset($this->options['content']) || $this->view->plugin_name == 'default_summary') {
      return;
    }
      $output = '';
      $format = $this->options['content'];
      $total = isset($this->view->total_rows) ? $this->view->total_rows : count($this->view->result);
      $keywords = $this->view->exposed_raw_input['query'];
      $items = array('keywords', 'total');
      $replacements = array();
      foreach ($items as $item) {
          $replacements["@$item"] = ${$item};
      }
      if (!empty($total)) {
          $output .= filter_xss_admin(str_replace(array_keys($replacements), array_values($replacements), $format));
      }
      return $output;
  }

}
