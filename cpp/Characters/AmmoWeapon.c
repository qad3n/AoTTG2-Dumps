// Type: Characters.AmmoWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AmmoWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/AmmoWeapon.cs
// --------------------------------

// Characters.AmmoWeapon$$.ctor
// il2cpp: void Characters_AmmoWeapon___ctor (Characters_AmmoWeapon_o* __this, Characters_BaseCharacter_o* owner, int32_t ammo, int32_t round, float cooldown, const MethodInfo* method);
// 0x42f9900

void Characters_AmmoWeapon___ctor
               (Characters_AmmoWeapon_o *__this,Characters_BaseCharacter_o *owner,int32_t ammo,int32_t round,
               float cooldown,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = 0;
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).AmmoLeft = ammo;
  (__this->fields).MaxAmmo = ammo;
  (__this->fields).RoundLeft = round;
  (__this->fields).MaxRound = round;
  (__this->fields).Cooldown = cooldown;
  if (round == -1) {
    (__this->fields).RoundLeft = ammo;
  }
  else {
    iVar1 = ammo - round;
  }
  (__this->fields).AmmoLeft = iVar1;
  return;
}


// Characters.AmmoWeapon$$NeedRefill
// il2cpp: bool Characters_AmmoWeapon__NeedRefill (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x42fa690

bool_conflict Characters_AmmoWeapon__NeedRefill(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict in_EAX;
  int iVar2;
  
  iVar1 = (__this->fields).MaxRound;
  iVar2 = (__this->fields).RoundLeft;
  if (iVar1 != -1) {
    in_EAX = CONCAT31((int3)((uint)in_EAX >> 8),1);
    if (iVar2 < iVar1) {
      return in_EAX;
    }
    iVar2 = iVar2 + (__this->fields).AmmoLeft;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),iVar2 < (__this->fields).MaxAmmo);
}


// Characters.AmmoWeapon$$Reload
// il2cpp: void Characters_AmmoWeapon__Reload (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x42fa6b0

void Characters_AmmoWeapon__Reload(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (__this->fields).MaxRound;
  if (iVar3 != -1) {
    iVar1 = (__this->fields).AmmoLeft;
    iVar2 = (__this->fields).RoundLeft;
    iVar3 = iVar3 - iVar2;
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar4 = 0;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    (__this->fields).AmmoLeft = iVar1 - iVar4;
    (__this->fields).RoundLeft = iVar4 + iVar2;
  }
  return;
}


// Characters.AmmoWeapon$$Reset
// il2cpp: void Characters_AmmoWeapon__Reset (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x42fa6e0

void Characters_AmmoWeapon__Reset(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (__this->fields).MaxAmmo;
  iVar2 = (__this->fields).MaxRound;
  iVar3 = iVar1 - iVar2;
  if (iVar2 == -1) {
    iVar2 = iVar1;
    iVar3 = 0;
  }
  (__this->fields).AmmoLeft = iVar3;
  (__this->fields).RoundLeft = iVar2;
  return;
}


// Characters.AmmoWeapon$$OnUse
// il2cpp: void Characters_AmmoWeapon__OnUse (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x42fa700

void Characters_AmmoWeapon__OnUse(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  
  Characters_BaseUseable__OnUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  iVar1 = (__this->fields).RoundLeft;
  if (-1 < iVar1) {
    (__this->fields).RoundLeft = iVar1 + -1;
  }
  return;
}


// Characters.AmmoWeapon$$CanUse
// il2cpp: bool Characters_AmmoWeapon__CanUse (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x42fa720

bool_conflict Characters_AmmoWeapon__CanUse(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  bVar2 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    iVar1 = (__this->fields).RoundLeft;
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == -1 || 0 < iVar1);
  }
  return 0;
}


// Characters.AmmoWeapon$$HasDurability
// il2cpp: bool Characters_AmmoWeapon__HasDurability (Characters_AmmoWeapon_o* __this, const MethodInfo* method);
// 0x42fa750

bool_conflict Characters_AmmoWeapon__HasDurability(Characters_AmmoWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).RoundLeft;
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == -1 || 0 < iVar1);
}


