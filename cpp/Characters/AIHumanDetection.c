// Type: Characters.AIHumanDetection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AIHumanDetection.cs
// Prior real C# source: none
// --------------------------------

// Characters.AIHumanDetection$$.ctor
// il2cpp: void Characters_AIHumanDetection___ctor (Characters_AIHumanDetection_o* __this, Characters_BaseCharacter_o* owner, bool enemiesOnly, bool titansOnly, const MethodInfo* method);
// 0x42ad880

void Characters_AIHumanDetection___ctor
               (Characters_AIHumanDetection_o *__this,Characters_BaseCharacter_o *owner,
               bool_conflict enemiesOnly,bool_conflict titansOnly,MethodInfo *method)

{
  Characters_BaseDetection___ctor(__this,owner,enemiesOnly,titansOnly,method);
  return;
}


// Characters.AIHumanDetection$$OnRecalculate
// il2cpp: void Characters_AIHumanDetection__OnRecalculate (Characters_AIHumanDetection_o* __this, Characters_BaseCharacter_o* character, float distance, const MethodInfo* method);
// 0x42ad890

void Characters_AIHumanDetection__OnRecalculate
               (Characters_AIHumanDetection_o *__this,Characters_BaseCharacter_o *character,float distance,
               MethodInfo *method)

{
  byte bVar1;
  System_Object_array *__this_00;
  Characters_BaseCharacter_o *x;
  bool_conflict bVar2;
  Characters_BaseCharacter_o *owner;
  Characters_AIHumanDetection_o *__this_01;
  Characters_AIHumanDetection_o *__this_02;
  MethodInfo *in_R8;
  float fVar3;
  
  __this_01 = __this;
  if (g_data_057add9a == '\0') {
    __this_01 = (Characters_AIHumanDetection_o *)&TypeInfo_BaseTitan;
    il2cpp_runtime_helper_023445d0();
    g_data_057add9a = '\x01';
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
    if ((bVar1 <= (character->klass->_2).naturalAligment) &&
       ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseTitan)) {
      if (character != (Characters_BaseCharacter_o *)0x0) {
        fVar3 = (float)(*(code *)character->klass[1].vtable._45_OnConnectedToMaster.method)(character);
        __this_00 = (character->fields).crossfadeCache;
        __this_01 = (Characters_AIHumanDetection_o *)0x0;
        if (__this_00 != (System_Object_array *)0x0) {
          Characters_TitanColliderToggler__SetNearby
                    ((Characters_TitanColliderToggler_o *)__this_00,(__this->fields).Owner,
                     (uint)(distance < fVar3),(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057add9b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057add9b = '\x01';
      }
      x = (((Characters_BaseDetection_o *)__this_01)->fields).ClosestEnemy;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      owner = (Characters_BaseCharacter_o *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        __this_02 = (Characters_AIHumanDetection_o *)
                    &(((Characters_BaseDetection_o *)__this_01)->fields).ClosestEnemy;
        if (*(Characters_BaseCharacter_o **)__this_02 == (Characters_BaseCharacter_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          Characters_BaseDetection___ctor(__this_02,owner,1,0,in_R8);
          return;
        }
        if (*(char *)&((*(Characters_BaseCharacter_o **)__this_02)->fields).FeedVictimName != '\0') {
          *(Characters_BaseCharacter_o **)__this_02 = (Characters_BaseCharacter_o *)0x0;
          owner = (Characters_BaseCharacter_o *)0x0;
          il2cpp_runtime_helper_022b4080();
        }
      }
      Characters_BaseDetection__OnFixedUpdate((Characters_BaseDetection_o *)__this_01,(MethodInfo *)owner);
      return;
    }
  }
  return;
}


// Characters.AIHumanDetection$$OnFixedUpdate
// il2cpp: void Characters_AIHumanDetection__OnFixedUpdate (Characters_AIHumanDetection_o* __this, const MethodInfo* method);
// 0x42ad950

void Characters_AIHumanDetection__OnFixedUpdate(Characters_AIHumanDetection_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *x;
  bool_conflict bVar1;
  Characters_BaseCharacter_o *owner;
  Characters_AIHumanDetection_o *__this_00;
  MethodInfo *in_R8;
  
  if (g_data_057add9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add9b = '\x01';
  }
  x = (__this->fields).ClosestEnemy;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  owner = (Characters_BaseCharacter_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (Characters_AIHumanDetection_o *)&(__this->fields).ClosestEnemy;
    if (*(Characters_BaseCharacter_o **)__this_00 == (Characters_BaseCharacter_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      Characters_BaseDetection___ctor(__this_00,owner,1,0,in_R8);
      return;
    }
    if (*(char *)&((*(Characters_BaseCharacter_o **)__this_00)->fields).FeedVictimName != '\0') {
      *(Characters_BaseCharacter_o **)__this_00 = (Characters_BaseCharacter_o *)0x0;
      owner = (Characters_BaseCharacter_o *)0x0;
      il2cpp_runtime_helper_022b4080();
    }
  }
  Characters_BaseDetection__OnFixedUpdate((Characters_BaseDetection_o *)__this,(MethodInfo *)owner);
  return;
}


