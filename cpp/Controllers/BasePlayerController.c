// Type: Controllers.BasePlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/BasePlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BasePlayerController.cs
// --------------------------------

// Controllers.BasePlayerController$$Awake
// il2cpp: void Controllers_BasePlayerController__Awake (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x4289240

void Controllers_BasePlayerController__Awake(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  Settings_ErenShifterInputSettings_o *pSVar4;
  Characters_ErenShifter_o *pCVar5;
  UnityEngine_Transform_o *pUVar6;
  Settings_ErenShifterInputSettings_c *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar7;
  System_Collections_ICollection_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Il2CppMethodPointer vtableDispatch;
  undefined1 auVar10 [16];
  char cVar11;
  bool_conflict bVar12;
  Characters_BaseCharacter_o *pCVar13;
  Il2CppClass *pIVar14;
  System_Collections_ICollection_o *pSVar15;
  VirtualInvokeData *pVVar16;
  Settings_KeybindSetting_o *pSVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  System_Single_array *pSVar20;
  long lVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  uint uVar22;
  Settings_GeneralInputSettings_o *pSVar23;
  UI_InGameMenu_o *pUVar24;
  MethodInfo *__this_01;
  MethodInfo *pMVar25;
  long *plVar26;
  long lVar27;
  Controllers_ErenShifterPlayerController_o *pCVar28;
  Controllers_ErenShifterPlayerController_o *pCVar29;
  Characters_ErenShifter_o *pCVar30;
  Controllers_ErenShifterPlayerController_o **__this_02;
  System_String_o *unaff_R12;
  long *plVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar35;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  UnityEngine_Vector3_o UVar39;
  undefined1 auVar40 [12];
  UnityEngine_Ray_o local_68;
  Controllers_ErenShifterPlayerController_o *pCStack_50;
  Controllers_BasePlayerController_o *pCStack_48;
  
  uVar22 = (uint)method;
  plVar26 = (long *)__this;
  if (g_data_057adcc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    plVar26 = &TypeInfo_UIManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc3 = '\x01';
  }
  plVar31 = &TypeInfo_SettingsManager;
  lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar21 != 0) {
    pSVar23 = *(Settings_GeneralInputSettings_o **)(lVar21 + 0x20);
    plVar26 = (long *)&(__this->fields)._generalInput;
    (__this->fields)._generalInput = pSVar23;
    il2cpp_runtime_helper_022b4080();
    uVar22 = (uint)pSVar23;
    lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (lVar21 != 0) {
      (__this->fields)._interactionInput = *(Settings_InteractionInputSettings_o **)(lVar21 + 0x48);
      il2cpp_runtime_helper_022b4080(&(__this->fields)._interactionInput);
      pCVar13 = (Characters_BaseCharacter_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      (__this->fields)._character = pCVar13;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._character,pCVar13);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar24 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (pUVar24 != (UI_InGameMenu_o *)0x0) goto label_0428933b;
label_042893b0:
        (__this->fields)._inGameMenu = (UI_InGameMenu_o *)0x0;
label_042893bc:
        il2cpp_runtime_helper_022b4080(&(__this->fields)._inGameMenu);
        pIVar14 = TypeInfo_InGameManager;
        pUVar24 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (pUVar24 != (UI_InGameMenu_o *)0x0) {
          bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar1 <= (pUVar24->klass->_2).naturalAligment) &&
             ((pUVar24->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
            (__this->fields)._gameManager = (GameManagers_InGameManager_o *)pUVar24;
            if ((bVar1 <= (pUVar24->klass->_2).naturalAligment) &&
               ((pUVar24->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar14)) goto label_04289435;
          }
          goto label_04289422;
        }
      }
      else {
        pUVar24 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (pUVar24 == (UI_InGameMenu_o *)0x0) goto label_042893b0;
label_0428933b:
        pIVar14 = TypeInfo_InGameMenu;
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if ((bVar1 <= (pUVar24->klass->_2).naturalAligment) &&
           ((pUVar24->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
          (__this->fields)._inGameMenu = pUVar24;
          if (((pUVar24->klass->_2).naturalAligment < bVar1) ||
             ((pUVar24->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar14)) goto label_04289422;
          goto label_042893bc;
        }
label_04289422:
        il2cpp_runtime_helper_022b2fd0(pUVar24,pIVar14);
      }
      (__this->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
label_04289435:
      il2cpp_runtime_helper_022b4080(&(__this->fields)._gameManager);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar25 = extraout_RDX;
  pCStack_48 = __this;
  if (g_data_057adcbc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&"Attack");
    g_data_057adcbc = '\x01';
    pMVar25 = extraout_RDX_00;
  }
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)plVar26,uVar22 & 0xff,pMVar25);
  if ((char)uVar22 != '\0') {
    return;
  }
  pSVar4 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifterInput;
  if ((pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) ||
     (pSVar17 = (pSVar4->fields).Walk, pSVar17 == (Settings_KeybindSetting_o *)0x0)) {
label_042899e0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar30 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifter;
    bVar12 = Settings_KeybindSetting__GetKey(pSVar17,0,(MethodInfo *)0x0);
    if (pCVar30 == (Characters_ErenShifter_o *)0x0) goto label_042899e0;
    *(char *)&(pCVar30->fields).State = (char)bVar12;
    pCVar30 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifter;
    if (pCVar30 == (Characters_ErenShifter_o *)0x0) goto label_042899e0;
    cVar11 = (*(pCVar30->klass->vtable)._123_CanAction.methodPtr)();
    if (cVar11 == '\0') {
      return;
    }
    pSVar4 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifterInput;
    if ((pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar17 = (pSVar4->fields).Jump, pSVar17 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pCVar30 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifter;
      if (pCVar30 != (Characters_ErenShifter_o *)0x0) {
        cVar11 = *(char *)((long)&(pCVar30->fields).Detection + 4);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        uVar19 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar32 = (float)uVar19;
        if (cVar11 == '\0') {
label_042895de:
          (*(pCVar30->klass->vtable)._126_Jump.methodPtr)
                    (fVar32,pCVar30,(pCVar30->klass->vtable)._126_Jump.method);
          return;
        }
        pCVar5 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifter;
        if ((pCVar5 != (Characters_ErenShifter_o *)0x0) &&
           (lVar21 = *(long *)&(pCVar5->fields).Dead, lVar21 != 0)) {
          local_68.fields.m_Direction.fields.x = (float)((ulong)uVar19 >> 0x20);
          local_68.fields.m_Direction.fields.y = 0.0;
          local_68.fields.m_Direction.fields.z = 0.0;
          local_68.fields.m_Origin.fields.x = (float)*(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          pUVar6 = *(UnityEngine_Transform_o **)(lVar21 + 0x10);
          local_68.fields.m_Origin.fields.z = fVar32;
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UVar39 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
            fVar32 = UVar39.fields.x + local_68.fields.m_Origin.fields.z;
            goto label_042895de;
          }
        }
      }
      goto label_042899e0;
    }
    pSVar4 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifterInput;
    if ((pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar17 = (pSVar4->fields).Kick, pSVar17 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pCVar30 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifter;
      if (pCVar30 != (Characters_ErenShifter_o *)0x0) {
        (*(pCVar30->klass->vtable)._131_Kick.methodPtr)(pCVar30,(pCVar30->klass->vtable)._131_Kick.method);
        return;
      }
      goto label_042899e0;
    }
    pSVar4 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifterInput;
    if ((pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar17 = pSVar4[1].fields.Jump, pSVar17 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    pMVar25 = (MethodInfo *)0x0;
    bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (g_data_057adcbd == '\0') {
        il2cpp_runtime_helper_023445d0(&"AttackBrushFrontL");
        il2cpp_runtime_helper_023445d0(&"AttackBrushFrontR");
        g_data_057adcbd = '\x01';
      }
      pCVar28 = (Controllers_ErenShifterPlayerController_o *)plVar26;
      pSVar20 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)plVar26,pMVar25);
      if (pSVar20 == (System_Single_array *)0x0) {
label_04289e6c:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar20->max_length != 0) {
        pCVar30 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifter;
        pCVar28 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar30 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar20->m_Items[0] <= 0.0) {
            puVar18 = &"AttackBrushFrontL";
          }
          else {
            puVar18 = &"AttackBrushFrontR";
          }
          vtableDispatch = (pCVar30->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar30,*puVar18,(pCVar30->klass->vtable)._128_Attack.method,vtableDispatch);
          return;
        }
        goto label_04289e6c;
      }
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057adcbe == '\0') {
        il2cpp_runtime_helper_023445d0(&"AttackBrushHeadL");
        il2cpp_runtime_helper_023445d0(&"AttackBrushHeadR");
        g_data_057adcbe = '\x01';
      }
      pCVar29 = pCVar28;
      pSVar20 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar28,pMVar25);
      if (pSVar20 == (System_Single_array *)0x0) {
label_04289efc:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar20->max_length != 0) {
        pCVar30 = (pCVar28->fields)._shifter;
        pCVar29 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar30 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar20->m_Items[0] <= 0.0) {
            puVar18 = &"AttackBrushHeadL";
          }
          else {
            puVar18 = &"AttackBrushHeadR";
          }
          vtableDispatch = (pCVar30->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar30,*puVar18,(pCVar30->klass->vtable)._128_Attack.method,vtableDispatch);
          return;
        }
        goto label_04289efc;
      }
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057adcbf == '\0') {
        il2cpp_runtime_helper_023445d0(&"AttackGrabBottomLeft");
        il2cpp_runtime_helper_023445d0(&"AttackGrabBottomRight");
        g_data_057adcbf = '\x01';
      }
      pCVar28 = pCVar29;
      pSVar20 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar29,pMVar25);
      if (pSVar20 == (System_Single_array *)0x0) {
label_04289f8c:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar20->max_length != 0) {
        pCVar30 = (pCVar29->fields)._shifter;
        pCVar28 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar30 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar20->m_Items[0] <= 0.0) {
            puVar18 = &"AttackGrabBottomLeft";
          }
          else {
            puVar18 = &"AttackGrabBottomRight";
          }
          vtableDispatch = (pCVar30->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar30,*puVar18,(pCVar30->klass->vtable)._128_Attack.method,vtableDispatch);
          return;
        }
        goto label_04289f8c;
      }
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057adcc0 == '\0') {
        il2cpp_runtime_helper_023445d0(&"AttackGrabMidRight");
        il2cpp_runtime_helper_023445d0(&"AttackGrabMidLeft");
        g_data_057adcc0 = '\x01';
      }
      pCVar29 = pCVar28;
      pSVar20 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar28,pMVar25);
      if (pSVar20 == (System_Single_array *)0x0) {
label_0428a01c:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar20->max_length != 0) {
        pCVar30 = (pCVar28->fields)._shifter;
        pCVar29 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar30 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar20->m_Items[0] <= 0.0) {
            puVar18 = &"AttackGrabMidLeft";
          }
          else {
            puVar18 = &"AttackGrabMidRight";
          }
          vtableDispatch = (pCVar30->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar30,*puVar18,(pCVar30->klass->vtable)._128_Attack.method,vtableDispatch);
          return;
        }
        goto label_0428a01c;
      }
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057adcc1 == '\0') {
        pCStack_48 = (Controllers_BasePlayerController_o *)0x428a049;
        il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
        pCStack_48 = (Controllers_BasePlayerController_o *)0x428a055;
        il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
        pCStack_48 = (Controllers_BasePlayerController_o *)0x428a061;
        il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
        g_data_057adcc1 = '\x01';
      }
      pCStack_48 = (Controllers_BasePlayerController_o *)0x428a070;
      pCVar28 = pCVar29;
      pSVar20 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar29,pMVar25);
      if (pSVar20 == (System_Single_array *)0x0) {
label_0428a0df:
        pCStack_48 = (Controllers_BasePlayerController_o *)0x428a0e4;
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar20->max_length != 0) {
        if (pSVar20->m_Items[0] <= 45.0) {
          if (pSVar20->m_Items[0] < -45.0) {
            puVar18 = &"AttackGrabUpLeft";
            pCVar30 = (pCVar29->fields)._shifter;
            if (pCVar30 != (Characters_ErenShifter_o *)0x0) goto label_0428a099;
            pCVar28 = (Controllers_ErenShifterPlayerController_o *)0x0;
            goto label_0428a0df;
          }
          puVar18 = &"AttackGrabUp";
          pCVar30 = (pCVar29->fields)._shifter;
        }
        else {
          puVar18 = &"AttackGrabUpRight";
          pCVar30 = (pCVar29->fields)._shifter;
        }
        pCVar28 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar30 != (Characters_ErenShifter_o *)0x0) {
label_0428a099:
          vtableDispatch = (pCVar30->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar30,*puVar18,(pCVar30->klass->vtable)._128_Attack.method,vtableDispatch);
          return;
        }
        goto label_0428a0df;
      }
      pCStack_48 = (Controllers_BasePlayerController_o *)0x428a0e9;
      il2cpp_runtime_helper_022b2ca0();
      pCStack_48 = (Controllers_BasePlayerController_o *)&TypeInfo_SettingsManager;
      __this_02 = (Controllers_ErenShifterPlayerController_o **)pCVar28;
      pCStack_50 = pCVar29;
      if (g_data_057adcc9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        __this_02 = &TypeInfo_float;
        il2cpp_runtime_helper_023445d0();
        g_data_057adcc9 = '\x01';
      }
      lVar21 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (lVar21 != 0) {
        __this_01 = *(MethodInfo **)(lVar21 + 0x20);
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = (Controllers_ErenShifterPlayerController_o **)0x0;
        UVar39 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
        if (__this_01 != (MethodInfo *)0x0) {
          UnityEngine_Camera__ScreenPointToRay_4db37e0
                    (&local_68,(UnityEngine_Camera_o *)__this_01,UVar39,(MethodInfo *)0x0);
          auVar36._4_4_ = local_68.fields.m_Direction.fields.y;
          auVar36._0_4_ = local_68.fields.m_Direction.fields.x;
          auVar36._8_8_ = 0;
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
            iVar3 = *(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4);
            pMVar25 = __this_01;
          }
          else {
            iVar3 = *(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4);
            pMVar25 = __this_01;
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar34 = 0;
          uVar35 = 0;
          fVar32 = local_68.fields.m_Direction.fields.z * local_68.fields.m_Direction.fields.z +
                   local_68.fields.m_Direction.fields.y * local_68.fields.m_Direction.fields.y +
                   local_68.fields.m_Direction.fields.x * local_68.fields.m_Direction.fields.x;
          if (fVar32 < 0.0) {
            fVar32 = sqrtf(fVar32);
            uVar34 = extraout_XMM0_Dc;
            uVar35 = extraout_XMM0_Dd;
            if (fVar32 <= 1e-05) goto label_0428a1f3;
label_0428a244:
            fVar37 = local_68.fields.m_Direction.fields.z / fVar32;
            auVar10._4_4_ = fVar32;
            auVar10._0_4_ = fVar32;
            auVar10._8_4_ = uVar34;
            auVar10._12_4_ = uVar35;
            auVar36 = divps(auVar36,auVar10);
            uVar19 = auVar36._0_8_;
          }
          else {
            fVar32 = SQRT(fVar32);
            if (1e-05 < fVar32) goto label_0428a244;
label_0428a1f3:
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            uVar19 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar37 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          if (g_data_057a6841 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6841 = '\x01';
          }
          fVar32 = (float)uVar19 * 1000.0;
          fVar38 = (float)((ulong)uVar19 >> 0x20) * 1000.0;
          fVar37 = fVar37 * 1000.0;
          __this_02 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_Math;
          if (*(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar33 = fVar37 * fVar37 + fVar38 * fVar38 + fVar32 * fVar32;
          if (fVar33 < 0.0) {
            fVar33 = sqrtf(fVar33);
          }
          else {
            fVar33 = SQRT(fVar33);
          }
          fVar38 = asinf(fVar38 / fVar33);
          fVar32 = atan2f(fVar37,fVar32);
          pCVar13 = (pCVar28->fields)._character;
          if ((pCVar13 != (Characters_BaseCharacter_o *)0x0) &&
             (lVar21 = *(long *)&(pCVar13->fields).Dead, lVar21 != 0)) {
            pUVar6 = *(UnityEngine_Transform_o **)(lVar21 + 0x10);
            __this_02 = (Controllers_ErenShifterPlayerController_o **)0x0;
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              UVar39 = UnityEngine_Transform__get_eulerAngles(pUVar6,(MethodInfo *)0x0);
              fVar32 = UVar39.fields.y + -90.0 + fVar32 * 57.29578;
              fVar37 = floorf(fVar32 / 360.0);
              pMVar25 = (MethodInfo *)0x2;
              __this_02 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_float;
              lVar21 = il2cpp_runtime_helper_022b2a40();
              if (lVar21 != 0) {
                if (*(int *)(lVar21 + 0x18) != 0) {
                  fVar32 = fVar32 - fVar37 * 360.0;
                  fVar37 = 360.0;
                  if (fVar32 <= 360.0) {
                    fVar37 = fVar32;
                  }
                  fVar37 = (float)(-(uint)(0.0 <= fVar32) & (uint)fVar37);
                  *(uint *)(lVar21 + 0x20) =
                       (~-(uint)(180.0 < fVar37) & (uint)fVar37 |
                       (uint)(fVar37 + -360.0) & -(uint)(180.0 < fVar37)) ^ 0x80000000;
                  if (*(int *)(lVar21 + 0x18) != 1) {
                    *(float *)(lVar21 + 0x24) = fVar38 * 57.29578;
                    return;
                  }
                }
                goto label_0428a497;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
label_0428a497:
      il2cpp_runtime_helper_022b2ca0();
      Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this_02,pMVar25);
      return;
    }
    pSVar4 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifterInput;
    if ((pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar17 = pSVar4[1].fields.Walk, pSVar17 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    pMVar25 = (MethodInfo *)0x0;
    bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackBrushHead
                ((Controllers_AnnieShifterPlayerController_o *)plVar26,pMVar25);
      return;
    }
    pSVar4 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifterInput;
    if ((pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar17 = pSVar4[1].fields.AttackCombo, pSVar17 == (Settings_KeybindSetting_o *)0x0))
    goto label_042899e0;
    pMVar25 = (MethodInfo *)0x0;
    bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackGrabBottom
                ((Controllers_AnnieShifterPlayerController_o *)plVar26,pMVar25);
      return;
    }
    pSVar4 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifterInput;
    if ((pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (__this_00 = pSVar4[2].klass, __this_00 == (Settings_ErenShifterInputSettings_c *)0x0))
    goto label_042899e0;
    pMVar25 = (MethodInfo *)0x0;
    bVar12 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)__this_00,0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackGrabMid
                ((Controllers_AnnieShifterPlayerController_o *)plVar26,pMVar25);
      return;
    }
    pSVar4 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifterInput;
    if ((pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar17 = pSVar4[2].monitor, pSVar17 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    pMVar25 = (MethodInfo *)0x0;
    bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackGrabUp
                ((Controllers_AnnieShifterPlayerController_o *)plVar26,pMVar25);
      return;
    }
    pSVar4 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifterInput;
    if (((pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) ||
        (pSVar7 = (pSVar4->fields).Settings,
        pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
       (pSVar15 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar7,(MethodInfo *)0x0),
       pSVar15 == (System_Collections_ICollection_o *)0x0)) goto label_042899e0;
    pSVar8 = pSVar15->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar9 = (pSVar8->_1).interfaceOffsets;
      lVar21 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar21) == TypeInfo_IEnumerable) {
          pVVar16 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar21);
          goto label_04289812;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar21);
    }
    pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerable,0);
label_04289812:
    plVar31 = (long *)(*pVVar16->methodPtr)(pSVar15,pVVar16->method);
    if (plVar31 == (long *)0x0) goto label_04289a0e;
    local_68.fields.m_Origin.fields.x = 0.0;
    local_68.fields.m_Origin.fields.y = 0.0;
label_04289843:
    lVar21 = *plVar31;
    if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
      lVar27 = 0;
      do {
        if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar27) == TypeInfo_IEnumerator) {
          puVar18 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar27) * 0x10 + lVar21 + 0x138);
          goto label_042898a1;
        }
        lVar27 = lVar27 + 0x10;
      } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar27);
    }
    puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar31,TypeInfo_IEnumerator,0);
label_042898a1:
    cVar11 = (*(code *)*puVar18)(plVar31,puVar18[1]);
    if (cVar11 == '\0') goto label_04289adc;
    lVar21 = *plVar31;
    if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
      lVar27 = 0;
      do {
        if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar27) == TypeInfo_IEnumerator) {
          puVar18 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar27) + 1) * 0x10 + lVar21 + 0x138);
          goto label_04289919;
        }
        lVar27 = lVar27 + 0x10;
      } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar27);
    }
    puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar31,TypeInfo_IEnumerator,1);
label_04289919:
    unaff_R12 = (System_String_o *)(*(code *)*puVar18)(plVar31,puVar18[1]);
    if (unaff_R12 == (System_String_o *)0x0) goto label_042899ed;
    if (unaff_R12->klass == g_data_057b9c00) {
      bVar12 = System_String__StartsWith(unaff_R12,"Attack",(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        pSVar4 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifterInput;
        if (pSVar4 == (Settings_ErenShifterInputSettings_o *)0x0) goto label_042899fa;
        pSVar7 = (pSVar4->fields).Settings;
        if (pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_042899ff;
        pSVar17 = (Settings_KeybindSetting_o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar7,(Il2CppObject *)unaff_R12,(MethodInfo *)0x0);
        if (pSVar17 == (Settings_KeybindSetting_o *)0x0) goto label_04289a04;
        bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
        if (((pSVar17->klass->_2).naturalAligment < bVar1) ||
           ((pSVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) goto label_042899f2;
        bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          pCVar30 = (((Controllers_ErenShifterPlayerController_o *)plVar26)->fields)._shifter;
          if (pCVar30 == (Characters_ErenShifter_o *)0x0) goto label_04289a09;
          (*(pCVar30->klass->vtable)._128_Attack.methodPtr)
                    (pCVar30,unaff_R12,(pCVar30->klass->vtable)._128_Attack.method);
        }
      }
      goto label_04289843;
    }
  }
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_042899ed:
  pSVar17 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_022b2c90();
label_042899f2:
  il2cpp_runtime_helper_022b2fd0(pSVar17);
label_042899fa:
  il2cpp_runtime_helper_022b2c90();
label_042899ff:
  il2cpp_runtime_helper_022b2c90();
label_04289a04:
  il2cpp_runtime_helper_022b2c90();
label_04289a09:
  il2cpp_runtime_helper_022b2c90();
label_04289a0e:
  auVar40 = il2cpp_runtime_helper_022b2c90();
  uVar19 = auVar40._0_8_;
  if (auVar40._8_4_ != 1) {
    local_68.fields.m_Origin.fields.x = 0.0;
    local_68.fields.m_Origin.fields.y = 0.0;
    goto label_04289b71;
  }
  plVar26 = (long *)__cxa_begin_catch(uVar19);
  local_68.fields.m_Origin.fields._0_8_ = *plVar26;
  __cxa_end_catch();
label_04289adc:
  plVar26 = (long *)il2cpp_runtime_helper_023051f0(plVar31,TypeInfo_IDisposable);
  if (plVar26 != (long *)0x0) {
    lVar21 = *plVar26;
    if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
      lVar27 = 0;
      do {
        if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar27) == TypeInfo_IDisposable) {
          puVar18 = (undefined8 *)
                    (lVar21 + (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar27) * 0x10 + 0x138);
          goto label_04289b44;
        }
        lVar27 = lVar27 + 0x10;
      } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar27);
    }
    puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar26,TypeInfo_IDisposable,0);
label_04289b44:
    (*(code *)*puVar18)(plVar26,puVar18[1]);
  }
  if (local_68.fields.m_Origin.fields._0_8_ == 0) {
    return;
  }
  do {
    uVar19 = il2cpp_runtime_helper_022fefe0();
label_04289b71:
    plVar26 = (long *)il2cpp_runtime_helper_023051f0(plVar31,TypeInfo_IDisposable);
    if (plVar26 != (long *)0x0) {
      lVar21 = *plVar26;
      if ((ulong)*(ushort *)(lVar21 + 0x12e) != 0) {
        lVar27 = 0;
        do {
          if (*(long *)(*(long *)(lVar21 + 0xb0) + lVar27) == TypeInfo_IDisposable) {
            puVar18 = (undefined8 *)
                      (lVar21 + (long)*(int *)(*(long *)(lVar21 + 0xb0) + 8 + lVar27) * 0x10 + 0x138);
            goto label_04289bdd;
          }
          lVar27 = lVar27 + 0x10;
        } while ((ulong)*(ushort *)(lVar21 + 0x12e) << 4 != lVar27);
      }
      puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar26,TypeInfo_IDisposable,0);
label_04289bdd:
      (*(code *)*puVar18)(plVar26,puVar18[1]);
    }
    if (local_68.fields.m_Origin.fields._0_8_ == 0) {
      _Unwind_Resume(uVar19);
    }
    il2cpp_runtime_helper_022fefe0(local_68.fields.m_Origin.fields._0_8_);
  } while( true );
}


// Controllers.BasePlayerController$$Start
// il2cpp: void Controllers_BasePlayerController__Start (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x428aab0

void Controllers_BasePlayerController__Start(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BasePlayerController$$Update
// il2cpp: void Controllers_BasePlayerController__Update (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x428aac0

void Controllers_BasePlayerController__Update(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o **ppGVar1;
  GameManagers_InGameManager_o *pGVar2;
  Il2CppMethodPointer vtableDispatch;
  Characters_BaseCharacter_o *pCVar3;
  Settings_InteractionInputSettings_o *pSVar4;
  UI_InGameMenu_o *pUVar5;
  UI_EmoteHandler_o *__this_00;
  UI_ItemHandler_o *__this_01;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar6;
  Settings_KeybindSetting_o *pSVar7;
  System_Collections_Generic_List_EmoteTextPopup__c *__this_02;
  long lVar8;
  UnityEngine_Transform_o *__this_03;
  UI_EmoteTextPopup_array *__this_04;
  undefined1 uVar9;
  bool_conflict bVar10;
  uint uVar11;
  uint uVar12;
  MethodInfo *method_00;
  int iVar13;
  long lVar14;
  char cVar15;
  UI_EmoteHandler_o **ppUVar16;
  UI_EmoteHandler_o *__this_05;
  int iVar17;
  bool bVar18;
  float fVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  float fStack_64;
  
  cVar15 = (char)method;
  ppUVar16 = (UI_EmoteHandler_o **)__this;
  if (g_data_057adcc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    ppUVar16 = &TypeInfo_CustomLogicManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc4 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (pGVar2 != (GameManagers_InGameManager_o *)0x0) {
    if (*(char *)((long)&(pGVar2->fields)._gameSettingsLoaded + 2) != '\0') {
      return;
    }
    bVar10 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    bVar18 = true;
    if ((char)bVar10 == '\0') {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar10 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        if (*(int *)((long)&TypeInfo_CustomLogicManager[2].fields._emoteWheelPopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar18 = *(char *)((long)TypeInfo_CustomLogicManager[2].monitor + 0x48) != '\0';
      }
    }
    (*(__this->klass->vtable)._8_UpdateMovementInput.methodPtr)
              (__this,(ulong)(uint)bVar18,(__this->klass->vtable)._8_UpdateMovementInput.method);
    Controllers_BasePlayerController__UpdateMenuInput(__this,0,method_00);
    (*(__this->klass->vtable)._7_UpdateActionInput.methodPtr)
              (__this,(ulong)(uint)bVar18,(__this->klass->vtable)._7_UpdateActionInput.method);
    vtableDispatch = (__this->klass->vtable)._9_UpdateUI.methodPtr;
    (*vtableDispatch)
              (__this,(ulong)bVar18,(__this->klass->vtable)._9_UpdateUI.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adcc7 = '\x01';
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) goto label_0428ad5b;
label_0428abeb:
    __this_05 = (UI_EmoteHandler_o *)0x0;
    bVar10 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto label_0428ad8a;
label_0428abfa:
    if (*(int *)((long)&TypeInfo_CustomLogicManager[2].fields._emoteWheelPopup + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_05 = TypeInfo_CustomLogicManager;
      if (*(char *)((long)TypeInfo_CustomLogicManager[2].monitor + 0x48) == '\0') goto label_0428ac22;
      goto label_0428ad8a;
    }
    __this_05 = TypeInfo_CustomLogicManager;
    if (*(char *)((long)TypeInfo_CustomLogicManager[2].monitor + 0x48) != '\0') goto label_0428ad8a;
label_0428ac22:
    pCVar3 = (((Controllers_BasePlayerController_o *)ppUVar16)->fields)._character;
    __this_05 = TypeInfo_CustomLogicManager;
    if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar3->fields).FeedVictimName != '\0') goto label_0428ad8a;
      pSVar4 = (((Controllers_BasePlayerController_o *)ppUVar16)->fields)._interactionInput;
      if ((pSVar4 != (Settings_InteractionInputSettings_o *)0x0) &&
         (__this_05 = (UI_EmoteHandler_o *)(pSVar4->fields).EmoteMenu, __this_05 != (UI_EmoteHandler_o *)0x0))
      {
        cVar15 = '\0';
        bVar10 = Settings_KeybindSetting__GetKeyDown
                           ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          pUVar5 = (((Controllers_BasePlayerController_o *)ppUVar16)->fields)._inGameMenu;
          if ((pUVar5 == (UI_InGameMenu_o *)0x0) ||
             (__this_05 = (pUVar5->fields).EmoteHandler, __this_05 == (UI_EmoteHandler_o *)0x0))
          goto label_0428add5;
          cVar15 = '\0';
          UI_EmoteHandler__ToggleEmoteWheel(__this_05,(MethodInfo *)0x0);
        }
        pSVar4 = (((Controllers_BasePlayerController_o *)ppUVar16)->fields)._interactionInput;
        if ((pSVar4 != (Settings_InteractionInputSettings_o *)0x0) &&
           (__this_05 = (UI_EmoteHandler_o *)(pSVar4->fields).ItemMenu, __this_05 != (UI_EmoteHandler_o *)0x0)
           ) {
          cVar15 = '\0';
          bVar10 = Settings_KeybindSetting__GetKeyDown
                             ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            pUVar5 = (((Controllers_BasePlayerController_o *)ppUVar16)->fields)._inGameMenu;
            if ((pUVar5 == (UI_InGameMenu_o *)0x0) ||
               (__this_05 = (UI_EmoteHandler_o *)(pUVar5->fields).ItemHandler,
               __this_05 == (UI_EmoteHandler_o *)0x0)) goto label_0428add5;
            cVar15 = '\0';
            UI_ItemHandler__ToggleItemWheel((UI_ItemHandler_o *)__this_05,(MethodInfo *)0x0);
          }
          pSVar4 = (((Controllers_BasePlayerController_o *)ppUVar16)->fields)._interactionInput;
          if ((pSVar4 != (Settings_InteractionInputSettings_o *)0x0) &&
             (__this_05 = (UI_EmoteHandler_o *)(pSVar4->fields).MenuNext,
             __this_05 != (UI_EmoteHandler_o *)0x0)) {
            cVar15 = '\0';
            bVar10 = Settings_KeybindSetting__GetKeyDown
                               ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return;
            }
            pUVar5 = (((Controllers_BasePlayerController_o *)ppUVar16)->fields)._inGameMenu;
            if (pUVar5 != (UI_InGameMenu_o *)0x0) {
              __this_00 = (pUVar5->fields).EmoteHandler;
              __this_05 = (UI_EmoteHandler_o *)0x0;
              if (__this_00 != (UI_EmoteHandler_o *)0x0) {
                UI_EmoteHandler__NextEmoteWheel(__this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) goto label_0428abeb;
label_0428ad5b:
    il2cpp_runtime_helper_02337ed0();
    __this_05 = (UI_EmoteHandler_o *)0x0;
    bVar10 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto label_0428abfa;
label_0428ad8a:
    pUVar5 = (((Controllers_BasePlayerController_o *)ppUVar16)->fields)._inGameMenu;
    if ((pUVar5 != (UI_InGameMenu_o *)0x0) &&
       (__this_05 = (pUVar5->fields).EmoteHandler, __this_05 != (UI_EmoteHandler_o *)0x0)) {
      cVar15 = '\0';
      UI_EmoteHandler__SetEmoteWheel(__this_05,0,(MethodInfo *)0x0);
      pUVar5 = (((Controllers_BasePlayerController_o *)ppUVar16)->fields)._inGameMenu;
      if (pUVar5 != (UI_InGameMenu_o *)0x0) {
        __this_01 = (pUVar5->fields).ItemHandler;
        __this_05 = (UI_EmoteHandler_o *)0x0;
        if (__this_01 != (UI_ItemHandler_o *)0x0) {
          UI_ItemHandler__SetItemWheel(__this_01,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0428add5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057adcc6 = '\x01';
  }
  if (cVar15 == '\0') {
    pSVar6 = (__this_05->fields)._emoteTextPopups;
    if ((pSVar6 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) ||
       (pSVar7 = pSVar6[2].monitor, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
    bVar10 = Settings_KeybindSetting__GetKeyDown(pSVar7,0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      ppGVar1 = &(__this_05->fields)._inGameManager;
      *(byte *)ppGVar1 = *(byte *)ppGVar1 ^ 1;
    }
    pSVar6 = (__this_05->fields)._emoteTextPopups;
    if ((pSVar6 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) ||
       (pSVar7 = (Settings_KeybindSetting_o *)(pSVar6->fields)._syncRoot,
       pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
    bVar10 = Settings_KeybindSetting__GetKey(pSVar7,0,(MethodInfo *)0x0);
    iVar13 = 1;
    if ((char)bVar10 == '\0') {
      pSVar6 = (__this_05->fields)._emoteTextPopups;
      if ((pSVar6 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) ||
         (__this_02 = pSVar6[1].klass, __this_02 == (System_Collections_Generic_List_EmoteTextPopup__c *)0x0))
      goto label_0428aff8;
      uVar11 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
      iVar13 = -(uVar11 & 0xff);
    }
    pSVar6 = (__this_05->fields)._emoteTextPopups;
    if ((pSVar6 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) ||
       (pSVar7 = pSVar6[1].monitor, pSVar7 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
    bVar10 = Settings_KeybindSetting__GetKey(pSVar7,0,(MethodInfo *)0x0);
    uVar11 = 0xffffffff;
    if ((char)bVar10 == '\0') {
      pSVar6 = (__this_05->fields)._emoteTextPopups;
      if ((pSVar6 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) ||
         (__this_04 = pSVar6[1].fields._items, __this_04 == (UI_EmoteTextPopup_array *)0x0))
      goto label_0428aff8;
      uVar12 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_04,0,(MethodInfo *)0x0);
      uVar11 = uVar12 & 0xff;
      if ((iVar13 != 0) || ((char)uVar12 != '\0')) goto label_0428aed3;
      iVar17 = 1;
      uVar11 = 0;
      if (*(char *)&(__this_05->fields)._inGameManager == '\0') goto label_0428aed7;
    }
    else {
label_0428aed3:
      *(undefined1 *)&(__this_05->fields)._inGameManager = 0;
label_0428aed7:
      iVar17 = iVar13;
    }
    lVar14 = *(long *)&(__this_05->fields)._currentEmoteWheelState;
    if (iVar17 != 0 || uVar11 != 0) {
      lVar8 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x28), lVar8 == 0)) ||
         (__this_03 = *(UnityEngine_Transform_o **)(lVar8 + 0x10), __this_03 == (UnityEngine_Transform_o *)0x0
         )) goto label_0428aff8;
      rotation = UnityEngine_Transform__get_rotation(__this_03,(MethodInfo *)0x0);
      UVar20 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar20.fields.x * 57.29578;
      euler.fields.y = UVar20.fields.y * 57.29578;
      euler.fields.z = UVar20.fields.z * 57.29578;
      UVar20 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      fVar19 = atan2f((float)iVar17,(float)(int)uVar11);
      if (lVar14 == 0) goto label_0428aff8;
      fStack_64 = UVar20.fields.y;
      *(float *)(lVar14 + 200) = fVar19 * -57.29578 + fStack_64 + 90.0;
      lVar14._0_4_ = (__this_05->fields)._currentEmoteWheelState;
      lVar14._4_4_ = (__this_05->fields)._currentEmoteCooldown;
      uVar9 = 1;
      if (lVar14 == 0) goto label_0428aff8;
      goto label_0428afa0;
    }
  }
  else {
    if (*(char *)&(__this_05->fields)._inGameManager != '\0') {
      return;
    }
    lVar14._0_4_ = (__this_05->fields)._currentEmoteWheelState;
    lVar14._4_4_ = (__this_05->fields)._currentEmoteCooldown;
  }
  if (lVar14 == 0) {
label_0428aff8:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  uVar9 = 0;
label_0428afa0:
  *(undefined1 *)(lVar14 + 0xcc) = uVar9;
  return;
}


// Controllers.BasePlayerController$$UpdateActionInput
// il2cpp: void Controllers_BasePlayerController__UpdateActionInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x4289c20

void Controllers_BasePlayerController__UpdateActionInput
               (Controllers_BasePlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  Settings_KeybindSetting_o *__this_01;
  code *vtableDispatch;
  UnityEngine_Transform_o *__this_02;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  System_String_array *pSVar7;
  System_Single_array *pSVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 in_register_00000034;
  Il2CppClass *__this_03;
  Il2CppClass *method_00;
  long *__this_04;
  Characters_BaseCharacter_o *pCVar12;
  Characters_BaseCharacter_o *pCVar13;
  System_String_o *pSVar14;
  Characters_BaseCharacter_o **__this_05;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Ray_o UStack_78;
  Characters_BaseCharacter_o *pCStack_60;
  Controllers_BasePlayerController_o *pCStack_58;
  Characters_BaseCharacter_o *pCStack_50;
  Characters_BaseCharacter_o *pCStack_48;
  Characters_BaseCharacter_o *pCStack_40;
  Characters_BaseCharacter_o *pCStack_38;
  code *pcStack_30;
  undefined8 uVar19;
  
  method_00 = (Il2CppClass *)CONCAT44(in_register_00000034,inMenu);
  uVar11 = (ulong)(uint)inMenu;
  __this_04 = (long *)__this;
  if (g_data_057adcc5 == '\0') {
    pcStack_30 = (code *)0x4289c42;
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    pcStack_30 = (code *)0x4289c4e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_04 = &TypeInfo_SettingsManager;
    pcStack_30 = (code *)0x4289c5a;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc5 = '\x01';
  }
  if ((char)inMenu != '\0') {
    return;
  }
  pCVar12 = (__this->fields)._character;
  if (pCVar12 != (Characters_BaseCharacter_o *)0x0) {
    if (*(char *)&(pCVar12->fields).FeedVictimName != '\0') {
      return;
    }
    pSVar7 = (__this->fields)._quickSelectOptions;
    if (pSVar7 != (System_String_array *)0x0) {
      uVar11 = 0;
      uVar3 = (uint)pSVar7->max_length;
      if (0 < (int)uVar3) {
        do {
          if (uVar3 <= uVar11) goto label_04289deb;
          lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
          if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x48), lVar10 == 0)) ||
             (__this_00 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar10 + 0x10),
             __this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) goto label_04289dde;
          method_00 = (Il2CppClass *)pSVar7->m_Items[uVar11];
          pcStack_30 = (code *)0x4289d16;
          __this_04 = (long *)System_Collections_Specialized_OrderedDictionary__get_Item
                                        (__this_00,(Il2CppObject *)method_00,(MethodInfo *)0x0);
          if ((Characters_BaseCharacter_o *)__this_04 == (Characters_BaseCharacter_o *)0x0) goto label_04289dde;
          bVar2 = (TypeInfo_KeybindSetting->_2).naturalAligment;
          method_00 = TypeInfo_KeybindSetting;
          if (((((Characters_BaseCharacter_o *)__this_04)->klass->_2).naturalAligment < bVar2) ||
             ((((Characters_BaseCharacter_o *)__this_04)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              TypeInfo_KeybindSetting)) goto label_04289de3;
          method_00 = (Il2CppClass *)0x0;
          pcStack_30 = (code *)0x4289d57;
          bVar6 = Settings_KeybindSetting__GetKeyDown
                            ((Settings_KeybindSetting_o *)__this_04,0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            __this_04 = (long *)(__this->fields)._character;
            if (((Characters_BaseCharacter_o *)__this_04 == (Characters_BaseCharacter_o *)0x0) ||
               (lVar10 = *(long *)&(((Characters_BaseCharacter_o *)__this_04)->fields).CurrentHealth,
               lVar10 == 0)) goto label_04289dde;
            if ((long)uVar11 < (long)*(int *)(lVar10 + 0x18)) {
              method_00 = (Il2CppClass *)(uVar11 & 0xffffffff);
              pcStack_30 = (code *)0x4289d93;
              (*(((Characters_BaseCharacter_o *)__this_04)->klass->vtable)._75_UseItem.methodPtr)
                        (__this_04,method_00,
                         (((Characters_BaseCharacter_o *)__this_04)->klass->vtable)._75_UseItem.method);
            }
          }
          uVar11 = uVar11 + 1;
          pSVar7 = (__this->fields)._quickSelectOptions;
          if (pSVar7 == (System_String_array *)0x0) goto label_04289dde;
          uVar3 = (uint)pSVar7->max_length;
        } while ((long)uVar11 < (long)(int)uVar3);
      }
      lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x20), lVar10 != 0)) &&
         (__this_01 = *(Settings_KeybindSetting_o **)(lVar10 + 0xa0),
         __this_01 != (Settings_KeybindSetting_o *)0x0)) {
        pcStack_30 = (code *)0x4289dc9;
        bVar6 = Settings_KeybindSetting__GetKeyDown(__this_01,0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pbVar1 = (byte *)((long)&(__this->fields)._autorun + 1);
        *pbVar1 = *pbVar1 ^ 1;
        return;
      }
    }
  }
label_04289dde:
  pcStack_30 = (code *)0x4289de3;
  __this_04 = (long *)il2cpp_runtime_helper_022b2c90();
label_04289de3:
  pcStack_30 = (code *)0x4289deb;
  il2cpp_runtime_helper_022b2fd0();
label_04289deb:
  pcStack_30 = Controllers_AnnieShifterPlayerController__AttackBrushFront;
  il2cpp_runtime_helper_022b2ca0();
  pcStack_30 = (code *)uVar11;
  if (g_data_057adcbd == '\0') {
    pCStack_38 = (Characters_BaseCharacter_o *)0x4289e09;
    il2cpp_runtime_helper_023445d0(&"AttackBrushFrontL");
    pCStack_38 = (Characters_BaseCharacter_o *)0x4289e15;
    il2cpp_runtime_helper_023445d0(&"AttackBrushFrontR");
    g_data_057adcbd = '\x01';
  }
  pCStack_38 = (Characters_BaseCharacter_o *)0x4289e24;
  pCVar12 = (Characters_BaseCharacter_o *)__this_04;
  pSVar8 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this_04,(MethodInfo *)method_00);
  if (pSVar8 == (System_Single_array *)0x0) {
label_04289e6c:
    pCStack_38 = (Characters_BaseCharacter_o *)0x4289e71;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar8->max_length != 0) {
    pSVar14 = (((Characters_BaseCharacter_o *)__this_04)->fields).Guild;
    pCVar12 = (Characters_BaseCharacter_o *)0x0;
    if (pSVar14 != (System_String_o *)0x0) {
      if (pSVar8->m_Items[0] <= 0.0) {
        puVar9 = &"AttackBrushFrontL";
      }
      else {
        puVar9 = &"AttackBrushFrontR";
      }
      vtableDispatch = pSVar14->klass[3]._1.fields;
      (*vtableDispatch)(pSVar14,*puVar9,pSVar14->klass[3]._1.events,vtableDispatch);
      return;
    }
    goto label_04289e6c;
  }
  pCStack_38 = (Characters_BaseCharacter_o *)0x4289e76;
  il2cpp_runtime_helper_022b2ca0();
  pCStack_38 = (Characters_BaseCharacter_o *)__this_04;
  if (g_data_057adcbe == '\0') {
    pCStack_40 = (Characters_BaseCharacter_o *)0x4289e99;
    il2cpp_runtime_helper_023445d0(&"AttackBrushHeadL");
    pCStack_40 = (Characters_BaseCharacter_o *)0x4289ea5;
    il2cpp_runtime_helper_023445d0(&"AttackBrushHeadR");
    g_data_057adcbe = '\x01';
  }
  pCStack_40 = (Characters_BaseCharacter_o *)0x4289eb4;
  pCVar13 = pCVar12;
  pSVar8 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)pCVar12,(MethodInfo *)method_00);
  if (pSVar8 == (System_Single_array *)0x0) {
label_04289efc:
    pCStack_40 = (Characters_BaseCharacter_o *)0x4289f01;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar8->max_length != 0) {
    pSVar14 = (pCVar12->fields).Guild;
    pCVar13 = (Characters_BaseCharacter_o *)0x0;
    if (pSVar14 != (System_String_o *)0x0) {
      if (pSVar8->m_Items[0] <= 0.0) {
        puVar9 = &"AttackBrushHeadL";
      }
      else {
        puVar9 = &"AttackBrushHeadR";
      }
      vtableDispatch = pSVar14->klass[3]._1.fields;
      (*vtableDispatch)(pSVar14,*puVar9,pSVar14->klass[3]._1.events,vtableDispatch);
      return;
    }
    goto label_04289efc;
  }
  pCStack_40 = (Characters_BaseCharacter_o *)0x4289f06;
  il2cpp_runtime_helper_022b2ca0();
  pCStack_40 = pCVar12;
  if (g_data_057adcbf == '\0') {
    pCStack_48 = (Characters_BaseCharacter_o *)0x4289f29;
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottomLeft");
    pCStack_48 = (Characters_BaseCharacter_o *)0x4289f35;
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottomRight");
    g_data_057adcbf = '\x01';
  }
  pCStack_48 = (Characters_BaseCharacter_o *)0x4289f44;
  pCVar12 = pCVar13;
  pSVar8 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)pCVar13,(MethodInfo *)method_00);
  if (pSVar8 == (System_Single_array *)0x0) {
label_04289f8c:
    pCStack_48 = (Characters_BaseCharacter_o *)0x4289f91;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar8->max_length != 0) {
    pSVar14 = (pCVar13->fields).Guild;
    pCVar12 = (Characters_BaseCharacter_o *)0x0;
    if (pSVar14 != (System_String_o *)0x0) {
      if (pSVar8->m_Items[0] <= 0.0) {
        puVar9 = &"AttackGrabBottomLeft";
      }
      else {
        puVar9 = &"AttackGrabBottomRight";
      }
      vtableDispatch = pSVar14->klass[3]._1.fields;
      (*vtableDispatch)(pSVar14,*puVar9,pSVar14->klass[3]._1.events,vtableDispatch);
      return;
    }
    goto label_04289f8c;
  }
  pCStack_48 = (Characters_BaseCharacter_o *)0x4289f96;
  il2cpp_runtime_helper_022b2ca0();
  pCStack_48 = pCVar13;
  if (g_data_057adcc0 == '\0') {
    pCStack_50 = (Characters_BaseCharacter_o *)0x4289fb9;
    il2cpp_runtime_helper_023445d0(&"AttackGrabMidRight");
    pCStack_50 = (Characters_BaseCharacter_o *)0x4289fc5;
    il2cpp_runtime_helper_023445d0(&"AttackGrabMidLeft");
    g_data_057adcc0 = '\x01';
  }
  pCStack_50 = (Characters_BaseCharacter_o *)0x4289fd4;
  pCVar13 = pCVar12;
  pSVar8 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)pCVar12,(MethodInfo *)method_00);
  if (pSVar8 == (System_Single_array *)0x0) {
label_0428a01c:
    pCStack_50 = (Characters_BaseCharacter_o *)0x428a021;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar8->max_length != 0) {
    pSVar14 = (pCVar12->fields).Guild;
    pCVar13 = (Characters_BaseCharacter_o *)0x0;
    if (pSVar14 != (System_String_o *)0x0) {
      if (pSVar8->m_Items[0] <= 0.0) {
        puVar9 = &"AttackGrabMidLeft";
      }
      else {
        puVar9 = &"AttackGrabMidRight";
      }
      vtableDispatch = pSVar14->klass[3]._1.fields;
      (*vtableDispatch)(pSVar14,*puVar9,pSVar14->klass[3]._1.events,vtableDispatch);
      return;
    }
    goto label_0428a01c;
  }
  pCStack_50 = (Characters_BaseCharacter_o *)0x428a026;
  il2cpp_runtime_helper_022b2ca0();
  pCStack_50 = pCVar12;
  if (g_data_057adcc1 == '\0') {
    pCStack_58 = (Controllers_BasePlayerController_o *)0x428a049;
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
    pCStack_58 = (Controllers_BasePlayerController_o *)0x428a055;
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
    pCStack_58 = (Controllers_BasePlayerController_o *)0x428a061;
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    g_data_057adcc1 = '\x01';
  }
  pCStack_58 = (Controllers_BasePlayerController_o *)0x428a070;
  pCVar12 = pCVar13;
  pSVar8 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)pCVar13,(MethodInfo *)method_00);
  if (pSVar8 == (System_Single_array *)0x0) {
label_0428a0df:
    pCStack_58 = (Controllers_BasePlayerController_o *)0x428a0e4;
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar8->max_length != 0) {
    if (pSVar8->m_Items[0] <= 45.0) {
      if (pSVar8->m_Items[0] < -45.0) {
        puVar9 = &"AttackGrabUpLeft";
        pSVar14 = (pCVar13->fields).Guild;
        if (pSVar14 != (System_String_o *)0x0) goto label_0428a099;
        pCVar12 = (Characters_BaseCharacter_o *)0x0;
        goto label_0428a0df;
      }
      puVar9 = &"AttackGrabUp";
      pSVar14 = (pCVar13->fields).Guild;
    }
    else {
      puVar9 = &"AttackGrabUpRight";
      pSVar14 = (pCVar13->fields).Guild;
    }
    pCVar12 = (Characters_BaseCharacter_o *)0x0;
    if (pSVar14 != (System_String_o *)0x0) {
label_0428a099:
      vtableDispatch = pSVar14->klass[3]._1.fields;
      (*vtableDispatch)(pSVar14,*puVar9,pSVar14->klass[3]._1.events,vtableDispatch);
      return;
    }
    goto label_0428a0df;
  }
  pCStack_58 = (Controllers_BasePlayerController_o *)0x428a0e9;
  il2cpp_runtime_helper_022b2ca0();
  __this_05 = (Characters_BaseCharacter_o **)pCVar12;
  pCStack_60 = pCVar13;
  pCStack_58 = __this;
  if (g_data_057adcc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    __this_05 = &TypeInfo_float;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc9 = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar10 != 0) {
    __this_03 = *(Il2CppClass **)(lVar10 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_05 = (Characters_BaseCharacter_o **)0x0;
    UVar23 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this_03 != (Il2CppClass *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                (&UStack_78,(UnityEngine_Camera_o *)__this_03,UVar23,(MethodInfo *)0x0);
      auVar20._8_8_ = 0;
      auVar20._0_4_ = UStack_78.fields.m_Direction.fields.x;
      auVar20._4_4_ = UStack_78.fields.m_Direction.fields.y;
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
        iVar4 = (TypeInfo_Math->fields)._stepPhase;
        method_00 = __this_03;
      }
      else {
        iVar4 = (TypeInfo_Math->fields)._stepPhase;
        method_00 = __this_03;
      }
      if (iVar4 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar17 = 0;
      uVar18 = 0;
      fVar15 = UStack_78.fields.m_Direction.fields.z * UStack_78.fields.m_Direction.fields.z +
               UStack_78.fields.m_Direction.fields.y * UStack_78.fields.m_Direction.fields.y +
               UStack_78.fields.m_Direction.fields.x * UStack_78.fields.m_Direction.fields.x;
      if (fVar15 < 0.0) {
        fVar15 = sqrtf(fVar15);
        uVar17 = extraout_XMM0_Dc;
        uVar18 = extraout_XMM0_Dd;
        if (fVar15 <= 1e-05) goto label_0428a1f3;
label_0428a244:
        fVar21 = UStack_78.fields.m_Direction.fields.z / fVar15;
        auVar5._4_4_ = fVar15;
        auVar5._0_4_ = fVar15;
        auVar5._8_4_ = uVar17;
        auVar5._12_4_ = uVar18;
        auVar20 = divps(auVar20,auVar5);
        uVar19 = auVar20._0_8_;
      }
      else {
        fVar15 = SQRT(fVar15);
        if (1e-05 < fVar15) goto label_0428a244;
label_0428a1f3:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar19 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar21 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar15 = (float)uVar19 * 1000.0;
      fVar22 = (float)((ulong)uVar19 >> 0x20) * 1000.0;
      fVar21 = fVar21 * 1000.0;
      __this_05 = (Characters_BaseCharacter_o **)TypeInfo_Math;
      if ((TypeInfo_Math->fields)._stepPhase == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar16 = fVar21 * fVar21 + fVar22 * fVar22 + fVar15 * fVar15;
      if (fVar16 < 0.0) {
        fVar16 = sqrtf(fVar16);
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      fVar22 = asinf(fVar22 / fVar16);
      fVar15 = atan2f(fVar21,fVar15);
      lVar10 = *(long *)&(pCVar12->fields)._disableKinematicTimeLeft;
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x70), lVar10 != 0)) {
        __this_02 = *(UnityEngine_Transform_o **)(lVar10 + 0x10);
        __this_05 = (Characters_BaseCharacter_o **)0x0;
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          UVar23 = UnityEngine_Transform__get_eulerAngles(__this_02,(MethodInfo *)0x0);
          fVar15 = UVar23.fields.y + -90.0 + fVar15 * 57.29578;
          fVar21 = floorf(fVar15 / 360.0);
          method_00 = (Il2CppClass *)0x2;
          __this_05 = (Characters_BaseCharacter_o **)TypeInfo_float;
          lVar10 = il2cpp_runtime_helper_022b2a40();
          if (lVar10 != 0) {
            if (*(int *)(lVar10 + 0x18) != 0) {
              fVar15 = fVar15 - fVar21 * 360.0;
              fVar21 = 360.0;
              if (fVar15 <= 360.0) {
                fVar21 = fVar15;
              }
              fVar21 = (float)(-(uint)(0.0 <= fVar15) & (uint)fVar21);
              *(uint *)(lVar10 + 0x20) =
                   (~-(uint)(180.0 < fVar21) & (uint)fVar21 |
                   (uint)(fVar21 + -360.0) & -(uint)(180.0 < fVar21)) ^ 0x80000000;
              if (*(int *)(lVar10 + 0x18) != 1) {
                *(float *)(lVar10 + 0x24) = fVar22 * 57.29578;
                return;
              }
            }
            goto label_0428a497;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0428a497:
  il2cpp_runtime_helper_022b2ca0();
  Controllers_BasePlayerController___ctor
            ((Controllers_ErenShifterPlayerController_o *)__this_05,(MethodInfo *)method_00);
  return;
}


// Controllers.BasePlayerController$$UpdateMovementInput
// il2cpp: void Controllers_BasePlayerController__UpdateMovementInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x428ade0

void Controllers_BasePlayerController__UpdateMovementInput
               (Controllers_BasePlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  bool_conflict *pbVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  long lVar4;
  UnityEngine_Transform_o *__this_00;
  undefined1 uVar5;
  bool_conflict bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  Characters_BaseCharacter_o *pCVar10;
  int iVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  float fStack_34;
  
  if (g_data_057adcc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057adcc6 = '\x01';
  }
  if ((char)inMenu == '\0') {
    pSVar2 = (__this->fields)._generalInput;
    if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Autorun, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
    bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pbVar1 = &(__this->fields)._autorun;
      *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
    }
    pSVar2 = (__this->fields)._generalInput;
    if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Forward, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
    bVar6 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    iVar9 = 1;
    if ((char)bVar6 == '\0') {
      pSVar2 = (__this->fields)._generalInput;
      if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).Back, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
      uVar7 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
      iVar9 = -(uVar7 & 0xff);
    }
    pSVar2 = (__this->fields)._generalInput;
    if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Left, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
    bVar6 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    uVar7 = 0xffffffff;
    if ((char)bVar6 == '\0') {
      pSVar2 = (__this->fields)._generalInput;
      if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).Right, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
      uVar8 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
      uVar7 = uVar8 & 0xff;
      if ((iVar9 != 0) || ((char)uVar8 != '\0')) goto label_0428aed3;
      iVar11 = 1;
      uVar7 = 0;
      if ((char)(__this->fields)._autorun == '\0') goto label_0428aed7;
    }
    else {
label_0428aed3:
      *(undefined1 *)&(__this->fields)._autorun = 0;
label_0428aed7:
      iVar11 = iVar9;
    }
    pCVar10 = (__this->fields)._character;
    if (iVar11 != 0 || uVar7 != 0) {
      lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) ||
         (__this_00 = *(UnityEngine_Transform_o **)(lVar4 + 0x10), __this_00 == (UnityEngine_Transform_o *)0x0
         )) goto label_0428aff8;
      rotation = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
      UVar13 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar13.fields.x * 57.29578;
      euler.fields.y = UVar13.fields.y * 57.29578;
      euler.fields.z = UVar13.fields.z * 57.29578;
      UVar13 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      fVar12 = atan2f((float)iVar11,(float)(int)uVar7);
      if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_0428aff8;
      fStack_34 = UVar13.fields.y;
      *(float *)&(pCVar10->fields).Detection = fVar12 * -57.29578 + fStack_34 + 90.0;
      pCVar10 = (__this->fields)._character;
      uVar5 = 1;
      if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_0428aff8;
      goto label_0428afa0;
    }
  }
  else {
    if ((char)(__this->fields)._autorun != '\0') {
      return;
    }
    pCVar10 = (__this->fields)._character;
  }
  if (pCVar10 == (Characters_BaseCharacter_o *)0x0) {
label_0428aff8:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  uVar5 = 0;
label_0428afa0:
  *(undefined1 *)((long)&(pCVar10->fields).Detection + 4) = uVar5;
  return;
}


// Controllers.BasePlayerController$$UpdateMenuInput
// il2cpp: void Controllers_BasePlayerController__UpdateMenuInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x428abc0

void Controllers_BasePlayerController__UpdateMenuInput
               (Controllers_BasePlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  GameManagers_InGameManager_o **ppGVar1;
  Characters_BaseCharacter_o *pCVar2;
  Settings_InteractionInputSettings_o *pSVar3;
  UI_InGameMenu_o *pUVar4;
  UI_EmoteHandler_o *__this_00;
  UI_ItemHandler_o *__this_01;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar5;
  Settings_KeybindSetting_o *pSVar6;
  System_Collections_Generic_List_EmoteTextPopup__c *__this_02;
  long lVar7;
  UnityEngine_Transform_o *__this_03;
  UI_EmoteTextPopup_array *__this_04;
  undefined1 uVar8;
  bool_conflict bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  char cVar14;
  UI_EmoteHandler_o *__this_05;
  int iVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  float fStack_4c;
  
  cVar14 = (char)inMenu;
  if (g_data_057adcc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adcc7 = '\x01';
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) goto label_0428ad5b;
label_0428abeb:
    __this_05 = (UI_EmoteHandler_o *)0x0;
    bVar9 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if ((char)bVar9 != '\0') goto label_0428ad8a;
label_0428abfa:
    if (*(int *)((long)&TypeInfo_CustomLogicManager[2].fields._emoteWheelPopup + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_05 = TypeInfo_CustomLogicManager;
      if (*(char *)((TypeInfo_CustomLogicManager[2].monitor)->m_Items + 5) == '\0') goto label_0428ac22;
      goto label_0428ad8a;
    }
    __this_05 = TypeInfo_CustomLogicManager;
    if (*(char *)((TypeInfo_CustomLogicManager[2].monitor)->m_Items + 5) != '\0') goto label_0428ad8a;
label_0428ac22:
    pCVar2 = (__this->fields)._character;
    __this_05 = TypeInfo_CustomLogicManager;
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar2->fields).FeedVictimName != '\0') goto label_0428ad8a;
      pSVar3 = (__this->fields)._interactionInput;
      if ((pSVar3 != (Settings_InteractionInputSettings_o *)0x0) &&
         (__this_05 = (UI_EmoteHandler_o *)(pSVar3->fields).EmoteMenu, __this_05 != (UI_EmoteHandler_o *)0x0))
      {
        cVar14 = '\0';
        bVar9 = Settings_KeybindSetting__GetKeyDown
                          ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          pUVar4 = (__this->fields)._inGameMenu;
          if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
             (__this_05 = (pUVar4->fields).EmoteHandler, __this_05 == (UI_EmoteHandler_o *)0x0))
          goto label_0428add5;
          cVar14 = '\0';
          UI_EmoteHandler__ToggleEmoteWheel(__this_05,(MethodInfo *)0x0);
        }
        pSVar3 = (__this->fields)._interactionInput;
        if ((pSVar3 != (Settings_InteractionInputSettings_o *)0x0) &&
           (__this_05 = (UI_EmoteHandler_o *)(pSVar3->fields).ItemMenu, __this_05 != (UI_EmoteHandler_o *)0x0)
           ) {
          cVar14 = '\0';
          bVar9 = Settings_KeybindSetting__GetKeyDown
                            ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            pUVar4 = (__this->fields)._inGameMenu;
            if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
               (__this_05 = (UI_EmoteHandler_o *)(pUVar4->fields).ItemHandler,
               __this_05 == (UI_EmoteHandler_o *)0x0)) goto label_0428add5;
            cVar14 = '\0';
            UI_ItemHandler__ToggleItemWheel((UI_ItemHandler_o *)__this_05,(MethodInfo *)0x0);
          }
          pSVar3 = (__this->fields)._interactionInput;
          if ((pSVar3 != (Settings_InteractionInputSettings_o *)0x0) &&
             (__this_05 = (UI_EmoteHandler_o *)(pSVar3->fields).MenuNext,
             __this_05 != (UI_EmoteHandler_o *)0x0)) {
            cVar14 = '\0';
            bVar9 = Settings_KeybindSetting__GetKeyDown
                              ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            pUVar4 = (__this->fields)._inGameMenu;
            if (pUVar4 != (UI_InGameMenu_o *)0x0) {
              __this_00 = (pUVar4->fields).EmoteHandler;
              __this_05 = (UI_EmoteHandler_o *)0x0;
              if (__this_00 != (UI_EmoteHandler_o *)0x0) {
                UI_EmoteHandler__NextEmoteWheel(__this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) goto label_0428abeb;
label_0428ad5b:
    il2cpp_runtime_helper_02337ed0();
    __this_05 = (UI_EmoteHandler_o *)0x0;
    bVar9 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if ((char)bVar9 == '\0') goto label_0428abfa;
label_0428ad8a:
    pUVar4 = (__this->fields)._inGameMenu;
    if ((pUVar4 != (UI_InGameMenu_o *)0x0) &&
       (__this_05 = (pUVar4->fields).EmoteHandler, __this_05 != (UI_EmoteHandler_o *)0x0)) {
      cVar14 = '\0';
      UI_EmoteHandler__SetEmoteWheel(__this_05,0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._inGameMenu;
      if (pUVar4 != (UI_InGameMenu_o *)0x0) {
        __this_01 = (pUVar4->fields).ItemHandler;
        __this_05 = (UI_EmoteHandler_o *)0x0;
        if (__this_01 != (UI_ItemHandler_o *)0x0) {
          UI_ItemHandler__SetItemWheel(__this_01,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0428add5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057adcc6 = '\x01';
  }
  if (cVar14 == '\0') {
    pSVar5 = (__this_05->fields)._emoteTextPopups;
    if ((pSVar5 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) ||
       (pSVar6 = pSVar5[2].monitor, pSVar6 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
    bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar6,0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      ppGVar1 = &(__this_05->fields)._inGameManager;
      *(byte *)ppGVar1 = *(byte *)ppGVar1 ^ 1;
    }
    pSVar5 = (__this_05->fields)._emoteTextPopups;
    if ((pSVar5 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) ||
       (pSVar6 = (Settings_KeybindSetting_o *)(pSVar5->fields)._syncRoot,
       pSVar6 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
    iVar12 = 1;
    if ((char)bVar9 == '\0') {
      pSVar5 = (__this_05->fields)._emoteTextPopups;
      if ((pSVar5 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) ||
         (__this_02 = pSVar5[1].klass, __this_02 == (System_Collections_Generic_List_EmoteTextPopup__c *)0x0))
      goto label_0428aff8;
      uVar10 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
      iVar12 = -(uVar10 & 0xff);
    }
    pSVar5 = (__this_05->fields)._emoteTextPopups;
    if ((pSVar5 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) ||
       (pSVar6 = pSVar5[1].monitor, pSVar6 == (Settings_KeybindSetting_o *)0x0)) goto label_0428aff8;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
    uVar10 = 0xffffffff;
    if ((char)bVar9 == '\0') {
      pSVar5 = (__this_05->fields)._emoteTextPopups;
      if ((pSVar5 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) ||
         (__this_04 = pSVar5[1].fields._items, __this_04 == (UI_EmoteTextPopup_array *)0x0))
      goto label_0428aff8;
      uVar11 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_04,0,(MethodInfo *)0x0);
      uVar10 = uVar11 & 0xff;
      if ((iVar12 != 0) || ((char)uVar11 != '\0')) goto label_0428aed3;
      iVar15 = 1;
      uVar10 = 0;
      if (*(char *)&(__this_05->fields)._inGameManager == '\0') goto label_0428aed7;
    }
    else {
label_0428aed3:
      *(undefined1 *)&(__this_05->fields)._inGameManager = 0;
label_0428aed7:
      iVar15 = iVar12;
    }
    lVar13 = *(long *)&(__this_05->fields)._currentEmoteWheelState;
    if (iVar15 != 0 || uVar10 != 0) {
      lVar7 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x28), lVar7 == 0)) ||
         (__this_03 = *(UnityEngine_Transform_o **)(lVar7 + 0x10), __this_03 == (UnityEngine_Transform_o *)0x0
         )) goto label_0428aff8;
      rotation = UnityEngine_Transform__get_rotation(__this_03,(MethodInfo *)0x0);
      UVar17 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar17.fields.x * 57.29578;
      euler.fields.y = UVar17.fields.y * 57.29578;
      euler.fields.z = UVar17.fields.z * 57.29578;
      UVar17 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      fVar16 = atan2f((float)iVar15,(float)(int)uVar10);
      if (lVar13 == 0) goto label_0428aff8;
      fStack_4c = UVar17.fields.y;
      *(float *)(lVar13 + 200) = fVar16 * -57.29578 + fStack_4c + 90.0;
      lVar13._0_4_ = (__this_05->fields)._currentEmoteWheelState;
      lVar13._4_4_ = (__this_05->fields)._currentEmoteCooldown;
      uVar8 = 1;
      if (lVar13 == 0) goto label_0428aff8;
      goto label_0428afa0;
    }
  }
  else {
    if (*(char *)&(__this_05->fields)._inGameManager != '\0') {
      return;
    }
    lVar13._0_4_ = (__this_05->fields)._currentEmoteWheelState;
    lVar13._4_4_ = (__this_05->fields)._currentEmoteCooldown;
  }
  if (lVar13 == 0) {
label_0428aff8:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  uVar8 = 0;
label_0428afa0:
  *(undefined1 *)(lVar13 + 0xcc) = uVar8;
  return;
}


// Controllers.BasePlayerController$$UpdateUI
// il2cpp: void Controllers_BasePlayerController__UpdateUI (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x428b000

void Controllers_BasePlayerController__UpdateUI
               (Controllers_BasePlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  return;
}


// Controllers.BasePlayerController$$GetTargetAngle
// il2cpp: float Controllers_BasePlayerController__GetTargetAngle (Controllers_BasePlayerController_o* __this, int32_t forward, int32_t right, const MethodInfo* method);
// 0x428b010

float Controllers_BasePlayerController__GetTargetAngle
                (Controllers_BasePlayerController_o *__this,int32_t forward,int32_t right,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  float fVar3;
  float fVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float in_XMM1_Da;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Quaternion_o UVar9;
  undefined8 uVar5;
  
  if (g_data_057adcc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057adcc8 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10), __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar9 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
    UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar9,(MethodInfo *)0x0);
    euler.fields.x = UVar8.fields.x * 57.29578;
    euler.fields.y = UVar8.fields.y * 57.29578;
    euler.fields.z = UVar8.fields.z * 57.29578;
    UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    fVar3 = atan2f((float)forward,(float)right);
    return (UVar8.fields.y + 90.0) - fVar3 * 57.29578;
  }
  fVar3 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    g_data_057a6845 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  fVar4 = in_XMM1_Da * in_XMM1_Da + fVar3 * fVar3 + 0.0;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
    in_XMM1_Dc = extraout_XMM0_Dc_00;
    in_XMM1_Dd = extraout_XMM0_Dd_00;
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (fVar4 <= 1e-05) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    uVar5 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    auVar6._4_4_ = 0;
    auVar6._0_4_ = fVar3;
    auVar6._8_4_ = extraout_XMM0_Dc;
    auVar6._12_4_ = extraout_XMM0_Dd;
    in_XMM1_Da = in_XMM1_Da / fVar4;
    auVar7._4_4_ = fVar4;
    auVar7._0_4_ = fVar4;
    auVar7._8_4_ = in_XMM1_Dc;
    auVar7._12_4_ = in_XMM1_Dd;
    auVar7 = divps(auVar6,auVar7);
    uVar5 = auVar7._0_8_;
  }
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a6844 = '\x01';
  }
  UVar8.fields.z = in_XMM1_Da;
  UVar8.fields.x = (float)(int)uVar5;
  UVar8.fields.y = (float)(int)((ulong)uVar5 >> 0x20);
  UVar9 = UnityEngine_Quaternion__LookRotation
                    (UVar8,(UnityEngine_Vector3_o)
                           *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                     (MethodInfo *)0x0);
  UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar9,(MethodInfo *)0x0);
  euler_00.fields.x = UVar8.fields.x * 57.29578;
  euler_00.fields.y = UVar8.fields.y * 57.29578;
  euler_00.fields.z = UVar8.fields.z * 57.29578;
  UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
  return UVar8.fields.y;
}


// Controllers.BasePlayerController$$GetAimAngles
// il2cpp: System_Single_array* Controllers_BasePlayerController__GetAimAngles (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x428a0f0

System_Single_array *
Controllers_BasePlayerController__GetAimAngles(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar4 [16];
  System_Single_array *pSVar5;
  System_Single_array *extraout_RAX;
  MethodInfo *__this_01;
  Controllers_ErenShifterPlayerController_o *__this_02;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Ray_o local_28;
  undefined8 uVar10;
  
  __this_02 = (Controllers_ErenShifterPlayerController_o *)__this;
  if (g_data_057adcc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_float;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc9 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar2 != 0) {
    __this_01 = *(MethodInfo **)(lVar2 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
    UVar14 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this_01 != (MethodInfo *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                (&local_28,(UnityEngine_Camera_o *)__this_01,UVar14,(MethodInfo *)0x0);
      auVar11._8_8_ = 0;
      auVar11._0_4_ = local_28.fields.m_Direction.fields.x;
      auVar11._4_4_ = local_28.fields.m_Direction.fields.y;
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
        iVar1 = *(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4);
        method = __this_01;
      }
      else {
        iVar1 = *(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4);
        method = __this_01;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar8 = 0;
      uVar9 = 0;
      fVar6 = local_28.fields.m_Direction.fields.z * local_28.fields.m_Direction.fields.z +
              local_28.fields.m_Direction.fields.y * local_28.fields.m_Direction.fields.y +
              local_28.fields.m_Direction.fields.x * local_28.fields.m_Direction.fields.x;
      if (fVar6 < 0.0) {
        fVar6 = sqrtf(fVar6);
        uVar8 = extraout_XMM0_Dc;
        uVar9 = extraout_XMM0_Dd;
        if (fVar6 <= 1e-05) goto label_0428a1f3;
label_0428a244:
        fVar12 = local_28.fields.m_Direction.fields.z / fVar6;
        auVar4._4_4_ = fVar6;
        auVar4._0_4_ = fVar6;
        auVar4._8_4_ = uVar8;
        auVar4._12_4_ = uVar9;
        auVar11 = divps(auVar11,auVar4);
        uVar10 = auVar11._0_8_;
      }
      else {
        fVar6 = SQRT(fVar6);
        if (1e-05 < fVar6) goto label_0428a244;
label_0428a1f3:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar10 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar12 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar6 = (float)uVar10 * 1000.0;
      fVar13 = (float)((ulong)uVar10 >> 0x20) * 1000.0;
      fVar12 = fVar12 * 1000.0;
      __this_02 = TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar7 = fVar12 * fVar12 + fVar13 * fVar13 + fVar6 * fVar6;
      if (fVar7 < 0.0) {
        fVar7 = sqrtf(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      fVar13 = asinf(fVar13 / fVar7);
      fVar6 = atan2f(fVar12,fVar6);
      pCVar3 = (__this->fields)._character;
      if ((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar3->fields).Dead, lVar2 != 0)) {
        __this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
        __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar14 = UnityEngine_Transform__get_eulerAngles(__this_00,(MethodInfo *)0x0);
          fVar6 = UVar14.fields.y + -90.0 + fVar6 * 57.29578;
          fVar12 = floorf(fVar6 / 360.0);
          method = (MethodInfo *)0x2;
          __this_02 = TypeInfo_float;
          pSVar5 = (System_Single_array *)il2cpp_runtime_helper_022b2a40();
          if (pSVar5 != (System_Single_array *)0x0) {
            iVar1 = (int)pSVar5->max_length;
            if (iVar1 != 0) {
              fVar6 = fVar6 - fVar12 * 360.0;
              fVar12 = 360.0;
              if (fVar6 <= 360.0) {
                fVar12 = fVar6;
              }
              fVar12 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar12);
              pSVar5->m_Items[0] =
                   -(float)(~-(uint)(180.0 < fVar12) & (uint)fVar12 |
                           (uint)(fVar12 + -360.0) & -(uint)(180.0 < fVar12));
              if (iVar1 != 1) {
                pSVar5->m_Items[1] = fVar13 * 57.29578;
                return pSVar5;
              }
            }
            goto label_0428a497;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0428a497:
  il2cpp_runtime_helper_022b2ca0();
  Controllers_BasePlayerController___ctor(__this_02,method);
  return extraout_RAX;
}


// Controllers.BasePlayerController$$GetTargetAngle
// il2cpp: float Controllers_BasePlayerController__GetTargetAngle (Controllers_BasePlayerController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x428b0d0

float Controllers_BasePlayerController__GetTargetAngle_418b0d0
                (Controllers_BasePlayerController_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method
                )

{
  int iVar1;
  float fVar2;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar3;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  float local_18;
  undefined8 uVar4;
  
  fVar3 = direction.fields.z;
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    g_data_057a6845 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  local_18 = direction.fields.x;
  fVar2 = fVar3 * fVar3 + local_18 * local_18 + 0.0;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
    in_XMM1_Dc = extraout_XMM0_Dc;
    in_XMM1_Dd = extraout_XMM0_Dd;
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  if (fVar2 <= 1e-05) {
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    uVar4 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar3 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    auVar5._0_8_ = direction.fields._0_8_ & 0xffffffff;
    auVar5._8_4_ = in_XMM0_Dc;
    auVar5._12_4_ = in_XMM0_Dd;
    fVar3 = fVar3 / fVar2;
    auVar6._4_4_ = fVar2;
    auVar6._0_4_ = fVar2;
    auVar6._8_4_ = in_XMM1_Dc;
    auVar6._12_4_ = in_XMM1_Dd;
    auVar6 = divps(auVar5,auVar6);
    uVar4 = auVar6._0_8_;
  }
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a6844 = '\x01';
  }
  UVar7.fields.z = fVar3;
  UVar7.fields.x = (float)(int)uVar4;
  UVar7.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
  rotation = UnityEngine_Quaternion__LookRotation
                       (UVar7,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                        (MethodInfo *)0x0);
  UVar7 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar7.fields.x * 57.29578;
  euler.fields.y = UVar7.fields.y * 57.29578;
  euler.fields.z = UVar7.fields.z * 57.29578;
  UVar7 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  return UVar7.fields.y;
}


// Controllers.BasePlayerController$$.ctor
// il2cpp: void Controllers_BasePlayerController___ctor (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x428a4b0

void Controllers_BasePlayerController___ctor
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Component_o *__this_00;
  
  if (g_data_057adcca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"QuickSelect5");
    il2cpp_runtime_helper_023445d0(&"QuickSelect2");
    il2cpp_runtime_helper_023445d0(&"QuickSelect1");
    il2cpp_runtime_helper_023445d0(&"QuickSelect3");
    il2cpp_runtime_helper_023445d0(&"QuickSelect4");
    il2cpp_runtime_helper_023445d0(&"QuickSelect8");
    il2cpp_runtime_helper_023445d0(&"QuickSelect6");
    il2cpp_runtime_helper_023445d0(&"QuickSelect7");
    g_data_057adcca = '\x01';
  }
  __this_00 = TypeInfo_string;
  pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      __this_00 = (UnityEngine_Component_o *)pSVar1->m_Items;
      pSVar1->m_Items[0] = "QuickSelect1";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar1->max_length) {
        __this_00 = (UnityEngine_Component_o *)(pSVar1->m_Items + 1);
        pSVar1->m_Items[1] = "QuickSelect2";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)pSVar1->max_length) {
          __this_00 = (UnityEngine_Component_o *)(pSVar1->m_Items + 2);
          pSVar1->m_Items[2] = "QuickSelect3";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar1->max_length) {
            __this_00 = (UnityEngine_Component_o *)(pSVar1->m_Items + 3);
            pSVar1->m_Items[3] = "QuickSelect4";
            il2cpp_runtime_helper_022b4080();
            if (4 < (uint)pSVar1->max_length) {
              __this_00 = (UnityEngine_Component_o *)(pSVar1->m_Items + 4);
              pSVar1->m_Items[4] = "QuickSelect5";
              il2cpp_runtime_helper_022b4080();
              if (5 < (uint)pSVar1->max_length) {
                __this_00 = (UnityEngine_Component_o *)(pSVar1->m_Items + 5);
                pSVar1->m_Items[5] = "QuickSelect6";
                il2cpp_runtime_helper_022b4080();
                if (6 < (uint)pSVar1->max_length) {
                  __this_00 = (UnityEngine_Component_o *)(pSVar1->m_Items + 6);
                  pSVar1->m_Items[6] = "QuickSelect7";
                  il2cpp_runtime_helper_022b4080();
                  if (7 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[7] = "QuickSelect8";
                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 7);
                    (__this->fields)._quickSelectOptions = pSVar1;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._quickSelectOptions);
                    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    g_data_057adcc2 = '\x01';
  }
  pIVar2 = UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
  __this_00[1].monitor = pIVar2;
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pIVar2);
  return;
}


