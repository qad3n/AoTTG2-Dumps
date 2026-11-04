// Type: Characters.AmmoWeapon
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AmmoWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AmmoWeapon.cs
// --------------------------------

// Characters.AmmoWeapon$$.ctor
// il2cpp: void Characters_AmmoWeapon___ctor (Characters_AmmoWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t round, float cooldown, const MethodInfo* method);
// 0x1821633e0

void Characters_AmmoWeapon___ctor
               (Characters_AmmoWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,int32_t round,
               float cooldown,MethodInfo *method)

{
  int32_t *piVar1;
  
  Characters_ExtendedUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).Cooldown = cooldown;
  (__this->fields).AmmoLeft = ammo;
  (__this->fields).MaxAmmo = ammo;
  (__this->fields).RoundLeft = round;
  (__this->fields).MaxRound = round;
  if (round != -1) {
    piVar1 = &(__this->fields).AmmoLeft;
    *piVar1 = *piVar1 - round;
    return;
  }
  (__this->fields).RoundLeft = ammo;
  (__this->fields).AmmoLeft = 0;
  return;
}


// Characters.AmmoWeapon$$NeedRefill
// il2cpp: bool Characters_AmmoWeapon__NeedRefill (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x182164680

bool Characters_AmmoWeapon__NeedRefill(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).RoundLeft;
  if ((__this->fields).MaxRound != -1) {
    if (iVar1 < (__this->fields).MaxRound) {
      return true;
    }
    iVar1 = iVar1 + (__this->fields).AmmoLeft;
  }
  return iVar1 < (__this->fields).MaxAmmo;
}


// Characters.AmmoWeapon$$Reload
// il2cpp: void Characters_AmmoWeapon__Reload (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x1821646c0

void Characters_AmmoWeapon__Reload(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int iVar3;
  
  if ((__this->fields).MaxRound != -1) {
    iVar3 = (__this->fields).MaxRound - (__this->fields).RoundLeft;
    iVar2 = (__this->fields).AmmoLeft;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    iVar2 = 0;
    if (0 < iVar3) {
      iVar2 = iVar3;
    }
    piVar1 = &(__this->fields).AmmoLeft;
    *piVar1 = *piVar1 - iVar2;
    piVar1 = &(__this->fields).RoundLeft;
    *piVar1 = *piVar1 + iVar2;
  }
  return;
}


// Characters.AmmoWeapon$$Reset
// il2cpp: void Characters_AmmoWeapon__Reset (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x1821646f0

void Characters_AmmoWeapon__Reset(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  if ((__this->fields).MaxRound != -1) {
    (__this->fields).AmmoLeft = (__this->fields).MaxAmmo - (__this->fields).MaxRound;
    (__this->fields).RoundLeft = (__this->fields).MaxRound;
    return;
  }
  (__this->fields).AmmoLeft = 0;
  (__this->fields).RoundLeft = (__this->fields).MaxAmmo;
  return;
}


// Characters.AmmoWeapon$$OnUse
// il2cpp: void Characters_AmmoWeapon__OnUse (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x1821646a0

void Characters_AmmoWeapon__OnUse(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  Characters_BaseUseable__OnUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (-1 < (__this->fields).RoundLeft) {
    piVar1 = &(__this->fields).RoundLeft;
    *piVar1 = *piVar1 + -1;
  }
  return;
}


// Characters.AmmoWeapon$$CanUse
// il2cpp: bool Characters_AmmoWeapon__CanUse (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x182164620

bool Characters_AmmoWeapon__CanUse(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (0 < (__this->fields).RoundLeft) {
    return true;
  }
  return (__this->fields).RoundLeft == -1;
}


// Characters.AmmoWeapon$$HasDurability
// il2cpp: bool Characters_AmmoWeapon__HasDurability (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x182164660

bool Characters_AmmoWeapon__HasDurability(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  if (0 < (__this->fields).RoundLeft) {
    return true;
  }
  return (__this->fields).RoundLeft == -1;
}


