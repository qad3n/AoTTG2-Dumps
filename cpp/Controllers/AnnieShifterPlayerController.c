// Type: Controllers.AnnieShifterPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/AnnieShifterPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/AnnieShifterPlayerController.cs
// --------------------------------

// Controllers.AnnieShifterPlayerController$$Awake
// il2cpp: void Controllers_AnnieShifterPlayerController__Awake (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x4289090

void Controllers_AnnieShifterPlayerController__Awake
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  Characters_AnnieShifter_o **ppCVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  System_Action_Hashtable__o *pSVar5;
  System_Action_Hashtable__c *__this_00;
  Settings_ErenShifterInputSettings_o *pSVar6;
  Characters_ErenShifter_o *pCVar7;
  UnityEngine_Transform_o *pUVar8;
  Settings_ErenShifterInputSettings_c *__this_01;
  System_Collections_Specialized_OrderedDictionary_o *pSVar9;
  System_Collections_ICollection_c *pSVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  Il2CppMethodPointer vtableDispatch;
  undefined1 auVar12 [16];
  char cVar13;
  bool_conflict bVar14;
  Characters_AnnieShifter_o *pCVar15;
  Characters_BaseCharacter_o *pCVar16;
  Il2CppClass *pIVar17;
  System_Collections_ICollection_o *pSVar18;
  VirtualInvokeData *pVVar19;
  Settings_KeybindSetting_o *pSVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  System_Single_array *pSVar23;
  long lVar24;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  uint uVar25;
  Settings_AnnieShifterInputSettings_o *pSVar26;
  UI_InGameMenu_o *pUVar27;
  MethodInfo *__this_02;
  MethodInfo *pMVar28;
  Controllers_ErenShifterPlayerController_o *pCVar29;
  long *plVar30;
  long lVar31;
  Controllers_ErenShifterPlayerController_o *pCVar32;
  Characters_ErenShifter_o *pCVar33;
  Controllers_ErenShifterPlayerController_o **__this_03;
  System_String_o *unaff_R12;
  long *plVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar38;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  UnityEngine_Vector3_o UVar42;
  undefined1 auVar43 [12];
  UnityEngine_Ray_o UStack_80;
  Controllers_ErenShifterPlayerController_o *pCStack_68;
  Controllers_ErenShifterPlayerController_o *pCStack_60;
  
  if (g_data_057adcbb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AnnieShifter_GetComponent_AnnieShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057adcbb = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,method);
  pCVar15 = (Characters_AnnieShifter_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_AnnieShifter_GetComponent_AnnieShifter);
  ppCVar1 = &(__this->fields)._shifter;
  (__this->fields)._shifter = pCVar15;
  pCVar29 = (Controllers_ErenShifterPlayerController_o *)ppCVar1;
  il2cpp_runtime_helper_022b4080();
  uVar25 = (uint)pCVar15;
  lVar24 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar24 != 0) {
    pSVar26 = *(Settings_AnnieShifterInputSettings_o **)(lVar24 + 0x38);
    pCVar29 = (Controllers_ErenShifterPlayerController_o *)&(__this->fields)._shifterInput;
    (__this->fields)._shifterInput = pSVar26;
    il2cpp_runtime_helper_022b4080();
    uVar25 = (uint)pSVar26;
    pCVar15 = (__this->fields)._shifter;
    if (((pCVar15 != (Characters_AnnieShifter_o *)0x0) &&
        (pSVar5 = (pCVar15->fields).OnPlayerPropertiesChanged, pSVar5 != (System_Action_Hashtable__o *)0x0))
       && (pCVar29 = pSVar5[1].monitor, pCVar29 != (Controllers_ErenShifterPlayerController_o *)0x0)) {
      uVar25 = 0;
      Characters_BaseHitbox__ScaleSphereCollider((Characters_BaseHitbox_o *)pCVar29,1.5,(MethodInfo *)0x0);
      if (((*ppCVar1 != (Characters_AnnieShifter_o *)0x0) &&
          (pSVar5 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
          pSVar5 != (System_Action_Hashtable__o *)0x0)) &&
         (pCVar29 = (Controllers_ErenShifterPlayerController_o *)pSVar5[1].fields.method_ptr,
         pCVar29 != (Controllers_ErenShifterPlayerController_o *)0x0)) {
        uVar25 = 0;
        Characters_BaseHitbox__ScaleSphereCollider((Characters_BaseHitbox_o *)pCVar29,1.5,(MethodInfo *)0x0);
        if (((*ppCVar1 != (Characters_AnnieShifter_o *)0x0) &&
            (pSVar5 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
            pSVar5 != (System_Action_Hashtable__o *)0x0)) &&
           (pCVar29 = (Controllers_ErenShifterPlayerController_o *)pSVar5[1].fields.invoke_impl,
           pCVar29 != (Controllers_ErenShifterPlayerController_o *)0x0)) {
          uVar25 = 0;
          Characters_BaseHitbox__ScaleSphereCollider((Characters_BaseHitbox_o *)pCVar29,1.5,(MethodInfo *)0x0)
          ;
          if (((*ppCVar1 != (Characters_AnnieShifter_o *)0x0) &&
              (pSVar5 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
              pSVar5 != (System_Action_Hashtable__o *)0x0)) &&
             (pCVar29 = (Controllers_ErenShifterPlayerController_o *)pSVar5[1].fields.m_target,
             pCVar29 != (Controllers_ErenShifterPlayerController_o *)0x0)) {
            uVar25 = 0;
            Characters_BaseHitbox__ScaleSphereCollider
                      ((Characters_BaseHitbox_o *)pCVar29,1.5,(MethodInfo *)0x0);
            if ((*ppCVar1 != (Characters_AnnieShifter_o *)0x0) &&
               (pSVar5 = ((*ppCVar1)->fields).OnPlayerPropertiesChanged,
               pSVar5 != (System_Action_Hashtable__o *)0x0)) {
              __this_00 = pSVar5[1].klass;
              pCVar29 = (Controllers_ErenShifterPlayerController_o *)0x0;
              if (__this_00 != (System_Action_Hashtable__c *)0x0) {
                Characters_BaseHitbox__ScaleSphereCollider
                          ((Characters_BaseHitbox_o *)__this_00,1.5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plVar30 = (long *)pCVar29;
  if (g_data_057adcc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    plVar30 = &TypeInfo_UIManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc3 = '\x01';
  }
  plVar34 = &TypeInfo_SettingsManager;
  lVar24 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar24 != 0) {
    pCVar16 = *(Characters_BaseCharacter_o **)(lVar24 + 0x20);
    plVar30 = (long *)&(pCVar29->fields)._generalInput;
    (pCVar29->fields)._generalInput = (Settings_GeneralInputSettings_o *)pCVar16;
    il2cpp_runtime_helper_022b4080();
    uVar25 = (uint)pCVar16;
    lVar24 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (lVar24 != 0) {
      (pCVar29->fields)._interactionInput = *(Settings_InteractionInputSettings_o **)(lVar24 + 0x48);
      il2cpp_runtime_helper_022b4080(&(pCVar29->fields)._interactionInput);
      pCVar16 = (Characters_BaseCharacter_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pCVar29,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      (pCVar29->fields)._character = pCVar16;
      il2cpp_runtime_helper_022b4080(&(pCVar29->fields)._character,pCVar16);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pUVar27 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (pUVar27 != (UI_InGameMenu_o *)0x0) goto label_0428933b;
label_042893b0:
        (pCVar29->fields)._inGameMenu = (UI_InGameMenu_o *)0x0;
label_042893bc:
        il2cpp_runtime_helper_022b4080(&(pCVar29->fields)._inGameMenu);
        pIVar17 = TypeInfo_InGameManager;
        pUVar27 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (pUVar27 != (UI_InGameMenu_o *)0x0) {
          bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
          if ((bVar2 <= (((System_Collections_Generic_HashSet_GameObject__c *)pUVar27->klass)->_2).
                        naturalAligment) &&
             ((((System_Collections_Generic_HashSet_GameObject__c *)pUVar27->klass)->_2).typeHierarchy
              [(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
            (pCVar29->fields)._gameManager = (GameManagers_InGameManager_o *)pUVar27;
            if ((bVar2 <= (((System_Collections_Generic_HashSet_GameObject__c *)pUVar27->klass)->_2).
                          naturalAligment) &&
               ((((System_Collections_Generic_HashSet_GameObject__c *)pUVar27->klass)->_2).typeHierarchy
                [(ulong)bVar2 - 1] == pIVar17)) goto label_04289435;
          }
          goto label_04289422;
        }
      }
      else {
        pUVar27 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (pUVar27 == (UI_InGameMenu_o *)0x0) goto label_042893b0;
label_0428933b:
        pIVar17 = TypeInfo_InGameMenu;
        bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if ((bVar2 <= (((System_Collections_Generic_HashSet_GameObject__c *)pUVar27->klass)->_2).
                      naturalAligment) &&
           ((((System_Collections_Generic_HashSet_GameObject__c *)pUVar27->klass)->_2).typeHierarchy
            [(ulong)bVar2 - 1] == TypeInfo_InGameMenu)) {
          (pCVar29->fields)._inGameMenu = pUVar27;
          if (((((System_Collections_Generic_HashSet_GameObject__c *)pUVar27->klass)->_2).naturalAligment <
               bVar2) ||
             ((((System_Collections_Generic_HashSet_GameObject__c *)pUVar27->klass)->_2).typeHierarchy
              [(ulong)bVar2 - 1] != pIVar17)) goto label_04289422;
          goto label_042893bc;
        }
label_04289422:
        il2cpp_runtime_helper_022b2fd0(pUVar27,pIVar17);
      }
      (pCVar29->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
label_04289435:
      il2cpp_runtime_helper_022b4080(&(pCVar29->fields)._gameManager);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar28 = extraout_RDX;
  pCStack_60 = pCVar29;
  if (g_data_057adcbc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&"Attack");
    g_data_057adcbc = '\x01';
    pMVar28 = extraout_RDX_00;
  }
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)plVar30,uVar25 & 0xff,pMVar28);
  if ((char)uVar25 != '\0') {
    return;
  }
  pSVar6 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifterInput;
  if ((pSVar6 == (Settings_ErenShifterInputSettings_o *)0x0) ||
     (pSVar20 = (pSVar6->fields).Walk, pSVar20 == (Settings_KeybindSetting_o *)0x0)) {
label_042899e0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar33 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifter;
    bVar14 = Settings_KeybindSetting__GetKey(pSVar20,0,(MethodInfo *)0x0);
    if (pCVar33 == (Characters_ErenShifter_o *)0x0) goto label_042899e0;
    *(char *)&(pCVar33->fields).State = (char)bVar14;
    pCVar33 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifter;
    if (pCVar33 == (Characters_ErenShifter_o *)0x0) goto label_042899e0;
    cVar13 = (*(pCVar33->klass->vtable)._123_CanAction.methodPtr)();
    if (cVar13 == '\0') {
      return;
    }
    pSVar6 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifterInput;
    if ((pSVar6 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar20 = (pSVar6->fields).Jump, pSVar20 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar20,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pCVar33 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifter;
      if (pCVar33 != (Characters_ErenShifter_o *)0x0) {
        cVar13 = *(char *)((long)&(pCVar33->fields).Detection + 4);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        uVar22 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar35 = (float)uVar22;
        if (cVar13 == '\0') {
label_042895de:
          (*(pCVar33->klass->vtable)._126_Jump.methodPtr)
                    (fVar35,pCVar33,(pCVar33->klass->vtable)._126_Jump.method);
          return;
        }
        pCVar7 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifter;
        if ((pCVar7 != (Characters_ErenShifter_o *)0x0) &&
           (lVar24 = *(long *)&(pCVar7->fields).Dead, lVar24 != 0)) {
          UStack_80.fields.m_Direction.fields.x = (float)((ulong)uVar22 >> 0x20);
          UStack_80.fields.m_Direction.fields.y = 0.0;
          UStack_80.fields.m_Direction.fields.z = 0.0;
          UStack_80.fields.m_Origin.fields.x = (float)*(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          pUVar8 = *(UnityEngine_Transform_o **)(lVar24 + 0x10);
          UStack_80.fields.m_Origin.fields.z = fVar35;
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UVar42 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
            fVar35 = UVar42.fields.x + UStack_80.fields.m_Origin.fields.z;
            goto label_042895de;
          }
        }
      }
      goto label_042899e0;
    }
    pSVar6 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifterInput;
    if ((pSVar6 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar20 = (pSVar6->fields).Kick, pSVar20 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar20,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pCVar33 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifter;
      if (pCVar33 != (Characters_ErenShifter_o *)0x0) {
        (*(pCVar33->klass->vtable)._131_Kick.methodPtr)(pCVar33,(pCVar33->klass->vtable)._131_Kick.method);
        return;
      }
      goto label_042899e0;
    }
    pSVar6 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifterInput;
    if ((pSVar6 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar20 = pSVar6[1].fields.Jump, pSVar20 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    pMVar28 = (MethodInfo *)0x0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar20,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      if (g_data_057adcbd == '\0') {
        il2cpp_runtime_helper_023445d0(&"AttackBrushFrontL");
        il2cpp_runtime_helper_023445d0(&"AttackBrushFrontR");
        g_data_057adcbd = '\x01';
      }
      pCVar29 = (Controllers_ErenShifterPlayerController_o *)plVar30;
      pSVar23 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)plVar30,pMVar28);
      if (pSVar23 == (System_Single_array *)0x0) {
label_04289e6c:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar23->max_length != 0) {
        pCVar33 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifter;
        pCVar29 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar33 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar23->m_Items[0] <= 0.0) {
            puVar21 = &"AttackBrushFrontL";
          }
          else {
            puVar21 = &"AttackBrushFrontR";
          }
          vtableDispatch = (pCVar33->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar33,*puVar21,(pCVar33->klass->vtable)._128_Attack.method,vtableDispatch);
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
      pCVar32 = pCVar29;
      pSVar23 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar29,pMVar28);
      if (pSVar23 == (System_Single_array *)0x0) {
label_04289efc:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar23->max_length != 0) {
        pCVar33 = (pCVar29->fields)._shifter;
        pCVar32 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar33 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar23->m_Items[0] <= 0.0) {
            puVar21 = &"AttackBrushHeadL";
          }
          else {
            puVar21 = &"AttackBrushHeadR";
          }
          vtableDispatch = (pCVar33->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar33,*puVar21,(pCVar33->klass->vtable)._128_Attack.method,vtableDispatch);
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
      pCVar29 = pCVar32;
      pSVar23 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar32,pMVar28);
      if (pSVar23 == (System_Single_array *)0x0) {
label_04289f8c:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar23->max_length != 0) {
        pCVar33 = (pCVar32->fields)._shifter;
        pCVar29 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar33 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar23->m_Items[0] <= 0.0) {
            puVar21 = &"AttackGrabBottomLeft";
          }
          else {
            puVar21 = &"AttackGrabBottomRight";
          }
          vtableDispatch = (pCVar33->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar33,*puVar21,(pCVar33->klass->vtable)._128_Attack.method,vtableDispatch);
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
      pCVar32 = pCVar29;
      pSVar23 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar29,pMVar28);
      if (pSVar23 == (System_Single_array *)0x0) {
label_0428a01c:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar23->max_length != 0) {
        pCVar33 = (pCVar29->fields)._shifter;
        pCVar32 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar33 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar23->m_Items[0] <= 0.0) {
            puVar21 = &"AttackGrabMidLeft";
          }
          else {
            puVar21 = &"AttackGrabMidRight";
          }
          vtableDispatch = (pCVar33->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar33,*puVar21,(pCVar33->klass->vtable)._128_Attack.method,vtableDispatch);
          return;
        }
        goto label_0428a01c;
      }
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057adcc1 == '\0') {
        pCStack_60 = (Controllers_ErenShifterPlayerController_o *)0x428a049;
        il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
        pCStack_60 = (Controllers_ErenShifterPlayerController_o *)0x428a055;
        il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
        pCStack_60 = (Controllers_ErenShifterPlayerController_o *)0x428a061;
        il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
        g_data_057adcc1 = '\x01';
      }
      pCStack_60 = (Controllers_ErenShifterPlayerController_o *)0x428a070;
      pCVar29 = pCVar32;
      pSVar23 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar32,pMVar28);
      if (pSVar23 == (System_Single_array *)0x0) {
label_0428a0df:
        pCStack_60 = (Controllers_ErenShifterPlayerController_o *)0x428a0e4;
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar23->max_length != 0) {
        if (pSVar23->m_Items[0] <= 45.0) {
          if (pSVar23->m_Items[0] < -45.0) {
            puVar21 = &"AttackGrabUpLeft";
            pCVar33 = (pCVar32->fields)._shifter;
            if (pCVar33 != (Characters_ErenShifter_o *)0x0) goto label_0428a099;
            pCVar29 = (Controllers_ErenShifterPlayerController_o *)0x0;
            goto label_0428a0df;
          }
          puVar21 = &"AttackGrabUp";
          pCVar33 = (pCVar32->fields)._shifter;
        }
        else {
          puVar21 = &"AttackGrabUpRight";
          pCVar33 = (pCVar32->fields)._shifter;
        }
        pCVar29 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar33 != (Characters_ErenShifter_o *)0x0) {
label_0428a099:
          vtableDispatch = (pCVar33->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar33,*puVar21,(pCVar33->klass->vtable)._128_Attack.method,vtableDispatch);
          return;
        }
        goto label_0428a0df;
      }
      pCStack_60 = (Controllers_ErenShifterPlayerController_o *)0x428a0e9;
      il2cpp_runtime_helper_022b2ca0();
      pCStack_60 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SettingsManager;
      __this_03 = (Controllers_ErenShifterPlayerController_o **)pCVar29;
      pCStack_68 = pCVar32;
      if (g_data_057adcc9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        __this_03 = &TypeInfo_float;
        il2cpp_runtime_helper_023445d0();
        g_data_057adcc9 = '\x01';
      }
      lVar24 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (lVar24 != 0) {
        __this_02 = *(MethodInfo **)(lVar24 + 0x20);
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = (Controllers_ErenShifterPlayerController_o **)0x0;
        UVar42 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
        if (__this_02 != (MethodInfo *)0x0) {
          UnityEngine_Camera__ScreenPointToRay_4db37e0
                    (&UStack_80,(UnityEngine_Camera_o *)__this_02,UVar42,(MethodInfo *)0x0);
          auVar39._4_4_ = UStack_80.fields.m_Direction.fields.y;
          auVar39._0_4_ = UStack_80.fields.m_Direction.fields.x;
          auVar39._8_8_ = 0;
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
            iVar4 = *(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4);
            pMVar28 = __this_02;
          }
          else {
            iVar4 = *(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4);
            pMVar28 = __this_02;
          }
          if (iVar4 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar37 = 0;
          uVar38 = 0;
          fVar35 = UStack_80.fields.m_Direction.fields.z * UStack_80.fields.m_Direction.fields.z +
                   UStack_80.fields.m_Direction.fields.y * UStack_80.fields.m_Direction.fields.y +
                   UStack_80.fields.m_Direction.fields.x * UStack_80.fields.m_Direction.fields.x;
          if (fVar35 < 0.0) {
            fVar35 = sqrtf(fVar35);
            uVar37 = extraout_XMM0_Dc;
            uVar38 = extraout_XMM0_Dd;
            if (fVar35 <= 1e-05) goto label_0428a1f3;
label_0428a244:
            fVar40 = UStack_80.fields.m_Direction.fields.z / fVar35;
            auVar12._4_4_ = fVar35;
            auVar12._0_4_ = fVar35;
            auVar12._8_4_ = uVar37;
            auVar12._12_4_ = uVar38;
            auVar39 = divps(auVar39,auVar12);
            uVar22 = auVar39._0_8_;
          }
          else {
            fVar35 = SQRT(fVar35);
            if (1e-05 < fVar35) goto label_0428a244;
label_0428a1f3:
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            uVar22 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar40 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          if (g_data_057a6841 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6841 = '\x01';
          }
          fVar35 = (float)uVar22 * 1000.0;
          fVar41 = (float)((ulong)uVar22 >> 0x20) * 1000.0;
          fVar40 = fVar40 * 1000.0;
          __this_03 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_Math;
          if (*(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar36 = fVar40 * fVar40 + fVar41 * fVar41 + fVar35 * fVar35;
          if (fVar36 < 0.0) {
            fVar36 = sqrtf(fVar36);
          }
          else {
            fVar36 = SQRT(fVar36);
          }
          fVar41 = asinf(fVar41 / fVar36);
          fVar35 = atan2f(fVar40,fVar35);
          pCVar16 = (pCVar29->fields)._character;
          if ((pCVar16 != (Characters_BaseCharacter_o *)0x0) &&
             (lVar24 = *(long *)&(pCVar16->fields).Dead, lVar24 != 0)) {
            pUVar8 = *(UnityEngine_Transform_o **)(lVar24 + 0x10);
            __this_03 = (Controllers_ErenShifterPlayerController_o **)0x0;
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              UVar42 = UnityEngine_Transform__get_eulerAngles(pUVar8,(MethodInfo *)0x0);
              fVar35 = UVar42.fields.y + -90.0 + fVar35 * 57.29578;
              fVar40 = floorf(fVar35 / 360.0);
              pMVar28 = (MethodInfo *)0x2;
              __this_03 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_float;
              lVar24 = il2cpp_runtime_helper_022b2a40();
              if (lVar24 != 0) {
                if (*(int *)(lVar24 + 0x18) != 0) {
                  fVar35 = fVar35 - fVar40 * 360.0;
                  fVar40 = 360.0;
                  if (fVar35 <= 360.0) {
                    fVar40 = fVar35;
                  }
                  fVar40 = (float)(-(uint)(0.0 <= fVar35) & (uint)fVar40);
                  *(uint *)(lVar24 + 0x20) =
                       (~-(uint)(180.0 < fVar40) & (uint)fVar40 |
                       (uint)(fVar40 + -360.0) & -(uint)(180.0 < fVar40)) ^ 0x80000000;
                  if (*(int *)(lVar24 + 0x18) != 1) {
                    *(float *)(lVar24 + 0x24) = fVar41 * 57.29578;
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
      Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this_03,pMVar28);
      return;
    }
    pSVar6 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifterInput;
    if ((pSVar6 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar20 = pSVar6[1].fields.Walk, pSVar20 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    pMVar28 = (MethodInfo *)0x0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar20,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackBrushHead
                ((Controllers_AnnieShifterPlayerController_o *)plVar30,pMVar28);
      return;
    }
    pSVar6 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifterInput;
    if ((pSVar6 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar20 = pSVar6[1].fields.AttackCombo, pSVar20 == (Settings_KeybindSetting_o *)0x0))
    goto label_042899e0;
    pMVar28 = (MethodInfo *)0x0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar20,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackGrabBottom
                ((Controllers_AnnieShifterPlayerController_o *)plVar30,pMVar28);
      return;
    }
    pSVar6 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifterInput;
    if ((pSVar6 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (__this_01 = pSVar6[2].klass, __this_01 == (Settings_ErenShifterInputSettings_c *)0x0))
    goto label_042899e0;
    pMVar28 = (MethodInfo *)0x0;
    bVar14 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)__this_01,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackGrabMid
                ((Controllers_AnnieShifterPlayerController_o *)plVar30,pMVar28);
      return;
    }
    pSVar6 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifterInput;
    if ((pSVar6 == (Settings_ErenShifterInputSettings_o *)0x0) ||
       (pSVar20 = pSVar6[2].monitor, pSVar20 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    pMVar28 = (MethodInfo *)0x0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar20,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackGrabUp
                ((Controllers_AnnieShifterPlayerController_o *)plVar30,pMVar28);
      return;
    }
    pSVar6 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifterInput;
    if (((pSVar6 == (Settings_ErenShifterInputSettings_o *)0x0) ||
        (pSVar9 = (pSVar6->fields).Settings,
        pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
       (pSVar18 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar9,(MethodInfo *)0x0),
       pSVar18 == (System_Collections_ICollection_o *)0x0)) goto label_042899e0;
    pSVar10 = pSVar18->klass;
    uVar3._0_1_ = (pSVar10->_2).rank;
    uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar24 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar24) == TypeInfo_IEnumerable) {
          pVVar19 = pSVar10->vtable + *(int *)((long)&pIVar11->offset + lVar24);
          goto label_04289812;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar24);
    }
    pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar18,TypeInfo_IEnumerable,0);
label_04289812:
    plVar34 = (long *)(*pVVar19->methodPtr)(pSVar18,pVVar19->method);
    if (plVar34 == (long *)0x0) goto label_04289a0e;
    UStack_80.fields.m_Origin.fields.x = 0.0;
    UStack_80.fields.m_Origin.fields.y = 0.0;
label_04289843:
    lVar24 = *plVar34;
    if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
      lVar31 = 0;
      do {
        if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar31) == TypeInfo_IEnumerator) {
          puVar21 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar31) * 0x10 + lVar24 + 0x138);
          goto label_042898a1;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar31);
    }
    puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar34,TypeInfo_IEnumerator,0);
label_042898a1:
    cVar13 = (*(code *)*puVar21)(plVar34,puVar21[1]);
    if (cVar13 == '\0') goto label_04289adc;
    lVar24 = *plVar34;
    if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
      lVar31 = 0;
      do {
        if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar31) == TypeInfo_IEnumerator) {
          puVar21 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar31) + 1) * 0x10 + lVar24 + 0x138);
          goto label_04289919;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar31);
    }
    puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar34,TypeInfo_IEnumerator,1);
label_04289919:
    unaff_R12 = (System_String_o *)(*(code *)*puVar21)(plVar34,puVar21[1]);
    if (unaff_R12 == (System_String_o *)0x0) goto label_042899ed;
    if (unaff_R12->klass == g_data_057b9c00) {
      bVar14 = System_String__StartsWith(unaff_R12,"Attack",(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        pSVar6 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifterInput;
        if (pSVar6 == (Settings_ErenShifterInputSettings_o *)0x0) goto label_042899fa;
        pSVar9 = (pSVar6->fields).Settings;
        if (pSVar9 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_042899ff;
        pSVar20 = (Settings_KeybindSetting_o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar9,(Il2CppObject *)unaff_R12,(MethodInfo *)0x0);
        if (pSVar20 == (Settings_KeybindSetting_o *)0x0) goto label_04289a04;
        bVar2 = (TypeInfo_KeybindSetting->_2).naturalAligment;
        if (((pSVar20->klass->_2).naturalAligment < bVar2) ||
           ((pSVar20->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_KeybindSetting)) goto label_042899f2;
        bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar20,0,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          pCVar33 = (((Controllers_ErenShifterPlayerController_o *)plVar30)->fields)._shifter;
          if (pCVar33 == (Characters_ErenShifter_o *)0x0) goto label_04289a09;
          (*(pCVar33->klass->vtable)._128_Attack.methodPtr)
                    (pCVar33,unaff_R12,(pCVar33->klass->vtable)._128_Attack.method);
        }
      }
      goto label_04289843;
    }
  }
  il2cpp_runtime_helper_022b2fd0(unaff_R12);
label_042899ed:
  pSVar20 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_022b2c90();
label_042899f2:
  il2cpp_runtime_helper_022b2fd0(pSVar20);
label_042899fa:
  il2cpp_runtime_helper_022b2c90();
label_042899ff:
  il2cpp_runtime_helper_022b2c90();
label_04289a04:
  il2cpp_runtime_helper_022b2c90();
label_04289a09:
  il2cpp_runtime_helper_022b2c90();
label_04289a0e:
  auVar43 = il2cpp_runtime_helper_022b2c90();
  uVar22 = auVar43._0_8_;
  if (auVar43._8_4_ != 1) {
    UStack_80.fields.m_Origin.fields.x = 0.0;
    UStack_80.fields.m_Origin.fields.y = 0.0;
    goto label_04289b71;
  }
  plVar30 = (long *)__cxa_begin_catch(uVar22);
  UStack_80.fields.m_Origin.fields._0_8_ = *plVar30;
  __cxa_end_catch();
label_04289adc:
  plVar30 = (long *)il2cpp_runtime_helper_023051f0(plVar34,TypeInfo_IDisposable);
  if (plVar30 != (long *)0x0) {
    lVar24 = *plVar30;
    if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
      lVar31 = 0;
      do {
        if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar31) == TypeInfo_IDisposable) {
          puVar21 = (undefined8 *)
                    (lVar24 + (long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar31) * 0x10 + 0x138);
          goto label_04289b44;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar31);
    }
    puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar30,TypeInfo_IDisposable,0);
label_04289b44:
    (*(code *)*puVar21)(plVar30,puVar21[1]);
  }
  if (UStack_80.fields.m_Origin.fields._0_8_ == 0) {
    return;
  }
  do {
    uVar22 = il2cpp_runtime_helper_022fefe0();
label_04289b71:
    plVar30 = (long *)il2cpp_runtime_helper_023051f0(plVar34,TypeInfo_IDisposable);
    if (plVar30 != (long *)0x0) {
      lVar24 = *plVar30;
      if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
        lVar31 = 0;
        do {
          if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar31) == TypeInfo_IDisposable) {
            puVar21 = (undefined8 *)
                      (lVar24 + (long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar31) * 0x10 + 0x138);
            goto label_04289bdd;
          }
          lVar31 = lVar31 + 0x10;
        } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar31);
      }
      puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar30,TypeInfo_IDisposable,0);
label_04289bdd:
      (*(code *)*puVar21)(plVar30,puVar21[1]);
    }
    if (UStack_80.fields.m_Origin.fields._0_8_ == 0) {
      _Unwind_Resume(uVar22);
    }
    il2cpp_runtime_helper_022fefe0(UStack_80.fields.m_Origin.fields._0_8_);
  } while( true );
}


// Controllers.AnnieShifterPlayerController$$UpdateActionInput
// il2cpp: void Controllers_AnnieShifterPlayerController__UpdateActionInput (Controllers_AnnieShifterPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x4289450

void Controllers_AnnieShifterPlayerController__UpdateActionInput
               (Controllers_AnnieShifterPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  Settings_AnnieShifterInputSettings_o *pSVar4;
  Characters_AnnieShifter_o *pCVar5;
  Characters_AnnieShifter_o *pCVar6;
  UnityEngine_Transform_o *pUVar7;
  System_Collections_Specialized_OrderedDictionary_o *pSVar8;
  System_Collections_ICollection_c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  Il2CppMethodPointer vtableDispatch;
  Characters_BaseCharacter_o *pCVar11;
  undefined1 auVar12 [16];
  char cVar13;
  bool_conflict bVar14;
  System_Collections_ICollection_o *pSVar15;
  VirtualInvokeData *pVVar16;
  Settings_KeybindSetting_o *pSVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  System_Single_array *pSVar21;
  long lVar22;
  MethodInfo *extraout_RDX;
  MethodInfo *__this_00;
  MethodInfo *pMVar23;
  long lVar24;
  Controllers_ErenShifterPlayerController_o *pCVar25;
  Controllers_ErenShifterPlayerController_o *pCVar26;
  Characters_ErenShifter_o *pCVar27;
  Controllers_ErenShifterPlayerController_o **__this_01;
  System_String_o *unaff_R12;
  long *unaff_R14;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  UnityEngine_Vector3_o UVar35;
  undefined1 auVar36 [12];
  UnityEngine_Ray_o UStack_50;
  Controllers_ErenShifterPlayerController_o *pCStack_38;
  
  if (g_data_057adcbc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&"Attack");
    g_data_057adcbc = '\x01';
    method = extraout_RDX;
  }
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,inMenu & 0xff,method);
  if ((char)inMenu != '\0') {
    return;
  }
  pSVar4 = (__this->fields)._shifterInput;
  if ((pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
     (pSVar17 = (pSVar4->fields).Walk, pSVar17 == (Settings_KeybindSetting_o *)0x0)) {
label_042899e0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar5 = (__this->fields)._shifter;
    bVar14 = Settings_KeybindSetting__GetKey(pSVar17,0,(MethodInfo *)0x0);
    if (pCVar5 == (Characters_AnnieShifter_o *)0x0) goto label_042899e0;
    *(char *)&(pCVar5->fields).State = (char)bVar14;
    pCVar5 = (__this->fields)._shifter;
    if (pCVar5 == (Characters_AnnieShifter_o *)0x0) goto label_042899e0;
    cVar13 = (*(pCVar5->klass->vtable)._123_CanAction.methodPtr)();
    if (cVar13 == '\0') {
      return;
    }
    pSVar4 = (__this->fields)._shifterInput;
    if ((pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
       (pSVar17 = (pSVar4->fields).Jump, pSVar17 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pCVar5 = (__this->fields)._shifter;
      if (pCVar5 != (Characters_AnnieShifter_o *)0x0) {
        cVar13 = *(char *)((long)&(pCVar5->fields).Detection + 4);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        uVar20 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar28 = (float)uVar20;
        if (cVar13 == '\0') {
label_042895de:
          (*(pCVar5->klass->vtable)._126_Jump.methodPtr)
                    (fVar28,pCVar5,(pCVar5->klass->vtable)._126_Jump.method);
          return;
        }
        pCVar6 = (__this->fields)._shifter;
        if ((pCVar6 != (Characters_AnnieShifter_o *)0x0) &&
           (lVar22 = *(long *)&(pCVar6->fields).Dead, lVar22 != 0)) {
          UStack_50.fields.m_Direction.fields.x = (float)((ulong)uVar20 >> 0x20);
          UStack_50.fields.m_Direction.fields.y = 0.0;
          UStack_50.fields.m_Direction.fields.z = 0.0;
          UStack_50.fields.m_Origin.fields.x = (float)*(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          pUVar7 = *(UnityEngine_Transform_o **)(lVar22 + 0x10);
          UStack_50.fields.m_Origin.fields.z = fVar28;
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UVar35 = UnityEngine_Transform__get_forward(pUVar7,(MethodInfo *)0x0);
            fVar28 = UVar35.fields.x + UStack_50.fields.m_Origin.fields.z;
            goto label_042895de;
          }
        }
      }
      goto label_042899e0;
    }
    pSVar4 = (__this->fields)._shifterInput;
    if ((pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
       (pSVar17 = (pSVar4->fields).Kick, pSVar17 == (Settings_KeybindSetting_o *)0x0)) goto label_042899e0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pCVar5 = (__this->fields)._shifter;
      if (pCVar5 != (Characters_AnnieShifter_o *)0x0) {
        (*(pCVar5->klass->vtable)._131_Kick.methodPtr)(pCVar5,(pCVar5->klass->vtable)._131_Kick.method);
        return;
      }
      goto label_042899e0;
    }
    pSVar4 = (__this->fields)._shifterInput;
    if ((pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
       (pSVar17 = (pSVar4->fields).AttackBrushFront, pSVar17 == (Settings_KeybindSetting_o *)0x0))
    goto label_042899e0;
    pMVar23 = (MethodInfo *)0x0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      if (g_data_057adcbd == '\0') {
        il2cpp_runtime_helper_023445d0(&"AttackBrushFrontL");
        il2cpp_runtime_helper_023445d0(&"AttackBrushFrontR");
        g_data_057adcbd = '\x01';
      }
      pCVar25 = (Controllers_ErenShifterPlayerController_o *)__this;
      pSVar21 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)__this,pMVar23);
      if (pSVar21 == (System_Single_array *)0x0) {
label_04289e6c:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar21->max_length != 0) {
        pCVar5 = (__this->fields)._shifter;
        pCVar25 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar5 != (Characters_AnnieShifter_o *)0x0) {
          if (pSVar21->m_Items[0] <= 0.0) {
            puVar19 = &"AttackBrushFrontL";
          }
          else {
            puVar19 = &"AttackBrushFrontR";
          }
          vtableDispatch = (pCVar5->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar5,*puVar19,(pCVar5->klass->vtable)._128_Attack.method,vtableDispatch);
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
      pCVar26 = pCVar25;
      pSVar21 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar25,pMVar23);
      if (pSVar21 == (System_Single_array *)0x0) {
label_04289efc:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar21->max_length != 0) {
        pCVar27 = (pCVar25->fields)._shifter;
        pCVar26 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar27 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar21->m_Items[0] <= 0.0) {
            puVar19 = &"AttackBrushHeadL";
          }
          else {
            puVar19 = &"AttackBrushHeadR";
          }
          vtableDispatch = (pCVar27->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar27,*puVar19,(pCVar27->klass->vtable)._128_Attack.method,vtableDispatch);
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
      pCVar25 = pCVar26;
      pSVar21 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar26,pMVar23);
      if (pSVar21 == (System_Single_array *)0x0) {
label_04289f8c:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar21->max_length != 0) {
        pCVar27 = (pCVar26->fields)._shifter;
        pCVar25 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar27 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar21->m_Items[0] <= 0.0) {
            puVar19 = &"AttackGrabBottomLeft";
          }
          else {
            puVar19 = &"AttackGrabBottomRight";
          }
          vtableDispatch = (pCVar27->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar27,*puVar19,(pCVar27->klass->vtable)._128_Attack.method,vtableDispatch);
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
      pCVar26 = pCVar25;
      pSVar21 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar25,pMVar23);
      if (pSVar21 == (System_Single_array *)0x0) {
label_0428a01c:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar21->max_length != 0) {
        pCVar27 = (pCVar25->fields)._shifter;
        pCVar26 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar27 != (Characters_ErenShifter_o *)0x0) {
          if (pSVar21->m_Items[0] <= 0.0) {
            puVar19 = &"AttackGrabMidLeft";
          }
          else {
            puVar19 = &"AttackGrabMidRight";
          }
          vtableDispatch = (pCVar27->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar27,*puVar19,(pCVar27->klass->vtable)._128_Attack.method,vtableDispatch);
          return;
        }
        goto label_0428a01c;
      }
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057adcc1 == '\0') {
        il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
        il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
        il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
        g_data_057adcc1 = '\x01';
      }
      pCVar25 = pCVar26;
      pSVar21 = Controllers_BasePlayerController__GetAimAngles
                          ((Controllers_BasePlayerController_o *)pCVar26,pMVar23);
      if (pSVar21 == (System_Single_array *)0x0) {
label_0428a0df:
        il2cpp_runtime_helper_022b2c90();
      }
      else if ((int)pSVar21->max_length != 0) {
        if (pSVar21->m_Items[0] <= 45.0) {
          if (pSVar21->m_Items[0] < -45.0) {
            puVar19 = &"AttackGrabUpLeft";
            pCVar27 = (pCVar26->fields)._shifter;
            if (pCVar27 != (Characters_ErenShifter_o *)0x0) goto label_0428a099;
            pCVar25 = (Controllers_ErenShifterPlayerController_o *)0x0;
            goto label_0428a0df;
          }
          puVar19 = &"AttackGrabUp";
          pCVar27 = (pCVar26->fields)._shifter;
        }
        else {
          puVar19 = &"AttackGrabUpRight";
          pCVar27 = (pCVar26->fields)._shifter;
        }
        pCVar25 = (Controllers_ErenShifterPlayerController_o *)0x0;
        if (pCVar27 != (Characters_ErenShifter_o *)0x0) {
label_0428a099:
          vtableDispatch = (pCVar27->klass->vtable)._128_Attack.methodPtr;
          (*vtableDispatch)
                    (pCVar27,*puVar19,(pCVar27->klass->vtable)._128_Attack.method,vtableDispatch);
          return;
        }
        goto label_0428a0df;
      }
      il2cpp_runtime_helper_022b2ca0();
      __this_01 = (Controllers_ErenShifterPlayerController_o **)pCVar25;
      pCStack_38 = pCVar26;
      if (g_data_057adcc9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        __this_01 = &TypeInfo_float;
        il2cpp_runtime_helper_023445d0();
        g_data_057adcc9 = '\x01';
      }
      lVar22 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (lVar22 != 0) {
        __this_00 = *(MethodInfo **)(lVar22 + 0x20);
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_01 = (Controllers_ErenShifterPlayerController_o **)0x0;
        UVar35 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
        if (__this_00 != (MethodInfo *)0x0) {
          UnityEngine_Camera__ScreenPointToRay_4db37e0
                    (&UStack_50,(UnityEngine_Camera_o *)__this_00,UVar35,(MethodInfo *)0x0);
          auVar32._4_4_ = UStack_50.fields.m_Direction.fields.y;
          auVar32._0_4_ = UStack_50.fields.m_Direction.fields.x;
          auVar32._8_8_ = 0;
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
            iVar3 = *(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4);
            pMVar23 = __this_00;
          }
          else {
            iVar3 = *(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4);
            pMVar23 = __this_00;
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar30 = 0;
          uVar31 = 0;
          fVar28 = UStack_50.fields.m_Direction.fields.z * UStack_50.fields.m_Direction.fields.z +
                   UStack_50.fields.m_Direction.fields.y * UStack_50.fields.m_Direction.fields.y +
                   UStack_50.fields.m_Direction.fields.x * UStack_50.fields.m_Direction.fields.x;
          if (fVar28 < 0.0) {
            fVar28 = sqrtf(fVar28);
            uVar30 = extraout_XMM0_Dc;
            uVar31 = extraout_XMM0_Dd;
            if (fVar28 <= 1e-05) goto label_0428a1f3;
label_0428a244:
            fVar33 = UStack_50.fields.m_Direction.fields.z / fVar28;
            auVar12._4_4_ = fVar28;
            auVar12._0_4_ = fVar28;
            auVar12._8_4_ = uVar30;
            auVar12._12_4_ = uVar31;
            auVar32 = divps(auVar32,auVar12);
            uVar20 = auVar32._0_8_;
          }
          else {
            fVar28 = SQRT(fVar28);
            if (1e-05 < fVar28) goto label_0428a244;
label_0428a1f3:
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            uVar20 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar33 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          if (g_data_057a6841 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6841 = '\x01';
          }
          fVar28 = (float)uVar20 * 1000.0;
          fVar34 = (float)((ulong)uVar20 >> 0x20) * 1000.0;
          fVar33 = fVar33 * 1000.0;
          __this_01 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_Math;
          if (*(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar29 = fVar33 * fVar33 + fVar34 * fVar34 + fVar28 * fVar28;
          if (fVar29 < 0.0) {
            fVar29 = sqrtf(fVar29);
          }
          else {
            fVar29 = SQRT(fVar29);
          }
          fVar34 = asinf(fVar34 / fVar29);
          fVar28 = atan2f(fVar33,fVar28);
          pCVar11 = (pCVar25->fields)._character;
          if ((pCVar11 != (Characters_BaseCharacter_o *)0x0) &&
             (lVar22 = *(long *)&(pCVar11->fields).Dead, lVar22 != 0)) {
            pUVar7 = *(UnityEngine_Transform_o **)(lVar22 + 0x10);
            __this_01 = (Controllers_ErenShifterPlayerController_o **)0x0;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              UVar35 = UnityEngine_Transform__get_eulerAngles(pUVar7,(MethodInfo *)0x0);
              fVar28 = UVar35.fields.y + -90.0 + fVar28 * 57.29578;
              fVar33 = floorf(fVar28 / 360.0);
              pMVar23 = (MethodInfo *)0x2;
              __this_01 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_float;
              lVar22 = il2cpp_runtime_helper_022b2a40();
              if (lVar22 != 0) {
                if (*(int *)(lVar22 + 0x18) != 0) {
                  fVar28 = fVar28 - fVar33 * 360.0;
                  fVar33 = 360.0;
                  if (fVar28 <= 360.0) {
                    fVar33 = fVar28;
                  }
                  fVar33 = (float)(-(uint)(0.0 <= fVar28) & (uint)fVar33);
                  *(uint *)(lVar22 + 0x20) =
                       (~-(uint)(180.0 < fVar33) & (uint)fVar33 |
                       (uint)(fVar33 + -360.0) & -(uint)(180.0 < fVar33)) ^ 0x80000000;
                  if (*(int *)(lVar22 + 0x18) != 1) {
                    *(float *)(lVar22 + 0x24) = fVar34 * 57.29578;
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
      Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this_01,pMVar23);
      return;
    }
    pSVar4 = (__this->fields)._shifterInput;
    if ((pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
       (pSVar17 = (pSVar4->fields).AttackBrushHead, pSVar17 == (Settings_KeybindSetting_o *)0x0))
    goto label_042899e0;
    pMVar23 = (MethodInfo *)0x0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackBrushHead(__this,pMVar23);
      return;
    }
    pSVar4 = (__this->fields)._shifterInput;
    if ((pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
       (pSVar17 = (pSVar4->fields).AttackGrabBottom, pSVar17 == (Settings_KeybindSetting_o *)0x0))
    goto label_042899e0;
    pMVar23 = (MethodInfo *)0x0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackGrabBottom(__this,pMVar23);
      return;
    }
    pSVar4 = (__this->fields)._shifterInput;
    if ((pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
       (pSVar17 = (pSVar4->fields).AttackGrabMid, pSVar17 == (Settings_KeybindSetting_o *)0x0))
    goto label_042899e0;
    pMVar23 = (MethodInfo *)0x0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackGrabMid(__this,pMVar23);
      return;
    }
    pSVar4 = (__this->fields)._shifterInput;
    if ((pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
       (pSVar17 = (pSVar4->fields).AttackGrabUp, pSVar17 == (Settings_KeybindSetting_o *)0x0))
    goto label_042899e0;
    pMVar23 = (MethodInfo *)0x0;
    bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      Controllers_AnnieShifterPlayerController__AttackGrabUp(__this,pMVar23);
      return;
    }
    pSVar4 = (__this->fields)._shifterInput;
    if (((pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) ||
        (pSVar8 = (pSVar4->fields).Settings,
        pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
       (pSVar15 = System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar8,(MethodInfo *)0x0),
       pSVar15 == (System_Collections_ICollection_o *)0x0)) goto label_042899e0;
    pSVar9 = pSVar15->klass;
    uVar2._0_1_ = (pSVar9->_2).rank;
    uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar22) == TypeInfo_IEnumerable) {
          pVVar16 = pSVar9->vtable + *(int *)((long)&pIVar10->offset + lVar22);
          goto label_04289812;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar22);
    }
    pVVar16 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerable,0);
label_04289812:
    unaff_R14 = (long *)(*pVVar16->methodPtr)(pSVar15,pVVar16->method);
    if (unaff_R14 == (long *)0x0) goto label_04289a0e;
    UStack_50.fields.m_Origin.fields.x = 0.0;
    UStack_50.fields.m_Origin.fields.y = 0.0;
label_04289843:
    lVar22 = *unaff_R14;
    if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar24) == TypeInfo_IEnumerator) {
          puVar19 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar24) * 0x10 + lVar22 + 0x138);
          goto label_042898a1;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar24);
    }
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IEnumerator,0);
label_042898a1:
    cVar13 = (*(code *)*puVar19)(unaff_R14,puVar19[1]);
    if (cVar13 == '\0') goto label_04289adc;
    lVar22 = *unaff_R14;
    if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar24) == TypeInfo_IEnumerator) {
          puVar19 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar24) + 1) * 0x10 + lVar22 + 0x138);
          goto label_04289919;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar24);
    }
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IEnumerator,1);
label_04289919:
    unaff_R12 = (System_String_o *)(*(code *)*puVar19)(unaff_R14,puVar19[1]);
    if (unaff_R12 == (System_String_o *)0x0) goto label_042899ed;
    if (unaff_R12->klass == g_data_057b9c00) {
      bVar14 = System_String__StartsWith(unaff_R12,"Attack",(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        pSVar4 = (__this->fields)._shifterInput;
        if (pSVar4 == (Settings_AnnieShifterInputSettings_o *)0x0) goto label_042899fa;
        pSVar8 = (pSVar4->fields).Settings;
        if (pSVar8 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_042899ff;
        pSVar17 = (Settings_KeybindSetting_o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar8,(Il2CppObject *)unaff_R12,(MethodInfo *)0x0);
        if (pSVar17 == (Settings_KeybindSetting_o *)0x0) goto label_04289a04;
        bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
        if (((pSVar17->klass->_2).naturalAligment < bVar1) ||
           ((pSVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) goto label_042899f2;
        bVar14 = Settings_KeybindSetting__GetKeyDown(pSVar17,0,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          pCVar5 = (__this->fields)._shifter;
          if (pCVar5 == (Characters_AnnieShifter_o *)0x0) goto label_04289a09;
          (*(pCVar5->klass->vtable)._128_Attack.methodPtr)
                    (pCVar5,unaff_R12,(pCVar5->klass->vtable)._128_Attack.method);
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
  auVar36 = il2cpp_runtime_helper_022b2c90();
  uVar20 = auVar36._0_8_;
  if (auVar36._8_4_ != 1) {
    UStack_50.fields.m_Origin.fields.x = 0.0;
    UStack_50.fields.m_Origin.fields.y = 0.0;
    goto label_04289b71;
  }
  plVar18 = (long *)__cxa_begin_catch(uVar20);
  UStack_50.fields.m_Origin.fields._0_8_ = *plVar18;
  __cxa_end_catch();
label_04289adc:
  plVar18 = (long *)il2cpp_runtime_helper_023051f0(unaff_R14,TypeInfo_IDisposable);
  if (plVar18 != (long *)0x0) {
    lVar22 = *plVar18;
    if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
          puVar19 = (undefined8 *)
                    (lVar22 + (long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar24) * 0x10 + 0x138);
          goto label_04289b44;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar24);
    }
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IDisposable,0);
label_04289b44:
    (*(code *)*puVar19)(plVar18,puVar19[1]);
  }
  if (UStack_50.fields.m_Origin.fields._0_8_ == 0) {
    return;
  }
  do {
    uVar20 = il2cpp_runtime_helper_022fefe0();
label_04289b71:
    plVar18 = (long *)il2cpp_runtime_helper_023051f0(unaff_R14,TypeInfo_IDisposable);
    if (plVar18 != (long *)0x0) {
      lVar22 = *plVar18;
      if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
        lVar24 = 0;
        do {
          if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
            puVar19 = (undefined8 *)
                      (lVar22 + (long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar24) * 0x10 + 0x138);
            goto label_04289bdd;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar24);
      }
      puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar18,TypeInfo_IDisposable,0);
label_04289bdd:
      (*(code *)*puVar19)(plVar18,puVar19[1]);
    }
    if (UStack_50.fields.m_Origin.fields._0_8_ == 0) {
      _Unwind_Resume(uVar20);
    }
    il2cpp_runtime_helper_022fefe0(UStack_50.fields.m_Origin.fields._0_8_);
  } while( true );
}


// Controllers.AnnieShifterPlayerController$$AttackBrushFront
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackBrushFront (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x4289df0

void Controllers_AnnieShifterPlayerController__AttackBrushFront
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_AnnieShifter_o *pCVar2;
  Il2CppMethodPointer vtableDispatch;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar4 [16];
  System_Single_array *pSVar5;
  undefined8 *puVar6;
  long lVar7;
  MethodInfo *__this_01;
  Controllers_ErenShifterPlayerController_o *pCVar8;
  Controllers_ErenShifterPlayerController_o *pCVar9;
  Characters_ErenShifter_o *pCVar10;
  Controllers_ErenShifterPlayerController_o **__this_02;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Ray_o UStack_50;
  Controllers_ErenShifterPlayerController_o *pCStack_38;
  undefined8 uVar15;
  
  if (g_data_057adcbd == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushFrontL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushFrontR");
    g_data_057adcbd = '\x01';
  }
  pCVar8 = (Controllers_ErenShifterPlayerController_o *)__this;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_04289e6c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    pCVar2 = (__this->fields)._shifter;
    pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar2 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar5->m_Items[0] <= 0.0) {
        puVar6 = &"AttackBrushFrontL";
      }
      else {
        puVar6 = &"AttackBrushFrontR";
      }
      vtableDispatch = (pCVar2->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar2,*puVar6,(pCVar2->klass->vtable)._128_Attack.method,vtableDispatch);
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
  pCVar9 = pCVar8;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar8,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_04289efc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    pCVar10 = (pCVar8->fields)._shifter;
    pCVar9 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar10 != (Characters_ErenShifter_o *)0x0) {
      if (pSVar5->m_Items[0] <= 0.0) {
        puVar6 = &"AttackBrushHeadL";
      }
      else {
        puVar6 = &"AttackBrushHeadR";
      }
      vtableDispatch = (pCVar10->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar10,*puVar6,(pCVar10->klass->vtable)._128_Attack.method,vtableDispatch);
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
  pCVar8 = pCVar9;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar9,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_04289f8c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    pCVar10 = (pCVar9->fields)._shifter;
    pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar10 != (Characters_ErenShifter_o *)0x0) {
      if (pSVar5->m_Items[0] <= 0.0) {
        puVar6 = &"AttackGrabBottomLeft";
      }
      else {
        puVar6 = &"AttackGrabBottomRight";
      }
      vtableDispatch = (pCVar10->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar10,*puVar6,(pCVar10->klass->vtable)._128_Attack.method,vtableDispatch);
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
  pCVar9 = pCVar8;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar8,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_0428a01c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    pCVar10 = (pCVar8->fields)._shifter;
    pCVar9 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar10 != (Characters_ErenShifter_o *)0x0) {
      if (pSVar5->m_Items[0] <= 0.0) {
        puVar6 = &"AttackGrabMidLeft";
      }
      else {
        puVar6 = &"AttackGrabMidRight";
      }
      vtableDispatch = (pCVar10->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar10,*puVar6,(pCVar10->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_0428a01c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adcc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    g_data_057adcc1 = '\x01';
  }
  pCVar8 = pCVar9;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar9,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_0428a0df:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    if (pSVar5->m_Items[0] <= 45.0) {
      if (pSVar5->m_Items[0] < -45.0) {
        puVar6 = &"AttackGrabUpLeft";
        pCVar10 = (pCVar9->fields)._shifter;
        if (pCVar10 != (Characters_ErenShifter_o *)0x0) goto label_0428a099;
        pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
        goto label_0428a0df;
      }
      puVar6 = &"AttackGrabUp";
      pCVar10 = (pCVar9->fields)._shifter;
    }
    else {
      puVar6 = &"AttackGrabUpRight";
      pCVar10 = (pCVar9->fields)._shifter;
    }
    pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar10 != (Characters_ErenShifter_o *)0x0) {
label_0428a099:
      vtableDispatch = (pCVar10->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar10,*puVar6,(pCVar10->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_0428a0df;
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_02 = (Controllers_ErenShifterPlayerController_o **)pCVar8;
  pCStack_38 = pCVar9;
  if (g_data_057adcc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    __this_02 = &TypeInfo_float;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc9 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar7 != 0) {
    __this_01 = *(MethodInfo **)(lVar7 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (Controllers_ErenShifterPlayerController_o **)0x0;
    UVar19 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this_01 != (MethodInfo *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                (&UStack_50,(UnityEngine_Camera_o *)__this_01,UVar19,(MethodInfo *)0x0);
      auVar16._8_8_ = 0;
      auVar16._0_4_ = UStack_50.fields.m_Direction.fields.x;
      auVar16._4_4_ = UStack_50.fields.m_Direction.fields.y;
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
      uVar13 = 0;
      uVar14 = 0;
      fVar11 = UStack_50.fields.m_Direction.fields.z * UStack_50.fields.m_Direction.fields.z +
               UStack_50.fields.m_Direction.fields.y * UStack_50.fields.m_Direction.fields.y +
               UStack_50.fields.m_Direction.fields.x * UStack_50.fields.m_Direction.fields.x;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
        uVar13 = extraout_XMM0_Dc;
        uVar14 = extraout_XMM0_Dd;
        if (fVar11 <= 1e-05) goto label_0428a1f3;
label_0428a244:
        fVar17 = UStack_50.fields.m_Direction.fields.z / fVar11;
        auVar4._4_4_ = fVar11;
        auVar4._0_4_ = fVar11;
        auVar4._8_4_ = uVar13;
        auVar4._12_4_ = uVar14;
        auVar16 = divps(auVar16,auVar4);
        uVar15 = auVar16._0_8_;
      }
      else {
        fVar11 = SQRT(fVar11);
        if (1e-05 < fVar11) goto label_0428a244;
label_0428a1f3:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar17 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar11 = (float)uVar15 * 1000.0;
      fVar18 = (float)((ulong)uVar15 >> 0x20) * 1000.0;
      fVar17 = fVar17 * 1000.0;
      __this_02 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar12 = fVar17 * fVar17 + fVar18 * fVar18 + fVar11 * fVar11;
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      fVar18 = asinf(fVar18 / fVar12);
      fVar11 = atan2f(fVar17,fVar11);
      pCVar3 = (pCVar8->fields)._character;
      if ((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar7 = *(long *)&(pCVar3->fields).Dead, lVar7 != 0)) {
        __this_00 = *(UnityEngine_Transform_o **)(lVar7 + 0x10);
        __this_02 = (Controllers_ErenShifterPlayerController_o **)0x0;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar19 = UnityEngine_Transform__get_eulerAngles(__this_00,(MethodInfo *)0x0);
          fVar11 = UVar19.fields.y + -90.0 + fVar11 * 57.29578;
          fVar17 = floorf(fVar11 / 360.0);
          method = (MethodInfo *)0x2;
          __this_02 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_float;
          lVar7 = il2cpp_runtime_helper_022b2a40();
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) != 0) {
              fVar11 = fVar11 - fVar17 * 360.0;
              fVar17 = 360.0;
              if (fVar11 <= 360.0) {
                fVar17 = fVar11;
              }
              fVar17 = (float)(-(uint)(0.0 <= fVar11) & (uint)fVar17);
              *(uint *)(lVar7 + 0x20) =
                   (~-(uint)(180.0 < fVar17) & (uint)fVar17 |
                   (uint)(fVar17 + -360.0) & -(uint)(180.0 < fVar17)) ^ 0x80000000;
              if (*(int *)(lVar7 + 0x18) != 1) {
                *(float *)(lVar7 + 0x24) = fVar18 * 57.29578;
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
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this_02,method);
  return;
}


// Controllers.AnnieShifterPlayerController$$AttackBrushHead
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackBrushHead (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x4289e80

void Controllers_AnnieShifterPlayerController__AttackBrushHead
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_AnnieShifter_o *pCVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar4 [16];
  System_Single_array *pSVar5;
  undefined8 *puVar6;
  long lVar7;
  MethodInfo *__this_01;
  Controllers_ErenShifterPlayerController_o *pCVar8;
  Controllers_ErenShifterPlayerController_o *pCVar9;
  Characters_ErenShifter_o *pCVar10;
  Controllers_ErenShifterPlayerController_o **__this_02;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Ray_o UStack_48;
  Controllers_ErenShifterPlayerController_o *pCStack_30;
  undefined8 uVar15;
  
  if (g_data_057adcbe == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBrushHeadL");
    il2cpp_runtime_helper_023445d0(&"AttackBrushHeadR");
    g_data_057adcbe = '\x01';
  }
  pCVar8 = (Controllers_ErenShifterPlayerController_o *)__this;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_04289efc:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    pCVar2 = (__this->fields)._shifter;
    pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar2 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar5->m_Items[0] <= 0.0) {
        puVar6 = &"AttackBrushHeadL";
      }
      else {
        puVar6 = &"AttackBrushHeadR";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar2->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar2,*puVar6,(pCVar2->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
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
  pCVar9 = pCVar8;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar8,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_04289f8c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    pCVar10 = (pCVar8->fields)._shifter;
    pCVar9 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar10 != (Characters_ErenShifter_o *)0x0) {
      if (pSVar5->m_Items[0] <= 0.0) {
        puVar6 = &"AttackGrabBottomLeft";
      }
      else {
        puVar6 = &"AttackGrabBottomRight";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar10->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar10,*puVar6,(pCVar10->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
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
  pCVar8 = pCVar9;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar9,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_0428a01c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    pCVar10 = (pCVar9->fields)._shifter;
    pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar10 != (Characters_ErenShifter_o *)0x0) {
      if (pSVar5->m_Items[0] <= 0.0) {
        puVar6 = &"AttackGrabMidLeft";
      }
      else {
        puVar6 = &"AttackGrabMidRight";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar10->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar10,*puVar6,(pCVar10->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_0428a01c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adcc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    g_data_057adcc1 = '\x01';
  }
  pCVar9 = pCVar8;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar8,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_0428a0df:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    if (pSVar5->m_Items[0] <= 45.0) {
      if (pSVar5->m_Items[0] < -45.0) {
        puVar6 = &"AttackGrabUpLeft";
        pCVar10 = (pCVar8->fields)._shifter;
        if (pCVar10 != (Characters_ErenShifter_o *)0x0) goto label_0428a099;
        pCVar9 = (Controllers_ErenShifterPlayerController_o *)0x0;
        goto label_0428a0df;
      }
      puVar6 = &"AttackGrabUp";
      pCVar10 = (pCVar8->fields)._shifter;
    }
    else {
      puVar6 = &"AttackGrabUpRight";
      pCVar10 = (pCVar8->fields)._shifter;
    }
    pCVar9 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar10 != (Characters_ErenShifter_o *)0x0) {
label_0428a099:
      UNRECOVERED_JUMPTABLE_00 = (pCVar10->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar10,*puVar6,(pCVar10->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_0428a0df;
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_02 = (Controllers_ErenShifterPlayerController_o **)pCVar9;
  pCStack_30 = pCVar8;
  if (g_data_057adcc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    __this_02 = &TypeInfo_float;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc9 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar7 != 0) {
    __this_01 = *(MethodInfo **)(lVar7 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (Controllers_ErenShifterPlayerController_o **)0x0;
    UVar19 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this_01 != (MethodInfo *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                (&UStack_48,(UnityEngine_Camera_o *)__this_01,UVar19,(MethodInfo *)0x0);
      auVar16._8_8_ = 0;
      auVar16._0_4_ = UStack_48.fields.m_Direction.fields.x;
      auVar16._4_4_ = UStack_48.fields.m_Direction.fields.y;
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
      uVar13 = 0;
      uVar14 = 0;
      fVar11 = UStack_48.fields.m_Direction.fields.z * UStack_48.fields.m_Direction.fields.z +
               UStack_48.fields.m_Direction.fields.y * UStack_48.fields.m_Direction.fields.y +
               UStack_48.fields.m_Direction.fields.x * UStack_48.fields.m_Direction.fields.x;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
        uVar13 = extraout_XMM0_Dc;
        uVar14 = extraout_XMM0_Dd;
        if (fVar11 <= 1e-05) goto label_0428a1f3;
label_0428a244:
        fVar17 = UStack_48.fields.m_Direction.fields.z / fVar11;
        auVar4._4_4_ = fVar11;
        auVar4._0_4_ = fVar11;
        auVar4._8_4_ = uVar13;
        auVar4._12_4_ = uVar14;
        auVar16 = divps(auVar16,auVar4);
        uVar15 = auVar16._0_8_;
      }
      else {
        fVar11 = SQRT(fVar11);
        if (1e-05 < fVar11) goto label_0428a244;
label_0428a1f3:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar17 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar11 = (float)uVar15 * 1000.0;
      fVar18 = (float)((ulong)uVar15 >> 0x20) * 1000.0;
      fVar17 = fVar17 * 1000.0;
      __this_02 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar12 = fVar17 * fVar17 + fVar18 * fVar18 + fVar11 * fVar11;
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      fVar18 = asinf(fVar18 / fVar12);
      fVar11 = atan2f(fVar17,fVar11);
      pCVar3 = (pCVar9->fields)._character;
      if ((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar7 = *(long *)&(pCVar3->fields).Dead, lVar7 != 0)) {
        __this_00 = *(UnityEngine_Transform_o **)(lVar7 + 0x10);
        __this_02 = (Controllers_ErenShifterPlayerController_o **)0x0;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar19 = UnityEngine_Transform__get_eulerAngles(__this_00,(MethodInfo *)0x0);
          fVar11 = UVar19.fields.y + -90.0 + fVar11 * 57.29578;
          fVar17 = floorf(fVar11 / 360.0);
          method = (MethodInfo *)0x2;
          __this_02 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_float;
          lVar7 = il2cpp_runtime_helper_022b2a40();
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) != 0) {
              fVar11 = fVar11 - fVar17 * 360.0;
              fVar17 = 360.0;
              if (fVar11 <= 360.0) {
                fVar17 = fVar11;
              }
              fVar17 = (float)(-(uint)(0.0 <= fVar11) & (uint)fVar17);
              *(uint *)(lVar7 + 0x20) =
                   (~-(uint)(180.0 < fVar17) & (uint)fVar17 |
                   (uint)(fVar17 + -360.0) & -(uint)(180.0 < fVar17)) ^ 0x80000000;
              if (*(int *)(lVar7 + 0x18) != 1) {
                *(float *)(lVar7 + 0x24) = fVar18 * 57.29578;
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
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this_02,method);
  return;
}


// Controllers.AnnieShifterPlayerController$$AttackGrabBottom
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabBottom (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x4289f10

void Controllers_AnnieShifterPlayerController__AttackGrabBottom
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_AnnieShifter_o *pCVar2;
  Il2CppMethodPointer vtableDispatch;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar4 [16];
  System_Single_array *pSVar5;
  undefined8 *puVar6;
  long lVar7;
  MethodInfo *__this_01;
  Controllers_ErenShifterPlayerController_o *pCVar8;
  Controllers_ErenShifterPlayerController_o *__this_02;
  Characters_ErenShifter_o *pCVar9;
  Controllers_ErenShifterPlayerController_o **__this_03;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Ray_o UStack_40;
  Controllers_ErenShifterPlayerController_o *pCStack_28;
  undefined8 uVar14;
  
  if (g_data_057adcbf == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottomLeft");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottomRight");
    g_data_057adcbf = '\x01';
  }
  pCVar8 = (Controllers_ErenShifterPlayerController_o *)__this;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_04289f8c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    pCVar2 = (__this->fields)._shifter;
    pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar2 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar5->m_Items[0] <= 0.0) {
        puVar6 = &"AttackGrabBottomLeft";
      }
      else {
        puVar6 = &"AttackGrabBottomRight";
      }
      vtableDispatch = (pCVar2->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar2,*puVar6,(pCVar2->klass->vtable)._128_Attack.method,vtableDispatch);
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
  __this_02 = pCVar8;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)pCVar8,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_0428a01c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    pCVar9 = (pCVar8->fields)._shifter;
    __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar9 != (Characters_ErenShifter_o *)0x0) {
      if (pSVar5->m_Items[0] <= 0.0) {
        puVar6 = &"AttackGrabMidLeft";
      }
      else {
        puVar6 = &"AttackGrabMidRight";
      }
      vtableDispatch = (pCVar9->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar9,*puVar6,(pCVar9->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_0428a01c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adcc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    g_data_057adcc1 = '\x01';
  }
  pCVar8 = __this_02;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this_02,method);
  if (pSVar5 == (System_Single_array *)0x0) {
label_0428a0df:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    if (pSVar5->m_Items[0] <= 45.0) {
      if (pSVar5->m_Items[0] < -45.0) {
        puVar6 = &"AttackGrabUpLeft";
        pCVar9 = (__this_02->fields)._shifter;
        if (pCVar9 != (Characters_ErenShifter_o *)0x0) goto label_0428a099;
        pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
        goto label_0428a0df;
      }
      puVar6 = &"AttackGrabUp";
      pCVar9 = (__this_02->fields)._shifter;
    }
    else {
      puVar6 = &"AttackGrabUpRight";
      pCVar9 = (__this_02->fields)._shifter;
    }
    pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar9 != (Characters_ErenShifter_o *)0x0) {
label_0428a099:
      vtableDispatch = (pCVar9->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar9,*puVar6,(pCVar9->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_0428a0df;
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_03 = (Controllers_ErenShifterPlayerController_o **)pCVar8;
  pCStack_28 = __this_02;
  if (g_data_057adcc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    __this_03 = &TypeInfo_float;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc9 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar7 != 0) {
    __this_01 = *(MethodInfo **)(lVar7 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = (Controllers_ErenShifterPlayerController_o **)0x0;
    UVar18 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this_01 != (MethodInfo *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                (&UStack_40,(UnityEngine_Camera_o *)__this_01,UVar18,(MethodInfo *)0x0);
      auVar15._8_8_ = 0;
      auVar15._0_4_ = UStack_40.fields.m_Direction.fields.x;
      auVar15._4_4_ = UStack_40.fields.m_Direction.fields.y;
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
      uVar12 = 0;
      uVar13 = 0;
      fVar10 = UStack_40.fields.m_Direction.fields.z * UStack_40.fields.m_Direction.fields.z +
               UStack_40.fields.m_Direction.fields.y * UStack_40.fields.m_Direction.fields.y +
               UStack_40.fields.m_Direction.fields.x * UStack_40.fields.m_Direction.fields.x;
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
        uVar12 = extraout_XMM0_Dc;
        uVar13 = extraout_XMM0_Dd;
        if (fVar10 <= 1e-05) goto label_0428a1f3;
label_0428a244:
        fVar16 = UStack_40.fields.m_Direction.fields.z / fVar10;
        auVar4._4_4_ = fVar10;
        auVar4._0_4_ = fVar10;
        auVar4._8_4_ = uVar12;
        auVar4._12_4_ = uVar13;
        auVar15 = divps(auVar15,auVar4);
        uVar14 = auVar15._0_8_;
      }
      else {
        fVar10 = SQRT(fVar10);
        if (1e-05 < fVar10) goto label_0428a244;
label_0428a1f3:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar14 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar16 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar10 = (float)uVar14 * 1000.0;
      fVar17 = (float)((ulong)uVar14 >> 0x20) * 1000.0;
      fVar16 = fVar16 * 1000.0;
      __this_03 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar11 = fVar16 * fVar16 + fVar17 * fVar17 + fVar10 * fVar10;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      fVar17 = asinf(fVar17 / fVar11);
      fVar10 = atan2f(fVar16,fVar10);
      pCVar3 = (pCVar8->fields)._character;
      if ((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar7 = *(long *)&(pCVar3->fields).Dead, lVar7 != 0)) {
        __this_00 = *(UnityEngine_Transform_o **)(lVar7 + 0x10);
        __this_03 = (Controllers_ErenShifterPlayerController_o **)0x0;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar18 = UnityEngine_Transform__get_eulerAngles(__this_00,(MethodInfo *)0x0);
          fVar10 = UVar18.fields.y + -90.0 + fVar10 * 57.29578;
          fVar16 = floorf(fVar10 / 360.0);
          method = (MethodInfo *)0x2;
          __this_03 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_float;
          lVar7 = il2cpp_runtime_helper_022b2a40();
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) != 0) {
              fVar10 = fVar10 - fVar16 * 360.0;
              fVar16 = 360.0;
              if (fVar10 <= 360.0) {
                fVar16 = fVar10;
              }
              fVar16 = (float)(-(uint)(0.0 <= fVar10) & (uint)fVar16);
              *(uint *)(lVar7 + 0x20) =
                   (~-(uint)(180.0 < fVar16) & (uint)fVar16 |
                   (uint)(fVar16 + -360.0) & -(uint)(180.0 < fVar16)) ^ 0x80000000;
              if (*(int *)(lVar7 + 0x18) != 1) {
                *(float *)(lVar7 + 0x24) = fVar17 * 57.29578;
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
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this_03,method);
  return;
}


// Controllers.AnnieShifterPlayerController$$AttackGrabMid
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabMid (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x4289fa0

void Controllers_AnnieShifterPlayerController__AttackGrabMid
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_AnnieShifter_o *pCVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar4 [16];
  System_Single_array *pSVar5;
  undefined8 *puVar6;
  long lVar7;
  MethodInfo *__this_01;
  Controllers_ErenShifterPlayerController_o *__this_02;
  Controllers_ErenShifterPlayerController_o *pCVar8;
  Characters_ErenShifter_o *pCVar9;
  Controllers_ErenShifterPlayerController_o **__this_03;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Ray_o UStack_38;
  Controllers_ErenShifterPlayerController_o *pCStack_20;
  undefined8 uVar14;
  
  if (g_data_057adcc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabMidRight");
    il2cpp_runtime_helper_023445d0(&"AttackGrabMidLeft");
    g_data_057adcc0 = '\x01';
  }
  __this_02 = (Controllers_ErenShifterPlayerController_o *)__this;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar5 == (System_Single_array *)0x0) {
label_0428a01c:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    pCVar2 = (__this->fields)._shifter;
    __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar2 != (Characters_AnnieShifter_o *)0x0) {
      if (pSVar5->m_Items[0] <= 0.0) {
        puVar6 = &"AttackGrabMidLeft";
      }
      else {
        puVar6 = &"AttackGrabMidRight";
      }
      UNRECOVERED_JUMPTABLE_00 = (pCVar2->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar2,*puVar6,(pCVar2->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_0428a01c;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adcc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    g_data_057adcc1 = '\x01';
  }
  pCVar8 = __this_02;
  pSVar5 = Controllers_BasePlayerController__GetAimAngles
                     ((Controllers_BasePlayerController_o *)__this_02,method);
  if (pSVar5 == (System_Single_array *)0x0) {
label_0428a0df:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar5->max_length != 0) {
    if (pSVar5->m_Items[0] <= 45.0) {
      if (pSVar5->m_Items[0] < -45.0) {
        puVar6 = &"AttackGrabUpLeft";
        pCVar9 = (__this_02->fields)._shifter;
        if (pCVar9 != (Characters_ErenShifter_o *)0x0) goto label_0428a099;
        pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
        goto label_0428a0df;
      }
      puVar6 = &"AttackGrabUp";
      pCVar9 = (__this_02->fields)._shifter;
    }
    else {
      puVar6 = &"AttackGrabUpRight";
      pCVar9 = (__this_02->fields)._shifter;
    }
    pCVar8 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar9 != (Characters_ErenShifter_o *)0x0) {
label_0428a099:
      UNRECOVERED_JUMPTABLE_00 = (pCVar9->klass->vtable)._128_Attack.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pCVar9,*puVar6,(pCVar9->klass->vtable)._128_Attack.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    goto label_0428a0df;
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_03 = (Controllers_ErenShifterPlayerController_o **)pCVar8;
  pCStack_20 = __this_02;
  if (g_data_057adcc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    __this_03 = &TypeInfo_float;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc9 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar7 != 0) {
    __this_01 = *(MethodInfo **)(lVar7 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = (Controllers_ErenShifterPlayerController_o **)0x0;
    UVar18 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this_01 != (MethodInfo *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                (&UStack_38,(UnityEngine_Camera_o *)__this_01,UVar18,(MethodInfo *)0x0);
      auVar15._8_8_ = 0;
      auVar15._0_4_ = UStack_38.fields.m_Direction.fields.x;
      auVar15._4_4_ = UStack_38.fields.m_Direction.fields.y;
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
      uVar12 = 0;
      uVar13 = 0;
      fVar10 = UStack_38.fields.m_Direction.fields.z * UStack_38.fields.m_Direction.fields.z +
               UStack_38.fields.m_Direction.fields.y * UStack_38.fields.m_Direction.fields.y +
               UStack_38.fields.m_Direction.fields.x * UStack_38.fields.m_Direction.fields.x;
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
        uVar12 = extraout_XMM0_Dc;
        uVar13 = extraout_XMM0_Dd;
        if (fVar10 <= 1e-05) goto label_0428a1f3;
label_0428a244:
        fVar16 = UStack_38.fields.m_Direction.fields.z / fVar10;
        auVar4._4_4_ = fVar10;
        auVar4._0_4_ = fVar10;
        auVar4._8_4_ = uVar12;
        auVar4._12_4_ = uVar13;
        auVar15 = divps(auVar15,auVar4);
        uVar14 = auVar15._0_8_;
      }
      else {
        fVar10 = SQRT(fVar10);
        if (1e-05 < fVar10) goto label_0428a244;
label_0428a1f3:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar14 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar16 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar10 = (float)uVar14 * 1000.0;
      fVar17 = (float)((ulong)uVar14 >> 0x20) * 1000.0;
      fVar16 = fVar16 * 1000.0;
      __this_03 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar11 = fVar16 * fVar16 + fVar17 * fVar17 + fVar10 * fVar10;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      fVar17 = asinf(fVar17 / fVar11);
      fVar10 = atan2f(fVar16,fVar10);
      pCVar3 = (pCVar8->fields)._character;
      if ((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar7 = *(long *)&(pCVar3->fields).Dead, lVar7 != 0)) {
        __this_00 = *(UnityEngine_Transform_o **)(lVar7 + 0x10);
        __this_03 = (Controllers_ErenShifterPlayerController_o **)0x0;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar18 = UnityEngine_Transform__get_eulerAngles(__this_00,(MethodInfo *)0x0);
          fVar10 = UVar18.fields.y + -90.0 + fVar10 * 57.29578;
          fVar16 = floorf(fVar10 / 360.0);
          method = (MethodInfo *)0x2;
          __this_03 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_float;
          lVar7 = il2cpp_runtime_helper_022b2a40();
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) != 0) {
              fVar10 = fVar10 - fVar16 * 360.0;
              fVar16 = 360.0;
              if (fVar10 <= 360.0) {
                fVar16 = fVar10;
              }
              fVar16 = (float)(-(uint)(0.0 <= fVar10) & (uint)fVar16);
              *(uint *)(lVar7 + 0x20) =
                   (~-(uint)(180.0 < fVar16) & (uint)fVar16 |
                   (uint)(fVar16 + -360.0) & -(uint)(180.0 < fVar16)) ^ 0x80000000;
              if (*(int *)(lVar7 + 0x18) != 1) {
                *(float *)(lVar7 + 0x24) = fVar17 * 57.29578;
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
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this_03,method);
  return;
}


// Controllers.AnnieShifterPlayerController$$AttackGrabUp
// il2cpp: void Controllers_AnnieShifterPlayerController__AttackGrabUp (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x428a030

void Controllers_AnnieShifterPlayerController__AttackGrabUp
               (Controllers_AnnieShifterPlayerController_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer vtableDispatch;
  Characters_BaseCharacter_o *pCVar2;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar3 [16];
  System_Single_array *pSVar4;
  undefined8 *puVar5;
  long lVar6;
  MethodInfo *__this_01;
  Controllers_ErenShifterPlayerController_o *pCVar7;
  Characters_AnnieShifter_o *pCVar8;
  Controllers_ErenShifterPlayerController_o **__this_02;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Ray_o UStack_30;
  Controllers_AnnieShifterPlayerController_o *pCStack_18;
  undefined8 uVar13;
  
  if (g_data_057adcc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpLeft");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUpRight");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    g_data_057adcc1 = '\x01';
  }
  pCVar7 = (Controllers_ErenShifterPlayerController_o *)__this;
  pSVar4 = Controllers_BasePlayerController__GetAimAngles((Controllers_BasePlayerController_o *)__this,method)
  ;
  if (pSVar4 == (System_Single_array *)0x0) {
label_0428a0df:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)pSVar4->max_length != 0) {
    if (pSVar4->m_Items[0] <= 45.0) {
      if (pSVar4->m_Items[0] < -45.0) {
        puVar5 = &"AttackGrabUpLeft";
        pCVar8 = (__this->fields)._shifter;
        if (pCVar8 != (Characters_AnnieShifter_o *)0x0) goto label_0428a099;
        pCVar7 = (Controllers_ErenShifterPlayerController_o *)0x0;
        goto label_0428a0df;
      }
      puVar5 = &"AttackGrabUp";
      pCVar8 = (__this->fields)._shifter;
    }
    else {
      puVar5 = &"AttackGrabUpRight";
      pCVar8 = (__this->fields)._shifter;
    }
    pCVar7 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pCVar8 != (Characters_AnnieShifter_o *)0x0) {
label_0428a099:
      vtableDispatch = (pCVar8->klass->vtable)._128_Attack.methodPtr;
      (*vtableDispatch)
                (pCVar8,*puVar5,(pCVar8->klass->vtable)._128_Attack.method,vtableDispatch);
      return;
    }
    goto label_0428a0df;
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_02 = (Controllers_ErenShifterPlayerController_o **)pCVar7;
  pCStack_18 = __this;
  if (g_data_057adcc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    __this_02 = &TypeInfo_float;
    il2cpp_runtime_helper_023445d0();
    g_data_057adcc9 = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar6 != 0) {
    __this_01 = *(MethodInfo **)(lVar6 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (Controllers_ErenShifterPlayerController_o **)0x0;
    UVar17 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this_01 != (MethodInfo *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                (&UStack_30,(UnityEngine_Camera_o *)__this_01,UVar17,(MethodInfo *)0x0);
      auVar14._8_8_ = 0;
      auVar14._0_4_ = UStack_30.fields.m_Direction.fields.x;
      auVar14._4_4_ = UStack_30.fields.m_Direction.fields.y;
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
      uVar11 = 0;
      uVar12 = 0;
      fVar9 = UStack_30.fields.m_Direction.fields.z * UStack_30.fields.m_Direction.fields.z +
              UStack_30.fields.m_Direction.fields.y * UStack_30.fields.m_Direction.fields.y +
              UStack_30.fields.m_Direction.fields.x * UStack_30.fields.m_Direction.fields.x;
      if (fVar9 < 0.0) {
        fVar9 = sqrtf(fVar9);
        uVar11 = extraout_XMM0_Dc;
        uVar12 = extraout_XMM0_Dd;
        if (fVar9 <= 1e-05) goto label_0428a1f3;
label_0428a244:
        fVar15 = UStack_30.fields.m_Direction.fields.z / fVar9;
        auVar3._4_4_ = fVar9;
        auVar3._0_4_ = fVar9;
        auVar3._8_4_ = uVar11;
        auVar3._12_4_ = uVar12;
        auVar14 = divps(auVar14,auVar3);
        uVar13 = auVar14._0_8_;
      }
      else {
        fVar9 = SQRT(fVar9);
        if (1e-05 < fVar9) goto label_0428a244;
label_0428a1f3:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar13 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar15 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      fVar9 = (float)uVar13 * 1000.0;
      fVar16 = (float)((ulong)uVar13 >> 0x20) * 1000.0;
      fVar15 = fVar15 * 1000.0;
      __this_02 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[2].fields.m_CachedPtr + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar10 = fVar15 * fVar15 + fVar16 * fVar16 + fVar9 * fVar9;
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      fVar16 = asinf(fVar16 / fVar10);
      fVar9 = atan2f(fVar15,fVar9);
      pCVar2 = (pCVar7->fields)._character;
      if ((pCVar2 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar6 = *(long *)&(pCVar2->fields).Dead, lVar6 != 0)) {
        __this_00 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
        __this_02 = (Controllers_ErenShifterPlayerController_o **)0x0;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar17 = UnityEngine_Transform__get_eulerAngles(__this_00,(MethodInfo *)0x0);
          fVar9 = UVar17.fields.y + -90.0 + fVar9 * 57.29578;
          fVar15 = floorf(fVar9 / 360.0);
          method = (MethodInfo *)0x2;
          __this_02 = (Controllers_ErenShifterPlayerController_o **)TypeInfo_float;
          lVar6 = il2cpp_runtime_helper_022b2a40();
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) != 0) {
              fVar9 = fVar9 - fVar15 * 360.0;
              fVar15 = 360.0;
              if (fVar9 <= 360.0) {
                fVar15 = fVar9;
              }
              fVar15 = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar15);
              *(uint *)(lVar6 + 0x20) =
                   (~-(uint)(180.0 < fVar15) & (uint)fVar15 |
                   (uint)(fVar15 + -360.0) & -(uint)(180.0 < fVar15)) ^ 0x80000000;
              if (*(int *)(lVar6 + 0x18) != 1) {
                *(float *)(lVar6 + 0x24) = fVar16 * 57.29578;
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
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this_02,method);
  return;
}


// Controllers.AnnieShifterPlayerController$$.ctor
// il2cpp: void Controllers_AnnieShifterPlayerController___ctor (Controllers_AnnieShifterPlayerController_o* __this, const MethodInfo* method);
// 0x428a4a0

void Controllers_AnnieShifterPlayerController___ctor
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  Controllers_BasePlayerController___ctor(__this,method);
  return;
}


