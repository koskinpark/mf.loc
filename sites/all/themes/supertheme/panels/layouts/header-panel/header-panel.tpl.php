<?php
/**
 * @file
 * Template for the Supertheme layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<div <?php if (!empty($css_id)) { print "id=".$css_id.""; } ?>>
    <div id="header-wrap">
            <?php print $content['header']; ?>
        </div>
    <div id="content-wrap">
        <?php print $content['content']; ?>
    </div>
    <div id="footer-wrap">
        <?php print $content['footer']; ?>
    </div>
</div>