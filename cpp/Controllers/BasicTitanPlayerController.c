// Type: Controllers.BasicTitanPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/BasicTitanPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BasicTitanPlayerController.cs
// --------------------------------

// Controllers.BasicTitanPlayerController$$Awake
// il2cpp: void Controllers_BasicTitanPlayerController__Awake (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x42917d0

void Controllers_BasicTitanPlayerController__Awake
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o **ppCVar1;
  long lVar2;
  Characters_BaseHitbox_o *pCVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  System_String_o *text;
  Characters_BasicTitan_o *pCVar4;
  
  if (g_data_057adcda == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirL");
    g_data_057adcda = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,method);
  pCVar4 = (Characters_BasicTitan_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_BasicTitan_GetComponent_BasicTitan);
  ppCVar1 = &(__this->fields)._titan;
  (__this->fields)._titan = pCVar4;
  il2cpp_runtime_helper_022b4080(ppCVar1);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar2 != 0) {
    (__this->fields)._titanInput = *(Settings_TitanInputSettings_o **)(lVar2 + 0x30);
    il2cpp_runtime_helper_022b4080(&(__this->fields)._titanInput);
    pCVar4 = (__this->fields)._titan;
    if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
      (pCVar4->fields).BaseTitanAnimations = (Characters_BaseTitanAnimations_o *)0x40a0000041400000;
      (pCVar4->fields).TitanGroundMaskLayers = (UnityEngine_LayerMask_Fields)0x41900000;
      (pCVar4->fields).AttackSpeedMultiplier = 1.0;
      (pCVar4->fields).LateUpdateHeadRotation.fields.value.fields.y = 2.6;
      (pCVar4->fields).SprintStaminaConsumption = 1.2;
      (pCVar4->fields).ConfusedTime = 200.0;
      (pCVar4->fields).PreviousAttackSpeedMultiplier = 8.0;
      *(undefined8 *)&(pCVar4->fields).IsSit = 0x3dcccccd3dcccccd;
      (pCVar4->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = 450.0;
      lVar2 = *(long *)&(pCVar4->fields)._furthestCoreLocalPosition.fields;
      if ((lVar2 != 0) &&
         (pCVar3 = *(Characters_BaseHitbox_o **)(lVar2 + 0x88), pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
        Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
        if ((*ppCVar1 != (Characters_BasicTitan_o *)0x0) &&
           ((lVar2 = *(long *)&((*ppCVar1)->fields)._furthestCoreLocalPosition.fields, lVar2 != 0 &&
            (pCVar3 = *(Characters_BaseHitbox_o **)(lVar2 + 0x90), pCVar3 != (Characters_BaseHitbox_o *)0x0)))
           ) {
          Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
          if ((*ppCVar1 != (Characters_BasicTitan_o *)0x0) &&
             ((lVar2 = *(long *)&((*ppCVar1)->fields)._furthestCoreLocalPosition.fields, lVar2 != 0 &&
              (pCVar3 = *(Characters_BaseHitbox_o **)(lVar2 + 0x98), pCVar3 != (Characters_BaseHitbox_o *)0x0)
              ))) {
            Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
            if ((*ppCVar1 != (Characters_BasicTitan_o *)0x0) &&
               ((lVar2 = *(long *)&((*ppCVar1)->fields)._furthestCoreLocalPosition.fields, lVar2 != 0 &&
                (pCVar3 = *(Characters_BaseHitbox_o **)(lVar2 + 0xa0),
                pCVar3 != (Characters_BaseHitbox_o *)0x0)))) {
              Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
              if ((*ppCVar1 != (Characters_BasicTitan_o *)0x0) &&
                 ((lVar2 = *(long *)&((*ppCVar1)->fields)._furthestCoreLocalPosition.fields, lVar2 != 0 &&
                  (pCVar3 = *(Characters_BaseHitbox_o **)(lVar2 + 0x80),
                  pCVar3 != (Characters_BaseHitbox_o *)0x0)))) {
                Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.2,(MethodInfo *)0x0);
                if ((*ppCVar1 != (Characters_BasicTitan_o *)0x0) &&
                   (__this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                ((*ppCVar1)->fields).TargetEnemy,
                   __this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
                  System_Collections_Generic_Dictionary_object__float___set_Item
                            (__this_00,"AttackGrabAirL",0.7,MethodInfo_Void_set_Item);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcdb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057adcdb = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_CursorManager__SetCrosshairText(text,(MethodInfo *)0x0);
  UI_CursorManager__SetCrosshairColor(1,(MethodInfo *)0x0);
  return;
}


// Controllers.BasicTitanPlayerController$$UpdateUI
// il2cpp: void Controllers_BasicTitanPlayerController__UpdateUI (Controllers_BasicTitanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x4291a20

void Controllers_BasicTitanPlayerController__UpdateUI
               (Controllers_BasicTitanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  System_String_o *text;
  
  if (g_data_057adcdb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057adcdb = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_CursorManager__SetCrosshairText(text,(MethodInfo *)0x0);
  UI_CursorManager__SetCrosshairColor(1,(MethodInfo *)0x0);
  return;
}


// Controllers.BasicTitanPlayerController$$UpdateActionInput
// il2cpp: void Controllers_BasicTitanPlayerController__UpdateActionInput (Controllers_BasicTitanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x4291a90

void Controllers_BasicTitanPlayerController__UpdateActionInput
               (Controllers_BasicTitanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Settings_TitanInputSettings_o *pSVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  System_Collections_ICollection_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  UnityEngine_Transform_o *__this_00;
  Characters_AnimationHandler_o *__this_01;
  System_String_o *name;
  char cVar7;
  bool_conflict bVar8;
  undefined8 *puVar9;
  System_Collections_ICollection_o *pSVar10;
  VirtualInvokeData *pVVar11;
  Settings_KeybindSetting_o *pSVar12;
  ulong *puVar13;
  long *plVar14;
  System_Single_array *pSVar15;
  MethodInfo *method_00;
  Characters_BasicTitan_o *pCVar16;
  MethodInfo *pMVar17;
  long lVar18;
  long lVar19;
  Controllers_BasicTitanPlayerController_o *pCVar20;
  Controllers_BasicTitanPlayerController_o *pCVar21;
  Characters_BasicTitan_o *pCVar22;
  long *unaff_R12;
  long *unaff_R14;
  int iVar23;
  float fVar24;
  float fVar25;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar27;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [12];
  UnityEngine_Vector3_o UVar33;
  ulong uStack_50;
  float fStack_48;
  float fStack_44;
  undefined8 uVar28;
  
  if (g_data_057adcdc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&"AttackJump");
    il2cpp_runtime_helper_023445d0(&"Attack");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    il2cpp_runtime_helper_023445d0();
    g_data_057adcdc = '\x01';
  }
  fVar25 = (__this->fields)._rockCooldownLeft;
  uStack_50 = (ulong)(uint)fVar25;
  fVar24 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._rockCooldownLeft = fVar25 - fVar24;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu & 0xff,method_00);
  if ((char)inMenu != '\0') {
    return;
  }
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar12 = (pSVar3->fields).Walk, pSVar12 == (Settings_KeybindSetting_o *)0x0)) {
label_04292545:
    do {
      do {
        do {
          do {
            do {
              do {
                do {
                  il2cpp_runtime_helper_022b2c90();
label_0429254a:
                  il2cpp_runtime_helper_022b2c90();
label_0429254f:
                  pSVar12 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_04292557:
                  il2cpp_runtime_helper_022b2fd0(pSVar12);
label_0429255f:
                  il2cpp_runtime_helper_022b2c90();
label_04292564:
                  il2cpp_runtime_helper_022b2c90();
label_04292569:
                  il2cpp_runtime_helper_022b2c90();
label_0429256e:
                  il2cpp_runtime_helper_022b2c90();
label_04292573:
                  il2cpp_runtime_helper_022b2c90();
                  do {
                    auVar32 = il2cpp_runtime_helper_022fefe0(uStack_50);
                    iVar23 = 0;
                    if (auVar32._8_4_ != 1) {
                      plVar14 = (long *)il2cpp_runtime_helper_023051f0(unaff_R14,TypeInfo_IDisposable);
                      if (plVar14 == (long *)0x0) goto label_042926d6;
                      lVar18 = *plVar14;
                      if ((ulong)*(ushort *)(lVar18 + 0x12e) == 0) goto label_042926af;
                      lVar19 = 0;
                      goto label_042926a0;
                    }
                    puVar13 = (ulong *)__cxa_begin_catch(auVar32._0_8_);
                    uStack_50 = *puVar13;
                    __cxa_end_catch();
label_0429225d:
                    unaff_R12 = &TypeInfo_IDisposable;
                    plVar14 = (long *)il2cpp_runtime_helper_023051f0();
                    if (plVar14 != (long *)0x0) {
                      lVar18 = *plVar14;
                      if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
                        lVar19 = 0;
                        do {
                          if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
                            puVar9 = (undefined8 *)
                                     (lVar18 + (long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 +
                                     0x138);
                            goto label_042922c5;
                          }
                          lVar19 = lVar19 + 0x10;
                        } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
                      }
                      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_042922c5:
                      (*(code *)*puVar9)(plVar14);
                    }
                  } while (uStack_50 != 0);
                  if (iVar23 != 0) {
                    return;
                  }
label_042922e3:
                  pCVar16 = (__this->fields)._titan;
                } while (pCVar16 == (Characters_BasicTitan_o *)0x0);
                if (*(int *)&(pCVar16->fields).OutlineComponent != 4) {
                  return;
                }
                pSVar3 = (__this->fields)._titanInput;
              } while ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
                      (pSVar12 = (pSVar3->fields).Jump, pSVar12 == (Settings_KeybindSetting_o *)0x0));
              bVar8 = Settings_KeybindSetting__GetKeyUp(pSVar12,0,(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                return;
              }
              pCVar16 = (__this->fields)._titan;
              if (g_data_057a6844 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a6844 = '\x01';
              }
            } while (pCVar16 == (Characters_BasicTitan_o *)0x0);
            unaff_R14 = &TypeInfo_Vector3;
            fVar25 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
            *(undefined8 *)&(pCVar16->fields)._wallClimbForward.fields.z =
                 *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            (pCVar16->fields)._turnStartRotation.fields.y = fVar25;
            pCVar16 = (__this->fields)._titan;
          } while (pCVar16 == (Characters_BasicTitan_o *)0x0);
          (pCVar16->fields).ConfusedTime = 120.0;
          if (*(char *)((long)&(pCVar16->fields).Detection + 4) == '\0') goto label_0429252d;
          lVar18 = *(long *)&(pCVar16->fields).Dead;
        } while ((lVar18 == 0) ||
                (__this_00 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
                __this_00 == (UnityEngine_Transform_o *)0x0));
        uVar28 = *(undefined8 *)&(pCVar16->fields)._wallClimbForward.fields.z;
        fVar25 = (pCVar16->fields)._turnStartRotation.fields.y;
        uStack_50 = (ulong)(uint)fVar25;
        UVar33 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
        fStack_48 = (float)uVar28;
        fStack_44 = (float)((ulong)uVar28 >> 0x20);
        *(ulong *)&(pCVar16->fields)._wallClimbForward.fields.z =
             CONCAT44(UVar33.fields.y * 0.5 + fStack_44,UVar33.fields.x * 0.5 + fStack_48);
        (pCVar16->fields)._turnStartRotation.fields.y = UVar33.fields.z * 0.5 + fVar25;
        pCVar16 = (__this->fields)._titan;
      } while (pCVar16 == (Characters_BasicTitan_o *)0x0);
      uVar28 = *(undefined8 *)&(pCVar16->fields)._wallClimbForward.fields.z;
      fVar24 = (float)uVar28;
      fVar31 = (float)((ulong)uVar28 >> 0x20);
      fVar25 = (pCVar16->fields)._turnStartRotation.fields.y;
      if (g_data_057a6845 == '\0') {
        uStack_50 = (ulong)(uint)fVar25;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        uStack_50 = (ulong)(uint)fVar25;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar27 = 0;
      uVar26 = 0;
      fVar25 = fVar25 * fVar25 + fVar31 * fVar31 + fVar24 * fVar24;
      if (fVar25 < 0.0) {
        fVar25 = sqrtf(fVar25);
        uVar26 = extraout_XMM0_Dc;
        uVar27 = extraout_XMM0_Dd;
        if (fVar25 <= 1e-05) goto label_042924e6;
label_042924c6:
        auVar29._8_8_ = 0;
        auVar29._0_8_ = *(ulong *)&(pCVar16->fields)._wallClimbForward.fields.z;
        auVar30._4_4_ = fVar25;
        auVar30._0_4_ = fVar25;
        auVar30._8_4_ = uVar26;
        auVar30._12_4_ = uVar27;
        auVar30 = divps(auVar29,auVar30);
        uVar28 = auVar30._0_8_;
        fVar25 = (pCVar16->fields)._turnStartRotation.fields.y / fVar25;
      }
      else {
        fVar25 = SQRT(fVar25);
        if (1e-05 < fVar25) goto label_042924c6;
label_042924e6:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar25 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      *(undefined8 *)&(pCVar16->fields)._wallClimbForward.fields.z = uVar28;
      (pCVar16->fields)._turnStartRotation.fields.y = fVar25;
      pCVar16 = (__this->fields)._titan;
    } while (pCVar16 == (Characters_BasicTitan_o *)0x0);
label_0429252d:
    Characters_BasicTitan__JumpImmediate(pCVar16,(MethodInfo *)0x0);
    return;
  }
  pCVar16 = (__this->fields)._titan;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar12,0,(MethodInfo *)0x0);
  if (pCVar16 == (Characters_BasicTitan_o *)0x0) goto label_04292545;
  *(char *)&(pCVar16->fields).State = (char)bVar8;
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar12 = (pSVar3->fields).Sit, pSVar12 == (Settings_KeybindSetting_o *)0x0)) goto label_04292545;
  pCVar16 = (__this->fields)._titan;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar12,0,(MethodInfo *)0x0);
  if (pCVar16 == (Characters_BasicTitan_o *)0x0) goto label_04292545;
  *(char *)((long)&(pCVar16->fields).State + 2) = (char)bVar8;
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar12 = (pSVar3->fields).Sprint, pSVar12 == (Settings_KeybindSetting_o *)0x0)) goto label_04292545;
  pCVar16 = (__this->fields)._titan;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar12,0,(MethodInfo *)0x0);
  if (pCVar16 == (Characters_BasicTitan_o *)0x0) goto label_04292545;
  *(char *)((long)&(pCVar16->fields).State + 1) = (char)bVar8;
  fVar25 = (__this->fields)._enemyTimeLeft;
  uStack_50 = (ulong)(uint)fVar25;
  fVar24 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._enemyTimeLeft = fVar25 - fVar24;
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar12 = (pSVar3->fields).CoverNape1, pSVar12 == (Settings_KeybindSetting_o *)0x0)) goto label_04292545;
  bVar8 = Settings_KeybindSetting__GetKeyUp(pSVar12,0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pCVar16 = (__this->fields)._titan;
    if (pCVar16 == (Characters_BasicTitan_o *)0x0) goto label_04292545;
    Characters_BasicTitan__UncoverNape(pCVar16,(MethodInfo *)0x0);
  }
  pCVar16 = (__this->fields)._titan;
  if (pCVar16 == (Characters_BasicTitan_o *)0x0) goto label_04292545;
  cVar7 = (*(pCVar16->klass->vtable)._123_CanAction.methodPtr)();
  if (cVar7 == '\0') goto label_042922e3;
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar12 = (pSVar3->fields).Jump, pSVar12 == (Settings_KeybindSetting_o *)0x0)) goto label_04292545;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pCVar16 = (__this->fields)._titan;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
      (pCVar16->fields).ConfusedTime = 200.0;
      puVar9 = &"AttackJump";
label_04291cb3:
      UNRECOVERED_JUMPTABLE_00 = (pCVar16->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar16,*puVar9,(pCVar16->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292545;
  }
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar12 = (pSVar3->fields).CoverNape1, pSVar12 == (Settings_KeybindSetting_o *)0x0)) goto label_04292545;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pCVar16 = (__this->fields)._titan;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
      pCVar22 = pCVar16;
      cVar7 = (*(pCVar16->klass->vtable)._123_CanAction.methodPtr)
                        (pCVar16,(pCVar16->klass->vtable)._123_CanAction.method);
      if (cVar7 == '\0') {
        return;
      }
      lVar18 = *(long *)&(pCVar16->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar18 != 0) {
        __this_01 = *(Characters_AnimationHandler_o **)&(pCVar16->fields)._cameraFPS;
        pCVar22 = (Characters_BasicTitan_o *)0x0;
        if (__this_01 != (Characters_AnimationHandler_o *)0x0) {
          name = *(System_String_o **)(lVar18 + 0x228);
          fVar25 = Characters_AnimationHandler__GetTotalTime(__this_01,name,(MethodInfo *)0x0);
          Characters_BaseTitan__StateActionWithTime
                    ((Characters_BaseTitan_o *)pCVar16,0x1a,name,fVar25,0.1,1,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (*(int *)&(pCVar22->fields).OutlineComponent != 0x1a) {
        return;
      }
      (*(pCVar22->klass->vtable)._139_Idle.methodPtr)(0x3e99999a);
      return;
    }
    goto label_04292545;
  }
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar12 = (pSVar3->fields).Kick, pSVar12 == (Settings_KeybindSetting_o *)0x0)) goto label_04292545;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pCVar16 = (__this->fields)._titan;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
      puVar9 = &"AttackKick";
      goto label_04291cb3;
    }
    goto label_04292545;
  }
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar12 = (pSVar3->fields).AttackSwing, pSVar12 == (Settings_KeybindSetting_o *)0x0)) goto label_04292545;
  pMVar17 = (MethodInfo *)0x0;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pSVar3 = (__this->fields)._titanInput;
    if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
       (pSVar12 = (pSVar3->fields).AttackGrabAirFar, pSVar12 != (Settings_KeybindSetting_o *)0x0)) {
      pMVar17 = (MethodInfo *)0x0;
      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        Controllers_BasicTitanPlayerController__AttackGrabAirFar(__this,pMVar17);
        return;
      }
      pSVar3 = (__this->fields)._titanInput;
      if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
         (pSVar12 = (pSVar3->fields).AttackGrabAir, pSVar12 != (Settings_KeybindSetting_o *)0x0)) {
        pMVar17 = (MethodInfo *)0x0;
        bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          Controllers_BasicTitanPlayerController__AttackGrabAir(__this,pMVar17);
          return;
        }
        pSVar3 = (__this->fields)._titanInput;
        if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
           (pSVar12 = (pSVar3->fields).AttackGrabBody, pSVar12 != (Settings_KeybindSetting_o *)0x0)) {
          pMVar17 = (MethodInfo *)0x0;
          bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            Controllers_BasicTitanPlayerController__AttackGrabBody(__this,pMVar17);
            return;
          }
          pSVar3 = (__this->fields)._titanInput;
          if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
             (pSVar12 = (pSVar3->fields).AttackGrabCore, pSVar12 != (Settings_KeybindSetting_o *)0x0)) {
            pMVar17 = (MethodInfo *)0x0;
            bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              Controllers_BasicTitanPlayerController__AttackGrabCore(__this,pMVar17);
              return;
            }
            pSVar3 = (__this->fields)._titanInput;
            if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
               (pSVar12 = (pSVar3->fields).AttackGrabGround, pSVar12 != (Settings_KeybindSetting_o *)0x0)) {
              pMVar17 = (MethodInfo *)0x0;
              bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                Controllers_BasicTitanPlayerController__AttackGrabGround(__this,pMVar17);
                return;
              }
              pSVar3 = (__this->fields)._titanInput;
              if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                 (pSVar12 = (pSVar3->fields).AttackGrabHead, pSVar12 != (Settings_KeybindSetting_o *)0x0)) {
                pMVar17 = (MethodInfo *)0x0;
                bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
                if ((char)bVar8 != '\0') {
                  Controllers_BasicTitanPlayerController__AttackGrabHead(__this,pMVar17);
                  return;
                }
                pSVar3 = (__this->fields)._titanInput;
                if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                   (pSVar12 = (pSVar3->fields).AttackGrabHigh, pSVar12 != (Settings_KeybindSetting_o *)0x0)) {
                  pMVar17 = (MethodInfo *)0x0;
                  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
                  if ((char)bVar8 != '\0') {
                    Controllers_BasicTitanPlayerController__AttackGrabHigh(__this,pMVar17);
                    return;
                  }
                  pSVar3 = (__this->fields)._titanInput;
                  if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                     (pSVar12 = (pSVar3->fields).AttackBrushChest, pSVar12 != (Settings_KeybindSetting_o *)0x0
                     )) {
                    pMVar17 = (MethodInfo *)0x0;
                    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
                    if ((char)bVar8 != '\0') {
                      Controllers_BasicTitanPlayerController__AttackBrushChest(__this,pMVar17);
                      return;
                    }
                    pSVar3 = (__this->fields)._titanInput;
                    if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                       (pSVar12 = (pSVar3->fields).AttackRockThrow,
                       pSVar12 != (Settings_KeybindSetting_o *)0x0)) {
                      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
                      if ((char)bVar8 != '\0') {
                        if ((__this->fields)._rockCooldownLeft <= 0.0) {
                          pCVar16 = (__this->fields)._titan;
                          if (pCVar16 == (Characters_BasicTitan_o *)0x0) goto label_04292545;
                          if (*(char *)((long)&(pCVar16->fields).Animation + 4) != '\0') {
                            (*(pCVar16->klass->vtable)._128_Attack.methodPtr)
                                      (pCVar16,"AttackRockThrow",(pCVar16->klass->vtable)._128_Attack.method);
                            (__this->fields)._rockCooldownLeft = (__this->fields).RockCooldown;
                          }
                        }
                        return;
                      }
                      pSVar3 = (__this->fields)._titanInput;
                      if (((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                          (pSVar4 = (pSVar3->fields).Settings,
                          pSVar4 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) &&
                         (pSVar10 = System_Collections_Specialized_OrderedDictionary__get_Keys
                                              (pSVar4,(MethodInfo *)0x0),
                         pSVar10 != (System_Collections_ICollection_o *)0x0)) {
                        pSVar5 = pSVar10->klass;
                        uVar2._0_1_ = (pSVar5->_2).rank;
                        uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
                        if ((ulong)uVar2 != 0) {
                          pIVar6 = (pSVar5->_1).interfaceOffsets;
                          lVar18 = 0;
                          do {
                            if (*(long *)((long)&pIVar6->interfaceType + lVar18) == TypeInfo_IEnumerable) {
                              pVVar11 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar18);
                              goto label_04292098;
                            }
                            lVar18 = lVar18 + 0x10;
                          } while ((ulong)uVar2 << 4 != lVar18);
                        }
                        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IEnumerable,0);
label_04292098:
                        unaff_R14 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
                        if (unaff_R14 == (long *)0x0) goto label_04292573;
                        uStack_50 = 0;
                        do {
                          lVar18 = *unaff_R14;
                          if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
                            lVar19 = 0;
                            do {
                              if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IEnumerator) {
                                puVar9 = (undefined8 *)
                                         ((long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 +
                                          lVar18 + 0x138);
                                goto label_0429211a;
                              }
                              lVar19 = lVar19 + 0x10;
                            } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
                          }
                          puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IEnumerator,0);
label_0429211a:
                          cVar7 = (*(code *)*puVar9)(unaff_R14,puVar9[1]);
                          if (cVar7 == '\0') {
                            iVar23 = 0x12;
                            goto label_0429225d;
                          }
                          lVar18 = *unaff_R14;
                          if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
                            lVar19 = 0;
                            do {
                              if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IEnumerator) {
                                puVar9 = (undefined8 *)
                                         ((long)(*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) + 1) * 0x10 +
                                          lVar18 + 0x138);
                                goto label_04292184;
                              }
                              lVar19 = lVar19 + 0x10;
                            } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
                          }
                          puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IEnumerator,1);
label_04292184:
                          unaff_R12 = (long *)(*(code *)*puVar9)(unaff_R14,puVar9[1]);
                          if ((System_String_o *)unaff_R12 == (System_String_o *)0x0) goto label_0429254a;
                          if (((System_String_o *)unaff_R12)->klass != g_data_057b9c00) goto label_0429254f;
                          bVar8 = System_String__StartsWith
                                            ((System_String_o *)unaff_R12,"Attack",(MethodInfo *)0x0);
                          if ((char)bVar8 != '\0') {
                            pSVar3 = (__this->fields)._titanInput;
                            if (pSVar3 == (Settings_TitanInputSettings_o *)0x0) goto label_0429255f;
                            pSVar4 = (pSVar3->fields).Settings;
                            if (pSVar4 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)
                            goto label_04292564;
                            pSVar12 = (Settings_KeybindSetting_o *)
                                      System_Collections_Specialized_OrderedDictionary__get_Item
                                                (pSVar4,(Il2CppObject *)unaff_R12,(MethodInfo *)0x0);
                            if (pSVar12 == (Settings_KeybindSetting_o *)0x0) goto label_04292569;
                            bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
                            if ((pSVar12->klass->_2).naturalAligment < bVar1) goto label_04292557;
                            if ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)
                            goto label_04292557;
                            bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
                            if ((char)bVar8 != '\0') {
                              pCVar16 = (__this->fields)._titan;
                              if (pCVar16 == (Characters_BasicTitan_o *)0x0) goto label_0429256e;
                              (*(pCVar16->klass->vtable)._128_Attack.methodPtr)
                                        (pCVar16,unaff_R12,(pCVar16->klass->vtable)._128_Attack.method);
                            }
                          }
                        } while( true );
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
    goto label_04292545;
  }
  if (g_data_057adcdd == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackSwingL");
    il2cpp_runtime_helper_023445d0(&"AttackSwingR");
    g_data_057adcdd = '\x01';
  }
  pCVar20 = __this;
  pSVar15 = Controllers_BasePlayerController__GetAimAngles
                      ((Controllers_BasePlayerController_o *)__this,pMVar17);
  if (pSVar15 == (System_Single_array *)0x0) {
label_0429277c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar15->max_length != 0) {
    pCVar16 = (__this->fields)._titan;
    pCVar20 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar15->m_Items[0] <= 0.0) {
        puVar9 = &"AttackSwingR";
      }
      else {
        puVar9 = &"AttackSwingL";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar16->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar16,*puVar9,(pCVar16->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_0429277c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adcde == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarR");
    g_data_057adcde = '\x01';
  }
  pCVar21 = pCVar20;
  pSVar15 = Controllers_BasePlayerController__GetAimAngles
                      ((Controllers_BasePlayerController_o *)pCVar20,pMVar17);
  if (pSVar15 == (System_Single_array *)0x0) {
label_0429280c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar15->max_length != 0) {
    pCVar16 = (pCVar20->fields)._titan;
    pCVar21 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar15->m_Items[0] <= 0.0) {
        puVar9 = &"AttackGrabAirFarL";
      }
      else {
        puVar9 = &"AttackGrabAirFarR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar16->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar16,*puVar9,(pCVar16->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_0429280c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adcdf == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirR");
    g_data_057adcdf = '\x01';
  }
  pCVar20 = pCVar21;
  pSVar15 = Controllers_BasePlayerController__GetAimAngles
                      ((Controllers_BasePlayerController_o *)pCVar21,pMVar17);
  if (pSVar15 == (System_Single_array *)0x0) {
label_0429289c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar15->max_length != 0) {
    pCVar16 = (pCVar21->fields)._titan;
    pCVar20 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar15->m_Items[0] <= 0.0) {
        puVar9 = &"AttackGrabAirL";
      }
      else {
        puVar9 = &"AttackGrabAirR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar16->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar16,*puVar9,(pCVar16->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_0429289c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackL");
    g_data_057adce0 = '\x01';
  }
  pCVar21 = pCVar20;
  pSVar15 = Controllers_BasePlayerController__GetAimAngles
                      ((Controllers_BasePlayerController_o *)pCVar20,pMVar17);
  if (pSVar15 == (System_Single_array *)0x0) {
label_04292998:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar15->max_length != 0) {
    fVar25 = pSVar15->m_Items[0];
    if ((fVar25 <= 0.0) || (90.0 < fVar25)) {
      if (90.0 < fVar25) {
        puVar9 = &"AttackGrabBackR";
        pCVar16 = (pCVar20->fields)._titan;
        if (pCVar16 != (Characters_BasicTitan_o *)0x0) goto label_04292939;
        pCVar21 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292998;
      }
      puVar9 = &"AttackGrabBackL";
      if (-90.0 <= fVar25) {
        puVar9 = &"AttackGrabStomachL";
      }
      if (0.0 <= fVar25) {
        puVar9 = &"AttackGrabBackL";
      }
      pCVar16 = (pCVar20->fields)._titan;
    }
    else {
      puVar9 = &"AttackGrabStomachR";
      pCVar16 = (pCVar20->fields)._titan;
    }
    pCVar21 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
label_04292939:
      UNRECOVERED_JUMPTABLE_00 = (pCVar16->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar16,*puVar9,(pCVar16->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292998;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreL");
    g_data_057adce1 = '\x01';
  }
  pCVar20 = pCVar21;
  pSVar15 = Controllers_BasePlayerController__GetAimAngles
                      ((Controllers_BasePlayerController_o *)pCVar21,pMVar17);
  if (pSVar15 == (System_Single_array *)0x0) {
label_04292a2c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar15->max_length != 0) {
    pCVar16 = (pCVar21->fields)._titan;
    pCVar20 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar15->m_Items[0] <= 0.0) {
        puVar9 = &"AttackGrabCoreL";
      }
      else {
        puVar9 = &"AttackGrabCoreR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar16->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar16,*puVar9,(pCVar16->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292a2c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackR");
    g_data_057adce2 = '\x01';
  }
  pCVar21 = pCVar20;
  pSVar15 = Controllers_BasePlayerController__GetAimAngles
                      ((Controllers_BasePlayerController_o *)pCVar20,pMVar17);
  if (pSVar15 == (System_Single_array *)0x0) {
label_04292b28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar15->max_length != 0) {
    fVar25 = pSVar15->m_Items[0];
    if ((fVar25 <= 0.0) || (90.0 < fVar25)) {
      if (90.0 < fVar25) {
        puVar9 = &"AttackGrabGroundBackR";
        pCVar16 = (pCVar20->fields)._titan;
        if (pCVar16 != (Characters_BasicTitan_o *)0x0) goto label_04292ac9;
        pCVar21 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292b28;
      }
      puVar9 = &"AttackGrabGroundBackL";
      if (-90.0 <= fVar25) {
        puVar9 = &"AttackGrabGroundFrontL";
      }
      if (0.0 <= fVar25) {
        puVar9 = &"AttackGrabGroundBackL";
      }
      pCVar16 = (pCVar20->fields)._titan;
    }
    else {
      puVar9 = &"AttackGrabGroundFrontR";
      pCVar16 = (pCVar20->fields)._titan;
    }
    pCVar21 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
label_04292ac9:
      UNRECOVERED_JUMPTABLE_00 = (pCVar16->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar16,*puVar9,(pCVar16->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292b28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    g_data_057adce3 = '\x01';
  }
  pCVar20 = pCVar21;
  pSVar15 = Controllers_BasePlayerController__GetAimAngles
                      ((Controllers_BasePlayerController_o *)pCVar21,pMVar17);
  if (pSVar15 == (System_Single_array *)0x0) {
label_04292c28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar15->max_length != 0) {
    fVar25 = pSVar15->m_Items[0];
    if ((fVar25 <= 0.0) || (90.0 < fVar25)) {
      if (90.0 < fVar25) {
        puVar9 = &"AttackGrabHeadBackR";
        pCVar16 = (pCVar21->fields)._titan;
        if (pCVar16 != (Characters_BasicTitan_o *)0x0) goto label_04292bc9;
        pCVar20 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292c28;
      }
      puVar9 = &"AttackGrabHeadBackL";
      if (-90.0 <= fVar25) {
        puVar9 = &"AttackGrabHeadFrontL";
      }
      if (0.0 <= fVar25) {
        puVar9 = &"AttackGrabHeadBackL";
      }
      pCVar16 = (pCVar21->fields)._titan;
    }
    else {
      puVar9 = &"AttackGrabHeadFrontR";
      pCVar16 = (pCVar21->fields)._titan;
    }
    pCVar20 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
label_04292bc9:
      UNRECOVERED_JUMPTABLE_00 = (pCVar16->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar16,*puVar9,(pCVar16->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292c28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    g_data_057adce4 = '\x01';
  }
  pCVar21 = pCVar20;
  pSVar15 = Controllers_BasePlayerController__GetAimAngles
                      ((Controllers_BasePlayerController_o *)pCVar20,pMVar17);
  if (pSVar15 == (System_Single_array *)0x0) {
label_04292cbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar15->max_length != 0) {
    pCVar16 = (pCVar20->fields)._titan;
    pCVar21 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar15->m_Items[0] <= 0.0) {
        puVar9 = &"AttackGrabHighL";
      }
      else {
        puVar9 = &"AttackGrabHighR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar16->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar16,*puVar9,(pCVar16->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292cbc;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    g_data_057adce5 = '\x01';
  }
  pCVar20 = pCVar21;
  pSVar15 = Controllers_BasePlayerController__GetAimAngles
                      ((Controllers_BasePlayerController_o *)pCVar21,pMVar17);
  if (pSVar15 != (System_Single_array *)0x0) {
    if ((int)pSVar15->max_length == 0) goto label_04292d51;
    pCVar16 = (pCVar21->fields)._titan;
    pCVar20 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar16 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar15->m_Items[0] <= 0.0) {
        puVar9 = &"AttackBrushChestR";
      }
      else {
        puVar9 = &"AttackBrushChestL";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar16->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar16,*puVar9,(pCVar16->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04292d51:
  il2cpp_runtime_helper_022b2ca0();
  (pCVar20->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)pCVar20,pMVar17);
  return;
  while (lVar19 = lVar19 + 0x10, (ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19) {
label_042926a0:
    if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
      puVar9 = (undefined8 *)(lVar18 + (long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
      goto label_042926cd;
    }
  }
label_042926af:
  puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IDisposable,0);
label_042926cd:
  (*(code *)*puVar9)(plVar14,puVar9[1]);
label_042926d6:
  _Unwind_Resume(auVar32._0_8_);
}


// Controllers.BasicTitanPlayerController$$AttackSwing
// il2cpp: void Controllers_BasicTitanPlayerController__AttackSwing (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x4292700

void Controllers_BasicTitanPlayerController__AttackSwing
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer vtableDispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Controllers_BasicTitanPlayerController_o *pCVar4;
  Controllers_BasicTitanPlayerController_o *pCVar5;
  Characters_BasicTitan_o *pCVar6;
  
  if (g_data_057adcdd == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackSwingL");
    il2cpp_runtime_helper_023445d0(&"AttackSwingR");
    g_data_057adcdd = '\x01';
  }
  pCVar4 = __this;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_0429277c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (__this->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackSwingR";
      }
      else {
        puVar3 = &"AttackSwingL";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_0429277c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adcde == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarR");
    g_data_057adcde = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_0429280c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar4->fields)._titan;
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabAirFarL";
      }
      else {
        puVar3 = &"AttackGrabAirFarR";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_0429280c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adcdf == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirR");
    g_data_057adcdf = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_0429289c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar5->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabAirL";
      }
      else {
        puVar3 = &"AttackGrabAirR";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_0429289c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackL");
    g_data_057adce0 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292998:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabBackR";
        pCVar6 = (pCVar4->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292939;
        pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292998;
      }
      puVar3 = &"AttackGrabBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabStomachL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabBackL";
      }
      pCVar6 = (pCVar4->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabStomachR";
      pCVar6 = (pCVar4->fields)._titan;
    }
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292939:
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292998;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreL");
    g_data_057adce1 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292a2c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar5->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabCoreL";
      }
      else {
        puVar3 = &"AttackGrabCoreR";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292a2c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackR");
    g_data_057adce2 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292b28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabGroundBackR";
        pCVar6 = (pCVar4->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292ac9;
        pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292b28;
      }
      puVar3 = &"AttackGrabGroundBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundBackL";
      }
      pCVar6 = (pCVar4->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabGroundFrontR";
      pCVar6 = (pCVar4->fields)._titan;
    }
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292ac9:
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292b28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    g_data_057adce3 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292c28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabHeadBackR";
        pCVar6 = (pCVar5->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292bc9;
        pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292c28;
      }
      puVar3 = &"AttackGrabHeadBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadBackL";
      }
      pCVar6 = (pCVar5->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabHeadFrontR";
      pCVar6 = (pCVar5->fields)._titan;
    }
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292bc9:
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292c28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    g_data_057adce4 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292cbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar4->fields)._titan;
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabHighL";
      }
      else {
        puVar3 = &"AttackGrabHighR";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292cbc;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    g_data_057adce5 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) goto label_04292d51;
    pCVar6 = (pCVar5->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushChestR";
      }
      else {
        puVar3 = &"AttackBrushChestL";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04292d51:
  il2cpp_runtime_helper_022b2ca0();
  (pCVar4->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)pCVar4,method);
  return;
}


// Controllers.BasicTitanPlayerController$$AttackGrabAirFar
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabAirFar (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x4292790

void Controllers_BasicTitanPlayerController__AttackGrabAirFar
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Controllers_BasicTitanPlayerController_o *pCVar4;
  Controllers_BasicTitanPlayerController_o *pCVar5;
  Characters_BasicTitan_o *pCVar6;
  
  if (g_data_057adcde == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirFarR");
    g_data_057adcde = '\x01';
  }
  pCVar4 = __this;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_0429280c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (__this->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabAirFarL";
      }
      else {
        puVar3 = &"AttackGrabAirFarR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_0429280c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adcdf == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirR");
    g_data_057adcdf = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_0429289c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar4->fields)._titan;
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabAirL";
      }
      else {
        puVar3 = &"AttackGrabAirR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_0429289c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackL");
    g_data_057adce0 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292998:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabBackR";
        pCVar6 = (pCVar5->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292939;
        pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292998;
      }
      puVar3 = &"AttackGrabBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabStomachL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabBackL";
      }
      pCVar6 = (pCVar5->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabStomachR";
      pCVar6 = (pCVar5->fields)._titan;
    }
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292939:
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292998;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreL");
    g_data_057adce1 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292a2c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar4->fields)._titan;
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabCoreL";
      }
      else {
        puVar3 = &"AttackGrabCoreR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292a2c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackR");
    g_data_057adce2 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292b28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabGroundBackR";
        pCVar6 = (pCVar5->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292ac9;
        pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292b28;
      }
      puVar3 = &"AttackGrabGroundBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundBackL";
      }
      pCVar6 = (pCVar5->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabGroundFrontR";
      pCVar6 = (pCVar5->fields)._titan;
    }
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292ac9:
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292b28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    g_data_057adce3 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292c28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabHeadBackR";
        pCVar6 = (pCVar4->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292bc9;
        pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292c28;
      }
      puVar3 = &"AttackGrabHeadBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadBackL";
      }
      pCVar6 = (pCVar4->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabHeadFrontR";
      pCVar6 = (pCVar4->fields)._titan;
    }
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292bc9:
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292c28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    g_data_057adce4 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292cbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar5->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabHighL";
      }
      else {
        puVar3 = &"AttackGrabHighR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292cbc;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    g_data_057adce5 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) goto label_04292d51;
    pCVar6 = (pCVar4->fields)._titan;
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushChestR";
      }
      else {
        puVar3 = &"AttackBrushChestL";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04292d51:
  il2cpp_runtime_helper_022b2ca0();
  (pCVar5->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)pCVar5,method);
  return;
}


// Controllers.BasicTitanPlayerController$$AttackGrabAir
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabAir (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x4292820

void Controllers_BasicTitanPlayerController__AttackGrabAir
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer vtableDispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Controllers_BasicTitanPlayerController_o *pCVar4;
  Controllers_BasicTitanPlayerController_o *pCVar5;
  Characters_BasicTitan_o *pCVar6;
  
  if (g_data_057adcdf == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabAirR");
    g_data_057adcdf = '\x01';
  }
  pCVar4 = __this;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_0429289c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (__this->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabAirL";
      }
      else {
        puVar3 = &"AttackGrabAirR";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_0429289c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackL");
    g_data_057adce0 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292998:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabBackR";
        pCVar6 = (pCVar4->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292939;
        pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292998;
      }
      puVar3 = &"AttackGrabBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabStomachL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabBackL";
      }
      pCVar6 = (pCVar4->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabStomachR";
      pCVar6 = (pCVar4->fields)._titan;
    }
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292939:
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292998;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreL");
    g_data_057adce1 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292a2c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar5->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabCoreL";
      }
      else {
        puVar3 = &"AttackGrabCoreR";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292a2c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackR");
    g_data_057adce2 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292b28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabGroundBackR";
        pCVar6 = (pCVar4->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292ac9;
        pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292b28;
      }
      puVar3 = &"AttackGrabGroundBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundBackL";
      }
      pCVar6 = (pCVar4->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabGroundFrontR";
      pCVar6 = (pCVar4->fields)._titan;
    }
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292ac9:
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292b28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    g_data_057adce3 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292c28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabHeadBackR";
        pCVar6 = (pCVar5->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292bc9;
        pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292c28;
      }
      puVar3 = &"AttackGrabHeadBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadBackL";
      }
      pCVar6 = (pCVar5->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabHeadFrontR";
      pCVar6 = (pCVar5->fields)._titan;
    }
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292bc9:
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292c28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    g_data_057adce4 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292cbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar4->fields)._titan;
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabHighL";
      }
      else {
        puVar3 = &"AttackGrabHighR";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292cbc;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    g_data_057adce5 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) goto label_04292d51;
    pCVar6 = (pCVar5->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushChestR";
      }
      else {
        puVar3 = &"AttackBrushChestL";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04292d51:
  il2cpp_runtime_helper_022b2ca0();
  (pCVar4->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)pCVar4,method);
  return;
}


// Controllers.BasicTitanPlayerController$$AttackGrabBody
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabBody (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x42928b0

void Controllers_BasicTitanPlayerController__AttackGrabBody
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Controllers_BasicTitanPlayerController_o *pCVar4;
  Controllers_BasicTitanPlayerController_o *pCVar5;
  Characters_BasicTitan_o *pCVar6;
  
  if (g_data_057adce0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabStomachR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBackL");
    g_data_057adce0 = '\x01';
  }
  pCVar4 = __this;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292998:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabBackR";
        pCVar6 = (__this->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292939;
        pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292998;
      }
      puVar3 = &"AttackGrabBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabStomachL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabBackL";
      }
      pCVar6 = (__this->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabStomachR";
      pCVar6 = (__this->fields)._titan;
    }
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292939:
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292998;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreL");
    g_data_057adce1 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292a2c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar4->fields)._titan;
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabCoreL";
      }
      else {
        puVar3 = &"AttackGrabCoreR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292a2c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackR");
    g_data_057adce2 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292b28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabGroundBackR";
        pCVar6 = (pCVar5->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292ac9;
        pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292b28;
      }
      puVar3 = &"AttackGrabGroundBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundBackL";
      }
      pCVar6 = (pCVar5->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabGroundFrontR";
      pCVar6 = (pCVar5->fields)._titan;
    }
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292ac9:
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292b28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    g_data_057adce3 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292c28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabHeadBackR";
        pCVar6 = (pCVar4->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292bc9;
        pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292c28;
      }
      puVar3 = &"AttackGrabHeadBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadBackL";
      }
      pCVar6 = (pCVar4->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabHeadFrontR";
      pCVar6 = (pCVar4->fields)._titan;
    }
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292bc9:
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292c28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    g_data_057adce4 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292cbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar5->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabHighL";
      }
      else {
        puVar3 = &"AttackGrabHighR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292cbc;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    g_data_057adce5 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) goto label_04292d51;
    pCVar6 = (pCVar4->fields)._titan;
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushChestR";
      }
      else {
        puVar3 = &"AttackBrushChestL";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04292d51:
  il2cpp_runtime_helper_022b2ca0();
  (pCVar5->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)pCVar5,method);
  return;
}


// Controllers.BasicTitanPlayerController$$AttackGrabCore
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabCore (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x42929b0

void Controllers_BasicTitanPlayerController__AttackGrabCore
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer vtableDispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Controllers_BasicTitanPlayerController_o *pCVar4;
  Controllers_BasicTitanPlayerController_o *pCVar5;
  Characters_BasicTitan_o *pCVar6;
  
  if (g_data_057adce1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabCoreL");
    g_data_057adce1 = '\x01';
  }
  pCVar4 = __this;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292a2c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (__this->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabCoreL";
      }
      else {
        puVar3 = &"AttackGrabCoreR";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292a2c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackR");
    g_data_057adce2 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292b28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabGroundBackR";
        pCVar6 = (pCVar4->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292ac9;
        pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292b28;
      }
      puVar3 = &"AttackGrabGroundBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundBackL";
      }
      pCVar6 = (pCVar4->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabGroundFrontR";
      pCVar6 = (pCVar4->fields)._titan;
    }
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292ac9:
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292b28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    g_data_057adce3 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292c28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabHeadBackR";
        pCVar6 = (pCVar5->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292bc9;
        pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292c28;
      }
      puVar3 = &"AttackGrabHeadBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadBackL";
      }
      pCVar6 = (pCVar5->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabHeadFrontR";
      pCVar6 = (pCVar5->fields)._titan;
    }
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292bc9:
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292c28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    g_data_057adce4 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292cbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar4->fields)._titan;
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabHighL";
      }
      else {
        puVar3 = &"AttackGrabHighR";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292cbc;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    g_data_057adce5 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) goto label_04292d51;
    pCVar6 = (pCVar5->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushChestR";
      }
      else {
        puVar3 = &"AttackBrushChestL";
      }
      vtableDispatch = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04292d51:
  il2cpp_runtime_helper_022b2ca0();
  (pCVar4->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)pCVar4,method);
  return;
}


// Controllers.BasicTitanPlayerController$$AttackGrabGround
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabGround (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x4292a40

void Controllers_BasicTitanPlayerController__AttackGrabGround
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Controllers_BasicTitanPlayerController_o *pCVar4;
  Controllers_BasicTitanPlayerController_o *pCVar5;
  Characters_BasicTitan_o *pCVar6;
  
  if (g_data_057adce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundFrontR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabGroundBackR");
    g_data_057adce2 = '\x01';
  }
  pCVar4 = __this;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292b28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabGroundBackR";
        pCVar6 = (__this->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292ac9;
        pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292b28;
      }
      puVar3 = &"AttackGrabGroundBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundBackL";
      }
      pCVar6 = (__this->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabGroundFrontR";
      pCVar6 = (__this->fields)._titan;
    }
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292ac9:
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292b28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    g_data_057adce3 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292c28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabHeadBackR";
        pCVar6 = (pCVar4->fields)._titan;
        if (pCVar6 != (Characters_BasicTitan_o *)0x0) goto label_04292bc9;
        pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292c28;
      }
      puVar3 = &"AttackGrabHeadBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadBackL";
      }
      pCVar6 = (pCVar4->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabHeadFrontR";
      pCVar6 = (pCVar4->fields)._titan;
    }
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
label_04292bc9:
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292c28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    g_data_057adce4 = '\x01';
  }
  pCVar4 = pCVar5;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar5,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292cbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar6 = (pCVar5->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabHighL";
      }
      else {
        puVar3 = &"AttackGrabHighR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292cbc;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    g_data_057adce5 = '\x01';
  }
  pCVar5 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) goto label_04292d51;
    pCVar6 = (pCVar4->fields)._titan;
    pCVar5 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar6 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushChestR";
      }
      else {
        puVar3 = &"AttackBrushChestL";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar6->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar6,*puVar3,(pCVar6->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04292d51:
  il2cpp_runtime_helper_022b2ca0();
  (pCVar5->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)pCVar5,method);
  return;
}


// Controllers.BasicTitanPlayerController$$AttackGrabHead
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabHead (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x4292b40

void Controllers_BasicTitanPlayerController__AttackGrabHead
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer vtableDispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Controllers_BasicTitanPlayerController_o *pCVar4;
  Characters_BasicTitan_o *pCVar5;
  Controllers_BasicTitanPlayerController_o *__this_00;
  
  if (g_data_057adce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadBackR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHeadFrontR");
    g_data_057adce3 = '\x01';
  }
  pCVar4 = __this;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292c28:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabHeadBackR";
        pCVar5 = (__this->fields)._titan;
        if (pCVar5 != (Characters_BasicTitan_o *)0x0) goto label_04292bc9;
        pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
        goto label_04292c28;
      }
      puVar3 = &"AttackGrabHeadBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadBackL";
      }
      pCVar5 = (__this->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabHeadFrontR";
      pCVar5 = (__this->fields)._titan;
    }
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar5 != (Characters_BasicTitan_o *)0x0) {
label_04292bc9:
      vtableDispatch = (pCVar5->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar5,*puVar3,(pCVar5->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292c28;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    g_data_057adce4 = '\x01';
  }
  __this_00 = pCVar4;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar4,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292cbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar5 = (pCVar4->fields)._titan;
    __this_00 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar5 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabHighL";
      }
      else {
        puVar3 = &"AttackGrabHighR";
      }
      vtableDispatch = (pCVar5->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar5,*puVar3,(pCVar5->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_04292cbc;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    g_data_057adce5 = '\x01';
  }
  pCVar4 = __this_00;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this_00,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) goto label_04292d51;
    pCVar5 = (__this_00->fields)._titan;
    pCVar4 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar5 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushChestR";
      }
      else {
        puVar3 = &"AttackBrushChestL";
      }
      vtableDispatch = (pCVar5->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar5,*puVar3,(pCVar5->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04292d51:
  il2cpp_runtime_helper_022b2ca0();
  (pCVar4->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)pCVar4,method);
  return;
}


// Controllers.BasicTitanPlayerController$$AttackGrabHigh
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabHigh (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x4292c40

void Controllers_BasicTitanPlayerController__AttackGrabHigh
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Controllers_BasicTitanPlayerController_o *__this_00;
  Controllers_BasicTitanPlayerController_o *__this_01;
  
  if (g_data_057adce4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighR");
    il2cpp_runtime_helper_023445d0(&"AttackGrabHighL");
    g_data_057adce4 = '\x01';
  }
  __this_00 = __this;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 == (System_Single_array *)0x0) {
label_04292cbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar2->max_length != 0) {
    pCVar1 = (__this->fields)._titan;
    __this_00 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabHighL";
      }
      else {
        puVar3 = &"AttackGrabHighR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_04292cbc;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    g_data_057adce5 = '\x01';
  }
  __this_01 = __this_00;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this_00,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) goto label_04292d51;
    pCVar1 = (__this_00->fields)._titan;
    __this_01 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushChestR";
      }
      else {
        puVar3 = &"AttackBrushChestL";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04292d51:
  il2cpp_runtime_helper_022b2ca0();
  (__this_01->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this_01,method);
  return;
}


// Controllers.BasicTitanPlayerController$$AttackBrushChest
// il2cpp: void Controllers_BasicTitanPlayerController__AttackBrushChest (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x4292cd0

void Controllers_BasicTitanPlayerController__AttackBrushChest
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Controllers_BasicTitanPlayerController_o *__this_00;
  
  if (g_data_057adce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushChestR");
    g_data_057adce5 = '\x01';
  }
  __this_00 = __this;
  pSVar2 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) goto label_04292d51;
    pCVar1 = (__this->fields)._titan;
    __this_00 = (Controllers_BasicTitanPlayerController_o *)0x0;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushChestR";
      }
      else {
        puVar3 = &"AttackBrushChestL";
      }
      vtableDispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04292d51:
  il2cpp_runtime_helper_022b2ca0();
  (__this_00->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this_00,method);
  return;
}


// Controllers.BasicTitanPlayerController$$.ctor
// il2cpp: void Controllers_BasicTitanPlayerController___ctor (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x4292d60

void Controllers_BasicTitanPlayerController___ctor
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  (__this->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this,method);
  return;
}


