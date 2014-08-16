<div>
    <ul>
    <?php foreach ($items AS $item): ?>
      <li><?php print $item['link']; ?></li>
    <?php endforeach; ?>
    </ul>

    <?php print render($form); ?>
</div>
