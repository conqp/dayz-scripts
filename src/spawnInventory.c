#include "$CurrentDir:/dayz-scripts/src/inventory.c"
#include "$CurrentDir:/dayz-scripts/src/weapons.c"

const autoptr array<string> SPAWN_LOOT = {
        "AliceBag_Black",
        "Compass",
        "Canteen",
        "SardinesCan",
        "CombatKnife",
        "MilitaryBelt",
        "NylonKnifeSheath",
        "PlateCarrierHolster",
        "CanOpener",
        "Mag_STANAGCoupled_30Rnd",
        "AmmoBox_556x45_20Rnd",
        "AmmoBox_556x45_20Rnd",
        "Mag_Glock_15Rnd",
        "AmmoBox_9x19_25rnd",
        "AmmoBox_9x19_25rnd",
        "BandageDressing",
        "WoodAxe",
        "SodaCan_Pipsi",
        "SodaCan_Spite",
        "TacticalBaconCan",
        "Matchbox",
        "WeaponCleaningKit"
};
const autoptr array<string> M4A1_ATTACHMENTS = {
        "M4_OEBttstck",
        "M4_RISHndgrd",
        "UniversalLight",
        "M4_T3NRDSOptic",
        "Battery9V",
        "Battery9V",
        "M4_Suppressor",
        "Mag_STANAGCoupled_30Rnd"
}
const autoptr array<string> GLOCK19_ATTACHMENTS = {
        "PistolSuppressor",
        "Mag_Glock_15Rnd"
}

void addSpawnInventory(GameInventory inventory)
{
        addInventoryItems(inventory, SPAWN_LOOT);
        addAttachments(inventory.CreateInInventory("M4A1"), M4A1_ATTACHMENTS);
        addAttachments(inventory.CreateInInventory("Glock19"), GLOCK19_ATTACHMENTS);
}
