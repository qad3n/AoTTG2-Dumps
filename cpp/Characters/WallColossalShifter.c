// Type: Characters.WallColossalShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/WallColossalShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalShifter.cs
// --------------------------------

// Characters.WallColossalShifter$$get_MaxFootstepDistance
// il2cpp: float Characters_WallColossalShifter__get_MaxFootstepDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1ee30

float Characters_WallColossalShifter__get_MaxFootstepDistance
                (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return 500.0;
}


// Characters.WallColossalShifter$$get_MaxSoundDistance
// il2cpp: float Characters_WallColossalShifter__get_MaxSoundDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1ee40

float Characters_WallColossalShifter__get_MaxSoundDistance
                (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// Characters.WallColossalShifter$$get_LODQualityMediumDistance
// il2cpp: float Characters_WallColossalShifter__get_LODQualityMediumDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1ee50

float Characters_WallColossalShifter__get_LODQualityMediumDistance
                (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// Characters.WallColossalShifter$$get_LODQualityLowDistance
// il2cpp: float Characters_WallColossalShifter__get_LODQualityLowDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1ee60

float Characters_WallColossalShifter__get_LODQualityLowDistance
                (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return 2000.0;
}


// Characters.WallColossalShifter$$get_CullShadowsDistance
// il2cpp: float Characters_WallColossalShifter__get_CullShadowsDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1ee70

float Characters_WallColossalShifter__get_CullShadowsDistance
                (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return 2000.0;
}


// Characters.WallColossalShifter$$get_CullEffectsDistance
// il2cpp: float Characters_WallColossalShifter__get_CullEffectsDistance (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1ee80

float Characters_WallColossalShifter__get_CullEffectsDistance
                (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return 2000.0;
}


// Characters.WallColossalShifter$$get_SteamState
// il2cpp: int32_t Characters_WallColossalShifter__get_SteamState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1ee90

int32_t Characters_WallColossalShifter__get_SteamState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return (__this->fields)._steamState;
}


// Characters.WallColossalShifter$$get_LeftHandState
// il2cpp: int32_t Characters_WallColossalShifter__get_LeftHandState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1eea0

int32_t Characters_WallColossalShifter__get_LeftHandState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return (__this->fields)._leftHandState;
}


// Characters.WallColossalShifter$$get_RightHandState
// il2cpp: int32_t Characters_WallColossalShifter__get_RightHandState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1eeb0

int32_t Characters_WallColossalShifter__get_RightHandState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return (__this->fields)._rightHandState;
}


// Characters.WallColossalShifter$$get_StunState
// il2cpp: int32_t Characters_WallColossalShifter__get_StunState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1eec0

int32_t Characters_WallColossalShifter__get_StunState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return (__this->fields)._stunState;
}


// Characters.WallColossalShifter$$get_SizeMultiplier
// il2cpp: float Characters_WallColossalShifter__get_SizeMultiplier (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1eed0

float Characters_WallColossalShifter__get_SizeMultiplier
                (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return 22.0;
}


// Characters.WallColossalShifter$$OnPlayerEnteredRoom
// il2cpp: void Characters_WallColossalShifter__OnPlayerEnteredRoom (Characters_WallColossalShifter_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5c1eee0

void Characters_WallColossalShifter__OnPlayerEnteredRoom
               (Characters_WallColossalShifter_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_RDX;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547746 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetRightHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLeftHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunRecoveryTimesRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHandSeverTimesRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSteamStateRPC");
    Il2CppMethodInitialized_07547746 = '\x01';
    method = extraout_RDX;
  }
  Characters_BaseTitan__OnPlayerEnteredRoom((Characters_BaseTitan_o *)__this,player,method);
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar3) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar2 = (pUVar1->fields).PhotonView;
    pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    uStack_41 = (undefined1)(__this->fields)._leftHandState;
    pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&uStack_41);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) goto label_05c1f494;
      if ((int)pSVar4->max_length == 0) goto label_05c1f48f;
      pSVar4->m_Items[0] = pIVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_56e5850(pPVar2,"SetLeftHandStateRPC",player,pSVar4,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Cache;
        if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
          pPVar2 = (pUVar1->fields).PhotonView;
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          uStack_42 = (undefined1)(__this->fields)._rightHandState;
          pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&uStack_42);
          if (pSVar4 != (System_Object_array *)0x0) {
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) goto label_05c1f494;
            if ((int)pSVar4->max_length == 0) goto label_05c1f48f;
            pSVar4->m_Items[0] = pIVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
            if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC_56e5850(pPVar2,"SetRightHandStateRPC",player,pSVar4,(MethodInfo *)0x0)
              ;
              pUVar1 = (__this->fields).Cache;
              if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                pPVar2 = (pUVar1->fields).PhotonView;
                pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
                uStack_43 = (undefined1)(__this->fields)._steamState;
                pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&uStack_43);
                if (pSVar4 != (System_Object_array *)0x0) {
                  if ((pIVar5 != (Il2CppObject *)0x0) &&
                     (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                     pIVar6 == (Il2CppObject *)0x0)) goto label_05c1f494;
                  if ((int)pSVar4->max_length == 0) goto label_05c1f48f;
                  pSVar4->m_Items[0] = pIVar5;
                  Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
                  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC_56e5850
                              (pPVar2,"SetSteamStateRPC",player,pSVar4,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).Cache;
                    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                      pPVar2 = (pUVar1->fields).PhotonView;
                      pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
                      uStack_44 = (undefined1)(__this->fields)._stunState;
                      pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&uStack_44);
                      if (pSVar4 != (System_Object_array *)0x0) {
                        if ((pIVar5 != (Il2CppObject *)0x0) &&
                           (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class)
                           , pIVar6 == (Il2CppObject *)0x0)) goto label_05c1f494;
                        if ((int)pSVar4->max_length == 0) goto label_05c1f48f;
                        pSVar4->m_Items[0] = pIVar5;
                        Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
                        if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                          Photon_Pun_PhotonView__RPC_56e5850
                                    (pPVar2,"SetStunStateRPC",player,pSVar4,(MethodInfo *)0x0);
                          pUVar1 = (__this->fields).Cache;
                          if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                            pPVar2 = (pUVar1->fields).PhotonView;
                            pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                            fStack_34 = (__this->fields).LeftHandSeverTimeLeft;
                            pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_34);
                            if (pSVar4 != (System_Object_array *)0x0) {
                              if ((pIVar5 != (Il2CppObject *)0x0) &&
                                 (pIVar6 = il2cpp_vm_Object_IsInst
                                                     (pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                                 pIVar6 == (Il2CppObject *)0x0)) {
label_05c1f494:
                                pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                              }
                              if ((int)pSVar4->max_length != 0) {
                                pSVar4->m_Items[0] = pIVar5;
                                Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
                                fStack_38 = (__this->fields).RightHandSeverTimeLeft;
                                pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_38);
                                if ((pIVar5 != (Il2CppObject *)0x0) &&
                                   (pIVar6 = il2cpp_vm_Object_IsInst
                                                       (pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                                   pIVar6 == (Il2CppObject *)0x0)) goto label_05c1f494;
                                if ((pSVar4->max_length & 0xfffffffe) != 0) {
                                  pSVar4->m_Items[1] = pIVar5;
                                  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
                                  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                                    Photon_Pun_PhotonView__RPC_56e5850
                                              (pPVar2,"SetHandSeverTimesRPC",player,pSVar4,(MethodInfo *)0x0);
                                    pUVar1 = (__this->fields).Cache;
                                    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                                      pPVar2 = (pUVar1->fields).PhotonView;
                                      pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                                      fStack_3c = (__this->fields).StunTimeLeft;
                                      pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_3c);
                                      if (pSVar4 != (System_Object_array *)0x0) {
                                        if ((pIVar5 != (Il2CppObject *)0x0) &&
                                           (pIVar6 = il2cpp_vm_Object_IsInst
                                                               (pIVar5,(((pSVar4->obj).klass)->_1).
                                                                       element_class),
                                           pIVar6 == (Il2CppObject *)0x0)) goto label_05c1f494;
                                        if ((int)pSVar4->max_length != 0) {
                                          pSVar4->m_Items[0] = pIVar5;
                                          Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
                                          fStack_40 = (__this->fields).RecoveryTimeLeft;
                                          pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_40);
                                          if ((pIVar5 != (Il2CppObject *)0x0) &&
                                             (pIVar6 = il2cpp_vm_Object_IsInst
                                                                 (pIVar5,(((pSVar4->obj).klass)->_1).
                                                                         element_class),
                                             pIVar6 == (Il2CppObject *)0x0)) goto label_05c1f494;
                                          if ((pSVar4->max_length & 0xfffffffe) != 0) {
                                            pSVar4->m_Items[1] = pIVar5;
                                            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
                                            if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                                              Photon_Pun_PhotonView__RPC_56e5850
                                                        (pPVar2,"SetStunRecoveryTimesRPC",player,pSVar4,
                                                         (MethodInfo *)0x0);
                                              return;
                                            }
                                            goto label_05c1f48a;
                                          }
                                        }
                                        goto label_05c1f48f;
                                      }
                                    }
                                  }
                                  goto label_05c1f48a;
                                }
                              }
label_05c1f48f:
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
label_05c1f48a:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$CheckNapeAngle
// il2cpp: bool Characters_WallColossalShifter__CheckNapeAngle (Characters_WallColossalShifter_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x5c1f5e0

bool Characters_WallColossalShifter__CheckNapeAngle
               (Characters_WallColossalShifter_o *__this,UnityEngine_Vector3_o hitPosition,float maxAngle,
               MethodInfo *method)

{
  return true;
}


// Characters.WallColossalShifter$$SteamAttack
// il2cpp: void Characters_WallColossalShifter__SteamAttack (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1f5f0

void Characters_WallColossalShifter__SteamAttack(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547747 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSteam");
    Il2CppMethodInitialized_07547747 = '\x01';
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
// 0x5c1f660

void Characters_WallColossalShifter__SetLeftHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  int32_t iVar1;
  
  (__this->fields).MaxLeftHandHealth = health;
  iVar1 = 0;
  if (0 < health) {
    iVar1 = health;
  }
  (__this->fields).CurrentLeftHandHealth = iVar1;
  (*(__this->klass->vtable)._207_OnLeftHandHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._207_OnLeftHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$SetRightHandHealth
// il2cpp: void Characters_WallColossalShifter__SetRightHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x5c1f6c0

void Characters_WallColossalShifter__SetRightHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  int32_t iVar1;
  
  (__this->fields).MaxRightHandHealth = health;
  iVar1 = 0;
  if (0 < health) {
    iVar1 = health;
  }
  (__this->fields).CurrentRightHandHealth = iVar1;
  (*(__this->klass->vtable)._208_OnRightHandHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._208_OnRightHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$SetCurrentLeftHandHealth
// il2cpp: void Characters_WallColossalShifter__SetCurrentLeftHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x5c1f690

void Characters_WallColossalShifter__SetCurrentLeftHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (__this->fields).MaxLeftHandHealth;
  if (health < iVar1) {
    iVar1 = health;
  }
  iVar2 = 0;
  if (-1 < health) {
    iVar2 = iVar1;
  }
  (__this->fields).CurrentLeftHandHealth = iVar2;
  (*(__this->klass->vtable)._207_OnLeftHandHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._207_OnLeftHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$SetCurrentRightHandHealth
// il2cpp: void Characters_WallColossalShifter__SetCurrentRightHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x5c1f6f0

void Characters_WallColossalShifter__SetCurrentRightHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (__this->fields).MaxRightHandHealth;
  if (health < iVar1) {
    iVar1 = health;
  }
  iVar2 = 0;
  if (-1 < health) {
    iVar2 = iVar1;
  }
  (__this->fields).CurrentRightHandHealth = iVar2;
  (*(__this->klass->vtable)._208_OnRightHandHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._208_OnRightHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$SetMaxLeftHandHealth
// il2cpp: void Characters_WallColossalShifter__SetMaxLeftHandHealth (Characters_WallColossalShifter_o* __this, int32_t maxHealth, const MethodInfo* method);
// 0x5c1f720

void Characters_WallColossalShifter__SetMaxLeftHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t maxHealth,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  (__this->fields).MaxLeftHandHealth = maxHealth;
  iVar1 = (__this->fields).CurrentLeftHandHealth;
  if (iVar1 < maxHealth) {
    maxHealth = iVar1;
  }
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = maxHealth;
  }
  (__this->fields).CurrentLeftHandHealth = iVar2;
  (*(__this->klass->vtable)._207_OnLeftHandHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._207_OnLeftHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$SetMaxRightHandHealth
// il2cpp: void Characters_WallColossalShifter__SetMaxRightHandHealth (Characters_WallColossalShifter_o* __this, int32_t maxHealth, const MethodInfo* method);
// 0x5c1f760

void Characters_WallColossalShifter__SetMaxRightHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t maxHealth,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  (__this->fields).MaxRightHandHealth = maxHealth;
  iVar1 = (__this->fields).CurrentRightHandHealth;
  if (iVar1 < maxHealth) {
    maxHealth = iVar1;
  }
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = maxHealth;
  }
  (__this->fields).CurrentRightHandHealth = iVar2;
  (*(__this->klass->vtable)._208_OnRightHandHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._208_OnRightHandHealthChange.method);
  return;
}


// Characters.WallColossalShifter$$OnLeftHandHealthChange
// il2cpp: void Characters_WallColossalShifter__OnLeftHandHealthChange (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1f7a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1f815: cmp eax, ecx
// asm:   0x5c1f817: jl 0x5c1fb72
// asm:   0x5c1faa7: jmp 0x5c1fb72

void Characters_WallColossalShifter__OnLeftHandHealthChange
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  undefined1 uStack_39;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547748 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetLeftHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLeftHandHealthRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHandSeverTimesRPC");
    Il2CppMethodInitialized_07547748 = '\x01';
  }
  iVar1 = (__this->fields).CurrentLeftHandHealth;
  if (iVar1 < 1) {
    iVar2 = (__this->fields)._leftHandState;
    if ((iVar2 != 1) && (iVar2 != 0)) {
      iVar2 = (__this->fields).MaxLeftHandHealth;
      goto joined_r0x05c1faa1;
    }
    bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      (__this->fields).LeftHandSeverTimeLeft = (__this->fields).HandSeverWindow;
      pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      uStack_39 = 2;
      pIVar6 = il2cpp_vm_Object_Box(g_data_075566e0,&uStack_39);
      if (pSVar5 == (System_Object_array *)0x0) goto label_05c1fc97;
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) goto label_05c1fca1;
      if ((int)pSVar5->max_length == 0) goto label_05c1fc9c;
      pSVar5->m_Items[0] = pIVar6;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
      if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_05c1fc97;
      Photon_Pun_PhotonView__RPC(pPVar4,"SetLeftHandStateRPC",0,pSVar5,(MethodInfo *)0x0);
      pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      fStack_38 = (__this->fields).LeftHandSeverTimeLeft;
      pIVar6 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_38);
      if (pSVar5 == (System_Object_array *)0x0) goto label_05c1fc97;
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) goto label_05c1fca1;
      if ((int)pSVar5->max_length == 0) goto label_05c1fc9c;
      pSVar5->m_Items[0] = pIVar6;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
      fStack_34 = (__this->fields).RightHandSeverTimeLeft;
      pIVar6 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_34);
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) goto label_05c1fca1;
      if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_05c1fc9c;
      pSVar5->m_Items[1] = pIVar6;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
      if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_05c1fc97;
      Photon_Pun_PhotonView__RPC(pPVar4,"SetHandSeverTimesRPC",0,pSVar5,(MethodInfo *)0x0);
      if (((__this->fields)._leftHandState == 2) && ((__this->fields)._rightHandState == 2)) {
        Characters_WallColossalShifter__EnterStunState(__this,0.0,false,method_00);
      }
    }
  }
  else {
    iVar2 = (__this->fields).MaxLeftHandHealth;
    if ((iVar1 < iVar2) && ((__this->fields)._leftHandState == 0)) {
      bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                        (__this,(__this->klass->vtable)._74_IsMine.method);
      if (!bVar3) goto label_05c1fb72;
      pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      fStack_38 = (float)CONCAT31(fStack_38._1_3_,1);
    }
    else {
joined_r0x05c1faa1:
      if ((iVar1 < iVar2) ||
         (((__this->fields)._leftHandState != 1 ||
          (bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                             (__this,(__this->klass->vtable)._74_IsMine.method), !bVar3)))) goto label_05c1fb72;
      pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      fStack_38 = (float)((uint)fStack_38 & 0xffffff00);
    }
    pIVar6 = il2cpp_vm_Object_Box(g_data_075566e0,&fStack_38);
    if (pSVar5 == (System_Object_array *)0x0) goto label_05c1fc97;
    if ((pIVar6 != (Il2CppObject *)0x0) &&
       (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
       pIVar7 == (Il2CppObject *)0x0)) goto label_05c1fca1;
    if ((int)pSVar5->max_length == 0) goto label_05c1fc9c;
    pSVar5->m_Items[0] = pIVar6;
    Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
    if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_05c1fc97;
    Photon_Pun_PhotonView__RPC(pPVar4,"SetLeftHandStateRPC",0,pSVar5,(MethodInfo *)0x0);
  }
label_05c1fb72:
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar3) {
    return;
  }
  pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  fStack_38 = (float)(__this->fields).CurrentLeftHandHealth;
  pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&fStack_38);
  if (pSVar5 == (System_Object_array *)0x0) {
label_05c1fc97:
    ThrowNullReferenceException();
  }
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
     pIVar7 == (Il2CppObject *)0x0)) {
label_05c1fca1:
    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
  }
  if ((int)pSVar5->max_length != 0) {
    pSVar5->m_Items[0] = pIVar6;
    Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
    fStack_34 = (float)(__this->fields).MaxLeftHandHealth;
    pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&fStack_34);
    if ((pIVar6 != (Il2CppObject *)0x0) &&
       (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
       pIVar7 == (Il2CppObject *)0x0)) goto label_05c1fca1;
    if ((pSVar5->max_length & 0xfffffffe) != 0) {
      pSVar5->m_Items[1] = pIVar6;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
      if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar4,"SetLeftHandHealthRPC",0,pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto label_05c1fc97;
    }
  }
label_05c1fc9c:
  ThrowIndexOutOfRangeException();
}


// Characters.WallColossalShifter$$OnRightHandHealthChange
// il2cpp: void Characters_WallColossalShifter__OnRightHandHealthChange (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1fcd0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1fd45: cmp eax, ecx
// asm:   0x5c1fd47: jl 0x5c200a2
// asm:   0x5c1ffd7: jmp 0x5c200a2

void Characters_WallColossalShifter__OnRightHandHealthChange
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  undefined1 uStack_39;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547749 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetRightHandHealthRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetRightHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHandSeverTimesRPC");
    Il2CppMethodInitialized_07547749 = '\x01';
  }
  iVar1 = (__this->fields).CurrentRightHandHealth;
  if (iVar1 < 1) {
    iVar2 = (__this->fields)._rightHandState;
    if ((iVar2 != 1) && (iVar2 != 0)) {
      iVar2 = (__this->fields).MaxRightHandHealth;
      goto joined_r0x05c1ffd1;
    }
    bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      (__this->fields).RightHandSeverTimeLeft = (__this->fields).HandSeverWindow;
      pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      uStack_39 = 2;
      pIVar6 = il2cpp_vm_Object_Box(g_data_075566e0,&uStack_39);
      if (pSVar5 == (System_Object_array *)0x0) goto label_05c201c7;
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) goto label_05c201d1;
      if ((int)pSVar5->max_length == 0) goto label_05c201cc;
      pSVar5->m_Items[0] = pIVar6;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
      if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_05c201c7;
      Photon_Pun_PhotonView__RPC(pPVar4,"SetRightHandStateRPC",0,pSVar5,(MethodInfo *)0x0);
      pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      fStack_38 = (__this->fields).LeftHandSeverTimeLeft;
      pIVar6 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_38);
      if (pSVar5 == (System_Object_array *)0x0) goto label_05c201c7;
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) goto label_05c201d1;
      if ((int)pSVar5->max_length == 0) goto label_05c201cc;
      pSVar5->m_Items[0] = pIVar6;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
      fStack_34 = (__this->fields).RightHandSeverTimeLeft;
      pIVar6 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_34);
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) goto label_05c201d1;
      if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_05c201cc;
      pSVar5->m_Items[1] = pIVar6;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
      if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_05c201c7;
      Photon_Pun_PhotonView__RPC(pPVar4,"SetHandSeverTimesRPC",0,pSVar5,(MethodInfo *)0x0);
      if (((__this->fields)._leftHandState == 2) && ((__this->fields)._rightHandState == 2)) {
        Characters_WallColossalShifter__EnterStunState(__this,0.0,false,method_00);
      }
    }
  }
  else {
    iVar2 = (__this->fields).MaxRightHandHealth;
    if ((iVar1 < iVar2) && ((__this->fields)._rightHandState == 0)) {
      bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                        (__this,(__this->klass->vtable)._74_IsMine.method);
      if (!bVar3) goto label_05c200a2;
      pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      fStack_38 = (float)CONCAT31(fStack_38._1_3_,1);
    }
    else {
joined_r0x05c1ffd1:
      if ((iVar1 < iVar2) ||
         (((__this->fields)._rightHandState != 1 ||
          (bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                             (__this,(__this->klass->vtable)._74_IsMine.method), !bVar3)))) goto label_05c200a2;
      pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      fStack_38 = (float)((uint)fStack_38 & 0xffffff00);
    }
    pIVar6 = il2cpp_vm_Object_Box(g_data_075566e0,&fStack_38);
    if (pSVar5 == (System_Object_array *)0x0) goto label_05c201c7;
    if ((pIVar6 != (Il2CppObject *)0x0) &&
       (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
       pIVar7 == (Il2CppObject *)0x0)) goto label_05c201d1;
    if ((int)pSVar5->max_length == 0) goto label_05c201cc;
    pSVar5->m_Items[0] = pIVar6;
    Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
    if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_05c201c7;
    Photon_Pun_PhotonView__RPC(pPVar4,"SetRightHandStateRPC",0,pSVar5,(MethodInfo *)0x0);
  }
label_05c200a2:
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar3) {
    return;
  }
  pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  fStack_38 = (float)(__this->fields).CurrentRightHandHealth;
  pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&fStack_38);
  if (pSVar5 == (System_Object_array *)0x0) {
label_05c201c7:
    ThrowNullReferenceException();
  }
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
     pIVar7 == (Il2CppObject *)0x0)) {
label_05c201d1:
    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
  }
  if ((int)pSVar5->max_length != 0) {
    pSVar5->m_Items[0] = pIVar6;
    Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
    fStack_34 = (float)(__this->fields).MaxRightHandHealth;
    pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&fStack_34);
    if ((pIVar6 != (Il2CppObject *)0x0) &&
       (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
       pIVar7 == (Il2CppObject *)0x0)) goto label_05c201d1;
    if ((pSVar5->max_length & 0xfffffffe) != 0) {
      pSVar5->m_Items[1] = pIVar6;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
      if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar4,"SetRightHandHealthRPC",0,pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto label_05c201c7;
    }
  }
label_05c201cc:
  ThrowIndexOutOfRangeException();
}


// Characters.WallColossalShifter$$CheckStunCondition
// il2cpp: void Characters_WallColossalShifter__CheckStunCondition (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c1fcb0

void Characters_WallColossalShifter__CheckStunCondition
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  if (((__this->fields)._leftHandState == 2) && ((__this->fields)._rightHandState == 2)) {
    Characters_WallColossalShifter__EnterStunState(__this,0.0,false,in_RDX);
    return;
  }
  return;
}


// Characters.WallColossalShifter$$EnterStunState
// il2cpp: void Characters_WallColossalShifter__EnterStunState (Characters_WallColossalShifter_o* __this, float duration, bool refresh, const MethodInfo* method);
// 0x5c201e0

void Characters_WallColossalShifter__EnterStunState
               (Characters_WallColossalShifter_o *__this,float duration,bool refresh,MethodInfo *method)

{
  Characters_WallColossalAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_String_o *animation;
  bool bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  float fVar8;
  float fVar9;
  undefined1 local_3d;
  float local_3c;
  undefined4 local_38;
  float local_34;
  
  local_3c = duration;
  if (Il2CppMethodInitialized_0754774a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunRecoveryTimesRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunStateRPC");
    Il2CppMethodInitialized_0754774a = '\x01';
  }
  method_00 = (__this->klass->vtable)._74_IsMine.method;
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,method_00);
  if ((((!bVar3) || ((__this->fields).Dead != false)) || ((__this->fields).EnableAI == false)) ||
     ((!refresh && ((__this->fields)._stunState != 0)))) {
    return;
  }
  Characters_WallColossalShifter__StopSteam(__this,method_00);
  pCVar1 = (__this->fields).ColossalAnimations;
  if ((pCVar1 != (Characters_WallColossalAnimations_o *)0x0) &&
     (pCVar2 = (__this->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
    fVar8 = Characters_AnimationHandler__GetLength(pCVar2,(pCVar1->fields).StunFallFaceAnim,(MethodInfo *)0x0)
    ;
    fVar9 = local_3c;
    if ((local_3c == 0.0) && (!NAN(local_3c))) {
      fVar9 = (__this->fields).StunDuration;
    }
    if (fVar9 <= fVar8) {
      fVar9 = fVar8;
    }
    (__this->fields).StunTimeLeft = fVar9;
    (__this->fields).RecoveryTimeLeft = 0.0;
    pCVar1 = (__this->fields).ColossalAnimations;
    if (pCVar1 != (Characters_WallColossalAnimations_o *)0x0) {
      animation = (pCVar1->fields).StunFallFaceAnim;
      (__this->fields)._needFreshCore = true;
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 0xd;
        (__this->fields)._currentStateAnimation = animation;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
        (__this->fields)._stateTimeLeft = INFINITY;
        pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                           ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
        pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        local_3d = 1;
        pIVar6 = il2cpp_vm_Object_Box(g_data_075566e0,&local_3d);
        if (pSVar5 != (System_Object_array *)0x0) {
          if ((pIVar6 != (Il2CppObject *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) goto label_05c20522;
          if ((int)pSVar5->max_length == 0) goto label_05c2051d;
          pSVar5->m_Items[0] = pIVar6;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
          if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar4,"SetStunStateRPC",0,pSVar5,(MethodInfo *)0x0);
            pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                               ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
            pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
            local_34 = (__this->fields).StunTimeLeft;
            pIVar6 = il2cpp_vm_Object_Box(g_data_07556740,&local_34);
            if (pSVar5 != (System_Object_array *)0x0) {
              if ((pIVar6 != (Il2CppObject *)0x0) &&
                 (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                 pIVar7 == (Il2CppObject *)0x0)) {
label_05c20522:
                pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
              }
              if ((int)pSVar5->max_length != 0) {
                pSVar5->m_Items[0] = pIVar6;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
                local_38 = 0;
                pIVar6 = il2cpp_vm_Object_Box(g_data_07556740,&local_38);
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) goto label_05c20522;
                if ((pSVar5->max_length & 0xfffffffe) != 0) {
                  pSVar5->m_Items[1] = pIVar6;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
                  if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC(pPVar4,"SetStunRecoveryTimesRPC",0,pSVar5,(MethodInfo *)0x0);
                    return;
                  }
                  goto label_05c20518;
                }
              }
label_05c2051d:
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
  }
label_05c20518:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$SetLeftHandHealthRPC
// il2cpp: void Characters_WallColossalShifter__SetLeftHandHealthRPC (Characters_WallColossalShifter_o* __this, int32_t currentHealth, int32_t maxHealth, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c20790

void Characters_WallColossalShifter__SetLeftHandHealthRPC
               (Characters_WallColossalShifter_o *__this,int32_t currentHealth,int32_t maxHealth,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
    (__this->fields).CurrentLeftHandHealth = currentHealth;
    (__this->fields).MaxLeftHandHealth = maxHealth;
  }
  return;
}


// Characters.WallColossalShifter$$SetRightHandHealthRPC
// il2cpp: void Characters_WallColossalShifter__SetRightHandHealthRPC (Characters_WallColossalShifter_o* __this, int32_t currentHealth, int32_t maxHealth, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c207e0

void Characters_WallColossalShifter__SetRightHandHealthRPC
               (Characters_WallColossalShifter_o *__this,int32_t currentHealth,int32_t maxHealth,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
    (__this->fields).CurrentRightHandHealth = currentHealth;
    (__this->fields).MaxRightHandHealth = maxHealth;
  }
  return;
}


// Characters.WallColossalShifter$$SetLeftHandStateRPC
// il2cpp: void Characters_WallColossalShifter__SetLeftHandStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c20830

void Characters_WallColossalShifter__SetLeftHandStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  MethodInfo *method_00;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
    Characters_WallColossalShifter__ApplyLeftHandState(__this,(uint)state,method_00);
    return;
  }
  return;
}


// Characters.WallColossalShifter$$SetRightHandStateRPC
// il2cpp: void Characters_WallColossalShifter__SetRightHandStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c20a40

void Characters_WallColossalShifter__SetRightHandStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  MethodInfo *method_00;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
    Characters_WallColossalShifter__ApplyRightHandState(__this,(uint)state,method_00);
    return;
  }
  return;
}


// Characters.WallColossalShifter$$SetSteamStateRPC
// il2cpp: void Characters_WallColossalShifter__SetSteamStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c20c50

void Characters_WallColossalShifter__SetSteamStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  MethodInfo *method_00;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
    Characters_WallColossalShifter__ApplySteamState(__this,(uint)state,method_00);
    return;
  }
  return;
}


// Characters.WallColossalShifter$$SetStunStateRPC
// il2cpp: void Characters_WallColossalShifter__SetStunStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c20c90

void Characters_WallColossalShifter__SetStunStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  MethodInfo *method_00;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
    Characters_WallColossalShifter__ApplyStunState(__this,(uint)state,method_00);
    return;
  }
  return;
}


// Characters.WallColossalShifter$$SetHandSeverTimesRPC
// il2cpp: void Characters_WallColossalShifter__SetHandSeverTimesRPC (Characters_WallColossalShifter_o* __this, float leftTime, float rightTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c20cd0

void Characters_WallColossalShifter__SetHandSeverTimesRPC
               (Characters_WallColossalShifter_o *__this,float leftTime,float rightTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
    (__this->fields).LeftHandSeverTimeLeft = leftTime;
    (__this->fields).RightHandSeverTimeLeft = rightTime;
    return;
  }
  return;
}


// Characters.WallColossalShifter$$SetStunRecoveryTimesRPC
// il2cpp: void Characters_WallColossalShifter__SetStunRecoveryTimesRPC (Characters_WallColossalShifter_o* __this, float stunTime, float recoveryTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c20d30

void Characters_WallColossalShifter__SetStunRecoveryTimesRPC
               (Characters_WallColossalShifter_o *__this,float stunTime,float recoveryTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
    (__this->fields).StunTimeLeft = stunTime;
    (__this->fields).RecoveryTimeLeft = recoveryTime;
    return;
  }
  return;
}


// Characters.WallColossalShifter$$Init
// il2cpp: void Characters_WallColossalShifter__Init (Characters_WallColossalShifter_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, float liveTime, const MethodInfo* method);
// 0x5c20d90

void Characters_WallColossalShifter__Init
               (Characters_WallColossalShifter_o *__this,bool ai,System_String_o *team,
               SimpleJSONFixed_JSONNode_o *data,float liveTime,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  int32_t iVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754774b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WarningSteamTime");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"StunDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"RecoveryDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"HandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"HandSeverWindow");
    Il2CppMethodInitialized_0754774b = '\x01';
  }
  if (ai) {
    if (data == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05c21168:
      ThrowNullReferenceException();
    }
    bVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"HandHealth",(data->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar3 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"HandHealth",(data->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c21168;
      iVar2 = (*(pSVar3->klass->vtable)._35_get_AsInt.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._35_get_AsInt.method);
      iVar4 = 0;
      if (0 < iVar2) {
        iVar4 = iVar2;
      }
      (__this->fields).MaxLeftHandHealth = iVar2;
      (__this->fields).CurrentLeftHandHealth = iVar4;
      (*(__this->klass->vtable)._207_OnLeftHandHealthChange.methodPtr)
                (__this,(__this->klass->vtable)._207_OnLeftHandHealthChange.method);
      (__this->fields).MaxRightHandHealth = iVar2;
      (__this->fields).CurrentRightHandHealth = iVar4;
      (*(__this->klass->vtable)._208_OnRightHandHealthChange.methodPtr)
                (__this,(__this->klass->vtable)._208_OnRightHandHealthChange.method);
    }
    bVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"LeftHandHealth",(data->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar3 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"LeftHandHealth",(data->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c21168;
      iVar2 = (*(pSVar3->klass->vtable)._35_get_AsInt.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._35_get_AsInt.method);
      iVar4 = 0;
      if (0 < iVar2) {
        iVar4 = iVar2;
      }
      (__this->fields).MaxLeftHandHealth = iVar2;
      (__this->fields).CurrentLeftHandHealth = iVar4;
      (*(__this->klass->vtable)._207_OnLeftHandHealthChange.methodPtr)
                (__this,(__this->klass->vtable)._207_OnLeftHandHealthChange.method);
    }
    bVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RightHandHealth",(data->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar3 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"RightHandHealth",(data->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c21168;
      iVar2 = (*(pSVar3->klass->vtable)._35_get_AsInt.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._35_get_AsInt.method);
      iVar4 = 0;
      if (0 < iVar2) {
        iVar4 = iVar2;
      }
      (__this->fields).MaxRightHandHealth = iVar2;
      (__this->fields).CurrentRightHandHealth = iVar4;
      (*(__this->klass->vtable)._208_OnRightHandHealthChange.methodPtr)
                (__this,(__this->klass->vtable)._208_OnRightHandHealthChange.method);
    }
    bVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"HandSeverWindow",(data->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar3 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"HandSeverWindow",(data->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c21168;
      fVar5 = (*(pSVar3->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).HandSeverWindow = fVar5;
    }
    bVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"StunDuration",(data->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar3 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"StunDuration",(data->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c21168;
      fVar5 = (*(pSVar3->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).StunDuration = fVar5;
    }
    bVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RecoveryDuration",(data->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar3 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"RecoveryDuration",(data->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c21168;
      fVar5 = (*(pSVar3->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).RecoveryDuration = fVar5;
    }
    bVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"WarningSteamTime",(data->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar3 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"WarningSteamTime",(data->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c21168;
      fVar5 = (*(pSVar3->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).WarningSteamTime = fVar5;
    }
  }
  Characters_BaseShifter__Init((Characters_BaseShifter_o *)__this,ai,team,data,liveTime,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalShifter$$CreateCache
// il2cpp: void Characters_WallColossalShifter__CreateCache (Characters_WallColossalShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x5c21170

void Characters_WallColossalShifter__CreateCache
               (Characters_WallColossalShifter_o *__this,Utility_BaseComponentCache_o *cache,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_WallColossalComponentCache_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754774c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalComponentCache);
    Il2CppMethodInitialized_0754774c = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_WallColossalComponentCache);
  Characters_WallColossalComponentCache___ctor(__this_00,owner,method_00);
  (__this->fields).ColossalCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ColossalCache);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,(Utility_BaseComponentCache_o *)(__this->fields).ColossalCache,
             method_01);
  return;
}


// Characters.WallColossalShifter$$CreateAnimations
// il2cpp: void Characters_WallColossalShifter__CreateAnimations (Characters_WallColossalShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x5c212b0

void Characters_WallColossalShifter__CreateAnimations
               (Characters_WallColossalShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_WallColossalAnimations_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754774d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalAnimations);
    Il2CppMethodInitialized_0754774d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_WallColossalAnimations);
  Characters_WallColossalAnimations___ctor(__this_00,(MethodInfo *)animations);
  (__this->fields).ColossalAnimations = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ColossalAnimations);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             (Characters_BaseTitanAnimations_o *)(__this->fields).ColossalAnimations,method_00);
  return;
}


// Characters.WallColossalShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_WallColossalShifter__CreateCustomSkinLoader (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c21530

CustomSkins_BaseCustomSkinLoader_o *
Characters_WallColossalShifter__CreateCustomSkinLoader
          (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (Il2CppMethodInitialized_0754774e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ColossalCustomSkinLoader);
    Il2CppMethodInitialized_0754774e = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
           UnityEngine_GameObject__AddComponent_object_
                     (__this_00,
                      (MethodInfo_353B6A0 *)
                      MethodInfo_UnityEngine_GameObject_AddComponent_ColossalCustomSkinLoader);
  return pCVar1;
}


// Characters.WallColossalShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_WallColossalShifter__GetSkinURL (Characters_WallColossalShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x5c21580

System_String_o *
Characters_WallColossalShifter__GetSkinURL
          (Characters_WallColossalShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754774f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754774f = '\x01';
  }
  if ((set == (Settings_ShifterCustomSkinSet_o *)0x0) ||
     (pSVar1 = (set->fields).Colossal, pSVar1 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._value;
}


// Characters.WallColossalShifter$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_WallColossalShifter__WaitAndDie (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c215c0

System_Collections_IEnumerator_o *
Characters_WallColossalShifter__WaitAndDie(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  Characters_WallColossalShifter__StopSteam(__this,method);
  (__this->fields).State = 0xf;
  (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
            (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
  pSVar1 = Characters_BaseShifter__WaitForDeathVisuals
                     ((Characters_BaseShifter_o *)__this,0.1,(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.WallColossalShifter$$ApplySteamState
// il2cpp: void Characters_WallColossalShifter__ApplySteamState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x5c1e6c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1ea2e: jmp 0x5c1eb62
// asm:   0x5c1ecf9: jmp 0x5c1e84c

void Characters_WallColossalShifter__ApplySteamState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_GameObject_o *pUVar2;
  Characters_WallColossalSteamWarningZone_o *pCVar3;
  bool bVar4;
  Characters_WallColossalComponentCache_o *pCVar5;
  UnityEngine_BoxCollider_o *pUVar6;
  MethodInfo *method_00;
  UnityEngine_Object_o *pUVar7;
  Characters_BaseHitbox_o *pCVar8;
  
  if (Il2CppMethodInitialized_07547750 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07547750 = '\x01';
  }
  (__this->fields)._steamState = newState;
  if (newState == 2) {
    pCVar5 = (__this->fields).ColossalCache;
    if (pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c1ecfe;
    Characters_BaseCharacter__ToggleParticles
              ((Characters_BaseCharacter_o *)__this,(pCVar5->fields).ColossalSteam1,false,(MethodInfo *)0x0);
    pCVar5 = (__this->fields).ColossalCache;
    if (pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c1ecfe;
    Characters_BaseCharacter__ToggleParticles
              ((Characters_BaseCharacter_o *)__this,(pCVar5->fields).ColossalSteam2,
               (__this->fields).EffectsEnabled,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    }
    pCVar8 = (Characters_BaseHitbox_o *)0x0;
    Characters_BaseCharacter__FadeSound
              ((Characters_BaseCharacter_o *)__this,
               TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1,0.0,1.0,(MethodInfo *)0x0);
    Characters_BaseCharacter__FadeSound
              ((Characters_BaseCharacter_o *)__this,
               TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam2,1.0,0.0,(MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam2,(MethodInfo *)0x0);
    pCVar5 = (__this->fields).ColossalCache;
    if (pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) {
      pCVar8 = (pCVar5->fields).SteamHitbox;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar4) &&
       (bVar4 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                          (__this,(__this->klass->vtable)._74_IsMine.method), bVar4)) {
      pCVar5 = (__this->fields).ColossalCache;
      if ((pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) ||
         (pCVar8 = (pCVar5->fields).SteamHitbox, pCVar8 == (Characters_BaseHitbox_o *)0x0)) goto label_05c1ecfe;
      (*(pCVar8->klass->vtable)._5_Activate.methodPtr)
                (pCVar8,0.0,0.0,(pCVar8->klass->vtable)._5_Activate.method);
    }
    pCVar5 = (__this->fields).ColossalCache;
    if (pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) goto label_05c1eb4f;
label_05c1ea1c:
    pUVar7 = (UnityEngine_Object_o *)0x0;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (newState != 1) {
      if (newState != 0) {
        return;
      }
      pCVar5 = (__this->fields).ColossalCache;
      if (pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) {
        Characters_BaseCharacter__ToggleParticles
                  ((Characters_BaseCharacter_o *)__this,(pCVar5->fields).ColossalSteam1,false,
                   (MethodInfo *)0x0);
        pCVar5 = (__this->fields).ColossalCache;
        if (pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) {
          Characters_BaseCharacter__ToggleParticles
                    ((Characters_BaseCharacter_o *)__this,(pCVar5->fields).ColossalSteam2,false,
                     (MethodInfo *)0x0);
          if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
          }
          pCVar8 = (Characters_BaseHitbox_o *)0x0;
          Characters_BaseCharacter__FadeSound
                    ((Characters_BaseCharacter_o *)__this,
                     TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1,0.0,1.0,
                     (MethodInfo *)0x0);
          Characters_BaseCharacter__FadeSound
                    ((Characters_BaseCharacter_o *)__this,
                     TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam2,0.0,1.0,
                     (MethodInfo *)0x0);
          pCVar5 = (__this->fields).ColossalCache;
          if (pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) {
            pCVar8 = (pCVar5->fields).SteamHitbox;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            pCVar5 = (__this->fields).ColossalCache;
            if ((pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) ||
               (pCVar8 = (pCVar5->fields).SteamHitbox, pCVar8 == (Characters_BaseHitbox_o *)0x0))
            goto label_05c1ecfe;
            (*(pCVar8->klass->vtable)._6_Deactivate.methodPtr)
                      (pCVar8,(pCVar8->klass->vtable)._6_Deactivate.method);
          }
          pCVar5 = (__this->fields).ColossalCache;
          if (pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) {
            pUVar7 = (UnityEngine_Object_o *)0x0;
            uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
          }
          else {
            pUVar7 = (UnityEngine_Object_o *)(pCVar5->fields).SteamWarningZone;
            uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar4) {
            return;
          }
          pCVar5 = (__this->fields).ColossalCache;
          if ((pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) &&
             (pUVar2 = (pCVar5->fields).SteamWarningZone, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            pCVar5 = (__this->fields).ColossalCache;
            if (pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) {
              pCVar3 = (pCVar5->fields).SteamWarningZoneComponent;
              if (pCVar3 == (Characters_WallColossalSteamWarningZone_o *)0x0) {
                return;
              }
              Characters_WallColossalSteamWarningZone__SetActive(pCVar3,false,method_00);
              return;
            }
          }
        }
      }
      goto label_05c1ecfe;
    }
    pCVar5 = (__this->fields).ColossalCache;
    if (pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c1ecfe;
    Characters_BaseCharacter__ToggleParticles
              ((Characters_BaseCharacter_o *)__this,(pCVar5->fields).ColossalSteam1,
               (__this->fields).EffectsEnabled,(MethodInfo *)0x0);
    pCVar5 = (__this->fields).ColossalCache;
    if (pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c1ecfe;
    Characters_BaseCharacter__ToggleParticles
              ((Characters_BaseCharacter_o *)__this,(pCVar5->fields).ColossalSteam2,false,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    }
    pCVar8 = (Characters_BaseHitbox_o *)0x0;
    Characters_BaseCharacter__FadeSound
              ((Characters_BaseCharacter_o *)__this,
               TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1,0.6,0.0,(MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1,(MethodInfo *)0x0);
    pCVar5 = (__this->fields).ColossalCache;
    if (pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) {
      pCVar8 = (pCVar5->fields).SteamHitbox;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pCVar5 = (__this->fields).ColossalCache;
      if ((pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) ||
         (pCVar8 = (pCVar5->fields).SteamHitbox, pCVar8 == (Characters_BaseHitbox_o *)0x0)) goto label_05c1ecfe;
      (*(pCVar8->klass->vtable)._6_Deactivate.methodPtr)(pCVar8,(pCVar8->klass->vtable)._6_Deactivate.method);
    }
    pCVar5 = (__this->fields).ColossalCache;
    if (pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c1ea1c;
label_05c1eb4f:
    pUVar7 = (UnityEngine_Object_o *)(pCVar5->fields).SteamWarningZone;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pCVar5 = (__this->fields).ColossalCache;
  if ((pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) &&
     (pUVar2 = (pCVar5->fields).SteamWarningZone, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    pCVar5 = (__this->fields).ColossalCache;
    if (pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) {
      pCVar3 = (pCVar5->fields).SteamWarningZoneComponent;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      pCVar5 = (__this->fields).ColossalCache;
      if ((pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) &&
         (pCVar3 = (pCVar5->fields).SteamWarningZoneComponent,
         pCVar3 != (Characters_WallColossalSteamWarningZone_o *)0x0)) {
        if (Il2CppMethodInitialized_0754775d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
          Il2CppMethodInitialized_0754775d = '\x01';
        }
        (pCVar3->fields)._owner = __this;
        Il2CppCodeGenWriteBarrier(&(pCVar3->fields)._owner);
        pUVar6 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pCVar3,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
        (pCVar3->fields)._boxCollider = pUVar6;
        Il2CppCodeGenWriteBarrier(&(pCVar3->fields)._boxCollider);
        pCVar5 = (__this->fields).ColossalCache;
        if ((pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) &&
           (pCVar3 = (pCVar5->fields).SteamWarningZoneComponent,
           pCVar3 != (Characters_WallColossalSteamWarningZone_o *)0x0)) {
          if (Il2CppMethodInitialized_0754775e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Clear);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_HashSet_Human_Clear);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            Il2CppMethodInitialized_0754775e = '\x01';
          }
          (pCVar3->fields)._isActive = true;
          return;
        }
      }
    }
  }
label_05c1ecfe:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$ApplyLeftHandState
// il2cpp: void Characters_WallColossalShifter__ApplyLeftHandState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x5c20870

void Characters_WallColossalShifter__ApplyLeftHandState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  float fVar1;
  Characters_BaseHitbox_o *__this_00;
  System_String_o *name;
  Characters_WallColossalComponentCache_o *pCVar2;
  UnityEngine_Transform_o *__this_01;
  bool toggle;
  UnityEngine_ParticleSystem_o *system;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Quaternion_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_Fields UStack_58;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  if (Il2CppMethodInitialized_07547751 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_07547751 = '\x01';
  }
  (__this->fields)._leftHandState = newState;
  switch(newState) {
  case 0:
  case 1:
    pCVar2 = (__this->fields).ColossalCache;
    if (pCVar2 != (Characters_WallColossalComponentCache_o *)0x0) {
      system = (pCVar2->fields).LeftHandSteam;
      toggle = false;
label_05c20a26:
      Characters_BaseCharacter__ToggleParticles
                ((Characters_BaseCharacter_o *)__this,system,toggle,(MethodInfo *)0x0);
      return;
    }
    break;
  case 2:
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pCVar2 = (__this->fields).ColossalCache;
    if ((pCVar2 != (Characters_WallColossalComponentCache_o *)0x0) &&
       (__this_00 = (pCVar2->fields).HandLHitbox, __this_00 != (Characters_BaseHitbox_o *)0x0)) {
      name = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
      ;
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UVar8 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        auStack_28._8_4_ = extraout_XMM0_Dc;
        auStack_28._0_8_ = UVar8.fields._0_8_;
        auStack_28._12_4_ = extraout_XMM0_Dd;
        UStack_58.x = -1.5707964;
        UStack_58.y = 0.0;
        UStack_58.z = 0.0;
        UVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Vector3_o *)&UStack_58,(MethodInfo *)0x0);
        fVar1 = (__this->fields).Size;
        fVar3 = UVar7.fields.x;
        fVar4 = UVar7.fields.y;
        fVar5 = UVar7.fields.z;
        fVar6 = UVar7.fields.w;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          auStack_38._8_4_ = extraout_XMM0_Dc_00;
          auStack_38._0_8_ = UVar7.fields._0_8_;
          auStack_38._12_4_ = extraout_XMM0_Dd_00;
          auStack_48._8_4_ = in_XMM1_Dc;
          auStack_48._0_8_ = UVar7.fields._8_8_;
          auStack_48._12_4_ = in_XMM1_Dd;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
          fVar3 = (float)auStack_38._0_4_;
          fVar4 = (float)auStack_38._4_4_;
          fVar5 = (float)auStack_48._0_4_;
          fVar6 = (float)auStack_48._4_4_;
        }
        UVar7.fields.y = fVar4;
        UVar7.fields.x = fVar3;
        UVar7.fields.w = fVar6;
        UVar7.fields.z = fVar5;
        UVar8.fields.x = (float)auStack_28._0_4_;
        UVar8.fields.y = (float)auStack_28._4_4_;
        Effects_EffectSpawner__Spawn
                  (name,UVar8,UVar7,fVar1 * 100.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
        pCVar2 = (__this->fields).ColossalCache;
        if (pCVar2 != (Characters_WallColossalComponentCache_o *)0x0) {
          Characters_BaseCharacter__ToggleParticles
                    ((Characters_BaseCharacter_o *)__this,(pCVar2->fields).LeftHandSteam,
                     (__this->fields).EffectsEnabled,(MethodInfo *)0x0);
          return;
        }
      }
    }
    break;
  case 3:
    pCVar2 = (__this->fields).ColossalCache;
    if (pCVar2 != (Characters_WallColossalComponentCache_o *)0x0) {
      system = (pCVar2->fields).LeftHandSteam;
      toggle = (__this->fields).EffectsEnabled;
      goto label_05c20a26;
    }
    break;
  default:
    return;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$ApplyRightHandState
// il2cpp: void Characters_WallColossalShifter__ApplyRightHandState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x5c20a80

void Characters_WallColossalShifter__ApplyRightHandState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  float fVar1;
  Characters_BaseHitbox_o *__this_00;
  System_String_o *name;
  Characters_WallColossalComponentCache_o *pCVar2;
  UnityEngine_Transform_o *__this_01;
  bool toggle;
  UnityEngine_ParticleSystem_o *system;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Quaternion_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_Fields UStack_58;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  if (Il2CppMethodInitialized_07547752 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_07547752 = '\x01';
  }
  (__this->fields)._rightHandState = newState;
  switch(newState) {
  case 0:
  case 1:
    pCVar2 = (__this->fields).ColossalCache;
    if (pCVar2 != (Characters_WallColossalComponentCache_o *)0x0) {
      system = (pCVar2->fields).RightHandSteam;
      toggle = false;
label_05c20c36:
      Characters_BaseCharacter__ToggleParticles
                ((Characters_BaseCharacter_o *)__this,system,toggle,(MethodInfo *)0x0);
      return;
    }
    break;
  case 2:
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pCVar2 = (__this->fields).ColossalCache;
    if ((pCVar2 != (Characters_WallColossalComponentCache_o *)0x0) &&
       (__this_00 = (pCVar2->fields).HandRHitbox, __this_00 != (Characters_BaseHitbox_o *)0x0)) {
      name = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
      ;
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UVar8 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        auStack_28._8_4_ = extraout_XMM0_Dc;
        auStack_28._0_8_ = UVar8.fields._0_8_;
        auStack_28._12_4_ = extraout_XMM0_Dd;
        UStack_58.x = -1.5707964;
        UStack_58.y = 0.0;
        UStack_58.z = 0.0;
        UVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Vector3_o *)&UStack_58,(MethodInfo *)0x0);
        fVar1 = (__this->fields).Size;
        fVar3 = UVar7.fields.x;
        fVar4 = UVar7.fields.y;
        fVar5 = UVar7.fields.z;
        fVar6 = UVar7.fields.w;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          auStack_38._8_4_ = extraout_XMM0_Dc_00;
          auStack_38._0_8_ = UVar7.fields._0_8_;
          auStack_38._12_4_ = extraout_XMM0_Dd_00;
          auStack_48._8_4_ = in_XMM1_Dc;
          auStack_48._0_8_ = UVar7.fields._8_8_;
          auStack_48._12_4_ = in_XMM1_Dd;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
          fVar3 = (float)auStack_38._0_4_;
          fVar4 = (float)auStack_38._4_4_;
          fVar5 = (float)auStack_48._0_4_;
          fVar6 = (float)auStack_48._4_4_;
        }
        UVar7.fields.y = fVar4;
        UVar7.fields.x = fVar3;
        UVar7.fields.w = fVar6;
        UVar7.fields.z = fVar5;
        UVar8.fields.x = (float)auStack_28._0_4_;
        UVar8.fields.y = (float)auStack_28._4_4_;
        Effects_EffectSpawner__Spawn
                  (name,UVar8,UVar7,fVar1 * 100.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
        pCVar2 = (__this->fields).ColossalCache;
        if (pCVar2 != (Characters_WallColossalComponentCache_o *)0x0) {
          Characters_BaseCharacter__ToggleParticles
                    ((Characters_BaseCharacter_o *)__this,(pCVar2->fields).RightHandSteam,
                     (__this->fields).EffectsEnabled,(MethodInfo *)0x0);
          return;
        }
      }
    }
    break;
  case 3:
    pCVar2 = (__this->fields).ColossalCache;
    if (pCVar2 != (Characters_WallColossalComponentCache_o *)0x0) {
      system = (pCVar2->fields).RightHandSteam;
      toggle = (__this->fields).EffectsEnabled;
      goto label_05c20c36;
    }
    break;
  default:
    return;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$ApplyStunState
// il2cpp: void Characters_WallColossalShifter__ApplyStunState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x5c1ed10

void Characters_WallColossalShifter__ApplyStunState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalAnimations_o *pCVar2;
  Characters_AnimationHandler_o *__this_00;
  bool bVar3;
  float fVar4;
  
  iVar1 = (__this->fields)._stunState;
  (__this->fields)._stunState = newState;
  if (newState == 1) {
    pCVar2 = (__this->fields).ColossalAnimations;
    if (pCVar2 != (Characters_WallColossalAnimations_o *)0x0) {
      Characters_BaseCharacter__PlayAnimation
                ((Characters_BaseCharacter_o *)__this,(pCVar2->fields).StunFallFaceAnim,0.0,(MethodInfo *)0x0)
      ;
      pCVar2 = (__this->fields).ColossalAnimations;
      if (pCVar2 != (Characters_WallColossalAnimations_o *)0x0) {
        Characters_BaseCharacter__SetAnimationSpeedNonRPC
                  ((Characters_BaseCharacter_o *)__this,(pCVar2->fields).StunFallFaceAnim,1.0,
                   (MethodInfo *)0x0);
        pCVar2 = (__this->fields).ColossalAnimations;
        if ((pCVar2 != (Characters_WallColossalAnimations_o *)0x0) &&
           (__this_00 = (__this->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
          fVar4 = Characters_AnimationHandler__GetLength
                            (__this_00,(pCVar2->fields).StunFallFaceAnim,(MethodInfo *)0x0);
          (__this->fields)._stunAnimationTimeLeft = fVar4 * 0.85;
          return;
        }
      }
    }
label_05c1ee1b:
    ThrowNullReferenceException();
  }
  if ((newState == 0) && (iVar1 - 1U < 2)) {
    pCVar2 = (__this->fields).ColossalAnimations;
    if (pCVar2 == (Characters_WallColossalAnimations_o *)0x0) goto label_05c1ee1b;
    Characters_BaseCharacter__SetAnimationSpeedNonRPC
              ((Characters_BaseCharacter_o *)__this,(pCVar2->fields).StunFallFaceAnim,1.0,(MethodInfo *)0x0);
    (__this->fields)._stunAnimationTimeLeft = 0.0;
    bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (((bVar3) && ((__this->fields).Dead == false)) && ((__this->fields).State == 0xd)) {
      (*(__this->klass->vtable)._162_Idle.methodPtr)(__this,(__this->klass->vtable)._162_Idle.method);
      return;
    }
  }
  return;
}


// Characters.WallColossalShifter$$LateUpdate
// il2cpp: void Characters_WallColossalShifter__LateUpdate (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c218a0

void Characters_WallColossalShifter__LateUpdate(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_WallColossalComponentCache_o *pCVar1;
  Characters_BaseHitbox_o *pCVar2;
  Characters_TitanDeathDissolve_o *pCVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Quaternion_o UVar5;
  UnityEngine_Vector3_Fields UStack_20;
  
  pCVar1 = (__this->fields).ColossalCache;
  if (((__this->fields)._leftHandState & 0xfffffffeU) == 2) {
    if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c21c0b;
    pUVar4 = (pCVar1->fields).LeftHand;
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c21c0b;
    UnityEngine_Transform__set_localScale
              (pUVar4,(UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pCVar1 = (__this->fields).ColossalCache;
    if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar2 = (pCVar1->fields).HandLHitbox, pCVar2 == (Characters_BaseHitbox_o *)0x0)) goto label_05c21c0b;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
    UStack_20.z = UnityEngine_Random__Range(-10.0,10.0,(MethodInfo *)0x0);
    UStack_20.z = UStack_20.z * 0.017453292;
  }
  else {
    if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c21c0b;
    pUVar4 = (pCVar1->fields).LeftHand;
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c21c0b;
    UnityEngine_Transform__set_localScale
              (pUVar4,(UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    pCVar1 = (__this->fields).ColossalCache;
    if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar2 = (pCVar1->fields).HandLHitbox, pCVar2 == (Characters_BaseHitbox_o *)0x0)) goto label_05c21c0b;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
    UStack_20.z = 0.0;
  }
  UStack_20.x = 0.0;
  UStack_20.y = 0.0;
  UVar5 = UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0)
  ;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c21c0b;
  UnityEngine_Transform__set_localRotation(pUVar4,UVar5,(MethodInfo *)0x0);
  pCVar1 = (__this->fields).ColossalCache;
  if (((__this->fields)._rightHandState & 0xfffffffeU) == 2) {
    if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c21c0b;
    pUVar4 = (pCVar1->fields).RightHand;
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c21c0b;
    UnityEngine_Transform__set_localScale
              (pUVar4,(UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pCVar1 = (__this->fields).ColossalCache;
    if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar2 = (pCVar1->fields).HandRHitbox, pCVar2 == (Characters_BaseHitbox_o *)0x0)) goto label_05c21c0b;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
    UStack_20.z = UnityEngine_Random__Range(-10.0,10.0,(MethodInfo *)0x0);
    UStack_20.z = UStack_20.z * 0.017453292;
  }
  else {
    if (pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c21c0b;
    pUVar4 = (pCVar1->fields).RightHand;
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c21c0b;
    UnityEngine_Transform__set_localScale
              (pUVar4,(UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    pCVar1 = (__this->fields).ColossalCache;
    if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar2 = (pCVar1->fields).HandRHitbox, pCVar2 == (Characters_BaseHitbox_o *)0x0)) goto label_05c21c0b;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
    UStack_20.z = 0.0;
  }
  UStack_20.x = 0.0;
  UStack_20.y = 0.0;
  UVar5 = UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0)
  ;
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localRotation(pUVar4,UVar5,(MethodInfo *)0x0);
    Characters_BaseShifter__UpdateDeathVisuals((Characters_BaseShifter_o *)__this,(MethodInfo *)0x0);
    pCVar3 = (__this->fields).DeathDissolve;
    if ((pCVar3 == (Characters_TitanDeathDissolve_o *)0x0) ||
       ((pCVar3->fields)._CollidersDisabled_k__BackingField == false)) {
      return;
    }
    pCVar1 = (__this->fields).ColossalCache;
    if (pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) {
      Characters_BaseCharacter__ToggleParticles
                ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).LeftHandSteam,false,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).ColossalCache;
      if (pCVar1 != (Characters_WallColossalComponentCache_o *)0x0) {
        Characters_BaseCharacter__ToggleParticles
                  ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).RightHandSteam,false,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
label_05c21c0b:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$Update
// il2cpp: void Characters_WallColossalShifter__Update (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c21c30

void Characters_WallColossalShifter__Update(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_WallColossalAnimations_o *pCVar1;
  bool bVar2;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  
  Characters_BaseShifter__Update((Characters_BaseShifter_o *)__this,(MethodInfo *)0x0);
  if ((__this->fields).Dead == false) {
    method_00 = (__this->klass->vtable)._74_IsMine.method;
    bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,method_00);
    if (bVar2) {
      Characters_WallColossalShifter__UpdateSteam(__this,method_00);
    }
    Characters_WallColossalShifter__UpdateHandSeverWindows(__this,method_00);
    Characters_WallColossalShifter__UpdateStunRecovery(__this,method_00);
    if (((__this->fields)._stunState == 1) && (fVar4 = (__this->fields)._stunAnimationTimeLeft, 0.0 < fVar4))
    {
      fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar4 = fVar4 - fVar3;
      (__this->fields)._stunAnimationTimeLeft = fVar4;
      if (fVar4 <= 0.0) {
        pCVar1 = (__this->fields).ColossalAnimations;
        if (pCVar1 == (Characters_WallColossalAnimations_o *)0x0) {
          ThrowNullReferenceException();
        }
        Characters_BaseCharacter__SetAnimationSpeedNonRPC
                  ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).StunFallFaceAnim,0.0,
                   (MethodInfo *)0x0);
        (__this->fields)._stunAnimationTimeLeft = 0.0;
        return;
      }
    }
  }
  return;
}


// Characters.WallColossalShifter$$ToggleParticleSystem
// il2cpp: void Characters_WallColossalShifter__ToggleParticleSystem (Characters_WallColossalShifter_o* __this, UnityEngine_ParticleSystem_o* system, bool enabled, const MethodInfo* method);
// 0x5c21600

void Characters_WallColossalShifter__ToggleParticleSystem
               (Characters_WallColossalShifter_o *__this,UnityEngine_ParticleSystem_o *system,bool enabled,
               MethodInfo *method)

{
  undefined7 in_register_00000011;
  
  if ((int)CONCAT71(in_register_00000011,enabled) != 0) {
    Characters_BaseCharacter__ToggleParticles
              ((Characters_BaseCharacter_o *)__this,system,(__this->fields).EffectsEnabled != false,
               (MethodInfo *)0x0);
    return;
  }
  if (__this == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_BaseCharacter__ToggleParticles
            ((Characters_BaseCharacter_o *)__this,system,false,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalShifter$$StopSteam
// il2cpp: void Characters_WallColossalShifter__StopSteam (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c20540

void Characters_WallColossalShifter__StopSteam(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_19;
  
  if (Il2CppMethodInitialized_07547753 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSteamStateRPC");
    Il2CppMethodInitialized_07547753 = '\x01';
  }
  if (((__this->fields)._steamState == 0) ||
     (bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                        (__this,(__this->klass->vtable)._74_IsMine.method), !bVar1)) {
    return;
  }
  __this_00 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  local_19 = 0;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566e0,&local_19);
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
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SetSteamStateRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$StartSteam
// il2cpp: void Characters_WallColossalShifter__StartSteam (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c22a40

void Characters_WallColossalShifter__StartSteam(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 uStack_19;
  
  if (Il2CppMethodInitialized_07547754 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSteamStateRPC");
    Il2CppMethodInitialized_07547754 = '\x01';
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
  uStack_19 = 1;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566e0,&uStack_19);
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
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SetSteamStateRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$UpdateSteam
// il2cpp: void Characters_WallColossalShifter__UpdateSteam (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c21cf0

void Characters_WallColossalShifter__UpdateSteam(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_WallColossalComponentCache_o *pCVar1;
  UnityEngine_Component_o *pUVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar7;
  undefined1 local_1d;
  float local_1c;
  
  if (Il2CppMethodInitialized_07547755 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSteamStateRPC");
    Il2CppMethodInitialized_07547755 = '\x01';
  }
  if ((__this->fields)._steamState != 0) {
    local_1c = (__this->fields)._steamTimeLeft;
    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._steamTimeLeft = local_1c - fVar7;
    local_1c = (__this->fields)._steamBlowAwayTimeLeft;
    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._steamBlowAwayTimeLeft = local_1c - fVar7;
    local_1c = (__this->fields)._steamDamageTimeLeft;
    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._steamDamageTimeLeft = local_1c - fVar7;
    if ((__this->fields)._steamBlowAwayTimeLeft <= 0.0) {
      pCVar1 = (__this->fields).ColossalCache;
      if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
         (pUVar2 = (UnityEngine_Component_o *)(pCVar1->fields).NapeHurtbox,
         pUVar2 == (UnityEngine_Component_o *)0x0)) goto label_05c21f3f;
      pUVar4 = UnityEngine_Component__get_transform(pUVar2,(MethodInfo *)0x0);
      Characters_WallColossalShifter__BlowAwayHumans
                (__this,pUVar4,100.0,(__this->fields).SteamBlowAwayForce,method_00);
      (__this->fields)._steamBlowAwayTimeLeft = (__this->fields).BlowAwaySteamTime;
    }
    if (((__this->fields)._steamState == 2) && ((__this->fields)._steamDamageTimeLeft <= 0.0)) {
      pCVar1 = (__this->fields).ColossalCache;
      if ((pCVar1 == (Characters_WallColossalComponentCache_o *)0x0) ||
         (pUVar2 = (UnityEngine_Component_o *)(pCVar1->fields).NapeHurtbox,
         pUVar2 == (UnityEngine_Component_o *)0x0)) goto label_05c21f3f;
      pUVar4 = UnityEngine_Component__get_transform(pUVar2,(MethodInfo *)0x0);
      Characters_WallColossalShifter__BlowAwayHumans
                (__this,pUVar4,100.0,(__this->fields).SteamBlowAwayForce,method_01);
      (__this->fields)._steamDamageTimeLeft = (__this->fields).SteamDamageInterval;
    }
    if ((((__this->fields)._steamTimeLeft <= 0.0) && ((__this->fields)._steamState == 1)) &&
       (bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                          (__this,(__this->klass->vtable)._74_IsMine.method), bVar3)) {
      __this_00 = Photon_Pun_MonoBehaviourPun__get_photonView
                            ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      local_1d = 2;
      pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&local_1d);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar5;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetSteamStateRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
      }
label_05c21f3f:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.WallColossalShifter$$UpdateHandSeverWindows
// il2cpp: void Characters_WallColossalShifter__UpdateHandSeverWindows (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c21f60

void Characters_WallColossalShifter__UpdateHandSeverWindows
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  undefined8 in_RAX;
  Photon_Pun_PhotonView_o *pPVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  float fVar7;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07547756 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetRightHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLeftHandStateRPC");
    Il2CppMethodInitialized_07547756 = '\x01';
  }
  if ((__this->fields)._stunState == 0) {
    if (((__this->fields)._leftHandState == 2) &&
       (fVar7 = (__this->fields).LeftHandSeverTimeLeft, 0.0 < fVar7)) {
      uStack_28 = CONCAT44(fVar7,(uint)uStack_28);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      (__this->fields).LeftHandSeverTimeLeft = uStack_28._4_4_ - fVar7;
      if (uStack_28._4_4_ - fVar7 <= 0.0) {
        (__this->fields).LeftHandSeverTimeLeft = 0.0;
        bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                          (__this,(__this->klass->vtable)._74_IsMine.method);
        if (bVar1) {
          iVar2 = (__this->fields).MaxLeftHandHealth;
          if (iVar2 < 1) {
            iVar2 = 0;
          }
          (__this->fields).CurrentLeftHandHealth = iVar2;
          (*(__this->klass->vtable)._207_OnLeftHandHealthChange.methodPtr)
                    (__this,(__this->klass->vtable)._207_OnLeftHandHealthChange.method);
          pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          uStack_28._0_4_ = (uint)(uint3)uStack_28;
          pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,(void *)((long)&uStack_28 + 3));
          if (pSVar4 == (System_Object_array *)0x0) goto label_05c22226;
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) goto label_05c22230;
          if ((int)pSVar4->max_length == 0) goto label_05c2222b;
          pSVar4->m_Items[0] = pIVar5;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
          if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto label_05c22226;
          Photon_Pun_PhotonView__RPC(pPVar3,"SetLeftHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
        }
      }
    }
    if (((__this->fields)._rightHandState == 2) &&
       (fVar7 = (__this->fields).RightHandSeverTimeLeft, 0.0 < fVar7)) {
      uStack_28 = CONCAT44(fVar7,(uint)uStack_28);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      (__this->fields).RightHandSeverTimeLeft = uStack_28._4_4_ - fVar7;
      if (uStack_28._4_4_ - fVar7 <= 0.0) {
        (__this->fields).RightHandSeverTimeLeft = 0.0;
        bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                          (__this,(__this->klass->vtable)._74_IsMine.method);
        if (bVar1) {
          iVar2 = (__this->fields).MaxRightHandHealth;
          if (iVar2 < 1) {
            iVar2 = 0;
          }
          (__this->fields).CurrentRightHandHealth = iVar2;
          (*(__this->klass->vtable)._208_OnRightHandHealthChange.methodPtr)
                    (__this,(__this->klass->vtable)._208_OnRightHandHealthChange.method);
          pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          uStack_28._0_3_ = (uint3)(ushort)uStack_28;
          pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,(void *)((long)&uStack_28 + 2));
          if (pSVar4 != (System_Object_array *)0x0) {
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) {
label_05c22230:
              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
            }
            if ((int)pSVar4->max_length == 0) {
label_05c2222b:
              ThrowIndexOutOfRangeException();
            }
            pSVar4->m_Items[0] = pIVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
            if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(pPVar3,"SetRightHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
              return;
            }
          }
label_05c22226:
          ThrowNullReferenceException();
        }
      }
    }
  }
  return;
}


// Characters.WallColossalShifter$$UpdateStunRecovery
// il2cpp: void Characters_WallColossalShifter__UpdateStunRecovery (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c22240

void Characters_WallColossalShifter__UpdateStunRecovery
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_String_o *methodName;
  float fVar7;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  float local_3c;
  float local_38 [2];
  
  if (Il2CppMethodInitialized_07547757 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetRightHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLeftHandStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunRecoveryTimesRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetStunStateRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHandSeverTimesRPC");
    Il2CppMethodInitialized_07547757 = '\x01';
  }
  iVar2 = (__this->fields)._stunState;
  if (iVar2 == 2) {
    local_3c = (__this->fields).RecoveryTimeLeft;
    if (local_3c <= 0.0) {
      return;
    }
    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).RecoveryTimeLeft = local_3c - fVar7;
    if (0.0 < local_3c - fVar7) {
      return;
    }
    (__this->fields).RecoveryTimeLeft = 0.0;
    bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (!bVar1) {
      return;
    }
    iVar2 = (__this->fields).MaxLeftHandHealth;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    (__this->fields).CurrentLeftHandHealth = iVar2;
    (*(__this->klass->vtable)._207_OnLeftHandHealthChange.methodPtr)
              (__this,(__this->klass->vtable)._207_OnLeftHandHealthChange.method);
    iVar2 = (__this->fields).MaxRightHandHealth;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    (__this->fields).CurrentRightHandHealth = iVar2;
    (*(__this->klass->vtable)._208_OnRightHandHealthChange.methodPtr)
              (__this,(__this->klass->vtable)._208_OnRightHandHealthChange.method);
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_3d = 0;
    pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&local_3d);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) goto label_05c229a6;
      if ((int)pSVar4->max_length == 0) goto label_05c229a1;
      pSVar4->m_Items[0] = pIVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
      if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar3,"SetStunStateRPC",0,pSVar4,(MethodInfo *)0x0);
        pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                           ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
        pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        local_3e = 0;
        pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&local_3e);
        if (pSVar4 != (System_Object_array *)0x0) {
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) goto label_05c229a6;
          if ((int)pSVar4->max_length == 0) goto label_05c229a1;
          pSVar4->m_Items[0] = pIVar5;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
          if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar3,"SetLeftHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
            pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                               ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
            pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
            local_3f = 0;
            pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&local_3f);
            if (pSVar4 != (System_Object_array *)0x0) {
              if ((pIVar5 != (Il2CppObject *)0x0) &&
                 (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                 pIVar6 == (Il2CppObject *)0x0)) goto label_05c229a6;
              if ((int)pSVar4->max_length == 0) goto label_05c229a1;
              pSVar4->m_Items[0] = pIVar5;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
              if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(pPVar3,"SetRightHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
                (__this->fields).LeftHandSeverTimeLeft = 0.0;
                (__this->fields).RightHandSeverTimeLeft = 0.0;
                pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                                   ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
                pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                local_38[1] = 0.0;
                pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,local_38 + 1);
                if (pSVar4 != (System_Object_array *)0x0) {
                  if ((pIVar5 == (Il2CppObject *)0x0) ||
                     (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                     pIVar6 != (Il2CppObject *)0x0)) {
                    if ((int)pSVar4->max_length != 0) {
                      pSVar4->m_Items[0] = pIVar5;
                      Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
                      local_38[0] = 0.0;
                      pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,local_38);
                      if ((pIVar5 != (Il2CppObject *)0x0) &&
                         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                         pIVar6 == (Il2CppObject *)0x0)) goto label_05c229a6;
                      if ((pSVar4->max_length & 0xfffffffe) != 0) {
                        pSVar4->m_Items[1] = pIVar5;
                        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
                        if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
                          methodName = "SetHandSeverTimesRPC";
                          goto label_05c22985;
                        }
                        goto label_05c2299c;
                      }
                    }
                    goto label_05c229a1;
                  }
                  goto label_05c229a6;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar2 != 1) {
      return;
    }
    local_3c = (__this->fields).StunTimeLeft;
    if (local_3c <= 0.0) {
      return;
    }
    fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).StunTimeLeft = local_3c - fVar7;
    if (0.0 < local_3c - fVar7) {
      return;
    }
    (__this->fields).StunTimeLeft = 0.0;
    bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (!bVar1) {
      return;
    }
    (__this->fields).RecoveryTimeLeft = (__this->fields).RecoveryDuration;
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_3d = 2;
    pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&local_3d);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) goto label_05c229a6;
      if ((int)pSVar4->max_length == 0) goto label_05c229a1;
      pSVar4->m_Items[0] = pIVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
      if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar3,"SetStunStateRPC",0,pSVar4,(MethodInfo *)0x0);
        pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                           ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
        pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        local_3e = 3;
        pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&local_3e);
        if (pSVar4 != (System_Object_array *)0x0) {
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) goto label_05c229a6;
          if ((int)pSVar4->max_length == 0) goto label_05c229a1;
          pSVar4->m_Items[0] = pIVar5;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
          if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar3,"SetLeftHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
            pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                               ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
            pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
            local_3f = 3;
            pIVar5 = il2cpp_vm_Object_Box(g_data_075566e0,&local_3f);
            if (pSVar4 != (System_Object_array *)0x0) {
              if ((pIVar5 != (Il2CppObject *)0x0) &&
                 (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                 pIVar6 == (Il2CppObject *)0x0)) goto label_05c229a6;
              if ((int)pSVar4->max_length == 0) goto label_05c229a1;
              pSVar4->m_Items[0] = pIVar5;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
              if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(pPVar3,"SetRightHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
                pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                                   ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
                pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                local_38[1] = 0.0;
                pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,local_38 + 1);
                if (pSVar4 != (System_Object_array *)0x0) {
                  if ((pIVar5 != (Il2CppObject *)0x0) &&
                     (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                     pIVar6 == (Il2CppObject *)0x0)) {
label_05c229a6:
                    pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                  }
                  if ((int)pSVar4->max_length != 0) {
                    pSVar4->m_Items[0] = pIVar5;
                    Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
                    local_38[0] = (__this->fields).RecoveryTimeLeft;
                    pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,local_38);
                    if ((pIVar5 != (Il2CppObject *)0x0) &&
                       (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                       pIVar6 == (Il2CppObject *)0x0)) goto label_05c229a6;
                    if ((pSVar4->max_length & 0xfffffffe) != 0) {
                      pSVar4->m_Items[1] = pIVar5;
                      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
                      if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
                        methodName = "SetStunRecoveryTimesRPC";
label_05c22985:
                        Photon_Pun_PhotonView__RPC(pPVar3,methodName,0,pSVar4,(MethodInfo *)0x0);
                        return;
                      }
                      goto label_05c2299c;
                    }
                  }
label_05c229a1:
                  ThrowIndexOutOfRangeException();
                }
              }
            }
          }
        }
      }
    }
  }
label_05c2299c:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$UpdateStunAnimation
// il2cpp: void Characters_WallColossalShifter__UpdateStunAnimation (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c229c0

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
      Characters_BaseCharacter__SetAnimationSpeedNonRPC
                ((Characters_BaseCharacter_o *)__this,(pCVar1->fields).StunFallFaceAnim,0.0,(MethodInfo *)0x0)
      ;
      (__this->fields)._stunAnimationTimeLeft = 0.0;
    }
  }
  return;
}


// Characters.WallColossalShifter$$DeactivateAllHitboxes
// il2cpp: void Characters_WallColossalShifter__DeactivateAllHitboxes (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c23020
// eh: try 0x5c230e4..0x5c2317a -> pad 0x5c23189 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c231a1..0x5c231a6 -> pad 0x5c231c5 cleanup
// eh: try 0x5c231c8..0x5c231d2 -> pad 0x5c231da catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c230de: nop 
// asm:   0x5c2317f: jmp 0x5c23189
// asm:   0x5c23181: jmp 0x5c23189
// asm:   0x5c23183: jmp 0x5c23189
// asm:   0x5c23185: jmp 0x5c23189
// asm:   0x5c23187: jmp 0x5c23189
// asm:   0x5c23189: mov rbx, rax
// asm:   0x5c2318c: cmp edx, 1
// asm:   0x5c2318f: jne 0x5c231c8
// asm:   0x5c23191: mov rdi, rbx
// asm:   0x5c23194: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c23199: mov rbx, qword ptr [rax]
// asm:   0x5c2319c: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c231a1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c231a6: lea rax, [rip + 0x166a59b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose
// asm:   0x5c231ad: mov rsi, qword ptr [rax]
// asm:   0x5c231b0: mov rdi, rsp
// asm:   0x5c231b3: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c231b8: test rbx, rbx
// asm:   0x5c231bb: je 0x5c23161
// asm:   0x5c231bd: mov rdi, rbx
// asm:   0x5c231c0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c231c5: mov rbx, rax
// asm:   0x5c231c8: lea rdi, [rsp + 0x18]
// asm:   0x5c231cd: call 0x2fd9220  ; il2cpp_runtime_helper_02fd9220()
// asm:   0x5c231d2: mov rdi, rbx
// asm:   0x5c231d5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c231da: mov rdi, rax
// asm:   0x5c231dd: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_WallColossalShifter__DeactivateAllHitboxes
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  System_Collections_Generic_List_BaseHitbox__o *__this_00;
  Characters_WallColossalComponentCache_o *pCVar2;
  Characters_BaseHitbox_o *y;
  Il2CppObject *x;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_T__o SStack_58;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_07547758 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseHitbox_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547758 = '\x01';
  }
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  SStack_58.fields._current = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields).BaseTitanCache;
  if ((pCVar1 == (Characters_BaseTitanComponentCache_o *)0x0) ||
     (__this_00 = (pCVar1->fields).Hitboxes, __this_00 == (System_Collections_Generic_List_BaseHitbox__o *)0x0
     )) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_58,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseHitbox_GetEnumerator);
  uStack_40 = 0;
  puStack_38 = (undefined1 *)&SStack_58;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_MoveNext);
    x = SStack_58.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                 (MethodInfo_4C45C40 *)
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
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((!bVar3) || ((__this->fields)._steamState != 2)) {
      if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*((UnityEngine_Object_c *)x->klass)[1]._1.byval_arg.data)
                (x,*(undefined8 *)&((UnityEngine_Object_c *)x->klass)[1]._1.byval_arg.bits);
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$UpdateAttack
// il2cpp: void Characters_WallColossalShifter__UpdateAttack (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c231f0

void Characters_WallColossalShifter__UpdateAttack(Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalAnimations_o *pCVar2;
  Characters_WallColossalComponentCache_o *pCVar3;
  Characters_BaseHitbox_o *pCVar4;
  System_String_o *pSVar5;
  Characters_BaseTitanComponentCache_o *pCVar6;
  bool bVar7;
  UnityEngine_Transform_o *pUVar8;
  MethodInfo *pMVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o source;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o UVar19;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Quaternion_o rotation_00;
  undefined8 uStack_58;
  UnityEngine_Vector3_Fields UStack_48;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [24];
  
  if (Il2CppMethodInitialized_07547759 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07547759 = '\x01';
  }
  fVar10 = (*(__this->klass->vtable)._194_GetAnimationTime.methodPtr)
                     (__this,(__this->klass->vtable)._194_GetAnimationTime.method);
  pCVar2 = (__this->fields).ColossalAnimations;
  if (pCVar2 == (Characters_WallColossalAnimations_o *)0x0) goto label_05c239f4;
  pMVar9 = (MethodInfo *)(pCVar2->fields).AttackSteam;
  bVar7 = System_String__op_Equality
                    ((__this->fields)._currentAttackAnimation,(System_String_o *)pMVar9,(MethodInfo *)0x0);
  if (bVar7) {
    if (fVar10 <= 0.37) {
      return;
    }
    if ((__this->fields)._currentAttackStage == 0) {
      (__this->fields)._currentAttackStage = 1;
      Characters_WallColossalShifter__StartSteam(__this,pMVar9);
      return;
    }
    return;
  }
  pCVar2 = (__this->fields).ColossalAnimations;
  if (pCVar2 == (Characters_WallColossalAnimations_o *)0x0) goto label_05c239f4;
  bVar7 = System_String__op_Equality
                    ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackKick,(MethodInfo *)0x0);
  if (bVar7) {
    if (fVar10 <= 0.42) {
      return;
    }
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    (__this->fields)._currentAttackStage = 1;
    pCVar3 = (__this->fields).ColossalCache;
    if (pCVar3 != (Characters_WallColossalComponentCache_o *)0x0) {
      pCVar4 = (pCVar3->fields).FootRHitbox;
      fVar10 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                         (__this,0.1,(__this->klass->vtable)._195_GetHitboxTime.method);
      if (pCVar4 != (Characters_BaseHitbox_o *)0x0) {
        uVar12 = extraout_XMM0_Dc;
        uVar13 = extraout_XMM0_Dd;
        (*(pCVar4->klass->vtable)._5_Activate.methodPtr)
                  (pCVar4,0.0,fVar10,(pCVar4->klass->vtable)._5_Activate.method);
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        pCVar3 = (__this->fields).ColossalCache;
        if ((pCVar3 != (Characters_WallColossalComponentCache_o *)0x0) &&
           (pCVar4 = (pCVar3->fields).FootRHitbox, pCVar4 != (Characters_BaseHitbox_o *)0x0)) {
          pSVar5 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UVar18 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
            pCVar6 = (__this->fields).BaseTitanCache;
            if ((pCVar6 != (Characters_BaseTitanComponentCache_o *)0x0) &&
               (pUVar8 = (pCVar6->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
              UVar19 = UnityEngine_Transform__get_rotation(pUVar8,(MethodInfo *)0x0);
              fVar10 = (__this->fields).Size;
              fVar14 = UVar19.fields.x;
              fVar15 = UVar19.fields.y;
              fVar16 = UVar19.fields.z;
              fVar17 = UVar19.fields.w;
              if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                auStack_28._8_4_ = extraout_XMM0_Dc_00;
                auStack_28._0_8_ = UVar19.fields._0_8_;
                auStack_28._12_4_ = extraout_XMM0_Dd_00;
                auStack_38._8_4_ = uVar12;
                auStack_38._0_8_ = UVar19.fields._8_8_;
                auStack_38._12_4_ = uVar13;
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                fVar14 = (float)auStack_28._0_4_;
                fVar15 = (float)auStack_28._4_4_;
                fVar16 = (float)auStack_38._0_4_;
                fVar17 = (float)auStack_38._4_4_;
              }
              UVar19.fields.y = fVar15;
              UVar19.fields.x = fVar14;
              UVar19.fields.w = fVar17;
              UVar19.fields.z = fVar16;
              Effects_EffectSpawner__Spawn
                        (pSVar5,UVar18,UVar19,fVar10 * 5.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    goto label_05c239f4;
  }
  pCVar2 = (__this->fields).ColossalAnimations;
  if (pCVar2 == (Characters_WallColossalAnimations_o *)0x0) goto label_05c239f4;
  bVar7 = System_String__op_Equality
                    ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackSweep,(MethodInfo *)0x0);
  if (bVar7) {
    iVar1 = (__this->fields)._currentAttackStage;
    if ((fVar10 <= 0.38) || (iVar1 != 0)) {
      if (fVar10 <= 0.45) {
        return;
      }
      if (iVar1 != 1) {
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
    (__this->fields)._currentAttackStage = 1;
    pCVar3 = (__this->fields).ColossalCache;
    if (pCVar3 != (Characters_WallColossalComponentCache_o *)0x0) {
      pCVar4 = (pCVar3->fields).ForearmRHitbox;
      fVar10 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                         (__this,0.14,(__this->klass->vtable)._195_GetHitboxTime.method);
      if (pCVar4 != (Characters_BaseHitbox_o *)0x0) {
        (*(pCVar4->klass->vtable)._5_Activate.methodPtr)
                  (pCVar4,0.0,fVar10,(pCVar4->klass->vtable)._5_Activate.method);
        return;
      }
    }
    goto label_05c239f4;
  }
  pCVar2 = (__this->fields).ColossalAnimations;
  if (pCVar2 == (Characters_WallColossalAnimations_o *)0x0) goto label_05c239f4;
  bVar7 = System_String__op_Equality
                    ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackWallSlap1L,
                     (MethodInfo *)0x0);
  if (bVar7) {
label_05c23554:
    if (fVar10 <= 0.34) {
      return;
    }
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    (__this->fields)._currentAttackStage = 1;
    if (1 < (uint)(__this->fields)._leftHandState) {
      return;
    }
    pCVar3 = (__this->fields).ColossalCache;
    if (pCVar3 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c239f4;
    pCVar4 = (pCVar3->fields).HandLHitbox;
    fVar10 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._195_GetHitboxTime.method);
    if (pCVar4 == (Characters_BaseHitbox_o *)0x0) goto label_05c239f4;
    uVar12 = extraout_XMM0_Dc_01;
    uVar13 = extraout_XMM0_Dd_01;
    (*(pCVar4->klass->vtable)._5_Activate.methodPtr)
              (pCVar4,0.0,fVar10,(pCVar4->klass->vtable)._5_Activate.method);
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pCVar3 = (__this->fields).ColossalCache;
    if ((pCVar3 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar4 = (pCVar3->fields).HandLHitbox, pCVar4 == (Characters_BaseHitbox_o *)0x0)) goto label_05c239f4;
    pSVar5 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom8;
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_05c239f4;
    UVar18 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    fVar10 = UVar18.fields.z;
    uVar11 = il2cpp_runtime_helper_05bbd070(0);
    uStack_58._0_4_ = UVar18.fields.x;
    uStack_58._4_4_ = UVar18.fields.y;
    UVar18.fields.z = fVar10 * 8.0 + UVar18.fields.z;
    UStack_48.x = -1.5707964;
    UStack_48.y = 0.0;
    UStack_48.z = 0.0;
    UVar19 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o *)&UStack_48,(MethodInfo *)0x0);
    fVar10 = (__this->fields).Size;
    fVar14 = UVar19.fields.x;
    fVar15 = UVar19.fields.y;
    fVar16 = UVar19.fields.z;
    fVar17 = UVar19.fields.w;
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      auStack_28._8_4_ = extraout_XMM0_Dc_02;
      auStack_28._0_8_ = UVar19.fields._0_8_;
      auStack_28._12_4_ = extraout_XMM0_Dd_02;
      auStack_38._8_4_ = uVar12;
      auStack_38._0_8_ = UVar19.fields._8_8_;
      auStack_38._12_4_ = uVar13;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      fVar14 = (float)auStack_28._0_4_;
      fVar15 = (float)auStack_28._4_4_;
      fVar16 = (float)auStack_38._0_4_;
      fVar17 = (float)auStack_38._4_4_;
    }
    UVar18.fields.x = (float)uVar11 * 8.0 + (float)uStack_58;
    UVar18.fields.y = (float)((ulong)uVar11 >> 0x20) * 8.0 + uStack_58._4_4_;
    rotation.fields.y = fVar15;
    rotation.fields.x = fVar14;
    rotation.fields.w = fVar17;
    rotation.fields.z = fVar16;
    Effects_EffectSpawner__Spawn
              (pSVar5,UVar18,rotation,fVar10 * 4.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
    pCVar3 = (__this->fields).ColossalCache;
    if (pCVar3 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c239f4;
    pCVar4 = (pCVar3->fields).HandLHitbox;
  }
  else {
    pCVar2 = (__this->fields).ColossalAnimations;
    if (pCVar2 == (Characters_WallColossalAnimations_o *)0x0) goto label_05c239f4;
    bVar7 = System_String__op_Equality
                      ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackWallSlap2L,
                       (MethodInfo *)0x0);
    if (bVar7) goto label_05c23554;
    pCVar2 = (__this->fields).ColossalAnimations;
    if (pCVar2 == (Characters_WallColossalAnimations_o *)0x0) goto label_05c239f4;
    bVar7 = System_String__op_Equality
                      ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackWallSlap1R,
                       (MethodInfo *)0x0);
    if (!bVar7) {
      pCVar2 = (__this->fields).ColossalAnimations;
      if (pCVar2 == (Characters_WallColossalAnimations_o *)0x0) goto label_05c239f4;
      bVar7 = System_String__op_Equality
                        ((__this->fields)._currentAttackAnimation,(pCVar2->fields).AttackWallSlap2R,
                         (MethodInfo *)0x0);
      if (!bVar7) {
        return;
      }
    }
    if (fVar10 <= 0.34) {
      return;
    }
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    (__this->fields)._currentAttackStage = 1;
    if (1 < (uint)(__this->fields)._rightHandState) {
      return;
    }
    pCVar3 = (__this->fields).ColossalCache;
    if (pCVar3 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c239f4;
    pCVar4 = (pCVar3->fields).HandRHitbox;
    fVar10 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._195_GetHitboxTime.method);
    if (pCVar4 == (Characters_BaseHitbox_o *)0x0) goto label_05c239f4;
    uVar12 = extraout_XMM0_Dc_03;
    uVar13 = extraout_XMM0_Dd_03;
    (*(pCVar4->klass->vtable)._5_Activate.methodPtr)
              (pCVar4,0.0,fVar10,(pCVar4->klass->vtable)._5_Activate.method);
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pCVar3 = (__this->fields).ColossalCache;
    if ((pCVar3 == (Characters_WallColossalComponentCache_o *)0x0) ||
       (pCVar4 = (pCVar3->fields).HandRHitbox, pCVar4 == (Characters_BaseHitbox_o *)0x0)) goto label_05c239f4;
    pSVar5 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom8;
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_05c239f4;
    UVar18 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    fVar10 = UVar18.fields.z;
    uVar11 = il2cpp_runtime_helper_05bbd070(0);
    uStack_58._0_4_ = UVar18.fields.x;
    uStack_58._4_4_ = UVar18.fields.y;
    position.fields.z = fVar10 * 8.0 + UVar18.fields.z;
    UStack_48.x = -1.5707964;
    UStack_48.y = 0.0;
    UStack_48.z = 0.0;
    UVar19 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o *)&UStack_48,(MethodInfo *)0x0);
    fVar10 = (__this->fields).Size;
    fVar14 = UVar19.fields.x;
    fVar15 = UVar19.fields.y;
    fVar16 = UVar19.fields.z;
    fVar17 = UVar19.fields.w;
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      auStack_28._8_4_ = extraout_XMM0_Dc_04;
      auStack_28._0_8_ = UVar19.fields._0_8_;
      auStack_28._12_4_ = extraout_XMM0_Dd_04;
      auStack_38._8_4_ = uVar12;
      auStack_38._0_8_ = UVar19.fields._8_8_;
      auStack_38._12_4_ = uVar13;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      fVar14 = (float)auStack_28._0_4_;
      fVar15 = (float)auStack_28._4_4_;
      fVar16 = (float)auStack_38._0_4_;
      fVar17 = (float)auStack_38._4_4_;
    }
    position.fields.x = (float)uVar11 * 8.0 + (float)uStack_58;
    position.fields.y = (float)((ulong)uVar11 >> 0x20) * 8.0 + uStack_58._4_4_;
    rotation_00.fields.y = fVar15;
    rotation_00.fields.x = fVar14;
    rotation_00.fields.w = fVar17;
    rotation_00.fields.z = fVar16;
    Effects_EffectSpawner__Spawn
              (pSVar5,position,rotation_00,fVar10 * 4.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
    pCVar3 = (__this->fields).ColossalCache;
    if (pCVar3 == (Characters_WallColossalComponentCache_o *)0x0) goto label_05c239f4;
    pCVar4 = (pCVar3->fields).HandRHitbox;
  }
  if ((pCVar4 != (Characters_BaseHitbox_o *)0x0) &&
     (pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0),
     pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    pMVar9 = (MethodInfo *)0x0;
    UVar18 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    fVar10 = UVar18.fields.z;
    uVar11 = il2cpp_runtime_helper_05bbd070(0);
    uStack_58._0_4_ = UVar18.fields.x;
    uStack_58._4_4_ = UVar18.fields.y;
    source.fields.x = (float)uVar11 * 10.0 + (float)uStack_58;
    source.fields.y = (float)((ulong)uVar11 >> 0x20) * 10.0 + uStack_58._4_4_;
    source.fields.z = fVar10 * 10.0 + UVar18.fields.z;
    Characters_WallColossalShifter__BlowAwayHumans_5b23a00
              (__this,source,(__this->fields).DefaultBlowAwayForce,pMVar9);
    return;
  }
label_05c239f4:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$BlowAwayHumans
// il2cpp: void Characters_WallColossalShifter__BlowAwayHumans (Characters_WallColossalShifter_o* __this, UnityEngine_Transform_o* source, float angle, float force, const MethodInfo* method);
// 0x5c22b80
// eh: try 0x5c22c84..0x5c22f98 -> pad 0x5c22fb2 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c22fca..0x5c22fcf -> pad 0x5c22ff4 cleanup
// eh: try 0x5c22ff7..0x5c23001 -> pad 0x5c23009 catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c22c7c: nop dword ptr [rax]
// asm:   0x5c22cfb: jmp 0x5c22d1c
// asm:   0x5c22d7e: jmp 0x5c22d97
// asm:   0x5c22dc5: jmp 0x5c22de3
// asm:   0x5c22e33: jmp 0x5c22edb
// asm:   0x5c22f98: jmp 0x5c22fb2
// asm:   0x5c22f9a: jmp 0x5c22fb2
// asm:   0x5c22f9c: jmp 0x5c22fb2
// asm:   0x5c22f9e: jmp 0x5c22fb2
// asm:   0x5c22fa0: jmp 0x5c22fb2
// asm:   0x5c22fa2: jmp 0x5c22fb2
// asm:   0x5c22fa4: jmp 0x5c22fb2
// asm:   0x5c22fa6: jmp 0x5c22fb2
// asm:   0x5c22fa8: jmp 0x5c22fb2
// asm:   0x5c22faa: jmp 0x5c22fb2
// asm:   0x5c22fac: jmp 0x5c22fb2
// asm:   0x5c22fae: jmp 0x5c22fb2
// asm:   0x5c22fb0: jmp 0x5c22fb2
// asm:   0x5c22fb2: mov rbx, rax
// asm:   0x5c22fb5: cmp edx, 1
// asm:   0x5c22fb8: jne 0x5c22ff7
// asm:   0x5c22fba: mov rdi, rbx
// asm:   0x5c22fbd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c22fc2: mov rbx, qword ptr [rax]
// asm:   0x5c22fc5: mov qword ptr [rsp + 0x48], rbx
// asm:   0x5c22fca: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c22fcf: lea rax, [rip + 0x166ae92]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5c22fd6: mov rsi, qword ptr [rax]
// asm:   0x5c22fd9: lea rdi, [rsp + 0x10]
// asm:   0x5c22fde: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c22fe3: test rbx, rbx
// asm:   0x5c22fe6: je 0x5c22f47
// asm:   0x5c22fec: mov rdi, rbx
// asm:   0x5c22fef: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c22ff4: mov rbx, rax
// asm:   0x5c22ff7: lea rdi, [rsp + 0x48]
// asm:   0x5c22ffc: call 0x2fd9250  ; il2cpp_runtime_helper_02fd9250()
// asm:   0x5c23001: mov rdi, rbx
// asm:   0x5c23004: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c23009: mov rdi, rax
// asm:   0x5c2300c: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_WallColossalShifter__BlowAwayHumans
               (Characters_WallColossalShifter_o *__this,UnityEngine_Transform_o *source,float angle,
               float force,MethodInfo *method)

{
  uint32_t uVar1;
  GameManagers_InGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  double dVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  Il2CppClass *pIVar7;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o local_b8;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [24];
  
  if (Il2CppMethodInitialized_0754775a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    Il2CppMethodInitialized_0754775a = '\x01';
  }
  local_b8.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_b8.fields._index = 0;
  local_b8.fields._version = 0;
  local_b8.fields._current = (Il2CppObject *)0x0;
  pGVar2 = (__this->fields)._inGameManager;
  if ((pGVar2 == (GameManagers_InGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).Humans,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_80,__this_00,
             (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
  local_b8.fields._current = local_70;
  local_b8.fields._set = (System_Collections_Generic_HashSet_T__o *)local_80._0_8_;
  local_b8.fields._index = local_80._8_4_;
  local_b8.fields._version = local_80._12_4_;
  local_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_80._8_8_ = &local_b8;
  if (source == (UnityEngine_Transform_o *)0x0) {
    bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (&local_b8,
                       (MethodInfo_4C456D0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    if (bVar6) {
      if (local_b8.fields._current != (Il2CppObject *)0x0) {
        if (local_b8.fields._current[8].klass != (Il2CppClass *)0x0) {
          pUVar3 = (UnityEngine_Transform_o *)((local_b8.fields._current[8].klass)->_1).name;
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
            ThrowNullReferenceException();
          }
label_05c22f87:
          ThrowNullReferenceException();
        }
label_05c22f79:
        ThrowNullReferenceException();
      }
label_05c22f68:
      ThrowNullReferenceException();
    }
  }
  else {
label_05c22c80:
    while (bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             (&local_b8,
                              (MethodInfo_4C456D0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext),
          pIVar5 = local_b8.fields._current, bVar6) {
      if (local_b8.fields._current == (Il2CppObject *)0x0) goto label_05c22f68;
      if (local_b8.fields._current[8].klass == (Il2CppClass *)0x0) goto label_05c22f79;
      pUVar3 = (UnityEngine_Transform_o *)((local_b8.fields._current[8].klass)->_1).name;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05c22f87;
      UVar10 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      local_58 = UVar10.fields.z;
      fStack_60 = (float)extraout_XMM0_Dc;
      local_68 = (undefined1  [8])UVar10.fields._0_8_;
      fStack_5c = (float)extraout_XMM0_Dd;
      uStack_54 = in_XMM1_Db;
      uStack_50 = in_XMM1_Dc;
      uStack_4c = in_XMM1_Dd;
      UVar10 = UnityEngine_Transform__get_position(source,(MethodInfo *)0x0);
      fStack_90 = (float)extraout_XMM0_Dc_00;
      local_98 = UVar10.fields._0_8_;
      fStack_8c = (float)extraout_XMM0_Dd_00;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      local_68._0_4_ = (float)local_68._0_4_ - (float)local_98._0_4_;
      local_68._4_4_ = (float)local_68._4_4_ - (float)local_98._4_4_;
      local_58 = local_58 - UVar10.fields.z;
      fStack_60 = fStack_60 - fStack_90;
      fStack_5c = fStack_5c - fStack_8c;
      fVar8 = local_58 * local_58 +
              (float)local_68._4_4_ * (float)local_68._4_4_ + (float)local_68._0_4_ * (float)local_68._0_4_;
      if (fVar8 < 0.0) goto label_05c22d80;
      in_XMM1_Db = 0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      if (SQRT(fVar8) < (__this->fields).BlowAwayMaxDistance) goto label_05c22d97;
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (&local_b8,
             (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
  return;
label_05c22d80:
  fVar9 = sqrtf(fVar8);
  in_XMM1_Db = 0;
  in_XMM1_Dc = 0;
  in_XMM1_Dd = 0;
  if (fVar9 < (__this->fields).BlowAwayMaxDistance) {
label_05c22d97:
    UVar10 = UnityEngine_Transform__get_forward(source,(MethodInfo *)0x0);
    local_48._8_4_ = extraout_XMM0_Dc_01;
    local_48._0_8_ = UVar10.fields._0_8_;
    local_48._12_4_ = extraout_XMM0_Dd_01;
    local_98._0_4_ = UVar10.fields.z;
    if (Il2CppMethodInitialized_075450a4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_075450a4 = '\x01';
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar8 = fVar8 * ((float)local_98._0_4_ * (float)local_98._0_4_ +
                    (float)local_48._4_4_ * (float)local_48._4_4_ +
                    (float)local_48._0_4_ * (float)local_48._0_4_);
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
      pIVar7 = (Il2CppClass *)TypeInfo_System_Math;
    }
    else {
      fVar8 = SQRT(fVar8);
      pIVar7 = (Il2CppClass *)TypeInfo_System_Math;
    }
    fVar9 = 0.0;
    TypeInfo_System_Math = (System_Math_c *)pIVar7;
    if (1e-15 <= fVar8) {
      if ((pIVar7->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(pIVar7);
      }
      fVar8 = (local_58 * (float)local_98._0_4_ +
              (float)local_68._4_4_ * (float)local_48._4_4_ + (float)local_68._0_4_ * (float)local_48._0_4_) /
              fVar8;
      fVar9 = 1.0;
      if (fVar8 <= 1.0) {
        fVar9 = fVar8;
      }
      dVar4 = acos((double)(float)(~-(uint)(-1.0 <= fVar8) & 0xbf800000 | (uint)fVar9 & -(uint)(-1.0 <= fVar8)
                                  ),(MethodInfo *)pIVar7);
      fVar9 = (float)dVar4 * 57.29578;
    }
    in_XMM1_Db = 0;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    if (fVar9 <= angle * 0.5) {
      UVar10 = UnityEngine_Transform__get_position(source,(MethodInfo *)0x0);
      pIVar7 = pIVar5->klass;
      (*pIVar7->vtable[99].methodPtr)(UVar10.fields.x,UVar10.fields.z,pIVar5,pIVar7->vtable[99].method);
    }
  }
  goto label_05c22c80;
}


// Characters.WallColossalShifter$$BlowAwayHumans
// il2cpp: void Characters_WallColossalShifter__BlowAwayHumans (Characters_WallColossalShifter_o* __this, UnityEngine_Vector3_o source, float force, const MethodInfo* method);
// 0x5c23a00
// eh: try 0x5c23ae4..0x5c23c34 -> pad 0x5c23c45 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c23c5d..0x5c23c62 -> pad 0x5c23c83 cleanup
// eh: try 0x5c23c86..0x5c23c90 -> pad 0x5c23c98 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c23ad9: nop dword ptr [rax]
// asm:   0x5c23b48: jmp 0x5c23b6b
// asm:   0x5c23bbb: jmp 0x5c23bd8
// asm:   0x5c23c39: jmp 0x5c23c45
// asm:   0x5c23c3b: jmp 0x5c23c45
// asm:   0x5c23c3d: jmp 0x5c23c45
// asm:   0x5c23c3f: jmp 0x5c23c45
// asm:   0x5c23c41: jmp 0x5c23c45
// asm:   0x5c23c43: jmp 0x5c23c45
// asm:   0x5c23c45: mov rbx, rax
// asm:   0x5c23c48: cmp edx, 1
// asm:   0x5c23c4b: jne 0x5c23c86
// asm:   0x5c23c4d: mov rdi, rbx
// asm:   0x5c23c50: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c23c55: mov rbx, qword ptr [rax]
// asm:   0x5c23c58: mov qword ptr [rsp + 8], rbx
// asm:   0x5c23c5d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c23c62: lea rax, [rip + 0x166a1ff]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5c23c69: mov rsi, qword ptr [rax]
// asm:   0x5c23c6c: lea rdi, [rsp + 0x30]
// asm:   0x5c23c71: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c23c76: test rbx, rbx
// asm:   0x5c23c79: je 0x5c23c14
// asm:   0x5c23c7b: mov rdi, rbx
// asm:   0x5c23c7e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c23c83: mov rbx, rax
// asm:   0x5c23c86: lea rdi, [rsp + 8]
// asm:   0x5c23c8b: call 0x2fd9280  ; il2cpp_runtime_helper_02fd9280()
// asm:   0x5c23c90: mov rdi, rbx
// asm:   0x5c23c93: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c23c98: mov rdi, rax
// asm:   0x5c23c9b: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_WallColossalShifter__BlowAwayHumans_5b23a00
               (Characters_WallColossalShifter_o *__this,UnityEngine_Vector3_o source,float force,
               MethodInfo *method)

{
  uint32_t uVar1;
  GameManagers_InGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  float fVar6;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  UnityEngine_Vector3_o UVar7;
  undefined1 local_b0 [16];
  Il2CppObject *local_a0;
  undefined1 local_98 [16];
  System_Collections_Generic_HashSet_Enumerator_T__o local_88;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  
  local_68 = source.fields.z;
  local_98._8_4_ = in_XMM0_Dc;
  local_98._0_8_ = source.fields._0_8_;
  local_98._12_4_ = in_XMM0_Dd;
  fStack_64 = in_XMM1_Db;
  fStack_60 = in_XMM1_Dc;
  fStack_5c = in_XMM1_Dd;
  if (Il2CppMethodInitialized_0754775b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    Il2CppMethodInitialized_0754775b = '\x01';
  }
  pGVar2 = (__this->fields)._inGameManager;
  if ((pGVar2 == (GameManagers_InGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).Humans,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b0,__this_00,
             (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
  local_88.fields._current = local_a0;
  local_88.fields._set = (System_Collections_Generic_HashSet_T__o *)local_b0._0_8_;
  local_88.fields._index = local_b0._8_4_;
  local_88.fields._version = local_b0._12_4_;
  local_b0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58 = local_68;
  fStack_54 = (float)local_98._0_4_;
  fStack_50 = fStack_64;
  fStack_4c = (float)local_98._4_4_;
  local_b0._8_8_ = &local_88;
label_05c23ae0:
  do {
    bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (&local_88,
                       (MethodInfo_4C456D0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    pIVar4 = local_88.fields._current;
    if (!bVar5) {
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (&local_88,
                 (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose)
      ;
      return;
    }
    if (local_88.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_88.fields._current[8].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = (UnityEngine_Transform_o *)((local_88.fields._current[8].klass)->_1).name;
    if (__this_01 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar7 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    local_48 = UVar7.fields.z;
    local_38._8_4_ = extraout_XMM0_Dc;
    local_38._0_8_ = UVar7.fields._0_8_;
    local_38._12_4_ = extraout_XMM0_Dd;
    fStack_44 = in_XMM1_Db;
    fStack_40 = in_XMM1_Dc;
    fStack_3c = in_XMM1_Dd;
    if (Il2CppMethodInitialized_0753e7b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7b7 = '\x01';
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    in_XMM1_Db = ((float)local_38._0_4_ - fStack_54) * ((float)local_38._0_4_ - fStack_54);
    in_XMM1_Dc = (fStack_44 - fStack_50) * (fStack_44 - fStack_50);
    in_XMM1_Dd = ((float)local_38._4_4_ - fStack_4c) * ((float)local_38._4_4_ - fStack_4c);
    fVar6 = ((float)local_38._4_4_ - (float)local_98._4_4_) * ((float)local_38._4_4_ - (float)local_98._4_4_)
            + in_XMM1_Db + (local_48 - local_58) * (local_48 - local_58);
    if (fVar6 < 0.0) goto label_05c23bc0;
  } while ((__this->fields).BlowAwayMaxDistance <= SQRT(fVar6));
  goto label_05c23bd8;
label_05c23bc0:
  fVar6 = sqrtf(fVar6);
  if (fVar6 < (__this->fields).BlowAwayMaxDistance) {
label_05c23bd8:
    pIVar3 = pIVar4->klass;
    in_XMM1_Db = fStack_64;
    in_XMM1_Dc = fStack_60;
    in_XMM1_Dd = fStack_5c;
    (*pIVar3->vtable[99].methodPtr)(local_98._0_4_,local_68,force,pIVar4,pIVar3->vtable[99].method);
  }
  goto label_05c23ae0;
}


// Characters.WallColossalShifter$$GetHitRPC
// il2cpp: void Characters_WallColossalShifter__GetHitRPC (Characters_WallColossalShifter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x5c23ca0

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
  bool bVar7;
  int iVar8;
  System_String_o *pSVar9;
  int iVar10;
  _func_8 *vtableDispatch;
  int iVar11;
  MethodInfo *pMVar12;
  
  if (Il2CppMethodInitialized_0754775c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754775c = '\x01';
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).TitanArmorEnabled, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value != false) {
      pSVar4 = (pSVar2->fields).TitanArmor;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05c23ed1;
      if (damage < (pSVar4->fields)._value) {
        damage = 0;
      }
    }
    pCVar5 = (__this->fields).ColossalCache;
    if ((pCVar5 != (Characters_WallColossalComponentCache_o *)0x0) &&
       (pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).NapeHurtbox, pUVar6 != (UnityEngine_Object_o *)0x0))
    {
      pSVar9 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(collider,pSVar9,(MethodInfo *)0x0);
      if (bVar7) {
        Characters_BaseShifter__GetHitRPC
                  ((Characters_BaseShifter_o *)__this,viewId,name,damage,type,collider,(MethodInfo *)0x0);
      }
      else {
        pCVar5 = (__this->fields).ColossalCache;
        if ((pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) ||
           (pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).HandLHurtbox,
           pUVar6 == (UnityEngine_Object_o *)0x0)) goto label_05c23ed1;
        pSVar9 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
        bVar7 = System_String__op_Equality(collider,pSVar9,(MethodInfo *)0x0);
        if (bVar7) {
          if (((__this->fields).CanDamageLeftHand != false) && ((uint)(__this->fields)._leftHandState < 2)) {
            iVar8 = (__this->fields).CurrentLeftHandHealth - damage;
            iVar10 = (__this->fields).MaxLeftHandHealth;
            if (iVar8 < iVar10) {
              iVar10 = iVar8;
            }
            iVar11 = 0;
            if (-1 < iVar8) {
              iVar11 = iVar10;
            }
            (__this->fields).CurrentLeftHandHealth = iVar11;
            vtableDispatch = (__this->klass->vtable)._207_OnLeftHandHealthChange.methodPtr;
            pMVar12 = (__this->klass->vtable)._207_OnLeftHandHealthChange.method;
label_05c23ebe:
            (*vtableDispatch)(__this,pMVar12);
            return;
          }
        }
        else {
          pCVar5 = (__this->fields).ColossalCache;
          if ((pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) ||
             (pUVar6 = (UnityEngine_Object_o *)(pCVar5->fields).HandRHurtbox,
             pUVar6 == (UnityEngine_Object_o *)0x0)) goto label_05c23ed1;
          pSVar9 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
          bVar7 = System_String__op_Equality(collider,pSVar9,(MethodInfo *)0x0);
          if ((bVar7) &&
             (((__this->fields).CanDamageRightHand != false && ((uint)(__this->fields)._rightHandState < 2))))
          {
            iVar8 = (__this->fields).CurrentRightHandHealth - damage;
            iVar10 = (__this->fields).MaxRightHandHealth;
            if (iVar8 < iVar10) {
              iVar10 = iVar8;
            }
            iVar11 = 0;
            if (-1 < iVar8) {
              iVar11 = iVar10;
            }
            (__this->fields).CurrentRightHandHealth = iVar11;
            vtableDispatch = (__this->klass->vtable)._208_OnRightHandHealthChange.methodPtr;
            pMVar12 = (__this->klass->vtable)._208_OnRightHandHealthChange.method;
            goto label_05c23ebe;
          }
        }
      }
      return;
    }
  }
label_05c23ed1:
  ThrowNullReferenceException();
}


// Characters.WallColossalShifter$$.ctor
// il2cpp: void Characters_WallColossalShifter___ctor (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x5c23ee0

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
  Characters_BaseShifter___ctor((Characters_BaseShifter_o *)__this,(MethodInfo *)0x0);
  return;
}


