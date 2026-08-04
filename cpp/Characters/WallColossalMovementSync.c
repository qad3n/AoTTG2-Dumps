// Type: Characters.WallColossalMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/WallColossalMovementSync.cs
// Prior real C# source: none
// --------------------------------

// Characters.WallColossalMovementSync$$Awake
// il2cpp: void Characters_WallColossalMovementSync__Awake (Characters_WallColossalMovementSync_o* __this, const MethodInfo* method);
// 0x4305130

void Characters_WallColossalMovementSync__Awake
               (Characters_WallColossalMovementSync_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  if (g_data_057adf4e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_WallColossalShifter_GetComponent_WallColossalShifter);
    g_data_057adf4e = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (Characters_WallColossalShifter_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_WallColossalShifter_GetComponent_WallColossalShifter);
  (__this->fields)._wallColossal = pCVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._wallColossal,pCVar1);
  return;
}


// Characters.WallColossalMovementSync$$SendCustomStream
// il2cpp: void Characters_WallColossalMovementSync__SendCustomStream (Characters_WallColossalMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x4305190

void Characters_WallColossalMovementSync__SendCustomStream
               (Characters_WallColossalMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  Characters_BaseHitbox_o *pCVar3;
  Characters_WallColossalSteamWarningZone_o *__this_00;
  UnityEngine_Component_o *__this_01;
  bool_conflict bVar4;
  Photon_Pun_PhotonStream_o *pPVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Component_c *pUVar7;
  long lVar8;
  MethodInfo *method_00;
  int iVar9;
  int iVar10;
  Photon_Pun_PhotonStream_o *__this_02;
  Il2CppClass *pIVar11;
  UnityEngine_Component_c *__this_03;
  UnityEngine_Component_c *pUVar12;
  undefined1 auVar13 [16];
  undefined1 local_1a;
  undefined1 local_19;
  
  pCVar1 = (__this->fields)._wallColossal;
  __this_02 = stream;
  pIVar11 = (Il2CppClass *)__this;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    local_19 = *(undefined1 *)((long)&(pCVar1->fields).PreviousHumanWeapon + 4);
    __this_02 = (Photon_Pun_PhotonStream_o *)&stack0xffffffffffffffe7;
    pIVar11 = g_data_057b9b88;
    pPVar5 = (Photon_Pun_PhotonStream_o *)il2cpp_runtime_helper_02304f30();
    if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
      pIVar11 = (Il2CppClass *)stream;
      Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)pPVar5,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._wallColossal;
      __this_02 = pPVar5;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        local_1a = *(undefined1 *)&(pCVar1->fields)._steamDamageTimeLeft;
        pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b88,&local_1a);
        Photon_Pun_PhotonStream__SendNext(stream,pIVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar5 = __this_02;
  if (g_data_057adf4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColossalSteamState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColossalStunState);
    g_data_057adf4f = '\x01';
  }
  if (__this_02 == (Photon_Pun_PhotonStream_o *)0x0) {
label_04305346:
    pUVar7 = (UnityEngine_Component_c *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar6 = Photon_Pun_PhotonStream__PeekNext(__this_02,(MethodInfo *)0x0);
    if ((pIVar6 != (Il2CppObject *)0x0) && (pIVar6->klass == g_data_057b9b88)) {
      pPVar5 = (Photon_Pun_PhotonStream_o *)0x0;
      pUVar7 = (UnityEngine_Component_c *)Photon_Pun_PhotonStream__ReceiveNext(__this_02,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Component_c *)0x0) {
        pPVar5 = TypeInfo_ColossalSteamState;
        if (*(System_Object_array **)((long)(pUVar7->_1).image + 0x40) != TypeInfo_ColossalSteamState[1].fields.readData)
        goto label_0430534b;
        auVar13 = il2cpp_runtime_helper_02305440(pUVar7);
        pCVar1 = (pIVar11->_1).methods;
        if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
          if (*(int *)((long)&(pCVar1->fields).PreviousHumanWeapon + 4) != *auVar13._0_8_) {
            Characters_WallColossalShifter__ApplySteamState(pCVar1,*auVar13._0_8_,auVar13._8_8_);
          }
          goto label_043052cf;
        }
      }
      goto label_04305346;
    }
label_043052cf:
    pIVar6 = Photon_Pun_PhotonStream__PeekNext(__this_02,(MethodInfo *)0x0);
    if ((pIVar6 == (Il2CppObject *)0x0) || (pIVar6->klass != g_data_057b9b88)) {
      return;
    }
    pPVar5 = (Photon_Pun_PhotonStream_o *)0x0;
    pUVar7 = (UnityEngine_Component_c *)Photon_Pun_PhotonStream__ReceiveNext(__this_02,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Component_c *)0x0) goto label_04305346;
    pPVar5 = TypeInfo_ColossalStunState;
    if (*(System_Object_array **)((long)(pUVar7->_1).image + 0x40) == TypeInfo_ColossalStunState[1].fields.readData) {
      auVar13 = il2cpp_runtime_helper_02305440(pUVar7);
      pCVar1 = (pIVar11->_1).methods;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        if ((pCVar1->fields)._steamDamageTimeLeft == *auVar13._0_8_) {
          return;
        }
        Characters_WallColossalShifter__ApplyStunState(pCVar1,(int32_t)*auVar13._0_8_,auVar13._8_8_);
        return;
      }
      goto label_04305346;
    }
  }
label_0430534b:
  iVar9 = (int)pPVar5;
  il2cpp_runtime_helper_022b2fd0();
  __this_03 = pUVar7;
  iVar10 = iVar9;
  if (g_data_057adf5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    __this_03 = (UnityEngine_Component_c *)&TypeInfo_ShifterSounds;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf5b = '\x01';
  }
  *(int *)&pUVar7[1]._2.field_0x6c = iVar9;
  if (iVar9 == 2) {
    lVar8 = *(long *)&pUVar7[1]._2.token;
    if ((lVar8 != 0) &&
       (pUVar12 = *(UnityEngine_Component_c **)(lVar8 + 0x100), pUVar12 != (UnityEngine_Component_c *)0x0)) {
      iVar10 = 0;
      __this_03 = pUVar12;
      bVar4 = UnityEngine_ParticleSystem__get_isPlaying
                        ((UnityEngine_ParticleSystem_o *)pUVar12,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        iVar10 = 0;
        UnityEngine_ParticleSystem__Stop_4e72b10((UnityEngine_ParticleSystem_o *)pUVar12,(MethodInfo *)0x0);
        __this_03 = pUVar12;
      }
      lVar8 = *(long *)&pUVar7[1]._2.token;
      if ((lVar8 != 0) &&
         (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar8 + 0x108),
         pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
        bVar4 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          UnityEngine_ParticleSystem__Play_4e728d0(pUVar2,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = (UnityEngine_Component_c *)0x0;
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)pUVar7,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),0.0,1.0,(MethodInfo *)0x0);
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)pUVar7,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28),1.0,0.0,(MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)pUVar7,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28),(MethodInfo *)0x0);
        lVar8 = *(long *)&pUVar7[1]._2.token;
        if (lVar8 != 0) {
          __this_03 = *(UnityEngine_Component_c **)(lVar8 + 0xa8);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar10 = 0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_04305827:
          lVar8._0_4_ = pUVar7[1]._2.token;
          lVar8._4_2_ = pUVar7[1]._2.method_count;
          lVar8._6_2_ = pUVar7[1]._2.property_count;
          if (lVar8 == 0) goto label_043056bb;
label_04305837:
          __this_03 = *(UnityEngine_Component_c **)(lVar8 + 0x130);
          iVar10 = *(int *)(TypeInfo_Object + 0xe4);
joined_r0x04305848:
          if (iVar10 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar10 = 0;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return;
          }
          lVar8 = *(long *)&pUVar7[1]._2.token;
          if ((lVar8 != 0) &&
             (__this_03 = *(UnityEngine_Component_c **)(lVar8 + 0x130),
             __this_03 != (UnityEngine_Component_c *)0x0)) {
            iVar10 = 1;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_03,1,(MethodInfo *)0x0);
            lVar8 = *(long *)&pUVar7[1]._2.token;
            if (lVar8 != 0) {
              __this_03 = *(UnityEngine_Component_c **)(lVar8 + 0x138);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar10 = 0;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar4 == '\0') {
                return;
              }
              lVar8 = *(long *)&pUVar7[1]._2.token;
              if ((lVar8 != 0) &&
                 (__this_01 = *(UnityEngine_Component_o **)(lVar8 + 0x138),
                 __this_01 != (UnityEngine_Component_o *)0x0)) {
                if (g_data_057adf69 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
                  g_data_057adf69 = '\x01';
                }
                __this_01[2].klass = pUVar7;
                il2cpp_runtime_helper_022b4080(__this_01 + 2,pUVar7);
                pIVar6 = UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_BoxCollider_GetComponent_BoxCollider);
                __this_01[3].fields.m_CachedPtr = (intptr_t)pIVar6;
                __this_03 = (UnityEngine_Component_c *)&__this_01[3].fields;
                il2cpp_runtime_helper_022b4080();
                iVar10 = (int)pIVar6;
                lVar8 = *(long *)&pUVar7[1]._2.token;
                if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x138), lVar8 != 0)) {
                  if (g_data_057adf6a == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                    g_data_057adf6a = '\x01';
                  }
                  *(undefined1 *)(lVar8 + 0x38) = 1;
                  return;
                }
              }
            }
          }
        }
        else {
          lVar8 = *(long *)&pUVar7[1]._2.token;
          if (lVar8 != 0) {
            pCVar3 = *(Characters_BaseHitbox_o **)(lVar8 + 0xa8);
            __this_03 = (UnityEngine_Component_c *)0x0;
            if (pCVar3 != (Characters_BaseHitbox_o *)0x0) {
              Characters_BaseHitbox__Activate(pCVar3,0.0,0.0,(MethodInfo *)0x0);
              goto label_04305827;
            }
          }
        }
      }
    }
  }
  else if (iVar9 == 1) {
    lVar8 = *(long *)&pUVar7[1]._2.token;
    if ((lVar8 != 0) &&
       (pUVar12 = *(UnityEngine_Component_c **)(lVar8 + 0x100), pUVar12 != (UnityEngine_Component_c *)0x0)) {
      iVar10 = 0;
      __this_03 = pUVar12;
      bVar4 = UnityEngine_ParticleSystem__get_isPlaying
                        ((UnityEngine_ParticleSystem_o *)pUVar12,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        iVar10 = 0;
        UnityEngine_ParticleSystem__Play_4e728d0((UnityEngine_ParticleSystem_o *)pUVar12,(MethodInfo *)0x0);
        __this_03 = pUVar12;
      }
      lVar8 = *(long *)&pUVar7[1]._2.token;
      if ((lVar8 != 0) &&
         (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar8 + 0x108),
         pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
        bVar4 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          UnityEngine_ParticleSystem__Stop_4e72b10(pUVar2,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = (UnityEngine_Component_c *)0x0;
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)pUVar7,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),0.6,0.0,(MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)pUVar7,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),(MethodInfo *)0x0);
        lVar8 = *(long *)&pUVar7[1]._2.token;
        if (lVar8 != 0) {
          __this_03 = *(UnityEngine_Component_c **)(lVar8 + 0xa8);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar10 = 0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_043056ab:
          lVar8._0_4_ = pUVar7[1]._2.token;
          lVar8._4_2_ = pUVar7[1]._2.method_count;
          lVar8._6_2_ = pUVar7[1]._2.property_count;
          if (lVar8 != 0) goto label_04305837;
label_043056bb:
          __this_03 = (UnityEngine_Component_c *)0x0;
          iVar10 = *(int *)(TypeInfo_Object + 0xe4);
          goto joined_r0x04305848;
        }
        lVar8 = *(long *)&pUVar7[1]._2.token;
        if (lVar8 != 0) {
          pCVar3 = *(Characters_BaseHitbox_o **)(lVar8 + 0xa8);
          __this_03 = (UnityEngine_Component_c *)0x0;
          if (pCVar3 != (Characters_BaseHitbox_o *)0x0) {
            Characters_BaseHitbox__Deactivate(pCVar3,(MethodInfo *)0x0);
            goto label_043056ab;
          }
        }
      }
    }
  }
  else {
    if (iVar9 != 0) {
      return;
    }
    lVar8 = *(long *)&pUVar7[1]._2.token;
    if ((lVar8 != 0) &&
       (pUVar12 = *(UnityEngine_Component_c **)(lVar8 + 0x100), pUVar12 != (UnityEngine_Component_c *)0x0)) {
      iVar10 = 0;
      __this_03 = pUVar12;
      bVar4 = UnityEngine_ParticleSystem__get_isPlaying
                        ((UnityEngine_ParticleSystem_o *)pUVar12,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        iVar10 = 0;
        UnityEngine_ParticleSystem__Stop_4e72b10((UnityEngine_ParticleSystem_o *)pUVar12,(MethodInfo *)0x0);
        __this_03 = pUVar12;
      }
      lVar8 = *(long *)&pUVar7[1]._2.token;
      if ((lVar8 != 0) &&
         (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar8 + 0x108),
         pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
        bVar4 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          UnityEngine_ParticleSystem__Stop_4e72b10(pUVar2,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = (UnityEngine_Component_c *)0x0;
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)pUVar7,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),0.0,1.0,(MethodInfo *)0x0);
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)pUVar7,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28),0.0,1.0,(MethodInfo *)0x0);
        lVar8 = *(long *)&pUVar7[1]._2.token;
        if (lVar8 != 0) {
          __this_03 = *(UnityEngine_Component_c **)(lVar8 + 0xa8);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar10 = 0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_043054ea:
          lVar8 = *(long *)&pUVar7[1]._2.token;
          if (lVar8 == 0) {
            __this_03 = (UnityEngine_Component_c *)0x0;
            iVar10 = *(int *)(TypeInfo_Object + 0xe4);
          }
          else {
            __this_03 = *(UnityEngine_Component_c **)(lVar8 + 0x130);
            iVar10 = *(int *)(TypeInfo_Object + 0xe4);
          }
          if (iVar10 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar10 = 0;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return;
          }
          lVar8 = *(long *)&pUVar7[1]._2.token;
          if ((lVar8 != 0) &&
             (__this_03 = *(UnityEngine_Component_c **)(lVar8 + 0x130),
             __this_03 != (UnityEngine_Component_c *)0x0)) {
            iVar10 = 0;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_03,0,(MethodInfo *)0x0);
            lVar8 = *(long *)&pUVar7[1]._2.token;
            if (lVar8 != 0) {
              __this_00 = *(Characters_WallColossalSteamWarningZone_o **)(lVar8 + 0x138);
              if (__this_00 == (Characters_WallColossalSteamWarningZone_o *)0x0) {
                return;
              }
              Characters_WallColossalSteamWarningZone__SetActive(__this_00,0,method_00);
              return;
            }
          }
        }
        else {
          lVar8 = *(long *)&pUVar7[1]._2.token;
          if (lVar8 != 0) {
            pCVar3 = *(Characters_BaseHitbox_o **)(lVar8 + 0xa8);
            __this_03 = (UnityEngine_Component_c *)0x0;
            if (pCVar3 != (Characters_BaseHitbox_o *)0x0) {
              Characters_BaseHitbox__Deactivate(pCVar3,(MethodInfo *)0x0);
              goto label_043054ea;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar9 = *(int *)&__this_03[1].vtable._2_GetHashCode.method;
  *(int *)&__this_03[1].vtable._2_GetHashCode.method = iVar10;
  pUVar7 = __this_03;
  if (iVar10 == 1) {
    lVar8 = *(long *)&__this_03[1]._2.field_count;
    if (lVar8 == 0) goto label_04305a53;
    Characters_BaseCharacter__PlayAnimation
              ((Characters_BaseCharacter_o *)__this_03,*(System_String_o **)(lVar8 + 0x48),0.0,
               (MethodInfo *)0x0);
  }
  else if ((iVar10 != 0) || (1 < iVar9 - 1U)) {
    return;
  }
  lVar8 = *(long *)&__this_03[1]._2.field_count;
  if (lVar8 != 0) {
    Characters_BaseCharacter__SetAnimationSpeed
              ((Characters_BaseCharacter_o *)__this_03,*(System_String_o **)(lVar8 + 0x48),1.0,
               (MethodInfo *)0x0);
    return;
  }
label_04305a53:
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)pUVar7,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_WallColossalMovementSync__ReceiveCustomStream (Characters_WallColossalMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x4305220

void Characters_WallColossalMovementSync__ReceiveCustomStream
               (Characters_WallColossalMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  Characters_BaseHitbox_o *pCVar3;
  Characters_WallColossalSteamWarningZone_o *__this_00;
  UnityEngine_Component_o *__this_01;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Component_c *pUVar6;
  long lVar7;
  MethodInfo *method_00;
  int iVar8;
  int iVar9;
  Photon_Pun_PhotonStream_o *pPVar10;
  UnityEngine_Component_c *__this_02;
  UnityEngine_Component_c *pUVar11;
  undefined1 auVar12 [16];
  
  pPVar10 = stream;
  if (g_data_057adf4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColossalSteamState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColossalStunState);
    g_data_057adf4f = '\x01';
  }
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) {
label_04305346:
    pUVar6 = (UnityEngine_Component_c *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar5 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
    if ((pIVar5 != (Il2CppObject *)0x0) && (pIVar5->klass == g_data_057b9b88)) {
      pPVar10 = (Photon_Pun_PhotonStream_o *)0x0;
      pUVar6 = (UnityEngine_Component_c *)Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Component_c *)0x0) {
        pPVar10 = TypeInfo_ColossalSteamState;
        if (*(System_Object_array **)((long)(pUVar6->_1).image + 0x40) != TypeInfo_ColossalSteamState[1].fields.readData)
        goto label_0430534b;
        auVar12 = il2cpp_runtime_helper_02305440(pUVar6);
        pCVar1 = (__this->fields)._wallColossal;
        if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
          if (*(int *)((long)&(pCVar1->fields).PreviousHumanWeapon + 4) != *auVar12._0_8_) {
            Characters_WallColossalShifter__ApplySteamState(pCVar1,*auVar12._0_8_,auVar12._8_8_);
          }
          goto label_043052cf;
        }
      }
      goto label_04305346;
    }
label_043052cf:
    pIVar5 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
    if ((pIVar5 == (Il2CppObject *)0x0) || (pIVar5->klass != g_data_057b9b88)) {
      return;
    }
    pPVar10 = (Photon_Pun_PhotonStream_o *)0x0;
    pUVar6 = (UnityEngine_Component_c *)Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Component_c *)0x0) goto label_04305346;
    pPVar10 = TypeInfo_ColossalStunState;
    if (*(System_Object_array **)((long)(pUVar6->_1).image + 0x40) == TypeInfo_ColossalStunState[1].fields.readData) {
      auVar12 = il2cpp_runtime_helper_02305440(pUVar6);
      pCVar1 = (__this->fields)._wallColossal;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        if ((pCVar1->fields)._steamDamageTimeLeft == *auVar12._0_8_) {
          return;
        }
        Characters_WallColossalShifter__ApplyStunState(pCVar1,(int32_t)*auVar12._0_8_,auVar12._8_8_);
        return;
      }
      goto label_04305346;
    }
  }
label_0430534b:
  iVar8 = (int)pPVar10;
  il2cpp_runtime_helper_022b2fd0();
  __this_02 = pUVar6;
  iVar9 = iVar8;
  if (g_data_057adf5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    __this_02 = (UnityEngine_Component_c *)&TypeInfo_ShifterSounds;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf5b = '\x01';
  }
  *(int *)&pUVar6[1]._2.field_0x6c = iVar8;
  if (iVar8 == 2) {
    lVar7 = *(long *)&pUVar6[1]._2.token;
    if ((lVar7 != 0) &&
       (pUVar11 = *(UnityEngine_Component_c **)(lVar7 + 0x100), pUVar11 != (UnityEngine_Component_c *)0x0)) {
      iVar9 = 0;
      __this_02 = pUVar11;
      bVar4 = UnityEngine_ParticleSystem__get_isPlaying
                        ((UnityEngine_ParticleSystem_o *)pUVar11,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        iVar9 = 0;
        UnityEngine_ParticleSystem__Stop_4e72b10((UnityEngine_ParticleSystem_o *)pUVar11,(MethodInfo *)0x0);
        __this_02 = pUVar11;
      }
      lVar7 = *(long *)&pUVar6[1]._2.token;
      if ((lVar7 != 0) &&
         (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar7 + 0x108),
         pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
        bVar4 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          UnityEngine_ParticleSystem__Play_4e728d0(pUVar2,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = (UnityEngine_Component_c *)0x0;
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)pUVar6,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),0.0,1.0,(MethodInfo *)0x0);
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)pUVar6,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28),1.0,0.0,(MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)pUVar6,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28),(MethodInfo *)0x0);
        lVar7 = *(long *)&pUVar6[1]._2.token;
        if (lVar7 != 0) {
          __this_02 = *(UnityEngine_Component_c **)(lVar7 + 0xa8);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar9 = 0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_04305827:
          lVar7._0_4_ = pUVar6[1]._2.token;
          lVar7._4_2_ = pUVar6[1]._2.method_count;
          lVar7._6_2_ = pUVar6[1]._2.property_count;
          if (lVar7 == 0) goto label_043056bb;
label_04305837:
          __this_02 = *(UnityEngine_Component_c **)(lVar7 + 0x130);
          iVar9 = *(int *)(TypeInfo_Object + 0xe4);
joined_r0x04305848:
          if (iVar9 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar9 = 0;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return;
          }
          lVar7 = *(long *)&pUVar6[1]._2.token;
          if ((lVar7 != 0) &&
             (__this_02 = *(UnityEngine_Component_c **)(lVar7 + 0x130),
             __this_02 != (UnityEngine_Component_c *)0x0)) {
            iVar9 = 1;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_02,1,(MethodInfo *)0x0);
            lVar7 = *(long *)&pUVar6[1]._2.token;
            if (lVar7 != 0) {
              __this_02 = *(UnityEngine_Component_c **)(lVar7 + 0x138);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar9 = 0;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar4 == '\0') {
                return;
              }
              lVar7 = *(long *)&pUVar6[1]._2.token;
              if ((lVar7 != 0) &&
                 (__this_01 = *(UnityEngine_Component_o **)(lVar7 + 0x138),
                 __this_01 != (UnityEngine_Component_o *)0x0)) {
                if (g_data_057adf69 == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
                  g_data_057adf69 = '\x01';
                }
                __this_01[2].klass = pUVar6;
                il2cpp_runtime_helper_022b4080(__this_01 + 2,pUVar6);
                pIVar5 = UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_BoxCollider_GetComponent_BoxCollider);
                __this_01[3].fields.m_CachedPtr = (intptr_t)pIVar5;
                __this_02 = (UnityEngine_Component_c *)&__this_01[3].fields;
                il2cpp_runtime_helper_022b4080();
                iVar9 = (int)pIVar5;
                lVar7 = *(long *)&pUVar6[1]._2.token;
                if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x138), lVar7 != 0)) {
                  if (g_data_057adf6a == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                    g_data_057adf6a = '\x01';
                  }
                  *(undefined1 *)(lVar7 + 0x38) = 1;
                  return;
                }
              }
            }
          }
        }
        else {
          lVar7 = *(long *)&pUVar6[1]._2.token;
          if (lVar7 != 0) {
            pCVar3 = *(Characters_BaseHitbox_o **)(lVar7 + 0xa8);
            __this_02 = (UnityEngine_Component_c *)0x0;
            if (pCVar3 != (Characters_BaseHitbox_o *)0x0) {
              Characters_BaseHitbox__Activate(pCVar3,0.0,0.0,(MethodInfo *)0x0);
              goto label_04305827;
            }
          }
        }
      }
    }
  }
  else if (iVar8 == 1) {
    lVar7 = *(long *)&pUVar6[1]._2.token;
    if ((lVar7 != 0) &&
       (pUVar11 = *(UnityEngine_Component_c **)(lVar7 + 0x100), pUVar11 != (UnityEngine_Component_c *)0x0)) {
      iVar9 = 0;
      __this_02 = pUVar11;
      bVar4 = UnityEngine_ParticleSystem__get_isPlaying
                        ((UnityEngine_ParticleSystem_o *)pUVar11,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        iVar9 = 0;
        UnityEngine_ParticleSystem__Play_4e728d0((UnityEngine_ParticleSystem_o *)pUVar11,(MethodInfo *)0x0);
        __this_02 = pUVar11;
      }
      lVar7 = *(long *)&pUVar6[1]._2.token;
      if ((lVar7 != 0) &&
         (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar7 + 0x108),
         pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
        bVar4 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          UnityEngine_ParticleSystem__Stop_4e72b10(pUVar2,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = (UnityEngine_Component_c *)0x0;
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)pUVar6,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),0.6,0.0,(MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)pUVar6,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),(MethodInfo *)0x0);
        lVar7 = *(long *)&pUVar6[1]._2.token;
        if (lVar7 != 0) {
          __this_02 = *(UnityEngine_Component_c **)(lVar7 + 0xa8);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar9 = 0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_043056ab:
          lVar7._0_4_ = pUVar6[1]._2.token;
          lVar7._4_2_ = pUVar6[1]._2.method_count;
          lVar7._6_2_ = pUVar6[1]._2.property_count;
          if (lVar7 != 0) goto label_04305837;
label_043056bb:
          __this_02 = (UnityEngine_Component_c *)0x0;
          iVar9 = *(int *)(TypeInfo_Object + 0xe4);
          goto joined_r0x04305848;
        }
        lVar7 = *(long *)&pUVar6[1]._2.token;
        if (lVar7 != 0) {
          pCVar3 = *(Characters_BaseHitbox_o **)(lVar7 + 0xa8);
          __this_02 = (UnityEngine_Component_c *)0x0;
          if (pCVar3 != (Characters_BaseHitbox_o *)0x0) {
            Characters_BaseHitbox__Deactivate(pCVar3,(MethodInfo *)0x0);
            goto label_043056ab;
          }
        }
      }
    }
  }
  else {
    if (iVar8 != 0) {
      return;
    }
    lVar7 = *(long *)&pUVar6[1]._2.token;
    if ((lVar7 != 0) &&
       (pUVar11 = *(UnityEngine_Component_c **)(lVar7 + 0x100), pUVar11 != (UnityEngine_Component_c *)0x0)) {
      iVar9 = 0;
      __this_02 = pUVar11;
      bVar4 = UnityEngine_ParticleSystem__get_isPlaying
                        ((UnityEngine_ParticleSystem_o *)pUVar11,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        iVar9 = 0;
        UnityEngine_ParticleSystem__Stop_4e72b10((UnityEngine_ParticleSystem_o *)pUVar11,(MethodInfo *)0x0);
        __this_02 = pUVar11;
      }
      lVar7 = *(long *)&pUVar6[1]._2.token;
      if ((lVar7 != 0) &&
         (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar7 + 0x108),
         pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
        bVar4 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          UnityEngine_ParticleSystem__Stop_4e72b10(pUVar2,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = (UnityEngine_Component_c *)0x0;
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)pUVar6,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20),0.0,1.0,(MethodInfo *)0x0);
        Characters_BaseCharacter__FadeSound
                  ((Characters_BaseCharacter_o *)pUVar6,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28),0.0,1.0,(MethodInfo *)0x0);
        lVar7 = *(long *)&pUVar6[1]._2.token;
        if (lVar7 != 0) {
          __this_02 = *(UnityEngine_Component_c **)(lVar7 + 0xa8);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar9 = 0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_043054ea:
          lVar7 = *(long *)&pUVar6[1]._2.token;
          if (lVar7 == 0) {
            __this_02 = (UnityEngine_Component_c *)0x0;
            iVar9 = *(int *)(TypeInfo_Object + 0xe4);
          }
          else {
            __this_02 = *(UnityEngine_Component_c **)(lVar7 + 0x130);
            iVar9 = *(int *)(TypeInfo_Object + 0xe4);
          }
          if (iVar9 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar9 = 0;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return;
          }
          lVar7 = *(long *)&pUVar6[1]._2.token;
          if ((lVar7 != 0) &&
             (__this_02 = *(UnityEngine_Component_c **)(lVar7 + 0x130),
             __this_02 != (UnityEngine_Component_c *)0x0)) {
            iVar9 = 0;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_02,0,(MethodInfo *)0x0);
            lVar7 = *(long *)&pUVar6[1]._2.token;
            if (lVar7 != 0) {
              __this_00 = *(Characters_WallColossalSteamWarningZone_o **)(lVar7 + 0x138);
              if (__this_00 == (Characters_WallColossalSteamWarningZone_o *)0x0) {
                return;
              }
              Characters_WallColossalSteamWarningZone__SetActive(__this_00,0,method_00);
              return;
            }
          }
        }
        else {
          lVar7 = *(long *)&pUVar6[1]._2.token;
          if (lVar7 != 0) {
            pCVar3 = *(Characters_BaseHitbox_o **)(lVar7 + 0xa8);
            __this_02 = (UnityEngine_Component_c *)0x0;
            if (pCVar3 != (Characters_BaseHitbox_o *)0x0) {
              Characters_BaseHitbox__Deactivate(pCVar3,(MethodInfo *)0x0);
              goto label_043054ea;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar8 = *(int *)&__this_02[1].vtable._2_GetHashCode.method;
  *(int *)&__this_02[1].vtable._2_GetHashCode.method = iVar9;
  pUVar6 = __this_02;
  if (iVar9 == 1) {
    lVar7 = *(long *)&__this_02[1]._2.field_count;
    if (lVar7 == 0) goto label_04305a53;
    Characters_BaseCharacter__PlayAnimation
              ((Characters_BaseCharacter_o *)__this_02,*(System_String_o **)(lVar7 + 0x48),0.0,
               (MethodInfo *)0x0);
  }
  else if ((iVar9 != 0) || (1 < iVar8 - 1U)) {
    return;
  }
  lVar7 = *(long *)&__this_02[1]._2.field_count;
  if (lVar7 != 0) {
    Characters_BaseCharacter__SetAnimationSpeed
              ((Characters_BaseCharacter_o *)__this_02,*(System_String_o **)(lVar7 + 0x48),1.0,
               (MethodInfo *)0x0);
    return;
  }
label_04305a53:
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)pUVar6,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalMovementSync$$.ctor
// il2cpp: void Characters_WallColossalMovementSync___ctor (Characters_WallColossalMovementSync_o* __this, const MethodInfo* method);
// 0x4305a60

void Characters_WallColossalMovementSync___ctor
               (Characters_WallColossalMovementSync_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


