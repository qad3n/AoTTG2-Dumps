// Type: Characters.BladeWeapon
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/BladeWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/BladeWeapon.cs
// --------------------------------

// Characters.BladeWeapon$$.ctor
// il2cpp: void Characters_BladeWeapon___ctor (Characters_BladeWeapon_o* __this, Characters_BaseCharacter_o* owner, float durability, int32_t blades, const MethodInfo* method);
// 0x5c12100

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
// 0x5c12140

void Characters_BladeWeapon__UseDurability(Characters_BladeWeapon_o *__this,float amount,MethodInfo *method)

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
// 0x5c12160

void Characters_BladeWeapon__Reload(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).BladesLeft;
  if (iVar1 < 1) {
    (__this->fields).CurrentDurability = 0.0;
    return;
  }
  (__this->fields).BladesLeft = iVar1 + -1;
  (__this->fields).CurrentDurability = (__this->fields).MaxDurability;
  return;
}


// Characters.BladeWeapon$$Reset
// il2cpp: void Characters_BladeWeapon__Reset (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x5c12180

void Characters_BladeWeapon__Reset(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  (__this->fields).BladesLeft = (__this->fields).MaxBlades;
  (__this->fields).CurrentDurability = (__this->fields).MaxDurability;
  return;
}


// Characters.BladeWeapon$$CanUse
// il2cpp: bool Characters_BladeWeapon__CanUse (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x5c121a0

bool Characters_BladeWeapon__CanUse(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_075476da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476da = '\x01';
  }
  bVar5 = false;
  bVar4 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (bVar4) {
    if ((0.0 < (__this->fields).CurrentDurability) || ((__this->fields).BladesLeft == 0)) {
      pCVar3 = (__this->fields)._owner;
      if (pCVar3 == (Characters_BaseCharacter_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      iVar2._0_1_ = (*(uint8_t *)((char *)pCVar3 + 0x178));
      iVar2._1_1_ = (*(uint8_t *)((char *)pCVar3 + 0x179));
      iVar2._2_2_ = *(undefined2 *)&pCVar3[1].fields.field_0x6a;
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}


// Characters.BladeWeapon$$HasDurability
// il2cpp: bool Characters_BladeWeapon__HasDurability (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x5c12240

bool Characters_BladeWeapon__HasDurability(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  return 0.0 < (__this->fields).CurrentDurability;
}


// Characters.BladeWeapon$$Activate
// il2cpp: void Characters_BladeWeapon__Activate (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x5c12250

void Characters_BladeWeapon__Activate(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_075476db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476db = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  Characters_Human__StartBladeSwing(__this_00,(MethodInfo *)0x0);
  return;
}


// Characters.BladeWeapon$$Deactivate
// il2cpp: void Characters_BladeWeapon__Deactivate (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x5c122c0

void Characters_BladeWeapon__Deactivate(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BladeWeapon$$ActiveFixedUpdate
// il2cpp: void Characters_BladeWeapon__ActiveFixedUpdate (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x5c122d0

void Characters_BladeWeapon__ActiveFixedUpdate(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  return;
}


