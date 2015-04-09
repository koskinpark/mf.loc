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
})(jQuery);