// Type: Characters.BaseEmoteSpecial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseEmoteSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/BaseEmoteSpecial.cs
// --------------------------------

// Characters.BaseEmoteSpecial$$get_GroundedOnly
// il2cpp: bool Characters_BaseEmoteSpecial__get_GroundedOnly (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Characters_BaseEmoteSpecial__get_GroundedOnly(Characters_BaseEmoteSpecial_o* __this, MethodInfo* method)

{
  return true;
}


// Characters.BaseEmoteSpecial$$.ctor
// il2cpp: void Characters_BaseEmoteSpecial___ctor (Characters_BaseEmoteSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x182166fc0

void Characters_BaseEmoteSpecial___ctor
               (Characters_BaseEmoteSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_184346cdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184346cdd = '\x01';
  }
  Characters_ExtendedUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  if (owner == (Characters_BaseCharacter_o *)0x0) {
    (__this->fields)._human = (Characters_Human_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((owner->klass->_2).typeHierarchyDepth < bVar1) ||
       ((owner->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception(owner);
    }
    (__this->fields)._human = (Characters_Human_o *)owner;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((owner->klass->_2).typeHierarchyDepth < bVar1) ||
       ((owner->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception(owner);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human,owner);
  return;
}


// Characters.BaseEmoteSpecial$$CanUse
// il2cpp: bool Characters_BaseEmoteSpecial__CanUse (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x182166f30

bool Characters_BaseEmoteSpecial__CanUse(Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  
  bVar2 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  bVar2 = (*(__this->klass->vtable)._17_get_GroundedOnly.methodPtr)
                    (__this,(__this->klass->vtable)._17_get_GroundedOnly.method);
  if (bVar2) {
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_182166f8a;
    if ((pCVar1->fields).Grounded == false) {
      return false;
    }
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    bVar2 = Characters_Human__CanEmote(pCVar1,(MethodInfo *)0x0);
    return bVar2;
  }
label_182166f8a:
  ThrowNullReferenceException();
}


// Characters.BaseEmoteSpecial$$InSpecial
// il2cpp: bool Characters_BaseEmoteSpecial__InSpecial (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x182166f90

bool Characters_BaseEmoteSpecial__InSpecial(Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (pCVar1->fields)._state == 8;
  }
  ThrowNullReferenceException();
}


