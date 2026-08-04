// Type: Characters.TitanDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanDetection.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/TitanDetection.cs
// --------------------------------

// Characters.TitanDetection$$.ctor
// il2cpp: void Characters_TitanDetection___ctor (Characters_TitanDetection_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42ad9e0

void Characters_TitanDetection___ctor
               (Characters_TitanDetection_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Characters_BaseDetection___ctor((Characters_AIHumanDetection_o *)__this,owner,1,0,in_R8);
  return;
}


// Characters.TitanDetection$$OnRecalculate
// il2cpp: void Characters_TitanDetection__OnRecalculate (Characters_TitanDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x42ad9f0

void Characters_TitanDetection__OnRecalculate
               (Characters_TitanDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  UnityEngine_GameObject_o *owner;
  Characters_BaseTitan_o *__this_00;
  System_Object_array *__this_01;
  float fVar3;
  undefined1 auVar4 [16];
  
  if (g_data_057add9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    g_data_057add9c = '\x01';
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar2 = character->klass;
    bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->_2).naturalAligment) &&
       ((pCVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseTitan)) {
      fVar3 = (float)(*(code *)pCVar2[1].vtable._45_OnConnectedToMaster.method)(character);
      __this_01 = (character->fields).crossfadeCache;
      if (__this_01 != (System_Object_array *)0x0) {
        Characters_TitanColliderToggler__SetNearby
                  ((Characters_TitanColliderToggler_o *)__this_01,(__this->fields).Owner,
                   (uint)(distance < fVar3),(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057add9d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationHandler);
        g_data_057add9d = '\x01';
      }
      owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      auVar4 = il2cpp_runtime_helper_023052d0(TypeInfo_AnimationHandler);
      __this_00 = auVar4._0_8_;
      Characters_AnimationHandler___ctor((Characters_AnimationHandler_o *)__this_00,owner,auVar4._8_8_);
      __this_01->m_Items[0] = (Il2CppObject *)__this_00;
      il2cpp_runtime_helper_022b4080(__this_01->m_Items,__this_00);
      return;
    }
  }
  return;
}


