// Type: UI.MainMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MainMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/MainMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.MainMenu.<WaitAndChangeBackground>d__32$$.ctor
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__32___ctor (UI_MainMenu__WaitAndChangeBackground_d__32_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40f3bb0

void UI_MainMenu_<WaitAndChangeBackground>d__32___ctor
               (UI_MainMenu__WaitAndChangeBackground_d__32_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MainMenu.<WaitAndChangeBackground>d__32$$System.IDisposable.Dispose
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__32__System_IDisposable_Dispose (UI_MainMenu__WaitAndChangeBackground_d__32_o* __this, const MethodInfo* method);
// 0x40f43a0

void UI_MainMenu_<WaitAndChangeBackground>d__32__System_IDisposable_Dispose
               (UI_MainMenu__WaitAndChangeBackground_d__32_o *__this,MethodInfo *method)

{
  return;
}


// UI.MainMenu.<WaitAndChangeBackground>d__32$$MoveNext
// il2cpp: bool UI_MainMenu__WaitAndChangeBackground_d__32__MoveNext (UI_MainMenu__WaitAndChangeBackground_d__32_o* __this, const MethodInfo* method);
// 0x40f43b0

bool_conflict
UI_MainMenu_<WaitAndChangeBackground>d__32__MoveNext
          (UI_MainMenu__WaitAndChangeBackground_d__32_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MainMenu_o *pUVar2;
  UI_MainBackgroundMenu_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  UnityEngine_WaitForSeconds_o *__this_02;
  undefined8 uVar3;
  
  if (DAT_05704817 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05704817 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pUVar2 == (UI_MainMenu_o *)0x0) ||
       (__this_00 = (pUVar2->fields)._backgroundMenu, __this_00 == (UI_MainBackgroundMenu_o *)0x0))
    {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UI_MainBackgroundMenu__ChangeMainBackground(__this_00,method);
    __this_01 = (pUVar2->fields)._tipPanel;
    if (__this_01 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
                (__this_01,1,(MethodInfo *)0x0);
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
  }
  __this_02 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_02,20.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_02;
  uVar3 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_02);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// UI.MainMenu.<WaitAndChangeBackground>d__32$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MainMenu__WaitAndChangeBackground_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MainMenu__WaitAndChangeBackground_d__32_o* __this, const MethodInfo* method);
// 0x40f4480

Il2CppObject *
UI_MainMenu_<WaitAndChangeBackground>d__32__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_MainMenu__WaitAndChangeBackground_d__32_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainMenu.<WaitAndChangeBackground>d__32$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__32__System_Collections_IEnumerator_Reset (UI_MainMenu__WaitAndChangeBackground_d__32_o* __this, const MethodInfo* method);
// 0x40f4490

void UI_MainMenu_<WaitAndChangeBackground>d__32__System_Collections_IEnumerator_Reset
               (UI_MainMenu__WaitAndChangeBackground_d__32_o *__this,MethodInfo *method)

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


// UI.MainMenu.<WaitAndChangeBackground>d__32$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MainMenu__WaitAndChangeBackground_d__32__System_Collections_IEnumerator_get_Current (UI_MainMenu__WaitAndChangeBackground_d__32_o* __this, const MethodInfo* method);
// 0x40f44d0

Il2CppObject *
UI_MainMenu_<WaitAndChangeBackground>d__32__System_Collections_IEnumerator_get_Current
          (UI_MainMenu__WaitAndChangeBackground_d__32_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainMenu$$Setup
// il2cpp: void UI_MainMenu__Setup (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f21e0

void UI_MainMenu__Setup(UI_MainMenu_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *a;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if (DAT_0570480c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"MainBackgroundInfo");
    DAT_0570480c = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  a = (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_MainMenu + 0xb8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = ApplicationManagers_ResourceManager__LoadText(pSVar2,"MainBackgroundInfo",(MethodInfo *)0x0);
    method_00 = (MethodInfo *)SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_MainMenu + 0xb8) = method_00;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MainMenu + 0xb8));
  }
  UI_MainMenu__SetupMainBackground(__this,method_00);
  UI_MainMenu__SetupIntroPanel(__this,method_00);
  UI_MainMenu__SetupLabels(__this,method_00);
  return;
}


// UI.MainMenu$$SetupMainBackground
// il2cpp: void UI_MainMenu__SetupMainBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f2320

void UI_MainMenu__SetupMainBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_MainBackgroundMenu_o *pUVar1;
  Il2CppObject *__this_00;
  
  if (DAT_0570480d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MainBackgroundMenu_CreateMenu_MainBackgroundMenu);
    il2cpp_init_method_metadata(&"Prefabs/Panels/BackgroundMenu");
    DAT_0570480d = '\x01';
  }
  pUVar1 = (UI_MainBackgroundMenu_o *)
           UI_ElementFactory__CreateMenu<object>("Prefabs/Panels/BackgroundMenu",MethodInfo_MainBackgroundMenu_CreateMenu_MainBackgroundMenu);
  (__this->fields)._backgroundMenu = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._backgroundMenu,pUVar1);
  pUVar1 = (__this->fields)._backgroundMenu;
  if (pUVar1 != (UI_MainBackgroundMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._4_Setup.methodPtr)();
    if (DAT_05704811 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_WaitAndChangeBackground_d__32);
      DAT_05704811 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndChangeBackground_d__32);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainMenu$$ShowMultiplayerRoomListPopup
// il2cpp: void UI_MainMenu__ShowMultiplayerRoomListPopup (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f2960

void UI_MainMenu__ShowMultiplayerRoomListPopup(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  pUVar1 = (__this->fields)._multiplayerRoomListPopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._21_Show.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(pUVar1->klass->vtable)._21_Show.method,extraout_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainMenu$$ShowMultiplayerMapPopup
// il2cpp: void UI_MainMenu__ShowMultiplayerMapPopup (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f29a0

void UI_MainMenu__ShowMultiplayerMapPopup(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  pUVar1 = (__this->fields)._multiplayerMapPopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._21_Show.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(pUVar1->klass->vtable)._21_Show.method,extraout_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainMenu$$OpenIntroAction
// il2cpp: void UI_MainMenu__OpenIntroAction (UI_MainMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40f29e0

void UI_MainMenu__OpenIntroAction(UI_MainMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_ExternalLinkPopup_o *__this_00;
  UI_CreateGamePopup_o *__this_01;
  bool_conflict bVar2;
  uint32_t uVar3;
  MethodInfo *method_00;
  UI_BasePopup_o *pUVar4;
  
  method_00 = (MethodInfo *)name;
  if (DAT_05704814 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_CreateGamePopup);
    il2cpp_init_method_metadata(&"TutorialButton");
    il2cpp_init_method_metadata(&"https://www.patreon.com/aottg2");
    il2cpp_init_method_metadata(&"QuestButton");
    il2cpp_init_method_metadata(&"HelpButton");
    il2cpp_init_method_metadata(&"LeaderboardButton");
    il2cpp_init_method_metadata(&"ToolsButton");
    il2cpp_init_method_metadata(&"PatreonButton");
    il2cpp_init_method_metadata(&"CreditsButton");
    il2cpp_init_method_metadata(&"ProfileButton");
    il2cpp_init_method_metadata(&"SettingsButton");
    il2cpp_init_method_metadata(&"MultiplayerButton");
    il2cpp_init_method_metadata(&"QuitButton");
    il2cpp_init_method_metadata(&"SingleplayerButton");
    il2cpp_init_method_metadata(&"SocialButton");
    DAT_05704814 = '\x01';
  }
  bVar2 = UI_MainMenu__IsPopupActive(__this,method_00);
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  if (((char)bVar2 != '\0') &&
     (bVar2 = System_String__op_Equality((__this->fields)._lastButtonClicked,name,(MethodInfo *)0x0)
     , (char)bVar2 != '\0')) {
    return;
  }
  (__this->fields)._lastButtonClicked = name;
  il2cpp_runtime_glue(&(__this->fields)._lastButtonClicked);
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x400b50bd) {
    if (uVar3 < 0x16c989b9) {
      if (uVar3 == 0xf995a3a) {
        bVar2 = System_String__op_Equality(name,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        pUVar4 = (__this->fields)._socialPopup;
      }
      else if (uVar3 == 0x102e9109) {
        bVar2 = System_String__op_Equality(name,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        pUVar4 = (__this->fields)._questPopup;
      }
      else {
        if (uVar3 != 0x16c989b8) {
          return;
        }
        bVar2 = System_String__op_Equality(name,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        pUVar4 = (__this->fields)._toolsPopup;
      }
    }
    else {
      if (uVar3 == 0x2e76c0d0) {
        bVar2 = System_String__op_Equality(name,"SingleplayerButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        __this_01 = (UI_CreateGamePopup_o *)(__this->fields)._createGamePopup;
        if (__this_01 != (UI_CreateGamePopup_o *)0x0) {
          bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
          if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
            UI_CreateGamePopup__Show(__this_01,0,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        goto LAB_040f2eb1;
      }
      if (uVar3 == 0x2f231a13) {
        bVar2 = System_String__op_Equality(name,"MultiplayerButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        pUVar4 = (__this->fields)._multiplayerMapPopup;
        if (pUVar4 == (UI_BasePopup_o *)0x0) goto LAB_040f2eb1;
        goto LAB_040f2e99;
      }
      if (uVar3 != 0x400b50bc) {
        return;
      }
      bVar2 = System_String__op_Equality(name,"SettingsButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._settingsPopup;
    }
  }
  else if (uVar3 < 0x897f23a9) {
    if (uVar3 == 0x897f23a8) {
      bVar2 = System_String__op_Equality(name,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._leaderboardPopup;
    }
    else {
      if (uVar3 == 0x435494ca) {
        bVar2 = System_String__op_Equality(name,"PatreonButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        __this_00 = (__this->fields).ExternalLinkPopup;
        if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
          UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
          return;
        }
        goto LAB_040f2eb1;
      }
      if (uVar3 != 0x4d49ad7f) {
        return;
      }
      bVar2 = System_String__op_Equality(name,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._tutorialPopup;
    }
  }
  else {
    if (uVar3 < 0xf4ca4aa2) {
      if (uVar3 == 0xe45fe9d6) {
        bVar2 = System_String__op_Equality(name,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Application__Quit((MethodInfo *)0x0);
        return;
      }
      if (uVar3 != 0xf4ca4aa1) {
        return;
      }
      bVar2 = System_String__op_Equality(name,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar3 == 0xfadab5e2) {
      bVar2 = System_String__op_Equality(name,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._aboutPopup;
    }
    else {
      if (uVar3 != 0xff10090e) {
        return;
      }
      bVar2 = System_String__op_Equality(name,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._editProfilePopup;
    }
  }
  if (pUVar4 != (UI_BasePopup_o *)0x0) {
LAB_040f2e99:
    (*(pUVar4->klass->vtable)._21_Show.methodPtr)(pUVar4,(pUVar4->klass->vtable)._21_Show.method);
    return;
  }
LAB_040f2eb1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainMenu$$SetupPopups
// il2cpp: void UI_MainMenu__SetupPopups (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f2ec0

void UI_MainMenu__SetupPopups(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Component_o *pUVar7;
  UI_BasePopup_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UI_OutdatedPopup_o *pUVar10;
  
  if (DAT_0570480e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_init_method_metadata(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_init_method_metadata(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGame);
    il2cpp_init_method_metadata(&MethodInfo_DuelPopup_GetComponent_DuelPopup);
    il2cpp_init_method_metadata(&MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
    il2cpp_init_method_metadata(&MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
    il2cpp_init_method_metadata(&MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
    il2cpp_init_method_metadata(&MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
    il2cpp_init_method_metadata(&MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
    il2cpp_init_method_metadata(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopu);
    il2cpp_init_method_metadata(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_Creat);
    il2cpp_init_method_metadata(&MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePo);
    il2cpp_init_method_metadata(&MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPo);
    il2cpp_init_method_metadata(&MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
    il2cpp_init_method_metadata(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_init_method_metadata(&MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
    il2cpp_init_method_metadata(&MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
    il2cpp_init_method_metadata(&MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerM);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerR);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_init_method_metadata(&"Prefabs/MainMenu/MultiplayerMapPopup");
    DAT_0570480e = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar7 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_Creat);
  if (pUVar7 != (UnityEngine_Component_o *)0x0) {
    pUVar8 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGame);
    (__this->fields)._selectMapPopup = pUVar8;
    il2cpp_runtime_glue(&(__this->fields)._selectMapPopup);
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopu);
    if (pUVar7 != (UnityEngine_Component_o *)0x0) {
      pUVar8 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
      (__this->fields)._createGamePopup = pUVar8;
      il2cpp_runtime_glue(&(__this->fields)._createGamePopup);
      pUVar6 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar9 = UI_ElementFactory__InstantiateAndSetupPanel<object>
                         (pUVar6,"Prefabs/MainMenu/MultiplayerMapPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerM);
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = (UI_BasePopup_o *)UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup)
        ;
        (__this->fields)._multiplayerMapPopup = pUVar8;
        il2cpp_runtime_glue(&(__this->fields)._multiplayerMapPopup);
        pUVar6 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_EditProfilePopup_CreateHeadedPanel_EditProfilePo);
        if (pUVar7 != (UnityEngine_Component_o *)0x0) {
          pUVar8 = (UI_BasePopup_o *)
                   UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_BasePopup_GetComponent_BasePopup);
          (__this->fields)._editProfilePopup = pUVar8;
          il2cpp_runtime_glue(&(__this->fields)._editProfilePopup);
          pUVar6 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar7 = (UnityEngine_Component_o *)
                   UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
          if (pUVar7 != (UnityEngine_Component_o *)0x0) {
            pUVar8 = (UI_BasePopup_o *)
                     UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_BasePopup_GetComponent_BasePopup);
            (__this->fields)._settingsPopup = pUVar8;
            il2cpp_runtime_glue(&(__this->fields)._settingsPopup);
            pUVar6 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pUVar7 = (UnityEngine_Component_o *)
                     UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_ToolsPopup_CreateHeadedPanel_ToolsPopup);
            if (pUVar7 != (UnityEngine_Component_o *)0x0) {
              pUVar8 = (UI_BasePopup_o *)
                       UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_BasePopup_GetComponent_BasePopup);
              (__this->fields)._toolsPopup = pUVar8;
              il2cpp_runtime_glue(&(__this->fields)._toolsPopup);
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pUVar9 = UI_ElementFactory__InstantiateAndSetupPanel<object>
                                 (pUVar6,"Prefabs/MainMenu/MultiplayerRoomListPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_MultiplayerR);
              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                pUVar8 = (UI_BasePopup_o *)
                         UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_BasePopup_GetComponent_BasePopup);
                (__this->fields)._multiplayerRoomListPopup = pUVar8;
                il2cpp_runtime_glue(&(__this->fields)._multiplayerRoomListPopup);
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                pUVar7 = (UnityEngine_Component_o *)
                         UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_LeaderboardPopup_CreateHeadedPanel_LeaderboardPo);
                if (pUVar7 != (UnityEngine_Component_o *)0x0) {
                  pUVar8 = (UI_BasePopup_o *)
                           UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_BasePopup_GetComponent_BasePopup);
                  (__this->fields)._leaderboardPopup = pUVar8;
                  il2cpp_runtime_glue(&(__this->fields)._leaderboardPopup);
                  pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar7 = (UnityEngine_Component_o *)
                           UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_SocialPopup_CreateHeadedPanel_SocialPopup);
                  if (pUVar7 != (UnityEngine_Component_o *)0x0) {
                    pUVar8 = (UI_BasePopup_o *)
                             UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_BasePopup_GetComponent_BasePopup);
                    (__this->fields)._socialPopup = pUVar8;
                    il2cpp_runtime_glue(&(__this->fields)._socialPopup);
                    pUVar6 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar7 = (UnityEngine_Component_o *)
                             UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_AboutPopup_CreateHeadedPanel_AboutPopup);
                    if (pUVar7 != (UnityEngine_Component_o *)0x0) {
                      pUVar8 = (UI_BasePopup_o *)
                               UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_BasePopup_GetComponent_BasePopup);
                      (__this->fields)._aboutPopup = pUVar8;
                      il2cpp_runtime_glue(&(__this->fields)._aboutPopup);
                      pUVar6 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      pUVar7 = (UnityEngine_Component_o *)
                               UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_QuestPopup_CreateHeadedPanel_QuestPopup);
                      if (pUVar7 != (UnityEngine_Component_o *)0x0) {
                        pUVar8 = (UI_BasePopup_o *)
                                 UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_BasePopup_GetComponent_BasePopup);
                        (__this->fields)._questPopup = pUVar8;
                        il2cpp_runtime_glue(&(__this->fields)._questPopup);
                        pUVar6 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        pUVar7 = (UnityEngine_Component_o *)
                                 UI_ElementFactory__CreateHeadedPanel<object>(pUVar6,0,MethodInfo_TutorialPopup_CreateHeadedPanel_TutorialPopup)
                        ;
                        if (pUVar7 != (UnityEngine_Component_o *)0x0) {
                          pUVar8 = (UI_BasePopup_o *)
                                   UnityEngine_Component__GetComponent<object>(pUVar7,MethodInfo_BasePopup_GetComponent_BasePopup);
                          (__this->fields)._tutorialPopup = pUVar8;
                          il2cpp_runtime_glue(&(__this->fields)._tutorialPopup);
                          pUVar6 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          pUVar7 = (UnityEngine_Component_o *)
                                   UI_ElementFactory__CreateDefaultPopup<object>
                                             (pUVar6,0,MethodInfo_OutdatedPopup_CreateDefaultPopup_OutdatedPopup);
                          if (pUVar7 != (UnityEngine_Component_o *)0x0) {
                            pUVar10 = (UI_OutdatedPopup_o *)
                                      UnityEngine_Component__GetComponent<object>
                                                (pUVar7,MethodInfo_OutdatedPopup_GetComponent_OutdatedPopup);
                            (__this->fields)._outdatedPopup = pUVar10;
                            il2cpp_runtime_glue(&(__this->fields)._outdatedPopup);
                            pUVar6 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
                            ;
                            pUVar7 = (UnityEngine_Component_o *)
                                     UI_ElementFactory__CreateDefaultPopup<object>
                                               (pUVar6,0,MethodInfo_DuelPopup_CreateDefaultPopup_DuelPopup);
                            if (pUVar7 != (UnityEngine_Component_o *)0x0) {
                              pUVar8 = (UI_BasePopup_o *)
                                       UnityEngine_Component__GetComponent<object>
                                                 (pUVar7,MethodInfo_DuelPopup_GetComponent_DuelPopup);
                              (__this->fields)._duelPopup = pUVar8;
                              il2cpp_runtime_glue(&(__this->fields)._duelPopup);
                              pUVar6 = UnityEngine_Component__get_transform
                                                 ((UnityEngine_Component_o *)__this,
                                                  (MethodInfo *)0x0);
                              pUVar7 = (UnityEngine_Component_o *)
                                       UI_ElementFactory__CreateDefaultPopup<object>
                                                 (pUVar6,0,MethodInfo_ModLoginPopup_CreateDefaultPopup_ModLoginPopup);
                              if (pUVar7 != (UnityEngine_Component_o *)0x0) {
                                pUVar8 = (UI_BasePopup_o *)
                                         UnityEngine_Component__GetComponent<object>
                                                   (pUVar7,MethodInfo_BasePopup_GetComponent_BasePopup);
                                (__this->fields)._modLoginPopup = pUVar8;
                                il2cpp_runtime_glue(&(__this->fields)._modLoginPopup,pUVar8);
                                lVar5 = MethodInfo_Void_Add;
                                pSVar3 = (__this->fields)._popups;
                                if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                  pUVar8 = (__this->fields)._createGamePopup;
                                  piVar1 = &(pSVar3->fields)._version;
                                  *piVar1 = *piVar1 + 1;
                                  pUVar4 = (pSVar3->fields)._items;
                                  if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                    uVar2 = (pSVar3->fields)._size;
                                    if (uVar2 < (uint)pUVar4->max_length) {
                                      (pSVar3->fields)._size = uVar2 + 1;
                                      pUVar4->m_Items[(int)uVar2] = pUVar8;
                                      il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                      pSVar3 = (__this->fields)._popups;
                                      lVar5 = MethodInfo_Void_Add;
                                    }
                                    else {
                                      System_Collections_Generic_List<object>__AddWithResize
                                                ((System_Collections_Generic_List_object__o *)pSVar3
                                                 ,(Il2CppObject *)pUVar8,
                                                 *(MethodInfo_35A7350 **)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                                );
                                      pSVar3 = (__this->fields)._popups;
                                      lVar5 = MethodInfo_Void_Add;
                                    }
                                    MethodInfo_Void_Add = lVar5;
                                    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)
                                                  0x0) {
                                      pUVar8 = (__this->fields)._multiplayerMapPopup;
                                      piVar1 = &(pSVar3->fields)._version;
                                      *piVar1 = *piVar1 + 1;
                                      pUVar4 = (pSVar3->fields)._items;
                                      if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                        uVar2 = (pSVar3->fields)._size;
                                        if (uVar2 < (uint)pUVar4->max_length) {
                                          (pSVar3->fields)._size = uVar2 + 1;
                                          pUVar4->m_Items[(int)uVar2] = pUVar8;
                                          il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                          pSVar3 = (__this->fields)._popups;
                                          lVar5 = MethodInfo_Void_Add;
                                        }
                                        else {
                                          System_Collections_Generic_List<object>__AddWithResize
                                                    ((System_Collections_Generic_List_object__o *)
                                                     pSVar3,(Il2CppObject *)pUVar8,
                                                     *(MethodInfo_35A7350 **)
                                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                      0x70));
                                          pSVar3 = (__this->fields)._popups;
                                          lVar5 = MethodInfo_Void_Add;
                                        }
                                        MethodInfo_Void_Add = lVar5;
                                        if (pSVar3 != (System_Collections_Generic_List_BasePopup__o
                                                       *)0x0) {
                                          pUVar8 = (__this->fields)._editProfilePopup;
                                          piVar1 = &(pSVar3->fields)._version;
                                          *piVar1 = *piVar1 + 1;
                                          pUVar4 = (pSVar3->fields)._items;
                                          if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                            uVar2 = (pSVar3->fields)._size;
                                            if (uVar2 < (uint)pUVar4->max_length) {
                                              (pSVar3->fields)._size = uVar2 + 1;
                                              pUVar4->m_Items[(int)uVar2] = pUVar8;
                                              il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                              pSVar3 = (__this->fields)._popups;
                                              lVar5 = MethodInfo_Void_Add;
                                            }
                                            else {
                                              System_Collections_Generic_List<object>__AddWithResize
                                                        ((System_Collections_Generic_List_object__o
                                                          *)pSVar3,(Il2CppObject *)pUVar8,
                                                         *(MethodInfo_35A7350 **)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
                                              pSVar3 = (__this->fields)._popups;
                                              lVar5 = MethodInfo_Void_Add;
                                            }
                                            MethodInfo_Void_Add = lVar5;
                                            if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                               ) {
                                              pUVar8 = (__this->fields)._settingsPopup;
                                              piVar1 = &(pSVar3->fields)._version;
                                              *piVar1 = *piVar1 + 1;
                                              pUVar4 = (pSVar3->fields)._items;
                                              if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                uVar2 = (pSVar3->fields)._size;
                                                if (uVar2 < (uint)pUVar4->max_length) {
                                                  (pSVar3->fields)._size = uVar2 + 1;
                                                  pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                  il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2);
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                }
                                                else {
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                }
                                                MethodInfo_Void_Add = lVar5;
                                                if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                  pUVar8 = (__this->fields)._toolsPopup;
                                                  piVar1 = &(pSVar3->fields)._version;
                                                  *piVar1 = *piVar1 + 1;
                                                  pUVar4 = (pSVar3->fields)._items;
                                                  if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                    uVar2 = (pSVar3->fields)._size;
                                                    if (uVar2 < (uint)pUVar4->max_length) {
                                                      (pSVar3->fields)._size = uVar2 + 1;
                                                      pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                      il2cpp_runtime_glue(pUVar4->m_Items +
                                                                         (int)uVar2);
                                                      pSVar3 = (__this->fields)._popups;
                                                      lVar5 = MethodInfo_Void_Add;
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar8 = (__this->fields).
                                                             _multiplayerRoomListPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar8 = (__this->fields)._leaderboardPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar8 = (__this->fields)._socialPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar8 = (__this->fields)._aboutPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar8 = (__this->fields)._questPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar8 = (__this->fields)._tutorialPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar8 = (__this->fields)._selectMapPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar10 = (__this->fields)._outdatedPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar10;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar10,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar8 = (__this->fields)._duelPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        pSVar3 = (__this->fields)._popups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                                                                                
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  pSVar3 = (__this->fields)._popups;
                                                  lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (pSVar3 != (
                                                  System_Collections_Generic_List_BasePopup__o *)0x0
                                                  ) {
                                                    pUVar8 = (__this->fields)._modLoginPopup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] = pUVar8;
                                                        il2cpp_runtime_glue(pUVar4->m_Items +
                                                                           (int)uVar2);
                                                        return;
                                                      }
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)pSVar3
                                                  ,(Il2CppObject *)pUVar8,
                                                  *(MethodInfo_35A7350 **)
                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70
                                                   ));
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainMenu$$SetupIntroPanel
// il2cpp: void UI_MainMenu__SetupIntroPanel (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f2410

void UI_MainMenu__SetupIntroPanel(UI_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  long lVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppClass *__this_00;
  UnityEngine_MonoBehaviour_o *actionHandler;
  System_String_o *path;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar5;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *pGVar6;
  Il2CppClass *method_00;
  
  if (DAT_0570480f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgGameUiActions_AddComponent_AottgGameUiActio);
    il2cpp_init_method_metadata(&MethodInfo_AottgMainMenuPanelHoverSlide_AddComponent_AottgM);
    il2cpp_init_method_metadata(&MethodInfo_AottgMainMenuTipPanelController_AddComponent_Aot);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_AddComponent_GisketchUIRoot);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"AoTTG Main Menu Gisketch");
    il2cpp_init_method_metadata(&"main-menu");
    DAT_0570480f = '\x01';
  }
  pUVar4 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar4,"AoTTG Main Menu Gisketch",(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields)._gisketchHost;
  (__this->fields)._gisketchHost = pUVar4;
  il2cpp_runtime_glue(ppUVar1,pUVar4);
  pUVar4 = (__this->fields)._gisketchHost;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (Il2CppClass *)UnityEngine_GameObject__AddComponent<object>(pUVar4,MethodInfo_GisketchUIRoot_AddComponent_GisketchUIRoot);
    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
      actionHandler =
           (UnityEngine_MonoBehaviour_o *)
           UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_AottgGameUiActions_AddComponent_AottgGameUiActio);
      if (__this_00 != (Il2CppClass *)0x0) {
        Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen
                  ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,"main-menu",(MethodInfo *)0x0);
        method_00 = __this_00;
        Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler
                  ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,actionHandler,(MethodInfo *)0x0);
        path = UI_MainMenu__GisketchThemePath((MethodInfo *)method_00);
        x = (UnityEngine_Object_o *)UnityEngine_Resources__Load<object>(path,MethodInfo_TextAsset_Load_TextAsset);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          Gisketch_Aottg2UI_GisketchUIRoot__Build
                    ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,(MethodInfo *)0x0);
        }
        else {
          Gisketch_Aottg2UI_GisketchUIRoot__SetTheme
                    ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,(UnityEngine_TextAsset_o *)x,
                     (MethodInfo *)0x0);
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0)) {
          Gisketch_Aottg2UI_GisketchUIRoot__SetScale
                    ((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,*(float *)(lVar2 + 0x14),
                     (MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pIVar5 = UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_AottgMainMenuPanelHoverSlide_AddComponent_AottgM);
            if (pIVar5 != (Il2CppObject *)0x0) {
              pIVar5[2].klass = __this_00;
              il2cpp_runtime_glue(pIVar5 + 2,__this_00);
              if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pGVar6 = (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)
                         UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_AottgMainMenuTipPanelController_AddComponent_Aot);
                (__this->fields)._tipPanel = pGVar6;
                il2cpp_runtime_glue(&(__this->fields)._tipPanel,pGVar6);
                pGVar6 = (__this->fields)._tipPanel;
                if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
                  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__Setup
                            (pGVar6,(Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_00,
                             (MethodInfo *)0x0);
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


// UI.MainMenu$$SetupLabels
// il2cpp: void UI_MainMenu__SetupLabels (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f2670

void UI_MainMenu__SetupLabels(UI_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  char cVar2;
  code *vtable_dispatch;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Component_o *__this_00;
  undefined8 *puVar6;
  
  if (DAT_05704810 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationConfig);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"AOTTG2 Version 7.03.2026.");
    il2cpp_init_method_metadata(&"AOTTG2 DEVELOPMENT VERSION");
    il2cpp_init_method_metadata(&"");
    DAT_05704810 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_ElementStyle + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = UI_ElementFactory__CreateDefaultLabel
                     (pUVar3,(UI_ElementStyle_o *)**(undefined8 **)(TypeInfo_ElementStyle + 0xb8),
                      (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,3,
                      (MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._multiplayerStatusLabel;
    (__this->fields)._multiplayerStatusLabel = pUVar5;
    il2cpp_runtime_glue(ppUVar1);
    pUVar5 = (__this->fields)._multiplayerStatusLabel;
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                (pUVar4,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
      pUVar5 = *ppUVar1;
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar5->klass->vtable)._23_set_color.methodPtr)(0,0);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar4 = UI_ElementFactory__CreateDefaultLabel
                           (pUVar3,(UI_ElementStyle_o *)**(undefined8 **)(TypeInfo_ElementStyle + 0xb8),
                            (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,4,
                            (MethodInfo *)0x0);
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           (__this_00 = (UnityEngine_Component_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text),
           __this_00 != (UnityEngine_Component_o *)0x0)) {
          pUVar4 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
          UI_ElementFactory__SetAnchor
                    (pUVar4,7,7,(UnityEngine_Vector2_o)0x41a0000000000000,(MethodInfo *)0x0);
          (**(code **)&__this_00->klass[1]._2.naturalAligment)
                    (0x3f800000,0x3f800000,__this_00,__this_00->klass[1].vtable._0_Equals.methodPtr)
          ;
          if (*(int *)(TypeInfo_ApplicationConfig + 0xe4) == 0) {
            il2cpp_init_class();
            cVar2 = *(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8);
          }
          else {
            cVar2 = *(char *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8);
          }
          if (cVar2 == '\0') {
            puVar6 = &"AOTTG2 Version 7.03.2026.";
          }
          else {
            puVar6 = &"AOTTG2 DEVELOPMENT VERSION";
          }
          (*__this_00->klass[4]._1.gc_desc)(__this_00,*puVar6,__this_00->klass[4]._1.name);
          vtable_dispatch = __this_00->klass[4]._1.gc_desc;
          (*vtable_dispatch)
                    (__this_00,"",__this_00->klass[4]._1.name,vtable_dispatch);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainMenu$$ChangeMainBackground
// il2cpp: void UI_MainMenu__ChangeMainBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f3b70

void UI_MainMenu__ChangeMainBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_MainBackgroundMenu_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  
  __this_00 = (__this->fields)._backgroundMenu;
  if (__this_00 == (UI_MainBackgroundMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UI_MainBackgroundMenu__ChangeMainBackground(__this_00,method);
  __this_01 = (__this->fields)._tipPanel;
  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
              (__this_01,1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MainMenu$$WaitAndChangeBackground
// il2cpp: System_Collections_IEnumerator_o* UI_MainMenu__WaitAndChangeBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f28f0

System_Collections_IEnumerator_o *
UI_MainMenu__WaitAndChangeBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704811 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndChangeBackground_d__32);
    DAT_05704811 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndChangeBackground_d__32);
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


// UI.MainMenu$$Update
// il2cpp: void UI_MainMenu__Update (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f3bd0

void UI_MainMenu__Update(UI_MainMenu_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UI_BasePopup_o *pUVar3;
  UI_MessagePopup_o *__this_00;
  long lVar4;
  char cVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  int32_t local_44;
  System_Enum_o local_40;
  int32_t local_30;
  
  if (DAT_05704812 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ClientState);
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"Custom server");
    il2cpp_init_method_metadata(&"Your game version is outdated. \nIf using the launcher, try restarting and repairing.\nFor standalone, download the latest version from https://aottg2.itch.i...");
    il2cpp_init_method_metadata(&" Ping:");
    il2cpp_init_method_metadata(&"Public server");
    il2cpp_init_method_metadata(&"7.03.2026");
    il2cpp_init_method_metadata(&"LAN server");
    il2cpp_init_method_metadata(&"Custom lobby");
    il2cpp_init_method_metadata(&"FPS:");
    il2cpp_init_method_metadata(&" | ");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Public lobby");
    il2cpp_init_method_metadata(&"Version");
    DAT_05704812 = '\x01';
  }
  local_44 = 0;
  pUVar2 = (__this->fields)._multiplayerStatusLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x58), lVar10 == 0)) goto LAB_040f41a8;
    if (*(char *)(lVar10 + 0x11) == '\0') {
      pUVar3 = (__this->fields)._multiplayerMapPopup;
      pSVar7 = "";
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
        if (DAT_057047e9 != '\0') goto LAB_040f3d90;
LAB_040f3faf:
        il2cpp_init_method_metadata(&TypeInfo_UIManager);
        DAT_057047e9 = '\x01';
        iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      else {
        if (DAT_057047e9 == '\0') goto LAB_040f3faf;
LAB_040f3d90:
        iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      local_44 = *(int32_t *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x68);
      pSVar7 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat("FPS:",pSVar7,"\n",(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._multiplayerMapPopup;
    }
    if (pUVar3 == (UI_BasePopup_o *)0x0) goto LAB_040f41a8;
    if ((char)(pUVar3->fields).IsActive == '\0') {
      pUVar3 = (__this->fields)._multiplayerRoomListPopup;
      if (pUVar3 == (UI_BasePopup_o *)0x0) goto LAB_040f41a8;
      if ((char)(pUVar3->fields).IsActive != '\0') goto LAB_040f3e11;
      pUVar3 = (__this->fields)._createGamePopup;
      if (pUVar3 == (UI_BasePopup_o *)0x0) goto LAB_040f41a8;
      if ((char)(pUVar3->fields).IsActive != '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
        if ((char)bVar6 != '\0') goto LAB_040f3e11;
      }
    }
    else {
LAB_040f3e11:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      local_30 = Photon_Pun_PhotonNetwork__get_NetworkClientState((MethodInfo *)0x0);
      local_40.klass = TypeInfo_ClientState;
      local_40.monitor = (void *)0xffffffffffffffff;
      pSVar8 = System_Enum__ToString(&local_40,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat(pSVar7,pSVar8,(MethodInfo *)0x0);
      bVar6 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_040f3ee1;
LAB_040f3e81:
        bVar6 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
        cVar5 = (char)bVar6;
      }
      else {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
        }
        local_44 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
        pSVar8 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat(pSVar7," Ping:",pSVar8,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_040f3e81;
LAB_040f3ee1:
        il2cpp_init_class();
        bVar6 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
        cVar5 = (char)bVar6;
      }
      if (cVar5 != '\0') {
        pSVar7 = System_String__Concat(pSVar7,"\n",(MethodInfo *)0x0);
        lVar10 = **(long **)(TypeInfo_SettingsManager + 0xb8);
        if (lVar10 == 0) goto LAB_040f41a8;
        if ((ulong)(long)*(int *)(lVar10 + 0x68) < 3) {
          pSVar7 = System_String__Concat
                             (pSVar7,*(System_String_o **)
                                      (&PTR_DAT_051af8e0)[*(int *)(lVar10 + 0x68)],(MethodInfo *)0x0
                             );
        }
        pSVar7 = System_String__Concat(pSVar7," | ",(MethodInfo *)0x0);
        if (*(long *)(lVar10 + 0x20) == 0) goto LAB_040f41a8;
        iVar1 = *(int *)(*(long *)(lVar10 + 0x20) + 0x14);
        if (iVar1 == 1) {
          puVar9 = &"Custom lobby";
        }
        else {
          if (iVar1 != 0) goto LAB_040f3ff6;
          puVar9 = &"Public lobby";
        }
        pSVar7 = System_String__Concat(pSVar7,(System_String_o *)*puVar9,(MethodInfo *)0x0);
      }
    }
LAB_040f3ff6:
    pUVar2 = (__this->fields)._multiplayerStatusLabel;
    if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto LAB_040f41a8;
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,pSVar7,(pUVar2->klass->vtable)._75_set_text.method);
  }
  if (*(char *)(*(long *)(TypeInfo_MainMenu + 0xb8) + 8) == '\0') {
    if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
      il2cpp_init_class();
      lVar10 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
      iVar1 = *(int *)(lVar10 + 0x18);
      lVar4 = TypeInfo_PastebinLoader;
    }
    else {
      lVar10 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
      iVar1 = *(int *)(lVar10 + 0x18);
      lVar4 = TypeInfo_PastebinLoader;
    }
    TypeInfo_PastebinLoader = lVar4;
    if (iVar1 == 1) {
      *(undefined1 *)(*(long *)(TypeInfo_MainMenu + 0xb8) + 8) = 1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        il2cpp_init_class();
        lVar10 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
      }
      plVar11 = *(long **)(lVar10 + 0x10);
      if ((plVar11 == (long *)0x0) ||
         (plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                      (plVar11,"Version",*(undefined8 *)(*plVar11 + 0x1b0)),
         plVar11 == (long *)0x0)) goto LAB_040f41a8;
      pSVar7 = (System_String_o *)
               (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
      bVar6 = System_String__op_Inequality(pSVar7,"7.03.2026",(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        __this_00 = (UI_MessagePopup_o *)(__this->fields)._outdatedPopup;
        if (__this_00 == (UI_MessagePopup_o *)0x0) goto LAB_040f41a8;
        UI_MessagePopup__Show(__this_00,"Your game version is outdated. \nIf using the launcher, try restarting and repairing.\nFor standalone, download the latest version from https://aottg2.itch.i...",1,(MethodInfo *)0x0);
      }
    }
  }
  bVar6 = UnityEngine_Input__GetKeyDown(0x6d,(MethodInfo *)0x0);
  if (((char)bVar6 != '\0') &&
     (bVar6 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0), (char)bVar6 != '\0')) {
    pUVar3 = (__this->fields)._modLoginPopup;
    if (pUVar3 == (UI_BasePopup_o *)0x0) {
LAB_040f41a8:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
  }
  return;
}


// UI.MainMenu$$IsPopupActive
// il2cpp: bool UI_MainMenu__IsPopupActive (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f41b0

bool_conflict UI_MainMenu__IsPopupActive(UI_MainMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  undefined8 extraout_RAX;
  byte bVar2;
  int iVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  Il2CppObject *pIVar6;
  
  if (DAT_05704813 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
    DAT_05704813 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = pIVar6;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
    if ((char)bVar1 == '\0') {
      iVar3 = 5;
      bVar2 = 0;
      goto LAB_040f4263;
    }
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  } while (*(char *)&pIVar6[9].klass == '\0');
  bVar2 = 1;
  iVar3 = 4;
LAB_040f4263:
  __this_02.fields._8_8_ = pIVar5;
  __this_02.fields._list = pSVar4;
  __this_02.fields._current = pIVar6;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
  return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),iVar3 == 4 & bVar2);
}


// UI.MainMenu$$OnIntroButtonClick
// il2cpp: void UI_MainMenu__OnIntroButtonClick (UI_MainMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40f29f0

void UI_MainMenu__OnIntroButtonClick(UI_MainMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_ExternalLinkPopup_o *__this_00;
  UI_CreateGamePopup_o *__this_01;
  bool_conflict bVar2;
  uint32_t uVar3;
  MethodInfo *method_00;
  UI_BasePopup_o *pUVar4;
  
  method_00 = (MethodInfo *)name;
  if (DAT_05704814 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_CreateGamePopup);
    il2cpp_init_method_metadata(&"TutorialButton");
    il2cpp_init_method_metadata(&"https://www.patreon.com/aottg2");
    il2cpp_init_method_metadata(&"QuestButton");
    il2cpp_init_method_metadata(&"HelpButton");
    il2cpp_init_method_metadata(&"LeaderboardButton");
    il2cpp_init_method_metadata(&"ToolsButton");
    il2cpp_init_method_metadata(&"PatreonButton");
    il2cpp_init_method_metadata(&"CreditsButton");
    il2cpp_init_method_metadata(&"ProfileButton");
    il2cpp_init_method_metadata(&"SettingsButton");
    il2cpp_init_method_metadata(&"MultiplayerButton");
    il2cpp_init_method_metadata(&"QuitButton");
    il2cpp_init_method_metadata(&"SingleplayerButton");
    il2cpp_init_method_metadata(&"SocialButton");
    DAT_05704814 = '\x01';
  }
  bVar2 = UI_MainMenu__IsPopupActive(__this,method_00);
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  if (((char)bVar2 != '\0') &&
     (bVar2 = System_String__op_Equality((__this->fields)._lastButtonClicked,name,(MethodInfo *)0x0)
     , (char)bVar2 != '\0')) {
    return;
  }
  (__this->fields)._lastButtonClicked = name;
  il2cpp_runtime_glue(&(__this->fields)._lastButtonClicked);
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x400b50bd) {
    if (uVar3 < 0x16c989b9) {
      if (uVar3 == 0xf995a3a) {
        bVar2 = System_String__op_Equality(name,"SocialButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        pUVar4 = (__this->fields)._socialPopup;
      }
      else if (uVar3 == 0x102e9109) {
        bVar2 = System_String__op_Equality(name,"QuestButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        pUVar4 = (__this->fields)._questPopup;
      }
      else {
        if (uVar3 != 0x16c989b8) {
          return;
        }
        bVar2 = System_String__op_Equality(name,"ToolsButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        pUVar4 = (__this->fields)._toolsPopup;
      }
    }
    else {
      if (uVar3 == 0x2e76c0d0) {
        bVar2 = System_String__op_Equality(name,"SingleplayerButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        __this_01 = (UI_CreateGamePopup_o *)(__this->fields)._createGamePopup;
        if (__this_01 != (UI_CreateGamePopup_o *)0x0) {
          bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
          if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
            UI_CreateGamePopup__Show(__this_01,0,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        goto LAB_040f2eb1;
      }
      if (uVar3 == 0x2f231a13) {
        bVar2 = System_String__op_Equality(name,"MultiplayerButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        pUVar4 = (__this->fields)._multiplayerMapPopup;
        if (pUVar4 == (UI_BasePopup_o *)0x0) goto LAB_040f2eb1;
        goto LAB_040f2e99;
      }
      if (uVar3 != 0x400b50bc) {
        return;
      }
      bVar2 = System_String__op_Equality(name,"SettingsButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._settingsPopup;
    }
  }
  else if (uVar3 < 0x897f23a9) {
    if (uVar3 == 0x897f23a8) {
      bVar2 = System_String__op_Equality(name,"LeaderboardButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._leaderboardPopup;
    }
    else {
      if (uVar3 == 0x435494ca) {
        bVar2 = System_String__op_Equality(name,"PatreonButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        __this_00 = (__this->fields).ExternalLinkPopup;
        if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
          UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
          return;
        }
        goto LAB_040f2eb1;
      }
      if (uVar3 != 0x4d49ad7f) {
        return;
      }
      bVar2 = System_String__op_Equality(name,"TutorialButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._tutorialPopup;
    }
  }
  else {
    if (uVar3 < 0xf4ca4aa2) {
      if (uVar3 == 0xe45fe9d6) {
        bVar2 = System_String__op_Equality(name,"QuitButton",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Application__Quit((MethodInfo *)0x0);
        return;
      }
      if (uVar3 != 0xf4ca4aa1) {
        return;
      }
      bVar2 = System_String__op_Equality(name,"CreditsButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar3 == 0xfadab5e2) {
      bVar2 = System_String__op_Equality(name,"HelpButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._aboutPopup;
    }
    else {
      if (uVar3 != 0xff10090e) {
        return;
      }
      bVar2 = System_String__op_Equality(name,"ProfileButton",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pUVar4 = (__this->fields)._editProfilePopup;
    }
  }
  if (pUVar4 != (UI_BasePopup_o *)0x0) {
LAB_040f2e99:
    (*(pUVar4->klass->vtable)._21_Show.methodPtr)(pUVar4,(pUVar4->klass->vtable)._21_Show.method);
    return;
  }
LAB_040f2eb1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainMenu$$GisketchThemePath
// il2cpp: System_String_o* UI_MainMenu__GisketchThemePath (const MethodInfo* method);
// 0x40f3ac0

System_String_o * UI_MainMenu__GisketchThemePath(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  
  if (DAT_05704815 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Light");
    il2cpp_init_method_metadata(&"UI/Themes/Aottg2Dark");
    il2cpp_init_method_metadata(&"UI/Themes/Aottg2Light");
    DAT_05704815 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    bVar2 = System_String__op_Equality
                      (*(System_String_o **)(lVar1 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return "UI/Themes/Aottg2Light";
    }
    return "UI/Themes/Aottg2Dark";
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainMenu$$OnDestroy
// il2cpp: void UI_MainMenu__OnDestroy (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f4310

void UI_MainMenu__OnDestroy(UI_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05704816 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704816 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._gisketchHost;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._gisketchHost;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MainMenu$$.ctor
// il2cpp: void UI_MainMenu___ctor (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x40f4390

void UI_MainMenu___ctor(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


