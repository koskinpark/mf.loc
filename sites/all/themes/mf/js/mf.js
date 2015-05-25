(function($){

    Drupal.behaviors.searchpage = {
        //attach: function (context, settings) {
        //    $('.pane-search-titles-panel-pane-1', context).once('search-pane', function() {
        //        var $pane = $(this);
        //        var $views_rows = $('> .view-id-search_titles .view-content .views-row', $pane);
        //        $views_rows.each(function(i) {
        //            var $views_row = $(this);
        //            var $title = $('.panel-col-last .views-field-title', $views_row);
        //            var $field_of_img = $('.panel-col-first .views-field-field-pictures > .field-content', $views_row);
        //            var $body = $('.panel-col-last .views-field-body-value', $views_row);
        //            var $get_height_title = $title.outerHeight();
        //            var $get_height_img = $('img', $field_of_img).attr('height');
        //            var $get_height_body = $body.outerHeight();
        //            $title.css({
        //                'top' : -$get_height_title
        //            });
        //            $body.css({
        //                'bottom' : -$get_height_body
        //            });
        //            $views_row.mouseenter(function () {
        //                $title.css({
        //                    'top' : 0,
        //                    'transition' : '0.5s ease'
        //                });
        //                $body.css({
        //                    'bottom': 0,
        //                    'transition' : '0.5s ease'
        //                });
        //            });
        //            $views_row.mouseleave(function () {
        //                $title.css({
        //                    'top' : -$get_height_title,
        //                    'transition' : '0.5s ease'
        //                });
        //                $body.css({
        //                    'bottom': -$get_height_body,
        //                    'transition' : '0.5s ease'
        //                });
        //            });
        //        });
        //    });
        //}
    };


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

    Drupal.behaviors.otheractions = {
        //attach: function (context, settings) {
        //    $(".pane-show-other-actions-on-actions-page-panel-pane-1", context).once("other-actions", function () {
        //        var $pane = $(this);
        //        var $views_rows = $('> .view-show-other-actions-on-actions-page .view-content .views-row', $pane);
        //        $views_rows.each(function(i) {
        //            var $views_row = $(this);
        //            var $title = $('> .node--mainpage-slideshow .field--name-title', $views_row);
        //            var $body = $('> .node--mainpage-slideshow .field--name-body', $views_row);
        //            var $get_height_title = $title.outerHeight();
        //
        //            var $get_height_body = $body.outerHeight();
        //            $title.css({
        //                'top' : -$get_height_title
        //            });
        //            $body.css({
        //                'bottom' : -$get_height_body
        //            });
        //            $views_row.mouseenter(function () {
        //                $title.css({
        //                    'top' : 0,
        //                    'transition' : '0.5s ease'
        //                });
        //                $body.css({
        //                    'bottom': 0,
        //                    'transition' : '0.5s ease'
        //                });
        //            });
        //            $views_row.mouseleave(function () {
        //                $title.css({
        //                    'top' : -$get_height_title,
        //                    'transition' : '0.5s ease'
        //                });
        //                $body.css({
        //                    'bottom': -$get_height_body,
        //                    'transition' : '0.5s ease'
        //                });
        //            });
        //        });
        //    });
        //}
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
               // $('> .group-product-image', $block).css('height', $height_of_desc_block);

                var $images_block = $('> .group-product-image .group-image-group', $block);
                var $thumbnails = $('> .field--name-one-more-picture > .field__items > .field__item > .field--name-field-pictures .field__item', $images_block);

                var $big_pictures = $('> .field--name-field-pictures .field__item',$images_block);

                //$big_pictures.each(function(i) {
                //    var $big_picture = $(this);
                //    var $img_of_big_picture = $('img', $big_picture);
                //    var $get_height_img = $img_of_big_picture.attr('height');
                //    var $get_width_img = $img_of_big_picture.attr('width');
                //    if ($get_height_img >= $get_width_img) {
                //        $img_of_big_picture.css({
                //            'height' : '450px',
                //            'width' : 'auto'
                //        });
                //    }
                //    else {
                //        $img_of_big_picture.css({
                //            'height' : 'auto',
                //            'width' : '450px'
                //        });
                //    }
                //});

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

                var $width_of_window = $("#cboxLoadedContent").width();

                if (($default_width > $width_of_window) || ($default_height > 620)) {
                    $height = 620;
                    $koef = $default_height/$height;
                    $width = $default_width/$koef;
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
                $thumbnails.each(function(i) {
                    var $thumbnail = $(this);
                    $thumbnail.click(function() {
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
                                    $('img', $big_pictures[i]).css({'width': $checked_size['width'], 'height': $checked_size['height'], 'transform': 'scale(1)', 'margin': '0', 'transition': '1s ease'});
                                });
                                $big_pictures_items.fadeIn(300, function () {
                                    $checkpoint = false;
                                });
                            }
                        }
                    });
                    var imgClickif = function(relativeX, relativeY) {
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
                    var imgClickelse = function() {
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
                                'top' : '0'
                            });
                        }
                    };

                    var $trigger = false;
                    var draggable_func = function ($element) {
                       $element.draggable({
                            disabled: false,
                            start: function() {
                                $trigger = true;
                            }
                        });
                        return $trigger;
                    };

                    $('img', $big_pictures[i]).click(function(e) {
                        if ($click_if ==  true) {
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
                    });

                    $("> .change-image .increase", $colorbox_node_wrapper).click(function(){
                        imgClickif();
                        $trigger = draggable_func($('img', $big_pictures[i]));
                        $click_if = false;
                    });
                    $("> .change-image .decrease", $colorbox_node_wrapper).click(function(){
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
                $(this).append("<span class='scroller'><img src='/sites/all/themes/mf/images/to_top_btn.png'></span>");
                if ($(this).scrollTop() == 0) {
                    $('.scroller').hide();
                }
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
            $(".pane-nice-menus-2", context).once("see-more", function () {
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
               $(".pane-title", $pane).text("Все акции");
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
                            if ((scroll_top > (blockTop - 500)) && (scroll_top < (blockBottom - blockHeight * 0.75))) {
                                if (!animatedBlock.hasClass("animated")) {
                                    animatedBlock.addClass("animated");
                                }
                            } else {
                                if ((scroll_top < (blockTop - blockHeight)) || (scroll_top > (blockBottom))) {
                                    animatedBlock.removeClass("animated");
                                }
                            }
                        }
                    });
                });
            });
        }
    };

    Drupal.behaviors.catalogmenu = {
        attach: function (context, settings) {
            $('.pane-nice-menus-1', context).once("catalog-menu", function () {
                var $pane = $(this);
                //window.addEventListener("scroll", function () {
                //    top_inset = window.pageYOffset;
                //});
                //
                //$(window).resize(function () {
                //    get_width_window = $(window).width();
                //});
                //
                //if (get_width_window > 960) {
                //    if (top_inset > 130) {
                //        if (!$pane.hasClass('here_goes')) {
                //            $pane.addClass('here_goes');
                //        }
                //        if ($('body').hasClass('admin-menu')) {
                //            $('.nice-menu-menu-catalog-menu', $pane).css('top', '29px', 'important');
                //        }
                //        else {
                //            $pane.removeClass('here_goes');
                //            if ($('body').hasClass('admin-menu')) {
                //                $('.nice-menu-menu-catalog-menu', $pane).css('top', '0', 'important');
                //            }
                //        }
                //    }
                //    else {
                //        $pane.removeClass('here_goes');
                //    }
                //}
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
                        "<a href=" + languages[i-1] + " class=translate-variant-" + i + "><span>" + languages[i-1] + "</span></a>");
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
    Drupal.behaviors.catalogmenu_hover = {
        attach: function (context, settings) {
            $('.pane-nice-menus-1', context).once("catalogmenu_hover", function () {
                var $pane = $(this);
                var $hover_element = $('.nice-menu-menu-catalog-menu > li', $pane);
                $('> .darkening-bg', 'body').css({
                    'opacity' : '0',
                    'visibility': 'hidden'
                });
                $hover_element.mouseover(function () {
                    $hover_element
                    $('> .darkening-bg', 'body').css({
                        'visibility' : 'visible'
                    }).stop().animate({opacity: '.6'}, 200);
                });
                $hover_element.mouseout(function () {
                    $('> .darkening-bg', 'body').css({
                        'visibility' : 'hidden'
                    }).stop().animate({opacity: '0'}, 100);
                });
            });
        }
    };

    Drupal.behaviors.resizeslideshow = {
        attach: function (context, settings) {
            $('.views-slideshow-cycle-main-frame', context).once("resizeslideshow", function () {
                var $pane = $(this);
                var $frame_rows = $('.views-slideshow-cycle-main-frame-row', $pane);
                var  new_height = new Array();
                $(window).resize(function () {
                    var get_width_window = $(window).width();
                $frame_rows.each(function(i) {
                    var $frame_row = $(this);
                    var $img = $('img', $frame_row);
                    var width = $img.attr('width');
                    var objHeight = $img.attr('height');
                    var width_of_window = get_width_window;
                    var koef = width / objHeight;
                    new_height[i] = width_of_window / koef;
                });
                    max = Math.max.apply(null, new_height);
                    $pane.css({
                        'height': max
                    });
                    $('img', $frame_rows).css({
                        'height': max
                    });
                });
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
                                $sub_catalog.css({
                                    'height' : height_of_sub_catalog*20,
                                    'transition' : '.3s ease'
                                });
                            }
                            else {
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

})(jQuery);