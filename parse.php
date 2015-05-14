<?php
ini_set("max_execution_time", 0);
header("Content-Type: text/html; charset=utf-8");
//$id = 11570;
//parse ($id);
//function parse($id)
//{
//    $file = file_get_contents("http://mebelvia.ru/katalog/korpusnaya_mebel/spalnie_garnitury/{$id}");
//    $data = array();
//    if ($file) {
////        $template = '#<div><a href="/([^"]+)"';
//        $result = preg_match('/<li class=\"breadcrumbs\-item\">(.*?)<\/li>/s', $file, $maches);
//        var_dump($maches);
//    }
//   // print $file;
//
//
//
////    $file = file_get_contents("http://www.roomer.ru/upload/iblock/307/307e03f3bbdd813321e922e836a78345.jpg");
////    $handle = fopen('new_img_name.jpg',"x");
////    fwrite($handle, $file);
////    fclose($handle);
//}

include('simple_html_dom.php');
$html = new simple_html_dom();
$id = 11570;
parse ($id);
function parse($id)
{
    $html = file_get_html("http://mebelvia.ru/katalog/korpusnaya_mebel/spalnie_garnitury/{$id}");
    //---------------------------------------------------------------------structure of catalogs
    foreach ($html->find('li[class=breadcrumbs-item]', 3)->find('a') as $path) {
        $link_path = $path->href;
    }
    $short_path = str_replace('/katalog/', $link_path, substr($link_path, 9));
    $short_path = substr($short_path, 0, -1);
    $catalog_terms = explode("/", $short_path);
    $parent_term = $catalog_terms[0];
    $child_term = $catalog_terms[1];
    //---------------------------------------------------------------------title of product
    foreach ($html->find('h1[itemprop=name]') as $title) {
        $title_of_product = $title->innertext;
    }
    //---------------------------------------------------------------------main description
    foreach ($html->find('div[itemprop=description] p') as $desc) {
        $full_description_of_product = $desc->innertext;
        foreach ($html->find('div[itemprop=description] p b') as $bold_desc) {
            $bold_description_of_product = $bold_desc->innertext;
        }
        if (($full_description_of_product) and ($bold_description_of_product)) {
            $description_of_product = str_replace($bold_description_of_product, $full_description_of_product, substr($full_description_of_product, strlen($bold_description_of_product) + 13));
        }
    }
    //---------------------------------------------------------------------sub description
    foreach ($html->find('ul[class=productFeature] span[class=property_name]') as $extra_description) {
        $extra_description_of_product[] = $extra_description->innertext;
    }
    foreach ($html->find('ul[class=productFeature] b') as $bold_extra_description) {
        $bold_extra_description_of_product[] = $bold_extra_description->innertext;
    }
    $additional_description = '<br>';
    foreach ($extra_description_of_product as $key => $value) {
        if ($key > 2) {
            $additional_description .= $value . ' ' . $bold_extra_description_of_product[$key] . '<br>';
        }
    }
    //---------------------------------------------------------------------price of product
    foreach ($html->find('div[class=productPrice] div[class=current] span') as $price) {
        $price_of_product = $price->innertext;
    }
    //---------------------------------------------------------------------pictures of product
    $sitename = 'cdn.mebelvia.ru';
    foreach ($html->find('div[class=productPreview] div[class=slider] div[class=move] img') as $img) {
        $path_of_pictures = substr($img->src, 2);
        $zoom = $img->zoom;
        $big_pictures[] = stristr($path_of_pictures, '/', true) . $zoom;
    }
//    $handle = fopen('new_img_name.jpg',"x");
//    fwrite($handle, $file);
//    fclose($handle);
    $def_path = "parse/";
    mkdir("$def_path", 0777);
    if ($parent_term) {
        $def_path = $def_path . $parent_term . "/";
        mkdir("$def_path", 0777);
        if ($child_term) {
            $def_path = $def_path . $child_term . "/";
            mkdir("$def_path", 0777);
        }
        if ($title_of_product) {
            $def_path = $def_path . $title_of_product . "/";
            mkdir("$def_path", 0777);
            if ($description_of_product) {
                $descriptions = fopen("$def_path/description.txt","x");
                fwrite($descriptions, $description_of_product);
            }
            if ($additional_description) {
                fwrite($descriptions, $additional_description);
            }
            fclose($descriptions);
            if ($price_of_product) {
                $price = fopen("$def_path/price.txt","x");
                fwrite($price, $price_of_product);
                fclose($price);
            }
            $counter_of_pictures = 0;
            if ($big_pictures) {
                //в $big_pictures лежит массив состоящий из абсолютных путей до картинок. www.blablabla/...jpg
                foreach($big_pictures as $key => $value) {
                    //тут по идее съедаем эту фотографию из ссылки
                    $file = file_get_contents($big_pictures[$key]);
                    //ниже делается путь до моей нужной папки, что-то типо
                    //parse/parent_term/child_term/title/фотка1.jpg,
                    //parse/parent_term/child_term/title/фотка2.jpg,
                    $img_path = $def_path . $counter_of_pictures . '.jpg';

                    $pictures = fopen("$img_path","x");
                    fwrite($pictures, $file);
                    fclose($pictures);
                    $counter_of_pictures++;
                }
            }
        }

    }

}

?>