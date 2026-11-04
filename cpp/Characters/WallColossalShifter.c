// Type: Characters.WallColossalShifter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/WallColossalShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalShifter.cs
// --------------------------------

// Characters.WallColossalShifter.<WaitAndDie>d__78$$.ctor
// il2cpp: void Characters_WallColossalShifter__WaitAndDie_d__78___ctor (Characters_WallColossalShifter__WaitAndDie_d__78_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_WallColossalShifter__WaitAndDie_d__78___ctor(Characters_WallColossalShifter__WaitAndDie_d__78_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.WallColossalShifter.<WaitAndDie>d__78$$System.IDisposable.Dispose
// il2cpp: void Characters_WallColossalShifter__WaitAndDie_d__78__System_IDisposable_Dispose (Characters_WallColossalShifter__WaitAndDie_d__78_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_WallColossalShifter__WaitAndDie_d__78__System_IDisposable_Dispose(Characters_WallColossalShifter__WaitAndDie_d__78_o* __this, MethodInfo* method)

{
  return;
}


// Characters.WallColossalShifter.<WaitAndDie>d__78$$MoveNext
// il2cpp: bool Characters_WallColossalShifter__WaitAndDie_d__78__MoveNext (Characters_WallColossalShifter__WaitAndDie_d__78_o* __this, const MethodInfo* method);
// 0x182193480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219362f: nop 

bool Characters_WallColossalShifter__WaitAndDie_d__78__MoveNext
               (Characters_WallColossalShifter__WaitAndDie_d__78_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Characters_WallColossalShifter_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar8;
  UnityEngine_Transform_o *pUVar9;
  System_String_o *name;
  UnityEngine_Vector3_StaticFields *pUVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  UnityEngine_Vector3_o *pUVar13;
  UnityEngine_Quaternion_o *pUVar14;
  UnityEngine_GameObject_o *targetGo;
  int iVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o local_d8;
  UnityEngine_Vector3_o local_c8;
  UnityEngine_Quaternion_Fields local_b8;
  UnityEngine_Quaternion_o local_a8 [9];
  
  if (Il2CppMethodInitialized_184346d8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346d8a = '\x01';
  }
  iVar15 = (__this->fields).__1__state;
  if (iVar15 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,0.1,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar15 != 1) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (((__this_00 != (Characters_WallColossalShifter_o *)0x0) &&
      (pCVar8 = (__this_00->fields).BaseTitanCache, pCVar8 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
     (pUVar9 = (pCVar8->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
    pUVar13 = UnityEngine_Transform__get_position(&local_c8,pUVar9,(MethodInfo *)0x0);
    pCVar8 = (__this_00->fields).BaseTitanCache;
    fVar6 = (pUVar13->fields).x;
    fVar7 = (pUVar13->fields).z;
    if ((pCVar8 != (Characters_BaseTitanComponentCache_o *)0x0) &&
       (pUVar9 = (pCVar8->fields).Head, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      fVar1 = (pUVar13->fields).y;
      pUVar13 = UnityEngine_Transform__get_position(&local_c8,pUVar9,(MethodInfo *)0x0);
      iVar15 = 0;
      fVar17 = ((pUVar13->fields).y - fVar1) / 10.0;
      do {
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        name = TypeInfo_Effects_EffectPrefabs->static_fields->TitanDie2;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        fVar16 = (float)iVar15;
        local_d8.fields.x = -1.5707964;
        pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_d8.fields.y = 0.0;
        local_d8.fields.z = 0.0;
        fVar2 = (pUVar10->upVector).fields.x;
        fVar3 = (pUVar10->upVector).fields.y;
        fVar4 = (pUVar10->upVector).fields.z;
        pUVar14 = UnityEngine_Quaternion__Internal_FromEulerRad(local_a8,&local_d8,(MethodInfo *)0x0);
        fVar5 = (__this_00->fields).Size;
        uVar11._0_4_ = (pUVar14->fields).x;
        uVar11._4_4_ = (pUVar14->fields).y;
        uVar12._0_4_ = (pUVar14->fields).z;
        uVar12._4_4_ = (pUVar14->fields).w;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        local_c8.fields.x = fVar17 * fVar2 * fVar16 + fVar6;
        local_c8.fields.y = fVar17 * fVar3 * fVar16 + fVar1;
        local_c8.fields.z = fVar17 * fVar4 * fVar16 + fVar7;
        local_b8._0_8_ = uVar11;
        local_b8._8_8_ = uVar12;
        Effects_EffectSpawner__Spawn
                  (name,&local_c8,(UnityEngine_Quaternion_o *)&local_b8,fVar5 * 10.0,false,
                   (System_Object_array *)0x0,(MethodInfo *)0x0);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 10);
      targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      Photon_Pun_PhotonNetwork__Destroy_1d35aa0(targetGo,(MethodInfo *)0x0);
      return false;
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter.<WaitAndDie>d__78$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_WallColossalShifter__WaitAndDie_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_WallColossalShifter__WaitAndDie_d__78_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_WallColossalShifter__WaitAndDie_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_WallColossalShifter__WaitAndDie_d__78_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.WallColossalShifter.<WaitAndDie>d__78$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_WallColossalShifter__WaitAndDie_d__78__System_Collections_IEnumerator_Reset (Characters_WallColossalShifter__WaitAndDie_d__78_o* __this, const MethodInfo* method);
// 0x182193830

void Characters_WallColossalShifter__WaitAndDie_d__78__System_Collections_IEnumerator_Reset
               (Characters_WallColossalShifter__WaitAndDie_d__78_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_WallColossalShifter_WaitAndDie_d__78_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.WallColossalShifter.<WaitAndDie>d__78$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_WallColossalShifter__WaitAndDie_d__78__System_Collections_IEnumerator_get_Current (Characters_WallColossalShifter__WaitAndDie_d__78_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_WallColossalShifter__WaitAndDie_d__78__System_Collections_IEnumerator_get_Current(Characters_WallColossalShifter__WaitAndDie_d__78_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.WallColossalShifter$$get_MaxFootstepDistance
// il2cpp: float Characters_WallColossalShifter__get_MaxFootstepDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18210fb90

float
Characters_WallColossalShifter__get_MaxFootstepDistance(Characters_WallColossalShifter_o* __this, MethodInfo* method)

{
  return 500.0;
}


// Characters.WallColossalShifter$$get_MaxSoundDistance
// il2cpp: float Characters_WallColossalShifter__get_MaxSoundDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18210fa90

float
Characters_WallColossalShifter__get_MaxSoundDistance(Characters_WallColossalShifter_o* __this, MethodInfo* method)

{
  return 1000.0;
}


// Characters.WallColossalShifter$$get_LODQualityMediumDistance
// il2cpp: float Characters_WallColossalShifter__get_LODQualityMediumDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18210fa90

float
Characters_WallColossalShifter__get_LODQualityMediumDistance(Characters_WallColossalShifter_o* __this, MethodInfo* method)

{
  return 1000.0;
}


// Characters.WallColossalShifter$$get_LODQualityLowDistance
// il2cpp: float Characters_WallColossalShifter__get_LODQualityLowDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18219a170

float
Characters_WallColossalShifter__get_LODQualityLowDistance(Characters_WallColossalShifter_o* __this, MethodInfo* method)

{
  return 2000.0;
}


// Characters.WallColossalShifter$$get_CullShadowsDistance
// il2cpp: float Characters_WallColossalShifter__get_CullShadowsDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18219a170

float
Characters_WallColossalShifter__get_CullShadowsDistance(Characters_WallColossalShifter_o* __this, MethodInfo* method)

{
  return 2000.0;
}


// Characters.WallColossalShifter$$get_CullEffectsDistance
// il2cpp: float Characters_WallColossalShifter__get_CullEffectsDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18219a170

float Characters_WallColossalShifter__get_CullEffectsDistance
                (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return 2000.0;
}


// Characters.WallColossalShifter$$get_SteamState
// il2cpp: int32_t Characters_WallColossalShifter__get_SteamState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18219a1b0

int32_t
Characters_WallColossalShifter__get_SteamState(Characters_WallColossalShifter_o* __this, MethodInfo* method)

{
  return (__this->fields)._steamState;
}


// Characters.WallColossalShifter$$get_LeftHandState
// il2cpp: int32_t Characters_WallColossalShifter__get_LeftHandState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18219a180

int32_t Characters_WallColossalShifter__get_LeftHandState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return (__this->fields)._leftHandState;
}


// Characters.WallColossalShifter$$get_RightHandState
// il2cpp: int32_t Characters_WallColossalShifter__get_RightHandState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18219a190

int32_t Characters_WallColossalShifter__get_RightHandState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return (__this->fields)._rightHandState;
}


// Characters.WallColossalShifter$$get_StunState
// il2cpp: int32_t Characters_WallColossalShifter__get_StunState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18219a1c0

int32_t Characters_WallColossalShifter__get_StunState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return (__this->fields)._stunState;
}


// Characters.WallColossalShifter$$get_SizeMultiplier
// il2cpp: float Characters_WallColossalShifter__get_SizeMultiplier (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18219a1a0

float Characters_WallColossalShifter__get_SizeMultiplier
                (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return 22.0;
}


// Characters.WallColossalShifter$$OnPlayerEnteredRoom
// il2cpp: void Characters_WallColossalShifter__OnPlayerEnteredRoom (Characters_WallColossalShifter_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x182196ef0

void Characters_WallColossalShifter__OnPlayerEnteredRoom
               (Characters_WallColossalShifter_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [4];
  
  if (Il2CppMethodInitialized_184346d72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetRightHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLeftHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunRecoveryTimesRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHandSeverTimesRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSteamStateRPC");
    Il2CppMethodInitialized_184346d72 = '\x01';
  }
  Characters_BaseTitan__OnPlayerEnteredRoom((Characters_BaseTitan_o *)__this,player,(MethodInfo *)0x0);
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar3) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar2 = (pUVar1->fields).PhotonView;
    pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res8[0] = (undefined1)(__this->fields)._leftHandState;
    pIVar5 = il2cpp_value_box(g_data_184354dd8,local_res8);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)pSVar4->max_length == 0) goto label_1821974f8;
      pSVar4->m_Items[0] = pIVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_1d4d8d0(pPVar2,"SetLeftHandStateRPC",player,pSVar4,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Cache;
        if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
          pPVar2 = (pUVar1->fields).PhotonView;
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          local_res10[0] = (undefined1)(__this->fields)._rightHandState;
          pIVar5 = il2cpp_value_box(g_data_184354dd8,local_res10);
          if (pSVar4 != (System_Object_array *)0x0) {
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) {
              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
            }
            if ((int)pSVar4->max_length == 0) goto label_1821974f8;
            pSVar4->m_Items[0] = pIVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
            if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC_1d4d8d0(pPVar2,"SetRightHandStateRPC",player,pSVar4,(MethodInfo *)0x0)
              ;
              pUVar1 = (__this->fields).Cache;
              if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                pPVar2 = (pUVar1->fields).PhotonView;
                pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
                local_res20[0] = (undefined1)(__this->fields)._steamState;
                pIVar5 = il2cpp_value_box(g_data_184354dd8,local_res20);
                if (pSVar4 != (System_Object_array *)0x0) {
                  if ((pIVar5 != (Il2CppObject *)0x0) &&
                     (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                     pIVar6 == (Il2CppObject *)0x0)) {
                    pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                  }
                  if ((int)pSVar4->max_length == 0) goto label_1821974f8;
                  pSVar4->m_Items[0] = pIVar5;
                  Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
                  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC_1d4d8d0
                              (pPVar2,"SetSteamStateRPC",player,pSVar4,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).Cache;
                    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                      pPVar2 = (pUVar1->fields).PhotonView;
                      pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
                      local_48[0] = (undefined1)(__this->fields)._stunState;
                      pIVar5 = il2cpp_value_box(g_data_184354dd8,local_48);
                      if (pSVar4 != (System_Object_array *)0x0) {
                        if ((pIVar5 != (Il2CppObject *)0x0) &&
                           (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class)
                           , pIVar6 == (Il2CppObject *)0x0)) {
                          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                        }
                        if ((int)pSVar4->max_length == 0) goto label_1821974f8;
                        pSVar4->m_Items[0] = pIVar5;
                        Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
                        if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                          Photon_Pun_PhotonView__RPC_1d4d8d0
                                    (pPVar2,"SetStunStateRPC",player,pSVar4,(MethodInfo *)0x0);
                          pUVar1 = (__this->fields).Cache;
                          if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                            pPVar2 = (pUVar1->fields).PhotonView;
                            pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                            local_44 = (__this->fields).LeftHandSeverTimeLeft;
                            pIVar5 = il2cpp_value_box(g_data_184354e38,&local_44);
                            if (pSVar4 != (System_Object_array *)0x0) {
                              if ((pIVar5 != (Il2CppObject *)0x0) &&
                                 (pIVar6 = il2cpp_vm_Object_IsInst
                                                     (pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                                 pIVar6 == (Il2CppObject *)0x0)) {
                                pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                              }
                              if ((int)pSVar4->max_length != 0) {
                                pSVar4->m_Items[0] = pIVar5;
                                Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
                                local_40 = (__this->fields).RightHandSeverTimeLeft;
                                pIVar5 = il2cpp_value_box(g_data_184354e38,&local_40);
                                if ((pIVar5 != (Il2CppObject *)0x0) &&
                                   (pIVar6 = il2cpp_vm_Object_IsInst
                                                       (pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                                   pIVar6 == (Il2CppObject *)0x0)) {
                                  pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                                }
                                if (1 < (uint)pSVar4->max_length) {
                                  pSVar4->m_Items[1] = pIVar5;
                                  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pIVar5);
                                  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                                    Photon_Pun_PhotonView__RPC_1d4d8d0
                                              (pPVar2,"SetHandSeverTimesRPC",player,pSVar4,(MethodInfo *)0x0);
                                    pUVar1 = (__this->fields).Cache;
                                    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                                      pPVar2 = (pUVar1->fields).PhotonView;
                                      pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                                      local_3c = (__this->fields).StunTimeLeft;
                                      pIVar5 = il2cpp_value_box(g_data_184354e38,&local_3c);
                                      if (pSVar4 != (System_Object_array *)0x0) {
                                        if ((pIVar5 != (Il2CppObject *)0x0) &&
                                           (pIVar6 = il2cpp_vm_Object_IsInst
                                                               (pIVar5,(((pSVar4->obj).klass)->_1).
                                                                       element_class),
                                           pIVar6 == (Il2CppObject *)0x0)) {
                                          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                                          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                                        }
                                        if ((int)pSVar4->max_length != 0) {
                                          pSVar4->m_Items[0] = pIVar5;
                                          Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
                                          local_38[0] = (__this->fields).RecoveryTimeLeft;
                                          pIVar5 = il2cpp_value_box(g_data_184354e38,local_38);
                                          if ((pIVar5 != (Il2CppObject *)0x0) &&
                                             (pIVar6 = il2cpp_vm_Object_IsInst
                                                                 (pIVar5,(((pSVar4->obj).klass)->_1).
                                                                         element_class),
                                             pIVar6 == (Il2CppObject *)0x0)) {
                                            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                                            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                                          }
                                          if (1 < (uint)pSVar4->max_length) {
                                            pSVar4->m_Items[1] = pIVar5;
                                            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pIVar5);
                                            if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                                              Photon_Pun_PhotonView__RPC_1d4d8d0
                                                        (pPVar2,"SetStunRecoveryTimesRPC",player,pSVar4,
                                                         (MethodInfo *)0x0);
                                              return;
                                            }
                                            goto label_182197472;
                                          }
                                        }
                                        goto label_1821974f8;
                                      }
                                    }
                                  }
                                  goto label_182197472;
                                }
                              }
label_1821974f8:
                              ThrowIndexOutOfRangeException();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_182197472:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$CheckNapeAngle
// il2cpp: bool Characters_WallColossalShifter__CheckNapeAngle (Characters_WallColossalShifter_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x1808ed110

bool
Characters_WallColossalShifter__CheckNapeAngle(Characters_WallColossalShifter_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, MethodInfo* method)

{
  return true;
}


// Characters.WallColossalShifter$$SteamAttack
// il2cpp: void Characters_WallColossalShifter__SteamAttack (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x1821985e0

void Characters_WallColossalShifter__SteamAttack(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346d73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSteam");
    Il2CppMethodInitialized_184346d73 = '\x01';
  }
  bVar1 = (*(__this->klass->vtable)._151_CanAttack.methodPtr)
                    (__this,(__this->klass->vtable)._151_CanAttack.method);
  if ((bVar1) && ((__this->fields)._stunState == 0)) {
    (*(__this->klass->vtable)._150_Attack.methodPtr)
              (__this,"AttackSteam",(__this->klass->vtable)._150_Attack.method);
    return;
  }
  return;
}


// Characters.WallColossalShifter$$SetLeftHandHealth
// il2cpp: void Characters_WallColossalShifter__SetLeftHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x182197e00

void Characters_WallColossalShifter__SetLeftHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  Characters_WallColossalShifter_c *pCVar1;
  
  (__this->fields).MaxLeftHandHealth = health;
  if (health < 0) {
    health = 0;
  }
  pCVar1 = __this->klass;
  (__this->fields).CurrentLeftHandHealth = health;
  (*(pCVar1->vtable)._206_OnLeftHandHealthChange.methodPtr)
            (__this,(pCVar1->vtable)._206_OnLeftHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$SetRightHandHealth
// il2cpp: void Characters_WallColossalShifter__SetRightHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x182198120

void Characters_WallColossalShifter__SetRightHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  Characters_WallColossalShifter_c *pCVar1;
  
  (__this->fields).MaxRightHandHealth = health;
  if (health < 0) {
    health = 0;
  }
  pCVar1 = __this->klass;
  (__this->fields).CurrentRightHandHealth = health;
  (*(pCVar1->vtable)._207_OnRightHandHealthChange.methodPtr)
            (__this,(pCVar1->vtable)._207_OnRightHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$SetCurrentLeftHandHealth
// il2cpp: void Characters_WallColossalShifter__SetCurrentLeftHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x182197ce0

void Characters_WallColossalShifter__SetCurrentLeftHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  int iVar1;
  
  if ((health < 0) || (iVar1 = (__this->fields).MaxLeftHandHealth, health <= iVar1)) {
    iVar1 = health;
    if (health < 0) {
      iVar1 = 0;
    }
  }
  (__this->fields).CurrentLeftHandHealth = iVar1;
  (*(__this->klass->vtable)._206_OnLeftHandHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._206_OnLeftHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$SetCurrentRightHandHealth
// il2cpp: void Characters_WallColossalShifter__SetCurrentRightHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x182197d10

void Characters_WallColossalShifter__SetCurrentRightHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  int iVar1;
  
  if ((health < 0) || (iVar1 = (__this->fields).MaxRightHandHealth, health <= iVar1)) {
    iVar1 = health;
    if (health < 0) {
      iVar1 = 0;
    }
  }
  (__this->fields).CurrentRightHandHealth = iVar1;
  (*(__this->klass->vtable)._207_OnRightHandHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._207_OnRightHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$SetMaxLeftHandHealth
// il2cpp: void Characters_WallColossalShifter__SetMaxLeftHandHealth (Characters_WallColossalShifter_o* __this, int32_t maxHealth, const MethodInfo* method);
// 0x182198050

void Characters_WallColossalShifter__SetMaxLeftHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t maxHealth,MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalShifter_c *pCVar2;
  
  iVar1 = (__this->fields).CurrentLeftHandHealth;
  (__this->fields).MaxLeftHandHealth = maxHealth;
  if ((iVar1 < 0) || (iVar1 <= maxHealth)) {
    maxHealth = iVar1;
    if (iVar1 < 0) {
      maxHealth = 0;
    }
  }
  pCVar2 = __this->klass;
  (__this->fields).CurrentLeftHandHealth = maxHealth;
  (*(pCVar2->vtable)._206_OnLeftHandHealthChange.methodPtr)
            (__this,(pCVar2->vtable)._206_OnLeftHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$SetMaxRightHandHealth
// il2cpp: void Characters_WallColossalShifter__SetMaxRightHandHealth (Characters_WallColossalShifter_o* __this, int32_t maxHealth, const MethodInfo* method);
// 0x182198090

void Characters_WallColossalShifter__SetMaxRightHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t maxHealth,MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalShifter_c *pCVar2;
  
  iVar1 = (__this->fields).CurrentRightHandHealth;
  (__this->fields).MaxRightHandHealth = maxHealth;
  if ((iVar1 < 0) || (iVar1 <= maxHealth)) {
    maxHealth = iVar1;
    if (iVar1 < 0) {
      maxHealth = 0;
    }
  }
  pCVar2 = __this->klass;
  (__this->fields).CurrentRightHandHealth = maxHealth;
  (*(pCVar2->vtable)._207_OnRightHandHealthChange.methodPtr)
            (__this,(pCVar2->vtable)._207_OnRightHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$OnLeftHandHealthChange
// il2cpp: void Characters_WallColossalShifter__OnLeftHandHealthChange (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182196710
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182196930: jmp 0x182196af8
// asm:   0x182196bb9: jmp 0x182196d69
// asm:   0x182196c88: jmp 0x182196d4a

void Characters_WallColossalShifter__OnLeftHandHealthChange
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  uint local_res8 [4];
  float local_res18 [2];
  float local_res20 [2];
  
  if (Il2CppMethodInitialized_184346d74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetLeftHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLeftHandHealthRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHandSeverTimesRPC");
    Il2CppMethodInitialized_184346d74 = '\x01';
  }
  if ((__this->fields).CurrentLeftHandHealth < 1) {
    if ((__this->fields)._leftHandState != 0) {
      if (0 < (__this->fields).CurrentLeftHandHealth) goto label_182196bcb;
      if ((__this->fields)._leftHandState == 1) {
        bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                          (__this,(__this->klass->vtable)._74_IsMine.method);
        if (bVar1) {
          (__this->fields).LeftHandSeverTimeLeft = (__this->fields).HandSeverWindow;
          pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,2);
          pIVar4 = il2cpp_value_box(g_data_184354dd8,local_res8);
          if (pSVar3 == (System_Object_array *)0x0) goto label_182196e96;
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if ((int)pSVar3->max_length == 0) goto label_182196e90;
          pSVar3->m_Items[0] = pIVar4;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
          if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
label_182196e96:
            ThrowNullReferenceException();
          }
          Photon_Pun_PhotonView__RPC(pPVar2,"SetLeftHandStateRPC",0,pSVar3,(MethodInfo *)0x0);
          pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
          local_res18[0] = (__this->fields).LeftHandSeverTimeLeft;
          pIVar4 = il2cpp_value_box(g_data_184354e38,local_res18);
          if (pSVar3 == (System_Object_array *)0x0) goto label_182196e96;
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if ((int)pSVar3->max_length == 0) {
label_182196e90:
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[0] = pIVar4;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
          local_res20[0] = (__this->fields).RightHandSeverTimeLeft;
          pIVar4 = il2cpp_value_box(g_data_184354e38,local_res20);
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if ((uint)pSVar3->max_length < 2) goto label_182196e90;
          pSVar3->m_Items[1] = pIVar4;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pIVar4);
          if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_182196e96;
          goto label_182196af8;
        }
        goto label_182196b35;
      }
      if (0 < (__this->fields).CurrentLeftHandHealth) goto label_182196bcb;
      goto label_182196c8d;
    }
    bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (bVar1) {
      (__this->fields).LeftHandSeverTimeLeft = (__this->fields).HandSeverWindow;
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,2);
      pIVar4 = il2cpp_value_box(g_data_184354dd8,local_res8);
      if (pSVar3 == (System_Object_array *)0x0) goto label_182196e44;
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)pSVar3->max_length == 0) goto label_182196e4a;
      pSVar3->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
label_182196e44:
        ThrowNullReferenceException();
      }
      Photon_Pun_PhotonView__RPC(pPVar2,"SetLeftHandStateRPC",0,pSVar3,(MethodInfo *)0x0);
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      local_res18[0] = (__this->fields).LeftHandSeverTimeLeft;
      pIVar4 = il2cpp_value_box(g_data_184354e38,local_res18);
      if (pSVar3 == (System_Object_array *)0x0) goto label_182196e44;
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)pSVar3->max_length == 0) {
label_182196e4a:
        ThrowIndexOutOfRangeException();
      }
      pSVar3->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
      local_res20[0] = (__this->fields).RightHandSeverTimeLeft;
      pIVar4 = il2cpp_value_box(g_data_184354e38,local_res20);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((uint)pSVar3->max_length < 2) goto label_182196e4a;
      pSVar3->m_Items[1] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pIVar4);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_182196e44;
label_182196af8:
      Photon_Pun_PhotonView__RPC(pPVar2,"SetHandSeverTimesRPC",0,pSVar3,(MethodInfo *)0x0);
      if (((__this->fields)._leftHandState == 2) && ((__this->fields)._rightHandState == 2)) {
        Characters_WallColossalShifter__EnterStunState(__this,0.0,false,(MethodInfo *)0x0);
      }
    }
  }
  else {
label_182196bcb:
    if (((__this->fields).CurrentLeftHandHealth < (__this->fields).MaxLeftHandHealth) &&
       ((__this->fields)._leftHandState == 0)) {
      bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                        (__this,(__this->klass->vtable)._74_IsMine.method);
      if (!bVar1) goto label_182196b35;
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
      pIVar4 = il2cpp_value_box(g_data_184354dd8,local_res8);
      if (pSVar3 == (System_Object_array *)0x0) {
label_182196eb2:
        ThrowNullReferenceException();
      }
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)pSVar3->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_182196eb2;
    }
    else {
label_182196c8d:
      if ((((__this->fields).CurrentLeftHandHealth < (__this->fields).MaxLeftHandHealth) ||
          ((__this->fields)._leftHandState != 1)) ||
         (bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                            (__this,(__this->klass->vtable)._74_IsMine.method), !bVar1)) goto label_182196b35;
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res8[0] = local_res8[0] & 0xffffff00;
      pIVar4 = il2cpp_value_box(g_data_184354dd8,local_res8);
      if (pSVar3 == (System_Object_array *)0x0) {
label_182196ece:
        ThrowNullReferenceException();
      }
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)pSVar3->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_182196ece;
    }
    Photon_Pun_PhotonView__RPC(pPVar2,"SetLeftHandStateRPC",0,pSVar3,(MethodInfo *)0x0);
  }
label_182196b35:
  bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar1) {
    return;
  }
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  local_res8[0] = (__this->fields).CurrentLeftHandHealth;
  pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
  if (pSVar3 != (System_Object_array *)0x0) {
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
       pIVar5 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
      local_res18[0] = (float)(__this->fields).MaxLeftHandHealth;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res18);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = pIVar4;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pIVar4);
        if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(pPVar2,"SetLeftHandHealthRPC",0,pSVar3,(MethodInfo *)0x0);
          return;
        }
        goto label_182196e0e;
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_182196e0e:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$OnRightHandHealthChange
// il2cpp: void Characters_WallColossalShifter__OnRightHandHealthChange (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182197500
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182197720: jmp 0x1821978e8
// asm:   0x1821979a9: jmp 0x182197b59
// asm:   0x182197a78: jmp 0x182197b3a

void Characters_WallColossalShifter__OnRightHandHealthChange
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  uint local_res8 [4];
  float local_res18 [2];
  float local_res20 [2];
  
  if (Il2CppMethodInitialized_184346d75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetRightHandHealthRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetRightHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHandSeverTimesRPC");
    Il2CppMethodInitialized_184346d75 = '\x01';
  }
  if ((__this->fields).CurrentRightHandHealth < 1) {
    if ((__this->fields)._rightHandState != 0) {
      if (0 < (__this->fields).CurrentRightHandHealth) goto label_1821979bb;
      if ((__this->fields)._rightHandState == 1) {
        bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                          (__this,(__this->klass->vtable)._74_IsMine.method);
        if (bVar1) {
          (__this->fields).RightHandSeverTimeLeft = (__this->fields).HandSeverWindow;
          pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,2);
          pIVar4 = il2cpp_value_box(g_data_184354dd8,local_res8);
          if (pSVar3 == (System_Object_array *)0x0) goto label_182197c86;
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if ((int)pSVar3->max_length == 0) goto label_182197c80;
          pSVar3->m_Items[0] = pIVar4;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
          if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
label_182197c86:
            ThrowNullReferenceException();
          }
          Photon_Pun_PhotonView__RPC(pPVar2,"SetRightHandStateRPC",0,pSVar3,(MethodInfo *)0x0);
          pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
          local_res18[0] = (__this->fields).LeftHandSeverTimeLeft;
          pIVar4 = il2cpp_value_box(g_data_184354e38,local_res18);
          if (pSVar3 == (System_Object_array *)0x0) goto label_182197c86;
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if ((int)pSVar3->max_length == 0) {
label_182197c80:
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[0] = pIVar4;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
          local_res20[0] = (__this->fields).RightHandSeverTimeLeft;
          pIVar4 = il2cpp_value_box(g_data_184354e38,local_res20);
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if ((uint)pSVar3->max_length < 2) goto label_182197c80;
          pSVar3->m_Items[1] = pIVar4;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pIVar4);
          if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_182197c86;
          goto label_1821978e8;
        }
        goto label_182197925;
      }
      if (0 < (__this->fields).CurrentRightHandHealth) goto label_1821979bb;
      goto label_182197a7d;
    }
    bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (bVar1) {
      (__this->fields).RightHandSeverTimeLeft = (__this->fields).HandSeverWindow;
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,2);
      pIVar4 = il2cpp_value_box(g_data_184354dd8,local_res8);
      if (pSVar3 == (System_Object_array *)0x0) goto label_182197c34;
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)pSVar3->max_length == 0) goto label_182197c3a;
      pSVar3->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
label_182197c34:
        ThrowNullReferenceException();
      }
      Photon_Pun_PhotonView__RPC(pPVar2,"SetRightHandStateRPC",0,pSVar3,(MethodInfo *)0x0);
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      local_res18[0] = (__this->fields).LeftHandSeverTimeLeft;
      pIVar4 = il2cpp_value_box(g_data_184354e38,local_res18);
      if (pSVar3 == (System_Object_array *)0x0) goto label_182197c34;
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)pSVar3->max_length == 0) {
label_182197c3a:
        ThrowIndexOutOfRangeException();
      }
      pSVar3->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
      local_res20[0] = (__this->fields).RightHandSeverTimeLeft;
      pIVar4 = il2cpp_value_box(g_data_184354e38,local_res20);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((uint)pSVar3->max_length < 2) goto label_182197c3a;
      pSVar3->m_Items[1] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pIVar4);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_182197c34;
label_1821978e8:
      Photon_Pun_PhotonView__RPC(pPVar2,"SetHandSeverTimesRPC",0,pSVar3,(MethodInfo *)0x0);
      if (((__this->fields)._leftHandState == 2) && ((__this->fields)._rightHandState == 2)) {
        Characters_WallColossalShifter__EnterStunState(__this,0.0,false,(MethodInfo *)0x0);
      }
    }
  }
  else {
label_1821979bb:
    if (((__this->fields).CurrentRightHandHealth < (__this->fields).MaxRightHandHealth) &&
       ((__this->fields)._rightHandState == 0)) {
      bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                        (__this,(__this->klass->vtable)._74_IsMine.method);
      if (!bVar1) goto label_182197925;
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
      pIVar4 = il2cpp_value_box(g_data_184354dd8,local_res8);
      if (pSVar3 == (System_Object_array *)0x0) {
label_182197ca2:
        ThrowNullReferenceException();
      }
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)pSVar3->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_182197ca2;
    }
    else {
label_182197a7d:
      if ((((__this->fields).CurrentRightHandHealth < (__this->fields).MaxRightHandHealth) ||
          ((__this->fields)._rightHandState != 1)) ||
         (bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                            (__this,(__this->klass->vtable)._74_IsMine.method), !bVar1)) goto label_182197925;
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res8[0] = local_res8[0] & 0xffffff00;
      pIVar4 = il2cpp_value_box(g_data_184354dd8,local_res8);
      if (pSVar3 == (System_Object_array *)0x0) {
label_182197cbe:
        ThrowNullReferenceException();
      }
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)pSVar3->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_182197cbe;
    }
    Photon_Pun_PhotonView__RPC(pPVar2,"SetRightHandStateRPC",0,pSVar3,(MethodInfo *)0x0);
  }
label_182197925:
  bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar1) {
    return;
  }
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  local_res8[0] = (__this->fields).CurrentRightHandHealth;
  pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
  if (pSVar3 != (System_Object_array *)0x0) {
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
       pIVar5 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pIVar4);
      local_res18[0] = (float)(__this->fields).MaxRightHandHealth;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res18);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = pIVar4;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pIVar4);
        if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(pPVar2,"SetRightHandHealthRPC",0,pSVar3,(MethodInfo *)0x0);
          return;
        }
        goto label_182197bfe;
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_182197bfe:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$CheckStunCondition
// il2cpp: void Characters_WallColossalShifter__CheckStunCondition (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182195440

void Characters_WallColossalShifter__CheckStunCondition
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  if (((__this->fields)._leftHandState == 2) && ((__this->fields)._rightHandState == 2)) {
    Characters_WallColossalShifter__EnterStunState(__this,0.0,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.WallColossalShifter$$EnterStunState
// il2cpp: void Characters_WallColossalShifter__EnterStunState (Characters_WallColossalShifter_o* __this, float duration, bool refresh, const MethodInfo* method);
// 0x1821958a0

void Characters_WallColossalShifter__EnterStunState
               (Characters_WallColossalShifter_o *__this,float duration,bool refresh,MethodInfo *method)

{
  Characters_WallColossalAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  float fVar7;
  undefined1 local_res8 [8];
  float local_38 [8];
  
  if (Il2CppMethodInitialized_184346d76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunRecoveryTimesRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunStateRPC");
    Il2CppMethodInitialized_184346d76 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if ((((!bVar2) || ((__this->fields).Dead != false)) || ((__this->fields).EnableAI == false)) ||
     ((!refresh && ((__this->fields)._stunState != 0)))) {
    return;
  }
  if (Il2CppMethodInitialized_184346d80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSteamStateRPC");
    Il2CppMethodInitialized_184346d80 = '\x01';
  }
  if (((__this->fields)._steamState != 0) &&
     (bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                        (__this,(__this->klass->vtable)._74_IsMine.method), bVar2)) {
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res8[0] = 0;
    pIVar5 = il2cpp_value_box(g_data_184354dd8,local_res8);
    if (pSVar4 == (System_Object_array *)0x0) {
label_182195cb9:
      ThrowNullReferenceException();
    }
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
       pIVar6 == (Il2CppObject *)0x0)) {
      pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
    }
    if ((int)pSVar4->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar4->m_Items[0] = pIVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
    if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto label_182195cb9;
    Photon_Pun_PhotonView__RPC(pPVar3,"SetSteamStateRPC",0,pSVar4,(MethodInfo *)0x0);
  }
  pCVar1 = (__this->fields).ColossalAnimations;
  if ((pCVar1 == (Characters_WallColossalAnimations_o *)0x0) ||
     (__this_00 = (__this->fields).Animation, __this_00 == (Characters_AnimationHandler_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar7 = Characters_AnimationHandler__GetLength
                    (__this_00,(pCVar1->fields).StunFallFaceAnim,(MethodInfo *)0x0);
  if (duration == 0.0) {
    duration = (__this->fields).StunDuration;
  }
  if (duration <= fVar7) {
    duration = fVar7;
  }
  (__this->fields).StunTimeLeft = duration;
  pCVar1 = (__this->fields).ColossalAnimations;
  (__this->fields).RecoveryTimeLeft = 0.0;
  if (pCVar1 != (Characters_WallColossalAnimations_o *)0x0) {
    Characters_BaseTitan__StateActionWithTime
              ((Characters_BaseTitan_o *)__this,0xd,(pCVar1->fields).StunFallFaceAnim,INFINITY,0.1,true,0.0,
               (MethodInfo *)0x0);
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res8[0] = 1;
    pIVar5 = il2cpp_value_box(g_data_184354dd8,local_res8);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)pSVar4->max_length == 0) goto label_182195cdf;
      pSVar4->m_Items[0] = pIVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
      if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar3,"SetStunStateRPC",0,pSVar4,(MethodInfo *)0x0);
        pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                           ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
        pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        local_38[0] = (__this->fields).StunTimeLeft;
        pIVar5 = il2cpp_value_box(g_data_184354e38,local_38);
        if (pSVar4 != (System_Object_array *)0x0) {
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
          }
          if ((int)pSVar4->max_length != 0) {
            pSVar4->m_Items[0] = pIVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
            local_38[1] = 0.0;
            pIVar5 = il2cpp_value_box(g_data_184354e38,local_38 + 1);
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) {
              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
            }
            if (1 < (uint)pSVar4->max_length) {
              pSVar4->m_Items[1] = pIVar5;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pIVar5);
              if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(pPVar3,"SetStunRecoveryTimesRPC",0,pSVar4,(MethodInfo *)0x0);
                return;
              }
              goto label_182195c87;
            }
          }
label_182195cdf:
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_182195c87:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$SetLeftHandHealthRPC
// il2cpp: void Characters_WallColossalShifter__SetLeftHandHealthRPC (Characters_WallColossalShifter_o* __this, int32_t currentHealth, int32_t maxHealth, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182197db0

void Characters_WallColossalShifter__SetLeftHandHealthRPC
               (Characters_WallColossalShifter_o *__this,int32_t currentHealth,int32_t maxHealth,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar1->fields)._Owner_k__BackingField) {
      (__this->fields).CurrentLeftHandHealth = currentHealth;
      (__this->fields).MaxLeftHandHealth = maxHealth;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$SetRightHandHealthRPC
// il2cpp: void Characters_WallColossalShifter__SetRightHandHealthRPC (Characters_WallColossalShifter_o* __this, int32_t currentHealth, int32_t maxHealth, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1821980d0

void Characters_WallColossalShifter__SetRightHandHealthRPC
               (Characters_WallColossalShifter_o *__this,int32_t currentHealth,int32_t maxHealth,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar1->fields)._Owner_k__BackingField) {
      (__this->fields).CurrentRightHandHealth = currentHealth;
      (__this->fields).MaxRightHandHealth = maxHealth;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$SetLeftHandStateRPC
// il2cpp: void Characters_WallColossalShifter__SetLeftHandStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182197e30

void Characters_WallColossalShifter__SetLeftHandStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  Characters_BaseHitbox_o *__this_00;
  System_String_o *name;
  Photon_Pun_PhotonView_o *pPVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Quaternion_o *pUVar7;
  Characters_WallColossalComponentCache_o *pCVar8;
  uint uVar9;
  bool toggle;
  UnityEngine_Vector3_o local_58;
  UnityEngine_Quaternion_Fields local_48 [4];
  
  pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto label_182198040;
  if ((info->fields).Sender == (pPVar5->fields)._Owner_k__BackingField) {
    if (Il2CppMethodInitialized_184346d7e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
      Il2CppMethodInitialized_184346d7e = '\x01';
    }
    uVar9 = (uint)state;
    (__this->fields)._leftHandState = uVar9;
    if ((state == '\0') || (uVar9 == 1)) {
      pCVar8 = (__this->fields).ColossalCache;
      if (pCVar8 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182198040;
      toggle = false;
    }
    else if (uVar9 == 2) {
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pCVar8 = (__this->fields).ColossalCache;
      if ((pCVar8 == (Characters_WallColossalComponentCache_o *)0x0) ||
         (__this_00 = (pCVar8->fields).HandLHitbox, __this_00 == (Characters_BaseHitbox_o *)0x0)) {
label_182198040:
        ThrowNullReferenceException();
      }
      name = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
      ;
      if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_182198040;
      pUVar6 = UnityEngine_Transform__get_position(&local_58,__this_01,(MethodInfo *)0x0);
      uVar2 = (pUVar6->fields).x;
      uVar3 = (pUVar6->fields).y;
      fVar4 = (pUVar6->fields).z;
      local_58.fields.x = -1.5707964;
      local_58.fields.y = 0.0;
      local_58.fields.z = 0.0;
      pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Quaternion_o *)local_48,&local_58,(MethodInfo *)0x0);
      fVar1 = (__this->fields).Size;
      local_48[0].x = (pUVar7->fields).x;
      local_48[0].y = (pUVar7->fields).y;
      local_48[0].z = (pUVar7->fields).z;
      local_48[0].w = (pUVar7->fields).w;
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      local_58.fields.x = (float)uVar2;
      local_58.fields.y = (float)uVar3;
      local_58.fields.z = fVar4;
      Effects_EffectSpawner__Spawn
                (name,&local_58,(UnityEngine_Quaternion_o *)local_48,fVar1 * 100.0,true,
                 (System_Object_array *)0x0,(MethodInfo *)0x0);
      pCVar8 = (__this->fields).ColossalCache;
      if (pCVar8 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182198040;
      toggle = (__this->fields).EffectsEnabled != false;
    }
    else {
      if (uVar9 != 3) {
        return;
      }
      pCVar8 = (__this->fields).ColossalCache;
      if (pCVar8 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182198040;
      toggle = (__this->fields).EffectsEnabled != false;
    }
    Characters_BaseCharacter__ToggleParticles
              ((Characters_BaseCharacter_o *)__this,(pCVar8->fields).LeftHandSteam,toggle,(MethodInfo *)0x0);
  }
  return;
}


// Characters.WallColossalShifter$$SetRightHandStateRPC
// il2cpp: void Characters_WallColossalShifter__SetRightHandStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182198150

void Characters_WallColossalShifter__SetRightHandStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  Characters_BaseHitbox_o *__this_00;
  System_String_o *name;
  Photon_Pun_PhotonView_o *pPVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Quaternion_o *pUVar7;
  Characters_WallColossalComponentCache_o *pCVar8;
  uint uVar9;
  bool toggle;
  UnityEngine_Vector3_o local_58;
  UnityEngine_Quaternion_Fields local_48 [4];
  
  pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto label_182198360;
  if ((info->fields).Sender == (pPVar5->fields)._Owner_k__BackingField) {
    if (Il2CppMethodInitialized_184346d7f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
      Il2CppMethodInitialized_184346d7f = '\x01';
    }
    uVar9 = (uint)state;
    (__this->fields)._rightHandState = uVar9;
    if ((state == '\0') || (uVar9 == 1)) {
      pCVar8 = (__this->fields).ColossalCache;
      if (pCVar8 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182198360;
      toggle = false;
    }
    else if (uVar9 == 2) {
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pCVar8 = (__this->fields).ColossalCache;
      if ((pCVar8 == (Characters_WallColossalComponentCache_o *)0x0) ||
         (__this_00 = (pCVar8->fields).HandRHitbox, __this_00 == (Characters_BaseHitbox_o *)0x0)) {
label_182198360:
        ThrowNullReferenceException();
      }
      name = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
      ;
      if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_182198360;
      pUVar6 = UnityEngine_Transform__get_position(&local_58,__this_01,(MethodInfo *)0x0);
      uVar2 = (pUVar6->fields).x;
      uVar3 = (pUVar6->fields).y;
      fVar4 = (pUVar6->fields).z;
      local_58.fields.x = -1.5707964;
      local_58.fields.y = 0.0;
      local_58.fields.z = 0.0;
      pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Quaternion_o *)local_48,&local_58,(MethodInfo *)0x0);
      fVar1 = (__this->fields).Size;
      local_48[0].x = (pUVar7->fields).x;
      local_48[0].y = (pUVar7->fields).y;
      local_48[0].z = (pUVar7->fields).z;
      local_48[0].w = (pUVar7->fields).w;
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      local_58.fields.x = (float)uVar2;
      local_58.fields.y = (float)uVar3;
      local_58.fields.z = fVar4;
      Effects_EffectSpawner__Spawn
                (name,&local_58,(UnityEngine_Quaternion_o *)local_48,fVar1 * 100.0,true,
                 (System_Object_array *)0x0,(MethodInfo *)0x0);
      pCVar8 = (__this->fields).ColossalCache;
      if (pCVar8 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182198360;
      toggle = (__this->fields).EffectsEnabled != false;
    }
    else {
      if (uVar9 != 3) {
        return;
      }
      pCVar8 = (__this->fields).ColossalCache;
      if (pCVar8 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182198360;
      toggle = (__this->fields).EffectsEnabled != false;
    }
    Characters_BaseCharacter__ToggleParticles
              ((Characters_BaseCharacter_o *)__this,(pCVar8->fields).RightHandSteam,toggle,(MethodInfo *)0x0);
  }
  return;
}


// Characters.WallColossalShifter$$SetSteamStateRPC
// il2cpp: void Characters_WallColossalShifter__SetSteamStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182198370

void Characters_WallColossalShifter__SetSteamStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar1->fields)._Owner_k__BackingField) {
      Characters_WallColossalShifter__ApplySteamState(__this,(uint)state,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$SetStunStateRPC
// il2cpp: void Characters_WallColossalShifter__SetStunStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182198440

void Characters_WallColossalShifter__SetStunStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar1->fields)._Owner_k__BackingField) {
      Characters_WallColossalShifter__ApplyStunState(__this,(uint)state,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$SetHandSeverTimesRPC
// il2cpp: void Characters_WallColossalShifter__SetHandSeverTimesRPC (Characters_WallColossalShifter_o* __this, float leftTime, float rightTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182197d40

void Characters_WallColossalShifter__SetHandSeverTimesRPC
               (Characters_WallColossalShifter_o *__this,float leftTime,float rightTime,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar1->fields)._Owner_k__BackingField) {
      (__this->fields).LeftHandSeverTimeLeft = leftTime;
      (__this->fields).RightHandSeverTimeLeft = rightTime;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$SetStunRecoveryTimesRPC
// il2cpp: void Characters_WallColossalShifter__SetStunRecoveryTimesRPC (Characters_WallColossalShifter_o* __this, float stunTime, float recoveryTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1821983d0

void Characters_WallColossalShifter__SetStunRecoveryTimesRPC
               (Characters_WallColossalShifter_o *__this,float stunTime,float recoveryTime,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar1->fields)._Owner_k__BackingField) {
      (__this->fields).StunTimeLeft = stunTime;
      (__this->fields).RecoveryTimeLeft = recoveryTime;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$Init
// il2cpp: void Characters_WallColossalShifter__Init (Characters_WallColossalShifter_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, float liveTime, const MethodInfo* method);
// 0x182195fb0

void Characters_WallColossalShifter__Init
               (Characters_WallColossalShifter_o *__this,bool ai,System_String_o *team,
               SimpleJSONFixed_JSONNode_o *data,float liveTime,MethodInfo *method)

{
  Characters_WallColossalShifter_c *pCVar1;
  bool bVar2;
  int iVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  int iVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184346d77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WarningSteamTime");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"StunDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"RecoveryDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"HandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"HandSeverWindow");
    Il2CppMethodInitialized_184346d77 = '\x01';
  }
  if (ai) {
    if (data == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_18219637b:
      ThrowNullReferenceException();
    }
    bVar2 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"HandHealth");
    if (bVar2) {
      pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"HandHealth");
      if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219637b;
      iVar3 = (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[35].methodPtr)
                        (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[35].method);
      (__this->fields).MaxLeftHandHealth = iVar3;
      iVar5 = 0;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      pCVar1 = __this->klass;
      (__this->fields).CurrentLeftHandHealth = iVar5;
      (*(pCVar1->vtable)._206_OnLeftHandHealthChange.methodPtr)
                (__this,(pCVar1->vtable)._206_OnLeftHandHealthChange.method);
      (__this->fields).MaxRightHandHealth = iVar3;
      iVar5 = 0;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      (__this->fields).CurrentRightHandHealth = iVar5;
      (*(__this->klass->vtable)._207_OnRightHandHealthChange.methodPtr)
                (__this,(__this->klass->vtable)._207_OnRightHandHealthChange.method);
    }
    bVar2 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"LeftHandHealth");
    if (bVar2) {
      pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"LeftHandHealth");
      if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219637b;
      iVar3 = (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[35].methodPtr)
                        (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[35].method);
      (__this->fields).MaxLeftHandHealth = iVar3;
      iVar5 = 0;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      pCVar1 = __this->klass;
      (__this->fields).CurrentLeftHandHealth = iVar5;
      (*(pCVar1->vtable)._206_OnLeftHandHealthChange.methodPtr)
                (__this,(pCVar1->vtable)._206_OnLeftHandHealthChange.method);
    }
    bVar2 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"RightHandHealth");
    if (bVar2) {
      pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"RightHandHealth");
      if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219637b;
      iVar3 = (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[35].methodPtr)
                        (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[35].method);
      (__this->fields).MaxRightHandHealth = iVar3;
      iVar5 = 0;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      pCVar1 = __this->klass;
      (__this->fields).CurrentRightHandHealth = iVar5;
      (*(pCVar1->vtable)._207_OnRightHandHealthChange.methodPtr)
                (__this,(pCVar1->vtable)._207_OnRightHandHealthChange.method);
    }
    bVar2 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"HandSeverWindow");
    if (bVar2) {
      pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"HandSeverWindow");
      if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219637b;
      fVar6 = (float)(*(code *)((Il2CppClass *)pSVar4->klass)->vtable[37].methodPtr)
                               (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[37].method);
      (__this->fields).HandSeverWindow = fVar6;
    }
    bVar2 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"StunDuration");
    if (bVar2) {
      pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"StunDuration");
      if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219637b;
      fVar6 = (float)(*(code *)((Il2CppClass *)pSVar4->klass)->vtable[37].methodPtr)
                               (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[37].method);
      (__this->fields).StunDuration = fVar6;
    }
    bVar2 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"RecoveryDuration");
    if (bVar2) {
      pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"RecoveryDuration");
      if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219637b;
      fVar6 = (float)(*(code *)((Il2CppClass *)pSVar4->klass)->vtable[37].methodPtr)
                               (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[37].method);
      (__this->fields).RecoveryDuration = fVar6;
    }
    bVar2 = (*(data->klass->vtable)._28_HasKey.methodPtr)(data,(MethodInfo *)"WarningSteamTime");
    if (bVar2) {
      pSVar4 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"WarningSteamTime");
      if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18219637b;
      fVar6 = (float)(*(code *)((Il2CppClass *)pSVar4->klass)->vtable[37].methodPtr)
                               (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[37].method);
      (__this->fields).WarningSteamTime = fVar6;
    }
  }
  Characters_BaseShifter__Init((Characters_BaseShifter_o *)__this,ai,team,data,liveTime,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalShifter$$CreateCache
// il2cpp: void Characters_WallColossalShifter__CreateCache (Characters_WallColossalShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x182195630

void Characters_WallColossalShifter__CreateCache
               (Characters_WallColossalShifter_o *__this,Utility_BaseComponentCache_o *cache,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_WallColossalComponentCache_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalComponentCache);
    Il2CppMethodInitialized_184346d78 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_WallColossalComponentCache);
  Characters_WallColossalComponentCache___ctor(__this_00,owner,(MethodInfo *)0x0);
  (__this->fields).ColossalCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ColossalCache,__this_00);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,(Utility_BaseComponentCache_o *)(__this->fields).ColossalCache,
             (MethodInfo *)0x0);
  return;
}


// Characters.WallColossalShifter$$CreateAnimations
// il2cpp: void Characters_WallColossalShifter__CreateAnimations (Characters_WallColossalShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x182195470

void Characters_WallColossalShifter__CreateAnimations
               (Characters_WallColossalShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_WallColossalAnimations_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalAnimations);
    Il2CppMethodInitialized_184346d79 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_WallColossalAnimations);
  if (Il2CppMethodInitialized_184346d6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap1_L");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap2_R");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap2_L");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_steam");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_stun");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_sweep");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap1_R");
    Il2CppMethodInitialized_184346d6e = '\x01';
  }
  (__this_00->fields).AttackWallSlap1L = "Armature_VER2|wall_attack_slap1_L";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackWallSlap1L,"Armature_VER2|wall_attack_slap1_L");
  (__this_00->fields).AttackWallSlap1R = "Armature_VER2|wall_attack_slap1_R";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackWallSlap1R,"Armature_VER2|wall_attack_slap1_R");
  (__this_00->fields).AttackWallSlap2L = "Armature_VER2|wall_attack_slap2_L";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackWallSlap2L,"Armature_VER2|wall_attack_slap2_L");
  (__this_00->fields).AttackWallSlap2R = "Armature_VER2|wall_attack_slap2_R";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackWallSlap2R,"Armature_VER2|wall_attack_slap2_R");
  (__this_00->fields).AttackSteam = "Armature_VER2|wall_attack_steam";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackSteam,"Armature_VER2|wall_attack_steam");
  (__this_00->fields).AttackSweep = "Armature_VER2|wall_attack_sweep";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackSweep,"Armature_VER2|wall_attack_sweep");
  (__this_00->fields).AttackKick = "Armature_VER2|wall_colossal_kick";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttackKick,"Armature_VER2|wall_colossal_kick");
  (__this_00->fields).StunFallFaceAnim = "Armature_VER2|wall_colossal_stun";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).StunFallFaceAnim,"Armature_VER2|wall_colossal_stun");
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).ColossalAnimations = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ColossalAnimations,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             (Characters_BaseTitanAnimations_o *)(__this->fields).ColossalAnimations,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_WallColossalShifter__CreateCustomSkinLoader (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x1821956c0

CustomSkins_BaseCustomSkinLoader_o *
Characters_WallColossalShifter__CreateCustomSkinLoader
          (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346d7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ColossalCustomSkinLoader);
    Il2CppMethodInitialized_184346d7a = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_ColossalCustomSkinLoader);
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_WallColossalShifter__GetSkinURL (Characters_WallColossalShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x182195f60

System_String_o *
Characters_WallColossalShifter__GetSkinURL
          (Characters_WallColossalShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346d7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346d7b = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Colossal, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_WallColossalShifter__WaitAndDie (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18219a060

System_Collections_IEnumerator_o *
Characters_WallColossalShifter__WaitAndDie(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter__WaitAndDie_d__78_o *__this_00;
  
  if (Il2CppMethodInitialized_184346d7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter_WaitAndDie_d__78);
    Il2CppMethodInitialized_184346d7c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_WallColossalShifter_WaitAndDie_d__78);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.WallColossalShifter$$ApplySteamState
// il2cpp: void Characters_WallColossalShifter__ApplySteamState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x1821947b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821948fb: mov rsi, rdi
// asm:   0x182194b1f: mov rsi, rdi
// asm:   0x182194c44: mov rsi, rdi

void Characters_WallColossalShifter__ApplySteamState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  Characters_WallColossalComponentCache_o *pCVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  Characters_WallColossalSteamWarningZone_o *pCVar4;
  Characters_BaseHitbox_o *pCVar5;
  Characters_BaseHitbox_o *pCVar6;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_184346d7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_184346d7d = '\x01';
  }
  (__this->fields)._steamState = newState;
  if (newState == 0) {
    pCVar1 = (__this->fields).ColossalCache;
    if (pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) {
      Characters_BaseCharacter__ToggleParticles
                ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).ColossalSteam1,false,(MethodInfo *)0x0)
      ;
      pCVar1 = (__this->fields).ColossalCache;
      if (pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) {
        Characters_BaseCharacter__ToggleParticles
                  ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).ColossalSteam2,false,
                   (MethodInfo *)0x0);
        if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
        }
        pCVar5 = (Characters_BaseHitbox_o *)0x0;
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)__this,
                   TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1,0.0,1.0,(MethodInfo *)0x0)
        ;
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)__this,
                   TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam2,0.0,1.0,(MethodInfo *)0x0)
        ;
        pCVar1 = (__this->fields).ColossalCache;
        pCVar6 = pCVar5;
        if (pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) {
          pCVar6 = (pCVar1->fields).SteamHitbox;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pCVar1 = (__this->fields).ColossalCache;
          if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
             (pCVar6 = (pCVar1->fields).SteamHitbox, pCVar6 == (Characters_BaseHitbox_o *)0x0))
          goto label_182194d18;
          Characters_BaseHitbox__Deactivate(pCVar6,(MethodInfo *)0x0);
        }
        pCVar1 = (__this->fields).ColossalCache;
        if (pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) {
          pCVar5 = (Characters_BaseHitbox_o *)(pCVar1->fields).SteamWarningZone;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pCVar1 = (__this->fields).ColossalCache;
        if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).SteamWarningZone, pUVar2 == (UnityEngine_GameObject_o *)0x0))
        goto label_182194d18;
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pCVar1 = (__this->fields).ColossalCache;
        if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182194d18;
        pCVar4 = (pCVar1->fields).SteamWarningZoneComponent;
        if (pCVar4 == (Characters_WallColossalSteamWarningZone_o *)0x0) {
          return;
        }
        bVar3 = false;
label_182194a45:
        Characters_WallColossalSteamWarningZone__SetActive(pCVar4,bVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (newState == 1) {
      pCVar1 = (__this->fields).ColossalCache;
      if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182194d18;
      Characters_BaseCharacter__ToggleParticles
                ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).ColossalSteam1,
                 (__this->fields).EffectsEnabled != false,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).ColossalCache;
      if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182194d18;
      Characters_BaseCharacter__ToggleParticles
                ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).ColossalSteam2,false,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
      }
      pCVar5 = (Characters_BaseHitbox_o *)0x0;
      Characters_BaseCharacter__FadeSound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1,0.6,0.0,(MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).ColossalCache;
      if (pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) {
        pCVar5 = (pCVar1->fields).SteamHitbox;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar1 = (__this->fields).ColossalCache;
        if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
           (pCVar5 = (pCVar1->fields).SteamHitbox, pCVar5 == (Characters_BaseHitbox_o *)0x0))
        goto label_182194d18;
        Characters_BaseHitbox__Deactivate(pCVar5,(MethodInfo *)0x0);
      }
    }
    else {
      if (newState != 2) {
        return;
      }
      pCVar1 = (__this->fields).ColossalCache;
      if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182194d18;
      Characters_BaseCharacter__ToggleParticles
                ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).ColossalSteam1,false,(MethodInfo *)0x0)
      ;
      pCVar1 = (__this->fields).ColossalCache;
      if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182194d18;
      Characters_BaseCharacter__ToggleParticles
                ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).ColossalSteam2,
                 (__this->fields).EffectsEnabled != false,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
      }
      pCVar5 = (Characters_BaseHitbox_o *)0x0;
      Characters_BaseCharacter__FadeSound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1,0.0,1.0,(MethodInfo *)0x0);
      Characters_BaseCharacter__FadeSound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam2,1.0,0.0,(MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam2,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).ColossalCache;
      if (pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) {
        pCVar5 = (pCVar1->fields).SteamHitbox;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar1 = (__this->fields).ColossalCache;
        if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
           (pCVar5 = (pCVar1->fields).SteamHitbox, pCVar5 == (Characters_BaseHitbox_o *)0x0))
        goto label_182194d18;
        Characters_BaseHitbox__Activate(pCVar5,0.0,0.0,(MethodInfo *)0x0);
      }
    }
    x = (UnityEngine_Object_o *)0x0;
    pCVar1 = (__this->fields).ColossalCache;
    if (pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) {
      x = (UnityEngine_Object_o *)(pCVar1->fields).SteamWarningZone;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pCVar1 = (__this->fields).ColossalCache;
    if ((pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) &&
       (pUVar2 = (pCVar1->fields).SteamWarningZone, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).ColossalCache;
      if (pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) {
        pCVar4 = (pCVar1->fields).SteamWarningZoneComponent;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pCVar1 = (__this->fields).ColossalCache;
        if ((pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) &&
           (pCVar4 = (pCVar1->fields).SteamWarningZoneComponent,
           pCVar4 != (Characters_WallColossalSteamWarningZone_o *)0x0)) {
          Characters_WallColossalSteamWarningZone__Initialize(pCVar4,__this,(MethodInfo *)0x0);
          pCVar1 = (__this->fields).ColossalCache;
          if ((pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) &&
             (pCVar4 = (pCVar1->fields).SteamWarningZoneComponent,
             pCVar4 != (Characters_WallColossalSteamWarningZone_o *)0x0)) {
            bVar3 = true;
            goto label_182194a45;
          }
        }
      }
    }
  }
label_182194d18:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$ApplyLeftHandState
// il2cpp: void Characters_WallColossalShifter__ApplyLeftHandState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x1821943b0

void Characters_WallColossalShifter__ApplyLeftHandState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  Characters_BaseHitbox_o *__this_00;
  System_String_o *name;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Quaternion_o *pUVar6;
  Characters_WallColossalComponentCache_o *pCVar7;
  bool toggle;
  UnityEngine_Vector3_o local_58;
  UnityEngine_Quaternion_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184346d7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_184346d7e = '\x01';
  }
  (__this->fields)._leftHandState = newState;
  if ((newState == 0) || (newState == 1)) {
    pCVar7 = (__this->fields).ColossalCache;
    if (pCVar7 != (Characters_WallColossalComponentCache_o *)0x0) {
      toggle = false;
label_182194426:
      Characters_BaseCharacter__ToggleParticles
                ((Characters_BaseCharacter_o *)__this,(pCVar7->fields).LeftHandSteam,toggle,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  else if (newState == 2) {
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pCVar7 = (__this->fields).ColossalCache;
    if ((pCVar7 != (Characters_WallColossalComponentCache_o *)0x0) &&
       (__this_00 = (pCVar7->fields).HandLHitbox, __this_00 != (Characters_BaseHitbox_o *)0x0)) {
      name = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
      ;
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = UnityEngine_Transform__get_position(&local_58,__this_01,(MethodInfo *)0x0);
        uVar2 = (pUVar5->fields).x;
        uVar3 = (pUVar5->fields).y;
        fVar4 = (pUVar5->fields).z;
        local_58.fields.x = -1.5707964;
        local_58.fields.y = 0.0;
        local_58.fields.z = 0.0;
        pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Quaternion_o *)local_48,&local_58,(MethodInfo *)0x0);
        fVar1 = (__this->fields).Size;
        local_48[0].x = (pUVar6->fields).x;
        local_48[0].y = (pUVar6->fields).y;
        local_48[0].z = (pUVar6->fields).z;
        local_48[0].w = (pUVar6->fields).w;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        local_58.fields.x = (float)uVar2;
        local_58.fields.y = (float)uVar3;
        local_58.fields.z = fVar4;
        Effects_EffectSpawner__Spawn
                  (name,&local_58,(UnityEngine_Quaternion_o *)local_48,fVar1 * 100.0,true,
                   (System_Object_array *)0x0,(MethodInfo *)0x0);
        pCVar7 = (__this->fields).ColossalCache;
        if (pCVar7 != (Characters_WallColossalComponentCache_o *)0x0) {
          toggle = (__this->fields).EffectsEnabled != false;
          goto label_182194426;
        }
      }
    }
  }
  else {
    if (newState != 3) {
      return;
    }
    pCVar7 = (__this->fields).ColossalCache;
    if (pCVar7 != (Characters_WallColossalComponentCache_o *)0x0) {
      toggle = (__this->fields).EffectsEnabled != false;
      goto label_182194426;
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$ApplyRightHandState
// il2cpp: void Characters_WallColossalShifter__ApplyRightHandState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x1821945b0

void Characters_WallColossalShifter__ApplyRightHandState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  Characters_BaseHitbox_o *__this_00;
  System_String_o *name;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Quaternion_o *pUVar6;
  Characters_WallColossalComponentCache_o *pCVar7;
  bool toggle;
  UnityEngine_Vector3_o local_58;
  UnityEngine_Quaternion_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184346d7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_184346d7f = '\x01';
  }
  (__this->fields)._rightHandState = newState;
  if ((newState == 0) || (newState == 1)) {
    pCVar7 = (__this->fields).ColossalCache;
    if (pCVar7 != (Characters_WallColossalComponentCache_o *)0x0) {
      toggle = false;
label_182194626:
      Characters_BaseCharacter__ToggleParticles
                ((Characters_BaseCharacter_o *)__this,(pCVar7->fields).RightHandSteam,toggle,(MethodInfo *)0x0
                );
      return;
    }
  }
  else if (newState == 2) {
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pCVar7 = (__this->fields).ColossalCache;
    if ((pCVar7 != (Characters_WallColossalComponentCache_o *)0x0) &&
       (__this_00 = (pCVar7->fields).HandRHitbox, __this_00 != (Characters_BaseHitbox_o *)0x0)) {
      name = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
      ;
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = UnityEngine_Transform__get_position(&local_58,__this_01,(MethodInfo *)0x0);
        uVar2 = (pUVar5->fields).x;
        uVar3 = (pUVar5->fields).y;
        fVar4 = (pUVar5->fields).z;
        local_58.fields.x = -1.5707964;
        local_58.fields.y = 0.0;
        local_58.fields.z = 0.0;
        pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Quaternion_o *)local_48,&local_58,(MethodInfo *)0x0);
        fVar1 = (__this->fields).Size;
        local_48[0].x = (pUVar6->fields).x;
        local_48[0].y = (pUVar6->fields).y;
        local_48[0].z = (pUVar6->fields).z;
        local_48[0].w = (pUVar6->fields).w;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        local_58.fields.x = (float)uVar2;
        local_58.fields.y = (float)uVar3;
        local_58.fields.z = fVar4;
        Effects_EffectSpawner__Spawn
                  (name,&local_58,(UnityEngine_Quaternion_o *)local_48,fVar1 * 100.0,true,
                   (System_Object_array *)0x0,(MethodInfo *)0x0);
        pCVar7 = (__this->fields).ColossalCache;
        if (pCVar7 != (Characters_WallColossalComponentCache_o *)0x0) {
          toggle = (__this->fields).EffectsEnabled != false;
          goto label_182194626;
        }
      }
    }
  }
  else {
    if (newState != 3) {
      return;
    }
    pCVar7 = (__this->fields).ColossalCache;
    if (pCVar7 != (Characters_WallColossalComponentCache_o *)0x0) {
      toggle = (__this->fields).EffectsEnabled != false;
      goto label_182194626;
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$ApplyStunState
// il2cpp: void Characters_WallColossalShifter__ApplyStunState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x182194d20

void Characters_WallColossalShifter__ApplyStunState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalAnimations_o *pCVar2;
  Characters_AnimationHandler_o *__this_00;
  Characters_WallColossalShifter_c *pCVar3;
  bool bVar4;
  float fVar5;
  
  iVar1 = (__this->fields)._stunState;
  (__this->fields)._stunState = newState;
  if (newState == 0) {
    if ((iVar1 == 1) || (iVar1 == 2)) {
      pCVar2 = (__this->fields).ColossalAnimations;
      if (pCVar2 == (Characters_WallColossalAnimations_o *)0x0) goto label_182194e47;
      Characters_BaseCharacter__SetAnimationSpeed
                ((Characters_BaseCharacter_o *)__this,(pCVar2->fields).StunFallFaceAnim,1.0,(MethodInfo *)0x0)
      ;
      pCVar3 = __this->klass;
      (__this->fields)._stunAnimationTimeLeft = 0.0;
      bVar4 = (*(pCVar3->vtable)._74_IsMine.methodPtr)(__this,(pCVar3->vtable)._74_IsMine.method);
      if (((bVar4) && ((__this->fields).Dead == false)) && ((__this->fields).State == 0xd)) {
        (*(__this->klass->vtable)._162_Idle.methodPtr)(__this,(__this->klass->vtable)._162_Idle.method);
        return;
      }
    }
  }
  else if (newState == 1) {
    pCVar2 = (__this->fields).ColossalAnimations;
    if (pCVar2 != (Characters_WallColossalAnimations_o *)0x0) {
      Characters_BaseCharacter__PlayAnimation
                ((Characters_BaseCharacter_o *)__this,(pCVar2->fields).StunFallFaceAnim,0.0,(MethodInfo *)0x0)
      ;
      pCVar2 = (__this->fields).ColossalAnimations;
      if (pCVar2 != (Characters_WallColossalAnimations_o *)0x0) {
        Characters_BaseCharacter__SetAnimationSpeed
                  ((Characters_BaseCharacter_o *)__this,(pCVar2->fields).StunFallFaceAnim,1.0,
                   (MethodInfo *)0x0);
        pCVar2 = (__this->fields).ColossalAnimations;
        if ((pCVar2 != (Characters_WallColossalAnimations_o *)0x0) &&
           (__this_00 = (__this->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
          fVar5 = Characters_AnimationHandler__GetLength
                            (__this_00,(pCVar2->fields).StunFallFaceAnim,(MethodInfo *)0x0);
          (__this->fields)._stunAnimationTimeLeft = fVar5 * 0.85;
          return;
        }
      }
    }
label_182194e47:
    ThrowNullReferenceException();
  }
  return;
}


// Characters.WallColossalShifter$$LateUpdate
// il2cpp: void Characters_WallColossalShifter__LateUpdate (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182196390

void Characters_WallColossalShifter__LateUpdate(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_WallColossalComponentCache_o *pCVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  Characters_BaseHitbox_o *pCVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Quaternion_o *pUVar5;
  float fVar6;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (((__this->fields)._leftHandState == 2) || ((__this->fields)._leftHandState == 3)) {
    pCVar1 = (__this->fields).ColossalCache;
    if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182196707;
    pUVar4 = (pCVar1->fields).LeftHand;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_182196707;
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_28.x = (pUVar2->zeroVector).fields.x;
    local_28.y = (pUVar2->zeroVector).fields.y;
    local_28.z = (pUVar2->zeroVector).fields.z;
    UnityEngine_Transform__set_localScale(pUVar4,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).ColossalCache;
    if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar3 = (pCVar1->fields).HandLHitbox, pCVar3 == (Characters_BaseHitbox_o *)0x0)) goto label_182196707;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0);
    local_28.x = 0.0;
    local_28.y = 0.0;
    fVar6 = UnityEngine_Random__Range(-10.0,10.0,(MethodInfo *)0x0);
    local_28.z = fVar6 * 0.017453292;
  }
  else {
    pCVar1 = (__this->fields).ColossalCache;
    if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182196707;
    pUVar4 = (pCVar1->fields).LeftHand;
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_182196707;
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_28.x = (pUVar2->oneVector).fields.x;
    local_28.y = (pUVar2->oneVector).fields.y;
    local_28.z = (pUVar2->oneVector).fields.z;
    UnityEngine_Transform__set_localScale(pUVar4,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).ColossalCache;
    if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar3 = (pCVar1->fields).HandLHitbox, pCVar3 == (Characters_BaseHitbox_o *)0x0)) goto label_182196707;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0);
    local_28.x = 0.0;
    local_28.y = 0.0;
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  }
  pUVar5 = UnityEngine_Quaternion__Internal_FromEulerRad
                     (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_182196707;
  local_28.x = (pUVar5->fields).x;
  local_28.y = (pUVar5->fields).y;
  local_28.z = (pUVar5->fields).z;
  local_28.w = (pUVar5->fields).w;
  UnityEngine_Transform__set_localRotation(pUVar4,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
  if (((__this->fields)._rightHandState == 2) || ((__this->fields)._rightHandState == 3)) {
    pCVar1 = (__this->fields).ColossalCache;
    if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182196707;
    pUVar4 = (pCVar1->fields).RightHand;
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_182196707;
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_28.x = (pUVar2->zeroVector).fields.x;
    local_28.y = (pUVar2->zeroVector).fields.y;
    local_28.z = (pUVar2->zeroVector).fields.z;
    UnityEngine_Transform__set_localScale(pUVar4,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).ColossalCache;
    if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar3 = (pCVar1->fields).HandRHitbox, pCVar3 == (Characters_BaseHitbox_o *)0x0)) goto label_182196707;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0);
    local_28.x = 0.0;
    local_28.y = 0.0;
    fVar6 = UnityEngine_Random__Range(-10.0,10.0,(MethodInfo *)0x0);
    local_28.z = fVar6 * 0.017453292;
  }
  else {
    pCVar1 = (__this->fields).ColossalCache;
    if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182196707;
    pUVar4 = (pCVar1->fields).RightHand;
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_182196707;
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_28.x = (pUVar2->oneVector).fields.x;
    local_28.y = (pUVar2->oneVector).fields.y;
    local_28.z = (pUVar2->oneVector).fields.z;
    UnityEngine_Transform__set_localScale(pUVar4,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).ColossalCache;
    if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar3 = (pCVar1->fields).HandRHitbox, pCVar3 == (Characters_BaseHitbox_o *)0x0)) goto label_182196707;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0);
    local_28.x = 0.0;
    local_28.y = 0.0;
    local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  }
  pUVar5 = UnityEngine_Quaternion__Internal_FromEulerRad
                     (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    local_28.x = (pUVar5->fields).x;
    local_28.y = (pUVar5->fields).y;
    local_28.z = (pUVar5->fields).z;
    local_28.w = (pUVar5->fields).w;
    UnityEngine_Transform__set_localRotation(pUVar4,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    return;
  }
label_182196707:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$Update
// il2cpp: void Characters_WallColossalShifter__Update (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182199fb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219a049: movaps xmm7, xmmword ptr [rsp + 0x20]

void Characters_WallColossalShifter__Update(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_WallColossalAnimations_o *pCVar1;
  float fVar2;
  float fVar3;
  
  Characters_BaseShifter__Update((Characters_BaseShifter_o *)__this,(MethodInfo *)0x0);
  Characters_WallColossalShifter__UpdateSteam(__this,(MethodInfo *)0x0);
  Characters_WallColossalShifter__UpdateHandSeverWindows(__this,(MethodInfo *)0x0);
  Characters_WallColossalShifter__UpdateStunRecovery(__this,(MethodInfo *)0x0);
  if (((__this->fields)._stunState == 1) && (fVar3 = (__this->fields)._stunAnimationTimeLeft, 0.0 < fVar3)) {
    fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 - fVar2;
    (__this->fields)._stunAnimationTimeLeft = fVar3;
    if (fVar3 <= 0.0) {
      pCVar1 = (__this->fields).ColossalAnimations;
      if (pCVar1 == (Characters_WallColossalAnimations_o *)0x0) {
        ThrowNullReferenceException();
      }
      Characters_BaseCharacter__SetAnimationSpeed
                ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).StunFallFaceAnim,0.0,(MethodInfo *)0x0)
      ;
      (__this->fields)._stunAnimationTimeLeft = 0.0;
    }
  }
  return;
}


// Characters.WallColossalShifter$$ToggleParticleSystem
// il2cpp: void Characters_WallColossalShifter__ToggleParticleSystem (Characters_WallColossalShifter_o* __this, UnityEngine_ParticleSystem_o* system, bool enabled, const MethodInfo* method);
// 0x182198770

void Characters_WallColossalShifter__ToggleParticleSystem
               (Characters_WallColossalShifter_o *__this,UnityEngine_ParticleSystem_o *system,bool enabled,
               MethodInfo *method)

{
  char cVar1;
  
  if (enabled) {
    cVar1 = (__this->fields).EffectsEnabled;
  }
  else {
    cVar1 = '\0';
  }
  if (__this != (Characters_WallColossalShifter_o *)0x0) {
    Characters_BaseCharacter__ToggleParticles
              ((Characters_BaseCharacter_o *)__this,system,cVar1 != '\0',(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$StopSteam
// il2cpp: void Characters_WallColossalShifter__StopSteam (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182198650

void Characters_WallColossalShifter__StopSteam(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res8 [8];
  
  if (Il2CppMethodInitialized_184346d80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSteamStateRPC");
    Il2CppMethodInitialized_184346d80 = '\x01';
  }
  if (((__this->fields)._steamState == 0) ||
     (bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                        (__this,(__this->klass->vtable)._74_IsMine.method), !bVar1)) {
    return;
  }
  __this_00 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_res8[0] = 0;
  pIVar2 = il2cpp_value_box(g_data_184354dd8,local_res8);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SetSteamStateRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$StartSteam
// il2cpp: void Characters_WallColossalShifter__StartSteam (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x1821984a0

void Characters_WallColossalShifter__StartSteam(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res8 [8];
  
  if (Il2CppMethodInitialized_184346d81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSteamStateRPC");
    Il2CppMethodInitialized_184346d81 = '\x01';
  }
  (__this->fields)._steamTimeLeft = (__this->fields).WarningSteamTime;
  (__this->fields)._steamBlowAwayTimeLeft = (__this->fields).BlowAwaySteamTime;
  (__this->fields)._steamDamageTimeLeft = (__this->fields).SteamDamageInterval;
  bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar1) {
    return;
  }
  __this_00 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_res8[0] = 1;
  pIVar2 = il2cpp_value_box(g_data_184354dd8,local_res8);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SetSteamStateRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$UpdateSteam
// il2cpp: void Characters_WallColossalShifter__UpdateSteam (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182199490

void Characters_WallColossalShifter__UpdateSteam(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_WallColossalComponentCache_o *pCVar2;
  UnityEngine_Component_o *pUVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  float fVar8;
  undefined1 local_res8 [8];
  
  if (Il2CppMethodInitialized_184346d82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSteamStateRPC");
    Il2CppMethodInitialized_184346d82 = '\x01';
  }
  if ((__this->fields)._steamState != 0) {
    fVar1 = (__this->fields)._steamTimeLeft;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._steamTimeLeft = fVar1 - fVar8;
    fVar1 = (__this->fields)._steamBlowAwayTimeLeft;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._steamBlowAwayTimeLeft = fVar1 - fVar8;
    fVar1 = (__this->fields)._steamDamageTimeLeft;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._steamDamageTimeLeft = fVar1 - fVar8;
    if ((__this->fields)._steamBlowAwayTimeLeft <= 0.0) {
      pCVar2 = (__this->fields).ColossalCache;
      if ((pCVar2 == (Characters_WallColossalComponentCache_o *)0x0) ||
         (pUVar3 = (UnityEngine_Component_o *)(pCVar2->fields).NapeHurtbox,
         pUVar3 == (UnityEngine_Component_o *)0x0)) goto label_1821996e5;
      pUVar5 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
      Characters_WallColossalShifter__BlowAwayHumans
                (__this,pUVar5,100.0,(__this->fields).SteamBlowAwayForce,(MethodInfo *)0x0);
      (__this->fields)._steamBlowAwayTimeLeft = (__this->fields).BlowAwaySteamTime;
    }
    if (((__this->fields)._steamState == 2) && ((__this->fields)._steamDamageTimeLeft <= 0.0)) {
      pCVar2 = (__this->fields).ColossalCache;
      if ((pCVar2 == (Characters_WallColossalComponentCache_o *)0x0) ||
         (pUVar3 = (UnityEngine_Component_o *)(pCVar2->fields).NapeHurtbox,
         pUVar3 == (UnityEngine_Component_o *)0x0)) {
label_1821996e5:
        ThrowNullReferenceException();
      }
      pUVar5 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
      Characters_WallColossalShifter__BlowAwayHumans
                (__this,pUVar5,100.0,(__this->fields).SteamBlowAwayForce,(MethodInfo *)0x0);
      (__this->fields)._steamDamageTimeLeft = (__this->fields).SteamDamageInterval;
    }
    if ((((__this->fields)._steamTimeLeft <= 0.0) && ((__this->fields)._steamState == 1)) &&
       (bVar4 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                          (__this,(__this->klass->vtable)._74_IsMine.method), bVar4)) {
      __this_00 = Photon_Pun_MonoBehaviourPun__get_photonView
                            ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res8[0] = 2;
      pIVar6 = il2cpp_value_box(g_data_184354dd8,local_res8);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((parameters->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar6;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar6);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetSteamStateRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.WallColossalShifter$$UpdateHandSeverWindows
// il2cpp: void Characters_WallColossalShifter__UpdateHandSeverWindows (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182199180

void Characters_WallColossalShifter__UpdateHandSeverWindows
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_c *pCVar1;
  bool bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  
  if (Il2CppMethodInitialized_184346d83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetRightHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLeftHandStateRPC");
    Il2CppMethodInitialized_184346d83 = '\x01';
  }
  if ((__this->fields)._stunState == 0) {
    if (((__this->fields)._leftHandState == 2) &&
       (fVar9 = (__this->fields).LeftHandSeverTimeLeft, 0.0 < fVar9)) {
      fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar9 = fVar9 - fVar8;
      (__this->fields).LeftHandSeverTimeLeft = fVar9;
      if (fVar9 <= 0.0) {
        pCVar1 = __this->klass;
        (__this->fields).LeftHandSeverTimeLeft = 0.0;
        bVar2 = (*(pCVar1->vtable)._74_IsMine.methodPtr)(__this,(pCVar1->vtable)._74_IsMine.method);
        if (bVar2) {
          iVar7 = (__this->fields).MaxLeftHandHealth;
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          pCVar1 = __this->klass;
          (__this->fields).CurrentLeftHandHealth = iVar7;
          (*(pCVar1->vtable)._206_OnLeftHandHealthChange.methodPtr)
                    (__this,(pCVar1->vtable)._206_OnLeftHandHealthChange.method);
          pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          local_res8[0] = 0;
          pIVar5 = il2cpp_value_box(g_data_184354dd8,local_res8);
          if (pSVar4 == (System_Object_array *)0x0) {
label_18219947a:
            ThrowNullReferenceException();
          }
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
          }
          if ((int)pSVar4->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[0] = pIVar5;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
          if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto label_18219947a;
          Photon_Pun_PhotonView__RPC(pPVar3,"SetLeftHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
        }
      }
    }
    if (((__this->fields)._rightHandState == 2) &&
       (fVar9 = (__this->fields).RightHandSeverTimeLeft, 0.0 < fVar9)) {
      fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar9 = fVar9 - fVar8;
      (__this->fields).RightHandSeverTimeLeft = fVar9;
      if (fVar9 <= 0.0) {
        pCVar1 = __this->klass;
        (__this->fields).RightHandSeverTimeLeft = 0.0;
        bVar2 = (*(pCVar1->vtable)._74_IsMine.methodPtr)(__this,(pCVar1->vtable)._74_IsMine.method);
        if (bVar2) {
          iVar7 = (__this->fields).MaxRightHandHealth;
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          pCVar1 = __this->klass;
          (__this->fields).CurrentRightHandHealth = iVar7;
          (*(pCVar1->vtable)._207_OnRightHandHealthChange.methodPtr)
                    (__this,(pCVar1->vtable)._207_OnRightHandHealthChange.method);
          pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          local_res8[0] = 0;
          pIVar5 = il2cpp_value_box(g_data_184354dd8,local_res8);
          if (pSVar4 != (System_Object_array *)0x0) {
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) {
              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
            }
            if ((int)pSVar4->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            pSVar4->m_Items[0] = pIVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pIVar5);
            if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(pPVar3,"SetRightHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
              return;
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  return;
}


// Characters.WallColossalShifter$$UpdateStunRecovery
// il2cpp: void Characters_WallColossalShifter__UpdateStunRecovery (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182199790
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182199b41: mov rdx, qword ptr [rip + 0x1ef5780]  ; "SetStunRecoveryTimesRPC"
// asm:   0x182199b48: mov r9, rdi
// asm:   0x182199b4b: mov qword ptr [rsp + 0x20], rsi
// asm:   0x182199b50: xor r8d, r8d
// asm:   0x182199b53: mov rcx, r14
// asm:   0x182199ed3: mov rdx, qword ptr [rip + 0x1ef124e]  ; "SetHandSeverTimesRPC"
// asm:   0x182199eda: mov r9, rbx
// asm:   0x182199edd: mov qword ptr [rsp + 0x20], rsi
// asm:   0x182199ee2: xor r8d, r8d
// asm:   0x182199ee5: mov rcx, rbp
// asm:   0x182199ee8: jmp 0x182199b56

void Characters_WallColossalShifter__UpdateStunRecovery
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_c *pCVar1;
  bool bVar2;
  int iVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  System_String_o *methodName;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_58;
  float local_54 [11];
  
  if (Il2CppMethodInitialized_184346d84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetRightHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLeftHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunRecoveryTimesRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHandSeverTimesRPC");
    Il2CppMethodInitialized_184346d84 = '\x01';
  }
  if (((__this->fields)._stunState != 1) || (fVar9 = (__this->fields).StunTimeLeft, fVar9 <= 0.0)) {
    if ((__this->fields)._stunState != 2) {
      return;
    }
    fVar9 = (__this->fields).RecoveryTimeLeft;
    if (fVar9 <= 0.0) {
      return;
    }
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar9 = fVar9 - fVar8;
    (__this->fields).RecoveryTimeLeft = fVar9;
    if (0.0 < fVar9) {
      return;
    }
    pCVar1 = __this->klass;
    (__this->fields).RecoveryTimeLeft = 0.0;
    bVar2 = (*(pCVar1->vtable)._74_IsMine.methodPtr)(__this,(pCVar1->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    iVar3 = (__this->fields).MaxLeftHandHealth;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    (__this->fields).CurrentLeftHandHealth = iVar3;
    (*(__this->klass->vtable)._206_OnLeftHandHealthChange.methodPtr)
              (__this,(__this->klass->vtable)._206_OnLeftHandHealthChange.method);
    iVar3 = (__this->fields).MaxRightHandHealth;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    (__this->fields).CurrentRightHandHealth = iVar3;
    (*(__this->klass->vtable)._207_OnRightHandHealthChange.methodPtr)
              (__this,(__this->klass->vtable)._207_OnRightHandHealthChange.method);
    pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res8[0] = 0;
    pIVar6 = il2cpp_value_box(g_data_184354dd8,local_res8);
    if (pSVar5 != (System_Object_array *)0x0) {
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
      if ((int)pSVar5->max_length == 0) goto label_182199f9f;
      pSVar5->m_Items[0] = pIVar6;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
      if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar4,"SetStunStateRPC",0,pSVar5,(MethodInfo *)0x0);
        pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                           ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
        pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        local_res18[0] = 0;
        pIVar6 = il2cpp_value_box(g_data_184354dd8,local_res18);
        if (pSVar5 != (System_Object_array *)0x0) {
          if ((pIVar6 != (Il2CppObject *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((int)pSVar5->max_length == 0) goto label_182199f9f;
          pSVar5->m_Items[0] = pIVar6;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
          if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar4,"SetLeftHandStateRPC",0,pSVar5,(MethodInfo *)0x0);
            pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                               ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
            pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
            local_res20[0] = 0;
            pIVar6 = il2cpp_value_box(g_data_184354dd8,local_res20);
            if (pSVar5 != (System_Object_array *)0x0) {
              if ((pIVar6 != (Il2CppObject *)0x0) &&
                 (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                 pIVar7 == (Il2CppObject *)0x0)) {
                pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
              }
              if ((int)pSVar5->max_length == 0) goto label_182199f9f;
              pSVar5->m_Items[0] = pIVar6;
              Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
              if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(pPVar4,"SetRightHandStateRPC",0,pSVar5,(MethodInfo *)0x0);
                (__this->fields).LeftHandSeverTimeLeft = 0.0;
                (__this->fields).RightHandSeverTimeLeft = 0.0;
                pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                                   ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
                pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                local_54[0] = 0.0;
                pIVar6 = il2cpp_value_box(g_data_184354e38,local_54);
                if (pSVar5 != (System_Object_array *)0x0) {
                  if ((pIVar6 != (Il2CppObject *)0x0) &&
                     (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                     pIVar7 == (Il2CppObject *)0x0)) {
                    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                  }
                  if ((int)pSVar5->max_length != 0) {
                    pSVar5->m_Items[0] = pIVar6;
                    Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
                    local_58 = 0;
                    pIVar6 = il2cpp_value_box(g_data_184354e38,&local_58);
                    if ((pIVar6 != (Il2CppObject *)0x0) &&
                       (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                       pIVar7 == (Il2CppObject *)0x0)) {
                      pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                    }
                    if (1 < (uint)pSVar5->max_length) {
                      pSVar5->m_Items[1] = pIVar6;
                      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,pIVar6);
                      methodName = "SetHandSeverTimesRPC";
                      if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) goto label_182199b56;
                      goto label_182199eed;
                    }
                  }
label_182199f9f:
                  ThrowIndexOutOfRangeException();
                }
              }
            }
          }
        }
      }
    }
label_182199eed:
    ThrowNullReferenceException();
  }
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar9 = fVar9 - fVar8;
  (__this->fields).StunTimeLeft = fVar9;
  if (0.0 < fVar9) {
    return;
  }
  pCVar1 = __this->klass;
  (__this->fields).StunTimeLeft = 0.0;
  bVar2 = (*(pCVar1->vtable)._74_IsMine.methodPtr)(__this,(pCVar1->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  (__this->fields).RecoveryTimeLeft = (__this->fields).RecoveryDuration;
  pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_res8[0] = 2;
  pIVar6 = il2cpp_value_box(g_data_184354dd8,local_res8);
  if (pSVar5 != (System_Object_array *)0x0) {
    if ((pIVar6 != (Il2CppObject *)0x0) &&
       (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
       pIVar7 == (Il2CppObject *)0x0)) {
      pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
    }
    if ((int)pSVar5->max_length == 0) goto label_182199f43;
    pSVar5->m_Items[0] = pIVar6;
    Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
    if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(pPVar4,"SetStunStateRPC",0,pSVar5,(MethodInfo *)0x0);
      pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_res18[0] = 3;
      pIVar6 = il2cpp_value_box(g_data_184354dd8,local_res18);
      if (pSVar5 != (System_Object_array *)0x0) {
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if ((int)pSVar5->max_length == 0) goto label_182199f43;
        pSVar5->m_Items[0] = pIVar6;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
        if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(pPVar4,"SetLeftHandStateRPC",0,pSVar5,(MethodInfo *)0x0);
          pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          local_res20[0] = 3;
          pIVar6 = il2cpp_value_box(g_data_184354dd8,local_res20);
          if (pSVar5 != (System_Object_array *)0x0) {
            if ((pIVar6 != (Il2CppObject *)0x0) &&
               (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
               pIVar7 == (Il2CppObject *)0x0)) {
              pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
            }
            if ((int)pSVar5->max_length == 0) goto label_182199f43;
            pSVar5->m_Items[0] = pIVar6;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
            if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(pPVar4,"SetRightHandStateRPC",0,pSVar5,(MethodInfo *)0x0);
              pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                                 ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
              pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
              local_58 = 0;
              pIVar6 = il2cpp_value_box(g_data_184354e38,&local_58);
              if (pSVar5 != (System_Object_array *)0x0) {
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((int)pSVar5->max_length != 0) {
                  pSVar5->m_Items[0] = pIVar6;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
                  local_54[0] = (__this->fields).RecoveryTimeLeft;
                  pIVar6 = il2cpp_value_box(g_data_184354e38,local_54);
                  if ((pIVar6 != (Il2CppObject *)0x0) &&
                     (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                     pIVar7 == (Il2CppObject *)0x0)) {
                    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                  }
                  if (1 < (uint)pSVar5->max_length) {
                    pSVar5->m_Items[1] = pIVar6;
                    Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,pIVar6);
                    methodName = "SetStunRecoveryTimesRPC";
                    if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
label_182199b56:
                      Photon_Pun_PhotonView__RPC(pPVar4,methodName,0,pSVar5,(MethodInfo *)0x0);
                      return;
                    }
                    goto label_182199f49;
                  }
                }
label_182199f43:
                ThrowIndexOutOfRangeException();
              }
            }
          }
        }
      }
    }
  }
label_182199f49:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$UpdateStunAnimation
// il2cpp: void Characters_WallColossalShifter__UpdateStunAnimation (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182199700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182199774: movaps xmm7, xmmword ptr [rsp + 0x20]

void Characters_WallColossalShifter__UpdateStunAnimation
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_WallColossalAnimations_o *pCVar1;
  float fVar2;
  float fVar3;
  
  if (((__this->fields)._stunState == 1) && (fVar3 = (__this->fields)._stunAnimationTimeLeft, 0.0 < fVar3)) {
    fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 - fVar2;
    (__this->fields)._stunAnimationTimeLeft = fVar3;
    if (fVar3 <= 0.0) {
      pCVar1 = (__this->fields).ColossalAnimations;
      if (pCVar1 == (Characters_WallColossalAnimations_o *)0x0) {
        ThrowNullReferenceException();
      }
      Characters_BaseCharacter__SetAnimationSpeed
                ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).StunFallFaceAnim,0.0,(MethodInfo *)0x0)
      ;
      (__this->fields)._stunAnimationTimeLeft = 0.0;
    }
  }
  return;
}


// Characters.WallColossalShifter$$DeactivateAllHitboxes
// il2cpp: void Characters_WallColossalShifter__DeactivateAllHitboxes (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x182195710
// eh: try 0x1821957d2..0x182195886 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182195855: mov rdx, qword ptr [rip + 0x1ee01fc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose
// asm:   0x18219585c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182195861: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182195866: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18219586b: test rcx, rcx
// asm:   0x18219586e: jne 0x182195886
// asm:   0x182195886: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Characters_WallColossalShifter__DeactivateAllHitboxes
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  System_Collections_Generic_List_BaseHitbox__o *__this_00;
  Characters_WallColossalComponentCache_o *pCVar2;
  Characters_BaseHitbox_o *y;
  Il2CppObject *__this_01;
  bool bVar3;
  undefined1 local_60 [16];
  Characters_BaseHitbox_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184346d85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseHitbox_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346d85 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields).BaseTitanCache;
  if ((pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Hitboxes, __this_00 != (System_Collections_Generic_List_BaseHitbox__o *)0x0
     )) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseHitbox_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = (Il2CppObject *)local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_MoveNext);
      __this_01 = local_48.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose);
        return;
      }
      pCVar2 = (__this->fields).ColossalCache;
      if (pCVar2 == (Characters_WallColossalComponentCache_o *)0x0) break;
      y = (pCVar2->fields).SteamHitbox;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if ((!bVar3) || ((__this->fields)._steamState != 2)) {
        if ((Characters_BaseHitbox_o *)__this_01 == (Characters_BaseHitbox_o *)0x0) {
          ThrowNullReferenceException();
        }
        Characters_BaseHitbox__Deactivate((Characters_BaseHitbox_o *)__this_01,(MethodInfo *)0x0);
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$UpdateAttack
// il2cpp: void Characters_WallColossalShifter__UpdateAttack (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x1821987a0
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182198e5d: xor r9d, r9d
// asm:   0x182198e60: movaps xmm2, xmm0
// asm:   0x182198e63: xorps xmm1, xmm1
// asm:   0x182198e66: mov rcx, rdi
// asm:   0x182198e69: call 0x182111190  ; Characters_BaseHitbox__Activate()
// asm:   0x182198e6e: jmp 0x182198be0
// asm:   0x182198eac: mov rdx, qword ptr [rdx + 0xb8]
// asm:   0x182198eb3: xor r8d, r8d
// asm:   0x182198eb6: mov rcx, rbx
// asm:   0x182198eb9: mov rdx, qword ptr [rdx + 0x18]
// asm:   0x182198ebd: call 0x18210e430  ; Characters_BaseCharacter__PlaySound()
// asm:   0x182198ec2: mov dword ptr [rbx + 0x234], 2
// asm:   0x182198ecc: jmp 0x182198be0
// asm:   0x182198ffb: mulss xmm6, dword ptr [rip + 0x11bfce1]
// asm:   0x182199003: lea r8, [rbp - 9]
// asm:   0x182199007: xor eax, eax
// asm:   0x182199009: lea rdx, [rbp - 0x19]
// asm:   0x18219900d: mov rcx, rdi
// asm:   0x182199010: movdqa xmmword ptr [rbp - 9], xmm8
// asm:   0x182199016: mov qword ptr [rsp + 0x30], rax
// asm:   0x18219901b: mov qword ptr [rsp + 0x28], rax
// asm:   0x182199020: movaps xmm3, xmm6
// asm:   0x182199023: movsd qword ptr [rbp - 0x19], xmm7
// asm:   0x182199028: mov dword ptr [rbp - 0x11], esi
// asm:   0x18219902b: mov byte ptr [rsp + 0x20], 1
// asm:   0x182199030: call 0x181e658a0  ; Effects_EffectSpawner__Spawn()
// asm:   0x182199035: jmp 0x182198be0
// asm:   0x182199136: mov rdx, qword ptr [rip + 0x1ef60ab]  ; "SetSteamStateRPC"
// asm:   0x18219913d: xor eax, eax
// asm:   0x18219913f: mov r9, rbx
// asm:   0x182199142: mov qword ptr [rsp + 0x20], rax
// asm:   0x182199147: xor r8d, r8d
// asm:   0x18219914a: mov rcx, rsi
// asm:   0x18219914d: call 0x181d4d940  ; Photon_Pun_PhotonView__RPC()
// asm:   0x182199152: jmp 0x182198be0

void Characters_WallColossalShifter__UpdateAttack(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  Characters_WallColossalAnimations_o *pCVar17;
  Characters_WallColossalComponentCache_o *pCVar18;
  System_String_o *pSVar19;
  UnityEngine_Vector3_StaticFields *pUVar20;
  Characters_BaseTitanComponentCache_o *pCVar21;
  bool bVar22;
  UnityEngine_Transform_o *pUVar23;
  UnityEngine_Vector3_o *pUVar24;
  UnityEngine_Quaternion_o *pUVar25;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar26;
  Il2CppObject *pIVar27;
  Characters_BaseHitbox_o *pCVar28;
  float fVar29;
  undefined1 local_res8 [8];
  UnityEngine_Vector3_o local_78;
  UnityEngine_Quaternion_Fields local_68 [6];
  
  if (Il2CppMethodInitialized_184346d86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_184346d86 = '\x01';
  }
  fVar29 = (*(__this->klass->vtable)._193_GetAnimationTime.methodPtr)
                     (__this,(__this->klass->vtable)._193_GetAnimationTime.method);
  pCVar17 = (__this->fields).ColossalAnimations;
  if (pCVar17 == (Characters_WallColossalAnimations_o *)0x0) goto label_182199157;
  bVar22 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar17->fields).AttackSteam,(MethodInfo *)0x0
                     );
  if (bVar22) {
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    if (fVar29 <= 0.37) {
      return;
    }
    bVar22 = Il2CppMethodInitialized_184346d81 == '\0';
    (__this->fields)._currentAttackStage = 1;
    if (bVar22) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      il2cpp_codegen_initialize_runtime_metadata(&"SetSteamStateRPC");
      Il2CppMethodInitialized_184346d81 = '\x01';
    }
    (__this->fields)._steamTimeLeft = (__this->fields).WarningSteamTime;
    (__this->fields)._steamBlowAwayTimeLeft = (__this->fields).BlowAwaySteamTime;
    (__this->fields)._steamDamageTimeLeft = (__this->fields).SteamDamageInterval;
    bVar22 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method)
    ;
    if (!bVar22) {
      return;
    }
    __this_00 = Photon_Pun_MonoBehaviourPun__get_photonView
                          ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_res8[0] = 1;
    pIVar26 = il2cpp_value_box(g_data_184354dd8,local_res8);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar26 != (Il2CppObject *)0x0) &&
         (pIVar27 = il2cpp_vm_Object_IsInst(pIVar26,(((parameters->obj).klass)->_1).element_class),
         pIVar27 == (Il2CppObject *)0x0)) {
        pIVar26 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar26,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar26;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar26);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SetSteamStateRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  pCVar17 = (__this->fields).ColossalAnimations;
  if (pCVar17 == (Characters_WallColossalAnimations_o *)0x0) goto label_182199157;
  bVar22 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar17->fields).AttackKick,(MethodInfo *)0x0)
  ;
  if (bVar22) {
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    if (fVar29 <= 0.42) {
      return;
    }
    pCVar18 = (__this->fields).ColossalCache;
    (__this->fields)._currentAttackStage = 1;
    if (pCVar18 != (Characters_WallColossalComponentCache_o *)0x0) {
      pCVar28 = (pCVar18->fields).FootRHitbox;
      fVar29 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                         (__this,0.1,(__this->klass->vtable)._194_GetHitboxTime.method);
      if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
        Characters_BaseHitbox__Activate(pCVar28,0.0,fVar29,(MethodInfo *)0x0);
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        pCVar18 = (__this->fields).ColossalCache;
        if ((pCVar18 != (Characters_WallColossalComponentCache_o *)0x0) &&
           (pCVar28 = (pCVar18->fields).FootRHitbox, pCVar28 != (Characters_BaseHitbox_o *)0x0)) {
          pSVar19 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
          pUVar23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar28,(MethodInfo *)0x0)
          ;
          if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
            pUVar24 = UnityEngine_Transform__get_position(&local_78,pUVar23,(MethodInfo *)0x0);
            pCVar21 = (__this->fields).BaseTitanCache;
            if ((pCVar21 != (Characters_BaseTitanComponentCache_o *)0x0) &&
               (pUVar23 = (pCVar21->fields).Transform, pUVar23 != (UnityEngine_Transform_o *)0x0)) {
              uVar9 = (pUVar24->fields).x;
              uVar16 = (pUVar24->fields).y;
              fVar1 = (pUVar24->fields).z;
              pUVar25 = UnityEngine_Transform__get_rotation
                                  ((UnityEngine_Quaternion_o *)local_68,pUVar23,(MethodInfo *)0x0);
              fVar29 = (__this->fields).Size;
              local_68[0].x = (pUVar25->fields).x;
              local_68[0].y = (pUVar25->fields).y;
              local_68[0].z = (pUVar25->fields).z;
              local_68[0].w = (pUVar25->fields).w;
              if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
              }
              local_78.fields.x = (float)uVar9;
              local_78.fields.y = (float)uVar16;
              local_78.fields.z = fVar1;
              Effects_EffectSpawner__Spawn
                        (pSVar19,&local_78,(UnityEngine_Quaternion_o *)local_68,fVar29 * 5.0,true,
                         (System_Object_array *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    goto label_182199157;
  }
  pCVar17 = (__this->fields).ColossalAnimations;
  if (pCVar17 == (Characters_WallColossalAnimations_o *)0x0) goto label_182199157;
  bVar22 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar17->fields).AttackSweep,(MethodInfo *)0x0
                     );
  if (bVar22) {
    if (((__this->fields)._currentAttackStage != 0) || (fVar29 <= 0.38)) {
      if ((__this->fields)._currentAttackStage != 1) {
        return;
      }
      if (fVar29 <= 0.45) {
        return;
      }
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
                 (MethodInfo *)0x0);
      (__this->fields)._currentAttackStage = 2;
      return;
    }
    pCVar18 = (__this->fields).ColossalCache;
    (__this->fields)._currentAttackStage = 1;
    if (pCVar18 != (Characters_WallColossalComponentCache_o *)0x0) {
      pCVar28 = (pCVar18->fields).ForearmRHitbox;
      fVar29 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                         (__this,0.14,(__this->klass->vtable)._194_GetHitboxTime.method);
      if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
        Characters_BaseHitbox__Activate(pCVar28,0.0,fVar29,(MethodInfo *)0x0);
        return;
      }
    }
    goto label_182199157;
  }
  pCVar17 = (__this->fields).ColossalAnimations;
  if (pCVar17 == (Characters_WallColossalAnimations_o *)0x0) goto label_182199157;
  bVar22 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar17->fields).AttackWallSlap1L,
                      (MethodInfo *)0x0);
  if (bVar22) {
label_182198c26:
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    if (fVar29 <= 0.34) {
      return;
    }
    (__this->fields)._currentAttackStage = 1;
    if (((__this->fields)._leftHandState != 0) && ((__this->fields)._leftHandState != 1)) {
      return;
    }
    pCVar18 = (__this->fields).ColossalCache;
    if (pCVar18 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182199157;
    pCVar28 = (pCVar18->fields).HandLHitbox;
    fVar29 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._194_GetHitboxTime.method);
    if (pCVar28 == (Characters_BaseHitbox_o *)0x0) goto label_182199157;
    Characters_BaseHitbox__Activate(pCVar28,0.0,fVar29,(MethodInfo *)0x0);
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pCVar18 = (__this->fields).ColossalCache;
    if ((pCVar18 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar28 = (pCVar18->fields).HandLHitbox, pCVar28 == (Characters_BaseHitbox_o *)0x0))
    goto label_182199157;
    pSVar19 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom8;
    pUVar23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar28,(MethodInfo *)0x0);
    if (pUVar23 == (UnityEngine_Transform_o *)0x0) goto label_182199157;
    pUVar24 = UnityEngine_Transform__get_position(&local_78,pUVar23,(MethodInfo *)0x0);
    uVar7 = (pUVar24->fields).x;
    uVar14 = (pUVar24->fields).y;
    fVar29 = (pUVar24->fields).z;
    if (Il2CppMethodInitialized_18434494b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18434494b = '\x01';
    }
    local_78.fields.x = -1.5707964;
    local_78.fields.y = 0.0;
    local_78.fields.z = 0.0;
    pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = (pUVar20->downVector).fields.z;
    uVar8 = (pUVar20->downVector).fields.x;
    uVar15 = (pUVar20->downVector).fields.y;
    pUVar25 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)local_68,&local_78,(MethodInfo *)0x0);
    local_68[0].x = (pUVar25->fields).x;
    local_68[0].y = (pUVar25->fields).y;
    local_68[0].z = (pUVar25->fields).z;
    local_68[0].w = (pUVar25->fields).w;
    fVar2 = (__this->fields).Size;
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    local_78.fields.x = (float)uVar8 * 8.0 + (float)uVar7;
    local_78.fields.y = (float)uVar15 * 8.0 + (float)uVar14;
    local_78.fields.z = fVar1 * 8.0 + fVar29;
    Effects_EffectSpawner__Spawn
              (pSVar19,&local_78,(UnityEngine_Quaternion_o *)local_68,fVar2 * 4.0,true,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
    pCVar18 = (__this->fields).ColossalCache;
    if (pCVar18 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182199157;
    pCVar28 = (pCVar18->fields).HandLHitbox;
  }
  else {
    pCVar17 = (__this->fields).ColossalAnimations;
    if (pCVar17 == (Characters_WallColossalAnimations_o *)0x0) goto label_182199157;
    bVar22 = System_String__op_Equality
                       ((__this->fields)._currentAttackAnimation,(pCVar17->fields).AttackWallSlap2L,
                        (MethodInfo *)0x0);
    if (bVar22) goto label_182198c26;
    pCVar17 = (__this->fields).ColossalAnimations;
    if (pCVar17 == (Characters_WallColossalAnimations_o *)0x0) goto label_182199157;
    bVar22 = System_String__op_Equality
                       ((__this->fields)._currentAttackAnimation,(pCVar17->fields).AttackWallSlap1R,
                        (MethodInfo *)0x0);
    if (!bVar22) {
      pCVar17 = (__this->fields).ColossalAnimations;
      if (pCVar17 == (Characters_WallColossalAnimations_o *)0x0) goto label_182199157;
      bVar22 = System_String__op_Equality
                         ((__this->fields)._currentAttackAnimation,(pCVar17->fields).AttackWallSlap2R,
                          (MethodInfo *)0x0);
      if (!bVar22) {
        return;
      }
    }
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    if (fVar29 <= 0.34) {
      return;
    }
    (__this->fields)._currentAttackStage = 1;
    if (((__this->fields)._rightHandState != 0) && ((__this->fields)._rightHandState != 1)) {
      return;
    }
    pCVar18 = (__this->fields).ColossalCache;
    if (pCVar18 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182199157;
    pCVar28 = (pCVar18->fields).HandRHitbox;
    fVar29 = (*(__this->klass->vtable)._194_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._194_GetHitboxTime.method);
    if (pCVar28 == (Characters_BaseHitbox_o *)0x0) goto label_182199157;
    Characters_BaseHitbox__Activate(pCVar28,0.0,fVar29,(MethodInfo *)0x0);
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pCVar18 = (__this->fields).ColossalCache;
    if ((pCVar18 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar28 = (pCVar18->fields).HandRHitbox, pCVar28 == (Characters_BaseHitbox_o *)0x0))
    goto label_182199157;
    pSVar19 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom8;
    pUVar23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar28,(MethodInfo *)0x0);
    if (pUVar23 == (UnityEngine_Transform_o *)0x0) goto label_182199157;
    pUVar24 = UnityEngine_Transform__get_position(&local_78,pUVar23,(MethodInfo *)0x0);
    uVar3 = (pUVar24->fields).x;
    uVar10 = (pUVar24->fields).y;
    fVar29 = (pUVar24->fields).z;
    if (Il2CppMethodInitialized_18434494b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18434494b = '\x01';
    }
    local_78.fields.x = -1.5707964;
    local_78.fields.y = 0.0;
    local_78.fields.z = 0.0;
    pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = (pUVar20->downVector).fields.z;
    uVar4 = (pUVar20->downVector).fields.x;
    uVar11 = (pUVar20->downVector).fields.y;
    pUVar25 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)local_68,&local_78,(MethodInfo *)0x0);
    local_68[0].x = (pUVar25->fields).x;
    local_68[0].y = (pUVar25->fields).y;
    local_68[0].z = (pUVar25->fields).z;
    local_68[0].w = (pUVar25->fields).w;
    fVar2 = (__this->fields).Size;
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    local_78.fields.x = (float)uVar4 * 8.0 + (float)uVar3;
    local_78.fields.y = (float)uVar11 * 8.0 + (float)uVar10;
    local_78.fields.z = fVar1 * 8.0 + fVar29;
    Effects_EffectSpawner__Spawn
              (pSVar19,&local_78,(UnityEngine_Quaternion_o *)local_68,fVar2 * 4.0,true,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
    pCVar18 = (__this->fields).ColossalCache;
    if (pCVar18 == (Characters_WallColossalComponentCache_o *)0x0) goto label_182199157;
    pCVar28 = (pCVar18->fields).HandRHitbox;
  }
  if ((pCVar28 != (Characters_BaseHitbox_o *)0x0) &&
     (pUVar23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar28,(MethodInfo *)0x0),
     pUVar23 != (UnityEngine_Transform_o *)0x0)) {
    pUVar24 = UnityEngine_Transform__get_position(&local_78,pUVar23,(MethodInfo *)0x0);
    fVar29 = (pUVar24->fields).z;
    uVar5 = (pUVar24->fields).x;
    uVar12 = (pUVar24->fields).y;
    if (Il2CppMethodInitialized_18434494b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18434494b = '\x01';
    }
    pUVar20 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar6 = (pUVar20->downVector).fields.x;
    uVar13 = (pUVar20->downVector).fields.y;
    local_78.fields.x = (float)uVar6 * 10.0 + (float)uVar5;
    local_78.fields.y = (float)uVar13 * 10.0 + (float)uVar12;
    local_78.fields.z = (pUVar20->downVector).fields.z * 10.0 + fVar29;
    Characters_WallColossalShifter__BlowAwayHumans_21951c0
              (__this,&local_78,(__this->fields).DefaultBlowAwayForce,(MethodInfo *)0x0);
    return;
  }
label_182199157:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$BlowAwayHumans
// il2cpp: void Characters_WallColossalShifter__BlowAwayHumans (Characters_WallColossalShifter_o* __this, UnityEngine_Transform_o* source, float angle, float force, const MethodInfo* method);
// 0x182194e50
// eh: try 0x182194f4a..0x1821951b3 -> pad 0x18333ee60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219513e: mov rdx, qword ptr [rip + 0x1eecde3]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x182195145: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18219514a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18219514f: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182195154: test rcx, rcx
// asm:   0x182195157: jne 0x1821951b3
// asm:   0x1821951b3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333ee60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ee65: push rbp
// asm:   0x18333ee66: sub rsp, 0x30
// asm:   0x18333ee6a: mov rbp, rdx
// asm:   0x18333ee6d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x18333ee74: mov rcx, qword ptr [rax]
// asm:   0x18333ee77: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333ee7b: movabs rax, 0
// asm:   0x18333ee85: add rsp, 0x30
// asm:   0x18333ee89: pop rbp
// asm:   0x18333ee8a: ret 

void Characters_WallColossalShifter__BlowAwayHumans
               (Characters_WallColossalShifter_o *__this,UnityEngine_Transform_o *source,float angle,
               float force,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  GameManagers_InGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  UnityEngine_Vector3_o *pUVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_168;
  float local_164;
  float local_160;
  undefined1 local_158 [16];
  Il2CppObject *local_148;
  System_Collections_Generic_HashSet_Enumerator_T__o local_140;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  UnityEngine_Vector3_o local_100;
  UnityEngine_Vector3_o local_f0;
  UnityEngine_Vector3_o local_e0;
  UnityEngine_Vector3_o local_d0 [14];
  
  if (Il2CppMethodInitialized_184346d87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    Il2CppMethodInitialized_184346d87 = '\x01';
  }
  local_140.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_140.fields._index = 0;
  local_140.fields._version = 0;
  local_140.fields._current = (Il2CppObject *)0x0;
  pGVar4 = (__this->fields)._inGameManager;
  if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar4->fields).Humans,
     __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_158,__this_00,
             (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
  local_140.fields._set = (System_Collections_Generic_HashSet_T__o *)local_158._0_8_;
  local_140.fields._index = local_158._8_4_;
  local_140.fields._version = local_158._12_4_;
  local_140.fields._current = local_148;
  local_158._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_158._8_8_ = &local_140;
  while( true ) {
    bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (&local_140,
                       (MethodInfo_15381F0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    pIVar6 = local_140.fields._current;
    if (!bVar7) {
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_140,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
      return;
    }
    if (local_140.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_140.fields._current[7].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = *(UnityEngine_Transform_o **)((longlong)local_140.fields._current[7].monitor + 0x10);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) break;
    pUVar8 = UnityEngine_Transform__get_position(&local_100,__this_01,(MethodInfo *)0x0);
    if (source == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar11 = (pUVar8->fields).x;
    fVar10 = (pUVar8->fields).y;
    fVar12 = (pUVar8->fields).z;
    pUVar8 = UnityEngine_Transform__get_position(&local_f0,source,(MethodInfo *)0x0);
    fVar1 = (pUVar8->fields).x;
    fVar2 = (pUVar8->fields).y;
    fVar3 = (pUVar8->fields).z;
    if (Il2CppMethodInitialized_18433de59 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433de59 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar11 = fVar11 - fVar1;
    fVar10 = fVar10 - fVar2;
    fVar12 = fVar12 - fVar3;
    dVar9 = (double)(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
    if (dVar9 < 0.0) {
      dVar9 = sqrt(dVar9);
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    if ((float)dVar9 < (__this->fields).BlowAwayMaxDistance) {
      pUVar8 = UnityEngine_Transform__get_forward(&local_e0,source,(MethodInfo *)0x0);
      local_128._0_4_ = (pUVar8->fields).x;
      local_128._4_4_ = (pUVar8->fields).y;
      local_120 = (pUVar8->fields).z;
      local_168 = fVar11;
      local_164 = fVar10;
      local_160 = fVar12;
      fVar11 = (float)il2cpp_runtime_helper_181d9e200(&local_128,&local_168);
      if (fVar11 <= angle * 0.5) {
        pUVar8 = UnityEngine_Transform__get_position(local_d0,source,(MethodInfo *)0x0);
        pIVar5 = pIVar6->klass;
        local_118._0_4_ = (pUVar8->fields).x;
        local_118._4_4_ = (pUVar8->fields).y;
        local_110 = (pUVar8->fields).z;
        (*pIVar5->vtable[99].methodPtr)
                  (pIVar6,&local_118,force,(ulonglong)(uint)(__this->fields).BlowAwayMaxDistance,
                   pIVar5->vtable[99].method);
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$BlowAwayHumans
// il2cpp: void Characters_WallColossalShifter__BlowAwayHumans (Characters_WallColossalShifter_o* __this, UnityEngine_Vector3_o source, float force, const MethodInfo* method);
// 0x1821951c0
// eh: try 0x1821952a0..0x18219542f -> pad 0x183327470 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821953de: mov rdx, qword ptr [rip + 0x1eecb43]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x1821953e5: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1821953ea: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821953ef: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1821953f4: test rcx, rcx
// asm:   0x1821953f7: jne 0x18219542f
// asm:   0x18219542f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183327470: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183327475: push rbp
// asm:   0x183327476: sub rsp, 0x30
// asm:   0x18332747a: mov rbp, rdx
// asm:   0x18332747d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183327481: mov rcx, qword ptr [rax]
// asm:   0x183327484: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183327488: movabs rax, 0
// asm:   0x183327492: add rsp, 0x30
// asm:   0x183327496: pop rbp
// asm:   0x183327497: ret 

void Characters_WallColossalShifter__BlowAwayHumans_21951c0
               (Characters_WallColossalShifter_o *__this,UnityEngine_Vector3_o *source,float force,
               MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  UnityEngine_Vector3_o *pUVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_b8;
  float local_b0;
  UnityEngine_Vector3_o local_a8;
  undefined1 local_98 [16];
  Il2CppObject *local_88;
  System_Collections_Generic_HashSet_Enumerator_T__o local_80 [4];
  
  if (Il2CppMethodInitialized_184346d88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    Il2CppMethodInitialized_184346d88 = '\x01';
  }
  local_80[0].fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_80[0].fields._index = 0;
  local_80[0].fields._version = 0;
  local_80[0].fields._current = (Il2CppObject *)0x0;
  pGVar1 = (__this->fields)._inGameManager;
  if ((pGVar1 == (GameManagers_InGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar1->fields).Humans,
     __this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_98,__this_00,
             (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
  local_80[0].fields._set = (System_Collections_Generic_HashSet_T__o *)local_98._0_8_;
  local_80[0].fields._index = local_98._8_4_;
  local_80[0].fields._version = local_98._12_4_;
  local_80[0].fields._current = local_88;
  local_98._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_98._8_8_ = local_80;
  while( true ) {
    bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (local_80,(MethodInfo_15381F0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    pIVar3 = local_80[0].fields._current;
    if (!bVar4) {
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
      return;
    }
    if (local_80[0].fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_80[0].fields._current[7].monitor == (void *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = *(UnityEngine_Transform_o **)((longlong)local_80[0].fields._current[7].monitor + 0x10);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) break;
    pUVar5 = UnityEngine_Transform__get_position(&local_a8,__this_01,(MethodInfo *)0x0);
    fVar9 = (pUVar5->fields).x;
    fVar7 = (pUVar5->fields).y;
    fVar8 = (pUVar5->fields).z;
    if (Il2CppMethodInitialized_18433dee7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433dee7 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar9 = fVar9 - (source->fields).x;
    fVar7 = fVar7 - (source->fields).y;
    fVar8 = fVar8 - (source->fields).z;
    dVar6 = (double)(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9);
    if (dVar6 < 0.0) {
      dVar6 = sqrt(dVar6);
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    if ((float)dVar6 < (__this->fields).BlowAwayMaxDistance) {
      pIVar2 = pIVar3->klass;
      local_b8._0_4_ = (source->fields).x;
      local_b8._4_4_ = (source->fields).y;
      local_b0 = (source->fields).z;
      (*pIVar2->vtable[99].methodPtr)
                (pIVar3,&local_b8,force,(__this->fields).BlowAwayMaxDistance,pIVar2->vtable[99].method);
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$GetHitRPC
// il2cpp: void Characters_WallColossalShifter__GetHitRPC (Characters_WallColossalShifter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x182195cf0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182195d9f: jmp 0x182195da3
// asm:   0x182195da1: mov edi, esi
// asm:   0x182195eac: mov rdi, qword ptr [rsp + 0x70]

void Characters_WallColossalShifter__GetHitRPC
               (Characters_WallColossalShifter_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Characters_WallColossalComponentCache_o *pCVar5;
  UnityEngine_Object_o *pUVar6;
  Characters_WallColossalShifter_c *pCVar7;
  bool bVar8;
  System_String_o *pSVar9;
  int iVar10;
  int iVar11;
  int32_t damage_00;
  
  if (Il2CppMethodInitialized_184346d89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346d89 = '\x01';
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).TitanArmorEnabled, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    damage_00 = damage;
    if ((pSVar3->fields)._value != false) {
      pSVar4 = (pSVar2->fields).TitanArmor;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_182195f4e;
      damage_00 = 0;
      if ((pSVar4->fields)._value <= damage) {
        damage_00 = damage;
      }
    }
    pCVar5 = (__this->fields).ColossalCache;
    if ((pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) &&
       (pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).NapeHurtbox, pUVar6 != (UnityEngine_Object_o *)0x0))
    {
      pSVar9 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
      bVar8 = System_String__op_Equality(collider,pSVar9,(MethodInfo *)0x0);
      if (bVar8) {
        Characters_BaseShifter__GetHitRPC
                  ((Characters_BaseShifter_o *)__this,viewId,name,damage_00,type,collider,(MethodInfo *)0x0);
        return;
      }
      pCVar5 = (__this->fields).ColossalCache;
      if ((pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) &&
         (pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).HandLHurtbox,
         pUVar6 != (UnityEngine_Object_o *)0x0)) {
        pSVar9 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
        bVar8 = System_String__op_Equality(collider,pSVar9,(MethodInfo *)0x0);
        if (bVar8) {
          if (((__this->fields).CanDamageLeftHand != false) &&
             (((__this->fields)._leftHandState == 0 || ((__this->fields)._leftHandState == 1)))) {
            iVar10 = (__this->fields).CurrentLeftHandHealth - damage_00;
            if (((iVar10 < 0) || (iVar11 = (__this->fields).MaxLeftHandHealth, iVar10 <= iVar11)) &&
               (iVar11 = iVar10, iVar10 < 0)) {
              iVar11 = 0;
            }
            pCVar7 = __this->klass;
            (__this->fields).CurrentLeftHandHealth = iVar11;
            (*(pCVar7->vtable)._206_OnLeftHandHealthChange.methodPtr)
                      (__this,(pCVar7->vtable)._206_OnLeftHandHealthChange.method);
            return;
          }
        }
        else {
          pCVar5 = (__this->fields).ColossalCache;
          if ((pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) ||
             (pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).HandRHurtbox,
             pUVar6 == (UnityEngine_Object_o *)0x0)) goto label_182195f4e;
          pSVar9 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
          bVar8 = System_String__op_Equality(collider,pSVar9,(MethodInfo *)0x0);
          if (((bVar8) && ((__this->fields).CanDamageRightHand != false)) &&
             (((__this->fields)._rightHandState == 0 || ((__this->fields)._rightHandState == 1)))) {
            iVar10 = (__this->fields).CurrentRightHandHealth - damage_00;
            if (((iVar10 < 0) || (iVar11 = (__this->fields).MaxRightHandHealth, iVar10 <= iVar11)) &&
               (iVar11 = iVar10, iVar10 < 0)) {
              iVar11 = 0;
            }
            pCVar7 = __this->klass;
            (__this->fields).CurrentRightHandHealth = iVar11;
            (*(pCVar7->vtable)._207_OnRightHandHealthChange.methodPtr)
                      (__this,(pCVar7->vtable)._207_OnRightHandHealthChange.method);
          }
        }
        return;
      }
    }
  }
label_182195f4e:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$.ctor
// il2cpp: void Characters_WallColossalShifter___ctor (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x18219a0d0

void Characters_WallColossalShifter___ctor(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  (__this->fields).WarningSteamTime = 3.0;
  (__this->fields).SteamDamageInterval = 0.2;
  (__this->fields).SteamDamagePerSecond = 100;
  (__this->fields).MaxLeftHandHealth = 1000;
  (__this->fields).MaxRightHandHealth = 1000;
  (__this->fields).CurrentLeftHandHealth = 1000;
  (__this->fields).CurrentRightHandHealth = 1000;
  (__this->fields).CanDamageLeftHand = true;
  (__this->fields).CanDamageRightHand = true;
  (__this->fields).HandSeverWindow = 10.0;
  (__this->fields).StunDuration = 3.0;
  (__this->fields).RecoveryDuration = 10.0;
  (__this->fields).SteamBlowAwayForce = 50.0;
  (__this->fields).DefaultBlowAwayForce = 50.0;
  (__this->fields).BlowAwayMaxDistance = 60.0;
  (__this->fields).BlowAwaySteamTime = 0.3;
  Characters_BaseShifter___ctor((Characters_ErenShifter_o *)__this,(MethodInfo *)0x0);
  return;
}


