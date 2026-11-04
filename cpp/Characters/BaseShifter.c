// Type: Characters.BaseShifter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/BaseShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/BaseShifter.cs
// --------------------------------

// Characters.BaseShifter.<WaitAndBecomeHuman>d__42$$.ctor
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__42___ctor (Characters_BaseShifter__WaitAndBecomeHuman_d__42_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseShifter__WaitAndBecomeHuman_d__42___ctor(Characters_BaseShifter__WaitAndBecomeHuman_d__42_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__42$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__42__System_IDisposable_Dispose (Characters_BaseShifter__WaitAndBecomeHuman_d__42_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseShifter__WaitAndBecomeHuman_d__42__System_IDisposable_Dispose(Characters_BaseShifter__WaitAndBecomeHuman_d__42_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__42$$MoveNext
// il2cpp: bool Characters_BaseShifter__WaitAndBecomeHuman_d__42__MoveNext (Characters_BaseShifter__WaitAndBecomeHuman_d__42_o* __this, const MethodInfo* method);
// 0x182179370
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18217960f: mov rdx, qword ptr [rip + 0x1f885a2]  ; "MarkDeadRPC"
// asm:   0x182179616: mov r9, rax
// asm:   0x182179619: mov r8d, 3
// asm:   0x18217961f: mov qword ptr [rsp + 0x20], rsi
// asm:   0x182179624: mov rcx, rbp
// asm:   0x182179627: call 0x181d4d940  ; Photon_Pun_PhotonView__RPC()
// asm:   0x18217962c: mov rax, qword ptr [rbx]
// asm:   0x18217962f: mov rcx, rbx
// asm:   0x182179632: mov rdx, qword ptr [rax + 0x680]
// asm:   0x182179639: call qword ptr [rax + 0x678]  ; vtable slot 84
// asm:   0x18217963f: xor r8d, r8d
// asm:   0x182179642: mov rcx, rbx
// asm:   0x182179645: mov rdx, rax
// asm:   0x182179648: call 0x182f1cef0  ; UnityEngine_MonoBehaviour__StartCoroutine()
// asm:   0x18217964d: mov rcx, qword ptr [rip + 0x1f1d3dc]  ; TypeInfo_UnityEngine_WaitForSeconds
// asm:   0x182179654: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x182179659: movss xmm1, dword ptr [rip + 0x11df6ef]
// asm:   0x182179661: xor r8d, r8d
// asm:   0x182179664: mov rcx, rax
// asm:   0x182179667: mov rbx, rax
// asm:   0x18217966a: call 0x181d89ae0  ; UnityEngine_WaitForSeconds___ctor()
// asm:   0x18217966f: lea rcx, [rdi + 0x18]
// asm:   0x182179673: mov qword ptr [rdi + 0x18], rbx
// asm:   0x182179677: mov rdx, rbx
// asm:   0x18217967a: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18217967f: mov al, 1
// asm:   0x182179681: mov dword ptr [rdi + 0x10], 2
// asm:   0x182179688: jmp 0x182179571

bool Characters_BaseShifter__WaitAndBecomeHuman_d__42__MoveNext
               (Characters_BaseShifter__WaitAndBecomeHuman_d__42_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  Characters_BaseShifter_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar7;
  UnityEngine_Transform_o *pUVar8;
  GameManagers_InGameManager_o *pGVar9;
  Characters_Human_o *__this_01;
  Utility_BaseComponentCache_o *pUVar10;
  Photon_Pun_PhotonView_o *pPVar11;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Quaternion_o *pUVar13;
  System_Collections_IEnumerator_o *pSVar14;
  System_Object_array *pSVar15;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar16;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346d45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"MarkDeadRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"MarkTransformingRPC");
    Il2CppMethodInitialized_184346d45 = '\x01';
  }
  iVar5 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      (__this->fields).__1__state = -1;
      if ((__this_00 != (Characters_BaseShifter_o *)0x0) &&
         (pUVar10 = (__this_00->fields).Cache, pUVar10 != (Utility_BaseComponentCache_o *)0x0)) {
        pPVar11 = (pUVar10->fields).PhotonView;
        pSVar15 = (System_Object_array *)il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_object);
        if (pPVar11 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(pPVar11,"MarkTransformingRPC",3,pSVar15,(MethodInfo *)0x0);
          pUVar10 = (__this_00->fields).Cache;
          if (pUVar10 != (Utility_BaseComponentCache_o *)0x0) {
            pPVar11 = (pUVar10->fields).PhotonView;
            pSVar15 = (System_Object_array *)il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_object);
            if (pPVar11 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(pPVar11,"MarkDeadRPC",3,pSVar15,(MethodInfo *)0x0);
              pSVar14 = (*(__this_00->klass->vtable)._84_WaitAndDie.methodPtr)
                                  (__this_00,(__this_00->klass->vtable)._84_WaitAndDie.method);
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar14,(MethodInfo *)0x0);
              pPVar16 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
              UnityEngine_WaitForSeconds___ctor(pPVar16,2.0,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)pPVar16;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar16);
              (__this->fields).__1__state = 2;
              return true;
            }
          }
        }
      }
    }
    else {
      if (iVar5 != 2) {
        return false;
      }
      (__this->fields).__1__state = -1;
      if (((__this_00 != (Characters_BaseShifter_o *)0x0) &&
          (pCVar7 = (__this_00->fields).BaseTitanCache, pCVar7 != (Characters_BaseTitanComponentCache_o *)0x0)
          ) && (pUVar8 = (pCVar7->fields).Neck, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        pGVar9 = (__this_00->fields)._inGameManager;
        pUVar12 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_48,pUVar8,(MethodInfo *)0x0);
        pCVar7 = (__this_00->fields).BaseTitanCache;
        if ((pCVar7 != (Characters_BaseTitanComponentCache_o *)0x0) &&
           (pUVar8 = (pCVar7->fields).Neck, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
          uVar2._0_4_ = (pUVar12->fields).x;
          uVar2._4_4_ = (pUVar12->fields).y;
          fVar6 = (pUVar12->fields).z;
          pUVar13 = UnityEngine_Transform__get_rotation(&local_38,pUVar8,(MethodInfo *)0x0);
          local_28[0].x = (pUVar13->fields).x;
          local_28[0].y = (pUVar13->fields).y;
          local_28[0].z = (pUVar13->fields).z;
          local_28[0].w = (pUVar13->fields).w;
          pUVar12 = UnityEngine_Quaternion__Internal_ToEulerRad
                              ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                               (MethodInfo *)0x0);
          uVar1 = (pUVar12->fields).x;
          uVar3 = (pUVar12->fields).y;
          local_48.y = (float)uVar3 * 57.29578;
          local_48.x = (float)uVar1 * 57.29578;
          local_48.z = (pUVar12->fields).z * 57.29578;
          pUVar12 = UnityEngine_Quaternion__Internal_MakePositive
                              ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                               (MethodInfo *)0x0);
          if (pGVar9 != (GameManagers_InGameManager_o *)0x0) {
            local_48._0_8_ = uVar2;
            local_48.z = fVar6;
            GameManagers_InGameManager__SpawnPlayerAt
                      (pGVar9,false,(UnityEngine_Vector3_o *)&local_48,(pUVar12->fields).y,(MethodInfo *)0x0);
            pGVar9 = (__this_00->fields)._inGameManager;
            if ((pGVar9 != (GameManagers_InGameManager_o *)0x0) &&
               (__this_01 = (Characters_Human_o *)(pGVar9->fields).CurrentCharacter,
               __this_01 != (Characters_Human_o *)0x0)) {
              bVar4 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
              if ((bVar4 <= (__this_01->klass->_2).typeHierarchyDepth) &&
                 ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar4 - 1] ==
                  (Il2CppClass *)TypeInfo_Characters_Human)) {
                pSVar14 = Characters_Human__WaitAndTransformFromShifter
                                    (__this_01,(__this_00->fields).PreviousHumanGas,
                                     (__this_00->fields).PreviousHumanWeapon,(MethodInfo *)0x0);
                UnityEngine_MonoBehaviour__StartCoroutine_Auto
                          ((UnityEngine_MonoBehaviour_o *)__this_01,pSVar14,(MethodInfo *)0x0);
                return false;
              }
              il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Characters_Human);
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  fVar6 = (__this->fields).time;
  (__this->fields).__1__state = -1;
  pPVar16 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(pPVar16,fVar6,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)pPVar16;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar16);
  (__this->fields).__1__state = 1;
  return true;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__42$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndBecomeHuman_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseShifter__WaitAndBecomeHuman_d__42_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseShifter__WaitAndBecomeHuman_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseShifter__WaitAndBecomeHuman_d__42_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__42$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__42__System_Collections_IEnumerator_Reset (Characters_BaseShifter__WaitAndBecomeHuman_d__42_o* __this, const MethodInfo* method);
// 0x182179700

void Characters_BaseShifter__WaitAndBecomeHuman_d__42__System_Collections_IEnumerator_Reset
               (Characters_BaseShifter__WaitAndBecomeHuman_d__42_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__42_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__42$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndBecomeHuman_d__42__System_Collections_IEnumerator_get_Current (Characters_BaseShifter__WaitAndBecomeHuman_d__42_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseShifter__WaitAndBecomeHuman_d__42__System_Collections_IEnumerator_get_Current(Characters_BaseShifter__WaitAndBecomeHuman_d__42_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitAndDie>d__43$$.ctor
// il2cpp: void Characters_BaseShifter__WaitAndDie_d__43___ctor (Characters_BaseShifter__WaitAndDie_d__43_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseShifter__WaitAndDie_d__43___ctor(Characters_BaseShifter__WaitAndDie_d__43_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseShifter.<WaitAndDie>d__43$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseShifter__WaitAndDie_d__43__System_IDisposable_Dispose (Characters_BaseShifter__WaitAndDie_d__43_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseShifter__WaitAndDie_d__43__System_IDisposable_Dispose(Characters_BaseShifter__WaitAndDie_d__43_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseShifter.<WaitAndDie>d__43$$MoveNext
// il2cpp: bool Characters_BaseShifter__WaitAndDie_d__43__MoveNext (Characters_BaseShifter__WaitAndDie_d__43_o* __this, const MethodInfo* method);
// 0x182179740

bool Characters_BaseShifter__WaitAndDie_d__43__MoveNext
               (Characters_BaseShifter__WaitAndDie_d__43_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  Characters_BaseShifter_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar7;
  UnityEngine_Transform_o *pUVar8;
  Characters_BaseTitanAnimations_o *pCVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Quaternion_o *pUVar16;
  UnityEngine_GameObject_o *targetGo;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar17;
  System_String_o *pSVar18;
  float fVar19;
  UnityEngine_Vector3_o local_58;
  UnityEngine_Quaternion_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184346d46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346d46 = '\x01';
  }
  iVar5 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar5 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this_00 == (Characters_BaseShifter_o *)0x0) ||
       (pCVar9 = (__this_00->fields).BaseTitanAnimations, pCVar9 == (Characters_BaseTitanAnimations_o *)0x0))
    {
label_182179af0:
      ThrowNullReferenceException();
    }
    pSVar18 = (*(pCVar9->klass->vtable)._12_get_Die.methodPtr)
                        (pCVar9,(pCVar9->klass->vtable)._12_get_Die.method);
    Characters_BaseTitan__StateActionWithTime
              ((Characters_BaseTitan_o *)__this_00,0xf,pSVar18,0.0,0.1,true,0.0,(MethodInfo *)0x0);
    fVar6 = (__this_00->fields).DeathAnimationLength;
    pPVar17 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pPVar17,fVar6,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pPVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar17);
    bVar14 = true;
    (__this->fields).__1__state = 1;
  }
  else if (iVar5 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    if (((__this_00 == (Characters_BaseShifter_o *)0x0) ||
        (pCVar7 = (__this_00->fields).BaseTitanCache, pCVar7 == (Characters_BaseTitanComponentCache_o *)0x0))
       || (pUVar8 = (pCVar7->fields).Hip, pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_182179af0;
    pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie1;
    pUVar15 = UnityEngine_Transform__get_position(&local_58,pUVar8,(MethodInfo *)0x0);
    uVar2 = (pUVar15->fields).x;
    uVar4 = (pUVar15->fields).y;
    fVar6 = (pUVar15->fields).z;
    local_58.fields.x = -1.5707964;
    local_58.fields.y = 0.0;
    local_58.fields.z = 0.0;
    pUVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)local_48,&local_58,(MethodInfo *)0x0);
    uVar12._0_4_ = (pUVar16->fields).x;
    uVar12._4_4_ = (pUVar16->fields).y;
    uVar13._0_4_ = (pUVar16->fields).z;
    uVar13._4_4_ = (pUVar16->fields).w;
    fVar19 = Characters_BaseTitan__GetSpawnEffectSize((Characters_BaseTitan_o *)__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    local_58.fields.x = (float)uVar2;
    local_58.fields.y = (float)uVar4;
    local_58.fields.z = fVar6;
    local_48[0]._0_8_ = uVar12;
    local_48[0]._8_8_ = uVar13;
    Effects_EffectSpawner__Spawn
              (pSVar18,&local_58,(UnityEngine_Quaternion_o *)local_48,fVar19,false,(System_Object_array *)0x0,
               (MethodInfo *)0x0);
    pPVar17 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pPVar17,3.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pPVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar17);
    bVar14 = true;
    (__this->fields).__1__state = 2;
  }
  else {
    if (iVar5 == 2) {
      (__this->fields).__1__state = -1;
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      if (((__this_00 == (Characters_BaseShifter_o *)0x0) ||
          (pCVar7 = (__this_00->fields).BaseTitanCache, pCVar7 == (Characters_BaseTitanComponentCache_o *)0x0)
          ) || (pUVar8 = (pCVar7->fields).Hip, pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_182179af0;
      pSVar18 = TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie2;
      pUVar15 = UnityEngine_Transform__get_position(&local_58,pUVar8,(MethodInfo *)0x0);
      uVar1 = (pUVar15->fields).x;
      uVar3 = (pUVar15->fields).y;
      fVar6 = (pUVar15->fields).z;
      local_58.fields.x = -1.5707964;
      local_58.fields.y = 0.0;
      local_58.fields.z = 0.0;
      pUVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Quaternion_o *)local_48,&local_58,(MethodInfo *)0x0);
      uVar10._0_4_ = (pUVar16->fields).x;
      uVar10._4_4_ = (pUVar16->fields).y;
      uVar11._0_4_ = (pUVar16->fields).z;
      uVar11._4_4_ = (pUVar16->fields).w;
      fVar19 = Characters_BaseTitan__GetSpawnEffectSize((Characters_BaseTitan_o *)__this_00,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      local_58.fields.x = (float)uVar1;
      local_58.fields.y = (float)uVar3;
      local_58.fields.z = fVar6;
      local_48[0]._0_8_ = uVar10;
      local_48[0]._8_8_ = uVar11;
      Effects_EffectSpawner__Spawn
                (pSVar18,&local_58,(UnityEngine_Quaternion_o *)local_48,fVar19,false,
                 (System_Object_array *)0x0,(MethodInfo *)0x0);
      targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      Photon_Pun_PhotonNetwork__Destroy_1d35aa0(targetGo,(MethodInfo *)0x0);
    }
    bVar14 = false;
  }
  return bVar14;
}


// Characters.BaseShifter.<WaitAndDie>d__43$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndDie_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseShifter__WaitAndDie_d__43_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseShifter__WaitAndDie_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseShifter__WaitAndDie_d__43_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitAndDie>d__43$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseShifter__WaitAndDie_d__43__System_Collections_IEnumerator_Reset (Characters_BaseShifter__WaitAndDie_d__43_o* __this, const MethodInfo* method);
// 0x182179b00

void Characters_BaseShifter__WaitAndDie_d__43__System_Collections_IEnumerator_Reset
               (Characters_BaseShifter__WaitAndDie_d__43_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Characters_BaseShifter_WaitAndDie_d__43_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseShifter.<WaitAndDie>d__43$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndDie_d__43__System_Collections_IEnumerator_get_Current (Characters_BaseShifter__WaitAndDie_d__43_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseShifter__WaitAndDie_d__43__System_Collections_IEnumerator_get_Current(Characters_BaseShifter__WaitAndDie_d__43_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter$$get_DefaultMaxHealth
// il2cpp: int32_t Characters_BaseShifter__get_DefaultMaxHealth (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168bb0

int32_t
Characters_BaseShifter__get_DefaultMaxHealth(Characters_BaseShifter_o* __this, MethodInfo* method)

{
  return 1000;
}


// Characters.BaseShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultRunSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x181da8af0

float
Characters_BaseShifter__get_DefaultRunSpeed(Characters_BaseShifter_o* __this, MethodInfo* method)

{
  return 100.0;
}


// Characters.BaseShifter$$get_DefaultWalkSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultWalkSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168bc0

float
Characters_BaseShifter__get_DefaultWalkSpeed(Characters_BaseShifter_o* __this, MethodInfo* method)

{
  return 20.0;
}


// Characters.BaseShifter$$get_DefaultRotateSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultRotateSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x1820b9980

float
Characters_BaseShifter__get_DefaultRotateSpeed(Characters_BaseShifter_o* __this, MethodInfo* method)

{
  return 10.0;
}


// Characters.BaseShifter$$get_DefaultJumpForce
// il2cpp: float Characters_BaseShifter__get_DefaultJumpForce (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x18210fba0

float Characters_BaseShifter__get_DefaultJumpForce(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 200.0;
}


// Characters.BaseShifter$$get_SizeMultiplier
// il2cpp: float Characters_BaseShifter__get_SizeMultiplier (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182161410

float
Characters_BaseShifter__get_SizeMultiplier(Characters_BaseShifter_o* __this, MethodInfo* method)

{
  return 3.0;
}


// Characters.BaseShifter$$get_DefaultCrippleTime
// il2cpp: float Characters_BaseShifter__get_DefaultCrippleTime (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168ba0

float
Characters_BaseShifter__get_DefaultCrippleTime(Characters_BaseShifter_o* __this, MethodInfo* method)

{
  return 3.5;
}


// Characters.BaseShifter$$get_LaunchForce
// il2cpp: float Characters_BaseShifter__get_LaunchForce (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168bd0

float Characters_BaseShifter__get_LaunchForce(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._128_get_PushForce.methodPtr)
                    (__this,(__this->klass->vtable)._128_get_PushForce.method);
  return fVar1;
}


// Characters.BaseShifter$$get_LaunchTime
// il2cpp: float Characters_BaseShifter__get_LaunchTime (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168bf0

float Characters_BaseShifter__get_LaunchTime(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._129_get_PushTime.methodPtr)
                    (__this,(__this->klass->vtable)._129_get_PushTime.method);
  return fVar1;
}


// Characters.BaseShifter$$get_DisableCooldown
// il2cpp: float Characters_BaseShifter__get_DisableCooldown (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x1818b56e0

float
Characters_BaseShifter__get_DisableCooldown(Characters_BaseShifter_o* __this, MethodInfo* method)

{
  return 5.0;
}


// Characters.BaseShifter$$get_SpecialIcon
// il2cpp: System_String_o* Characters_BaseShifter__get_SpecialIcon (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168cd0

System_String_o * Characters_BaseShifter__get_SpecialIcon(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return (__this->fields)._SpecialIcon_k__BackingField;
}


// Characters.BaseShifter$$set_SpecialIcon
// il2cpp: void Characters_BaseShifter__set_SpecialIcon (Characters_BaseShifter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182168ce0

void Characters_BaseShifter__set_SpecialIcon
               (Characters_BaseShifter_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._SpecialIcon_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SpecialIcon_k__BackingField,value);
  return;
}


// Characters.BaseShifter$$get_LiveTimeRatio
// il2cpp: float Characters_BaseShifter__get_LiveTimeRatio (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168c10

float Characters_BaseShifter__get_LiveTimeRatio(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((__this->fields)._liveTime <= 0.0) {
    return -1.0;
  }
  fVar2 = (__this->fields)._liveTimeEnd;
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  fVar2 = (fVar2 - fVar1) / (__this->fields)._liveTime;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (1.0 < fVar2) {
    return 1.0;
  }
  return fVar2;
}


// Characters.BaseShifter$$Start
// il2cpp: void Characters_BaseShifter__Start (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168640

void Characters_BaseShifter__Start(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float scale;
  undefined8 uVar1;
  float fVar2;
  GameManagers_InGameManager_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  Utility_BaseComponentCache_o *pUVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  Characters_BaseTitanAnimations_o *pCVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  UnityEngine_Vector3_o *pUVar11;
  System_Object_array *settings;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  UnityEngine_GameObject_o *__this_02;
  Characters_ShifterGrowthEffect_o *__this_03;
  int32_t local_res8 [2];
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Quaternion_Fields local_58 [4];
  
  if (Il2CppMethodInitialized_184346d37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ShifterGrowthEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346d37 = '\x01';
  }
  __this_00 = (__this->fields)._inGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_1821689e3;
  GameManagers_InGameManager__RegisterCharacter
            (__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  Characters_BaseTitan__Start((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  bVar10 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (bVar10) {
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pCVar3 = (__this->fields).BaseTitanCache;
    if ((pCVar3 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (__this_01 = (pCVar3->fields).Neck, __this_01 == (UnityEngine_Transform_o *)0x0)) {
label_1821689ff:
      ThrowNullReferenceException();
    }
    pSVar14 = TypeInfo_Effects_EffectPrefabs->static_fields->ShifterThunder;
    pUVar11 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_68,__this_01,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar11->fields).x;
    uVar1._4_4_ = (pUVar11->fields).y;
    fVar2 = (pUVar11->fields).z;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    scale = (__this->fields).Size;
    pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
    uVar8._0_4_ = (pUVar4->identityQuaternion).fields.x;
    uVar8._4_4_ = (pUVar4->identityQuaternion).fields.y;
    uVar9._0_4_ = (pUVar4->identityQuaternion).fields.z;
    uVar9._4_4_ = (pUVar4->identityQuaternion).fields.w;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    pUVar5 = (__this->fields).Cache;
    if ((pUVar5 == (Utility_BaseComponentCache_o *)0x0) ||
       (pPVar6 = (pUVar5->fields).PhotonView, pPVar6 == (Photon_Pun_PhotonView_o *)0x0)) goto label_1821689ff;
    local_res8[0] = (pPVar6->fields).viewIdField;
    pIVar12 = il2cpp_value_box(g_data_184354e08,local_res8);
    if (settings == (System_Object_array *)0x0) goto label_1821689ff;
    if (pIVar12 != (Il2CppObject *)0x0) {
      pIVar13 = il2cpp_vm_Object_IsInst(pIVar12,(((settings->obj).klass)->_1).element_class);
      if (pIVar13 == (Il2CppObject *)0x0) {
        pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
      }
    }
    if ((int)settings->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    settings->m_Items[0] = pIVar12;
    Il2CppCodeGenWriteBarrier(settings->m_Items,pIVar12);
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    local_68._0_8_ = uVar1;
    local_68.z = fVar2;
    local_58[0]._0_8_ = uVar8;
    local_58[0]._8_8_ = uVar9;
    Effects_EffectSpawner__Spawn
              (pSVar14,(UnityEngine_Vector3_o *)&local_68,(UnityEngine_Quaternion_o *)local_58,scale,true,
               settings,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_ShifterSounds->static_fields->Thunder,
               (MethodInfo *)0x0);
    Characters_BaseShifter__LoadSkin(__this,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._107_CheckGround.methodPtr)
              (__this,(__this->klass->vtable)._107_CheckGround.method);
    if ((__this->fields).Grounded == false) {
      pCVar7 = (__this->fields).BaseTitanAnimations;
      if (pCVar7 == (Characters_BaseTitanAnimations_o *)0x0) goto label_1821689e3;
      pSVar14 = (*(pCVar7->klass->vtable)._8_get_Jump.methodPtr)
                          (pCVar7,(pCVar7->klass->vtable)._8_get_Jump.method);
      bVar10 = System_String__op_Inequality(pSVar14,"",(MethodInfo *)0x0);
      if (bVar10) {
        pCVar7 = (__this->fields).BaseTitanAnimations;
        if (pCVar7 == (Characters_BaseTitanAnimations_o *)0x0) goto label_1821689e3;
        pSVar14 = (*(pCVar7->klass->vtable)._8_get_Jump.methodPtr)
                            (pCVar7,(pCVar7->klass->vtable)._8_get_Jump.method);
        Characters_BaseTitan__StateActionWithTime
                  ((Characters_BaseTitan_o *)__this,6,pSVar14,0.2,0.1,true,0.0,(MethodInfo *)0x0);
      }
    }
  }
  __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    __this_03 = UnityEngine_GameObject__AddComponent_object_
                          (__this_02,
                           (MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_ShifterGrowthEffect);
    if (__this_03 != (Characters_ShifterGrowthEffect_o *)0x0) {
      Characters_ShifterGrowthEffect__Play(__this_03,__this,(MethodInfo *)0x0);
      return;
    }
  }
label_1821689e3:
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$Kick
// il2cpp: void Characters_BaseShifter__Kick (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182167bb0

void Characters_BaseShifter__Kick(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346d38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    Il2CppMethodInitialized_184346d38 = '\x01';
  }
  (*(__this->klass->vtable)._150_Attack.methodPtr)
            (__this,"AttackKick",(__this->klass->vtable)._150_Attack.method);
  return;
}


// Characters.BaseShifter$$get_MeleeHitType
// il2cpp: System_String_o* Characters_BaseShifter__get_MeleeHitType (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168ca0

System_String_o *
Characters_BaseShifter__get_MeleeHitType(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346d39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_184346d39 = '\x01';
  }
  return "Shifter";
}


// Characters.BaseShifter$$GetFinisherReaction
// il2cpp: System_String_o* Characters_BaseShifter__GetFinisherReaction (Characters_BaseShifter_o* __this, bool kick, bool smallVictim, bool headHit, const MethodInfo* method);
// 0x182167290

System_String_o *
Characters_BaseShifter__GetFinisherReaction
          (Characters_BaseShifter_o *__this,bool kick,bool smallVictim,bool headHit,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346d3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Finisher");
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    il2cpp_codegen_initialize_runtime_metadata(&"Graze");
    Il2CppMethodInitialized_184346d3a = '\x01';
  }
  if (!kick) {
    pSVar1 = "Knockback";
    if (headHit) {
      pSVar1 = "Finisher";
    }
    return pSVar1;
  }
  pSVar1 = "Graze";
  if (smallVictim) {
    pSVar1 = "Knockback";
  }
  return pSVar1;
}


// Characters.BaseShifter$$MarkTransformingRPC
// il2cpp: void Characters_BaseShifter__MarkTransformingRPC (Characters_BaseShifter_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182168280

void Characters_BaseShifter__MarkTransformingRPC
               (Characters_BaseShifter_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
      (__this->fields).TransformingToHuman = true;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$Init
// il2cpp: void Characters_BaseShifter__Init (Characters_BaseShifter_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, float liveTime, const MethodInfo* method);
// 0x1821678d0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821679ab: mov rdx, qword ptr [rip + 0x1f450b6]  ; MethodInfo_UnityEngine_GameObject_AddComponent_ErenShifterPlayerController
// asm:   0x1821679b2: jmp 0x1821679f6
// asm:   0x1821679ef: mov rdx, qword ptr [rip + 0x1f4005a]  ; MethodInfo_UnityEngine_GameObject_AddComponent_AnnieShifterPlayerController
// asm:   0x182167adf: mov rdx, qword ptr [rip + 0x1f4e97a]  ; MethodInfo_UnityEngine_GameObject_AddComponent_WallColossalAIController
// asm:   0x182167ae6: jmp 0x182167b02
// asm:   0x182167afb: mov rdx, qword ptr [rip + 0x1f42e2e]  ; MethodInfo_UnityEngine_GameObject_AddComponent_BaseTitanAIController

void Characters_BaseShifter__Init
               (Characters_BaseShifter_o *__this,bool ai,System_String_o *team,
               SimpleJSONFixed_JSONNode_o *data,float liveTime,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseShifter_c *pCVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  MethodInfo *pMVar4;
  UnityEngine_GameObject_o *pUVar5;
  Characters_BaseShifter__WaitAndBecomeHuman_d__42_o *routine;
  Il2CppObject *pIVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_String_o *value;
  bool bVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_184346d3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnnieShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ErenShifter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AnnieShifterPlayerController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ErenShifterPlayerController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_WallColossalAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_184346d3b = '\x01';
  }
  if (!ai) {
    if (__this != (Characters_BaseShifter_o *)0x0) {
      pCVar2 = __this->klass;
      bVar1 = (TypeInfo_Characters_ErenShifter->_2).typeHierarchyDepth;
      if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_ErenShifter))
      {
        bVar1 = (TypeInfo_Characters_AnnieShifter->_2).typeHierarchyDepth;
        if (((pCVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_AnnieShifter)) goto label_1821679fe;
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_UnityEngine_GameObject_AddComponent_AnnieShifterPlayerController;
      }
      else {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_UnityEngine_GameObject_AddComponent_ErenShifterPlayerController;
      }
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_182167b9c;
      UnityEngine_GameObject__AddComponent_object_(pUVar5,(MethodInfo_6F4D60 *)pMVar4);
    }
label_1821679fe:
    if (0.0 < liveTime) {
      (__this->fields)._liveTime = liveTime;
      fVar9 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      bVar8 = Il2CppMethodInitialized_184346d3c == '\0';
      (__this->fields)._liveTimeEnd = fVar9 + liveTime;
      if (bVar8) {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__42);
        Il2CppMethodInitialized_184346d3c = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__42);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      (routine->fields).time = liveTime;
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
    }
    goto label_182167b70;
  }
  if (__this == (Characters_BaseShifter_o *)0x0) {
label_182167ae8:
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_UnityEngine_GameObject_AddComponent_BaseTitanAIController;
  }
  else {
    bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) goto label_182167ae8;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_UnityEngine_GameObject_AddComponent_WallColossalAIController;
  }
  if ((((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
       (pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,(MethodInfo_6F4D60 *)pMVar4),
       pIVar6 == (Il2CppObject *)0x0)) ||
      ((*pIVar6->klass->vtable[0xb].methodPtr)(pIVar6,data,pIVar6->klass->vtable[0xb].method),
      data == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
     (pSVar7 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"Name"),
     pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0)) {
label_182167b9c:
    ThrowNullReferenceException();
  }
  pSVar3 = pSVar7->klass;
  value = (System_String_o *)
          (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                    (pSVar7,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method,
                     (MethodInfo *)pSVar3);
  Characters_BaseCharacter__set_Name((Characters_BaseCharacter_o *)__this,value,(MethodInfo *)0x0);
label_182167b70:
  Characters_BaseTitan__Init((Characters_BaseTitan_o *)__this,ai,team,data,(MethodInfo *)0x0);
  return;
}


// Characters.BaseShifter$$WaitAndBecomeHuman
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseShifter__WaitAndBecomeHuman (Characters_BaseShifter_o* __this, float time, const MethodInfo* method);
// 0x182168ab0

System_Collections_IEnumerator_o *
Characters_BaseShifter__WaitAndBecomeHuman(Characters_BaseShifter_o *__this,float time,MethodInfo *method)

{
  Characters_BaseShifter__WaitAndBecomeHuman_d__42_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__42);
    Il2CppMethodInitialized_184346d3c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__42);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseShifter$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseShifter__WaitAndDie (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168b30

System_Collections_IEnumerator_o *
Characters_BaseShifter__WaitAndDie(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  Characters_BaseShifter__WaitAndDie_d__43_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter_WaitAndDie_d__43);
    Il2CppMethodInitialized_184346d3d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseShifter_WaitAndDie_d__43);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseShifter$$Awake
// il2cpp: void Characters_BaseShifter__Awake (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182167230

void Characters_BaseShifter__Awake(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_o *value;
  
  Characters_BaseTitan__Awake((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  value = (*(__this->klass->vtable)._205_CreateCustomSkinLoader.methodPtr)
                    (__this,(__this->klass->vtable)._205_CreateCustomSkinLoader.method);
  (__this->fields)._customSkinLoader = (CustomSkins_BaseCustomSkinLoader_o *)value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customSkinLoader,value);
  return;
}


// Characters.BaseShifter$$GetHitRPC
// il2cpp: void Characters_BaseShifter__GetHitRPC (Characters_BaseShifter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x182167330
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18216746d: jmp 0x182167471
// asm:   0x18216746f: mov ebp, edi
// asm:   0x182167837: mov rax, qword ptr [rsp + 0xc8]
// asm:   0x18216783f: mov r9d, ebp
// asm:   0x182167842: mov qword ptr [rsp + 0x30], 0
// asm:   0x18216784b: mov r8, r13
// asm:   0x18216784e: mov qword ptr [rsp + 0x28], rax
// asm:   0x182167853: mov edx, r12d
// asm:   0x182167856: mov rcx, rbx
// asm:   0x182167859: mov qword ptr [rsp + 0x20], rsi
// asm:   0x18216785e: call 0x18217d070  ; Characters_BaseTitan__GetMeleeHit()
// asm:   0x182167863: jmp 0x182167518
// asm:   0x182167868: mov rax, qword ptr [rsp + 0xc8]
// asm:   0x182167870: mov r9d, edi
// asm:   0x182167873: mov qword ptr [rsp + 0x30], 0
// asm:   0x18216787c: mov r8, r13
// asm:   0x18216787f: mov qword ptr [rsp + 0x28], rax
// asm:   0x182167884: mov edx, r12d
// asm:   0x182167887: mov rcx, rbx
// asm:   0x18216788a: mov qword ptr [rsp + 0x20], rsi
// asm:   0x18216788f: call 0x18210ae70  ; Characters_BaseCharacter__GetHitRPC()
// asm:   0x182167894: jmp 0x182167530

void Characters_BaseShifter__GetHitRPC
               (Characters_BaseShifter_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Characters_BaseTitanComponentCache_o *pCVar5;
  UnityEngine_Object_o *pUVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  bool bVar10;
  System_String_o *pSVar11;
  Characters_BaseCharacter_o *x;
  UnityEngine_Vector3_o *pUVar12;
  int32_t damage_00;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o local_58 [5];
  
  if (Il2CppMethodInitialized_184346d3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Rock");
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBall");
    Il2CppMethodInitialized_184346d3e = '\x01';
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  bVar10 = System_String__op_Equality(type,"CannonBall",(MethodInfo *)0x0);
  if ((bVar10) || (bVar10 = System_String__op_Equality(type,"Rock",(MethodInfo *)0x0), bVar10))
  {
    Characters_BaseCharacter__GetHitRPC
              ((Characters_BaseCharacter_o *)__this,viewId,name,damage,type,collider,(MethodInfo *)0x0);
    return;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).TitanArmorEnabled, pSVar3 == (Settings_BoolSetting_o *)0x0))
  goto label_182167899;
  damage_00 = damage;
  if ((pSVar3->fields)._value != false) {
    pSVar4 = (pSVar2->fields).TitanArmor;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_182167899;
    damage_00 = 0;
    if ((pSVar4->fields)._value <= damage) {
      damage_00 = damage;
    }
  }
  bVar10 = Characters_BaseTitan__IsMeleeHitType(type,(MethodInfo *)0x0);
  if (bVar10) {
    fVar13 = Characters_BaseTitan__GetMeleeStunTime((Characters_BaseTitan_o *)__this,type,(MethodInfo *)0x0);
    bVar10 = Characters_BaseTitan__IsComboStunType(type,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._155_Stun.methodPtr)
              (__this,fVar13,bVar10,(__this->klass->vtable)._155_Stun.method);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    x = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar10) || ((__this->fields).EnableAI == false)) {
label_182167837:
      Characters_BaseTitan__GetMeleeHit
                ((Characters_BaseTitan_o *)__this,viewId,name,damage_00,type,collider,(MethodInfo *)0x0);
      return;
    }
    if ((x != (Characters_BaseCharacter_o *)0x0) &&
       ((pUVar7 = (x->fields).Cache, pUVar7 != (Utility_BaseComponentCache_o *)0x0 &&
        (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)))) {
      pUVar12 = UnityEngine_Transform__get_position(local_58,pUVar8,(MethodInfo *)0x0);
      pUVar7 = (__this->fields).Cache;
      if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        fVar13 = (pUVar12->fields).x;
        fVar15 = (pUVar12->fields).z;
        pUVar12 = UnityEngine_Transform__get_position(local_58,pUVar8,(MethodInfo *)0x0);
        pUVar7 = (__this->fields).Cache;
        fVar13 = fVar13 - (pUVar12->fields).x;
        fVar15 = fVar15 - (pUVar12->fields).z;
        local_58[0].fields.y = 0.0;
        local_58[0].fields.x = fVar13;
        local_58[0].fields.z = fVar15;
        if (pUVar7 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar8 = (pUVar7->fields).Transform;
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar14 = (float)il2cpp_runtime_helper_180546a40(local_58,0);
          if (fVar14 <= 1e-05) {
            pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar13 = (pUVar9->zeroVector).fields.x;
            fVar16 = (pUVar9->zeroVector).fields.y;
            fVar15 = (pUVar9->zeroVector).fields.z;
          }
          else {
            fVar13 = fVar13 / fVar14;
            fVar16 = 0.0 / fVar14;
            fVar15 = fVar15 / fVar14;
          }
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            local_58[0].fields.x = fVar13;
            local_58[0].fields.y = fVar16;
            local_58[0].fields.z = fVar15;
            UnityEngine_Transform__set_forward(pUVar8,local_58,(MethodInfo *)0x0);
            goto label_182167837;
          }
        }
      }
    }
    goto label_182167899;
  }
  pCVar5 = (__this->fields).BaseTitanCache;
  if (pCVar5 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_182167899;
  pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).EyesHurtbox;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    pCVar5 = (__this->fields).BaseTitanCache;
    if ((pCVar5 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).EyesHurtbox, pUVar6 == (UnityEngine_Object_o *)0x0))
    goto label_182167899;
    pSVar11 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
    bVar10 = System_String__op_Equality(collider,pSVar11,(MethodInfo *)0x0);
    if (bVar10) {
      (*(__this->klass->vtable)._168_Blind.methodPtr)(__this,(__this->klass->vtable)._168_Blind.method);
      return;
    }
  }
  pCVar5 = (__this->fields).BaseTitanCache;
  if (pCVar5 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_182167899;
  pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).LegLHurtbox;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    pCVar5 = (__this->fields).BaseTitanCache;
    if ((pCVar5 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).LegLHurtbox, pUVar6 == (UnityEngine_Object_o *)0x0))
    goto label_182167899;
    pSVar11 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
    bVar10 = System_String__op_Equality(collider,pSVar11,(MethodInfo *)0x0);
    if (!bVar10) {
      pCVar5 = (__this->fields).BaseTitanCache;
      if ((pCVar5 == (Characters_BaseTitanComponentCache_o *)0x0) ||
         (pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).LegRHurtbox, pUVar6 == (UnityEngine_Object_o *)0x0
         )) goto label_182167899;
      pSVar11 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
      bVar10 = System_String__op_Equality(collider,pSVar11,(MethodInfo *)0x0);
      if (!bVar10) goto label_18216762b;
    }
    (*(__this->klass->vtable)._169_Cripple.methodPtr)(__this,0.0,(__this->klass->vtable)._169_Cripple.method);
  }
  else {
label_18216762b:
    pCVar5 = (__this->fields).BaseTitanCache;
    if ((pCVar5 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).NapeHurtbox, pUVar6 == (UnityEngine_Object_o *)0x0))
    {
label_182167899:
      ThrowNullReferenceException();
    }
    pSVar11 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
    bVar10 = System_String__op_Equality(collider,pSVar11,(MethodInfo *)0x0);
    if (bVar10) {
      Characters_BaseCharacter__GetHitRPC
                ((Characters_BaseCharacter_o *)__this,viewId,name,damage_00,type,collider,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.BaseShifter$$OnHit
// il2cpp: void Characters_BaseShifter__OnHit (Characters_BaseShifter_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, const MethodInfo* method);
// 0x1821682c0

void Characters_BaseShifter__OnHit
               (Characters_BaseShifter_o *__this,Characters_BaseHitbox_o *hitbox,Il2CppObject *victim,
               UnityEngine_Collider_o *collider,System_String_o *type,bool firstHit,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  System_String_o *name;
  UI_InGameMenu_o *__this_00;
  bool bVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar4;
  uint score;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38;
  
  if (Il2CppMethodInitialized_184346d3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_184346d3f = '\x01';
  }
  score = 100;
  if ((__this->fields).CustomDamageEnabled != false) {
    score = (__this->fields).CustomDamage;
  }
  if (victim != (Il2CppObject *)0x0) {
    pIVar2 = victim->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionHandler->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionHandler)) {
      if (hitbox != (Characters_BaseHitbox_o *)0x0) {
        name = (__this->fields).RichTextName;
        __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          pUVar4 = UnityEngine_Transform__get_position(&local_38,__this_01,(MethodInfo *)0x0);
          pIVar2 = victim->klass;
          bVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionHandler->_2).typeHierarchyDepth;
          if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionHandler)) {
            il2cpp_codegen_raise_invalid_cast_exception
                      (victim,TypeInfo_CustomLogic_CustomLogicCollisionHandler);
          }
          local_48.x = (pUVar4->fields).x;
          local_48.y = (pUVar4->fields).y;
          local_48.z = (pUVar4->fields).z;
          bVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionHandler->_2).typeHierarchyDepth;
          if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
             ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionHandler)) {
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      ((CustomLogic_CustomLogicCollisionHandler_o *)victim,
                       (Characters_BaseCharacter_o *)__this,name,score,type,(UnityEngine_Vector3_o *)&local_48
                       ,(MethodInfo *)0x0);
            return;
          }
          il2cpp_codegen_raise_invalid_cast_exception(victim,TypeInfo_CustomLogic_CustomLogicCollisionHandler)
          ;
        }
      }
      goto label_1821685ff;
    }
    bVar1 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseCharacter))
    {
      il2cpp_codegen_raise_invalid_cast_exception(victim);
    }
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
        Characters_BaseTitan__OnHitTitan
                  ((Characters_BaseTitan_o *)__this,hitbox,(Characters_BaseTitan_o *)victim,collider,score,
                   firstHit,(MethodInfo *)0x0);
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(victim);
    }
  }
  if (!firstHit) {
    return;
  }
  if (victim != (Il2CppObject *)0x0) {
    if (*(char *)&victim[7].klass != '\0') {
      return;
    }
    bVar3 = Characters_BaseCharacter__IsMainCharacter((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_1821685ff;
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
      }
      UI_InGameMenu__ShowKillScore(__this_00,score,false,(MethodInfo *)0x0);
    }
    if (collider != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
      (*victim->klass->vtable[0x5f].methodPtr)(victim,__this,(ulonglong)score,"Shifter");
      return;
    }
  }
label_1821685ff:
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$Update
// il2cpp: void Characters_BaseShifter__Update (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168a10

void Characters_BaseShifter__Update(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346d40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    Il2CppMethodInitialized_184346d40 = '\x01';
  }
  Characters_BaseTitan__Update((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (((bVar1) && ((__this->fields)._needRoar != false)) && ((__this->fields).Grounded != false)) {
    bVar1 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                      (__this,(__this->klass->vtable)._145_CanAction.method);
    if (bVar1) {
      (*(__this->klass->vtable)._80_Emote.methodPtr)
                (__this,(System_Type_o *)"Roar",(__this->klass->vtable)._80_Emote.method);
      (__this->fields)._needRoar = false;
    }
  }
  return;
}


// Characters.BaseShifter$$CanEmote
// il2cpp: bool Characters_BaseShifter__CanEmote (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182167270

bool Characters_BaseShifter__CanEmote(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields)._forceEmote != false) {
    return true;
  }
  bVar1 = Characters_BaseTitan__CanEmote((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseShifter$$Land
// il2cpp: void Characters_BaseShifter__Land (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182167c00

void Characters_BaseShifter__Land(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Characters_BaseTitanAnimations_o *pCVar9;
  Characters_BaseShifter_c *pCVar10;
  Utility_BaseComponentCache_o *pUVar11;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  System_String_o *pSVar15;
  UnityEngine_Vector3_o *pUVar16;
  UnityEngine_Quaternion_o *pUVar17;
  float fVar18;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Quaternion_Fields local_88 [8];
  
  if (Il2CppMethodInitialized_184346d41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    Il2CppMethodInitialized_184346d41 = '\x01';
  }
  if ((__this->fields)._needRoar == false) {
    pCVar9 = (__this->fields).BaseTitanAnimations;
    if (pCVar9 == (Characters_BaseTitanAnimations_o *)0x0) goto label_182167e9f;
    pSVar15 = (*(pCVar9->klass->vtable)._10_get_Land.methodPtr)
                        (pCVar9,(pCVar9->klass->vtable)._10_get_Land.method);
    Characters_BaseTitan__StateAction((Characters_BaseTitan_o *)__this,9,pSVar15,0.1,true,(MethodInfo *)0x0);
  }
  else {
    pCVar10 = __this->klass;
    (__this->fields)._forceEmote = true;
    (*(pCVar10->vtable)._80_Emote.methodPtr)
              (__this,(System_Type_o *)"Roar",(pCVar10->vtable)._80_Emote.method);
    (__this->fields)._forceEmote = false;
    (__this->fields)._needRoar = false;
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  pUVar11 = (__this->fields).Cache;
  if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar11->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pSVar15 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
    pUVar16 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_98,__this_00,(MethodInfo *)0x0);
    uVar5 = (pUVar16->fields).x;
    uVar7 = (pUVar16->fields).y;
    fVar1 = (pUVar16->fields).z;
    if (Il2CppMethodInitialized_18434494b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18434494b = '\x01';
    }
    fVar2 = (__this->fields)._currentGroundDistance;
    local_98.x = 4.712389;
    local_98.y = 0.0;
    local_98.z = 0.0;
    pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar3 = (pUVar12->downVector).fields.z;
    uVar6 = (pUVar12->downVector).fields.x;
    uVar8 = (pUVar12->downVector).fields.y;
    pUVar17 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)local_88,(UnityEngine_Vector3_o *)&local_98,
                         (MethodInfo *)0x0);
    fVar4 = (__this->fields).Size;
    uVar13._0_4_ = (pUVar17->fields).x;
    uVar13._4_4_ = (pUVar17->fields).y;
    uVar14._0_4_ = (pUVar17->fields).z;
    uVar14._4_4_ = (pUVar17->fields).w;
    fVar18 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)(__this);
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    local_98.y = (float)uVar8 * fVar2 + (float)uVar7;
    local_98.x = (float)uVar6 * fVar2 + (float)uVar5;
    local_98.z = fVar2 * fVar3 + fVar1;
    local_88[0]._0_8_ = uVar13;
    local_88[0]._8_8_ = uVar14;
    Effects_EffectSpawner__Spawn
              (pSVar15,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)local_88,fVar18 * fVar4,
               true,(System_Object_array *)0x0,(MethodInfo *)0x0);
    return;
  }
label_182167e9f:
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$LoadSkin
// il2cpp: void Characters_BaseShifter__LoadSkin (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x182168090

void Characters_BaseShifter__LoadSkin(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Utility_BaseComponentCache_o *pUVar5;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar6;
  Settings_ShifterCustomSkinSet_o *pSVar7;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar8;
  
  if (Il2CppMethodInitialized_184346d42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_ShifterCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ShifterCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadSkinRPC");
    Il2CppMethodInitialized_184346d42 = '\x01';
  }
  bVar6 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar6) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Shifter,
      pSVar3 != (Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).SkinsEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar4->fields)._value == false) {
      return;
    }
    pSVar7 = (Settings_ShifterCustomSkinSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)
                        (TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->fields).Shifter
                        ,(MethodInfo_C8EAF0 *)
                         MethodInfo_Settings_SetSettingsContainer_ShifterCustomSkinSet_GetSelectedSet);
    if (pSVar7 != (Settings_ShifterCustomSkinSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_ShifterCustomSkinSet->_2).typeHierarchyDepth;
      if (((pSVar7->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_ShifterCustomSkinSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
      }
    }
    obj = (*(__this->klass->vtable)._204_GetSkinURL.methodPtr)
                    (__this,pSVar7,(__this->klass->vtable)._204_GetSkinURL.method);
    pUVar5 = (__this->fields).Cache;
    if (pUVar5 != (Utility_BaseComponentCache_o *)0x0) {
      __this_00 = (pUVar5->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      if (parameters != (System_Object_array *)0x0) {
        if ((obj != (System_String_o *)0x0) &&
           (pIVar8 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class),
           pIVar8 == (Il2CppObject *)0x0)) {
          pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"LoadSkinRPC",3,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_BaseShifter__GetSkinURL (Characters_BaseShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x1821678a0

System_String_o *
Characters_BaseShifter__GetSkinURL
          (Characters_BaseShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346d43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346d43 = '\x01';
  }
  return "";
}


// Characters.BaseShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_BaseShifter__CreateCustomSkinLoader (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x18059b2e0

CustomSkins_BaseCustomSkinLoader_o*
Characters_BaseShifter__CreateCustomSkinLoader(Characters_BaseShifter_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// Characters.BaseShifter$$LoadSkinRPC
// il2cpp: void Characters_BaseShifter__LoadSkinRPC (Characters_BaseShifter_o* __this, System_String_o* url, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182167eb0

void Characters_BaseShifter__LoadSkinRPC
               (Characters_BaseShifter_o *__this,System_String_o *url,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomSkins_BaseCustomSkinLoader_o *pCVar3;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  bool bVar7;
  System_Object_array *pSVar8;
  Il2CppObject *pIVar9;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184346d44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346d44 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_182168068;
  if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
    pCVar3 = (__this->fields)._customSkinLoader;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar5 = (pSVar4->fields).Shifter,
          pSVar5 != (Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *)0x0)) &&
         (pSVar6 = (pSVar5->fields).SkinsEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar6->fields)._value == false) {
          return;
        }
        pSVar6 = (pSVar5->fields).SkinsLocal;
        if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
          if ((pSVar6->fields)._value != false) {
            pUVar1 = (__this->fields).Cache;
            if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0))
            goto label_182168068;
            if ((pPVar2->fields)._IsMine_k__BackingField == false) {
              return;
            }
          }
          pCVar3 = (__this->fields)._customSkinLoader;
          pSVar8 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          if (pSVar8 != (System_Object_array *)0x0) {
            if ((url != (System_String_o *)0x0) &&
               (pIVar9 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)url,(((pSVar8->obj).klass)->_1).element_class),
               pIVar9 == (Il2CppObject *)0x0)) {
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
            if ((int)pSVar8->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            pSVar8->m_Items[0] = (Il2CppObject *)url;
            Il2CppCodeGenWriteBarrier(pSVar8->m_Items,url);
            if (pCVar3 != (CustomSkins_BaseCustomSkinLoader_o *)0x0) {
              routine = (*(pCVar3->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                                  (pCVar3,pSVar8,(pCVar3->klass->vtable)._7_LoadSkinsFromRPC.method);
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_182168068:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BaseShifter$$.ctor
// il2cpp: void Characters_BaseShifter___ctor (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x1821662a0

void
Characters_BaseShifter___ctor(Characters_BaseShifter_o* __this, MethodInfo* method)

{
  (__this->fields)._needRoar = true;
  (__this->fields).DeathAnimationLength = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


