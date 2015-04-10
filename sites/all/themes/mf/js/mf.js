(function($){
    Drupal.behaviors.searchbox = {
        attach: function (context, settings) {
            $(".form-text").hover(function () {
                $(".form-text").addClass("search_box_hover");
                $(".views-submit-button").addClass("search_submit_hover");
            });
            $(".form-text").mouseout(function () {
                $(".form-text").removeClass("search_box_hover");
                $(".views-submit-button").removeClass("search_submit_hover");
            });
            $(".form-text").focus(function () {
                $(".form-text").val("");
                $(".form-text").addClass("search_box_focus");
                $(".views-submit-button").addClass("search_submit_focus");
            });
            $(".form-text").blur(function () {
                $(".form-text").removeClass("search_box_focus");
                $(".views-submit-button").removeClass("search_submit_focus");
            });
        }
    };
    Drupal.behaviors.seemorebutton = {
        attach: function (context, settings) {
            $( '.pane-see-more-product-homepage-panel-pane-1' ).prepend( "<div class='see-more'><span class='see-more-btn'>See More</span><img src='sites/all/themes/mf/images/arrow_see_more.png'></div>" );
            $(".see-more-btn").hover(function () {
                $(".see-more").addClass("see-more-hover");
                $(".view-id-see_more_product_homepage").addClass('see-more-pictures');
            });
            $(".see-more-btn").mouseout(function () {
                $(".see-more").removeClass("see-more-hover");
            });
            $(".see-more-btn").click(function () {
                $(".pane-see-more-product-homepage-panel-pane-1").addClass("see-more-visible");
            });

            $(".pane-see-more-product-homepage-panel-pane-1").hover(function () {
                $(".view-id-see_more_product_homepage").addClass('see-more-pictures');
            });
            $(".pane-see-more-product-homepage-panel-pane-1").mouseout(function () {
                $(".view-id-see_more_product_homepage").removeClass('see-more-pictures');
            });
        }
    };
})(jQuery);