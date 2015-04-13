(function($){

    Drupal.behaviors.pruductsimage = {
        attach: function (context, settings) {
            $(".group-image-group").click(function() {

            });
        }
    };

    Drupal.behaviors.totopbtn = {
        attach: function (context, settings) {
            $("body", context).once("to-top-btn", function () {
                $("body").append("<span class='scroller'><img src='sites/all/themes/mf/images/to_top_btn.png'></span>");
                if ($(this).scrollTop() == 0) {
                    $('.scroller').hide();
                }
            });

            $('.scroller').click(function () {
                $('body,html').animate({
                    scrollTop: 0
                }, 400);
                $('.scroller').fadeOut();
                return false;
            });

              $(window).scroll(function () {
                    if (($(this).scrollTop() > 300)) {
                        $('.scroller').fadeIn();
                    } else {
                        $('.scroller').fadeOut();
                    }
            });
        }
    };

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
            $(".pane-see-more-product-homepage-panel-pane-1", context).once("see-more", function () {
                $pane = $(this);
                $pane.prepend("<div class='see-more'><span class='see-more-btn'>See More</span><img src='sites/all/themes/mf/images/arrow_see_more.png'></div>");

                $pane.mouseenter(function () {
                    $pane.addClass('toggle-mouse');
                    if (!$pane.hasClass('see-more-visible')) {
                        $(".view-id-see_more_product_homepage", $pane).addClass('see-more-pictures');
                    }

                });
                $pane.mouseleave(function () {
                    $pane.removeClass('toggle-mouse');
                    if (!$pane.hasClass('see-more-visible')) {
                        $(".view-id-see_more_product_homepage", $pane).removeClass('see-more-pictures');
                    }
                });

                $(".see-more-btn", $pane).hover(function () {
                    $(".see-more", $pane).addClass("see-more-hover");
                });
                $(".see-more-btn", $pane).mouseout(function () {
                    $(".see-more", $pane).removeClass("see-more-hover");
                });

                $(".see-more-btn").click(function () {
                    $pane.toggleClass('see-more-visible');
                    if ($pane.hasClass('see-more-visible')) {
                        $(".see-more-btn").text("Hide back");
                        $(".view-id-see_more_product_homepage", $pane).removeClass('see-more-pictures');
                    }
                    if (!$pane.hasClass('see-more-visible')) {
                        $(".see-more-btn").text("See More");
                        $(".view-id-see_more_product_homepage", $pane).addClass('see-more-pictures');
                    }
                });
            });
        }
    };
})(jQuery);