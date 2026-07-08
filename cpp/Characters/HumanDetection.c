// Type: Characters.HumanDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanDetection.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Detection/HumanDetection.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanDetection$$.ctor
// il2cpp: void Characters_HumanDetection___ctor (Characters_HumanDetection_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fa0f30

void Characters_HumanDetection___ctor
               (Characters_HumanDetection_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Characters_BaseDetection___ctor((Characters_AIHumanDetection_o *)__this,owner,0,1,in_R8);
  return;
}


// Characters.HumanDetection$$OnRecalculate
// il2cpp: void Characters_HumanDetection__OnRecalculate (Characters_HumanDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x3fa0f40

void Characters_HumanDetection__OnRecalculate
               (Characters_HumanDetection_o *__this,Characters_BaseCharacter_o *character,
               float distance,MethodInfo *method)

{
  Characters_BaseCharacter_c *pCVar1;
  System_Object_array *__this_00;
  MethodInfo *extraout_RDX;
  float fVar2;
  
  if (DAT_0570402b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    DAT_0570402b = '\x01';
    method = extraout_RDX;
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar1 = character->klass;
    if (((pCVar1->_2).naturalAligment < *(byte *)(TypeInfo_BaseTitan + 0x130)) ||
       (method = (MethodInfo *)(pCVar1->_2).typeHierarchy,
       *(long *)((long)method + (ulong)*(byte *)(TypeInfo_BaseTitan + 0x130) * 8 + -8) != TypeInfo_BaseTitan)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(character,TypeInfo_BaseTitan,method);
    }
    fVar2 = (float)(*(code *)pCVar1[1].vtable._45_OnConnectedToMaster.method)
                             (character,pCVar1[1].vtable._46_OnRoomPropertiesUpdate.methodPtr);
    __this_00 = (character->fields).crossfadeCache;
    if (__this_00 != (System_Object_array *)0x0) {
      Characters_TitanColliderToggler__SetNearby
                ((Characters_TitanColliderToggler_o *)__this_00,(__this->fields).Owner,
                 (uint)(distance < fVar2),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


