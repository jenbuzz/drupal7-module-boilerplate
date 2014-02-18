<div>
    <ul>
    <?php

        foreach ($items AS $item) {
            echo '<li>'.$item['link'].'</li>';
        }

    ?>
    </ul>

    <?php echo render($form); ?>
</div>
