<?php
/**
 * @file
 * Template for the Mf layout.
 *
 * Variables:
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<?php if (!empty($content['header'])): ?>
    <div id="header-wrap">
        <?php print $content['header']; ?>
    </div>
<?php endif; ?>

<?php if (!empty($content['content'])): ?>
    <div id="content-wrap">
        <?php print $content['content']; ?>
    </div>
<?php endif; ?>

<?php if (!empty($content['footer'])): ?>
    <div id="footer-wrap">
        <?php print $content['footer']; ?>
    </div>
<?php endif; ?>