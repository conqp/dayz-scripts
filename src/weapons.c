#include "$CurrentDir:/dayz-scripts/src/inventory.c"

void addAttachments(EntityAI weapon, array<string> attachments)
{
        addInventoryItems(weapon.GetInventory(), attachments);
};
