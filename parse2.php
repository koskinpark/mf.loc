<?php

function content_importer_content_import()
{
    $dir = 'parse/';
    if (is_dir($dir)) {
        $tree_of_catalogs = content_importer_get_all_directories($dir);
        content_importer_save_content($tree_of_catalogs);
    } else {
        print $dir . ' -такой директории нет';
    }
}

function content_importer_get_all_directories($dir, &$all_array = array())
{
    $parent_dir = content_importer_removing_dots(scandir($dir));
    foreach ($parent_dir as $key => $value) {
        $sub_dir = $dir . $value . '/';
        if (is_dir($sub_dir)) {
            $all_array[$value] = array();
            content_importer_get_all_directories($sub_dir, $all_array[$value]);
        } else {
            $all_array[] = $value;
        }
    }
    return ($all_array);
}

function content_importer_removing_dots($array)
{
    foreach ($array as $key => $value) {
        if (($value == '.') || ($value == '..')) {
            unset($array[$key]);
        }
    }
    sort($array);
    return ($array);
}

function content_importer_save_content($tree)
{
    $parent_term = 'Садовая мебель';
    foreach ($tree[$parent_term] as $key => $value) {
        $node = entity_create('node', array(
            'type' => 'product',
        ));
        $node->title = $key;
        $info_about_taxonomy_term = taxonomy_get_term_by_name($parent_term);
        $info_about_taxonomy_term = reset($info_about_taxonomy_term);
        $id_of_taxonomy_term = $info_about_taxonomy_term->tid;
        $node->uid = 1;
        $node->field_catalog['und'][0]['target_id'] = $id_of_taxonomy_term;
        if (is_array($value)) {
            $limit_of_upload_images = 0;
            foreach ($value as $sub_key => $sub_value) {
//                if (is_array($sub_value)) {
//                    $limit_of_upload_images = 0;
//                    foreach ($sub_value as $s_k => $s_v) {
//                        $check_image = substr($s_v, -3);
//                        if ($check_image == 'jpg') {
//                            if ($limit_of_upload_images < 4) {
//                                $image_file = content_importer_get_path_for_image('parse/' . $parent_term . '/' . $key . '/' . $sub_key . '/' . $s_v);
//                                $node->field_pictures['und'][$limit_of_upload_images] = $image_file;
//                            }
//                            $limit_of_upload_images++;
//                        }
//                        if ($check_image == 'txt') {
//                            if ($s_v == 'description.txt') {
//                                $get_description = file_get_contents('parse/' . $parent_term . '/' . $key . '/' . $sub_key . '/' . $s_v);
//                                $node->body['und'][0]['value'] = $get_description;
//                                $node->body['und'][0]['format'] = 'full_html';
//                            }
//                            if ($s_v == 'price.txt') {
//                                $get_description = file_get_contents('parse/' . $parent_term . '/' . $key . '/' . $sub_key . '/' . $s_v);
//                                $get_description = str_replace(' ','',$get_description);
//                                $node->field_cost['und'][0]['value'] = (int)$get_description;
//                            }
//                        }
//                        node_save($node);
//                        print ('Content ' . $node->title . ' added /n \n');
//                    }
//                }

                $check_image = substr($sub_value, -3);
                if ($check_image == 'jpg') {
                    if ($limit_of_upload_images < 4) {
                        $image_file = content_importer_get_path_for_image('parse/' . $parent_term . '/' . $key . '/' . $sub_value);
                        $node->field_pictures['und'][$limit_of_upload_images] = $image_file;
                    }
                    $limit_of_upload_images++;
                }
                if ($check_image == 'txt') {
                    if ($sub_value == 'description.txt') {
                        $get_description = file_get_contents('parse/' . $parent_term . '/' . $key . '/' . $sub_value);
                        $node->body['und'][0]['value'] = $get_description;
                        $node->body['und'][0]['format'] = 'full_html';
                    }
                    if ($sub_value == 'price.txt') {
                        $get_description = file_get_contents('parse/' . $parent_term . '/' . $key . '/' . $sub_value);
                        $get_description = str_replace(' ', '', $get_description);
                        $node->field_cost['und'][0]['value'] = (int)$get_description;
                    }
                }
            }
            node_save($node);
            print ('Content ' . $node->title . ' added');
        }
    }
}

function content_importer_get_path_for_image($full_path)
{
    $filepath = drupal_realpath($full_path);
    $file = (object) array(
        'uid' => 1,
        'uri' => $filepath,
        'filemime' => file_get_mimetype($filepath),
        'status' => 1,
    );
    $file = file_copy($file, 'public://');
    $file = (array)$file;
    return ($file);
}

//    $node = entity_create('node', array('type' => 'product'));
//    $node->uid = 1;
//    $node->type = 'product';
//    $node->title = 'olooolo123';
//    $node->body['und'][0]['value'] = '44qwert';
//    $node->field_cost['und'][0]['value'] = '105';
//    $node->field_catalog['und'][0]['target_id'] = '22';
//
//
//
//    node_save($node);

//    $node = node_load(75);
//    print_r($node->field_pictures);
