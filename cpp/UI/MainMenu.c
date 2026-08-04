// Type: UI.MainMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MainMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainMenu.cs
// --------------------------------

// UI.MainMenu.<WaitAndChangeBackground>d__33$$.ctor
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__33___ctor (UI_MainMenu__WaitAndChangeBackground_d__33_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4407ea0

void UI_MainMenu__WaitAndChangeBackground_d__33___ctor
               (UI_MainMenu__WaitAndChangeBackground_d__33_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MainMenu.<WaitAndChangeBackground>d__33$$System.IDisposable.Dispose
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__33__System_IDisposable_Dispose (UI_MainMenu__WaitAndChangeBackground_d__33_o* __this, const MethodInfo* method);
// 0x4408690

void UI_MainMenu__WaitAndChangeBackground_d__33__System_IDisposable_Dispose
               (UI_MainMenu__WaitAndChangeBackground_d__33_o *__this,MethodInfo *method)

{
  return;
}


// UI.MainMenu.<WaitAndChangeBackground>d__33$$MoveNext
// il2cpp: bool UI_MainMenu__WaitAndChangeBackground_d__33__MoveNext (UI_MainMenu__WaitAndChangeBackground_d__33_o* __this, const MethodInfo* method);
// 0x44086a0

bool_conflict
UI_MainMenu__WaitAndChangeBackground_d__33__MoveNext
          (UI_MainMenu__WaitAndChangeBackground_d__33_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MainMenu_o *pUVar2;
  UI_MainBackgroundMenu_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  UnityEngine_WaitForSeconds_o *__this_02;
  undefined8 uVar3;
  UI_MainMenu__WaitAndChangeBackground_d__33_o *pUVar4;
  
  pUVar4 = __this;
  if (g_data_057ae5b2 == '\0') {
    pUVar4 = (UI_MainMenu__WaitAndChangeBackground_d__33_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b2 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pUVar2 == (UI_MainMenu_o *)0x0) ||
       (__this_00 = (pUVar2->fields)._backgroundMenu,
       pUVar4 = (UI_MainMenu__WaitAndChangeBackground_d__33_o *)0x0,
       __this_00 == (UI_MainBackgroundMenu_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(pUVar4->fields).__2__current;
    }
    UI_MainBackgroundMenu__ChangeMainBackground(__this_00,method);
    __this_01 = (pUVar2->fields)._tipPanel;
    if (__this_01 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,1,(MethodInfo *)0x0);
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
  }
  __this_02 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_02,20.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_02;
  uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_02);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// UI.MainMenu.<WaitAndChangeBackground>d__33$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MainMenu__WaitAndChangeBackground_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MainMenu__WaitAndChangeBackground_d__33_o* __this, const MethodInfo* method);
// 0x4408770

Il2CppObject *
UI_MainMenu__WaitAndChangeBackground_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_MainMenu__WaitAndChangeBackground_d__33_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainMenu.<WaitAndChangeBackground>d__33$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__33__System_Collections_IEnumerator_Reset (UI_MainMenu__WaitAndChangeBackground_d__33_o* __this, const MethodInfo* method);
// 0x4408780

void UI_MainMenu__WaitAndChangeBackground_d__33__System_Collections_IEnumerator_Reset
               (UI_MainMenu__WaitAndChangeBackground_d__33_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.MainMenu.<WaitAndChangeBackground>d__33$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MainMenu__WaitAndChangeBackground_d__33__System_Collections_IEnumerator_get_Current (UI_MainMenu__WaitAndChangeBackground_d__33_o* __this, const MethodInfo* method);
// 0x44087c0

Il2CppObject *
UI_MainMenu__WaitAndChangeBackground_d__33__System_Collections_IEnumerator_get_Current
          (UI_MainMenu__WaitAndChangeBackground_d__33_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainMenu$$Setup
// il2cpp: void UI_MainMenu__Setup (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x4406410

void UI_MainMenu__Setup(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_UI_Text_o **ppUVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  SimpleJSONFixed_JSONNode_o *a;
  code *UNRECOVERED_JUMPTABLE_01;
  void *pvVar6;
  Il2CppMethodPointer vtableDispatch;
  UI_ExternalLinkPopup_o *__this_00;
  System_Object_array *pSVar7;
  long lVar8;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  bool_conflict bVar9;
  uint32_t uVar10;
  System_String_o *pSVar11;
  MethodInfo *pMVar12;
  Il2CppClass *pIVar13;
  UnityEngine_GameObject_o *pUVar14;
  UnityEngine_UI_Text_o *pUVar15;
  Il2CppClass *__this_02;
  UnityEngine_Component_o *pUVar16;
  undefined8 *puVar17;
  Il2CppObject *__this_03;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar18;
  Il2CppObject *pIVar19;
  Utility_FileWatcherExtension_o *pUVar20;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar21;
  UI_CreateGameSelectModePopup_o *pUVar22;
  UI_CreateGameSelectAddonPopup_o *pUVar23;
  UI_CreateGamePopup_c *pUVar24;
  System_Threading_CancellationTokenSource_o *pSVar25;
  UnityEngine_Transform_o *pUVar26;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar27;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *method_00;
  UI_MainMenu_o *__this_05;
  UI_BasePopup_o *pUVar28;
  UI_CreateGamePopup_o *__this_06;
  System_Collections_Generic_List_object__c *__this_07;
  
  if (g_data_057ae5a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"MainBackgroundInfo");
    g_data_057ae5a7 = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  a = (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_MainMenu + 0xb8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar9 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = ApplicationManagers_ResourceManager__LoadText(pSVar11,"MainBackgroundInfo",(MethodInfo *)0x0);
    pMVar12 = (MethodInfo *)SimpleJSONFixed_JSON__Parse(pSVar11,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_MainMenu + 0xb8) = pMVar12;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MainMenu + 0xb8));
  }
  UI_MainMenu__SetupMainBackground(__this,pMVar12);
  UI_MainMenu__SetupIntroPanel(__this,pMVar12);
  if (g_data_057ae5ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"AOTTG2 Version 7.28.2026.");
    il2cpp_runtime_helper_023445d0(&"AOTTG2 DEVELOPMENT VERSION");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5ab = '\x01';
  }
  pIVar13 = (Il2CppClass *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ElementStyle + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar14 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)pIVar13,
                       (UI_ElementStyle_o *)**(undefined8 **)(TypeInfo_ElementStyle + 0xb8),
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
  if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
    pUVar15 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_Text_GetComponent_Text);
    ppUVar2 = &(__this->fields)._multiplayerStatusLabel;
    (__this->fields)._multiplayerStatusLabel = pUVar15;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    pUVar15 = (__this->fields)._multiplayerStatusLabel;
    pIVar13 = (Il2CppClass *)0x0;
    if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar14,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
      pUVar15 = *ppUVar2;
      pIVar13 = (Il2CppClass *)0x0;
      if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar15->klass->vtable)._23_set_color.methodPtr)(0,0);
        pIVar13 = (Il2CppClass *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        __this_02 = (Il2CppClass *)
                    UI_ElementFactory__CreateDefaultLabel
                              ((UnityEngine_Transform_o *)pIVar13,
                               (UI_ElementStyle_o *)**(undefined8 **)(TypeInfo_ElementStyle + 0xb8),
                               (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0
                              );
        if ((__this_02 != (Il2CppClass *)0x0) &&
           (pUVar16 = (UnityEngine_Component_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Text_GetComponent_Text), pIVar13 = __this_02,
           pUVar16 != (UnityEngine_Component_o *)0x0)) {
          pUVar14 = UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0);
          UI_ElementFactory__SetAnchor
                    (pUVar14,7,7,(UnityEngine_Vector2_o)0x41a0000000000000,(MethodInfo *)0x0);
          (**(code **)&pUVar16->klass[1]._2.naturalAligment)
                    (0x3f800000,0x3f800000,pUVar16,pUVar16->klass[1].vtable._0_Equals.methodPtr);
          if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            cVar3 = *(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8);
          }
          else {
            cVar3 = *(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8);
          }
          if (cVar3 == '\0') {
            puVar17 = &"AOTTG2 Version 7.28.2026.";
          }
          else {
            puVar17 = &"AOTTG2 DEVELOPMENT VERSION";
          }
          (*pUVar16->klass[4]._1.gc_desc)(pUVar16,*puVar17,pUVar16->klass[4]._1.name);
          UNRECOVERED_JUMPTABLE_01 = pUVar16->klass[4]._1.gc_desc;
          (*UNRECOVERED_JUMPTABLE_01)(pUVar16,"",pUVar16->klass[4]._1.name,UNRECOVERED_JUMPTABLE_01)
          ;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndChangeBackground_d__33);
    g_data_057ae5ac = '\x01';
  }
  __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndChangeBackground_d__33);
  pIVar19 = __this_03;
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = 0;
  if (__this_03 != (Il2CppObject *)0x0) {
    __this_03[2].klass = pIVar13;
    il2cpp_runtime_helper_022b4080(__this_03 + 2,pIVar13);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (*pIVar19->klass->vtable[6].methodPtr)();
  pIVar13 = pIVar19[0xc].klass;
  if (pIVar13 != (Il2CppClass *)0x0) {
    pvVar6 = (pIVar13->_1).image;
    UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar6 + 0x288);
    (*UNRECOVERED_JUMPTABLE_01)
              (pIVar13,*(undefined8 *)((long)pvVar6 + 0x290),extraout_RDX,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pvVar6 = (pIVar13->_1).image;
  pMVar12 = *(MethodInfo **)((long)pvVar6 + 0x1a0);
  (**(code **)((long)pvVar6 + 0x198))();
  __this_05 = (UI_MainMenu_o *)(pIVar13->_1).implementedInterfaces;
  if (__this_05 != (UI_MainMenu_o *)0x0) {
    vtableDispatch = ((Il2CppClass *)__this_05->klass)->vtable[0x15].methodPtr;
    (*vtableDispatch)
              (__this_05,((Il2CppClass *)__this_05->klass)->vtable[0x15].method,extraout_RDX_00,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar12;
  if (g_data_057ae5af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&"TutorialButton");
    il2cpp_runtime_helper_023445d0(&"https://www.patreon.com/aottg2");
    il2cpp_runtime_helper_023445d0(&"QuestButton");
    il2cpp_runtime_helper_023445d0(&"HelpButton");
    il2cpp_runtime_helper_023445d0(&"LeaderboardButton");
    il2cpp_runtime_helper_023445d0(&"ToolsButton");
    il2cpp_runtime_helper_023445d0(&"PatreonButton");
    il2cpp_runtime_helper_023445d0(&"CreditsButton");
    il2cpp_runtime_helper_023445d0(&"ProfileButton");
    il2cpp_runtime_helper_023445d0(&"SettingsButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerButton");
    il2cpp_runtime_helper_023445d0(&"QuitButton");
    il2cpp_runtime_helper_023445d0(&"SingleplayerButton");
    il2cpp_runtime_helper_023445d0(&"SocialButton");
    g_data_057ae5af = '\x01';
  }
  bVar9 = UI_MainMenu__IsPopupActive(__this_05,method_00);
  (*(__this_05->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this_05,(__this_05->klass->vtable)._6_HideAllPopups.method);
  if (((char)bVar9 != '\0') &&
     (bVar9 = System_String__op_Equality
                        ((__this_05->fields)._lastButtonClicked,(System_String_o *)pMVar12,(MethodInfo *)0x0),
     (char)bVar9 != '\0')) {
    return;
  }
  (__this_05->fields)._lastButtonClicked = (System_String_o *)pMVar12;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._lastButtonClicked);
  uVar10 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pMVar12,(MethodInfo *)0x0);
  if (uVar10 < 0x400b50bd) {
    if (uVar10 < 0x16c989b9) {
      if (uVar10 == 0xf995a3a) {
        bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pUVar28 = (__this_05->fields)._socialPopup;
        if (pUVar28 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_06 = (UI_CreateGamePopup_o *)0x0;
      }
      else if (uVar10 == 0x102e9109) {
        bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pUVar28 = (__this_05->fields)._questPopup;
        if (pUVar28 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_06 = (UI_CreateGamePopup_o *)0x0;
      }
      else {
        if (uVar10 != 0x16c989b8) {
          return;
        }
        bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pUVar28 = (__this_05->fields)._toolsPopup;
        if (pUVar28 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_06 = (UI_CreateGamePopup_o *)0x0;
      }
    }
    else if (uVar10 == 0x2e76c0d0) {
      bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"SingleplayerButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      __this_06 = (UI_CreateGamePopup_o *)(__this_05->fields)._createGamePopup;
      if (__this_06 != (UI_CreateGamePopup_o *)0x0) {
        bVar4 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
        if ((bVar4 <= (__this_06->klass->_2).naturalAligment) &&
           ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_CreateGamePopup)) {
          UI_CreateGamePopup__Show(__this_06,0,(MethodInfo *)0x0);
          return;
        }
        goto label_044070e6;
      }
    }
    else if (uVar10 == 0x2f231a13) {
      bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"MultiplayerButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar28 = (__this_05->fields)._multiplayerMapPopup;
      if (pUVar28 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
    }
    else {
      if ((uVar10 != 0x400b50bc) ||
         (bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"SettingsButton",(MethodInfo *)0x0),
         (char)bVar9 == '\0')) {
        return;
      }
      pUVar28 = (__this_05->fields)._settingsPopup;
      if (pUVar28 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else if (uVar10 < 0x897f23a9) {
    if (uVar10 == 0x897f23a8) {
      bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar28 = (__this_05->fields)._leaderboardPopup;
      if (pUVar28 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
    }
    else if (uVar10 == 0x435494ca) {
      bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"PatreonButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      __this_00 = (__this_05->fields).ExternalLinkPopup;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
      if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
        UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (uVar10 != 0x4d49ad7f) {
        return;
      }
      bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar28 = (__this_05->fields)._tutorialPopup;
      if (pUVar28 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else {
    if (uVar10 < 0xf4ca4aa2) {
      if (uVar10 == 0xe45fe9d6) {
        bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Application__Quit_4daefd0((MethodInfo *)0x0);
        return;
      }
      if (uVar10 != 0xf4ca4aa1) {
        return;
      }
      bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar10 == 0xfadab5e2) {
      bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar28 = (__this_05->fields)._aboutPopup;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
      if (pUVar28 != (UI_BasePopup_o *)0x0) goto label_044070c9;
    }
    else {
      if (uVar10 != 0xff10090e) {
        return;
      }
      bVar9 = System_String__op_Equality((System_String_o *)pMVar12,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar28 = (__this_05->fields)._editProfilePopup;
      if (pUVar28 != (UI_BasePopup_o *)0x0) {
label_044070c9:
        (*(pUVar28->klass->vtable)._21_Show.methodPtr)(pUVar28,(pUVar28->klass->vtable)._21_Show.method);
        return;
      }
      __this_06 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044070e6:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerMapPopup");
    g_data_057ae5a9 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this_06,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  pUVar24 = (UI_CreateGamePopup_c *)0x0;
  pUVar16 = (UnityEngine_Component_o *)
            UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_04,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
  if (pUVar16 != (UnityEngine_Component_o *)0x0) {
    pSVar18 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
              UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    (__this_06->fields).killPopupKeyframesOut = pSVar18;
    il2cpp_runtime_helper_022b4080(&(__this_06->fields).killPopupKeyframesOut);
    __this_04 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
    pUVar24 = (UI_CreateGamePopup_c *)0x0;
    pUVar16 = (UnityEngine_Component_o *)
              UI_ElementFactory__CreateHeadedPanel_object_
                        ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    if (pUVar16 != (UnityEngine_Component_o *)0x0) {
      pSVar18 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this_06->fields).killPopupKeyframesIn = pSVar18;
      il2cpp_runtime_helper_022b4080(&(__this_06->fields).killPopupKeyframesIn);
      __this_04 = (System_Collections_Generic_List_object__o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0)
      ;
      pUVar24 = "Prefabs/MainMenu/MultiplayerMapPopup";
      pUVar14 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          ((UnityEngine_Transform_o *)__this_04,(System_String_o *)"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup
                          );
      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
        pSVar11 = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
        (__this_06->fields).LocaleCategory = pSVar11;
        il2cpp_runtime_helper_022b4080(&(__this_06->fields).LocaleCategory);
        __this_04 = (System_Collections_Generic_List_object__o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
        pUVar24 = (UI_CreateGamePopup_c *)0x0;
        pUVar16 = (UnityEngine_Component_o *)
                  UI_ElementFactory__CreateHeadedPanel_object_
                            ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
        if (pUVar16 != (UnityEngine_Component_o *)0x0) {
          pSVar11 = (System_String_o *)UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this_06->fields)._cachedAddonSelectionKey = pSVar11;
          il2cpp_runtime_helper_022b4080(&(__this_06->fields)._cachedAddonSelectionKey);
          __this_04 = (System_Collections_Generic_List_object__o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
          pUVar24 = (UI_CreateGamePopup_c *)0x0;
          pUVar16 = (UnityEngine_Component_o *)
                    UI_ElementFactory__CreateHeadedPanel_object_
                              ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar16 != (UnityEngine_Component_o *)0x0) {
            pIVar19 = UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_BasePopup_GetComponent_BasePopup);
            *(Il2CppObject **)&(__this_06->fields).IsMultiplayer = pIVar19;
            il2cpp_runtime_helper_022b4080(&(__this_06->fields).IsMultiplayer);
            __this_04 = (System_Collections_Generic_List_object__o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
            pUVar24 = (UI_CreateGamePopup_c *)0x0;
            pUVar16 = (UnityEngine_Component_o *)
                      UI_ElementFactory__CreateHeadedPanel_object_
                                ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar16 != (UnityEngine_Component_o *)0x0) {
              pUVar20 = (Utility_FileWatcherExtension_o *)
                        UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this_06->fields)._watcher = pUVar20;
              il2cpp_runtime_helper_022b4080(&(__this_06->fields)._watcher);
              __this_04 = (System_Collections_Generic_List_object__o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
              pUVar24 = "Prefabs/MainMenu/MultiplayerRoomListPopup";
              pUVar14 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                  ((UnityEngine_Transform_o *)__this_04,(System_String_o *)"Prefabs/MainMenu/MultiplayerRoomListPopup",0,
                                   MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
              if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                pSVar11 = (System_String_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this_06->fields)._cachedLogicSource = pSVar11;
                il2cpp_runtime_helper_022b4080(&(__this_06->fields)._cachedLogicSource);
                __this_04 = (System_Collections_Generic_List_object__o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                pUVar24 = (UI_CreateGamePopup_c *)0x0;
                pUVar16 = (UnityEngine_Component_o *)
                          UI_ElementFactory__CreateHeadedPanel_object_
                                    ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
                if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                  pSVar21 = (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
                             *)UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this_06->fields)._cachedAddonSettings = pSVar21;
                  il2cpp_runtime_helper_022b4080(&(__this_06->fields)._cachedAddonSettings);
                  __this_04 = (System_Collections_Generic_List_object__o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                  pUVar24 = (UI_CreateGamePopup_c *)0x0;
                  pUVar16 = (UnityEngine_Component_o *)
                            UI_ElementFactory__CreateHeadedPanel_object_
                                      ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                    pUVar22 = (UI_CreateGameSelectModePopup_o *)
                              UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this_06->fields).SelectModePopup = pUVar22;
                    il2cpp_runtime_helper_022b4080(&(__this_06->fields).SelectModePopup);
                    __this_04 = (System_Collections_Generic_List_object__o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                    pUVar24 = (UI_CreateGamePopup_c *)0x0;
                    pUVar16 = (UnityEngine_Component_o *)
                              UI_ElementFactory__CreateHeadedPanel_object_
                                        ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                      pUVar23 = (UI_CreateGameSelectAddonPopup_o *)
                                UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this_06->fields).SelectAddonPopup = pUVar23;
                      il2cpp_runtime_helper_022b4080(&(__this_06->fields).SelectAddonPopup);
                      __this_04 = (System_Collections_Generic_List_object__o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                      pUVar24 = (UI_CreateGamePopup_c *)0x0;
                      pUVar16 = (UnityEngine_Component_o *)
                                UI_ElementFactory__CreateHeadedPanel_object_
                                          ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                        pUVar24 = (UI_CreateGamePopup_c *)
                                  UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_BasePopup_GetComponent_BasePopup);
                        __this_06[1].klass = pUVar24;
                        il2cpp_runtime_helper_022b4080(__this_06 + 1);
                        __this_04 = (System_Collections_Generic_List_object__o *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                        pUVar24 = (UI_CreateGamePopup_c *)0x0;
                        pUVar16 = (UnityEngine_Component_o *)
                                  UI_ElementFactory__CreateHeadedPanel_object_
                                            ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
                        if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                          pIVar19 = UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_BasePopup_GetComponent_BasePopup);
                          __this_06[1].monitor = pIVar19;
                          il2cpp_runtime_helper_022b4080(&__this_06[1].monitor);
                          __this_04 = (System_Collections_Generic_List_object__o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                          pUVar24 = (UI_CreateGamePopup_c *)0x0;
                          pUVar16 = (UnityEngine_Component_o *)
                                    UI_ElementFactory__CreateHeadedPanel_object_
                                              ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
                          if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                            pSVar25 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_BasePopup_GetComponent_BasePopup);
                            __this_06[1].fields.m_CancellationTokenSource = pSVar25;
                            il2cpp_runtime_helper_022b4080(&__this_06[1].fields.m_CancellationTokenSource);
                            __this_04 = (System_Collections_Generic_List_object__o *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                            pUVar24 = (UI_CreateGamePopup_c *)0x0;
                            pUVar16 = (UnityEngine_Component_o *)
                                      UI_ElementFactory__CreateDefaultPopup_object_
                                                ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                            if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                              pUVar26 = (UnityEngine_Transform_o *)
                                        UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                              __this_06[1].fields.SinglePanel = pUVar26;
                              il2cpp_runtime_helper_022b4080(&__this_06[1].fields.SinglePanel);
                              __this_04 = (System_Collections_Generic_List_object__o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                              pUVar24 = (UI_CreateGamePopup_c *)0x0;
                              pUVar16 = (UnityEngine_Component_o *)
                                        UI_ElementFactory__CreateDefaultPopup_object_
                                                  ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                              if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                pSVar27 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                                          UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                                (__this_06->fields)._cachedModeSettings = pSVar27;
                                il2cpp_runtime_helper_022b4080(&(__this_06->fields)._cachedModeSettings);
                                __this_04 = (System_Collections_Generic_List_object__o *)
                                            UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0)
                                ;
                                pUVar24 = (UI_CreateGamePopup_c *)0x0;
                                pUVar16 = (UnityEngine_Component_o *)
                                          UI_ElementFactory__CreateDefaultPopup_object_
                                                    ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                                if (pUVar16 != (UnityEngine_Component_o *)0x0) {
                                  pUVar24 = (UI_CreateGamePopup_c *)
                                            UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_BasePopup_GetComponent_BasePopup);
                                  __this_06[1].fields.m_CachedPtr = (intptr_t)pUVar24;
                                  il2cpp_runtime_helper_022b4080(&__this_06[1].fields);
                                  lVar8 = MethodInfo_Void_Add;
                                  __this_04 = (System_Collections_Generic_List_object__o *)
                                              (__this_06->fields).SinglePanel;
                                  if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
                                    pUVar24 = (UI_CreateGamePopup_c *)(__this_06->fields).killPopupKeyframesIn
                                    ;
                                    piVar1 = &(__this_04->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar7 = (__this_04->fields)._items;
                                    if (pSVar7 != (System_Object_array *)0x0) {
                                      uVar5 = (__this_04->fields)._size;
                                      if (uVar5 < (uint)pSVar7->max_length) {
                                        (__this_04->fields)._size = uVar5 + 1;
                                        pSVar7->m_Items[(int)uVar5] = (Il2CppObject *)pUVar24;
                                        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                        __this_04 = (System_Collections_Generic_List_object__o *)
                                                    (__this_06->fields).SinglePanel;
                                        lVar8 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (__this_04,(Il2CppObject *)pUVar24,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                        __this_04 = (System_Collections_Generic_List_object__o *)
                                                    (__this_06->fields).SinglePanel;
                                        lVar8 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar8;
                                      if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
                                        pUVar24 = (UI_CreateGamePopup_c *)(__this_06->fields).LocaleCategory;
                                        piVar1 = &(__this_04->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pSVar7 = (__this_04->fields)._items;
                                        if (pSVar7 != (System_Object_array *)0x0) {
                                          uVar5 = (__this_04->fields)._size;
                                          if (uVar5 < (uint)pSVar7->max_length) {
                                            (__this_04->fields)._size = uVar5 + 1;
                                            pSVar7->m_Items[(int)uVar5] = (Il2CppObject *)pUVar24;
                                            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                            __this_04 = (System_Collections_Generic_List_object__o *)
                                                        (__this_06->fields).SinglePanel;
                                            lVar8 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      (__this_04,(Il2CppObject *)pUVar24,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                            __this_04 = (System_Collections_Generic_List_object__o *)
                                                        (__this_06->fields).SinglePanel;
                                            lVar8 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar8;
                                          if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
                                            pUVar24 = (UI_CreateGamePopup_c *)
                                                      (__this_06->fields)._cachedAddonSelectionKey;
                                            piVar1 = &(__this_04->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pSVar7 = (__this_04->fields)._items;
                                            if (pSVar7 != (System_Object_array *)0x0) {
                                              uVar5 = (__this_04->fields)._size;
                                              if (uVar5 < (uint)pSVar7->max_length) {
                                                (__this_04->fields)._size = uVar5 + 1;
                                                pSVar7->m_Items[(int)uVar5] = (Il2CppObject *)pUVar24;
                                                il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                __this_04 = (System_Collections_Generic_List_object__o *)
                                                            (__this_06->fields).SinglePanel;
                                                lVar8 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          (__this_04,(Il2CppObject *)pUVar24,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_04 = (System_Collections_Generic_List_object__o *)
                                                            (__this_06->fields).SinglePanel;
                                                lVar8 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar8;
                                              if (__this_04 !=
                                                  (System_Collections_Generic_List_object__o *)0x0) {
                                                pUVar24 = *(UI_CreateGamePopup_c **)
                                                           &(__this_06->fields).IsMultiplayer;
                                                piVar1 = &(__this_04->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pSVar7 = (__this_04->fields)._items;
                                                if (pSVar7 != (System_Object_array *)0x0) {
                                                  uVar5 = (__this_04->fields)._size;
                                                  if (uVar5 < (uint)pSVar7->max_length) {
                                                    (__this_04->fields)._size = uVar5 + 1;
                                                    pSVar7->m_Items[(int)uVar5] = (Il2CppObject *)pUVar24;
                                                    il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                    __this_04 = (System_Collections_Generic_List_object__o *)
                                                                (__this_06->fields).SinglePanel;
                                                    lVar8 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              (__this_04,(Il2CppObject *)pUVar24,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_04 = (System_Collections_Generic_List_object__o *)
                                                                (__this_06->fields).SinglePanel;
                                                    lVar8 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar8;
                                                  if (__this_04 !=
                                                      (System_Collections_Generic_List_object__o *)0x0) {
                                                    pUVar24 = (UI_CreateGamePopup_c *)
                                                              (__this_06->fields)._watcher;
                                                    piVar1 = &(__this_04->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pSVar7 = (__this_04->fields)._items;
                                                    if (pSVar7 != (System_Object_array *)0x0) {
                                                      uVar5 = (__this_04->fields)._size;
                                                      if (uVar5 < (uint)pSVar7->max_length) {
                                                        (__this_04->fields)._size = uVar5 + 1;
                                                        pSVar7->m_Items[(int)uVar5] = (Il2CppObject *)pUVar24;
                                                        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                        __this_04 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_06->fields).SinglePanel;
                                                        lVar8 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  (__this_04,(Il2CppObject *)pUVar24,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_04 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_06->fields).SinglePanel;
                                                        lVar8 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar8;
                                                      if (__this_04 !=
                                                          (System_Collections_Generic_List_object__o *)0x0) {
                                                        pUVar24 = (UI_CreateGamePopup_c *)
                                                                  (__this_06->fields)._cachedLogicSource;
                                                        piVar1 = &(__this_04->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar7 = (__this_04->fields)._items;
                                                        if (pSVar7 != (System_Object_array *)0x0) {
                                                          uVar5 = (__this_04->fields)._size;
                                                          if (uVar5 < (uint)pSVar7->max_length) {
                                                            (__this_04->fields)._size = uVar5 + 1;
                                                            pSVar7->m_Items[(int)uVar5] =
                                                                 (Il2CppObject *)pUVar24;
                                                            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                            __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar24 = (UI_CreateGamePopup_c *)
                                                                   (__this_06->fields)._cachedAddonSettings;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar24;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar24 = (UI_CreateGamePopup_c *)
                                                                   (__this_06->fields).SelectModePopup;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar24;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar24 = (UI_CreateGamePopup_c *)
                                                                   (__this_06->fields).SelectAddonPopup;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar24;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar24 = __this_06[1].klass;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar24;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar24 = __this_06[1].monitor;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar24;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar24 = (UI_CreateGamePopup_c *)
                                                                   (__this_06->fields).killPopupKeyframesOut;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar24;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar24 = (UI_CreateGamePopup_c *)
                                                                   __this_06[1].fields.
                                                                   m_CancellationTokenSource;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar24;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar24 = (UI_CreateGamePopup_c *)
                                                                   __this_06[1].fields.SinglePanel;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar24;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar24 = (UI_CreateGamePopup_c *)
                                                                   (__this_06->fields)._cachedModeSettings;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar24;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar24 = (UI_CreateGamePopup_c *)
                                                                   __this_06[1].fields.m_CachedPtr;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar24;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             return;
                                                           }
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar24,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
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
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_04 = (System_Collections_Generic_List_object__o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) {
    bVar9 = System_String__op_Equality(*(System_String_o **)(lVar8 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_07 = __this_04[7].klass;
  if (__this_07 == (System_Collections_Generic_List_object__c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
    *(int *)&(__this_07->_1).name = (int)pUVar24;
    return;
  }
  UI_MainBackgroundMenu__ChangeMainBackground((UI_MainBackgroundMenu_o *)__this_07,(MethodInfo *)pUVar24);
  __this_01 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)__this_04[7].fields._syncRoot;
  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MainMenu$$SetupMainBackground
// il2cpp: void UI_MainMenu__SetupMainBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x4406550

void UI_MainMenu__SetupMainBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE_01;
  void *pvVar7;
  Il2CppMethodPointer vtableDispatch;
  UI_ExternalLinkPopup_o *__this_00;
  System_Object_array *pSVar8;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  uint16_t *puVar9;
  bool_conflict bVar10;
  uint32_t uVar11;
  UI_MainBackgroundMenu_o *pUVar12;
  Il2CppObject *pIVar13;
  Il2CppClass *pIVar14;
  Il2CppClass *pIVar15;
  UnityEngine_MonoBehaviour_o *actionHandler;
  System_String_o *pSVar16;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar17;
  UnityEngine_GameObject_o *pUVar18;
  Il2CppObject *pIVar19;
  UnityEngine_Component_o *pUVar20;
  undefined8 *puVar21;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar22;
  Utility_FileWatcherExtension_o *pUVar23;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar24;
  UI_CreateGameSelectModePopup_o *pUVar25;
  UI_CreateGameSelectAddonPopup_o *pUVar26;
  UI_CreateGamePopup_c *pUVar27;
  System_Threading_CancellationTokenSource_o *pSVar28;
  UnityEngine_Transform_o *pUVar29;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar30;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *b;
  MethodInfo *method_00;
  UI_MainMenu_o *__this_03;
  UI_BasePopup_o *pUVar31;
  UI_CreateGamePopup_o *__this_04;
  System_Collections_Generic_List_object__c *__this_05;
  
  if (g_data_057ae5a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainBackgroundMenu_CreateMenu_MainBackgroundMenu);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/BackgroundMenu");
    g_data_057ae5a8 = '\x01';
  }
  pUVar12 = (UI_MainBackgroundMenu_o *)UI_ElementFactory__CreateMenu_object_("Prefabs/Panels/BackgroundMenu",MethodInfo_MainBackgroundMenu_CreateMenu_MainBackgroundMenu);
  (__this->fields)._backgroundMenu = pUVar12;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._backgroundMenu,pUVar12);
  pUVar12 = (__this->fields)._backgroundMenu;
  pIVar19 = (Il2CppObject *)0x0;
  if (pUVar12 != (UI_MainBackgroundMenu_o *)0x0) {
    (*(pUVar12->klass->vtable)._4_Setup.methodPtr)();
    if (g_data_057ae5ac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndChangeBackground_d__33);
      g_data_057ae5ac = '\x01';
    }
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndChangeBackground_d__33);
    pIVar19 = pIVar13;
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar13[1].klass = 0;
    if (pIVar13 != (Il2CppObject *)0x0) {
      pIVar13[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_helper_022b4080(pIVar13 + 2,__this);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar13,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5aa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgGameUiActions_AddComponent_AottgGameUiActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgMainMenuPanelHoverSlide_AddComponent_AottgMainMenuP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgMainMenuTipPanelController_AddComponent_AottgMainMe);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_AddComponent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"AoTTG Main Menu Gisketch");
    il2cpp_runtime_helper_023445d0(&"main-menu");
    g_data_057ae5aa = '\x01';
  }
  pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pIVar14,"AoTTG Main Menu Gisketch",(MethodInfo *)0x0);
  pIVar13 = pIVar19 + 0x13;
  pIVar19[0x13].klass = pIVar14;
  il2cpp_runtime_helper_022b4080(pIVar13);
  pIVar14 = (Il2CppClass *)0x0;
  if (pIVar19[0x13].klass != (Il2CppClass *)0x0) {
    pIVar15 = (Il2CppClass *)
              UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)pIVar19[0x13].klass,MethodInfo_GisketchUIRoot_AddComponent_GisketchUIRoot);
    pIVar14 = pIVar13->klass;
    if ((pIVar14 != (Il2CppClass *)0x0) &&
       (actionHandler =
             (UnityEngine_MonoBehaviour_o *)
             UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pIVar14,MethodInfo_AottgGameUiActions_AddComponent_AottgGameUiActions),
       pIVar15 != (Il2CppClass *)0x0)) {
      Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen
                ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar15,"main-menu",(MethodInfo *)0x0);
      pIVar14 = pIVar15;
      Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler
                ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar15,actionHandler,(MethodInfo *)0x0);
      pSVar16 = UI_MainMenu__GisketchThemePath((MethodInfo *)pIVar14);
      x = (UnityEngine_Object_o *)UnityEngine_Resources__Load_object_(pSVar16,MethodInfo_TextAsset_Load_TextAsset);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pIVar14 = pIVar15;
      if ((char)bVar10 == '\0') {
        Gisketch_Aottg2UI_GisketchUIRoot__Build
                  ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar15,(MethodInfo *)0x0);
      }
      else {
        Gisketch_Aottg2UI_GisketchUIRoot__SetTheme
                  ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar15,(UnityEngine_TextAsset_o *)x,
                   (MethodInfo *)0x0);
      }
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x40), lVar5 != 0)) {
        Gisketch_Aottg2UI_GisketchUIRoot__SetScale_3a2c960
                  ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar15,*(float *)(lVar5 + 0x14),(MethodInfo *)0x0);
        pIVar14 = pIVar13->klass;
        if ((pIVar14 != (Il2CppClass *)0x0) &&
           (pIVar17 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)pIVar14,MethodInfo_AottgMainMenuPanelHoverSlide_AddComponent_AottgMainMenuP),
           pIVar17 != (Il2CppObject *)0x0)) {
          pIVar17[2].klass = pIVar15;
          il2cpp_runtime_helper_022b4080(pIVar17 + 2);
          pIVar14 = (Il2CppClass *)0x0;
          if (pIVar13->klass != (Il2CppClass *)0x0) {
            pIVar13 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)pIVar13->klass,MethodInfo_AottgMainMenuTipPanelController_AddComponent_AottgMainMe);
            pIVar19[0x13].monitor = pIVar13;
            il2cpp_runtime_helper_022b4080(&pIVar19[0x13].monitor);
            pIVar14 = (Il2CppClass *)0x0;
            if (pIVar19[0x13].monitor != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
              Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup
                        (pIVar19[0x13].monitor,(Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar15,(MethodInfo *)0x0
                        );
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"AOTTG2 Version 7.28.2026.");
    il2cpp_runtime_helper_023445d0(&"AOTTG2 DEVELOPMENT VERSION");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5ab = '\x01';
  }
  pIVar15 = (Il2CppClass *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ElementStyle + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar18 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)pIVar15,
                       (UI_ElementStyle_o *)**(undefined8 **)(TypeInfo_ElementStyle + 0xb8),
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
  if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
    pIVar19 = UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_Text_GetComponent_Text);
    puVar9 = &(pIVar14->_2).field_count;
    *(Il2CppObject **)&(pIVar14->_2).field_count = pIVar19;
    il2cpp_runtime_helper_022b4080(puVar9);
    pUVar20 = *(UnityEngine_Component_o **)&(pIVar14->_2).field_count;
    pIVar15 = (Il2CppClass *)0x0;
    if (pUVar20 != (UnityEngine_Component_o *)0x0) {
      pUVar18 = UnityEngine_Component__get_gameObject(pUVar20,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar18,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
      plVar6 = *(long **)puVar9;
      pIVar15 = (Il2CppClass *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x2a8))(0,0);
        pIVar15 = (Il2CppClass *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
        pIVar14 = (Il2CppClass *)
                  UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)pIVar15,
                             (UI_ElementStyle_o *)**(undefined8 **)(TypeInfo_ElementStyle + 0xb8),
                             (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
        if ((pIVar14 != (Il2CppClass *)0x0) &&
           (pUVar20 = (UnityEngine_Component_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)pIVar14,MethodInfo_Text_GetComponent_Text), pIVar15 = pIVar14,
           pUVar20 != (UnityEngine_Component_o *)0x0)) {
          pUVar18 = UnityEngine_Component__get_gameObject(pUVar20,(MethodInfo *)0x0);
          UI_ElementFactory__SetAnchor
                    (pUVar18,7,7,(UnityEngine_Vector2_o)0x41a0000000000000,(MethodInfo *)0x0);
          (**(code **)&pUVar20->klass[1]._2.naturalAligment)
                    (0x3f800000,0x3f800000,pUVar20,pUVar20->klass[1].vtable._0_Equals.methodPtr);
          if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            cVar2 = *(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8);
          }
          else {
            cVar2 = *(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8);
          }
          if (cVar2 == '\0') {
            puVar21 = &"AOTTG2 Version 7.28.2026.";
          }
          else {
            puVar21 = &"AOTTG2 DEVELOPMENT VERSION";
          }
          (*pUVar20->klass[4]._1.gc_desc)(pUVar20,*puVar21,pUVar20->klass[4]._1.name);
          UNRECOVERED_JUMPTABLE_01 = pUVar20->klass[4]._1.gc_desc;
          (*UNRECOVERED_JUMPTABLE_01)(pUVar20,"",pUVar20->klass[4]._1.name,UNRECOVERED_JUMPTABLE_01)
          ;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndChangeBackground_d__33);
    g_data_057ae5ac = '\x01';
  }
  pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndChangeBackground_d__33);
  pIVar19 = pIVar13;
  System_Object___ctor(pIVar13,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar13[1].klass = 0;
  if (pIVar13 != (Il2CppObject *)0x0) {
    pIVar13[2].klass = pIVar15;
    il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar15);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (*pIVar19->klass->vtable[6].methodPtr)();
  pIVar14 = pIVar19[0xc].klass;
  if (pIVar14 != (Il2CppClass *)0x0) {
    pvVar7 = (pIVar14->_1).image;
    UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar7 + 0x288);
    (*UNRECOVERED_JUMPTABLE_01)
              (pIVar14,*(undefined8 *)((long)pvVar7 + 0x290),extraout_RDX,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pvVar7 = (pIVar14->_1).image;
  b = *(MethodInfo **)((long)pvVar7 + 0x1a0);
  (**(code **)((long)pvVar7 + 0x198))();
  __this_03 = (UI_MainMenu_o *)(pIVar14->_1).implementedInterfaces;
  if (__this_03 != (UI_MainMenu_o *)0x0) {
    vtableDispatch = ((Il2CppClass *)__this_03->klass)->vtable[0x15].methodPtr;
    (*vtableDispatch)
              (__this_03,((Il2CppClass *)__this_03->klass)->vtable[0x15].method,extraout_RDX_00,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = b;
  if (g_data_057ae5af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&"TutorialButton");
    il2cpp_runtime_helper_023445d0(&"https://www.patreon.com/aottg2");
    il2cpp_runtime_helper_023445d0(&"QuestButton");
    il2cpp_runtime_helper_023445d0(&"HelpButton");
    il2cpp_runtime_helper_023445d0(&"LeaderboardButton");
    il2cpp_runtime_helper_023445d0(&"ToolsButton");
    il2cpp_runtime_helper_023445d0(&"PatreonButton");
    il2cpp_runtime_helper_023445d0(&"CreditsButton");
    il2cpp_runtime_helper_023445d0(&"ProfileButton");
    il2cpp_runtime_helper_023445d0(&"SettingsButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerButton");
    il2cpp_runtime_helper_023445d0(&"QuitButton");
    il2cpp_runtime_helper_023445d0(&"SingleplayerButton");
    il2cpp_runtime_helper_023445d0(&"SocialButton");
    g_data_057ae5af = '\x01';
  }
  bVar10 = UI_MainMenu__IsPopupActive(__this_03,method_00);
  (*(__this_03->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this_03,(__this_03->klass->vtable)._6_HideAllPopups.method);
  if (((char)bVar10 != '\0') &&
     (bVar10 = System_String__op_Equality
                         ((__this_03->fields)._lastButtonClicked,(System_String_o *)b,(MethodInfo *)0x0),
     (char)bVar10 != '\0')) {
    return;
  }
  (__this_03->fields)._lastButtonClicked = (System_String_o *)b;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._lastButtonClicked);
  uVar11 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)b,(MethodInfo *)0x0);
  if (uVar11 < 0x400b50bd) {
    if (uVar11 < 0x16c989b9) {
      if (uVar11 == 0xf995a3a) {
        bVar10 = System_String__op_Equality((System_String_o *)b,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        pUVar31 = (__this_03->fields)._socialPopup;
        if (pUVar31 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
      else if (uVar11 == 0x102e9109) {
        bVar10 = System_String__op_Equality((System_String_o *)b,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        pUVar31 = (__this_03->fields)._questPopup;
        if (pUVar31 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
      else {
        if (uVar11 != 0x16c989b8) {
          return;
        }
        bVar10 = System_String__op_Equality((System_String_o *)b,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        pUVar31 = (__this_03->fields)._toolsPopup;
        if (pUVar31 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
    }
    else if (uVar11 == 0x2e76c0d0) {
      bVar10 = System_String__op_Equality((System_String_o *)b,"SingleplayerButton",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      __this_04 = (UI_CreateGamePopup_o *)(__this_03->fields)._createGamePopup;
      if (__this_04 != (UI_CreateGamePopup_o *)0x0) {
        bVar3 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
        if ((bVar3 <= (__this_04->klass->_2).naturalAligment) &&
           ((__this_04->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CreateGamePopup)) {
          UI_CreateGamePopup__Show(__this_04,0,(MethodInfo *)0x0);
          return;
        }
        goto label_044070e6;
      }
    }
    else if (uVar11 == 0x2f231a13) {
      bVar10 = System_String__op_Equality((System_String_o *)b,"MultiplayerButton",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      pUVar31 = (__this_03->fields)._multiplayerMapPopup;
      if (pUVar31 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
    else {
      if ((uVar11 != 0x400b50bc) ||
         (bVar10 = System_String__op_Equality((System_String_o *)b,"SettingsButton",(MethodInfo *)0x0),
         (char)bVar10 == '\0')) {
        return;
      }
      pUVar31 = (__this_03->fields)._settingsPopup;
      if (pUVar31 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else if (uVar11 < 0x897f23a9) {
    if (uVar11 == 0x897f23a8) {
      bVar10 = System_String__op_Equality((System_String_o *)b,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      pUVar31 = (__this_03->fields)._leaderboardPopup;
      if (pUVar31 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
    else if (uVar11 == 0x435494ca) {
      bVar10 = System_String__op_Equality((System_String_o *)b,"PatreonButton",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      __this_00 = (__this_03->fields).ExternalLinkPopup;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
      if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
        UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (uVar11 != 0x4d49ad7f) {
        return;
      }
      bVar10 = System_String__op_Equality((System_String_o *)b,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      pUVar31 = (__this_03->fields)._tutorialPopup;
      if (pUVar31 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else {
    if (uVar11 < 0xf4ca4aa2) {
      if (uVar11 == 0xe45fe9d6) {
        bVar10 = System_String__op_Equality((System_String_o *)b,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Application__Quit_4daefd0((MethodInfo *)0x0);
        return;
      }
      if (uVar11 != 0xf4ca4aa1) {
        return;
      }
      bVar10 = System_String__op_Equality((System_String_o *)b,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar11 == 0xfadab5e2) {
      bVar10 = System_String__op_Equality((System_String_o *)b,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      pUVar31 = (__this_03->fields)._aboutPopup;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
      if (pUVar31 != (UI_BasePopup_o *)0x0) goto label_044070c9;
    }
    else {
      if (uVar11 != 0xff10090e) {
        return;
      }
      bVar10 = System_String__op_Equality((System_String_o *)b,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      pUVar31 = (__this_03->fields)._editProfilePopup;
      if (pUVar31 != (UI_BasePopup_o *)0x0) {
label_044070c9:
        (*(pUVar31->klass->vtable)._21_Show.methodPtr)(pUVar31,(pUVar31->klass->vtable)._21_Show.method);
        return;
      }
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044070e6:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerMapPopup");
    g_data_057ae5a9 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this_04,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  pUVar27 = (UI_CreateGamePopup_c *)0x0;
  pUVar20 = (UnityEngine_Component_o *)
            UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
  if (pUVar20 != (UnityEngine_Component_o *)0x0) {
    pSVar22 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
              UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    (__this_04->fields).killPopupKeyframesOut = pSVar22;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).killPopupKeyframesOut);
    __this_02 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    pUVar27 = (UI_CreateGamePopup_c *)0x0;
    pUVar20 = (UnityEngine_Component_o *)
              UI_ElementFactory__CreateHeadedPanel_object_
                        ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    if (pUVar20 != (UnityEngine_Component_o *)0x0) {
      pSVar22 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this_04->fields).killPopupKeyframesIn = pSVar22;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).killPopupKeyframesIn);
      __this_02 = (System_Collections_Generic_List_object__o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
      ;
      pUVar27 = "Prefabs/MainMenu/MultiplayerMapPopup";
      pUVar18 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup
                          );
      if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
        pSVar16 = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_BasePopup_GetComponent_BasePopup);
        (__this_04->fields).LocaleCategory = pSVar16;
        il2cpp_runtime_helper_022b4080(&(__this_04->fields).LocaleCategory);
        __this_02 = (System_Collections_Generic_List_object__o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
        pUVar27 = (UI_CreateGamePopup_c *)0x0;
        pUVar20 = (UnityEngine_Component_o *)
                  UI_ElementFactory__CreateHeadedPanel_object_
                            ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
        if (pUVar20 != (UnityEngine_Component_o *)0x0) {
          pSVar16 = (System_String_o *)UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this_04->fields)._cachedAddonSelectionKey = pSVar16;
          il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedAddonSelectionKey);
          __this_02 = (System_Collections_Generic_List_object__o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
          pUVar27 = (UI_CreateGamePopup_c *)0x0;
          pUVar20 = (UnityEngine_Component_o *)
                    UI_ElementFactory__CreateHeadedPanel_object_
                              ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar20 != (UnityEngine_Component_o *)0x0) {
            pIVar19 = UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_BasePopup_GetComponent_BasePopup);
            *(Il2CppObject **)&(__this_04->fields).IsMultiplayer = pIVar19;
            il2cpp_runtime_helper_022b4080(&(__this_04->fields).IsMultiplayer);
            __this_02 = (System_Collections_Generic_List_object__o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            pUVar27 = (UI_CreateGamePopup_c *)0x0;
            pUVar20 = (UnityEngine_Component_o *)
                      UI_ElementFactory__CreateHeadedPanel_object_
                                ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar20 != (UnityEngine_Component_o *)0x0) {
              pUVar23 = (Utility_FileWatcherExtension_o *)
                        UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this_04->fields)._watcher = pUVar23;
              il2cpp_runtime_helper_022b4080(&(__this_04->fields)._watcher);
              __this_02 = (System_Collections_Generic_List_object__o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
              pUVar27 = "Prefabs/MainMenu/MultiplayerRoomListPopup";
              pUVar18 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                  ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerRoomListPopup",0,
                                   MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
              if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                pSVar16 = (System_String_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this_04->fields)._cachedLogicSource = pSVar16;
                il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedLogicSource);
                __this_02 = (System_Collections_Generic_List_object__o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                pUVar27 = (UI_CreateGamePopup_c *)0x0;
                pUVar20 = (UnityEngine_Component_o *)
                          UI_ElementFactory__CreateHeadedPanel_object_
                                    ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
                if (pUVar20 != (UnityEngine_Component_o *)0x0) {
                  pSVar24 = (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
                             *)UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this_04->fields)._cachedAddonSettings = pSVar24;
                  il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedAddonSettings);
                  __this_02 = (System_Collections_Generic_List_object__o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                  pUVar27 = (UI_CreateGamePopup_c *)0x0;
                  pUVar20 = (UnityEngine_Component_o *)
                            UI_ElementFactory__CreateHeadedPanel_object_
                                      ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar20 != (UnityEngine_Component_o *)0x0) {
                    pUVar25 = (UI_CreateGameSelectModePopup_o *)
                              UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this_04->fields).SelectModePopup = pUVar25;
                    il2cpp_runtime_helper_022b4080(&(__this_04->fields).SelectModePopup);
                    __this_02 = (System_Collections_Generic_List_object__o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                    pUVar27 = (UI_CreateGamePopup_c *)0x0;
                    pUVar20 = (UnityEngine_Component_o *)
                              UI_ElementFactory__CreateHeadedPanel_object_
                                        ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar20 != (UnityEngine_Component_o *)0x0) {
                      pUVar26 = (UI_CreateGameSelectAddonPopup_o *)
                                UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this_04->fields).SelectAddonPopup = pUVar26;
                      il2cpp_runtime_helper_022b4080(&(__this_04->fields).SelectAddonPopup);
                      __this_02 = (System_Collections_Generic_List_object__o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                      pUVar27 = (UI_CreateGamePopup_c *)0x0;
                      pUVar20 = (UnityEngine_Component_o *)
                                UI_ElementFactory__CreateHeadedPanel_object_
                                          ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar20 != (UnityEngine_Component_o *)0x0) {
                        pUVar27 = (UI_CreateGamePopup_c *)
                                  UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_BasePopup_GetComponent_BasePopup);
                        __this_04[1].klass = pUVar27;
                        il2cpp_runtime_helper_022b4080(__this_04 + 1);
                        __this_02 = (System_Collections_Generic_List_object__o *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                        pUVar27 = (UI_CreateGamePopup_c *)0x0;
                        pUVar20 = (UnityEngine_Component_o *)
                                  UI_ElementFactory__CreateHeadedPanel_object_
                                            ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
                        if (pUVar20 != (UnityEngine_Component_o *)0x0) {
                          pIVar19 = UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_BasePopup_GetComponent_BasePopup);
                          __this_04[1].monitor = pIVar19;
                          il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
                          __this_02 = (System_Collections_Generic_List_object__o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                          pUVar27 = (UI_CreateGamePopup_c *)0x0;
                          pUVar20 = (UnityEngine_Component_o *)
                                    UI_ElementFactory__CreateHeadedPanel_object_
                                              ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
                          if (pUVar20 != (UnityEngine_Component_o *)0x0) {
                            pSVar28 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_BasePopup_GetComponent_BasePopup);
                            __this_04[1].fields.m_CancellationTokenSource = pSVar28;
                            il2cpp_runtime_helper_022b4080(&__this_04[1].fields.m_CancellationTokenSource);
                            __this_02 = (System_Collections_Generic_List_object__o *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                            pUVar27 = (UI_CreateGamePopup_c *)0x0;
                            pUVar20 = (UnityEngine_Component_o *)
                                      UI_ElementFactory__CreateDefaultPopup_object_
                                                ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                            if (pUVar20 != (UnityEngine_Component_o *)0x0) {
                              pUVar29 = (UnityEngine_Transform_o *)
                                        UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                              __this_04[1].fields.SinglePanel = pUVar29;
                              il2cpp_runtime_helper_022b4080(&__this_04[1].fields.SinglePanel);
                              __this_02 = (System_Collections_Generic_List_object__o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                              pUVar27 = (UI_CreateGamePopup_c *)0x0;
                              pUVar20 = (UnityEngine_Component_o *)
                                        UI_ElementFactory__CreateDefaultPopup_object_
                                                  ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                              if (pUVar20 != (UnityEngine_Component_o *)0x0) {
                                pSVar30 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                                          UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                                (__this_04->fields)._cachedModeSettings = pSVar30;
                                il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedModeSettings);
                                __this_02 = (System_Collections_Generic_List_object__o *)
                                            UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
                                ;
                                pUVar27 = (UI_CreateGamePopup_c *)0x0;
                                pUVar20 = (UnityEngine_Component_o *)
                                          UI_ElementFactory__CreateDefaultPopup_object_
                                                    ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                                if (pUVar20 != (UnityEngine_Component_o *)0x0) {
                                  pUVar27 = (UI_CreateGamePopup_c *)
                                            UnityEngine_Component__GetComponent_object_(pUVar20,MethodInfo_BasePopup_GetComponent_BasePopup);
                                  __this_04[1].fields.m_CachedPtr = (intptr_t)pUVar27;
                                  il2cpp_runtime_helper_022b4080(&__this_04[1].fields);
                                  lVar5 = MethodInfo_Void_Add;
                                  __this_02 = (System_Collections_Generic_List_object__o *)
                                              (__this_04->fields).SinglePanel;
                                  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                    pUVar27 = (UI_CreateGamePopup_c *)(__this_04->fields).killPopupKeyframesIn
                                    ;
                                    piVar1 = &(__this_02->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar8 = (__this_02->fields)._items;
                                    if (pSVar8 != (System_Object_array *)0x0) {
                                      uVar4 = (__this_02->fields)._size;
                                      if (uVar4 < (uint)pSVar8->max_length) {
                                        (__this_02->fields)._size = uVar4 + 1;
                                        pSVar8->m_Items[(int)uVar4] = (Il2CppObject *)pUVar27;
                                        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_04->fields).SinglePanel;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (__this_02,(Il2CppObject *)pUVar27,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_04->fields).SinglePanel;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar5;
                                      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                        pUVar27 = (UI_CreateGamePopup_c *)(__this_04->fields).LocaleCategory;
                                        piVar1 = &(__this_02->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pSVar8 = (__this_02->fields)._items;
                                        if (pSVar8 != (System_Object_array *)0x0) {
                                          uVar4 = (__this_02->fields)._size;
                                          if (uVar4 < (uint)pSVar8->max_length) {
                                            (__this_02->fields)._size = uVar4 + 1;
                                            pSVar8->m_Items[(int)uVar4] = (Il2CppObject *)pUVar27;
                                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_04->fields).SinglePanel;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      (__this_02,(Il2CppObject *)pUVar27,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_04->fields).SinglePanel;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar5;
                                          if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                            pUVar27 = (UI_CreateGamePopup_c *)
                                                      (__this_04->fields)._cachedAddonSelectionKey;
                                            piVar1 = &(__this_02->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pSVar8 = (__this_02->fields)._items;
                                            if (pSVar8 != (System_Object_array *)0x0) {
                                              uVar4 = (__this_02->fields)._size;
                                              if (uVar4 < (uint)pSVar8->max_length) {
                                                (__this_02->fields)._size = uVar4 + 1;
                                                pSVar8->m_Items[(int)uVar4] = (Il2CppObject *)pUVar27;
                                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_04->fields).SinglePanel;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          (__this_02,(Il2CppObject *)pUVar27,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_04->fields).SinglePanel;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar5;
                                              if (__this_02 !=
                                                  (System_Collections_Generic_List_object__o *)0x0) {
                                                pUVar27 = *(UI_CreateGamePopup_c **)
                                                           &(__this_04->fields).IsMultiplayer;
                                                piVar1 = &(__this_02->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pSVar8 = (__this_02->fields)._items;
                                                if (pSVar8 != (System_Object_array *)0x0) {
                                                  uVar4 = (__this_02->fields)._size;
                                                  if (uVar4 < (uint)pSVar8->max_length) {
                                                    (__this_02->fields)._size = uVar4 + 1;
                                                    pSVar8->m_Items[(int)uVar4] = (Il2CppObject *)pUVar27;
                                                    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_04->fields).SinglePanel;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              (__this_02,(Il2CppObject *)pUVar27,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_04->fields).SinglePanel;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (__this_02 !=
                                                      (System_Collections_Generic_List_object__o *)0x0) {
                                                    pUVar27 = (UI_CreateGamePopup_c *)
                                                              (__this_04->fields)._watcher;
                                                    piVar1 = &(__this_02->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pSVar8 = (__this_02->fields)._items;
                                                    if (pSVar8 != (System_Object_array *)0x0) {
                                                      uVar4 = (__this_02->fields)._size;
                                                      if (uVar4 < (uint)pSVar8->max_length) {
                                                        (__this_02->fields)._size = uVar4 + 1;
                                                        pSVar8->m_Items[(int)uVar4] = (Il2CppObject *)pUVar27;
                                                        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_04->fields).SinglePanel;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  (__this_02,(Il2CppObject *)pUVar27,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_04->fields).SinglePanel;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar5;
                                                      if (__this_02 !=
                                                          (System_Collections_Generic_List_object__o *)0x0) {
                                                        pUVar27 = (UI_CreateGamePopup_c *)
                                                                  (__this_04->fields)._cachedLogicSource;
                                                        piVar1 = &(__this_02->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar8 = (__this_02->fields)._items;
                                                        if (pSVar8 != (System_Object_array *)0x0) {
                                                          uVar4 = (__this_02->fields)._size;
                                                          if (uVar4 < (uint)pSVar8->max_length) {
                                                            (__this_02->fields)._size = uVar4 + 1;
                                                            pSVar8->m_Items[(int)uVar4] =
                                                                 (Il2CppObject *)pUVar27;
                                                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                            __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar27 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields)._cachedAddonSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar8 = (__this_02->fields)._items;
                                                         if (pSVar8 != (System_Object_array *)0x0) {
                                                           uVar4 = (__this_02->fields)._size;
                                                           if (uVar4 < (uint)pSVar8->max_length) {
                                                             (__this_02->fields)._size = uVar4 + 1;
                                                             pSVar8->m_Items[(int)uVar4] =
                                                                  (Il2CppObject *)pUVar27;
                                                             il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar27 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).SelectModePopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar8 = (__this_02->fields)._items;
                                                         if (pSVar8 != (System_Object_array *)0x0) {
                                                           uVar4 = (__this_02->fields)._size;
                                                           if (uVar4 < (uint)pSVar8->max_length) {
                                                             (__this_02->fields)._size = uVar4 + 1;
                                                             pSVar8->m_Items[(int)uVar4] =
                                                                  (Il2CppObject *)pUVar27;
                                                             il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar27 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).SelectAddonPopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar8 = (__this_02->fields)._items;
                                                         if (pSVar8 != (System_Object_array *)0x0) {
                                                           uVar4 = (__this_02->fields)._size;
                                                           if (uVar4 < (uint)pSVar8->max_length) {
                                                             (__this_02->fields)._size = uVar4 + 1;
                                                             pSVar8->m_Items[(int)uVar4] =
                                                                  (Il2CppObject *)pUVar27;
                                                             il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar27 = __this_04[1].klass;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar8 = (__this_02->fields)._items;
                                                         if (pSVar8 != (System_Object_array *)0x0) {
                                                           uVar4 = (__this_02->fields)._size;
                                                           if (uVar4 < (uint)pSVar8->max_length) {
                                                             (__this_02->fields)._size = uVar4 + 1;
                                                             pSVar8->m_Items[(int)uVar4] =
                                                                  (Il2CppObject *)pUVar27;
                                                             il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar27 = __this_04[1].monitor;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar8 = (__this_02->fields)._items;
                                                         if (pSVar8 != (System_Object_array *)0x0) {
                                                           uVar4 = (__this_02->fields)._size;
                                                           if (uVar4 < (uint)pSVar8->max_length) {
                                                             (__this_02->fields)._size = uVar4 + 1;
                                                             pSVar8->m_Items[(int)uVar4] =
                                                                  (Il2CppObject *)pUVar27;
                                                             il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar27 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).killPopupKeyframesOut;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar8 = (__this_02->fields)._items;
                                                         if (pSVar8 != (System_Object_array *)0x0) {
                                                           uVar4 = (__this_02->fields)._size;
                                                           if (uVar4 < (uint)pSVar8->max_length) {
                                                             (__this_02->fields)._size = uVar4 + 1;
                                                             pSVar8->m_Items[(int)uVar4] =
                                                                  (Il2CppObject *)pUVar27;
                                                             il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar27 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.
                                                                   m_CancellationTokenSource;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar8 = (__this_02->fields)._items;
                                                         if (pSVar8 != (System_Object_array *)0x0) {
                                                           uVar4 = (__this_02->fields)._size;
                                                           if (uVar4 < (uint)pSVar8->max_length) {
                                                             (__this_02->fields)._size = uVar4 + 1;
                                                             pSVar8->m_Items[(int)uVar4] =
                                                                  (Il2CppObject *)pUVar27;
                                                             il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar27 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.SinglePanel;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar8 = (__this_02->fields)._items;
                                                         if (pSVar8 != (System_Object_array *)0x0) {
                                                           uVar4 = (__this_02->fields)._size;
                                                           if (uVar4 < (uint)pSVar8->max_length) {
                                                             (__this_02->fields)._size = uVar4 + 1;
                                                             pSVar8->m_Items[(int)uVar4] =
                                                                  (Il2CppObject *)pUVar27;
                                                             il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar27 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields)._cachedModeSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar8 = (__this_02->fields)._items;
                                                         if (pSVar8 != (System_Object_array *)0x0) {
                                                           uVar4 = (__this_02->fields)._size;
                                                           if (uVar4 < (uint)pSVar8->max_length) {
                                                             (__this_02->fields)._size = uVar4 + 1;
                                                             pSVar8->m_Items[(int)uVar4] =
                                                                  (Il2CppObject *)pUVar27;
                                                             il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar27 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.m_CachedPtr;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar8 = (__this_02->fields)._items;
                                                         if (pSVar8 != (System_Object_array *)0x0) {
                                                           uVar4 = (__this_02->fields)._size;
                                                           if (uVar4 < (uint)pSVar8->max_length) {
                                                             (__this_02->fields)._size = uVar4 + 1;
                                                             pSVar8->m_Items[(int)uVar4] =
                                                                  (Il2CppObject *)pUVar27;
                                                             il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
                                                             return;
                                                           }
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar27,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
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
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_02 = (System_Collections_Generic_List_object__o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
    bVar10 = System_String__op_Equality(*(System_String_o **)(lVar5 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = __this_02[7].klass;
  if (__this_05 == (System_Collections_Generic_List_object__c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
    *(int *)&(__this_05->_1).name = (int)pUVar27;
    return;
  }
  UI_MainBackgroundMenu__ChangeMainBackground((UI_MainBackgroundMenu_o *)__this_05,(MethodInfo *)pUVar27);
  __this_01 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)__this_02[7].fields._syncRoot;
  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MainMenu$$ShowMultiplayerRoomListPopup
// il2cpp: void UI_MainMenu__ShowMultiplayerRoomListPopup (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x4406b90

void UI_MainMenu__ShowMultiplayerRoomListPopup(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  void *pvVar4;
  code *vtableDispatch;
  Il2CppClass *__this_00;
  System_Object_array *pSVar5;
  long lVar6;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  bool_conflict bVar7;
  uint32_t uVar8;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_Component_o *pUVar9;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar10;
  UnityEngine_GameObject_o *pUVar11;
  System_String_o *pSVar12;
  Il2CppObject *pIVar13;
  Utility_FileWatcherExtension_o *pUVar14;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar15;
  UI_CreateGameSelectModePopup_o *pUVar16;
  UI_CreateGameSelectAddonPopup_o *pUVar17;
  UI_CreateGamePopup_c *pUVar18;
  System_Threading_CancellationTokenSource_o *pSVar19;
  UnityEngine_Transform_o *pUVar20;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar21;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *b;
  MethodInfo *method_00;
  UI_BasePopup_o *pUVar22;
  UI_BasePopup_c *__this_03;
  Il2CppRuntimeInterfaceOffsetPair *pIVar23;
  UI_CreateGamePopup_o *__this_04;
  System_Collections_Generic_List_object__c *__this_05;
  
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  pUVar22 = (__this->fields)._multiplayerRoomListPopup;
  if (pUVar22 != (UI_BasePopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar22->klass->vtable)._21_Show.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar22,(pUVar22->klass->vtable)._21_Show.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  b = (pUVar22->klass->vtable)._6_get_Height.method;
  (*(pUVar22->klass->vtable)._6_get_Height.methodPtr)();
  __this_03 = pUVar22[1].klass;
  if (__this_03 != (UI_BasePopup_c *)0x0) {
    pvVar4 = (__this_03->_1).image;
    vtableDispatch = *(code **)((long)pvVar4 + 0x288);
    (*vtableDispatch)
              (__this_03,*(undefined8 *)((long)pvVar4 + 0x290),extraout_RDX_00,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = b;
  if (g_data_057ae5af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&"TutorialButton");
    il2cpp_runtime_helper_023445d0(&"https://www.patreon.com/aottg2");
    il2cpp_runtime_helper_023445d0(&"QuestButton");
    il2cpp_runtime_helper_023445d0(&"HelpButton");
    il2cpp_runtime_helper_023445d0(&"LeaderboardButton");
    il2cpp_runtime_helper_023445d0(&"ToolsButton");
    il2cpp_runtime_helper_023445d0(&"PatreonButton");
    il2cpp_runtime_helper_023445d0(&"CreditsButton");
    il2cpp_runtime_helper_023445d0(&"ProfileButton");
    il2cpp_runtime_helper_023445d0(&"SettingsButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerButton");
    il2cpp_runtime_helper_023445d0(&"QuitButton");
    il2cpp_runtime_helper_023445d0(&"SingleplayerButton");
    il2cpp_runtime_helper_023445d0(&"SocialButton");
    g_data_057ae5af = '\x01';
  }
  bVar7 = UI_MainMenu__IsPopupActive((UI_MainMenu_o *)__this_03,method_00);
  pvVar4 = (__this_03->_1).image;
  (**(code **)((long)pvVar4 + 0x198))(__this_03,*(undefined8 *)((long)pvVar4 + 0x1a0));
  if (((char)bVar7 != '\0') &&
     (bVar7 = System_String__op_Equality
                        (*(System_String_o **)&(__this_03->_2).interfaces_count,(System_String_o *)b,
                         (MethodInfo *)0x0), (char)bVar7 != '\0')) {
    return;
  }
  *(MethodInfo **)&(__this_03->_2).interfaces_count = b;
  il2cpp_runtime_helper_022b4080(&(__this_03->_2).interfaces_count);
  uVar8 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)b,(MethodInfo *)0x0);
  if (uVar8 < 0x400b50bd) {
    if (uVar8 < 0x16c989b9) {
      if (uVar8 == 0xf995a3a) {
        bVar7 = System_String__op_Equality((System_String_o *)b,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return;
        }
        pIVar23 = *(Il2CppRuntimeInterfaceOffsetPair **)&(__this_03->_2).cctor_finished;
        if (pIVar23 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
      else if (uVar8 == 0x102e9109) {
        bVar7 = System_String__op_Equality((System_String_o *)b,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return;
        }
        pIVar23 = (__this_03->_2).genericContainerHandle;
        if (pIVar23 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
      else {
        if (uVar8 != 0x16c989b8) {
          return;
        }
        bVar7 = System_String__op_Equality((System_String_o *)b,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return;
        }
        pIVar23 = __this_03->static_fields;
        if (pIVar23 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
    }
    else if (uVar8 == 0x2e76c0d0) {
      bVar7 = System_String__op_Equality((System_String_o *)b,"SingleplayerButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      __this_04 = (__this_03->_1).methods;
      if (__this_04 != (UI_CreateGamePopup_o *)0x0) {
        bVar2 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
        if ((bVar2 <= (__this_04->klass->_2).naturalAligment) &&
           ((__this_04->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CreateGamePopup)) {
          UI_CreateGamePopup__Show(__this_04,0,(MethodInfo *)0x0);
          return;
        }
        goto label_044070e6;
      }
    }
    else if (uVar8 == 0x2f231a13) {
      bVar7 = System_String__op_Equality((System_String_o *)b,"MultiplayerButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      pIVar23 = (Il2CppRuntimeInterfaceOffsetPair *)(__this_03->_1).implementedInterfaces;
      if (pIVar23 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
    else {
      if ((uVar8 != 0x400b50bc) ||
         (bVar7 = System_String__op_Equality((System_String_o *)b,"SettingsButton",(MethodInfo *)0x0),
         (char)bVar7 == '\0')) {
        return;
      }
      pIVar23 = (__this_03->_1).interfaceOffsets;
      if (pIVar23 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else if (uVar8 < 0x897f23a9) {
    if (uVar8 == 0x897f23a8) {
      bVar7 = System_String__op_Equality((System_String_o *)b,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      pIVar23 = *(Il2CppRuntimeInterfaceOffsetPair **)&(__this_03->_2).initializationExceptionGCHandle;
      if (pIVar23 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
    else if (uVar8 == 0x435494ca) {
      bVar7 = System_String__op_Equality((System_String_o *)b,"PatreonButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      __this_00 = (__this_03->_1).element_class;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
      if (__this_00 != (Il2CppClass *)0x0) {
        UI_ExternalLinkPopup__Show((UI_ExternalLinkPopup_o *)__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (uVar8 != 0x4d49ad7f) {
        return;
      }
      bVar7 = System_String__op_Equality((System_String_o *)b,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      pIVar23 = *(Il2CppRuntimeInterfaceOffsetPair **)&(__this_03->_2).instance_size;
      if (pIVar23 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else {
    if (uVar8 < 0xf4ca4aa2) {
      if (uVar8 == 0xe45fe9d6) {
        bVar7 = System_String__op_Equality((System_String_o *)b,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Application__Quit_4daefd0((MethodInfo *)0x0);
        return;
      }
      if (uVar8 != 0xf4ca4aa1) {
        return;
      }
      bVar7 = System_String__op_Equality((System_String_o *)b,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar8 == 0xfadab5e2) {
      bVar7 = System_String__op_Equality((System_String_o *)b,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      pIVar23 = (Il2CppRuntimeInterfaceOffsetPair *)(__this_03->_2).cctor_thread;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
      if (pIVar23 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_044070c9;
    }
    else {
      if (uVar8 != 0xff10090e) {
        return;
      }
      bVar7 = System_String__op_Equality((System_String_o *)b,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      pIVar23 = (__this_03->_2).unity_user_data;
      if (pIVar23 != (Il2CppRuntimeInterfaceOffsetPair *)0x0) {
label_044070c9:
        (*pIVar23->interfaceType->vtable[0x15].methodPtr)(pIVar23,pIVar23->interfaceType->vtable[0x15].method)
        ;
        return;
      }
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044070e6:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerMapPopup");
    g_data_057ae5a9 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this_04,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  pUVar18 = (UI_CreateGamePopup_c *)0x0;
  pUVar9 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
  if (pUVar9 != (UnityEngine_Component_o *)0x0) {
    pSVar10 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
              UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    (__this_04->fields).killPopupKeyframesOut = pSVar10;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).killPopupKeyframesOut);
    __this_02 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    pUVar18 = (UI_CreateGamePopup_c *)0x0;
    pUVar9 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup)
    ;
    if (pUVar9 != (UnityEngine_Component_o *)0x0) {
      pSVar10 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this_04->fields).killPopupKeyframesIn = pSVar10;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).killPopupKeyframesIn);
      __this_02 = (System_Collections_Generic_List_object__o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
      ;
      pUVar18 = "Prefabs/MainMenu/MultiplayerMapPopup";
      pUVar11 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup
                          );
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        pSVar12 = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BasePopup_GetComponent_BasePopup);
        (__this_04->fields).LocaleCategory = pSVar12;
        il2cpp_runtime_helper_022b4080(&(__this_04->fields).LocaleCategory);
        __this_02 = (System_Collections_Generic_List_object__o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
        pUVar18 = (UI_CreateGamePopup_c *)0x0;
        pUVar9 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateHeadedPanel_object_
                           ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
        if (pUVar9 != (UnityEngine_Component_o *)0x0) {
          pSVar12 = (System_String_o *)UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this_04->fields)._cachedAddonSelectionKey = pSVar12;
          il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedAddonSelectionKey);
          __this_02 = (System_Collections_Generic_List_object__o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
          pUVar18 = (UI_CreateGamePopup_c *)0x0;
          pUVar9 = (UnityEngine_Component_o *)
                   UI_ElementFactory__CreateHeadedPanel_object_
                             ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar9 != (UnityEngine_Component_o *)0x0) {
            pIVar13 = UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
            *(Il2CppObject **)&(__this_04->fields).IsMultiplayer = pIVar13;
            il2cpp_runtime_helper_022b4080(&(__this_04->fields).IsMultiplayer);
            __this_02 = (System_Collections_Generic_List_object__o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            pUVar18 = (UI_CreateGamePopup_c *)0x0;
            pUVar9 = (UnityEngine_Component_o *)
                     UI_ElementFactory__CreateHeadedPanel_object_
                               ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar9 != (UnityEngine_Component_o *)0x0) {
              pUVar14 = (Utility_FileWatcherExtension_o *)
                        UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this_04->fields)._watcher = pUVar14;
              il2cpp_runtime_helper_022b4080(&(__this_04->fields)._watcher);
              __this_02 = (System_Collections_Generic_List_object__o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
              pUVar18 = "Prefabs/MainMenu/MultiplayerRoomListPopup";
              pUVar11 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                  ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerRoomListPopup",0,
                                   MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
              if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                pSVar12 = (System_String_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this_04->fields)._cachedLogicSource = pSVar12;
                il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedLogicSource);
                __this_02 = (System_Collections_Generic_List_object__o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                pUVar18 = (UI_CreateGamePopup_c *)0x0;
                pUVar9 = (UnityEngine_Component_o *)
                         UI_ElementFactory__CreateHeadedPanel_object_
                                   ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
                if (pUVar9 != (UnityEngine_Component_o *)0x0) {
                  pSVar15 = (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
                             *)UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this_04->fields)._cachedAddonSettings = pSVar15;
                  il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedAddonSettings);
                  __this_02 = (System_Collections_Generic_List_object__o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                  pUVar18 = (UI_CreateGamePopup_c *)0x0;
                  pUVar9 = (UnityEngine_Component_o *)
                           UI_ElementFactory__CreateHeadedPanel_object_
                                     ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar9 != (UnityEngine_Component_o *)0x0) {
                    pUVar16 = (UI_CreateGameSelectModePopup_o *)
                              UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this_04->fields).SelectModePopup = pUVar16;
                    il2cpp_runtime_helper_022b4080(&(__this_04->fields).SelectModePopup);
                    __this_02 = (System_Collections_Generic_List_object__o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                    pUVar18 = (UI_CreateGamePopup_c *)0x0;
                    pUVar9 = (UnityEngine_Component_o *)
                             UI_ElementFactory__CreateHeadedPanel_object_
                                       ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar9 != (UnityEngine_Component_o *)0x0) {
                      pUVar17 = (UI_CreateGameSelectAddonPopup_o *)
                                UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this_04->fields).SelectAddonPopup = pUVar17;
                      il2cpp_runtime_helper_022b4080(&(__this_04->fields).SelectAddonPopup);
                      __this_02 = (System_Collections_Generic_List_object__o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                      pUVar18 = (UI_CreateGamePopup_c *)0x0;
                      pUVar9 = (UnityEngine_Component_o *)
                               UI_ElementFactory__CreateHeadedPanel_object_
                                         ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar9 != (UnityEngine_Component_o *)0x0) {
                        pUVar18 = (UI_CreateGamePopup_c *)
                                  UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
                        __this_04[1].klass = pUVar18;
                        il2cpp_runtime_helper_022b4080(__this_04 + 1);
                        __this_02 = (System_Collections_Generic_List_object__o *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                        pUVar18 = (UI_CreateGamePopup_c *)0x0;
                        pUVar9 = (UnityEngine_Component_o *)
                                 UI_ElementFactory__CreateHeadedPanel_object_
                                           ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
                        if (pUVar9 != (UnityEngine_Component_o *)0x0) {
                          pIVar13 = UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
                          __this_04[1].monitor = pIVar13;
                          il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
                          __this_02 = (System_Collections_Generic_List_object__o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                          pUVar18 = (UI_CreateGamePopup_c *)0x0;
                          pUVar9 = (UnityEngine_Component_o *)
                                   UI_ElementFactory__CreateHeadedPanel_object_
                                             ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
                          if (pUVar9 != (UnityEngine_Component_o *)0x0) {
                            pSVar19 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
                            __this_04[1].fields.m_CancellationTokenSource = pSVar19;
                            il2cpp_runtime_helper_022b4080(&__this_04[1].fields.m_CancellationTokenSource);
                            __this_02 = (System_Collections_Generic_List_object__o *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                            pUVar18 = (UI_CreateGamePopup_c *)0x0;
                            pUVar9 = (UnityEngine_Component_o *)
                                     UI_ElementFactory__CreateDefaultPopup_object_
                                               ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                            if (pUVar9 != (UnityEngine_Component_o *)0x0) {
                              pUVar20 = (UnityEngine_Transform_o *)
                                        UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                              __this_04[1].fields.SinglePanel = pUVar20;
                              il2cpp_runtime_helper_022b4080(&__this_04[1].fields.SinglePanel);
                              __this_02 = (System_Collections_Generic_List_object__o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                              pUVar18 = (UI_CreateGamePopup_c *)0x0;
                              pUVar9 = (UnityEngine_Component_o *)
                                       UI_ElementFactory__CreateDefaultPopup_object_
                                                 ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                              if (pUVar9 != (UnityEngine_Component_o *)0x0) {
                                pSVar21 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                                          UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                                (__this_04->fields)._cachedModeSettings = pSVar21;
                                il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedModeSettings);
                                __this_02 = (System_Collections_Generic_List_object__o *)
                                            UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
                                ;
                                pUVar18 = (UI_CreateGamePopup_c *)0x0;
                                pUVar9 = (UnityEngine_Component_o *)
                                         UI_ElementFactory__CreateDefaultPopup_object_
                                                   ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                                if (pUVar9 != (UnityEngine_Component_o *)0x0) {
                                  pUVar18 = (UI_CreateGamePopup_c *)
                                            UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
                                  __this_04[1].fields.m_CachedPtr = (intptr_t)pUVar18;
                                  il2cpp_runtime_helper_022b4080(&__this_04[1].fields);
                                  lVar6 = MethodInfo_Void_Add;
                                  __this_02 = (System_Collections_Generic_List_object__o *)
                                              (__this_04->fields).SinglePanel;
                                  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                    pUVar18 = (UI_CreateGamePopup_c *)(__this_04->fields).killPopupKeyframesIn
                                    ;
                                    piVar1 = &(__this_02->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar5 = (__this_02->fields)._items;
                                    if (pSVar5 != (System_Object_array *)0x0) {
                                      uVar3 = (__this_02->fields)._size;
                                      if (uVar3 < (uint)pSVar5->max_length) {
                                        (__this_02->fields)._size = uVar3 + 1;
                                        pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar18;
                                        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_04->fields).SinglePanel;
                                        lVar6 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (__this_02,(Il2CppObject *)pUVar18,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_04->fields).SinglePanel;
                                        lVar6 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar6;
                                      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                        pUVar18 = (UI_CreateGamePopup_c *)(__this_04->fields).LocaleCategory;
                                        piVar1 = &(__this_02->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pSVar5 = (__this_02->fields)._items;
                                        if (pSVar5 != (System_Object_array *)0x0) {
                                          uVar3 = (__this_02->fields)._size;
                                          if (uVar3 < (uint)pSVar5->max_length) {
                                            (__this_02->fields)._size = uVar3 + 1;
                                            pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar18;
                                            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_04->fields).SinglePanel;
                                            lVar6 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      (__this_02,(Il2CppObject *)pUVar18,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_04->fields).SinglePanel;
                                            lVar6 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar6;
                                          if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                            pUVar18 = (UI_CreateGamePopup_c *)
                                                      (__this_04->fields)._cachedAddonSelectionKey;
                                            piVar1 = &(__this_02->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pSVar5 = (__this_02->fields)._items;
                                            if (pSVar5 != (System_Object_array *)0x0) {
                                              uVar3 = (__this_02->fields)._size;
                                              if (uVar3 < (uint)pSVar5->max_length) {
                                                (__this_02->fields)._size = uVar3 + 1;
                                                pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar18;
                                                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_04->fields).SinglePanel;
                                                lVar6 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          (__this_02,(Il2CppObject *)pUVar18,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_04->fields).SinglePanel;
                                                lVar6 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar6;
                                              if (__this_02 !=
                                                  (System_Collections_Generic_List_object__o *)0x0) {
                                                pUVar18 = *(UI_CreateGamePopup_c **)
                                                           &(__this_04->fields).IsMultiplayer;
                                                piVar1 = &(__this_02->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pSVar5 = (__this_02->fields)._items;
                                                if (pSVar5 != (System_Object_array *)0x0) {
                                                  uVar3 = (__this_02->fields)._size;
                                                  if (uVar3 < (uint)pSVar5->max_length) {
                                                    (__this_02->fields)._size = uVar3 + 1;
                                                    pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar18;
                                                    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_04->fields).SinglePanel;
                                                    lVar6 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              (__this_02,(Il2CppObject *)pUVar18,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_04->fields).SinglePanel;
                                                    lVar6 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar6;
                                                  if (__this_02 !=
                                                      (System_Collections_Generic_List_object__o *)0x0) {
                                                    pUVar18 = (UI_CreateGamePopup_c *)
                                                              (__this_04->fields)._watcher;
                                                    piVar1 = &(__this_02->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pSVar5 = (__this_02->fields)._items;
                                                    if (pSVar5 != (System_Object_array *)0x0) {
                                                      uVar3 = (__this_02->fields)._size;
                                                      if (uVar3 < (uint)pSVar5->max_length) {
                                                        (__this_02->fields)._size = uVar3 + 1;
                                                        pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar18;
                                                        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_04->fields).SinglePanel;
                                                        lVar6 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  (__this_02,(Il2CppObject *)pUVar18,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_04->fields).SinglePanel;
                                                        lVar6 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar6;
                                                      if (__this_02 !=
                                                          (System_Collections_Generic_List_object__o *)0x0) {
                                                        pUVar18 = (UI_CreateGamePopup_c *)
                                                                  (__this_04->fields)._cachedLogicSource;
                                                        piVar1 = &(__this_02->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar5 = (__this_02->fields)._items;
                                                        if (pSVar5 != (System_Object_array *)0x0) {
                                                          uVar3 = (__this_02->fields)._size;
                                                          if (uVar3 < (uint)pSVar5->max_length) {
                                                            (__this_02->fields)._size = uVar3 + 1;
                                                            pSVar5->m_Items[(int)uVar3] =
                                                                 (Il2CppObject *)pUVar18;
                                                            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                            __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar18 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields)._cachedAddonSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar5 = (__this_02->fields)._items;
                                                         if (pSVar5 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar5->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar5->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar18;
                                                             il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar18 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).SelectModePopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar5 = (__this_02->fields)._items;
                                                         if (pSVar5 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar5->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar5->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar18;
                                                             il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar18 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).SelectAddonPopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar5 = (__this_02->fields)._items;
                                                         if (pSVar5 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar5->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar5->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar18;
                                                             il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar18 = __this_04[1].klass;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar5 = (__this_02->fields)._items;
                                                         if (pSVar5 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar5->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar5->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar18;
                                                             il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar18 = __this_04[1].monitor;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar5 = (__this_02->fields)._items;
                                                         if (pSVar5 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar5->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar5->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar18;
                                                             il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar18 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).killPopupKeyframesOut;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar5 = (__this_02->fields)._items;
                                                         if (pSVar5 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar5->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar5->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar18;
                                                             il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar18 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.
                                                                   m_CancellationTokenSource;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar5 = (__this_02->fields)._items;
                                                         if (pSVar5 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar5->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar5->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar18;
                                                             il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar18 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.SinglePanel;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar5 = (__this_02->fields)._items;
                                                         if (pSVar5 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar5->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar5->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar18;
                                                             il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar18 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields)._cachedModeSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar5 = (__this_02->fields)._items;
                                                         if (pSVar5 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar5->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar5->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar18;
                                                             il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar18 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.m_CachedPtr;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar5 = (__this_02->fields)._items;
                                                         if (pSVar5 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if ((uint)pSVar5->max_length <= uVar3) {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar18,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       return;
                                                       }
                                                       (__this_02->fields)._size = uVar3 + 1;
                                                       pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar18;
                                                       il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
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
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_02 = (System_Collections_Generic_List_object__o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
    bVar7 = System_String__op_Equality(*(System_String_o **)(lVar6 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = __this_02[7].klass;
  if (__this_05 == (System_Collections_Generic_List_object__c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
    *(int *)&(__this_05->_1).name = (int)pUVar18;
    return;
  }
  UI_MainBackgroundMenu__ChangeMainBackground((UI_MainBackgroundMenu_o *)__this_05,(MethodInfo *)pUVar18);
  __this_01 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)__this_02[7].fields._syncRoot;
  if (__this_01 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,1,(MethodInfo *)0x0);
  return;
}


// UI.MainMenu$$ShowMultiplayerMapPopup
// il2cpp: void UI_MainMenu__ShowMultiplayerMapPopup (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x4406bd0

void UI_MainMenu__ShowMultiplayerMapPopup(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppMethodPointer vtableDispatch;
  UI_ExternalLinkPopup_o *__this_00;
  System_Object_array *pSVar4;
  long lVar5;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  bool_conflict bVar6;
  uint32_t uVar7;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_Component_o *pUVar8;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  System_String_o *pSVar11;
  Il2CppObject *pIVar12;
  Utility_FileWatcherExtension_o *pUVar13;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar14;
  UI_CreateGameSelectModePopup_o *pUVar15;
  UI_CreateGameSelectAddonPopup_o *pUVar16;
  UI_CreateGamePopup_c *pUVar17;
  System_Threading_CancellationTokenSource_o *pSVar18;
  UnityEngine_Transform_o *pUVar19;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar20;
  undefined8 extraout_RDX;
  MethodInfo *b;
  MethodInfo *method_00;
  UI_MainMenu_o *__this_03;
  UI_BasePopup_o *pUVar21;
  UI_CreateGamePopup_o *__this_04;
  System_Collections_Generic_List_object__c *__this_05;
  
  b = (__this->klass->vtable)._6_HideAllPopups.method;
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)();
  __this_03 = (UI_MainMenu_o *)(__this->fields)._multiplayerMapPopup;
  if (__this_03 != (UI_MainMenu_o *)0x0) {
    vtableDispatch = (((UI_BasePopup_c *)__this_03->klass)->vtable)._21_Show.methodPtr;
    (*vtableDispatch)
              (__this_03,(((UI_BasePopup_c *)__this_03->klass)->vtable)._21_Show.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = b;
  if (g_data_057ae5af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&"TutorialButton");
    il2cpp_runtime_helper_023445d0(&"https://www.patreon.com/aottg2");
    il2cpp_runtime_helper_023445d0(&"QuestButton");
    il2cpp_runtime_helper_023445d0(&"HelpButton");
    il2cpp_runtime_helper_023445d0(&"LeaderboardButton");
    il2cpp_runtime_helper_023445d0(&"ToolsButton");
    il2cpp_runtime_helper_023445d0(&"PatreonButton");
    il2cpp_runtime_helper_023445d0(&"CreditsButton");
    il2cpp_runtime_helper_023445d0(&"ProfileButton");
    il2cpp_runtime_helper_023445d0(&"SettingsButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerButton");
    il2cpp_runtime_helper_023445d0(&"QuitButton");
    il2cpp_runtime_helper_023445d0(&"SingleplayerButton");
    il2cpp_runtime_helper_023445d0(&"SocialButton");
    g_data_057ae5af = '\x01';
  }
  bVar6 = UI_MainMenu__IsPopupActive(__this_03,method_00);
  (*(__this_03->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this_03,(__this_03->klass->vtable)._6_HideAllPopups.method);
  if (((char)bVar6 != '\0') &&
     (bVar6 = System_String__op_Equality
                        ((__this_03->fields)._lastButtonClicked,(System_String_o *)b,(MethodInfo *)0x0),
     (char)bVar6 != '\0')) {
    return;
  }
  (__this_03->fields)._lastButtonClicked = (System_String_o *)b;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._lastButtonClicked);
  uVar7 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)b,(MethodInfo *)0x0);
  if (uVar7 < 0x400b50bd) {
    if (uVar7 < 0x16c989b9) {
      if (uVar7 == 0xf995a3a) {
        bVar6 = System_String__op_Equality((System_String_o *)b,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar21 = (__this_03->fields)._socialPopup;
        if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
      else if (uVar7 == 0x102e9109) {
        bVar6 = System_String__op_Equality((System_String_o *)b,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar21 = (__this_03->fields)._questPopup;
        if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
      else {
        if (uVar7 != 0x16c989b8) {
          return;
        }
        bVar6 = System_String__op_Equality((System_String_o *)b,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar21 = (__this_03->fields)._toolsPopup;
        if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
    }
    else if (uVar7 == 0x2e76c0d0) {
      bVar6 = System_String__op_Equality((System_String_o *)b,"SingleplayerButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      __this_04 = (UI_CreateGamePopup_o *)(__this_03->fields)._createGamePopup;
      if (__this_04 != (UI_CreateGamePopup_o *)0x0) {
        bVar2 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
        if ((bVar2 <= (__this_04->klass->_2).naturalAligment) &&
           ((__this_04->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CreateGamePopup)) {
          UI_CreateGamePopup__Show(__this_04,0,(MethodInfo *)0x0);
          return;
        }
        goto label_044070e6;
      }
    }
    else if (uVar7 == 0x2f231a13) {
      bVar6 = System_String__op_Equality((System_String_o *)b,"MultiplayerButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this_03->fields)._multiplayerMapPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
    else {
      if ((uVar7 != 0x400b50bc) ||
         (bVar6 = System_String__op_Equality((System_String_o *)b,"SettingsButton",(MethodInfo *)0x0),
         (char)bVar6 == '\0')) {
        return;
      }
      pUVar21 = (__this_03->fields)._settingsPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else if (uVar7 < 0x897f23a9) {
    if (uVar7 == 0x897f23a8) {
      bVar6 = System_String__op_Equality((System_String_o *)b,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this_03->fields)._leaderboardPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
    else if (uVar7 == 0x435494ca) {
      bVar6 = System_String__op_Equality((System_String_o *)b,"PatreonButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      __this_00 = (__this_03->fields).ExternalLinkPopup;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
      if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
        UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (uVar7 != 0x4d49ad7f) {
        return;
      }
      bVar6 = System_String__op_Equality((System_String_o *)b,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this_03->fields)._tutorialPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else {
    if (uVar7 < 0xf4ca4aa2) {
      if (uVar7 == 0xe45fe9d6) {
        bVar6 = System_String__op_Equality((System_String_o *)b,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Application__Quit_4daefd0((MethodInfo *)0x0);
        return;
      }
      if (uVar7 != 0xf4ca4aa1) {
        return;
      }
      bVar6 = System_String__op_Equality((System_String_o *)b,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar7 == 0xfadab5e2) {
      bVar6 = System_String__op_Equality((System_String_o *)b,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this_03->fields)._aboutPopup;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
    }
    else {
      if (uVar7 != 0xff10090e) {
        return;
      }
      bVar6 = System_String__op_Equality((System_String_o *)b,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this_03->fields)._editProfilePopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) {
label_044070c9:
        (*(pUVar21->klass->vtable)._21_Show.methodPtr)(pUVar21,(pUVar21->klass->vtable)._21_Show.method);
        return;
      }
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044070e6:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerMapPopup");
    g_data_057ae5a9 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this_04,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  pUVar17 = (UI_CreateGamePopup_c *)0x0;
  pUVar8 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
    pSVar9 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
             UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    (__this_04->fields).killPopupKeyframesOut = pSVar9;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).killPopupKeyframesOut);
    __this_02 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    pUVar17 = (UI_CreateGamePopup_c *)0x0;
    pUVar8 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup)
    ;
    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
      pSVar9 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
               UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this_04->fields).killPopupKeyframesIn = pSVar9;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).killPopupKeyframesIn);
      __this_02 = (System_Collections_Generic_List_object__o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
      ;
      pUVar17 = "Prefabs/MainMenu/MultiplayerMapPopup";
      pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup
                          );
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        pSVar11 = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
        (__this_04->fields).LocaleCategory = pSVar11;
        il2cpp_runtime_helper_022b4080(&(__this_04->fields).LocaleCategory);
        __this_02 = (System_Collections_Generic_List_object__o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
        pUVar17 = (UI_CreateGamePopup_c *)0x0;
        pUVar8 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateHeadedPanel_object_
                           ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
          pSVar11 = (System_String_o *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this_04->fields)._cachedAddonSelectionKey = pSVar11;
          il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedAddonSelectionKey);
          __this_02 = (System_Collections_Generic_List_object__o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
          pUVar17 = (UI_CreateGamePopup_c *)0x0;
          pUVar8 = (UnityEngine_Component_o *)
                   UI_ElementFactory__CreateHeadedPanel_object_
                             ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
            pIVar12 = UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
            *(Il2CppObject **)&(__this_04->fields).IsMultiplayer = pIVar12;
            il2cpp_runtime_helper_022b4080(&(__this_04->fields).IsMultiplayer);
            __this_02 = (System_Collections_Generic_List_object__o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            pUVar17 = (UI_CreateGamePopup_c *)0x0;
            pUVar8 = (UnityEngine_Component_o *)
                     UI_ElementFactory__CreateHeadedPanel_object_
                               ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
              pUVar13 = (Utility_FileWatcherExtension_o *)
                        UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this_04->fields)._watcher = pUVar13;
              il2cpp_runtime_helper_022b4080(&(__this_04->fields)._watcher);
              __this_02 = (System_Collections_Generic_List_object__o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
              pUVar17 = "Prefabs/MainMenu/MultiplayerRoomListPopup";
              pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                  ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerRoomListPopup",0,
                                   MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
              if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                pSVar11 = (System_String_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this_04->fields)._cachedLogicSource = pSVar11;
                il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedLogicSource);
                __this_02 = (System_Collections_Generic_List_object__o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                pUVar17 = (UI_CreateGamePopup_c *)0x0;
                pUVar8 = (UnityEngine_Component_o *)
                         UI_ElementFactory__CreateHeadedPanel_object_
                                   ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
                if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                  pSVar14 = (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
                             *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this_04->fields)._cachedAddonSettings = pSVar14;
                  il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedAddonSettings);
                  __this_02 = (System_Collections_Generic_List_object__o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                  pUVar17 = (UI_CreateGamePopup_c *)0x0;
                  pUVar8 = (UnityEngine_Component_o *)
                           UI_ElementFactory__CreateHeadedPanel_object_
                                     ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                    pUVar15 = (UI_CreateGameSelectModePopup_o *)
                              UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this_04->fields).SelectModePopup = pUVar15;
                    il2cpp_runtime_helper_022b4080(&(__this_04->fields).SelectModePopup);
                    __this_02 = (System_Collections_Generic_List_object__o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                    pUVar17 = (UI_CreateGamePopup_c *)0x0;
                    pUVar8 = (UnityEngine_Component_o *)
                             UI_ElementFactory__CreateHeadedPanel_object_
                                       ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                      pUVar16 = (UI_CreateGameSelectAddonPopup_o *)
                                UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this_04->fields).SelectAddonPopup = pUVar16;
                      il2cpp_runtime_helper_022b4080(&(__this_04->fields).SelectAddonPopup);
                      __this_02 = (System_Collections_Generic_List_object__o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                      pUVar17 = (UI_CreateGamePopup_c *)0x0;
                      pUVar8 = (UnityEngine_Component_o *)
                               UI_ElementFactory__CreateHeadedPanel_object_
                                         ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                        pUVar17 = (UI_CreateGamePopup_c *)
                                  UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                        __this_04[1].klass = pUVar17;
                        il2cpp_runtime_helper_022b4080(__this_04 + 1);
                        __this_02 = (System_Collections_Generic_List_object__o *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                        pUVar17 = (UI_CreateGamePopup_c *)0x0;
                        pUVar8 = (UnityEngine_Component_o *)
                                 UI_ElementFactory__CreateHeadedPanel_object_
                                           ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
                        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                          pIVar12 = UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                          __this_04[1].monitor = pIVar12;
                          il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
                          __this_02 = (System_Collections_Generic_List_object__o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                          pUVar17 = (UI_CreateGamePopup_c *)0x0;
                          pUVar8 = (UnityEngine_Component_o *)
                                   UI_ElementFactory__CreateHeadedPanel_object_
                                             ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                            pSVar18 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                            __this_04[1].fields.m_CancellationTokenSource = pSVar18;
                            il2cpp_runtime_helper_022b4080(&__this_04[1].fields.m_CancellationTokenSource);
                            __this_02 = (System_Collections_Generic_List_object__o *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                            pUVar17 = (UI_CreateGamePopup_c *)0x0;
                            pUVar8 = (UnityEngine_Component_o *)
                                     UI_ElementFactory__CreateDefaultPopup_object_
                                               ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                              pUVar19 = (UnityEngine_Transform_o *)
                                        UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                              __this_04[1].fields.SinglePanel = pUVar19;
                              il2cpp_runtime_helper_022b4080(&__this_04[1].fields.SinglePanel);
                              __this_02 = (System_Collections_Generic_List_object__o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                              pUVar17 = (UI_CreateGamePopup_c *)0x0;
                              pUVar8 = (UnityEngine_Component_o *)
                                       UI_ElementFactory__CreateDefaultPopup_object_
                                                 ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                              if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                pSVar20 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                                          UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                                (__this_04->fields)._cachedModeSettings = pSVar20;
                                il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedModeSettings);
                                __this_02 = (System_Collections_Generic_List_object__o *)
                                            UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
                                ;
                                pUVar17 = (UI_CreateGamePopup_c *)0x0;
                                pUVar8 = (UnityEngine_Component_o *)
                                         UI_ElementFactory__CreateDefaultPopup_object_
                                                   ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                                if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                  pUVar17 = (UI_CreateGamePopup_c *)
                                            UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                                  __this_04[1].fields.m_CachedPtr = (intptr_t)pUVar17;
                                  il2cpp_runtime_helper_022b4080(&__this_04[1].fields);
                                  lVar5 = MethodInfo_Void_Add;
                                  __this_02 = (System_Collections_Generic_List_object__o *)
                                              (__this_04->fields).SinglePanel;
                                  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                    pUVar17 = (UI_CreateGamePopup_c *)(__this_04->fields).killPopupKeyframesIn
                                    ;
                                    piVar1 = &(__this_02->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar4 = (__this_02->fields)._items;
                                    if (pSVar4 != (System_Object_array *)0x0) {
                                      uVar3 = (__this_02->fields)._size;
                                      if (uVar3 < (uint)pSVar4->max_length) {
                                        (__this_02->fields)._size = uVar3 + 1;
                                        pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_04->fields).SinglePanel;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (__this_02,(Il2CppObject *)pUVar17,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_04->fields).SinglePanel;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar5;
                                      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                        pUVar17 = (UI_CreateGamePopup_c *)(__this_04->fields).LocaleCategory;
                                        piVar1 = &(__this_02->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pSVar4 = (__this_02->fields)._items;
                                        if (pSVar4 != (System_Object_array *)0x0) {
                                          uVar3 = (__this_02->fields)._size;
                                          if (uVar3 < (uint)pSVar4->max_length) {
                                            (__this_02->fields)._size = uVar3 + 1;
                                            pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_04->fields).SinglePanel;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      (__this_02,(Il2CppObject *)pUVar17,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_04->fields).SinglePanel;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar5;
                                          if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                            pUVar17 = (UI_CreateGamePopup_c *)
                                                      (__this_04->fields)._cachedAddonSelectionKey;
                                            piVar1 = &(__this_02->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pSVar4 = (__this_02->fields)._items;
                                            if (pSVar4 != (System_Object_array *)0x0) {
                                              uVar3 = (__this_02->fields)._size;
                                              if (uVar3 < (uint)pSVar4->max_length) {
                                                (__this_02->fields)._size = uVar3 + 1;
                                                pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_04->fields).SinglePanel;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          (__this_02,(Il2CppObject *)pUVar17,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_04->fields).SinglePanel;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar5;
                                              if (__this_02 !=
                                                  (System_Collections_Generic_List_object__o *)0x0) {
                                                pUVar17 = *(UI_CreateGamePopup_c **)
                                                           &(__this_04->fields).IsMultiplayer;
                                                piVar1 = &(__this_02->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pSVar4 = (__this_02->fields)._items;
                                                if (pSVar4 != (System_Object_array *)0x0) {
                                                  uVar3 = (__this_02->fields)._size;
                                                  if (uVar3 < (uint)pSVar4->max_length) {
                                                    (__this_02->fields)._size = uVar3 + 1;
                                                    pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_04->fields).SinglePanel;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              (__this_02,(Il2CppObject *)pUVar17,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_04->fields).SinglePanel;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (__this_02 !=
                                                      (System_Collections_Generic_List_object__o *)0x0) {
                                                    pUVar17 = (UI_CreateGamePopup_c *)
                                                              (__this_04->fields)._watcher;
                                                    piVar1 = &(__this_02->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pSVar4 = (__this_02->fields)._items;
                                                    if (pSVar4 != (System_Object_array *)0x0) {
                                                      uVar3 = (__this_02->fields)._size;
                                                      if (uVar3 < (uint)pSVar4->max_length) {
                                                        (__this_02->fields)._size = uVar3 + 1;
                                                        pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_04->fields).SinglePanel;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  (__this_02,(Il2CppObject *)pUVar17,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_04->fields).SinglePanel;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar5;
                                                      if (__this_02 !=
                                                          (System_Collections_Generic_List_object__o *)0x0) {
                                                        pUVar17 = (UI_CreateGamePopup_c *)
                                                                  (__this_04->fields)._cachedLogicSource;
                                                        piVar1 = &(__this_02->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar4 = (__this_02->fields)._items;
                                                        if (pSVar4 != (System_Object_array *)0x0) {
                                                          uVar3 = (__this_02->fields)._size;
                                                          if (uVar3 < (uint)pSVar4->max_length) {
                                                            (__this_02->fields)._size = uVar3 + 1;
                                                            pSVar4->m_Items[(int)uVar3] =
                                                                 (Il2CppObject *)pUVar17;
                                                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                            __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields)._cachedAddonSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).SelectModePopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).SelectAddonPopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = __this_04[1].klass;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = __this_04[1].monitor;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).killPopupKeyframesOut;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.
                                                                   m_CancellationTokenSource;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.SinglePanel;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields)._cachedModeSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.m_CachedPtr;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if ((uint)pSVar4->max_length <= uVar3) {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       return;
                                                       }
                                                       (__this_02->fields)._size = uVar3 + 1;
                                                       pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                       il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
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
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_02 = (System_Collections_Generic_List_object__o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
    bVar6 = System_String__op_Equality(*(System_String_o **)(lVar5 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = __this_02[7].klass;
  if (__this_05 == (System_Collections_Generic_List_object__c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
    *(int *)&(__this_05->_1).name = (int)pUVar17;
    return;
  }
  UI_MainBackgroundMenu__ChangeMainBackground((UI_MainBackgroundMenu_o *)__this_05,(MethodInfo *)pUVar17);
  __this_01 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)__this_02[7].fields._syncRoot;
  if (__this_01 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,1,(MethodInfo *)0x0);
  return;
}


// UI.MainMenu$$OpenIntroAction
// il2cpp: void UI_MainMenu__OpenIntroAction (UI_MainMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4406c10

void UI_MainMenu__OpenIntroAction(UI_MainMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  UI_ExternalLinkPopup_o *__this_00;
  System_Object_array *pSVar4;
  long lVar5;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  bool_conflict bVar6;
  uint32_t uVar7;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_Component_o *pUVar8;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  System_String_o *pSVar11;
  Il2CppObject *pIVar12;
  Utility_FileWatcherExtension_o *pUVar13;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar14;
  UI_CreateGameSelectModePopup_o *pUVar15;
  UI_CreateGameSelectAddonPopup_o *pUVar16;
  UI_CreateGamePopup_c *pUVar17;
  System_Threading_CancellationTokenSource_o *pSVar18;
  UnityEngine_Transform_o *pUVar19;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar20;
  MethodInfo *method_00;
  UI_BasePopup_o *pUVar21;
  UI_CreateGamePopup_o *__this_03;
  System_Collections_Generic_List_object__c *__this_04;
  
  method_00 = (MethodInfo *)name;
  if (g_data_057ae5af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&"TutorialButton");
    il2cpp_runtime_helper_023445d0(&"https://www.patreon.com/aottg2");
    il2cpp_runtime_helper_023445d0(&"QuestButton");
    il2cpp_runtime_helper_023445d0(&"HelpButton");
    il2cpp_runtime_helper_023445d0(&"LeaderboardButton");
    il2cpp_runtime_helper_023445d0(&"ToolsButton");
    il2cpp_runtime_helper_023445d0(&"PatreonButton");
    il2cpp_runtime_helper_023445d0(&"CreditsButton");
    il2cpp_runtime_helper_023445d0(&"ProfileButton");
    il2cpp_runtime_helper_023445d0(&"SettingsButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerButton");
    il2cpp_runtime_helper_023445d0(&"QuitButton");
    il2cpp_runtime_helper_023445d0(&"SingleplayerButton");
    il2cpp_runtime_helper_023445d0(&"SocialButton");
    g_data_057ae5af = '\x01';
  }
  bVar6 = UI_MainMenu__IsPopupActive(__this,method_00);
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  if (((char)bVar6 != '\0') &&
     (bVar6 = System_String__op_Equality((__this->fields)._lastButtonClicked,name,(MethodInfo *)0x0),
     (char)bVar6 != '\0')) {
    return;
  }
  (__this->fields)._lastButtonClicked = name;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._lastButtonClicked);
  uVar7 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar7 < 0x400b50bd) {
    if (uVar7 < 0x16c989b9) {
      if (uVar7 == 0xf995a3a) {
        bVar6 = System_String__op_Equality(name,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar21 = (__this->fields)._socialPopup;
        if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_03 = (UI_CreateGamePopup_o *)0x0;
      }
      else if (uVar7 == 0x102e9109) {
        bVar6 = System_String__op_Equality(name,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar21 = (__this->fields)._questPopup;
        if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_03 = (UI_CreateGamePopup_o *)0x0;
      }
      else {
        if (uVar7 != 0x16c989b8) {
          return;
        }
        bVar6 = System_String__op_Equality(name,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar21 = (__this->fields)._toolsPopup;
        if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_03 = (UI_CreateGamePopup_o *)0x0;
      }
    }
    else if (uVar7 == 0x2e76c0d0) {
      bVar6 = System_String__op_Equality(name,"SingleplayerButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      __this_03 = (UI_CreateGamePopup_o *)(__this->fields)._createGamePopup;
      if (__this_03 != (UI_CreateGamePopup_o *)0x0) {
        bVar2 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
        if ((bVar2 <= (__this_03->klass->_2).naturalAligment) &&
           ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CreateGamePopup)) {
          UI_CreateGamePopup__Show(__this_03,0,(MethodInfo *)0x0);
          return;
        }
        goto label_044070e6;
      }
    }
    else if (uVar7 == 0x2f231a13) {
      bVar6 = System_String__op_Equality(name,"MultiplayerButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this->fields)._multiplayerMapPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
    }
    else {
      if ((uVar7 != 0x400b50bc) ||
         (bVar6 = System_String__op_Equality(name,"SettingsButton",(MethodInfo *)0x0), (char)bVar6 == '\0')) {
        return;
      }
      pUVar21 = (__this->fields)._settingsPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else if (uVar7 < 0x897f23a9) {
    if (uVar7 == 0x897f23a8) {
      bVar6 = System_String__op_Equality(name,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this->fields)._leaderboardPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
    }
    else if (uVar7 == 0x435494ca) {
      bVar6 = System_String__op_Equality(name,"PatreonButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      __this_00 = (__this->fields).ExternalLinkPopup;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
      if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
        UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (uVar7 != 0x4d49ad7f) {
        return;
      }
      bVar6 = System_String__op_Equality(name,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this->fields)._tutorialPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else {
    if (uVar7 < 0xf4ca4aa2) {
      if (uVar7 == 0xe45fe9d6) {
        bVar6 = System_String__op_Equality(name,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Application__Quit_4daefd0((MethodInfo *)0x0);
        return;
      }
      if (uVar7 != 0xf4ca4aa1) {
        return;
      }
      bVar6 = System_String__op_Equality(name,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar7 == 0xfadab5e2) {
      bVar6 = System_String__op_Equality(name,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this->fields)._aboutPopup;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
    }
    else {
      if (uVar7 != 0xff10090e) {
        return;
      }
      bVar6 = System_String__op_Equality(name,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this->fields)._editProfilePopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) {
label_044070c9:
        (*(pUVar21->klass->vtable)._21_Show.methodPtr)(pUVar21,(pUVar21->klass->vtable)._21_Show.method);
        return;
      }
      __this_03 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044070e6:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerMapPopup");
    g_data_057ae5a9 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this_03,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  pUVar17 = (UI_CreateGamePopup_c *)0x0;
  pUVar8 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
    pSVar9 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
             UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    (__this_03->fields).killPopupKeyframesOut = pSVar9;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).killPopupKeyframesOut);
    __this_02 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    pUVar17 = (UI_CreateGamePopup_c *)0x0;
    pUVar8 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup)
    ;
    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
      pSVar9 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
               UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this_03->fields).killPopupKeyframesIn = pSVar9;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).killPopupKeyframesIn);
      __this_02 = (System_Collections_Generic_List_object__o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
      ;
      pUVar17 = "Prefabs/MainMenu/MultiplayerMapPopup";
      pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup
                          );
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        pSVar11 = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
        (__this_03->fields).LocaleCategory = pSVar11;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields).LocaleCategory);
        __this_02 = (System_Collections_Generic_List_object__o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
        pUVar17 = (UI_CreateGamePopup_c *)0x0;
        pUVar8 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateHeadedPanel_object_
                           ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
          pSVar11 = (System_String_o *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this_03->fields)._cachedAddonSelectionKey = pSVar11;
          il2cpp_runtime_helper_022b4080(&(__this_03->fields)._cachedAddonSelectionKey);
          __this_02 = (System_Collections_Generic_List_object__o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          pUVar17 = (UI_CreateGamePopup_c *)0x0;
          pUVar8 = (UnityEngine_Component_o *)
                   UI_ElementFactory__CreateHeadedPanel_object_
                             ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
            pIVar12 = UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
            *(Il2CppObject **)&(__this_03->fields).IsMultiplayer = pIVar12;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).IsMultiplayer);
            __this_02 = (System_Collections_Generic_List_object__o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            pUVar17 = (UI_CreateGamePopup_c *)0x0;
            pUVar8 = (UnityEngine_Component_o *)
                     UI_ElementFactory__CreateHeadedPanel_object_
                               ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
              pUVar13 = (Utility_FileWatcherExtension_o *)
                        UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this_03->fields)._watcher = pUVar13;
              il2cpp_runtime_helper_022b4080(&(__this_03->fields)._watcher);
              __this_02 = (System_Collections_Generic_List_object__o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
              pUVar17 = "Prefabs/MainMenu/MultiplayerRoomListPopup";
              pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                  ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerRoomListPopup",0,
                                   MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
              if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                pSVar11 = (System_String_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this_03->fields)._cachedLogicSource = pSVar11;
                il2cpp_runtime_helper_022b4080(&(__this_03->fields)._cachedLogicSource);
                __this_02 = (System_Collections_Generic_List_object__o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                pUVar17 = (UI_CreateGamePopup_c *)0x0;
                pUVar8 = (UnityEngine_Component_o *)
                         UI_ElementFactory__CreateHeadedPanel_object_
                                   ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
                if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                  pSVar14 = (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
                             *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this_03->fields)._cachedAddonSettings = pSVar14;
                  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._cachedAddonSettings);
                  __this_02 = (System_Collections_Generic_List_object__o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                  pUVar17 = (UI_CreateGamePopup_c *)0x0;
                  pUVar8 = (UnityEngine_Component_o *)
                           UI_ElementFactory__CreateHeadedPanel_object_
                                     ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                    pUVar15 = (UI_CreateGameSelectModePopup_o *)
                              UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this_03->fields).SelectModePopup = pUVar15;
                    il2cpp_runtime_helper_022b4080(&(__this_03->fields).SelectModePopup);
                    __this_02 = (System_Collections_Generic_List_object__o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                    pUVar17 = (UI_CreateGamePopup_c *)0x0;
                    pUVar8 = (UnityEngine_Component_o *)
                             UI_ElementFactory__CreateHeadedPanel_object_
                                       ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                      pUVar16 = (UI_CreateGameSelectAddonPopup_o *)
                                UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this_03->fields).SelectAddonPopup = pUVar16;
                      il2cpp_runtime_helper_022b4080(&(__this_03->fields).SelectAddonPopup);
                      __this_02 = (System_Collections_Generic_List_object__o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                      pUVar17 = (UI_CreateGamePopup_c *)0x0;
                      pUVar8 = (UnityEngine_Component_o *)
                               UI_ElementFactory__CreateHeadedPanel_object_
                                         ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                        pUVar17 = (UI_CreateGamePopup_c *)
                                  UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                        __this_03[1].klass = pUVar17;
                        il2cpp_runtime_helper_022b4080(__this_03 + 1);
                        __this_02 = (System_Collections_Generic_List_object__o *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                        pUVar17 = (UI_CreateGamePopup_c *)0x0;
                        pUVar8 = (UnityEngine_Component_o *)
                                 UI_ElementFactory__CreateHeadedPanel_object_
                                           ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
                        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                          pIVar12 = UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                          __this_03[1].monitor = pIVar12;
                          il2cpp_runtime_helper_022b4080(&__this_03[1].monitor);
                          __this_02 = (System_Collections_Generic_List_object__o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                          pUVar17 = (UI_CreateGamePopup_c *)0x0;
                          pUVar8 = (UnityEngine_Component_o *)
                                   UI_ElementFactory__CreateHeadedPanel_object_
                                             ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                            pSVar18 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                            __this_03[1].fields.m_CancellationTokenSource = pSVar18;
                            il2cpp_runtime_helper_022b4080(&__this_03[1].fields.m_CancellationTokenSource);
                            __this_02 = (System_Collections_Generic_List_object__o *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                            pUVar17 = (UI_CreateGamePopup_c *)0x0;
                            pUVar8 = (UnityEngine_Component_o *)
                                     UI_ElementFactory__CreateDefaultPopup_object_
                                               ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                              pUVar19 = (UnityEngine_Transform_o *)
                                        UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                              __this_03[1].fields.SinglePanel = pUVar19;
                              il2cpp_runtime_helper_022b4080(&__this_03[1].fields.SinglePanel);
                              __this_02 = (System_Collections_Generic_List_object__o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                              pUVar17 = (UI_CreateGamePopup_c *)0x0;
                              pUVar8 = (UnityEngine_Component_o *)
                                       UI_ElementFactory__CreateDefaultPopup_object_
                                                 ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                              if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                pSVar20 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                                          UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                                (__this_03->fields)._cachedModeSettings = pSVar20;
                                il2cpp_runtime_helper_022b4080(&(__this_03->fields)._cachedModeSettings);
                                __this_02 = (System_Collections_Generic_List_object__o *)
                                            UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
                                ;
                                pUVar17 = (UI_CreateGamePopup_c *)0x0;
                                pUVar8 = (UnityEngine_Component_o *)
                                         UI_ElementFactory__CreateDefaultPopup_object_
                                                   ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                                if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                  pUVar17 = (UI_CreateGamePopup_c *)
                                            UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                                  __this_03[1].fields.m_CachedPtr = (intptr_t)pUVar17;
                                  il2cpp_runtime_helper_022b4080(&__this_03[1].fields);
                                  lVar5 = MethodInfo_Void_Add;
                                  __this_02 = (System_Collections_Generic_List_object__o *)
                                              (__this_03->fields).SinglePanel;
                                  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                    pUVar17 = (UI_CreateGamePopup_c *)(__this_03->fields).killPopupKeyframesIn
                                    ;
                                    piVar1 = &(__this_02->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar4 = (__this_02->fields)._items;
                                    if (pSVar4 != (System_Object_array *)0x0) {
                                      uVar3 = (__this_02->fields)._size;
                                      if (uVar3 < (uint)pSVar4->max_length) {
                                        (__this_02->fields)._size = uVar3 + 1;
                                        pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_03->fields).SinglePanel;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (__this_02,(Il2CppObject *)pUVar17,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_03->fields).SinglePanel;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar5;
                                      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                        pUVar17 = (UI_CreateGamePopup_c *)(__this_03->fields).LocaleCategory;
                                        piVar1 = &(__this_02->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pSVar4 = (__this_02->fields)._items;
                                        if (pSVar4 != (System_Object_array *)0x0) {
                                          uVar3 = (__this_02->fields)._size;
                                          if (uVar3 < (uint)pSVar4->max_length) {
                                            (__this_02->fields)._size = uVar3 + 1;
                                            pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_03->fields).SinglePanel;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      (__this_02,(Il2CppObject *)pUVar17,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_03->fields).SinglePanel;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar5;
                                          if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                            pUVar17 = (UI_CreateGamePopup_c *)
                                                      (__this_03->fields)._cachedAddonSelectionKey;
                                            piVar1 = &(__this_02->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pSVar4 = (__this_02->fields)._items;
                                            if (pSVar4 != (System_Object_array *)0x0) {
                                              uVar3 = (__this_02->fields)._size;
                                              if (uVar3 < (uint)pSVar4->max_length) {
                                                (__this_02->fields)._size = uVar3 + 1;
                                                pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_03->fields).SinglePanel;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          (__this_02,(Il2CppObject *)pUVar17,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_03->fields).SinglePanel;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar5;
                                              if (__this_02 !=
                                                  (System_Collections_Generic_List_object__o *)0x0) {
                                                pUVar17 = *(UI_CreateGamePopup_c **)
                                                           &(__this_03->fields).IsMultiplayer;
                                                piVar1 = &(__this_02->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pSVar4 = (__this_02->fields)._items;
                                                if (pSVar4 != (System_Object_array *)0x0) {
                                                  uVar3 = (__this_02->fields)._size;
                                                  if (uVar3 < (uint)pSVar4->max_length) {
                                                    (__this_02->fields)._size = uVar3 + 1;
                                                    pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_03->fields).SinglePanel;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              (__this_02,(Il2CppObject *)pUVar17,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_03->fields).SinglePanel;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (__this_02 !=
                                                      (System_Collections_Generic_List_object__o *)0x0) {
                                                    pUVar17 = (UI_CreateGamePopup_c *)
                                                              (__this_03->fields)._watcher;
                                                    piVar1 = &(__this_02->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pSVar4 = (__this_02->fields)._items;
                                                    if (pSVar4 != (System_Object_array *)0x0) {
                                                      uVar3 = (__this_02->fields)._size;
                                                      if (uVar3 < (uint)pSVar4->max_length) {
                                                        (__this_02->fields)._size = uVar3 + 1;
                                                        pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_03->fields).SinglePanel;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  (__this_02,(Il2CppObject *)pUVar17,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_03->fields).SinglePanel;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar5;
                                                      if (__this_02 !=
                                                          (System_Collections_Generic_List_object__o *)0x0) {
                                                        pUVar17 = (UI_CreateGamePopup_c *)
                                                                  (__this_03->fields)._cachedLogicSource;
                                                        piVar1 = &(__this_02->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar4 = (__this_02->fields)._items;
                                                        if (pSVar4 != (System_Object_array *)0x0) {
                                                          uVar3 = (__this_02->fields)._size;
                                                          if (uVar3 < (uint)pSVar4->max_length) {
                                                            (__this_02->fields)._size = uVar3 + 1;
                                                            pSVar4->m_Items[(int)uVar3] =
                                                                 (Il2CppObject *)pUVar17;
                                                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                            __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_03->fields)._cachedAddonSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_03->fields).SelectModePopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_03->fields).SelectAddonPopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = __this_03[1].klass;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = __this_03[1].monitor;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_03->fields).killPopupKeyframesOut;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   __this_03[1].fields.
                                                                   m_CancellationTokenSource;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   __this_03[1].fields.SinglePanel;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_03->fields)._cachedModeSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   __this_03[1].fields.m_CachedPtr;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if ((uint)pSVar4->max_length <= uVar3) {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       return;
                                                       }
                                                       (__this_02->fields)._size = uVar3 + 1;
                                                       pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                       il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
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
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_02 = (System_Collections_Generic_List_object__o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
    bVar6 = System_String__op_Equality(*(System_String_o **)(lVar5 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_04 = __this_02[7].klass;
  if (__this_04 == (System_Collections_Generic_List_object__c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
    *(int *)&(__this_04->_1).name = (int)pUVar17;
    return;
  }
  UI_MainBackgroundMenu__ChangeMainBackground((UI_MainBackgroundMenu_o *)__this_04,(MethodInfo *)pUVar17);
  __this_01 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)__this_02[7].fields._syncRoot;
  if (__this_01 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,1,(MethodInfo *)0x0);
  return;
}


// UI.MainMenu$$SetupPopups
// il2cpp: void UI_MainMenu__SetupPopups (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x44070f0

void UI_MainMenu__SetupPopups(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_BasePopup_array *pUVar3;
  long lVar4;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_00;
  bool_conflict bVar5;
  System_Collections_Generic_List_BasePopup__o *__this_01;
  UnityEngine_Component_o *pUVar6;
  UI_BasePopup_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UI_OutdatedPopup_o *pUVar9;
  System_Collections_Generic_List_BasePopup__c *__this_02;
  
  if (g_data_057ae5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerMapPopup");
    g_data_057ae5a9 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  __this_01 = (System_Collections_Generic_List_BasePopup__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar9 = (UI_OutdatedPopup_o *)0x0;
  pUVar6 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_01,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
  if (pUVar6 != (UnityEngine_Component_o *)0x0) {
    pUVar7 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    (__this->fields)._selectMapPopup = pUVar7;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._selectMapPopup);
    __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = (UI_OutdatedPopup_o *)0x0;
    pUVar6 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_01,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup)
    ;
    if (pUVar6 != (UnityEngine_Component_o *)0x0) {
      pUVar7 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this->fields)._createGamePopup = pUVar7;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._createGamePopup);
      __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar9 = "Prefabs/MainMenu/MultiplayerMapPopup";
      pUVar8 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                         ((UnityEngine_Transform_o *)__this_01,(System_String_o *)"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup)
      ;
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = (UI_BasePopup_o *)UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
        (__this->fields)._multiplayerMapPopup = pUVar7;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._multiplayerMapPopup);
        __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar9 = (UI_OutdatedPopup_o *)0x0;
        pUVar6 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateHeadedPanel_object_
                           ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
        if (pUVar6 != (UnityEngine_Component_o *)0x0) {
          pUVar7 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this->fields)._editProfilePopup = pUVar7;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._editProfilePopup);
          __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar9 = (UI_OutdatedPopup_o *)0x0;
          pUVar6 = (UnityEngine_Component_o *)
                   UI_ElementFactory__CreateHeadedPanel_object_
                             ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar6 != (UnityEngine_Component_o *)0x0) {
            pUVar7 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
            (__this->fields)._settingsPopup = pUVar7;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._settingsPopup);
            __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pUVar9 = (UI_OutdatedPopup_o *)0x0;
            pUVar6 = (UnityEngine_Component_o *)
                     UI_ElementFactory__CreateHeadedPanel_object_
                               ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar6 != (UnityEngine_Component_o *)0x0) {
              pUVar7 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this->fields)._toolsPopup = pUVar7;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._toolsPopup);
              __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pUVar9 = "Prefabs/MainMenu/MultiplayerRoomListPopup";
              pUVar8 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                 ((UnityEngine_Transform_o *)__this_01,(System_String_o *)"Prefabs/MainMenu/MultiplayerRoomListPopup",0,
                                  MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
              if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                pUVar7 = (UI_BasePopup_o *)UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this->fields)._multiplayerRoomListPopup = pUVar7;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._multiplayerRoomListPopup);
                __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                pUVar9 = (UI_OutdatedPopup_o *)0x0;
                pUVar6 = (UnityEngine_Component_o *)
                         UI_ElementFactory__CreateHeadedPanel_object_
                                   ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
                if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                  pUVar7 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this->fields)._leaderboardPopup = pUVar7;
                  il2cpp_runtime_helper_022b4080(&(__this->fields)._leaderboardPopup);
                  __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar9 = (UI_OutdatedPopup_o *)0x0;
                  pUVar6 = (UnityEngine_Component_o *)
                           UI_ElementFactory__CreateHeadedPanel_object_
                                     ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                    pUVar7 = (UI_BasePopup_o *)
                             UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this->fields)._socialPopup = pUVar7;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._socialPopup);
                    __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar9 = (UI_OutdatedPopup_o *)0x0;
                    pUVar6 = (UnityEngine_Component_o *)
                             UI_ElementFactory__CreateHeadedPanel_object_
                                       ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                      pUVar7 = (UI_BasePopup_o *)
                               UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this->fields)._aboutPopup = pUVar7;
                      il2cpp_runtime_helper_022b4080(&(__this->fields)._aboutPopup);
                      __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      pUVar9 = (UI_OutdatedPopup_o *)0x0;
                      pUVar6 = (UnityEngine_Component_o *)
                               UI_ElementFactory__CreateHeadedPanel_object_
                                         ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                        pUVar7 = (UI_BasePopup_o *)
                                 UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
                        (__this->fields)._questPopup = pUVar7;
                        il2cpp_runtime_helper_022b4080(&(__this->fields)._questPopup);
                        __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        pUVar9 = (UI_OutdatedPopup_o *)0x0;
                        pUVar6 = (UnityEngine_Component_o *)
                                 UI_ElementFactory__CreateHeadedPanel_object_
                                           ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
                        if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                          pUVar7 = (UI_BasePopup_o *)
                                   UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
                          (__this->fields)._tutorialPopup = pUVar7;
                          il2cpp_runtime_helper_022b4080(&(__this->fields)._tutorialPopup);
                          __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          pUVar9 = (UI_OutdatedPopup_o *)0x0;
                          pUVar6 = (UnityEngine_Component_o *)
                                   UI_ElementFactory__CreateHeadedPanel_object_
                                             ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
                          if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                            pUVar7 = (UI_BasePopup_o *)
                                     UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
                            (__this->fields)._advancedConfigurationPopup = pUVar7;
                            il2cpp_runtime_helper_022b4080(&(__this->fields)._advancedConfigurationPopup);
                            __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                            pUVar9 = (UI_OutdatedPopup_o *)0x0;
                            pUVar6 = (UnityEngine_Component_o *)
                                     UI_ElementFactory__CreateDefaultPopup_object_
                                               ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                            if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                              pUVar9 = (UI_OutdatedPopup_o *)
                                       UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                              (__this->fields)._outdatedPopup = pUVar9;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._outdatedPopup);
                              __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                              pUVar9 = (UI_OutdatedPopup_o *)0x0;
                              pUVar6 = (UnityEngine_Component_o *)
                                       UI_ElementFactory__CreateDefaultPopup_object_
                                                 ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                              if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                                pUVar7 = (UI_BasePopup_o *)
                                         UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                                (__this->fields)._duelPopup = pUVar7;
                                il2cpp_runtime_helper_022b4080(&(__this->fields)._duelPopup);
                                __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                                            UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                pUVar9 = (UI_OutdatedPopup_o *)0x0;
                                pUVar6 = (UnityEngine_Component_o *)
                                         UI_ElementFactory__CreateDefaultPopup_object_
                                                   ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                                if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                                  pUVar9 = (UI_OutdatedPopup_o *)
                                           UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
                                  (__this->fields)._modLoginPopup = (UI_BasePopup_o *)pUVar9;
                                  il2cpp_runtime_helper_022b4080(&(__this->fields)._modLoginPopup);
                                  lVar4 = MethodInfo_Void_Add;
                                  __this_01 = (__this->fields)._popups;
                                  if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                    pUVar9 = (UI_OutdatedPopup_o *)(__this->fields)._createGamePopup;
                                    piVar1 = &(__this_01->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar3 = (__this_01->fields)._items;
                                    if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                      uVar2 = (__this_01->fields)._size;
                                      if (uVar2 < (uint)pUVar3->max_length) {
                                        (__this_01->fields)._size = uVar2 + 1;
                                        pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
                                        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                        __this_01 = (__this->fields)._popups;
                                        lVar4 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)__this_01,
                                                   (Il2CppObject *)pUVar9,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                        __this_01 = (__this->fields)._popups;
                                        lVar4 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar4;
                                      if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                        pUVar9 = (UI_OutdatedPopup_o *)(__this->fields)._multiplayerMapPopup;
                                        piVar1 = &(__this_01->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pUVar3 = (__this_01->fields)._items;
                                        if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                          uVar2 = (__this_01->fields)._size;
                                          if (uVar2 < (uint)pUVar3->max_length) {
                                            (__this_01->fields)._size = uVar2 + 1;
                                            pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
                                            il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                            __this_01 = (__this->fields)._popups;
                                            lVar4 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)__this_01,
                                                       (Il2CppObject *)pUVar9,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                            __this_01 = (__this->fields)._popups;
                                            lVar4 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar4;
                                          if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0
                                             ) {
                                            pUVar9 = (UI_OutdatedPopup_o *)(__this->fields)._editProfilePopup;
                                            piVar1 = &(__this_01->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pUVar3 = (__this_01->fields)._items;
                                            if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                              uVar2 = (__this_01->fields)._size;
                                              if (uVar2 < (uint)pUVar3->max_length) {
                                                (__this_01->fields)._size = uVar2 + 1;
                                                pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
                                                il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                __this_01 = (__this->fields)._popups;
                                                lVar4 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)
                                                           __this_01,(Il2CppObject *)pUVar9,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_01 = (__this->fields)._popups;
                                                lVar4 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar4;
                                              if (__this_01 !=
                                                  (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                pUVar9 = (UI_OutdatedPopup_o *)(__this->fields)._settingsPopup
                                                ;
                                                piVar1 = &(__this_01->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pUVar3 = (__this_01->fields)._items;
                                                if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                  uVar2 = (__this_01->fields)._size;
                                                  if (uVar2 < (uint)pUVar3->max_length) {
                                                    (__this_01->fields)._size = uVar2 + 1;
                                                    pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
                                                    il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                    __this_01 = (__this->fields)._popups;
                                                    lVar4 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              ((System_Collections_Generic_List_object__o *)
                                                               __this_01,(Il2CppObject *)pUVar9,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_01 = (__this->fields)._popups;
                                                    lVar4 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar4;
                                                  if (__this_01 !=
                                                      (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                    pUVar9 = (UI_OutdatedPopup_o *)
                                                             (__this->fields)._toolsPopup;
                                                    piVar1 = &(__this_01->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar3 = (__this_01->fields)._items;
                                                    if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (__this_01->fields)._size;
                                                      if (uVar2 < (uint)pUVar3->max_length) {
                                                        (__this_01->fields)._size = uVar2 + 1;
                                                        pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9
                                                        ;
                                                        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                        __this_01 = (__this->fields)._popups;
                                                        lVar4 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)__this_01,(Il2CppObject *)pUVar9,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_01 = (__this->fields)._popups;
                                                        lVar4 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar4;
                                                      if (__this_01 !=
                                                          (System_Collections_Generic_List_BasePopup__o *)0x0)
                                                      {
                                                        pUVar9 = (UI_OutdatedPopup_o *)
                                                                 (__this->fields)._multiplayerRoomListPopup;
                                                        piVar1 = &(__this_01->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pUVar3 = (__this_01->fields)._items;
                                                        if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                          uVar2 = (__this_01->fields)._size;
                                                          if (uVar2 < (uint)pUVar3->max_length) {
                                                            (__this_01->fields)._size = uVar2 + 1;
                                                            pUVar3->m_Items[(int)uVar2] =
                                                                 (UI_BasePopup_o *)pUVar9;
                                                            il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                            __this_01 = (__this->fields)._popups;
                                                            lVar4 = MethodInfo_Void_Add;
                                                          }
                                                          else {
                                                                                                                        
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (UI_OutdatedPopup_o *)
                                                                  (__this->fields)._leaderboardPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar9;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             __this_01 = (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (UI_OutdatedPopup_o *)
                                                                  (__this->fields)._socialPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar9;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             __this_01 = (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (UI_OutdatedPopup_o *)
                                                                  (__this->fields)._aboutPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar9;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             __this_01 = (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (UI_OutdatedPopup_o *)
                                                                  (__this->fields)._questPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar9;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             __this_01 = (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (UI_OutdatedPopup_o *)
                                                                  (__this->fields)._tutorialPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar9;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             __this_01 = (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (UI_OutdatedPopup_o *)
                                                                  (__this->fields)._selectMapPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar9;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             __this_01 = (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (UI_OutdatedPopup_o *)
                                                                  (__this->fields)._advancedConfigurationPopup
                                                         ;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar9;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             __this_01 = (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (__this->fields)._outdatedPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar9;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             __this_01 = (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (UI_OutdatedPopup_o *)
                                                                  (__this->fields)._duelPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar9;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             __this_01 = (__this->fields)._popups;
                                                             lVar4 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._popups;
                                                       lVar4 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar4;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (UI_OutdatedPopup_o *)
                                                                  (__this->fields)._modLoginPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar9;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             return;
                                                           }
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0)
                                                                   + 0x70));
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
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_01 = (System_Collections_Generic_List_BasePopup__o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
    bVar5 = System_String__op_Equality(*(System_String_o **)(lVar4 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = __this_01[7].klass;
  if (__this_02 == (System_Collections_Generic_List_BasePopup__c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    *(int *)&(__this_02->_1).name = (int)pUVar9;
    return;
  }
  UI_MainBackgroundMenu__ChangeMainBackground((UI_MainBackgroundMenu_o *)__this_02,(MethodInfo *)pUVar9);
  __this_00 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)__this_01[7].fields._syncRoot;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_00,1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MainMenu$$SetupIntroPanel
// il2cpp: void UI_MainMenu__SetupIntroPanel (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x4406640

void UI_MainMenu__SetupIntroPanel(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_GameObject_o **ppUVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE_01;
  void *pvVar8;
  Il2CppMethodPointer vtableDispatch;
  UI_ExternalLinkPopup_o *__this_00;
  System_Object_array *pSVar9;
  uint16_t *puVar10;
  bool_conflict bVar11;
  uint32_t uVar12;
  UnityEngine_GameObject_o *pUVar13;
  Il2CppClass *pIVar14;
  UnityEngine_MonoBehaviour_o *actionHandler;
  System_String_o *pSVar15;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar16;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *pGVar17;
  Il2CppClass *pIVar18;
  UnityEngine_Component_o *pUVar19;
  undefined8 *puVar20;
  Il2CppObject *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar21;
  Utility_FileWatcherExtension_o *pUVar22;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar23;
  UI_CreateGameSelectModePopup_o *pUVar24;
  UI_CreateGameSelectAddonPopup_o *pUVar25;
  UI_CreateGamePopup_c *pUVar26;
  System_Threading_CancellationTokenSource_o *pSVar27;
  UnityEngine_Transform_o *pUVar28;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar29;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *b;
  MethodInfo *method_00;
  UI_MainMenu_o *__this_03;
  UI_BasePopup_o *pUVar30;
  UI_CreateGamePopup_o *__this_04;
  System_Collections_Generic_List_object__c *__this_05;
  
  if (g_data_057ae5aa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgGameUiActions_AddComponent_AottgGameUiActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgMainMenuPanelHoverSlide_AddComponent_AottgMainMenuP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgMainMenuTipPanelController_AddComponent_AottgMainMe);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_AddComponent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"AoTTG Main Menu Gisketch");
    il2cpp_runtime_helper_023445d0(&"main-menu");
    g_data_057ae5aa = '\x01';
  }
  pUVar13 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar13,"AoTTG Main Menu Gisketch",(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields)._gisketchHost;
  (__this->fields)._gisketchHost = pUVar13;
  il2cpp_runtime_helper_022b4080(ppUVar2);
  pUVar13 = (__this->fields)._gisketchHost;
  pIVar18 = (Il2CppClass *)0x0;
  if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
    pIVar14 = (Il2CppClass *)UnityEngine_GameObject__AddComponent_object_(pUVar13,MethodInfo_GisketchUIRoot_AddComponent_GisketchUIRoot);
    pIVar18 = (Il2CppClass *)*ppUVar2;
    if ((pIVar18 != (Il2CppClass *)0x0) &&
       (actionHandler =
             (UnityEngine_MonoBehaviour_o *)
             UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pIVar18,MethodInfo_AottgGameUiActions_AddComponent_AottgGameUiActions),
       pIVar14 != (Il2CppClass *)0x0)) {
      Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen
                ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar14,"main-menu",(MethodInfo *)0x0);
      pIVar18 = pIVar14;
      Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler
                ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar14,actionHandler,(MethodInfo *)0x0);
      pSVar15 = UI_MainMenu__GisketchThemePath((MethodInfo *)pIVar18);
      x = (UnityEngine_Object_o *)UnityEngine_Resources__Load_object_(pSVar15,MethodInfo_TextAsset_Load_TextAsset);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pIVar18 = pIVar14;
      if ((char)bVar11 == '\0') {
        Gisketch_Aottg2UI_GisketchUIRoot__Build
                  ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar14,(MethodInfo *)0x0);
      }
      else {
        Gisketch_Aottg2UI_GisketchUIRoot__SetTheme
                  ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar14,(UnityEngine_TextAsset_o *)x,
                   (MethodInfo *)0x0);
      }
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x40), lVar6 != 0)) {
        Gisketch_Aottg2UI_GisketchUIRoot__SetScale_3a2c960
                  ((Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar14,*(float *)(lVar6 + 0x14),(MethodInfo *)0x0);
        pIVar18 = (Il2CppClass *)*ppUVar2;
        if ((pIVar18 != (Il2CppClass *)0x0) &&
           (pIVar16 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)pIVar18,MethodInfo_AottgMainMenuPanelHoverSlide_AddComponent_AottgMainMenuP),
           pIVar16 != (Il2CppObject *)0x0)) {
          pIVar16[2].klass = pIVar14;
          il2cpp_runtime_helper_022b4080(pIVar16 + 2);
          pIVar18 = (Il2CppClass *)0x0;
          if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
            pGVar17 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)
                      UnityEngine_GameObject__AddComponent_object_(*ppUVar2,MethodInfo_AottgMainMenuTipPanelController_AddComponent_AottgMainMe);
            (__this->fields)._tipPanel = pGVar17;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._tipPanel);
            pGVar17 = (__this->fields)._tipPanel;
            pIVar18 = (Il2CppClass *)0x0;
            if (pGVar17 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
              Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup
                        (pGVar17,(Gisketch_Aottg2UI_GisketchUIRoot_o *)pIVar14,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"AOTTG2 Version 7.28.2026.");
    il2cpp_runtime_helper_023445d0(&"AOTTG2 DEVELOPMENT VERSION");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5ab = '\x01';
  }
  pIVar14 = (Il2CppClass *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar18,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ElementStyle + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar13 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)pIVar14,
                       (UI_ElementStyle_o *)**(undefined8 **)(TypeInfo_ElementStyle + 0xb8),
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
    pIVar16 = UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
    puVar10 = &(pIVar18->_2).field_count;
    *(Il2CppObject **)&(pIVar18->_2).field_count = pIVar16;
    il2cpp_runtime_helper_022b4080(puVar10);
    pUVar19 = *(UnityEngine_Component_o **)&(pIVar18->_2).field_count;
    pIVar14 = (Il2CppClass *)0x0;
    if (pUVar19 != (UnityEngine_Component_o *)0x0) {
      pUVar13 = UnityEngine_Component__get_gameObject(pUVar19,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar13,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
      plVar7 = *(long **)puVar10;
      pIVar14 = (Il2CppClass *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x2a8))(0,0);
        pIVar14 = (Il2CppClass *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar18,(MethodInfo *)0x0);
        pIVar18 = (Il2CppClass *)
                  UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)pIVar14,
                             (UI_ElementStyle_o *)**(undefined8 **)(TypeInfo_ElementStyle + 0xb8),
                             (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
        if ((pIVar18 != (Il2CppClass *)0x0) &&
           (pUVar19 = (UnityEngine_Component_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)pIVar18,MethodInfo_Text_GetComponent_Text), pIVar14 = pIVar18,
           pUVar19 != (UnityEngine_Component_o *)0x0)) {
          pUVar13 = UnityEngine_Component__get_gameObject(pUVar19,(MethodInfo *)0x0);
          UI_ElementFactory__SetAnchor
                    (pUVar13,7,7,(UnityEngine_Vector2_o)0x41a0000000000000,(MethodInfo *)0x0);
          (**(code **)&pUVar19->klass[1]._2.naturalAligment)
                    (0x3f800000,0x3f800000,pUVar19,pUVar19->klass[1].vtable._0_Equals.methodPtr);
          if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            cVar3 = *(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8);
          }
          else {
            cVar3 = *(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8);
          }
          if (cVar3 == '\0') {
            puVar20 = &"AOTTG2 Version 7.28.2026.";
          }
          else {
            puVar20 = &"AOTTG2 DEVELOPMENT VERSION";
          }
          (*pUVar19->klass[4]._1.gc_desc)(pUVar19,*puVar20,pUVar19->klass[4]._1.name);
          UNRECOVERED_JUMPTABLE_01 = pUVar19->klass[4]._1.gc_desc;
          (*UNRECOVERED_JUMPTABLE_01)(pUVar19,"",pUVar19->klass[4]._1.name,UNRECOVERED_JUMPTABLE_01)
          ;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndChangeBackground_d__33);
    g_data_057ae5ac = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndChangeBackground_d__33);
  pIVar16 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar14;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar14);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (*pIVar16->klass->vtable[6].methodPtr)();
  pIVar18 = pIVar16[0xc].klass;
  if (pIVar18 != (Il2CppClass *)0x0) {
    pvVar8 = (pIVar18->_1).image;
    UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar8 + 0x288);
    (*UNRECOVERED_JUMPTABLE_01)
              (pIVar18,*(undefined8 *)((long)pvVar8 + 0x290),extraout_RDX,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pvVar8 = (pIVar18->_1).image;
  b = *(MethodInfo **)((long)pvVar8 + 0x1a0);
  (**(code **)((long)pvVar8 + 0x198))();
  __this_03 = (UI_MainMenu_o *)(pIVar18->_1).implementedInterfaces;
  if (__this_03 != (UI_MainMenu_o *)0x0) {
    vtableDispatch = ((Il2CppClass *)__this_03->klass)->vtable[0x15].methodPtr;
    (*vtableDispatch)
              (__this_03,((Il2CppClass *)__this_03->klass)->vtable[0x15].method,extraout_RDX_00,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = b;
  if (g_data_057ae5af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&"TutorialButton");
    il2cpp_runtime_helper_023445d0(&"https://www.patreon.com/aottg2");
    il2cpp_runtime_helper_023445d0(&"QuestButton");
    il2cpp_runtime_helper_023445d0(&"HelpButton");
    il2cpp_runtime_helper_023445d0(&"LeaderboardButton");
    il2cpp_runtime_helper_023445d0(&"ToolsButton");
    il2cpp_runtime_helper_023445d0(&"PatreonButton");
    il2cpp_runtime_helper_023445d0(&"CreditsButton");
    il2cpp_runtime_helper_023445d0(&"ProfileButton");
    il2cpp_runtime_helper_023445d0(&"SettingsButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerButton");
    il2cpp_runtime_helper_023445d0(&"QuitButton");
    il2cpp_runtime_helper_023445d0(&"SingleplayerButton");
    il2cpp_runtime_helper_023445d0(&"SocialButton");
    g_data_057ae5af = '\x01';
  }
  bVar11 = UI_MainMenu__IsPopupActive(__this_03,method_00);
  (*(__this_03->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this_03,(__this_03->klass->vtable)._6_HideAllPopups.method);
  if (((char)bVar11 != '\0') &&
     (bVar11 = System_String__op_Equality
                         ((__this_03->fields)._lastButtonClicked,(System_String_o *)b,(MethodInfo *)0x0),
     (char)bVar11 != '\0')) {
    return;
  }
  (__this_03->fields)._lastButtonClicked = (System_String_o *)b;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._lastButtonClicked);
  uVar12 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)b,(MethodInfo *)0x0);
  if (uVar12 < 0x400b50bd) {
    if (uVar12 < 0x16c989b9) {
      if (uVar12 == 0xf995a3a) {
        bVar11 = System_String__op_Equality((System_String_o *)b,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return;
        }
        pUVar30 = (__this_03->fields)._socialPopup;
        if (pUVar30 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
      else if (uVar12 == 0x102e9109) {
        bVar11 = System_String__op_Equality((System_String_o *)b,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return;
        }
        pUVar30 = (__this_03->fields)._questPopup;
        if (pUVar30 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
      else {
        if (uVar12 != 0x16c989b8) {
          return;
        }
        bVar11 = System_String__op_Equality((System_String_o *)b,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return;
        }
        pUVar30 = (__this_03->fields)._toolsPopup;
        if (pUVar30 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_04 = (UI_CreateGamePopup_o *)0x0;
      }
    }
    else if (uVar12 == 0x2e76c0d0) {
      bVar11 = System_String__op_Equality((System_String_o *)b,"SingleplayerButton",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      __this_04 = (UI_CreateGamePopup_o *)(__this_03->fields)._createGamePopup;
      if (__this_04 != (UI_CreateGamePopup_o *)0x0) {
        bVar4 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
        if ((bVar4 <= (__this_04->klass->_2).naturalAligment) &&
           ((__this_04->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_CreateGamePopup)) {
          UI_CreateGamePopup__Show(__this_04,0,(MethodInfo *)0x0);
          return;
        }
        goto label_044070e6;
      }
    }
    else if (uVar12 == 0x2f231a13) {
      bVar11 = System_String__op_Equality((System_String_o *)b,"MultiplayerButton",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      pUVar30 = (__this_03->fields)._multiplayerMapPopup;
      if (pUVar30 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
    else {
      if ((uVar12 != 0x400b50bc) ||
         (bVar11 = System_String__op_Equality((System_String_o *)b,"SettingsButton",(MethodInfo *)0x0),
         (char)bVar11 == '\0')) {
        return;
      }
      pUVar30 = (__this_03->fields)._settingsPopup;
      if (pUVar30 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else if (uVar12 < 0x897f23a9) {
    if (uVar12 == 0x897f23a8) {
      bVar11 = System_String__op_Equality((System_String_o *)b,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      pUVar30 = (__this_03->fields)._leaderboardPopup;
      if (pUVar30 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
    else if (uVar12 == 0x435494ca) {
      bVar11 = System_String__op_Equality((System_String_o *)b,"PatreonButton",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      __this_00 = (__this_03->fields).ExternalLinkPopup;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
      if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
        UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (uVar12 != 0x4d49ad7f) {
        return;
      }
      bVar11 = System_String__op_Equality((System_String_o *)b,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      pUVar30 = (__this_03->fields)._tutorialPopup;
      if (pUVar30 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else {
    if (uVar12 < 0xf4ca4aa2) {
      if (uVar12 == 0xe45fe9d6) {
        bVar11 = System_String__op_Equality((System_String_o *)b,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Application__Quit_4daefd0((MethodInfo *)0x0);
        return;
      }
      if (uVar12 != 0xf4ca4aa1) {
        return;
      }
      bVar11 = System_String__op_Equality((System_String_o *)b,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar12 == 0xfadab5e2) {
      bVar11 = System_String__op_Equality((System_String_o *)b,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      pUVar30 = (__this_03->fields)._aboutPopup;
      __this_04 = (UI_CreateGamePopup_o *)0x0;
      if (pUVar30 != (UI_BasePopup_o *)0x0) goto label_044070c9;
    }
    else {
      if (uVar12 != 0xff10090e) {
        return;
      }
      bVar11 = System_String__op_Equality((System_String_o *)b,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      pUVar30 = (__this_03->fields)._editProfilePopup;
      if (pUVar30 != (UI_BasePopup_o *)0x0) {
label_044070c9:
        (*(pUVar30->klass->vtable)._21_Show.methodPtr)(pUVar30,(pUVar30->klass->vtable)._21_Show.method);
        return;
      }
      __this_04 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044070e6:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerMapPopup");
    g_data_057ae5a9 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this_04,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  pUVar26 = (UI_CreateGamePopup_c *)0x0;
  pUVar19 = (UnityEngine_Component_o *)
            UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
  if (pUVar19 != (UnityEngine_Component_o *)0x0) {
    pSVar21 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
              UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    (__this_04->fields).killPopupKeyframesOut = pSVar21;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).killPopupKeyframesOut);
    __this_02 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    pUVar26 = (UI_CreateGamePopup_c *)0x0;
    pUVar19 = (UnityEngine_Component_o *)
              UI_ElementFactory__CreateHeadedPanel_object_
                        ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    if (pUVar19 != (UnityEngine_Component_o *)0x0) {
      pSVar21 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this_04->fields).killPopupKeyframesIn = pSVar21;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).killPopupKeyframesIn);
      __this_02 = (System_Collections_Generic_List_object__o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
      ;
      pUVar26 = "Prefabs/MainMenu/MultiplayerMapPopup";
      pUVar13 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup
                          );
      if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
        pSVar15 = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_BasePopup_GetComponent_BasePopup);
        (__this_04->fields).LocaleCategory = pSVar15;
        il2cpp_runtime_helper_022b4080(&(__this_04->fields).LocaleCategory);
        __this_02 = (System_Collections_Generic_List_object__o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
        pUVar26 = (UI_CreateGamePopup_c *)0x0;
        pUVar19 = (UnityEngine_Component_o *)
                  UI_ElementFactory__CreateHeadedPanel_object_
                            ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
        if (pUVar19 != (UnityEngine_Component_o *)0x0) {
          pSVar15 = (System_String_o *)UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this_04->fields)._cachedAddonSelectionKey = pSVar15;
          il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedAddonSelectionKey);
          __this_02 = (System_Collections_Generic_List_object__o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
          pUVar26 = (UI_CreateGamePopup_c *)0x0;
          pUVar19 = (UnityEngine_Component_o *)
                    UI_ElementFactory__CreateHeadedPanel_object_
                              ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar19 != (UnityEngine_Component_o *)0x0) {
            pIVar16 = UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_BasePopup_GetComponent_BasePopup);
            *(Il2CppObject **)&(__this_04->fields).IsMultiplayer = pIVar16;
            il2cpp_runtime_helper_022b4080(&(__this_04->fields).IsMultiplayer);
            __this_02 = (System_Collections_Generic_List_object__o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            pUVar26 = (UI_CreateGamePopup_c *)0x0;
            pUVar19 = (UnityEngine_Component_o *)
                      UI_ElementFactory__CreateHeadedPanel_object_
                                ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar19 != (UnityEngine_Component_o *)0x0) {
              pUVar22 = (Utility_FileWatcherExtension_o *)
                        UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this_04->fields)._watcher = pUVar22;
              il2cpp_runtime_helper_022b4080(&(__this_04->fields)._watcher);
              __this_02 = (System_Collections_Generic_List_object__o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
              pUVar26 = "Prefabs/MainMenu/MultiplayerRoomListPopup";
              pUVar13 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                  ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerRoomListPopup",0,
                                   MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
              if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                pSVar15 = (System_String_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this_04->fields)._cachedLogicSource = pSVar15;
                il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedLogicSource);
                __this_02 = (System_Collections_Generic_List_object__o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                pUVar26 = (UI_CreateGamePopup_c *)0x0;
                pUVar19 = (UnityEngine_Component_o *)
                          UI_ElementFactory__CreateHeadedPanel_object_
                                    ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
                if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                  pSVar23 = (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
                             *)UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this_04->fields)._cachedAddonSettings = pSVar23;
                  il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedAddonSettings);
                  __this_02 = (System_Collections_Generic_List_object__o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                  pUVar26 = (UI_CreateGamePopup_c *)0x0;
                  pUVar19 = (UnityEngine_Component_o *)
                            UI_ElementFactory__CreateHeadedPanel_object_
                                      ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                    pUVar24 = (UI_CreateGameSelectModePopup_o *)
                              UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this_04->fields).SelectModePopup = pUVar24;
                    il2cpp_runtime_helper_022b4080(&(__this_04->fields).SelectModePopup);
                    __this_02 = (System_Collections_Generic_List_object__o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                    pUVar26 = (UI_CreateGamePopup_c *)0x0;
                    pUVar19 = (UnityEngine_Component_o *)
                              UI_ElementFactory__CreateHeadedPanel_object_
                                        ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                      pUVar25 = (UI_CreateGameSelectAddonPopup_o *)
                                UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this_04->fields).SelectAddonPopup = pUVar25;
                      il2cpp_runtime_helper_022b4080(&(__this_04->fields).SelectAddonPopup);
                      __this_02 = (System_Collections_Generic_List_object__o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                      pUVar26 = (UI_CreateGamePopup_c *)0x0;
                      pUVar19 = (UnityEngine_Component_o *)
                                UI_ElementFactory__CreateHeadedPanel_object_
                                          ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                        pUVar26 = (UI_CreateGamePopup_c *)
                                  UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_BasePopup_GetComponent_BasePopup);
                        __this_04[1].klass = pUVar26;
                        il2cpp_runtime_helper_022b4080(__this_04 + 1);
                        __this_02 = (System_Collections_Generic_List_object__o *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                        pUVar26 = (UI_CreateGamePopup_c *)0x0;
                        pUVar19 = (UnityEngine_Component_o *)
                                  UI_ElementFactory__CreateHeadedPanel_object_
                                            ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
                        if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                          pIVar16 = UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_BasePopup_GetComponent_BasePopup);
                          __this_04[1].monitor = pIVar16;
                          il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
                          __this_02 = (System_Collections_Generic_List_object__o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                          pUVar26 = (UI_CreateGamePopup_c *)0x0;
                          pUVar19 = (UnityEngine_Component_o *)
                                    UI_ElementFactory__CreateHeadedPanel_object_
                                              ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
                          if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                            pSVar27 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_BasePopup_GetComponent_BasePopup);
                            __this_04[1].fields.m_CancellationTokenSource = pSVar27;
                            il2cpp_runtime_helper_022b4080(&__this_04[1].fields.m_CancellationTokenSource);
                            __this_02 = (System_Collections_Generic_List_object__o *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                            pUVar26 = (UI_CreateGamePopup_c *)0x0;
                            pUVar19 = (UnityEngine_Component_o *)
                                      UI_ElementFactory__CreateDefaultPopup_object_
                                                ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                            if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                              pUVar28 = (UnityEngine_Transform_o *)
                                        UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                              __this_04[1].fields.SinglePanel = pUVar28;
                              il2cpp_runtime_helper_022b4080(&__this_04[1].fields.SinglePanel);
                              __this_02 = (System_Collections_Generic_List_object__o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
                              pUVar26 = (UI_CreateGamePopup_c *)0x0;
                              pUVar19 = (UnityEngine_Component_o *)
                                        UI_ElementFactory__CreateDefaultPopup_object_
                                                  ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                              if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                                pSVar29 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                                          UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                                (__this_04->fields)._cachedModeSettings = pSVar29;
                                il2cpp_runtime_helper_022b4080(&(__this_04->fields)._cachedModeSettings);
                                __this_02 = (System_Collections_Generic_List_object__o *)
                                            UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
                                ;
                                pUVar26 = (UI_CreateGamePopup_c *)0x0;
                                pUVar19 = (UnityEngine_Component_o *)
                                          UI_ElementFactory__CreateDefaultPopup_object_
                                                    ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                                if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                                  pUVar26 = (UI_CreateGamePopup_c *)
                                            UnityEngine_Component__GetComponent_object_(pUVar19,MethodInfo_BasePopup_GetComponent_BasePopup);
                                  __this_04[1].fields.m_CachedPtr = (intptr_t)pUVar26;
                                  il2cpp_runtime_helper_022b4080(&__this_04[1].fields);
                                  lVar6 = MethodInfo_Void_Add;
                                  __this_02 = (System_Collections_Generic_List_object__o *)
                                              (__this_04->fields).SinglePanel;
                                  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                    pUVar26 = (UI_CreateGamePopup_c *)(__this_04->fields).killPopupKeyframesIn
                                    ;
                                    piVar1 = &(__this_02->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar9 = (__this_02->fields)._items;
                                    if (pSVar9 != (System_Object_array *)0x0) {
                                      uVar5 = (__this_02->fields)._size;
                                      if (uVar5 < (uint)pSVar9->max_length) {
                                        (__this_02->fields)._size = uVar5 + 1;
                                        pSVar9->m_Items[(int)uVar5] = (Il2CppObject *)pUVar26;
                                        il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_04->fields).SinglePanel;
                                        lVar6 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (__this_02,(Il2CppObject *)pUVar26,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_04->fields).SinglePanel;
                                        lVar6 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar6;
                                      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                        pUVar26 = (UI_CreateGamePopup_c *)(__this_04->fields).LocaleCategory;
                                        piVar1 = &(__this_02->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pSVar9 = (__this_02->fields)._items;
                                        if (pSVar9 != (System_Object_array *)0x0) {
                                          uVar5 = (__this_02->fields)._size;
                                          if (uVar5 < (uint)pSVar9->max_length) {
                                            (__this_02->fields)._size = uVar5 + 1;
                                            pSVar9->m_Items[(int)uVar5] = (Il2CppObject *)pUVar26;
                                            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_04->fields).SinglePanel;
                                            lVar6 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      (__this_02,(Il2CppObject *)pUVar26,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_04->fields).SinglePanel;
                                            lVar6 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar6;
                                          if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                            pUVar26 = (UI_CreateGamePopup_c *)
                                                      (__this_04->fields)._cachedAddonSelectionKey;
                                            piVar1 = &(__this_02->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pSVar9 = (__this_02->fields)._items;
                                            if (pSVar9 != (System_Object_array *)0x0) {
                                              uVar5 = (__this_02->fields)._size;
                                              if (uVar5 < (uint)pSVar9->max_length) {
                                                (__this_02->fields)._size = uVar5 + 1;
                                                pSVar9->m_Items[(int)uVar5] = (Il2CppObject *)pUVar26;
                                                il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_04->fields).SinglePanel;
                                                lVar6 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          (__this_02,(Il2CppObject *)pUVar26,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_04->fields).SinglePanel;
                                                lVar6 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar6;
                                              if (__this_02 !=
                                                  (System_Collections_Generic_List_object__o *)0x0) {
                                                pUVar26 = *(UI_CreateGamePopup_c **)
                                                           &(__this_04->fields).IsMultiplayer;
                                                piVar1 = &(__this_02->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pSVar9 = (__this_02->fields)._items;
                                                if (pSVar9 != (System_Object_array *)0x0) {
                                                  uVar5 = (__this_02->fields)._size;
                                                  if (uVar5 < (uint)pSVar9->max_length) {
                                                    (__this_02->fields)._size = uVar5 + 1;
                                                    pSVar9->m_Items[(int)uVar5] = (Il2CppObject *)pUVar26;
                                                    il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_04->fields).SinglePanel;
                                                    lVar6 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              (__this_02,(Il2CppObject *)pUVar26,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_04->fields).SinglePanel;
                                                    lVar6 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar6;
                                                  if (__this_02 !=
                                                      (System_Collections_Generic_List_object__o *)0x0) {
                                                    pUVar26 = (UI_CreateGamePopup_c *)
                                                              (__this_04->fields)._watcher;
                                                    piVar1 = &(__this_02->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pSVar9 = (__this_02->fields)._items;
                                                    if (pSVar9 != (System_Object_array *)0x0) {
                                                      uVar5 = (__this_02->fields)._size;
                                                      if (uVar5 < (uint)pSVar9->max_length) {
                                                        (__this_02->fields)._size = uVar5 + 1;
                                                        pSVar9->m_Items[(int)uVar5] = (Il2CppObject *)pUVar26;
                                                        il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_04->fields).SinglePanel;
                                                        lVar6 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  (__this_02,(Il2CppObject *)pUVar26,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_04->fields).SinglePanel;
                                                        lVar6 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar6;
                                                      if (__this_02 !=
                                                          (System_Collections_Generic_List_object__o *)0x0) {
                                                        pUVar26 = (UI_CreateGamePopup_c *)
                                                                  (__this_04->fields)._cachedLogicSource;
                                                        piVar1 = &(__this_02->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar9 = (__this_02->fields)._items;
                                                        if (pSVar9 != (System_Object_array *)0x0) {
                                                          uVar5 = (__this_02->fields)._size;
                                                          if (uVar5 < (uint)pSVar9->max_length) {
                                                            (__this_02->fields)._size = uVar5 + 1;
                                                            pSVar9->m_Items[(int)uVar5] =
                                                                 (Il2CppObject *)pUVar26;
                                                            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                            __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar26 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields)._cachedAddonSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar9 = (__this_02->fields)._items;
                                                         if (pSVar9 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_02->fields)._size;
                                                           if (uVar5 < (uint)pSVar9->max_length) {
                                                             (__this_02->fields)._size = uVar5 + 1;
                                                             pSVar9->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar26;
                                                             il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar26 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).SelectModePopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar9 = (__this_02->fields)._items;
                                                         if (pSVar9 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_02->fields)._size;
                                                           if (uVar5 < (uint)pSVar9->max_length) {
                                                             (__this_02->fields)._size = uVar5 + 1;
                                                             pSVar9->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar26;
                                                             il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar26 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).SelectAddonPopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar9 = (__this_02->fields)._items;
                                                         if (pSVar9 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_02->fields)._size;
                                                           if (uVar5 < (uint)pSVar9->max_length) {
                                                             (__this_02->fields)._size = uVar5 + 1;
                                                             pSVar9->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar26;
                                                             il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar26 = __this_04[1].klass;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar9 = (__this_02->fields)._items;
                                                         if (pSVar9 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_02->fields)._size;
                                                           if (uVar5 < (uint)pSVar9->max_length) {
                                                             (__this_02->fields)._size = uVar5 + 1;
                                                             pSVar9->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar26;
                                                             il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar26 = __this_04[1].monitor;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar9 = (__this_02->fields)._items;
                                                         if (pSVar9 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_02->fields)._size;
                                                           if (uVar5 < (uint)pSVar9->max_length) {
                                                             (__this_02->fields)._size = uVar5 + 1;
                                                             pSVar9->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar26;
                                                             il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar26 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields).killPopupKeyframesOut;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar9 = (__this_02->fields)._items;
                                                         if (pSVar9 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_02->fields)._size;
                                                           if (uVar5 < (uint)pSVar9->max_length) {
                                                             (__this_02->fields)._size = uVar5 + 1;
                                                             pSVar9->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar26;
                                                             il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar26 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.
                                                                   m_CancellationTokenSource;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar9 = (__this_02->fields)._items;
                                                         if (pSVar9 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_02->fields)._size;
                                                           if (uVar5 < (uint)pSVar9->max_length) {
                                                             (__this_02->fields)._size = uVar5 + 1;
                                                             pSVar9->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar26;
                                                             il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar26 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.SinglePanel;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar9 = (__this_02->fields)._items;
                                                         if (pSVar9 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_02->fields)._size;
                                                           if (uVar5 < (uint)pSVar9->max_length) {
                                                             (__this_02->fields)._size = uVar5 + 1;
                                                             pSVar9->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar26;
                                                             il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar26 = (UI_CreateGamePopup_c *)
                                                                   (__this_04->fields)._cachedModeSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar9 = (__this_02->fields)._items;
                                                         if (pSVar9 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_02->fields)._size;
                                                           if (uVar5 < (uint)pSVar9->max_length) {
                                                             (__this_02->fields)._size = uVar5 + 1;
                                                             pSVar9->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar26;
                                                             il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_04->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar26 = (UI_CreateGamePopup_c *)
                                                                   __this_04[1].fields.m_CachedPtr;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar9 = (__this_02->fields)._items;
                                                         if (pSVar9 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_02->fields)._size;
                                                           if (uVar5 < (uint)pSVar9->max_length) {
                                                             (__this_02->fields)._size = uVar5 + 1;
                                                             pSVar9->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar26;
                                                             il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar5);
                                                             return;
                                                           }
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar26,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
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
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_02 = (System_Collections_Generic_List_object__o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
    bVar11 = System_String__op_Equality(*(System_String_o **)(lVar6 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = __this_02[7].klass;
  if (__this_05 == (System_Collections_Generic_List_object__c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
    *(int *)&(__this_05->_1).name = (int)pUVar26;
    return;
  }
  UI_MainBackgroundMenu__ChangeMainBackground((UI_MainBackgroundMenu_o *)__this_05,(MethodInfo *)pUVar26);
  pGVar17 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)__this_02[7].fields._syncRoot;
  if (pGVar17 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(pGVar17,1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MainMenu$$SetupLabels
// il2cpp: void UI_MainMenu__SetupLabels (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x44068a0

void UI_MainMenu__SetupLabels(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_UI_Text_o **ppUVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE_01;
  void *pvVar6;
  Il2CppMethodPointer vtableDispatch;
  UI_ExternalLinkPopup_o *__this_00;
  System_Object_array *pSVar7;
  long lVar8;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  bool_conflict bVar9;
  uint32_t uVar10;
  Il2CppClass *pIVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_UI_Text_o *pUVar13;
  Il2CppClass *__this_02;
  UnityEngine_Component_o *pUVar14;
  undefined8 *puVar15;
  Il2CppObject *__this_03;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar16;
  System_String_o *pSVar17;
  Il2CppObject *pIVar18;
  Utility_FileWatcherExtension_o *pUVar19;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar20;
  UI_CreateGameSelectModePopup_o *pUVar21;
  UI_CreateGameSelectAddonPopup_o *pUVar22;
  UI_CreateGamePopup_c *pUVar23;
  System_Threading_CancellationTokenSource_o *pSVar24;
  UnityEngine_Transform_o *pUVar25;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar26;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *b;
  MethodInfo *method_00;
  UI_MainMenu_o *__this_05;
  UI_BasePopup_o *pUVar27;
  UI_CreateGamePopup_o *__this_06;
  System_Collections_Generic_List_object__c *__this_07;
  
  if (g_data_057ae5ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"AOTTG2 Version 7.28.2026.");
    il2cpp_runtime_helper_023445d0(&"AOTTG2 DEVELOPMENT VERSION");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5ab = '\x01';
  }
  pIVar11 = (Il2CppClass *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ElementStyle + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar12 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)pIVar11,
                       (UI_ElementStyle_o *)**(undefined8 **)(TypeInfo_ElementStyle + 0xb8),
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
    pUVar13 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
    ppUVar2 = &(__this->fields)._multiplayerStatusLabel;
    (__this->fields)._multiplayerStatusLabel = pUVar13;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    pUVar13 = (__this->fields)._multiplayerStatusLabel;
    pIVar11 = (Il2CppClass *)0x0;
    if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar12,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
      pUVar13 = *ppUVar2;
      pIVar11 = (Il2CppClass *)0x0;
      if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar13->klass->vtable)._23_set_color.methodPtr)(0,0);
        pIVar11 = (Il2CppClass *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        __this_02 = (Il2CppClass *)
                    UI_ElementFactory__CreateDefaultLabel
                              ((UnityEngine_Transform_o *)pIVar11,
                               (UI_ElementStyle_o *)**(undefined8 **)(TypeInfo_ElementStyle + 0xb8),
                               (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0
                              );
        if ((__this_02 != (Il2CppClass *)0x0) &&
           (pUVar14 = (UnityEngine_Component_o *)
                      UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Text_GetComponent_Text), pIVar11 = __this_02,
           pUVar14 != (UnityEngine_Component_o *)0x0)) {
          pUVar12 = UnityEngine_Component__get_gameObject(pUVar14,(MethodInfo *)0x0);
          UI_ElementFactory__SetAnchor
                    (pUVar12,7,7,(UnityEngine_Vector2_o)0x41a0000000000000,(MethodInfo *)0x0);
          (**(code **)&pUVar14->klass[1]._2.naturalAligment)
                    (0x3f800000,0x3f800000,pUVar14,pUVar14->klass[1].vtable._0_Equals.methodPtr);
          if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            cVar3 = *(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8);
          }
          else {
            cVar3 = *(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8);
          }
          if (cVar3 == '\0') {
            puVar15 = &"AOTTG2 Version 7.28.2026.";
          }
          else {
            puVar15 = &"AOTTG2 DEVELOPMENT VERSION";
          }
          (*pUVar14->klass[4]._1.gc_desc)(pUVar14,*puVar15,pUVar14->klass[4]._1.name);
          UNRECOVERED_JUMPTABLE_01 = pUVar14->klass[4]._1.gc_desc;
          (*UNRECOVERED_JUMPTABLE_01)(pUVar14,"",pUVar14->klass[4]._1.name,UNRECOVERED_JUMPTABLE_01)
          ;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndChangeBackground_d__33);
    g_data_057ae5ac = '\x01';
  }
  __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndChangeBackground_d__33);
  pIVar18 = __this_03;
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = 0;
  if (__this_03 != (Il2CppObject *)0x0) {
    __this_03[2].klass = pIVar11;
    il2cpp_runtime_helper_022b4080(__this_03 + 2,pIVar11);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (*pIVar18->klass->vtable[6].methodPtr)();
  pIVar11 = pIVar18[0xc].klass;
  if (pIVar11 != (Il2CppClass *)0x0) {
    pvVar6 = (pIVar11->_1).image;
    UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar6 + 0x288);
    (*UNRECOVERED_JUMPTABLE_01)
              (pIVar11,*(undefined8 *)((long)pvVar6 + 0x290),extraout_RDX,UNRECOVERED_JUMPTABLE_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pvVar6 = (pIVar11->_1).image;
  b = *(MethodInfo **)((long)pvVar6 + 0x1a0);
  (**(code **)((long)pvVar6 + 0x198))();
  __this_05 = (UI_MainMenu_o *)(pIVar11->_1).implementedInterfaces;
  if (__this_05 != (UI_MainMenu_o *)0x0) {
    vtableDispatch = ((Il2CppClass *)__this_05->klass)->vtable[0x15].methodPtr;
    (*vtableDispatch)
              (__this_05,((Il2CppClass *)__this_05->klass)->vtable[0x15].method,extraout_RDX_00,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = b;
  if (g_data_057ae5af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&"TutorialButton");
    il2cpp_runtime_helper_023445d0(&"https://www.patreon.com/aottg2");
    il2cpp_runtime_helper_023445d0(&"QuestButton");
    il2cpp_runtime_helper_023445d0(&"HelpButton");
    il2cpp_runtime_helper_023445d0(&"LeaderboardButton");
    il2cpp_runtime_helper_023445d0(&"ToolsButton");
    il2cpp_runtime_helper_023445d0(&"PatreonButton");
    il2cpp_runtime_helper_023445d0(&"CreditsButton");
    il2cpp_runtime_helper_023445d0(&"ProfileButton");
    il2cpp_runtime_helper_023445d0(&"SettingsButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerButton");
    il2cpp_runtime_helper_023445d0(&"QuitButton");
    il2cpp_runtime_helper_023445d0(&"SingleplayerButton");
    il2cpp_runtime_helper_023445d0(&"SocialButton");
    g_data_057ae5af = '\x01';
  }
  bVar9 = UI_MainMenu__IsPopupActive(__this_05,method_00);
  (*(__this_05->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this_05,(__this_05->klass->vtable)._6_HideAllPopups.method);
  if (((char)bVar9 != '\0') &&
     (bVar9 = System_String__op_Equality
                        ((__this_05->fields)._lastButtonClicked,(System_String_o *)b,(MethodInfo *)0x0),
     (char)bVar9 != '\0')) {
    return;
  }
  (__this_05->fields)._lastButtonClicked = (System_String_o *)b;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._lastButtonClicked);
  uVar10 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)b,(MethodInfo *)0x0);
  if (uVar10 < 0x400b50bd) {
    if (uVar10 < 0x16c989b9) {
      if (uVar10 == 0xf995a3a) {
        bVar9 = System_String__op_Equality((System_String_o *)b,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pUVar27 = (__this_05->fields)._socialPopup;
        if (pUVar27 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_06 = (UI_CreateGamePopup_o *)0x0;
      }
      else if (uVar10 == 0x102e9109) {
        bVar9 = System_String__op_Equality((System_String_o *)b,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pUVar27 = (__this_05->fields)._questPopup;
        if (pUVar27 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_06 = (UI_CreateGamePopup_o *)0x0;
      }
      else {
        if (uVar10 != 0x16c989b8) {
          return;
        }
        bVar9 = System_String__op_Equality((System_String_o *)b,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        pUVar27 = (__this_05->fields)._toolsPopup;
        if (pUVar27 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_06 = (UI_CreateGamePopup_o *)0x0;
      }
    }
    else if (uVar10 == 0x2e76c0d0) {
      bVar9 = System_String__op_Equality((System_String_o *)b,"SingleplayerButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      __this_06 = (UI_CreateGamePopup_o *)(__this_05->fields)._createGamePopup;
      if (__this_06 != (UI_CreateGamePopup_o *)0x0) {
        bVar4 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
        if ((bVar4 <= (__this_06->klass->_2).naturalAligment) &&
           ((__this_06->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_CreateGamePopup)) {
          UI_CreateGamePopup__Show(__this_06,0,(MethodInfo *)0x0);
          return;
        }
        goto label_044070e6;
      }
    }
    else if (uVar10 == 0x2f231a13) {
      bVar9 = System_String__op_Equality((System_String_o *)b,"MultiplayerButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar27 = (__this_05->fields)._multiplayerMapPopup;
      if (pUVar27 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
    }
    else {
      if ((uVar10 != 0x400b50bc) ||
         (bVar9 = System_String__op_Equality((System_String_o *)b,"SettingsButton",(MethodInfo *)0x0),
         (char)bVar9 == '\0')) {
        return;
      }
      pUVar27 = (__this_05->fields)._settingsPopup;
      if (pUVar27 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else if (uVar10 < 0x897f23a9) {
    if (uVar10 == 0x897f23a8) {
      bVar9 = System_String__op_Equality((System_String_o *)b,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar27 = (__this_05->fields)._leaderboardPopup;
      if (pUVar27 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
    }
    else if (uVar10 == 0x435494ca) {
      bVar9 = System_String__op_Equality((System_String_o *)b,"PatreonButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      __this_00 = (__this_05->fields).ExternalLinkPopup;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
      if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
        UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (uVar10 != 0x4d49ad7f) {
        return;
      }
      bVar9 = System_String__op_Equality((System_String_o *)b,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar27 = (__this_05->fields)._tutorialPopup;
      if (pUVar27 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else {
    if (uVar10 < 0xf4ca4aa2) {
      if (uVar10 == 0xe45fe9d6) {
        bVar9 = System_String__op_Equality((System_String_o *)b,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Application__Quit_4daefd0((MethodInfo *)0x0);
        return;
      }
      if (uVar10 != 0xf4ca4aa1) {
        return;
      }
      bVar9 = System_String__op_Equality((System_String_o *)b,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar10 == 0xfadab5e2) {
      bVar9 = System_String__op_Equality((System_String_o *)b,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar27 = (__this_05->fields)._aboutPopup;
      __this_06 = (UI_CreateGamePopup_o *)0x0;
      if (pUVar27 != (UI_BasePopup_o *)0x0) goto label_044070c9;
    }
    else {
      if (uVar10 != 0xff10090e) {
        return;
      }
      bVar9 = System_String__op_Equality((System_String_o *)b,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pUVar27 = (__this_05->fields)._editProfilePopup;
      if (pUVar27 != (UI_BasePopup_o *)0x0) {
label_044070c9:
        (*(pUVar27->klass->vtable)._21_Show.methodPtr)(pUVar27,(pUVar27->klass->vtable)._21_Show.method);
        return;
      }
      __this_06 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044070e6:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerMapPopup");
    g_data_057ae5a9 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this_06,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  pUVar23 = (UI_CreateGamePopup_c *)0x0;
  pUVar14 = (UnityEngine_Component_o *)
            UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_04,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
  if (pUVar14 != (UnityEngine_Component_o *)0x0) {
    pSVar16 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
              UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    (__this_06->fields).killPopupKeyframesOut = pSVar16;
    il2cpp_runtime_helper_022b4080(&(__this_06->fields).killPopupKeyframesOut);
    __this_04 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
    pUVar23 = (UI_CreateGamePopup_c *)0x0;
    pUVar14 = (UnityEngine_Component_o *)
              UI_ElementFactory__CreateHeadedPanel_object_
                        ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    if (pUVar14 != (UnityEngine_Component_o *)0x0) {
      pSVar16 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this_06->fields).killPopupKeyframesIn = pSVar16;
      il2cpp_runtime_helper_022b4080(&(__this_06->fields).killPopupKeyframesIn);
      __this_04 = (System_Collections_Generic_List_object__o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0)
      ;
      pUVar23 = "Prefabs/MainMenu/MultiplayerMapPopup";
      pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          ((UnityEngine_Transform_o *)__this_04,(System_String_o *)"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup
                          );
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        pSVar17 = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_BasePopup_GetComponent_BasePopup);
        (__this_06->fields).LocaleCategory = pSVar17;
        il2cpp_runtime_helper_022b4080(&(__this_06->fields).LocaleCategory);
        __this_04 = (System_Collections_Generic_List_object__o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
        pUVar23 = (UI_CreateGamePopup_c *)0x0;
        pUVar14 = (UnityEngine_Component_o *)
                  UI_ElementFactory__CreateHeadedPanel_object_
                            ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
        if (pUVar14 != (UnityEngine_Component_o *)0x0) {
          pSVar17 = (System_String_o *)UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this_06->fields)._cachedAddonSelectionKey = pSVar17;
          il2cpp_runtime_helper_022b4080(&(__this_06->fields)._cachedAddonSelectionKey);
          __this_04 = (System_Collections_Generic_List_object__o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
          pUVar23 = (UI_CreateGamePopup_c *)0x0;
          pUVar14 = (UnityEngine_Component_o *)
                    UI_ElementFactory__CreateHeadedPanel_object_
                              ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar14 != (UnityEngine_Component_o *)0x0) {
            pIVar18 = UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
            *(Il2CppObject **)&(__this_06->fields).IsMultiplayer = pIVar18;
            il2cpp_runtime_helper_022b4080(&(__this_06->fields).IsMultiplayer);
            __this_04 = (System_Collections_Generic_List_object__o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
            pUVar23 = (UI_CreateGamePopup_c *)0x0;
            pUVar14 = (UnityEngine_Component_o *)
                      UI_ElementFactory__CreateHeadedPanel_object_
                                ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar14 != (UnityEngine_Component_o *)0x0) {
              pUVar19 = (Utility_FileWatcherExtension_o *)
                        UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this_06->fields)._watcher = pUVar19;
              il2cpp_runtime_helper_022b4080(&(__this_06->fields)._watcher);
              __this_04 = (System_Collections_Generic_List_object__o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
              pUVar23 = "Prefabs/MainMenu/MultiplayerRoomListPopup";
              pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                  ((UnityEngine_Transform_o *)__this_04,(System_String_o *)"Prefabs/MainMenu/MultiplayerRoomListPopup",0,
                                   MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pSVar17 = (System_String_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this_06->fields)._cachedLogicSource = pSVar17;
                il2cpp_runtime_helper_022b4080(&(__this_06->fields)._cachedLogicSource);
                __this_04 = (System_Collections_Generic_List_object__o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                pUVar23 = (UI_CreateGamePopup_c *)0x0;
                pUVar14 = (UnityEngine_Component_o *)
                          UI_ElementFactory__CreateHeadedPanel_object_
                                    ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
                if (pUVar14 != (UnityEngine_Component_o *)0x0) {
                  pSVar20 = (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
                             *)UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this_06->fields)._cachedAddonSettings = pSVar20;
                  il2cpp_runtime_helper_022b4080(&(__this_06->fields)._cachedAddonSettings);
                  __this_04 = (System_Collections_Generic_List_object__o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                  pUVar23 = (UI_CreateGamePopup_c *)0x0;
                  pUVar14 = (UnityEngine_Component_o *)
                            UI_ElementFactory__CreateHeadedPanel_object_
                                      ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar14 != (UnityEngine_Component_o *)0x0) {
                    pUVar21 = (UI_CreateGameSelectModePopup_o *)
                              UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this_06->fields).SelectModePopup = pUVar21;
                    il2cpp_runtime_helper_022b4080(&(__this_06->fields).SelectModePopup);
                    __this_04 = (System_Collections_Generic_List_object__o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                    pUVar23 = (UI_CreateGamePopup_c *)0x0;
                    pUVar14 = (UnityEngine_Component_o *)
                              UI_ElementFactory__CreateHeadedPanel_object_
                                        ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar14 != (UnityEngine_Component_o *)0x0) {
                      pUVar22 = (UI_CreateGameSelectAddonPopup_o *)
                                UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this_06->fields).SelectAddonPopup = pUVar22;
                      il2cpp_runtime_helper_022b4080(&(__this_06->fields).SelectAddonPopup);
                      __this_04 = (System_Collections_Generic_List_object__o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                      pUVar23 = (UI_CreateGamePopup_c *)0x0;
                      pUVar14 = (UnityEngine_Component_o *)
                                UI_ElementFactory__CreateHeadedPanel_object_
                                          ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar14 != (UnityEngine_Component_o *)0x0) {
                        pUVar23 = (UI_CreateGamePopup_c *)
                                  UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
                        __this_06[1].klass = pUVar23;
                        il2cpp_runtime_helper_022b4080(__this_06 + 1);
                        __this_04 = (System_Collections_Generic_List_object__o *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                        pUVar23 = (UI_CreateGamePopup_c *)0x0;
                        pUVar14 = (UnityEngine_Component_o *)
                                  UI_ElementFactory__CreateHeadedPanel_object_
                                            ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
                        if (pUVar14 != (UnityEngine_Component_o *)0x0) {
                          pIVar18 = UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
                          __this_06[1].monitor = pIVar18;
                          il2cpp_runtime_helper_022b4080(&__this_06[1].monitor);
                          __this_04 = (System_Collections_Generic_List_object__o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                          pUVar23 = (UI_CreateGamePopup_c *)0x0;
                          pUVar14 = (UnityEngine_Component_o *)
                                    UI_ElementFactory__CreateHeadedPanel_object_
                                              ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
                          if (pUVar14 != (UnityEngine_Component_o *)0x0) {
                            pSVar24 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
                            __this_06[1].fields.m_CancellationTokenSource = pSVar24;
                            il2cpp_runtime_helper_022b4080(&__this_06[1].fields.m_CancellationTokenSource);
                            __this_04 = (System_Collections_Generic_List_object__o *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                            pUVar23 = (UI_CreateGamePopup_c *)0x0;
                            pUVar14 = (UnityEngine_Component_o *)
                                      UI_ElementFactory__CreateDefaultPopup_object_
                                                ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                            if (pUVar14 != (UnityEngine_Component_o *)0x0) {
                              pUVar25 = (UnityEngine_Transform_o *)
                                        UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                              __this_06[1].fields.SinglePanel = pUVar25;
                              il2cpp_runtime_helper_022b4080(&__this_06[1].fields.SinglePanel);
                              __this_04 = (System_Collections_Generic_List_object__o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                              pUVar23 = (UI_CreateGamePopup_c *)0x0;
                              pUVar14 = (UnityEngine_Component_o *)
                                        UI_ElementFactory__CreateDefaultPopup_object_
                                                  ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                              if (pUVar14 != (UnityEngine_Component_o *)0x0) {
                                pSVar26 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                                          UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                                (__this_06->fields)._cachedModeSettings = pSVar26;
                                il2cpp_runtime_helper_022b4080(&(__this_06->fields)._cachedModeSettings);
                                __this_04 = (System_Collections_Generic_List_object__o *)
                                            UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0)
                                ;
                                pUVar23 = (UI_CreateGamePopup_c *)0x0;
                                pUVar14 = (UnityEngine_Component_o *)
                                          UI_ElementFactory__CreateDefaultPopup_object_
                                                    ((UnityEngine_Transform_o *)__this_04,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                                if (pUVar14 != (UnityEngine_Component_o *)0x0) {
                                  pUVar23 = (UI_CreateGamePopup_c *)
                                            UnityEngine_Component__GetComponent_object_(pUVar14,MethodInfo_BasePopup_GetComponent_BasePopup);
                                  __this_06[1].fields.m_CachedPtr = (intptr_t)pUVar23;
                                  il2cpp_runtime_helper_022b4080(&__this_06[1].fields);
                                  lVar8 = MethodInfo_Void_Add;
                                  __this_04 = (System_Collections_Generic_List_object__o *)
                                              (__this_06->fields).SinglePanel;
                                  if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
                                    pUVar23 = (UI_CreateGamePopup_c *)(__this_06->fields).killPopupKeyframesIn
                                    ;
                                    piVar1 = &(__this_04->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar7 = (__this_04->fields)._items;
                                    if (pSVar7 != (System_Object_array *)0x0) {
                                      uVar5 = (__this_04->fields)._size;
                                      if (uVar5 < (uint)pSVar7->max_length) {
                                        (__this_04->fields)._size = uVar5 + 1;
                                        pSVar7->m_Items[(int)uVar5] = (Il2CppObject *)pUVar23;
                                        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                        __this_04 = (System_Collections_Generic_List_object__o *)
                                                    (__this_06->fields).SinglePanel;
                                        lVar8 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (__this_04,(Il2CppObject *)pUVar23,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                        __this_04 = (System_Collections_Generic_List_object__o *)
                                                    (__this_06->fields).SinglePanel;
                                        lVar8 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar8;
                                      if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
                                        pUVar23 = (UI_CreateGamePopup_c *)(__this_06->fields).LocaleCategory;
                                        piVar1 = &(__this_04->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pSVar7 = (__this_04->fields)._items;
                                        if (pSVar7 != (System_Object_array *)0x0) {
                                          uVar5 = (__this_04->fields)._size;
                                          if (uVar5 < (uint)pSVar7->max_length) {
                                            (__this_04->fields)._size = uVar5 + 1;
                                            pSVar7->m_Items[(int)uVar5] = (Il2CppObject *)pUVar23;
                                            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                            __this_04 = (System_Collections_Generic_List_object__o *)
                                                        (__this_06->fields).SinglePanel;
                                            lVar8 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      (__this_04,(Il2CppObject *)pUVar23,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                            __this_04 = (System_Collections_Generic_List_object__o *)
                                                        (__this_06->fields).SinglePanel;
                                            lVar8 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar8;
                                          if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
                                            pUVar23 = (UI_CreateGamePopup_c *)
                                                      (__this_06->fields)._cachedAddonSelectionKey;
                                            piVar1 = &(__this_04->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pSVar7 = (__this_04->fields)._items;
                                            if (pSVar7 != (System_Object_array *)0x0) {
                                              uVar5 = (__this_04->fields)._size;
                                              if (uVar5 < (uint)pSVar7->max_length) {
                                                (__this_04->fields)._size = uVar5 + 1;
                                                pSVar7->m_Items[(int)uVar5] = (Il2CppObject *)pUVar23;
                                                il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                __this_04 = (System_Collections_Generic_List_object__o *)
                                                            (__this_06->fields).SinglePanel;
                                                lVar8 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          (__this_04,(Il2CppObject *)pUVar23,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_04 = (System_Collections_Generic_List_object__o *)
                                                            (__this_06->fields).SinglePanel;
                                                lVar8 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar8;
                                              if (__this_04 !=
                                                  (System_Collections_Generic_List_object__o *)0x0) {
                                                pUVar23 = *(UI_CreateGamePopup_c **)
                                                           &(__this_06->fields).IsMultiplayer;
                                                piVar1 = &(__this_04->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pSVar7 = (__this_04->fields)._items;
                                                if (pSVar7 != (System_Object_array *)0x0) {
                                                  uVar5 = (__this_04->fields)._size;
                                                  if (uVar5 < (uint)pSVar7->max_length) {
                                                    (__this_04->fields)._size = uVar5 + 1;
                                                    pSVar7->m_Items[(int)uVar5] = (Il2CppObject *)pUVar23;
                                                    il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                    __this_04 = (System_Collections_Generic_List_object__o *)
                                                                (__this_06->fields).SinglePanel;
                                                    lVar8 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              (__this_04,(Il2CppObject *)pUVar23,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_04 = (System_Collections_Generic_List_object__o *)
                                                                (__this_06->fields).SinglePanel;
                                                    lVar8 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar8;
                                                  if (__this_04 !=
                                                      (System_Collections_Generic_List_object__o *)0x0) {
                                                    pUVar23 = (UI_CreateGamePopup_c *)
                                                              (__this_06->fields)._watcher;
                                                    piVar1 = &(__this_04->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pSVar7 = (__this_04->fields)._items;
                                                    if (pSVar7 != (System_Object_array *)0x0) {
                                                      uVar5 = (__this_04->fields)._size;
                                                      if (uVar5 < (uint)pSVar7->max_length) {
                                                        (__this_04->fields)._size = uVar5 + 1;
                                                        pSVar7->m_Items[(int)uVar5] = (Il2CppObject *)pUVar23;
                                                        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                        __this_04 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_06->fields).SinglePanel;
                                                        lVar8 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  (__this_04,(Il2CppObject *)pUVar23,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_04 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_06->fields).SinglePanel;
                                                        lVar8 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar8;
                                                      if (__this_04 !=
                                                          (System_Collections_Generic_List_object__o *)0x0) {
                                                        pUVar23 = (UI_CreateGamePopup_c *)
                                                                  (__this_06->fields)._cachedLogicSource;
                                                        piVar1 = &(__this_04->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar7 = (__this_04->fields)._items;
                                                        if (pSVar7 != (System_Object_array *)0x0) {
                                                          uVar5 = (__this_04->fields)._size;
                                                          if (uVar5 < (uint)pSVar7->max_length) {
                                                            (__this_04->fields)._size = uVar5 + 1;
                                                            pSVar7->m_Items[(int)uVar5] =
                                                                 (Il2CppObject *)pUVar23;
                                                            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                            __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar23 = (UI_CreateGamePopup_c *)
                                                                   (__this_06->fields)._cachedAddonSettings;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar23;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar23 = (UI_CreateGamePopup_c *)
                                                                   (__this_06->fields).SelectModePopup;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar23;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar23 = (UI_CreateGamePopup_c *)
                                                                   (__this_06->fields).SelectAddonPopup;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar23;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar23 = __this_06[1].klass;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar23;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar23 = __this_06[1].monitor;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar23;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar23 = (UI_CreateGamePopup_c *)
                                                                   (__this_06->fields).killPopupKeyframesOut;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar23;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar23 = (UI_CreateGamePopup_c *)
                                                                   __this_06[1].fields.
                                                                   m_CancellationTokenSource;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar23;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar23 = (UI_CreateGamePopup_c *)
                                                                   __this_06[1].fields.SinglePanel;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar23;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar23 = (UI_CreateGamePopup_c *)
                                                                   (__this_06->fields)._cachedModeSettings;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar23;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             __this_04 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_04 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_06->fields).SinglePanel;
                                                       lVar8 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar8;
                                                       if (__this_04 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar23 = (UI_CreateGamePopup_c *)
                                                                   __this_06[1].fields.m_CachedPtr;
                                                         piVar1 = &(__this_04->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar7 = (__this_04->fields)._items;
                                                         if (pSVar7 != (System_Object_array *)0x0) {
                                                           uVar5 = (__this_04->fields)._size;
                                                           if (uVar5 < (uint)pSVar7->max_length) {
                                                             (__this_04->fields)._size = uVar5 + 1;
                                                             pSVar7->m_Items[(int)uVar5] =
                                                                  (Il2CppObject *)pUVar23;
                                                             il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar5);
                                                             return;
                                                           }
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_04,(Il2CppObject *)pUVar23,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                                   + 0x70));
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
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_04 = (System_Collections_Generic_List_object__o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) {
    bVar9 = System_String__op_Equality(*(System_String_o **)(lVar8 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_07 = __this_04[7].klass;
  if (__this_07 == (System_Collections_Generic_List_object__c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
    *(int *)&(__this_07->_1).name = (int)pUVar23;
    return;
  }
  UI_MainBackgroundMenu__ChangeMainBackground((UI_MainBackgroundMenu_o *)__this_07,(MethodInfo *)pUVar23);
  __this_01 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)__this_04[7].fields._syncRoot;
  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MainMenu$$ChangeMainBackground
// il2cpp: void UI_MainMenu__ChangeMainBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x4407e60

void UI_MainMenu__ChangeMainBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_00;
  UI_MainBackgroundMenu_o *__this_01;
  
  __this_01 = (__this->fields)._backgroundMenu;
  if (__this_01 == (UI_MainBackgroundMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    *(int *)&(__this_01->fields).m_CachedPtr = (int)method;
    return;
  }
  UI_MainBackgroundMenu__ChangeMainBackground(__this_01,method);
  __this_00 = (__this->fields)._tipPanel;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_00,1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MainMenu$$WaitAndChangeBackground
// il2cpp: System_Collections_IEnumerator_o* UI_MainMenu__WaitAndChangeBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x4406b20

System_Collections_IEnumerator_o *
UI_MainMenu__WaitAndChangeBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppMethodPointer vtableDispatch;
  UI_ExternalLinkPopup_o *__this_00;
  System_Object_array *pSVar5;
  long lVar6;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  bool_conflict bVar7;
  uint32_t uVar8;
  Il2CppObject *__this_02;
  System_Collections_IEnumerator_o *pSVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  System_Collections_IEnumerator_o *extraout_RAX_01;
  undefined4 extraout_var_12;
  System_Collections_IEnumerator_o *extraout_RAX_02;
  undefined4 extraout_var_13;
  System_Collections_IEnumerator_o **__this_03;
  UnityEngine_Component_o *pUVar10;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar11;
  UnityEngine_GameObject_o *pUVar12;
  System_String_o *pSVar13;
  Il2CppObject *pIVar14;
  Utility_FileWatcherExtension_o *pUVar15;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar16;
  UI_CreateGameSelectModePopup_o *pUVar17;
  UI_CreateGameSelectAddonPopup_o *pUVar18;
  UI_CreateGamePopup_c *pUVar19;
  System_Threading_CancellationTokenSource_o *pSVar20;
  UnityEngine_Transform_o *pUVar21;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar22;
  System_Collections_IEnumerator_o *extraout_RAX_03;
  System_Collections_IEnumerator_o *extraout_RAX_04;
  System_Collections_IEnumerator_o *extraout_RAX_05;
  System_Collections_IEnumerator_o *extraout_RAX_06;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *b;
  MethodInfo *method_00;
  Il2CppClass *pIVar23;
  UI_MainMenu_o *__this_04;
  UI_BasePopup_o *pUVar24;
  UI_CreateGamePopup_o *__this_05;
  System_Collections_Generic_List_object__c *__this_06;
  
  if (g_data_057ae5ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndChangeBackground_d__33);
    g_data_057ae5ac = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndChangeBackground_d__33);
  pIVar14 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_02;
  }
  il2cpp_runtime_helper_022b2c90();
  (*pIVar14->klass->vtable[6].methodPtr)();
  pIVar23 = pIVar14[0xc].klass;
  if (pIVar23 != (Il2CppClass *)0x0) {
    pvVar4 = (pIVar23->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar4 + 0x288);
    pSVar9 = (System_Collections_IEnumerator_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (pIVar23,*(undefined8 *)((long)pvVar4 + 0x290),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pvVar4 = (pIVar23->_1).image;
  b = *(MethodInfo **)((long)pvVar4 + 0x1a0);
  (**(code **)((long)pvVar4 + 0x198))();
  __this_04 = (UI_MainMenu_o *)(pIVar23->_1).implementedInterfaces;
  if (__this_04 != (UI_MainMenu_o *)0x0) {
    vtableDispatch = ((Il2CppClass *)__this_04->klass)->vtable[0x15].methodPtr;
    pSVar9 = (System_Collections_IEnumerator_o *)
             (*vtableDispatch)
                       (__this_04,((Il2CppClass *)__this_04->klass)->vtable[0x15].method,extraout_RDX_00,
                        vtableDispatch);
    return pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = b;
  if (g_data_057ae5af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&"TutorialButton");
    il2cpp_runtime_helper_023445d0(&"https://www.patreon.com/aottg2");
    il2cpp_runtime_helper_023445d0(&"QuestButton");
    il2cpp_runtime_helper_023445d0(&"HelpButton");
    il2cpp_runtime_helper_023445d0(&"LeaderboardButton");
    il2cpp_runtime_helper_023445d0(&"ToolsButton");
    il2cpp_runtime_helper_023445d0(&"PatreonButton");
    il2cpp_runtime_helper_023445d0(&"CreditsButton");
    il2cpp_runtime_helper_023445d0(&"ProfileButton");
    il2cpp_runtime_helper_023445d0(&"SettingsButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerButton");
    il2cpp_runtime_helper_023445d0(&"QuitButton");
    il2cpp_runtime_helper_023445d0(&"SingleplayerButton");
    il2cpp_runtime_helper_023445d0(&"SocialButton");
    g_data_057ae5af = '\x01';
  }
  bVar7 = UI_MainMenu__IsPopupActive(__this_04,method_00);
  (*(__this_04->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this_04,(__this_04->klass->vtable)._6_HideAllPopups.method);
  if ((char)bVar7 != '\0') {
    bVar7 = System_String__op_Equality
                      ((__this_04->fields)._lastButtonClicked,(System_String_o *)b,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar7);
    }
  }
  (__this_04->fields)._lastButtonClicked = (System_String_o *)b;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields)._lastButtonClicked);
  uVar8 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)b,(MethodInfo *)0x0);
  pSVar9 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,uVar8);
  if (uVar8 < 0x400b50bd) {
    if (uVar8 < 0x16c989b9) {
      if (uVar8 == 0xf995a3a) {
        bVar7 = System_String__op_Equality((System_String_o *)b,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_09,bVar7);
        }
        pUVar24 = (__this_04->fields)._socialPopup;
        if (pUVar24 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_05 = (UI_CreateGamePopup_o *)0x0;
      }
      else if (uVar8 == 0x102e9109) {
        bVar7 = System_String__op_Equality((System_String_o *)b,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_06,bVar7);
        }
        pUVar24 = (__this_04->fields)._questPopup;
        if (pUVar24 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_05 = (UI_CreateGamePopup_o *)0x0;
      }
      else {
        if (uVar8 != 0x16c989b8) {
          return pSVar9;
        }
        bVar7 = System_String__op_Equality((System_String_o *)b,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_01,bVar7);
        }
        pUVar24 = (__this_04->fields)._toolsPopup;
        if (pUVar24 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_05 = (UI_CreateGamePopup_o *)0x0;
      }
    }
    else if (uVar8 == 0x2e76c0d0) {
      bVar7 = System_String__op_Equality((System_String_o *)b,"SingleplayerButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_11,bVar7);
      }
      __this_05 = (UI_CreateGamePopup_o *)(__this_04->fields)._createGamePopup;
      if (__this_05 != (UI_CreateGamePopup_o *)0x0) {
        bVar2 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
        if ((bVar2 <= (__this_05->klass->_2).naturalAligment) &&
           ((__this_05->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CreateGamePopup)) {
          UI_CreateGamePopup__Show(__this_05,0,(MethodInfo *)0x0);
          return extraout_RAX_01;
        }
        goto label_044070e6;
      }
    }
    else if (uVar8 == 0x2f231a13) {
      bVar7 = System_String__op_Equality((System_String_o *)b,"MultiplayerButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_08,bVar7);
      }
      pUVar24 = (__this_04->fields)._multiplayerMapPopup;
      if (pUVar24 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_05 = (UI_CreateGamePopup_o *)0x0;
    }
    else {
      if (uVar8 != 0x400b50bc) {
        return pSVar9;
      }
      bVar7 = System_String__op_Equality((System_String_o *)b,"SettingsButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_03,bVar7);
      }
      pUVar24 = (__this_04->fields)._settingsPopup;
      if (pUVar24 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_05 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else if (uVar8 < 0x897f23a9) {
    if (uVar8 == 0x897f23a8) {
      bVar7 = System_String__op_Equality((System_String_o *)b,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_10,bVar7);
      }
      pUVar24 = (__this_04->fields)._leaderboardPopup;
      if (pUVar24 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_05 = (UI_CreateGamePopup_o *)0x0;
    }
    else if (uVar8 == 0x435494ca) {
      bVar7 = System_String__op_Equality((System_String_o *)b,"PatreonButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_07,bVar7);
      }
      __this_00 = (__this_04->fields).ExternalLinkPopup;
      __this_05 = (UI_CreateGamePopup_o *)0x0;
      if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
        UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return extraout_RAX_00;
      }
    }
    else {
      if (uVar8 != 0x4d49ad7f) {
        return pSVar9;
      }
      bVar7 = System_String__op_Equality((System_String_o *)b,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_02,bVar7);
      }
      pUVar24 = (__this_04->fields)._tutorialPopup;
      if (pUVar24 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_05 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else {
    if (uVar8 < 0xf4ca4aa2) {
      if (uVar8 == 0xe45fe9d6) {
        bVar7 = System_String__op_Equality((System_String_o *)b,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_12,bVar7);
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Application__Quit_4daefd0((MethodInfo *)0x0);
        return extraout_RAX_02;
      }
      if (uVar8 != 0xf4ca4aa1) {
        return pSVar9;
      }
      bVar7 = System_String__op_Equality((System_String_o *)b,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_04,bVar7);
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    if (uVar8 == 0xfadab5e2) {
      bVar7 = System_String__op_Equality((System_String_o *)b,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_13,bVar7);
      }
      pUVar24 = (__this_04->fields)._aboutPopup;
      __this_05 = (UI_CreateGamePopup_o *)0x0;
      if (pUVar24 != (UI_BasePopup_o *)0x0) goto label_044070c9;
    }
    else {
      if (uVar8 != 0xff10090e) {
        return pSVar9;
      }
      bVar7 = System_String__op_Equality((System_String_o *)b,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_05,bVar7);
      }
      pUVar24 = (__this_04->fields)._editProfilePopup;
      if (pUVar24 != (UI_BasePopup_o *)0x0) {
label_044070c9:
        pSVar9 = (System_Collections_IEnumerator_o *)
                 (*(pUVar24->klass->vtable)._21_Show.methodPtr)
                           (pUVar24,(pUVar24->klass->vtable)._21_Show.method);
        return pSVar9;
      }
      __this_05 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044070e6:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerMapPopup");
    g_data_057ae5a9 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this_05,(MethodInfo *)0x0);
  __this_03 = (System_Collections_IEnumerator_o **)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
  pUVar19 = (UI_CreateGamePopup_c *)0x0;
  pUVar10 = (UnityEngine_Component_o *)
            UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_03,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
  if (pUVar10 != (UnityEngine_Component_o *)0x0) {
    pSVar11 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
              UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    (__this_05->fields).killPopupKeyframesOut = pSVar11;
    il2cpp_runtime_helper_022b4080(&(__this_05->fields).killPopupKeyframesOut);
    __this_03 = (System_Collections_IEnumerator_o **)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
    pUVar19 = (UI_CreateGamePopup_c *)0x0;
    pUVar10 = (UnityEngine_Component_o *)
              UI_ElementFactory__CreateHeadedPanel_object_
                        ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    if (pUVar10 != (UnityEngine_Component_o *)0x0) {
      pSVar11 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this_05->fields).killPopupKeyframesIn = pSVar11;
      il2cpp_runtime_helper_022b4080(&(__this_05->fields).killPopupKeyframesIn);
      __this_03 = (System_Collections_IEnumerator_o **)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0)
      ;
      pUVar19 = "Prefabs/MainMenu/MultiplayerMapPopup";
      pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          ((UnityEngine_Transform_o *)__this_03,(System_String_o *)"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup
                          );
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        pSVar13 = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_BasePopup_GetComponent_BasePopup);
        (__this_05->fields).LocaleCategory = pSVar13;
        il2cpp_runtime_helper_022b4080(&(__this_05->fields).LocaleCategory);
        __this_03 = (System_Collections_IEnumerator_o **)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
        pUVar19 = (UI_CreateGamePopup_c *)0x0;
        pUVar10 = (UnityEngine_Component_o *)
                  UI_ElementFactory__CreateHeadedPanel_object_
                            ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
        if (pUVar10 != (UnityEngine_Component_o *)0x0) {
          pSVar13 = (System_String_o *)UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this_05->fields)._cachedAddonSelectionKey = pSVar13;
          il2cpp_runtime_helper_022b4080(&(__this_05->fields)._cachedAddonSelectionKey);
          __this_03 = (System_Collections_IEnumerator_o **)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
          pUVar19 = (UI_CreateGamePopup_c *)0x0;
          pUVar10 = (UnityEngine_Component_o *)
                    UI_ElementFactory__CreateHeadedPanel_object_
                              ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar10 != (UnityEngine_Component_o *)0x0) {
            pIVar14 = UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
            *(Il2CppObject **)&(__this_05->fields).IsMultiplayer = pIVar14;
            il2cpp_runtime_helper_022b4080(&(__this_05->fields).IsMultiplayer);
            __this_03 = (System_Collections_IEnumerator_o **)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
            pUVar19 = (UI_CreateGamePopup_c *)0x0;
            pUVar10 = (UnityEngine_Component_o *)
                      UI_ElementFactory__CreateHeadedPanel_object_
                                ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar10 != (UnityEngine_Component_o *)0x0) {
              pUVar15 = (Utility_FileWatcherExtension_o *)
                        UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this_05->fields)._watcher = pUVar15;
              il2cpp_runtime_helper_022b4080(&(__this_05->fields)._watcher);
              __this_03 = (System_Collections_IEnumerator_o **)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
              pUVar19 = "Prefabs/MainMenu/MultiplayerRoomListPopup";
              pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                  ((UnityEngine_Transform_o *)__this_03,(System_String_o *)"Prefabs/MainMenu/MultiplayerRoomListPopup",0,
                                   MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pSVar13 = (System_String_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this_05->fields)._cachedLogicSource = pSVar13;
                il2cpp_runtime_helper_022b4080(&(__this_05->fields)._cachedLogicSource);
                __this_03 = (System_Collections_IEnumerator_o **)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                pUVar19 = (UI_CreateGamePopup_c *)0x0;
                pUVar10 = (UnityEngine_Component_o *)
                          UI_ElementFactory__CreateHeadedPanel_object_
                                    ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
                if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                  pSVar16 = (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
                             *)UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this_05->fields)._cachedAddonSettings = pSVar16;
                  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._cachedAddonSettings);
                  __this_03 = (System_Collections_IEnumerator_o **)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                  pUVar19 = (UI_CreateGamePopup_c *)0x0;
                  pUVar10 = (UnityEngine_Component_o *)
                            UI_ElementFactory__CreateHeadedPanel_object_
                                      ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                    pUVar17 = (UI_CreateGameSelectModePopup_o *)
                              UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this_05->fields).SelectModePopup = pUVar17;
                    il2cpp_runtime_helper_022b4080(&(__this_05->fields).SelectModePopup);
                    __this_03 = (System_Collections_IEnumerator_o **)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                    pUVar19 = (UI_CreateGamePopup_c *)0x0;
                    pUVar10 = (UnityEngine_Component_o *)
                              UI_ElementFactory__CreateHeadedPanel_object_
                                        ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                      pUVar18 = (UI_CreateGameSelectAddonPopup_o *)
                                UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this_05->fields).SelectAddonPopup = pUVar18;
                      il2cpp_runtime_helper_022b4080(&(__this_05->fields).SelectAddonPopup);
                      __this_03 = (System_Collections_IEnumerator_o **)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                      pUVar19 = (UI_CreateGamePopup_c *)0x0;
                      pUVar10 = (UnityEngine_Component_o *)
                                UI_ElementFactory__CreateHeadedPanel_object_
                                          ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                        pUVar19 = (UI_CreateGamePopup_c *)
                                  UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
                        __this_05[1].klass = pUVar19;
                        il2cpp_runtime_helper_022b4080(__this_05 + 1);
                        __this_03 = (System_Collections_IEnumerator_o **)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                        pUVar19 = (UI_CreateGamePopup_c *)0x0;
                        pUVar10 = (UnityEngine_Component_o *)
                                  UI_ElementFactory__CreateHeadedPanel_object_
                                            ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
                        if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                          pIVar14 = UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
                          __this_05[1].monitor = pIVar14;
                          il2cpp_runtime_helper_022b4080(&__this_05[1].monitor);
                          __this_03 = (System_Collections_IEnumerator_o **)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                          pUVar19 = (UI_CreateGamePopup_c *)0x0;
                          pUVar10 = (UnityEngine_Component_o *)
                                    UI_ElementFactory__CreateHeadedPanel_object_
                                              ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
                          if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                            pSVar20 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
                            __this_05[1].fields.m_CancellationTokenSource = pSVar20;
                            il2cpp_runtime_helper_022b4080(&__this_05[1].fields.m_CancellationTokenSource);
                            __this_03 = (System_Collections_IEnumerator_o **)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                            pUVar19 = (UI_CreateGamePopup_c *)0x0;
                            pUVar10 = (UnityEngine_Component_o *)
                                      UI_ElementFactory__CreateDefaultPopup_object_
                                                ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                            if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                              pUVar21 = (UnityEngine_Transform_o *)
                                        UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                              __this_05[1].fields.SinglePanel = pUVar21;
                              il2cpp_runtime_helper_022b4080(&__this_05[1].fields.SinglePanel);
                              __this_03 = (System_Collections_IEnumerator_o **)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
                              pUVar19 = (UI_CreateGamePopup_c *)0x0;
                              pUVar10 = (UnityEngine_Component_o *)
                                        UI_ElementFactory__CreateDefaultPopup_object_
                                                  ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                              if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                                pSVar22 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                                          UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                                (__this_05->fields)._cachedModeSettings = pSVar22;
                                il2cpp_runtime_helper_022b4080(&(__this_05->fields)._cachedModeSettings);
                                __this_03 = (System_Collections_IEnumerator_o **)
                                            UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0)
                                ;
                                pUVar19 = (UI_CreateGamePopup_c *)0x0;
                                pUVar10 = (UnityEngine_Component_o *)
                                          UI_ElementFactory__CreateDefaultPopup_object_
                                                    ((UnityEngine_Transform_o *)__this_03,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                                if (pUVar10 != (UnityEngine_Component_o *)0x0) {
                                  pUVar19 = (UI_CreateGamePopup_c *)
                                            UnityEngine_Component__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
                                  __this_05[1].fields.m_CachedPtr = (intptr_t)pUVar19;
                                  il2cpp_runtime_helper_022b4080(&__this_05[1].fields);
                                  lVar6 = MethodInfo_Void_Add;
                                  __this_03 = (System_Collections_IEnumerator_o **)
                                              (__this_05->fields).SinglePanel;
                                  if ((System_Collections_Generic_List_object__o *)__this_03 !=
                                      (System_Collections_Generic_List_object__o *)0x0) {
                                    pUVar19 = (UI_CreateGamePopup_c *)(__this_05->fields).killPopupKeyframesIn
                                    ;
                                    piVar1 = &(((System_Collections_Generic_List_object__o *)__this_03)->
                                              fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar5 = (((System_Collections_Generic_List_object__o *)__this_03)->fields
                                             )._items;
                                    if (pSVar5 != (System_Object_array *)0x0) {
                                      uVar3 = (((System_Collections_Generic_List_object__o *)__this_03)->
                                              fields)._size;
                                      if (uVar3 < (uint)pSVar5->max_length) {
                                        (((System_Collections_Generic_List_object__o *)__this_03)->fields).
                                        _size = uVar3 + 1;
                                        pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar19;
                                        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                        __this_03 = (System_Collections_IEnumerator_o **)
                                                    (__this_05->fields).SinglePanel;
                                        lVar6 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)__this_03,
                                                   (Il2CppObject *)pUVar19,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                        __this_03 = (System_Collections_IEnumerator_o **)
                                                    (__this_05->fields).SinglePanel;
                                        lVar6 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar6;
                                      if ((System_Collections_Generic_List_object__o *)__this_03 !=
                                          (System_Collections_Generic_List_object__o *)0x0) {
                                        pUVar19 = (UI_CreateGamePopup_c *)(__this_05->fields).LocaleCategory;
                                        piVar1 = &(((System_Collections_Generic_List_object__o *)__this_03)->
                                                  fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pSVar5 = (((System_Collections_Generic_List_object__o *)__this_03)->
                                                 fields)._items;
                                        if (pSVar5 != (System_Object_array *)0x0) {
                                          uVar3 = (((System_Collections_Generic_List_object__o *)__this_03)->
                                                  fields)._size;
                                          if (uVar3 < (uint)pSVar5->max_length) {
                                            (((System_Collections_Generic_List_object__o *)__this_03)->fields)
                                            ._size = uVar3 + 1;
                                            pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar19;
                                            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                            __this_03 = (System_Collections_IEnumerator_o **)
                                                        (__this_05->fields).SinglePanel;
                                            lVar6 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)__this_03,
                                                       (Il2CppObject *)pUVar19,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                            __this_03 = (System_Collections_IEnumerator_o **)
                                                        (__this_05->fields).SinglePanel;
                                            lVar6 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar6;
                                          if ((System_Collections_Generic_List_object__o *)__this_03 !=
                                              (System_Collections_Generic_List_object__o *)0x0) {
                                            pUVar19 = (UI_CreateGamePopup_c *)
                                                      (__this_05->fields)._cachedAddonSelectionKey;
                                            piVar1 = &(((System_Collections_Generic_List_object__o *)__this_03
                                                       )->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pSVar5 = (((System_Collections_Generic_List_object__o *)__this_03)
                                                     ->fields)._items;
                                            if (pSVar5 != (System_Object_array *)0x0) {
                                              uVar3 = (((System_Collections_Generic_List_object__o *)__this_03
                                                       )->fields)._size;
                                              if (uVar3 < (uint)pSVar5->max_length) {
                                                (((System_Collections_Generic_List_object__o *)__this_03)->
                                                fields)._size = uVar3 + 1;
                                                pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar19;
                                                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                __this_03 = (System_Collections_IEnumerator_o **)
                                                            (__this_05->fields).SinglePanel;
                                                lVar6 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)
                                                           __this_03,(Il2CppObject *)pUVar19,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_03 = (System_Collections_IEnumerator_o **)
                                                            (__this_05->fields).SinglePanel;
                                                lVar6 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar6;
                                              if ((System_Collections_Generic_List_object__o *)__this_03 !=
                                                  (System_Collections_Generic_List_object__o *)0x0) {
                                                pUVar19 = *(UI_CreateGamePopup_c **)
                                                           &(__this_05->fields).IsMultiplayer;
                                                piVar1 = &(((System_Collections_Generic_List_object__o *)
                                                           __this_03)->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pSVar5 = (((System_Collections_Generic_List_object__o *)
                                                          __this_03)->fields)._items;
                                                if (pSVar5 != (System_Object_array *)0x0) {
                                                  uVar3 = (((System_Collections_Generic_List_object__o *)
                                                           __this_03)->fields)._size;
                                                  if (uVar3 < (uint)pSVar5->max_length) {
                                                    (((System_Collections_Generic_List_object__o *)__this_03)
                                                    ->fields)._size = uVar3 + 1;
                                                    pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar19;
                                                    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                    __this_03 = (System_Collections_IEnumerator_o **)
                                                                (__this_05->fields).SinglePanel;
                                                    lVar6 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              ((System_Collections_Generic_List_object__o *)
                                                               __this_03,(Il2CppObject *)pUVar19,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_03 = (System_Collections_IEnumerator_o **)
                                                                (__this_05->fields).SinglePanel;
                                                    lVar6 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar6;
                                                  if ((System_Collections_Generic_List_object__o *)__this_03
                                                      != (System_Collections_Generic_List_object__o *)0x0) {
                                                    pUVar19 = (UI_CreateGamePopup_c *)
                                                              (__this_05->fields)._watcher;
                                                    piVar1 = &(((System_Collections_Generic_List_object__o *)
                                                               __this_03)->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pSVar5 = (((System_Collections_Generic_List_object__o *)
                                                              __this_03)->fields)._items;
                                                    if (pSVar5 != (System_Object_array *)0x0) {
                                                      uVar3 = (((System_Collections_Generic_List_object__o *)
                                                               __this_03)->fields)._size;
                                                      if (uVar3 < (uint)pSVar5->max_length) {
                                                        (((System_Collections_Generic_List_object__o *)
                                                         __this_03)->fields)._size = uVar3 + 1;
                                                        pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar19;
                                                        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                        __this_03 = (System_Collections_IEnumerator_o **)
                                                                    (__this_05->fields).SinglePanel;
                                                        lVar6 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)__this_03,(Il2CppObject *)pUVar19,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_03 = (System_Collections_IEnumerator_o **)
                                                                    (__this_05->fields).SinglePanel;
                                                        lVar6 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar6;
                                                      if ((System_Collections_Generic_List_object__o *)
                                                          __this_03 !=
                                                          (System_Collections_Generic_List_object__o *)0x0) {
                                                        pUVar19 = (UI_CreateGamePopup_c *)
                                                                  (__this_05->fields)._cachedLogicSource;
                                                        piVar1 = &(((System_Collections_Generic_List_object__o
                                                                     *)__this_03)->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar5 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._items;
                                                        if (pSVar5 != (System_Object_array *)0x0) {
                                                          uVar3 = (((System_Collections_Generic_List_object__o
                                                                     *)__this_03)->fields)._size;
                                                          if (uVar3 < (uint)pSVar5->max_length) {
                                                            (((System_Collections_Generic_List_object__o *)
                                                             __this_03)->fields)._size = uVar3 + 1;
                                                            pSVar5->m_Items[(int)uVar3] =
                                                                 (Il2CppObject *)pUVar19;
                                                            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                            __this_03 = (System_Collections_IEnumerator_o **)
                                                                        (__this_05->fields).SinglePanel;
                                                            lVar6 = MethodInfo_Void_Add;
                                                          }
                                                          else {
                                                                                                                        
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_03 = (System_Collections_IEnumerator_o **)
                                                                   (__this_05->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if ((System_Collections_Generic_List_object__o *)
                                                           __this_03 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar19 = (UI_CreateGamePopup_c *)
                                                                   (__this_05->fields)._cachedAddonSettings;
                                                         piVar1 = &(((
                                                       System_Collections_Generic_List_object__o *)__this_03)
                                                       ->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (((System_Collections_Generic_List_object__o *
                                                                  )__this_03)->fields)._items;
                                                       if (pSVar5 != (System_Object_array *)0x0) {
                                                         uVar3 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._size;
                                                         if (uVar3 < (uint)pSVar5->max_length) {
                                                           (((System_Collections_Generic_List_object__o *)
                                                            __this_03)->fields)._size = uVar3 + 1;
                                                           pSVar5->m_Items[(int)uVar3] =
                                                                (Il2CppObject *)pUVar19;
                                                           il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                           __this_03 = (System_Collections_IEnumerator_o **)
                                                                       (__this_05->fields).SinglePanel;
                                                           lVar6 = MethodInfo_Void_Add;
                                                         }
                                                         else {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_03 = (System_Collections_IEnumerator_o **)
                                                                   (__this_05->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if ((System_Collections_Generic_List_object__o *)
                                                           __this_03 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar19 = (UI_CreateGamePopup_c *)
                                                                   (__this_05->fields).SelectModePopup;
                                                         piVar1 = &(((
                                                       System_Collections_Generic_List_object__o *)__this_03)
                                                       ->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (((System_Collections_Generic_List_object__o *
                                                                  )__this_03)->fields)._items;
                                                       if (pSVar5 != (System_Object_array *)0x0) {
                                                         uVar3 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._size;
                                                         if (uVar3 < (uint)pSVar5->max_length) {
                                                           (((System_Collections_Generic_List_object__o *)
                                                            __this_03)->fields)._size = uVar3 + 1;
                                                           pSVar5->m_Items[(int)uVar3] =
                                                                (Il2CppObject *)pUVar19;
                                                           il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                           __this_03 = (System_Collections_IEnumerator_o **)
                                                                       (__this_05->fields).SinglePanel;
                                                           lVar6 = MethodInfo_Void_Add;
                                                         }
                                                         else {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_03 = (System_Collections_IEnumerator_o **)
                                                                   (__this_05->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if ((System_Collections_Generic_List_object__o *)
                                                           __this_03 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar19 = (UI_CreateGamePopup_c *)
                                                                   (__this_05->fields).SelectAddonPopup;
                                                         piVar1 = &(((
                                                       System_Collections_Generic_List_object__o *)__this_03)
                                                       ->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (((System_Collections_Generic_List_object__o *
                                                                  )__this_03)->fields)._items;
                                                       if (pSVar5 != (System_Object_array *)0x0) {
                                                         uVar3 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._size;
                                                         if (uVar3 < (uint)pSVar5->max_length) {
                                                           (((System_Collections_Generic_List_object__o *)
                                                            __this_03)->fields)._size = uVar3 + 1;
                                                           pSVar5->m_Items[(int)uVar3] =
                                                                (Il2CppObject *)pUVar19;
                                                           il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                           __this_03 = (System_Collections_IEnumerator_o **)
                                                                       (__this_05->fields).SinglePanel;
                                                           lVar6 = MethodInfo_Void_Add;
                                                         }
                                                         else {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_03 = (System_Collections_IEnumerator_o **)
                                                                   (__this_05->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if ((System_Collections_Generic_List_object__o *)
                                                           __this_03 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar19 = __this_05[1].klass;
                                                         piVar1 = &(((
                                                       System_Collections_Generic_List_object__o *)__this_03)
                                                       ->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (((System_Collections_Generic_List_object__o *
                                                                  )__this_03)->fields)._items;
                                                       if (pSVar5 != (System_Object_array *)0x0) {
                                                         uVar3 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._size;
                                                         if (uVar3 < (uint)pSVar5->max_length) {
                                                           (((System_Collections_Generic_List_object__o *)
                                                            __this_03)->fields)._size = uVar3 + 1;
                                                           pSVar5->m_Items[(int)uVar3] =
                                                                (Il2CppObject *)pUVar19;
                                                           il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                           __this_03 = (System_Collections_IEnumerator_o **)
                                                                       (__this_05->fields).SinglePanel;
                                                           lVar6 = MethodInfo_Void_Add;
                                                         }
                                                         else {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_03 = (System_Collections_IEnumerator_o **)
                                                                   (__this_05->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if ((System_Collections_Generic_List_object__o *)
                                                           __this_03 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar19 = __this_05[1].monitor;
                                                         piVar1 = &(((
                                                       System_Collections_Generic_List_object__o *)__this_03)
                                                       ->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (((System_Collections_Generic_List_object__o *
                                                                  )__this_03)->fields)._items;
                                                       if (pSVar5 != (System_Object_array *)0x0) {
                                                         uVar3 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._size;
                                                         if (uVar3 < (uint)pSVar5->max_length) {
                                                           (((System_Collections_Generic_List_object__o *)
                                                            __this_03)->fields)._size = uVar3 + 1;
                                                           pSVar5->m_Items[(int)uVar3] =
                                                                (Il2CppObject *)pUVar19;
                                                           il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                           __this_03 = (System_Collections_IEnumerator_o **)
                                                                       (__this_05->fields).SinglePanel;
                                                           lVar6 = MethodInfo_Void_Add;
                                                         }
                                                         else {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_03 = (System_Collections_IEnumerator_o **)
                                                                   (__this_05->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if ((System_Collections_Generic_List_object__o *)
                                                           __this_03 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar19 = (UI_CreateGamePopup_c *)
                                                                   (__this_05->fields).killPopupKeyframesOut;
                                                         piVar1 = &(((
                                                       System_Collections_Generic_List_object__o *)__this_03)
                                                       ->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (((System_Collections_Generic_List_object__o *
                                                                  )__this_03)->fields)._items;
                                                       if (pSVar5 != (System_Object_array *)0x0) {
                                                         uVar3 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._size;
                                                         if (uVar3 < (uint)pSVar5->max_length) {
                                                           (((System_Collections_Generic_List_object__o *)
                                                            __this_03)->fields)._size = uVar3 + 1;
                                                           pSVar5->m_Items[(int)uVar3] =
                                                                (Il2CppObject *)pUVar19;
                                                           il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                           __this_03 = (System_Collections_IEnumerator_o **)
                                                                       (__this_05->fields).SinglePanel;
                                                           lVar6 = MethodInfo_Void_Add;
                                                         }
                                                         else {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_03 = (System_Collections_IEnumerator_o **)
                                                                   (__this_05->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if ((System_Collections_Generic_List_object__o *)
                                                           __this_03 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar19 = (UI_CreateGamePopup_c *)
                                                                   __this_05[1].fields.
                                                                   m_CancellationTokenSource;
                                                         piVar1 = &(((
                                                       System_Collections_Generic_List_object__o *)__this_03)
                                                       ->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (((System_Collections_Generic_List_object__o *
                                                                  )__this_03)->fields)._items;
                                                       if (pSVar5 != (System_Object_array *)0x0) {
                                                         uVar3 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._size;
                                                         if (uVar3 < (uint)pSVar5->max_length) {
                                                           (((System_Collections_Generic_List_object__o *)
                                                            __this_03)->fields)._size = uVar3 + 1;
                                                           pSVar5->m_Items[(int)uVar3] =
                                                                (Il2CppObject *)pUVar19;
                                                           il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                           __this_03 = (System_Collections_IEnumerator_o **)
                                                                       (__this_05->fields).SinglePanel;
                                                           lVar6 = MethodInfo_Void_Add;
                                                         }
                                                         else {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_03 = (System_Collections_IEnumerator_o **)
                                                                   (__this_05->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if ((System_Collections_Generic_List_object__o *)
                                                           __this_03 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar19 = (UI_CreateGamePopup_c *)
                                                                   __this_05[1].fields.SinglePanel;
                                                         piVar1 = &(((
                                                       System_Collections_Generic_List_object__o *)__this_03)
                                                       ->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (((System_Collections_Generic_List_object__o *
                                                                  )__this_03)->fields)._items;
                                                       if (pSVar5 != (System_Object_array *)0x0) {
                                                         uVar3 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._size;
                                                         if (uVar3 < (uint)pSVar5->max_length) {
                                                           (((System_Collections_Generic_List_object__o *)
                                                            __this_03)->fields)._size = uVar3 + 1;
                                                           pSVar5->m_Items[(int)uVar3] =
                                                                (Il2CppObject *)pUVar19;
                                                           il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                           __this_03 = (System_Collections_IEnumerator_o **)
                                                                       (__this_05->fields).SinglePanel;
                                                           lVar6 = MethodInfo_Void_Add;
                                                         }
                                                         else {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_03 = (System_Collections_IEnumerator_o **)
                                                                   (__this_05->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if ((System_Collections_Generic_List_object__o *)
                                                           __this_03 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar19 = (UI_CreateGamePopup_c *)
                                                                   (__this_05->fields)._cachedModeSettings;
                                                         piVar1 = &(((
                                                       System_Collections_Generic_List_object__o *)__this_03)
                                                       ->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (((System_Collections_Generic_List_object__o *
                                                                  )__this_03)->fields)._items;
                                                       if (pSVar5 != (System_Object_array *)0x0) {
                                                         uVar3 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._size;
                                                         if (uVar3 < (uint)pSVar5->max_length) {
                                                           (((System_Collections_Generic_List_object__o *)
                                                            __this_03)->fields)._size = uVar3 + 1;
                                                           pSVar5->m_Items[(int)uVar3] =
                                                                (Il2CppObject *)pUVar19;
                                                           il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
                                                           __this_03 = (System_Collections_IEnumerator_o **)
                                                                       (__this_05->fields).SinglePanel;
                                                           lVar6 = MethodInfo_Void_Add;
                                                         }
                                                         else {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_03 = (System_Collections_IEnumerator_o **)
                                                                   (__this_05->fields).SinglePanel;
                                                       lVar6 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar6;
                                                       if ((System_Collections_Generic_List_object__o *)
                                                           __this_03 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar19 = (UI_CreateGamePopup_c *)
                                                                   __this_05[1].fields.m_CachedPtr;
                                                         piVar1 = &(((
                                                       System_Collections_Generic_List_object__o *)__this_03)
                                                       ->fields)._version;
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (((System_Collections_Generic_List_object__o *
                                                                  )__this_03)->fields)._items;
                                                       if (pSVar5 != (System_Object_array *)0x0) {
                                                         uVar3 = (((System_Collections_Generic_List_object__o
                                                                    *)__this_03)->fields)._size;
                                                         if ((uint)pSVar5->max_length <= uVar3) {
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_03,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       return extraout_RAX_03;
                                                       }
                                                       (((System_Collections_Generic_List_object__o *)
                                                        __this_03)->fields)._size = uVar3 + 1;
                                                       pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pUVar19;
                                                       pSVar9 = (System_Collections_IEnumerator_o *)
                                                                il2cpp_runtime_helper_022b4080(pSVar5->m_Items +
                                                                                   (int)uVar3);
                                                       return pSVar9;
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
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_03 = &"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) {
    bVar7 = System_String__op_Equality(*(System_String_o **)(lVar6 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return "UI/Themes/Aottg2Dark";
    }
    return "UI/Themes/Aottg2Light";
  }
  il2cpp_runtime_helper_022b2c90();
  __this_06 = ((System_Collections_Generic_List_object__o *)((long)__this_03 + 0x118))->klass;
  if (__this_06 == (System_Collections_Generic_List_object__c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
    *(int *)&(__this_06->_1).name = (int)pUVar19;
    return extraout_RAX_06;
  }
  UI_MainBackgroundMenu__ChangeMainBackground((UI_MainBackgroundMenu_o *)__this_06,(MethodInfo *)pUVar19);
  __this_01 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)
              (((System_Collections_Generic_List_object__o *)((long)__this_03 + 0x118))->fields)._syncRoot;
  if (__this_01 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    return extraout_RAX_04;
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,1,(MethodInfo *)0x0);
  return extraout_RAX_05;
}


// UI.MainMenu$$Update
// il2cpp: void UI_MainMenu__Update (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x4407ec0

void UI_MainMenu__Update(UI_MainMenu_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *pUVar2;
  UI_MessagePopup_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar3;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  UnityEngine_UI_Text_o *str0;
  UnityEngine_UI_Text_o *pUVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  UnityEngine_UI_Text_o *x;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_T__o *pSVar13;
  Il2CppMethodPointer pIVar14;
  Il2CppObject *pIVar15;
  int32_t local_44;
  _union_249689 local_40;
  undefined8 local_38;
  int32_t local_30;
  
  if (g_data_057ae5ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClientState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"Custom server");
    il2cpp_runtime_helper_023445d0(&"Your game version is outdated. \nIf using the launcher, try restarting and repairing.\nFor standalone, download the latest version from https://aottg2.itch.io/aottg2.");
    il2cpp_runtime_helper_023445d0(&" Ping:");
    il2cpp_runtime_helper_023445d0(&"Public server");
    il2cpp_runtime_helper_023445d0(&"LAN server");
    il2cpp_runtime_helper_023445d0(&"Custom lobby");
    il2cpp_runtime_helper_023445d0(&"FPS:");
    il2cpp_runtime_helper_023445d0(&" | ");
    il2cpp_runtime_helper_023445d0(&"7.28.2026");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Public lobby");
    il2cpp_runtime_helper_023445d0(&"Version");
    g_data_057ae5ad = '\x01';
  }
  local_44 = 0;
  x = (__this->fields)._multiplayerStatusLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x58), lVar9 == 0)) goto label_04408498;
    if (*(char *)(lVar9 + 0x11) == '\0') {
      pUVar2 = (__this->fields)._multiplayerMapPopup;
      str0 = "";
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae57e == '\0') goto label_0440829f;
label_04408080:
        iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      else {
        if (g_data_057ae57e != '\0') goto label_04408080;
label_0440829f:
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        g_data_057ae57e = '\x01';
        iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_44 = *(int32_t *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x68);
      pSVar6 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      x = "FPS:";
      str0 = (UnityEngine_UI_Text_o *)
             System_String__Concat_3af7150
                       ((System_String_o *)"FPS:",pSVar6,"\n",(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._multiplayerMapPopup;
    }
    if (pUVar2 == (UI_BasePopup_o *)0x0) goto label_04408498;
    if ((char)(pUVar2->fields).IsActive == '\0') {
      pUVar2 = (__this->fields)._multiplayerRoomListPopup;
      if (pUVar2 == (UI_BasePopup_o *)0x0) goto label_04408498;
      if ((char)(pUVar2->fields).IsActive != '\0') goto label_04408101;
      pUVar2 = (__this->fields)._createGamePopup;
      if (pUVar2 == (UI_BasePopup_o *)0x0) goto label_04408498;
      if ((char)(pUVar2->fields).IsActive != '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
        if ((char)bVar5 != '\0') goto label_04408101;
      }
    }
    else {
label_04408101:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_30 = Photon_Pun_PhotonNetwork__get_NetworkClientState((MethodInfo *)0x0);
      local_40 = TypeInfo_ClientState;
      local_38._0_4_ = 0xffffffff;
      local_38._4_2_ = 0xffff;
      local_38._6_2_ = 0xffff;
      pSVar6 = System_Enum__ToString((System_Enum_o *)&local_40,(MethodInfo *)0x0);
      str0 = (UnityEngine_UI_Text_o *)
             System_String__Concat_3ae5ba0((System_String_o *)str0,pSVar6,(MethodInfo *)0x0);
      bVar5 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_04408171;
label_044081d1:
        il2cpp_runtime_helper_02337ed0();
        bVar5 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      else {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        local_44 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
        pSVar6 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        str0 = (UnityEngine_UI_Text_o *)
               System_String__Concat_3af7150((System_String_o *)str0," Ping:",pSVar6,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_044081d1;
label_04408171:
        bVar5 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
        cVar4 = (char)bVar5;
      }
      if (cVar4 != '\0') {
        pUVar7 = (UnityEngine_UI_Text_o *)
                 System_String__Concat_3ae5ba0((System_String_o *)str0,"\n",(MethodInfo *)0x0);
        lVar9 = **(long **)(TypeInfo_SettingsManager + 0xb8);
        x = str0;
        if (lVar9 == 0) goto label_04408498;
        if ((ulong)(long)*(int *)(lVar9 + 0x70) < 3) {
          pUVar7 = (UnityEngine_UI_Text_o *)
                   System_String__Concat_3ae5ba0
                             ((System_String_o *)pUVar7,
                              *(System_String_o **)(&g_data_0524f3c0)[*(int *)(lVar9 + 0x70)],
                              (MethodInfo *)0x0);
        }
        str0 = (UnityEngine_UI_Text_o *)
               System_String__Concat_3ae5ba0((System_String_o *)pUVar7," | ",(MethodInfo *)0x0);
        x = pUVar7;
        if (*(long *)(lVar9 + 0x20) == 0) goto label_04408498;
        iVar1 = *(int *)(*(long *)(lVar9 + 0x20) + 0x14);
        if (iVar1 == 1) {
          puVar8 = &"Custom lobby";
        }
        else {
          if (iVar1 != 0) goto label_044082e6;
          puVar8 = &"Public lobby";
        }
        str0 = (UnityEngine_UI_Text_o *)
               System_String__Concat_3ae5ba0
                         ((System_String_o *)str0,(System_String_o *)*puVar8,(MethodInfo *)0x0);
      }
    }
label_044082e6:
    pUVar7 = (__this->fields)._multiplayerStatusLabel;
    x = (UnityEngine_UI_Text_o *)0x0;
    if (pUVar7 == (UnityEngine_UI_Text_o *)0x0) goto label_04408498;
    (*(pUVar7->klass->vtable)._75_set_text.methodPtr)(pUVar7,str0,(pUVar7->klass->vtable)._75_set_text.method)
    ;
  }
  if (*(char *)(*(long *)(TypeInfo_MainMenu + 0xb8) + 8) == '\0') {
    if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
      iVar1 = *(int *)(lVar9 + 0x10);
      lVar3 = TypeInfo_PastebinLoader;
    }
    else {
      lVar9 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
      iVar1 = *(int *)(lVar9 + 0x10);
      lVar3 = TypeInfo_PastebinLoader;
    }
    TypeInfo_PastebinLoader = lVar3;
    if (iVar1 == 1) {
      *(undefined1 *)(*(long *)(TypeInfo_MainMenu + 0xb8) + 8) = 1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar9 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
      }
      x = *(UnityEngine_UI_Text_o **)(lVar9 + 8);
      if ((x == (UnityEngine_UI_Text_o *)0x0) ||
         (plVar10 = (long *)(*(x->klass->vtable)._7_OnDisable.methodPtr)
                                      (x,"Version",(x->klass->vtable)._7_OnDisable.method),
         plVar10 == (long *)0x0)) goto label_04408498;
      pSVar6 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      bVar5 = System_String__op_Inequality(pSVar6,"7.28.2026",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        __this_00 = (UI_MessagePopup_o *)(__this->fields)._outdatedPopup;
        x = (UnityEngine_UI_Text_o *)0x0;
        if (__this_00 == (UI_MessagePopup_o *)0x0) goto label_04408498;
        UI_MessagePopup__Show(__this_00,"Your game version is outdated. \nIf using the launcher, try restarting and repairing.\nFor standalone, download the latest version from https://aottg2.itch.io/aottg2.",1,(MethodInfo *)0x0);
      }
    }
  }
  bVar5 = UnityEngine_Input__GetKeyDown(0x6d,(MethodInfo *)0x0);
  if (((char)bVar5 == '\0') ||
     (bVar5 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0), (char)bVar5 == '\0')) {
    return;
  }
  pUVar2 = (__this->fields)._modLoginPopup;
  x = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar2 != (UI_BasePopup_o *)0x0) {
    (*(pUVar2->klass->vtable)._21_Show.methodPtr)(pUVar2,(pUVar2->klass->vtable)._21_Show.method);
    return;
  }
label_04408498:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae5ae = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  pIVar15 = (Il2CppObject *)0x0;
  __this_01 = (System_Collections_Generic_List_object__o *)(x->fields).m_Material;
  if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
label_0440857b:
    auVar12 = il2cpp_runtime_helper_022b2c90();
    uVar11 = auVar12._0_8_;
    if (auVar12._8_4_ == 1) {
      plVar10 = (long *)__cxa_begin_catch(uVar11);
      lVar9 = *plVar10;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar14;
      __this_04.fields._list = pSVar13;
      __this_04.fields._current = pIVar15;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      uVar11 = 0;
      if (lVar9 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar9);
    }
    __this_05.fields._8_8_ = pIVar14;
    __this_05.fields._list = pSVar13;
    __this_05.fields._current = pIVar15;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    _Unwind_Resume(uVar11);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff80,__this_01,
             MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_02.fields._8_8_ = pIVar14;
    __this_02.fields._list = pSVar13;
    __this_02.fields._current = pIVar15;
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
    if ((char)bVar5 == '\0') break;
    if (pIVar15 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_0440857b;
    }
  } while (*(char *)&pIVar15[9].klass == '\0');
  __this_03.fields._8_8_ = pIVar14;
  __this_03.fields._list = pSVar13;
  __this_03.fields._current = pIVar15;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  return;
}


// UI.MainMenu$$IsPopupActive
// il2cpp: bool UI_MainMenu__IsPopupActive (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x44084a0

bool_conflict UI_MainMenu__IsPopupActive(UI_MainMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  undefined8 extraout_RAX;
  undefined8 uVar3;
  long *plVar4;
  undefined8 extraout_RAX_00;
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *pIVar10;
  
  if (g_data_057ae5ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae5ae = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    do {
      __this_01.fields._8_8_ = pIVar9;
      __this_01.fields._list = pSVar8;
      __this_01.fields._current = pIVar10;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') {
        iVar6 = 5;
        uVar5 = 0;
        goto label_04408553;
      }
      if (pIVar10 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_0440857b;
      }
    } while (*(char *)&pIVar10[9].klass == '\0');
    uVar5 = 1;
    iVar6 = 4;
label_04408553:
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = pSVar8;
    __this_02.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar3 = extraout_RAX;
label_04408565:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),iVar6 == 4 & (byte)uVar5);
  }
label_0440857b:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  uVar5 = auVar7._0_8_;
  if (auVar7._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(uVar5);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = pSVar8;
    __this_03.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar5 = 0;
    iVar6 = 0;
    uVar3 = extraout_RAX_00;
    if (lVar1 == 0) goto label_04408565;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = pSVar8;
  __this_04.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(uVar5);
}


// UI.MainMenu$$OnIntroButtonClick
// il2cpp: void UI_MainMenu__OnIntroButtonClick (UI_MainMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4406c20

void UI_MainMenu__OnIntroButtonClick(UI_MainMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  UI_ExternalLinkPopup_o *__this_00;
  System_Object_array *pSVar4;
  long lVar5;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  bool_conflict bVar6;
  uint32_t uVar7;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_Component_o *pUVar8;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  System_String_o *pSVar11;
  Il2CppObject *pIVar12;
  Utility_FileWatcherExtension_o *pUVar13;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar14;
  UI_CreateGameSelectModePopup_o *pUVar15;
  UI_CreateGameSelectAddonPopup_o *pUVar16;
  UI_CreateGamePopup_c *pUVar17;
  System_Threading_CancellationTokenSource_o *pSVar18;
  UnityEngine_Transform_o *pUVar19;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar20;
  MethodInfo *method_00;
  UI_BasePopup_o *pUVar21;
  UI_CreateGamePopup_o *__this_03;
  System_Collections_Generic_List_object__c *__this_04;
  
  method_00 = (MethodInfo *)name;
  if (g_data_057ae5af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&"TutorialButton");
    il2cpp_runtime_helper_023445d0(&"https://www.patreon.com/aottg2");
    il2cpp_runtime_helper_023445d0(&"QuestButton");
    il2cpp_runtime_helper_023445d0(&"HelpButton");
    il2cpp_runtime_helper_023445d0(&"LeaderboardButton");
    il2cpp_runtime_helper_023445d0(&"ToolsButton");
    il2cpp_runtime_helper_023445d0(&"PatreonButton");
    il2cpp_runtime_helper_023445d0(&"CreditsButton");
    il2cpp_runtime_helper_023445d0(&"ProfileButton");
    il2cpp_runtime_helper_023445d0(&"SettingsButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerButton");
    il2cpp_runtime_helper_023445d0(&"QuitButton");
    il2cpp_runtime_helper_023445d0(&"SingleplayerButton");
    il2cpp_runtime_helper_023445d0(&"SocialButton");
    g_data_057ae5af = '\x01';
  }
  bVar6 = UI_MainMenu__IsPopupActive(__this,method_00);
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  if (((char)bVar6 != '\0') &&
     (bVar6 = System_String__op_Equality((__this->fields)._lastButtonClicked,name,(MethodInfo *)0x0),
     (char)bVar6 != '\0')) {
    return;
  }
  (__this->fields)._lastButtonClicked = name;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._lastButtonClicked);
  uVar7 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar7 < 0x400b50bd) {
    if (uVar7 < 0x16c989b9) {
      if (uVar7 == 0xf995a3a) {
        bVar6 = System_String__op_Equality(name,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar21 = (__this->fields)._socialPopup;
        if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_03 = (UI_CreateGamePopup_o *)0x0;
      }
      else if (uVar7 == 0x102e9109) {
        bVar6 = System_String__op_Equality(name,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar21 = (__this->fields)._questPopup;
        if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_03 = (UI_CreateGamePopup_o *)0x0;
      }
      else {
        if (uVar7 != 0x16c989b8) {
          return;
        }
        bVar6 = System_String__op_Equality(name,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar21 = (__this->fields)._toolsPopup;
        if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
        __this_03 = (UI_CreateGamePopup_o *)0x0;
      }
    }
    else if (uVar7 == 0x2e76c0d0) {
      bVar6 = System_String__op_Equality(name,"SingleplayerButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      __this_03 = (UI_CreateGamePopup_o *)(__this->fields)._createGamePopup;
      if (__this_03 != (UI_CreateGamePopup_o *)0x0) {
        bVar2 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
        if ((bVar2 <= (__this_03->klass->_2).naturalAligment) &&
           ((__this_03->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CreateGamePopup)) {
          UI_CreateGamePopup__Show(__this_03,0,(MethodInfo *)0x0);
          return;
        }
        goto label_044070e6;
      }
    }
    else if (uVar7 == 0x2f231a13) {
      bVar6 = System_String__op_Equality(name,"MultiplayerButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this->fields)._multiplayerMapPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
    }
    else {
      if ((uVar7 != 0x400b50bc) ||
         (bVar6 = System_String__op_Equality(name,"SettingsButton",(MethodInfo *)0x0), (char)bVar6 == '\0')) {
        return;
      }
      pUVar21 = (__this->fields)._settingsPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else if (uVar7 < 0x897f23a9) {
    if (uVar7 == 0x897f23a8) {
      bVar6 = System_String__op_Equality(name,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this->fields)._leaderboardPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
    }
    else if (uVar7 == 0x435494ca) {
      bVar6 = System_String__op_Equality(name,"PatreonButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      __this_00 = (__this->fields).ExternalLinkPopup;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
      if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
        UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (uVar7 != 0x4d49ad7f) {
        return;
      }
      bVar6 = System_String__op_Equality(name,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this->fields)._tutorialPopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  else {
    if (uVar7 < 0xf4ca4aa2) {
      if (uVar7 == 0xe45fe9d6) {
        bVar6 = System_String__op_Equality(name,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Application__Quit_4daefd0((MethodInfo *)0x0);
        return;
      }
      if (uVar7 != 0xf4ca4aa1) {
        return;
      }
      bVar6 = System_String__op_Equality(name,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar7 == 0xfadab5e2) {
      bVar6 = System_String__op_Equality(name,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this->fields)._aboutPopup;
      __this_03 = (UI_CreateGamePopup_o *)0x0;
      if (pUVar21 != (UI_BasePopup_o *)0x0) goto label_044070c9;
    }
    else {
      if (uVar7 != 0xff10090e) {
        return;
      }
      bVar6 = System_String__op_Equality(name,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar21 = (__this->fields)._editProfilePopup;
      if (pUVar21 != (UI_BasePopup_o *)0x0) {
label_044070c9:
        (*(pUVar21->klass->vtable)._21_Show.methodPtr)(pUVar21,(pUVar21->klass->vtable)._21_Show.method);
        return;
      }
      __this_03 = (UI_CreateGamePopup_o *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044070e6:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae5a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MultiplayerMapPopup");
    g_data_057ae5a9 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this_03,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  pUVar17 = (UI_CreateGamePopup_c *)0x0;
  pUVar8 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
    pSVar9 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
             UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    (__this_03->fields).killPopupKeyframesOut = pSVar9;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).killPopupKeyframesOut);
    __this_02 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    pUVar17 = (UI_CreateGamePopup_c *)0x0;
    pUVar8 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_02,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup)
    ;
    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
      pSVar9 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
               UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this_03->fields).killPopupKeyframesIn = pSVar9;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).killPopupKeyframesIn);
      __this_02 = (System_Collections_Generic_List_object__o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
      ;
      pUVar17 = "Prefabs/MainMenu/MultiplayerMapPopup";
      pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerMapPopup
                          );
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        pSVar11 = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
        (__this_03->fields).LocaleCategory = pSVar11;
        il2cpp_runtime_helper_022b4080(&(__this_03->fields).LocaleCategory);
        __this_02 = (System_Collections_Generic_List_object__o *)
                    UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
        pUVar17 = (UI_CreateGamePopup_c *)0x0;
        pUVar8 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateHeadedPanel_object_
                           ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePopup);
        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
          pSVar11 = (System_String_o *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this_03->fields)._cachedAddonSelectionKey = pSVar11;
          il2cpp_runtime_helper_022b4080(&(__this_03->fields)._cachedAddonSelectionKey);
          __this_02 = (System_Collections_Generic_List_object__o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          pUVar17 = (UI_CreateGamePopup_c *)0x0;
          pUVar8 = (UnityEngine_Component_o *)
                   UI_ElementFactory__CreateHeadedPanel_object_
                             ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
            pIVar12 = UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
            *(Il2CppObject **)&(__this_03->fields).IsMultiplayer = pIVar12;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).IsMultiplayer);
            __this_02 = (System_Collections_Generic_List_object__o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            pUVar17 = (UI_CreateGamePopup_c *)0x0;
            pUVar8 = (UnityEngine_Component_o *)
                     UI_ElementFactory__CreateHeadedPanel_object_
                               ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
              pUVar13 = (Utility_FileWatcherExtension_o *)
                        UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this_03->fields)._watcher = pUVar13;
              il2cpp_runtime_helper_022b4080(&(__this_03->fields)._watcher);
              __this_02 = (System_Collections_Generic_List_object__o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
              pUVar17 = "Prefabs/MainMenu/MultiplayerRoomListPopup";
              pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                  ((UnityEngine_Transform_o *)__this_02,(System_String_o *)"Prefabs/MainMenu/MultiplayerRoomListPopup",0,
                                   MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerRoomListP);
              if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                pSVar11 = (System_String_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this_03->fields)._cachedLogicSource = pSVar11;
                il2cpp_runtime_helper_022b4080(&(__this_03->fields)._cachedLogicSource);
                __this_02 = (System_Collections_Generic_List_object__o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                pUVar17 = (UI_CreateGamePopup_c *)0x0;
                pUVar8 = (UnityEngine_Component_o *)
                         UI_ElementFactory__CreateHeadedPanel_object_
                                   ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPopup);
                if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                  pSVar14 = (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
                             *)UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this_03->fields)._cachedAddonSettings = pSVar14;
                  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._cachedAddonSettings);
                  __this_02 = (System_Collections_Generic_List_object__o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                  pUVar17 = (UI_CreateGamePopup_c *)0x0;
                  pUVar8 = (UnityEngine_Component_o *)
                           UI_ElementFactory__CreateHeadedPanel_object_
                                     ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                    pUVar15 = (UI_CreateGameSelectModePopup_o *)
                              UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this_03->fields).SelectModePopup = pUVar15;
                    il2cpp_runtime_helper_022b4080(&(__this_03->fields).SelectModePopup);
                    __this_02 = (System_Collections_Generic_List_object__o *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                    pUVar17 = (UI_CreateGamePopup_c *)0x0;
                    pUVar8 = (UnityEngine_Component_o *)
                             UI_ElementFactory__CreateHeadedPanel_object_
                                       ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                      pUVar16 = (UI_CreateGameSelectAddonPopup_o *)
                                UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this_03->fields).SelectAddonPopup = pUVar16;
                      il2cpp_runtime_helper_022b4080(&(__this_03->fields).SelectAddonPopup);
                      __this_02 = (System_Collections_Generic_List_object__o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                      pUVar17 = (UI_CreateGamePopup_c *)0x0;
                      pUVar8 = (UnityEngine_Component_o *)
                               UI_ElementFactory__CreateHeadedPanel_object_
                                         ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                        pUVar17 = (UI_CreateGamePopup_c *)
                                  UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                        __this_03[1].klass = pUVar17;
                        il2cpp_runtime_helper_022b4080(__this_03 + 1);
                        __this_02 = (System_Collections_Generic_List_object__o *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                        pUVar17 = (UI_CreateGamePopup_c *)0x0;
                        pUVar8 = (UnityEngine_Component_o *)
                                 UI_ElementFactory__CreateHeadedPanel_object_
                                           ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
                        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                          pIVar12 = UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                          __this_03[1].monitor = pIVar12;
                          il2cpp_runtime_helper_022b4080(&__this_03[1].monitor);
                          __this_02 = (System_Collections_Generic_List_object__o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                          pUVar17 = (UI_CreateGamePopup_c *)0x0;
                          pUVar8 = (UnityEngine_Component_o *)
                                   UI_ElementFactory__CreateHeadedPanel_object_
                                             ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_AdvancedConfigurationPopup_CreateHeadedPanel_AdvancedCon);
                          if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                            pSVar18 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                            __this_03[1].fields.m_CancellationTokenSource = pSVar18;
                            il2cpp_runtime_helper_022b4080(&__this_03[1].fields.m_CancellationTokenSource);
                            __this_02 = (System_Collections_Generic_List_object__o *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                            pUVar17 = (UI_CreateGamePopup_c *)0x0;
                            pUVar8 = (UnityEngine_Component_o *)
                                     UI_ElementFactory__CreateDefaultPopup_object_
                                               ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                            if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                              pUVar19 = (UnityEngine_Transform_o *)
                                        UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                              __this_03[1].fields.SinglePanel = pUVar19;
                              il2cpp_runtime_helper_022b4080(&__this_03[1].fields.SinglePanel);
                              __this_02 = (System_Collections_Generic_List_object__o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                              pUVar17 = (UI_CreateGamePopup_c *)0x0;
                              pUVar8 = (UnityEngine_Component_o *)
                                       UI_ElementFactory__CreateDefaultPopup_object_
                                                 ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                              if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                pSVar20 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                                          UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                                (__this_03->fields)._cachedModeSettings = pSVar20;
                                il2cpp_runtime_helper_022b4080(&(__this_03->fields)._cachedModeSettings);
                                __this_02 = (System_Collections_Generic_List_object__o *)
                                            UnityEngine_Component__get_transform
                                                      ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
                                ;
                                pUVar17 = (UI_CreateGamePopup_c *)0x0;
                                pUVar8 = (UnityEngine_Component_o *)
                                         UI_ElementFactory__CreateDefaultPopup_object_
                                                   ((UnityEngine_Transform_o *)__this_02,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                                if (pUVar8 != (UnityEngine_Component_o *)0x0) {
                                  pUVar17 = (UI_CreateGamePopup_c *)
                                            UnityEngine_Component__GetComponent_object_(pUVar8,MethodInfo_BasePopup_GetComponent_BasePopup);
                                  __this_03[1].fields.m_CachedPtr = (intptr_t)pUVar17;
                                  il2cpp_runtime_helper_022b4080(&__this_03[1].fields);
                                  lVar5 = MethodInfo_Void_Add;
                                  __this_02 = (System_Collections_Generic_List_object__o *)
                                              (__this_03->fields).SinglePanel;
                                  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                    pUVar17 = (UI_CreateGamePopup_c *)(__this_03->fields).killPopupKeyframesIn
                                    ;
                                    piVar1 = &(__this_02->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar4 = (__this_02->fields)._items;
                                    if (pSVar4 != (System_Object_array *)0x0) {
                                      uVar3 = (__this_02->fields)._size;
                                      if (uVar3 < (uint)pSVar4->max_length) {
                                        (__this_02->fields)._size = uVar3 + 1;
                                        pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_03->fields).SinglePanel;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (__this_02,(Il2CppObject *)pUVar17,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                        __this_02 = (System_Collections_Generic_List_object__o *)
                                                    (__this_03->fields).SinglePanel;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar5;
                                      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                        pUVar17 = (UI_CreateGamePopup_c *)(__this_03->fields).LocaleCategory;
                                        piVar1 = &(__this_02->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pSVar4 = (__this_02->fields)._items;
                                        if (pSVar4 != (System_Object_array *)0x0) {
                                          uVar3 = (__this_02->fields)._size;
                                          if (uVar3 < (uint)pSVar4->max_length) {
                                            (__this_02->fields)._size = uVar3 + 1;
                                            pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_03->fields).SinglePanel;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      (__this_02,(Il2CppObject *)pUVar17,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                            __this_02 = (System_Collections_Generic_List_object__o *)
                                                        (__this_03->fields).SinglePanel;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar5;
                                          if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                                            pUVar17 = (UI_CreateGamePopup_c *)
                                                      (__this_03->fields)._cachedAddonSelectionKey;
                                            piVar1 = &(__this_02->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pSVar4 = (__this_02->fields)._items;
                                            if (pSVar4 != (System_Object_array *)0x0) {
                                              uVar3 = (__this_02->fields)._size;
                                              if (uVar3 < (uint)pSVar4->max_length) {
                                                (__this_02->fields)._size = uVar3 + 1;
                                                pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_03->fields).SinglePanel;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          (__this_02,(Il2CppObject *)pUVar17,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_02 = (System_Collections_Generic_List_object__o *)
                                                            (__this_03->fields).SinglePanel;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar5;
                                              if (__this_02 !=
                                                  (System_Collections_Generic_List_object__o *)0x0) {
                                                pUVar17 = *(UI_CreateGamePopup_c **)
                                                           &(__this_03->fields).IsMultiplayer;
                                                piVar1 = &(__this_02->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pSVar4 = (__this_02->fields)._items;
                                                if (pSVar4 != (System_Object_array *)0x0) {
                                                  uVar3 = (__this_02->fields)._size;
                                                  if (uVar3 < (uint)pSVar4->max_length) {
                                                    (__this_02->fields)._size = uVar3 + 1;
                                                    pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_03->fields).SinglePanel;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              (__this_02,(Il2CppObject *)pUVar17,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_02 = (System_Collections_Generic_List_object__o *)
                                                                (__this_03->fields).SinglePanel;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (__this_02 !=
                                                      (System_Collections_Generic_List_object__o *)0x0) {
                                                    pUVar17 = (UI_CreateGamePopup_c *)
                                                              (__this_03->fields)._watcher;
                                                    piVar1 = &(__this_02->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pSVar4 = (__this_02->fields)._items;
                                                    if (pSVar4 != (System_Object_array *)0x0) {
                                                      uVar3 = (__this_02->fields)._size;
                                                      if (uVar3 < (uint)pSVar4->max_length) {
                                                        (__this_02->fields)._size = uVar3 + 1;
                                                        pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_03->fields).SinglePanel;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  (__this_02,(Il2CppObject *)pUVar17,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_02 = (System_Collections_Generic_List_object__o
                                                                     *)(__this_03->fields).SinglePanel;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar5;
                                                      if (__this_02 !=
                                                          (System_Collections_Generic_List_object__o *)0x0) {
                                                        pUVar17 = (UI_CreateGamePopup_c *)
                                                                  (__this_03->fields)._cachedLogicSource;
                                                        piVar1 = &(__this_02->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pSVar4 = (__this_02->fields)._items;
                                                        if (pSVar4 != (System_Object_array *)0x0) {
                                                          uVar3 = (__this_02->fields)._size;
                                                          if (uVar3 < (uint)pSVar4->max_length) {
                                                            (__this_02->fields)._size = uVar3 + 1;
                                                            pSVar4->m_Items[(int)uVar3] =
                                                                 (Il2CppObject *)pUVar17;
                                                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                            __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_03->fields)._cachedAddonSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_03->fields).SelectModePopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_03->fields).SelectAddonPopup;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = __this_03[1].klass;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = __this_03[1].monitor;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_03->fields).killPopupKeyframesOut;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   __this_03[1].fields.
                                                                   m_CancellationTokenSource;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   __this_03[1].fields.SinglePanel;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   (__this_03->fields)._cachedModeSettings;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if (uVar3 < (uint)pSVar4->max_length) {
                                                             (__this_02->fields)._size = uVar3 + 1;
                                                             pSVar4->m_Items[(int)uVar3] =
                                                                  (Il2CppObject *)pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                                                             __this_02 = (
                                                       System_Collections_Generic_List_object__o *)
                                                       (__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       else {
                                                                                                                  
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_02 = (System_Collections_Generic_List_object__o
                                                                    *)(__this_03->fields).SinglePanel;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_02 !=
                                                           (System_Collections_Generic_List_object__o *)0x0) {
                                                         pUVar17 = (UI_CreateGamePopup_c *)
                                                                   __this_03[1].fields.m_CachedPtr;
                                                         piVar1 = &(__this_02->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pSVar4 = (__this_02->fields)._items;
                                                         if (pSVar4 != (System_Object_array *)0x0) {
                                                           uVar3 = (__this_02->fields)._size;
                                                           if ((uint)pSVar4->max_length <= uVar3) {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 (__this_02,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       return;
                                                       }
                                                       (__this_02->fields)._size = uVar3 + 1;
                                                       pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar17;
                                                       il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
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
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_02 = (System_Collections_Generic_List_object__o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
    bVar6 = System_String__op_Equality(*(System_String_o **)(lVar5 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_04 = __this_02[7].klass;
  if (__this_04 == (System_Collections_Generic_List_object__c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
    *(int *)&(__this_04->_1).name = (int)pUVar17;
    return;
  }
  UI_MainBackgroundMenu__ChangeMainBackground((UI_MainBackgroundMenu_o *)__this_04,(MethodInfo *)pUVar17);
  __this_01 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)__this_02[7].fields._syncRoot;
  if (__this_01 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,1,(MethodInfo *)0x0);
  return;
}


// UI.MainMenu$$GisketchThemePath
// il2cpp: System_String_o* UI_MainMenu__GisketchThemePath (const MethodInfo* method);
// 0x4407db0

System_String_o * UI_MainMenu__GisketchThemePath(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  System_String_o *extraout_RAX_01;
  MethodInfo *in_RSI;
  UI_MainBackgroundMenu_o *__this;
  
  if (g_data_057ae5b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    method = (MethodInfo *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5b0 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    bVar2 = System_String__op_Equality(*(System_String_o **)(lVar1 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return "UI/Themes/Aottg2Light";
    }
    return "UI/Themes/Aottg2Dark";
  }
  il2cpp_runtime_helper_022b2c90();
  __this = (UI_MainBackgroundMenu_o *)method[3].invoker_method;
  if (__this == (UI_MainBackgroundMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    *(int *)&(__this->fields).m_CachedPtr = (int)in_RSI;
    return extraout_RAX_01;
  }
  UI_MainBackgroundMenu__ChangeMainBackground(__this,in_RSI);
  if ((Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)method[3].parameters !=
      (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
              ((Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)method[3].parameters,1,
               (MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  return extraout_RAX;
}


// UI.MainMenu$$OnDestroy
// il2cpp: void UI_MainMenu__OnDestroy (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x4408600

void UI_MainMenu__OnDestroy(UI_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057ae5b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae5b1 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._gisketchHost;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._gisketchHost;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MainMenu$$.ctor
// il2cpp: void UI_MainMenu___ctor (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x4408680

void UI_MainMenu___ctor(UI_MainMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


