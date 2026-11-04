// Type: UI.InGameMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/InGameMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/InGameMenu.cs
// --------------------------------

// UI.InGameMenu.<>c$$.cctor
// il2cpp: void UI_InGameMenu___c___cctor (const MethodInfo* method);
// 0x18226de20

void UI_InGameMenu___c___cctor(MethodInfo *method)

{
  UI_InGameMenu___c_o *__this;
  
  if (Il2CppMethodInitialized_1843472a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_c);
    Il2CppMethodInitialized_1843472a4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_InGameMenu_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_InGameMenu_c->static_fields->__9,__this);
  return;
}


// UI.InGameMenu.<>c$$.ctor
// il2cpp: void UI_InGameMenu___c___ctor (UI_InGameMenu___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_InGameMenu___c___ctor(UI_InGameMenu___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__120_0
// il2cpp: bool UI_InGameMenu___c___GetPlayerListTeams_b__120_0 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x18226ca00

bool UI_InGameMenu___c___GetPlayerListTeams_b__120_0
               (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_1843472a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843472a5 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  a = PhotonExtensions__GetStringProperty
                (e,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                 (MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar1 = System_String__op_Equality(a,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__120_1
// il2cpp: bool UI_InGameMenu___c___GetPlayerListTeams_b__120_1 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x18226cac0

bool UI_InGameMenu___c___GetPlayerListTeams_b__120_1
               (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_1843472a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843472a6 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  a = PhotonExtensions__GetStringProperty
                (e,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                 (MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  bVar1 = System_String__op_Inequality
                    (a,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__120_2
// il2cpp: System_String_o* UI_InGameMenu___c___GetPlayerListTeams_b__120_2 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x18226cb80

System_String_o *
UI_InGameMenu___c___GetPlayerListTeams_b__120_2
          (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843472a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843472a7 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (e,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.InGameMenu.<WaitAndShowBlood>d__113$$.ctor
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__113___ctor (UI_InGameMenu__WaitAndShowBlood_d__113_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_InGameMenu__WaitAndShowBlood_d__113___ctor(UI_InGameMenu__WaitAndShowBlood_d__113_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.InGameMenu.<WaitAndShowBlood>d__113$$System.IDisposable.Dispose
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__113__System_IDisposable_Dispose (UI_InGameMenu__WaitAndShowBlood_d__113_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_InGameMenu__WaitAndShowBlood_d__113__System_IDisposable_Dispose(UI_InGameMenu__WaitAndShowBlood_d__113_o* __this, MethodInfo* method)

{
  return;
}


// UI.InGameMenu.<WaitAndShowBlood>d__113$$MoveNext
// il2cpp: bool UI_InGameMenu__WaitAndShowBlood_d__113__MoveNext (UI_InGameMenu__WaitAndShowBlood_d__113_o* __this, const MethodInfo* method);
// 0x18226e190

bool UI_InGameMenu__WaitAndShowBlood_d__113__MoveNext
               (UI_InGameMenu__WaitAndShowBlood_d__113_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_InGameMenu_o *pUVar2;
  UI_InGameBackgroundMenu_o *pUVar3;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_00;
  
  if (Il2CppMethodInitialized_1843472a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_1843472a8 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pUVar2 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((pUVar2 != (UI_InGameMenu_o *)0x0) &&
       (pUVar3 = (pUVar2->fields)._backgroundMenu, pUVar3 != (UI_InGameBackgroundMenu_o *)0x0)) {
      UI_InGameBackgroundMenu__ShowBlood(pUVar3,(MethodInfo *)0x0);
      __this_00 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_00,5.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
label_18226e269:
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((pUVar2 == (UI_InGameMenu_o *)0x0) ||
       (pUVar3 = (pUVar2->fields)._backgroundMenu, pUVar3 == (UI_InGameBackgroundMenu_o *)0x0))
    goto label_18226e269;
    UI_InGameBackgroundMenu__HideBlood(pUVar3,(MethodInfo *)0x0);
    (pUVar2->fields)._showingBlood = false;
  }
  return false;
}


// UI.InGameMenu.<WaitAndShowBlood>d__113$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_InGameMenu__WaitAndShowBlood_d__113__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_InGameMenu__WaitAndShowBlood_d__113_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_InGameMenu__WaitAndShowBlood_d__113__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_InGameMenu__WaitAndShowBlood_d__113_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.InGameMenu.<WaitAndShowBlood>d__113$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__113__System_Collections_IEnumerator_Reset (UI_InGameMenu__WaitAndShowBlood_d__113_o* __this, const MethodInfo* method);
// 0x18226e270

void UI_InGameMenu__WaitAndShowBlood_d__113__System_Collections_IEnumerator_Reset
               (UI_InGameMenu__WaitAndShowBlood_d__113_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_InGameMenu_WaitAndShowBlood_d__113_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.InGameMenu.<WaitAndShowBlood>d__113$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_InGameMenu__WaitAndShowBlood_d__113__System_Collections_IEnumerator_get_Current (UI_InGameMenu__WaitAndShowBlood_d__113_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_InGameMenu__WaitAndShowBlood_d__113__System_Collections_IEnumerator_get_Current(UI_InGameMenu__WaitAndShowBlood_d__113_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.InGameMenu$$get_RootVisualElement
// il2cpp: UnityEngine_UIElements_VisualElement_o* UI_InGameMenu__get_RootVisualElement (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182253ee0

UnityEngine_UIElements_VisualElement_o *
UI_InGameMenu__get_RootVisualElement(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_UIDocument_o *__this_00;
  UnityEngine_UIElements_VisualElement_o *pUVar1;
  
  __this_00 = (__this->fields)._uiDocument;
  if (__this_00 != (UnityEngine_UIElements_UIDocument_o *)0x0) {
    pUVar1 = (UnityEngine_UIElements_VisualElement_o *)
             UnityEngine_AdaptivePerformance_AdaptivePerformanceScalerSettings__get_AdaptiveShadowQuality
                       ((UnityEngine_AdaptivePerformance_AdaptivePerformanceScalerSettings_o *)__this_00,
                        (MethodInfo *)0x0);
    return pUVar1;
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$Setup
// il2cpp: void UI_InGameMenu__Setup (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182251460

void UI_InGameMenu__Setup(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *value;
  UI_InGameBackgroundMenu_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UI_GlobalPauseGamePopup_o *value_00;
  UnityEngine_GameObject_o *pUVar3;
  UI_TopLeftHUD_o *pUVar4;
  UI_EmoteHandler_o *value_01;
  UI_ItemHandler_o *value_02;
  UI_ActionHandler_o *value_03;
  UI_HUDBottomHandler_o *value_04;
  UI_CharacterInfoHandler_o *value_05;
  UI_StylebarHandler_o *value_06;
  UI_SongPopup_o *value_07;
  UI_SnapshotPopup_o *value_08;
  UnityEngine_UIElements_UIDocument_o *value_09;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184347277 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_UIDocument);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_SongPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CharacterInfoHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CrosshairHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EmoteHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HUDBottomHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ItemHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_StylebarHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/NapeLockImage");
    Il2CppMethodInitialized_184347277 = '\x01';
  }
  UI_BaseMenu__Setup((System_Net_TimerThread_Timer_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347286 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_GlobalPauseGamePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateMenu_InGameBackgroundMenu);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/BackgroundMenu");
    Il2CppMethodInitialized_184347286 = '\x01';
  }
  pUVar1 = UI_ElementFactory__CreateMenu_object_
                     ("Prefabs/Panels/BackgroundMenu",
                      (MethodInfo_6ABB40 *)MethodInfo_UI_ElementFactory_CreateMenu_InGameBackgroundMenu);
  (__this->fields)._backgroundMenu = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundMenu,pUVar1);
  pUVar1 = (__this->fields)._backgroundMenu;
  if (pUVar1 != (UI_InGameBackgroundMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._4_Setup.methodPtr)(pUVar1,(pUVar1->klass->vtable)._4_Setup.method);
    pUVar1 = (__this->fields)._backgroundMenu;
    if (pUVar1 != (UI_InGameBackgroundMenu_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsFirstSibling(pUVar2,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        value_00 = UI_ElementFactory__CreateHeadedPanel_object_
                             (pUVar2,false,
                              (MethodInfo_6ABA40 *)
                              MethodInfo_UI_ElementFactory_CreateDefaultPopup_GlobalPauseGamePopup);
        (__this->fields)._globalPauseGamePopup = value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._globalPauseGamePopup,value_00);
        if (Il2CppMethodInitialized_184347279 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_TopLeftHUD);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD);
          il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/TopLeftHUD");
          Il2CppMethodInitialized_184347279 = '\x01';
        }
        pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar3 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                           (pUVar2,"Prefabs/InGame/TopLeftHUD",false,
                            (MethodInfo_6ABD60 *)
                            MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_TopLeftHUD);
        UI_ElementFactory__SetAnchor(pUVar3,0,0,(UnityEngine_Vector2_o)0xc100000041200000,(MethodInfo *)0x0);
        (__this->fields).TopLeftHud = pUVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields).TopLeftHud,pUVar3);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar3,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD);
          if (pUVar4 != (UI_TopLeftHUD_o *)0x0) {
            value = (pUVar4->fields).kdrAndLabel;
            (__this->fields).KDRReference = value;
            Il2CppCodeGenWriteBarrier(&(__this->fields).KDRReference,value);
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            UI_InGameMenu__SetupLabels(__this,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              value_01 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar3,(MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_EmoteHandler);
              (__this->fields).EmoteHandler = value_01;
              Il2CppCodeGenWriteBarrier(&(__this->fields).EmoteHandler,value_01);
              pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                value_02 = UnityEngine_GameObject__AddComponent_object_
                                     (pUVar3,(MethodInfo_6F4D60 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_ItemHandler);
                (__this->fields).ItemHandler = value_02;
                Il2CppCodeGenWriteBarrier(&(__this->fields).ItemHandler,value_02);
                pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                  value_03 = UnityEngine_GameObject__AddComponent_object_
                                       (pUVar3,(MethodInfo_6F4D60 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_ActionHandler);
                  (__this->fields).ActionHandler = value_03;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).ActionHandler,value_03);
                  pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    value_04 = UnityEngine_GameObject__AddComponent_object_
                                         (pUVar3,(MethodInfo_6F4D60 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_HUDBottomHandler
                                         );
                    (__this->fields).HUDBottomHandler = value_04;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).HUDBottomHandler,value_04);
                    pUVar3 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                      value_05 = UnityEngine_GameObject__AddComponent_object_
                                           (pUVar3,(MethodInfo_6F4D60 *)
                                                   MethodInfo_UnityEngine_GameObject_AddComponent_CharacterInfoHandler
                                           );
                      (__this->fields).CharacterInfoHandler = value_05;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).CharacterInfoHandler,value_05);
                      pUVar3 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                        value_06 = UnityEngine_GameObject__AddComponent_object_
                                             (pUVar3,(MethodInfo_6F4D60 *)
                                                     MethodInfo_UnityEngine_GameObject_AddComponent_StylebarHandler
                                             );
                        (__this->fields).StylebarHandler = value_06;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).StylebarHandler,value_06);
                        pUVar3 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__AddComponent_object_
                                    (pUVar3,(MethodInfo_6F4D60 *)
                                            MethodInfo_UnityEngine_GameObject_AddComponent_CrosshairHandler);
                          pUVar2 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          pUVar3 = UI_ElementFactory__InstantiateAndBind
                                             (pUVar2,"Prefabs/InGame/NapeLockImage",(MethodInfo *)0x0);
                          (__this->fields).NapeLock = pUVar3;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).NapeLock,pUVar3);
                          pUVar3 = (__this->fields).NapeLock;
                          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                            UI_InGameMenu__SetupChat(__this,(MethodInfo *)0x0);
                            if (Il2CppMethodInitialized_184347280 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&MethodInfo_UnityEngine_GameObject_AddComponent_MinimapHandler);
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&MethodInfo_UnityEngine_GameObject_AddComponent_MinimapScaler);
                              il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Prefabs/MinimapPanel");
                              Il2CppMethodInitialized_184347280 = '\x01';
                            }
                            pUVar2 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                            pUVar3 = UI_ElementFactory__InstantiateAndBind
                                               (pUVar2,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
                            (__this->fields)._minimapPanel = pUVar3;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._minimapPanel,pUVar3);
                            UI_ElementFactory__SetAnchor
                                      ((__this->fields)._minimapPanel,2,2,
                                       (UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
                            pUVar3 = (__this->fields)._minimapPanel;
                            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__AddComponent_object_
                                        (pUVar3,(MethodInfo_6F4D60 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_MinimapScaler);
                              pUVar3 = (__this->fields)._minimapPanel;
                              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                                UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                                pUVar3 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                                  UnityEngine_GameObject__AddComponent_object_
                                            (pUVar3,(MethodInfo_6F4D60 *)
                                                    MethodInfo_UnityEngine_GameObject_AddComponent_MinimapHandler
                                            );
                                  pUVar2 = UnityEngine_Component__get_transform
                                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                  value_07 = UI_ElementFactory__CreateHeadedPanel_object_
                                                       (pUVar2,false,
                                                        (MethodInfo_6ABA40 *)
                                                                                                                
                                                       MethodInfo_UI_ElementFactory_CreateDefaultPopup_SongPopup
                                                       );
                                  (__this->fields)._songPopup = (UI_BasePopup_o *)value_07;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields)._songPopup,value_07);
                                  if (Il2CppMethodInitialized_184347281 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata
                                              (&
                                               MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_SnapshotPopup
                                              );
                                    il2cpp_codegen_initialize_runtime_metadata
                                              (&MethodInfo_UnityEngine_GameObject_GetComponent_SnapshotPopup);
                                    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Snapshot/SnapshotPopup");
                                    Il2CppMethodInitialized_184347281 = '\x01';
                                  }
                                  pUVar2 = UnityEngine_Component__get_transform
                                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                  pUVar3 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                                                     (pUVar2,"Prefabs/Snapshot/SnapshotPopup",false,
                                                      (MethodInfo_6ABD60 *)
                                                      MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_SnapshotPopup
                                                     );
                                  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                                    value_08 = UnityEngine_GameObject__GetComponent_object_
                                                         (pUVar3,(MethodInfo_6F5650 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_SnapshotPopup
                                                       );
                                    (__this->fields)._snapshotPopup = value_08;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields)._snapshotPopup,value_08);
                                    pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                                    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                      local_18.fields.x = 0.8;
                                      local_18.fields.y = 0.8;
                                      local_18.fields.z = 0.0;
                                      UnityEngine_Transform__set_localScale
                                                (pUVar2,&local_18,(MethodInfo *)0x0);
                                      UI_ElementFactory__SetAnchor
                                                (pUVar3,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,
                                                 (MethodInfo *)0x0);
                                      UI_InGameMenu__HideAllMenus
                                                (__this,(UI_BasePopup_o *)0x0,(MethodInfo *)0x0);
                                      value_09 = UnityEngine_Component__GetComponent_object_
                                                           ((UnityEngine_Component_o *)__this,
                                                            (MethodInfo_6651A0 *)
                                                                                                                        
                                                       MethodInfo_UnityEngine_Component_GetComponent_UIDocument
                                                       );
                                      (__this->fields)._uiDocument = value_09;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields)._uiDocument,value_09);
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
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ApplyUISettings
// il2cpp: void UI_InGameMenu__ApplyUISettings (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224c1a0

void UI_InGameMenu__ApplyUISettings(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UI_TopLeftHUD_o *__this_01;
  
  if (Il2CppMethodInitialized_184347278 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD);
    Il2CppMethodInitialized_184347278 = '\x01';
  }
  __this_00 = (__this->fields).TopLeftHud;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD);
    if (__this_01 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupTopLeftHud
// il2cpp: void UI_InGameMenu__SetupTopLeftHud (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182251360

void UI_InGameMenu__SetupTopLeftHud(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *value;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *obj;
  UI_TopLeftHUD_o *pUVar1;
  
  if (Il2CppMethodInitialized_184347279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_TopLeftHUD);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/TopLeftHUD");
    Il2CppMethodInitialized_184347279 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  obj = UI_ElementFactory__InstantiateAndSetupPanel_object_
                  (parent,"Prefabs/InGame/TopLeftHUD",false,
                   (MethodInfo_6ABD60 *)MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_TopLeftHUD);
  UI_ElementFactory__SetAnchor(obj,0,0,(UnityEngine_Vector2_o)0xc100000041200000,(MethodInfo *)0x0);
  (__this->fields).TopLeftHud = obj;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TopLeftHud,obj);
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (obj,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TopLeftHUD);
    if (pUVar1 != (UI_TopLeftHUD_o *)0x0) {
      value = (pUVar1->fields).kdrAndLabel;
      (__this->fields).KDRReference = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).KDRReference,value);
      UnityEngine_GameObject__SetActive(obj,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ToggleUI
// il2cpp: void UI_InGameMenu__ToggleUI (UI_InGameMenu_o* __this, bool toggle, const MethodInfo* method);
// 0x182252530

void UI_InGameMenu__ToggleUI(UI_InGameMenu_o *__this,bool toggle,MethodInfo *method)

{
  UnityEngine_Canvas_o *__this_00;
  
  if (Il2CppMethodInitialized_18434727a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    Il2CppMethodInitialized_18434727a = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,toggle,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$IsActive
// il2cpp: bool UI_InGameMenu__IsActive (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224eb90

bool UI_InGameMenu__IsActive(UI_InGameMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *__this_00;
  
  if (Il2CppMethodInitialized_18434727b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    Il2CppMethodInitialized_18434727b = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
    bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$CreateCustomPopup
// il2cpp: void UI_InGameMenu__CreateCustomPopup (UI_InGameMenu_o* __this, System_String_o* name, System_String_o* title, float width, float height, const MethodInfo* method);
// 0x18224c2b0

void UI_InGameMenu__CreateCustomPopup
               (UI_InGameMenu_o *__this,System_String_o *name,System_String_o *title,float width,float height,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UI_BasePopup_array *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *pMVar4;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_02;
  UI_CustomPopup_o *item;
  
  if (Il2CppMethodInitialized_18434727c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CustomPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_18434727c = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_02 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        (parent,title,width,height,false,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    item = UnityEngine_GameObject__GetComponent_object_
                     (__this_02,
                      (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_CustomPopup);
    pMVar4 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    __this_00 = (__this->fields)._popups;
    if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 != (UI_BasePopup_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pUVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)item;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
        if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_01,(Il2CppObject *)name,(Il2CppObject *)item,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_set_Item);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetCustomPopup
// il2cpp: UI_CustomPopup_o* UI_InGameMenu__GetCustomPopup (UI_InGameMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18224cc70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224ccff: jmp 0x18224ccc8

UI_CustomPopup_o *
UI_InGameMenu__GetCustomPopup(UI_InGameMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_CustomPopup_o *pUVar2;
  
  if (Il2CppMethodInitialized_18434727d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CustomPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Item);
    Il2CppMethodInitialized_18434727d = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = (UI_CustomPopup_o *)
           System_Collections_Generic_Dictionary_object__object___get_Item
                     (__this_00,(Il2CppObject *)name,
                      (MethodInfo_147A5B0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Item);
  if (pUVar2 != (UI_CustomPopup_o *)0x0) {
    bVar1 = (TypeInfo_UI_CustomPopup->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_CustomPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_CustomPopup);
    }
  }
  return pUVar2;
}


// UI.InGameMenu$$IsCustomPopupActive
// il2cpp: bool UI_InGameMenu__IsCustomPopupActive (UI_InGameMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18224ebe0

bool UI_InGameMenu__IsCustomPopupActive(UI_InGameMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BasePopup__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  UI_BasePopup_o *pUVar2;
  
  if (Il2CppMethodInitialized_18434727e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Item);
    Il2CppMethodInitialized_18434727e = '\x01';
  }
  __this_00 = (__this->fields)._customPopups;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__BasePopup__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)name
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_ContainsKey);
    if (!bVar1) {
      return false;
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_01,(Il2CppObject *)name,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Item);
      if (pUVar2 != (UI_BasePopup_o *)0x0) {
        return (pUVar2->fields).IsActive;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetAllCustomPopups
// il2cpp: System_Collections_Generic_List_string__o* UI_InGameMenu__GetAllCustomPopups (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224cc00

System_Collections_Generic_List_string__o *
UI_InGameMenu__GetAllCustomPopups(UI_InGameMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BasePopup__o *__this_00;
  System_Collections_Generic_IEnumerable_TKey__o *source;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434727f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    Il2CppMethodInitialized_18434727f = '\x01';
  }
  __this_00 = (__this->fields)._customPopups;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__BasePopup__o *)0x0) {
    source = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                        (MethodInfo_13C6500 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_get_Keys);
    pSVar1 = (System_Collections_Generic_List_string__o *)
             System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupMinimap
// il2cpp: void UI_InGameMenu__SetupMinimap (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182250c10

void UI_InGameMenu__SetupMinimap(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar1;
  
  if (Il2CppMethodInitialized_184347280 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MinimapHandler)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MinimapScaler);
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Prefabs/MinimapPanel");
    Il2CppMethodInitialized_184347280 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UI_ElementFactory__InstantiateAndBind(parent,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
  (__this->fields)._minimapPanel = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._minimapPanel,pUVar1);
  UI_ElementFactory__SetAnchor
            ((__this->fields)._minimapPanel,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._minimapPanel;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_
              (pUVar1,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_MinimapScaler);
    pUVar1 = (__this->fields)._minimapPanel;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_
                  (pUVar1,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_MinimapHandler);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupSnapshot
// il2cpp: void UI_InGameMenu__SetupSnapshot (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182251250

void UI_InGameMenu__SetupSnapshot(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_SnapshotPopup_o *value;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184347281 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_SnapshotPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Snapshot/SnapshotPopup");
    Il2CppMethodInitialized_184347281 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        (pUVar1,"Prefabs/Snapshot/SnapshotPopup",false,
                         (MethodInfo_6ABD60 *)
                         MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_SnapshotPopup);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__GetComponent_object_
                      (__this_00,
                       (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_SnapshotPopup);
    (__this->fields)._snapshotPopup = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._snapshotPopup,value);
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      local_18.fields.x = 0.8;
      local_18.fields.y = 0.8;
      local_18.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(pUVar1,&local_18,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(__this_00,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupChat
// il2cpp: void UI_InGameMenu__SetupChat (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182250000

void UI_InGameMenu__SetupChat(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UI_InGameLabel_o *pUVar3;
  UnityEngine_UI_Text_o *__this_00;
  TMPro_TextMeshProUGUI_o *__this_01;
  Settings_SoundSettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UI_FeedPanel_o *pUVar8;
  UI_VoiceChatPanel_o *pUVar9;
  UI_ChatPanel_o *pUVar10;
  
  if (Il2CppMethodInitialized_184347282 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_FeedPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_VoiceChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ChatPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FeedPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_VoiceChatPanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/VoiceChatPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/ChatPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/FeedPanel");
    Il2CppMethodInitialized_184347282 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).FeedConsole, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_182250332;
  if ((pSVar2->fields)._value != false) {
    pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).GameFeed;
    if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto label_182250332;
    if ((pSVar2->fields)._value != false) {
      pUVar3 = (__this->fields)._bottomRightLabel;
      if (pUVar3 == (UI_InGameLabel_o *)0x0) goto label_182250332;
      if ((pUVar3->fields)._legacy == false) {
        __this_01 = (pUVar3->fields)._tmpText;
        if (__this_01 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182250332;
        pUVar6 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)__this_01,(MethodInfo *)0x0);
      }
      else {
        __this_00 = (pUVar3->fields)._legacyText;
        if (__this_00 == (UnityEngine_UI_Text_o *)0x0) goto label_182250332;
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      }
      pUVar7 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                         (pUVar6,"Prefabs/InGame/FeedPanel",true,
                          (MethodInfo_6ABD60 *)MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_FeedPanel
                         );
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_182250332;
      pUVar8 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_FeedPanel
                         );
      (__this->fields).FeedPanel = pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields).FeedPanel,pUVar8);
      pUVar8 = (__this->fields).FeedPanel;
      if (pUVar8 == (UI_FeedPanel_o *)0x0) goto label_182250332;
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar7,2,2,(UnityEngine_Vector2_o)0xc248000000000000,(MethodInfo *)0x0);
    }
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar4 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).VoiceChatInput, pSVar5 == (Settings_IntSetting_o *)0x0)) goto label_182250332;
  if ((pSVar5->fields)._value != 2) {
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                       (pUVar6,"Prefabs/InGame/VoiceChatPanel",true,
                        (MethodInfo_6ABD60 *)
                        MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_VoiceChatPanel);
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_182250332;
    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar7,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_VoiceChatPanel);
    (__this->fields).VoiceChatPanel = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChatPanel,pUVar9);
    pUVar9 = (__this->fields).VoiceChatPanel;
    if (pUVar9 == (UI_VoiceChatPanel_o *)0x0) goto label_182250332;
    pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar7,3,3,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                     (pUVar6,"Prefabs/InGame/ChatPanel",true,
                      (MethodInfo_6ABD60 *)MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_ChatPanel);
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_ChatPanel)
    ;
    (__this->fields).ChatPanel = pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ChatPanel,pUVar10);
    pUVar10 = (__this->fields).ChatPanel;
    if (pUVar10 != (UI_ChatPanel_o *)0x0) {
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar7,6,6,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
      return;
    }
  }
label_182250332:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupLabels
// il2cpp: void UI_InGameMenu__SetupLabels (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182250340
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822509c5: movss xmm8, dword ptr [rip + 0x110848e]
// asm:   0x1822509ce: movss xmm9, dword ptr [rip + 0x11efc61]
// asm:   0x1822509d7: nop word ptr [rax + rax]

void UI_InGameMenu__SetupLabels(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_UISettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  UI_KillFeedSmallPopup_array *pUVar5;
  MethodInfo *pMVar6;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar7;
  UI_InGameLabel_o *pUVar8;
  UI_KillScorePopup_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UI_KillFeedBigPopup_o *pUVar11;
  UI_KillFeedSmallPopup_o *__this_02;
  int iVar12;
  int iVar13;
  
  if (Il2CppMethodInitialized_184347283 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillFeedBigPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillFeedSmallPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillScorePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_IgnoreScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_KillFeedScaler)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"TopRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomRight");
    Il2CppMethodInitialized_184347283 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  if (Il2CppMethodInitialized_18434676c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUIBuiltin);
    Il2CppMethodInitialized_18434676c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicUIBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUIBuiltin);
  }
  (__this->fields)._legacyLabels = TypeInfo_CustomLogic_CustomLogicUIBuiltin->static_fields->_legacyLabels;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  iVar13 = 0;
  UI_ElementStyle___ctor(__this_01,0x16,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_InGameMenu__CreateLabel
                     (__this,"TopCenter",pUVar7,__this_01,0x202,1,
                      (UnityEngine_Vector2_o)0xc120000000000000,(MethodInfo *)0x0);
  (__this->fields)._topCenterLabel = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._topCenterLabel,pUVar8);
  pUVar10 = (__this->fields).KDRReference;
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
    pUVar8 = UI_InGameMenu__CreateLabel
                       (__this,"TopLeft",pUVar7,__this_01,0x201,0,
                        (UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
    (__this->fields)._topLeftLabel = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._topLeftLabel,pUVar8);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_InGameMenu__CreateLabel
                       (__this,"TopRight",pUVar7,__this_01,0x204,2,
                        (UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
    (__this->fields)._topRightLabel = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._topRightLabel,pUVar8);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_InGameMenu__CreateLabel
                       (__this,"MiddleCenter",pUVar7,__this_01,0x202,4,
                        (UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    (__this->fields)._middleCenterLabel = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._middleCenterLabel,pUVar8);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_InGameMenu__CreateLabel
                       (__this,"MiddleRight",pUVar7,__this_01,0x202,5,
                        (UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
    (__this->fields)._middleRightLabel = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._middleRightLabel,pUVar8);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_InGameMenu__CreateLabel
                       (__this,"MiddleLeft",pUVar7,__this_01,0x202,3,
                        (UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
    (__this->fields)._middleLeftLabel = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._middleLeftLabel,pUVar8);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_InGameMenu__CreateLabel
                       (__this,"BottomCenter",pUVar7,__this_01,0x202,7,
                        (UnityEngine_Vector2_o)0x4120000000000000,(MethodInfo *)0x0);
    (__this->fields)._bottomCenterLabel = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bottomCenterLabel,pUVar8);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_InGameMenu__CreateLabel
                       (__this,"BottomLeft",pUVar7,__this_01,0x201,6,
                        (UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
    (__this->fields)._bottomLeftLabel = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bottomLeftLabel,pUVar8);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_InGameMenu__CreateLabel
                       (__this,"BottomRight",pUVar7,__this_01,0x204,8,
                        (UnityEngine_Vector2_o)0x41200000c1200000,(MethodInfo *)0x0);
    (__this->fields)._bottomRightLabel = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bottomRightLabel,pUVar8);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar7,false,
                        (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillScorePopup);
    (__this->fields)._killScorePopup = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._killScorePopup,pUVar9);
    pUVar9 = (__this->fields)._killScorePopup;
    if ((pUVar9 != (UI_KillScorePopup_o *)0x0) &&
       (pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
       pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__AddComponent_object_
                (pUVar10,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_IgnoreScaler);
      pUVar9 = (__this->fields)._killScorePopup;
      if (pUVar9 != (UI_KillScorePopup_o *)0x0) {
        pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
        UI_ElementFactory__SetAnchor(pUVar10,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar11 = UI_ElementFactory__CreateHeadedPanel_object_
                            (pUVar7,false,
                             (MethodInfo_6ABA40 *)
                             MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillFeedBigPopup);
        (__this->fields)._killFeedBigPopup = pUVar11;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._killFeedBigPopup,pUVar11);
        pUVar11 = (__this->fields)._killFeedBigPopup;
        if ((pUVar11 != (UI_KillFeedBigPopup_o *)0x0) &&
           (pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar10,(MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_KillFeedScaler);
          pUVar11 = (__this->fields)._killFeedBigPopup;
          if (pUVar11 != (UI_KillFeedBigPopup_o *)0x0) {
            pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar10,1,4,(UnityEngine_Vector2_o)0xc2f0000000000000,(MethodInfo *)0x0);
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
            if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
               (pSVar4 = (pSVar3->fields).KillFeedCount, pSVar4 != (Settings_IntSetting_o *)0x0)) {
              iVar12 = (pSVar4->fields)._value + -1;
              if (0 < iVar12) {
                do {
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  __this_02 = UI_ElementFactory__CreateHeadedPanel_object_
                                        (pUVar7,false,
                                         (MethodInfo_6ABA40 *)
                                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_KillFeedSmallPopup);
                  if ((__this_02 == (UI_KillFeedSmallPopup_o *)0x0) ||
                     (pUVar10 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
                     pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto label_182250b1b;
                  UnityEngine_GameObject__AddComponent_object_
                            (pUVar10,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_KillFeedScaler);
                  pUVar10 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                  UI_ElementFactory__SetAnchor
                            (pUVar10,1,4,
                             (UnityEngine_Vector2_o)((ulonglong)(uint)(-162.0 - (float)iVar13 * 35.0) << 0x20)
                             ,(MethodInfo *)0x0);
                  pMVar6 = MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_Add;
                  __this_00 = (__this->fields)._killFeedSmallPopups;
                  if (__this_00 == (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0)
                  goto label_182250b1b;
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar5 = (__this_00->fields)._items;
                  if (pUVar5 == (UI_KillFeedSmallPopup_array *)0x0) goto label_182250b1b;
                  uVar2 = (__this_00->fields)._size;
                  if (uVar2 < (uint)pUVar5->max_length) {
                    (__this_00->fields)._size = uVar2 + 1;
                    if ((uint)pUVar5->max_length <= uVar2) {
                      ThrowIndexOutOfRangeException();
                    }
                    pUVar5->m_Items[(int)uVar2] = __this_02;
                    Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,__this_02);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (Il2CppObject *)__this_02,
                               (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < iVar12);
              }
              return;
            }
          }
        }
      }
    }
  }
label_182250b1b:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$CreateLabel
// il2cpp: UI_InGameLabel_o* UI_InGameMenu__CreateLabel (UI_InGameMenu_o* __this, System_String_o* label, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t alignment, int32_t anchor, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x18224c3f0

UI_InGameLabel_o *
UI_InGameMenu__CreateLabel
          (UI_InGameMenu_o *__this,System_String_o *label,UnityEngine_Transform_o *parent,
          UI_ElementStyle_o *style,int32_t alignment,int32_t anchor,UnityEngine_Vector2_o offset,
          MethodInfo *method)

{
  bool legacy;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UI_InGameLabel_o *__this_01;
  
  if (Il2CppMethodInitialized_184347284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameLabel);
    Il2CppMethodInitialized_184347284 = '\x01';
  }
  legacy = (__this->fields)._legacyLabels;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameLabel);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields)._parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._parent,parent);
  (__this_01->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._style,style);
  (__this_01->fields)._alignment = alignment;
  (__this_01->fields)._anchor = anchor;
  (__this_01->fields)._offset.fields = offset.fields;
  UI_InGameLabel__SetLegacy(__this_01,legacy,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._labels;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)label,(Il2CppObject *)__this_01,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_set_Item);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetLegacyLabels
// il2cpp: void UI_InGameMenu__SetLegacyLabels (UI_InGameMenu_o* __this, bool legacy, const MethodInfo* method);
// 0x18224fbc0
// eh: try 0x18224fcb4..0x18224fdd1 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224fcf6: mov rdx, qword ptr [rip + 0x1e6bba3]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
// asm:   0x18224fcfd: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18224fd02: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18224fd07: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18224fd0c: test rcx, rcx
// asm:   0x18224fd0f: jne 0x18224fdd1
// asm:   0x18224fd15: movzx esi, byte ptr [rsp + 0x78]
// asm:   0x18224fd1a: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x18224fdd1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_InGameMenu__SetLegacyLabels(UI_InGameMenu_o *__this,bool legacy,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__InGameLabel__o *__this_00;
  UI_FeedPanel_o *pUVar1;
  UI_InGameLabel_o *pUVar2;
  UnityEngine_UI_Text_o *__this_01;
  TMPro_TextMeshProUGUI_o *__this_02;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Transform_o *parent;
  undefined1 local_40 [16];
  UI_InGameLabel_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UI_InGameLabel_o *local_18;
  
  if (Il2CppMethodInitialized_184347285 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_InGameLabel_GetEnumerator
              );
    Il2CppMethodInitialized_184347285 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UI_InGameLabel_o *)0x0;
  if ((__this->fields)._legacyLabels == legacy) {
    return;
  }
  __this_00 = (__this->fields)._labels;
  if ((__this_00 != (System_Collections_Generic_Dictionary_string__InGameLabel__o *)0x0) &&
     (__this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_get_Values),
     __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
               __this_03,
               (MethodInfo_F1E4D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_InGameLabel_GetEnumerator
              );
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while (bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                             ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                               *)local_28,
                              (MethodInfo_155CFB0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_MoveNext
                             ), bVar3) {
      if (local_18 == (UI_InGameLabel_o *)0x0) {
        ThrowNullReferenceException();
      }
      UI_InGameLabel__SetLegacy(local_18,legacy,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
              );
    pUVar1 = (__this->fields).FeedPanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
label_18224fdac:
      (__this->fields)._legacyLabels = legacy;
      return;
    }
    pUVar1 = (__this->fields).FeedPanel;
    if (pUVar1 != (UI_FeedPanel_o *)0x0) {
      __this_04 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._bottomRightLabel;
      if (pUVar2 != (UI_InGameLabel_o *)0x0) {
        if ((pUVar2->fields)._legacy == false) {
          __this_02 = (pUVar2->fields)._tmpText;
          if (__this_02 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_18224fdc5;
          parent = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)__this_02,(MethodInfo *)0x0);
        }
        else {
          __this_01 = (pUVar2->fields)._legacyText;
          if (__this_01 == (UnityEngine_UI_Text_o *)0x0) goto label_18224fdc5;
          parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        }
        if (__this_04 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(__this_04,parent,false,(MethodInfo *)0x0);
          goto label_18224fdac;
        }
      }
    }
  }
label_18224fdc5:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupLoading
// il2cpp: void UI_InGameMenu__SetupLoading (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182250b30

void UI_InGameMenu__SetupLoading(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_InGameBackgroundMenu_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UI_GlobalPauseGamePopup_o *value;
  
  if (Il2CppMethodInitialized_184347286 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_GlobalPauseGamePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateMenu_InGameBackgroundMenu);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/BackgroundMenu");
    Il2CppMethodInitialized_184347286 = '\x01';
  }
  pUVar1 = UI_ElementFactory__CreateMenu_object_
                     ("Prefabs/Panels/BackgroundMenu",
                      (MethodInfo_6ABB40 *)MethodInfo_UI_ElementFactory_CreateMenu_InGameBackgroundMenu);
  (__this->fields)._backgroundMenu = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundMenu,pUVar1);
  pUVar1 = (__this->fields)._backgroundMenu;
  if (pUVar1 != (UI_InGameBackgroundMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._4_Setup.methodPtr)(pUVar1,(pUVar1->klass->vtable)._4_Setup.method);
    pUVar1 = (__this->fields)._backgroundMenu;
    if (pUVar1 != (UI_InGameBackgroundMenu_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetAsFirstSibling(pUVar2,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        value = UI_ElementFactory__CreateHeadedPanel_object_
                          (pUVar2,false,
                           (MethodInfo_6ABA40 *)
                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_GlobalPauseGamePopup);
        (__this->fields)._globalPauseGamePopup = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._globalPauseGamePopup,value);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$OnFinishLoading
// il2cpp: void UI_InGameMenu__OnFinishLoading (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224edd0

void UI_InGameMenu__OnFinishLoading(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  UI_BasePopup_o *pUVar5;
  UI_BasePopup_array *pUVar6;
  UnityEngine_Object_o *x;
  Settings_GeneralSettings_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  Settings_InGameSet_o *pSVar9;
  Settings_InGameMiscSettings_o *pSVar10;
  MethodInfo *pMVar11;
  bool bVar12;
  UnityEngine_Transform_o *pUVar13;
  UI_CharacterPopup_o *value;
  UI_ScoreboardPopup_o *value_00;
  UI_MapPopup_o *value_01;
  UI_CutsceneDialoguePanel_o *pUVar14;
  UnityEngine_GameObject_o *pUVar15;
  GameManagers_InGameManager_o *value_02;
  
  if (Il2CppMethodInitialized_184347287 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CutsceneDialoguePanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347287 = '\x01';
  }
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  value = UI_ElementFactory__CreateHeadedPanel_object_
                    (pUVar13,false,
                     (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterPopup);
  (__this->fields)._characterPopup = (UI_BasePopup_o *)value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._characterPopup,value);
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  value_00 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar13,false,
                        (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardPopup);
  (__this->fields)._scoreboardPopup = (UI_BasePopup_o *)value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scoreboardPopup,value_00);
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  value_01 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar13,false,
                        (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_MapPopup);
  (__this->fields)._mapPopup = (UI_BasePopup_o *)value_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapPopup,value_01);
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar14 = UI_ElementFactory__CreateHeadedPanel_object_
                      (pUVar13,false,
                       (MethodInfo_6ABA40 *)
                       MethodInfo_UI_ElementFactory_CreateDefaultPopup_CutsceneDialoguePanel);
  (__this->fields)._cutsceneDialoguePanel = pUVar14;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cutsceneDialoguePanel,pUVar14);
  pUVar14 = (__this->fields)._cutsceneDialoguePanel;
  if (pUVar14 != (UI_CutsceneDialoguePanel_o *)0x0) {
    pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar15,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    pMVar11 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar4 = (__this->fields)._popups;
    if (pSVar4 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18224f26a;
    pUVar5 = (__this->fields)._characterPopup;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar6 = (pSVar4->fields)._items;
    if (pUVar6 == (UI_BasePopup_array *)0x0) goto label_18224f26a;
    uVar3 = (pSVar4->fields)._size;
    if (uVar3 < (uint)pUVar6->max_length) {
      (pSVar4->fields)._size = uVar3 + 1;
      if ((uint)pUVar6->max_length <= uVar3) goto label_18224f282;
      pUVar6->m_Items[(int)uVar3] = pUVar5;
      Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar3,pUVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar5,
                 (MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar11 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar4 = (__this->fields)._popups;
    if (pSVar4 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18224f26a;
    pUVar5 = (__this->fields)._scoreboardPopup;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar6 = (pSVar4->fields)._items;
    if (pUVar6 == (UI_BasePopup_array *)0x0) goto label_18224f26a;
    uVar3 = (pSVar4->fields)._size;
    if (uVar3 < (uint)pUVar6->max_length) {
      (pSVar4->fields)._size = uVar3 + 1;
      if ((uint)pUVar6->max_length <= uVar3) goto label_18224f282;
      pUVar6->m_Items[(int)uVar3] = pUVar5;
      Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar3,pUVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar5,
                 (MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar11 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar4 = (__this->fields)._popups;
    if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar5 = (__this->fields)._mapPopup;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar6 = (pSVar4->fields)._items;
      if (pUVar6 != (UI_BasePopup_array *)0x0) {
        uVar3 = (pSVar4->fields)._size;
        if (uVar3 < (uint)pUVar6->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          if ((uint)pUVar6->max_length <= uVar3) {
label_18224f282:
            ThrowIndexOutOfRangeException();
          }
          pUVar6->m_Items[(int)uVar3] = pUVar5;
          Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar3,pUVar5);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar5,
                     (MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
        }
        value_02 = (GameManagers_InGameManager_o *)
                   TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (value_02 == (GameManagers_InGameManager_o *)0x0) {
          (__this->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
          value_02 = (GameManagers_InGameManager_o *)0x0;
        }
        else {
          bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
          if (((value_02->klass->_2).typeHierarchyDepth < bVar2) ||
             ((value_02->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
            il2cpp_codegen_raise_invalid_cast_exception(value_02);
          }
          (__this->fields)._gameManager = value_02;
          bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
          if (((value_02->klass->_2).typeHierarchyDepth < bVar2) ||
             ((value_02->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
            il2cpp_codegen_raise_invalid_cast_exception(value_02);
          }
        }
        Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,value_02);
        x = (UnityEngine_Object_o *)(__this->fields)._minimapPanel;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar12) {
          pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
          if ((pSVar7 == (Settings_GeneralSettings_o *)0x0) ||
             (pSVar8 = (pSVar7->fields).MinimapEnabled, pSVar8 == (Settings_BoolSetting_o *)0x0))
          goto label_18224f26a;
          if ((pSVar8->fields)._value != false) {
            if (Il2CppMethodInitialized_184347288 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
              Il2CppMethodInitialized_184347288 = '\x01';
            }
            pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
            if (((pSVar9 == (Settings_InGameSet_o *)0x0) ||
                (pSVar10 = (pSVar9->fields).Misc, pSVar10 == (Settings_InGameMiscSettings_o *)0x0)) ||
               (pSVar8 = (pSVar10->fields).GlobalMinimapDisable, pSVar8 == (Settings_BoolSetting_o *)0x0))
            goto label_18224f26a;
            if ((pSVar8->fields)._value == false) {
              pSVar8 = (((TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent->fields).Misc)->
                       fields).RealismMode;
              if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_18224f26a;
              if ((pSVar8->fields)._value == false) {
                pUVar15 = (__this->fields)._minimapPanel;
                if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_18224f26a;
                UnityEngine_GameObject__SetActive(pUVar15,true,(MethodInfo *)0x0);
              }
            }
          }
        }
        return;
      }
    }
  }
label_18224f26a:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$AllowMap
// il2cpp: bool UI_InGameMenu__AllowMap (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224c100

bool UI_InGameMenu__AllowMap(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347288 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347288 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).GlobalMinimapDisable, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value != false) {
      return false;
    }
    pSVar3 = (((TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent->fields).Misc)->fields).
             RealismMode;
    if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
      return (pSVar3->fields)._value == false;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$InMenu
// il2cpp: bool UI_InGameMenu__InMenu (const MethodInfo* method);
// 0x18224e960
// eh: try 0x18224eab0..0x18224eb7c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224eaac: nop dword ptr [rax]
// asm:   0x18224eafe: mov rdx, qword ptr [rip + 0x1e271f3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x18224eb05: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18224eb0a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18224eb0f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18224eb14: test rcx, rcx
// asm:   0x18224eb17: jne 0x18224eb7c
// asm:   0x18224eb19: mov rdi, qword ptr [rsp + 0x78]
// asm:   0x18224eb7c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool UI_InGameMenu__InMenu(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_BaseMenu_o *pUVar3;
  System_Collections_Generic_List_BasePopup__o *__this;
  UI_ActionHandler_o *__this_00;
  bool bVar4;
  int32_t iVar5;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_184347289 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347289 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar3 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
  }
  bVar4 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive((MethodInfo *)0x0);
  if (!bVar4) {
    if (pUVar3 == (UI_BaseMenu_o *)0x0) {
label_18224eb82:
      ThrowNullReferenceException();
    }
    iVar2 = *(int *)&(*(uint64_t *)((char *)pUVar3 + 0x268));
    iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (iVar2 != iVar5) {
      __this = (pUVar3->fields)._popups;
      if (__this == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18224eb82;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)__this,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
      local_28 = (undefined1  [8])local_40._0_8_;
      pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
      local_18 = local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      do {
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
          if ((*(uint64_t *)((char *)pUVar3 + 0x98)) != (UI_BaseMenu_c *)0x0) {
            if (*(char *)&(((*(Il2CppClass **)((char *)pUVar3 + 0x98)))->_1).element_class != '\0') {
              return true;
            }
            if ((*(uint64_t *)((char *)pUVar3 + 0xa0)) != (void *)0x0) {
              if (*(char *)((longlong)(*(uint64_t *)((char *)pUVar3 + 0xa0)) + 0x28) != '\0') {
                return true;
              }
              __this_00 = (UI_ActionHandler_o *)(*(uint64_t *)((char *)pUVar3 + 0xa8));
              if (__this_00 != (UI_ActionHandler_o *)0x0) {
                bVar4 = UI_ActionHandler__get_BlocksInput(__this_00,(MethodInfo *)0x0);
                return bVar4;
              }
            }
          }
          goto label_18224eb82;
        }
        if (local_18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
      } while (*(char *)&local_18[9].klass == '\0');
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    }
  }
  return true;
}


// UI.InGameMenu$$TryDismissGameplayMenu
// il2cpp: bool UI_InGameMenu__TryDismissGameplayMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182252590

bool UI_InGameMenu__TryDismissGameplayMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_GeneralInputSettings_o *pSVar3;
  UI_BasePopup_o *pUVar4;
  Settings_KeybindSetting_o *pSVar5;
  bool bVar6;
  int32_t iVar7;
  UnityEngine_Transform_o *parent;
  UI_BasePopup_o *x;
  
  if (Il2CppMethodInitialized_18434728a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434728a = '\x01';
  }
  iVar1 = (__this->fields)._lastDismissedMenuFrame;
  iVar7 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if (iVar1 == iVar7) {
label_1822527de:
    bVar6 = true;
  }
  else {
    bVar6 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive((MethodInfo *)0x0);
    if (!bVar6) {
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      x = UI_InGameMenu__FindTopmostPopup(parent,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar6) {
        if (x == (UI_BasePopup_o *)0x0) goto label_1822527f9;
        bVar6 = (*(x->klass->vtable)._57_DismissFromEscape.methodPtr)
                          (x,(x->klass->vtable)._57_DismissFromEscape.method);
        if (bVar6) {
          iVar7 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
          (__this->fields)._lastDismissedMenuFrame = iVar7;
          if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
          }
          Gisketch_Aottg2UI_Actions_GisketchInputCapture__BlockThisFrame((MethodInfo *)0x0);
          (__this->fields).SkipAHSSInput = true;
          pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
          if (pSVar2 == (Settings_InputSettings_o *)0x0) goto label_1822527f9;
          pSVar3 = (pSVar2->fields).General;
          pUVar4 = (__this->fields)._scoreboardPopup;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
label_182252709:
            if ((pSVar3 == (Settings_GeneralInputSettings_o *)0x0) ||
               (pSVar5 = (pSVar3->fields).ToggleScoreboard, pSVar5 == (Settings_KeybindSetting_o *)0x0))
            goto label_1822527f9;
            bVar6 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
          }
          else {
            pUVar4 = (__this->fields)._scoreboardPopup;
            if (pUVar4 == (UI_BasePopup_o *)0x0) goto label_1822527f9;
            if ((pUVar4->fields).IsActive == false) goto label_182252709;
            bVar6 = false;
          }
          (__this->fields).ScoreboardDismissedUntilRelease = bVar6;
          pUVar4 = (__this->fields)._mapPopup;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
label_18225277c:
            if ((pSVar3 == (Settings_GeneralInputSettings_o *)0x0) ||
               (pSVar5 = (pSVar3->fields).ToggleMap, pSVar5 == (Settings_KeybindSetting_o *)0x0)) {
label_1822527f9:
              ThrowNullReferenceException();
            }
            bVar6 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
          }
          else {
            pUVar4 = (__this->fields)._mapPopup;
            if (pUVar4 == (UI_BasePopup_o *)0x0) goto label_1822527f9;
            if ((pUVar4->fields).IsActive == false) goto label_18225277c;
            bVar6 = false;
          }
          (__this->fields).MapDismissedUntilRelease = bVar6;
          if ((x->fields).IsActive == false) {
            bVar6 = (*(x->klass->vtable)._56_get_PlayEscapeSound.methodPtr)
                              (x,(x->klass->vtable)._56_get_PlayEscapeSound.method);
            if (bVar6) {
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              UI_UIManager__PlaySound(1,(MethodInfo *)0x0);
            }
          }
          goto label_1822527de;
        }
      }
    }
    bVar6 = false;
  }
  return bVar6;
}


// UI.InGameMenu$$FindTopmostPopup
// il2cpp: UI_BasePopup_o* UI_InGameMenu__FindTopmostPopup (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x18224c4e0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224c5ad: nop dword ptr [rax]
// asm:   0x18224c5f0: sub ebx, 1
// asm:   0x18224c5f3: jns 0x18224c5b0
// asm:   0x18224c639: mov rax, rdi
// asm:   0x18224c651: mov rax, rbp
// asm:   0x18224c654: jmp 0x18224c63c

UI_BasePopup_o * UI_InGameMenu__FindTopmostPopup(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  bool bVar1;
  int index;
  UnityEngine_GameObject_o *__this;
  UI_BasePopup_o *x;
  UnityEngine_Transform_o *parent_00;
  UI_BasePopup_o *x_00;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434728b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434728b = '\x01';
  }
  if ((parent == (UnityEngine_Transform_o *)0x0) ||
     (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0),
     __this == (UnityEngine_GameObject_o *)0x0)) {
label_18224c65a:
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
  if (bVar1) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)parent,
                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UI_BasePopup_o *)0x0) goto label_18224c65a;
      if ((x->fields).IsActive == false) goto label_18224c656;
    }
    index = UnityEngine_Transform__get_childCount(parent,(MethodInfo *)0x0);
    do {
      index = index + -1;
      if (index < 0) {
        if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) goto label_18224c656;
        if (x == (UI_BasePopup_o *)0x0) goto label_18224c65a;
        pSVar2 = (*(x->klass->vtable)._55_get_EscapeBehavior.methodPtr)
                           (x,(x->klass->vtable)._55_get_EscapeBehavior.method);
        if ((int)pSVar2 != 2) {
          return x;
        }
        goto label_18224c656;
      }
      parent_00 = UnityEngine_Transform__GetChild(parent,index,(MethodInfo *)0x0);
      x_00 = UI_InGameMenu__FindTopmostPopup(parent_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar1);
  }
  else {
label_18224c656:
    x_00 = (UI_BasePopup_o *)0x0;
  }
  return x_00;
}


// UI.InGameMenu$$SetPauseMenu
// il2cpp: void UI_InGameMenu__SetPauseMenu (UI_InGameMenu_o* __this, bool enabled, const MethodInfo* method);
// 0x18224fed0

void UI_InGameMenu__SetPauseMenu(UI_InGameMenu_o *__this,bool enabled,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *__this_00;
  
  if (enabled) {
    bVar1 = UI_InGameMenu__IsPauseMenuActive(__this,(MethodInfo *)0x0);
    if (!bVar1) {
      UI_InGameMenu__HideAllMenus(__this,(__this->fields)._characterPopup,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowPause((MethodInfo *)0x0);
    }
  }
  else {
    UI_InGameMenu__HideAllMenus(__this,(__this->fields)._characterPopup,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGisketchUiHost__HideInGameOverlay(true,(MethodInfo *)0x0);
    (__this->fields).SkipAHSSInput = true;
  }
  if (Il2CppMethodInitialized_18434727a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    Il2CppMethodInitialized_18434727a = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,true,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ToggleScoreboardMenu
// il2cpp: void UI_InGameMenu__ToggleScoreboardMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182252450

void UI_InGameMenu__ToggleScoreboardMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Canvas_o *__this_01;
  
  pUVar1 = (__this->fields)._scoreboardPopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (__this->fields)._scoreboardPopup;
        if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_18225251b;
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
      }
      else {
        bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
        if (!bVar2) {
          UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._scoreboardPopup;
          if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_18225251b;
          (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
        }
      }
      if (Il2CppMethodInitialized_18434727a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
        Il2CppMethodInitialized_18434727a = '\x01';
      }
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
      if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18225251b:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetScoreboardMenu
// il2cpp: void UI_InGameMenu__SetScoreboardMenu (UI_InGameMenu_o* __this, bool enabled, bool fromClick, const MethodInfo* method);
// 0x18224ff70

void UI_InGameMenu__SetScoreboardMenu(UI_InGameMenu_o *__this,bool enabled,bool fromClick,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool bVar2;
  
  if (enabled) {
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    if (!bVar2) {
      UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._scoreboardPopup;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_18224fff7;
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
    }
  }
  else {
    pUVar1 = (__this->fields)._scoreboardPopup;
    if (pUVar1 == (UI_BasePopup_o *)0x0) {
label_18224fff7:
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    if (fromClick) {
      (__this->fields).SkipAHSSInput = true;
      return;
    }
  }
  return;
}


// UI.InGameMenu$$ToggleMapMenu
// il2cpp: void UI_InGameMenu__ToggleMapMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182252370

void UI_InGameMenu__ToggleMapMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Canvas_o *__this_01;
  
  pUVar1 = (__this->fields)._mapPopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (__this->fields)._mapPopup;
        if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_182252449;
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
      }
      else {
        bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
        if (!bVar2) {
          bVar2 = UI_InGameMenu__AllowMap(__this,(MethodInfo *)0x0);
          if (bVar2) {
            UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._mapPopup;
            if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_182252449;
            (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
          }
        }
      }
      if (Il2CppMethodInitialized_18434727a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
        Il2CppMethodInitialized_18434727a = '\x01';
      }
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
      if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182252449:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetMapMenu
// il2cpp: void UI_InGameMenu__SetMapMenu (UI_InGameMenu_o* __this, bool enabled, bool fromClick, const MethodInfo* method);
// 0x18224fde0

void UI_InGameMenu__SetMapMenu(UI_InGameMenu_o *__this,bool enabled,bool fromClick,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool bVar2;
  
  if (enabled) {
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = UI_InGameMenu__AllowMap(__this,(MethodInfo *)0x0);
      if (bVar2) {
        UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._mapPopup;
        if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_18224fe75;
        (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      }
    }
  }
  else {
    pUVar1 = (__this->fields)._mapPopup;
    if (pUVar1 == (UI_BasePopup_o *)0x0) {
label_18224fe75:
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    if (fromClick) {
      (__this->fields).SkipAHSSInput = true;
      return;
    }
  }
  return;
}


// UI.InGameMenu$$SetCharacterMenu
// il2cpp: void UI_InGameMenu__SetCharacterMenu (UI_InGameMenu_o* __this, bool enabled, const MethodInfo* method);
// 0x18224f330

void UI_InGameMenu__SetCharacterMenu(UI_InGameMenu_o *__this,bool enabled,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  bool bVar2;
  UnityEngine_Canvas_o *__this_00;
  
  if (Il2CppMethodInitialized_18434728c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434728c = '\x01';
  }
  if (enabled) {
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    if (!bVar2) {
      UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._characterPopup;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_18224f477;
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    }
  }
  else {
    pUVar1 = (__this->fields)._characterPopup;
    if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_18224f477;
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    pUVar1 = (__this->fields)._characterChangePopup;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._characterChangePopup;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_18224f477;
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    }
  }
  if (Il2CppMethodInitialized_18434727a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    Il2CppMethodInitialized_18434727a = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if (__this_00 != (UnityEngine_Canvas_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,true,(MethodInfo *)0x0);
    return;
  }
label_18224f477:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ShowCharacterChangeMenu
// il2cpp: void UI_InGameMenu__ShowCharacterChangeMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182251b70

void UI_InGameMenu__ShowCharacterChangeMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  System_Collections_Generic_List_BasePopup__o *pSVar2;
  bool bVar3;
  UnityEngine_Transform_o *parent;
  UI_CharacterChangePopup_o *value;
  
  if (Il2CppMethodInitialized_18434728d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterChangePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434728d = '\x01';
  }
  bVar3 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  UI_InGameMenu__HideAllMenus(__this,(UI_BasePopup_o *)0x0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._characterChangePopup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    value = UI_ElementFactory__CreateHeadedPanel_object_
                      (parent,false,
                       (MethodInfo_6ABA40 *)
                       MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterChangePopup);
    (__this->fields)._characterChangePopup = (UI_BasePopup_o *)value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._characterChangePopup,value);
    pSVar2 = (__this->fields)._popups;
    if (pSVar2 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_182251c75;
    il2cpp_runtime_helper_180012890(pSVar2,(__this->fields)._characterChangePopup,
                  MethodInfo_System_Collections_Generic_List_BasePopup_Add);
  }
  pUVar1 = (__this->fields)._characterChangePopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
    return;
  }
label_182251c75:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ShowCutsceneMenu
// il2cpp: void UI_InGameMenu__ShowCutsceneMenu (UI_InGameMenu_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, bool full, const MethodInfo* method);
// 0x182251c80

void UI_InGameMenu__ShowCutsceneMenu
               (UI_InGameMenu_o *__this,System_String_o *icon,System_String_o *title,System_String_o *content,
               bool full,MethodInfo *method)

{
  UI_CutsceneDialoguePanel_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  System_String_o *path;
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_GameObject_o *__this_02;
  System_String_o *pSVar2;
  UnityEngine_Texture_o *pUVar3;
  UnityEngine_Texture_o *value;
  
  __this_00 = (__this->fields)._cutsceneDialoguePanel;
  if (__this_00 != (UI_CutsceneDialoguePanel_o *)0x0) {
    if (Il2CppMethodInitialized_184347243 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Icons/Profile/");
      Il2CppMethodInitialized_184347243 = '\x01';
    }
    UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_00,title,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetProfileIcon(icon,(MethodInfo *)0x0);
    __this_01 = (__this_00->fields)._image;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    pSVar2 = System_String__Concat_1969e50("Icons/Profile/",pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar3 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(path,pSVar2,true,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
      value = (UnityEngine_Texture_o *)0x0;
      if (pUVar3 != (UnityEngine_Texture_o *)0x0) {
        if (pUVar3->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
          value = pUVar3;
        }
        if (value == (UnityEngine_Texture_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar3,TypeInfo_UnityEngine_Texture2D);
        }
      }
      UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
      pUVar1 = (__this_00->fields)._titleLabel;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,title,(pUVar1->klass->vtable)._75_set_text.method);
        pUVar1 = (__this_00->fields)._contentLabel;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                    (pUVar1,content,(pUVar1->klass->vtable)._75_set_text.method);
          UI_BasePopup__Show((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
          __this_02 = (__this_00->fields)._labelRight;
          if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_02,full,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$HideCutsceneMenu
// il2cpp: void UI_InGameMenu__HideCutsceneMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224e930

void UI_InGameMenu__HideCutsceneMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_CutsceneDialoguePanel_o *pUVar1;
  
  pUVar1 = (__this->fields)._cutsceneDialoguePanel;
  if (pUVar1 != (UI_CutsceneDialoguePanel_o *)0x0) {
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$IsPauseMenuActive
// il2cpp: bool UI_InGameMenu__IsPauseMenuActive (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224ec80
// eh: try 0x18224ed31..0x18224edc3 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224ed8c: mov rdx, qword ptr [rip + 0x1e26f65]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x18224ed93: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18224ed98: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18224ed9d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18224eda2: test rcx, rcx
// asm:   0x18224eda5: jne 0x18224edc3
// asm:   0x18224edc3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool UI_InGameMenu__IsPauseMenuActive(UI_InGameMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *__this_01;
  undefined1 local_40 [16];
  UnityEngine_Component_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434728e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_18434728e = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  bVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_IsInGameOverlayActive((MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (__this->fields)._allPausePopups;
    if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    do {
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
      if ((UnityEngine_Component_o *)local_28.fields._current == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)local_28.fields._current,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    } while (!bVar1);
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
  }
  return true;
}


// UI.InGameMenu$$ShowBlood
// il2cpp: void UI_InGameMenu__ShowBlood (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182251ae0

void UI_InGameMenu__ShowBlood(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  bool bVar1;
  
  if ((__this->fields)._showingBlood == false) {
    bVar1 = Il2CppMethodInitialized_184347299 == '\0';
    (__this->fields)._showingBlood = true;
    if (bVar1) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_WaitAndShowBlood_d__113);
      Il2CppMethodInitialized_184347299 = '\x01';
    }
    __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameMenu_WaitAndShowBlood_d__113);
    UI_InGameMenu__WaitAndShowBlood_d__113___ctor(__this_00,0,(MethodInfo *)0x0);
    if (__this_00 == (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
  }
  return;
}


// UI.InGameMenu$$ShowSnapshot
// il2cpp: void UI_InGameMenu__ShowSnapshot (UI_InGameMenu_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x182252310

void UI_InGameMenu__ShowSnapshot(UI_InGameMenu_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UI_SnapshotPopup_o *pUVar1;
  
  pUVar1 = (__this->fields)._snapshotPopup;
  if (pUVar1 != (UI_SnapshotPopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._62_Load.methodPtr)(pUVar1,texture,(pUVar1->klass->vtable)._62_Load.method);
    pUVar1 = (__this->fields)._snapshotPopup;
    if (pUVar1 != (UI_SnapshotPopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      (__this->fields)._snapshotTimeLeft = 2.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ShowKillFeed
// il2cpp: void UI_InGameMenu__ShowKillFeed (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x182252100

void UI_InGameMenu__ShowKillFeed
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UI_KillFeedBigPopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434728f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18434728f = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).KillFeedCount, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar2->fields)._value < 1) {
      return;
    }
    pUVar3 = (__this->fields)._killFeedBigPopup;
    if (pUVar3 != (UI_KillFeedBigPopup_o *)0x0) {
      if (0.0 < (pUVar3->fields).TimeLeft) {
        UI_InGameMenu__ShowKillFeedPushSmall
                  (__this,(pUVar3->fields).Killer,(pUVar3->fields).Victim,(pUVar3->fields).Score,
                   (pUVar3->fields).Weapon,(pUVar3->fields).TimeLeft,(pUVar3->fields).KillerActorNumber,
                   (pUVar3->fields).VictimActorNumber,0,(MethodInfo *)0x0);
      }
      pUVar3 = (__this->fields)._killFeedBigPopup;
      if (pUVar3 != (UI_KillFeedBigPopup_o *)0x0) {
        UI_KillFeedBigPopup__Show_2257a10(pUVar3,killer,victim,score,weapon,-1,-1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ShowKillFeed
// il2cpp: void UI_InGameMenu__ShowKillFeed (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, int32_t killerActorNumber, int32_t victimActorNumber, const MethodInfo* method);
// 0x182251fb0

void UI_InGameMenu__ShowKillFeed_2251fb0
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,int32_t killerActorNumber,int32_t victimActorNumber,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UI_KillFeedBigPopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434728f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18434728f = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).KillFeedCount, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar2->fields)._value < 1) {
      return;
    }
    pUVar3 = (__this->fields)._killFeedBigPopup;
    if (pUVar3 != (UI_KillFeedBigPopup_o *)0x0) {
      if (0.0 < (pUVar3->fields).TimeLeft) {
        UI_InGameMenu__ShowKillFeedPushSmall
                  (__this,(pUVar3->fields).Killer,(pUVar3->fields).Victim,(pUVar3->fields).Score,
                   (pUVar3->fields).Weapon,(pUVar3->fields).TimeLeft,(pUVar3->fields).KillerActorNumber,
                   (pUVar3->fields).VictimActorNumber,0,(MethodInfo *)0x0);
      }
      pUVar3 = (__this->fields)._killFeedBigPopup;
      if (pUVar3 != (UI_KillFeedBigPopup_o *)0x0) {
        UI_KillFeedBigPopup__Show_2257a10
                  (pUVar3,killer,victim,score,weapon,killerActorNumber,victimActorNumber,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ShowKillFeedPushSmall
// il2cpp: void UI_InGameMenu__ShowKillFeedPushSmall (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, float timeLeft, int32_t killerActorNumber, int32_t victimActorNumber, int32_t index, const MethodInfo* method);
// 0x182251e50

void UI_InGameMenu__ShowKillFeedPushSmall
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,float timeLeft,int32_t killerActorNumber,int32_t victimActorNumber,
               int32_t index,MethodInfo *method)

{
  float timeLeft_00;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  UI_KillFeedSmallPopup_o *__this_01;
  
  if (Il2CppMethodInitialized_184347290 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_get_Item);
    Il2CppMethodInitialized_184347290 = '\x01';
  }
  __this_00 = (__this->fields)._killFeedSmallPopups;
  if (__this_00 != (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0) {
    if (index < (__this_00->fields)._size) {
      __this_01 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_get_Item);
      if (__this_01 == (UI_KillFeedSmallPopup_o *)0x0) goto label_182251fa4;
      timeLeft_00 = (__this_01->fields).TimeLeft;
      if (0.0 < timeLeft_00) {
        UI_InGameMenu__ShowKillFeedPushSmall
                  (__this,(__this_01->fields).Killer,(__this_01->fields).Victim,(__this_01->fields).Score,
                   (__this_01->fields).Weapon,timeLeft_00,(__this_01->fields).KillerActorNumber,
                   (__this_01->fields).VictimActorNumber,index + 1,(MethodInfo *)0x0);
      }
      UI_KillFeedSmallPopup__ShowImmediate_2258350
                (__this_01,killer,victim,score,weapon,timeLeft,killerActorNumber,victimActorNumber,
                 (MethodInfo *)0x0);
    }
    return;
  }
label_182251fa4:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$ShowKillScore
// il2cpp: void UI_InGameMenu__ShowKillScore (UI_InGameMenu_o* __this, int32_t score, bool force, const MethodInfo* method);
// 0x182252250

void UI_InGameMenu__ShowKillScore(UI_InGameMenu_o *__this,int32_t score,bool force,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  UI_KillScorePopup_o *__this_00;
  UI_StylebarHandler_o *__this_01;
  
  if (Il2CppMethodInitialized_184347291 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184347291 = '\x01';
  }
  if (!force) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_182252307;
    if ((pCVar1->fields).DefaultShowKillScore == false) {
      return;
    }
  }
  __this_00 = (__this->fields)._killScorePopup;
  if (__this_00 != (UI_KillScorePopup_o *)0x0) {
    UI_KillScorePopup__Show(__this_00,score,(MethodInfo *)0x0);
    __this_01 = (__this->fields).StylebarHandler;
    (__this->fields)._killScoreTimeLeft = 3.0;
    if (__this_01 != (UI_StylebarHandler_o *)0x0) {
      UI_StylebarHandler__OnHit(__this_01,score,(MethodInfo *)0x0);
      return;
    }
  }
label_182252307:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetStylebarRank
// il2cpp: int32_t UI_InGameMenu__GetStylebarRank (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224e690

int32_t UI_InGameMenu__GetStylebarRank(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_StylebarHandler_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347292 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347292 = '\x01';
  }
  pUVar1 = (__this->fields).StylebarHandler;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return 0;
  }
  pUVar1 = (__this->fields).StylebarHandler;
  if (pUVar1 != (UI_StylebarHandler_o *)0x0) {
    return (pUVar1->fields)._rank;
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetLabelActive
// il2cpp: void UI_InGameMenu__SetLabelActive (UI_InGameMenu_o* __this, System_String_o* label, bool active, const MethodInfo* method);
// 0x18224f590

void UI_InGameMenu__SetLabelActive
               (UI_InGameMenu_o *__this,System_String_o *label,bool active,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_184347293 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_TryGetValue);
    Il2CppMethodInitialized_184347293 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._labels;
  local_res8 = (Il2CppObject *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)label,&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_TryGetValue);
    if (bVar1) {
      if ((local_res8 == (Il2CppObject *)0x0) || (local_res8[5].monitor == (UnityEngine_GameObject_o *)0x0))
      goto label_18224f621;
      UnityEngine_GameObject__SetActive(local_res8[5].monitor,active,(MethodInfo *)0x0);
    }
    return;
  }
label_18224f621:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetLabelBackgroundColor
// il2cpp: void UI_InGameMenu__SetLabelBackgroundColor (UI_InGameMenu_o* __this, System_String_o* label, UnityEngine_Color_o color, const MethodInfo* method);
// 0x18224f7b0

void UI_InGameMenu__SetLabelBackgroundColor
               (UI_InGameMenu_o *__this,System_String_o *label,UnityEngine_Color_o *color,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  longlong *plVar1;
  bool bVar2;
  Il2CppObject *local_res8;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (Il2CppMethodInitialized_184347294 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_TryGetValue);
    Il2CppMethodInitialized_184347294 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._labels;
  local_res8 = (Il2CppObject *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)label,&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_TryGetValue);
    if (bVar2) {
      if (local_res8 == (Il2CppObject *)0x0) goto label_18224f857;
      if (*(char *)&local_res8[5].klass == '\0') {
        plVar1 = local_res8[4].monitor;
        if (plVar1 == (longlong *)0x0) goto label_18224f857;
        local_18 = (color->fields).r;
        fStack_14 = (color->fields).g;
        fStack_10 = (color->fields).b;
        fStack_c = (color->fields).a;
        (**(code **)(*plVar1 + 0x2a8))(plVar1,&local_18,*(undefined8 *)(*plVar1 + 0x2b0));
      }
    }
    return;
  }
label_18224f857:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetLabelBackgroundColorAll
// il2cpp: void UI_InGameMenu__SetLabelBackgroundColorAll (UI_InGameMenu_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x18224f630
// eh: try 0x18224f700..0x18224f796 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224f75e: mov rdx, qword ptr [rip + 0x1e6c13b]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
// asm:   0x18224f765: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18224f76a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18224f76f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18224f774: test rcx, rcx
// asm:   0x18224f777: jne 0x18224f796
// asm:   0x18224f796: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_InGameMenu__SetLabelBackgroundColorAll
               (UI_InGameMenu_o *__this,UnityEngine_Color_o *color,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__InGameLabel__o *__this_00;
  longlong *plVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  Il2CppObject *local_38;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_28;
  
  if (Il2CppMethodInitialized_184347295 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_InGameLabel_GetEnumerator
              );
    Il2CppMethodInitialized_184347295 = '\x01';
  }
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._labels;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__InGameLabel__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_get_Values);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_InGameLabel_GetEnumerator
                );
      local_28.fields._currentValue = local_38;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (&local_28,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_MoveNext
                          );
        if (!bVar2) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_InGameLabel_Dispose
                    );
          return;
        }
        if (local_28.fields._currentValue == (Il2CppObject *)0x0) break;
        if (*(char *)&local_28.fields._currentValue[5].klass == '\0') {
          plVar1 = local_28.fields._currentValue[4].monitor;
          if (plVar1 == (longlong *)0x0) {
            ThrowNullReferenceException();
          }
          local_48._0_4_ = (color->fields).r;
          local_48._4_4_ = (color->fields).g;
          fStack_40 = (color->fields).b;
          fStack_3c = (color->fields).a;
          (**(code **)(*plVar1 + 0x2a8))(plVar1,local_48,*(undefined8 *)(*plVar1 + 0x2b0));
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetKDRPanelActive
// il2cpp: void UI_InGameMenu__SetKDRPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x18224f560

void UI_InGameMenu__SetKDRPanelActive(UI_InGameMenu_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = (__this->fields).TopLeftHud;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetMinimapActive
// il2cpp: void UI_InGameMenu__SetMinimapActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x18224fe80

void UI_InGameMenu__SetMinimapActive(UI_InGameMenu_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  bVar1 = UI_InGameMenu__AllowMap(__this,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._minimapPanel;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
  }
  return;
}


// UI.InGameMenu$$SetChatPanelActive
// il2cpp: void UI_InGameMenu__SetChatPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x18224f480

void UI_InGameMenu__SetChatPanelActive(UI_InGameMenu_o *__this,bool active,MethodInfo *method)

{
  UI_ChatPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields).ChatPanel;
  if (__this_00 != (UI_ChatPanel_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,active,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetFeedPanelActive
// il2cpp: void UI_InGameMenu__SetFeedPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x18224f4c0

void UI_InGameMenu__SetFeedPanelActive(UI_InGameMenu_o *__this,bool active,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UI_FeedPanel_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if (Il2CppMethodInitialized_184347296 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347296 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).FeedConsole, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == false) {
      return;
    }
    __this_00 = (__this->fields).FeedPanel;
    if ((__this_00 != (UI_FeedPanel_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,active,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetBottomHUDActive
// il2cpp: void UI_InGameMenu__SetBottomHUDActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x18224f290

void UI_InGameMenu__SetBottomHUDActive(UI_InGameMenu_o *__this,bool active,MethodInfo *method)

{
  UI_HUDBottomHandler_o *pUVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  
  pUVar1 = (__this->fields).HUDBottomHandler;
  if (pUVar1 != (UI_HUDBottomHandler_o *)0x0) {
    if (Il2CppMethodInitialized_184347266 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184347266 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields)._hudBottom;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (pUVar1->fields)._hudBottom;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_18224f31f;
      UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
    }
    return;
  }
label_18224f31f:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetLabel
// il2cpp: void UI_InGameMenu__SetLabel (UI_InGameMenu_o* __this, System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x18224fb00

void UI_InGameMenu__SetLabel
               (UI_InGameMenu_o *__this,System_String_o *label,System_String_o *message,float time,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__bool__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (Il2CppMethodInitialized_184347297 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
    Il2CppMethodInitialized_184347297 = '\x01';
  }
  UI_InGameMenu__SetLabelText(__this,label,message,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._labelHasTimeLeft;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    System_Collections_Generic_Dictionary_object__bool___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)label,
               time != 0.0,
               (MethodInfo_1465940 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
    __this_01 = (__this->fields)._labelTimeLeft;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)label,time
                 ,(MethodInfo_1488DA0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetLabelText
// il2cpp: void UI_InGameMenu__SetLabelText (UI_InGameMenu_o* __this, System_String_o* label, System_String_o* message, const MethodInfo* method);
// 0x18224f860

void UI_InGameMenu__SetLabelText
               (UI_InGameMenu_o *__this,System_String_o *label,System_String_o *message,MethodInfo *method)

{
  UI_InGameLabel_o *pUVar1;
  bool bVar2;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_184347298 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TopRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleRight");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"MiddleLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TopCenter");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"BottomRight");
    Il2CppMethodInitialized_184347298 = '\x01';
  }
  bVar2 = System_String__op_Equality(label,"TopCenter",(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._topCenterLabel;
    if (pUVar1 != (UI_InGameLabel_o *)0x0) {
      UI_InGameLabel__set_Text(pUVar1,message,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    bVar2 = System_String__op_Equality(label,"TopLeft",(MethodInfo *)0x0);
    if (bVar2) {
      (__this->fields)._topLeftText = message;
      targetAddress = &(__this->fields)._topLeftText;
label_18224f9e0:
      Il2CppCodeGenWriteBarrier(targetAddress,message);
      return;
    }
    bVar2 = System_String__op_Equality(label,"TopRight",(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._topRightLabel;
      if (pUVar1 != (UI_InGameLabel_o *)0x0) {
        UI_InGameLabel__set_Text(pUVar1,message,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar2 = System_String__op_Equality(label,"MiddleCenter",(MethodInfo *)0x0);
      if (bVar2) {
        (__this->fields)._middleCenterText = message;
        targetAddress = &(__this->fields)._middleCenterText;
        goto label_18224f9e0;
      }
      bVar2 = System_String__op_Equality(label,"MiddleLeft",(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (__this->fields)._middleLeftLabel;
        if (pUVar1 != (UI_InGameLabel_o *)0x0) {
          UI_InGameLabel__set_Text(pUVar1,message,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        bVar2 = System_String__op_Equality(label,"MiddleRight",(MethodInfo *)0x0);
        if (bVar2) {
          pUVar1 = (__this->fields)._middleRightLabel;
          if (pUVar1 != (UI_InGameLabel_o *)0x0) {
            UI_InGameLabel__set_Text(pUVar1,message,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          bVar2 = System_String__op_Equality(label,"BottomLeft",(MethodInfo *)0x0);
          if (!bVar2) {
            bVar2 = System_String__op_Equality(label,"BottomRight",(MethodInfo *)0x0);
            if (bVar2) {
              (__this->fields)._bottomRightText = message;
              targetAddress = &(__this->fields)._bottomRightText;
            }
            else {
              bVar2 = System_String__op_Equality(label,"BottomCenter",(MethodInfo *)0x0);
              if (!bVar2) {
                return;
              }
              (__this->fields)._bottomCenterText = message;
              targetAddress = &(__this->fields)._bottomCenterText;
            }
            goto label_18224f9e0;
          }
          pUVar1 = (__this->fields)._bottomLeftLabel;
          if (pUVar1 != (UI_InGameLabel_o *)0x0) {
            UI_InGameLabel__set_Text(pUVar1,message,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$WaitAndShowBlood
// il2cpp: System_Collections_IEnumerator_o* UI_InGameMenu__WaitAndShowBlood (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182253b20

System_Collections_IEnumerator_o * UI_InGameMenu__WaitAndShowBlood(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184347299 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_WaitAndShowBlood_d__113);
    Il2CppMethodInitialized_184347299 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_InGameMenu_WaitAndShowBlood_d__113);
  UI_InGameMenu__WaitAndShowBlood_d__113___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$Update
// il2cpp: void UI_InGameMenu__Update (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182252800
// eh: try 0x182252c70..0x182253b05 -> pad 0x183331db0 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 71 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182252d55: mov rdx, qword ptr [rip + 0x1e66144]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_Dispose
// asm:   0x182252d5c: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182252d61: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182252d66: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182252d6b: test rcx, rcx
// asm:   0x182252d6e: jne 0x182253ae1
// asm:   0x182252d74: xor r15d, r15d
// asm:   0x182252d77: mov rdi, qword ptr [rsp + 0x130]
// asm:   0x182252d7f: xorps xmm7, xmm7
// asm:   0x182252e1c: mov rdx, qword ptr [rip + 0x1e44af5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x182252e23: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182252e28: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182252e2d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182252e32: test rcx, rcx
// asm:   0x182252e35: jne 0x182253aed
// asm:   0x182252e3b: xor r15d, r15d
// asm:   0x182252e3e: mov rdi, qword ptr [rsp + 0x130]
// asm:   0x182252e46: xorps xmm7, xmm7
// asm:   0x182252f9d: mov rsi, r15
// asm:   0x182252fa0: jmp 0x182252fd5
// asm:   0x1822530b1: mov eax, r15d
// asm:   0x182253258: mov rcx, qword ptr [rip + 0x1ea95e9]  ; TypeInfo_Settings_SettingsManager
// asm:   0x18225344d: mov r14, qword ptr [rip + 0x1e2bad4]  ; ""
// asm:   0x182253616: mov rcx, rbx
// asm:   0x182253675: mov rbx, r14
// asm:   0x182253678: jmp 0x18225362e
// asm:   0x1822539bc: nop dword ptr [rax]
// asm:   0x182253a35: mov rdx, qword ptr [rip + 0x1e35dac]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_Dispose
// asm:   0x182253a3c: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182253a41: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182253a46: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182253a4b: test rcx, rcx
// asm:   0x182253a4e: jne 0x182253b05
// asm:   0x182253a54: mov rdi, qword ptr [rsp + 0x130]
// asm:   0x182253a5c: xorps xmm7, xmm7
// asm:   0x182253ae1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182253aed: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182253b05: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18332a3f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a3f5: push rbp
// asm:   0x18332a3f6: sub rsp, 0x30
// asm:   0x18332a3fa: mov rbp, rdx
// asm:   0x18332a3fd: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18332a404: mov rcx, qword ptr [rax]
// asm:   0x18332a407: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18332a40b: movabs rax, 0
// asm:   0x18332a415: add rsp, 0x30
// asm:   0x18332a419: pop rbp
// asm:   0x18332a41a: ret 
// asm:   0x183331db0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331db5: push rbp
// asm:   0x183331db6: sub rsp, 0x30
// asm:   0x183331dba: mov rbp, rdx
// asm:   0x183331dbd: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x183331dc4: mov rcx, qword ptr [rax]
// asm:   0x183331dc7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183331dcb: movabs rax, 0
// asm:   0x183331dd5: add rsp, 0x30
// asm:   0x183331dd9: pop rbp
// asm:   0x183331dda: ret 
// asm:   0x183331de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331de5: push rbp
// asm:   0x183331de6: sub rsp, 0x30
// asm:   0x183331dea: mov rbp, rdx
// asm:   0x183331ded: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x183331df4: mov rcx, qword ptr [rax]
// asm:   0x183331df7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183331dfb: movabs rax, 0
// asm:   0x183331e05: add rsp, 0x30
// asm:   0x183331e09: pop rbp
// asm:   0x183331e0a: ret 

void UI_InGameMenu__Update(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  GameManagers_InGameManager_o *pGVar4;
  UI_GlobalPauseGamePopup_o *pUVar5;
  UI_GlobalPauseGamePopup_c *pUVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Collections_Generic_Dictionary_string__bool__o *pSVar8;
  System_Collections_Generic_Dictionary_string__float__o *pSVar9;
  UI_InGameLabel_o *pUVar10;
  Cameras_BaseCamera_c *pCVar11;
  Il2CppClass *pIVar12;
  void *pvVar13;
  longlong lVar14;
  Photon_Realtime_Player_o *player;
  Settings_InGameCharacterSettings_o *pSVar15;
  Settings_IntSetting_o *pSVar16;
  Characters_BaseCharacter_o *pCVar17;
  Settings_InputSettings_o *pSVar18;
  Settings_GeneralInputSettings_o *pSVar19;
  Settings_KeybindSetting_o *pSVar20;
  Settings_InGameSet_o *pSVar21;
  Settings_BoolSetting_o *pSVar22;
  UnityEngine_UI_Text_o *pUVar23;
  UI_KillFeedBigPopup_o *pUVar24;
  UI_KillScorePopup_o *pUVar25;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  UI_SnapshotPopup_o *pUVar26;
  bool bVar27;
  uint uVar28;
  int32_t iVar29;
  System_String_o *pSVar30;
  Photon_Realtime_Player_array *pPVar31;
  Il2CppObject *arg0;
  System_String_o *pSVar32;
  System_String_array *values;
  System_String_o *pSVar33;
  System_String_o **ppSVar34;
  Cameras_BaseCamera_o *pCVar35;
  TMPro_TextMeshProUGUI_o *pTVar36;
  UnityEngine_UI_Image_o *pUVar37;
  Cameras_BaseCamera_o *pCVar38;
  Cameras_BaseCamera_o *pCVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  uint local_res18 [2];
  int32_t local_res20 [2];
  undefined1 local_f8 [16];
  System_String_o *local_e8;
  Il2CppObject *pIStack_e0;
  int32_t local_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_c8;
  System_String_o *local_c0;
  undefined1 local_b8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_b0;
  System_String_o *local_a8;
  undefined1 local_a0 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_98;
  System_String_o *local_90;
  Il2CppObject *pIStack_88;
  undefined8 local_80;
  
  if (Il2CppMethodInitialized_18434729a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_bool_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera_SpecateMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Paused by master client.");
    il2cpp_codegen_initialize_runtime_metadata(&"{0}: ");
    il2cpp_codegen_initialize_runtime_metadata(&"). ");
    il2cpp_codegen_initialize_runtime_metadata(&"Prev: ");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"Spectating. ");
    il2cpp_codegen_initialize_runtime_metadata(&"Next: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Join: ");
    il2cpp_codegen_initialize_runtime_metadata(&"SANDBOX");
    il2cpp_codegen_initialize_runtime_metadata(&"Spectating ");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Unpausing in: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Restarting in ");
    Il2CppMethodInitialized_18434729a = '\x01';
  }
  local_a0 = (undefined1  [8])0x0;
  pUStack_98 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_90 = (System_String_o *)0x0;
  pIStack_88 = (Il2CppObject *)0x0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_d0 = (undefined1  [8])0x0;
  pUStack_c8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_c0 = (System_String_o *)0x0;
  pCVar35 = (Cameras_BaseCamera_o *)0x0;
  uVar40 = 0;
  local_res18[0] = 0;
  local_b8 = (undefined1  [8])0x0;
  pUStack_b0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_a8 = (System_String_o *)0x0;
  pGVar4 = (__this->fields)._gameManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar27 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar27) {
    return;
  }
  pGVar4 = (__this->fields)._gameManager;
  if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
     (pUVar5 = (__this->fields)._globalPauseGamePopup, pUVar5 == (UI_GlobalPauseGamePopup_o *)0x0))
  goto label_182253aca;
  pUVar6 = pUVar5->klass;
  if ((pGVar4->fields).GlobalPause == false) {
    (*(pUVar6->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar6->vtable)._22_Hide.method);
  }
  else {
    (*(pUVar6->vtable)._21_Show.methodPtr)(pUVar5,(pUVar6->vtable)._21_Show.method);
    pGVar4 = (__this->fields)._gameManager;
    if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182253aca;
    pUVar5 = (__this->fields)._globalPauseGamePopup;
    fVar41 = (pGVar4->fields).PauseTimeLeft;
    if (0.0 <= fVar41) {
      if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182253aca;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar30 = Utility_Util__FormatFloat(fVar41,1,(MethodInfo *)0x0);
      pSVar30 = System_String__Concat_1969e50("Unpausing in: ",pSVar30,(MethodInfo *)0x0);
      if ((pUVar5 == (UI_GlobalPauseGamePopup_o *)0x0) ||
         (pUVar23 = (pUVar5->fields)._label, pUVar23 == (UnityEngine_UI_Text_o *)0x0)) goto label_182253aca;
      (*(pUVar23->klass->vtable)._75_set_text.methodPtr)
                (pUVar23,pSVar30,(pUVar23->klass->vtable)._75_set_text.method);
    }
    else {
      if ((pUVar5 == (UI_GlobalPauseGamePopup_o *)0x0) ||
         (pUVar23 = (pUVar5->fields)._label, pUVar23 == (UnityEngine_UI_Text_o *)0x0)) goto label_182253aca;
      (*(pUVar23->klass->vtable)._75_set_text.methodPtr)
                (pUVar23,"Paused by master client.",(pUVar23->klass->vtable)._75_set_text.method);
    }
  }
  pSVar7 = (__this->fields).labelsToDeactivate;
  if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_182253aca;
  piVar1 = &(pSVar7->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar29 = (pSVar7->fields)._size;
  (pSVar7->fields)._size = 0;
  if (0 < iVar29) {
    System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar29,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._labelHasTimeLeft;
  if (pSVar8 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) goto label_182253aca;
  System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_f8,
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
             (MethodInfo_13C1150 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_GetEnumerator)
  ;
  local_a0 = (undefined1  [8])local_f8._0_8_;
  pUStack_98 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f8._8_8_;
  local_90 = local_e8;
  pIStack_88 = pIStack_e0;
  local_80._0_4_ = local_d8;
  local_80._4_4_ = uStack_d4;
  local_f8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0;
  while (bVar27 = System_Collections_Generic_Dictionary_Enumerator_object__bool___MoveNext
                            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_a0,
                             (MethodInfo_156AD20 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_MoveNext)
        , pSVar30 = local_90, bVar27) {
    if ((char)pIStack_88 != '\0') {
      pSVar9 = (__this->fields)._labelTimeLeft;
      if (pSVar9 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar41 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,
                          (Il2CppObject *)local_90,
                          (MethodInfo_1488BA0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      fVar42 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,(Il2CppObject *)pSVar30,
                 fVar41 - fVar42,
                 (MethodInfo_1488DA0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item)
      ;
      pSVar9 = (__this->fields)._labelTimeLeft;
      if (pSVar9 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar41 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,
                          (Il2CppObject *)pSVar30,
                          (MethodInfo_1488BA0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      if (fVar41 <= 0.0) {
        pSVar7 = (__this->fields).labelsToDeactivate;
        if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pSVar7,pSVar30,MethodInfo_System_Collections_Generic_List_string_Add);
        UI_InGameMenu__SetLabelText(__this,pSVar30,"",(MethodInfo *)0x0);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__bool___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0,
             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_bool_Dispose);
  pSVar7 = (__this->fields).labelsToDeactivate;
  if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_182253aca;
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_f8,
             (System_Collections_Generic_List_T__o *)pSVar7,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_d0 = (undefined1  [8])local_f8._0_8_;
  pUStack_c8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f8._8_8_;
  local_c0 = local_e8;
  local_f8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d0;
  while (bVar27 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_d0,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext), bVar27) {
    pSVar8 = (__this->fields)._labelHasTimeLeft;
    if (pSVar8 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__bool___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,(Il2CppObject *)local_c0,false,
               (MethodInfo_1465940 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_set_Item);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d0,
             MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  pGVar4 = (__this->fields)._gameManager;
  if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182253aca;
  pUVar10 = (__this->fields)._middleCenterLabel;
  ppSVar34 = &(__this->fields)._middleCenterText;
  pSVar30 = *ppSVar34;
  if ((pGVar4->fields).IsEnding == false) {
    if (pUVar10 == (UI_InGameLabel_o *)0x0) goto label_182253aca;
    if (pSVar30 == (System_String_o *)0x0) {
      ppSVar34 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    pSVar30 = *ppSVar34;
  }
  else {
    if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182253aca;
    local_res18[0] = (uint)(pGVar4->fields).EndTimeLeft;
    pSVar33 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
    pSVar33 = System_String__Concat_1969e50("Restarting in ",pSVar33,(MethodInfo *)0x0);
    pSVar30 = UI_InGameMenu__CombineLines(__this,pSVar30,pSVar33,(MethodInfo *)0x0);
    if (pUVar10 == (UI_InGameLabel_o *)0x0) goto label_182253aca;
    if (pSVar30 == (System_String_o *)0x0) {
      pSVar30 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
  }
  if ((pUVar10->fields)._legacy == false) {
    pTVar36 = (pUVar10->fields)._tmpText;
    if (pTVar36 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182253aca;
    (*(pTVar36->klass->vtable)._66_set_text.methodPtr)
              (pTVar36,pSVar30,(pTVar36->klass->vtable)._66_set_text.method);
  }
  else {
    pUVar23 = (pUVar10->fields)._legacyText;
    if (pUVar23 == (UnityEngine_UI_Text_o *)0x0) goto label_182253aca;
    (*(pUVar23->klass->vtable)._75_set_text.methodPtr)
              (pUVar23,pSVar30,(pUVar23->klass->vtable)._75_set_text.method);
  }
  if ((pUVar10->fields)._legacy == false) {
    pTVar36 = (pUVar10->fields)._tmpText;
    if (pTVar36 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182253aca;
    pUVar37 = (pUVar10->fields)._background;
    pSVar30 = (*(pTVar36->klass->vtable)._65_get_text.methodPtr)
                        (pTVar36,(pTVar36->klass->vtable)._65_get_text.method);
    bVar27 = System_String__IsNullOrEmpty(pSVar30,(MethodInfo *)0x0);
    if (pUVar37 == (UnityEngine_UI_Image_o *)0x0) goto label_182253aca;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar37,!bVar27,(MethodInfo *)0x0);
  }
  pCVar39 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  pCVar38 = pCVar35;
  if (pCVar39 != (Cameras_BaseCamera_o *)0x0) {
    bVar2 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar39->klass->_2).typeHierarchyDepth < bVar2) ||
       (pCVar38 = pCVar39,
       (pCVar39->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
       (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar39);
    }
  }
  fVar41 = (__this->fields)._spectateUpdateTimeLeft;
  fVar42 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._spectateUpdateTimeLeft = fVar41 - fVar42;
  if (fVar41 - fVar42 <= 0.0) {
    (__this->fields)._spectateUpdateTimeLeft = 1.0;
    if (pCVar38 == (Cameras_BaseCamera_o *)0x0) goto label_182253aca;
    pCVar11 = (*(uint64_t *)((char *)pCVar38 + 0x38));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar27 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar27) {
      if (((((*(uint64_t *)((char *)pCVar38 + 0x38)) == (Cameras_BaseCamera_c *)0x0) ||
           (pIVar12 = (((*(Il2CppClass **)((char *)pCVar38 + 0x38)))->_1).klass, pIVar12 == (Il2CppClass *)0x0)) ||
          (pvVar13 = (pIVar12->_1).byval_arg.data, pvVar13 == (void *)0x0)) ||
         (lVar14 = *(longlong *)((longlong)pvVar13 + 0x80), lVar14 == 0)) goto label_182253aca;
      iVar3 = *(int *)(lVar14 + 0x18);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar31 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
      local_res18[0] = 0;
      pCVar39 = pCVar35;
      if (pPVar31 == (Photon_Realtime_Player_array *)0x0) goto label_182253aca;
      while( true ) {
        uVar40 = (uint)pCVar39;
        uVar28 = (uint)pCVar35;
        if ((int)pPVar31->max_length <= (int)uVar28) break;
        if ((uint)pPVar31->max_length <= uVar28) goto label_182253af9;
        player = pPVar31->m_Items[(int)uVar28];
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        iVar29 = PhotonExtensions__GetIntProperty
                           (player,TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID,-1,
                            (MethodInfo *)0x0);
        uVar28 = uVar40 + 1;
        if (iVar29 != iVar3) {
          uVar28 = uVar40;
        }
        local_res18[0] = local_res18[0] + 1;
        pCVar35 = (Cameras_BaseCamera_o *)(ulonglong)local_res18[0];
        pCVar39 = (Cameras_BaseCamera_o *)(ulonglong)uVar28;
      }
    }
    (__this->fields)._spectateCount = uVar40;
  }
  pSVar15 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if ((pSVar15 == (Settings_InGameCharacterSettings_o *)0x0) ||
     (pSVar16 = (pSVar15->fields).ChooseStatus, pSVar16 == (Settings_IntSetting_o *)0x0)) goto label_182253aca;
  if ((pSVar16->fields)._value == 1) {
label_18225325f:
    pSVar18 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if ((pSVar18 == (Settings_InputSettings_o *)0x0) ||
       (pSVar16 = (pSVar15->fields).ChooseStatus, pSVar16 == (Settings_IntSetting_o *)0x0))
    goto label_182253aca;
    if ((pSVar16->fields)._value == 0) {
      pSVar30 = "";
      if (pCVar38 == (Cameras_BaseCamera_o *)0x0) goto label_182253aca;
    }
    else {
      pSVar19 = (pSVar18->fields).General;
      if ((pSVar19 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar20 = (pSVar19->fields).SpectatePreviousPlayer, pSVar20 == (Settings_KeybindSetting_o *)0x0)) {
label_182253af3:
        ThrowNullReferenceException();
      }
      pSVar30 = (*(pSVar20->klass->vtable)._3_ToString.methodPtr)
                          (pSVar20,(pSVar20->klass->vtable)._3_ToString.method);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar30 = GameManagers_ChatManager__GetColorString(pSVar30,3,false,(MethodInfo *)0x0);
      pSVar30 = System_String__Concat_1969b70
                          ("Prev: ",pSVar30,", ",(MethodInfo *)0x0);
      pSVar20 = (pSVar19->fields).SpectateNextPlayer;
      if (pSVar20 == (Settings_KeybindSetting_o *)0x0) goto label_182253af3;
      pSVar33 = (*(pSVar20->klass->vtable)._3_ToString.methodPtr)
                          (pSVar20,(pSVar20->klass->vtable)._3_ToString.method);
      pSVar33 = GameManagers_ChatManager__GetColorString(pSVar33,3,false,(MethodInfo *)0x0);
      pSVar30 = System_String__Concat_1969590
                          (pSVar30,"Next: ",pSVar33,", ",(MethodInfo *)0x0);
      pSVar20 = (pSVar19->fields).ChangeCharacter;
      if (pSVar20 == (Settings_KeybindSetting_o *)0x0) goto label_182253af3;
      pSVar33 = (*(pSVar20->klass->vtable)._3_ToString.methodPtr)
                          (pSVar20,(pSVar20->klass->vtable)._3_ToString.method);
      pSVar33 = GameManagers_ChatManager__GetColorString(pSVar33,3,false,(MethodInfo *)0x0);
      pSVar30 = System_String__Concat_1969590
                          (pSVar30,"Join: ",pSVar33,", ",(MethodInfo *)0x0);
      if ((pCVar38 == (Cameras_BaseCamera_o *)0x0) || ((*(uint64_t *)((char *)pCVar38 + 0x40)) == (Utility_Cycle_T__o *)0x0))
      goto label_182253af3;
      local_res20[0] =
           Utility_Cycle_Int32Enum___Current
                     ((*(uint64_t *)((char *)pCVar38 + 0x40)),
                      (MethodInfo_1387080 *)MethodInfo_Utility_Cycle_InGameCamera_SpecateMode_Current);
      arg0 = il2cpp_value_box((Il2CppClass *)TypeInfo_Cameras_InGameCamera_SpecateMode,local_res20);
      pSVar33 = System_String__Format("{0}: ",arg0,(MethodInfo *)0x0);
      pSVar20 = (pSVar19->fields).ChangeCamera;
      if (pSVar20 == (Settings_KeybindSetting_o *)0x0) goto label_182253af3;
      pSVar32 = (*(pSVar20->klass->vtable)._3_ToString.methodPtr)
                          (pSVar20,(pSVar20->klass->vtable)._3_ToString.method);
      pSVar32 = GameManagers_ChatManager__GetColorString(pSVar32,3,false,(MethodInfo *)0x0);
      pSVar30 = System_String__Concat_1969b70(pSVar30,pSVar33,pSVar32,(MethodInfo *)0x0);
    }
    pCVar11 = (*(uint64_t *)((char *)pCVar38 + 0x38));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar27 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar27) {
      pGVar4 = (__this->fields)._gameManager;
      if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182253aca;
      pCVar11 = (*(uint64_t *)((char *)pCVar38 + 0x38));
      pCVar17 = (pGVar4->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar27 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)pCVar17,(MethodInfo *)0x0);
      if (!bVar27) goto label_1822535b2;
      values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
      pSVar33 = "Spectating ";
      if (values == (System_String_array *)0x0) goto label_182253aca;
      if ((int)values->max_length == 0) goto label_182253af9;
      values->m_Items[0] = "Spectating ";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar33);
      if ((*(uint64_t *)((char *)pCVar38 + 0x38)) == (Cameras_BaseCamera_c *)0x0) goto label_182253aca;
      if ((uint)values->max_length < 2) {
label_182253af9:
        ThrowIndexOutOfRangeException();
      }
      pIVar12 = (((*(Il2CppClass **)((char *)pCVar38 + 0x38)))->_1).element_class;
      values->m_Items[1] = (System_String_o *)pIVar12;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1,pIVar12);
      pSVar33 = " (";
      if ((uint)values->max_length < 3) goto label_182253af9;
      values->m_Items[2] = " (";
      Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar33);
      pSVar33 = System_Int32__ToString(&(__this->fields)._spectateCount,(MethodInfo *)0x0);
      if ((uint)values->max_length < 4) goto label_182253af9;
      values->m_Items[3] = pSVar33;
      Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar33);
      pSVar33 = "). ";
      if ((uint)values->max_length < 5) goto label_182253af9;
      values->m_Items[4] = "). ";
      Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar33);
      if ((uint)values->max_length < 6) goto label_182253af9;
      values->m_Items[5] = pSVar30;
      Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar30);
      pSVar30 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
    }
    else {
label_1822535b2:
      pSVar30 = System_String__Concat_1969e50("Spectating. ",pSVar30,(MethodInfo *)0x0);
    }
    pUVar10 = (__this->fields)._bottomCenterLabel;
    pSVar33 = (__this->fields)._bottomCenterText;
    if (Il2CppMethodInitialized_18434729b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"\n");
      Il2CppMethodInitialized_18434729b = '\x01';
    }
    if (((__this->fields)._legacyLabels != false) ||
       ((bVar27 = System_String__IsNullOrEmpty(pSVar33,(MethodInfo *)0x0), pSVar32 = pSVar30, !bVar27 &&
        (bVar27 = System_String__IsNullOrEmpty(pSVar30,(MethodInfo *)0x0), pSVar32 = pSVar33, !bVar27)))) {
      pSVar32 = System_String__Concat_1969b70(pSVar33,"\n",pSVar30,(MethodInfo *)0x0);
    }
    if (pUVar10 == (UI_InGameLabel_o *)0x0) goto label_182253aca;
    if (pSVar32 == (System_String_o *)0x0) {
      pSVar32 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if ((pUVar10->fields)._legacy == false) {
      pTVar36 = (pUVar10->fields)._tmpText;
      if (pTVar36 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182253aca;
      (*(pTVar36->klass->vtable)._66_set_text.methodPtr)
                (pTVar36,pSVar32,(pTVar36->klass->vtable)._66_set_text.method);
    }
    else {
      pUVar23 = (pUVar10->fields)._legacyText;
      if (pUVar23 == (UnityEngine_UI_Text_o *)0x0) goto label_182253aca;
      (*(pUVar23->klass->vtable)._75_set_text.methodPtr)
                (pUVar23,pSVar32,(pUVar23->klass->vtable)._75_set_text.method);
    }
    if ((pUVar10->fields)._legacy == false) {
      pTVar36 = (pUVar10->fields)._tmpText;
      if (pTVar36 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182253aca;
      pUVar37 = (pUVar10->fields)._background;
label_1822536b1:
      pSVar30 = (*(pTVar36->klass->vtable)._65_get_text.methodPtr)
                          (pTVar36,(pTVar36->klass->vtable)._65_get_text.method);
      bVar27 = System_String__IsNullOrEmpty(pSVar30,(MethodInfo *)0x0);
      if (pUVar37 == (UnityEngine_UI_Image_o *)0x0) goto label_182253aca;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar37,!bVar27,(MethodInfo *)0x0);
    }
  }
  else {
    pGVar4 = (__this->fields)._gameManager;
    if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_182253aca;
    pCVar17 = (pGVar4->fields).CurrentCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar27 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar27) goto label_18225325f;
    pGVar4 = (__this->fields)._gameManager;
    if ((pGVar4 == (GameManagers_InGameManager_o *)0x0) ||
       (pCVar17 = (pGVar4->fields).CurrentCharacter, pCVar17 == (Characters_BaseCharacter_o *)0x0))
    goto label_182253aca;
    if ((pCVar17->fields).Dead != false) goto label_18225325f;
    pUVar10 = (__this->fields)._bottomCenterLabel;
    if (pUVar10 == (UI_InGameLabel_o *)0x0) goto label_182253aca;
    ppSVar34 = &(__this->fields)._bottomCenterText;
    if (*ppSVar34 == (System_String_o *)0x0) {
      ppSVar34 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    if ((pUVar10->fields)._legacy == false) {
      pTVar36 = (pUVar10->fields)._tmpText;
      if (pTVar36 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182253aca;
      (*(pTVar36->klass->vtable)._66_set_text.methodPtr)
                (pTVar36,*ppSVar34,(pTVar36->klass->vtable)._66_set_text.method);
    }
    else {
      pUVar23 = (pUVar10->fields)._legacyText;
      if (pUVar23 == (UnityEngine_UI_Text_o *)0x0) goto label_182253aca;
      (*(pUVar23->klass->vtable)._75_set_text.methodPtr)
                (pUVar23,*ppSVar34,(pUVar23->klass->vtable)._75_set_text.method);
    }
    if ((pUVar10->fields)._legacy == false) {
      pTVar36 = (pUVar10->fields)._tmpText;
      if (pTVar36 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182253aca;
      pUVar37 = (pUVar10->fields)._background;
      goto label_1822536b1;
    }
  }
  pSVar30 = UI_InGameMenu__GetKeybindStrings(__this,(MethodInfo *)0x0);
  pSVar21 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if ((pSVar21 != (Settings_InGameSet_o *)0x0) &&
     (pSVar22 = (pSVar21->fields).Sandbox, pSVar22 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar22->fields)._value != false) {
      pSVar30 = UI_InGameMenu__CombineLines(__this,"SANDBOX",pSVar30,(MethodInfo *)0x0);
    }
    pUVar10 = (__this->fields)._bottomRightLabel;
    bVar27 = System_String__IsNullOrEmpty(pSVar30,(MethodInfo *)0x0);
    pSVar33 = (__this->fields)._bottomRightText;
    if (!bVar27) {
      pSVar33 = UI_InGameMenu__CombineLines(__this,pSVar33,pSVar30,(MethodInfo *)0x0);
    }
    if (pUVar10 != (UI_InGameLabel_o *)0x0) {
      if (pSVar33 == (System_String_o *)0x0) {
        pSVar33 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      if ((pUVar10->fields)._legacy == false) {
        pTVar36 = (pUVar10->fields)._tmpText;
        if (pTVar36 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182253aca;
        (*(pTVar36->klass->vtable)._66_set_text.methodPtr)
                  (pTVar36,pSVar33,(pTVar36->klass->vtable)._66_set_text.method);
      }
      else {
        pUVar23 = (pUVar10->fields)._legacyText;
        if (pUVar23 == (UnityEngine_UI_Text_o *)0x0) goto label_182253aca;
        (*(pUVar23->klass->vtable)._75_set_text.methodPtr)
                  (pUVar23,pSVar33,(pUVar23->klass->vtable)._75_set_text.method);
      }
      if ((pUVar10->fields)._legacy == false) {
        pTVar36 = (pUVar10->fields)._tmpText;
        if (pTVar36 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182253aca;
        pUVar37 = (pUVar10->fields)._background;
        pSVar30 = (*(pTVar36->klass->vtable)._65_get_text.methodPtr)
                            (pTVar36,(pTVar36->klass->vtable)._65_get_text.method);
        bVar27 = System_String__IsNullOrEmpty(pSVar30,(MethodInfo *)0x0);
        if (pUVar37 == (UnityEngine_UI_Image_o *)0x0) goto label_182253aca;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar37,!bVar27,(MethodInfo *)0x0);
      }
      pUVar10 = (__this->fields)._topLeftLabel;
      if (pUVar10 != (UI_InGameLabel_o *)0x0) {
        ppSVar34 = &(__this->fields)._topLeftText;
        if (*ppSVar34 == (System_String_o *)0x0) {
          ppSVar34 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
        }
        if ((pUVar10->fields)._legacy == false) {
          pTVar36 = (pUVar10->fields)._tmpText;
          if (pTVar36 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182253aca;
          (*(pTVar36->klass->vtable)._66_set_text.methodPtr)
                    (pTVar36,*ppSVar34,(pTVar36->klass->vtable)._66_set_text.method);
        }
        else {
          pUVar23 = (pUVar10->fields)._legacyText;
          if (pUVar23 == (UnityEngine_UI_Text_o *)0x0) goto label_182253aca;
          (*(pUVar23->klass->vtable)._75_set_text.methodPtr)
                    (pUVar23,*ppSVar34,(pUVar23->klass->vtable)._75_set_text.method);
        }
        if ((pUVar10->fields)._legacy == false) {
          pTVar36 = (pUVar10->fields)._tmpText;
          if (pTVar36 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182253aca;
          pUVar37 = (pUVar10->fields)._background;
          pSVar30 = (*(pTVar36->klass->vtable)._65_get_text.methodPtr)
                              (pTVar36,(pTVar36->klass->vtable)._65_get_text.method);
          bVar27 = System_String__IsNullOrEmpty(pSVar30,(MethodInfo *)0x0);
          if (pUVar37 == (UnityEngine_UI_Image_o *)0x0) goto label_182253aca;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar37,!bVar27,(MethodInfo *)0x0);
        }
        pUVar24 = (__this->fields)._killFeedBigPopup;
        if (pUVar24 != (UI_KillFeedBigPopup_o *)0x0) {
          fVar41 = (pUVar24->fields).TimeLeft;
          fVar42 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (pUVar24->fields).TimeLeft = fVar41 - fVar42;
          pUVar24 = (__this->fields)._killFeedBigPopup;
          if (pUVar24 != (UI_KillFeedBigPopup_o *)0x0) {
            if (((pUVar24->fields).IsActive != false) && ((pUVar24->fields).TimeLeft <= 0.0)) {
              (*(pUVar24->klass->vtable)._22_Hide.methodPtr)(pUVar24,(pUVar24->klass->vtable)._22_Hide.method)
              ;
            }
            fVar41 = (__this->fields)._killScoreTimeLeft;
            fVar42 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (__this->fields)._killScoreTimeLeft = fVar41 - fVar42;
            if (fVar41 - fVar42 <= 0.0) {
              pUVar25 = (__this->fields)._killScorePopup;
              if (pUVar25 == (UI_KillScorePopup_o *)0x0) goto label_182253aca;
              (*(pUVar25->klass->vtable)._22_Hide.methodPtr)(pUVar25,(pUVar25->klass->vtable)._22_Hide.method)
              ;
            }
            __this_00 = (__this->fields)._killFeedSmallPopups;
            if (__this_00 != (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0) {
              System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_f8,
                         (System_Collections_Generic_List_T__o *)__this_00,
                         (MethodInfo_91F180 *)
                         MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_GetEnumerator);
              local_b8 = (undefined1  [8])local_f8._0_8_;
              pUStack_b0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f8._8_8_;
              local_a8 = local_e8;
              local_f8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              local_f8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b8;
              while (bVar27 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                                         (MethodInfo_153A2A0 *)
                                         MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_MoveNext
                                        ), pSVar30 = local_a8, bVar27) {
                if (local_a8 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                fVar41 = *(float *)&(*(uint64_t *)((char *)local_a8 + 0xd8));
                fVar42 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                fVar41 = fVar41 - fVar42;
                *(float *)&(*(uint64_t *)((char *)pSVar30 + 0xd8)) = fVar41;
                if ((*(char *)&(*(uint64_t *)((char *)pSVar30 + 0x90)) != '\0') && (fVar41 <= 0.0)) {
                  (*((Il2CppClass *)pSVar30->klass)->vtable[0x16].methodPtr)
                            (pSVar30,((Il2CppClass *)pSVar30->klass)->vtable[0x16].method);
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_b8,
                         MethodInfo_System_Collections_Generic_List_Enumerator_KillFeedSmallPopup_Dispose);
              fVar41 = (__this->fields)._snapshotTimeLeft;
              fVar42 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              fVar41 = fVar41 - fVar42;
              (__this->fields)._snapshotTimeLeft = fVar41;
              pUVar26 = (__this->fields)._snapshotPopup;
              if (pUVar26 != (UI_SnapshotPopup_o *)0x0) {
                if (((pUVar26->fields).IsActive != false) && (fVar41 <= 0.0)) {
                  (*(pUVar26->klass->vtable)._22_Hide.methodPtr)
                            (pUVar26,(pUVar26->klass->vtable)._22_Hide.method);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
label_182253aca:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$CombineLines
// il2cpp: System_String_o* UI_InGameMenu__CombineLines (UI_InGameMenu_o* __this, System_String_o* first, System_String_o* second, const MethodInfo* method);
// 0x18224c200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224c259: mov rcx, rdi

System_String_o *
UI_InGameMenu__CombineLines
          (UI_InGameMenu_o *__this,System_String_o *first,System_String_o *second,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434729b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_18434729b = '\x01';
  }
  if ((__this->fields)._legacyLabels == false) {
    bVar1 = System_String__IsNullOrEmpty(first,(MethodInfo *)0x0);
    if (bVar1) {
      return second;
    }
    bVar1 = System_String__IsNullOrEmpty(second,(MethodInfo *)0x0);
    if (bVar1) {
      return first;
    }
  }
  pSVar2 = System_String__Concat_1969b70(first,"\n",second,(MethodInfo *)0x0);
  return pSVar2;
}


// UI.InGameMenu$$GetKeybindStrings
// il2cpp: System_String_o* UI_InGameMenu__GetKeybindStrings (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224cd20
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224cfef: mov rcx, qword ptr [rip + 0x1e57562]  ; "OFF"
// asm:   0x18224d25a: mov rcx, qword ptr [rip + 0x1e57837]  ; "ON"
// asm:   0x18224d261: jmp 0x18224cff6

System_String_o * UI_InGameMenu__GetKeybindStrings(UI_InGameMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Settings_UISettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  GameManagers_BaseGameManager_o *pGVar5;
  GameManagers_BaseGameManager_c *pGVar6;
  void *pvVar7;
  Il2CppClass *pIVar8;
  UnityEngine_Rigidbody_o *__this_00;
  Settings_IntSetting_o *pSVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  Cameras_BaseCamera_c *pCVar12;
  bool bVar13;
  int32_t iVar14;
  System_String_o *pSVar15;
  UnityEngine_Vector3_o *pUVar16;
  System_String_array *values;
  System_String_o *pSVar17;
  undefined8 local_28;
  float local_20 [2];
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18434729c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"F0");
    il2cpp_codegen_initialize_runtime_metadata(&"Position: ");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"Spectating: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Interpolation: ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ON");
    il2cpp_codegen_initialize_runtime_metadata(&"OFF");
    Il2CppMethodInitialized_18434729c = '\x01';
  }
  pSVar15 = "";
  local_28 = 0;
  local_20[0] = 0.0;
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
    }
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).ShowInterpolation, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar4->fields)._value != false) {
      pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar5 == (GameManagers_BaseGameManager_o *)0x0) goto label_18224d358;
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar5->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar5);
      }
      pGVar6 = (*(uint64_t *)((char *)pGVar5 + 0x78));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar13 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar13) && ((*(uint64_t *)((char *)pGVar5 + 0x78)) != (GameManagers_BaseGameManager_c *)0x0)) {
        pvVar7 = (((*(Il2CppClass **)((char *)pGVar5 + 0x78)))->_1).image;
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar1 <= *(byte *)((longlong)pvVar7 + 0x130)) &&
           (*(Characters_Human_c **)(*(longlong *)((longlong)pvVar7 + 200) + -8 + (ulonglong)bVar1 * 8) ==
            TypeInfo_Characters_Human)) {
          pGVar6 = (*(uint64_t *)((char *)pGVar5 + 0x78));
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          pvVar7 = (pGVar6->_1).image;
          if ((*(byte *)((longlong)pvVar7 + 0x130) < bVar1) ||
             (*(Characters_Human_c **)(*(longlong *)((longlong)pvVar7 + 200) + -8 + (ulonglong)bVar1 * 8) !=
              TypeInfo_Characters_Human)) {
            il2cpp_codegen_raise_invalid_cast_exception(pGVar6);
          }
          pIVar8 = (pGVar6->_1).klass;
          if ((pIVar8 == (Il2CppClass *)0x0) ||
             (__this_00 = (UnityEngine_Rigidbody_o *)(pIVar8->_1).namespaze,
             __this_00 == (UnityEngine_Rigidbody_o *)0x0)) goto label_18224d358;
          iVar14 = UnityEngine_Rigidbody__get_interpolation(__this_00,(MethodInfo *)0x0);
          if (iVar14 == 1) {
            pSVar15 = "ON";
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              pSVar15 = "ON";
            }
          }
          else {
            pSVar15 = "OFF";
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              pSVar15 = "OFF";
            }
          }
          pSVar15 = GameManagers_ChatManager__GetColorString(pSVar15,3,false,(MethodInfo *)0x0);
          pSVar15 = System_String__Concat_1969e50("Interpolation: ",pSVar15,(MethodInfo *)0x0);
        }
      }
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
       (pSVar9 = (pSVar3->fields).Coordinates, pSVar9 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar9->fields)._value == 2) {
        if (((pCVar2 == (Cameras_BaseCamera_o *)0x0) ||
            (pUVar10 = (pCVar2->fields).Cache, pUVar10 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar11 = (pUVar10->fields).Transform, pUVar11 == (UnityEngine_Transform_o *)0x0))
        goto label_18224d358;
        pUVar16 = UnityEngine_Transform__get_position(&local_18,pUVar11,(MethodInfo *)0x0);
        local_28._0_4_ = (pUVar16->fields).x;
        local_28._4_4_ = (pUVar16->fields).y;
        local_20[0] = (pUVar16->fields).z;
        pCVar12 = (*(uint64_t *)((char *)pCVar2 + 0x38));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar13 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pCVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar13) {
          if ((((*(uint64_t *)((char *)pCVar2 + 0x38)) == (Cameras_BaseCamera_c *)0x0) ||
              (pIVar8 = (((*(Il2CppClass **)((char *)pCVar2 + 0x38)))->_1).klass, pIVar8 == (Il2CppClass *)0x0)) ||
             (pUVar11 = (UnityEngine_Transform_o *)(pIVar8->_1).name,
             pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_18224d358;
          pUVar16 = UnityEngine_Transform__get_position(&local_18,pUVar11,(MethodInfo *)0x0);
          local_28._0_4_ = (pUVar16->fields).x;
          local_28._4_4_ = (pUVar16->fields).y;
          local_20[0] = (pUVar16->fields).z;
        }
        values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
        pSVar17 = "Position: ";
        if (values == (System_String_array *)0x0) goto label_18224d358;
        if ((int)values->max_length == 0) {
label_18224d352:
          ThrowIndexOutOfRangeException();
        }
        values->m_Items[0] = "Position: ";
        Il2CppCodeGenWriteBarrier(values->m_Items,pSVar17);
        pSVar17 = System_Single__ToString_1b49f60((float *)&local_28,"F0",(MethodInfo *)0x0);
        if ((uint)values->max_length < 2) goto label_18224d352;
        values->m_Items[1] = pSVar17;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar17);
        pSVar17 = ", ";
        if ((uint)values->max_length < 3) goto label_18224d352;
        values->m_Items[2] = ", ";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar17);
        pSVar17 = System_Single__ToString_1b49f60
                            ((float *)((longlong)&local_28 + 4),"F0",(MethodInfo *)0x0);
        if ((uint)values->max_length < 4) goto label_18224d352;
        values->m_Items[3] = pSVar17;
        Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar17);
        pSVar17 = ", ";
        if ((uint)values->max_length < 5) goto label_18224d352;
        values->m_Items[4] = ", ";
        Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar17);
        pSVar17 = System_Single__ToString_1b49f60(local_20,"F0",(MethodInfo *)0x0);
        if ((uint)values->max_length < 6) goto label_18224d352;
        values->m_Items[5] = pSVar17;
        Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar17);
        pSVar17 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
        bVar13 = System_String__op_Inequality(pSVar15,"",(MethodInfo *)0x0);
        if (bVar13) {
          pSVar17 = System_String__Concat_1969e50(pSVar17,"\n",(MethodInfo *)0x0);
        }
        pSVar15 = System_String__Concat_1969e50(pSVar17,pSVar15,(MethodInfo *)0x0);
      }
      else if (pCVar2 == (Cameras_BaseCamera_o *)0x0) goto label_18224d358;
      pCVar12 = (*(uint64_t *)((char *)pCVar2 + 0x38));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar13 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar13) && (0 < (__this->fields)._spectateCount)) {
        if ((*(uint64_t *)((char *)pCVar2 + 0x38)) == (Cameras_BaseCamera_c *)0x0) goto label_18224d358;
        bVar13 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)(*(uint64_t *)((char *)pCVar2 + 0x38)),(MethodInfo *)0x0);
        if (bVar13) {
          pSVar17 = System_Int32__ToString(&(__this->fields)._spectateCount,(MethodInfo *)0x0);
          pSVar17 = System_String__Concat_1969e50("Spectating: ",pSVar17,(MethodInfo *)0x0);
          bVar13 = System_String__op_Inequality(pSVar15,"",(MethodInfo *)0x0);
          if (bVar13) {
            pSVar17 = System_String__Concat_1969e50(pSVar17,"\n",(MethodInfo *)0x0);
          }
          pSVar15 = System_String__Concat_1969e50(pSVar17,pSVar15,(MethodInfo *)0x0);
        }
      }
      return pSVar15;
    }
  }
label_18224d358:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetPlayerListEntry
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerListEntry (UI_InGameMenu_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18224d360
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224d516: mov rax, qword ptr [rip + 0x1e3bbeb]  ; " <color=red>*dead*</color> "
// asm:   0x18224d946: mov rbx, qword ptr [rip + 0x1e3de3b]  ; " H "
// asm:   0x18224d94d: jmp 0x18224d968
// asm:   0x18224d94f: mov rbx, qword ptr [rip + 0x1e41c52]  ; " T "
// asm:   0x18224d956: jmp 0x18224d968
// asm:   0x18224d958: mov rbx, qword ptr [rip + 0x1e3f949]  ; " R "
// asm:   0x18224d95f: jmp 0x18224d968
// asm:   0x18224d961: mov rbx, qword ptr [rip + 0x1e3c3e0]  ; " B "
// asm:   0x18224da8f: mov rdi, qword ptr [rip + 0x1e41bf2]  ; " TS "
// asm:   0x18224da96: jmp 0x18224daa8
// asm:   0x18224da98: mov rdi, qword ptr [rip + 0x1e3bc89]  ; " AHSS "
// asm:   0x18224da9f: jmp 0x18224daa8
// asm:   0x18224daa1: mov rdi, qword ptr [rip + 0x1e3bd60]  ; " APG "
// asm:   0x18224de00: jmp 0x18224dd58

System_String_o *
UI_InGameMenu__GetPlayerListEntry(UI_InGameMenu_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  int32_t id;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  System_String_o *pSVar6;
  bool bVar7;
  bool includeMC;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_array *pSVar12;
  Il2CppObject *pIVar13;
  uint uVar14;
  
  if (Il2CppMethodInitialized_18434729d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&" B ");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&" R ");
    il2cpp_codegen_initialize_runtime_metadata(&" H ");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    il2cpp_codegen_initialize_runtime_metadata(&" APG ");
    il2cpp_codegen_initialize_runtime_metadata(&" T ");
    il2cpp_codegen_initialize_runtime_metadata(&" <color=red>*dead*</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&" AHSS ");
    il2cpp_codegen_initialize_runtime_metadata(&" TS ");
    Il2CppMethodInitialized_18434729d = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar8 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,""
                      ,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
  }
  bVar7 = System_String__op_Inequality
                    (pSVar8,TypeInfo_GameManagers_PlayerStatus->static_fields->Alive,(MethodInfo *)0x0);
  pSVar8 = " <color=red>*dead*</color> ";
  if (!bVar7) {
    pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar9 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                      (MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
  }
  pSVar10 = GameManagers_TeamInfo__GetTeamColor(pSVar9,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Misc, pSVar3 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).PVP, pSVar4 == (Settings_IntSetting_o *)0x0)) goto label_18224de0b;
  iVar1 = (pSVar4->fields)._value;
  pSVar11 = PhotonExtensions__GetStringProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                       "",(MethodInfo *)0x0);
  bVar7 = System_String__op_Equality
                    (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->None,(MethodInfo *)0x0);
  if (bVar7) {
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (iVar1 == 2) {
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar7 = System_String__op_Equality
                      (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
    pSVar11 = " B ";
    if (!bVar7) {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar7 = System_String__op_Equality
                        (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
      pSVar11 = " R ";
      if (!bVar7) {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar7 = System_String__op_Equality
                          (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Titan,(MethodInfo *)0x0);
        pSVar11 = " T ";
        if (!bVar7) {
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          bVar7 = System_String__op_Equality
                            (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Human,(MethodInfo *)0x0);
          goto joined_r0x00018224d940;
        }
      }
    }
  }
  else {
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar7 = System_String__op_Equality
                      (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Blue,(MethodInfo *)0x0);
    if (!bVar7) {
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar7 = System_String__op_Equality
                        (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Red,(MethodInfo *)0x0);
      if (!bVar7) {
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar7 = System_String__op_Equality
                          (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Titan,(MethodInfo *)0x0);
        pSVar11 = " T ";
        if (!bVar7) {
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          bVar7 = System_String__op_Equality
                            (pSVar9,TypeInfo_GameManagers_TeamInfo->static_fields->Human,(MethodInfo *)0x0);
joined_r0x00018224d940:
          pSVar11 = " H ";
          if (!bVar7) {
            pSVar11 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          }
        }
        goto label_18224d968;
      }
    }
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    bVar7 = System_String__op_Equality
                      (pSVar11,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,(MethodInfo *)0x0);
    if (!bVar7) {
      if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
      }
      bVar7 = System_String__op_Equality
                        (pSVar11,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,
                         (MethodInfo *)0x0);
      if (!bVar7) {
        if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
        }
        bVar7 = System_String__op_Equality
                          (pSVar11,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
                           (MethodInfo *)0x0);
        pSVar6 = " T ";
        pSVar11 = pSVar9;
        if (bVar7) {
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          pSVar10 = GameManagers_TeamInfo__GetTeamColor
                              (TypeInfo_GameManagers_TeamInfo->static_fields->Titan,(MethodInfo *)0x0);
          pSVar11 = pSVar6;
        }
        goto label_18224d968;
      }
    }
    pSVar11 = " H ";
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    pSVar10 = GameManagers_TeamInfo__GetTeamColor
                        (TypeInfo_GameManagers_TeamInfo->static_fields->Human,(MethodInfo *)0x0);
  }
label_18224d968:
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar9 = Utility_Util__ColorText(pSVar11,pSVar10,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar10 = PhotonExtensions__GetStringProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                       "",(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar7 = System_String__op_Equality
                    (pSVar10,TypeInfo_GameManagers_HumanLoadout->static_fields->APG,(MethodInfo *)0x0);
  pSVar11 = " APG ";
  if (!bVar7) {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar7 = System_String__op_Equality
                      (pSVar10,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,(MethodInfo *)0x0);
    pSVar11 = " AHSS ";
    if (!bVar7) {
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      bVar7 = System_String__op_Equality
                        (pSVar10,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,
                         (MethodInfo *)0x0);
      pSVar11 = " TS ";
      if (!bVar7) {
        pSVar11 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
    }
  }
  pSVar12 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    id = (player->fields).actorNumber;
    includeMC = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
    bVar7 = (player->fields).IsLocal;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    pSVar10 = GameManagers_ChatManager__GetIDString(id,includeMC,bVar7,(MethodInfo *)0x0);
    if (pSVar12 != (System_String_array *)0x0) {
      if ((int)pSVar12->max_length != 0) {
        pSVar12->m_Items[0] = pSVar10;
        Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar10);
        if (1 < (uint)pSVar12->max_length) {
          pSVar12->m_Items[1] = pSVar8;
          Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 1,pSVar8);
          if (2 < (uint)pSVar12->max_length) {
            pSVar12->m_Items[2] = pSVar9;
            Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 2,pSVar9);
            if (3 < (uint)pSVar12->max_length) {
              pSVar12->m_Items[3] = pSVar11;
              Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 3,pSVar11);
              if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
              }
              pSVar8 = PhotonExtensions__GetStringProperty
                                 (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                                  "",(MethodInfo *)0x0);
              if (4 < (uint)pSVar12->max_length) {
                pSVar12->m_Items[4] = pSVar8;
                Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 4,pSVar8);
                pSVar9 = System_String__Concat_1969830(pSVar12,(MethodInfo *)0x0);
                pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
                    (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  }
                  pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                  if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_18224de0b;
                  bVar7 = System_String__op_Inequality
                                    ((pCVar5->fields).ScoreboardProperty,
                                     (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                     (MethodInfo *)0x0);
                  if (bVar7) {
                    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                    }
                    pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                    if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                      pIVar13 = PhotonExtensions__GetCustomProperty
                                          (player,(pCVar5->fields).ScoreboardProperty,(MethodInfo *)0x0);
                      if (pIVar13 == (Il2CppObject *)0x0) {
                        pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                      }
                      else {
                        pSVar8 = (System_String_o *)
                                 (*pIVar13->klass->vtable[3].methodPtr)
                                           (pIVar13,pIVar13->klass->vtable[3].method);
                      }
label_18224dce1:
                      pSVar8 = System_String__Concat_1969b70
                                         (pSVar9,": ",pSVar8,(MethodInfo *)0x0);
                      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                      }
                      pSVar8 = Utility_Util__SizeText(pSVar8,0x13,(MethodInfo *)0x0);
                      return pSVar8;
                    }
                    goto label_18224de0b;
                  }
                }
                uVar14 = 0;
                pSVar12 = (__this->fields).trackedProperties;
                while (pSVar12 != (System_String_array *)0x0) {
                  if ((int)pSVar12->max_length <= (int)uVar14) goto label_18224dce1;
                  pSVar12 = (__this->fields).trackedProperties;
                  if (pSVar12 == (System_String_array *)0x0) break;
                  if ((uint)pSVar12->max_length <= uVar14) goto label_18224de05;
                  pIVar13 = PhotonExtensions__GetCustomProperty
                                      (player,pSVar12->m_Items[(int)uVar14],(MethodInfo *)0x0);
                  if (pIVar13 == (Il2CppObject *)0x0) {
                    pSVar10 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                  }
                  else {
                    pSVar10 = (System_String_o *)
                              (*pIVar13->klass->vtable[3].methodPtr)(pIVar13,pIVar13->klass->vtable[3].method)
                    ;
                  }
                  pSVar8 = System_String__Concat_1969e50(pSVar8,pSVar10,(MethodInfo *)0x0);
                  pSVar12 = (__this->fields).trackedProperties;
                  if (pSVar12 == (System_String_array *)0x0) break;
                  if ((int)uVar14 < (int)pSVar12->max_length + -1) {
                    pSVar8 = System_String__Concat_1969e50(pSVar8," / ",(MethodInfo *)0x0);
                  }
                  uVar14 = uVar14 + 1;
                  pSVar12 = (__this->fields).trackedProperties;
                }
                goto label_18224de0b;
              }
            }
          }
        }
      }
label_18224de05:
      ThrowIndexOutOfRangeException();
    }
  }
label_18224de0b:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetAggregateStats
// il2cpp: System_String_o* UI_InGameMenu__GetAggregateStats (UI_InGameMenu_o* __this, System_Linq_IGrouping_string__Player__o* group, const MethodInfo* method);
// 0x18224c660
// eh: try 0x18224c760..0x18224cb97 -> pad 0x18333f6f0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224c90e: mov r8, qword ptr [rsp + 0x50]
// asm:   0x18224c913: cmp qword ptr [r8], 0
// asm:   0x18224c917: je 0x18224c92a
// asm:   0x18224c919: xor ecx, ecx
// asm:   0x18224c91b: mov r8, qword ptr [r8]
// asm:   0x18224c91e: mov rdx, qword ptr [rip + 0x1e4c9db]  ; TypeInfo_System_IDisposable
// asm:   0x18224c925: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x18224c92a: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18224c92f: test rcx, rcx
// asm:   0x18224c932: jne 0x18224cb97
// asm:   0x18224c938: mov edx, 5
// asm:   0x18224c93d: mov rcx, qword ptr [rip + 0x1e5cee4]  ; TypeInfo_object_array
// asm:   0x18224c944: call 0x180416200  ; SZArrayNew()
// asm:   0x18224c949: mov rbx, rax
// asm:   0x18224c94c: xor ecx, ecx
// asm:   0x18224c94e: mov r15, qword ptr [rsp + 0x98]
// asm:   0x18224c956: mov r8, r15
// asm:   0x18224c959: mov rdx, qword ptr [rip + 0x1e95600]  ; TypeInfo_System_Linq_IGrouping_string_Player
// asm:   0x18224c960: call 0x180014640  ; InterfaceInvoker0_Invoke()
// asm:   0x18224c965: mov rsi, rax
// asm:   0x18224c968: mov r12d, dword ptr [rsp + 0xa8]
// asm:   0x18224c970: mov r13d, dword ptr [rsp + 0x20]
// asm:   0x18224c975: mov r14d, dword ptr [rsp + 0x24]
// asm:   0x18224cb97: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333f6f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f6f5: push rbp
// asm:   0x18333f6f6: sub rsp, 0x20
// asm:   0x18333f6fa: mov rbp, rdx
// asm:   0x18333f6fd: mov rax, qword ptr [rbp + 0x58]
// asm:   0x18333f701: mov rcx, qword ptr [rax]
// asm:   0x18333f704: mov qword ptr [rbp + 0x48], rcx
// asm:   0x18333f708: movabs rax, 0
// asm:   0x18333f712: add rsp, 0x20
// asm:   0x18333f716: pop rbp
// asm:   0x18333f717: ret 

System_String_o *
UI_InGameMenu__GetAggregateStats
          (UI_InGameMenu_o *__this,System_Linq_IGrouping_string__Player__o *group,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int32_t iVar4;
  void *pvVar5;
  VirtualInvokeData *pVVar6;
  Photon_Realtime_Player_o *player;
  System_Object_array *args;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_60;
  Il2CppObject *local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [3];
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_18434729e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Linq_IGrouping_string_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"{0}: {1}/{2}/{3}/{4}\n");
    Il2CppMethodInitialized_18434729e = '\x01';
  }
  iVar12 = 0;
  local_58 = (Il2CppObject *)0x0;
  if (group == (System_Linq_IGrouping_string__Player__o *)0x0) {
    ThrowNullReferenceException();
  }
  local_60 = 0;
  local_58 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_Player,
                        (Il2CppObject *)group);
  local_44[1] = 0;
  local_44[2] = 0;
  local_38 = &local_58;
  iVar13 = iVar12;
  iVar14 = iVar12;
  do {
    if (local_58 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_58);
    pIVar9 = local_58;
    if ((char)pvVar5 == '\0') {
      if (local_58 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_58);
      }
      args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
      pSVar7 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Linq_IGrouping_string_Player,(Il2CppObject *)group)
      ;
      pSVar8 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Linq_IGrouping_string_Player,(Il2CppObject *)group)
      ;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      pSVar8 = GameManagers_TeamInfo__GetTeamColor(pSVar8,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar7 = Utility_Util__ColorText(pSVar7,pSVar8,(MethodInfo *)0x0);
      if (args == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar7 != (System_String_o *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((args->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)pSVar7;
        Il2CppCodeGenWriteBarrier(args->m_Items,pSVar7);
        local_50 = iVar12;
        pIVar9 = il2cpp_value_box(g_data_184354e08,&local_50);
        if (pIVar9 != (Il2CppObject *)0x0) {
          pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((args->obj).klass)->_1).element_class);
          if (pIVar10 == (Il2CppObject *)0x0) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar9;
          Il2CppCodeGenWriteBarrier(args->m_Items + 1,pIVar9);
          local_4c = iVar13;
          pIVar9 = il2cpp_value_box(g_data_184354e08,&local_4c);
          if (pIVar9 != (Il2CppObject *)0x0) {
            pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((args->obj).klass)->_1).element_class);
            if (pIVar10 == (Il2CppObject *)0x0) {
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
          }
          if (2 < (uint)args->max_length) {
            args->m_Items[2] = pIVar9;
            Il2CppCodeGenWriteBarrier(args->m_Items + 2,pIVar9);
            local_48 = local_60;
            pIVar9 = il2cpp_value_box(g_data_184354e08,&local_48);
            if (pIVar9 != (Il2CppObject *)0x0) {
              pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((args->obj).klass)->_1).element_class);
              if (pIVar10 == (Il2CppObject *)0x0) {
                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
              }
            }
            if (3 < (uint)args->max_length) {
              args->m_Items[3] = pIVar9;
              Il2CppCodeGenWriteBarrier(args->m_Items + 3,pIVar9);
              local_44[0] = iVar14;
              pIVar9 = il2cpp_value_box(g_data_184354e08,local_44);
              if (pIVar9 != (Il2CppObject *)0x0) {
                pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((args->obj).klass)->_1).element_class);
                if (pIVar10 == (Il2CppObject *)0x0) {
                  pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                }
              }
              if (4 < (uint)args->max_length) {
                args->m_Items[4] = pIVar9;
                Il2CppCodeGenWriteBarrier(args->m_Items + 4,pIVar9);
                pSVar7 = System_String__Format_196ceb0("{0}: {1}/{2}/{3}/{4}\n",args,(MethodInfo *)0x0);
                return pSVar7;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
    if (local_58 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_58->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar11 = 0;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar11].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Player) {
          pVVar6 = pIVar2->vtable + pIVar3[uVar11].offset;
          goto label_18224c7e6;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_58,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Player,0);
label_18224c7e6:
    player = (Photon_Realtime_Player_o *)(*pVVar6->methodPtr)(pIVar9,pVVar6->method);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    iVar4 = PhotonExtensions__GetIntProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Kills,0,(MethodInfo *)0x0);
    iVar12 = iVar12 + iVar4;
    iVar4 = PhotonExtensions__GetIntProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths,0,(MethodInfo *)0x0)
    ;
    iVar13 = iVar13 + iVar4;
    iVar4 = PhotonExtensions__GetIntProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage,0,
                       (MethodInfo *)0x0);
    local_60 = local_60 + iVar4;
    iVar4 = PhotonExtensions__GetIntProperty
                      (player,TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage,0,
                       (MethodInfo *)0x0);
    iVar14 = iVar14 + iVar4;
  } while( true );
}


// UI.InGameMenu$$GetPlayerList
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerList (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224e5b0

System_String_o * UI_InGameMenu__GetPlayerList(UI_InGameMenu_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_array *pPVar1;
  System_String_o *str1;
  System_String_o *str0;
  uint uVar2;
  
  if (Il2CppMethodInitialized_18434729f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_18434729f = '\x01';
  }
  str0 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar1 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar1 != (Photon_Realtime_Player_array *)0x0) {
    uVar2 = 0;
    while( true ) {
      if ((int)pPVar1->max_length <= (int)uVar2) {
        return str0;
      }
      if ((uint)pPVar1->max_length <= uVar2) break;
      str1 = UI_InGameMenu__GetPlayerListEntry(__this,pPVar1->m_Items[(int)uVar2],(MethodInfo *)0x0);
      str0 = System_String__Concat_1969b70(str0,str1,"\n",(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$GetPlayerListTeams
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerListTeams (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x18224de20
// eh: try 0x18224e1e0..0x18224e5a5 -> pad 0x1833203f0 (+6 call sites) catch Il2CppExceptionWrapper
// asm: 79 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224e1dc: nop dword ptr [rax]
// asm:   0x18224e27e: nop 
// asm:   0x18224e312: jmp 0x18224e1e0
// asm:   0x18224e317: mov r8, qword ptr [rsp + 0x70]
// asm:   0x18224e31c: cmp qword ptr [r8], 0
// asm:   0x18224e320: je 0x18224e333
// asm:   0x18224e322: xor ecx, ecx
// asm:   0x18224e324: mov r8, qword ptr [r8]
// asm:   0x18224e327: mov rdx, qword ptr [rip + 0x1e4afd2]  ; TypeInfo_System_IDisposable
// asm:   0x18224e32e: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x18224e333: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x18224e338: test rcx, rcx
// asm:   0x18224e33b: jne 0x18224e57f
// asm:   0x18224e341: xor r14d, r14d
// asm:   0x18224e344: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x18224e34c: mov rsi, qword ptr [rsp + 0xd8]
// asm:   0x18224e354: mov rdi, qword ptr [rsp + 0x60]
// asm:   0x18224e359: jmp 0x18224e1e0
// asm:   0x18224e377: mov r8, qword ptr [rsp + 0x60]
// asm:   0x18224e37c: cmp qword ptr [r8], 0
// asm:   0x18224e380: je 0x18224e393
// asm:   0x18224e382: xor ecx, ecx
// asm:   0x18224e384: mov r8, qword ptr [r8]
// asm:   0x18224e387: mov rdx, qword ptr [rip + 0x1e4af72]  ; TypeInfo_System_IDisposable
// asm:   0x18224e38e: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x18224e393: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x18224e398: test rcx, rcx
// asm:   0x18224e39b: jne 0x18224e594
// asm:   0x18224e3a1: xor r14d, r14d
// asm:   0x18224e3a4: mov r15, qword ptr [rsp + 0xc0]
// asm:   0x18224e3ac: mov rsi, qword ptr [rsp + 0xd8]
// asm:   0x18224e3ed: nop dword ptr [rax]
// asm:   0x18224e529: mov r8, qword ptr [rsp + 0x70]
// asm:   0x18224e52e: cmp qword ptr [r8], 0
// asm:   0x18224e532: je 0x18224e545
// asm:   0x18224e534: xor ecx, ecx
// asm:   0x18224e536: mov r8, qword ptr [r8]
// asm:   0x18224e539: mov rdx, qword ptr [rip + 0x1e4adc0]  ; TypeInfo_System_IDisposable
// asm:   0x18224e540: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x18224e545: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x18224e54a: test rcx, rcx
// asm:   0x18224e54d: jne 0x18224e5a5
// asm:   0x18224e54f: mov rsi, qword ptr [rsp + 0xd8]
// asm:   0x18224e57f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18224e594: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18224e5a5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833203f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833203f5: push rbp
// asm:   0x1833203f6: sub rsp, 0x30
// asm:   0x1833203fa: mov rbp, rdx
// asm:   0x1833203fd: mov rax, qword ptr [rbp + 0x48]
// asm:   0x183320401: mov rcx, qword ptr [rax]
// asm:   0x183320404: mov qword ptr [rbp + 0x58], rcx
// asm:   0x183320408: movabs rax, 0
// asm:   0x183320412: add rsp, 0x30
// asm:   0x183320416: pop rbp
// asm:   0x183320417: ret 
// asm:   0x18333f720: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f725: push rbp
// asm:   0x18333f726: sub rsp, 0x30
// asm:   0x18333f72a: mov rbp, rdx
// asm:   0x18333f72d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x18333f731: mov rcx, qword ptr [rax]
// asm:   0x18333f734: mov qword ptr [rbp + 0x68], rcx
// asm:   0x18333f738: movabs rax, 0
// asm:   0x18333f742: add rsp, 0x30
// asm:   0x18333f746: pop rbp
// asm:   0x18333f747: ret 
// asm:   0x18333f750: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f755: push rbp
// asm:   0x18333f756: sub rsp, 0x30
// asm:   0x18333f75a: mov rbp, rdx
// asm:   0x18333f75d: mov rax, qword ptr [rbp + 0x50]
// asm:   0x18333f761: mov rcx, qword ptr [rax]
// asm:   0x18333f764: mov qword ptr [rbp + 0x68], rcx
// asm:   0x18333f768: movabs rax, 0
// asm:   0x18333f772: add rsp, 0x30
// asm:   0x18333f776: pop rbp
// asm:   0x18333f777: ret 

System_String_o * UI_InGameMenu__GetPlayerListTeams(UI_InGameMenu_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppObject *__this_00;
  Photon_Realtime_Player_array *pPVar4;
  System_Func_Player__bool__o *pSVar5;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_Player__string__o *__this_01;
  Il2CppObject *pIVar6;
  void *pvVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Photon_Realtime_Player_o *pPVar10;
  VirtualInvokeData *pVVar11;
  ushort uVar12;
  Il2CppObject *local_res18;
  System_String_o *local_res20;
  Il2CppObject *local_88;
  Il2CppObject *local_80;
  undefined8 local_60;
  Il2CppObject **local_58;
  undefined8 local_50;
  Il2CppObject **local_48;
  
  if (Il2CppMethodInitialized_1843472a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_GroupBy_Player_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Player_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Player_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_IGrouping_string_Player);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_string_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__120_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__120_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__120_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu_c);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"\t");
    il2cpp_codegen_initialize_runtime_metadata(&":\n");
    Il2CppMethodInitialized_1843472a0 = '\x01';
  }
  local_88 = (Il2CppObject *)0x0;
  local_res18 = (Il2CppObject *)0x0;
  pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar4 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if ((TypeInfo_UI_InGameMenu_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
  }
  pSVar5 = TypeInfo_UI_InGameMenu_c->static_fields->__9__120_0;
  if (pSVar5 == (System_Func_Player__bool__o *)0x0) {
    if ((TypeInfo_UI_InGameMenu_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
    }
    pIVar6 = (Il2CppObject *)TypeInfo_UI_InGameMenu_c->static_fields->__9;
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar5,pIVar6,
               (intptr_t)MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__120_0,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_UI_InGameMenu_c->static_fields->__9__120_0 = pSVar5;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_InGameMenu_c->static_fields->__9__120_0,pSVar5);
  }
  local_80 = (Il2CppObject *)
             System_Linq_Enumerable__Where_float_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pPVar4,
                        (System_Func_TSource__bool__o *)pSVar5,
                        (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Player);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar4 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if ((TypeInfo_UI_InGameMenu_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
  }
  pSVar5 = TypeInfo_UI_InGameMenu_c->static_fields->__9__120_1;
  if (pSVar5 == (System_Func_Player__bool__o *)0x0) {
    if ((TypeInfo_UI_InGameMenu_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
    }
    pIVar6 = (Il2CppObject *)TypeInfo_UI_InGameMenu_c->static_fields->__9;
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar5,pIVar6,
               (intptr_t)MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__120_1,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_UI_InGameMenu_c->static_fields->__9__120_1 = pSVar5;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_InGameMenu_c->static_fields->__9__120_1,pSVar5);
  }
  source = System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pPVar4,
                      (System_Func_TSource__bool__o *)pSVar5,
                      (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Player);
  if ((TypeInfo_UI_InGameMenu_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
  }
  __this_01 = TypeInfo_UI_InGameMenu_c->static_fields->__9__120_2;
  if (__this_01 == (System_Func_Player__string__o *)0x0) {
    if ((TypeInfo_UI_InGameMenu_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_InGameMenu_c);
    }
    pIVar6 = (Il2CppObject *)TypeInfo_UI_InGameMenu_c->static_fields->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Player_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,pIVar6,
               (intptr_t)MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__120_2,(MethodInfo_16E67D0 *)0x0);
    TypeInfo_UI_InGameMenu_c->static_fields->__9__120_2 = __this_01;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_InGameMenu_c->static_fields->__9__120_2,__this_01);
  }
  pIVar6 = (Il2CppObject *)
           System_Linq_Enumerable__GroupBy_object__object_
                     (source,(System_Func_TSource__TKey__o *)__this_01,
                      (MethodInfo_6BEA30 *)MethodInfo_System_Linq_Enumerable_GroupBy_Player_string);
  if (pIVar6 != (Il2CppObject *)0x0) {
    local_res20 = pSVar9;
    local_88 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IEnumerable_IGrouping_string_Player,pIVar6);
    local_60 = 0;
    local_58 = &local_88;
    while( true ) {
      if (local_88 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar7 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_88);
      if ((char)pvVar7 == '\0') break;
      if (local_88 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar6 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IEnumerator_IGrouping_string_Player,local_88);
      pSVar8 = UI_InGameMenu__GetAggregateStats
                         (__this,(System_Linq_IGrouping_string__Player__o *)pIVar6,(MethodInfo *)0x0);
      pSVar9 = System_String__Concat_1969e50(pSVar9,pSVar8,(MethodInfo *)0x0);
      local_res20 = pSVar9;
      if (pIVar6 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      local_res18 = InterfaceInvoker0_Invoke
                              (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_Player,pIVar6)
      ;
      local_50 = 0;
      local_48 = &local_res18;
      while( true ) {
        if (local_res18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar7 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
        if ((char)pvVar7 == '\0') break;
        if (local_res18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pPVar10 = InterfaceInvoker0_Invoke
                            (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Player,
                             local_res18);
        pSVar8 = UI_InGameMenu__GetPlayerListEntry(__this,pPVar10,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat_1969590
                           (pSVar9,"\t",pSVar8,"\n",(MethodInfo *)0x0);
        local_res20 = pSVar9;
      }
      if (local_res18 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res18);
      }
    }
    if (local_88 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_88);
    }
    pIVar6 = local_80;
    if (local_80 != (Il2CppObject *)0x0) {
      local_res18 = InterfaceInvoker0_Invoke
                              (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_Player,
                               local_80);
      local_50 = 0;
      local_48 = &local_res18;
      do {
        if (local_res18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar7 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
        __this_00 = local_res18;
        if ((char)pvVar7 == '\0') {
          if (local_res18 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res18);
          }
          return pSVar9;
        }
        if (local_res18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_res18->klass;
        uVar1 = (pIVar2->_2).interface_offsets_count;
        uVar12 = 0;
        if (uVar1 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          do {
            if (pIVar3[uVar12].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Player) {
              pVVar11 = pIVar2->vtable + pIVar3[uVar12].offset;
              goto label_18224e476;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar1);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_res18,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Player
                             ,0);
label_18224e476:
        pPVar10 = (Photon_Realtime_Player_o *)(*pVVar11->methodPtr)(__this_00,pVVar11->method);
        pIVar2 = pIVar6->klass;
        pSVar8 = (System_String_o *)(*pIVar2->vtable[3].methodPtr)(pIVar6,pIVar2->vtable[3].method);
        pSVar9 = System_String__Concat_1969b70(pSVar9,pSVar8,":\n",(MethodInfo *)0x0);
        local_res20 = pSVar9;
        pSVar8 = UI_InGameMenu__GetPlayerListEntry(__this,pPVar10,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat_1969590
                           (pSVar9,"\t",pSVar8,"\n",(MethodInfo *)0x0);
        local_res20 = pSVar9;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$HideAllMenus
// il2cpp: void UI_InGameMenu__HideAllMenus (UI_InGameMenu_o* __this, UI_BasePopup_o* keep, const MethodInfo* method);
// 0x18224e720
// eh: try 0x18224e7e0..0x18224e926 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224e850: mov rdx, qword ptr [rip + 0x1e274a1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x18224e857: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18224e85c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18224e861: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18224e866: test rcx, rcx
// asm:   0x18224e869: jne 0x18224e926
// asm:   0x18224e86f: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x18224e926: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_InGameMenu__HideAllMenus(UI_InGameMenu_o *__this,UI_BasePopup_o *keep,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  UnityEngine_Object_c *pUVar1;
  undefined8 uVar2;
  UI_EmoteHandler_o *pUVar3;
  UI_BasePopup_o *pUVar4;
  UI_ItemHandler_o *__this_01;
  UI_ActionHandler_o *__this_02;
  UnityEngine_Object_o *x;
  bool bVar5;
  undefined1 local_60 [16];
  UnityEngine_Object_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_1843472a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843472a1 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
      x = local_38;
      if (!bVar5) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)keep,(MethodInfo *)0x0);
      if (bVar5) {
        if (x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar1 = x->klass;
        uVar2._0_2_ = ((Il2CppClass *)pUVar1)->vtable[22].method;
        uVar2._2_2_ = pUVar1[1]._2.vtable_count;
        uVar2._4_2_ = pUVar1[1]._2.interfaces_count;
        uVar2._6_2_ = pUVar1[1]._2.interface_offsets_count;
        (**(code **)&((Il2CppClass *)pUVar1)->vtable[22].methodPtr)(x,uVar2);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    pUVar3 = (__this->fields).EmoteHandler;
    if (pUVar3 != (UI_EmoteHandler_o *)0x0) {
      if (Il2CppMethodInitialized_18434724d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_SetEmoteWheel_b__25_0);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
        Il2CppMethodInitialized_18434724d = '\x01';
      }
      pUVar4 = (pUVar3->fields)._emoteWheelPopup;
      if (pUVar4 != (UI_BasePopup_o *)0x0) {
        (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
        (pUVar3->fields).IsActive = false;
        __this_01 = (__this->fields).ItemHandler;
        if (__this_01 != (UI_ItemHandler_o *)0x0) {
          UI_ItemHandler__SetItemWheel(__this_01,false,(MethodInfo *)0x0);
          __this_02 = (__this->fields).ActionHandler;
          if (__this_02 != (UI_ActionHandler_o *)0x0) {
            UI_ActionHandler__SetActionWheel(__this_02,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameMenu$$SetupPopups
// il2cpp: void UI_InGameMenu__SetupPopups (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182250d10

void UI_InGameMenu__SetupPopups(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_SettingsPopup_o *__this_00;
  UI_BasePopup_o *pUVar7;
  UI_PausePopup_o *pUVar8;
  UI_CustomAssetUrlPopup_o *pUVar9;
  UI_CustomAssetVideoUrlPopup_o *pUVar10;
  
  if (Il2CppMethodInitialized_1843472a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CustomAssetUrlPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CustomAssetVideoUrlPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_PausePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CustomAssetUrlPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CustomAssetVideoUrlPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateHeadedPanel_PausePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateHeadedPanel_SettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_1843472a2 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_SettingsPopup);
  if (__this_00 != (UI_SettingsPopup_o *)0x0) {
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._settingsPopup = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._settingsPopup,pUVar7);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar6,false,
                        (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_PausePopup);
    if (pUVar8 == (UI_PausePopup_o *)0x0) goto label_18225123b;
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar8,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_PausePopup);
    (__this->fields)._pausePopup = (UI_BasePopup_o *)pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pausePopup,pUVar8);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar6,false,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateDefaultPopup_CustomAssetUrlPopup);
    if (pUVar9 == (UI_CustomAssetUrlPopup_o *)0x0) goto label_18225123b;
    pUVar9 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar9,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CustomAssetUrlPopup
                       );
    (__this->fields)._customAssetUrlPopup = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._customAssetUrlPopup,pUVar9);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar10 = UI_ElementFactory__CreateHeadedPanel_object_
                        (pUVar6,false,
                         (MethodInfo_6ABA40 *)
                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_CustomAssetVideoUrlPopup);
    if (pUVar10 == (UI_CustomAssetVideoUrlPopup_o *)0x0) goto label_18225123b;
    pUVar10 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar10,
                         (MethodInfo_6651A0 *)
                         MethodInfo_UnityEngine_Component_GetComponent_CustomAssetVideoUrlPopup);
    (__this->fields)._customAssetVideoUrlPopup = pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._customAssetVideoUrlPopup,pUVar10);
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18225123b;
    pUVar7 = (__this->fields)._settingsPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18225123b;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_182251241;
      pUVar4->m_Items[(int)uVar2] = pUVar7;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18225123b;
    pUVar7 = (__this->fields)._pausePopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18225123b;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_182251241;
      pUVar4->m_Items[(int)uVar2] = pUVar7;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18225123b;
    pUVar9 = (__this->fields)._customAssetUrlPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18225123b;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_182251241;
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
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18225123b;
    pUVar10 = (__this->fields)._customAssetVideoUrlPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18225123b;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_182251241;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar10;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar10);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar10,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._allPausePopups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18225123b;
    pUVar7 = (__this->fields)._settingsPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18225123b;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_182251241;
      pUVar4->m_Items[(int)uVar2] = pUVar7;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._allPausePopups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18225123b;
    pUVar7 = (__this->fields)._pausePopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18225123b;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_182251241;
      pUVar4->m_Items[(int)uVar2] = pUVar7;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._allPausePopups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18225123b;
    pUVar9 = (__this->fields)._customAssetUrlPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18225123b;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_182251241;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._allPausePopups;
    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar10 = (__this->fields)._customAssetVideoUrlPopup;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar3->fields)._items;
      if (pUVar4 != (UI_BasePopup_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pUVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar10,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pUVar4->max_length) {
          pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar10;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar10);
          return;
        }
label_182251241:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_18225123b:
  ThrowNullReferenceException();
}


// UI.InGameMenu$$.ctor
// il2cpp: void UI_InGameMenu___ctor (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x182253b90

void UI_InGameMenu___ctor(UI_InGameMenu_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  System_Collections_Generic_List_BasePopup__o *__this_01;
  System_Collections_Generic_Dictionary_string__InGameLabel__o *__this_02;
  System_Collections_Generic_Dictionary_string__float__o *__this_03;
  System_Collections_Generic_Dictionary_string__bool__o *__this_04;
  System_Collections_Generic_List_string__o *__this_05;
  System_Collections_Generic_Dictionary_string__BasePopup__o *__this_06;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_1843472a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_InGameLabel);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_KillFeedSmallPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_1843472a3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_KillFeedSmallPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_KillFeedSmallPopup_ctor);
  (__this->fields)._killFeedSmallPopups = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._killFeedSmallPopups,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
  (__this->fields)._allPausePopups = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._allPausePopups,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_InGameLabel);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_InGameLabel_ctor);
  (__this->fields)._labels = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labels,__this_02);
  (__this->fields)._legacyLabels = true;
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._labelTimeLeft = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelTimeLeft,__this_03);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_bool);
  System_Collections_Generic_Dictionary_object__bool____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_bool_ctor);
  (__this->fields)._labelHasTimeLeft = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelHasTimeLeft,__this_04);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_05,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).labelsToDeactivate = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields).labelsToDeactivate,__this_05);
  __this_06 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BasePopup);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_06,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePopup_ctor);
  (__this->fields)._customPopups = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customPopups,__this_06);
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar1 = "Kills";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "Kills";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "Deaths";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "Deaths";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "HighestDamage";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "HighestDamage";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = "TotalDamage";
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = "TotalDamage";
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            (__this->fields).trackedProperties = value;
            Il2CppCodeGenWriteBarrier(&(__this->fields).trackedProperties,value);
            (__this->fields)._lastDismissedMenuFrame = -1;
            UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


