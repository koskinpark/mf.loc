(function($){



    Drupal.behaviors.colorboxmenu = {
        attach: function (context, settings) {

            $("#cboxClose").empty();
            $("#cboxClose").hover(function () {
                $("#cboxClose").css( {'opacity':'1', 'transition':'0.3s'});
            });
            $("#cboxClose").mouseout(function () {
                $("#cboxClose").css( {'opacity':'0.2', 'transition':'0.3s'});
            });

            var colorbox_info = function($amount_of_items) {
                if ($amount_of_items) {
                    $text = "Click anywhere on the image to zoom or click on zoom buttons on the bottom left side. Also you may click and drag the image to pan. If you want to change picture just click on the any image on the bottom right.";
                }
                else {
                    $text = "Click anywhere on the image to zoom or click on zoom buttons on the left down side. Also you may click and drag the image to pan.";
                }
                return $text;
            };

            var check_size = function($element) {
                $default_width = $('img', $element).attr('width');
                $default_height = $('img', $element).attr('height');
                var sizes = {};

                if (($default_width > 960) || ($default_height > 620)) {
                    $koef_sizes = $default_width/$default_height;
                    $height = 620;
                    $koef = $default_height/$height;
                    $width = $default_width/$koef;
                    sizes.width = $width;
                    sizes.height = $height;
                }
                else {
                    sizes.width = $default_width;
                    sizes.height = $default_height;
                }
                return sizes;
            };

            var margins = function($default_width, $default_height, relativeX, relativeY) {
                var margins = {};
                var $half_width = $default_width/2;
                var $half_height = $default_height/2;
                var $margin_horisont = 2*($half_width - relativeX);
                var $margin_vertical = 2*($half_height - relativeY);

                if ($margin_horisont > 0) {
                    margins.margin_right = -($margin_horisont);
                }
                else {
                    margins.margin_left = $margin_horisont;
                }

                if ($margin_vertical > 0) {
                    margins.margin_bottom = -($margin_vertical);
                }
                else {
                    margins.margin_top = $margin_vertical;
                }
                return margins;
            };

            $('.node--product--colorbox', context).once('colorbox-imageslide', function() {
                var $colorbox_node_wrapper = $(this);
                var $big_pictures_items = $('> .field--name-field-pictures .field__items', $colorbox_node_wrapper);
                var $big_pictures = $('.field__item', $big_pictures_items);
                var $text_for_colorbox_info = colorbox_info($big_pictures[1]);
                var $thumbnails = $('> .field--name-one-more-picture .field--name-field-pictures .field__item', $colorbox_node_wrapper);

                $('> .field--name-one-more-picture', $colorbox_node_wrapper).before("<div class='colorbox-info'><span>" + $text_for_colorbox_info + "</span></div>");
                $('> .field--name-one-more-picture', $colorbox_node_wrapper).before("<div class='change-image'><span>Zoom</span><span class='increase'></span><span class='decrease'></span></div>");
                $thumbnails.append("<div class='under-img'></div>");


                var $checked_size = check_size($big_pictures[0]);
                var $checkpoint = false;
                var $click_if = true;
                $($big_pictures[0]).addClass('visible');
                $('img', $big_pictures[0]).css({'width': $checked_size['width'], 'height': $checked_size['height'], 'transition': '0.5s'});
                $thumbnails.each(function(i) {
                    var $thumbnail = $(this);
                    $thumbnail.click(function() {
                        if ($checkpoint == false) {
                            if (!$($big_pictures[i]).hasClass('visible')) {
                                $checkpoint = true;
                                $big_pictures_items.fadeOut(300, function () {
                                    $big_pictures.removeClass('visible');
                                    if ($('img', $big_pictures).hasClass('increased')) {
                                        imgClickelse();
                                        $click_if = true;
                                        $('img', $big_pictures).removeClass('increased');
                                    }
                                    $($big_pictures[i]).addClass('visible');
                                    $checked_size = check_size($big_pictures[i]);
                                    $('img', $big_pictures[i]).css({'width': $checked_size['width'], 'height': $checked_size['height'], 'transition': '0.5s'});
                                });
                                $big_pictures_items.fadeIn(300, function () {
                                    $checkpoint = false;
                                });
                            }
                        }
                    });
                    var imgClickif = function(relativeX, relativeY) {
                        if (!$('img', $big_pictures[i]).hasClass('increased')) {
                            $('img', $big_pictures[i]).addClass('increased');
                            $margins = margins($checked_size['width'], $checked_size['height'], relativeX, relativeY);
                            $('img', $big_pictures[i]).css({
                                'transform': 'scale(2)',
                                'margin-top': $margins['margin_top'],
                                'margin-left': $margins['margin_left'],
                                'margin-bottom': $margins['margin_bottom'],
                                'margin-right': $margins['margin_right'],
                                'transition': '1s ease'});
                        }
                    };
                    var imgClickelse = function() {
                        if ($('img', $big_pictures).hasClass('increased')) {
                            $('img', $big_pictures).removeClass('increased');
                            $('img', $big_pictures).css({
                                'transform': 'scale(1)',
                                'margin-left': '0',
                                'margin-top': '0',
                                'margin-right': '0',
                                'margin-bottom': '0',
                                'transition': '1s ease'
                            });
                        }
                    };


                    $('img', $big_pictures[i]).click(function(e) {
                        if ($click_if ==  true) {
                            var offset = $('img', $big_pictures[i]).offset();
                            var relativeX = (e.pageX - offset.left);
                            var relativeY = (e.pageY - offset.top);
                            imgClickif(relativeX, relativeY);
                            $click_if = false;
                        }
                        else {
                            imgClickelse();
                            $click_if = true;
                        }
                    });


                    $("> .change-image .increase", $colorbox_node_wrapper).click(function(){
                        imgClickif();
                        $click_if = false;
                    });
                    $("> .change-image .decrease", $colorbox_node_wrapper).click(function(){
                        imgClickelse();
                        $click_if = true;
                    });
                });



            });
        }
    };

    Drupal.behaviors.totopbtn = {
        attach: function (context, settings) {
            $("body", context).once("to-top-btn", function () {
                $("body").append("<span class='scroller'><img src='/sites/all/themes/mf/images/to_top_btn.png'></span>");
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