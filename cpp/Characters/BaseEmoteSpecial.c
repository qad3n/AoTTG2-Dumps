// Type: Characters.BaseEmoteSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BaseEmoteSpecial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Specials/BaseEmoteSpecial.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BaseEmoteSpecial$$get_GroundedOnly
// il2cpp: bool Characters_BaseEmoteSpecial__get_GroundedOnly (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x3fe6220

bool_conflict
Characters_BaseEmoteSpecial__get_GroundedOnly
          (Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Characters.BaseEmoteSpecial$$.ctor
// il2cpp: void Characters_BaseEmoteSpecial___ctor (Characters_BaseEmoteSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fe6230

void Characters_BaseEmoteSpecial___ctor
               (Characters_BaseEmoteSpecial_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (DAT_05704162 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_05704162 = '\x01';
  }
  Characters_ExtendedUseable___ctor((Characters_ExtendedUseable_o *)__this,owner,(MethodInfo *)0x0);
  pIVar2 = TypeInfo_Human;
  if (owner != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (owner->klass->_2).naturalAligment) &&
       ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      (__this->fields)._human = (Characters_Human_o *)owner;
      if ((bVar1 <= (owner->klass->_2).naturalAligment) &&
         ((owner->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar2)) goto LAB_03fe62bb;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(owner);
  }
  (__this->fields)._human = (Characters_Human_o *)0x0;
LAB_03fe62bb:
  il2cpp_runtime_glue(&(__this->fields)._human,owner);
  return;
}


// Characters.BaseEmoteSpecial$$CanUse
// il2cpp: bool Characters_BaseEmoteSpecial__CanUse (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x3fe62e0

bool_conflict
Characters_BaseEmoteSpecial__CanUse(Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *__this_00;
  char cVar1;
  bool_conflict bVar2;
  
  bVar2 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  cVar1 = (*(__this->klass->vtable)._17_get_GroundedOnly.methodPtr)(__this);
  __this_00 = (__this->fields)._human;
  if (cVar1 == '\0') {
    if (__this_00 != (Characters_Human_o *)0x0) goto LAB_03fe6321;
  }
  else if (__this_00 != (Characters_Human_o *)0x0) {
    if (*(char *)((long)&(__this_00->fields).Animation + 4) == '\0') {
      return 0;
    }
LAB_03fe6321:
    bVar2 = Characters_Human__CanEmote(__this_00,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseEmoteSpecial$$InSpecial
// il2cpp: bool Characters_BaseEmoteSpecial__InSpecial (Characters_BaseEmoteSpecial_o* __this, const MethodInfo* method);
// 0x3fe6330

bool_conflict
Characters_BaseEmoteSpecial__InSpecial(Characters_BaseEmoteSpecial_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pCVar1 >> 8),(pCVar1->fields).FinishSetup == 8);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


