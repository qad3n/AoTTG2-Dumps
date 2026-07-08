// Type: Controllers.BasicTitanPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/BasicTitanPlayerController.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Controllers/BasicTitanPlayerController.cs  [CHANGED since prior version]
// --------------------------------

// Controllers.BasicTitanPlayerController$$Awake
// il2cpp: void Controllers_BasicTitanPlayerController__Awake (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f85230

/* WARNING: Type propagation algorithm not settling */

void Controllers_BasicTitanPlayerController__Awake
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o **ppCVar1;
  long lVar2;
  Characters_BaseHitbox_o *pCVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Characters_BasicTitan_o *pCVar4;
  
  if (DAT_05703f6c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"AttackGrabAirL");
    DAT_05703f6c = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,method);
  pCVar4 = (Characters_BasicTitan_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BasicTitan_GetComponent_BasicTitan);
  ppCVar1 = &(__this->fields)._titan;
  (__this->fields)._titan = pCVar4;
  il2cpp_runtime_glue(ppCVar1,pCVar4);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar2 != 0) {
    (__this->fields)._titanInput = *(Settings_TitanInputSettings_o **)(lVar2 + 0x30);
    il2cpp_runtime_glue(&(__this->fields)._titanInput);
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
         (pCVar3 = *(Characters_BaseHitbox_o **)(lVar2 + 0x88),
         pCVar3 != (Characters_BaseHitbox_o *)0x0)) {
        Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
        if ((*ppCVar1 != (Characters_BasicTitan_o *)0x0) &&
           ((lVar2 = *(long *)&((*ppCVar1)->fields)._furthestCoreLocalPosition.fields, lVar2 != 0 &&
            (pCVar3 = *(Characters_BaseHitbox_o **)(lVar2 + 0x90),
            pCVar3 != (Characters_BaseHitbox_o *)0x0)))) {
          Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
          if ((*ppCVar1 != (Characters_BasicTitan_o *)0x0) &&
             ((lVar2 = *(long *)&((*ppCVar1)->fields)._furthestCoreLocalPosition.fields, lVar2 != 0
              && (pCVar3 = *(Characters_BaseHitbox_o **)(lVar2 + 0x98),
                 pCVar3 != (Characters_BaseHitbox_o *)0x0)))) {
            Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
            if ((*ppCVar1 != (Characters_BasicTitan_o *)0x0) &&
               ((lVar2 = *(long *)&((*ppCVar1)->fields)._furthestCoreLocalPosition.fields,
                lVar2 != 0 &&
                (pCVar3 = *(Characters_BaseHitbox_o **)(lVar2 + 0xa0),
                pCVar3 != (Characters_BaseHitbox_o *)0x0)))) {
              Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.3,(MethodInfo *)0x0);
              if ((*ppCVar1 != (Characters_BasicTitan_o *)0x0) &&
                 ((lVar2 = *(long *)&((*ppCVar1)->fields)._furthestCoreLocalPosition.fields,
                  lVar2 != 0 &&
                  (pCVar3 = *(Characters_BaseHitbox_o **)(lVar2 + 0x80),
                  pCVar3 != (Characters_BaseHitbox_o *)0x0)))) {
                Characters_BaseHitbox__ScaleSphereCollider(pCVar3,1.2,(MethodInfo *)0x0);
                if ((*ppCVar1 != (Characters_BasicTitan_o *)0x0) &&
                   (__this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                ((*ppCVar1)->fields).TargetEnemy,
                   __this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
                  System_Collections_Generic_Dictionary<object__float>__set_Item
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasicTitanPlayerController$$UpdateUI
// il2cpp: void Controllers_BasicTitanPlayerController__UpdateUI (Controllers_BasicTitanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f85480

void Controllers_BasicTitanPlayerController__UpdateUI
               (Controllers_BasicTitanPlayerController_o *__this,bool_conflict inMenu,
               MethodInfo *method)

{
  System_String_o *text;
  
  if (DAT_05703f6d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    DAT_05703f6d = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UI_CursorManager__SetCrosshairText(text,(MethodInfo *)0x0);
  UI_CursorManager__SetCrosshairColor(1,(MethodInfo *)0x0);
  return;
}


// Controllers.BasicTitanPlayerController$$UpdateActionInput
// il2cpp: void Controllers_BasicTitanPlayerController__UpdateActionInput (Controllers_BasicTitanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f854f0

/* WARNING: Removing unreachable block (ram,0x03f85fd8) */

void Controllers_BasicTitanPlayerController__UpdateActionInput
               (Controllers_BasicTitanPlayerController_o *__this,bool_conflict inMenu,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Settings_TitanInputSettings_o *pSVar3;
  Il2CppMethodPointer vtable_dispatch_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  System_Collections_ICollection_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  UnityEngine_Transform_o *__this_00;
  char cVar7;
  bool_conflict bVar8;
  undefined8 *puVar9;
  System_Collections_ICollection_o *pSVar10;
  VirtualInvokeData *pVVar11;
  long *plVar12;
  System_String_o *__this_01;
  Settings_KeybindSetting_o *pSVar13;
  System_Single_array *pSVar14;
  MethodInfo *method_00;
  Characters_BasicTitan_o *pCVar15;
  MethodInfo *pMVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar22;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  UnityEngine_Vector3_o UVar27;
  float fStack_48;
  float fStack_44;
  undefined8 uVar23;
  
  if (DAT_05703f6e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&"AttackJump");
    il2cpp_init_method_metadata(&"Attack");
    il2cpp_init_method_metadata(&"AttackRockThrow");
    il2cpp_init_method_metadata();
    DAT_05703f6e = '\x01';
  }
  fVar20 = (__this->fields)._rockCooldownLeft;
  fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._rockCooldownLeft = fVar20 - fVar19;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu & 0xff,method_00);
  if ((char)inMenu != '\0') {
    return;
  }
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar13 = (pSVar3->fields).Walk, pSVar13 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f85fa5;
  pCVar15 = (__this->fields)._titan;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar13,0,(MethodInfo *)0x0);
  if (pCVar15 == (Characters_BasicTitan_o *)0x0) goto LAB_03f85fa5;
  *(char *)&(pCVar15->fields).State = (char)bVar8;
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar13 = (pSVar3->fields).Sit, pSVar13 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f85fa5;
  pCVar15 = (__this->fields)._titan;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar13,0,(MethodInfo *)0x0);
  if (pCVar15 == (Characters_BasicTitan_o *)0x0) goto LAB_03f85fa5;
  *(char *)((long)&(pCVar15->fields).State + 2) = (char)bVar8;
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar13 = (pSVar3->fields).Sprint, pSVar13 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f85fa5;
  pCVar15 = (__this->fields)._titan;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar13,0,(MethodInfo *)0x0);
  if (pCVar15 == (Characters_BasicTitan_o *)0x0) goto LAB_03f85fa5;
  *(char *)((long)&(pCVar15->fields).State + 1) = (char)bVar8;
  fVar20 = (__this->fields)._enemyTimeLeft;
  fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._enemyTimeLeft = fVar20 - fVar19;
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar13 = (pSVar3->fields).CoverNape1, pSVar13 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f85fa5;
  bVar8 = Settings_KeybindSetting__GetKeyUp(pSVar13,0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pCVar15 = (__this->fields)._titan;
    if (pCVar15 == (Characters_BasicTitan_o *)0x0) goto LAB_03f85fa5;
    Characters_BasicTitan__UncoverNape(pCVar15,(MethodInfo *)0x0);
  }
  pCVar15 = (__this->fields)._titan;
  if (pCVar15 == (Characters_BasicTitan_o *)0x0) goto LAB_03f85fa5;
  cVar7 = (*(pCVar15->klass->vtable)._123_CanAction.methodPtr)();
  if (cVar7 != '\0') {
    pSVar3 = (__this->fields)._titanInput;
    if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
       (pSVar13 = (pSVar3->fields).Jump, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        pSVar3 = (__this->fields)._titanInput;
        if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
           (pSVar13 = (pSVar3->fields).CoverNape1, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
          bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            pSVar3 = (__this->fields)._titanInput;
            if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
               (pSVar13 = (pSVar3->fields).Kick, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
              bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,0,(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                pSVar3 = (__this->fields)._titanInput;
                if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                   (pSVar13 = (pSVar3->fields).AttackSwing,
                   pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                  pMVar16 = (MethodInfo *)0x0;
                  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,0,(MethodInfo *)0x0);
                  if ((char)bVar8 != '\0') {
                    if (DAT_05703f6f == '\0') {
                      il2cpp_init_method_metadata(&"AttackSwingL");
                      il2cpp_init_method_metadata(&"AttackSwingR");
                      DAT_05703f6f = '\x01';
                    }
                    pSVar14 = Controllers_BasePlayerController__GetAimAngles
                                        ((Controllers_BasePlayerController_o *)__this,pMVar16);
                    if (pSVar14 != (System_Single_array *)0x0) {
                      if ((int)pSVar14->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pCVar15 = (__this->fields)._titan;
                      if (pCVar15 != (Characters_BasicTitan_o *)0x0) {
                        if (pSVar14->m_Items[0] <= 0.0) {
                          puVar9 = &"AttackSwingR";
                        }
                        else {
                          puVar9 = &"AttackSwingL";
                        }
                        vtable_dispatch_00 = (pCVar15->klass->vtable)._128_Attack.methodPtr;
                        (*vtable_dispatch_00)
                                  (pCVar15,*puVar9,(pCVar15->klass->vtable)._128_Attack.method,
                                   vtable_dispatch_00);
                        return;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar3 = (__this->fields)._titanInput;
                  if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                     (pSVar13 = (pSVar3->fields).AttackGrabAirFar,
                     pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                    pMVar16 = (MethodInfo *)0x0;
                    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,0,(MethodInfo *)0x0);
                    if ((char)bVar8 != '\0') {
                      Controllers_BasicTitanPlayerController__AttackGrabAirFar(__this,pMVar16);
                      return;
                    }
                    pSVar3 = (__this->fields)._titanInput;
                    if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                       (pSVar13 = (pSVar3->fields).AttackGrabAir,
                       pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                      pMVar16 = (MethodInfo *)0x0;
                      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,0,(MethodInfo *)0x0);
                      if ((char)bVar8 != '\0') {
                        Controllers_BasicTitanPlayerController__AttackGrabAir(__this,pMVar16);
                        return;
                      }
                      pSVar3 = (__this->fields)._titanInput;
                      if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                         (pSVar13 = (pSVar3->fields).AttackGrabBody,
                         pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                        pMVar16 = (MethodInfo *)0x0;
                        bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,0,(MethodInfo *)0x0);
                        if ((char)bVar8 != '\0') {
                          Controllers_BasicTitanPlayerController__AttackGrabBody(__this,pMVar16);
                          return;
                        }
                        pSVar3 = (__this->fields)._titanInput;
                        if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                           (pSVar13 = (pSVar3->fields).AttackGrabCore,
                           pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                          pMVar16 = (MethodInfo *)0x0;
                          bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,0,(MethodInfo *)0x0);
                          if ((char)bVar8 != '\0') {
                            Controllers_BasicTitanPlayerController__AttackGrabCore(__this,pMVar16);
                            return;
                          }
                          pSVar3 = (__this->fields)._titanInput;
                          if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                             (pSVar13 = (pSVar3->fields).AttackGrabGround,
                             pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                            pMVar16 = (MethodInfo *)0x0;
                            bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar13,0,(MethodInfo *)0x0)
                            ;
                            if ((char)bVar8 != '\0') {
                              Controllers_BasicTitanPlayerController__AttackGrabGround
                                        (__this,pMVar16);
                              return;
                            }
                            pSVar3 = (__this->fields)._titanInput;
                            if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                               (pSVar13 = (pSVar3->fields).AttackGrabHead,
                               pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                              pMVar16 = (MethodInfo *)0x0;
                              bVar8 = Settings_KeybindSetting__GetKeyDown
                                                (pSVar13,0,(MethodInfo *)0x0);
                              if ((char)bVar8 != '\0') {
                                Controllers_BasicTitanPlayerController__AttackGrabHead
                                          (__this,pMVar16);
                                return;
                              }
                              pSVar3 = (__this->fields)._titanInput;
                              if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                                 (pSVar13 = (pSVar3->fields).AttackGrabHigh,
                                 pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                pMVar16 = (MethodInfo *)0x0;
                                bVar8 = Settings_KeybindSetting__GetKeyDown
                                                  (pSVar13,0,(MethodInfo *)0x0);
                                if ((char)bVar8 != '\0') {
                                  Controllers_BasicTitanPlayerController__AttackGrabHigh
                                            (__this,pMVar16);
                                  return;
                                }
                                pSVar3 = (__this->fields)._titanInput;
                                if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                                   (pSVar13 = (pSVar3->fields).AttackBrushChest,
                                   pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                  pMVar16 = (MethodInfo *)0x0;
                                  bVar8 = Settings_KeybindSetting__GetKeyDown
                                                    (pSVar13,0,(MethodInfo *)0x0);
                                  if ((char)bVar8 != '\0') {
                                    Controllers_BasicTitanPlayerController__AttackBrushChest
                                              (__this,pMVar16);
                                    return;
                                  }
                                  pSVar3 = (__this->fields)._titanInput;
                                  if ((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                                     (pSVar13 = (pSVar3->fields).AttackRockThrow,
                                     pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                                    bVar8 = Settings_KeybindSetting__GetKeyDown
                                                      (pSVar13,0,(MethodInfo *)0x0);
                                    if ((char)bVar8 == '\0') {
                                      pSVar3 = (__this->fields)._titanInput;
                                      if (((pSVar3 != (Settings_TitanInputSettings_o *)0x0) &&
                                          (pSVar4 = (pSVar3->fields).Settings,
                                          pSVar4 != (
                                                  System_Collections_Specialized_OrderedDictionary_o
                                                  *)0x0)) &&
                                         (pSVar10 = 
                                                  System_Collections_Specialized_OrderedDictionary__get_Keys
                                                            (pSVar4,(MethodInfo *)0x0),
                                         pSVar10 != (System_Collections_ICollection_o *)0x0)) {
                                        pSVar5 = pSVar10->klass;
                                        uVar2._0_1_ = (pSVar5->_2).rank;
                                        uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
                                        if ((ulong)uVar2 != 0) {
                                          pIVar6 = (pSVar5->_1).interfaceOffsets;
                                          lVar17 = 0;
                                          do {
                                            if (*(long *)((long)&pIVar6->interfaceType + lVar17) ==
                                                TypeInfo_IEnumerable) {
                                              pVVar11 = pSVar5->vtable +
                                                        *(int *)((long)&pIVar6->offset + lVar17);
                                              goto LAB_03f85af8;
                                            }
                                            lVar17 = lVar17 + 0x10;
                                          } while ((ulong)uVar2 << 4 != lVar17);
                                        }
                                        pVVar11 = (VirtualInvokeData *)
                                                  il2cpp_runtime_glue(pSVar10,TypeInfo_IEnumerable,0);
LAB_03f85af8:
                                        plVar12 = (long *)(*pVVar11->methodPtr)
                                                                    (pSVar10,pVVar11->method);
                                        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          il2cpp_raise_exception();
                                        }
                                        do {
                                          lVar17 = *plVar12;
                                          if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
                                            lVar18 = 0;
                                            do {
                                              if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) ==
                                                  TypeInfo_IEnumerator) {
                                                puVar9 = (undefined8 *)
                                                         ((long)*(int *)(*(long *)(lVar17 + 0xb0) +
                                                                         8 + lVar18) * 0x10 + lVar17
                                                         + 0x138);
                                                goto LAB_03f85b7a;
                                              }
                                              lVar18 = lVar18 + 0x10;
                                            } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 !=
                                                     lVar18);
                                          }
                                          puVar9 = (undefined8 *)
                                                   il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator,0);
LAB_03f85b7a:
                                          cVar7 = (*(code *)*puVar9)(plVar12,puVar9[1]);
                                          if (cVar7 == '\0') {
                                            plVar12 = (long *)il2cpp_runtime_glue();
                                            if (plVar12 == (long *)0x0) {
                                              return;
                                            }
                                            lVar17 = *plVar12;
                                            if ((ulong)*(ushort *)(lVar17 + 0x12e) == 0)
                                            goto LAB_03f85d07;
                                            lVar18 = 0;
                                            goto LAB_03f85cf8;
                                          }
                                          lVar17 = *plVar12;
                                          if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
                                            lVar18 = 0;
                                            do {
                                              if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) ==
                                                  TypeInfo_IEnumerator) {
                                                puVar9 = (undefined8 *)
                                                         ((long)(*(int *)(*(long *)(lVar17 + 0xb0) +
                                                                          8 + lVar18) + 1) * 0x10 +
                                                          lVar17 + 0x138);
                                                goto LAB_03f85be4;
                                              }
                                              lVar18 = lVar18 + 0x10;
                                            } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 !=
                                                     lVar18);
                                          }
                                          puVar9 = (undefined8 *)
                                                   il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator,1);
LAB_03f85be4:
                                          __this_01 = (System_String_o *)
                                                      (*(code *)*puVar9)(plVar12,puVar9[1]);
                                          if (__this_01 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            il2cpp_raise_exception();
                                          }
                                          if (__this_01->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
                                            il2cpp_unwind_resume(__this_01);
                                          }
                                          bVar8 = System_String__StartsWith
                                                            (__this_01,"Attack",
                                                             (MethodInfo *)0x0);
                                          if ((char)bVar8 != '\0') {
                                            pSVar3 = (__this->fields)._titanInput;
                                            if (pSVar3 == (Settings_TitanInputSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                              il2cpp_raise_exception();
                                            }
                                            pSVar4 = (pSVar3->fields).Settings;
                                            if (pSVar4 == (
                                                  System_Collections_Specialized_OrderedDictionary_o
                                                  *)0x0) {
                    /* WARNING: Subroutine does not return */
                                              il2cpp_raise_exception();
                                            }
                                            pSVar13 = (Settings_KeybindSetting_o *)
                                                                                                            
                                                  System_Collections_Specialized_OrderedDictionary__get_Item
                                                            (pSVar4,(Il2CppObject *)__this_01,
                                                             (MethodInfo *)0x0);
                                            if (pSVar13 == (Settings_KeybindSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                              il2cpp_raise_exception();
                                            }
                                            bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
                                            if (((pSVar13->klass->_2).naturalAligment < bVar1) ||
                                               ((pSVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1]
                                                != TypeInfo_KeybindSetting)) {
                    /* WARNING: Subroutine does not return */
                                              il2cpp_unwind_resume(pSVar13);
                                            }
                                            bVar8 = Settings_KeybindSetting__GetKeyDown
                                                              (pSVar13,0,(MethodInfo *)0x0);
                                            if ((char)bVar8 != '\0') {
                                              pCVar15 = (__this->fields)._titan;
                                              if (pCVar15 == (Characters_BasicTitan_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                il2cpp_raise_exception();
                                              }
                                              (*(pCVar15->klass->vtable)._128_Attack.methodPtr)
                                                        (pCVar15,__this_01,
                                                         (pCVar15->klass->vtable)._128_Attack.method
                                                        );
                                            }
                                          }
                                        } while( true );
                                      }
                                    }
                                    else {
                                      if (0.0 < (__this->fields)._rockCooldownLeft) {
                                        return;
                                      }
                                      pCVar15 = (__this->fields)._titan;
                                      if (pCVar15 != (Characters_BasicTitan_o *)0x0) {
                                        if (*(char *)((long)&(pCVar15->fields).Animation + 4) ==
                                            '\0') {
                                          return;
                                        }
                                        (*(pCVar15->klass->vtable)._128_Attack.methodPtr)
                                                  (pCVar15,"AttackRockThrow",
                                                   (pCVar15->klass->vtable)._128_Attack.method);
                                        (__this->fields)._rockCooldownLeft =
                                             (__this->fields).RockCooldown;
                                        return;
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
              else {
                pCVar15 = (__this->fields)._titan;
                if (pCVar15 != (Characters_BasicTitan_o *)0x0) {
                  puVar9 = &"AttackKick";
                  goto LAB_03f85713;
                }
              }
            }
          }
          else {
            pCVar15 = (__this->fields)._titan;
            if (pCVar15 != (Characters_BasicTitan_o *)0x0) {
              Characters_BasicTitan__CoverNape(pCVar15,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      else {
        pCVar15 = (__this->fields)._titan;
        if (pCVar15 != (Characters_BasicTitan_o *)0x0) {
          (pCVar15->fields).ConfusedTime = 200.0;
          puVar9 = &"AttackJump";
LAB_03f85713:
          vtable_dispatch_00 = (pCVar15->klass->vtable)._128_Attack.methodPtr;
          (*vtable_dispatch_00)
                    (pCVar15,*puVar9,(pCVar15->klass->vtable)._128_Attack.method,
                     vtable_dispatch_00);
          return;
        }
      }
    }
    goto LAB_03f85fa5;
  }
  pCVar15 = (__this->fields)._titan;
  if (pCVar15 == (Characters_BasicTitan_o *)0x0) goto LAB_03f85fa5;
  if (*(int *)&(pCVar15->fields).OutlineComponent != 4) {
    return;
  }
  pSVar3 = (__this->fields)._titanInput;
  if ((pSVar3 == (Settings_TitanInputSettings_o *)0x0) ||
     (pSVar13 = (pSVar3->fields).Jump, pSVar13 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f85fa5;
  bVar8 = Settings_KeybindSetting__GetKeyUp(pSVar13,0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pCVar15 = (__this->fields)._titan;
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  if (pCVar15 == (Characters_BasicTitan_o *)0x0) goto LAB_03f85fa5;
  fVar20 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  *(undefined8 *)&(pCVar15->fields)._wallClimbForward.fields.z =
       *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  (pCVar15->fields)._turnStartRotation.fields.y = fVar20;
  pCVar15 = (__this->fields)._titan;
  if (pCVar15 == (Characters_BasicTitan_o *)0x0) goto LAB_03f85fa5;
  (pCVar15->fields).ConfusedTime = 120.0;
  if (*(char *)((long)&(pCVar15->fields).Detection + 4) == '\0') goto LAB_03f85f8d;
  lVar17 = *(long *)&(pCVar15->fields).Dead;
  if ((lVar17 == 0) ||
     (__this_00 = *(UnityEngine_Transform_o **)(lVar17 + 0x10),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f85fa5;
  uVar23 = *(undefined8 *)&(pCVar15->fields)._wallClimbForward.fields.z;
  fVar20 = (pCVar15->fields)._turnStartRotation.fields.y;
  UVar27 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
  fStack_48 = (float)uVar23;
  fStack_44 = (float)((ulong)uVar23 >> 0x20);
  *(ulong *)&(pCVar15->fields)._wallClimbForward.fields.z =
       CONCAT44(UVar27.fields.y * 0.5 + fStack_44,UVar27.fields.x * 0.5 + fStack_48);
  (pCVar15->fields)._turnStartRotation.fields.y = UVar27.fields.z * 0.5 + fVar20;
  pCVar15 = (__this->fields)._titan;
  if (pCVar15 == (Characters_BasicTitan_o *)0x0) goto LAB_03f85fa5;
  uVar23 = *(undefined8 *)&(pCVar15->fields)._wallClimbForward.fields.z;
  fVar19 = (float)uVar23;
  fVar26 = (float)((ulong)uVar23 >> 0x20);
  fVar20 = (pCVar15->fields)._turnStartRotation.fields.y;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar22 = 0;
  uVar21 = 0;
  fVar20 = fVar20 * fVar20 + fVar26 * fVar26 + fVar19 * fVar19;
  if (fVar20 < 0.0) {
    fVar20 = sqrtf(fVar20);
    uVar21 = extraout_XMM0_Dc;
    uVar22 = extraout_XMM0_Dd;
    if (1e-05 < fVar20) goto LAB_03f85f26;
LAB_03f85f46:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar20 = SQRT(fVar20);
    if (fVar20 <= 1e-05) goto LAB_03f85f46;
LAB_03f85f26:
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulong *)&(pCVar15->fields)._wallClimbForward.fields.z;
    auVar25._4_4_ = fVar20;
    auVar25._0_4_ = fVar20;
    auVar25._8_4_ = uVar21;
    auVar25._12_4_ = uVar22;
    auVar25 = divps(auVar24,auVar25);
    uVar23 = auVar25._0_8_;
    fVar20 = (pCVar15->fields)._turnStartRotation.fields.y / fVar20;
  }
  *(undefined8 *)&(pCVar15->fields)._wallClimbForward.fields.z = uVar23;
  (pCVar15->fields)._turnStartRotation.fields.y = fVar20;
  pCVar15 = (__this->fields)._titan;
  if (pCVar15 != (Characters_BasicTitan_o *)0x0) {
LAB_03f85f8d:
    Characters_BasicTitan__JumpImmediate(pCVar15,(MethodInfo *)0x0);
    return;
  }
LAB_03f85fa5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar18 = lVar18 + 0x10, (ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18) {
LAB_03f85cf8:
    if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IDisposable) {
      puVar9 = (undefined8 *)
               (lVar17 + (long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18) * 0x10 + 0x138);
      goto LAB_03f85d25;
    }
  }
LAB_03f85d07:
  puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IDisposable,0);
LAB_03f85d25:
  (*(code *)*puVar9)(plVar12);
  return;
}


// Controllers.BasicTitanPlayerController$$AttackSwing
// il2cpp: void Controllers_BasicTitanPlayerController__AttackSwing (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f86160

void Controllers_BasicTitanPlayerController__AttackSwing
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05703f6f == '\0') {
    il2cpp_init_method_metadata(&"AttackSwingL");
    il2cpp_init_method_metadata(&"AttackSwingR");
    DAT_05703f6f = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackSwingR";
      }
      else {
        puVar3 = &"AttackSwingL";
      }
      vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasicTitanPlayerController$$AttackGrabAirFar
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabAirFar (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f861f0

void Controllers_BasicTitanPlayerController__AttackGrabAirFar
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05703f70 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrabAirFarL");
    il2cpp_init_method_metadata(&"AttackGrabAirFarR");
    DAT_05703f70 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabAirFarL";
      }
      else {
        puVar3 = &"AttackGrabAirFarR";
      }
      vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasicTitanPlayerController$$AttackGrabAir
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabAir (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f86280

void Controllers_BasicTitanPlayerController__AttackGrabAir
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05703f71 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrabAirL");
    il2cpp_init_method_metadata(&"AttackGrabAirR");
    DAT_05703f71 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabAirL";
      }
      else {
        puVar3 = &"AttackGrabAirR";
      }
      vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasicTitanPlayerController$$AttackGrabBody
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabBody (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f86310

void Controllers_BasicTitanPlayerController__AttackGrabBody
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Characters_BasicTitan_o *pCVar4;
  
  if (DAT_05703f72 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrabStomachL");
    il2cpp_init_method_metadata(&"AttackGrabStomachR");
    il2cpp_init_method_metadata(&"AttackGrabBackR");
    il2cpp_init_method_metadata(&"AttackGrabBackL");
    DAT_05703f72 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabBackR";
        pCVar4 = (__this->fields)._titan;
        if (pCVar4 == (Characters_BasicTitan_o *)0x0) goto LAB_03f863f8;
        goto LAB_03f86399;
      }
      puVar3 = &"AttackGrabBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabStomachL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabBackL";
      }
      pCVar4 = (__this->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabStomachR";
      pCVar4 = (__this->fields)._titan;
    }
    if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
LAB_03f86399:
      vtable_dispatch = (pCVar4->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar4,*puVar3,(pCVar4->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
LAB_03f863f8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasicTitanPlayerController$$AttackGrabCore
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabCore (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f86410

void Controllers_BasicTitanPlayerController__AttackGrabCore
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05703f73 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrabCoreR");
    il2cpp_init_method_metadata(&"AttackGrabCoreL");
    DAT_05703f73 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabCoreL";
      }
      else {
        puVar3 = &"AttackGrabCoreR";
      }
      vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasicTitanPlayerController$$AttackGrabGround
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabGround (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f864a0

void Controllers_BasicTitanPlayerController__AttackGrabGround
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Characters_BasicTitan_o *pCVar4;
  
  if (DAT_05703f74 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrabGroundBackL");
    il2cpp_init_method_metadata(&"AttackGrabGroundFrontL");
    il2cpp_init_method_metadata(&"AttackGrabGroundFrontR");
    il2cpp_init_method_metadata(&"AttackGrabGroundBackR");
    DAT_05703f74 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabGroundBackR";
        pCVar4 = (__this->fields)._titan;
        if (pCVar4 == (Characters_BasicTitan_o *)0x0) goto LAB_03f86588;
        goto LAB_03f86529;
      }
      puVar3 = &"AttackGrabGroundBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabGroundBackL";
      }
      pCVar4 = (__this->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabGroundFrontR";
      pCVar4 = (__this->fields)._titan;
    }
    if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
LAB_03f86529:
      vtable_dispatch = (pCVar4->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar4,*puVar3,(pCVar4->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
LAB_03f86588:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasicTitanPlayerController$$AttackGrabHead
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabHead (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f865a0

void Controllers_BasicTitanPlayerController__AttackGrabHead
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  Characters_BasicTitan_o *pCVar4;
  
  if (DAT_05703f75 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrabHeadBackL");
    il2cpp_init_method_metadata(&"AttackGrabHeadBackR");
    il2cpp_init_method_metadata(&"AttackGrabHeadFrontL");
    il2cpp_init_method_metadata(&"AttackGrabHeadFrontR");
    DAT_05703f75 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar1 = pSVar2->m_Items[0];
    if ((fVar1 <= 0.0) || (90.0 < fVar1)) {
      if (90.0 < fVar1) {
        puVar3 = &"AttackGrabHeadBackR";
        pCVar4 = (__this->fields)._titan;
        if (pCVar4 == (Characters_BasicTitan_o *)0x0) goto LAB_03f86688;
        goto LAB_03f86629;
      }
      puVar3 = &"AttackGrabHeadBackL";
      if (-90.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadFrontL";
      }
      if (0.0 <= fVar1) {
        puVar3 = &"AttackGrabHeadBackL";
      }
      pCVar4 = (__this->fields)._titan;
    }
    else {
      puVar3 = &"AttackGrabHeadFrontR";
      pCVar4 = (__this->fields)._titan;
    }
    if (pCVar4 != (Characters_BasicTitan_o *)0x0) {
LAB_03f86629:
      vtable_dispatch = (pCVar4->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar4,*puVar3,(pCVar4->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
LAB_03f86688:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasicTitanPlayerController$$AttackGrabHigh
// il2cpp: void Controllers_BasicTitanPlayerController__AttackGrabHigh (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f866a0

void Controllers_BasicTitanPlayerController__AttackGrabHigh
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05703f76 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrabHighR");
    il2cpp_init_method_metadata(&"AttackGrabHighL");
    DAT_05703f76 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackGrabHighL";
      }
      else {
        puVar3 = &"AttackGrabHighR";
      }
      vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasicTitanPlayerController$$AttackBrushChest
// il2cpp: void Controllers_BasicTitanPlayerController__AttackBrushChest (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f86730

void Controllers_BasicTitanPlayerController__AttackBrushChest
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_Single_array *pSVar2;
  undefined8 *puVar3;
  
  if (DAT_05703f77 == '\0') {
    il2cpp_init_method_metadata(&"AttackBrushChestL");
    il2cpp_init_method_metadata(&"AttackBrushChestR");
    DAT_05703f77 = '\x01';
  }
  pSVar2 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this,method);
  if (pSVar2 != (System_Single_array *)0x0) {
    if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (pSVar2->m_Items[0] <= 0.0) {
        puVar3 = &"AttackBrushChestR";
      }
      else {
        puVar3 = &"AttackBrushChestL";
      }
      vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
      (*vtable_dispatch)
                (pCVar1,*puVar3,(pCVar1->klass->vtable)._128_Attack.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasicTitanPlayerController$$.ctor
// il2cpp: void Controllers_BasicTitanPlayerController___ctor (Controllers_BasicTitanPlayerController_o* __this, const MethodInfo* method);
// 0x3f867c0

void Controllers_BasicTitanPlayerController___ctor
               (Controllers_BasicTitanPlayerController_o *__this,MethodInfo *method)

{
  (__this->fields).RockCooldown = 5.0;
  Controllers_BasePlayerController___ctor
            ((Controllers_ErenShifterPlayerController_o *)__this,method);
  return;
}


