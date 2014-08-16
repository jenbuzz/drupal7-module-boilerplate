<div>
    <ul>
    <?php foreach ($items AS $item): ?>
      <li><a href="<?php print $item['url'] ?>"><?php print $item['date'].' - '.$item['title']; ?></a></li>
    <?php endforeach; ?>
    </ul>
</div>
