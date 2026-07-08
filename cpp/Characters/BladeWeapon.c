// Type: Characters.BladeWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BladeWeapon.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Weapons/BladeWeapon.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BladeWeapon$$.ctor
// il2cpp: void Characters_BladeWeapon___ctor (Characters_BladeWeapon_o* __this, Characters_BaseCharacter_o* owner, float durability, int32_t blades, const MethodInfo* method);
// 0x3feef20

void Characters_BladeWeapon___ctor
               (Characters_BladeWeapon_o *__this,Characters_BaseCharacter_o *owner,float durability,
               int32_t blades,MethodInfo *method)

{
  Characters_HoldUseable___ctor((Characters_HoldUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).MaxBlades = blades;
  (__this->fields).BladesLeft = blades;
  (__this->fields).MaxDurability = durability;
  (__this->fields).CurrentDurability = durability;
  return;
}


// Characters.BladeWeapon$$UseDurability
// il2cpp: void Characters_BladeWeapon__UseDurability (Characters_BladeWeapon_o* __this, float amount, const MethodInfo* method);
// 0x3feef60

void Characters_BladeWeapon__UseDurability
               (Characters_BladeWeapon_o *__this,float amount,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).CurrentDurability - amount;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__this->fields).CurrentDurability = fVar1;
  return;
}


// Characters.BladeWeapon$$Reload
// il2cpp: void Characters_BladeWeapon__Reload (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x3feef80

void Characters_BladeWeapon__Reload(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).BladesLeft;
  if (0 < iVar1) {
    (__this->fields).BladesLeft = iVar1 + -1;
    (__this->fields).CurrentDurability = (__this->fields).MaxDurability;
    return;
  }
  (__this->fields).CurrentDurability = 0.0;
  return;
}


// Characters.BladeWeapon$$Reset
// il2cpp: void Characters_BladeWeapon__Reset (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x3feefa0

void Characters_BladeWeapon__Reset(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  (__this->fields).BladesLeft = (__this->fields).MaxBlades;
  (__this->fields).CurrentDurability = (__this->fields).MaxDurability;
  return;
}


// Characters.BladeWeapon$$CanUse
// il2cpp: bool Characters_BladeWeapon__CanUse (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x3feefb0

bool_conflict Characters_BladeWeapon__CanUse(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool_conflict bVar3;
  uint uVar4;
  
  if (DAT_0570418f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_0570418f = '\x01';
  }
  uVar4 = 0;
  bVar3 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if ((0.0 < (__this->fields).CurrentDurability) || ((__this->fields).BladesLeft == 0)) {
      pCVar2 = (__this->fields)._owner;
      if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = (TypeInfo_Human->_2).naturalAligment;
      if (((pCVar2->klass->_2).naturalAligment < bVar1) ||
         ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      uVar4 = (uint)(pCVar2[1].fields.HasExplicitNameTag == 0);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


// Characters.BladeWeapon$$HasDurability
// il2cpp: bool Characters_BladeWeapon__HasDurability (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x3fef050

bool_conflict
Characters_BladeWeapon__HasDurability(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),0.0 < (__this->fields).CurrentDurability);
}


// Characters.BladeWeapon$$Activate
// il2cpp: void Characters_BladeWeapon__Activate (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x3fef060

void Characters_BladeWeapon__Activate(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (DAT_05704190 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_05704190 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      Characters_Human__StartBladeSwing(__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BladeWeapon$$Deactivate
// il2cpp: void Characters_BladeWeapon__Deactivate (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x3fef0d0

void Characters_BladeWeapon__Deactivate(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BladeWeapon$$ActiveFixedUpdate
// il2cpp: void Characters_BladeWeapon__ActiveFixedUpdate (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x3fef0e0

void Characters_BladeWeapon__ActiveFixedUpdate(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  return;
}


