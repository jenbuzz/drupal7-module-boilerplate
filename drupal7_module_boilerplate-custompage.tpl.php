<div>
    <ul>
    <?php

        foreach ($items AS $item) {
            echo '<li><a href="'.$item['url'].'">'.$item['date'].' - '.$item['title'].'</a></li>';
        }

    ?>
    </ul>
</div>
