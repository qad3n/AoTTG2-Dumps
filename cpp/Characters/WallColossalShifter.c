// Type: Characters.WallColossalShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/WallColossalShifter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalShifter.cs  [CHANGED since prior version]
// --------------------------------

// Characters.WallColossalShifter.<WaitAndDie>d__66$$.ctor
// il2cpp: void Characters_WallColossalShifter__WaitAndDie_d__66___ctor (Characters_WallColossalShifter__WaitAndDie_d__66_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3ffb330

void Characters_WallColossalShifter_<WaitAndDie>d__66___ctor
               (Characters_WallColossalShifter__WaitAndDie_d__66_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.WallColossalShifter.<WaitAndDie>d__66$$System.IDisposable.Dispose
// il2cpp: void Characters_WallColossalShifter__WaitAndDie_d__66__System_IDisposable_Dispose (Characters_WallColossalShifter__WaitAndDie_d__66_o* __this, const MethodInfo* method);
// 0x3ffdd20

void Characters_WallColossalShifter_<WaitAndDie>d__66__System_IDisposable_Dispose
               (Characters_WallColossalShifter__WaitAndDie_d__66_o *__this,MethodInfo *method)

{
  return;
}


// Characters.WallColossalShifter.<WaitAndDie>d__66$$MoveNext
// il2cpp: bool Characters_WallColossalShifter__WaitAndDie_d__66__MoveNext (Characters_WallColossalShifter__WaitAndDie_d__66_o* __this, const MethodInfo* method);
// 0x3ffdd30

bool_conflict
Characters_WallColossalShifter_<WaitAndDie>d__66__MoveNext
          (Characters_WallColossalShifter__WaitAndDie_d__66_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_WallColossalShifter_o *__this_00;
  System_Action_Hashtable__o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  System_String_o *name;
  UnityEngine_WaitForSeconds_o *__this_01;
  UnityEngine_GameObject_o *targetGo;
  bool_conflict bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Quaternion_o rotation;
  float local_68;
  float fStack_64;
  
  if (DAT_057041fa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_057041fa = '\x01';
  }
  iVar5 = (__this->fields).__1__state;
  if (iVar5 != 1) {
    if (iVar5 == 0) {
      (__this->fields).__1__state = -1;
      __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,0.1,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
      bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this_01 >> 8),1);
    }
    else {
      bVar4 = 0;
    }
    return bVar4;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (((__this_00 != (Characters_WallColossalShifter_o *)0x0) &&
      (pSVar2 = (__this_00->fields).OnPlayerPropertiesChanged,
      pSVar2 != (System_Action_Hashtable__o *)0x0)) &&
     (pUVar3 = (UnityEngine_Transform_o *)(pSVar2->fields).method_ptr,
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    pSVar2 = (__this_00->fields).OnPlayerPropertiesChanged;
    if ((pSVar2 != (System_Action_Hashtable__o *)0x0) &&
       (pUVar3 = (UnityEngine_Transform_o *)(pSVar2->fields).extra_arg,
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      iVar5 = 0;
      UVar9 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      fStack_64 = UVar8.fields.y;
      fVar6 = (UVar9.fields.y - fStack_64) / 10.0;
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) != 0) goto LAB_03ffdf2e;
      do {
        il2cpp_init_class();
        name = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
        while( true ) {
          if (DAT_056fde1f == '\0') {
            il2cpp_init_method_metadata();
            DAT_056fde1f = '\x01';
          }
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar7 = (float)iVar5;
          local_68 = UVar8.fields.x;
          UVar9.fields.z =
               *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * fVar6 * fVar7 + UVar8.fields.z;
          rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
          UVar9.fields.y = fVar7 * (float)((ulong)uVar1 >> 0x20) * fVar6 + fStack_64;
          UVar9.fields.x = fVar7 * (float)uVar1 * fVar6 + local_68;
          Effects_EffectSpawner__Spawn
                    (name,UVar9,rotation,
                     *(float *)((long)&(__this_00->fields).TitanColliderToggler + 4) * 10.0,0,
                     (System_Object_array *)0x0,(MethodInfo *)0x0);
          iVar5 = iVar5 + 1;
          if (iVar5 == 10) {
            targetGo = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Photon_Pun_PhotonNetwork__Destroy(targetGo,(MethodInfo *)0x0);
            return 0;
          }
          if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) break;
LAB_03ffdf2e:
          name = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter.<WaitAndDie>d__66$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_WallColossalShifter__WaitAndDie_d__66__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_WallColossalShifter__WaitAndDie_d__66_o* __this, const MethodInfo* method);
// 0x3ffdfd0

Il2CppObject *
Characters_WallColossalShifter_<WaitAndDie>d__66__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_WallColossalShifter__WaitAndDie_d__66_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.WallColossalShifter.<WaitAndDie>d__66$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_WallColossalShifter__WaitAndDie_d__66__System_Collections_IEnumerator_Reset (Characters_WallColossalShifter__WaitAndDie_d__66_o* __this, const MethodInfo* method);
// 0x3ffdfe0

void Characters_WallColossalShifter_<WaitAndDie>d__66__System_Collections_IEnumerator_Reset
               (Characters_WallColossalShifter__WaitAndDie_d__66_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Characters.WallColossalShifter.<WaitAndDie>d__66$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_WallColossalShifter__WaitAndDie_d__66__System_Collections_IEnumerator_get_Current (Characters_WallColossalShifter__WaitAndDie_d__66_o* __this, const MethodInfo* method);
// 0x3ffe020

Il2CppObject *
Characters_WallColossalShifter_<WaitAndDie>d__66__System_Collections_IEnumerator_get_Current
          (Characters_WallColossalShifter__WaitAndDie_d__66_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.WallColossalShifter$$get_SteamState
// il2cpp: int32_t Characters_WallColossalShifter__get_SteamState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ff91b0

int32_t Characters_WallColossalShifter__get_SteamState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return *(int32_t *)((long)&(__this->fields).PreviousHumanWeapon + 4);
}


// Characters.WallColossalShifter$$get_LeftHandState
// il2cpp: int32_t Characters_WallColossalShifter__get_LeftHandState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ff91c0

int32_t Characters_WallColossalShifter__get_LeftHandState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return (int32_t)(__this->fields)._steamTimeLeft;
}


// Characters.WallColossalShifter$$get_RightHandState
// il2cpp: int32_t Characters_WallColossalShifter__get_RightHandState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ff91d0

int32_t Characters_WallColossalShifter__get_RightHandState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return (int32_t)(__this->fields)._steamBlowAwayTimeLeft;
}


// Characters.WallColossalShifter$$get_StunState
// il2cpp: int32_t Characters_WallColossalShifter__get_StunState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ff91e0

int32_t Characters_WallColossalShifter__get_StunState
                  (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return (int32_t)(__this->fields)._steamDamageTimeLeft;
}


// Characters.WallColossalShifter$$get_SizeMultiplier
// il2cpp: float Characters_WallColossalShifter__get_SizeMultiplier (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ff91f0

float Characters_WallColossalShifter__get_SizeMultiplier
                (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  return 22.0;
}


// Characters.WallColossalShifter$$OnPlayerEnteredRoom
// il2cpp: void Characters_WallColossalShifter__OnPlayerEnteredRoom (Characters_WallColossalShifter_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3ff9200

void Characters_WallColossalShifter__OnPlayerEnteredRoom
               (Characters_WallColossalShifter_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  bool_conflict bVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *extraout_RDX;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  int32_t iStack_40;
  int32_t iStack_3c;
  float fStack_38;
  int32_t iStack_34;
  
  if (DAT_057041e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetRightHandStateRPC");
    il2cpp_init_method_metadata(&"SetLeftHandStateRPC");
    il2cpp_init_method_metadata(&"SetStunRecoveryTimesRPC");
    il2cpp_init_method_metadata(&"SetStunStateRPC");
    il2cpp_init_method_metadata(&"SetHandSeverTimesRPC");
    il2cpp_init_method_metadata(&"SetSteamStateRPC");
    DAT_057041e2 = '\x01';
    method = extraout_RDX;
  }
  Characters_BaseTitan__OnPlayerEnteredRoom((Characters_BaseTitan_o *)__this,player,method);
  bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  lVar5 = *(long *)&(__this->fields).Dead;
  if (lVar5 != 0) {
    pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20);
    pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    uStack_41 = *(undefined1 *)&(__this->fields)._steamTimeLeft;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&uStack_41);
    if (pSVar3 != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0))
      goto LAB_03ff977e;
      if ((int)pSVar3->max_length == 0) goto LAB_03ff9779;
      pSVar3->m_Items[0] = pIVar4;
      il2cpp_runtime_glue(pSVar3->m_Items,pIVar4);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar1,"SetLeftHandStateRPC",player,pSVar3,(MethodInfo *)0x0);
        lVar5 = *(long *)&(__this->fields).Dead;
        if (lVar5 != 0) {
          pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20);
          pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          uStack_42 = *(undefined1 *)&(__this->fields)._steamBlowAwayTimeLeft;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&uStack_42);
          if (pSVar3 != (System_Object_array *)0x0) {
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03ff977e;
            if ((int)pSVar3->max_length == 0) goto LAB_03ff9779;
            pSVar3->m_Items[0] = pIVar4;
            il2cpp_runtime_glue(pSVar3->m_Items,pIVar4);
            if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(pPVar1,"SetRightHandStateRPC",player,pSVar3,(MethodInfo *)0x0);
              lVar5 = *(long *)&(__this->fields).Dead;
              if (lVar5 != 0) {
                pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20);
                pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
                uStack_43 = *(undefined1 *)((long)&(__this->fields).PreviousHumanWeapon + 4);
                pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&uStack_43);
                if (pSVar3 != (System_Object_array *)0x0) {
                  if ((pIVar4 != (Il2CppObject *)0x0) &&
                     (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
                     lVar5 == 0)) goto LAB_03ff977e;
                  if ((int)pSVar3->max_length == 0) goto LAB_03ff9779;
                  pSVar3->m_Items[0] = pIVar4;
                  il2cpp_runtime_glue(pSVar3->m_Items,pIVar4);
                  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC(pPVar1,"SetSteamStateRPC",player,pSVar3,(MethodInfo *)0x0);
                    lVar5 = *(long *)&(__this->fields).Dead;
                    if (lVar5 != 0) {
                      pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20);
                      pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
                      uStack_44 = *(undefined1 *)&(__this->fields)._steamDamageTimeLeft;
                      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&uStack_44);
                      if (pSVar3 != (System_Object_array *)0x0) {
                        if ((pIVar4 != (Il2CppObject *)0x0) &&
                           (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).klass)->_1).
                                                              element_class), lVar5 == 0))
                        goto LAB_03ff977e;
                        if ((int)pSVar3->max_length == 0) goto LAB_03ff9779;
                        pSVar3->m_Items[0] = pIVar4;
                        il2cpp_runtime_glue(pSVar3->m_Items,pIVar4);
                        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
                          Photon_Pun_PhotonView__RPC
                                    (pPVar1,"SetStunStateRPC",player,pSVar3,(MethodInfo *)0x0);
                          lVar5 = *(long *)&(__this->fields).Dead;
                          if (lVar5 != 0) {
                            pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20);
                            pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
                            iStack_34 = (__this->fields)._steamState;
                            pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&iStack_34);
                            if (pSVar3 != (System_Object_array *)0x0) {
                              if ((pIVar4 != (Il2CppObject *)0x0) &&
                                 (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).klass)->_1).
                                                                    element_class), lVar5 == 0)) {
LAB_03ff977e:
                                uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                                il2cpp_glue_02274a00(uVar6,0);
                              }
                              if ((int)pSVar3->max_length != 0) {
                                pSVar3->m_Items[0] = pIVar4;
                                il2cpp_runtime_glue(pSVar3->m_Items,pIVar4);
                                fStack_38 = (__this->fields).WarningSteamTime;
                                pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&fStack_38)
                                ;
                                if ((pIVar4 != (Il2CppObject *)0x0) &&
                                   (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).klass)->_1).
                                                                      element_class), lVar5 == 0))
                                goto LAB_03ff977e;
                                if (1 < (uint)pSVar3->max_length) {
                                  pSVar3->m_Items[1] = pIVar4;
                                  il2cpp_runtime_glue(pSVar3->m_Items + 1,pIVar4);
                                  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
                                    Photon_Pun_PhotonView__RPC
                                              (pPVar1,"SetHandSeverTimesRPC",player,pSVar3,(MethodInfo *)0x0);
                                    lVar5 = *(long *)&(__this->fields).Dead;
                                    if (lVar5 != 0) {
                                      pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20);
                                      pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
                                      iStack_3c = (__this->fields).MaxLeftHandHealth;
                                      pIVar4 = (Il2CppObject *)
                                               il2cpp_runtime_glue(DAT_05711098,&iStack_3c);
                                      if (pSVar3 != (System_Object_array *)0x0) {
                                        if ((pIVar4 != (Il2CppObject *)0x0) &&
                                           (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).klass)
                                                                              ->_1).element_class),
                                           lVar5 == 0)) goto LAB_03ff977e;
                                        if ((int)pSVar3->max_length != 0) {
                                          pSVar3->m_Items[0] = pIVar4;
                                          il2cpp_runtime_glue(pSVar3->m_Items,pIVar4);
                                          iStack_40 = (__this->fields).CurrentRightHandHealth;
                                          pIVar4 = (Il2CppObject *)
                                                   il2cpp_runtime_glue(DAT_05711098,&iStack_40);
                                          if ((pIVar4 != (Il2CppObject *)0x0) &&
                                             (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).
                                                                                 klass)->_1).
                                                                                element_class),
                                             lVar5 == 0)) goto LAB_03ff977e;
                                          if (1 < (uint)pSVar3->max_length) {
                                            pSVar3->m_Items[1] = pIVar4;
                                            il2cpp_runtime_glue(pSVar3->m_Items + 1,pIVar4);
                                            if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
                                              Photon_Pun_PhotonView__RPC
                                                        (pPVar1,"SetStunRecoveryTimesRPC",player,pSVar3,
                                                         (MethodInfo *)0x0);
                                              return;
                                            }
                                            goto LAB_03ff9774;
                                          }
                                        }
                                        goto LAB_03ff9779;
                                      }
                                    }
                                  }
                                  goto LAB_03ff9774;
                                }
                              }
LAB_03ff9779:
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
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
LAB_03ff9774:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$CheckNapeAngle
// il2cpp: bool Characters_WallColossalShifter__CheckNapeAngle (Characters_WallColossalShifter_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x3ff98b0

bool_conflict
Characters_WallColossalShifter__CheckNapeAngle
          (Characters_WallColossalShifter_o *__this,UnityEngine_Vector3_o hitPosition,float maxAngle
          ,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Characters.WallColossalShifter$$SteamAttack
// il2cpp: void Characters_WallColossalShifter__SteamAttack (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ff98c0

void Characters_WallColossalShifter__SteamAttack
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  char cVar1;
  
  if (DAT_057041e3 == '\0') {
    il2cpp_init_method_metadata(&"AttackSteam");
    DAT_057041e3 = '\x01';
  }
  cVar1 = (*(__this->klass->vtable)._129_CanAttack.methodPtr)
                    (__this,(__this->klass->vtable)._129_CanAttack.method);
  if ((cVar1 != '\0') && ((__this->fields)._steamDamageTimeLeft == 0.0)) {
    vtable_dispatch = (__this->klass->vtable)._128_Attack.methodPtr;
    (*vtable_dispatch)
              (__this,"AttackSteam",(__this->klass->vtable)._128_Attack.method,vtable_dispatch)
    ;
    return;
  }
  return;
}


// Characters.WallColossalShifter$$SetLeftHandHealth
// il2cpp: void Characters_WallColossalShifter__SetLeftHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x3ff9930

void Characters_WallColossalShifter__SetLeftHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar1;
  
  *(int32_t *)((long)&(__this->fields)._customSkinLoader + 4) = health;
  iVar1 = 0;
  if (-1 < health) {
    iVar1 = health;
  }
  *(int32_t *)((long)&(__this->fields).ColossalCache + 4) = iVar1;
  vtable_dispatch = (__this->klass->vtable)._179_OnLeftHandHealthChange.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._179_OnLeftHandHealthChange.method,method,
             vtable_dispatch);
  return;
}


// Characters.WallColossalShifter$$SetRightHandHealth
// il2cpp: void Characters_WallColossalShifter__SetRightHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x3ff9990

void Characters_WallColossalShifter__SetRightHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar1;
  
  *(int32_t *)&(__this->fields).ColossalCache = health;
  iVar1 = 0;
  if (-1 < health) {
    iVar1 = health;
  }
  *(int32_t *)&(__this->fields).ColossalAnimations = iVar1;
  vtable_dispatch = (__this->klass->vtable)._180_OnRightHandHealthChange.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._180_OnRightHandHealthChange.method,method,
             vtable_dispatch);
  return;
}


// Characters.WallColossalShifter$$SetCurrentLeftHandHealth
// il2cpp: void Characters_WallColossalShifter__SetCurrentLeftHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x3ff9960

void Characters_WallColossalShifter__SetCurrentLeftHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((long)&(__this->fields)._customSkinLoader + 4);
  if (health < iVar1) {
    iVar1 = health;
  }
  iVar2 = 0;
  if (-1 < health) {
    iVar2 = iVar1;
  }
  *(int *)((long)&(__this->fields).ColossalCache + 4) = iVar2;
  vtable_dispatch = (__this->klass->vtable)._179_OnLeftHandHealthChange.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._179_OnLeftHandHealthChange.method,method,
             vtable_dispatch);
  return;
}


// Characters.WallColossalShifter$$SetCurrentRightHandHealth
// il2cpp: void Characters_WallColossalShifter__SetCurrentRightHandHealth (Characters_WallColossalShifter_o* __this, int32_t health, const MethodInfo* method);
// 0x3ff99c0

void Characters_WallColossalShifter__SetCurrentRightHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t health,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&(__this->fields).ColossalCache;
  if (health < iVar1) {
    iVar1 = health;
  }
  iVar2 = 0;
  if (-1 < health) {
    iVar2 = iVar1;
  }
  *(int *)&(__this->fields).ColossalAnimations = iVar2;
  vtable_dispatch = (__this->klass->vtable)._180_OnRightHandHealthChange.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._180_OnRightHandHealthChange.method,method,
             vtable_dispatch);
  return;
}


// Characters.WallColossalShifter$$SetMaxLeftHandHealth
// il2cpp: void Characters_WallColossalShifter__SetMaxLeftHandHealth (Characters_WallColossalShifter_o* __this, int32_t maxHealth, const MethodInfo* method);
// 0x3ff99f0

void Characters_WallColossalShifter__SetMaxLeftHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t maxHealth,MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer vtable_dispatch;
  int iVar2;
  
  *(int32_t *)((long)&(__this->fields)._customSkinLoader + 4) = maxHealth;
  iVar1 = *(int *)((long)&(__this->fields).ColossalCache + 4);
  if (iVar1 <= maxHealth) {
    maxHealth = iVar1;
  }
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = maxHealth;
  }
  *(int *)((long)&(__this->fields).ColossalCache + 4) = iVar2;
  vtable_dispatch = (__this->klass->vtable)._179_OnLeftHandHealthChange.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._179_OnLeftHandHealthChange.method,method,
             vtable_dispatch);
  return;
}


// Characters.WallColossalShifter$$SetMaxRightHandHealth
// il2cpp: void Characters_WallColossalShifter__SetMaxRightHandHealth (Characters_WallColossalShifter_o* __this, int32_t maxHealth, const MethodInfo* method);
// 0x3ff9a30

void Characters_WallColossalShifter__SetMaxRightHandHealth
               (Characters_WallColossalShifter_o *__this,int32_t maxHealth,MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer vtable_dispatch;
  int iVar2;
  
  *(int32_t *)&(__this->fields).ColossalCache = maxHealth;
  iVar1 = *(int *)&(__this->fields).ColossalAnimations;
  if (iVar1 <= maxHealth) {
    maxHealth = iVar1;
  }
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = maxHealth;
  }
  *(int *)&(__this->fields).ColossalAnimations = iVar2;
  vtable_dispatch = (__this->klass->vtable)._180_OnRightHandHealthChange.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._180_OnRightHandHealthChange.method,method,
             vtable_dispatch);
  return;
}


// Characters.WallColossalShifter$$OnLeftHandHealthChange
// il2cpp: void Characters_WallColossalShifter__OnLeftHandHealthChange (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ff9a70

void Characters_WallColossalShifter__OnLeftHandHealthChange
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  float fVar3;
  bool_conflict bVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  undefined8 uVar9;
  MethodInfo *method_00;
  undefined1 uStack_39;
  uint uStack_38;
  float fStack_34;
  
  if (DAT_057041e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetLeftHandStateRPC");
    il2cpp_init_method_metadata(&"SetLeftHandHealthRPC");
    il2cpp_init_method_metadata(&"SetHandSeverTimesRPC");
    DAT_057041e4 = '\x01';
  }
  iVar1 = *(int *)((long)&(__this->fields).ColossalCache + 4);
  if (iVar1 < 1) {
    fVar3 = (__this->fields)._steamTimeLeft;
    if ((fVar3 != 1.4013e-45) && (fVar3 != 0.0)) {
      iVar2 = *(int *)((long)&(__this->fields)._customSkinLoader + 4);
      goto joined_r0x03ff9d4b;
    }
    bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      (__this->fields)._steamState = (int32_t)(__this->fields).SteamDamageInterval;
      pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      uStack_39 = 2;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&uStack_39);
      if (pSVar6 == (System_Object_array *)0x0) goto LAB_03ff9f2c;
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
      goto LAB_03ff9f36;
      if ((int)pSVar6->max_length == 0) goto LAB_03ff9f31;
      pSVar6->m_Items[0] = pIVar7;
      il2cpp_runtime_glue(pSVar6->m_Items,pIVar7);
      if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ff9f2c;
      Photon_Pun_PhotonView__RPC(pPVar5,"SetLeftHandStateRPC",0,pSVar6,(MethodInfo *)0x0);
      pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
      uStack_38 = (__this->fields)._steamState;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&uStack_38);
      if (pSVar6 == (System_Object_array *)0x0) goto LAB_03ff9f2c;
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
      goto LAB_03ff9f36;
      if ((int)pSVar6->max_length == 0) goto LAB_03ff9f31;
      pSVar6->m_Items[0] = pIVar7;
      il2cpp_runtime_glue(pSVar6->m_Items,pIVar7);
      fStack_34 = (__this->fields).WarningSteamTime;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&fStack_34);
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
      goto LAB_03ff9f36;
      if ((uint)pSVar6->max_length < 2) goto LAB_03ff9f31;
      pSVar6->m_Items[1] = pIVar7;
      il2cpp_runtime_glue(pSVar6->m_Items + 1,pIVar7);
      if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ff9f2c;
      method_00 = "SetHandSeverTimesRPC";
      Photon_Pun_PhotonView__RPC(pPVar5,(System_String_o *)"SetHandSeverTimesRPC",0,pSVar6,(MethodInfo *)0x0);
      if (((__this->fields)._steamTimeLeft == 2.8026e-45) &&
         ((__this->fields)._steamBlowAwayTimeLeft == 2.8026e-45)) {
        Characters_WallColossalShifter__EnterStunState(__this,method_00);
      }
    }
  }
  else {
    iVar2 = *(int *)((long)&(__this->fields)._customSkinLoader + 4);
    if ((iVar1 < iVar2) && ((__this->fields)._steamTimeLeft == 0.0)) {
      bVar4 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') goto LAB_03ff9e13;
      pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      uStack_38 = CONCAT31(uStack_38._1_3_,1);
    }
    else {
joined_r0x03ff9d4b:
      if ((iVar1 < iVar2) ||
         (((__this->fields)._steamTimeLeft != 1.4013e-45 ||
          (bVar4 = Characters_BaseCharacter__IsMine
                             ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0),
          (char)bVar4 == '\0')))) goto LAB_03ff9e13;
      pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      uStack_38 = uStack_38 & 0xffffff00;
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&uStack_38);
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_03ff9f2c;
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03ff9f36;
    if ((int)pSVar6->max_length == 0) goto LAB_03ff9f31;
    pSVar6->m_Items[0] = pIVar7;
    il2cpp_runtime_glue(pSVar6->m_Items,pIVar7);
    if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ff9f2c;
    Photon_Pun_PhotonView__RPC(pPVar5,"SetLeftHandStateRPC",0,pSVar6,(MethodInfo *)0x0);
  }
LAB_03ff9e13:
  bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  uStack_38 = *(uint *)((long)&(__this->fields).ColossalCache + 4);
  pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_38);
  if (pSVar6 == (System_Object_array *)0x0) {
LAB_03ff9f2c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0)) {
LAB_03ff9f36:
    uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar9,0);
  }
  if ((int)pSVar6->max_length != 0) {
    pSVar6->m_Items[0] = pIVar7;
    il2cpp_runtime_glue(pSVar6->m_Items,pIVar7);
    fStack_34 = *(float *)((long)&(__this->fields)._customSkinLoader + 4);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&fStack_34);
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03ff9f36;
    if (1 < (uint)pSVar6->max_length) {
      pSVar6->m_Items[1] = pIVar7;
      il2cpp_runtime_glue(pSVar6->m_Items + 1,pIVar7);
      if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar5,"SetLeftHandHealthRPC",0,pSVar6,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03ff9f2c;
    }
  }
LAB_03ff9f31:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$OnRightHandHealthChange
// il2cpp: void Characters_WallColossalShifter__OnRightHandHealthChange (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ff9f70

void Characters_WallColossalShifter__OnRightHandHealthChange
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  float fVar3;
  bool_conflict bVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  undefined8 uVar9;
  MethodInfo *method_00;
  undefined1 uStack_39;
  uint uStack_38;
  float fStack_34;
  
  if (DAT_057041e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetRightHandHealthRPC");
    il2cpp_init_method_metadata(&"SetRightHandStateRPC");
    il2cpp_init_method_metadata(&"SetHandSeverTimesRPC");
    DAT_057041e5 = '\x01';
  }
  iVar1 = *(int *)&(__this->fields).ColossalAnimations;
  if (iVar1 < 1) {
    fVar3 = (__this->fields)._steamBlowAwayTimeLeft;
    if ((fVar3 != 1.4013e-45) && (fVar3 != 0.0)) {
      iVar2 = *(int *)&(__this->fields).ColossalCache;
      goto joined_r0x03ffa24b;
    }
    bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      (__this->fields).WarningSteamTime = (__this->fields).SteamDamageInterval;
      pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      uStack_39 = 2;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&uStack_39);
      if (pSVar6 == (System_Object_array *)0x0) goto LAB_03ffa42c;
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
      goto LAB_03ffa436;
      if ((int)pSVar6->max_length == 0) goto LAB_03ffa431;
      pSVar6->m_Items[0] = pIVar7;
      il2cpp_runtime_glue(pSVar6->m_Items,pIVar7);
      if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ffa42c;
      Photon_Pun_PhotonView__RPC(pPVar5,"SetRightHandStateRPC",0,pSVar6,(MethodInfo *)0x0);
      pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
      uStack_38 = (__this->fields)._steamState;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&uStack_38);
      if (pSVar6 == (System_Object_array *)0x0) goto LAB_03ffa42c;
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
      goto LAB_03ffa436;
      if ((int)pSVar6->max_length == 0) goto LAB_03ffa431;
      pSVar6->m_Items[0] = pIVar7;
      il2cpp_runtime_glue(pSVar6->m_Items,pIVar7);
      fStack_34 = (__this->fields).WarningSteamTime;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&fStack_34);
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
      goto LAB_03ffa436;
      if ((uint)pSVar6->max_length < 2) goto LAB_03ffa431;
      pSVar6->m_Items[1] = pIVar7;
      il2cpp_runtime_glue(pSVar6->m_Items + 1,pIVar7);
      if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ffa42c;
      method_00 = "SetHandSeverTimesRPC";
      Photon_Pun_PhotonView__RPC(pPVar5,(System_String_o *)"SetHandSeverTimesRPC",0,pSVar6,(MethodInfo *)0x0);
      if (((__this->fields)._steamTimeLeft == 2.8026e-45) &&
         ((__this->fields)._steamBlowAwayTimeLeft == 2.8026e-45)) {
        Characters_WallColossalShifter__EnterStunState(__this,method_00);
      }
    }
  }
  else {
    iVar2 = *(int *)&(__this->fields).ColossalCache;
    if ((iVar1 < iVar2) && ((__this->fields)._steamBlowAwayTimeLeft == 0.0)) {
      bVar4 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') goto LAB_03ffa313;
      pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      uStack_38 = CONCAT31(uStack_38._1_3_,1);
    }
    else {
joined_r0x03ffa24b:
      if ((iVar1 < iVar2) ||
         (((__this->fields)._steamBlowAwayTimeLeft != 1.4013e-45 ||
          (bVar4 = Characters_BaseCharacter__IsMine
                             ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0),
          (char)bVar4 == '\0')))) goto LAB_03ffa313;
      pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      uStack_38 = uStack_38 & 0xffffff00;
    }
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&uStack_38);
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_03ffa42c;
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03ffa436;
    if ((int)pSVar6->max_length == 0) goto LAB_03ffa431;
    pSVar6->m_Items[0] = pIVar7;
    il2cpp_runtime_glue(pSVar6->m_Items,pIVar7);
    if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ffa42c;
    Photon_Pun_PhotonView__RPC(pPVar5,"SetRightHandStateRPC",0,pSVar6,(MethodInfo *)0x0);
  }
LAB_03ffa313:
  bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  uStack_38 = *(uint *)&(__this->fields).ColossalAnimations;
  pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_38);
  if (pSVar6 == (System_Object_array *)0x0) {
LAB_03ffa42c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0)) {
LAB_03ffa436:
    uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar9,0);
  }
  if ((int)pSVar6->max_length != 0) {
    pSVar6->m_Items[0] = pIVar7;
    il2cpp_runtime_glue(pSVar6->m_Items,pIVar7);
    fStack_34 = *(float *)&(__this->fields).ColossalCache;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&fStack_34);
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_03ffa436;
    if (1 < (uint)pSVar6->max_length) {
      pSVar6->m_Items[1] = pIVar7;
      il2cpp_runtime_glue(pSVar6->m_Items + 1,pIVar7);
      if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar5,"SetRightHandHealthRPC",0,pSVar6,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03ffa42c;
    }
  }
LAB_03ffa431:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$CheckStunCondition
// il2cpp: void Characters_WallColossalShifter__CheckStunCondition (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ff9f50

void Characters_WallColossalShifter__CheckStunCondition
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  if (((__this->fields)._steamTimeLeft == 2.8026e-45) &&
     ((__this->fields)._steamBlowAwayTimeLeft == 2.8026e-45)) {
    Characters_WallColossalShifter__EnterStunState(__this,method);
    return;
  }
  return;
}


// Characters.WallColossalShifter$$EnterStunState
// il2cpp: void Characters_WallColossalShifter__EnterStunState (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffa450

void Characters_WallColossalShifter__EnterStunState
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  bool_conflict bVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 local_39;
  undefined4 local_38;
  int32_t local_34;
  
  if (DAT_057041e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetStunRecoveryTimesRPC");
    il2cpp_init_method_metadata(&"SetStunStateRPC");
    DAT_057041e6 = '\x01';
  }
  if ((__this->fields)._steamDamageTimeLeft != 0.0) {
    return;
  }
  Characters_WallColossalShifter__StopSteam(__this,method);
  lVar5 = *(long *)&(__this->fields).EnableAI;
  if ((lVar5 != 0) &&
     (__this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS,
     __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    fVar7 = Characters_AnimationHandler__GetTotalTime
                      (__this_00,*(System_String_o **)(lVar5 + 0x48),(MethodInfo *)0x0);
    fVar8 = (float)(__this->fields).SteamDamagePerSecond;
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    (__this->fields).MaxLeftHandHealth = (int32_t)fVar8;
    (__this->fields).MaxRightHandHealth = (int32_t)(fVar7 * 0.85);
    bVar1 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 == '\0') {
      return;
    }
    pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    local_39 = 1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_39);
    if (pSVar3 != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).klass)->_1).element_class), lVar5 == 0))
      goto LAB_03ffa6b2;
      if ((int)pSVar3->max_length == 0) goto LAB_03ffa6ad;
      pSVar3->m_Items[0] = pIVar4;
      il2cpp_runtime_glue(pSVar3->m_Items,pIVar4);
      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar2,"SetStunStateRPC",0,pSVar3,(MethodInfo *)0x0);
        pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                           ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
        pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
        local_34 = (__this->fields).MaxLeftHandHealth;
        pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_34);
        if (pSVar3 != (System_Object_array *)0x0) {
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
             lVar5 == 0)) {
LAB_03ffa6b2:
            uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar6,0);
          }
          if ((int)pSVar3->max_length != 0) {
            pSVar3->m_Items[0] = pIVar4;
            il2cpp_runtime_glue(pSVar3->m_Items,pIVar4);
            local_38 = 0;
            pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_38);
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (lVar5 = il2cpp_runtime_glue(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03ffa6b2;
            if (1 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[1] = pIVar4;
              il2cpp_runtime_glue(pSVar3->m_Items + 1,pIVar4);
              if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(pPVar2,"SetStunRecoveryTimesRPC",0,pSVar3,(MethodInfo *)0x0);
                return;
              }
              goto LAB_03ffa6a8;
            }
          }
LAB_03ffa6ad:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
LAB_03ffa6a8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$SetLeftHandHealthRPC
// il2cpp: void Characters_WallColossalShifter__SetLeftHandHealthRPC (Characters_WallColossalShifter_o* __this, int32_t currentHealth, int32_t maxHealth, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3ffa7e0

void Characters_WallColossalShifter__SetLeftHandHealthRPC
               (Characters_WallColossalShifter_o *__this,int32_t currentHealth,int32_t maxHealth,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
      *(int32_t *)((long)&(__this->fields).ColossalCache + 4) = currentHealth;
      *(int32_t *)((long)&(__this->fields)._customSkinLoader + 4) = maxHealth;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$SetRightHandHealthRPC
// il2cpp: void Characters_WallColossalShifter__SetRightHandHealthRPC (Characters_WallColossalShifter_o* __this, int32_t currentHealth, int32_t maxHealth, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3ffa830

void Characters_WallColossalShifter__SetRightHandHealthRPC
               (Characters_WallColossalShifter_o *__this,int32_t currentHealth,int32_t maxHealth,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
      *(int32_t *)&(__this->fields).ColossalAnimations = currentHealth;
      *(int32_t *)&(__this->fields).ColossalCache = maxHealth;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$SetLeftHandStateRPC
// il2cpp: void Characters_WallColossalShifter__SetLeftHandStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3ffa880

void Characters_WallColossalShifter__SetLeftHandStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  System_String_o *name;
  System_Collections_Generic_Dictionary_string__string__o *pSVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  bool_conflict bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  
  pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (info.fields.Sender != (pPVar4->fields)._Owner_k__BackingField) {
    return;
  }
  if (DAT_057041ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_057041ee = '\x01';
  }
  (__this->fields)._steamTimeLeft = (float)(uint)state;
  switch(state) {
  case '\0':
  case '\x01':
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pUVar2 = (UnityEngine_ParticleSystem_o *)pSVar1[3].fields._comparer,
       pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) goto LAB_03ffaa43;
    bVar3 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      UnityEngine_ParticleSystem__Stop(pUVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case '\x02':
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (__this_00 = pSVar1[1].fields._keys,
       __this_00 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffaa43;
    name = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffaa43;
    position = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    Effects_EffectSpawner__Spawn
              (name,position,rotation,
               *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 100.0,1,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
  case '\x03':
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pUVar2 = (UnityEngine_ParticleSystem_o *)pSVar1[3].fields._comparer,
       pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) {
LAB_03ffaa43:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      UnityEngine_ParticleSystem__Play(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.WallColossalShifter$$SetRightHandStateRPC
// il2cpp: void Characters_WallColossalShifter__SetRightHandStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3ffaa50

void Characters_WallColossalShifter__SetRightHandStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_String_o *name;
  System_Collections_Generic_Dictionary_string__string__o *pSVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar2;
  bool_conflict bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  
  pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (info.fields.Sender != (pPVar4->fields)._Owner_k__BackingField) {
    return;
  }
  if (DAT_057041ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_057041ef = '\x01';
  }
  (__this->fields)._steamBlowAwayTimeLeft = (float)(uint)state;
  switch(state) {
  case '\0':
  case '\x01':
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar2 = pSVar1[3].fields._keys,
       pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffac13;
    bVar3 = UnityEngine_ParticleSystem__get_isPlaying
                      ((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      UnityEngine_ParticleSystem__Stop((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case '\x02':
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (__this_00 = pSVar1[1].fields._values,
       __this_00 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffac13;
    name = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffac13;
    position = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    Effects_EffectSpawner__Spawn
              (name,position,rotation,
               *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 100.0,1,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
  case '\x03':
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar2 = pSVar1[3].fields._keys,
       pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
LAB_03ffac13:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = UnityEngine_ParticleSystem__get_isPlaying
                      ((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.WallColossalShifter$$SetSteamStateRPC
// il2cpp: void Characters_WallColossalShifter__SetSteamStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3ffac20

void Characters_WallColossalShifter__SetSteamStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  MethodInfo *method_00;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
    return;
  }
  Characters_WallColossalShifter__ApplySteamState(__this,(uint)state,method_00);
  return;
}


// Characters.WallColossalShifter$$SetStunStateRPC
// il2cpp: void Characters_WallColossalShifter__SetStunStateRPC (Characters_WallColossalShifter_o* __this, uint8_t state, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3ffac60

void Characters_WallColossalShifter__SetStunStateRPC
               (Characters_WallColossalShifter_o *__this,uint8_t state,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  MethodInfo *method_00;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
    return;
  }
  Characters_WallColossalShifter__ApplyStunState(__this,(uint)state,method_00);
  return;
}


// Characters.WallColossalShifter$$SetHandSeverTimesRPC
// il2cpp: void Characters_WallColossalShifter__SetHandSeverTimesRPC (Characters_WallColossalShifter_o* __this, float leftTime, float rightTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3ffaca0

void Characters_WallColossalShifter__SetHandSeverTimesRPC
               (Characters_WallColossalShifter_o *__this,float leftTime,float rightTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
    return;
  }
  (__this->fields)._steamState = (int32_t)leftTime;
  (__this->fields).WarningSteamTime = rightTime;
  return;
}


// Characters.WallColossalShifter$$SetStunRecoveryTimesRPC
// il2cpp: void Characters_WallColossalShifter__SetStunRecoveryTimesRPC (Characters_WallColossalShifter_o* __this, float stunTime, float recoveryTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3ffad00

void Characters_WallColossalShifter__SetStunRecoveryTimesRPC
               (Characters_WallColossalShifter_o *__this,float stunTime,float recoveryTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
    return;
  }
  (__this->fields).MaxLeftHandHealth = (int32_t)stunTime;
  (__this->fields).CurrentRightHandHealth = (int32_t)recoveryTime;
  return;
}


// Characters.WallColossalShifter$$Init
// il2cpp: void Characters_WallColossalShifter__Init (Characters_WallColossalShifter_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, float liveTime, const MethodInfo* method);
// 0x3ffad60

void Characters_WallColossalShifter__Init
               (Characters_WallColossalShifter_o *__this,bool_conflict ai,System_String_o *team,
               SimpleJSONFixed_JSONNode_o *data,float liveTime,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  float fVar5;
  int32_t iVar6;
  
  if (DAT_057041e7 == '\0') {
    il2cpp_init_method_metadata(&"WarningSteamTime");
    il2cpp_init_method_metadata(&"LeftHandHealth");
    il2cpp_init_method_metadata(&"StunDuration");
    il2cpp_init_method_metadata(&"RightHandHealth");
    il2cpp_init_method_metadata(&"RecoveryDuration");
    il2cpp_init_method_metadata(&"HandHealth");
    il2cpp_init_method_metadata(&"HandSeverWindow");
    DAT_057041e7 = '\x01';
  }
  if ((char)ai != '\0') {
    if (data == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_03ffb135:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"HandHealth",(data->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      plVar3 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"HandHealth",(data->klass->vtable)._7_get_Item.method);
      if (plVar3 == (long *)0x0) goto LAB_03ffb135;
      iVar2 = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      *(int *)((long)&(__this->fields)._customSkinLoader + 4) = iVar2;
      *(int *)((long)&(__this->fields).ColossalCache + 4) = iVar4;
      (*(__this->klass->vtable)._179_OnLeftHandHealthChange.methodPtr)
                (__this,(__this->klass->vtable)._179_OnLeftHandHealthChange.method);
      *(int *)&(__this->fields).ColossalCache = iVar2;
      *(int *)&(__this->fields).ColossalAnimations = iVar4;
      (*(__this->klass->vtable)._180_OnRightHandHealthChange.methodPtr)
                (__this,(__this->klass->vtable)._180_OnRightHandHealthChange.method);
    }
    cVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"LeftHandHealth",(data->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      plVar3 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"LeftHandHealth",(data->klass->vtable)._7_get_Item.method);
      if (plVar3 == (long *)0x0) goto LAB_03ffb135;
      iVar2 = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      *(int *)((long)&(__this->fields)._customSkinLoader + 4) = iVar2;
      *(int *)((long)&(__this->fields).ColossalCache + 4) = iVar4;
      (*(__this->klass->vtable)._179_OnLeftHandHealthChange.methodPtr)
                (__this,(__this->klass->vtable)._179_OnLeftHandHealthChange.method);
    }
    cVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RightHandHealth",(data->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      plVar3 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"RightHandHealth",(data->klass->vtable)._7_get_Item.method);
      if (plVar3 == (long *)0x0) goto LAB_03ffb135;
      iVar2 = (**(code **)(*plVar3 + 0x368))(plVar3,*(undefined8 *)(*plVar3 + 0x370));
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      *(int *)&(__this->fields).ColossalCache = iVar2;
      *(int *)&(__this->fields).ColossalAnimations = iVar4;
      (*(__this->klass->vtable)._180_OnRightHandHealthChange.methodPtr)
                (__this,(__this->klass->vtable)._180_OnRightHandHealthChange.method);
    }
    cVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"HandSeverWindow",(data->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      plVar3 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"HandSeverWindow",(data->klass->vtable)._7_get_Item.method);
      if (plVar3 == (long *)0x0) goto LAB_03ffb135;
      fVar5 = (float)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
      (__this->fields).SteamDamageInterval = fVar5;
    }
    cVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"StunDuration",(data->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      plVar3 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"StunDuration",(data->klass->vtable)._7_get_Item.method);
      if (plVar3 == (long *)0x0) goto LAB_03ffb135;
      iVar6 = (**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
      (__this->fields).SteamDamagePerSecond = iVar6;
    }
    cVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RecoveryDuration",(data->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      plVar3 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"RecoveryDuration",(data->klass->vtable)._7_get_Item.method);
      if (plVar3 == (long *)0x0) goto LAB_03ffb135;
      iVar6 = (**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
      (__this->fields).CurrentLeftHandHealth = iVar6;
    }
    cVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"WarningSteamTime",(data->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      plVar3 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"WarningSteamTime",(data->klass->vtable)._7_get_Item.method);
      if (plVar3 == (long *)0x0) goto LAB_03ffb135;
      fVar5 = (float)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
      (__this->fields).DeathAnimationLength = fVar5;
    }
  }
  Characters_BaseShifter__Init
            ((Characters_BaseShifter_o *)__this,ai & 0xff,team,data,liveTime,method);
  return;
}


// Characters.WallColossalShifter$$CreateCache
// il2cpp: void Characters_WallColossalShifter__CreateCache (Characters_WallColossalShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x3ffb140

void Characters_WallColossalShifter__CreateCache
               (Characters_WallColossalShifter_o *__this,Utility_BaseComponentCache_o *cache,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_WallColossalComponentCache_o *__this_00;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  
  if (DAT_057041e8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WallColossalComponentCache);
    DAT_057041e8 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  auVar1 = il2cpp_runtime_glue(TypeInfo_WallColossalComponentCache);
  __this_00 = auVar1._0_8_;
  Characters_WallColossalComponentCache___ctor(__this_00,owner,auVar1._8_8_);
  (__this->fields).AttackAnimations =
       (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).AttackAnimations,__this_00);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,
             (Utility_BaseComponentCache_o *)(__this->fields).AttackAnimations,method_00);
  return;
}


// Characters.WallColossalShifter$$CreateAnimations
// il2cpp: void Characters_WallColossalShifter__CreateAnimations (Characters_WallColossalShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x3ffb1c0

void Characters_WallColossalShifter__CreateAnimations
               (Characters_WallColossalShifter_o *__this,
               Characters_BaseTitanAnimations_o *animations,MethodInfo *method)

{
  Characters_WallColossalAnimations_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_057041e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WallColossalAnimations);
    DAT_057041e9 = '\x01';
  }
  __this_00 = (Characters_WallColossalAnimations_o *)il2cpp_runtime_glue(TypeInfo_WallColossalAnimations);
  Characters_WallColossalAnimations___ctor(__this_00,(MethodInfo *)animations);
  *(Characters_WallColossalAnimations_o **)&(__this->fields).EnableAI = __this_00;
  il2cpp_runtime_glue(&(__this->fields).EnableAI,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             *(Characters_BaseTitanAnimations_o **)&(__this->fields).EnableAI,method_00);
  return;
}


// Characters.WallColossalShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_WallColossalShifter__CreateCustomSkinLoader (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffb230

CustomSkins_BaseCustomSkinLoader_o *
Characters_WallColossalShifter__CreateCustomSkinLoader
          (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (DAT_057041ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ColossalCustomSkinLoader_AddComponent_ColossalCu);
    DAT_057041ea = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_ColossalCustomSkinLoader_AddComponent_ColossalCu);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_WallColossalShifter__GetSkinURL (Characters_WallColossalShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x3ffb280

System_String_o *
Characters_WallColossalShifter__GetSkinURL
          (Characters_WallColossalShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,
          MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (DAT_057041eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057041eb = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Colossal, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_WallColossalShifter__WaitAndDie (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffb2c0

System_Collections_IEnumerator_o *
Characters_WallColossalShifter__WaitAndDie
          (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057041ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndDie_d__66);
    DAT_057041ec = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndDie_d__66);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$ApplySteamState
// il2cpp: void Characters_WallColossalShifter__ApplySteamState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x3ff8aa0

void Characters_WallColossalShifter__ApplySteamState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  int iVar1;
  System_Int32_array *pSVar2;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar3;
  Characters_BaseHitbox_o *pCVar4;
  Characters_WallColossalSteamWarningZone_o *__this_00;
  UnityEngine_Component_o *__this_01;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_string__string__o *pSVar6;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar8;
  UnityEngine_Object_o *pUVar9;
  
  if (DAT_057041ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    DAT_057041ed = '\x01';
  }
  *(int32_t *)((long)&(__this->fields).PreviousHumanWeapon + 4) = newState;
  if (newState == 2) {
    pSVar6 = (__this->fields).AttackAnimations;
    if ((pSVar6 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar2 = pSVar6[3].fields._buckets, pSVar2 == (System_Int32_array *)0x0)) goto LAB_03ff9126;
    bVar5 = UnityEngine_ParticleSystem__get_isPlaying
                      ((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      UnityEngine_ParticleSystem__Stop((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
    }
    pSVar6 = (__this->fields).AttackAnimations;
    if ((pSVar6 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar3 = pSVar6[3].fields._entries,
       pSVar3 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
    goto LAB_03ff9126;
    bVar5 = UnityEngine_ParticleSystem__get_isPlaying
                      ((UnityEngine_ParticleSystem_o *)pSVar3,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)pSVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar9 = (UnityEngine_Object_o *)0x0;
    Characters_BaseCharacter__FadeSound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),0.0,1.0,
               (MethodInfo *)0x0);
    Characters_BaseCharacter__FadeSound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28),1.0,0.0,
               (MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28),(MethodInfo *)0x0);
    pSVar6 = (__this->fields).AttackAnimations;
    if (pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      pUVar9 = pSVar6[2].monitor;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pSVar6 = (__this->fields).AttackAnimations;
      if ((pSVar6 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
         (pCVar4 = pSVar6[2].monitor, pCVar4 == (Characters_BaseHitbox_o *)0x0)) goto LAB_03ff9126;
      Characters_BaseHitbox__Activate(pCVar4,0.0,0.0,(MethodInfo *)0x0);
    }
    pSVar6 = (__this->fields).AttackAnimations;
    if (pSVar6 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ff8dfb;
LAB_03ff8f77:
    pSVar8 = pSVar6[3].fields._values;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (newState != 1) {
      if (newState != 0) {
        return;
      }
      pSVar6 = (__this->fields).AttackAnimations;
      if ((pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) &&
         (pSVar2 = pSVar6[3].fields._buckets, pSVar2 != (System_Int32_array *)0x0)) {
        bVar5 = UnityEngine_ParticleSystem__get_isPlaying
                          ((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          UnityEngine_ParticleSystem__Stop((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0)
          ;
        }
        pSVar6 = (__this->fields).AttackAnimations;
        if ((pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) &&
           (pSVar3 = pSVar6[3].fields._entries,
           pSVar3 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
          bVar5 = UnityEngine_ParticleSystem__get_isPlaying
                            ((UnityEngine_ParticleSystem_o *)pSVar3,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            UnityEngine_ParticleSystem__Stop
                      ((UnityEngine_ParticleSystem_o *)pSVar3,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar9 = (UnityEngine_Object_o *)0x0;
          Characters_BaseCharacter__FadeSound
                    ((Characters_BaseCharacter_o *)__this,
                     *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),0.0,1.0,
                     (MethodInfo *)0x0);
          Characters_BaseCharacter__FadeSound
                    ((Characters_BaseCharacter_o *)__this,
                     *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28),0.0,1.0,
                     (MethodInfo *)0x0);
          pSVar6 = (__this->fields).AttackAnimations;
          if (pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
            pUVar9 = pSVar6[2].monitor;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pSVar6 = (__this->fields).AttackAnimations;
            if ((pSVar6 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
               (pCVar4 = pSVar6[2].monitor, pCVar4 == (Characters_BaseHitbox_o *)0x0))
            goto LAB_03ff9126;
            Characters_BaseHitbox__Deactivate(pCVar4,(MethodInfo *)0x0);
          }
          pSVar6 = (__this->fields).AttackAnimations;
          if (pSVar6 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
            pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0;
            iVar1 = *(int *)(TypeInfo_Object + 0xe4);
          }
          else {
            pSVar8 = pSVar6[3].fields._values;
            iVar1 = *(int *)(TypeInfo_Object + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            return;
          }
          pSVar6 = (__this->fields).AttackAnimations;
          if ((pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) &&
             (pSVar8 = pSVar6[3].fields._values,
             pSVar8 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
             ) {
            UnityEngine_GameObject__SetActive
                      ((UnityEngine_GameObject_o *)pSVar8,0,(MethodInfo *)0x0);
            pSVar6 = (__this->fields).AttackAnimations;
            if (pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
              __this_00 = (Characters_WallColossalSteamWarningZone_o *)pSVar6[3].fields._syncRoot;
              if (__this_00 == (Characters_WallColossalSteamWarningZone_o *)0x0) {
                return;
              }
              Characters_WallColossalSteamWarningZone__SetActive(__this_00,0,method_00);
              return;
            }
          }
        }
      }
      goto LAB_03ff9126;
    }
    pSVar6 = (__this->fields).AttackAnimations;
    if ((pSVar6 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar2 = pSVar6[3].fields._buckets, pSVar2 == (System_Int32_array *)0x0)) goto LAB_03ff9126;
    bVar5 = UnityEngine_ParticleSystem__get_isPlaying
                      ((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
    }
    pSVar6 = (__this->fields).AttackAnimations;
    if ((pSVar6 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar3 = pSVar6[3].fields._entries,
       pSVar3 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
    goto LAB_03ff9126;
    bVar5 = UnityEngine_ParticleSystem__get_isPlaying
                      ((UnityEngine_ParticleSystem_o *)pSVar3,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      UnityEngine_ParticleSystem__Stop((UnityEngine_ParticleSystem_o *)pSVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar9 = (UnityEngine_Object_o *)0x0;
    Characters_BaseCharacter__FadeSound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),0.6,0.0,
               (MethodInfo *)0x0);
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),(MethodInfo *)0x0);
    pSVar6 = (__this->fields).AttackAnimations;
    if (pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      pUVar9 = pSVar6[2].monitor;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pSVar6 = (__this->fields).AttackAnimations;
      if ((pSVar6 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
         (pCVar4 = pSVar6[2].monitor, pCVar4 == (Characters_BaseHitbox_o *)0x0)) goto LAB_03ff9126;
      Characters_BaseHitbox__Deactivate(pCVar4,(MethodInfo *)0x0);
    }
    pSVar6 = (__this->fields).AttackAnimations;
    if (pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ff8f77;
LAB_03ff8dfb:
    pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pSVar6 = (__this->fields).AttackAnimations;
  if ((pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) &&
     (pSVar8 = pSVar6[3].fields._values,
     pSVar8 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pSVar8,1,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).AttackAnimations;
    if (pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      pUVar9 = (UnityEngine_Object_o *)pSVar6[3].fields._syncRoot;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return;
      }
      pSVar6 = (__this->fields).AttackAnimations;
      if ((pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) &&
         (__this_01 = (UnityEngine_Component_o *)pSVar6[3].fields._syncRoot,
         __this_01 != (UnityEngine_Component_o *)0x0)) {
        if (DAT_057041fb == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
          DAT_057041fb = '\x01';
        }
        __this_01[2].klass = (UnityEngine_Component_c *)__this;
        il2cpp_runtime_glue(__this_01 + 2,__this);
        pIVar7 = UnityEngine_Component__GetComponent<object>(__this_01,MethodInfo_BoxCollider_GetComponent_BoxCollider);
        __this_01[3].fields.m_CachedPtr = (intptr_t)pIVar7;
        il2cpp_runtime_glue(&__this_01[3].fields,pIVar7);
        pSVar6 = (__this->fields).AttackAnimations;
        if ((pSVar6 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) &&
           (pIVar7 = pSVar6[3].fields._syncRoot, pIVar7 != (Il2CppObject *)0x0)) {
          if (DAT_057041fc == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
            il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
            il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
            il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
            il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
            il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
            il2cpp_init_method_metadata(&TypeInfo_Object);
            DAT_057041fc = '\x01';
          }
          *(undefined1 *)&pIVar7[3].monitor = 1;
          return;
        }
      }
    }
  }
LAB_03ff9126:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$ApplyLeftHandState
// il2cpp: void Characters_WallColossalShifter__ApplyLeftHandState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x3ffa8c0

void Characters_WallColossalShifter__ApplyLeftHandState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  System_String_o *name;
  System_Collections_Generic_Dictionary_string__string__o *pSVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_057041ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_057041ee = '\x01';
  }
  (__this->fields)._steamTimeLeft = (float)newState;
  switch(newState) {
  case 0:
  case 1:
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pUVar2 = (UnityEngine_ParticleSystem_o *)pSVar1[3].fields._comparer,
       pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) goto LAB_03ffaa43;
    bVar3 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      UnityEngine_ParticleSystem__Stop(pUVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case 2:
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (__this_00 = pSVar1[1].fields._keys,
       __this_00 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffaa43;
    name = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffaa43;
    position = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    Effects_EffectSpawner__Spawn
              (name,position,rotation,
               *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 100.0,1,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
  case 3:
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pUVar2 = (UnityEngine_ParticleSystem_o *)pSVar1[3].fields._comparer,
       pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) {
LAB_03ffaa43:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      UnityEngine_ParticleSystem__Play(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.WallColossalShifter$$ApplyRightHandState
// il2cpp: void Characters_WallColossalShifter__ApplyRightHandState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x3ffaa90

void Characters_WallColossalShifter__ApplyRightHandState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  System_String_o *name;
  System_Collections_Generic_Dictionary_string__string__o *pSVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_057041ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_057041ef = '\x01';
  }
  (__this->fields)._steamBlowAwayTimeLeft = (float)newState;
  switch(newState) {
  case 0:
  case 1:
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar2 = pSVar1[3].fields._keys,
       pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffac13;
    bVar3 = UnityEngine_ParticleSystem__get_isPlaying
                      ((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      UnityEngine_ParticleSystem__Stop((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
      return;
    }
    break;
  case 2:
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (__this_00 = pSVar1[1].fields._values,
       __this_00 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffac13;
    name = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffac13;
    position = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    Effects_EffectSpawner__Spawn
              (name,position,rotation,
               *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 100.0,1,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
  case 3:
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar2 = pSVar1[3].fields._keys,
       pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
LAB_03ffac13:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = UnityEngine_ParticleSystem__get_isPlaying
                      ((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.WallColossalShifter$$ApplyStunState
// il2cpp: void Characters_WallColossalShifter__ApplyStunState (Characters_WallColossalShifter_o* __this, int32_t newState, const MethodInfo* method);
// 0x3ff9130

void Characters_WallColossalShifter__ApplyStunState
               (Characters_WallColossalShifter_o *__this,int32_t newState,MethodInfo *method)

{
  float fVar1;
  long lVar2;
  
  fVar1 = (__this->fields)._steamDamageTimeLeft;
  (__this->fields)._steamDamageTimeLeft = (float)newState;
  if (newState == 1) {
    lVar2 = *(long *)&(__this->fields).EnableAI;
    if (lVar2 == 0) goto LAB_03ff9193;
    Characters_BaseCharacter__PlayAnimation
              ((Characters_BaseCharacter_o *)__this,*(System_String_o **)(lVar2 + 0x48),0.0,
               (MethodInfo *)0x0);
  }
  else if ((newState != 0) || (1 < (int)fVar1 - 1U)) {
    return;
  }
  lVar2 = *(long *)&(__this->fields).EnableAI;
  if (lVar2 != 0) {
    Characters_BaseCharacter__SetAnimationSpeed
              ((Characters_BaseCharacter_o *)__this,*(System_String_o **)(lVar2 + 0x48),1.0,
               (MethodInfo *)0x0);
    return;
  }
LAB_03ff9193:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$LateUpdate
// il2cpp: void Characters_WallColossalShifter__LateUpdate (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffb640

void Characters_WallColossalShifter__LateUpdate
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *pSVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  UnityEngine_Transform_o *pUVar6;
  float fVar7;
  UnityEngine_Quaternion_Fields UVar8;
  
  pSVar1 = (__this->fields).AttackAnimations;
  if (((uint)(__this->fields)._steamTimeLeft & 0xfffffffe) == 2) {
    if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ffb933;
    pUVar6 = *(UnityEngine_Transform_o **)&pSVar1[3].fields._count;
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffb933;
    UnityEngine_Transform__set_localScale
              (pUVar6,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
               (MethodInfo *)0x0);
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar2 = pSVar1[1].fields._keys,
       pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffb933;
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pSVar2,(MethodInfo *)0x0);
    fVar7 = UnityEngine_Random__Range(-10.0,10.0,(MethodInfo *)0x0);
    auVar4._4_8_ = 0;
    auVar4._0_4_ = fVar7 * 0.017453292;
    UVar8 = (UnityEngine_Quaternion_Fields)
            UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o)(auVar4 << 0x40),(MethodInfo *)0x0);
  }
  else {
    if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ffb933;
    pUVar6 = *(UnityEngine_Transform_o **)&pSVar1[3].fields._count;
    if (DAT_056fe077 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
    }
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffb933;
    UnityEngine_Transform__set_localScale
              (pUVar6,(UnityEngine_Vector3_o)
                      *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
               (MethodInfo *)0x0);
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar2 = pSVar1[1].fields._keys,
       pSVar2 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffb933;
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pSVar2,(MethodInfo *)0x0);
    UVar8 = (UnityEngine_Quaternion_Fields)
            UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)0x0);
  }
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffb933;
  UnityEngine_Transform__set_localRotation(pUVar6,(UnityEngine_Quaternion_o)UVar8,(MethodInfo *)0x0)
  ;
  pSVar1 = (__this->fields).AttackAnimations;
  if (((uint)(__this->fields)._steamBlowAwayTimeLeft & 0xfffffffe) == 2) {
    if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ffb933;
    pUVar6 = *(UnityEngine_Transform_o **)&pSVar1[3].fields._freeCount;
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffb933;
    UnityEngine_Transform__set_localScale
              (pUVar6,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
               (MethodInfo *)0x0);
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar3 = pSVar1[1].fields._values,
       pSVar3 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffb933;
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
    fVar7 = UnityEngine_Random__Range(-10.0,10.0,(MethodInfo *)0x0);
    auVar5._4_8_ = 0;
    auVar5._0_4_ = fVar7 * 0.017453292;
    UVar8 = (UnityEngine_Quaternion_Fields)
            UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o)(auVar5 << 0x40),(MethodInfo *)0x0);
  }
  else {
    if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ffb933;
    pUVar6 = *(UnityEngine_Transform_o **)&pSVar1[3].fields._freeCount;
    if (DAT_056fe077 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
    }
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffb933;
    UnityEngine_Transform__set_localScale
              (pUVar6,(UnityEngine_Vector3_o)
                      *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
               (MethodInfo *)0x0);
    pSVar1 = (__this->fields).AttackAnimations;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar3 = pSVar1[1].fields._values,
       pSVar3 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffb933;
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
    UVar8 = (UnityEngine_Quaternion_Fields)
            UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)0x0);
  }
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localRotation
              (pUVar6,(UnityEngine_Quaternion_o)UVar8,(MethodInfo *)0x0);
    return;
  }
LAB_03ffb933:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$Update
// il2cpp: void Characters_WallColossalShifter__Update (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffb940

void Characters_WallColossalShifter__Update
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  
  if (DAT_057041c3 == '\0') {
    il2cpp_init_method_metadata(&"Roar");
    DAT_057041c3 = '\x01';
  }
  Characters_BaseTitan__Update((Characters_BaseTitan_o *)__this,method);
  method_00 = (MethodInfo *)0x0;
  bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((((char)bVar3 != '\0') &&
      (*(char *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) != '\0')) &&
     (*(char *)((long)&(__this->fields).Animation + 4) != '\0')) {
    method_00 = (__this->klass->vtable)._123_CanAction.method;
    cVar2 = (*(__this->klass->vtable)._123_CanAction.methodPtr)(__this);
    if (cVar2 != '\0') {
      method_00 = "Roar";
      (*(__this->klass->vtable)._70_Emote.methodPtr)
                (__this,"Roar",(__this->klass->vtable)._70_Emote.method);
      *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 0;
    }
  }
  Characters_WallColossalShifter__UpdateSteam(__this,method_00);
  Characters_WallColossalShifter__UpdateHandSeverWindows(__this,method_00);
  Characters_WallColossalShifter__UpdateStunRecovery(__this,method_00);
  if (((__this->fields)._steamDamageTimeLeft == 1.4013e-45) &&
     (fVar5 = (float)(__this->fields).MaxRightHandHealth, 0.0 < fVar5)) {
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 - fVar4;
    (__this->fields).MaxRightHandHealth = (int32_t)fVar5;
    if (fVar5 <= 0.0) {
      lVar1 = *(long *)&(__this->fields).EnableAI;
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Characters_BaseCharacter__SetAnimationSpeed
                ((Characters_BaseCharacter_o *)__this,*(System_String_o **)(lVar1 + 0x48),0.0,
                 (MethodInfo *)0x0);
      (__this->fields).MaxRightHandHealth = 0;
    }
  }
  return;
}


// Characters.WallColossalShifter$$ToggleParticleSystem
// il2cpp: void Characters_WallColossalShifter__ToggleParticleSystem (Characters_WallColossalShifter_o* __this, UnityEngine_ParticleSystem_o* system, bool enabled, const MethodInfo* method);
// 0x3ffb350

void Characters_WallColossalShifter__ToggleParticleSystem
               (Characters_WallColossalShifter_o *__this,UnityEngine_ParticleSystem_o *system,
               bool_conflict enabled,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (system == (UnityEngine_ParticleSystem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = UnityEngine_ParticleSystem__get_isPlaying(system,(MethodInfo *)0x0);
  if ((char)enabled == '\0') {
    if ((char)bVar1 != '\0') {
      UnityEngine_ParticleSystem__Stop(system,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((char)bVar1 == '\0') {
    UnityEngine_ParticleSystem__Play(system,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.WallColossalShifter$$StopSteam
// il2cpp: void Characters_WallColossalShifter__StopSteam (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffa6d0

void Characters_WallColossalShifter__StopSteam
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_19;
  
  if (DAT_057041f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetSteamStateRPC");
    DAT_057041f0 = '\x01';
  }
  if ((*(int *)((long)&(__this->fields).PreviousHumanWeapon + 4) == 0) ||
     (bVar1 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0),
     (char)bVar1 == '\0')) {
    return;
  }
  __this_00 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  local_19 = 0;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_19);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class), lVar3 == 0
       )) {
      uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar4,0);
    }
    if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameters->m_Items[0] = pIVar2;
    il2cpp_runtime_glue(parameters->m_Items,pIVar2);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SetSteamStateRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$StartSteam
// il2cpp: void Characters_WallColossalShifter__StartSteam (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffc780

void Characters_WallColossalShifter__StartSteam
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_19;
  
  if (DAT_057041f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetSteamStateRPC");
    DAT_057041f1 = '\x01';
  }
  (__this->fields).TransformingToHuman = (bool_conflict)(__this->fields).DeathAnimationLength;
  (__this->fields).PreviousHumanGas = (float)(__this->fields)._rightHandState;
  *(undefined4 *)&(__this->fields).PreviousHumanWeapon =
       *(undefined4 *)&(__this->fields).field_0x2a4;
  bVar1 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  __this_00 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  local_19 = 1;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_19);
  if (parameters != (System_Object_array *)0x0) {
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class), lVar3 == 0
       )) {
      uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar4,0);
    }
    if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameters->m_Items[0] = pIVar2;
    il2cpp_runtime_glue(parameters->m_Items,pIVar2);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SetSteamStateRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$UpdateSteam
// il2cpp: void Characters_WallColossalShifter__UpdateSteam (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffba60

void Characters_WallColossalShifter__UpdateSteam
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *pSVar1;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar8;
  undefined1 local_1d;
  float local_1c;
  
  if (DAT_057041f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata();
    DAT_057041f2 = '\x01';
  }
  if (*(int *)((long)&(__this->fields).PreviousHumanWeapon + 4) != 0) {
    local_1c = (float)(__this->fields).TransformingToHuman;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).TransformingToHuman = (bool_conflict)(local_1c - fVar8);
    local_1c = (__this->fields).PreviousHumanGas;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).PreviousHumanGas = local_1c - fVar8;
    local_1c = *(float *)&(__this->fields).PreviousHumanWeapon;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)&(__this->fields).PreviousHumanWeapon = local_1c - fVar8;
    if ((__this->fields).PreviousHumanGas <= 0.0) {
      pSVar1 = (__this->fields).AttackAnimations;
      if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
         (pSVar2 = pSVar1[1].fields._entries,
         pSVar2 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
      goto LAB_03ffbc9e;
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pSVar2,(MethodInfo *)0x0);
      Characters_WallColossalShifter__BlowAwayHumans
                (__this,pUVar4,100.0,(float)(__this->fields).CanDamageLeftHand,method_00);
      (__this->fields).PreviousHumanGas = (float)(__this->fields)._rightHandState;
    }
    if ((*(int *)((long)&(__this->fields).PreviousHumanWeapon + 4) == 2) &&
       (*(float *)&(__this->fields).PreviousHumanWeapon <= 0.0)) {
      pSVar1 = (__this->fields).AttackAnimations;
      if ((pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
         (pSVar2 = pSVar1[1].fields._entries,
         pSVar2 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0))
      goto LAB_03ffbc9e;
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pSVar2,(MethodInfo *)0x0);
      Characters_WallColossalShifter__BlowAwayHumans
                (__this,pUVar4,100.0,(float)(__this->fields).CanDamageLeftHand,method_01);
      *(undefined4 *)&(__this->fields).PreviousHumanWeapon =
           *(undefined4 *)&(__this->fields).field_0x2a4;
    }
    if ((((float)(__this->fields).TransformingToHuman <= 0.0) &&
        (*(int *)((long)&(__this->fields).PreviousHumanWeapon + 4) == 1)) &&
       (bVar3 = Characters_BaseCharacter__IsMine
                          ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0),
       (char)bVar3 != '\0')) {
      __this_00 = Photon_Pun_MonoBehaviourPun__get_photonView
                            ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      local_1d = 2;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_1d);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pIVar5,(((parameters->obj).klass)->_1).element_class),
           lVar6 == 0)) {
          uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar7,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar5;
        il2cpp_runtime_glue(parameters->m_Items,pIVar5);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetSteamStateRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
      }
LAB_03ffbc9e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Characters.WallColossalShifter$$UpdateHandSeverWindows
// il2cpp: void Characters_WallColossalShifter__UpdateHandSeverWindows (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffbcc0

void Characters_WallColossalShifter__UpdateHandSeverWindows
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int iVar2;
  undefined8 in_RAX;
  Photon_Pun_PhotonView_o *pPVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_057041f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetRightHandStateRPC");
    il2cpp_init_method_metadata();
    DAT_057041f3 = '\x01';
  }
  if ((__this->fields)._steamDamageTimeLeft == 0.0) {
    if (((__this->fields)._steamTimeLeft == 2.8026e-45) &&
       (fVar8 = (float)(__this->fields)._steamState, 0.0 < fVar8)) {
      uStack_28 = CONCAT44(fVar8,(uint)uStack_28);
      fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      (__this->fields)._steamState = (int32_t)(uStack_28._4_4_ - fVar8);
      if (uStack_28._4_4_ - fVar8 <= 0.0) {
        (__this->fields)._steamState = 0;
        bVar1 = Characters_BaseCharacter__IsMine
                          ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          iVar2 = *(int *)((long)&(__this->fields)._customSkinLoader + 4);
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          *(int *)((long)&(__this->fields).ColossalCache + 4) = iVar2;
          (*(__this->klass->vtable)._179_OnLeftHandHealthChange.methodPtr)(__this);
          pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          uStack_28._0_4_ = (uint)(uint3)uStack_28;
          pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,(long)&uStack_28 + 3);
          if (pSVar4 == (System_Object_array *)0x0) goto LAB_03ffbf78;
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
             lVar6 == 0)) goto LAB_03ffbf82;
          if ((int)pSVar4->max_length == 0) goto LAB_03ffbf7d;
          pSVar4->m_Items[0] = pIVar5;
          il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
          if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ffbf78;
          Photon_Pun_PhotonView__RPC(pPVar3,"SetLeftHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
        }
      }
    }
    if (((__this->fields)._steamBlowAwayTimeLeft == 2.8026e-45) &&
       (fVar8 = (__this->fields).WarningSteamTime, 0.0 < fVar8)) {
      uStack_28 = CONCAT44(fVar8,(uint)uStack_28);
      fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      (__this->fields).WarningSteamTime = uStack_28._4_4_ - fVar8;
      if (uStack_28._4_4_ - fVar8 <= 0.0) {
        (__this->fields).WarningSteamTime = 0.0;
        bVar1 = Characters_BaseCharacter__IsMine
                          ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          iVar2 = *(int *)&(__this->fields).ColossalCache;
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          *(int *)&(__this->fields).ColossalAnimations = iVar2;
          (*(__this->klass->vtable)._180_OnRightHandHealthChange.methodPtr)(__this);
          pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                             ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
          pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          uStack_28._0_3_ = (uint3)(ushort)uStack_28;
          pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,(long)&uStack_28 + 2);
          if (pSVar4 != (System_Object_array *)0x0) {
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
               lVar6 == 0)) {
LAB_03ffbf82:
              uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar7,0);
            }
            if ((int)pSVar4->max_length == 0) {
LAB_03ffbf7d:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar4->m_Items[0] = pIVar5;
            il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
            if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(pPVar3,"SetRightHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
              return;
            }
          }
LAB_03ffbf78:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
  return;
}


// Characters.WallColossalShifter$$UpdateStunRecovery
// il2cpp: void Characters_WallColossalShifter__UpdateStunRecovery (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffbfa0

void Characters_WallColossalShifter__UpdateStunRecovery
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  System_String_o *methodName;
  bool_conflict bVar1;
  int iVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  float local_3c;
  int32_t local_38;
  undefined4 local_34;
  
  if (DAT_057041f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetRightHandStateRPC");
    il2cpp_init_method_metadata(&"SetLeftHandStateRPC");
    il2cpp_init_method_metadata(&"SetStunRecoveryTimesRPC");
    il2cpp_init_method_metadata(&"SetStunStateRPC");
    il2cpp_init_method_metadata();
    DAT_057041f4 = '\x01';
  }
  fVar8 = (__this->fields)._steamDamageTimeLeft;
  if (fVar8 == 2.8026e-45) {
    local_3c = (float)(__this->fields).CurrentRightHandHealth;
    if (local_3c <= 0.0) {
      return;
    }
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).CurrentRightHandHealth = (int32_t)(local_3c - fVar8);
    if (0.0 < local_3c - fVar8) {
      return;
    }
    (__this->fields).CurrentRightHandHealth = 0;
    bVar1 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 == '\0') {
      return;
    }
    iVar2 = *(int *)((long)&(__this->fields)._customSkinLoader + 4);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    *(int *)((long)&(__this->fields).ColossalCache + 4) = iVar2;
    (*(__this->klass->vtable)._179_OnLeftHandHealthChange.methodPtr)
              (__this,(__this->klass->vtable)._179_OnLeftHandHealthChange.method);
    iVar2 = *(int *)&(__this->fields).ColossalCache;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    *(int *)&(__this->fields).ColossalAnimations = iVar2;
    (*(__this->klass->vtable)._180_OnRightHandHealthChange.methodPtr)(__this);
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    local_3d = 0;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_3d);
    if (pSVar4 == (System_Object_array *)0x0) goto LAB_03ffc6dd;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03ffc6e7;
    if ((int)pSVar4->max_length == 0) goto LAB_03ffc6e2;
    pSVar4->m_Items[0] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
    if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ffc6dd;
    Photon_Pun_PhotonView__RPC(pPVar3,"SetStunStateRPC",0,pSVar4,(MethodInfo *)0x0);
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    local_3e = 0;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_3e);
    if (pSVar4 == (System_Object_array *)0x0) goto LAB_03ffc6dd;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03ffc6e7;
    if ((int)pSVar4->max_length == 0) goto LAB_03ffc6e2;
    pSVar4->m_Items[0] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
    if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ffc6dd;
    Photon_Pun_PhotonView__RPC(pPVar3,"SetLeftHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    local_3f = 0;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_3f);
    if (pSVar4 == (System_Object_array *)0x0) goto LAB_03ffc6dd;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03ffc6e7;
    if ((int)pSVar4->max_length == 0) goto LAB_03ffc6e2;
    pSVar4->m_Items[0] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
    if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ffc6dd;
    Photon_Pun_PhotonView__RPC(pPVar3,"SetRightHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
    (__this->fields)._steamState = 0;
    (__this->fields).WarningSteamTime = 0.0;
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
    local_34 = 0;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_34);
    if (pSVar4 == (System_Object_array *)0x0) goto LAB_03ffc6dd;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03ffc6e7;
    if ((int)pSVar4->max_length == 0) goto LAB_03ffc6e2;
    pSVar4->m_Items[0] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
    local_38 = 0;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_38);
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03ffc6e7;
    if ((uint)pSVar4->max_length < 2) goto LAB_03ffc6e2;
    pSVar4->m_Items[1] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items + 1,pIVar5);
    methodName = "SetHandSeverTimesRPC";
  }
  else {
    if (fVar8 != 1.4013e-45) {
      return;
    }
    local_3c = (float)(__this->fields).MaxLeftHandHealth;
    if (local_3c <= 0.0) {
      return;
    }
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).MaxLeftHandHealth = (int32_t)(local_3c - fVar8);
    if (0.0 < local_3c - fVar8) {
      return;
    }
    (__this->fields).MaxLeftHandHealth = 0;
    bVar1 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 == '\0') {
      return;
    }
    (__this->fields).CurrentRightHandHealth = (__this->fields).CurrentLeftHandHealth;
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    local_3d = 2;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_3d);
    if (pSVar4 == (System_Object_array *)0x0) goto LAB_03ffc6dd;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03ffc6e7;
    if ((int)pSVar4->max_length == 0) goto LAB_03ffc6e2;
    pSVar4->m_Items[0] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
    if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ffc6dd;
    Photon_Pun_PhotonView__RPC(pPVar3,"SetStunStateRPC",0,pSVar4,(MethodInfo *)0x0);
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    local_3e = 3;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_3e);
    if (pSVar4 == (System_Object_array *)0x0) goto LAB_03ffc6dd;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03ffc6e7;
    if ((int)pSVar4->max_length == 0) goto LAB_03ffc6e2;
    pSVar4->m_Items[0] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
    if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ffc6dd;
    Photon_Pun_PhotonView__RPC(pPVar3,"SetLeftHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    local_3f = 3;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711038,&local_3f);
    if (pSVar4 == (System_Object_array *)0x0) goto LAB_03ffc6dd;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03ffc6e7;
    if ((int)pSVar4->max_length == 0) goto LAB_03ffc6e2;
    pSVar4->m_Items[0] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
    if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ffc6dd;
    Photon_Pun_PhotonView__RPC(pPVar3,"SetRightHandStateRPC",0,pSVar4,(MethodInfo *)0x0);
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
    local_34 = 0;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_34);
    if (pSVar4 == (System_Object_array *)0x0) goto LAB_03ffc6dd;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0)) {
LAB_03ffc6e7:
      uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar7,0);
    }
    if ((int)pSVar4->max_length == 0) {
LAB_03ffc6e2:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar4->m_Items[0] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
    local_38 = (__this->fields).CurrentRightHandHealth;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_38);
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03ffc6e7;
    if ((uint)pSVar4->max_length < 2) goto LAB_03ffc6e2;
    pSVar4->m_Items[1] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items + 1,pIVar5);
    methodName = "SetStunRecoveryTimesRPC";
  }
  if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__RPC(pPVar3,methodName,0,pSVar4,(MethodInfo *)0x0);
    return;
  }
LAB_03ffc6dd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$UpdateStunAnimation
// il2cpp: void Characters_WallColossalShifter__UpdateStunAnimation (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffc700

void Characters_WallColossalShifter__UpdateStunAnimation
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (((__this->fields)._steamDamageTimeLeft == 1.4013e-45) &&
     (fVar3 = (float)(__this->fields).MaxRightHandHealth, 0.0 < fVar3)) {
    fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 - fVar2;
    (__this->fields).MaxRightHandHealth = (int32_t)fVar3;
    if (fVar3 <= 0.0) {
      lVar1 = *(long *)&(__this->fields).EnableAI;
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Characters_BaseCharacter__SetAnimationSpeed
                ((Characters_BaseCharacter_o *)__this,*(System_String_o **)(lVar1 + 0x48),0.0,
                 (MethodInfo *)0x0);
      (__this->fields).MaxRightHandHealth = 0;
    }
  }
  return;
}


// Characters.WallColossalShifter$$DeactivateAllHitboxes
// il2cpp: void Characters_WallColossalShifter__DeactivateAllHitboxes (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffcd90

void Characters_WallColossalShifter__DeactivateAllHitboxes
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  UnityEngine_Object_o *y;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar3;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  Il2CppType *pIVar5;
  Characters_BaseHitbox_o *__this_03;
  Characters_BaseHitbox_o *pCVar6;
  undefined1 auStack_48 [16];
  Characters_BaseHitbox_o *pCStack_38;
  
  if (DAT_057041f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseHitbox_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Characters_BaseHitbox__GetE);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057041f5 = '\x01';
  }
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
     (__this_00 = *(System_Collections_Generic_List_object__o **)&pSVar1[1].fields.method_is_virtual
     , __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_00,MethodInfo_List_1_T__Enumerator_Characters_BaseHitbox__GetE)
    ;
    pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar5 = (Il2CppType *)auStack_48._8_8_;
    while( true ) {
      __this_03 = pCStack_38;
      __this_01.fields._8_8_ = pIVar5;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = pIVar5;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
        __this_02.fields._current = (Il2CppObject *)__this_03;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        return;
      }
      pSVar2 = (__this->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) break;
      y = pSVar2[2].monitor;
      pCVar6 = __this_03;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)__this_03,y,(MethodInfo *)0x0)
      ;
      if (((char)bVar3 == '\0') ||
         (pCStack_38 = pCVar6, *(int *)((long)&(__this->fields).PreviousHumanWeapon + 4) != 2)) {
        if (__this_03 == (Characters_BaseHitbox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        Characters_BaseHitbox__Deactivate(__this_03,(MethodInfo *)0x0);
        pCStack_38 = pCVar6;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$UpdateAttack
// il2cpp: void Characters_WallColossalShifter__UpdateAttack (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffcfa0

void Characters_WallColossalShifter__UpdateAttack
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_string__string__o *pSVar4;
  System_Collections_Generic_Dictionary_string__string__c *pSVar5;
  System_String_o *pSVar6;
  System_Action_Hashtable__o *pSVar7;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  Characters_BaseHitbox_o *pCVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar9;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  bool_conflict bVar10;
  UnityEngine_Transform_o *pUVar11;
  MethodInfo *pMVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o source;
  UnityEngine_Quaternion_o UVar15;
  undefined8 local_28;
  
  if (DAT_057041f6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_057041f6 = '\x01';
  }
  fVar13 = (float)(*(__this->klass->vtable)._166_GetAnimationTime.methodPtr)
                            (__this,(__this->klass->vtable)._166_GetAnimationTime.method);
  lVar3 = *(long *)&(__this->fields).EnableAI;
  if (lVar3 == 0) goto LAB_03ffd746;
  pMVar12 = *(MethodInfo **)(lVar3 + 0x30);
  bVar10 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      (System_String_o *)pMVar12,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (fVar13 <= 0.37) {
      return;
    }
    if ((__this->fields)._startPosition.fields.z != 0.0) {
      return;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    Characters_WallColossalShifter__StartSteam(__this,pMVar12);
    return;
  }
  lVar3 = *(long *)&(__this->fields).EnableAI;
  if (lVar3 == 0) goto LAB_03ffd746;
  bVar10 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(lVar3 + 0x40),(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (fVar13 <= 0.42) {
      return;
    }
    if ((__this->fields)._startPosition.fields.z != 0.0) {
      return;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar4 = (__this->fields).AttackAnimations;
    if (pSVar4 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      pSVar5 = pSVar4[2].klass;
      fVar13 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3dcccccd,__this);
      if (pSVar5 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
        Characters_BaseHitbox__Activate
                  ((Characters_BaseHitbox_o *)pSVar5,0.0,fVar13,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = (__this->fields).AttackAnimations;
        if ((pSVar4 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) &&
           (pSVar5 = pSVar4[2].klass,
           pSVar5 != (System_Collections_Generic_Dictionary_string__string__c *)0x0)) {
          pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
          pUVar11 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            UVar14 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
            pSVar7 = (__this->fields).OnPlayerPropertiesChanged;
            if ((pSVar7 != (System_Action_Hashtable__o *)0x0) &&
               (pUVar11 = (UnityEngine_Transform_o *)(pSVar7->fields).method_ptr,
               pUVar11 != (UnityEngine_Transform_o *)0x0)) {
              UVar15 = UnityEngine_Transform__get_rotation(pUVar11,(MethodInfo *)0x0);
              Effects_EffectSpawner__Spawn
                        (pSVar6,UVar14,UVar15,
                         *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 5.0,1,
                         (System_Object_array *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    goto LAB_03ffd746;
  }
  lVar3 = *(long *)&(__this->fields).EnableAI;
  if (lVar3 == 0) goto LAB_03ffd746;
  bVar10 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(lVar3 + 0x38),(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    fVar2 = (__this->fields)._startPosition.fields.z;
    if ((fVar13 <= 0.38) || (fVar2 != 0.0)) {
      if (fVar13 <= 0.45) {
        return;
      }
      if (fVar2 != 1.4013e-45) {
        return;
      }
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
      (__this->fields)._startPosition.fields.z = 2.8026e-45;
      return;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar4 = (__this->fields).AttackAnimations;
    if (pSVar4 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      __this_00 = pSVar4[2].fields._entries;
      fVar13 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e0f5c29,__this);
      if (__this_00 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        Characters_BaseHitbox__Activate
                  ((Characters_BaseHitbox_o *)__this_00,0.0,fVar13,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_03ffd746;
  }
  lVar3 = *(long *)&(__this->fields).EnableAI;
  if (lVar3 == 0) goto LAB_03ffd746;
  bVar10 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(lVar3 + 0x10),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    lVar3 = *(long *)&(__this->fields).EnableAI;
    if (lVar3 == 0) goto LAB_03ffd746;
    bVar10 = System_String__op_Equality
                       (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                        *(System_String_o **)(lVar3 + 0x20),(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto LAB_03ffd2af;
    lVar3 = *(long *)&(__this->fields).EnableAI;
    if (lVar3 == 0) goto LAB_03ffd746;
    bVar10 = System_String__op_Equality
                       (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                        *(System_String_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      lVar3 = *(long *)&(__this->fields).EnableAI;
      if (lVar3 == 0) goto LAB_03ffd746;
      bVar10 = System_String__op_Equality
                         (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                          *(System_String_o **)(lVar3 + 0x28),(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
    }
    if (fVar13 <= 0.34) {
      return;
    }
    if ((__this->fields)._startPosition.fields.z != 0.0) {
      return;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    if (1 < (uint)(__this->fields)._steamBlowAwayTimeLeft) {
      return;
    }
    pSVar4 = (__this->fields).AttackAnimations;
    if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ffd746;
    pCVar8 = (Characters_BaseHitbox_o *)pSVar4[1].fields._values;
    fVar13 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3ca3d70a,__this);
    if (pCVar8 == (Characters_BaseHitbox_o *)0x0) goto LAB_03ffd746;
    Characters_BaseHitbox__Activate(pCVar8,0.0,fVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = (__this->fields).AttackAnimations;
    if ((pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (__this_01 = pSVar4[1].fields._values,
       __this_01 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffd746;
    pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x90);
    pUVar11 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffd746;
    UVar14 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
    if (DAT_0570266b == '\0') {
      il2cpp_init_method_metadata();
      DAT_0570266b = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    position_00.fields.z = UVar14.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 8.0
    ;
    UVar15 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    position_00.fields.x = UVar14.fields.x + (float)uVar1 * 8.0;
    position_00.fields.y = UVar14.fields.y + (float)((ulong)uVar1 >> 0x20) * 8.0;
    Effects_EffectSpawner__Spawn
              (pSVar6,position_00,UVar15,
               *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 4.0,1,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).AttackAnimations;
    if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ffd746;
    pSVar9 = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
             pSVar4[1].fields._values;
  }
  else {
LAB_03ffd2af:
    if (((fVar13 <= 0.34) || ((__this->fields)._startPosition.fields.z != 0.0)) ||
       ((__this->fields)._startPosition.fields.z = 1.4013e-45,
       1 < (uint)(__this->fields)._steamTimeLeft)) {
      return;
    }
    pSVar4 = (__this->fields).AttackAnimations;
    if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ffd746;
    pCVar8 = (Characters_BaseHitbox_o *)pSVar4[1].fields._keys;
    fVar13 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3ca3d70a,__this);
    if (pCVar8 == (Characters_BaseHitbox_o *)0x0) goto LAB_03ffd746;
    Characters_BaseHitbox__Activate(pCVar8,0.0,fVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = (__this->fields).AttackAnimations;
    if ((pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (pSVar9 = pSVar4[1].fields._keys,
       pSVar9 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto LAB_03ffd746;
    pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x90);
    pUVar11 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)pSVar9,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto LAB_03ffd746;
    UVar14 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
    if (DAT_0570266b == '\0') {
      il2cpp_init_method_metadata();
      DAT_0570266b = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    position.fields.z = UVar14.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 8.0;
    UVar15 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    position.fields.x = UVar14.fields.x + (float)uVar1 * 8.0;
    position.fields.y = UVar14.fields.y + (float)((ulong)uVar1 >> 0x20) * 8.0;
    Effects_EffectSpawner__Spawn
              (pSVar6,position,UVar15,
               *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 4.0,1,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).AttackAnimations;
    if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto LAB_03ffd746;
    pSVar9 = pSVar4[1].fields._keys;
  }
  if ((pSVar9 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) &&
     (pUVar11 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pSVar9,(MethodInfo *)0x0),
     pUVar11 != (UnityEngine_Transform_o *)0x0)) {
    pMVar12 = (MethodInfo *)0x0;
    UVar14 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
    if (DAT_0570266b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570266b = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    source.fields.x = UVar14.fields.x + (float)uVar1 * 10.0;
    source.fields.y = UVar14.fields.y + (float)((ulong)uVar1 >> 0x20) * 10.0;
    source.fields.z = UVar14.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 10.0;
    Characters_WallColossalShifter__BlowAwayHumans
              (__this,source,(float)(__this->fields).CanDamageRightHand,pMVar12);
    return;
  }
LAB_03ffd746:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$BlowAwayHumans
// il2cpp: void Characters_WallColossalShifter__BlowAwayHumans (Characters_WallColossalShifter_o* __this, UnityEngine_Transform_o* source, float angle, float force, const MethodInfo* method);
// 0x3ffc8b0

void Characters_WallColossalShifter__BlowAwayHumans
               (Characters_WallColossalShifter_o *__this,UnityEngine_Transform_o *source,float angle
               ,float force,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_Fields __this_00;
  UnityEngine_Transform_o *__this_01;
  double dVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar4;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  undefined4 in_stack_ffffffffffffff48;
  float in_stack_ffffffffffffff4c;
  System_Collections_Generic_HashSet_T__o *pSVar11;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  float local_58;
  float fStack_54;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (DAT_057041f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    DAT_057041f7 = '\x01';
  }
  pSVar2 = (__this->fields).Team;
  if ((pSVar2 == (System_String_o *)0x0) ||
     (__this_00 = pSVar2[2].fields, __this_00 == (System_String_Fields)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_HashSet_object__o *)__this_00,MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
  fVar5 = angle * 0.5;
  pSVar11 = local_48.fields._set;
LAB_03ffc9a0:
  do {
    __this_02.fields._set._4_4_ = in_stack_ffffffffffffff4c;
    __this_02.fields._set._0_4_ = in_stack_ffffffffffffff48;
    __this_02.fields._index = (int32_t)fVar5;
    __this_02.fields._version = (int32_t)force;
    __this_02.fields._current = (Il2CppObject *)pSVar11;
    bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffff58);
    if ((char)bVar4 == '\0') {
      __this_03.fields._set._4_4_ = in_stack_ffffffffffffff4c;
      __this_03.fields._set._0_4_ = in_stack_ffffffffffffff48;
      __this_03.fields._index = (int32_t)fVar5;
      __this_03.fields._version = (int32_t)force;
      __this_03.fields._current = (Il2CppObject *)pSVar11;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffff58);
      return;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (local_48.fields._current[7].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_01 = (UnityEngine_Transform_o *)((local_48.fields._current[7].klass)->_1).name;
    if (__this_01 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar9 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    if (source == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar10 = UnityEngine_Transform__get_position(source,(MethodInfo *)0x0);
    fVar7 = UVar10.fields.z;
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      iVar1 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    }
    else {
      iVar1 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    local_78 = UVar9.fields.x;
    fStack_74 = UVar9.fields.y;
    local_88 = UVar10.fields.x;
    fStack_84 = UVar10.fields.y;
    local_78 = local_78 - local_88;
    fStack_74 = fStack_74 - fStack_84;
    fVar7 = UVar9.fields.z - fVar7;
    in_stack_ffffffffffffff4c = fVar7 * fVar7 + fStack_74 * fStack_74 + local_78 * local_78;
    if (in_stack_ffffffffffffff4c < 0.0) goto LAB_03ffcab0;
  } while ((float)(__this->fields)._leftHandState <= SQRT(in_stack_ffffffffffffff4c));
  goto LAB_03ffcaca;
LAB_03ffcab0:
  fVar8 = sqrtf(in_stack_ffffffffffffff4c);
  if (fVar8 < (float)(__this->fields)._leftHandState) {
LAB_03ffcaca:
    UVar9 = UnityEngine_Transform__get_forward(source,(MethodInfo *)0x0);
    fVar8 = UVar9.fields.z;
    if (DAT_0570266a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_0570266a = '\x01';
      iVar1 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    }
    else {
      iVar1 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    local_58 = UVar9.fields.x;
    fStack_54 = UVar9.fields.y;
    fVar6 = in_stack_ffffffffffffff4c *
            (fVar8 * fVar8 + fStack_54 * fStack_54 + local_58 * local_58);
    if (fVar6 < 0.0) {
      fVar6 = sqrtf(fVar6);
      method_00 = TypeInfo_Math;
    }
    else {
      fVar6 = SQRT(fVar6);
      method_00 = TypeInfo_Math;
    }
    TypeInfo_Math = method_00;
    if (fVar6 < 1e-15) {
      if (fVar5 < 0.0) goto LAB_03ffc9a0;
    }
    else {
      in_stack_ffffffffffffff4c = fVar6;
      if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
        il2cpp_init_class();
        in_stack_ffffffffffffff4c = fVar6;
      }
      fVar8 = (fVar7 * fVar8 + fStack_74 * fStack_54 + local_78 * local_58) /
              in_stack_ffffffffffffff4c;
      fVar7 = 1.0;
      if (fVar8 <= 1.0) {
        fVar7 = fVar8;
      }
      dVar3 = acos((double)(float)(~-(uint)(-1.0 <= fVar8) & 0xbf800000 |
                                  (uint)fVar7 & -(uint)(-1.0 <= fVar8)),method_00);
      if (fVar5 < (float)dVar3 * 57.29578) goto LAB_03ffc9a0;
    }
    UVar9 = UnityEngine_Transform__get_position(source,(MethodInfo *)0x0);
    (*(local_48.fields._current)->klass->vtable[0x58].methodPtr)
              (UVar9.fields.x,UVar9.fields.z,local_48.fields._current,
               (local_48.fields._current)->klass->vtable[0x58].method);
  }
  goto LAB_03ffc9a0;
}


// Characters.WallColossalShifter$$BlowAwayHumans
// il2cpp: void Characters_WallColossalShifter__BlowAwayHumans (Characters_WallColossalShifter_o* __this, UnityEngine_Vector3_o source, float force, const MethodInfo* method);
// 0x3ffd750

void Characters_WallColossalShifter__BlowAwayHumans
               (Characters_WallColossalShifter_o *__this,UnityEngine_Vector3_o source,float force,
               MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_Fields __this_00;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  undefined1 in_stack_ffffffffffffff28 [12];
  System_Collections_Generic_HashSet_T__o *pSVar6;
  float local_a8;
  float fStack_a4;
  float local_68;
  float fStack_64;
  System_Collections_Generic_HashSet_Enumerator_T__o local_40;
  
  if (DAT_057041f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    DAT_057041f8 = '\x01';
  }
  pSVar2 = (__this->fields).Team;
  if ((pSVar2 == (System_String_o *)0x0) ||
     (__this_00 = pSVar2[2].fields, __this_00 == (System_String_Fields)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__GetEnumerator
            (&local_40,(System_Collections_Generic_HashSet_object__o *)__this_00,MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
  local_a8 = source.fields.x;
  fStack_a4 = source.fields.y;
  pSVar6 = local_40.fields._set;
LAB_03ffd850:
  do {
    __this_02.fields._version = (int32_t)force;
    __this_02.fields._set =
         (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff28._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar6;
    bVar3 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffff38);
    if ((char)bVar3 == '\0') {
      __this_03.fields._version = (int32_t)force;
      __this_03.fields._set =
           (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff28._8_4_;
      __this_03.fields._current = (Il2CppObject *)pSVar6;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffff38);
      return;
    }
    if (local_40.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (local_40.fields._current[7].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_01 = (UnityEngine_Transform_o *)((local_40.fields._current[7].klass)->_1).name;
    if (__this_01 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar5 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    if (DAT_056fdea6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea6 = '\x01';
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    local_68 = UVar5.fields.x;
    fStack_64 = UVar5.fields.y;
    fVar4 = UVar5.fields.z - source.fields.z;
    fVar4 = (local_68 - local_a8) * (local_68 - local_a8) +
            (fStack_64 - fStack_a4) * (fStack_64 - fStack_a4) + fVar4 * fVar4;
    if (fVar4 < 0.0) goto LAB_03ffd940;
  } while ((float)(__this->fields)._leftHandState <= SQRT(fVar4));
  goto LAB_03ffd958;
LAB_03ffd940:
  fVar4 = sqrtf(fVar4);
  if (fVar4 < (float)(__this->fields)._leftHandState) {
LAB_03ffd958:
    (*(local_40.fields._current)->klass->vtable[0x58].methodPtr)
              (local_a8,source.fields.z,force,local_40.fields._current,
               (local_40.fields._current)->klass->vtable[0x58].method);
  }
  goto LAB_03ffd850;
}


// Characters.WallColossalShifter$$GetHitRPC
// il2cpp: void Characters_WallColossalShifter__GetHitRPC (Characters_WallColossalShifter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x3ffda70

void Characters_WallColossalShifter__GetHitRPC
               (Characters_WallColossalShifter_o *__this,int32_t viewId,System_String_o *name,
               int32_t damage,System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_string__string__o *pSVar3;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  bool_conflict bVar4;
  uint uVar5;
  MethodInfo *in_RAX;
  System_String_o *pSVar6;
  Il2CppMethodPointer vtable_dispatch;
  ulong uVar7;
  MethodInfo *pMVar8;
  
  if (DAT_057041f9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_057041f9 = '\x01';
  }
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x50), lVar2 != 0)) &&
     (*(long *)(lVar2 + 0x88) != 0)) {
    if (*(char *)(*(long *)(lVar2 + 0x88) + 0x11) != '\0') {
      if (*(long *)(lVar2 + 0x98) == 0) goto LAB_03ffdc99;
      if (damage < *(int *)(*(long *)(lVar2 + 0x98) + 0x14)) {
        damage = 0;
      }
    }
    pSVar3 = (__this->fields).AttackAnimations;
    if ((pSVar3 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) &&
       (__this_00 = pSVar3[1].fields._entries,
       __this_00 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
      pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
      bVar4 = System_String__op_Equality(collider,pSVar6,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        pSVar3 = (__this->fields).AttackAnimations;
        if ((pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
           (__this_01 = pSVar3[2].fields._keys,
           __this_01 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
        goto LAB_03ffdc99;
        pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
        bVar4 = System_String__op_Equality(collider,pSVar6,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          pSVar3 = (__this->fields).AttackAnimations;
          if ((pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
             (__this_02 = pSVar3[2].fields._values,
             __this_02 ==
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
          goto LAB_03ffdc99;
          pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0)
          ;
          bVar4 = System_String__op_Equality(collider,pSVar6,(MethodInfo *)0x0);
          if (((char)bVar4 != '\0') &&
             ((*(char *)((long)&(__this->fields).ColossalAnimations + 5) != '\0' &&
              ((uint)(__this->fields)._steamBlowAwayTimeLeft < 2)))) {
            uVar5 = *(int *)&(__this->fields).ColossalAnimations - damage;
            uVar1 = *(uint *)&(__this->fields).ColossalCache;
            if ((int)uVar5 < (int)uVar1) {
              uVar1 = uVar5;
            }
            uVar7 = 0;
            if (-1 < (int)uVar5) {
              uVar7 = (ulong)uVar1;
            }
            *(int *)&(__this->fields).ColossalAnimations = (int)uVar7;
            vtable_dispatch = (__this->klass->vtable)._180_OnRightHandHealthChange.methodPtr;
            pMVar8 = (__this->klass->vtable)._180_OnRightHandHealthChange.method;
            goto LAB_03ffdc86;
          }
        }
        else if ((*(char *)((long)&(__this->fields).ColossalAnimations + 4) != '\0') &&
                ((uint)(__this->fields)._steamTimeLeft < 2)) {
          uVar5 = *(int *)((long)&(__this->fields).ColossalCache + 4) - damage;
          uVar1 = *(uint *)((long)&(__this->fields)._customSkinLoader + 4);
          if ((int)uVar5 < (int)uVar1) {
            uVar1 = uVar5;
          }
          uVar7 = 0;
          if (-1 < (int)uVar5) {
            uVar7 = (ulong)uVar1;
          }
          *(int *)((long)&(__this->fields).ColossalCache + 4) = (int)uVar7;
          vtable_dispatch = (__this->klass->vtable)._179_OnLeftHandHealthChange.methodPtr;
          pMVar8 = (__this->klass->vtable)._179_OnLeftHandHealthChange.method;
LAB_03ffdc86:
          (*vtable_dispatch)(__this,pMVar8,uVar7,vtable_dispatch);
          return;
        }
      }
      else {
        Characters_BaseShifter__GetHitRPC
                  ((Characters_BaseShifter_o *)__this,viewId,name,damage,type,collider,in_RAX);
      }
      return;
    }
  }
LAB_03ffdc99:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.WallColossalShifter$$.ctor
// il2cpp: void Characters_WallColossalShifter___ctor (Characters_WallColossalShifter_o* __this, const MethodInfo* method);
// 0x3ffdca0

void Characters_WallColossalShifter___ctor
               (Characters_WallColossalShifter_o *__this,MethodInfo *method)

{
  *(undefined8 *)&(__this->fields).DeathAnimationLength = 0x3e4ccccd40400000;
  (__this->fields)._customSkinLoader = (CustomSkins_BaseCustomSkinLoader_o *)0x3e800000064;
  (__this->fields).ColossalCache = (Characters_WallColossalComponentCache_o *)0x3e8000003e8;
  *(undefined4 *)&(__this->fields).ColossalAnimations = 1000;
  *(undefined2 *)((long)&(__this->fields).ColossalAnimations + 4) = 0x101;
  (__this->fields).SteamDamageInterval = 10.0;
  (__this->fields).SteamDamagePerSecond = 0x40400000;
  (__this->fields).CurrentLeftHandHealth = 0x41200000;
  (__this->fields).CanDamageLeftHand = 0x42480000;
  (__this->fields).CanDamageRightHand = 0x42480000;
  (__this->fields)._leftHandState = 0x42700000;
  (__this->fields)._rightHandState = 0x3e99999a;
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method);
  return;
}


