// Type: Characters.BaseEmoteSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseEmoteSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseEmoteSpecial.cs
// --------------------------------

// Characters.BaseEmoteSpecial$$get_GroundedOnly
// il2cpp: bool Characters_BaseEmoteSpecial__get_GroundedOnly (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x5c08d80

bool Characters_BaseEmoteSpecial__get_GroundedOnly(Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  return true;
}


// Characters.BaseEmoteSpecial$$.ctor
// il2cpp: void Characters_BaseEmoteSpecial___ctor (Characters_BaseEmoteSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x5c08d90

void Characters_BaseEmoteSpecial___ctor
               (Characters_BaseEmoteSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_c *pCVar2;
  
  if (Il2CppMethodInitialized_075476ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_075476ad = '\x01';
  }
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  pCVar2 = TypeInfo_Characters_Human;
  if (owner == (Characters_BaseCharacter_o *)0x0) {
    (__this->fields)._human = (Characters_Human_o *)0x0;
label_05c08e1f:
    Il2CppCodeGenWriteBarrier(&(__this->fields)._human);
    return;
  }
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((bVar1 <= (owner->klass->_2).typeHierarchyDepth) &&
     ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
    (__this->fields)._human = (Characters_Human_o *)owner;
    if ((bVar1 <= (owner->klass->_2).typeHierarchyDepth) &&
       ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pCVar2)) goto label_05c08e1f;
  }
  il2cpp_codegen_raise_invalid_cast_exception(owner);
}


// Characters.BaseEmoteSpecial$$CanUse
// il2cpp: bool Characters_BaseEmoteSpecial__CanUse (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x5c08e40

bool Characters_BaseEmoteSpecial__CanUse(Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  bool bVar1;
  
  bVar1 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  bVar1 = (*(__this->klass->vtable)._17_get_GroundedOnly.methodPtr)
                    (__this,(__this->klass->vtable)._17_get_GroundedOnly.method);
  __this_00 = (__this->fields)._human;
  if (bVar1) {
    if (__this_00 != (Characters_Human_o *)0x0) {
      if ((__this_00->fields).Grounded == false) {
        return false;
      }
label_05c08e81:
      bVar1 = Characters_Human__CanEmote(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  else if (__this_00 != (Characters_Human_o *)0x0) goto label_05c08e81;
  ThrowNullReferenceException();
}


// Characters.BaseEmoteSpecial$$InSpecial
// il2cpp: bool Characters_BaseEmoteSpecial__InSpecial (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x5c08e90

bool Characters_BaseEmoteSpecial__InSpecial(Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._state == 8;
}


