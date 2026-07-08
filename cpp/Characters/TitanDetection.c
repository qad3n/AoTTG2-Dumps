// Type: Characters.TitanDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/TitanDetection.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Detection/TitanDetection.cs  [CHANGED since prior version]
// --------------------------------

// Characters.TitanDetection$$.ctor
// il2cpp: void Characters_TitanDetection___ctor (Characters_TitanDetection_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x3fa1140

void Characters_TitanDetection___ctor
               (Characters_TitanDetection_o *__this,Characters_BaseCharacter_o *owner,
               MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Characters_BaseDetection___ctor((Characters_AIHumanDetection_o *)__this,owner,1,0,in_R8);
  return;
}


// Characters.TitanDetection$$OnRecalculate
// il2cpp: void Characters_TitanDetection__OnRecalculate (Characters_TitanDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x3fa1150

void Characters_TitanDetection__OnRecalculate
               (Characters_TitanDetection_o *__this,Characters_BaseCharacter_o *character,
               float distance,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  System_Object_array *__this_00;
  float fVar3;
  
  if (DAT_0570402e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    DAT_0570402e = '\x01';
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar2 = character->klass;
    bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->_2).naturalAligment) &&
       ((pCVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseTitan)) {
      fVar3 = (float)(*(code *)pCVar2[1].vtable._45_OnConnectedToMaster.method)
                               (character,pCVar2[1].vtable._46_OnRoomPropertiesUpdate.methodPtr);
      __this_00 = (character->fields).crossfadeCache;
      if (__this_00 != (System_Object_array *)0x0) {
        Characters_TitanColliderToggler__SetNearby
                  ((Characters_TitanColliderToggler_o *)__this_00,(__this->fields).Owner,
                   (uint)(distance < fVar3),(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


