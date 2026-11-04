// Type: Characters.BladeWeapon
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BladeWeapon.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Weapons/BladeWeapon.cs
// --------------------------------

// Characters.BladeWeapon$$.ctor
// il2cpp: void Characters_BladeWeapon___ctor (Characters_BladeWeapon_o* __this, Characters_BaseCharacter_o* owner, float durability, int32_t blades, const MethodInfo* method);
// 0x182169a90

void Characters_BladeWeapon___ctor
               (Characters_BladeWeapon_o *__this,Characters_BaseCharacter_o *owner,float durability,
               int32_t blades,MethodInfo *method)

{
  Characters_HoldUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields).MaxDurability = durability;
  (__this->fields).CurrentDurability = durability;
  (__this->fields).MaxBlades = blades;
  (__this->fields).BladesLeft = blades;
  return;
}


// Characters.BladeWeapon$$UseDurability
// il2cpp: void Characters_BladeWeapon__UseDurability (Characters_BladeWeapon_o* __this, float amount, const MethodInfo* method);
// 0x182169a70

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
// 0x182169a40

void Characters_BladeWeapon__Reload(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  if ((__this->fields).BladesLeft < 1) {
    (__this->fields).CurrentDurability = 0.0;
    return;
  }
  piVar1 = &(__this->fields).BladesLeft;
  *piVar1 = *piVar1 + -1;
  (__this->fields).CurrentDurability = (__this->fields).MaxDurability;
  return;
}


// Characters.BladeWeapon$$Reset
// il2cpp: void Characters_BladeWeapon__Reset (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x182169a60

void Characters_BladeWeapon__Reset(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  (__this->fields).BladesLeft = (__this->fields).MaxBlades;
  (__this->fields).CurrentDurability = (__this->fields).MaxDurability;
  return;
}


// Characters.BladeWeapon$$CanUse
// il2cpp: bool Characters_BladeWeapon__CanUse (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x182169980

bool Characters_BladeWeapon__CanUse(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346d0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346d0a = '\x01';
  }
  bVar3 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if ((!bVar3) || (((__this->fields).CurrentDurability <= 0.0 && ((__this->fields).BladesLeft != 0)))) {
    return false;
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
     ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
    return *(int *)&(*(uint64_t *)((char *)pCVar2 + 0x170)) == 0;
  }
  il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
}


// Characters.BladeWeapon$$HasDurability
// il2cpp: bool Characters_BladeWeapon__HasDurability (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x182169a30

bool Characters_BladeWeapon__HasDurability(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  return 0.0 < (__this->fields).CurrentDurability;
}


// Characters.BladeWeapon$$Activate
// il2cpp: void Characters_BladeWeapon__Activate (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x182169900

void Characters_BladeWeapon__Activate(Characters_BladeWeapon_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346d0b = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  if (__this_00 != (Characters_Human_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human
       )) {
      Characters_Human__StartBladeSwing(__this_00,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Characters_Human);
  }
  ThrowNullReferenceException();
}


// Characters.BladeWeapon$$Deactivate
// il2cpp: void Characters_BladeWeapon__Deactivate (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BladeWeapon__Deactivate(Characters_BladeWeapon_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BladeWeapon$$ActiveFixedUpdate
// il2cpp: void Characters_BladeWeapon__ActiveFixedUpdate (Characters_BladeWeapon_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BladeWeapon__ActiveFixedUpdate(Characters_BladeWeapon_o* __this, MethodInfo* method)

{
  return;
}


