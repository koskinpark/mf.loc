(function($){
    Drupal.behaviors.slideshowonmainpage = {
        attach: function (context, settings) {
            $('.pane-view-slideshow-panel-pane-1', context).once('slideshowonmainpage', function() {
                var $pane = $(this);
                var $titles = $('.skin-default > .views-slideshow-controls-top .views-slideshow-pager-field-item', $pane);
                var $thumbnails = $('.skin-default > .views-slideshow-controls-bottom .views-slideshow-pager-field-item', $pane);
                $thumbnails.each(function(i) {
                    var $thumbnail = $(this);
                    $('img', $thumbnail).mouseenter(function() {
                        $('.skin-default > .views-slideshow-controls-top', $pane).css({
                            'display': 'flex'
                        });
                        $($titles[i]).css({
                            'display': 'block'
                        });
                        $($titles[i]).delay(1).queue(function(){
                            $($titles[i]).css({
                                'visibility' : 'visible',
                                'opacity' : '1',
                                'transition' : '0.5s'
                            }).clearQueue();
                        });

                    });
                    $('img', $thumbnail).mouseleave(function() {
                        $('.skin-default > .views-slideshow-controls-top', $pane).css({
                            'display': 'none'
                        });
                        $($titles[i]).css({
                            'display': 'none',
                            'visibility': 'hidden',
                            'opacity': '0'
                        });
                    });
                });

            });
        }
    };

    Drupal.behaviors.bottom_pager_slideshow = {
        attach: function (context, settings) {
            $('.views-slideshow-controls-bottom', context).once("bottom_pager_slideshow", function () {
                var $pane = $(this);
                var $fields = $('.views-slideshow-pager-fields', $pane);
                var amount_of_fields = $('> div', $fields).length;
                var get_width_of_fields = $pane.width();
                    $pane.css({
                        'margin-left': -(get_width_of_fields / amount_of_fields) + 'px'
                    });
            });
        }
    };

    Drupal.behaviors.imgtobg = {
        attach: function (context, settings) {
            $('.group-action', context).once('colorbox-imageslide', function() {
            var $element = $(this);
                if ($element.is(':has(> .field--name-field-image-for-background)')) {
                    var $field_image = $('> .field--name-field-image-for-background', $element);
                    var $path_to_img = $('> .field--name-field-image-for-background .field__items .field__item', $element);
                    var $img = $('img', $path_to_img).attr('src');
                    $field_image.empty();
                    $field_image.css('background','url(' + $img + ') repeat');
                }
            });
        }
    };

    Drupal.behaviors.nodepage = {
        attach: function (context, settings) {
            $(".node--product--full", context).once("images-on-node-page", function () {
                var $block = $(this);

                var $height_of_desc_block = $('> .group-description-product', $block).outerHeight();

                var $images_block = $('> .group-product-image .group-image-group', $block);
                var $thumbnails = $('> .field--name-one-more-picture > .field__items > .field__item > .field--name-field-pictures .field__item', $images_block);

                var $big_pictures = $('> .field--name-field-pictures .field__item',$images_block);

                $($big_pictures[0]).addClass('visible');

                $thumbnails.each(function(i) {
                   var $thumbnail = $(this);
                    $('img', $thumbnail).click(function() {
                        $big_pictures.removeClass('visible');
                        $($big_pictures[i]).addClass('visible');
                    });
                });

                $('img', $big_pictures).mouseenter(function() {
                    $('img', $big_pictures).css('cursor', 'url(/sites/all/themes/mf/images/cursors/cursor_loupe.png),pointer');
                });
                $('img', $big_pictures).mouseleave(function() {
                    $('img', $big_pictures).css('cursor', ' pointer');
                });
            });
        }
    };

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
                var $text = '';
                if ($amount_of_items) {
                    $text = "Click anywhere on the image to zoom or click on zoom buttons on the bottom left side. Also you may click and drag the image to pan. If you want to change picture just click on the any image on the bottom right.";
                }
                else {
                    $text = "Click anywhere on the image to zoom or click on zoom buttons on the left down side. Also you may click and drag the image to pan.";
                }
                return $text;
            };

            var check_size = function($element) {
                var $default_width = $('img', $element).attr('width');
                var $default_height = $('img', $element).attr('height');
                var sizes = {};

                var $width_of_window = $("#cboxLoadedContent").width();

                if (($default_width > $width_of_window) || ($default_height > 620)) {
                    var $height = 620;
                    var $koef = $default_height/$height;
                    var $width = $default_width/$koef;
                    if ($width > $width_of_window) {
                        $width = $width_of_window;
                        $koef = $default_width/$width;
                        $height = $default_height/$koef;
                    }
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

                var $field_title =  $('> .field--name-title', $colorbox_node_wrapper);
                var $text_title = $('.field__items  .field__item h2', $field_title);

                var $big_pictures_items = $('> .field--name-field-pictures .field__items', $colorbox_node_wrapper);
                var $big_pictures = $('.field__item', $big_pictures_items);

                var $text_for_colorbox_info = colorbox_info($big_pictures[1]);
                var $thumbnails = $('> .field--name-one-more-picture .field--name-field-pictures .field__item', $colorbox_node_wrapper);
                $('> .field--name-one-more-picture', $colorbox_node_wrapper).before("<div class='colorbox-info'><span>" + $text_for_colorbox_info + "</span></div>");
                $('> .field--name-one-more-picture', $colorbox_node_wrapper).before("<div class='change-image'><span>Zoom</span><span class='increase'></span><span class='decrease'></span></div>");
                $thumbnails.append("<div class='under-img'></div>");

                $('img', $big_pictures).css('cursor', 'url(/sites/all/themes/mf/images/cursors/cursor_loupe.png),pointer');

                var $checked_size = check_size($big_pictures[0]);
                var $checkpoint = false;
                var $click_if = true;
                $($big_pictures[0]).addClass('visible');
                $($thumbnails[0]).addClass('thumbnail-clicked');
                $('img', $big_pictures[0]).css({'width': $checked_size['width'], 'height': $checked_size['height'], 'transform': 'scale(1)', 'margin': '0', 'transition': '1s ease'});

                        $thumbnails.each(function (i) {
                            var $thumbnail = $(this);
                            $thumbnail.click(function () {
                                if ($checkpoint == false) {
                                    if (!$($big_pictures[i]).hasClass('visible')) {
                                        $thumbnails.removeClass('thumbnail-clicked');
                                        $thumbnail.addClass('thumbnail-clicked');
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
                                            $('img', $big_pictures[i]).css({
                                                'width': $checked_size['width'],
                                                'height': $checked_size['height'],
                                                'transform': 'scale(1)',
                                                'margin': '0',
                                                'transition': '1s ease'
                                            });
                                        });
                                        $big_pictures_items.fadeIn(300, function () {
                                            $checkpoint = false;
                                        });
                                    }
                                }
                            });
                            var imgClickif = function (relativeX, relativeY) {
                                if (!$('img', $big_pictures[i]).hasClass('increased')) {
                                    $('img', $big_pictures).css('cursor', 'url(/sites/all/themes/mf/images/cursors/cursor_loupe_minus.png),pointer');
                                    $('img', $big_pictures[i]).addClass('increased');
                                    $margins = margins($checked_size['width'], $checked_size['height'], relativeX, relativeY);
                                    $('img', $big_pictures[i]).css({
                                        'transform': 'scale(2)',
                                        'margin-top': $margins['margin_top'],
                                        'margin-left': $margins['margin_left'],
                                        'margin-bottom': $margins['margin_bottom'],
                                        'margin-right': $margins['margin_right'],
                                        'transition': '1s ease'
                                    });
                                }
                            };
                            var imgClickelse = function () {
                                if ($('img', $big_pictures).hasClass('increased')) {
                                    $('img', $big_pictures).css('cursor', 'url(/sites/all/themes/mf/images/cursors/cursor_loupe.png),pointer');
                                    $('img', $big_pictures).removeClass('increased');
                                    $('img', $big_pictures).css({
                                        'transform': 'scale(1)',
                                        'margin-left': '0',
                                        'margin-top': '0',
                                        'margin-right': '0',
                                        'margin-bottom': '0',
                                        'transition': '1s ease',
                                        'left': '0',
                                        'top': '0'
                                    });
                                }
                            };

                            var $trigger = false;
                            var draggable_func = function ($element) {
                                $element.draggable({
                                    disabled: false,
                                    start: function () {
                                        $trigger = true;
                                    }
                                });
                                return $trigger;
                            };

                            $('img', $big_pictures[i]).click(function (e) {
                                    var get_width_window = $(window).width();
                                    var get_height_window = $(window).height();
                                    if (get_width_window > 961 && get_height_window > 801) {
                                        if ($click_if == true) {
                                            var offset = $('img', $big_pictures[i]).offset();
                                            var relativeX = (e.pageX - offset.left);
                                            var relativeY = (e.pageY - offset.top);
                                            imgClickif(relativeX, relativeY);
                                            $trigger = draggable_func($('img', $big_pictures[i]));
                                            $click_if = false;
                                        }
                                        else {
                                            if ($trigger == false) {
                                                $('img', $big_pictures[i]).draggable({disabled: true});
                                                imgClickelse();
                                                $click_if = true;
                                            }
                                            else {
                                                $trigger = false;
                                            }
                                        }
                                    }
                            });

                            $("> .change-image .increase", $colorbox_node_wrapper).click(function () {
                                imgClickif();
                                $trigger = draggable_func($('img', $big_pictures[i]));
                                $click_if = false;
                            });
                            $("> .change-image .decrease", $colorbox_node_wrapper).click(function () {
                                if ($trigger == false) {
                                    imgClickelse();
                                    $click_if = true;
                                }
                            });
                        });


            });
        }
    };

    Drupal.behaviors.totopbtn = {
        attach: function (context, settings) {
            $("body", context).once("to-top-btn", function () {

            });
            scroller = function() {
                $('body').animate({
                    scrollTop: 0
                }, 400);
            };
            $('.scroller').click(function () {
                scroller();
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
            $(".pane-searchbox-panel-pane-1", context).once("searchbox", function () {
                var $pane = $(this);
                var $form_text =  $("> .view-searchbox .form-text", $pane);
                var $text = Drupal.t('Search by titles');
                $form_text.attr('placeholder', $text);
                var $submit_form_search = $('> .view-searchbox .views-submit-button', $pane);
                $form_text.hover(function () {
                    $form_text.addClass("search_box_hover");
                    $submit_form_search.addClass("search_submit_hover");
                });
                $form_text.mouseout(function () {
                    $form_text.removeClass("search_box_hover");
                    $submit_form_search.removeClass("search_submit_hover");
                });
                $form_text.focus(function () {
                    $form_text.addClass("search_box_focus");
                    $submit_form_search.addClass("search_submit_focus");
                });
                $form_text.blur(function () {
                    $form_text.removeClass("search_box_focus");
                    $submit_form_search.removeClass("search_submit_focus");
                });
            });
        }
    };

    Drupal.behaviors.user_access_page = {
        attach: function (context, settings) {
            $(".user-login", context).once("user_access_page", function () {
                var $form = $(this);
                var $panes = $('.form-item > .form-text', $form);
                $panes.each(function() {
                    var $pane = $(this);
                    //$pane.hover(function () {
                    //    $pane.addClass("user_login_active");
                    //});
                    //$pane.mouseout(function () {
                    //    $pane.removeClass("user_login_active");
                    //});
                    $pane.focus(function () {
                            $pane.addClass("user_login_active");
                    });
                    $pane.blur(function () {
                            $pane.removeClass("user_login_active");
                    });
                });

            });
        }
    };

    Drupal.behaviors.seemore = {
        attach: function (context, settings) {
            $(".pane-see-more-product-homepage-panel-pane-1", context).once("seemore", function () {
                var $pane = $(this);
                var $height_of_pane = $pane.height();
                var $view_content = $('> .view-see-more-product-homepage .view-content', $pane);

                var childs_from_1_to_3_see_more = function($destination, $opacity, $transition) {
                    $('>:nth-child(-n+3)', $destination).css({
                        'opacity' : $opacity,
                        'transition' : $transition
                    });
                };
                childs_from_1_to_3_see_more($view_content, '.6', '0.3s');
                $pane.prepend("<div class='border-see-more'></div></div><div class='see-more'><span class='see-more-btn'>" + Drupal.t('Show more') + "</span><img src='/sites/all/themes/mf/images/arrow_see_more.png'></div>");

                $pane.mouseenter(function () {
                    $pane.addClass('toggle-mouse');
                    if (!$pane.hasClass('see-more-visible')) {
                        childs_from_1_to_3_see_more($view_content, '1', '0.3s');
                        $(".view-id-see_more_product_homepage", $pane).addClass('see-more-pictures');
                    }

                });
                $pane.mouseleave(function () {
                    $pane.removeClass('toggle-mouse');
                    if (!$pane.hasClass('see-more-visible')) {
                        childs_from_1_to_3_see_more($view_content, '.6', '0.3s');
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
                        $(".border-see-more").css({'display' : 'none'});
                        $(".see-more-btn").text(Drupal.t("Hide back"));
                        $(".view-id-see_more_product_homepage", $pane).removeClass('see-more-pictures');
                        var get_height_see_more_pictures = $(".view-id-see_more_product_homepage", $pane).height();
                        $pane.css({
                            'height': get_height_see_more_pictures + 150,
                            'transition': '0.3s ease'
                        });
                        return false;
                    }
                    if (!$pane.hasClass('see-more-visible')) {
                        $(".border-see-more").css({'display' : 'block'});
                        $(".see-more-btn").text(Drupal.t('Show more'));
                        $(".view-id-see_more_product_homepage", $pane).addClass('see-more-pictures');
                        $pane.css({
                            'height':  $height_of_pane,
                            'transition': '0.3s ease'
                        });

                    }
                });
            });
        }
    };
    Drupal.behaviors.footerlinker = {
        attach: function (context, settings) {
            $(".pane-nice-menus-2", context).once("footerlinker", function () {
                var $pane = $(this);
                var $pane_ul = $('.nice-menu-menu-footer-menu', $pane);
                var $to_top = $(':nth-child(2) a', $pane_ul);
                $to_top.removeAttr('href');
                $to_top.css('cursor','pointer');
                $to_top.click(function() {
                   scroller();
                });
            });
        }
    };
    Drupal.behaviors.allactions = {
        attach: function (context, settings) {
            $(".all-actions > #content-wrap .pane-show-other-actions-on-actions-page-panel-pane-1", context).once("all-actions", function () {
                var $pane = $(this);
               $(".pane-title", $pane).text(Drupal.t("All actions"));
            });
        }
    };

    Drupal.behaviors.animationblock = {
        attach: function (context, settings) {
            $('.front > #content-wrap .pane-most-viewed-panel-pane-1 > .view-most-viewed > .view-content', context).once("all-actions", function () {
                var $pane = $(this);
                window.addEventListener("scroll", function () {
                    $pane.each(function () {
                        var animatedBlock = $(this);
                        var blockHeight = animatedBlock.height();
                        var blockTop = animatedBlock.offset().top;
                        var blockBottom = blockHeight + blockTop;
                        var windowHeight = $(window).height();
                        var scroll_top = window.pageYOffset;
                        if (windowHeight < 800) {
                            if ((scroll_top > (blockTop - 600)) && (scroll_top < (blockBottom - blockHeight * 0.75))) {
                                if (!animatedBlock.hasClass("animated")) {
                                    animatedBlock.addClass("animated");
                                }
                            } else {
                                if ((scroll_top < (blockTop - 1000))) {
                                    animatedBlock.removeClass("animated");
                                }
                            }
                        }
                        else {
                            if (scroll_top > (blockTop - 500)) {
                                if (!animatedBlock.hasClass("animated")) {
                                    animatedBlock.addClass("animated");
                                }
                            } else {
                                if ((blockTop - 1000) > scroll_top) {
                                    animatedBlock.removeClass("animated");
                                }
                            }
                        }
                    });
                });
            });
        }
    };

    Drupal.behaviors.catalogmediumscreen = {
        attach: function (context, settings) {
            $('.nav-menu-medium-screen', context).once("nav-menu-medium-screen", function () {
                var $pane = $(this);
                $pane.append("<div class='btn-show-nav-menu'><div class='pointer-to-nav-menu'><span>Категории товаров</span></div><a><div class='sub-border-line'></div></a></div>");
                $('.btn-show-nav-menu > a', $pane).click(function() {
                    var $ul_menu = $('> .nice-menu-menu-catalog-menu', $pane);
                    $ul_menu.toggleClass('catalog-visible');
                    if ($ul_menu.hasClass('catalog-visible')) {
                        $('body > #content-wrap').css({
                            'margin-left': '280px',
                            'transition': '.3s ease'
                        });
                    }
                    else {
                        $('body > #content-wrap').css({
                            'margin-left': '0',
                            'transition': '.3s ease'
                        });
                    }
                });
            });
        }
    };

    Drupal.behaviors.transaltesite = {
        attach: function (context, settings) {
            $('#header-wrap', context).once("transaltesite", function () {
                var $pane = $(this);
                $('.pane-pane-for-logo', $pane).after("<div class='translate-site'></div>");
                var i = 1;
                var languages = new Array('ru','en');
                while(i <= languages.length) {
                    $('> .translate-site', $pane).append(
                        "<a href=/" + languages[i-1] + " class=translate-variant-" + i + "><span>" + languages[i-1] + "</span></a>");
                    if (!(i == languages.length)) {
                        $("> .translate-site .translate-variant-" + i +"", $pane).after("<span>|</span>");
                    }
                    i++;
                };

            });
        }
    };

    Drupal.behaviors.darkening_background = {
        attach: function (context, settings) {
            $('body', context).once("darkening_background", function () {
                var $pane = $(this);
                $(this).append("<div class='darkening-bg'></div>");
            });
        }
    };
    Drupal.behaviors.catalog_menu_hover = {
        attach: function (context, settings) {
            $('#header-wrap > .nav-menu-full-screen', context).once("catalog_menu_hover", function () {
                var $pane = $(this);
                var $hover_element = $('.nice-menu-menu-catalog-menu > li', $pane);
                var $darkening_element = $('> .darkening-bg', 'body');
                $darkening_element.addClass('darkening-disabled');
                $hover_element.mouseover(function () {
                    $darkening_element.removeClass('darkening-disabled').addClass('darkening-enabled');
                });
                $hover_element.mouseout(function () {
                    $darkening_element.removeClass('darkening-enabled').addClass('darkening-disabled');
                });
            });
        }
    };

    Drupal.behaviors.resizeslideshow = {
        attach: function (context, settings) {
            $('.views-slideshow-cycle-main-frame', context).once("resizeslideshow", function () {
                var $pane = $(this);
                var $frame_rows = $('.views-slideshow-cycle-main-frame-row', $pane);
                var new_height = new Array();
                var get_size = function (e) {
                    var get_width_window = $(window).width();
                    $frame_rows.each(function(i) {
                        var $frame_row = $(this);
                        var $img = $('img', $frame_row);
                        var width = $img.attr('width');
                        var objHeight = $img.attr('height');
                        var width_of_window = get_width_window;
                        var koef = width / objHeight;
                        new_height[i] = width_of_window / koef;
                        var get_max_width = objHeight/480;
                        get_max_width = width/get_max_width;
                        if (get_width_window >= get_max_width) {
                            $('img', $frame_row).css({
                                'width': get_max_width
                            });
                        }
                        else {
                            $('img', $frame_row).css({
                                'width': 'unset',
                                'max-width': '100%'
                            });
                        }
                    });
                    var max = Math.max.apply(null, new_height);

                    $pane.css({
                        'height': max
                    });
                    $('img', $frame_rows).css({
                        'height': max
                    });
                };
                $(window).resize(get_size);
                get_size();
            });
        }
    }

    Drupal.behaviors.slideshow_bottom_controls_btn = {
        attach: function (context, settings) {
            $('.views-slideshow-pager-fields, .widget_pager_bottom', context).once("slideshow_bottom_controls_btn", function () {
                var $pane = $(this);
                var $controls_bottom = $('.views-slideshow-pager-field-item', $pane);
                $controls_bottom.each(function() {
                    var $control_bottom = $(this);
                    $control_bottom.empty();
                    });
            });
        }
    };

    Drupal.behaviors.spoiler_nav_menu = {
        attach: function (context, settings) {
            $('.nav-menu-medium-screen > .nice-menu-menu-catalog-menu', context).once("spoiler_nav_menu", function () {
                var $pane = $(this);
                var $catalog_elements = $('> li', $pane);
                $catalog_elements.each(function(i){
                    var $catalog_element = $(this);
                    $catalog_element.css({
                        'cssText':'overflow: hidden !important'
                    });
                    var $sub_catalog = $('> ul', $catalog_element);
                    if ($sub_catalog.length == 1) {
                        $catalog_element.prepend("<div class='spoiler'><img src='/sites/all/themes/mf/images/arrow_see_more.png'></div>");
                        var height_of_sub_catalog = $('> li', $sub_catalog).length;
                        $sub_catalog.css({
                            'cssText': 'display: block !important; visibility: visible !important;',
                            'height': 0
                        });
                    }
                    if ($('.spoiler', $catalog_element)) {
                        var $spoiler = $('.spoiler', $catalog_element);
                        $spoiler.click(function() {
                            $sub_catalog.toggleClass('spoiler-active');

                            if ($sub_catalog.hasClass('spoiler-active')) {
                                $spoiler.addClass('spoiler-image-rotate');
                                $sub_catalog.css({
                                    'height' : height_of_sub_catalog*20,
                                    'transition' : '.3s ease'
                                });
                            }
                            else {
                                $spoiler.removeClass('spoiler-image-rotate');
                                $sub_catalog.css({
                                    'cssText': 'display: block !important; visibility: visible !important;',
                                    'height': 0,
                                    'transition' : '.3s ease'
                                });
                            }
                        });
                    }
                });
            });
        }
    };

    Drupal.behaviors.copy_seachbox_to_nav_menu_medium = {
        attach: function (context, settings) {
            $('.nav-menu-medium-screen > .nice-menu-menu-catalog-menu', context).once("copy_seachbox_to_nav_menu_medium", function () {
                var $pane = $(this);
                $('.pane-searchbox-panel-pane-1', 'body').clone().prependTo($pane);
            });
        }
    };

    Drupal.behaviors.copy_translate_site_to_nav_menu_medium = {
        attach: function (context, settings) {
            $('.nav-menu-medium-screen > .nice-menu-menu-catalog-menu', context).once("copy_translate_site_to_nav_menu_medium", function () {
                var $pane = $(this);
                $('.translate-site', 'body').clone().prependTo($pane);
            });
        }
    };

    Drupal.behaviors.height_of_content_on_node_page = {
        attach: function (context, settings) {
            $('.node--product--full > .group-product-image', context).once("height_of_content_on_node_page", function () {
                var $pane = $(this);
                var height_of_pane = $pane.height();
                var height_of_window = $(window).height();
                var height_of_header = $('#header-wrap').height();
                var height_of_footer = $('#footer-wrap').height();
                var sum_height = height_of_header + height_of_footer;
                if ((height_of_window - sum_height) > height_of_pane) {
                    var result_height = height_of_window - sum_height;
                    if ($('body').hasClass('admin-menu')) {
                        result_height = result_height - 29;
                    }
                    $pane.css({
                        'height' : result_height
                    });
                }
            });
        }
    };

    Drupal.behaviors.add_t_cost_on_node_page = {
        attach: function (context, settings) {
            $('.group-description-product > .field--name-field-cost', context).once("add_t_cost_on_node_page", function () {
                var $pane = $(this);
                $pane.prepend("<span class='cost_title'>" + Drupal.t('Cost') + "</span>")
            });
        }
    };

    Drupal.behaviors.copy_logo_to_nav_medium_menu = {
        attach: function (context, settings) {
            $('.btn-show-nav-menu', context).once("copy_translate_site_to_nav_menu_medium", function () {
                var $pane = $(this);
                $('.pane-pane-for-logo', 'body').clone().prependTo($pane);
            });
        }
    };

    Drupal.behaviors.check_amount_pictures_on_node_page = {
        attach: function (context, settings) {
            $('.group-image-group > .field--name-one-more-picture', context).once("check_amount_pictures_on_node_page", function () {
                var $pane = $(this);
                var $verifiable_items = $('.field--name-field-pictures .field__item', $pane);
                if ($verifiable_items.length == 1) {
                    $pane.css({
                       'display' : 'none'
                    });
                }
            });
        }
    };

    Drupal.behaviors.nav_menu_medium_click = {
        attach: function (context, settings) {
            $('.btn-show-nav-menu > a', context).once("nav_menu_medium_click", function () {
                var $pane = $(this);
                var $darkening_element = $('> .darkening-bg', 'body');
                $pane.click(function() {
                    $pane.toggleClass('nav-medium-menu-active');
                    if ($pane.hasClass('nav-medium-menu-active')) {
                        $darkening_element.removeClass('darkening-disabled').addClass('darkening-enabled');
                    }
                    else {
                        var $sub_catalogs = $('.spoiler-active', '.nav-menu-medium-screen');
                        $sub_catalogs.css({
                            'cssText': 'display: block !important; visibility: visible !important;',
                            'height': 0
                        });
                        $sub_catalogs.removeClass('spoiler-active');
                        $('.nav-menu-medium-screen > .nice-menu-menu-catalog-menu .spoiler','#header-wrap').removeClass('spoiler-image-rotate');
                        $darkening_element.removeClass('darkening-enabled').addClass('darkening-disabled');
                    }
                });
            });
        }
    };

    Drupal.behaviors.pager_items = {
        attach: function (context, settings) {
            $('.pane-random-product-of-taxonomy-term-panel-pane-1 > .view-random-product-of-taxonomy-term .pager, .pane-search-titles-panel-pane-1 > .view-search-titles .pager', context).once("pager_items", function () {
                var $pane = $(this);
                var $items = $('> li', $pane);
                $items.each(function() {
                   var $item = $(this);
                    if ($item.hasClass('pager__item--current')) {
                        $item.css({
                            'padding-top': '3px'
                        });
                    }
                    if ($item.hasClass('pager__item--next') || $item.hasClass('pager__item--last') || $item.hasClass('pager__item--first') || $item.hasClass('pager__item--previous')) {
                        $('a', $(this)).empty();
                    }
                });
            });
        }
    };

    Drupal.behaviors.copy_panel_titles_to_right_field = {
        attach: function (context, settings) {
            $('#content-wrap', context).once("copy_panel_titles_to_right_field", function () {
                var $pane = $(this);
                $('body').append("<div class='right-panel-of-titles'></div>");
                var $right_panel = $('.right-panel-of-titles', 'body');
                if ($('.view-header', $pane).length > 0) {
                    var $pane_title = $('.view-header', $pane);
                    var get_attr_of_parent = $pane_title.parent().attr('class');
                    var $copied_title_of_element = $(document.createElement('div')).attr('class', get_attr_of_parent);
                    var text_of_title = $pane_title.text().trim();
                    var $copied_title_text = $(document.createElement('h2')).attr('class', 'view-header').text(text_of_title);
                    $copied_title_text.appendTo($copied_title_of_element);
                    $copied_title_of_element.appendTo($right_panel);
                }
                if ($('> .pane-page-title', $pane).length > 0) {
                    $('.pane-page-title', $pane).clone().appendTo($right_panel);
                }
                if ($('.pane-title', $pane).length > 0) {
                    var $pane_titles = $('.pane-title', $pane);
                    $pane_titles.each(function () {
                        var $pane_title = $(this);
                        var get_attr_of_parent = $pane_title.parent().attr('class');
                        var $copied_title_of_element = $(document.createElement('div')).attr('class', get_attr_of_parent);
                        $pane_title.clone().appendTo($copied_title_of_element);
                        $copied_title_of_element.appendTo($right_panel);
                    });
                }
            });
        }
    };

    Drupal.behaviors.range_measurement_of_titles = {
        attach: function (context, settings) {
            $('#content-wrap', context).once("range_measurement_of_titles", function () {
                var $pane = $(this);
                var $right_panel = $('> .right-panel-of-titles', 'body');

                var print_title = function(scroll_top, offset_to_title, get_width_window, $picked_element) {
                    if (scroll_top > offset_to_title && get_width_window > 960) {
                        $picked_element.addClass('title-visible');
                        if ($('body').hasClass('admin-menu') && $('.nav-menu-full-screen', '#header-wrap').hasClass('here_goes')) {

                            $picked_element.parent().css({
                                'top': '78px'
                            });
                        }
                        if (!$('body').hasClass('admin-menu') && $('.nav-menu-full-screen', '#header-wrap').hasClass('here_goes')) {
                            $picked_element.parent().css({
                                'top': '47px'
                            });
                        }
                    }
                    else {
                        $picked_element.removeClass('title-visible');
                    }
                };

                var get_scrollTop = function() {
                    var scroll_top
                    scroll_top = $('body').scrollTop();
                    if (scroll_top == 0) {
                        scroll_top = $('html').scrollTop();
                    }
                    return scroll_top
                }

                var show_title = function(e) {
                    var $element = '';
                    var scroll_top = '';
                    var $picked_element = '';
                    var offset_to_title = '';
                    var get_width_window = $(window).width();
                    if ($('.view-header', $pane).length) {
                        $element = $('.view-header', $pane).parent();
                        offset_to_title = $element.offset().top;
                        scroll_top = get_scrollTop();
                        $picked_element = '.' + $element.attr('class').replace(/\s+/g, '.');
                        $picked_element = $($picked_element, $right_panel);
                        print_title(scroll_top, offset_to_title, get_width_window, $picked_element);
                    }
                    if ($('> .pane-page-title', $pane).length) {
                        $element = $('> .pane-page-title', $pane);
                        if (!offset_to_title) {
                            offset_to_title = $element.offset().top;
                        }
                        scroll_top = get_scrollTop();
                        $picked_element = $element.selector;
                        $picked_element = $($picked_element, $right_panel);
                        print_title(scroll_top, offset_to_title, get_width_window, $picked_element);
                    }
                    if ($('.pane-title', $pane).length) {
                        $element = $('.pane-title', $pane);
                        $element.each(function() {
                            scroll_top = get_scrollTop();
                            var $title = $(this);
                            var offset_to_title = $title.offset().top;
                            var $parent = $title.parent().attr('class');
                            $picked_element = '.' + $parent.replace(/\s+/g, '.');
                            $picked_element = $($picked_element, $right_panel);
                            print_title(scroll_top, offset_to_title, get_width_window, $picked_element);
                        });
                    }
                };
                $(window).resize(show_title).scroll(show_title);
            });
        }
    };

    Drupal.behaviors.click_titles_on_right_field = {
        attach: function (context, settings) {
            $('body', context).once("click_titles_on_right_field", function () {
                var $pane = $(this);
                var $elements = $('.right-panel-of-titles .panel-pane, .view-search-titles', $pane);
                $elements.each(function() {
                    var $element = $(this);
                    $element.click(function() {
                        var $vars_of_element = '.' + $element.attr('class').replace(' title-visible','').replace(/\s+/g, '.');
                        var $finded_element = $($vars_of_element, $('#content-wrap', $pane));
                        var $offsetTop = $finded_element.offset().top;
                        if ($('body').hasClass('admin-menu') && $('.nav-menu-full-screen', '#header-wrap').hasClass('here_goes')) {
                            $offsetTop = $offsetTop - 76;
                        }
                        if (!$('body').hasClass('admin-menu') && $('.nav-menu-full-screen', '#header-wrap').hasClass('here_goes')) {
                            $offsetTop = $offsetTop - 47;
                        }
                        console.log($offsetTop);
                        $('body, html').animate({ scrollTop: $offsetTop }, 1100);
                        return false;
                    });
                });
            });
        }
    };

    Drupal.behaviors.catalogmenu = {
        attach: function (context, settings) {
            $('#header-wrap > .nav-menu-full-screen', context).once("catalogmenu", function () {
                var $pane = $(this);
                var $catalogmenu = $('.nice-menu-menu-catalog-menu', $pane);
                var get_height_of_admin_menu = '';
                if ($('body').hasClass('admin-menu')) {
                    get_height_of_admin_menu = parseInt($('body').css('margin-top'), 10);
                }
                else {
                    $catalogmenu.css('top', '0', 'important');
                }
                var func = function(e) {
                    var top_inset = window.pageYOffset;
                    console.log($('#header-wrap').height(), $pane.height());
                    var get_offset_from_top = $('#header-wrap').height() - $('> .nice-menu-menu-catalog-menu', $pane).height() + 1;
                    if (top_inset > get_offset_from_top && $(window).width() > 960) {
                        if (!$pane.hasClass('here_goes')) {
                            $pane.addClass('here_goes');
                        }
                        if ($('body').hasClass('admin-menu')) {
                            $catalogmenu.css('top', get_height_of_admin_menu + 'px', 'important');
                        }
                        else {
                            $catalogmenu.css('top', '0', 'important');
                        }
                    }
                    else {
                        $pane.removeClass('here_goes');
                        $catalogmenu.css('top', '0', 'important');
                    }
                };
                $(window).resize(func).scroll(func);
            });
        }
    };

    Drupal.behaviors.cansel_active_nav_menu_with_big_size_of_screen = {
        attach: function (context, settings) {
            $('html', context).once("cansel_active_nav_menu_with_big_size_of_screen", function () {
                var $pane = $(this);
                $(window).resize(function() {
                    var get_width_of_screen = $pane.width();
                    if (get_width_of_screen > 960) {
                        var $medium_nav_menu = $('.nav-menu-medium-screen > .nice-menu-menu-catalog-menu', '#header-wrap');
                        if ($medium_nav_menu.hasClass('catalog-visible')) {
                            $medium_nav_menu.removeClass('catalog-visible');
                            $('#content-wrap', 'body').css({'margin-left' : 'unset'});
                            $('.darkening-bg', 'body').removeClass('darkening-enabled').addClass('darkening-disabled');
                        }
                    }
                });
            });
        }
    };

    Drupal.behaviors.add_btn_to_contacts_show_more_contacts = {
        attach: function (context, settings) {
            $('.group-contact-group > :last-child', context).once("add_btn_to_contacts_show_more_contacts", function () {
                var $pane = $(this);
                if ($pane) {
                    $pane.after('<span class=show-more-contacts>' + Drupal.t('Show more contacts') + '</span>');
                }
            });
        }
    };

    Drupal.behaviors.add_btn_show_yandex_map = {
        attach: function (context, settings) {
            $('.node--contacts--full > .group-pictures-group > .group-contact-group', context).once("add_btn_show_yandex_map", function () {
                var $pane = $(this);
                if ($pane) {
                    $pane.after('<div class="block-of-yandex-map-btn"><span class=show-yandex-map>'+Drupal.t('Show driving directions')+'</span></div>');
                }
            });
        }
    };

    Drupal.behaviors.show_more_conctacts_events = {
        attach: function (context, settings) {
            $('.group-contact-group', context).once("show_more_conctacts_events", function () {
                var $group = $(this);
                var $telephones = $('> .field--name-field-telephones p', $group);
                var $times = $('> .field--name-field-opening-times p', $group);
                var $show_more_btn = $('> .show-more-contacts',$group);
                var get_height_of_telephones = $telephones.outerHeight();
                var get_height_of_times = $times.outerHeight();
                var default_height = function($telephones, $times) {
                    $telephones.css({'height' : '0'});
                    $times.css({'height' : '0'});
                    $('.show-more-contacts').css({
                        'cssText': 'margin: -5px auto auto auto !important;'
                    }).text(Drupal.t('Show more contacts'));
                };
                default_height($telephones, $times);
                $show_more_btn.click(function() {
                    $show_more_btn.toggleClass('more-contacts-active');
                    if ($show_more_btn.hasClass('more-contacts-active')) {
                        $telephones.css({
                            'height' : get_height_of_telephones+40
                        });
                        $times.css({
                            'height' : get_height_of_times+20
                        })
                        $('.show-more-contacts').css({
                           'cssText': 'margin: 20px auto auto auto !important'
                        }).text(Drupal.t('Hide more contacts'));
                    }
                    else {
                        default_height($telephones, $times);
                    }
                });
            });
        }
    };

    Drupal.behaviors.show_yandex_map_events = {
        attach: function (context, settings) {
            $('.node--contacts--full', context).once("show_yandex_map_events", function () {
                var $pane = $(this);
                var $map = $('>.field--name-field-yandex-map', $pane);
                var $btn = $('.show-yandex-map', $pane);
                var get_height_of_telephones = $map.outerHeight();
                var get_offset_top_to_map = $map.offset().top;
                var default_height = function($map) {
                    $map.css({'height' : '0'});
                };
                default_height($map);
                $btn.click(function() {
                   $btn.toggleClass('yandex-map-active');
                    if ($btn.hasClass('yandex-map-active')) {
                        $btn.text(Drupal.t('Hide driving directions'))
                        $('body, html').animate({
                            scrollTop: get_offset_top_to_map
                        }, 400);
                        $map.css({'height' : get_height_of_telephones});
                    }
                    else {
                        $btn.text(Drupal.t('Show driving directions'))
                        default_height($map);
                    }
                });
            });
        }
    };

    Drupal.behaviors.more_about_delivery = {
        attach: function (context, settings) {
            $('.node--about-us--full > .group-delivery-and-installation', context).once("more_about_delivery", function () {
                var $pane = $(this);
                var $to_main_desc = $('> .main-text-of-about', $pane);
                var $to_popUp = $('> .field--name-field-delivery-more', $pane);
                var $show_more_delivery = $(document.createElement('span')).attr('class', 'more-about-delivery').text(Drupal.t('Details of delivery'));
                $show_more_delivery.clone().appendTo($to_main_desc);
                $show_more_delivery.appendTo($to_popUp);
            });
        }
    };

    Drupal.behaviors.more_about_delivery_events = {
        attach: function (context, settings) {
            $('.node--about-us--full > .group-delivery-and-installation', context).once("more_about_delivery_events", function () {
                var $pane = $(this);
                var $btn = $('.more-about-delivery', $pane);
                var $details_of_delivery = $('.field--name-field-delivery-more', $pane);
                $btn.click(function() {
                    $btn.toggleClass('btn-active');
                    if ($btn.hasClass('btn-active')) {
                        $btn.text(Drupal.t('Hide details'));
                        $details_of_delivery.addClass('details-visible');
                    }
                    else {
                        $btn.text(Drupal.t('Details of delivery'));
                        $btn.removeClass('btn-active');
                        $details_of_delivery.removeClass('details-visible');
                    }
                });
                $(document).mouseup(function (e){
                    var div = $('> .field__items', $details_of_delivery);
                        if (!div.is(e.target) && !$btn.is(e.target) && div.has(e.target).length === 0) {
                            $details_of_delivery.removeClass('details-visible');
                            $btn.removeClass('btn-active');
                            $btn.text(Drupal.t('Details of delivery'));
                    }
                });
            });
        }
    };

    })(jQuery);