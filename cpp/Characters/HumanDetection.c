// Type: Characters.HumanDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/HumanDetection.cs
// --------------------------------

// Characters.HumanDetection$$.ctor
// il2cpp: void Characters_HumanDetection___ctor (Characters_HumanDetection_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42ad7d0

void Characters_HumanDetection___ctor
               (Characters_HumanDetection_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Characters_BaseDetection___ctor((Characters_AIHumanDetection_o *)__this,owner,0,1,in_R8);
  return;
}


// Characters.HumanDetection$$OnRecalculate
// il2cpp: void Characters_HumanDetection__OnRecalculate (Characters_HumanDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x42ad7e0

void Characters_HumanDetection__OnRecalculate
               (Characters_HumanDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  System_Object_array *__this_00;
  uint in_ECX;
  bool_conflict enemiesOnly;
  MethodInfo *extraout_RDX;
  Characters_BaseCharacter_o *owner;
  Characters_BaseCharacter_o *__this_01;
  MethodInfo *in_R8;
  float fVar3;
  
  owner = character;
  __this_01 = (Characters_BaseCharacter_o *)__this;
  if (g_data_057add99 == '\0') {
    __this_01 = (Characters_BaseCharacter_o *)&TypeInfo_BaseTitan;
    il2cpp_runtime_helper_023445d0();
    g_data_057add99 = '\x01';
    method = extraout_RDX;
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar2 = character->klass;
    bVar1 = (byte)TypeInfo_BaseTitan[1].fields.FootstepsEnabled;
    in_ECX = (uint)bVar1;
    if (((pCVar2->_2).naturalAligment < bVar1) ||
       (method = (MethodInfo *)(pCVar2->_2).typeHierarchy,
       *(Characters_BaseCharacter_o **)((long)method + (ulong)bVar1 * 8 + -8) != TypeInfo_BaseTitan)) {
      owner = TypeInfo_BaseTitan;
      il2cpp_runtime_helper_022b2fd0(character,TypeInfo_BaseTitan,method);
      __this_01 = character;
    }
    else {
      owner = (Characters_BaseCharacter_o *)pCVar2[1].vtable._46_OnRoomPropertiesUpdate.methodPtr;
      fVar3 = (float)(*(code *)pCVar2[1].vtable._45_OnConnectedToMaster.method)(character);
      __this_00 = (character->fields).crossfadeCache;
      __this_01 = (Characters_BaseCharacter_o *)0x0;
      if (__this_00 != (System_Object_array *)0x0) {
        Characters_TitanColliderToggler__SetNearby
                  ((Characters_TitanColliderToggler_o *)__this_00,(__this->fields).Owner,
                   (uint)(distance < fVar3),(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseDetection___ctor((Characters_AIHumanDetection_o *)__this_01,owner,enemiesOnly,in_ECX,in_R8);
  return;
}


