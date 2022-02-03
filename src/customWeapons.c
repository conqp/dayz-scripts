void addAttachments(GameInventory inventory, array<string> attachments)
{
        foreach (auto attachment: attachments)
                inventory.CreateInInventory(attachment);
};

void addAttachments(EntityAI weapon, array<string> attachments)
{
        addAttachments(weapon.GetInventory(), attachments);
};
