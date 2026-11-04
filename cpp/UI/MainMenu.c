// Type: UI.MainMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MainMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainMenu.cs
// --------------------------------

// UI.MainMenu.<WaitAndChangeBackground>d__30$$.ctor
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__30___ctor (UI_MainMenu__WaitAndChangeBackground_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_MainMenu__WaitAndChangeBackground_d__30___ctor(UI_MainMenu__WaitAndChangeBackground_d__30_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MainMenu.<WaitAndChangeBackground>d__30$$System.IDisposable.Dispose
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__30__System_IDisposable_Dispose (UI_MainMenu__WaitAndChangeBackground_d__30_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_MainMenu__WaitAndChangeBackground_d__30__System_IDisposable_Dispose(UI_MainMenu__WaitAndChangeBackground_d__30_o* __this, MethodInfo* method)

{
  return;
}


// UI.MainMenu.<WaitAndChangeBackground>d__30$$MoveNext
// il2cpp: bool UI_MainMenu__WaitAndChangeBackground_d__30__MoveNext (UI_MainMenu__WaitAndChangeBackground_d__30_o* __this, const MethodInfo* method);
// 0x18229d390

bool UI_MainMenu__WaitAndChangeBackground_d__30__MoveNext
               (UI_MainMenu__WaitAndChangeBackground_d__30_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MainMenu_o *pUVar2;
  UI_MainBackgroundMenu_o *__this_00;
  UI_LoadingBackgroundPanel_o *__this_01;
  UI_MainMenuBackgroundPanel_o *pUVar3;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_02;
  UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *routine;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_03;
  
  if (Il2CppMethodInitialized_184347440 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184347440 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
label_18229d4b1:
    __this_03 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_03,20.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_03;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_03);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 != 1) {
    return false;
  }
  pUVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (((pUVar2 != (UI_MainMenu_o *)0x0) &&
      (__this_00 = (pUVar2->fields)._backgroundMenu, __this_00 != (UI_MainBackgroundMenu_o *)0x0)) &&
     (__this_01 = (UI_LoadingBackgroundPanel_o *)(__this_00->fields)._mainBackgroundPanelFront,
     __this_01 != (UI_LoadingBackgroundPanel_o *)0x0)) {
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_01,false,false,(MethodInfo *)0x0);
    pUVar3 = (__this_00->fields)._mainBackgroundPanelFront;
    if (pUVar3 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
      if (Il2CppMethodInitialized_184347436 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
        Il2CppMethodInitialized_184347436 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this_00;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this_00);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
      __this_02 = (pUVar2->fields)._tipPanel;
      if (__this_02 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
                  (__this_02,true,(MethodInfo *)0x0);
      }
      goto label_18229d4b1;
    }
  }
  ThrowNullReferenceException();
}


// UI.MainMenu.<WaitAndChangeBackground>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MainMenu__WaitAndChangeBackground_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MainMenu__WaitAndChangeBackground_d__30_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_MainMenu__WaitAndChangeBackground_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_MainMenu__WaitAndChangeBackground_d__30_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MainMenu.<WaitAndChangeBackground>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__30__System_Collections_IEnumerator_Reset (UI_MainMenu__WaitAndChangeBackground_d__30_o* __this, const MethodInfo* method);
// 0x18229d510

void UI_MainMenu__WaitAndChangeBackground_d__30__System_Collections_IEnumerator_Reset
               (UI_MainMenu__WaitAndChangeBackground_d__30_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_MainMenu_WaitAndChangeBackground_d__30_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.MainMenu.<WaitAndChangeBackground>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MainMenu__WaitAndChangeBackground_d__30__System_Collections_IEnumerator_get_Current (UI_MainMenu__WaitAndChangeBackground_d__30_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_MainMenu__WaitAndChangeBackground_d__30__System_Collections_IEnumerator_get_Current(UI_MainMenu__WaitAndChangeBackground_d__30_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MainMenu$$Setup
// il2cpp: void UI_MainMenu__Setup (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228f380

void UI_MainMenu__Setup(UI_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  UI_MainBackgroundMenu_o *pUVar4;
  UI_MainMenu__WaitAndChangeBackground_d__30_o *routine;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *value;
  
  if (Il2CppMethodInitialized_184347438 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackgroundInfo");
    Il2CppMethodInitialized_184347438 = '\x01';
  }
  UI_BaseMenu__Setup((System_Net_TimerThread_Timer_o *)__this,(MethodInfo *)0x0);
  pSVar3 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar2 = ApplicationManagers_ResourceManager__LoadText(pSVar2,"MainBackgroundInfo",(MethodInfo *)0x0);
    pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
    TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo = pSVar3;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo,pSVar3);
  }
  if (Il2CppMethodInitialized_184347439 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateMenu_MainBackgroundMenu);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/BackgroundMenu");
    Il2CppMethodInitialized_184347439 = '\x01';
  }
  pUVar4 = UI_ElementFactory__CreateMenu_object_
                     ("Prefabs/Panels/BackgroundMenu",
                      (MethodInfo_6ABB40 *)MethodInfo_UI_ElementFactory_CreateMenu_MainBackgroundMenu);
  (__this->fields)._backgroundMenu = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundMenu,pUVar4);
  pUVar4 = (__this->fields)._backgroundMenu;
  if (pUVar4 != (UI_MainBackgroundMenu_o *)0x0) {
    (*(pUVar4->klass->vtable)._4_Setup.methodPtr)(pUVar4,(pUVar4->klass->vtable)._4_Setup.method);
    if (Il2CppMethodInitialized_18434743c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu_WaitAndChangeBackground_d__30);
      Il2CppMethodInitialized_18434743c = '\x01';
    }
    routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MainMenu_WaitAndChangeBackground_d__30);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMainMenu((MethodInfo *)0x0);
    (__this->fields)._tipPanel = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tipPanel,value);
    UI_MainMenu__SetupLabels(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MainMenu$$SetupMainBackground
// il2cpp: void UI_MainMenu__SetupMainBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228e750

void UI_MainMenu__SetupMainBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_MainBackgroundMenu_o *pUVar1;
  UI_MainMenu__WaitAndChangeBackground_d__30_o *routine;
  
  if (Il2CppMethodInitialized_184347439 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateMenu_MainBackgroundMenu);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/BackgroundMenu");
    Il2CppMethodInitialized_184347439 = '\x01';
  }
  pUVar1 = UI_ElementFactory__CreateMenu_object_
                     ("Prefabs/Panels/BackgroundMenu",
                      (MethodInfo_6ABB40 *)MethodInfo_UI_ElementFactory_CreateMenu_MainBackgroundMenu);
  (__this->fields)._backgroundMenu = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundMenu,pUVar1);
  pUVar1 = (__this->fields)._backgroundMenu;
  if (pUVar1 != (UI_MainBackgroundMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._4_Setup.methodPtr)(pUVar1,(pUVar1->klass->vtable)._4_Setup.method);
    if (Il2CppMethodInitialized_18434743c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu_WaitAndChangeBackground_d__30);
      Il2CppMethodInitialized_18434743c = '\x01';
    }
    routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MainMenu_WaitAndChangeBackground_d__30);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MainMenu$$ShowMultiplayerRoomListPopup
// il2cpp: void UI_MainMenu__ShowMultiplayerRoomListPopup (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228f600

void UI_MainMenu__ShowMultiplayerRoomListPopup(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  pUVar1 = (__this->fields)._multiplayerRoomListPopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MainMenu$$ShowMultiplayerMapPopup
// il2cpp: void UI_MainMenu__ShowMultiplayerMapPopup (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228f5b0

void UI_MainMenu__ShowMultiplayerMapPopup(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  pUVar1 = (__this->fields)._multiplayerMapPopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MainMenu$$OpenIntroAction
// il2cpp: void UI_MainMenu__OpenIntroAction (UI_MainMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18228e450

void UI_MainMenu__OpenIntroAction(UI_MainMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_MainMenu__OnIntroButtonClick(__this,name,(MethodInfo *)0x0);
  return;
}


// UI.MainMenu$$ClosePopups
// il2cpp: void UI_MainMenu__ClosePopups (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x1821b9e00

void
UI_MainMenu__ClosePopups_21b9e00(UI_MainMenu_o* __this, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  
  pIVar1 = (*(__this->klass->vtable)._6_Eval.methodPtr)(__this,(__this->klass->vtable)._6_Eval.method);
  return pIVar1;
}


// UI.MainMenu$$SetupPopups
// il2cpp: void UI_MainMenu__SetupPopups (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228e840

void UI_MainMenu__SetupPopups(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UI_BasePopup_o *pUVar8;
  UI_EditProfilePopup_o *__this_00;
  UI_SettingsPopup_o *__this_01;
  UI_ToolsPopup_o *__this_02;
  UI_LeaderboardPopup_o *__this_03;
  UI_SocialPopup_o *__this_04;
  UI_AboutPopup_o *__this_05;
  UI_QuestPopup_o *__this_06;
  UI_TutorialPopup_o *__this_07;
  UI_AdvancedConfigurationPopup_o *__this_08;
  UI_OutdatedPopup_o *pUVar9;
  UI_DuelPopup_o *pUVar10;
  UI_ModLoginPopup_o *__this_09;
  
  if (Il2CppMethodInitialized_18434743a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_DuelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_OutdatedPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_DuelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ModLoginPopup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_OutdatedPopup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateHeadedPanel_AboutPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_AdvancedConfigurationPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_EditProfilePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateHeadedPanel_QuestPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateHeadedPanel_SettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateHeadedPanel_SocialPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateHeadedPanel_ToolsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateHeadedPanel_TutorialPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_MultiplayerMapPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_MultiplayerRoomListPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/MultiplayerRoomListPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/MultiplayerMapPopup");
    Il2CppMethodInitialized_18434743a = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                     (pUVar6,"Prefabs/MainMenu/MultiplayerMapPopup",false,
                      (MethodInfo_6ABD60 *)
                      MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_MultiplayerMapPopup);
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BasePopup);
    (__this->fields)._multiplayerMapPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._multiplayerMapPopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_00 = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar6,false,
                           (MethodInfo_6ABA40 *)
                           MethodInfo_UI_ElementFactory_CreateHeadedPanel_EditProfilePopup);
    if (__this_00 == (UI_EditProfilePopup_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._editProfilePopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._editProfilePopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_01 = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar6,false,
                           (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_SettingsPopup);
    if (__this_01 == (UI_SettingsPopup_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_01,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._settingsPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._settingsPopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_02 = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar6,false,
                           (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_ToolsPopup);
    if (__this_02 == (UI_ToolsPopup_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_02,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._toolsPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._toolsPopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                       (pUVar6,"Prefabs/MainMenu/MultiplayerRoomListPopup",false,
                        (MethodInfo_6ABD60 *)
                        MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_MultiplayerRoomListPopup);
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BasePopup);
    (__this->fields)._multiplayerRoomListPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._multiplayerRoomListPopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_03 = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar6,false,
                           (MethodInfo_6ABA40 *)
                           MethodInfo_UI_ElementFactory_CreateHeadedPanel_LeaderboardPopup);
    if (__this_03 == (UI_LeaderboardPopup_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_03,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._leaderboardPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._leaderboardPopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_04 = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar6,false,
                           (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_SocialPopup);
    if (__this_04 == (UI_SocialPopup_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_04,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._socialPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._socialPopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_05 = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar6,false,
                           (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_AboutPopup);
    if (__this_05 == (UI_AboutPopup_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_05,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._aboutPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._aboutPopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_06 = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar6,false,
                           (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_QuestPopup);
    if (__this_06 == (UI_QuestPopup_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_06,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._questPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._questPopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_07 = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar6,false,
                           (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_TutorialPopup);
    if (__this_07 == (UI_TutorialPopup_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_07,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._tutorialPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tutorialPopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_08 = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar6,false,
                           (MethodInfo_6ABA40 *)
                           MethodInfo_UI_ElementFactory_CreateHeadedPanel_AdvancedConfigurationPopup);
    if (__this_08 == (UI_AdvancedConfigurationPopup_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_08,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._advancedConfigurationPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._advancedConfigurationPopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar6,false,
                        (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_OutdatedPopup);
    if (pUVar9 == (UI_OutdatedPopup_o *)0x0) goto label_18228f371;
    pUVar9 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar9,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_OutdatedPopup);
    (__this->fields)._outdatedPopup = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._outdatedPopup,pUVar9);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar10 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_DuelPopup);
    if (pUVar10 == (UI_DuelPopup_o *)0x0) goto label_18228f371;
    pUVar10 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar10,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_DuelPopup);
    (__this->fields)._duelPopup = (UI_BasePopup_o *)pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._duelPopup,pUVar10);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_09 = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar6,false,
                           (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_ModLoginPopup)
    ;
    if (__this_09 == (UI_ModLoginPopup_o *)0x0) goto label_18228f371;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_09,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._modLoginPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._modLoginPopup,pUVar8);
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._multiplayerMapPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._editProfilePopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._settingsPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._toolsPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._multiplayerRoomListPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._leaderboardPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._socialPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._aboutPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._questPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._tutorialPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._advancedConfigurationPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar9 = (__this->fields)._outdatedPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18228f371;
    pUVar8 = (__this->fields)._duelPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18228f371;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18228f377;
      pUVar4->m_Items[(int)uVar2] = pUVar8;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar8 = (__this->fields)._modLoginPopup;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UI_BasePopup_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pUVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pUVar4->max_length) {
          pUVar4->m_Items[(int)uVar2] = pUVar8;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
          return;
        }
label_18228f377:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_18228f371:
  ThrowNullReferenceException();
}


// UI.MainMenu$$SetupIntroPanel
// il2cpp: void UI_MainMenu__SetupIntroPanel (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228e460

void UI_MainMenu__SetupIntroPanel(UI_MainMenu_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *value;
  
  value = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMainMenu((MethodInfo *)0x0);
  (__this->fields)._tipPanel = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tipPanel,value);
  return;
}


// UI.MainMenu$$SetupLabels
// il2cpp: void UI_MainMenu__SetupLabels (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228e490

void UI_MainMenu__SetupLabels(UI_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  System_String_o *pSVar4;
  UnityEngine_Color_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_18434743b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG2 Version 10.31.2026.");
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG2 DEVELOPMENT VERSION");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434743b = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UI_ElementStyle->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ElementStyle);
  }
  pUVar2 = UI_ElementFactory__CreateDefaultLabel
                     (pUVar1,TypeInfo_UI_ElementStyle->static_fields->Default,
                      (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,3,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._multiplayerStatusLabel = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._multiplayerStatusLabel,pUVar3);
    pUVar3 = (__this->fields)._multiplayerStatusLabel;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar2,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._multiplayerStatusLabel;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        local_38[0].r = 0.0;
        local_38[0].g = 0.0;
        local_38[0].b = 0.0;
        local_38[0].a = 1.0;
        (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                  (pUVar3,(UnityEngine_Color_o *)local_38,(pUVar3->klass->vtable)._23_set_color.method);
        pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar2 = UI_ElementFactory__CreateDefaultLabel
                           (pUVar1,TypeInfo_UI_ElementStyle->static_fields->Default,
                            (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,4,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
          ;
          if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar2,7,7,(UnityEngine_Vector2_o)0x41a0000000000000,(MethodInfo *)0x0);
            local_38[0].r = 1.0;
            local_38[0].g = 1.0;
            local_38[0].b = 1.0;
            local_38[0].a = 1.0;
            (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                      (pUVar3,(UnityEngine_Color_o *)local_38,(pUVar3->klass->vtable)._23_set_color.method);
            if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig)
              ;
            }
            pSVar4 = "AOTTG2 Version 10.31.2026.";
            if (TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode != false) {
              pSVar4 = "AOTTG2 DEVELOPMENT VERSION";
            }
            (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                      (pUVar3,pSVar4,(pUVar3->klass->vtable)._75_set_text.method);
            (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                      (pUVar3,"",(pUVar3->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MainMenu$$ChangeMainBackground
// il2cpp: void UI_MainMenu__ChangeMainBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228de00

void UI_MainMenu__ChangeMainBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_MainBackgroundMenu_o *__this_00;
  UI_LoadingBackgroundPanel_o *__this_01;
  UI_MainMenuBackgroundPanel_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_02;
  UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *routine;
  
  __this_00 = (__this->fields)._backgroundMenu;
  if ((__this_00 != (UI_MainBackgroundMenu_o *)0x0) &&
     (__this_01 = (UI_LoadingBackgroundPanel_o *)(__this_00->fields)._mainBackgroundPanelFront,
     __this_01 != (UI_LoadingBackgroundPanel_o *)0x0)) {
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_01,false,false,(MethodInfo *)0x0);
    pUVar1 = (__this_00->fields)._mainBackgroundPanelFront;
    if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      if (Il2CppMethodInitialized_184347436 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
        Il2CppMethodInitialized_184347436 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this_00;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this_00);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
      __this_02 = (__this->fields)._tipPanel;
      if (__this_02 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
                  (__this_02,true,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MainMenu$$WaitAndChangeBackground
// il2cpp: System_Collections_IEnumerator_o* UI_MainMenu__WaitAndChangeBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228fa70

System_Collections_IEnumerator_o *
UI_MainMenu__WaitAndChangeBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_MainMenu__WaitAndChangeBackground_d__30_o *__this_00;
  
  if (Il2CppMethodInitialized_18434743c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu_WaitAndChangeBackground_d__30);
    Il2CppMethodInitialized_18434743c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MainMenu_WaitAndChangeBackground_d__30);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MainMenu$$Update
// il2cpp: void UI_MainMenu__Update (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228f650
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228f832: mov rbx, qword ptr [rip + 0x1def6ef]  ; ""
// asm:   0x18228f97e: mov rdx, qword ptr [rip + 0x1e4aea3]  ; "LAN server"
// asm:   0x18228f985: jmp 0x18228f997
// asm:   0x18228f987: mov rdx, qword ptr [rip + 0x1e05122]  ; "Custom server"
// asm:   0x18228f98e: jmp 0x18228f997
// asm:   0x18228f990: mov rdx, qword ptr [rip + 0x1e52491]  ; "Public server"
// asm:   0x18228f9d3: mov rdx, qword ptr [rip + 0x1e0473e]  ; "Custom lobby"
// asm:   0x18228f9da: jmp 0x18228f9e3
// asm:   0x18228f9dc: mov rdx, qword ptr [rip + 0x1e52365]  ; "Public lobby"

void UI_MainMenu__Update(UI_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Settings_GraphicsSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  UI_BasePopup_o *pUVar4;
  Settings_MultiplayerSettings_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  bool bVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  int32_t local_res8 [2];
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_18434743d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_ClientState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom server");
    il2cpp_codegen_initialize_runtime_metadata(&" Ping:");
    il2cpp_codegen_initialize_runtime_metadata(&"Public server");
    il2cpp_codegen_initialize_runtime_metadata(&"LAN server");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom lobby");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS:");
    il2cpp_codegen_initialize_runtime_metadata(&" | ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Public lobby");
    Il2CppMethodInitialized_18434743d = '\x01';
  }
  pUVar1 = (__this->fields)._multiplayerStatusLabel;
  local_res8[0] = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar2 == (Settings_GraphicsSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).ShowFPS, pSVar3 == (Settings_BoolSetting_o *)0x0)) goto label_18228fa5c;
    pSVar8 = "";
    if ((pSVar3->fields)._value != false) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      if (Il2CppMethodInitialized_1843473f9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        Il2CppMethodInitialized_1843473f9 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      local_res8[0] = TypeInfo_UI_UIManager->static_fields->_lastFPS;
      pSVar8 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat_1969b70
                         ("FPS:",pSVar8,"\n",(MethodInfo *)0x0);
    }
    pUVar4 = (__this->fields)._multiplayerMapPopup;
    if (pUVar4 == (UI_BasePopup_o *)0x0) goto label_18228fa5c;
    if ((pUVar4->fields).IsActive == false) {
      pUVar4 = (__this->fields)._multiplayerRoomListPopup;
      if (pUVar4 == (UI_BasePopup_o *)0x0) goto label_18228fa5c;
      if ((pUVar4->fields).IsActive != false) goto label_18228f86f;
    }
    else {
label_18228f86f:
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      local_18 = Photon_Pun_PhotonNetwork__get_NetworkClientState((MethodInfo *)0x0);
      local_28.klass = (System_Enum_c *)TypeInfo_Photon_Realtime_ClientState;
      local_28.monitor = &g_data_ffffffffffffffff;
      pSVar9 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat_1969e50(pSVar8,pSVar9,(MethodInfo *)0x0);
      bVar7 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
      if (bVar7) {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        local_res8[0] = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
        pSVar9 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_1969b70(pSVar8," Ping:",pSVar9,(MethodInfo *)0x0);
      }
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar7 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
      if (bVar7) {
        pSVar8 = System_String__Concat_1969e50(pSVar8,"\n",(MethodInfo *)0x0);
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
        if (pSVar5 == (Settings_MultiplayerSettings_o *)0x0) goto label_18228fa5c;
        pSVar9 = "Public server";
        if ((((pSVar5->fields).CurrentMultiplayerServerType == 2) ||
            (pSVar9 = "Custom server", (pSVar5->fields).CurrentMultiplayerServerType == 1)) ||
           (pSVar9 = "LAN server", (pSVar5->fields).CurrentMultiplayerServerType == 0)) {
          pSVar8 = System_String__Concat_1969e50(pSVar8,pSVar9,(MethodInfo *)0x0);
        }
        pSVar8 = System_String__Concat_1969e50(pSVar8," | ",(MethodInfo *)0x0);
        pSVar6 = (pSVar5->fields).LobbyMode;
        if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_18228fa5c;
        pSVar9 = "Public lobby";
        if (((pSVar6->fields)._value == 0) || (pSVar9 = "Custom lobby", (pSVar6->fields)._value == 1))
        {
          pSVar8 = System_String__Concat_1969e50(pSVar8,pSVar9,(MethodInfo *)0x0);
        }
      }
    }
    pUVar1 = (__this->fields)._multiplayerStatusLabel;
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) goto label_18228fa5c;
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar8,(pUVar1->klass->vtable)._75_set_text.method);
  }
  bVar7 = UnityEngine_Input__GetKeyDown(0x6d,(MethodInfo *)0x0);
  if ((bVar7) && (bVar7 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0), bVar7)) {
    pUVar4 = (__this->fields)._modLoginPopup;
    if (pUVar4 == (UI_BasePopup_o *)0x0) {
label_18228fa5c:
      ThrowNullReferenceException();
    }
    (*(pUVar4->klass->vtable)._21_Show.methodPtr)(pUVar4,(pUVar4->klass->vtable)._21_Show.method);
  }
  return;
}


// UI.MainMenu$$IsPopupActive
// il2cpp: bool UI_MainMenu__IsPopupActive (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x18228def0
// eh: try 0x18228df90..0x18228e00f -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228df8f: nop 
// asm:   0x18228dfe0: mov rdx, qword ptr [rip + 0x1de7d11]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x18228dfe7: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18228dfec: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18228dff1: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18228dff6: test rcx, rcx
// asm:   0x18228dff9: jne 0x18228e00f
// asm:   0x18228e00f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool UI_MainMenu__IsPopupActive(UI_MainMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434743e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_18434743e = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
        return false;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      if (*(char *)&local_28.fields._current[9].klass != '\0') {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
        return true;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.MainMenu$$OnIntroButtonClick
// il2cpp: void UI_MainMenu__OnIntroButtonClick (UI_MainMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18228e020

void UI_MainMenu__OnIntroButtonClick(UI_MainMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_ExternalLinkPopup_o *__this_00;
  bool bVar1;
  uint32_t uVar2;
  UI_BasePopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434743f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"TutorialButton");
    il2cpp_codegen_initialize_runtime_metadata(&"https://www.patreon.com/aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"QuestButton");
    il2cpp_codegen_initialize_runtime_metadata(&"HelpButton");
    il2cpp_codegen_initialize_runtime_metadata(&"LeaderboardButton");
    il2cpp_codegen_initialize_runtime_metadata(&"ToolsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"PatreonButton");
    il2cpp_codegen_initialize_runtime_metadata(&"CreditsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"ProfileButton");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"QuitButton");
    il2cpp_codegen_initialize_runtime_metadata(&"SingleplayerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"SocialButton");
    Il2CppMethodInitialized_18434743f = '\x01';
  }
  bVar1 = UI_MainMenu__IsPopupActive(__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._6_HideAllPopups.method);
  if ((bVar1) &&
     (bVar1 = System_String__op_Equality((__this->fields)._lastButtonClicked,name,(MethodInfo *)0x0), bVar1))
  {
    return;
  }
  (__this->fields)._lastButtonClicked = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastButtonClicked,name);
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x400b50bd) {
    if (uVar2 < 0x16c989b9) {
      if (uVar2 == 0xf995a3a) {
        bVar1 = System_String__op_Equality(name,"SocialButton",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pUVar3 = (__this->fields)._socialPopup;
      }
      else if (uVar2 == 0x102e9109) {
        bVar1 = System_String__op_Equality(name,"QuestButton",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pUVar3 = (__this->fields)._questPopup;
      }
      else {
        if (uVar2 != 0x16c989b8) {
          return;
        }
        bVar1 = System_String__op_Equality(name,"ToolsButton",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pUVar3 = (__this->fields)._toolsPopup;
      }
    }
    else {
      if (uVar2 == 0x2e76c0d0) {
        bVar1 = System_String__op_Equality(name,"SingleplayerButton",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowGameCreate(false,false,(MethodInfo *)0x0);
        return;
      }
      if (uVar2 == 0x2f231a13) {
        bVar1 = System_String__op_Equality(name,"MultiplayerButton",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pUVar3 = (__this->fields)._multiplayerMapPopup;
      }
      else {
        if (uVar2 != 0x400b50bc) {
          return;
        }
        bVar1 = System_String__op_Equality(name,"SettingsButton",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pUVar3 = (__this->fields)._settingsPopup;
      }
    }
  }
  else if (uVar2 < 0x897f23a9) {
    if (uVar2 == 0x435494ca) {
      bVar1 = System_String__op_Equality(name,"PatreonButton",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      __this_00 = (__this->fields).ExternalLinkPopup;
      if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
        UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return;
      }
      goto label_18228e443;
    }
    if (uVar2 == 0x4d49ad7f) {
      bVar1 = System_String__op_Equality(name,"TutorialButton",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pUVar3 = (__this->fields)._tutorialPopup;
    }
    else {
      if (uVar2 != 0x897f23a8) {
        return;
      }
      bVar1 = System_String__op_Equality(name,"LeaderboardButton",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pUVar3 = (__this->fields)._leaderboardPopup;
    }
  }
  else {
    if (uVar2 < 0xf4ca4aa2) {
      if (uVar2 == 0xe45fe9d6) {
        bVar1 = System_String__op_Equality(name,"QuitButton",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        }
        UnityEngine_Application__Quit_2eba030((MethodInfo *)0x0);
        return;
      }
      if (uVar2 != 0xf4ca4aa1) {
        return;
      }
      bVar1 = System_String__op_Equality(name,"CreditsButton",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      ApplicationManagers_SceneLoader__LoadScene(7,(MethodInfo *)0x0);
      return;
    }
    if (uVar2 == 0xfadab5e2) {
      bVar1 = System_String__op_Equality(name,"HelpButton",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pUVar3 = (__this->fields)._aboutPopup;
    }
    else {
      if (uVar2 != 0xff10090e) {
        return;
      }
      bVar1 = System_String__op_Equality(name,"ProfileButton",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pUVar3 = (__this->fields)._editProfilePopup;
    }
  }
  if (pUVar3 != (UI_BasePopup_o *)0x0) {
    (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
    return;
  }
label_18228e443:
  ThrowNullReferenceException();
}


// UI.MainMenu$$.ctor
// il2cpp: void UI_MainMenu___ctor (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x1821da7e0

void
UI_MainMenu___ctor(UI_MainMenu_o* __this, MethodInfo* method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


