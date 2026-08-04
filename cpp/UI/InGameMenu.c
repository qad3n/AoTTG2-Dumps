// Type: UI.InGameMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/InGameMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/InGameMenu.cs
// --------------------------------

// UI.InGameMenu.<>c$$.cctor
// il2cpp: void UI_InGameMenu___c___cctor (const MethodInfo* method);
// 0x43cd1b0

void UI_InGameMenu___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae40c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae40c = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.InGameMenu.<>c$$.ctor
// il2cpp: void UI_InGameMenu___c___ctor (UI_InGameMenu___c_o* __this, const MethodInfo* method);
// 0x43cd220

void UI_InGameMenu___c___ctor(UI_InGameMenu___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__110_0
// il2cpp: bool UI_InGameMenu___c___GetPlayerListTeams_b__110_0 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x43cd230

bool_conflict
UI_InGameMenu___c___GetPlayerListTeams_b__110_0
          (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  
  if (g_data_057ae40d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae40d = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = PhotonExtensions__GetStringProperty
                (e,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",(MethodInfo *)0x0
                );
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_String__op_Equality
                    (a,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),(MethodInfo *)0x0);
  return bVar1;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__110_1
// il2cpp: bool UI_InGameMenu___c___GetPlayerListTeams_b__110_1 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x43cd2e0

bool_conflict
UI_InGameMenu___c___GetPlayerListTeams_b__110_1
          (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  
  if (g_data_057ae40e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae40e = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = PhotonExtensions__GetStringProperty
                (e,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",(MethodInfo *)0x0
                );
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_String__op_Inequality
                    (a,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),(MethodInfo *)0x0);
  return bVar1;
}


// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__110_2
// il2cpp: System_String_o* UI_InGameMenu___c___GetPlayerListTeams_b__110_2 (UI_InGameMenu___c_o* __this, Photon_Realtime_Player_o* e, const MethodInfo* method);
// 0x43cd390

System_String_o *
UI_InGameMenu___c___GetPlayerListTeams_b__110_2
          (UI_InGameMenu___c_o *__this,Photon_Realtime_Player_o *e,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae40f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae40f = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (e,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.InGameMenu.<WaitAndShowBlood>d__104$$.ctor
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__104___ctor (UI_InGameMenu__WaitAndShowBlood_d__104_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x43cd400

void UI_InGameMenu__WaitAndShowBlood_d__104___ctor
               (UI_InGameMenu__WaitAndShowBlood_d__104_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.InGameMenu.<WaitAndShowBlood>d__104$$System.IDisposable.Dispose
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__104__System_IDisposable_Dispose (UI_InGameMenu__WaitAndShowBlood_d__104_o* __this, const MethodInfo* method);
// 0x43cd420

void UI_InGameMenu__WaitAndShowBlood_d__104__System_IDisposable_Dispose
               (UI_InGameMenu__WaitAndShowBlood_d__104_o *__this,MethodInfo *method)

{
  return;
}


// UI.InGameMenu.<WaitAndShowBlood>d__104$$MoveNext
// il2cpp: bool UI_InGameMenu__WaitAndShowBlood_d__104__MoveNext (UI_InGameMenu__WaitAndShowBlood_d__104_o* __this, const MethodInfo* method);
// 0x43cd430

bool_conflict
UI_InGameMenu__WaitAndShowBlood_d__104__MoveNext
          (UI_InGameMenu__WaitAndShowBlood_d__104_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_InGameMenu_o *pUVar2;
  UI_InGameBackgroundMenu_o *pUVar3;
  UnityEngine_WaitForSeconds_o *__this_00;
  bool_conflict bVar4;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar5;
  
  pUVar5 = __this;
  if (g_data_057ae410 == '\0') {
    pUVar5 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae410 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pUVar2 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((pUVar2 == (UI_InGameMenu_o *)0x0) ||
       (pUVar3 = (pUVar2->fields)._backgroundMenu, pUVar5 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0,
       pUVar3 == (UI_InGameBackgroundMenu_o *)0x0)) {
label_043cd500:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(pUVar5->fields).__2__current;
    }
    bVar4 = 0;
    UI_InGameBackgroundMenu__HideBlood(pUVar3,(MethodInfo *)0x0);
    *(undefined1 *)&(pUVar2->fields)._showingBlood = 0;
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((pUVar2 == (UI_InGameMenu_o *)0x0) ||
       (pUVar3 = (pUVar2->fields)._backgroundMenu, pUVar5 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0,
       pUVar3 == (UI_InGameBackgroundMenu_o *)0x0)) goto label_043cd500;
    UI_InGameBackgroundMenu__ShowBlood(pUVar3,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,5.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}


// UI.InGameMenu.<WaitAndShowBlood>d__104$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_InGameMenu__WaitAndShowBlood_d__104__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_InGameMenu__WaitAndShowBlood_d__104_o* __this, const MethodInfo* method);
// 0x43cd510

Il2CppObject *
UI_InGameMenu__WaitAndShowBlood_d__104__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_InGameMenu__WaitAndShowBlood_d__104_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.InGameMenu.<WaitAndShowBlood>d__104$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_InGameMenu__WaitAndShowBlood_d__104__System_Collections_IEnumerator_Reset (UI_InGameMenu__WaitAndShowBlood_d__104_o* __this, const MethodInfo* method);
// 0x43cd520

void UI_InGameMenu__WaitAndShowBlood_d__104__System_Collections_IEnumerator_Reset
               (UI_InGameMenu__WaitAndShowBlood_d__104_o *__this,MethodInfo *method)

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


// UI.InGameMenu.<WaitAndShowBlood>d__104$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_InGameMenu__WaitAndShowBlood_d__104__System_Collections_IEnumerator_get_Current (UI_InGameMenu__WaitAndShowBlood_d__104_o* __this, const MethodInfo* method);
// 0x43cd560

Il2CppObject *
UI_InGameMenu__WaitAndShowBlood_d__104__System_Collections_IEnumerator_get_Current
          (UI_InGameMenu__WaitAndShowBlood_d__104_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.InGameMenu$$get_RootVisualElement
// il2cpp: UnityEngine_UIElements_VisualElement_o* UI_InGameMenu__get_RootVisualElement (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c5de0

UnityEngine_UIElements_VisualElement_o *
UI_InGameMenu__get_RootVisualElement(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_InGameBackgroundMenu_o **ppUVar2;
  System_Threading_CancellationTokenSource_o **ppSVar3;
  System_Threading_CancellationCallbackInfo_o **ppSVar4;
  System_Object_array *pSVar5;
  long lVar6;
  void *pvVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar8;
  UnityEngine_UIElements_VisualElement_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UI_EmoteHandler_o *pUVar11;
  UI_ItemHandler_o *pUVar12;
  UI_HUDBottomHandler_o *pUVar13;
  UI_CharacterInfoHandler_o *pUVar14;
  UI_StylebarHandler_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  UI_BasePopup_o *method_00;
  UnityEngine_UIElements_UIDocument_o *pUVar17;
  UI_InGameBackgroundMenu_o *pUVar18;
  UI_GlobalPauseGamePopup_o *pUVar19;
  UI_ExternalLinkPopup_o *obj;
  Il2CppObject *pIVar20;
  UnityEngine_UIElements_VisualElement_o *extraout_RAX;
  UI_ElementStyle_o *__this_04;
  System_Threading_CancellationTokenSource_o *pSVar21;
  System_Collections_Generic_List_BasePopup__o *pSVar22;
  Settings_StringSetting_o *pSVar23;
  UI_BasePanel_o *pUVar24;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar25;
  UnityEngine_UI_RawImage_o *pUVar26;
  UnityEngine_UIElements_VisualElement_o *extraout_RAX_00;
  System_Threading_CancellationTokenSource_o *pSVar27;
  System_Threading_ManualResetEvent_o *pSVar28;
  long lVar29;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *pSVar30;
  UnityEngine_UIElements_VisualElement_o *extraout_RAX_01;
  System_Threading_CancellationCallbackInfo_o *pSVar31;
  UnityEngine_Transform_o *pUVar32;
  UnityEngine_Transform_o *__this_05;
  UnityEngine_UIElements_VisualElement_o *extraout_RAX_02;
  UnityEngine_UIElements_VisualElement_o *extraout_RAX_03;
  UI_TopLeftHUD_o *__this_06;
  UnityEngine_UIElements_VisualElement_o *extraout_RAX_04;
  UnityEngine_Behaviour_o *pUVar33;
  UnityEngine_UIElements_VisualElement_o *extraout_RAX_05;
  undefined4 extraout_var;
  System_Collections_Generic_List_object__o *pSVar34;
  UnityEngine_GameObject_o *__this_07;
  Il2CppClass *pIVar35;
  UnityEngine_UIElements_VisualElement_o *extraout_RAX_06;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar36;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar37;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_08;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_UIElements_VisualElement_o *extraout_RAX_07;
  Il2CppClass *pIVar38;
  UnityEngine_UIElements_VisualElement_o *extraout_RAX_08;
  undefined8 extraout_RAX_09;
  undefined8 uVar39;
  long *plVar40;
  undefined8 extraout_RAX_10;
  Il2CppClass *title;
  byte bVar41;
  int iVar42;
  uint uVar43;
  MethodInfo *pMVar44;
  MethodInfo_255A0F0 *pMVar45;
  MethodInfo_24E7B40 *key;
  UI_InGameMenu_o *__this_09;
  UI_InGameMenu_o *__this_10;
  UI_InGameBackgroundMenu_o *__this_11;
  UI_ExternalLinkPopup_o *__this_12;
  System_String_o **parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_13;
  System_Collections_Generic_Dictionary_object__object__o *pSVar46;
  System_Int32_array *pSVar47;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar48;
  int iVar49;
  float width;
  float height;
  undefined1 auVar50 [12];
  System_Collections_Generic_List_T__o *pSVar51;
  Il2CppMethodPointer pIVar52;
  UnityEngine_Component_o *pUVar53;
  
  __this_09 = (UI_InGameMenu_o *)(__this->fields)._uiDocument;
  if (__this_09 != (UI_InGameMenu_o *)0x0) {
    pUVar9 = UnityEngine_UIElements_UIDocument__get_rootVisualElement
                       ((UnityEngine_UIElements_UIDocument_o *)__this_09,(MethodInfo *)0x0);
    return pUVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UIDocument_GetComponent_UIDocument);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SongPopup_CreateDefaultPopup_SongPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterInfoHandler_AddComponent_CharacterInfoHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CrosshairHandler_AddComponent_CrosshairHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteHandler_AddComponent_EmoteHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HUDBottomHandler_AddComponent_HUDBottomHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ItemHandler_AddComponent_ItemHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StylebarHandler_AddComponent_StylebarHandler);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/NapeLockImage");
    g_data_057ae3e7 = '\x01';
  }
  pMVar44 = (MethodInfo *)0x0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this_09,(MethodInfo *)0x0);
  UI_InGameMenu__SetupLoading(__this_09,pMVar44);
  UI_InGameMenu__SetupTopLeftHud(__this_09,pMVar44);
  UI_InGameMenu__SetupLabels(__this_09,pMVar44);
  __this_10 = __this_09;
  pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pUVar11 = (UI_EmoteHandler_o *)UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_EmoteHandler_AddComponent_EmoteHandler);
    (__this_09->fields).EmoteHandler = pUVar11;
    il2cpp_runtime_helper_022b4080(&(__this_09->fields).EmoteHandler);
    __this_10 = __this_09;
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
      pUVar12 = (UI_ItemHandler_o *)UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_ItemHandler_AddComponent_ItemHandler);
      (__this_09->fields).ItemHandler = pUVar12;
      il2cpp_runtime_helper_022b4080(&(__this_09->fields).ItemHandler);
      __this_10 = __this_09;
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        pUVar13 = (UI_HUDBottomHandler_o *)UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_HUDBottomHandler_AddComponent_HUDBottomHandler);
        (__this_09->fields).HUDBottomHandler = pUVar13;
        il2cpp_runtime_helper_022b4080(&(__this_09->fields).HUDBottomHandler);
        __this_10 = __this_09;
        pUVar10 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
          pUVar14 = (UI_CharacterInfoHandler_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_CharacterInfoHandler_AddComponent_CharacterInfoHandler);
          (__this_09->fields).CharacterInfoHandler = pUVar14;
          il2cpp_runtime_helper_022b4080(&(__this_09->fields).CharacterInfoHandler);
          __this_10 = __this_09;
          pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            pUVar15 = (UI_StylebarHandler_o *)
                      UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_StylebarHandler_AddComponent_StylebarHandler);
            (__this_09->fields).StylebarHandler = pUVar15;
            il2cpp_runtime_helper_022b4080(&(__this_09->fields).StylebarHandler);
            __this_10 = __this_09;
            pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_CrosshairHandler_AddComponent_CrosshairHandler);
              pUVar16 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
              pUVar10 = UI_ElementFactory__InstantiateAndBind(pUVar16,"Prefabs/InGame/NapeLockImage",(MethodInfo *)0x0);
              (__this_09->fields).NapeLock = pUVar10;
              il2cpp_runtime_helper_022b4080(&(__this_09->fields).NapeLock);
              pUVar10 = (__this_09->fields).NapeLock;
              __this_10 = (UI_InGameMenu_o *)0x0;
              if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                pMVar44 = (MethodInfo *)0x0;
                UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
                UI_InGameMenu__SetupChat(__this_09,pMVar44);
                UI_InGameMenu__SetupMinimap(__this_09,pMVar44);
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
                method_00 = (UI_BasePopup_o *)
                            UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_SongPopup_CreateDefaultPopup_SongPopup);
                (__this_09->fields)._songPopup = method_00;
                il2cpp_runtime_helper_022b4080(&(__this_09->fields)._songPopup);
                UI_InGameMenu__SetupSnapshot(__this_09,(MethodInfo *)method_00);
                UI_InGameMenu__HideAllMenus(__this_09,(MethodInfo *)method_00);
                pUVar17 = (UnityEngine_UIElements_UIDocument_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_09,MethodInfo_UIDocument_GetComponent_UIDocument);
                (__this_09->fields)._uiDocument = pUVar17;
                pUVar9 = (UnityEngine_UIElements_VisualElement_o *)
                         il2cpp_runtime_helper_022b4080(&(__this_09->fields)._uiDocument,pUVar17);
                return pUVar9;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GlobalPauseGamePopup_CreateDefaultPopup_GlobalPauseGameP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameBackgroundMenu_CreateMenu_InGameBackgroundMenu);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/BackgroundMenu");
    g_data_057ae3f4 = '\x01';
  }
  pUVar18 = (UI_InGameBackgroundMenu_o *)UI_ElementFactory__CreateMenu_object_("Prefabs/Panels/BackgroundMenu",MethodInfo_InGameBackgroundMenu_CreateMenu_InGameBackgroundMenu);
  ppUVar2 = &(__this_10->fields)._backgroundMenu;
  (__this_10->fields)._backgroundMenu = pUVar18;
  il2cpp_runtime_helper_022b4080(ppUVar2);
  pUVar18 = (__this_10->fields)._backgroundMenu;
  __this_11 = (UI_InGameBackgroundMenu_o *)0x0;
  if (pUVar18 != (UI_InGameBackgroundMenu_o *)0x0) {
    (*(pUVar18->klass->vtable)._4_Setup.methodPtr)();
    __this_11 = *ppUVar2;
    if ((__this_11 != (UI_InGameBackgroundMenu_o *)0x0) &&
       (pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_11,(MethodInfo *)0x0)
       , pUVar16 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetAsFirstSibling(pUVar16,(MethodInfo *)0x0);
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_10,(MethodInfo *)0x0);
      pUVar19 = (UI_GlobalPauseGamePopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_GlobalPauseGamePopup_CreateDefaultPopup_GlobalPauseGameP);
      (__this_10->fields)._globalPauseGamePopup = pUVar19;
      pUVar9 = (UnityEngine_UIElements_VisualElement_o *)
               il2cpp_runtime_helper_022b4080(&(__this_10->fields)._globalPauseGamePopup,pUVar19);
      return pUVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_TopLeftHUD);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/TopLeftHUD");
    g_data_057ae3e9 = '\x01';
  }
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_11,(MethodInfo *)0x0);
  obj = (UI_ExternalLinkPopup_o *)
        UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar16,"Prefabs/InGame/TopLeftHUD",0,MethodInfo_GameObject_InstantiateAndSetupPanel_TopLeftHUD);
  UI_ElementFactory__SetAnchor
            ((UnityEngine_GameObject_o *)obj,0,0,(UnityEngine_Vector2_o)0xc100000041200000,(MethodInfo *)0x0);
  __this_12 = (UI_ExternalLinkPopup_o *)&__this_11[1].fields.ExternalLinkPopup;
  __this_11[1].fields.ExternalLinkPopup = obj;
  il2cpp_runtime_helper_022b4080(__this_12,obj);
  if ((obj != (UI_ExternalLinkPopup_o *)0x0) &&
     (__this_12 = obj,
     pIVar20 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)obj,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD),
     pIVar20 != (Il2CppObject *)0x0)) {
    __this_11[1].fields.ColorPickPopup = (UI_ColorPickPopup_o *)pIVar20[8].klass;
    il2cpp_runtime_helper_022b4080(&__this_11[1].fields.ColorPickPopup);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)obj,1,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSmallPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae3f3 = '\x01';
  }
  __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  height = 20.0;
  UI_ElementStyle___ctor(__this_04,0x16,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pSVar21 = (System_Threading_CancellationTokenSource_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
  pUVar10 = UI_ElementFactory__CreateHUDLabel
                      ((UnityEngine_Transform_o *)pSVar21,__this_04,"",0,4,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pUVar16 = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Text_GetComponent_Text);
    __this_12[2].fields.SinglePanel = pUVar16;
    il2cpp_runtime_helper_022b4080(&__this_12[2].fields.SinglePanel);
    pUVar16 = __this_12[2].fields.SinglePanel;
    pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar10,1,1,(UnityEngine_Vector2_o)0xc120000000000000,(MethodInfo *)0x0);
      pUVar16 = __this_12[1].fields.DoublePanelLeft;
      pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
      if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
        pSVar21 = (System_Threading_CancellationTokenSource_o *)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar16,(MethodInfo *)0x0)
        ;
        pUVar10 = UI_ElementFactory__CreateHUDLabel
                            ((UnityEngine_Transform_o *)pSVar21,__this_04,"",0,3,(MethodInfo *)0x0);
        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
          pUVar16 = (UnityEngine_Transform_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Text_GetComponent_Text);
          __this_12[2].fields.DoublePanelLeft = pUVar16;
          il2cpp_runtime_helper_022b4080(&__this_12[2].fields.DoublePanelLeft);
          pUVar16 = __this_12[2].fields.DoublePanelLeft;
          pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
          if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
            pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar10,0,0,(UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
            pSVar21 = (System_Threading_CancellationTokenSource_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
            pUVar10 = UI_ElementFactory__CreateHUDLabel
                                ((UnityEngine_Transform_o *)pSVar21,__this_04,"",0,5,
                                 (MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
              pUVar16 = (UnityEngine_Transform_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Text_GetComponent_Text);
              __this_12[2].fields.DoublePanelRight = pUVar16;
              il2cpp_runtime_helper_022b4080(&__this_12[2].fields.DoublePanelRight);
              pUVar16 = __this_12[2].fields.DoublePanelRight;
              pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
              if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                pUVar10 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar10,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
                pSVar21 = (System_Threading_CancellationTokenSource_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                pUVar10 = UI_ElementFactory__CreateHUDLabel
                                    ((UnityEngine_Transform_o *)pSVar21,__this_04,"",0,4,
                                     (MethodInfo *)0x0);
                if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                  pSVar22 = (System_Collections_Generic_List_BasePopup__o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Text_GetComponent_Text);
                  __this_12[2].fields._popups = pSVar22;
                  il2cpp_runtime_helper_022b4080(&__this_12[2].fields._popups);
                  pSVar22 = __this_12[2].fields._popups;
                  pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
                  if (pSVar22 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    pUVar10 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pSVar22,(MethodInfo *)0x0);
                    UI_ElementFactory__SetAnchor
                              (pUVar10,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
                    pSVar21 = (System_Threading_CancellationTokenSource_o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                    pUVar10 = UI_ElementFactory__CreateHUDLabel
                                        ((UnityEngine_Transform_o *)pSVar21,__this_04,"",0,4,
                                         (MethodInfo *)0x0);
                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                      pSVar23 = (Settings_StringSetting_o *)
                                UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Text_GetComponent_Text);
                      __this_12[2].fields._currentCategoryPanelName = pSVar23;
                      il2cpp_runtime_helper_022b4080(&__this_12[2].fields._currentCategoryPanelName);
                      pSVar23 = __this_12[2].fields._currentCategoryPanelName;
                      pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
                      if (pSVar23 != (Settings_StringSetting_o *)0x0) {
                        pUVar10 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pSVar23,(MethodInfo *)0x0);
                        UI_ElementFactory__SetAnchor
                                  (pUVar10,5,5,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
                        pSVar21 = (System_Threading_CancellationTokenSource_o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                        pUVar10 = UI_ElementFactory__CreateHUDLabel
                                            ((UnityEngine_Transform_o *)pSVar21,__this_04,"",0,4,
                                             (MethodInfo *)0x0);
                        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar10 = (UnityEngine_GameObject_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Text_GetComponent_Text);
                          __this_12[2].fields._currentCategoryPanel = pUVar10;
                          il2cpp_runtime_helper_022b4080(&__this_12[2].fields._currentCategoryPanel);
                          pUVar53 = (UnityEngine_Component_o *)__this_12[2].fields._currentCategoryPanel;
                          pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
                          if (pUVar53 != (UnityEngine_Component_o *)0x0) {
                            pUVar10 = UnityEngine_Component__get_gameObject(pUVar53,(MethodInfo *)0x0);
                            UI_ElementFactory__SetAnchor
                                      (pUVar10,3,3,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
                            pSVar21 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                            pUVar10 = UI_ElementFactory__CreateHUDLabel
                                                ((UnityEngine_Transform_o *)pSVar21,__this_04,"",0,4
                                                 ,(MethodInfo *)0x0);
                            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar24 = (UI_BasePanel_o *)
                                        UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Text_GetComponent_Text);
                              __this_12[2].fields.Parent = pUVar24;
                              il2cpp_runtime_helper_022b4080(&__this_12[2].fields.Parent);
                              pUVar24 = __this_12[2].fields.Parent;
                              pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
                              if (pUVar24 != (UI_BasePanel_o *)0x0) {
                                pUVar10 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar24,(MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar10,7,7,(UnityEngine_Vector2_o)0x4120000000000000,
                                           (MethodInfo *)0x0);
                                pSVar21 = (System_Threading_CancellationTokenSource_o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                                pUVar10 = UI_ElementFactory__CreateHUDLabel
                                                    ((UnityEngine_Transform_o *)pSVar21,__this_04,""
                                                     ,0,3,(MethodInfo *)0x0);
                                if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                  pSVar25 = (System_Collections_Generic_Dictionary_string__Type__o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_Text_GetComponent_Text)
                                  ;
                                  __this_12[2].fields._categoryPanelTypes = pSVar25;
                                  il2cpp_runtime_helper_022b4080(&__this_12[2].fields._categoryPanelTypes);
                                  pSVar25 = __this_12[2].fields._categoryPanelTypes;
                                  pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
                                  if (pSVar25 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0)
                                  {
                                    pUVar10 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pSVar25,(MethodInfo *)0x0)
                                    ;
                                    UI_ElementFactory__SetAnchor
                                              (pUVar10,6,6,(UnityEngine_Vector2_o)0x4120000041200000,
                                               (MethodInfo *)0x0);
                                    pSVar21 = (System_Threading_CancellationTokenSource_o *)
                                              UnityEngine_Component__get_transform
                                                        ((UnityEngine_Component_o *)__this_12,
                                                         (MethodInfo *)0x0);
                                    pUVar10 = UI_ElementFactory__CreateHUDLabel
                                                        ((UnityEngine_Transform_o *)pSVar21,__this_04,
                                                         "",0,5,(MethodInfo *)0x0);
                                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar26 = (UnityEngine_UI_RawImage_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar10,MethodInfo_Text_GetComponent_Text);
                                      __this_12[2].fields.MaskBackground = pUVar26;
                                      il2cpp_runtime_helper_022b4080(&__this_12[2].fields.MaskBackground);
                                      pUVar26 = __this_12[2].fields.MaskBackground;
                                      pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
                                      if (pUVar26 != (UnityEngine_UI_RawImage_o *)0x0) {
                                        pUVar10 = UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)pUVar26,
                                                             (MethodInfo *)0x0);
                                        UI_ElementFactory__SetAnchor
                                                  (pUVar10,8,8,(UnityEngine_Vector2_o)0x41200000c1200000,
                                                   (MethodInfo *)0x0);
                                        pUVar16 = UnityEngine_Component__get_transform
                                                            ((UnityEngine_Component_o *)__this_12,
                                                             (MethodInfo *)0x0);
                                        pSVar21 = (System_Threading_CancellationTokenSource_o *)
                                                  UI_ElementFactory__CreateDefaultPopup_object_
                                                            (pUVar16,0,MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
                                        ppSVar3 = &__this_12[2].fields.m_CancellationTokenSource;
                                        __this_12[2].fields.m_CancellationTokenSource = pSVar21;
                                        il2cpp_runtime_helper_022b4080(ppSVar3);
                                        pSVar21 = __this_12[2].fields.m_CancellationTokenSource;
                                        if ((pSVar21 != (System_Threading_CancellationTokenSource_o *)0x0) &&
                                           (pUVar10 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pSVar21,
                                                                 (MethodInfo *)0x0),
                                           pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
                                          pSVar27 = *ppSVar3;
                                          pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
                                          if (pSVar27 != (System_Threading_CancellationTokenSource_o *)0x0) {
                                            pUVar10 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pSVar27,
                                                                 (MethodInfo *)0x0);
                                            UI_ElementFactory__SetAnchor
                                                      (pUVar10,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,
                                                       (MethodInfo *)0x0);
                                            pUVar16 = UnityEngine_Component__get_transform
                                                                ((UnityEngine_Component_o *)__this_12,
                                                                 (MethodInfo *)0x0);
                                            pIVar20 = UI_ElementFactory__CreateDefaultPopup_object_
                                                                (pUVar16,0,MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigPopup);
                                            __this_12[2].monitor = pIVar20;
                                            il2cpp_runtime_helper_022b4080(&__this_12[2].monitor);
                                            pSVar21 = __this_12[2].monitor;
                                            if ((pSVar21 != (System_Threading_CancellationTokenSource_o *)0x0)
                                               && (pUVar10 = UnityEngine_Component__get_gameObject
                                                                       ((UnityEngine_Component_o *)pSVar21,
                                                                        (MethodInfo *)0x0),
                                                  pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                                              UnityEngine_GameObject__AddComponent_object_
                                                        (pUVar10,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                              pUVar53 = __this_12[2].monitor;
                                              pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
                                              if (pUVar53 != (UnityEngine_Component_o *)0x0) {
                                                pSVar21 = (System_Threading_CancellationTokenSource_o *)
                                                          UnityEngine_Component__get_gameObject
                                                                    (pUVar53,(MethodInfo *)0x0);
                                                UI_ElementFactory__SetAnchor
                                                          ((UnityEngine_GameObject_o *)pSVar21,1,4,
                                                           (UnityEngine_Vector2_o)0xc2f0000000000000,
                                                           (MethodInfo *)0x0);
                                                lVar29 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                                if ((lVar29 != 0) &&
                                                   (pUVar9 = *(UnityEngine_UIElements_VisualElement_o **)
                                                              (lVar29 + 0x160),
                                                   pUVar9 != (UnityEngine_UIElements_VisualElement_o *)0x0)) {
                                                  iVar49 = *(int *)&(pUVar9->fields).field_0x4 + -1;
                                                  if (0 < iVar49) {
                                                    iVar42 = 0;
                                                    do {
                                                      while( true ) {
                                                        pSVar21 = (System_Threading_CancellationTokenSource_o
                                                                   *)UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                __this_12,(MethodInfo *)0x0);
                                                        pSVar27 = (System_Threading_CancellationTokenSource_o
                                                                   *)
                                                       UI_ElementFactory__CreateDefaultPopup_object_
                                                                 ((UnityEngine_Transform_o *)pSVar21,0,
                                                                  MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSmallPopup);
                                                       if ((pSVar27 ==
                                                            (System_Threading_CancellationTokenSource_o *)0x0)
                                                          || (pSVar21 = pSVar27,
                                                             pUVar10 = UnityEngine_Component__get_gameObject
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pSVar27,(MethodInfo *)0x0),
                                                             pUVar10 == (UnityEngine_GameObject_o *)0x0))
                                                       goto label_043c6ac6;
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar10,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                                       pUVar10 = UnityEngine_Component__get_gameObject
                                                                           ((UnityEngine_Component_o *)pSVar27
                                                                            ,(MethodInfo *)0x0);
                                                       height = 0.0;
                                                       UI_ElementFactory__SetAnchor
                                                                 (pUVar10,1,4,
                                                                  (UnityEngine_Vector2_o)
                                                                  ((ulong)(uint)((float)iVar42 * -35.0 +
                                                                                -162.0) << 0x20),
                                                                  (MethodInfo *)0x0);
                                                       lVar29 = MethodInfo_Void_Add;
                                                       pSVar21 = (System_Threading_CancellationTokenSource_o *
                                                                 )__this_12[2].fields.m_CachedPtr;
                                                       if (pSVar21 ==
                                                           (System_Threading_CancellationTokenSource_o *)0x0)
                                                       goto label_043c6ac6;
                                                       piVar1 = (int32_t *)
                                                                ((long)&(pSVar21->fields).
                                                                        _registeredCallbacksLists + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar5 = (System_Object_array *)
                                                                (pSVar21->fields)._kernelEvent;
                                                       if (pSVar5 == (System_Object_array *)0x0)
                                                       goto label_043c6ac6;
                                                       uVar43 = *(uint *)&(pSVar21->fields).
                                                                          _registeredCallbacksLists;
                                                       if ((uint)pSVar5->max_length <= uVar43) break;
                                                       *(uint *)&(pSVar21->fields)._registeredCallbacksLists =
                                                            uVar43 + 1;
                                                       pSVar5->m_Items[(int)uVar43] = (Il2CppObject *)pSVar27;
                                                       pUVar9 = (UnityEngine_UIElements_VisualElement_o *)
                                                                il2cpp_runtime_helper_022b4080(pSVar5->m_Items +
                                                                                   (int)uVar43);
                                                       iVar42 = iVar42 + 1;
                                                       if (iVar49 == iVar42) {
                                                         return pUVar9;
                                                       }
                                                      }
                                                      System_Collections_Generic_List_object___AddWithResize
                                                                ((System_Collections_Generic_List_object__o *)
                                                                 pSVar21,(Il2CppObject *)pSVar27,
                                                                 *(MethodInfo_362C220 **)
                                                                  (*(long *)(*(long *)(lVar29 + 0x20) + 0xc0)
                                                                  + 0x70));
                                                      iVar42 = iVar42 + 1;
                                                      pUVar9 = extraout_RAX_00;
                                                    } while (iVar49 != iVar42);
                                                  }
                                                  return pUVar9;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_043c6ac6:
  il2cpp_runtime_helper_022b2c90();
  parent = (System_String_o **)pSVar21;
  if (g_data_057ae3f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChatPanel_GetComponent_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FeedPanel_GetComponent_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/VoiceChatPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/ChatPanel");
    parent = &"Prefabs/InGame/FeedPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f2 = '\x01';
  }
  lVar29 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  lVar6 = *(long *)(lVar29 + 0x28);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x30) != 0)) {
    if (*(char *)(*(long *)(lVar6 + 0x30) + 0x11) == '\0') {
label_043c6c6c:
      if ((*(long *)(lVar29 + 0x80) != 0) &&
         (lVar29 = *(long *)(*(long *)(lVar29 + 0x80) + 0xb0), lVar29 != 0)) {
        if (*(int *)(lVar29 + 0x14) == 2) {
label_043c6d24:
          parent = (System_String_o **)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar21,(MethodInfo *)0x0);
          pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/ChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            pIVar20 = UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_ChatPanel_GetComponent_ChatPanel);
            pSVar21[3].monitor = pIVar20;
            il2cpp_runtime_helper_022b4080(&pSVar21[3].monitor);
            parent = (System_String_o **)0x0;
            if (pSVar21[3].monitor != (UnityEngine_Component_o *)0x0) {
              pUVar10 = UnityEngine_Component__get_gameObject(pSVar21[3].monitor,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar10,6,6,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              return extraout_RAX_01;
            }
          }
        }
        else {
          parent = (System_String_o **)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar21,(MethodInfo *)0x0);
          pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/VoiceChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            pSVar30 = (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
            pSVar21[3].fields._registeredCallbacksLists = pSVar30;
            il2cpp_runtime_helper_022b4080(&pSVar21[3].fields._registeredCallbacksLists);
            pSVar30 = pSVar21[3].fields._registeredCallbacksLists;
            parent = (System_String_o **)0x0;
            if (pSVar30 != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
              pUVar10 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar30,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar10,3,3,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              goto label_043c6d24;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar6 + 0x28) != 0) {
      if (*(char *)(*(long *)(lVar6 + 0x28) + 0x11) == '\0') goto label_043c6c6c;
      pSVar30 = pSVar21[7].fields._registeredCallbacksLists;
      parent = (System_String_o **)0x0;
      if (pSVar30 != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
        parent = (System_String_o **)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar30,(MethodInfo *)0x0);
        pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                            ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/FeedPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
          pSVar28 = (System_Threading_ManualResetEvent_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_FeedPanel_GetComponent_FeedPanel);
          pSVar21[3].fields._kernelEvent = pSVar28;
          il2cpp_runtime_helper_022b4080(&pSVar21[3].fields);
          pSVar28 = pSVar21[3].fields._kernelEvent;
          parent = (System_String_o **)0x0;
          if (pSVar28 != (System_Threading_ManualResetEvent_o *)0x0) {
            parent = (System_String_o **)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pSVar28,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      ((UnityEngine_GameObject_o *)parent,2,2,(UnityEngine_Vector2_o)0xc248000000000000,
                       (MethodInfo *)0x0);
            lVar29 = *(long *)(TypeInfo_SettingsManager + 0xb8);
            goto label_043c6c6c;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    il2cpp_runtime_helper_023445d0(&"Minimap/Prefabs/MinimapPanel");
    g_data_057ae3f0 = '\x01';
  }
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
  pSVar31 = (System_Threading_CancellationCallbackInfo_o *)
            UI_ElementFactory__InstantiateAndBind(pUVar16,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
  ppSVar4 = &(((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields).
             _executingCallback;
  (((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields)._executingCallback =
       pSVar31;
  il2cpp_runtime_helper_022b4080(ppSVar4,pSVar31);
  UI_ElementFactory__SetAnchor
            ((UnityEngine_GameObject_o *)
             (((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields).
             _executingCallback,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
  pSVar31 = (((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields).
            _executingCallback;
  pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
  if (pSVar31 != (System_Threading_CancellationCallbackInfo_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar31,MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    pSVar31 = *ppSVar4;
    pSVar21 = (System_Threading_CancellationTokenSource_o *)0x0;
    if (pSVar31 != (System_Threading_CancellationCallbackInfo_o *)0x0) {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pSVar31,0,(MethodInfo *)0x0);
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
      pSVar21 = (System_Threading_CancellationTokenSource_o *)parent;
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = (UnityEngine_UIElements_VisualElement_o *)
                 UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
        return pUVar9;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Snapshot/SnapshotPopup");
    g_data_057ae3f1 = '\x01';
  }
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar21,(MethodInfo *)0x0);
  pUVar32 = (UnityEngine_Transform_o *)
            UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar16,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
  if (pUVar32 != (UnityEngine_Transform_o *)0x0) {
    pIVar20 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar32,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    *(Il2CppObject **)&pSVar21[5].fields._state = pIVar20;
    il2cpp_runtime_helper_022b4080(&pSVar21[5].fields._state);
    pUVar16 = pUVar32;
    __this_05 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar32,(MethodInfo *)0x0);
    if (__this_05 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_05,(UnityEngine_Vector3_o)ZEXT812(0x3f4ccccd3f4ccccd),(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                ((UnityEngine_GameObject_o *)pUVar32,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,
                 (MethodInfo *)0x0);
      return extraout_RAX_02;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar43 = (uint)pUVar16->klass[1]._1.namespaze;
  pUVar32 = pUVar16;
  (*(code *)pUVar16->klass[1]._1.name)();
  pvVar7 = pUVar16[6].monitor;
  if (pvVar7 != (void *)0x0) {
    if (g_data_057ae3bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetEmoteWheel_b__25_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
      g_data_057ae3bf = '\x01';
    }
    pUVar32 = (UnityEngine_Transform_o *)0x0;
    if (*(long **)((long)pvVar7 + 0x30) != (long *)0x0) {
      lVar29 = **(long **)((long)pvVar7 + 0x30);
      uVar43 = (uint)*(undefined8 *)(lVar29 + 0x2a0);
      (**(code **)(lVar29 + 0x298))();
      *(undefined1 *)((long)pvVar7 + 0x40) = 0;
      pUVar12 = (UI_ItemHandler_o *)pUVar16[6].fields.m_CachedPtr;
      pUVar32 = (UnityEngine_Transform_o *)0x0;
      if (pUVar12 != (UI_ItemHandler_o *)0x0) {
        UI_ItemHandler__SetItemWheel(pUVar12,0,(MethodInfo *)0x0);
        return extraout_RAX_03;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    g_data_057ae3e8 = '\x01';
  }
  pUVar10 = pUVar32[9].monitor;
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pMVar45 = MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD;
    __this_06 = (UI_TopLeftHUD_o *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    uVar43 = (uint)pMVar45;
    if (__this_06 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_06,(MethodInfo *)0x0);
      return extraout_RAX_04;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar33 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar33 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar33,uVar43 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar33 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar33 != (UnityEngine_Behaviour_o *)0x0) {
    bVar8 = UnityEngine_Behaviour__get_enabled(pUVar33,(MethodInfo *)0x0);
    return (UnityEngine_UIElements_VisualElement_o *)CONCAT44(extraout_var,bVar8);
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  pSVar34 = (System_Collections_Generic_List_object__o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
  pIVar38 = title;
  __this_07 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        ((UnityEngine_Transform_o *)pSVar34,(System_String_o *)title,width,height,0,
                         (MethodInfo *)0x0);
  if (__this_07 != (UnityEngine_GameObject_o *)0x0) {
    pIVar38 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar35 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(__this_07,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar29 = MethodInfo_Void_Add;
    pSVar34 = ((UnityEngine_Component_o *)(pUVar10 + 1))->monitor;
    if (pSVar34 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(pSVar34->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (pSVar34->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar43 = (pSVar34->fields)._size;
        pIVar38 = pIVar35;
        if (uVar43 < (uint)pSVar5->max_length) {
          (pSVar34->fields)._size = uVar43 + 1;
          pSVar5->m_Items[(int)uVar43] = (Il2CppObject *)pIVar35;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar43);
          pSVar46 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar10 + 0x18))->fields).m_CachedPtr;
          if (pSVar46 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar46,(Il2CppObject *)key,(Il2CppObject *)pIVar35,MethodInfo_Void_set_Item);
            return extraout_RAX_06;
          }
          pSVar34 = (System_Collections_Generic_List_object__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar34,(Il2CppObject *)pIVar35,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
          pSVar46 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar10 + 0x18))->fields).m_CachedPtr;
          pSVar34 = (System_Collections_Generic_List_object__o *)0x0;
          if (pSVar46 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar35 = pIVar38;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar46 = (System_Collections_Generic_Dictionary_object__object__o *)pSVar34[0xe].fields._syncRoot;
  pUVar9 = (UnityEngine_UIElements_VisualElement_o *)0x0;
  if (pSVar46 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar9 = (UnityEngine_UIElements_VisualElement_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar46,(Il2CppObject *)pIVar38,MethodInfo_BasePopup_get_Item);
    if (pUVar9 == (UnityEngine_UIElements_VisualElement_o *)0x0) {
      return (UnityEngine_UIElements_VisualElement_o *)0x0;
    }
    bVar41 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar41 <= (pUVar9->klass->_2).naturalAligment) &&
       ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar41 - 1] == TypeInfo_CustomPopup)) {
      return pUVar9;
    }
    pIVar35 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pSVar46 = *(System_Collections_Generic_Dictionary_object__object__o **)
             &(pUVar9->fields).m_WorldTransformInverseCache.fields.m21;
  __this_13 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar46 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar46,(Il2CppObject *)pIVar35,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 == '\0') {
      return (UnityEngine_UIElements_VisualElement_o *)0x0;
    }
    __this_13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 &(pUVar9->fields).m_WorldTransformInverseCache.fields.m21;
    if ((__this_13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar20 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_13,(Il2CppObject *)pIVar35,MethodInfo_BasePopup_get_Item), pIVar20 != (Il2CppObject *)0x0))
    {
      return (UnityEngine_UIElements_VisualElement_o *)
             CONCAT71((int7)((ulong)pIVar20 >> 8),*(char *)&pIVar20[9].klass != '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pSVar46 = *(System_Collections_Generic_Dictionary_object__object__o **)&__this_13[7].fields._count;
  if (pSVar46 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar36 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar46,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    pUVar9 = (UnityEngine_UIElements_VisualElement_o *)
             System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar36,MethodInfo_List_1_System_String_ToList_String);
    return pUVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar46,(MethodInfo *)0x0);
  pIVar20 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  *(Il2CppObject **)&pSVar46[3].fields._freeCount = pIVar20;
  il2cpp_runtime_helper_022b4080(&pSVar46[3].fields._freeCount);
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar46,(MethodInfo *)0x0);
  pSVar36 = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
            UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  pSVar46[3].fields._keys = pSVar36;
  il2cpp_runtime_helper_022b4080(&pSVar46[3].fields._keys);
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar46,(MethodInfo *)0x0);
  pSVar37 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
            UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  pSVar46[3].fields._values = pSVar37;
  il2cpp_runtime_helper_022b4080(&pSVar46[3].fields._values);
  pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar46,(MethodInfo *)0x0);
  __this_08 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              UI_ElementFactory__CreateDefaultPopup_object_(pUVar16,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  pSVar46[4].fields._comparer = (System_Collections_Generic_IEqualityComparer_TKey__o *)__this_08;
  il2cpp_runtime_helper_022b4080(&pSVar46[4].fields._comparer);
  pUVar53 = (UnityEngine_Component_o *)pSVar46[4].fields._comparer;
  if (pUVar53 == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar38 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar10 = UnityEngine_Component__get_gameObject(pUVar53,(MethodInfo *)0x0);
    __this_08 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x7;
    UI_ElementFactory__SetAnchor(pUVar10,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar29 = MethodInfo_Void_Add;
    pSVar34 = *(System_Collections_Generic_List_object__o **)&(pSVar46->fields)._count;
    if (pSVar34 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
    __this_08 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                 &pSVar46[3].fields._freeCount;
    piVar1 = &(pSVar34->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar34->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto label_043c7809;
    uVar43 = (pSVar34->fields)._size;
    if ((uint)pSVar5->max_length <= uVar43) {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar34,&__this_08->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
      pSVar34 = *(System_Collections_Generic_List_object__o **)&(pSVar46->fields)._count;
      if (pSVar34 != (System_Collections_Generic_List_object__o *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    (pSVar34->fields)._size = uVar43 + 1;
    pSVar5->m_Items[(int)uVar43] = &__this_08->obj;
    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar43);
    pSVar34 = *(System_Collections_Generic_List_object__o **)&(pSVar46->fields)._count;
    if (pSVar34 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
label_043c7630:
    lVar29 = MethodInfo_Void_Add;
    __this_08 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar46[3].fields._keys;
    piVar1 = &(pSVar34->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar34->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto label_043c7809;
    uVar43 = (pSVar34->fields)._size;
    if ((uint)pSVar5->max_length <= uVar43) {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar34,(Il2CppObject *)__this_08,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
      pSVar34 = *(System_Collections_Generic_List_object__o **)&(pSVar46->fields)._count;
      if (pSVar34 != (System_Collections_Generic_List_object__o *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    (pSVar34->fields)._size = uVar43 + 1;
    pSVar5->m_Items[(int)uVar43] = (Il2CppObject *)__this_08;
    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar43);
    pSVar34 = *(System_Collections_Generic_List_object__o **)&(pSVar46->fields)._count;
    if (pSVar34 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
label_043c769b:
    lVar29 = MethodInfo_Void_Add;
    __this_08 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar46[3].fields._values;
    piVar1 = &(pSVar34->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar34->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto label_043c7809;
    uVar43 = (pSVar34->fields)._size;
    if (uVar43 < (uint)pSVar5->max_length) {
      (pSVar34->fields)._size = uVar43 + 1;
      pSVar5->m_Items[(int)uVar43] = (Il2CppObject *)__this_08;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar43);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar34,(Il2CppObject *)__this_08,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
    }
    pIVar38 = TypeInfo_InGameManager;
    __this_08 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                 (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_08 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar46[7].fields._entries = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pSVar46[7].fields._entries);
      pSVar47 = pSVar46[6].fields._buckets;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_08 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pSVar47,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return (UnityEngine_UIElements_VisualElement_o *)CONCAT44(extraout_var_00,bVar8);
      }
      lVar29 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar29 != 0) &&
         (pUVar9 = *(UnityEngine_UIElements_VisualElement_o **)(lVar29 + 0x70),
         pUVar9 != (UnityEngine_UIElements_VisualElement_o *)0x0)) {
        if (*(char *)((long)&(pUVar9->fields).isIMGUIContainer + 1) == '\0') {
          return pUVar9;
        }
        bVar8 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pSVar47,(MethodInfo *)__this_08);
        if ((char)bVar8 == '\0') {
          return (UnityEngine_UIElements_VisualElement_o *)CONCAT44(extraout_var_01,bVar8);
        }
        pSVar47 = pSVar46[6].fields._buckets;
        if (pSVar47 != (System_Int32_array *)0x0) {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pSVar47,1,(MethodInfo *)0x0);
          return extraout_RAX_07;
        }
      }
      goto label_043c7809;
    }
    pIVar35 = (__this_08->obj).klass;
    bVar41 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar41 <= (pIVar35->_2).naturalAligment) &&
       ((pIVar35->_2).typeHierarchy[(ulong)bVar41 - 1] == TypeInfo_InGameManager)) {
      pSVar46[7].fields._entries = __this_08;
      pIVar35 = (__this_08->obj).klass;
      if ((bVar41 <= (pIVar35->_2).naturalAligment) &&
         ((pIVar35->_2).typeHierarchy[(ulong)bVar41 - 1] == pIVar38)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_08 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar29 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar29 != 0) && (lVar29 = *(long *)(lVar29 + 0x58), lVar29 != 0)) && (*(long *)(lVar29 + 0xc0) != 0))
  {
    if (*(char *)(*(long *)(lVar29 + 0xc0) + 0x11) != '\0') {
      return (UnityEngine_UIElements_VisualElement_o *)0x0;
    }
    lVar29 = *(long *)(lVar29 + 200);
    if (lVar29 != 0) {
      return (UnityEngine_UIElements_VisualElement_o *)
             CONCAT71((int7)((ulong)lVar29 >> 8),*(char *)(lVar29 + 0x11) == '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar38 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_08,(MethodInfo *)pIVar38);
    *(undefined1 *)&__this_08->m_Items[0xe].fields.key = 1;
joined_r0x043c78f4:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    pUVar33 = (UnityEngine_Behaviour_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_08,MethodInfo_Canvas_GetComponent_Canvas);
    pSVar48 = __this_08;
    if (pUVar33 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(pUVar33,1,(MethodInfo *)0x0);
      return extraout_RAX_08;
    }
  }
  else {
    bVar8 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_08,(MethodInfo *)pIVar38);
    if ((char)bVar8 != '\0') goto joined_r0x043c78f4;
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_08,(MethodInfo *)pIVar38);
    plVar40 = *(long **)&__this_08->m_Items[10].fields;
    pSVar48 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (plVar40 != (long *)0x0) {
      (**(code **)(*plVar40 + 0x288))(plVar40,*(undefined8 *)(*plVar40 + 0x290));
      goto joined_r0x043c78f4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar51 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar52 = (Il2CppMethodPointer)0x0;
  pUVar53 = (UnityEngine_Component_o *)0x0;
  pSVar34 = (System_Collections_Generic_List_object__o *)pSVar48->m_Items[0x13].fields.value;
  if (pSVar34 == (System_Collections_Generic_List_object__o *)0x0) {
label_043c7a44:
    auVar50 = il2cpp_runtime_helper_022b2c90();
    if (auVar50._8_4_ == 1) {
      plVar40 = (long *)__cxa_begin_catch(auVar50._0_8_);
      lVar29 = *plVar40;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar52;
      __this_02.fields._list = pSVar51;
      __this_02.fields._current = (Il2CppObject *)pUVar53;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe30);
      bVar41 = 0;
      iVar49 = 0;
      uVar39 = extraout_RAX_10;
      if (lVar29 == 0) goto label_043c7a26;
      il2cpp_runtime_helper_022fefe0(lVar29);
    }
    __this_03.fields._8_8_ = pIVar52;
    __this_03.fields._list = pSVar51;
    __this_03.fields._current = (Il2CppObject *)pUVar53;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe30);
    _Unwind_Resume(auVar50._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffe30,pSVar34,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator)
  ;
  do {
    __this_00.fields._8_8_ = pIVar52;
    __this_00.fields._list = pSVar51;
    __this_00.fields._current = (Il2CppObject *)pUVar53;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe30);
    if ((char)bVar8 == '\0') {
      iVar49 = 5;
      bVar41 = 0;
      goto label_043c7a14;
    }
    if (pUVar53 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar10 = UnityEngine_Component__get_gameObject(pUVar53,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
  } while ((char)bVar8 == '\0');
  bVar41 = 1;
  iVar49 = 4;
label_043c7a14:
  __this_01.fields._8_8_ = pIVar52;
  __this_01.fields._list = pSVar51;
  __this_01.fields._current = (Il2CppObject *)pUVar53;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe30);
  uVar39 = extraout_RAX_09;
label_043c7a26:
  return (UnityEngine_UIElements_VisualElement_o *)CONCAT71((int7)((ulong)uVar39 >> 8),iVar49 == 4 & bVar41);
}


// UI.InGameMenu$$Setup
// il2cpp: void UI_InGameMenu__Setup (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c5e00

void UI_InGameMenu__Setup(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_InGameBackgroundMenu_o **ppUVar2;
  System_Threading_CancellationTokenSource_o **ppSVar3;
  System_Threading_CancellationCallbackInfo_o **ppSVar4;
  byte bVar5;
  System_Object_array *pSVar6;
  long lVar7;
  void *pvVar8;
  char *pcVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  undefined1 *puVar10;
  bool_conflict bVar11;
  UnityEngine_GameObject_o *pUVar12;
  UI_EmoteHandler_o *pUVar13;
  UI_ItemHandler_o *pUVar14;
  UI_HUDBottomHandler_o *pUVar15;
  UI_CharacterInfoHandler_o *pUVar16;
  UI_StylebarHandler_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  UI_BasePopup_o *method_00;
  UnityEngine_UIElements_UIDocument_o *pUVar19;
  UI_InGameBackgroundMenu_o *pUVar20;
  UI_GlobalPauseGamePopup_o *pUVar21;
  UI_ExternalLinkPopup_o *obj;
  Il2CppObject *pIVar22;
  UI_ElementStyle_o *__this_04;
  System_Threading_CancellationTokenSource_o *pSVar23;
  System_Collections_Generic_List_BasePopup__o *pSVar24;
  Settings_StringSetting_o *pSVar25;
  UI_BasePanel_o *pUVar26;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar27;
  UnityEngine_UI_RawImage_o *pUVar28;
  System_Threading_CancellationTokenSource_o *pSVar29;
  System_Threading_ManualResetEvent_o *pSVar30;
  long lVar31;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *pSVar32;
  System_Threading_CancellationCallbackInfo_o *pSVar33;
  UnityEngine_Transform_o *pUVar34;
  UnityEngine_Transform_o *__this_05;
  UI_TopLeftHUD_o *__this_06;
  UnityEngine_Behaviour_o *pUVar35;
  System_Collections_Generic_List_object__o *__this_07;
  UnityEngine_GameObject_o *__this_08;
  Il2CppClass *pIVar36;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  Il2CppClass *pIVar37;
  Il2CppType *pIVar38;
  Il2CppRGCTXData *__this_09;
  long *plVar39;
  Il2CppClass *title;
  int iVar40;
  uint uVar41;
  MethodInfo *pMVar42;
  MethodInfo_255A0F0 *pMVar43;
  MethodInfo_24E7B40 *key;
  UI_InGameMenu_o *__this_10;
  UI_InGameBackgroundMenu_o *__this_11;
  UI_ExternalLinkPopup_o *__this_12;
  System_String_o **parent;
  System_Collections_Generic_Dictionary_object__object__o *pSVar44;
  Il2CppRGCTXData *pIVar45;
  int iVar46;
  float width;
  float height;
  undefined1 auVar47 [12];
  System_Collections_Generic_List_T__o *pSVar48;
  Il2CppMethodPointer pIVar49;
  UnityEngine_Component_o *pUVar50;
  
  if (g_data_057ae3e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UIDocument_GetComponent_UIDocument);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SongPopup_CreateDefaultPopup_SongPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterInfoHandler_AddComponent_CharacterInfoHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CrosshairHandler_AddComponent_CrosshairHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteHandler_AddComponent_EmoteHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HUDBottomHandler_AddComponent_HUDBottomHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ItemHandler_AddComponent_ItemHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StylebarHandler_AddComponent_StylebarHandler);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/NapeLockImage");
    g_data_057ae3e7 = '\x01';
  }
  pMVar42 = (MethodInfo *)0x0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  UI_InGameMenu__SetupLoading(__this,pMVar42);
  UI_InGameMenu__SetupTopLeftHud(__this,pMVar42);
  UI_InGameMenu__SetupLabels(__this,pMVar42);
  __this_10 = __this;
  pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
    pUVar13 = (UI_EmoteHandler_o *)UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_EmoteHandler_AddComponent_EmoteHandler);
    (__this->fields).EmoteHandler = pUVar13;
    il2cpp_runtime_helper_022b4080(&(__this->fields).EmoteHandler);
    __this_10 = __this;
    pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
      pUVar14 = (UI_ItemHandler_o *)UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_ItemHandler_AddComponent_ItemHandler);
      (__this->fields).ItemHandler = pUVar14;
      il2cpp_runtime_helper_022b4080(&(__this->fields).ItemHandler);
      __this_10 = __this;
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        pUVar15 = (UI_HUDBottomHandler_o *)UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_HUDBottomHandler_AddComponent_HUDBottomHandler);
        (__this->fields).HUDBottomHandler = pUVar15;
        il2cpp_runtime_helper_022b4080(&(__this->fields).HUDBottomHandler);
        __this_10 = __this;
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pUVar16 = (UI_CharacterInfoHandler_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_CharacterInfoHandler_AddComponent_CharacterInfoHandler);
          (__this->fields).CharacterInfoHandler = pUVar16;
          il2cpp_runtime_helper_022b4080(&(__this->fields).CharacterInfoHandler);
          __this_10 = __this;
          pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
          ;
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            pUVar17 = (UI_StylebarHandler_o *)
                      UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_StylebarHandler_AddComponent_StylebarHandler);
            (__this->fields).StylebarHandler = pUVar17;
            il2cpp_runtime_helper_022b4080(&(__this->fields).StylebarHandler);
            __this_10 = __this;
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_CrosshairHandler_AddComponent_CrosshairHandler);
              pUVar18 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pUVar12 = UI_ElementFactory__InstantiateAndBind(pUVar18,"Prefabs/InGame/NapeLockImage",(MethodInfo *)0x0);
              (__this->fields).NapeLock = pUVar12;
              il2cpp_runtime_helper_022b4080(&(__this->fields).NapeLock);
              pUVar12 = (__this->fields).NapeLock;
              __this_10 = (UI_InGameMenu_o *)0x0;
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pMVar42 = (MethodInfo *)0x0;
                UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
                UI_InGameMenu__SetupChat(__this,pMVar42);
                UI_InGameMenu__SetupMinimap(__this,pMVar42);
                pUVar18 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                method_00 = (UI_BasePopup_o *)
                            UI_ElementFactory__CreateDefaultPopup_object_(pUVar18,0,MethodInfo_SongPopup_CreateDefaultPopup_SongPopup);
                (__this->fields)._songPopup = method_00;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._songPopup);
                UI_InGameMenu__SetupSnapshot(__this,(MethodInfo *)method_00);
                UI_InGameMenu__HideAllMenus(__this,(MethodInfo *)method_00);
                pUVar19 = (UnityEngine_UIElements_UIDocument_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this,MethodInfo_UIDocument_GetComponent_UIDocument);
                (__this->fields)._uiDocument = pUVar19;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._uiDocument,pUVar19);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GlobalPauseGamePopup_CreateDefaultPopup_GlobalPauseGameP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameBackgroundMenu_CreateMenu_InGameBackgroundMenu);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/BackgroundMenu");
    g_data_057ae3f4 = '\x01';
  }
  pUVar20 = (UI_InGameBackgroundMenu_o *)UI_ElementFactory__CreateMenu_object_("Prefabs/Panels/BackgroundMenu",MethodInfo_InGameBackgroundMenu_CreateMenu_InGameBackgroundMenu);
  ppUVar2 = &(__this_10->fields)._backgroundMenu;
  (__this_10->fields)._backgroundMenu = pUVar20;
  il2cpp_runtime_helper_022b4080(ppUVar2);
  pUVar20 = (__this_10->fields)._backgroundMenu;
  __this_11 = (UI_InGameBackgroundMenu_o *)0x0;
  if (pUVar20 != (UI_InGameBackgroundMenu_o *)0x0) {
    (*(pUVar20->klass->vtable)._4_Setup.methodPtr)();
    __this_11 = *ppUVar2;
    if ((__this_11 != (UI_InGameBackgroundMenu_o *)0x0) &&
       (pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_11,(MethodInfo *)0x0)
       , pUVar18 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetAsFirstSibling(pUVar18,(MethodInfo *)0x0);
      pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_10,(MethodInfo *)0x0);
      pUVar21 = (UI_GlobalPauseGamePopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar18,0,MethodInfo_GlobalPauseGamePopup_CreateDefaultPopup_GlobalPauseGameP);
      (__this_10->fields)._globalPauseGamePopup = pUVar21;
      il2cpp_runtime_helper_022b4080(&(__this_10->fields)._globalPauseGamePopup,pUVar21);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_TopLeftHUD);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/TopLeftHUD");
    g_data_057ae3e9 = '\x01';
  }
  pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_11,(MethodInfo *)0x0);
  obj = (UI_ExternalLinkPopup_o *)
        UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar18,"Prefabs/InGame/TopLeftHUD",0,MethodInfo_GameObject_InstantiateAndSetupPanel_TopLeftHUD);
  UI_ElementFactory__SetAnchor
            ((UnityEngine_GameObject_o *)obj,0,0,(UnityEngine_Vector2_o)0xc100000041200000,(MethodInfo *)0x0);
  __this_12 = (UI_ExternalLinkPopup_o *)&__this_11[1].fields.ExternalLinkPopup;
  __this_11[1].fields.ExternalLinkPopup = obj;
  il2cpp_runtime_helper_022b4080(__this_12,obj);
  if ((obj != (UI_ExternalLinkPopup_o *)0x0) &&
     (__this_12 = obj,
     pIVar22 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)obj,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD),
     pIVar22 != (Il2CppObject *)0x0)) {
    __this_11[1].fields.ColorPickPopup = (UI_ColorPickPopup_o *)pIVar22[8].klass;
    il2cpp_runtime_helper_022b4080(&__this_11[1].fields.ColorPickPopup);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)obj,1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSmallPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae3f3 = '\x01';
  }
  __this_04 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  height = 20.0;
  UI_ElementStyle___ctor(__this_04,0x16,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pSVar23 = (System_Threading_CancellationTokenSource_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
  pUVar12 = UI_ElementFactory__CreateHUDLabel
                      ((UnityEngine_Transform_o *)pSVar23,__this_04,"",0,4,(MethodInfo *)0x0);
  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
    pUVar18 = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
    __this_12[2].fields.SinglePanel = pUVar18;
    il2cpp_runtime_helper_022b4080(&__this_12[2].fields.SinglePanel);
    pUVar18 = __this_12[2].fields.SinglePanel;
    pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
    if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar12,1,1,(UnityEngine_Vector2_o)0xc120000000000000,(MethodInfo *)0x0);
      pUVar18 = __this_12[1].fields.DoublePanelLeft;
      pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
      if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
        pSVar23 = (System_Threading_CancellationTokenSource_o *)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar18,(MethodInfo *)0x0)
        ;
        pUVar12 = UI_ElementFactory__CreateHUDLabel
                            ((UnityEngine_Transform_o *)pSVar23,__this_04,"",0,3,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pUVar18 = (UnityEngine_Transform_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
          __this_12[2].fields.DoublePanelLeft = pUVar18;
          il2cpp_runtime_helper_022b4080(&__this_12[2].fields.DoublePanelLeft);
          pUVar18 = __this_12[2].fields.DoublePanelLeft;
          pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
          if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar12,0,0,(UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
            pSVar23 = (System_Threading_CancellationTokenSource_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
            pUVar12 = UI_ElementFactory__CreateHUDLabel
                                ((UnityEngine_Transform_o *)pSVar23,__this_04,"",0,5,
                                 (MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
              pUVar18 = (UnityEngine_Transform_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
              __this_12[2].fields.DoublePanelRight = pUVar18;
              il2cpp_runtime_helper_022b4080(&__this_12[2].fields.DoublePanelRight);
              pUVar18 = __this_12[2].fields.DoublePanelRight;
              pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
              if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
                pUVar12 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar12,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
                pSVar23 = (System_Threading_CancellationTokenSource_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                pUVar12 = UI_ElementFactory__CreateHUDLabel
                                    ((UnityEngine_Transform_o *)pSVar23,__this_04,"",0,4,
                                     (MethodInfo *)0x0);
                if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                  pSVar24 = (System_Collections_Generic_List_BasePopup__o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
                  __this_12[2].fields._popups = pSVar24;
                  il2cpp_runtime_helper_022b4080(&__this_12[2].fields._popups);
                  pSVar24 = __this_12[2].fields._popups;
                  pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
                  if (pSVar24 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    pUVar12 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pSVar24,(MethodInfo *)0x0);
                    UI_ElementFactory__SetAnchor
                              (pUVar12,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
                    pSVar23 = (System_Threading_CancellationTokenSource_o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                    pUVar12 = UI_ElementFactory__CreateHUDLabel
                                        ((UnityEngine_Transform_o *)pSVar23,__this_04,"",0,4,
                                         (MethodInfo *)0x0);
                    if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                      pSVar25 = (Settings_StringSetting_o *)
                                UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
                      __this_12[2].fields._currentCategoryPanelName = pSVar25;
                      il2cpp_runtime_helper_022b4080(&__this_12[2].fields._currentCategoryPanelName);
                      pSVar25 = __this_12[2].fields._currentCategoryPanelName;
                      pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
                      if (pSVar25 != (Settings_StringSetting_o *)0x0) {
                        pUVar12 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pSVar25,(MethodInfo *)0x0);
                        UI_ElementFactory__SetAnchor
                                  (pUVar12,5,5,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
                        pSVar23 = (System_Threading_CancellationTokenSource_o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                        pUVar12 = UI_ElementFactory__CreateHUDLabel
                                            ((UnityEngine_Transform_o *)pSVar23,__this_04,"",0,4,
                                             (MethodInfo *)0x0);
                        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar12 = (UnityEngine_GameObject_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
                          __this_12[2].fields._currentCategoryPanel = pUVar12;
                          il2cpp_runtime_helper_022b4080(&__this_12[2].fields._currentCategoryPanel);
                          pUVar50 = (UnityEngine_Component_o *)__this_12[2].fields._currentCategoryPanel;
                          pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
                          if (pUVar50 != (UnityEngine_Component_o *)0x0) {
                            pUVar12 = UnityEngine_Component__get_gameObject(pUVar50,(MethodInfo *)0x0);
                            UI_ElementFactory__SetAnchor
                                      (pUVar12,3,3,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
                            pSVar23 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                            pUVar12 = UI_ElementFactory__CreateHUDLabel
                                                ((UnityEngine_Transform_o *)pSVar23,__this_04,"",0,4
                                                 ,(MethodInfo *)0x0);
                            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar26 = (UI_BasePanel_o *)
                                        UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
                              __this_12[2].fields.Parent = pUVar26;
                              il2cpp_runtime_helper_022b4080(&__this_12[2].fields.Parent);
                              pUVar26 = __this_12[2].fields.Parent;
                              pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
                              if (pUVar26 != (UI_BasePanel_o *)0x0) {
                                pUVar12 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar12,7,7,(UnityEngine_Vector2_o)0x4120000000000000,
                                           (MethodInfo *)0x0);
                                pSVar23 = (System_Threading_CancellationTokenSource_o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                                pUVar12 = UI_ElementFactory__CreateHUDLabel
                                                    ((UnityEngine_Transform_o *)pSVar23,__this_04,""
                                                     ,0,3,(MethodInfo *)0x0);
                                if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                  pSVar27 = (System_Collections_Generic_Dictionary_string__Type__o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text)
                                  ;
                                  __this_12[2].fields._categoryPanelTypes = pSVar27;
                                  il2cpp_runtime_helper_022b4080(&__this_12[2].fields._categoryPanelTypes);
                                  pSVar27 = __this_12[2].fields._categoryPanelTypes;
                                  pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
                                  if (pSVar27 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0)
                                  {
                                    pUVar12 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pSVar27,(MethodInfo *)0x0)
                                    ;
                                    UI_ElementFactory__SetAnchor
                                              (pUVar12,6,6,(UnityEngine_Vector2_o)0x4120000041200000,
                                               (MethodInfo *)0x0);
                                    pSVar23 = (System_Threading_CancellationTokenSource_o *)
                                              UnityEngine_Component__get_transform
                                                        ((UnityEngine_Component_o *)__this_12,
                                                         (MethodInfo *)0x0);
                                    pUVar12 = UI_ElementFactory__CreateHUDLabel
                                                        ((UnityEngine_Transform_o *)pSVar23,__this_04,
                                                         "",0,5,(MethodInfo *)0x0);
                                    if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar28 = (UnityEngine_UI_RawImage_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar12,MethodInfo_Text_GetComponent_Text);
                                      __this_12[2].fields.MaskBackground = pUVar28;
                                      il2cpp_runtime_helper_022b4080(&__this_12[2].fields.MaskBackground);
                                      pUVar28 = __this_12[2].fields.MaskBackground;
                                      pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
                                      if (pUVar28 != (UnityEngine_UI_RawImage_o *)0x0) {
                                        pUVar12 = UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)pUVar28,
                                                             (MethodInfo *)0x0);
                                        UI_ElementFactory__SetAnchor
                                                  (pUVar12,8,8,(UnityEngine_Vector2_o)0x41200000c1200000,
                                                   (MethodInfo *)0x0);
                                        pUVar18 = UnityEngine_Component__get_transform
                                                            ((UnityEngine_Component_o *)__this_12,
                                                             (MethodInfo *)0x0);
                                        pSVar23 = (System_Threading_CancellationTokenSource_o *)
                                                  UI_ElementFactory__CreateDefaultPopup_object_
                                                            (pUVar18,0,MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
                                        ppSVar3 = &__this_12[2].fields.m_CancellationTokenSource;
                                        __this_12[2].fields.m_CancellationTokenSource = pSVar23;
                                        il2cpp_runtime_helper_022b4080(ppSVar3);
                                        pSVar23 = __this_12[2].fields.m_CancellationTokenSource;
                                        if ((pSVar23 != (System_Threading_CancellationTokenSource_o *)0x0) &&
                                           (pUVar12 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pSVar23,
                                                                 (MethodInfo *)0x0),
                                           pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
                                          pSVar29 = *ppSVar3;
                                          pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
                                          if (pSVar29 != (System_Threading_CancellationTokenSource_o *)0x0) {
                                            pUVar12 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pSVar29,
                                                                 (MethodInfo *)0x0);
                                            UI_ElementFactory__SetAnchor
                                                      (pUVar12,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,
                                                       (MethodInfo *)0x0);
                                            pUVar18 = UnityEngine_Component__get_transform
                                                                ((UnityEngine_Component_o *)__this_12,
                                                                 (MethodInfo *)0x0);
                                            pIVar22 = UI_ElementFactory__CreateDefaultPopup_object_
                                                                (pUVar18,0,MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigPopup);
                                            __this_12[2].monitor = pIVar22;
                                            il2cpp_runtime_helper_022b4080(&__this_12[2].monitor);
                                            pSVar23 = __this_12[2].monitor;
                                            if ((pSVar23 != (System_Threading_CancellationTokenSource_o *)0x0)
                                               && (pUVar12 = UnityEngine_Component__get_gameObject
                                                                       ((UnityEngine_Component_o *)pSVar23,
                                                                        (MethodInfo *)0x0),
                                                  pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
                                              UnityEngine_GameObject__AddComponent_object_
                                                        (pUVar12,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                              pUVar50 = __this_12[2].monitor;
                                              pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
                                              if (pUVar50 != (UnityEngine_Component_o *)0x0) {
                                                pSVar23 = (System_Threading_CancellationTokenSource_o *)
                                                          UnityEngine_Component__get_gameObject
                                                                    (pUVar50,(MethodInfo *)0x0);
                                                UI_ElementFactory__SetAnchor
                                                          ((UnityEngine_GameObject_o *)pSVar23,1,4,
                                                           (UnityEngine_Vector2_o)0xc2f0000000000000,
                                                           (MethodInfo *)0x0);
                                                lVar31 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                                if ((lVar31 != 0) &&
                                                   (lVar31 = *(long *)(lVar31 + 0x160), lVar31 != 0)) {
                                                  iVar46 = *(int *)(lVar31 + 0x14) + -1;
                                                  if (0 < iVar46) {
                                                    iVar40 = 0;
                                                    do {
                                                      while( true ) {
                                                        pSVar23 = (System_Threading_CancellationTokenSource_o
                                                                   *)UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                __this_12,(MethodInfo *)0x0);
                                                        pSVar29 = (System_Threading_CancellationTokenSource_o
                                                                   *)
                                                       UI_ElementFactory__CreateDefaultPopup_object_
                                                                 ((UnityEngine_Transform_o *)pSVar23,0,
                                                                  MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSmallPopup);
                                                       if ((pSVar29 ==
                                                            (System_Threading_CancellationTokenSource_o *)0x0)
                                                          || (pSVar23 = pSVar29,
                                                             pUVar12 = UnityEngine_Component__get_gameObject
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pSVar29,(MethodInfo *)0x0),
                                                             pUVar12 == (UnityEngine_GameObject_o *)0x0))
                                                       goto label_043c6ac6;
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar12,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                                       pUVar12 = UnityEngine_Component__get_gameObject
                                                                           ((UnityEngine_Component_o *)pSVar29
                                                                            ,(MethodInfo *)0x0);
                                                       height = 0.0;
                                                       UI_ElementFactory__SetAnchor
                                                                 (pUVar12,1,4,
                                                                  (UnityEngine_Vector2_o)
                                                                  ((ulong)(uint)((float)iVar40 * -35.0 +
                                                                                -162.0) << 0x20),
                                                                  (MethodInfo *)0x0);
                                                       lVar31 = MethodInfo_Void_Add;
                                                       pSVar23 = (System_Threading_CancellationTokenSource_o *
                                                                 )__this_12[2].fields.m_CachedPtr;
                                                       if (pSVar23 ==
                                                           (System_Threading_CancellationTokenSource_o *)0x0)
                                                       goto label_043c6ac6;
                                                       piVar1 = (int32_t *)
                                                                ((long)&(pSVar23->fields).
                                                                        _registeredCallbacksLists + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar6 = (System_Object_array *)
                                                                (pSVar23->fields)._kernelEvent;
                                                       if (pSVar6 == (System_Object_array *)0x0)
                                                       goto label_043c6ac6;
                                                       uVar41 = *(uint *)&(pSVar23->fields).
                                                                          _registeredCallbacksLists;
                                                       if ((uint)pSVar6->max_length <= uVar41) break;
                                                       *(uint *)&(pSVar23->fields)._registeredCallbacksLists =
                                                            uVar41 + 1;
                                                       pSVar6->m_Items[(int)uVar41] = (Il2CppObject *)pSVar29;
                                                       il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar41);
                                                       iVar40 = iVar40 + 1;
                                                       if (iVar46 == iVar40) {
                                                         return;
                                                       }
                                                      }
                                                      System_Collections_Generic_List_object___AddWithResize
                                                                ((System_Collections_Generic_List_object__o *)
                                                                 pSVar23,(Il2CppObject *)pSVar29,
                                                                 *(MethodInfo_362C220 **)
                                                                  (*(long *)(*(long *)(lVar31 + 0x20) + 0xc0)
                                                                  + 0x70));
                                                      iVar40 = iVar40 + 1;
                                                    } while (iVar46 != iVar40);
                                                  }
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
label_043c6ac6:
  il2cpp_runtime_helper_022b2c90();
  parent = (System_String_o **)pSVar23;
  if (g_data_057ae3f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChatPanel_GetComponent_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FeedPanel_GetComponent_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/VoiceChatPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/ChatPanel");
    parent = &"Prefabs/InGame/FeedPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f2 = '\x01';
  }
  lVar31 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  lVar7 = *(long *)(lVar31 + 0x28);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) {
    if (*(char *)(*(long *)(lVar7 + 0x30) + 0x11) == '\0') {
label_043c6c6c:
      if ((*(long *)(lVar31 + 0x80) != 0) &&
         (lVar31 = *(long *)(*(long *)(lVar31 + 0x80) + 0xb0), lVar31 != 0)) {
        if (*(int *)(lVar31 + 0x14) == 2) {
label_043c6d24:
          parent = (System_String_o **)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar23,(MethodInfo *)0x0);
          pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/ChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            pIVar22 = UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_ChatPanel_GetComponent_ChatPanel);
            pSVar23[3].monitor = pIVar22;
            il2cpp_runtime_helper_022b4080(&pSVar23[3].monitor);
            parent = (System_String_o **)0x0;
            if (pSVar23[3].monitor != (UnityEngine_Component_o *)0x0) {
              pUVar12 = UnityEngine_Component__get_gameObject(pSVar23[3].monitor,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar12,6,6,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          parent = (System_String_o **)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar23,(MethodInfo *)0x0);
          pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/VoiceChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            pSVar32 = (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
            pSVar23[3].fields._registeredCallbacksLists = pSVar32;
            il2cpp_runtime_helper_022b4080(&pSVar23[3].fields._registeredCallbacksLists);
            pSVar32 = pSVar23[3].fields._registeredCallbacksLists;
            parent = (System_String_o **)0x0;
            if (pSVar32 != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar32,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar12,3,3,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              goto label_043c6d24;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar7 + 0x28) != 0) {
      if (*(char *)(*(long *)(lVar7 + 0x28) + 0x11) == '\0') goto label_043c6c6c;
      pSVar32 = pSVar23[7].fields._registeredCallbacksLists;
      parent = (System_String_o **)0x0;
      if (pSVar32 != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
        parent = (System_String_o **)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar32,(MethodInfo *)0x0);
        pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                            ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/FeedPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pSVar30 = (System_Threading_ManualResetEvent_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_FeedPanel_GetComponent_FeedPanel);
          pSVar23[3].fields._kernelEvent = pSVar30;
          il2cpp_runtime_helper_022b4080(&pSVar23[3].fields);
          pSVar30 = pSVar23[3].fields._kernelEvent;
          parent = (System_String_o **)0x0;
          if (pSVar30 != (System_Threading_ManualResetEvent_o *)0x0) {
            parent = (System_String_o **)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pSVar30,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      ((UnityEngine_GameObject_o *)parent,2,2,(UnityEngine_Vector2_o)0xc248000000000000,
                       (MethodInfo *)0x0);
            lVar31 = *(long *)(TypeInfo_SettingsManager + 0xb8);
            goto label_043c6c6c;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    il2cpp_runtime_helper_023445d0(&"Minimap/Prefabs/MinimapPanel");
    g_data_057ae3f0 = '\x01';
  }
  pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
  pSVar33 = (System_Threading_CancellationCallbackInfo_o *)
            UI_ElementFactory__InstantiateAndBind(pUVar18,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
  ppSVar4 = &(((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields).
             _executingCallback;
  (((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields)._executingCallback =
       pSVar33;
  il2cpp_runtime_helper_022b4080(ppSVar4,pSVar33);
  UI_ElementFactory__SetAnchor
            ((UnityEngine_GameObject_o *)
             (((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields).
             _executingCallback,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
  pSVar33 = (((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields).
            _executingCallback;
  pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
  if (pSVar33 != (System_Threading_CancellationCallbackInfo_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar33,MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    pSVar33 = *ppSVar4;
    pSVar23 = (System_Threading_CancellationTokenSource_o *)0x0;
    if (pSVar33 != (System_Threading_CancellationCallbackInfo_o *)0x0) {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pSVar33,0,(MethodInfo *)0x0);
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
      pSVar23 = (System_Threading_CancellationTokenSource_o *)parent;
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Snapshot/SnapshotPopup");
    g_data_057ae3f1 = '\x01';
  }
  pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar23,(MethodInfo *)0x0);
  pUVar34 = (UnityEngine_Transform_o *)
            UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar18,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
  if (pUVar34 != (UnityEngine_Transform_o *)0x0) {
    pIVar22 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar34,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    *(Il2CppObject **)&pSVar23[5].fields._state = pIVar22;
    il2cpp_runtime_helper_022b4080(&pSVar23[5].fields._state);
    pUVar18 = pUVar34;
    __this_05 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar34,(MethodInfo *)0x0);
    if (__this_05 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_05,(UnityEngine_Vector3_o)ZEXT812(0x3f4ccccd3f4ccccd),(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                ((UnityEngine_GameObject_o *)pUVar34,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar41 = (uint)pUVar18->klass[1]._1.namespaze;
  pUVar34 = pUVar18;
  (*(code *)pUVar18->klass[1]._1.name)();
  pvVar8 = pUVar18[6].monitor;
  if (pvVar8 != (void *)0x0) {
    if (g_data_057ae3bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetEmoteWheel_b__25_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
      g_data_057ae3bf = '\x01';
    }
    pUVar34 = (UnityEngine_Transform_o *)0x0;
    if (*(long **)((long)pvVar8 + 0x30) != (long *)0x0) {
      lVar31 = **(long **)((long)pvVar8 + 0x30);
      uVar41 = (uint)*(undefined8 *)(lVar31 + 0x2a0);
      (**(code **)(lVar31 + 0x298))();
      *(undefined1 *)((long)pvVar8 + 0x40) = 0;
      pUVar14 = (UI_ItemHandler_o *)pUVar18[6].fields.m_CachedPtr;
      pUVar34 = (UnityEngine_Transform_o *)0x0;
      if (pUVar14 != (UI_ItemHandler_o *)0x0) {
        UI_ItemHandler__SetItemWheel(pUVar14,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    g_data_057ae3e8 = '\x01';
  }
  pUVar12 = pUVar34[9].monitor;
  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
    pMVar43 = MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD;
    __this_06 = (UI_TopLeftHUD_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    uVar41 = (uint)pMVar43;
    if (__this_06 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_06,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar35 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar35 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar35,uVar41 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar35 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar35 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__get_enabled(pUVar35,(MethodInfo *)0x0);
    return;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_07 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
  pIVar37 = title;
  __this_08 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        ((UnityEngine_Transform_o *)__this_07,(System_String_o *)title,width,height,0,
                         (MethodInfo *)0x0);
  if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
    pIVar37 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar36 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(__this_08,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar31 = MethodInfo_Void_Add;
    __this_07 = ((UnityEngine_Component_o *)(pUVar12 + 1))->monitor;
    if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_07->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this_07->fields)._items;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar41 = (__this_07->fields)._size;
        pIVar37 = pIVar36;
        if (uVar41 < (uint)pSVar6->max_length) {
          (__this_07->fields)._size = uVar41 + 1;
          pSVar6->m_Items[(int)uVar41] = (Il2CppObject *)pIVar36;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar41);
          pSVar44 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar12 + 0x18))->fields).m_CachedPtr;
          if (pSVar44 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar44,(Il2CppObject *)key,(Il2CppObject *)pIVar36,MethodInfo_Void_set_Item);
            return;
          }
          __this_07 = (System_Collections_Generic_List_object__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_07,(Il2CppObject *)pIVar36,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
          pSVar44 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar12 + 0x18))->fields).m_CachedPtr;
          __this_07 = (System_Collections_Generic_List_object__o *)0x0;
          if (pSVar44 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar36 = pIVar37;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar44 = (System_Collections_Generic_Dictionary_object__object__o *)__this_07[0xe].fields._syncRoot;
  pIVar22 = (Il2CppObject *)0x0;
  if (pSVar44 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar44,(Il2CppObject *)pIVar37,MethodInfo_BasePopup_get_Item);
    if (pIVar22 == (Il2CppObject *)0x0) {
      return;
    }
    bVar5 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar5 <= (pIVar22->klass->_2).naturalAligment) &&
       ((pIVar22->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar36 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar37 = (Il2CppClass *)0x0;
  if (pIVar22[0x25].klass != (Il2CppClass *)0x0) {
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar22[0x25].klass,
                        (Il2CppObject *)pIVar36,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      return;
    }
    pIVar37 = pIVar22[0x25].klass;
    if ((pIVar37 != (Il2CppClass *)0x0) &&
       (pIVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar37,
                             (Il2CppObject *)pIVar36,MethodInfo_BasePopup_get_Item), pIVar22 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar42 = (pIVar37->vtable + 0xf)[2].method;
  if (pMVar42 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar42,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar42,(MethodInfo *)0x0);
  pIVar22 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar18,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar42 + 2)[1].invoker_method = (InvokerMethod)pIVar22;
  il2cpp_runtime_helper_022b4080(&(pMVar42 + 2)[1].invoker_method);
  pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar42,(MethodInfo *)0x0);
  pIVar37 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar18,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar42 + 2)[1].klass = pIVar37;
  il2cpp_runtime_helper_022b4080(&(pMVar42 + 2)[1].klass);
  pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar42,(MethodInfo *)0x0);
  pIVar38 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar18,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar42 + 2)[1].return_type = pIVar38;
  il2cpp_runtime_helper_022b4080(&(pMVar42 + 2)[1].return_type);
  pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar42,(MethodInfo *)0x0);
  __this_09 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar18,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar42 + 3)[1].invoker_method = (InvokerMethod)__this_09;
  il2cpp_runtime_helper_022b4080(&(pMVar42 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar42 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar37 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar12 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar42 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_09 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar12,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar31 = MethodInfo_Void_Add;
    pIVar37 = pMVar42->klass;
    if (pIVar37 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_09 = (Il2CppRGCTXData *)(pMVar42 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar37->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar6 = ((System_Collections_Generic_List_object__Fields *)&(pIVar37->_1).name)->_items;
    if (pSVar6 == (System_Object_array *)0x0) goto label_043c7809;
    uVar41 = *(uint *)&(pIVar37->_1).namespaze;
    if ((uint)pSVar6->max_length <= uVar41) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar37,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
      pIVar37 = pMVar42->klass;
      if (pIVar37 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar37->_1).namespaze = uVar41 + 1;
    pSVar6->m_Items[(int)uVar41] = (Il2CppObject *)__this_09;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar41);
    pIVar37 = pMVar42->klass;
    if (pIVar37 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar31 = MethodInfo_Void_Add;
    __this_09 = (Il2CppRGCTXData *)(pMVar42 + 2)[1].klass;
    puVar10 = (undefined1 *)((long)&(pIVar37->_1).namespaze + 4);
    *(int *)puVar10 = *(int *)puVar10 + 1;
    pcVar9 = (pIVar37->_1).name;
    if (pcVar9 == (char *)0x0) goto label_043c7809;
    uVar41 = *(uint *)&(pIVar37->_1).namespaze;
    if (*(uint *)(pcVar9 + 0x18) <= uVar41) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar37,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
      pIVar37 = pMVar42->klass;
      if (pIVar37 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar37->_1).namespaze = uVar41 + 1;
    *(Il2CppRGCTXData **)(pcVar9 + (long)(int)uVar41 * 8 + 0x20) = __this_09;
    il2cpp_runtime_helper_022b4080(pcVar9 + (long)(int)uVar41 * 8 + 0x20);
    pIVar37 = pMVar42->klass;
    if (pIVar37 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar31 = MethodInfo_Void_Add;
    __this_09 = (Il2CppRGCTXData *)(pMVar42 + 2)[1].return_type;
    puVar10 = (undefined1 *)((long)&(pIVar37->_1).namespaze + 4);
    *(int *)puVar10 = *(int *)puVar10 + 1;
    pcVar9 = (pIVar37->_1).name;
    if (pcVar9 == (char *)0x0) goto label_043c7809;
    uVar41 = *(uint *)&(pIVar37->_1).namespaze;
    if (uVar41 < *(uint *)(pcVar9 + 0x18)) {
      *(uint *)&(pIVar37->_1).namespaze = uVar41 + 1;
      *(Il2CppRGCTXData **)(pcVar9 + (long)(int)uVar41 * 8 + 0x20) = __this_09;
      il2cpp_runtime_helper_022b4080(pcVar9 + (long)(int)uVar41 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar37,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
    }
    pIVar37 = TypeInfo_InGameManager;
    __this_09 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_09 == (Il2CppRGCTXData *)0x0) {
      pMVar42[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar42[6].field7_0x38);
      pIVar45 = pMVar42[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_09 = (Il2CppRGCTXData *)0x0;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pIVar45,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      lVar31 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x70), lVar31 != 0)) {
        if (*(char *)(lVar31 + 0x11) == '\0') {
          return;
        }
        bVar11 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar45,(MethodInfo *)__this_09);
        if ((char)bVar11 == '\0') {
          return;
        }
        if (pMVar42[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar42[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar5 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar5 <= (__this_09->klass->_2).naturalAligment) &&
       ((__this_09->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_InGameManager)) {
      pMVar42[6].field7_0x38.rgctx_data = __this_09;
      if ((bVar5 <= (__this_09->klass->_2).naturalAligment) &&
         ((__this_09->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == pIVar37)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_09 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar31 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x58), lVar31 != 0)) && (*(long *)(lVar31 + 0xc0) != 0))
  {
    if (*(char *)(*(long *)(lVar31 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar31 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar37 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar37);
    *(undefined1 *)(__this_09 + 0x2f) = 1;
  }
  else {
    bVar11 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar37);
    if ((char)bVar11 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar37);
      pMVar42 = __this_09[0x22].method;
      pIVar45 = (Il2CppRGCTXData *)0x0;
      if (pMVar42 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar42->methodPointer + 0x288))(pMVar42,*(undefined8 *)(pMVar42->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar35 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_09,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar45 = __this_09;
  if (pUVar35 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar35,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar48 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar49 = (Il2CppMethodPointer)0x0;
  pUVar50 = (UnityEngine_Component_o *)0x0;
  if (pIVar45[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar47 = il2cpp_runtime_helper_022b2c90();
    if (auVar47._8_4_ == 1) {
      plVar39 = (long *)__cxa_begin_catch(auVar47._0_8_);
      lVar31 = *plVar39;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar49;
      __this_02.fields._list = pSVar48;
      __this_02.fields._current = (Il2CppObject *)pUVar50;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe38);
      if (lVar31 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar31);
    }
    __this_03.fields._8_8_ = pIVar49;
    __this_03.fields._list = pSVar48;
    __this_03.fields._current = (Il2CppObject *)pUVar50;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe38);
    _Unwind_Resume(auVar47._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffe38,
             (System_Collections_Generic_List_object__o *)pIVar45[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_00.fields._8_8_ = pIVar49;
    __this_00.fields._list = pSVar48;
    __this_00.fields._current = (Il2CppObject *)pUVar50;
    bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe38);
    if ((char)bVar11 == '\0') break;
    if (pUVar50 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar12 = UnityEngine_Component__get_gameObject(pUVar50,(MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
  } while ((char)bVar11 == '\0');
  __this_01.fields._8_8_ = pIVar49;
  __this_01.fields._list = pSVar48;
  __this_01.fields._current = (Il2CppObject *)pUVar50;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe38);
  return;
}


// UI.InGameMenu$$ApplyUISettings
// il2cpp: void UI_InGameMenu__ApplyUISettings (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c7040

void UI_InGameMenu__ApplyUISettings(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  System_Object_array *pSVar3;
  char *pcVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  undefined1 *puVar6;
  bool_conflict bVar7;
  UI_TopLeftHUD_o *__this_04;
  UnityEngine_Behaviour_o *pUVar8;
  System_Collections_Generic_List_object__o *__this_05;
  UnityEngine_GameObject_o *__this_06;
  Il2CppClass *pIVar9;
  Il2CppObject *pIVar10;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  UnityEngine_Transform_o *pUVar11;
  Il2CppClass *pIVar12;
  Il2CppType *pIVar13;
  Il2CppRGCTXData *__this_07;
  UnityEngine_GameObject_o *pUVar14;
  long *plVar15;
  Il2CppClass *title;
  uint uVar16;
  MethodInfo_255A0F0 *pMVar17;
  MethodInfo_24E7B40 *key;
  System_Collections_Generic_Dictionary_object__object__o *pSVar18;
  MethodInfo *pMVar19;
  Il2CppRGCTXData *pIVar20;
  float width;
  float in_XMM1_Da;
  undefined1 auVar21 [12];
  System_Collections_Generic_List_T__o *pSVar22;
  Il2CppMethodPointer pIVar23;
  UnityEngine_Component_o *__this_08;
  
  uVar16 = (uint)method;
  if (g_data_057ae3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    g_data_057ae3e8 = '\x01';
  }
  pUVar14 = (__this->fields).TopLeftHud;
  if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
    pMVar17 = MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD;
    __this_04 = (UI_TopLeftHUD_o *)UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    uVar16 = (uint)pMVar17;
    if (__this_04 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_04,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar8 = (UnityEngine_Behaviour_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar14,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar8 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar8,uVar16 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar8 = (UnityEngine_Behaviour_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar14,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar8 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__get_enabled(pUVar8,(MethodInfo *)0x0);
    return;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_05 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
  pIVar12 = title;
  __this_06 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        ((UnityEngine_Transform_o *)__this_05,(System_String_o *)title,width,in_XMM1_Da,0,
                         (MethodInfo *)0x0);
  if (__this_06 != (UnityEngine_GameObject_o *)0x0) {
    pIVar12 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar9 = (Il2CppClass *)
             UnityEngine_GameObject__GetComponent_object_(__this_06,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar5 = MethodInfo_Void_Add;
    __this_05 = ((UnityEngine_Component_o *)(pUVar14 + 1))->monitor;
    if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_05->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar16 = (__this_05->fields)._size;
        pIVar12 = pIVar9;
        if (uVar16 < (uint)pSVar3->max_length) {
          (__this_05->fields)._size = uVar16 + 1;
          pSVar3->m_Items[(int)uVar16] = (Il2CppObject *)pIVar9;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar16);
          pSVar18 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar14 + 0x18))->fields).m_CachedPtr;
          if (pSVar18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar18,(Il2CppObject *)key,(Il2CppObject *)pIVar9,MethodInfo_Void_set_Item);
            return;
          }
          __this_05 = (System_Collections_Generic_List_object__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_05,(Il2CppObject *)pIVar9,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          pSVar18 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar14 + 0x18))->fields).m_CachedPtr;
          __this_05 = (System_Collections_Generic_List_object__o *)0x0;
          if (pSVar18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar9 = pIVar12;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar18 = (System_Collections_Generic_Dictionary_object__object__o *)__this_05[0xe].fields._syncRoot;
  pIVar10 = (Il2CppObject *)0x0;
  if (pSVar18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar18,(Il2CppObject *)pIVar12,MethodInfo_BasePopup_get_Item);
    if (pIVar10 == (Il2CppObject *)0x0) {
      return;
    }
    bVar2 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar2 <= (pIVar10->klass->_2).naturalAligment) &&
       ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar9 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar12 = (Il2CppClass *)0x0;
  if (pIVar10[0x25].klass != (Il2CppClass *)0x0) {
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar10[0x25].klass,
                       (Il2CppObject *)pIVar9,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
      return;
    }
    pIVar12 = pIVar10[0x25].klass;
    if ((pIVar12 != (Il2CppClass *)0x0) &&
       (pIVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12,
                             (Il2CppObject *)pIVar9,MethodInfo_BasePopup_get_Item), pIVar10 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar19 = pIVar12->vtable[0x11].method;
  if (pMVar19 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar19,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar19,(MethodInfo *)0x0);
  pIVar10 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar11,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar19 + 2)[1].invoker_method = (InvokerMethod)pIVar10;
  il2cpp_runtime_helper_022b4080(&(pMVar19 + 2)[1].invoker_method);
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar19,(MethodInfo *)0x0);
  pIVar12 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar11,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar19 + 2)[1].klass = pIVar12;
  il2cpp_runtime_helper_022b4080(&(pMVar19 + 2)[1].klass);
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar19,(MethodInfo *)0x0);
  pIVar13 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar11,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar19 + 2)[1].return_type = pIVar13;
  il2cpp_runtime_helper_022b4080(&(pMVar19 + 2)[1].return_type);
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar19,(MethodInfo *)0x0);
  __this_07 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar11,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar19 + 3)[1].invoker_method = (InvokerMethod)__this_07;
  il2cpp_runtime_helper_022b4080(&(pMVar19 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar19 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar14 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar19 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_07 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar14,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
    pIVar12 = pMVar19->klass;
    if (pIVar12 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_07 = (Il2CppRGCTXData *)(pMVar19 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar12->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar3 = ((System_Collections_Generic_List_object__Fields *)&(pIVar12->_1).name)->_items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_043c7809;
    uVar16 = *(uint *)&(pIVar12->_1).namespaze;
    if ((uint)pSVar3->max_length <= uVar16) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar12,(Il2CppObject *)__this_07,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pIVar12 = pMVar19->klass;
      if (pIVar12 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar12->_1).namespaze = uVar16 + 1;
    pSVar3->m_Items[(int)uVar16] = (Il2CppObject *)__this_07;
    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar16);
    pIVar12 = pMVar19->klass;
    if (pIVar12 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar5 = MethodInfo_Void_Add;
    __this_07 = (Il2CppRGCTXData *)(pMVar19 + 2)[1].klass;
    puVar6 = (undefined1 *)((long)&(pIVar12->_1).namespaze + 4);
    *(int *)puVar6 = *(int *)puVar6 + 1;
    pcVar4 = (pIVar12->_1).name;
    if (pcVar4 == (char *)0x0) goto label_043c7809;
    uVar16 = *(uint *)&(pIVar12->_1).namespaze;
    if (*(uint *)(pcVar4 + 0x18) <= uVar16) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar12,(Il2CppObject *)__this_07,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pIVar12 = pMVar19->klass;
      if (pIVar12 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar12->_1).namespaze = uVar16 + 1;
    *(Il2CppRGCTXData **)(pcVar4 + (long)(int)uVar16 * 8 + 0x20) = __this_07;
    il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar16 * 8 + 0x20);
    pIVar12 = pMVar19->klass;
    if (pIVar12 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar5 = MethodInfo_Void_Add;
    __this_07 = (Il2CppRGCTXData *)(pMVar19 + 2)[1].return_type;
    puVar6 = (undefined1 *)((long)&(pIVar12->_1).namespaze + 4);
    *(int *)puVar6 = *(int *)puVar6 + 1;
    pcVar4 = (pIVar12->_1).name;
    if (pcVar4 == (char *)0x0) goto label_043c7809;
    uVar16 = *(uint *)&(pIVar12->_1).namespaze;
    if (uVar16 < *(uint *)(pcVar4 + 0x18)) {
      *(uint *)&(pIVar12->_1).namespaze = uVar16 + 1;
      *(Il2CppRGCTXData **)(pcVar4 + (long)(int)uVar16 * 8 + 0x20) = __this_07;
      il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar16 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar12,(Il2CppObject *)__this_07,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    pIVar12 = TypeInfo_InGameManager;
    __this_07 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_07 == (Il2CppRGCTXData *)0x0) {
      pMVar19[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar19[6].field7_0x38);
      pIVar20 = pMVar19[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_07 = (Il2CppRGCTXData *)0x0;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x70), lVar5 != 0)) {
        if (*(char *)(lVar5 + 0x11) == '\0') {
          return;
        }
        bVar7 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar20,(MethodInfo *)__this_07);
        if ((char)bVar7 == '\0') {
          return;
        }
        if (pMVar19[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar19[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= (__this_07->klass->_2).naturalAligment) &&
       ((__this_07->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      pMVar19[6].field7_0x38.rgctx_data = __this_07;
      if ((bVar2 <= (__this_07->klass->_2).naturalAligment) &&
         ((__this_07->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar12)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_07 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) && (*(long *)(lVar5 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar5 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar5 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar12 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_07,(MethodInfo *)pIVar12);
    *(undefined1 *)(__this_07 + 0x2f) = 1;
  }
  else {
    bVar7 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_07,(MethodInfo *)pIVar12);
    if ((char)bVar7 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_07,(MethodInfo *)pIVar12);
      pMVar19 = __this_07[0x22].method;
      pIVar20 = (Il2CppRGCTXData *)0x0;
      if (pMVar19 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar19->methodPointer + 0x288))(pMVar19,*(undefined8 *)(pMVar19->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar8 = (UnityEngine_Behaviour_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_07,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar20 = __this_07;
  if (pUVar8 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar8,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar22 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar23 = (Il2CppMethodPointer)0x0;
  __this_08 = (UnityEngine_Component_o *)0x0;
  if (pIVar20[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar21 = il2cpp_runtime_helper_022b2c90();
    if (auVar21._8_4_ == 1) {
      plVar15 = (long *)__cxa_begin_catch(auVar21._0_8_);
      lVar5 = *plVar15;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar23;
      __this_02.fields._list = pSVar22;
      __this_02.fields._current = (Il2CppObject *)__this_08;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
      if (lVar5 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_03.fields._8_8_ = pIVar23;
    __this_03.fields._list = pSVar22;
    __this_03.fields._current = (Il2CppObject *)__this_08;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
    _Unwind_Resume(auVar21._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff18,
             (System_Collections_Generic_List_object__o *)pIVar20[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_00.fields._8_8_ = pIVar23;
    __this_00.fields._list = pSVar22;
    __this_00.fields._current = (Il2CppObject *)__this_08;
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
    if ((char)bVar7 == '\0') break;
    if (__this_08 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar14 = UnityEngine_Component__get_gameObject(__this_08,(MethodInfo *)0x0);
    if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar14,(MethodInfo *)0x0);
  } while ((char)bVar7 == '\0');
  __this_01.fields._8_8_ = pIVar23;
  __this_01.fields._list = pSVar22;
  __this_01.fields._current = (Il2CppObject *)__this_08;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
  return;
}


// UI.InGameMenu$$SetupTopLeftHud
// il2cpp: void UI_InGameMenu__SetupTopLeftHud (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c61b0

void UI_InGameMenu__SetupTopLeftHud(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Il2CppClass **ppIVar2;
  byte bVar3;
  System_Object_array *pSVar4;
  long lVar5;
  void *pvVar6;
  UI_ItemHandler_o *__this_00;
  char *pcVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 *puVar8;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  Il2CppObject *pIVar12;
  UI_ElementStyle_o *__this_05;
  UnityEngine_Component_c *pUVar13;
  UnityEngine_Component_c *pUVar14;
  UnityEngine_GameObject_o *pUVar15;
  long lVar16;
  Il2CppClass *pIVar17;
  UnityEngine_Transform_o *pUVar18;
  MethodInfo *pMVar19;
  UnityEngine_Transform_o *__this_06;
  UI_TopLeftHUD_o *__this_07;
  UnityEngine_Behaviour_o *pUVar20;
  System_Collections_Generic_List_object__o *__this_08;
  Il2CppClass *pIVar21;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  Il2CppType *pIVar22;
  Il2CppRGCTXData *__this_09;
  long *plVar23;
  Il2CppClass *title;
  int iVar24;
  uint uVar25;
  MethodInfo_255A0F0 *pMVar26;
  MethodInfo_24E7B40 *key;
  System_Collections_Generic_Dictionary_object__object__o *pSVar27;
  Il2CppRGCTXData *pIVar28;
  int iVar29;
  float width;
  float height;
  undefined1 auVar30 [12];
  System_Collections_Generic_List_T__o *pSVar31;
  Il2CppMethodPointer pIVar32;
  UnityEngine_Component_o *pUVar33;
  
  if (g_data_057ae3e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_TopLeftHUD);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/TopLeftHUD");
    g_data_057ae3e9 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar11 = UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar10,"Prefabs/InGame/TopLeftHUD",0,MethodInfo_GameObject_InstantiateAndSetupPanel_TopLeftHUD);
  UI_ElementFactory__SetAnchor(pUVar11,0,0,(UnityEngine_Vector2_o)0xc100000041200000,(MethodInfo *)0x0);
  pUVar15 = (UnityEngine_GameObject_o *)&(__this->fields).TopLeftHud;
  (__this->fields).TopLeftHud = pUVar11;
  il2cpp_runtime_helper_022b4080(pUVar15,pUVar11);
  if ((pUVar11 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar15 = pUVar11, pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD),
     pIVar12 != (Il2CppObject *)0x0)) {
    (__this->fields).KDRReference = (UnityEngine_GameObject_o *)pIVar12[8].klass;
    il2cpp_runtime_helper_022b4080(&(__this->fields).KDRReference);
    UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSmallPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae3f3 = '\x01';
  }
  __this_05 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  height = 20.0;
  UI_ElementStyle___ctor(__this_05,0x16,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar13 = (UnityEngine_Component_c *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
  pUVar11 = UI_ElementFactory__CreateHUDLabel
                      ((UnityEngine_Transform_o *)pUVar13,__this_05,"",0,4,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
    ((UnityEngine_Component_o *)(pUVar15 + 0x11))->monitor = pIVar12;
    il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_o *)(pUVar15 + 0x11))->monitor);
    pUVar13 = (UnityEngine_Component_c *)0x0;
    if (((UnityEngine_Component_o *)(pUVar15 + 0x11))->monitor != (UnityEngine_Component_o *)0x0) {
      pUVar11 = UnityEngine_Component__get_gameObject
                          (((UnityEngine_Component_o *)(pUVar15 + 0x11))->monitor,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar11,1,1,(UnityEngine_Vector2_o)0xc120000000000000,(MethodInfo *)0x0);
      pUVar11 = (UnityEngine_GameObject_o *)(((UnityEngine_Component_o *)(pUVar15 + 9))->fields).m_CachedPtr;
      pUVar13 = (UnityEngine_Component_c *)0x0;
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        pUVar13 = (UnityEngine_Component_c *)UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
        pUVar11 = UI_ElementFactory__CreateHUDLabel
                            ((UnityEngine_Transform_o *)pUVar13,__this_05,"",0,3,(MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
          (((UnityEngine_Component_o *)(pUVar15 + 0x11))->fields).m_CachedPtr = (intptr_t)pIVar12;
          il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_o *)(pUVar15 + 0x11))->fields);
          pUVar33 = (UnityEngine_Component_o *)
                    (((UnityEngine_Component_o *)(pUVar15 + 0x11))->fields).m_CachedPtr;
          pUVar13 = (UnityEngine_Component_c *)0x0;
          if (pUVar33 != (UnityEngine_Component_o *)0x0) {
            pUVar11 = UnityEngine_Component__get_gameObject(pUVar33,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar11,0,0,(UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
            pUVar13 = (UnityEngine_Component_c *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
            pUVar11 = UI_ElementFactory__CreateHUDLabel
                                ((UnityEngine_Transform_o *)pUVar13,__this_05,"",0,5,
                                 (MethodInfo *)0x0);
            if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
              pUVar13 = (UnityEngine_Component_c *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
              ((UnityEngine_Component_o *)(pUVar15 + 0x12))->klass = pUVar13;
              il2cpp_runtime_helper_022b4080((UnityEngine_Component_o *)(pUVar15 + 0x12));
              pUVar13 = (UnityEngine_Component_c *)0x0;
              if (((UnityEngine_Component_o *)(pUVar15 + 0x12))->klass != (UnityEngine_Component_c *)0x0) {
                pUVar11 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)
                                     ((UnityEngine_Component_o *)(pUVar15 + 0x12))->klass,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar11,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
                pUVar13 = (UnityEngine_Component_c *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                pUVar11 = UI_ElementFactory__CreateHUDLabel
                                    ((UnityEngine_Transform_o *)pUVar13,__this_05,"",0,4,
                                     (MethodInfo *)0x0);
                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                  pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
                  ((UnityEngine_Component_o *)(pUVar15 + 0x12))->monitor = pIVar12;
                  il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_o *)(pUVar15 + 0x12))->monitor);
                  pUVar13 = (UnityEngine_Component_c *)0x0;
                  if (((UnityEngine_Component_o *)(pUVar15 + 0x12))->monitor != (UnityEngine_Component_o *)0x0
                     ) {
                    pUVar11 = UnityEngine_Component__get_gameObject
                                        (((UnityEngine_Component_o *)(pUVar15 + 0x12))->monitor,
                                         (MethodInfo *)0x0);
                    UI_ElementFactory__SetAnchor
                              (pUVar11,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
                    pUVar13 = (UnityEngine_Component_c *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                    pUVar11 = UI_ElementFactory__CreateHUDLabel
                                        ((UnityEngine_Transform_o *)pUVar13,__this_05,"",0,4,
                                         (MethodInfo *)0x0);
                    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar13 = (UnityEngine_Component_c *)
                                UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
                      ((UnityEngine_Component_o *)(pUVar15 + 0x13))->klass = pUVar13;
                      il2cpp_runtime_helper_022b4080((UnityEngine_Component_o *)(pUVar15 + 0x13));
                      pUVar13 = (UnityEngine_Component_c *)0x0;
                      if (((UnityEngine_Component_o *)(pUVar15 + 0x13))->klass !=
                          (UnityEngine_Component_c *)0x0) {
                        pUVar11 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)
                                             ((UnityEngine_Component_o *)(pUVar15 + 0x13))->klass,
                                             (MethodInfo *)0x0);
                        UI_ElementFactory__SetAnchor
                                  (pUVar11,5,5,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
                        pUVar13 = (UnityEngine_Component_c *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                        pUVar11 = UI_ElementFactory__CreateHUDLabel
                                            ((UnityEngine_Transform_o *)pUVar13,__this_05,"",0,4,
                                             (MethodInfo *)0x0);
                        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
                          (((UnityEngine_Component_o *)(pUVar15 + 0x12))->fields).m_CachedPtr =
                               (intptr_t)pIVar12;
                          il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_o *)(pUVar15 + 0x12))->fields);
                          pUVar33 = (UnityEngine_Component_o *)
                                    (((UnityEngine_Component_o *)(pUVar15 + 0x12))->fields).m_CachedPtr;
                          pUVar13 = (UnityEngine_Component_c *)0x0;
                          if (pUVar33 != (UnityEngine_Component_o *)0x0) {
                            pUVar11 = UnityEngine_Component__get_gameObject(pUVar33,(MethodInfo *)0x0);
                            UI_ElementFactory__SetAnchor
                                      (pUVar11,3,3,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
                            pUVar13 = (UnityEngine_Component_c *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                            pUVar11 = UI_ElementFactory__CreateHUDLabel
                                                ((UnityEngine_Transform_o *)pUVar13,__this_05,"",0,4
                                                 ,(MethodInfo *)0x0);
                            if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar13 = (UnityEngine_Component_c *)
                                        UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
                              ((UnityEngine_Component_o *)(pUVar15 + 0x14))->klass = pUVar13;
                              il2cpp_runtime_helper_022b4080((UnityEngine_Component_o *)(pUVar15 + 0x14));
                              pUVar13 = (UnityEngine_Component_c *)0x0;
                              if (((UnityEngine_Component_o *)(pUVar15 + 0x14))->klass !=
                                  (UnityEngine_Component_c *)0x0) {
                                pUVar11 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)
                                                     ((UnityEngine_Component_o *)(pUVar15 + 0x14))->klass,
                                                     (MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar11,7,7,(UnityEngine_Vector2_o)0x4120000000000000,
                                           (MethodInfo *)0x0);
                                pUVar13 = (UnityEngine_Component_c *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                                pUVar11 = UI_ElementFactory__CreateHUDLabel
                                                    ((UnityEngine_Transform_o *)pUVar13,__this_05,""
                                                     ,0,3,(MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                  pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text)
                                  ;
                                  ((UnityEngine_Component_o *)(pUVar15 + 0x13))->monitor = pIVar12;
                                  il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_o *)(pUVar15 + 0x13))->monitor);
                                  pUVar13 = (UnityEngine_Component_c *)0x0;
                                  if (((UnityEngine_Component_o *)(pUVar15 + 0x13))->monitor !=
                                      (UnityEngine_Component_o *)0x0) {
                                    pUVar11 = UnityEngine_Component__get_gameObject
                                                        (((UnityEngine_Component_o *)(pUVar15 + 0x13))->
                                                         monitor,(MethodInfo *)0x0);
                                    UI_ElementFactory__SetAnchor
                                              (pUVar11,6,6,(UnityEngine_Vector2_o)0x4120000041200000,
                                               (MethodInfo *)0x0);
                                    pUVar13 = (UnityEngine_Component_c *)
                                              UnityEngine_Component__get_transform
                                                        ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0)
                                    ;
                                    pUVar11 = UI_ElementFactory__CreateHUDLabel
                                                        ((UnityEngine_Transform_o *)pUVar13,__this_05,
                                                         "",0,5,(MethodInfo *)0x0);
                                    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                      pIVar12 = UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar11,MethodInfo_Text_GetComponent_Text);
                                      (((UnityEngine_Component_o *)(pUVar15 + 0x13))->fields).m_CachedPtr =
                                           (intptr_t)pIVar12;
                                      il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_o *)(pUVar15 + 0x13))->
                                                          fields);
                                      pUVar33 = (UnityEngine_Component_o *)
                                                (((UnityEngine_Component_o *)(pUVar15 + 0x13))->fields).
                                                m_CachedPtr;
                                      pUVar13 = (UnityEngine_Component_c *)0x0;
                                      if (pUVar33 != (UnityEngine_Component_o *)0x0) {
                                        pUVar11 = UnityEngine_Component__get_gameObject
                                                            (pUVar33,(MethodInfo *)0x0);
                                        UI_ElementFactory__SetAnchor
                                                  (pUVar11,8,8,(UnityEngine_Vector2_o)0x41200000c1200000,
                                                   (MethodInfo *)0x0);
                                        pUVar10 = UnityEngine_Component__get_transform
                                                            ((UnityEngine_Component_o *)pUVar15,
                                                             (MethodInfo *)0x0);
                                        pUVar13 = (UnityEngine_Component_c *)
                                                  UI_ElementFactory__CreateDefaultPopup_object_
                                                            (pUVar10,0,MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
                                        ((UnityEngine_Component_o *)(pUVar15 + 0x11))->klass = pUVar13;
                                        il2cpp_runtime_helper_022b4080((UnityEngine_Component_o *)(pUVar15 + 0x11));
                                        pUVar13 = ((UnityEngine_Component_o *)(pUVar15 + 0x11))->klass;
                                        if ((pUVar13 != (UnityEngine_Component_c *)0x0) &&
                                           (pUVar11 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pUVar13,
                                                                 (MethodInfo *)0x0),
                                           pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
                                          pUVar14 = ((UnityEngine_Component_o *)(pUVar15 + 0x11))->klass;
                                          pUVar13 = (UnityEngine_Component_c *)0x0;
                                          if (pUVar14 != (UnityEngine_Component_c *)0x0) {
                                            pUVar11 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pUVar14,
                                                                 (MethodInfo *)0x0);
                                            UI_ElementFactory__SetAnchor
                                                      (pUVar11,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,
                                                       (MethodInfo *)0x0);
                                            pUVar10 = UnityEngine_Component__get_transform
                                                                ((UnityEngine_Component_o *)pUVar15,
                                                                 (MethodInfo *)0x0);
                                            pIVar12 = UI_ElementFactory__CreateDefaultPopup_object_
                                                                (pUVar10,0,MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigPopup);
                                            ((UnityEngine_Component_o *)(pUVar15 + 0x10))->monitor = pIVar12;
                                            il2cpp_runtime_helper_022b4080(&((UnityEngine_Component_o *)(pUVar15 + 0x10))
                                                                ->monitor);
                                            pUVar13 = ((UnityEngine_Component_o *)(pUVar15 + 0x10))->monitor;
                                            if ((pUVar13 != (UnityEngine_Component_c *)0x0) &&
                                               (pUVar11 = UnityEngine_Component__get_gameObject
                                                                    ((UnityEngine_Component_o *)pUVar13,
                                                                     (MethodInfo *)0x0),
                                               pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
                                              UnityEngine_GameObject__AddComponent_object_
                                                        (pUVar11,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                              pUVar33 = ((UnityEngine_Component_o *)(pUVar15 + 0x10))->monitor
                                              ;
                                              pUVar13 = (UnityEngine_Component_c *)0x0;
                                              if (pUVar33 != (UnityEngine_Component_o *)0x0) {
                                                pUVar13 = (UnityEngine_Component_c *)
                                                          UnityEngine_Component__get_gameObject
                                                                    (pUVar33,(MethodInfo *)0x0);
                                                UI_ElementFactory__SetAnchor
                                                          ((UnityEngine_GameObject_o *)pUVar13,1,4,
                                                           (UnityEngine_Vector2_o)0xc2f0000000000000,
                                                           (MethodInfo *)0x0);
                                                lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                                if ((lVar16 != 0) &&
                                                   (lVar16 = *(long *)(lVar16 + 0x160), lVar16 != 0)) {
                                                  iVar29 = *(int *)(lVar16 + 0x14) + -1;
                                                  if (0 < iVar29) {
                                                    iVar24 = 0;
                                                    do {
                                                      while( true ) {
                                                        pUVar13 = (UnityEngine_Component_c *)
                                                                  UnityEngine_Component__get_transform
                                                                            ((UnityEngine_Component_o *)
                                                                             pUVar15,(MethodInfo *)0x0);
                                                        pUVar14 = (UnityEngine_Component_c *)
                                                                                                                                    
                                                       UI_ElementFactory__CreateDefaultPopup_object_
                                                                 ((UnityEngine_Transform_o *)pUVar13,0,
                                                                  MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSmallPopup);
                                                       if ((pUVar14 == (UnityEngine_Component_c *)0x0) ||
                                                          (pUVar13 = pUVar14,
                                                          pUVar11 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pUVar14,(MethodInfo *)0x0),
                                                          pUVar11 == (UnityEngine_GameObject_o *)0x0))
                                                       goto label_043c6ac6;
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar11,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                                       pUVar11 = UnityEngine_Component__get_gameObject
                                                                           ((UnityEngine_Component_o *)pUVar14
                                                                            ,(MethodInfo *)0x0);
                                                       height = 0.0;
                                                       UI_ElementFactory__SetAnchor
                                                                 (pUVar11,1,4,
                                                                  (UnityEngine_Vector2_o)
                                                                  ((ulong)(uint)((float)iVar24 * -35.0 +
                                                                                -162.0) << 0x20),
                                                                  (MethodInfo *)0x0);
                                                       lVar16 = MethodInfo_Void_Add;
                                                       pUVar13 = (UnityEngine_Component_c *)
                                                                 (((UnityEngine_Component_o *)(pUVar15 + 0x10)
                                                                  )->fields).m_CachedPtr;
                                                       if (pUVar13 == (UnityEngine_Component_c *)0x0)
                                                       goto label_043c6ac6;
                                                       piVar1 = (int32_t *)
                                                                ((long)&(pUVar13->_1).namespaze + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar4 = ((
                                                       System_Collections_Generic_List_object__Fields *)
                                                       &(pUVar13->_1).name)->_items;
                                                       if (pSVar4 == (System_Object_array *)0x0)
                                                       goto label_043c6ac6;
                                                       uVar25 = *(uint *)&(pUVar13->_1).namespaze;
                                                       if ((uint)pSVar4->max_length <= uVar25) break;
                                                       *(uint *)&(pUVar13->_1).namespaze = uVar25 + 1;
                                                       pSVar4->m_Items[(int)uVar25] = (Il2CppObject *)pUVar14;
                                                       il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar25);
                                                       iVar24 = iVar24 + 1;
                                                       if (iVar29 == iVar24) {
                                                         return;
                                                       }
                                                      }
                                                      System_Collections_Generic_List_object___AddWithResize
                                                                ((System_Collections_Generic_List_object__o *)
                                                                 pUVar13,(Il2CppObject *)pUVar14,
                                                                 *(MethodInfo_362C220 **)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0)
                                                                  + 0x70));
                                                      iVar24 = iVar24 + 1;
                                                    } while (iVar29 != iVar24);
                                                  }
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
label_043c6ac6:
  il2cpp_runtime_helper_022b2c90();
  pUVar14 = pUVar13;
  if (g_data_057ae3f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChatPanel_GetComponent_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FeedPanel_GetComponent_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/VoiceChatPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/ChatPanel");
    pUVar14 = (UnityEngine_Component_c *)&"Prefabs/InGame/FeedPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f2 = '\x01';
  }
  lVar16 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  lVar5 = *(long *)(lVar16 + 0x28);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
    if (*(char *)(*(long *)(lVar5 + 0x30) + 0x11) == '\0') {
label_043c6c6c:
      if ((*(long *)(lVar16 + 0x80) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar16 + 0x80) + 0xb0), lVar16 != 0)) {
        if (*(int *)(lVar16 + 0x14) == 2) {
label_043c6d24:
          pUVar14 = (UnityEngine_Component_c *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0)
          ;
          pUVar15 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)pUVar14,"Prefabs/InGame/ChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
            pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_ChatPanel_GetComponent_ChatPanel);
            (pUVar13->_2).typeHierarchy = &pIVar12->klass;
            il2cpp_runtime_helper_022b4080(&pUVar13->_2);
            pUVar33 = (UnityEngine_Component_o *)(pUVar13->_2).typeHierarchy;
            pUVar14 = (UnityEngine_Component_c *)0x0;
            if (pUVar33 != (UnityEngine_Component_o *)0x0) {
              pUVar15 = UnityEngine_Component__get_gameObject(pUVar33,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar15,6,6,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          pUVar14 = (UnityEngine_Component_c *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0)
          ;
          pUVar15 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)pUVar14,"Prefabs/InGame/VoiceChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
            pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
            *(Il2CppObject **)&(pUVar13->_2).initializationExceptionGCHandle = pIVar12;
            il2cpp_runtime_helper_022b4080(&(pUVar13->_2).initializationExceptionGCHandle);
            pUVar33 = *(UnityEngine_Component_o **)&(pUVar13->_2).initializationExceptionGCHandle;
            pUVar14 = (UnityEngine_Component_c *)0x0;
            if (pUVar33 != (UnityEngine_Component_o *)0x0) {
              pUVar15 = UnityEngine_Component__get_gameObject(pUVar33,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar15,3,3,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              goto label_043c6d24;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar5 + 0x28) != 0) {
      if (*(char *)(*(long *)(lVar5 + 0x28) + 0x11) == '\0') goto label_043c6c6c;
      pUVar33 = pUVar13[1]._1.generic_class;
      pUVar14 = (UnityEngine_Component_c *)0x0;
      if (pUVar33 != (UnityEngine_Component_o *)0x0) {
        pUVar14 = (UnityEngine_Component_c *)UnityEngine_Component__get_transform(pUVar33,(MethodInfo *)0x0);
        pUVar15 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                            ((UnityEngine_Transform_o *)pUVar14,"Prefabs/InGame/FeedPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
        if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
          pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_FeedPanel_GetComponent_FeedPanel);
          (pUVar13->_2).unity_user_data = pIVar12;
          il2cpp_runtime_helper_022b4080(&(pUVar13->_2).unity_user_data);
          pUVar33 = (pUVar13->_2).unity_user_data;
          pUVar14 = (UnityEngine_Component_c *)0x0;
          if (pUVar33 != (UnityEngine_Component_o *)0x0) {
            pUVar14 = (UnityEngine_Component_c *)
                      UnityEngine_Component__get_gameObject(pUVar33,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      ((UnityEngine_GameObject_o *)pUVar14,2,2,(UnityEngine_Vector2_o)0xc248000000000000,
                       (MethodInfo *)0x0);
            lVar16 = *(long *)(TypeInfo_SettingsManager + 0xb8);
            goto label_043c6c6c;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    il2cpp_runtime_helper_023445d0(&"Minimap/Prefabs/MinimapPanel");
    g_data_057ae3f0 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
  pIVar17 = (Il2CppClass *)UI_ElementFactory__InstantiateAndBind(pUVar10,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
  ppIVar2 = &pUVar14[1]._1.klass;
  pUVar14[1]._1.klass = pIVar17;
  il2cpp_runtime_helper_022b4080(ppIVar2,pIVar17);
  UI_ElementFactory__SetAnchor
            ((UnityEngine_GameObject_o *)pUVar14[1]._1.klass,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,
             (MethodInfo *)0x0);
  pIVar17 = pUVar14[1]._1.klass;
  pUVar13 = (UnityEngine_Component_c *)0x0;
  if (pIVar17 != (Il2CppClass *)0x0) {
    UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pIVar17,MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    pIVar17 = *ppIVar2;
    pUVar13 = (UnityEngine_Component_c *)0x0;
    if (pIVar17 != (Il2CppClass *)0x0) {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar17,0,(MethodInfo *)0x0);
      pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
      pUVar13 = pUVar14;
      if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_(pUVar15,MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Snapshot/SnapshotPopup");
    g_data_057ae3f1 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
  pUVar18 = (UnityEngine_Transform_o *)
            UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar10,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
  if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
    pMVar19 = (MethodInfo *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar18,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    (pUVar13->vtable)._2_GetHashCode.method = pMVar19;
    il2cpp_runtime_helper_022b4080(&(pUVar13->vtable)._2_GetHashCode.method);
    pUVar10 = pUVar18;
    __this_06 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar18,(MethodInfo *)0x0);
    if (__this_06 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_06,(UnityEngine_Vector3_o)ZEXT812(0x3f4ccccd3f4ccccd),(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                ((UnityEngine_GameObject_o *)pUVar18,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar25 = (uint)pUVar10->klass[1]._1.namespaze;
  pUVar18 = pUVar10;
  (*(code *)pUVar10->klass[1]._1.name)();
  pvVar6 = pUVar10[6].monitor;
  if (pvVar6 != (void *)0x0) {
    if (g_data_057ae3bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetEmoteWheel_b__25_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
      g_data_057ae3bf = '\x01';
    }
    pUVar18 = (UnityEngine_Transform_o *)0x0;
    if (*(long **)((long)pvVar6 + 0x30) != (long *)0x0) {
      lVar16 = **(long **)((long)pvVar6 + 0x30);
      uVar25 = (uint)*(undefined8 *)(lVar16 + 0x2a0);
      (**(code **)(lVar16 + 0x298))();
      *(undefined1 *)((long)pvVar6 + 0x40) = 0;
      __this_00 = (UI_ItemHandler_o *)pUVar10[6].fields.m_CachedPtr;
      pUVar18 = (UnityEngine_Transform_o *)0x0;
      if (__this_00 != (UI_ItemHandler_o *)0x0) {
        UI_ItemHandler__SetItemWheel(__this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    g_data_057ae3e8 = '\x01';
  }
  pUVar15 = pUVar18[9].monitor;
  if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
    pMVar26 = MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD;
    __this_07 = (UI_TopLeftHUD_o *)UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    uVar25 = (uint)pMVar26;
    if (__this_07 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_07,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar20 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar15,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar20 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar20,uVar25 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar20 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar15,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar20 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__get_enabled(pUVar20,(MethodInfo *)0x0);
    return;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_08 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
  pIVar17 = title;
  pUVar11 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                      ((UnityEngine_Transform_o *)__this_08,(System_String_o *)title,width,height,0,
                       (MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    pIVar17 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar21 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(pUVar11,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar16 = MethodInfo_Void_Add;
    __this_08 = ((UnityEngine_Component_o *)(pUVar15 + 1))->monitor;
    if (__this_08 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_08->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_08->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar25 = (__this_08->fields)._size;
        pIVar17 = pIVar21;
        if (uVar25 < (uint)pSVar4->max_length) {
          (__this_08->fields)._size = uVar25 + 1;
          pSVar4->m_Items[(int)uVar25] = (Il2CppObject *)pIVar21;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar25);
          pSVar27 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar15 + 0x18))->fields).m_CachedPtr;
          if (pSVar27 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar27,(Il2CppObject *)key,(Il2CppObject *)pIVar21,MethodInfo_Void_set_Item);
            return;
          }
          __this_08 = (System_Collections_Generic_List_object__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_08,(Il2CppObject *)pIVar21,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          pSVar27 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar15 + 0x18))->fields).m_CachedPtr;
          __this_08 = (System_Collections_Generic_List_object__o *)0x0;
          if (pSVar27 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar21 = pIVar17;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar27 = (System_Collections_Generic_Dictionary_object__object__o *)__this_08[0xe].fields._syncRoot;
  pIVar12 = (Il2CppObject *)0x0;
  if (pSVar27 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar27,(Il2CppObject *)pIVar17,MethodInfo_BasePopup_get_Item);
    if (pIVar12 == (Il2CppObject *)0x0) {
      return;
    }
    bVar3 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar3 <= (pIVar12->klass->_2).naturalAligment) &&
       ((pIVar12->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar21 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar17 = (Il2CppClass *)0x0;
  if (pIVar12[0x25].klass != (Il2CppClass *)0x0) {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12[0x25].klass,
                       (Il2CppObject *)pIVar21,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') {
      return;
    }
    pIVar17 = pIVar12[0x25].klass;
    if ((pIVar17 != (Il2CppClass *)0x0) &&
       (pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar17,
                             (Il2CppObject *)pIVar21,MethodInfo_BasePopup_get_Item), pIVar12 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar19 = pIVar17->vtable[0x11].method;
  if (pMVar19 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar19,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar19,(MethodInfo *)0x0);
  pIVar12 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar19 + 2)[1].invoker_method = (InvokerMethod)pIVar12;
  il2cpp_runtime_helper_022b4080(&(pMVar19 + 2)[1].invoker_method);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar19,(MethodInfo *)0x0);
  pIVar17 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar19 + 2)[1].klass = pIVar17;
  il2cpp_runtime_helper_022b4080(&(pMVar19 + 2)[1].klass);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar19,(MethodInfo *)0x0);
  pIVar22 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar19 + 2)[1].return_type = pIVar22;
  il2cpp_runtime_helper_022b4080(&(pMVar19 + 2)[1].return_type);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar19,(MethodInfo *)0x0);
  __this_09 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar19 + 3)[1].invoker_method = (InvokerMethod)__this_09;
  il2cpp_runtime_helper_022b4080(&(pMVar19 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar19 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar15 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar19 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_09 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar15,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar16 = MethodInfo_Void_Add;
    pIVar17 = pMVar19->klass;
    if (pIVar17 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_09 = (Il2CppRGCTXData *)(pMVar19 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar17->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar4 = ((System_Collections_Generic_List_object__Fields *)&(pIVar17->_1).name)->_items;
    if (pSVar4 == (System_Object_array *)0x0) goto label_043c7809;
    uVar25 = *(uint *)&(pIVar17->_1).namespaze;
    if ((uint)pSVar4->max_length <= uVar25) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar17,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      pIVar17 = pMVar19->klass;
      if (pIVar17 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar17->_1).namespaze = uVar25 + 1;
    pSVar4->m_Items[(int)uVar25] = (Il2CppObject *)__this_09;
    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar25);
    pIVar17 = pMVar19->klass;
    if (pIVar17 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar16 = MethodInfo_Void_Add;
    __this_09 = (Il2CppRGCTXData *)(pMVar19 + 2)[1].klass;
    puVar8 = (undefined1 *)((long)&(pIVar17->_1).namespaze + 4);
    *(int *)puVar8 = *(int *)puVar8 + 1;
    pcVar7 = (pIVar17->_1).name;
    if (pcVar7 == (char *)0x0) goto label_043c7809;
    uVar25 = *(uint *)&(pIVar17->_1).namespaze;
    if (*(uint *)(pcVar7 + 0x18) <= uVar25) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar17,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      pIVar17 = pMVar19->klass;
      if (pIVar17 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar17->_1).namespaze = uVar25 + 1;
    *(Il2CppRGCTXData **)(pcVar7 + (long)(int)uVar25 * 8 + 0x20) = __this_09;
    il2cpp_runtime_helper_022b4080(pcVar7 + (long)(int)uVar25 * 8 + 0x20);
    pIVar17 = pMVar19->klass;
    if (pIVar17 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar16 = MethodInfo_Void_Add;
    __this_09 = (Il2CppRGCTXData *)(pMVar19 + 2)[1].return_type;
    puVar8 = (undefined1 *)((long)&(pIVar17->_1).namespaze + 4);
    *(int *)puVar8 = *(int *)puVar8 + 1;
    pcVar7 = (pIVar17->_1).name;
    if (pcVar7 == (char *)0x0) goto label_043c7809;
    uVar25 = *(uint *)&(pIVar17->_1).namespaze;
    if (uVar25 < *(uint *)(pcVar7 + 0x18)) {
      *(uint *)&(pIVar17->_1).namespaze = uVar25 + 1;
      *(Il2CppRGCTXData **)(pcVar7 + (long)(int)uVar25 * 8 + 0x20) = __this_09;
      il2cpp_runtime_helper_022b4080(pcVar7 + (long)(int)uVar25 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar17,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    pIVar17 = TypeInfo_InGameManager;
    __this_09 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_09 == (Il2CppRGCTXData *)0x0) {
      pMVar19[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar19[6].field7_0x38);
      pIVar28 = pMVar19[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_09 = (Il2CppRGCTXData *)0x0;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x70), lVar16 != 0)) {
        if (*(char *)(lVar16 + 0x11) == '\0') {
          return;
        }
        bVar9 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar28,(MethodInfo *)__this_09);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (pMVar19[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar19[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar3 <= (__this_09->klass->_2).naturalAligment) &&
       ((__this_09->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      pMVar19[6].field7_0x38.rgctx_data = __this_09;
      if ((bVar3 <= (__this_09->klass->_2).naturalAligment) &&
         ((__this_09->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == pIVar17)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_09 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x58), lVar16 != 0)) && (*(long *)(lVar16 + 0xc0) != 0))
  {
    if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar16 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar17 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar17);
    *(undefined1 *)(__this_09 + 0x2f) = 1;
  }
  else {
    bVar9 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar17);
    if ((char)bVar9 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar17);
      pMVar19 = __this_09[0x22].method;
      pIVar28 = (Il2CppRGCTXData *)0x0;
      if (pMVar19 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar19->methodPointer + 0x288))(pMVar19,*(undefined8 *)(pMVar19->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar20 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_09,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar28 = __this_09;
  if (pUVar20 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar20,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar31 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar32 = (Il2CppMethodPointer)0x0;
  pUVar33 = (UnityEngine_Component_o *)0x0;
  if (pIVar28[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar30 = il2cpp_runtime_helper_022b2c90();
    if (auVar30._8_4_ == 1) {
      plVar23 = (long *)__cxa_begin_catch(auVar30._0_8_);
      lVar16 = *plVar23;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar32;
      __this_03.fields._list = pSVar31;
      __this_03.fields._current = (Il2CppObject *)pUVar33;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe58);
      if (lVar16 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar16);
    }
    __this_04.fields._8_8_ = pIVar32;
    __this_04.fields._list = pSVar31;
    __this_04.fields._current = (Il2CppObject *)pUVar33;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe58);
    _Unwind_Resume(auVar30._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffe58,
             (System_Collections_Generic_List_object__o *)pIVar28[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar32;
    __this_01.fields._list = pSVar31;
    __this_01.fields._current = (Il2CppObject *)pUVar33;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe58);
    if ((char)bVar9 == '\0') break;
    if (pUVar33 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar15 = UnityEngine_Component__get_gameObject(pUVar33,(MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar15,(MethodInfo *)0x0);
  } while ((char)bVar9 == '\0');
  __this_02.fields._8_8_ = pIVar32;
  __this_02.fields._list = pSVar31;
  __this_02.fields._current = (Il2CppObject *)pUVar33;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe58);
  return;
}


// UI.InGameMenu$$ToggleUI
// il2cpp: void UI_InGameMenu__ToggleUI (UI_InGameMenu_o* __this, bool toggle, const MethodInfo* method);
// 0x43c7090

void UI_InGameMenu__ToggleUI(UI_InGameMenu_o *__this,bool_conflict toggle,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  UI_BasePopup_array *pUVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Object_array *pSVar5;
  char *pcVar6;
  long lVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 *puVar8;
  bool_conflict bVar9;
  UnityEngine_Behaviour_o *pUVar10;
  System_Collections_Generic_List_BasePopup__o *__this_05;
  UnityEngine_GameObject_o *pUVar11;
  Il2CppClass *pIVar12;
  Il2CppObject *pIVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  UnityEngine_Transform_o *pUVar14;
  Il2CppClass *pIVar15;
  Il2CppType *pIVar16;
  Il2CppRGCTXData *__this_06;
  long *plVar17;
  Il2CppClass *title;
  MethodInfo_24E7B40 *key;
  System_Collections_Generic_Dictionary_string__BasePopup__o *__this_07;
  MethodInfo *pMVar18;
  Il2CppRGCTXData *pIVar19;
  float width;
  float in_XMM1_Da;
  undefined1 auVar20 [12];
  System_Collections_Generic_List_T__o *pSVar21;
  Il2CppMethodPointer pIVar22;
  UnityEngine_Component_o *__this_08;
  
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar10 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar10 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar10,toggle & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar10 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar10 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__get_enabled(pUVar10,(MethodInfo *)0x0);
    return;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_05 = (System_Collections_Generic_List_BasePopup__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pIVar15 = title;
  pUVar11 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                      ((UnityEngine_Transform_o *)__this_05,(System_String_o *)title,width,in_XMM1_Da,0,
                       (MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    pIVar15 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar12 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(pUVar11,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar7 = MethodInfo_Void_Add;
    __this_05 = (__this->fields)._popups;
    if (__this_05 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_05->fields)._items;
      if (pUVar4 != (UI_BasePopup_array *)0x0) {
        uVar3 = (__this_05->fields)._size;
        pIVar15 = pIVar12;
        if (uVar3 < (uint)pUVar4->max_length) {
          (__this_05->fields)._size = uVar3 + 1;
          pUVar4->m_Items[(int)uVar3] = (UI_BasePopup_o *)pIVar12;
          il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
          __this_07 = (__this->fields)._customPopups;
          if (__this_07 != (System_Collections_Generic_Dictionary_string__BasePopup__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
                       (Il2CppObject *)key,(Il2CppObject *)pIVar12,MethodInfo_Void_set_Item);
            return;
          }
          __this_05 = (System_Collections_Generic_List_BasePopup__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)pIVar12,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          __this_07 = (__this->fields)._customPopups;
          __this_05 = (System_Collections_Generic_List_BasePopup__o *)0x0;
          if (__this_07 != (System_Collections_Generic_Dictionary_string__BasePopup__o *)0x0)
          goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar12 = pIVar15;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)__this_05[0xe].fields._syncRoot;
  pIVar13 = (Il2CppObject *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (__this_00,(Il2CppObject *)pIVar15,MethodInfo_BasePopup_get_Item);
    if (pIVar13 == (Il2CppObject *)0x0) {
      return;
    }
    bVar2 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar2 <= (pIVar13->klass->_2).naturalAligment) &&
       ((pIVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar12 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar15 = (Il2CppClass *)0x0;
  if (pIVar13[0x25].klass != (Il2CppClass *)0x0) {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13[0x25].klass,
                       (Il2CppObject *)pIVar12,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') {
      return;
    }
    pIVar15 = pIVar13[0x25].klass;
    if ((pIVar15 != (Il2CppClass *)0x0) &&
       (pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar15,
                             (Il2CppObject *)pIVar12,MethodInfo_BasePopup_get_Item), pIVar13 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar18 = pIVar15->vtable[0x11].method;
  if (pMVar18 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar18,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar18,(MethodInfo *)0x0);
  pIVar13 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar18 + 2)[1].invoker_method = (InvokerMethod)pIVar13;
  il2cpp_runtime_helper_022b4080(&(pMVar18 + 2)[1].invoker_method);
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar18,(MethodInfo *)0x0);
  pIVar15 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar18 + 2)[1].klass = pIVar15;
  il2cpp_runtime_helper_022b4080(&(pMVar18 + 2)[1].klass);
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar18,(MethodInfo *)0x0);
  pIVar16 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar18 + 2)[1].return_type = pIVar16;
  il2cpp_runtime_helper_022b4080(&(pMVar18 + 2)[1].return_type);
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar18,(MethodInfo *)0x0);
  __this_06 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar18 + 3)[1].invoker_method = (InvokerMethod)__this_06;
  il2cpp_runtime_helper_022b4080(&(pMVar18 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar18 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar11 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar18 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_06 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar11,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar7 = MethodInfo_Void_Add;
    pIVar15 = pMVar18->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_06 = (Il2CppRGCTXData *)(pMVar18 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar15->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar5 = ((System_Collections_Generic_List_object__Fields *)&(pIVar15->_1).name)->_items;
    if (pSVar5 == (System_Object_array *)0x0) goto label_043c7809;
    uVar3 = *(uint *)&(pIVar15->_1).namespaze;
    if ((uint)pSVar5->max_length <= uVar3) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_06,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      pIVar15 = pMVar18->klass;
      if (pIVar15 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar15->_1).namespaze = uVar3 + 1;
    pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_06;
    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
    pIVar15 = pMVar18->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar7 = MethodInfo_Void_Add;
    __this_06 = (Il2CppRGCTXData *)(pMVar18 + 2)[1].klass;
    puVar8 = (undefined1 *)((long)&(pIVar15->_1).namespaze + 4);
    *(int *)puVar8 = *(int *)puVar8 + 1;
    pcVar6 = (pIVar15->_1).name;
    if (pcVar6 == (char *)0x0) goto label_043c7809;
    uVar3 = *(uint *)&(pIVar15->_1).namespaze;
    if (*(uint *)(pcVar6 + 0x18) <= uVar3) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_06,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      pIVar15 = pMVar18->klass;
      if (pIVar15 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar15->_1).namespaze = uVar3 + 1;
    *(Il2CppRGCTXData **)(pcVar6 + (long)(int)uVar3 * 8 + 0x20) = __this_06;
    il2cpp_runtime_helper_022b4080(pcVar6 + (long)(int)uVar3 * 8 + 0x20);
    pIVar15 = pMVar18->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar7 = MethodInfo_Void_Add;
    __this_06 = (Il2CppRGCTXData *)(pMVar18 + 2)[1].return_type;
    puVar8 = (undefined1 *)((long)&(pIVar15->_1).namespaze + 4);
    *(int *)puVar8 = *(int *)puVar8 + 1;
    pcVar6 = (pIVar15->_1).name;
    if (pcVar6 == (char *)0x0) goto label_043c7809;
    uVar3 = *(uint *)&(pIVar15->_1).namespaze;
    if (uVar3 < *(uint *)(pcVar6 + 0x18)) {
      *(uint *)&(pIVar15->_1).namespaze = uVar3 + 1;
      *(Il2CppRGCTXData **)(pcVar6 + (long)(int)uVar3 * 8 + 0x20) = __this_06;
      il2cpp_runtime_helper_022b4080(pcVar6 + (long)(int)uVar3 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_06,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    pIVar15 = TypeInfo_InGameManager;
    __this_06 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_06 == (Il2CppRGCTXData *)0x0) {
      pMVar18[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar18[6].field7_0x38);
      pIVar19 = pMVar18[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_06 = (Il2CppRGCTXData *)0x0;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x70), lVar7 != 0)) {
        if (*(char *)(lVar7 + 0x11) == '\0') {
          return;
        }
        bVar9 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar19,(MethodInfo *)__this_06);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (pMVar18[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar18[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= (__this_06->klass->_2).naturalAligment) &&
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      pMVar18[6].field7_0x38.rgctx_data = __this_06;
      if ((bVar2 <= (__this_06->klass->_2).naturalAligment) &&
         ((__this_06->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar15)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_06 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x58), lVar7 != 0)) && (*(long *)(lVar7 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar7 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar7 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar15 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_06,(MethodInfo *)pIVar15);
    *(undefined1 *)(__this_06 + 0x2f) = 1;
  }
  else {
    bVar9 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_06,(MethodInfo *)pIVar15);
    if ((char)bVar9 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_06,(MethodInfo *)pIVar15);
      pMVar18 = __this_06[0x22].method;
      pIVar19 = (Il2CppRGCTXData *)0x0;
      if (pMVar18 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar18->methodPointer + 0x288))(pMVar18,*(undefined8 *)(pMVar18->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar10 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_06,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar19 = __this_06;
  if (pUVar10 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar10,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar21 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar22 = (Il2CppMethodPointer)0x0;
  __this_08 = (UnityEngine_Component_o *)0x0;
  if (pIVar19[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar20 = il2cpp_runtime_helper_022b2c90();
    if (auVar20._8_4_ == 1) {
      plVar17 = (long *)__cxa_begin_catch(auVar20._0_8_);
      lVar7 = *plVar17;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar22;
      __this_03.fields._list = pSVar21;
      __this_03.fields._current = (Il2CppObject *)__this_08;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
      if (lVar7 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar7);
    }
    __this_04.fields._8_8_ = pIVar22;
    __this_04.fields._list = pSVar21;
    __this_04.fields._current = (Il2CppObject *)__this_08;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
    _Unwind_Resume(auVar20._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff20,
             (System_Collections_Generic_List_object__o *)pIVar19[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar22;
    __this_01.fields._list = pSVar21;
    __this_01.fields._current = (Il2CppObject *)__this_08;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20);
    if ((char)bVar9 == '\0') break;
    if (__this_08 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar11 = UnityEngine_Component__get_gameObject(__this_08,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
  } while ((char)bVar9 == '\0');
  __this_02.fields._8_8_ = pIVar22;
  __this_02.fields._list = pSVar21;
  __this_02.fields._current = (Il2CppObject *)__this_08;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
  return;
}


// UI.InGameMenu$$IsActive
// il2cpp: bool UI_InGameMenu__IsActive (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c70f0

bool_conflict UI_InGameMenu__IsActive(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_BasePopup_array *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Object_array *pSVar3;
  char *pcVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 *puVar6;
  bool_conflict bVar7;
  bool_conflict extraout_EAX;
  uint uVar8;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  UnityEngine_Behaviour_o *pUVar9;
  System_Collections_Generic_List_BasePopup__o *__this_05;
  UnityEngine_GameObject_o *pUVar10;
  Il2CppClass *pIVar11;
  Il2CppObject *pIVar12;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_TSource__o *pSVar13;
  UnityEngine_Transform_o *pUVar14;
  Il2CppClass *pIVar15;
  Il2CppType *pIVar16;
  Il2CppRGCTXData *__this_06;
  undefined8 extraout_RAX;
  undefined8 uVar18;
  long *plVar19;
  undefined8 extraout_RAX_00;
  Il2CppClass *title;
  int iVar20;
  byte bVar21;
  MethodInfo_24E7B40 *key;
  System_Collections_Generic_Dictionary_string__BasePopup__o *__this_07;
  MethodInfo *pMVar22;
  Il2CppRGCTXData *pIVar23;
  float width;
  float in_XMM1_Da;
  undefined1 auVar24 [12];
  System_Collections_Generic_List_T__o *pSVar25;
  Il2CppMethodPointer pIVar26;
  UnityEngine_Component_o *__this_08;
  ulong uVar17;
  
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar9 = (UnityEngine_Behaviour_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar9 != (UnityEngine_Behaviour_o *)0x0) {
    bVar7 = UnityEngine_Behaviour__get_enabled(pUVar9,(MethodInfo *)0x0);
    return bVar7;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_05 = (System_Collections_Generic_List_BasePopup__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pIVar15 = title;
  pUVar10 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                      ((UnityEngine_Transform_o *)__this_05,(System_String_o *)title,width,in_XMM1_Da,0,
                       (MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pIVar15 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar11 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(pUVar10,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar5 = MethodInfo_Void_Add;
    __this_05 = (__this->fields)._popups;
    if (__this_05 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar2 = (__this_05->fields)._items;
      if (pUVar2 != (UI_BasePopup_array *)0x0) {
        uVar8 = (__this_05->fields)._size;
        pIVar15 = pIVar11;
        if (uVar8 < (uint)pUVar2->max_length) {
          (__this_05->fields)._size = uVar8 + 1;
          pUVar2->m_Items[(int)uVar8] = (UI_BasePopup_o *)pIVar11;
          il2cpp_runtime_helper_022b4080(pUVar2->m_Items + (int)uVar8);
          __this_07 = (__this->fields)._customPopups;
          if (__this_07 != (System_Collections_Generic_Dictionary_string__BasePopup__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
                       (Il2CppObject *)key,(Il2CppObject *)pIVar11,MethodInfo_Void_set_Item);
            return extraout_EAX;
          }
          __this_05 = (System_Collections_Generic_List_BasePopup__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)pIVar11,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          __this_07 = (__this->fields)._customPopups;
          __this_05 = (System_Collections_Generic_List_BasePopup__o *)0x0;
          if (__this_07 != (System_Collections_Generic_Dictionary_string__BasePopup__o *)0x0)
          goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar11 = pIVar15;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)__this_05[0xe].fields._syncRoot;
  pIVar12 = (Il2CppObject *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (__this_00,(Il2CppObject *)pIVar15,MethodInfo_BasePopup_get_Item);
    if (pIVar12 == (Il2CppObject *)0x0) {
label_043c72ff:
      return (bool_conflict)pIVar12;
    }
    bVar21 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar21 <= (pIVar12->klass->_2).naturalAligment) &&
       ((pIVar12->klass->_2).typeHierarchy[(ulong)bVar21 - 1] == TypeInfo_CustomPopup)) goto label_043c72ff;
    pIVar11 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar15 = (Il2CppClass *)0x0;
  if (pIVar12[0x25].klass != (Il2CppClass *)0x0) {
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12[0x25].klass,
                       (Il2CppObject *)pIVar11,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
      return 0;
    }
    pIVar15 = pIVar12[0x25].klass;
    if ((pIVar15 != (Il2CppClass *)0x0) &&
       (pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar15,
                             (Il2CppObject *)pIVar11,MethodInfo_BasePopup_get_Item), pIVar12 != (Il2CppObject *)0x0)) {
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar12 >> 8),*(char *)&pIVar12[9].klass != '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar22 = pIVar15->vtable[0x11].method;
  if (pMVar22 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar22,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    pSVar13 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return (bool_conflict)pSVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar22,(MethodInfo *)0x0);
  pIVar12 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar22 + 2)[1].invoker_method = (InvokerMethod)pIVar12;
  il2cpp_runtime_helper_022b4080(&(pMVar22 + 2)[1].invoker_method);
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar22,(MethodInfo *)0x0);
  pIVar15 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar22 + 2)[1].klass = pIVar15;
  il2cpp_runtime_helper_022b4080(&(pMVar22 + 2)[1].klass);
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar22,(MethodInfo *)0x0);
  pIVar16 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar22 + 2)[1].return_type = pIVar16;
  il2cpp_runtime_helper_022b4080(&(pMVar22 + 2)[1].return_type);
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar22,(MethodInfo *)0x0);
  __this_06 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar22 + 3)[1].invoker_method = (InvokerMethod)__this_06;
  il2cpp_runtime_helper_022b4080(&(pMVar22 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar22 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar10 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar22 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_06 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar10,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
    pIVar15 = pMVar22->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_06 = (Il2CppRGCTXData *)(pMVar22 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar15->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar3 = ((System_Collections_Generic_List_object__Fields *)&(pIVar15->_1).name)->_items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_043c7809;
    uVar8 = *(uint *)&(pIVar15->_1).namespaze;
    if ((uint)pSVar3->max_length <= uVar8) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_06,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pIVar15 = pMVar22->klass;
      if (pIVar15 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar15->_1).namespaze = uVar8 + 1;
    pSVar3->m_Items[(int)uVar8] = (Il2CppObject *)__this_06;
    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar8);
    pIVar15 = pMVar22->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar5 = MethodInfo_Void_Add;
    __this_06 = (Il2CppRGCTXData *)(pMVar22 + 2)[1].klass;
    puVar6 = (undefined1 *)((long)&(pIVar15->_1).namespaze + 4);
    *(int *)puVar6 = *(int *)puVar6 + 1;
    pcVar4 = (pIVar15->_1).name;
    if (pcVar4 == (char *)0x0) goto label_043c7809;
    uVar8 = *(uint *)&(pIVar15->_1).namespaze;
    if (*(uint *)(pcVar4 + 0x18) <= uVar8) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_06,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pIVar15 = pMVar22->klass;
      if (pIVar15 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar15->_1).namespaze = uVar8 + 1;
    *(Il2CppRGCTXData **)(pcVar4 + (long)(int)uVar8 * 8 + 0x20) = __this_06;
    il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar8 * 8 + 0x20);
    pIVar15 = pMVar22->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar5 = MethodInfo_Void_Add;
    __this_06 = (Il2CppRGCTXData *)(pMVar22 + 2)[1].return_type;
    puVar6 = (undefined1 *)((long)&(pIVar15->_1).namespaze + 4);
    *(int *)puVar6 = *(int *)puVar6 + 1;
    pcVar4 = (pIVar15->_1).name;
    if (pcVar4 == (char *)0x0) goto label_043c7809;
    uVar8 = *(uint *)&(pIVar15->_1).namespaze;
    if (uVar8 < *(uint *)(pcVar4 + 0x18)) {
      *(uint *)&(pIVar15->_1).namespaze = uVar8 + 1;
      *(Il2CppRGCTXData **)(pcVar4 + (long)(int)uVar8 * 8 + 0x20) = __this_06;
      il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar8 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_06,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    pIVar15 = TypeInfo_InGameManager;
    __this_06 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_06 == (Il2CppRGCTXData *)0x0) {
      pMVar22[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar22[6].field7_0x38);
      pIVar23 = pMVar22[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_06 = (Il2CppRGCTXData *)0x0;
      uVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      uVar17 = (ulong)uVar8;
      if ((char)uVar8 == '\0') goto label_043c7801;
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar5 != 0) && (uVar17 = *(ulong *)(lVar5 + 0x70), uVar17 != 0)) {
        if (*(char *)(uVar17 + 0x11) == '\0') {
label_043c7801:
          return (bool_conflict)uVar17;
        }
        uVar8 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar23,(MethodInfo *)__this_06);
        uVar17 = (ulong)uVar8;
        if ((char)uVar8 == '\0') goto label_043c7801;
        if (pMVar22[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar22[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return extraout_EAX_00;
        }
      }
      goto label_043c7809;
    }
    bVar21 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar21 <= (__this_06->klass->_2).naturalAligment) &&
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar21 - 1] == TypeInfo_InGameManager)) {
      pMVar22[6].field7_0x38.rgctx_data = __this_06;
      if ((bVar21 <= (__this_06->klass->_2).naturalAligment) &&
         ((__this_06->klass->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_06 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) && (*(long *)(lVar5 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar5 + 0xc0) + 0x11) != '\0') {
      return 0;
    }
    lVar5 = *(long *)(lVar5 + 200);
    if (lVar5 != 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar5 >> 8),*(char *)(lVar5 + 0x11) == '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar15 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_06,(MethodInfo *)pIVar15);
    *(undefined1 *)(__this_06 + 0x2f) = 1;
joined_r0x043c78f4:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    pUVar9 = (UnityEngine_Behaviour_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_06,MethodInfo_Canvas_GetComponent_Canvas);
    pIVar23 = __this_06;
    if (pUVar9 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(pUVar9,1,(MethodInfo *)0x0);
      return extraout_EAX_01;
    }
  }
  else {
    bVar7 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_06,(MethodInfo *)pIVar15);
    if ((char)bVar7 != '\0') goto joined_r0x043c78f4;
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_06,(MethodInfo *)pIVar15);
    pMVar22 = __this_06[0x22].method;
    pIVar23 = (Il2CppRGCTXData *)0x0;
    if (pMVar22 != (MethodInfo *)0x0) {
      (**(code **)(pMVar22->methodPointer + 0x288))(pMVar22,*(undefined8 *)(pMVar22->methodPointer + 0x290));
      goto joined_r0x043c78f4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar25 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar26 = (Il2CppMethodPointer)0x0;
  __this_08 = (UnityEngine_Component_o *)0x0;
  if (pIVar23[0x3f].method != (MethodInfo *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff38,
               (System_Collections_Generic_List_object__o *)pIVar23[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    do {
      __this_01.fields._8_8_ = pIVar26;
      __this_01.fields._list = pSVar25;
      __this_01.fields._current = (Il2CppObject *)__this_08;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38);
      if ((char)bVar7 == '\0') {
        iVar20 = 5;
        bVar21 = 0;
        goto label_043c7a14;
      }
      if (__this_08 == (UnityEngine_Component_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
        il2cpp_runtime_helper_022b2c90();
        goto label_043c7a44;
      }
      pUVar10 = UnityEngine_Component__get_gameObject(__this_08,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
    } while ((char)bVar7 == '\0');
    bVar21 = 1;
    iVar20 = 4;
label_043c7a14:
    __this_02.fields._8_8_ = pIVar26;
    __this_02.fields._list = pSVar25;
    __this_02.fields._current = (Il2CppObject *)__this_08;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
    uVar18 = extraout_RAX;
label_043c7a26:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar18 >> 8),iVar20 == 4 & bVar21);
  }
label_043c7a44:
  auVar24 = il2cpp_runtime_helper_022b2c90();
  if (auVar24._8_4_ == 1) {
    plVar19 = (long *)__cxa_begin_catch(auVar24._0_8_);
    lVar5 = *plVar19;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar26;
    __this_03.fields._list = pSVar25;
    __this_03.fields._current = (Il2CppObject *)__this_08;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
    bVar21 = 0;
    iVar20 = 0;
    uVar18 = extraout_RAX_00;
    if (lVar5 == 0) goto label_043c7a26;
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_04.fields._8_8_ = pIVar26;
  __this_04.fields._list = pSVar25;
  __this_04.fields._current = (Il2CppObject *)__this_08;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
  _Unwind_Resume(auVar24._0_8_);
}


// UI.InGameMenu$$CreateCustomPopup
// il2cpp: void UI_InGameMenu__CreateCustomPopup (UI_InGameMenu_o* __this, System_String_o* name, System_String_o* title, float width, float height, const MethodInfo* method);
// 0x43c7140

void UI_InGameMenu__CreateCustomPopup
               (UI_InGameMenu_o *__this,System_String_o *name,System_String_o *title,float width,float height,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  UI_BasePopup_array *pUVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Object_array *pSVar5;
  char *pcVar6;
  long lVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 *puVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_BasePopup__o *__this_05;
  UnityEngine_GameObject_o *pUVar10;
  Il2CppClass *pIVar11;
  Il2CppObject *pIVar12;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  UnityEngine_Transform_o *pUVar13;
  Il2CppType *pIVar14;
  Il2CppRGCTXData *__this_06;
  UnityEngine_Behaviour_o *__this_07;
  long *plVar15;
  System_Collections_Generic_Dictionary_string__BasePopup__o *__this_08;
  Il2CppClass *__this_09;
  MethodInfo *pMVar16;
  Il2CppRGCTXData *pIVar17;
  undefined1 auVar18 [12];
  System_Collections_Generic_List_T__o *pSVar19;
  Il2CppMethodPointer pIVar20;
  UnityEngine_Component_o *__this_10;
  
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_05 = (System_Collections_Generic_List_BasePopup__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar10 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                      ((UnityEngine_Transform_o *)__this_05,title,width,height,0,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    title = (System_String_o *)MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar11 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(pUVar10,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar7 = MethodInfo_Void_Add;
    __this_05 = (__this->fields)._popups;
    if (__this_05 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_05->fields)._items;
      if (pUVar4 != (UI_BasePopup_array *)0x0) {
        uVar3 = (__this_05->fields)._size;
        title = (System_String_o *)pIVar11;
        if (uVar3 < (uint)pUVar4->max_length) {
          (__this_05->fields)._size = uVar3 + 1;
          pUVar4->m_Items[(int)uVar3] = (UI_BasePopup_o *)pIVar11;
          il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
          __this_08 = (__this->fields)._customPopups;
          if (__this_08 != (System_Collections_Generic_Dictionary_string__BasePopup__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_08,
                       (Il2CppObject *)name,(Il2CppObject *)pIVar11,MethodInfo_Void_set_Item);
            return;
          }
          __this_05 = (System_Collections_Generic_List_BasePopup__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)pIVar11,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          __this_08 = (__this->fields)._customPopups;
          __this_05 = (System_Collections_Generic_List_BasePopup__o *)0x0;
          if (__this_08 != (System_Collections_Generic_Dictionary_string__BasePopup__o *)0x0)
          goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar11 = (Il2CppClass *)title;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)__this_05[0xe].fields._syncRoot;
  pIVar12 = (Il2CppObject *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (__this_00,(Il2CppObject *)title,MethodInfo_BasePopup_get_Item);
    if (pIVar12 == (Il2CppObject *)0x0) {
      return;
    }
    bVar2 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar2 <= (pIVar12->klass->_2).naturalAligment) &&
       ((pIVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar11 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  __this_09 = (Il2CppClass *)0x0;
  if (pIVar12[0x25].klass != (Il2CppClass *)0x0) {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar12[0x25].klass,
                       (Il2CppObject *)pIVar11,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') {
      return;
    }
    __this_09 = pIVar12[0x25].klass;
    if ((__this_09 != (Il2CppClass *)0x0) &&
       (pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_09,
                             (Il2CppObject *)pIVar11,MethodInfo_BasePopup_get_Item), pIVar12 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar16 = __this_09->vtable[0x11].method;
  if (pMVar16 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar16,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar16,(MethodInfo *)0x0);
  pIVar12 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar13,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar16 + 2)[1].invoker_method = (InvokerMethod)pIVar12;
  il2cpp_runtime_helper_022b4080(&(pMVar16 + 2)[1].invoker_method);
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar16,(MethodInfo *)0x0);
  pIVar11 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar13,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar16 + 2)[1].klass = pIVar11;
  il2cpp_runtime_helper_022b4080(&(pMVar16 + 2)[1].klass);
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar16,(MethodInfo *)0x0);
  pIVar14 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar13,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar16 + 2)[1].return_type = pIVar14;
  il2cpp_runtime_helper_022b4080(&(pMVar16 + 2)[1].return_type);
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar16,(MethodInfo *)0x0);
  __this_06 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar13,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar16 + 3)[1].invoker_method = (InvokerMethod)__this_06;
  il2cpp_runtime_helper_022b4080(&(pMVar16 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar16 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar10 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar16 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_06 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar10,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar7 = MethodInfo_Void_Add;
    pIVar11 = pMVar16->klass;
    if (pIVar11 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_06 = (Il2CppRGCTXData *)(pMVar16 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar11->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar5 = ((System_Collections_Generic_List_object__Fields *)&(pIVar11->_1).name)->_items;
    if (pSVar5 == (System_Object_array *)0x0) goto label_043c7809;
    uVar3 = *(uint *)&(pIVar11->_1).namespaze;
    if ((uint)pSVar5->max_length <= uVar3) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar11,(Il2CppObject *)__this_06,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      pIVar11 = pMVar16->klass;
      if (pIVar11 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar11->_1).namespaze = uVar3 + 1;
    pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_06;
    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
    pIVar11 = pMVar16->klass;
    if (pIVar11 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar7 = MethodInfo_Void_Add;
    __this_06 = (Il2CppRGCTXData *)(pMVar16 + 2)[1].klass;
    puVar8 = (undefined1 *)((long)&(pIVar11->_1).namespaze + 4);
    *(int *)puVar8 = *(int *)puVar8 + 1;
    pcVar6 = (pIVar11->_1).name;
    if (pcVar6 == (char *)0x0) goto label_043c7809;
    uVar3 = *(uint *)&(pIVar11->_1).namespaze;
    if (*(uint *)(pcVar6 + 0x18) <= uVar3) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar11,(Il2CppObject *)__this_06,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      pIVar11 = pMVar16->klass;
      if (pIVar11 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar11->_1).namespaze = uVar3 + 1;
    *(Il2CppRGCTXData **)(pcVar6 + (long)(int)uVar3 * 8 + 0x20) = __this_06;
    il2cpp_runtime_helper_022b4080(pcVar6 + (long)(int)uVar3 * 8 + 0x20);
    pIVar11 = pMVar16->klass;
    if (pIVar11 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar7 = MethodInfo_Void_Add;
    __this_06 = (Il2CppRGCTXData *)(pMVar16 + 2)[1].return_type;
    puVar8 = (undefined1 *)((long)&(pIVar11->_1).namespaze + 4);
    *(int *)puVar8 = *(int *)puVar8 + 1;
    pcVar6 = (pIVar11->_1).name;
    if (pcVar6 == (char *)0x0) goto label_043c7809;
    uVar3 = *(uint *)&(pIVar11->_1).namespaze;
    if (uVar3 < *(uint *)(pcVar6 + 0x18)) {
      *(uint *)&(pIVar11->_1).namespaze = uVar3 + 1;
      *(Il2CppRGCTXData **)(pcVar6 + (long)(int)uVar3 * 8 + 0x20) = __this_06;
      il2cpp_runtime_helper_022b4080(pcVar6 + (long)(int)uVar3 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar11,(Il2CppObject *)__this_06,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    pIVar11 = TypeInfo_InGameManager;
    __this_06 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_06 == (Il2CppRGCTXData *)0x0) {
      pMVar16[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar16[6].field7_0x38);
      pIVar17 = pMVar16[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_06 = (Il2CppRGCTXData *)0x0;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x70), lVar7 != 0)) {
        if (*(char *)(lVar7 + 0x11) == '\0') {
          return;
        }
        bVar9 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar17,(MethodInfo *)__this_06);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (pMVar16[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar16[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= (__this_06->klass->_2).naturalAligment) &&
       ((__this_06->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      pMVar16[6].field7_0x38.rgctx_data = __this_06;
      if ((bVar2 <= (__this_06->klass->_2).naturalAligment) &&
         ((__this_06->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar11)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_06 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x58), lVar7 != 0)) && (*(long *)(lVar7 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar7 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar7 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar11 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_06,(MethodInfo *)pIVar11);
    *(undefined1 *)(__this_06 + 0x2f) = 1;
  }
  else {
    bVar9 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_06,(MethodInfo *)pIVar11);
    if ((char)bVar9 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_06,(MethodInfo *)pIVar11);
      pMVar16 = __this_06[0x22].method;
      pIVar17 = (Il2CppRGCTXData *)0x0;
      if (pMVar16 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar16->methodPointer + 0x288))(pMVar16,*(undefined8 *)(pMVar16->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  __this_07 = (UnityEngine_Behaviour_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_06,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar17 = __this_06;
  if (__this_07 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(__this_07,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar19 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar20 = (Il2CppMethodPointer)0x0;
  __this_10 = (UnityEngine_Component_o *)0x0;
  if (pIVar17[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar18 = il2cpp_runtime_helper_022b2c90();
    if (auVar18._8_4_ == 1) {
      plVar15 = (long *)__cxa_begin_catch(auVar18._0_8_);
      lVar7 = *plVar15;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar20;
      __this_03.fields._list = pSVar19;
      __this_03.fields._current = (Il2CppObject *)__this_10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
      if (lVar7 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar7);
    }
    __this_04.fields._8_8_ = pIVar20;
    __this_04.fields._list = pSVar19;
    __this_04.fields._current = (Il2CppObject *)__this_10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
    _Unwind_Resume(auVar18._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff40,
             (System_Collections_Generic_List_object__o *)pIVar17[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar20;
    __this_01.fields._list = pSVar19;
    __this_01.fields._current = (Il2CppObject *)__this_10;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff40);
    if ((char)bVar9 == '\0') break;
    if (__this_10 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar10 = UnityEngine_Component__get_gameObject(__this_10,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
  } while ((char)bVar9 == '\0');
  __this_02.fields._8_8_ = pIVar20;
  __this_02.fields._list = pSVar19;
  __this_02.fields._current = (Il2CppObject *)__this_10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
  return;
}


// UI.InGameMenu$$GetCustomPopup
// il2cpp: UI_CustomPopup_o* UI_InGameMenu__GetCustomPopup (UI_InGameMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43c7280

UI_CustomPopup_o *
UI_InGameMenu__GetCustomPopup(UI_InGameMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar6;
  UI_CustomPopup_o *pUVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_04;
  UnityEngine_GameObject_o *pUVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  UI_CustomPopup_o *extraout_RAX;
  Il2CppClass *pIVar13;
  UnityEngine_Behaviour_o *__this_05;
  UI_CustomPopup_o *extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 uVar14;
  long *plVar15;
  undefined8 extraout_RAX_02;
  int iVar16;
  byte bVar17;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  System_Collections_Generic_Dictionary_object__object__o *pSVar18;
  System_Collections_Generic_List_object__o *pSVar19;
  System_Int32_array *pSVar20;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar21;
  undefined1 auVar22 [12];
  System_Collections_Generic_List_T__o *pSVar23;
  Il2CppMethodPointer pIVar24;
  UnityEngine_Component_o *pUVar25;
  
  pIVar13 = (Il2CppClass *)name;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar18 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
  pUVar7 = (UI_CustomPopup_o *)0x0;
  if (pSVar18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar7 = (UI_CustomPopup_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar18,(Il2CppObject *)name,MethodInfo_BasePopup_get_Item);
    if (pUVar7 == (UI_CustomPopup_o *)0x0) {
      return (UI_CustomPopup_o *)0x0;
    }
    bVar17 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar17 <= (pUVar7->klass->_2).naturalAligment) &&
       ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar17 - 1] == TypeInfo_CustomPopup)) {
      return pUVar7;
    }
    pIVar13 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pSVar18 = (System_Collections_Generic_Dictionary_object__object__o *)pUVar7[3].fields.m_CachedPtr;
  __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar18,(Il2CppObject *)pIVar13,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
      return (UI_CustomPopup_o *)0x0;
    }
    __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)pUVar7[3].fields.m_CachedPtr;
    if ((__this_06 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_06,(Il2CppObject *)pIVar13,MethodInfo_BasePopup_get_Item), pIVar8 != (Il2CppObject *)0x0)) {
      return (UI_CustomPopup_o *)CONCAT71((int7)((ulong)pIVar8 >> 8),*(char *)&pIVar8[9].klass != '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pSVar18 = *(System_Collections_Generic_Dictionary_object__object__o **)&__this_06[7].fields._count;
  if (pSVar18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar9 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar18,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    pUVar7 = (UI_CustomPopup_o *)
             System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,MethodInfo_List_1_System_String_ToList_String);
    return pUVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar18,(MethodInfo *)0x0);
  pIVar8 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  *(Il2CppObject **)&pSVar18[3].fields._freeCount = pIVar8;
  il2cpp_runtime_helper_022b4080(&pSVar18[3].fields._freeCount);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar18,(MethodInfo *)0x0);
  pSVar9 = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
           UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  pSVar18[3].fields._keys = pSVar9;
  il2cpp_runtime_helper_022b4080(&pSVar18[3].fields._keys);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar18,(MethodInfo *)0x0);
  pSVar11 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
            UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  pSVar18[3].fields._values = pSVar11;
  il2cpp_runtime_helper_022b4080(&pSVar18[3].fields._values);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar18,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  pSVar18[4].fields._comparer = (System_Collections_Generic_IEqualityComparer_TKey__o *)__this_04;
  il2cpp_runtime_helper_022b4080(&pSVar18[4].fields._comparer);
  pUVar25 = (UnityEngine_Component_o *)pSVar18[4].fields._comparer;
  if (pUVar25 == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar12 = UnityEngine_Component__get_gameObject(pUVar25,(MethodInfo *)0x0);
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x7;
    UI_ElementFactory__SetAnchor(pUVar12,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
    pSVar19 = *(System_Collections_Generic_List_object__o **)&(pSVar18->fields)._count;
    if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
    __this_04 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                 &pSVar18[3].fields._freeCount;
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar19->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_043c7809;
    uVar2 = (pSVar19->fields)._size;
    if ((uint)pSVar3->max_length <= uVar2) {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar19,&__this_04->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pSVar19 = *(System_Collections_Generic_List_object__o **)&(pSVar18->fields)._count;
      if (pSVar19 != (System_Collections_Generic_List_object__o *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    (pSVar19->fields)._size = uVar2 + 1;
    pSVar3->m_Items[(int)uVar2] = &__this_04->obj;
    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    pSVar19 = *(System_Collections_Generic_List_object__o **)&(pSVar18->fields)._count;
    if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
label_043c7630:
    lVar5 = MethodInfo_Void_Add;
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar18[3].fields._keys;
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar19->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_043c7809;
    uVar2 = (pSVar19->fields)._size;
    if ((uint)pSVar3->max_length <= uVar2) {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar19,(Il2CppObject *)__this_04,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pSVar19 = *(System_Collections_Generic_List_object__o **)&(pSVar18->fields)._count;
      if (pSVar19 != (System_Collections_Generic_List_object__o *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    (pSVar19->fields)._size = uVar2 + 1;
    pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    pSVar19 = *(System_Collections_Generic_List_object__o **)&(pSVar18->fields)._count;
    if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
label_043c769b:
    lVar5 = MethodInfo_Void_Add;
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar18[3].fields._values;
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar19->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_043c7809;
    uVar2 = (pSVar19->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar19->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar19,(Il2CppObject *)__this_04,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    pIVar13 = TypeInfo_InGameManager;
    __this_04 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                 (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_04 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar18[7].fields._entries = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pSVar18[7].fields._entries);
      pSVar20 = pSVar18[6].fields._buckets;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pSVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return (UI_CustomPopup_o *)CONCAT44(extraout_var,bVar6);
      }
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar5 != 0) && (pUVar7 = *(UI_CustomPopup_o **)(lVar5 + 0x70), pUVar7 != (UI_CustomPopup_o *)0x0))
      {
        if (*(char *)((long)&(pUVar7->fields).m_CachedPtr + 1) == '\0') {
          return pUVar7;
        }
        bVar6 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pSVar20,(MethodInfo *)__this_04);
        if ((char)bVar6 == '\0') {
          return (UI_CustomPopup_o *)CONCAT44(extraout_var_00,bVar6);
        }
        pSVar20 = pSVar18[6].fields._buckets;
        if (pSVar20 != (System_Int32_array *)0x0) {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pSVar20,1,(MethodInfo *)0x0);
          return extraout_RAX;
        }
      }
      goto label_043c7809;
    }
    pIVar4 = (__this_04->obj).klass;
    bVar17 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar17 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar17 - 1] == TypeInfo_InGameManager)) {
      pSVar18[7].fields._entries = __this_04;
      pIVar4 = (__this_04->obj).klass;
      if ((bVar17 <= (pIVar4->_2).naturalAligment) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar17 - 1] == pIVar13)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) && (*(long *)(lVar5 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar5 + 0xc0) + 0x11) != '\0') {
      return (UI_CustomPopup_o *)0x0;
    }
    lVar5 = *(long *)(lVar5 + 200);
    if (lVar5 != 0) {
      return (UI_CustomPopup_o *)CONCAT71((int7)((ulong)lVar5 >> 8),*(char *)(lVar5 + 0x11) == '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar13 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_04,(MethodInfo *)pIVar13);
    *(undefined1 *)&__this_04->m_Items[0xe].fields.key = 1;
joined_r0x043c78f4:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    __this_05 = (UnityEngine_Behaviour_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_04,MethodInfo_Canvas_GetComponent_Canvas)
    ;
    pSVar21 = __this_04;
    if (__this_05 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_05,1,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
  else {
    bVar6 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_04,(MethodInfo *)pIVar13);
    if ((char)bVar6 != '\0') goto joined_r0x043c78f4;
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_04,(MethodInfo *)pIVar13);
    plVar15 = *(long **)&__this_04->m_Items[10].fields;
    pSVar21 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x288))(plVar15,*(undefined8 *)(*plVar15 + 0x290));
      goto joined_r0x043c78f4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar23 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar24 = (Il2CppMethodPointer)0x0;
  pUVar25 = (UnityEngine_Component_o *)0x0;
  pSVar19 = (System_Collections_Generic_List_object__o *)pSVar21->m_Items[0x13].fields.value;
  if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) {
label_043c7a44:
    auVar22 = il2cpp_runtime_helper_022b2c90();
    if (auVar22._8_4_ == 1) {
      plVar15 = (long *)__cxa_begin_catch(auVar22._0_8_);
      lVar5 = *plVar15;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar24;
      __this_02.fields._list = pSVar23;
      __this_02.fields._current = (Il2CppObject *)pUVar25;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
      bVar17 = 0;
      iVar16 = 0;
      uVar14 = extraout_RAX_02;
      if (lVar5 == 0) goto label_043c7a26;
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_03.fields._8_8_ = pIVar24;
    __this_03.fields._list = pSVar23;
    __this_03.fields._current = (Il2CppObject *)pUVar25;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
    _Unwind_Resume(auVar22._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff68,pSVar19,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator)
  ;
  do {
    __this_00.fields._8_8_ = pIVar24;
    __this_00.fields._list = pSVar23;
    __this_00.fields._current = (Il2CppObject *)pUVar25;
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68);
    if ((char)bVar6 == '\0') {
      iVar16 = 5;
      bVar17 = 0;
      goto label_043c7a14;
    }
    if (pUVar25 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar12 = UnityEngine_Component__get_gameObject(pUVar25,(MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
  } while ((char)bVar6 == '\0');
  bVar17 = 1;
  iVar16 = 4;
label_043c7a14:
  __this_01.fields._8_8_ = pIVar24;
  __this_01.fields._list = pSVar23;
  __this_01.fields._current = (Il2CppObject *)pUVar25;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
  uVar14 = extraout_RAX_01;
label_043c7a26:
  return (UI_CustomPopup_o *)CONCAT71((int7)((ulong)uVar14 >> 8),iVar16 == 4 & bVar17);
}


// UI.InGameMenu$$IsCustomPopupActive
// il2cpp: bool UI_InGameMenu__IsCustomPopupActive (UI_InGameMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43c7320

bool_conflict
UI_InGameMenu__IsCustomPopupActive(UI_InGameMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  Il2CppClass *pIVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  uint uVar6;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  Il2CppObject *pIVar7;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar8;
  System_Collections_Generic_List_TSource__o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_04;
  UnityEngine_GameObject_o *pUVar12;
  Il2CppClass *method_00;
  UnityEngine_Behaviour_o *__this_05;
  undefined8 extraout_RAX;
  undefined8 uVar14;
  long *plVar15;
  undefined8 extraout_RAX_00;
  int iVar16;
  byte bVar17;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  System_Collections_Generic_Dictionary_object__object__o *pSVar18;
  System_Collections_Generic_List_object__o *pSVar19;
  System_Int32_array *pSVar20;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar21;
  undefined1 auVar22 [12];
  System_Collections_Generic_List_T__o *pSVar23;
  Il2CppMethodPointer pIVar24;
  UnityEngine_Component_o *pUVar25;
  ulong uVar13;
  
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pSVar18 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
  __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar18,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      return 0;
    }
    __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
    if ((__this_06 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_06,(Il2CppObject *)name,MethodInfo_BasePopup_get_Item), pIVar7 != (Il2CppObject *)0x0)) {
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar7 >> 8),*(char *)&pIVar7[9].klass != '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pSVar18 = *(System_Collections_Generic_Dictionary_object__object__o **)&__this_06[7].fields._count;
  if (pSVar18 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar18,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    pSVar9 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,MethodInfo_List_1_System_String_ToList_String);
    return (bool_conflict)pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar18,(MethodInfo *)0x0);
  pIVar7 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  *(Il2CppObject **)&pSVar18[3].fields._freeCount = pIVar7;
  il2cpp_runtime_helper_022b4080(&pSVar18[3].fields._freeCount);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar18,(MethodInfo *)0x0);
  pSVar8 = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
           UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  pSVar18[3].fields._keys = pSVar8;
  il2cpp_runtime_helper_022b4080(&pSVar18[3].fields._keys);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar18,(MethodInfo *)0x0);
  pSVar11 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
            UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  pSVar18[3].fields._values = pSVar11;
  il2cpp_runtime_helper_022b4080(&pSVar18[3].fields._values);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar18,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  pSVar18[4].fields._comparer = (System_Collections_Generic_IEqualityComparer_TKey__o *)__this_04;
  il2cpp_runtime_helper_022b4080(&pSVar18[4].fields._comparer);
  pUVar25 = (UnityEngine_Component_o *)pSVar18[4].fields._comparer;
  if (pUVar25 == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    method_00 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar12 = UnityEngine_Component__get_gameObject(pUVar25,(MethodInfo *)0x0);
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x7;
    UI_ElementFactory__SetAnchor(pUVar12,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar4 = MethodInfo_Void_Add;
    pSVar19 = *(System_Collections_Generic_List_object__o **)&(pSVar18->fields)._count;
    if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
    __this_04 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                 &pSVar18[3].fields._freeCount;
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar2 = (pSVar19->fields)._items;
    if (pSVar2 == (System_Object_array *)0x0) goto label_043c7809;
    uVar6 = (pSVar19->fields)._size;
    if ((uint)pSVar2->max_length <= uVar6) {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar19,&__this_04->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      pSVar19 = *(System_Collections_Generic_List_object__o **)&(pSVar18->fields)._count;
      if (pSVar19 != (System_Collections_Generic_List_object__o *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    (pSVar19->fields)._size = uVar6 + 1;
    pSVar2->m_Items[(int)uVar6] = &__this_04->obj;
    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar6);
    pSVar19 = *(System_Collections_Generic_List_object__o **)&(pSVar18->fields)._count;
    if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
label_043c7630:
    lVar4 = MethodInfo_Void_Add;
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar18[3].fields._keys;
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar2 = (pSVar19->fields)._items;
    if (pSVar2 == (System_Object_array *)0x0) goto label_043c7809;
    uVar6 = (pSVar19->fields)._size;
    if ((uint)pSVar2->max_length <= uVar6) {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar19,(Il2CppObject *)__this_04,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      pSVar19 = *(System_Collections_Generic_List_object__o **)&(pSVar18->fields)._count;
      if (pSVar19 != (System_Collections_Generic_List_object__o *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    (pSVar19->fields)._size = uVar6 + 1;
    pSVar2->m_Items[(int)uVar6] = (Il2CppObject *)__this_04;
    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar6);
    pSVar19 = *(System_Collections_Generic_List_object__o **)&(pSVar18->fields)._count;
    if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
label_043c769b:
    lVar4 = MethodInfo_Void_Add;
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pSVar18[3].fields._values;
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar2 = (pSVar19->fields)._items;
    if (pSVar2 == (System_Object_array *)0x0) goto label_043c7809;
    uVar6 = (pSVar19->fields)._size;
    if (uVar6 < (uint)pSVar2->max_length) {
      (pSVar19->fields)._size = uVar6 + 1;
      pSVar2->m_Items[(int)uVar6] = (Il2CppObject *)__this_04;
      il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar19,(Il2CppObject *)__this_04,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    method_00 = TypeInfo_InGameManager;
    __this_04 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                 (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_04 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar18[7].fields._entries = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pSVar18[7].fields._entries);
      pSVar20 = pSVar18[6].fields._buckets;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      uVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pSVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      uVar13 = (ulong)uVar6;
      if ((char)uVar6 == '\0') goto label_043c7801;
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar4 != 0) && (uVar13 = *(ulong *)(lVar4 + 0x70), uVar13 != 0)) {
        if (*(char *)(uVar13 + 0x11) == '\0') {
label_043c7801:
          return (bool_conflict)uVar13;
        }
        uVar6 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pSVar20,(MethodInfo *)__this_04);
        uVar13 = (ulong)uVar6;
        if ((char)uVar6 == '\0') goto label_043c7801;
        pSVar20 = pSVar18[6].fields._buckets;
        if (pSVar20 != (System_Int32_array *)0x0) {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pSVar20,1,(MethodInfo *)0x0);
          return extraout_EAX;
        }
      }
      goto label_043c7809;
    }
    pIVar3 = (__this_04->obj).klass;
    bVar17 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar17 <= (pIVar3->_2).naturalAligment) &&
       ((pIVar3->_2).typeHierarchy[(ulong)bVar17 - 1] == TypeInfo_InGameManager)) {
      pSVar18[7].fields._entries = __this_04;
      pIVar3 = (__this_04->obj).klass;
      if ((bVar17 <= (pIVar3->_2).naturalAligment) &&
         ((pIVar3->_2).typeHierarchy[(ulong)bVar17 - 1] == method_00)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x58), lVar4 != 0)) && (*(long *)(lVar4 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar4 + 0xc0) + 0x11) != '\0') {
      return 0;
    }
    lVar4 = *(long *)(lVar4 + 200);
    if (lVar4 != 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar4 >> 8),*(char *)(lVar4 + 0x11) == '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)method_00 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_04,(MethodInfo *)method_00);
    *(undefined1 *)&__this_04->m_Items[0xe].fields.key = 1;
joined_r0x043c78f4:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    __this_05 = (UnityEngine_Behaviour_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_04,MethodInfo_Canvas_GetComponent_Canvas)
    ;
    pSVar21 = __this_04;
    if (__this_05 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_05,1,(MethodInfo *)0x0);
      return extraout_EAX_00;
    }
  }
  else {
    bVar5 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_04,(MethodInfo *)method_00);
    if ((char)bVar5 != '\0') goto joined_r0x043c78f4;
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_04,(MethodInfo *)method_00);
    plVar15 = *(long **)&__this_04->m_Items[10].fields;
    pSVar21 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x288))(plVar15,*(undefined8 *)(*plVar15 + 0x290));
      goto joined_r0x043c78f4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar23 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar24 = (Il2CppMethodPointer)0x0;
  pUVar25 = (UnityEngine_Component_o *)0x0;
  pSVar19 = (System_Collections_Generic_List_object__o *)pSVar21->m_Items[0x13].fields.value;
  if (pSVar19 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff80,pSVar19,
               MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    do {
      __this_00.fields._8_8_ = pIVar24;
      __this_00.fields._list = pSVar23;
      __this_00.fields._current = (Il2CppObject *)pUVar25;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
      if ((char)bVar5 == '\0') {
        iVar16 = 5;
        bVar17 = 0;
        goto label_043c7a14;
      }
      if (pUVar25 == (UnityEngine_Component_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
        il2cpp_runtime_helper_022b2c90();
        goto label_043c7a44;
      }
      pUVar12 = UnityEngine_Component__get_gameObject(pUVar25,(MethodInfo *)0x0);
      if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
      bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
    } while ((char)bVar5 == '\0');
    bVar17 = 1;
    iVar16 = 4;
label_043c7a14:
    __this_01.fields._8_8_ = pIVar24;
    __this_01.fields._list = pSVar23;
    __this_01.fields._current = (Il2CppObject *)pUVar25;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    uVar14 = extraout_RAX;
label_043c7a26:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar14 >> 8),iVar16 == 4 & bVar17);
  }
label_043c7a44:
  auVar22 = il2cpp_runtime_helper_022b2c90();
  if (auVar22._8_4_ == 1) {
    plVar15 = (long *)__cxa_begin_catch(auVar22._0_8_);
    lVar4 = *plVar15;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar24;
    __this_02.fields._list = pSVar23;
    __this_02.fields._current = (Il2CppObject *)pUVar25;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    bVar17 = 0;
    iVar16 = 0;
    uVar14 = extraout_RAX_00;
    if (lVar4 == 0) goto label_043c7a26;
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_03.fields._8_8_ = pIVar24;
  __this_03.fields._list = pSVar23;
  __this_03.fields._current = (Il2CppObject *)pUVar25;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar22._0_8_);
}


// UI.InGameMenu$$GetAllCustomPopups
// il2cpp: System_Collections_Generic_List_string__o* UI_InGameMenu__GetAllCustomPopups (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c73c0

System_Collections_Generic_List_string__o *
UI_InGameMenu__GetAllCustomPopups(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar7;
  System_Collections_Generic_List_string__o *pSVar8;
  UnityEngine_Transform_o *pUVar9;
  Il2CppObject *pIVar10;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_04;
  UnityEngine_GameObject_o *pUVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Collections_Generic_List_string__o *extraout_RAX;
  Il2CppClass *method_00;
  UnityEngine_Behaviour_o *__this_05;
  System_Collections_Generic_List_string__o *extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 uVar13;
  long *plVar14;
  undefined8 extraout_RAX_02;
  int iVar15;
  byte bVar16;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  System_Collections_Generic_List_object__o *pSVar17;
  System_Int32_array *pSVar18;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar19;
  undefined1 auVar20 [12];
  System_Collections_Generic_List_T__o *pSVar21;
  Il2CppMethodPointer pIVar22;
  UnityEngine_Component_o *pUVar23;
  
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._customPopups;
  if (__this_06 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Keys(__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    pSVar8 = (System_Collections_Generic_List_string__o *)
             System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,MethodInfo_List_1_System_String_ToList_String);
    return pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  pIVar10 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar9,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  *(Il2CppObject **)&__this_06[3].fields._freeCount = pIVar10;
  il2cpp_runtime_helper_022b4080(&__this_06[3].fields._freeCount);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  pSVar7 = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
           UI_ElementFactory__CreateDefaultPopup_object_(pUVar9,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  __this_06[3].fields._keys = pSVar7;
  il2cpp_runtime_helper_022b4080(&__this_06[3].fields._keys);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  pSVar11 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
            UI_ElementFactory__CreateDefaultPopup_object_(pUVar9,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  __this_06[3].fields._values = pSVar11;
  il2cpp_runtime_helper_022b4080(&__this_06[3].fields._values);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              UI_ElementFactory__CreateDefaultPopup_object_(pUVar9,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  __this_06[4].fields._comparer = (System_Collections_Generic_IEqualityComparer_TKey__o *)__this_04;
  il2cpp_runtime_helper_022b4080(&__this_06[4].fields._comparer);
  pUVar23 = (UnityEngine_Component_o *)__this_06[4].fields._comparer;
  if (pUVar23 == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    method_00 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar12 = UnityEngine_Component__get_gameObject(pUVar23,(MethodInfo *)0x0);
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x7;
    UI_ElementFactory__SetAnchor(pUVar12,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
    pSVar17 = *(System_Collections_Generic_List_object__o **)&(__this_06->fields)._count;
    if (pSVar17 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
    __this_04 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                 &__this_06[3].fields._freeCount;
    piVar1 = &(pSVar17->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar17->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_043c7809;
    uVar2 = (pSVar17->fields)._size;
    if ((uint)pSVar3->max_length <= uVar2) {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar17,&__this_04->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pSVar17 = *(System_Collections_Generic_List_object__o **)&(__this_06->fields)._count;
      if (pSVar17 != (System_Collections_Generic_List_object__o *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    (pSVar17->fields)._size = uVar2 + 1;
    pSVar3->m_Items[(int)uVar2] = &__this_04->obj;
    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    pSVar17 = *(System_Collections_Generic_List_object__o **)&(__this_06->fields)._count;
    if (pSVar17 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
label_043c7630:
    lVar5 = MethodInfo_Void_Add;
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this_06[3].fields._keys;
    piVar1 = &(pSVar17->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar17->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_043c7809;
    uVar2 = (pSVar17->fields)._size;
    if ((uint)pSVar3->max_length <= uVar2) {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar17,(Il2CppObject *)__this_04,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pSVar17 = *(System_Collections_Generic_List_object__o **)&(__this_06->fields)._count;
      if (pSVar17 != (System_Collections_Generic_List_object__o *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    (pSVar17->fields)._size = uVar2 + 1;
    pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    pSVar17 = *(System_Collections_Generic_List_object__o **)&(__this_06->fields)._count;
    if (pSVar17 == (System_Collections_Generic_List_object__o *)0x0) goto label_043c7809;
label_043c769b:
    lVar5 = MethodInfo_Void_Add;
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this_06[3].fields._values
    ;
    piVar1 = &(pSVar17->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar17->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_043c7809;
    uVar2 = (pSVar17->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar17->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_04;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar17,(Il2CppObject *)__this_04,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    method_00 = TypeInfo_InGameManager;
    __this_04 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                 (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_04 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      __this_06[7].fields._entries = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&__this_06[7].fields._entries);
      pSVar18 = __this_06[6].fields._buckets;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pSVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return (System_Collections_Generic_List_string__o *)CONCAT44(extraout_var,bVar6);
      }
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar5 != 0) &&
         (pSVar8 = *(System_Collections_Generic_List_string__o **)(lVar5 + 0x70),
         pSVar8 != (System_Collections_Generic_List_string__o *)0x0)) {
        if (*(char *)((long)&(pSVar8->fields)._items + 1) == '\0') {
          return pSVar8;
        }
        bVar6 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pSVar18,(MethodInfo *)__this_04);
        if ((char)bVar6 == '\0') {
          return (System_Collections_Generic_List_string__o *)CONCAT44(extraout_var_00,bVar6);
        }
        pSVar18 = __this_06[6].fields._buckets;
        if (pSVar18 != (System_Int32_array *)0x0) {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pSVar18,1,(MethodInfo *)0x0);
          return extraout_RAX;
        }
      }
      goto label_043c7809;
    }
    pIVar4 = (__this_04->obj).klass;
    bVar16 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar16 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(ulong)bVar16 - 1] == TypeInfo_InGameManager)) {
      __this_06[7].fields._entries = __this_04;
      pIVar4 = (__this_04->obj).klass;
      if ((bVar16 <= (pIVar4->_2).naturalAligment) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar16 - 1] == method_00)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) && (*(long *)(lVar5 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar5 + 0xc0) + 0x11) != '\0') {
      return (System_Collections_Generic_List_string__o *)0x0;
    }
    lVar5 = *(long *)(lVar5 + 200);
    if (lVar5 != 0) {
      return (System_Collections_Generic_List_string__o *)
             CONCAT71((int7)((ulong)lVar5 >> 8),*(char *)(lVar5 + 0x11) == '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)method_00 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_04,(MethodInfo *)method_00);
    *(undefined1 *)&__this_04->m_Items[0xe].fields.key = 1;
joined_r0x043c78f4:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    __this_05 = (UnityEngine_Behaviour_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_04,MethodInfo_Canvas_GetComponent_Canvas)
    ;
    pSVar19 = __this_04;
    if (__this_05 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_05,1,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
  else {
    bVar6 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_04,(MethodInfo *)method_00);
    if ((char)bVar6 != '\0') goto joined_r0x043c78f4;
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_04,(MethodInfo *)method_00);
    plVar14 = *(long **)&__this_04->m_Items[10].fields;
    pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x288))(plVar14,*(undefined8 *)(*plVar14 + 0x290));
      goto joined_r0x043c78f4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar21 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar22 = (Il2CppMethodPointer)0x0;
  pUVar23 = (UnityEngine_Component_o *)0x0;
  pSVar17 = (System_Collections_Generic_List_object__o *)pSVar19->m_Items[0x13].fields.value;
  if (pSVar17 == (System_Collections_Generic_List_object__o *)0x0) {
label_043c7a44:
    auVar20 = il2cpp_runtime_helper_022b2c90();
    if (auVar20._8_4_ == 1) {
      plVar14 = (long *)__cxa_begin_catch(auVar20._0_8_);
      lVar5 = *plVar14;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar22;
      __this_02.fields._list = pSVar21;
      __this_02.fields._current = (Il2CppObject *)pUVar23;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      bVar16 = 0;
      iVar15 = 0;
      uVar13 = extraout_RAX_02;
      if (lVar5 == 0) goto label_043c7a26;
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_03.fields._8_8_ = pIVar22;
    __this_03.fields._list = pSVar21;
    __this_03.fields._current = (Il2CppObject *)pUVar23;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    _Unwind_Resume(auVar20._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff98,pSVar17,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator)
  ;
  do {
    __this_00.fields._8_8_ = pIVar22;
    __this_00.fields._list = pSVar21;
    __this_00.fields._current = (Il2CppObject *)pUVar23;
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar6 == '\0') {
      iVar15 = 5;
      bVar16 = 0;
      goto label_043c7a14;
    }
    if (pUVar23 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar12 = UnityEngine_Component__get_gameObject(pUVar23,(MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
  } while ((char)bVar6 == '\0');
  bVar16 = 1;
  iVar15 = 4;
label_043c7a14:
  __this_01.fields._8_8_ = pIVar22;
  __this_01.fields._list = pSVar21;
  __this_01.fields._current = (Il2CppObject *)pUVar23;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  uVar13 = extraout_RAX_01;
label_043c7a26:
  return (System_Collections_Generic_List_string__o *)
         CONCAT71((int7)((ulong)uVar13 >> 8),iVar15 == 4 & bVar16);
}


// UI.InGameMenu$$SetupMinimap
// il2cpp: void UI_InGameMenu__SetupMinimap (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c6dc0

void UI_InGameMenu__SetupMinimap(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_GameObject_o **ppUVar2;
  byte bVar3;
  void *pvVar4;
  long lVar5;
  UI_ItemHandler_o *__this_00;
  System_Object_array *pSVar6;
  char *pcVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 *puVar8;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UI_SnapshotPopup_o *pUVar13;
  UnityEngine_Transform_o *__this_05;
  UI_TopLeftHUD_o *__this_06;
  UnityEngine_Behaviour_o *pUVar14;
  System_Collections_Generic_List_object__o *__this_07;
  UnityEngine_GameObject_o *__this_08;
  Il2CppClass *pIVar15;
  Il2CppObject *pIVar16;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
  Il2CppRGCTXData *__this_09;
  long *plVar19;
  Il2CppClass *title;
  uint uVar20;
  MethodInfo_255A0F0 *pMVar21;
  MethodInfo_24E7B40 *key;
  UI_InGameMenu_o *__this_10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar22;
  MethodInfo *pMVar23;
  Il2CppRGCTXData *pIVar24;
  float width;
  float in_XMM1_Da;
  undefined1 auVar25 [12];
  System_Collections_Generic_List_T__o *pSVar26;
  Il2CppMethodPointer pIVar27;
  UnityEngine_Component_o *__this_11;
  
  if (g_data_057ae3f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    il2cpp_runtime_helper_023445d0(&"Minimap/Prefabs/MinimapPanel");
    g_data_057ae3f0 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar11 = UI_ElementFactory__InstantiateAndBind(pUVar10,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields)._minimapPanel;
  (__this->fields)._minimapPanel = pUVar11;
  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar11);
  UI_ElementFactory__SetAnchor
            ((__this->fields)._minimapPanel,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
  pUVar11 = (__this->fields)._minimapPanel;
  __this_10 = (UI_InGameMenu_o *)0x0;
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    pUVar11 = *ppUVar2;
    __this_10 = (UI_InGameMenu_o *)0x0;
    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
      pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      __this_10 = __this;
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Snapshot/SnapshotPopup");
    g_data_057ae3f1 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_10,(MethodInfo *)0x0);
  pUVar12 = (UnityEngine_Transform_o *)
            UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar10,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
  if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
    pUVar13 = (UI_SnapshotPopup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar12,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    (__this_10->fields)._snapshotPopup = pUVar13;
    il2cpp_runtime_helper_022b4080(&(__this_10->fields)._snapshotPopup);
    pUVar10 = pUVar12;
    __this_05 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar12,(MethodInfo *)0x0);
    if (__this_05 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_05,(UnityEngine_Vector3_o)ZEXT812(0x3f4ccccd3f4ccccd),(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                ((UnityEngine_GameObject_o *)pUVar12,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar20 = (uint)pUVar10->klass[1]._1.namespaze;
  pUVar12 = pUVar10;
  (*(code *)pUVar10->klass[1]._1.name)();
  pvVar4 = pUVar10[6].monitor;
  if (pvVar4 != (void *)0x0) {
    if (g_data_057ae3bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetEmoteWheel_b__25_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
      g_data_057ae3bf = '\x01';
    }
    pUVar12 = (UnityEngine_Transform_o *)0x0;
    if (*(long **)((long)pvVar4 + 0x30) != (long *)0x0) {
      lVar5 = **(long **)((long)pvVar4 + 0x30);
      uVar20 = (uint)*(undefined8 *)(lVar5 + 0x2a0);
      (**(code **)(lVar5 + 0x298))();
      *(undefined1 *)((long)pvVar4 + 0x40) = 0;
      __this_00 = (UI_ItemHandler_o *)pUVar10[6].fields.m_CachedPtr;
      pUVar12 = (UnityEngine_Transform_o *)0x0;
      if (__this_00 != (UI_ItemHandler_o *)0x0) {
        UI_ItemHandler__SetItemWheel(__this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    g_data_057ae3e8 = '\x01';
  }
  pUVar11 = pUVar12[9].monitor;
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    pMVar21 = MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD;
    __this_06 = (UI_TopLeftHUD_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    uVar20 = (uint)pMVar21;
    if (__this_06 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_06,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar14 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar11,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar14 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar14,uVar20 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar14 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar11,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar14 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__get_enabled(pUVar14,(MethodInfo *)0x0);
    return;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_07 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
  pIVar17 = title;
  __this_08 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        ((UnityEngine_Transform_o *)__this_07,(System_String_o *)title,width,in_XMM1_Da,0,
                         (MethodInfo *)0x0);
  if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
    pIVar17 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar15 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(__this_08,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar5 = MethodInfo_Void_Add;
    __this_07 = ((UnityEngine_Component_o *)(pUVar11 + 1))->monitor;
    if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_07->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this_07->fields)._items;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar20 = (__this_07->fields)._size;
        pIVar17 = pIVar15;
        if (uVar20 < (uint)pSVar6->max_length) {
          (__this_07->fields)._size = uVar20 + 1;
          pSVar6->m_Items[(int)uVar20] = (Il2CppObject *)pIVar15;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar20);
          pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar11 + 0x18))->fields).m_CachedPtr;
          if (pSVar22 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar22,(Il2CppObject *)key,(Il2CppObject *)pIVar15,MethodInfo_Void_set_Item);
            return;
          }
          __this_07 = (System_Collections_Generic_List_object__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_07,(Il2CppObject *)pIVar15,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar11 + 0x18))->fields).m_CachedPtr;
          __this_07 = (System_Collections_Generic_List_object__o *)0x0;
          if (pSVar22 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar15 = pIVar17;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)__this_07[0xe].fields._syncRoot;
  pIVar16 = (Il2CppObject *)0x0;
  if (pSVar22 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar16 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar22,(Il2CppObject *)pIVar17,MethodInfo_BasePopup_get_Item);
    if (pIVar16 == (Il2CppObject *)0x0) {
      return;
    }
    bVar3 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar3 <= (pIVar16->klass->_2).naturalAligment) &&
       ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar15 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar17 = (Il2CppClass *)0x0;
  if (pIVar16[0x25].klass != (Il2CppClass *)0x0) {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar16[0x25].klass,
                       (Il2CppObject *)pIVar15,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') {
      return;
    }
    pIVar17 = pIVar16[0x25].klass;
    if ((pIVar17 != (Il2CppClass *)0x0) &&
       (pIVar16 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar17,
                             (Il2CppObject *)pIVar15,MethodInfo_BasePopup_get_Item), pIVar16 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar23 = pIVar17->vtable[0x11].method;
  if (pMVar23 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar23,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar23,(MethodInfo *)0x0);
  pIVar16 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar23 + 2)[1].invoker_method = (InvokerMethod)pIVar16;
  il2cpp_runtime_helper_022b4080(&(pMVar23 + 2)[1].invoker_method);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar23,(MethodInfo *)0x0);
  pIVar17 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar23 + 2)[1].klass = pIVar17;
  il2cpp_runtime_helper_022b4080(&(pMVar23 + 2)[1].klass);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar23,(MethodInfo *)0x0);
  pIVar18 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar23 + 2)[1].return_type = pIVar18;
  il2cpp_runtime_helper_022b4080(&(pMVar23 + 2)[1].return_type);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar23,(MethodInfo *)0x0);
  __this_09 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar23 + 3)[1].invoker_method = (InvokerMethod)__this_09;
  il2cpp_runtime_helper_022b4080(&(pMVar23 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar23 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar11 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar23 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_09 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar11,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
    pIVar17 = pMVar23->klass;
    if (pIVar17 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_09 = (Il2CppRGCTXData *)(pMVar23 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar17->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar6 = ((System_Collections_Generic_List_object__Fields *)&(pIVar17->_1).name)->_items;
    if (pSVar6 == (System_Object_array *)0x0) goto label_043c7809;
    uVar20 = *(uint *)&(pIVar17->_1).namespaze;
    if ((uint)pSVar6->max_length <= uVar20) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar17,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pIVar17 = pMVar23->klass;
      if (pIVar17 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar17->_1).namespaze = uVar20 + 1;
    pSVar6->m_Items[(int)uVar20] = (Il2CppObject *)__this_09;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar20);
    pIVar17 = pMVar23->klass;
    if (pIVar17 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar5 = MethodInfo_Void_Add;
    __this_09 = (Il2CppRGCTXData *)(pMVar23 + 2)[1].klass;
    puVar8 = (undefined1 *)((long)&(pIVar17->_1).namespaze + 4);
    *(int *)puVar8 = *(int *)puVar8 + 1;
    pcVar7 = (pIVar17->_1).name;
    if (pcVar7 == (char *)0x0) goto label_043c7809;
    uVar20 = *(uint *)&(pIVar17->_1).namespaze;
    if (*(uint *)(pcVar7 + 0x18) <= uVar20) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar17,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pIVar17 = pMVar23->klass;
      if (pIVar17 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar17->_1).namespaze = uVar20 + 1;
    *(Il2CppRGCTXData **)(pcVar7 + (long)(int)uVar20 * 8 + 0x20) = __this_09;
    il2cpp_runtime_helper_022b4080(pcVar7 + (long)(int)uVar20 * 8 + 0x20);
    pIVar17 = pMVar23->klass;
    if (pIVar17 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar5 = MethodInfo_Void_Add;
    __this_09 = (Il2CppRGCTXData *)(pMVar23 + 2)[1].return_type;
    puVar8 = (undefined1 *)((long)&(pIVar17->_1).namespaze + 4);
    *(int *)puVar8 = *(int *)puVar8 + 1;
    pcVar7 = (pIVar17->_1).name;
    if (pcVar7 == (char *)0x0) goto label_043c7809;
    uVar20 = *(uint *)&(pIVar17->_1).namespaze;
    if (uVar20 < *(uint *)(pcVar7 + 0x18)) {
      *(uint *)&(pIVar17->_1).namespaze = uVar20 + 1;
      *(Il2CppRGCTXData **)(pcVar7 + (long)(int)uVar20 * 8 + 0x20) = __this_09;
      il2cpp_runtime_helper_022b4080(pcVar7 + (long)(int)uVar20 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar17,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    pIVar17 = TypeInfo_InGameManager;
    __this_09 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_09 == (Il2CppRGCTXData *)0x0) {
      pMVar23[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar23[6].field7_0x38);
      pIVar24 = pMVar23[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_09 = (Il2CppRGCTXData *)0x0;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x70), lVar5 != 0)) {
        if (*(char *)(lVar5 + 0x11) == '\0') {
          return;
        }
        bVar9 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar24,(MethodInfo *)__this_09);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (pMVar23[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar23[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar3 <= (__this_09->klass->_2).naturalAligment) &&
       ((__this_09->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      pMVar23[6].field7_0x38.rgctx_data = __this_09;
      if ((bVar3 <= (__this_09->klass->_2).naturalAligment) &&
         ((__this_09->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == pIVar17)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_09 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) && (*(long *)(lVar5 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar5 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar5 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar17 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar17);
    *(undefined1 *)(__this_09 + 0x2f) = 1;
  }
  else {
    bVar9 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar17);
    if ((char)bVar9 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar17);
      pMVar23 = __this_09[0x22].method;
      pIVar24 = (Il2CppRGCTXData *)0x0;
      if (pMVar23 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar23->methodPointer + 0x288))(pMVar23,*(undefined8 *)(pMVar23->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar14 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_09,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar24 = __this_09;
  if (pUVar14 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar14,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar26 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar27 = (Il2CppMethodPointer)0x0;
  __this_11 = (UnityEngine_Component_o *)0x0;
  if (pIVar24[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar25 = il2cpp_runtime_helper_022b2c90();
    if (auVar25._8_4_ == 1) {
      plVar19 = (long *)__cxa_begin_catch(auVar25._0_8_);
      lVar5 = *plVar19;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar27;
      __this_03.fields._list = pSVar26;
      __this_03.fields._current = (Il2CppObject *)__this_11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffed0);
      if (lVar5 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_04.fields._8_8_ = pIVar27;
    __this_04.fields._list = pSVar26;
    __this_04.fields._current = (Il2CppObject *)__this_11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffed0);
    _Unwind_Resume(auVar25._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffed0,
             (System_Collections_Generic_List_object__o *)pIVar24[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar27;
    __this_01.fields._list = pSVar26;
    __this_01.fields._current = (Il2CppObject *)__this_11;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffed0);
    if ((char)bVar9 == '\0') break;
    if (__this_11 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar11 = UnityEngine_Component__get_gameObject(__this_11,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
  } while ((char)bVar9 == '\0');
  __this_02.fields._8_8_ = pIVar27;
  __this_02.fields._list = pSVar26;
  __this_02.fields._current = (Il2CppObject *)__this_11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffed0);
  return;
}


// UI.InGameMenu$$SetupSnapshot
// il2cpp: void UI_InGameMenu__SetupSnapshot (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c6eb0

void UI_InGameMenu__SetupSnapshot(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  void *pvVar3;
  long lVar4;
  UI_ItemHandler_o *__this_00;
  System_Object_array *pSVar5;
  char *pcVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 *puVar7;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UI_SnapshotPopup_o *pUVar11;
  UnityEngine_Transform_o *__this_05;
  UI_TopLeftHUD_o *__this_06;
  UnityEngine_Behaviour_o *pUVar12;
  System_Collections_Generic_List_object__o *__this_07;
  UnityEngine_GameObject_o *__this_08;
  Il2CppClass *pIVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  Il2CppClass *pIVar15;
  Il2CppType *pIVar16;
  Il2CppRGCTXData *__this_09;
  UnityEngine_GameObject_o *pUVar17;
  long *plVar18;
  Il2CppClass *title;
  uint uVar19;
  MethodInfo_255A0F0 *pMVar20;
  MethodInfo_24E7B40 *key;
  System_Collections_Generic_Dictionary_object__object__o *pSVar21;
  MethodInfo *pMVar22;
  Il2CppRGCTXData *pIVar23;
  float width;
  float in_XMM1_Da;
  undefined1 auVar24 [12];
  System_Collections_Generic_List_T__o *pSVar25;
  Il2CppMethodPointer pIVar26;
  UnityEngine_Component_o *__this_10;
  
  if (g_data_057ae3f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Snapshot/SnapshotPopup");
    g_data_057ae3f1 = '\x01';
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_Transform_o *)
            UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar9,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
    pUVar11 = (UI_SnapshotPopup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar10,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    (__this->fields)._snapshotPopup = pUVar11;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._snapshotPopup);
    pUVar9 = pUVar10;
    __this_05 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
    if (__this_05 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_05,(UnityEngine_Vector3_o)ZEXT812(0x3f4ccccd3f4ccccd),(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                ((UnityEngine_GameObject_o *)pUVar10,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar19 = (uint)pUVar9->klass[1]._1.namespaze;
  pUVar10 = pUVar9;
  (*(code *)pUVar9->klass[1]._1.name)();
  pvVar3 = pUVar9[6].monitor;
  if (pvVar3 != (void *)0x0) {
    if (g_data_057ae3bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetEmoteWheel_b__25_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
      g_data_057ae3bf = '\x01';
    }
    pUVar10 = (UnityEngine_Transform_o *)0x0;
    if (*(long **)((long)pvVar3 + 0x30) != (long *)0x0) {
      lVar4 = **(long **)((long)pvVar3 + 0x30);
      uVar19 = (uint)*(undefined8 *)(lVar4 + 0x2a0);
      (**(code **)(lVar4 + 0x298))();
      *(undefined1 *)((long)pvVar3 + 0x40) = 0;
      __this_00 = (UI_ItemHandler_o *)pUVar9[6].fields.m_CachedPtr;
      pUVar10 = (UnityEngine_Transform_o *)0x0;
      if (__this_00 != (UI_ItemHandler_o *)0x0) {
        UI_ItemHandler__SetItemWheel(__this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    g_data_057ae3e8 = '\x01';
  }
  pUVar17 = pUVar10[9].monitor;
  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
    pMVar20 = MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD;
    __this_06 = (UI_TopLeftHUD_o *)UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    uVar19 = (uint)pMVar20;
    if (__this_06 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_06,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar12 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar17,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar12 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar12,uVar19 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar12 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar17,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar12 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__get_enabled(pUVar12,(MethodInfo *)0x0);
    return;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_07 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
  pIVar15 = title;
  __this_08 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        ((UnityEngine_Transform_o *)__this_07,(System_String_o *)title,width,in_XMM1_Da,0,
                         (MethodInfo *)0x0);
  if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
    pIVar15 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar13 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(__this_08,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar4 = MethodInfo_Void_Add;
    __this_07 = ((UnityEngine_Component_o *)(pUVar17 + 1))->monitor;
    if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_07->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_07->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar19 = (__this_07->fields)._size;
        pIVar15 = pIVar13;
        if (uVar19 < (uint)pSVar5->max_length) {
          (__this_07->fields)._size = uVar19 + 1;
          pSVar5->m_Items[(int)uVar19] = (Il2CppObject *)pIVar13;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar19);
          pSVar21 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar17 + 0x18))->fields).m_CachedPtr;
          if (pSVar21 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar21,(Il2CppObject *)key,(Il2CppObject *)pIVar13,MethodInfo_Void_set_Item);
            return;
          }
          __this_07 = (System_Collections_Generic_List_object__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_07,(Il2CppObject *)pIVar13,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          pSVar21 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar17 + 0x18))->fields).m_CachedPtr;
          __this_07 = (System_Collections_Generic_List_object__o *)0x0;
          if (pSVar21 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar15;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar21 = (System_Collections_Generic_Dictionary_object__object__o *)__this_07[0xe].fields._syncRoot;
  pIVar14 = (Il2CppObject *)0x0;
  if (pSVar21 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar21,(Il2CppObject *)pIVar15,MethodInfo_BasePopup_get_Item);
    if (pIVar14 == (Il2CppObject *)0x0) {
      return;
    }
    bVar2 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar2 <= (pIVar14->klass->_2).naturalAligment) &&
       ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar13 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar15 = (Il2CppClass *)0x0;
  if (pIVar14[0x25].klass != (Il2CppClass *)0x0) {
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar14[0x25].klass,
                       (Il2CppObject *)pIVar13,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 == '\0') {
      return;
    }
    pIVar15 = pIVar14[0x25].klass;
    if ((pIVar15 != (Il2CppClass *)0x0) &&
       (pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar15,
                             (Il2CppObject *)pIVar13,MethodInfo_BasePopup_get_Item), pIVar14 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar22 = pIVar15->vtable[0x11].method;
  if (pMVar22 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar22,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar22,(MethodInfo *)0x0);
  pIVar14 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar9,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar22 + 2)[1].invoker_method = (InvokerMethod)pIVar14;
  il2cpp_runtime_helper_022b4080(&(pMVar22 + 2)[1].invoker_method);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar22,(MethodInfo *)0x0);
  pIVar15 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar9,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar22 + 2)[1].klass = pIVar15;
  il2cpp_runtime_helper_022b4080(&(pMVar22 + 2)[1].klass);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar22,(MethodInfo *)0x0);
  pIVar16 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar9,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar22 + 2)[1].return_type = pIVar16;
  il2cpp_runtime_helper_022b4080(&(pMVar22 + 2)[1].return_type);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar22,(MethodInfo *)0x0);
  __this_09 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar9,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar22 + 3)[1].invoker_method = (InvokerMethod)__this_09;
  il2cpp_runtime_helper_022b4080(&(pMVar22 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar22 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar17 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar22 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_09 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar17,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar4 = MethodInfo_Void_Add;
    pIVar15 = pMVar22->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_09 = (Il2CppRGCTXData *)(pMVar22 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar15->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar5 = ((System_Collections_Generic_List_object__Fields *)&(pIVar15->_1).name)->_items;
    if (pSVar5 == (System_Object_array *)0x0) goto label_043c7809;
    uVar19 = *(uint *)&(pIVar15->_1).namespaze;
    if ((uint)pSVar5->max_length <= uVar19) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      pIVar15 = pMVar22->klass;
      if (pIVar15 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar15->_1).namespaze = uVar19 + 1;
    pSVar5->m_Items[(int)uVar19] = (Il2CppObject *)__this_09;
    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar19);
    pIVar15 = pMVar22->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar4 = MethodInfo_Void_Add;
    __this_09 = (Il2CppRGCTXData *)(pMVar22 + 2)[1].klass;
    puVar7 = (undefined1 *)((long)&(pIVar15->_1).namespaze + 4);
    *(int *)puVar7 = *(int *)puVar7 + 1;
    pcVar6 = (pIVar15->_1).name;
    if (pcVar6 == (char *)0x0) goto label_043c7809;
    uVar19 = *(uint *)&(pIVar15->_1).namespaze;
    if (*(uint *)(pcVar6 + 0x18) <= uVar19) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      pIVar15 = pMVar22->klass;
      if (pIVar15 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar15->_1).namespaze = uVar19 + 1;
    *(Il2CppRGCTXData **)(pcVar6 + (long)(int)uVar19 * 8 + 0x20) = __this_09;
    il2cpp_runtime_helper_022b4080(pcVar6 + (long)(int)uVar19 * 8 + 0x20);
    pIVar15 = pMVar22->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar4 = MethodInfo_Void_Add;
    __this_09 = (Il2CppRGCTXData *)(pMVar22 + 2)[1].return_type;
    puVar7 = (undefined1 *)((long)&(pIVar15->_1).namespaze + 4);
    *(int *)puVar7 = *(int *)puVar7 + 1;
    pcVar6 = (pIVar15->_1).name;
    if (pcVar6 == (char *)0x0) goto label_043c7809;
    uVar19 = *(uint *)&(pIVar15->_1).namespaze;
    if (uVar19 < *(uint *)(pcVar6 + 0x18)) {
      *(uint *)&(pIVar15->_1).namespaze = uVar19 + 1;
      *(Il2CppRGCTXData **)(pcVar6 + (long)(int)uVar19 * 8 + 0x20) = __this_09;
      il2cpp_runtime_helper_022b4080(pcVar6 + (long)(int)uVar19 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_09,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    pIVar15 = TypeInfo_InGameManager;
    __this_09 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_09 == (Il2CppRGCTXData *)0x0) {
      pMVar22[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar22[6].field7_0x38);
      pIVar23 = pMVar22[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_09 = (Il2CppRGCTXData *)0x0;
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x70), lVar4 != 0)) {
        if (*(char *)(lVar4 + 0x11) == '\0') {
          return;
        }
        bVar8 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar23,(MethodInfo *)__this_09);
        if ((char)bVar8 == '\0') {
          return;
        }
        if (pMVar22[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar22[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= (__this_09->klass->_2).naturalAligment) &&
       ((__this_09->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      pMVar22[6].field7_0x38.rgctx_data = __this_09;
      if ((bVar2 <= (__this_09->klass->_2).naturalAligment) &&
         ((__this_09->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar15)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_09 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x58), lVar4 != 0)) && (*(long *)(lVar4 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar4 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar4 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar15 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar15);
    *(undefined1 *)(__this_09 + 0x2f) = 1;
  }
  else {
    bVar8 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar15);
    if ((char)bVar8 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_09,(MethodInfo *)pIVar15);
      pMVar22 = __this_09[0x22].method;
      pIVar23 = (Il2CppRGCTXData *)0x0;
      if (pMVar22 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar22->methodPointer + 0x288))(pMVar22,*(undefined8 *)(pMVar22->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar12 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_09,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar23 = __this_09;
  if (pUVar12 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar12,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar25 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar26 = (Il2CppMethodPointer)0x0;
  __this_10 = (UnityEngine_Component_o *)0x0;
  if (pIVar23[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar24 = il2cpp_runtime_helper_022b2c90();
    if (auVar24._8_4_ == 1) {
      plVar18 = (long *)__cxa_begin_catch(auVar24._0_8_);
      lVar4 = *plVar18;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar26;
      __this_03.fields._list = pSVar25;
      __this_03.fields._current = (Il2CppObject *)__this_10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
      if (lVar4 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar4);
    }
    __this_04.fields._8_8_ = pIVar26;
    __this_04.fields._list = pSVar25;
    __this_04.fields._current = (Il2CppObject *)__this_10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
    _Unwind_Resume(auVar24._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffee8,
             (System_Collections_Generic_List_object__o *)pIVar23[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar26;
    __this_01.fields._list = pSVar25;
    __this_01.fields._current = (Il2CppObject *)__this_10;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee8);
    if ((char)bVar8 == '\0') break;
    if (__this_10 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar17 = UnityEngine_Component__get_gameObject(__this_10,(MethodInfo *)0x0);
    if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
  } while ((char)bVar8 == '\0');
  __this_02.fields._8_8_ = pIVar26;
  __this_02.fields._list = pSVar25;
  __this_02.fields._current = (Il2CppObject *)__this_10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee8);
  return;
}


// UI.InGameMenu$$SetupChat
// il2cpp: void UI_InGameMenu__SetupChat (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c6ad0

void UI_InGameMenu__SetupChat(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_GameObject_o **ppUVar2;
  byte bVar3;
  long lVar4;
  UnityEngine_UI_Text_o *__this_00;
  void *pvVar5;
  UI_ItemHandler_o *__this_01;
  System_Object_array *pSVar6;
  char *pcVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  undefined1 *puVar8;
  bool_conflict bVar9;
  UnityEngine_GameObject_o *pUVar10;
  UI_FeedPanel_o *pUVar11;
  long lVar12;
  UI_VoiceChatPanel_o *pUVar13;
  UI_ChatPanel_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  UI_SnapshotPopup_o *pUVar17;
  UnityEngine_Transform_o *__this_06;
  UI_TopLeftHUD_o *__this_07;
  UnityEngine_Behaviour_o *pUVar18;
  System_Collections_Generic_List_object__o *__this_08;
  UnityEngine_GameObject_o *__this_09;
  Il2CppClass *pIVar19;
  Il2CppObject *pIVar20;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  Il2CppClass *pIVar21;
  Il2CppType *pIVar22;
  Il2CppRGCTXData *__this_10;
  long *plVar23;
  Il2CppClass *title;
  uint uVar24;
  MethodInfo_255A0F0 *pMVar25;
  MethodInfo_24E7B40 *key;
  UI_InGameMenu_o *parent;
  UI_InGameMenu_o *__this_11;
  System_Collections_Generic_Dictionary_object__object__o *pSVar26;
  MethodInfo *pMVar27;
  Il2CppRGCTXData *pIVar28;
  float width;
  float in_XMM1_Da;
  undefined1 auVar29 [12];
  System_Collections_Generic_List_T__o *pSVar30;
  Il2CppMethodPointer pIVar31;
  UnityEngine_Component_o *__this_12;
  
  parent = __this;
  if (g_data_057ae3f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChatPanel_GetComponent_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FeedPanel_GetComponent_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/VoiceChatPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/ChatPanel");
    parent = (UI_InGameMenu_o *)&"Prefabs/InGame/FeedPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f2 = '\x01';
  }
  lVar12 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  lVar4 = *(long *)(lVar12 + 0x28);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x30) != 0)) {
    if (*(char *)(*(long *)(lVar4 + 0x30) + 0x11) == '\0') {
label_043c6c6c:
      if ((*(long *)(lVar12 + 0x80) != 0) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x80) + 0xb0), lVar12 != 0)) {
        if (*(int *)(lVar12 + 0x14) == 2) {
label_043c6d24:
          parent = (UI_InGameMenu_o *)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/ChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            pUVar14 = (UI_ChatPanel_o *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_ChatPanel_GetComponent_ChatPanel);
            (__this->fields).ChatPanel = pUVar14;
            il2cpp_runtime_helper_022b4080(&(__this->fields).ChatPanel);
            pUVar14 = (__this->fields).ChatPanel;
            parent = (UI_InGameMenu_o *)0x0;
            if (pUVar14 != (UI_ChatPanel_o *)0x0) {
              pUVar10 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar10,6,6,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          parent = (UI_InGameMenu_o *)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/VoiceChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            pUVar13 = (UI_VoiceChatPanel_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
            (__this->fields).VoiceChatPanel = pUVar13;
            il2cpp_runtime_helper_022b4080(&(__this->fields).VoiceChatPanel);
            pUVar13 = (__this->fields).VoiceChatPanel;
            parent = (UI_InGameMenu_o *)0x0;
            if (pUVar13 != (UI_VoiceChatPanel_o *)0x0) {
              pUVar10 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar10,3,3,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              goto label_043c6d24;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar4 + 0x28) != 0) {
      if (*(char *)(*(long *)(lVar4 + 0x28) + 0x11) == '\0') goto label_043c6c6c;
      __this_00 = (__this->fields)._bottomRightLabel;
      parent = (UI_InGameMenu_o *)0x0;
      if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
        parent = (UI_InGameMenu_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        pUVar10 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                            ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/FeedPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
          pUVar11 = (UI_FeedPanel_o *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_FeedPanel_GetComponent_FeedPanel);
          (__this->fields).FeedPanel = pUVar11;
          il2cpp_runtime_helper_022b4080(&(__this->fields).FeedPanel);
          pUVar11 = (__this->fields).FeedPanel;
          parent = (UI_InGameMenu_o *)0x0;
          if (pUVar11 != (UI_FeedPanel_o *)0x0) {
            parent = (UI_InGameMenu_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      ((UnityEngine_GameObject_o *)parent,2,2,(UnityEngine_Vector2_o)0xc248000000000000,
                       (MethodInfo *)0x0);
            lVar12 = *(long *)(TypeInfo_SettingsManager + 0xb8);
            goto label_043c6c6c;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    il2cpp_runtime_helper_023445d0(&"Minimap/Prefabs/MinimapPanel");
    g_data_057ae3f0 = '\x01';
  }
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
  pUVar10 = UI_ElementFactory__InstantiateAndBind(pUVar15,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
  ppUVar2 = &(parent->fields)._minimapPanel;
  (parent->fields)._minimapPanel = pUVar10;
  il2cpp_runtime_helper_022b4080(ppUVar2,pUVar10);
  UI_ElementFactory__SetAnchor
            ((parent->fields)._minimapPanel,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
  pUVar10 = (parent->fields)._minimapPanel;
  __this_11 = (UI_InGameMenu_o *)0x0;
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    pUVar10 = *ppUVar2;
    __this_11 = (UI_InGameMenu_o *)0x0;
    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
      __this_11 = parent;
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Snapshot/SnapshotPopup");
    g_data_057ae3f1 = '\x01';
  }
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_11,(MethodInfo *)0x0);
  pUVar16 = (UnityEngine_Transform_o *)
            UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar15,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
  if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
    pUVar17 = (UI_SnapshotPopup_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar16,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    (__this_11->fields)._snapshotPopup = pUVar17;
    il2cpp_runtime_helper_022b4080(&(__this_11->fields)._snapshotPopup);
    pUVar15 = pUVar16;
    __this_06 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar16,(MethodInfo *)0x0);
    if (__this_06 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_06,(UnityEngine_Vector3_o)ZEXT812(0x3f4ccccd3f4ccccd),(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                ((UnityEngine_GameObject_o *)pUVar16,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar24 = (uint)pUVar15->klass[1]._1.namespaze;
  pUVar16 = pUVar15;
  (*(code *)pUVar15->klass[1]._1.name)();
  pvVar5 = pUVar15[6].monitor;
  if (pvVar5 != (void *)0x0) {
    if (g_data_057ae3bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetEmoteWheel_b__25_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
      g_data_057ae3bf = '\x01';
    }
    pUVar16 = (UnityEngine_Transform_o *)0x0;
    if (*(long **)((long)pvVar5 + 0x30) != (long *)0x0) {
      lVar12 = **(long **)((long)pvVar5 + 0x30);
      uVar24 = (uint)*(undefined8 *)(lVar12 + 0x2a0);
      (**(code **)(lVar12 + 0x298))();
      *(undefined1 *)((long)pvVar5 + 0x40) = 0;
      __this_01 = (UI_ItemHandler_o *)pUVar15[6].fields.m_CachedPtr;
      pUVar16 = (UnityEngine_Transform_o *)0x0;
      if (__this_01 != (UI_ItemHandler_o *)0x0) {
        UI_ItemHandler__SetItemWheel(__this_01,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    g_data_057ae3e8 = '\x01';
  }
  pUVar10 = pUVar16[9].monitor;
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pMVar25 = MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD;
    __this_07 = (UI_TopLeftHUD_o *)UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    uVar24 = (uint)pMVar25;
    if (__this_07 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_07,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar18 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar18 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar18,uVar24 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar18 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar18 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__get_enabled(pUVar18,(MethodInfo *)0x0);
    return;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_08 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
  pIVar21 = title;
  __this_09 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        ((UnityEngine_Transform_o *)__this_08,(System_String_o *)title,width,in_XMM1_Da,0,
                         (MethodInfo *)0x0);
  if (__this_09 != (UnityEngine_GameObject_o *)0x0) {
    pIVar21 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar19 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(__this_09,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar12 = MethodInfo_Void_Add;
    __this_08 = ((UnityEngine_Component_o *)(pUVar10 + 1))->monitor;
    if (__this_08 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_08->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this_08->fields)._items;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar24 = (__this_08->fields)._size;
        pIVar21 = pIVar19;
        if (uVar24 < (uint)pSVar6->max_length) {
          (__this_08->fields)._size = uVar24 + 1;
          pSVar6->m_Items[(int)uVar24] = (Il2CppObject *)pIVar19;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar24);
          pSVar26 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar10 + 0x18))->fields).m_CachedPtr;
          if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar26,(Il2CppObject *)key,(Il2CppObject *)pIVar19,MethodInfo_Void_set_Item);
            return;
          }
          __this_08 = (System_Collections_Generic_List_object__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_08,(Il2CppObject *)pIVar19,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          pSVar26 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar10 + 0x18))->fields).m_CachedPtr;
          __this_08 = (System_Collections_Generic_List_object__o *)0x0;
          if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar19 = pIVar21;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar26 = (System_Collections_Generic_Dictionary_object__object__o *)__this_08[0xe].fields._syncRoot;
  pIVar20 = (Il2CppObject *)0x0;
  if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar20 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar26,(Il2CppObject *)pIVar21,MethodInfo_BasePopup_get_Item);
    if (pIVar20 == (Il2CppObject *)0x0) {
      return;
    }
    bVar3 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar3 <= (pIVar20->klass->_2).naturalAligment) &&
       ((pIVar20->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar19 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar21 = (Il2CppClass *)0x0;
  if (pIVar20[0x25].klass != (Il2CppClass *)0x0) {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar20[0x25].klass,
                       (Il2CppObject *)pIVar19,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') {
      return;
    }
    pIVar21 = pIVar20[0x25].klass;
    if ((pIVar21 != (Il2CppClass *)0x0) &&
       (pIVar20 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar21,
                             (Il2CppObject *)pIVar19,MethodInfo_BasePopup_get_Item), pIVar20 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar27 = pIVar21->vtable[0x11].method;
  if (pMVar27 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar27,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar27,(MethodInfo *)0x0);
  pIVar20 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar27 + 2)[1].invoker_method = (InvokerMethod)pIVar20;
  il2cpp_runtime_helper_022b4080(&(pMVar27 + 2)[1].invoker_method);
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar27,(MethodInfo *)0x0);
  pIVar21 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar27 + 2)[1].klass = pIVar21;
  il2cpp_runtime_helper_022b4080(&(pMVar27 + 2)[1].klass);
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar27,(MethodInfo *)0x0);
  pIVar22 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar27 + 2)[1].return_type = pIVar22;
  il2cpp_runtime_helper_022b4080(&(pMVar27 + 2)[1].return_type);
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar27,(MethodInfo *)0x0);
  __this_10 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar27 + 3)[1].invoker_method = (InvokerMethod)__this_10;
  il2cpp_runtime_helper_022b4080(&(pMVar27 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar27 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar21 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar10 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar27 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_10 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar10,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar12 = MethodInfo_Void_Add;
    pIVar21 = pMVar27->klass;
    if (pIVar21 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_10 = (Il2CppRGCTXData *)(pMVar27 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar21->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar6 = ((System_Collections_Generic_List_object__Fields *)&(pIVar21->_1).name)->_items;
    if (pSVar6 == (System_Object_array *)0x0) goto label_043c7809;
    uVar24 = *(uint *)&(pIVar21->_1).namespaze;
    if ((uint)pSVar6->max_length <= uVar24) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar21,(Il2CppObject *)__this_10,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      pIVar21 = pMVar27->klass;
      if (pIVar21 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar21->_1).namespaze = uVar24 + 1;
    pSVar6->m_Items[(int)uVar24] = (Il2CppObject *)__this_10;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar24);
    pIVar21 = pMVar27->klass;
    if (pIVar21 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar12 = MethodInfo_Void_Add;
    __this_10 = (Il2CppRGCTXData *)(pMVar27 + 2)[1].klass;
    puVar8 = (undefined1 *)((long)&(pIVar21->_1).namespaze + 4);
    *(int *)puVar8 = *(int *)puVar8 + 1;
    pcVar7 = (pIVar21->_1).name;
    if (pcVar7 == (char *)0x0) goto label_043c7809;
    uVar24 = *(uint *)&(pIVar21->_1).namespaze;
    if (*(uint *)(pcVar7 + 0x18) <= uVar24) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar21,(Il2CppObject *)__this_10,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      pIVar21 = pMVar27->klass;
      if (pIVar21 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar21->_1).namespaze = uVar24 + 1;
    *(Il2CppRGCTXData **)(pcVar7 + (long)(int)uVar24 * 8 + 0x20) = __this_10;
    il2cpp_runtime_helper_022b4080(pcVar7 + (long)(int)uVar24 * 8 + 0x20);
    pIVar21 = pMVar27->klass;
    if (pIVar21 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar12 = MethodInfo_Void_Add;
    __this_10 = (Il2CppRGCTXData *)(pMVar27 + 2)[1].return_type;
    puVar8 = (undefined1 *)((long)&(pIVar21->_1).namespaze + 4);
    *(int *)puVar8 = *(int *)puVar8 + 1;
    pcVar7 = (pIVar21->_1).name;
    if (pcVar7 == (char *)0x0) goto label_043c7809;
    uVar24 = *(uint *)&(pIVar21->_1).namespaze;
    if (uVar24 < *(uint *)(pcVar7 + 0x18)) {
      *(uint *)&(pIVar21->_1).namespaze = uVar24 + 1;
      *(Il2CppRGCTXData **)(pcVar7 + (long)(int)uVar24 * 8 + 0x20) = __this_10;
      il2cpp_runtime_helper_022b4080(pcVar7 + (long)(int)uVar24 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar21,(Il2CppObject *)__this_10,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    pIVar21 = TypeInfo_InGameManager;
    __this_10 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_10 == (Il2CppRGCTXData *)0x0) {
      pMVar27[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar27[6].field7_0x38);
      pIVar28 = pMVar27[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_10 = (Il2CppRGCTXData *)0x0;
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x70), lVar12 != 0)) {
        if (*(char *)(lVar12 + 0x11) == '\0') {
          return;
        }
        bVar9 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar28,(MethodInfo *)__this_10);
        if ((char)bVar9 == '\0') {
          return;
        }
        if (pMVar27[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar27[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar3 <= (__this_10->klass->_2).naturalAligment) &&
       ((__this_10->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      pMVar27[6].field7_0x38.rgctx_data = __this_10;
      if ((bVar3 <= (__this_10->klass->_2).naturalAligment) &&
         ((__this_10->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == pIVar21)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_10 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x58), lVar12 != 0)) && (*(long *)(lVar12 + 0xc0) != 0))
  {
    if (*(char *)(*(long *)(lVar12 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar12 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar21 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_10,(MethodInfo *)pIVar21);
    *(undefined1 *)(__this_10 + 0x2f) = 1;
  }
  else {
    bVar9 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_10,(MethodInfo *)pIVar21);
    if ((char)bVar9 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_10,(MethodInfo *)pIVar21);
      pMVar27 = __this_10[0x22].method;
      pIVar28 = (Il2CppRGCTXData *)0x0;
      if (pMVar27 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar27->methodPointer + 0x288))(pMVar27,*(undefined8 *)(pMVar27->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar18 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_10,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar28 = __this_10;
  if (pUVar18 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar18,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar30 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar31 = (Il2CppMethodPointer)0x0;
  __this_12 = (UnityEngine_Component_o *)0x0;
  if (pIVar28[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar29 = il2cpp_runtime_helper_022b2c90();
    if (auVar29._8_4_ == 1) {
      plVar23 = (long *)__cxa_begin_catch(auVar29._0_8_);
      lVar12 = *plVar23;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar31;
      __this_04.fields._list = pSVar30;
      __this_04.fields._current = (Il2CppObject *)__this_12;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffeb8);
      if (lVar12 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar12);
    }
    __this_05.fields._8_8_ = pIVar31;
    __this_05.fields._list = pSVar30;
    __this_05.fields._current = (Il2CppObject *)__this_12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffeb8);
    _Unwind_Resume(auVar29._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffeb8,
             (System_Collections_Generic_List_object__o *)pIVar28[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_02.fields._8_8_ = pIVar31;
    __this_02.fields._list = pSVar30;
    __this_02.fields._current = (Il2CppObject *)__this_12;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffeb8);
    if ((char)bVar9 == '\0') break;
    if (__this_12 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar10 = UnityEngine_Component__get_gameObject(__this_12,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
  } while ((char)bVar9 == '\0');
  __this_03.fields._8_8_ = pIVar31;
  __this_03.fields._list = pSVar30;
  __this_03.fields._current = (Il2CppObject *)__this_12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffeb8);
  return;
}


// UI.InGameMenu$$SetupLabels
// il2cpp: void UI_InGameMenu__SetupLabels (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c62a0

void UI_InGameMenu__SetupLabels(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_KillScorePopup_o **ppUVar2;
  UI_KillFeedBigPopup_o **ppUVar3;
  float *pfVar4;
  byte bVar5;
  System_Object_array *pSVar6;
  long lVar7;
  void *pvVar8;
  UI_ItemHandler_o *__this_00;
  char *pcVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 *puVar10;
  bool_conflict bVar11;
  UI_ElementStyle_o *__this_05;
  UI_KillFeedBigPopup_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_UI_Text_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UI_KillScorePopup_o *pUVar16;
  UI_KillFeedBigPopup_o *pUVar17;
  PatreonEffects_NameEffectApplier_o *pPVar18;
  long lVar19;
  UnityEngine_UI_RawImage_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar22;
  UnityEngine_Transform_o *__this_06;
  UI_TopLeftHUD_o *__this_07;
  UnityEngine_Behaviour_o *pUVar23;
  System_Collections_Generic_List_object__o *__this_08;
  UnityEngine_GameObject_o *__this_09;
  Il2CppClass *pIVar24;
  Il2CppObject *pIVar25;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  Il2CppClass *pIVar26;
  Il2CppType *pIVar27;
  Il2CppRGCTXData *__this_10;
  long *plVar28;
  Il2CppClass *title;
  int iVar29;
  uint uVar30;
  MethodInfo_255A0F0 *pMVar31;
  MethodInfo_24E7B40 *key;
  System_Collections_Generic_Dictionary_object__object__o *pSVar32;
  MethodInfo *pMVar33;
  Il2CppRGCTXData *pIVar34;
  int iVar35;
  float width;
  float height;
  undefined1 auVar36 [12];
  System_Collections_Generic_List_T__o *pSVar37;
  Il2CppMethodPointer pIVar38;
  UnityEngine_Component_o *__this_11;
  
  if (g_data_057ae3f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSmallPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae3f3 = '\x01';
  }
  __this_05 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  height = 20.0;
  UI_ElementStyle___ctor(__this_05,0x16,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pUVar12 = (UI_KillFeedBigPopup_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar13 = UI_ElementFactory__CreateHUDLabel
                      ((UnityEngine_Transform_o *)pUVar12,__this_05,"",0,4,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
    pUVar14 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._topCenterLabel = pUVar14;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._topCenterLabel);
    pUVar14 = (__this->fields)._topCenterLabel;
    pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
    if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar13,1,1,(UnityEngine_Vector2_o)0xc120000000000000,(MethodInfo *)0x0);
      pUVar13 = (__this->fields).KDRReference;
      pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
      if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
        pUVar12 = (UI_KillFeedBigPopup_o *)UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
        pUVar13 = UI_ElementFactory__CreateHUDLabel
                            ((UnityEngine_Transform_o *)pUVar12,__this_05,"",0,3,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
          pUVar14 = (UnityEngine_UI_Text_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
          (__this->fields)._topLeftLabel = pUVar14;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._topLeftLabel);
          pUVar14 = (__this->fields)._topLeftLabel;
          pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
          if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar13,0,0,(UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
            pUVar12 = (UI_KillFeedBigPopup_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pUVar13 = UI_ElementFactory__CreateHUDLabel
                                ((UnityEngine_Transform_o *)pUVar12,__this_05,"",0,5,
                                 (MethodInfo *)0x0);
            if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
              pUVar14 = (UnityEngine_UI_Text_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
              (__this->fields)._topRightLabel = pUVar14;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._topRightLabel);
              pUVar14 = (__this->fields)._topRightLabel;
              pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
              if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
                pUVar13 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar13,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
                pUVar12 = (UI_KillFeedBigPopup_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                pUVar13 = UI_ElementFactory__CreateHUDLabel
                                    ((UnityEngine_Transform_o *)pUVar12,__this_05,"",0,4,
                                     (MethodInfo *)0x0);
                if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar14 = (UnityEngine_UI_Text_o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
                  (__this->fields)._middleCenterLabel = pUVar14;
                  il2cpp_runtime_helper_022b4080(&(__this->fields)._middleCenterLabel);
                  pUVar14 = (__this->fields)._middleCenterLabel;
                  pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
                  if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
                    pUVar13 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
                    UI_ElementFactory__SetAnchor
                              (pUVar13,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
                    pUVar12 = (UI_KillFeedBigPopup_o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar13 = UI_ElementFactory__CreateHUDLabel
                                        ((UnityEngine_Transform_o *)pUVar12,__this_05,"",0,4,
                                         (MethodInfo *)0x0);
                    if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar14 = (UnityEngine_UI_Text_o *)
                                UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
                      (__this->fields)._middleRightLabel = pUVar14;
                      il2cpp_runtime_helper_022b4080(&(__this->fields)._middleRightLabel);
                      pUVar14 = (__this->fields)._middleRightLabel;
                      pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
                      if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
                        pUVar13 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
                        UI_ElementFactory__SetAnchor
                                  (pUVar13,5,5,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
                        pUVar12 = (UI_KillFeedBigPopup_o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        pUVar13 = UI_ElementFactory__CreateHUDLabel
                                            ((UnityEngine_Transform_o *)pUVar12,__this_05,"",0,4,
                                             (MethodInfo *)0x0);
                        if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar14 = (UnityEngine_UI_Text_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
                          (__this->fields)._middleLeftLabel = pUVar14;
                          il2cpp_runtime_helper_022b4080(&(__this->fields)._middleLeftLabel);
                          pUVar14 = (__this->fields)._middleLeftLabel;
                          pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
                          if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
                            pUVar13 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
                            UI_ElementFactory__SetAnchor
                                      (pUVar13,3,3,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
                            pUVar12 = (UI_KillFeedBigPopup_o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                            pUVar13 = UI_ElementFactory__CreateHUDLabel
                                                ((UnityEngine_Transform_o *)pUVar12,__this_05,"",0,4
                                                 ,(MethodInfo *)0x0);
                            if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar14 = (UnityEngine_UI_Text_o *)
                                        UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
                              (__this->fields)._bottomCenterLabel = pUVar14;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._bottomCenterLabel);
                              pUVar14 = (__this->fields)._bottomCenterLabel;
                              pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
                              if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
                                pUVar13 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar13,7,7,(UnityEngine_Vector2_o)0x4120000000000000,
                                           (MethodInfo *)0x0);
                                pUVar12 = (UI_KillFeedBigPopup_o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                pUVar13 = UI_ElementFactory__CreateHUDLabel
                                                    ((UnityEngine_Transform_o *)pUVar12,__this_05,""
                                                     ,0,3,(MethodInfo *)0x0);
                                if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar14 = (UnityEngine_UI_Text_o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text)
                                  ;
                                  (__this->fields)._bottomLeftLabel = pUVar14;
                                  il2cpp_runtime_helper_022b4080(&(__this->fields)._bottomLeftLabel);
                                  pUVar14 = (__this->fields)._bottomLeftLabel;
                                  pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
                                  if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
                                    pUVar13 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0)
                                    ;
                                    UI_ElementFactory__SetAnchor
                                              (pUVar13,6,6,(UnityEngine_Vector2_o)0x4120000041200000,
                                               (MethodInfo *)0x0);
                                    pUVar12 = (UI_KillFeedBigPopup_o *)
                                              UnityEngine_Component__get_transform
                                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                    pUVar13 = UI_ElementFactory__CreateHUDLabel
                                                        ((UnityEngine_Transform_o *)pUVar12,__this_05,
                                                         "",0,5,(MethodInfo *)0x0);
                                    if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar14 = (UnityEngine_UI_Text_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar13,MethodInfo_Text_GetComponent_Text);
                                      (__this->fields)._bottomRightLabel = pUVar14;
                                      il2cpp_runtime_helper_022b4080(&(__this->fields)._bottomRightLabel);
                                      pUVar14 = (__this->fields)._bottomRightLabel;
                                      pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
                                      if (pUVar14 != (UnityEngine_UI_Text_o *)0x0) {
                                        pUVar13 = UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)pUVar14,
                                                             (MethodInfo *)0x0);
                                        UI_ElementFactory__SetAnchor
                                                  (pUVar13,8,8,(UnityEngine_Vector2_o)0x41200000c1200000,
                                                   (MethodInfo *)0x0);
                                        pUVar15 = UnityEngine_Component__get_transform
                                                            ((UnityEngine_Component_o *)__this,
                                                             (MethodInfo *)0x0);
                                        pUVar16 = (UI_KillScorePopup_o *)
                                                  UI_ElementFactory__CreateDefaultPopup_object_
                                                            (pUVar15,0,MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
                                        ppUVar2 = &(__this->fields)._killScorePopup;
                                        (__this->fields)._killScorePopup = pUVar16;
                                        il2cpp_runtime_helper_022b4080(ppUVar2);
                                        pUVar12 = (UI_KillFeedBigPopup_o *)(__this->fields)._killScorePopup;
                                        if ((pUVar12 != (UI_KillFeedBigPopup_o *)0x0) &&
                                           (pUVar13 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pUVar12,
                                                                 (MethodInfo *)0x0),
                                           pUVar13 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__AddComponent_object_(pUVar13,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
                                          pUVar16 = *ppUVar2;
                                          pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
                                          if (pUVar16 != (UI_KillScorePopup_o *)0x0) {
                                            pUVar13 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pUVar16,
                                                                 (MethodInfo *)0x0);
                                            UI_ElementFactory__SetAnchor
                                                      (pUVar13,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,
                                                       (MethodInfo *)0x0);
                                            pUVar15 = UnityEngine_Component__get_transform
                                                                ((UnityEngine_Component_o *)__this,
                                                                 (MethodInfo *)0x0);
                                            pUVar12 = (UI_KillFeedBigPopup_o *)
                                                      UI_ElementFactory__CreateDefaultPopup_object_
                                                                (pUVar15,0,MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigPopup);
                                            ppUVar3 = &(__this->fields)._killFeedBigPopup;
                                            (__this->fields)._killFeedBigPopup = pUVar12;
                                            il2cpp_runtime_helper_022b4080(ppUVar3);
                                            pUVar12 = (__this->fields)._killFeedBigPopup;
                                            if ((pUVar12 != (UI_KillFeedBigPopup_o *)0x0) &&
                                               (pUVar13 = UnityEngine_Component__get_gameObject
                                                                    ((UnityEngine_Component_o *)pUVar12,
                                                                     (MethodInfo *)0x0),
                                               pUVar13 != (UnityEngine_GameObject_o *)0x0)) {
                                              UnityEngine_GameObject__AddComponent_object_
                                                        (pUVar13,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                              pUVar17 = *ppUVar3;
                                              pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
                                              if (pUVar17 != (UI_KillFeedBigPopup_o *)0x0) {
                                                pUVar12 = (UI_KillFeedBigPopup_o *)
                                                          UnityEngine_Component__get_gameObject
                                                                    ((UnityEngine_Component_o *)pUVar17,
                                                                     (MethodInfo *)0x0);
                                                UI_ElementFactory__SetAnchor
                                                          ((UnityEngine_GameObject_o *)pUVar12,1,4,
                                                           (UnityEngine_Vector2_o)0xc2f0000000000000,
                                                           (MethodInfo *)0x0);
                                                lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                                if ((lVar19 != 0) &&
                                                   (lVar19 = *(long *)(lVar19 + 0x160), lVar19 != 0)) {
                                                  iVar35 = *(int *)(lVar19 + 0x14) + -1;
                                                  if (0 < iVar35) {
                                                    iVar29 = 0;
                                                    do {
                                                      while( true ) {
                                                        pUVar12 = (UI_KillFeedBigPopup_o *)
                                                                  UnityEngine_Component__get_transform
                                                                            ((UnityEngine_Component_o *)__this
                                                                             ,(MethodInfo *)0x0);
                                                        pUVar17 = (UI_KillFeedBigPopup_o *)
                                                                                                                                    
                                                       UI_ElementFactory__CreateDefaultPopup_object_
                                                                 ((UnityEngine_Transform_o *)pUVar12,0,
                                                                  MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSmallPopup);
                                                       if ((pUVar17 == (UI_KillFeedBigPopup_o *)0x0) ||
                                                          (pUVar12 = pUVar17,
                                                          pUVar13 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pUVar17,(MethodInfo *)0x0),
                                                          pUVar13 == (UnityEngine_GameObject_o *)0x0))
                                                       goto label_043c6ac6;
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar13,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                                       pUVar13 = UnityEngine_Component__get_gameObject
                                                                           ((UnityEngine_Component_o *)pUVar17
                                                                            ,(MethodInfo *)0x0);
                                                       height = 0.0;
                                                       UI_ElementFactory__SetAnchor
                                                                 (pUVar13,1,4,
                                                                  (UnityEngine_Vector2_o)
                                                                  ((ulong)(uint)((float)iVar29 * -35.0 +
                                                                                -162.0) << 0x20),
                                                                  (MethodInfo *)0x0);
                                                       lVar19 = MethodInfo_Void_Add;
                                                       pUVar12 = (UI_KillFeedBigPopup_o *)
                                                                 (__this->fields)._killFeedSmallPopups;
                                                       if (pUVar12 == (UI_KillFeedBigPopup_o *)0x0)
                                                       goto label_043c6ac6;
                                                       piVar1 = (int32_t *)
                                                                ((long)&(pUVar12->fields).
                                                                        m_CancellationTokenSource + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar6 = (System_Object_array *)
                                                                (pUVar12->fields).m_CachedPtr;
                                                       if (pSVar6 == (System_Object_array *)0x0)
                                                       goto label_043c6ac6;
                                                       uVar30 = *(uint *)&(pUVar12->fields).
                                                                          m_CancellationTokenSource;
                                                       if ((uint)pSVar6->max_length <= uVar30) break;
                                                       *(uint *)&(pUVar12->fields).m_CancellationTokenSource =
                                                            uVar30 + 1;
                                                       pSVar6->m_Items[(int)uVar30] = (Il2CppObject *)pUVar17;
                                                       il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar30);
                                                       iVar29 = iVar29 + 1;
                                                       if (iVar35 == iVar29) {
                                                         return;
                                                       }
                                                      }
                                                      System_Collections_Generic_List_object___AddWithResize
                                                                ((System_Collections_Generic_List_object__o *)
                                                                 pUVar12,(Il2CppObject *)pUVar17,
                                                                 *(MethodInfo_362C220 **)
                                                                  (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0)
                                                                  + 0x70));
                                                      iVar29 = iVar29 + 1;
                                                    } while (iVar35 != iVar29);
                                                  }
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
label_043c6ac6:
  il2cpp_runtime_helper_022b2c90();
  pUVar17 = pUVar12;
  if (g_data_057ae3f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChatPanel_GetComponent_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FeedPanel_GetComponent_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/VoiceChatPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/ChatPanel");
    pUVar17 = (UI_KillFeedBigPopup_o *)&"Prefabs/InGame/FeedPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f2 = '\x01';
  }
  lVar19 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  lVar7 = *(long *)(lVar19 + 0x28);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) {
    if (*(char *)(*(long *)(lVar7 + 0x30) + 0x11) == '\0') {
label_043c6c6c:
      if ((*(long *)(lVar19 + 0x80) != 0) &&
         (lVar19 = *(long *)(*(long *)(lVar19 + 0x80) + 0xb0), lVar19 != 0)) {
        if (*(int *)(lVar19 + 0x14) == 2) {
label_043c6d24:
          pUVar17 = (UI_KillFeedBigPopup_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0)
          ;
          pUVar13 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)pUVar17,"Prefabs/InGame/ChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
          if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
            pPVar18 = (PatreonEffects_NameEffectApplier_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_ChatPanel_GetComponent_ChatPanel);
            (pUVar12->fields)._leftStyle = pPVar18;
            il2cpp_runtime_helper_022b4080(&(pUVar12->fields)._leftStyle);
            pPVar18 = (pUVar12->fields)._leftStyle;
            pUVar17 = (UI_KillFeedBigPopup_o *)0x0;
            if (pPVar18 != (PatreonEffects_NameEffectApplier_o *)0x0) {
              pUVar13 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pPVar18,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar13,6,6,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          pUVar17 = (UI_KillFeedBigPopup_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0)
          ;
          pUVar13 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)pUVar17,"Prefabs/InGame/VoiceChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
          if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
            pUVar20 = (UnityEngine_UI_RawImage_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
            (pUVar12->fields)._image = pUVar20;
            il2cpp_runtime_helper_022b4080(&(pUVar12->fields)._image);
            pUVar20 = (pUVar12->fields)._image;
            pUVar17 = (UI_KillFeedBigPopup_o *)0x0;
            if (pUVar20 != (UnityEngine_UI_RawImage_o *)0x0) {
              pUVar13 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar20,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar13,3,3,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              goto label_043c6d24;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar7 + 0x28) != 0) {
      if (*(char *)(*(long *)(lVar7 + 0x28) + 0x11) == '\0') goto label_043c6c6c;
      pPVar18 = pUVar12[1].fields._leftStyle;
      pUVar17 = (UI_KillFeedBigPopup_o *)0x0;
      if (pPVar18 != (PatreonEffects_NameEffectApplier_o *)0x0) {
        pUVar17 = (UI_KillFeedBigPopup_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar18,(MethodInfo *)0x0);
        pUVar13 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                            ((UnityEngine_Transform_o *)pUVar17,"Prefabs/InGame/FeedPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
        if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
          pPVar18 = (PatreonEffects_NameEffectApplier_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_FeedPanel_GetComponent_FeedPanel);
          (pUVar12->fields)._rightStyle = pPVar18;
          il2cpp_runtime_helper_022b4080(&(pUVar12->fields)._rightStyle);
          pPVar18 = (pUVar12->fields)._rightStyle;
          pUVar17 = (UI_KillFeedBigPopup_o *)0x0;
          if (pPVar18 != (PatreonEffects_NameEffectApplier_o *)0x0) {
            pUVar17 = (UI_KillFeedBigPopup_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pPVar18,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      ((UnityEngine_GameObject_o *)pUVar17,2,2,(UnityEngine_Vector2_o)0xc248000000000000,
                       (MethodInfo *)0x0);
            lVar19 = *(long *)(TypeInfo_SettingsManager + 0xb8);
            goto label_043c6c6c;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    il2cpp_runtime_helper_023445d0(&"Minimap/Prefabs/MinimapPanel");
    g_data_057ae3f0 = '\x01';
  }
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
  pUVar13 = UI_ElementFactory__InstantiateAndBind(pUVar15,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
  pfVar4 = &pUVar17[1].fields.TimeLeft;
  *(UnityEngine_GameObject_o **)&pUVar17[1].fields.TimeLeft = pUVar13;
  il2cpp_runtime_helper_022b4080(pfVar4,pUVar13);
  UI_ElementFactory__SetAnchor
            (*(UnityEngine_GameObject_o **)&pUVar17[1].fields.TimeLeft,2,2,
             (UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
  pUVar13 = *(UnityEngine_GameObject_o **)&pUVar17[1].fields.TimeLeft;
  pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
  if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_(pUVar13,MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    pUVar13 = *(UnityEngine_GameObject_o **)pfVar4;
    pUVar12 = (UI_KillFeedBigPopup_o *)0x0;
    if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar13,0,(MethodInfo *)0x0);
      pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
      pUVar12 = pUVar17;
      if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_(pUVar13,MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Snapshot/SnapshotPopup");
    g_data_057ae3f1 = '\x01';
  }
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
  pUVar21 = (UnityEngine_Transform_o *)
            UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar15,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
  if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
    pSVar22 = (System_Collections_Generic_Dictionary_string__Type__o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar21,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    pUVar12[1].fields._categoryPanelTypes = pSVar22;
    il2cpp_runtime_helper_022b4080(&pUVar12[1].fields._categoryPanelTypes);
    pUVar15 = pUVar21;
    __this_06 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar21,(MethodInfo *)0x0);
    if (__this_06 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_06,(UnityEngine_Vector3_o)ZEXT812(0x3f4ccccd3f4ccccd),(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                ((UnityEngine_GameObject_o *)pUVar21,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar30 = (uint)pUVar15->klass[1]._1.namespaze;
  pUVar21 = pUVar15;
  (*(code *)pUVar15->klass[1]._1.name)();
  pvVar8 = pUVar15[6].monitor;
  if (pvVar8 != (void *)0x0) {
    if (g_data_057ae3bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetEmoteWheel_b__25_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
      g_data_057ae3bf = '\x01';
    }
    pUVar21 = (UnityEngine_Transform_o *)0x0;
    if (*(long **)((long)pvVar8 + 0x30) != (long *)0x0) {
      lVar19 = **(long **)((long)pvVar8 + 0x30);
      uVar30 = (uint)*(undefined8 *)(lVar19 + 0x2a0);
      (**(code **)(lVar19 + 0x298))();
      *(undefined1 *)((long)pvVar8 + 0x40) = 0;
      __this_00 = (UI_ItemHandler_o *)pUVar15[6].fields.m_CachedPtr;
      pUVar21 = (UnityEngine_Transform_o *)0x0;
      if (__this_00 != (UI_ItemHandler_o *)0x0) {
        UI_ItemHandler__SetItemWheel(__this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    g_data_057ae3e8 = '\x01';
  }
  pUVar13 = pUVar21[9].monitor;
  if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
    pMVar31 = MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD;
    __this_07 = (UI_TopLeftHUD_o *)UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    uVar30 = (uint)pMVar31;
    if (__this_07 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_07,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar23 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar13,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar23 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar23,uVar30 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar23 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar13,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar23 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__get_enabled(pUVar23,(MethodInfo *)0x0);
    return;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_08 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
  pIVar26 = title;
  __this_09 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        ((UnityEngine_Transform_o *)__this_08,(System_String_o *)title,width,height,0,
                         (MethodInfo *)0x0);
  if (__this_09 != (UnityEngine_GameObject_o *)0x0) {
    pIVar26 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar24 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(__this_09,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar19 = MethodInfo_Void_Add;
    __this_08 = ((UnityEngine_Component_o *)(pUVar13 + 1))->monitor;
    if (__this_08 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_08->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this_08->fields)._items;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar30 = (__this_08->fields)._size;
        pIVar26 = pIVar24;
        if (uVar30 < (uint)pSVar6->max_length) {
          (__this_08->fields)._size = uVar30 + 1;
          pSVar6->m_Items[(int)uVar30] = (Il2CppObject *)pIVar24;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar30);
          pSVar32 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar13 + 0x18))->fields).m_CachedPtr;
          if (pSVar32 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar32,(Il2CppObject *)key,(Il2CppObject *)pIVar24,MethodInfo_Void_set_Item);
            return;
          }
          __this_08 = (System_Collections_Generic_List_object__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_08,(Il2CppObject *)pIVar24,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          pSVar32 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar13 + 0x18))->fields).m_CachedPtr;
          __this_08 = (System_Collections_Generic_List_object__o *)0x0;
          if (pSVar32 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar24 = pIVar26;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar32 = (System_Collections_Generic_Dictionary_object__object__o *)__this_08[0xe].fields._syncRoot;
  pIVar25 = (Il2CppObject *)0x0;
  if (pSVar32 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar25 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar32,(Il2CppObject *)pIVar26,MethodInfo_BasePopup_get_Item);
    if (pIVar25 == (Il2CppObject *)0x0) {
      return;
    }
    bVar5 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar5 <= (pIVar25->klass->_2).naturalAligment) &&
       ((pIVar25->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar24 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar26 = (Il2CppClass *)0x0;
  if (pIVar25[0x25].klass != (Il2CppClass *)0x0) {
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar25[0x25].klass,
                        (Il2CppObject *)pIVar24,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      return;
    }
    pIVar26 = pIVar25[0x25].klass;
    if ((pIVar26 != (Il2CppClass *)0x0) &&
       (pIVar25 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar26,
                             (Il2CppObject *)pIVar24,MethodInfo_BasePopup_get_Item), pIVar25 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar33 = pIVar26->vtable[0x11].method;
  if (pMVar33 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar33,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar33,(MethodInfo *)0x0);
  pIVar25 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar33 + 2)[1].invoker_method = (InvokerMethod)pIVar25;
  il2cpp_runtime_helper_022b4080(&(pMVar33 + 2)[1].invoker_method);
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar33,(MethodInfo *)0x0);
  pIVar26 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar33 + 2)[1].klass = pIVar26;
  il2cpp_runtime_helper_022b4080(&(pMVar33 + 2)[1].klass);
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar33,(MethodInfo *)0x0);
  pIVar27 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar33 + 2)[1].return_type = pIVar27;
  il2cpp_runtime_helper_022b4080(&(pMVar33 + 2)[1].return_type);
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar33,(MethodInfo *)0x0);
  __this_10 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar33 + 3)[1].invoker_method = (InvokerMethod)__this_10;
  il2cpp_runtime_helper_022b4080(&(pMVar33 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar33 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar26 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar13 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar33 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_10 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar13,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar19 = MethodInfo_Void_Add;
    pIVar26 = pMVar33->klass;
    if (pIVar26 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_10 = (Il2CppRGCTXData *)(pMVar33 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar26->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar6 = ((System_Collections_Generic_List_object__Fields *)&(pIVar26->_1).name)->_items;
    if (pSVar6 == (System_Object_array *)0x0) goto label_043c7809;
    uVar30 = *(uint *)&(pIVar26->_1).namespaze;
    if ((uint)pSVar6->max_length <= uVar30) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar26,(Il2CppObject *)__this_10,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      pIVar26 = pMVar33->klass;
      if (pIVar26 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar26->_1).namespaze = uVar30 + 1;
    pSVar6->m_Items[(int)uVar30] = (Il2CppObject *)__this_10;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar30);
    pIVar26 = pMVar33->klass;
    if (pIVar26 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar19 = MethodInfo_Void_Add;
    __this_10 = (Il2CppRGCTXData *)(pMVar33 + 2)[1].klass;
    puVar10 = (undefined1 *)((long)&(pIVar26->_1).namespaze + 4);
    *(int *)puVar10 = *(int *)puVar10 + 1;
    pcVar9 = (pIVar26->_1).name;
    if (pcVar9 == (char *)0x0) goto label_043c7809;
    uVar30 = *(uint *)&(pIVar26->_1).namespaze;
    if (*(uint *)(pcVar9 + 0x18) <= uVar30) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar26,(Il2CppObject *)__this_10,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      pIVar26 = pMVar33->klass;
      if (pIVar26 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar26->_1).namespaze = uVar30 + 1;
    *(Il2CppRGCTXData **)(pcVar9 + (long)(int)uVar30 * 8 + 0x20) = __this_10;
    il2cpp_runtime_helper_022b4080(pcVar9 + (long)(int)uVar30 * 8 + 0x20);
    pIVar26 = pMVar33->klass;
    if (pIVar26 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar19 = MethodInfo_Void_Add;
    __this_10 = (Il2CppRGCTXData *)(pMVar33 + 2)[1].return_type;
    puVar10 = (undefined1 *)((long)&(pIVar26->_1).namespaze + 4);
    *(int *)puVar10 = *(int *)puVar10 + 1;
    pcVar9 = (pIVar26->_1).name;
    if (pcVar9 == (char *)0x0) goto label_043c7809;
    uVar30 = *(uint *)&(pIVar26->_1).namespaze;
    if (uVar30 < *(uint *)(pcVar9 + 0x18)) {
      *(uint *)&(pIVar26->_1).namespaze = uVar30 + 1;
      *(Il2CppRGCTXData **)(pcVar9 + (long)(int)uVar30 * 8 + 0x20) = __this_10;
      il2cpp_runtime_helper_022b4080(pcVar9 + (long)(int)uVar30 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar26,(Il2CppObject *)__this_10,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
    }
    pIVar26 = TypeInfo_InGameManager;
    __this_10 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_10 == (Il2CppRGCTXData *)0x0) {
      pMVar33[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar33[6].field7_0x38);
      pIVar34 = pMVar33[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_10 = (Il2CppRGCTXData *)0x0;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pIVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x70), lVar19 != 0)) {
        if (*(char *)(lVar19 + 0x11) == '\0') {
          return;
        }
        bVar11 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar34,(MethodInfo *)__this_10);
        if ((char)bVar11 == '\0') {
          return;
        }
        if (pMVar33[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar33[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar5 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar5 <= (__this_10->klass->_2).naturalAligment) &&
       ((__this_10->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_InGameManager)) {
      pMVar33[6].field7_0x38.rgctx_data = __this_10;
      if ((bVar5 <= (__this_10->klass->_2).naturalAligment) &&
         ((__this_10->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == pIVar26)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_10 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x58), lVar19 != 0)) && (*(long *)(lVar19 + 0xc0) != 0))
  {
    if (*(char *)(*(long *)(lVar19 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar19 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar26 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_10,(MethodInfo *)pIVar26);
    *(undefined1 *)(__this_10 + 0x2f) = 1;
  }
  else {
    bVar11 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_10,(MethodInfo *)pIVar26);
    if ((char)bVar11 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_10,(MethodInfo *)pIVar26);
      pMVar33 = __this_10[0x22].method;
      pIVar34 = (Il2CppRGCTXData *)0x0;
      if (pMVar33 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar33->methodPointer + 0x288))(pMVar33,*(undefined8 *)(pMVar33->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar23 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_10,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar34 = __this_10;
  if (pUVar23 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar23,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar37 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar38 = (Il2CppMethodPointer)0x0;
  __this_11 = (UnityEngine_Component_o *)0x0;
  if (pIVar34[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar36 = il2cpp_runtime_helper_022b2c90();
    if (auVar36._8_4_ == 1) {
      plVar28 = (long *)__cxa_begin_catch(auVar36._0_8_);
      lVar19 = *plVar28;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar38;
      __this_03.fields._list = pSVar37;
      __this_03.fields._current = (Il2CppObject *)__this_11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe70);
      if (lVar19 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar19);
    }
    __this_04.fields._8_8_ = pIVar38;
    __this_04.fields._list = pSVar37;
    __this_04.fields._current = (Il2CppObject *)__this_11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe70);
    _Unwind_Resume(auVar36._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffe70,
             (System_Collections_Generic_List_object__o *)pIVar34[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar38;
    __this_01.fields._list = pSVar37;
    __this_01.fields._current = (Il2CppObject *)__this_11;
    bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe70);
    if ((char)bVar11 == '\0') break;
    if (__this_11 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar13 = UnityEngine_Component__get_gameObject(__this_11,(MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar13,(MethodInfo *)0x0);
  } while ((char)bVar11 == '\0');
  __this_02.fields._8_8_ = pIVar38;
  __this_02.fields._list = pSVar37;
  __this_02.fields._current = (Il2CppObject *)__this_11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe70);
  return;
}


// UI.InGameMenu$$SetupLoading
// il2cpp: void UI_InGameMenu__SetupLoading (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c60c0

void UI_InGameMenu__SetupLoading(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_InGameBackgroundMenu_o **ppUVar2;
  System_Threading_CancellationTokenSource_o **ppSVar3;
  System_Threading_CancellationCallbackInfo_o **ppSVar4;
  byte bVar5;
  System_Object_array *pSVar6;
  long lVar7;
  void *pvVar8;
  UI_ItemHandler_o *__this_00;
  char *pcVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 *puVar10;
  bool_conflict bVar11;
  UI_InGameBackgroundMenu_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UI_GlobalPauseGamePopup_o *pUVar14;
  UI_ExternalLinkPopup_o *obj;
  Il2CppObject *pIVar15;
  UI_ElementStyle_o *__this_05;
  System_Threading_CancellationTokenSource_o *pSVar16;
  UnityEngine_GameObject_o *pUVar17;
  System_Collections_Generic_List_BasePopup__o *pSVar18;
  Settings_StringSetting_o *pSVar19;
  UI_BasePanel_o *pUVar20;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar21;
  UnityEngine_UI_RawImage_o *pUVar22;
  System_Threading_CancellationTokenSource_o *pSVar23;
  System_Threading_ManualResetEvent_o *pSVar24;
  long lVar25;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *pSVar26;
  System_Threading_CancellationCallbackInfo_o *pSVar27;
  UnityEngine_Transform_o *pUVar28;
  UnityEngine_Transform_o *__this_06;
  UI_TopLeftHUD_o *__this_07;
  UnityEngine_Behaviour_o *pUVar29;
  System_Collections_Generic_List_object__o *__this_08;
  UnityEngine_GameObject_o *__this_09;
  Il2CppClass *pIVar30;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  Il2CppClass *pIVar31;
  Il2CppType *pIVar32;
  Il2CppRGCTXData *__this_10;
  long *plVar33;
  Il2CppClass *title;
  int iVar34;
  uint uVar35;
  MethodInfo_255A0F0 *pMVar36;
  MethodInfo_24E7B40 *key;
  UI_InGameBackgroundMenu_o *__this_11;
  UI_ExternalLinkPopup_o *__this_12;
  System_String_o **parent;
  System_Collections_Generic_Dictionary_object__object__o *pSVar37;
  MethodInfo *pMVar38;
  Il2CppRGCTXData *pIVar39;
  int iVar40;
  float width;
  float height;
  undefined1 auVar41 [12];
  System_Collections_Generic_List_T__o *pSVar42;
  Il2CppMethodPointer pIVar43;
  UnityEngine_Component_o *pUVar44;
  
  if (g_data_057ae3f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GlobalPauseGamePopup_CreateDefaultPopup_GlobalPauseGameP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameBackgroundMenu_CreateMenu_InGameBackgroundMenu);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/BackgroundMenu");
    g_data_057ae3f4 = '\x01';
  }
  pUVar12 = (UI_InGameBackgroundMenu_o *)UI_ElementFactory__CreateMenu_object_("Prefabs/Panels/BackgroundMenu",MethodInfo_InGameBackgroundMenu_CreateMenu_InGameBackgroundMenu);
  ppUVar2 = &(__this->fields)._backgroundMenu;
  (__this->fields)._backgroundMenu = pUVar12;
  il2cpp_runtime_helper_022b4080(ppUVar2);
  pUVar12 = (__this->fields)._backgroundMenu;
  __this_11 = (UI_InGameBackgroundMenu_o *)0x0;
  if (pUVar12 != (UI_InGameBackgroundMenu_o *)0x0) {
    (*(pUVar12->klass->vtable)._4_Setup.methodPtr)();
    __this_11 = *ppUVar2;
    if ((__this_11 != (UI_InGameBackgroundMenu_o *)0x0) &&
       (pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_11,(MethodInfo *)0x0)
       , pUVar13 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetAsFirstSibling(pUVar13,(MethodInfo *)0x0);
      pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar14 = (UI_GlobalPauseGamePopup_o *)
                UI_ElementFactory__CreateDefaultPopup_object_(pUVar13,0,MethodInfo_GlobalPauseGamePopup_CreateDefaultPopup_GlobalPauseGameP);
      (__this->fields)._globalPauseGamePopup = pUVar14;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._globalPauseGamePopup,pUVar14);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_TopLeftHUD);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/TopLeftHUD");
    g_data_057ae3e9 = '\x01';
  }
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_11,(MethodInfo *)0x0);
  obj = (UI_ExternalLinkPopup_o *)
        UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar13,"Prefabs/InGame/TopLeftHUD",0,MethodInfo_GameObject_InstantiateAndSetupPanel_TopLeftHUD);
  UI_ElementFactory__SetAnchor
            ((UnityEngine_GameObject_o *)obj,0,0,(UnityEngine_Vector2_o)0xc100000041200000,(MethodInfo *)0x0);
  __this_12 = (UI_ExternalLinkPopup_o *)&__this_11[1].fields.ExternalLinkPopup;
  __this_11[1].fields.ExternalLinkPopup = obj;
  il2cpp_runtime_helper_022b4080(__this_12,obj);
  if ((obj != (UI_ExternalLinkPopup_o *)0x0) &&
     (__this_12 = obj,
     pIVar15 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)obj,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD),
     pIVar15 != (Il2CppObject *)0x0)) {
    __this_11[1].fields.ColorPickPopup = (UI_ColorPickPopup_o *)pIVar15[8].klass;
    il2cpp_runtime_helper_022b4080(&__this_11[1].fields.ColorPickPopup);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)obj,1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSmallPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae3f3 = '\x01';
  }
  __this_05 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  height = 20.0;
  UI_ElementStyle___ctor(__this_05,0x16,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  pSVar16 = (System_Threading_CancellationTokenSource_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
  pUVar17 = UI_ElementFactory__CreateHUDLabel
                      ((UnityEngine_Transform_o *)pSVar16,__this_05,"",0,4,(MethodInfo *)0x0);
  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
    pUVar13 = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Text_GetComponent_Text);
    __this_12[2].fields.SinglePanel = pUVar13;
    il2cpp_runtime_helper_022b4080(&__this_12[2].fields.SinglePanel);
    pUVar13 = __this_12[2].fields.SinglePanel;
    pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
    if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
      pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar17,1,1,(UnityEngine_Vector2_o)0xc120000000000000,(MethodInfo *)0x0);
      pUVar13 = __this_12[1].fields.DoublePanelLeft;
      pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
      if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
        pSVar16 = (System_Threading_CancellationTokenSource_o *)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar13,(MethodInfo *)0x0)
        ;
        pUVar17 = UI_ElementFactory__CreateHUDLabel
                            ((UnityEngine_Transform_o *)pSVar16,__this_05,"",0,3,(MethodInfo *)0x0);
        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
          pUVar13 = (UnityEngine_Transform_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Text_GetComponent_Text);
          __this_12[2].fields.DoublePanelLeft = pUVar13;
          il2cpp_runtime_helper_022b4080(&__this_12[2].fields.DoublePanelLeft);
          pUVar13 = __this_12[2].fields.DoublePanelLeft;
          pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
            pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar17,0,0,(UnityEngine_Vector2_o)0xc120000041200000,(MethodInfo *)0x0);
            pSVar16 = (System_Threading_CancellationTokenSource_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
            pUVar17 = UI_ElementFactory__CreateHUDLabel
                                ((UnityEngine_Transform_o *)pSVar16,__this_05,"",0,5,
                                 (MethodInfo *)0x0);
            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
              pUVar13 = (UnityEngine_Transform_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Text_GetComponent_Text);
              __this_12[2].fields.DoublePanelRight = pUVar13;
              il2cpp_runtime_helper_022b4080(&__this_12[2].fields.DoublePanelRight);
              pUVar13 = __this_12[2].fields.DoublePanelRight;
              pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
              if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                pUVar17 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar17,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
                pSVar16 = (System_Threading_CancellationTokenSource_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                pUVar17 = UI_ElementFactory__CreateHUDLabel
                                    ((UnityEngine_Transform_o *)pSVar16,__this_05,"",0,4,
                                     (MethodInfo *)0x0);
                if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                  pSVar18 = (System_Collections_Generic_List_BasePopup__o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Text_GetComponent_Text);
                  __this_12[2].fields._popups = pSVar18;
                  il2cpp_runtime_helper_022b4080(&__this_12[2].fields._popups);
                  pSVar18 = __this_12[2].fields._popups;
                  pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
                  if (pSVar18 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    pUVar17 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pSVar18,(MethodInfo *)0x0);
                    UI_ElementFactory__SetAnchor
                              (pUVar17,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
                    pSVar16 = (System_Threading_CancellationTokenSource_o *)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                    pUVar17 = UI_ElementFactory__CreateHUDLabel
                                        ((UnityEngine_Transform_o *)pSVar16,__this_05,"",0,4,
                                         (MethodInfo *)0x0);
                    if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                      pSVar19 = (Settings_StringSetting_o *)
                                UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Text_GetComponent_Text);
                      __this_12[2].fields._currentCategoryPanelName = pSVar19;
                      il2cpp_runtime_helper_022b4080(&__this_12[2].fields._currentCategoryPanelName);
                      pSVar19 = __this_12[2].fields._currentCategoryPanelName;
                      pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
                      if (pSVar19 != (Settings_StringSetting_o *)0x0) {
                        pUVar17 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pSVar19,(MethodInfo *)0x0);
                        UI_ElementFactory__SetAnchor
                                  (pUVar17,5,5,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
                        pSVar16 = (System_Threading_CancellationTokenSource_o *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                        pUVar17 = UI_ElementFactory__CreateHUDLabel
                                            ((UnityEngine_Transform_o *)pSVar16,__this_05,"",0,4,
                                             (MethodInfo *)0x0);
                        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar17 = (UnityEngine_GameObject_o *)
                                    UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Text_GetComponent_Text);
                          __this_12[2].fields._currentCategoryPanel = pUVar17;
                          il2cpp_runtime_helper_022b4080(&__this_12[2].fields._currentCategoryPanel);
                          pUVar44 = (UnityEngine_Component_o *)__this_12[2].fields._currentCategoryPanel;
                          pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
                          if (pUVar44 != (UnityEngine_Component_o *)0x0) {
                            pUVar17 = UnityEngine_Component__get_gameObject(pUVar44,(MethodInfo *)0x0);
                            UI_ElementFactory__SetAnchor
                                      (pUVar17,3,3,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
                            pSVar16 = (System_Threading_CancellationTokenSource_o *)
                                      UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                            pUVar17 = UI_ElementFactory__CreateHUDLabel
                                                ((UnityEngine_Transform_o *)pSVar16,__this_05,"",0,4
                                                 ,(MethodInfo *)0x0);
                            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar20 = (UI_BasePanel_o *)
                                        UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Text_GetComponent_Text);
                              __this_12[2].fields.Parent = pUVar20;
                              il2cpp_runtime_helper_022b4080(&__this_12[2].fields.Parent);
                              pUVar20 = __this_12[2].fields.Parent;
                              pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
                              if (pUVar20 != (UI_BasePanel_o *)0x0) {
                                pUVar17 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar20,(MethodInfo *)0x0);
                                UI_ElementFactory__SetAnchor
                                          (pUVar17,7,7,(UnityEngine_Vector2_o)0x4120000000000000,
                                           (MethodInfo *)0x0);
                                pSVar16 = (System_Threading_CancellationTokenSource_o *)
                                          UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_12,(MethodInfo *)0x0);
                                pUVar17 = UI_ElementFactory__CreateHUDLabel
                                                    ((UnityEngine_Transform_o *)pSVar16,__this_05,""
                                                     ,0,3,(MethodInfo *)0x0);
                                if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                  pSVar21 = (System_Collections_Generic_Dictionary_string__Type__o *)
                                            UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Text_GetComponent_Text)
                                  ;
                                  __this_12[2].fields._categoryPanelTypes = pSVar21;
                                  il2cpp_runtime_helper_022b4080(&__this_12[2].fields._categoryPanelTypes);
                                  pSVar21 = __this_12[2].fields._categoryPanelTypes;
                                  pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
                                  if (pSVar21 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0)
                                  {
                                    pUVar17 = UnityEngine_Component__get_gameObject
                                                        ((UnityEngine_Component_o *)pSVar21,(MethodInfo *)0x0)
                                    ;
                                    UI_ElementFactory__SetAnchor
                                              (pUVar17,6,6,(UnityEngine_Vector2_o)0x4120000041200000,
                                               (MethodInfo *)0x0);
                                    pSVar16 = (System_Threading_CancellationTokenSource_o *)
                                              UnityEngine_Component__get_transform
                                                        ((UnityEngine_Component_o *)__this_12,
                                                         (MethodInfo *)0x0);
                                    pUVar17 = UI_ElementFactory__CreateHUDLabel
                                                        ((UnityEngine_Transform_o *)pSVar16,__this_05,
                                                         "",0,5,(MethodInfo *)0x0);
                                    if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar22 = (UnityEngine_UI_RawImage_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar17,MethodInfo_Text_GetComponent_Text);
                                      __this_12[2].fields.MaskBackground = pUVar22;
                                      il2cpp_runtime_helper_022b4080(&__this_12[2].fields.MaskBackground);
                                      pUVar22 = __this_12[2].fields.MaskBackground;
                                      pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
                                      if (pUVar22 != (UnityEngine_UI_RawImage_o *)0x0) {
                                        pUVar17 = UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)pUVar22,
                                                             (MethodInfo *)0x0);
                                        UI_ElementFactory__SetAnchor
                                                  (pUVar17,8,8,(UnityEngine_Vector2_o)0x41200000c1200000,
                                                   (MethodInfo *)0x0);
                                        pUVar13 = UnityEngine_Component__get_transform
                                                            ((UnityEngine_Component_o *)__this_12,
                                                             (MethodInfo *)0x0);
                                        pSVar16 = (System_Threading_CancellationTokenSource_o *)
                                                  UI_ElementFactory__CreateDefaultPopup_object_
                                                            (pUVar13,0,MethodInfo_KillScorePopup_CreateDefaultPopup_KillScorePopup);
                                        ppSVar3 = &__this_12[2].fields.m_CancellationTokenSource;
                                        __this_12[2].fields.m_CancellationTokenSource = pSVar16;
                                        il2cpp_runtime_helper_022b4080(ppSVar3);
                                        pSVar16 = __this_12[2].fields.m_CancellationTokenSource;
                                        if ((pSVar16 != (System_Threading_CancellationTokenSource_o *)0x0) &&
                                           (pUVar17 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pSVar16,
                                                                 (MethodInfo *)0x0),
                                           pUVar17 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__AddComponent_object_(pUVar17,MethodInfo_IgnoreScaler_AddComponent_IgnoreScaler);
                                          pSVar23 = *ppSVar3;
                                          pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
                                          if (pSVar23 != (System_Threading_CancellationTokenSource_o *)0x0) {
                                            pUVar17 = UnityEngine_Component__get_gameObject
                                                                ((UnityEngine_Component_o *)pSVar23,
                                                                 (MethodInfo *)0x0);
                                            UI_ElementFactory__SetAnchor
                                                      (pUVar17,4,4,(UnityEngine_Vector2_o)0x42c8000000000000,
                                                       (MethodInfo *)0x0);
                                            pUVar13 = UnityEngine_Component__get_transform
                                                                ((UnityEngine_Component_o *)__this_12,
                                                                 (MethodInfo *)0x0);
                                            pIVar15 = UI_ElementFactory__CreateDefaultPopup_object_
                                                                (pUVar13,0,MethodInfo_KillFeedBigPopup_CreateDefaultPopup_KillFeedBigPopup);
                                            __this_12[2].monitor = pIVar15;
                                            il2cpp_runtime_helper_022b4080(&__this_12[2].monitor);
                                            pSVar16 = __this_12[2].monitor;
                                            if ((pSVar16 != (System_Threading_CancellationTokenSource_o *)0x0)
                                               && (pUVar17 = UnityEngine_Component__get_gameObject
                                                                       ((UnityEngine_Component_o *)pSVar16,
                                                                        (MethodInfo *)0x0),
                                                  pUVar17 != (UnityEngine_GameObject_o *)0x0)) {
                                              UnityEngine_GameObject__AddComponent_object_
                                                        (pUVar17,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                              pUVar44 = __this_12[2].monitor;
                                              pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
                                              if (pUVar44 != (UnityEngine_Component_o *)0x0) {
                                                pSVar16 = (System_Threading_CancellationTokenSource_o *)
                                                          UnityEngine_Component__get_gameObject
                                                                    (pUVar44,(MethodInfo *)0x0);
                                                UI_ElementFactory__SetAnchor
                                                          ((UnityEngine_GameObject_o *)pSVar16,1,4,
                                                           (UnityEngine_Vector2_o)0xc2f0000000000000,
                                                           (MethodInfo *)0x0);
                                                lVar25 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                                                if ((lVar25 != 0) &&
                                                   (lVar25 = *(long *)(lVar25 + 0x160), lVar25 != 0)) {
                                                  iVar40 = *(int *)(lVar25 + 0x14) + -1;
                                                  if (0 < iVar40) {
                                                    iVar34 = 0;
                                                    do {
                                                      while( true ) {
                                                        pSVar16 = (System_Threading_CancellationTokenSource_o
                                                                   *)UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                __this_12,(MethodInfo *)0x0);
                                                        pSVar23 = (System_Threading_CancellationTokenSource_o
                                                                   *)
                                                       UI_ElementFactory__CreateDefaultPopup_object_
                                                                 ((UnityEngine_Transform_o *)pSVar16,0,
                                                                  MethodInfo_KillFeedSmallPopup_CreateDefaultPopup_KillFeedSmallPopup);
                                                       if ((pSVar23 ==
                                                            (System_Threading_CancellationTokenSource_o *)0x0)
                                                          || (pSVar16 = pSVar23,
                                                             pUVar17 = UnityEngine_Component__get_gameObject
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pSVar23,(MethodInfo *)0x0),
                                                             pUVar17 == (UnityEngine_GameObject_o *)0x0))
                                                       goto label_043c6ac6;
                                                       UnityEngine_GameObject__AddComponent_object_
                                                                 (pUVar17,MethodInfo_KillFeedScaler_AddComponent_KillFeedScaler);
                                                       pUVar17 = UnityEngine_Component__get_gameObject
                                                                           ((UnityEngine_Component_o *)pSVar23
                                                                            ,(MethodInfo *)0x0);
                                                       height = 0.0;
                                                       UI_ElementFactory__SetAnchor
                                                                 (pUVar17,1,4,
                                                                  (UnityEngine_Vector2_o)
                                                                  ((ulong)(uint)((float)iVar34 * -35.0 +
                                                                                -162.0) << 0x20),
                                                                  (MethodInfo *)0x0);
                                                       lVar25 = MethodInfo_Void_Add;
                                                       pSVar16 = (System_Threading_CancellationTokenSource_o *
                                                                 )__this_12[2].fields.m_CachedPtr;
                                                       if (pSVar16 ==
                                                           (System_Threading_CancellationTokenSource_o *)0x0)
                                                       goto label_043c6ac6;
                                                       piVar1 = (int32_t *)
                                                                ((long)&(pSVar16->fields).
                                                                        _registeredCallbacksLists + 4);
                                                       *piVar1 = *piVar1 + 1;
                                                       pSVar6 = (System_Object_array *)
                                                                (pSVar16->fields)._kernelEvent;
                                                       if (pSVar6 == (System_Object_array *)0x0)
                                                       goto label_043c6ac6;
                                                       uVar35 = *(uint *)&(pSVar16->fields).
                                                                          _registeredCallbacksLists;
                                                       if ((uint)pSVar6->max_length <= uVar35) break;
                                                       *(uint *)&(pSVar16->fields)._registeredCallbacksLists =
                                                            uVar35 + 1;
                                                       pSVar6->m_Items[(int)uVar35] = (Il2CppObject *)pSVar23;
                                                       il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar35);
                                                       iVar34 = iVar34 + 1;
                                                       if (iVar40 == iVar34) {
                                                         return;
                                                       }
                                                      }
                                                      System_Collections_Generic_List_object___AddWithResize
                                                                ((System_Collections_Generic_List_object__o *)
                                                                 pSVar16,(Il2CppObject *)pSVar23,
                                                                 *(MethodInfo_362C220 **)
                                                                  (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0)
                                                                  + 0x70));
                                                      iVar34 = iVar34 + 1;
                                                    } while (iVar40 != iVar34);
                                                  }
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
label_043c6ac6:
  il2cpp_runtime_helper_022b2c90();
  parent = (System_String_o **)pSVar16;
  if (g_data_057ae3f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ChatPanel_GetComponent_ChatPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FeedPanel_GetComponent_FeedPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/VoiceChatPanel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/ChatPanel");
    parent = &"Prefabs/InGame/FeedPanel";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f2 = '\x01';
  }
  lVar25 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  lVar7 = *(long *)(lVar25 + 0x28);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) {
    if (*(char *)(*(long *)(lVar7 + 0x30) + 0x11) == '\0') {
label_043c6c6c:
      if ((*(long *)(lVar25 + 0x80) != 0) &&
         (lVar25 = *(long *)(*(long *)(lVar25 + 0x80) + 0xb0), lVar25 != 0)) {
        if (*(int *)(lVar25 + 0x14) == 2) {
label_043c6d24:
          parent = (System_String_o **)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar16,(MethodInfo *)0x0);
          pUVar17 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/ChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_ChatPanel);
          if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
            pIVar15 = UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_ChatPanel_GetComponent_ChatPanel);
            pSVar16[3].monitor = pIVar15;
            il2cpp_runtime_helper_022b4080(&pSVar16[3].monitor);
            parent = (System_String_o **)0x0;
            if (pSVar16[3].monitor != (UnityEngine_Component_o *)0x0) {
              pUVar17 = UnityEngine_Component__get_gameObject(pSVar16[3].monitor,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar17,6,6,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          parent = (System_String_o **)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar16,(MethodInfo *)0x0);
          pUVar17 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                              ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/VoiceChatPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_VoiceChatPanel);
          if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
            pSVar26 = (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_VoiceChatPanel_GetComponent_VoiceChatPanel);
            pSVar16[3].fields._registeredCallbacksLists = pSVar26;
            il2cpp_runtime_helper_022b4080(&pSVar16[3].fields._registeredCallbacksLists);
            pSVar26 = pSVar16[3].fields._registeredCallbacksLists;
            parent = (System_String_o **)0x0;
            if (pSVar26 != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
              pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar26,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar17,3,3,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
              goto label_043c6d24;
            }
          }
        }
      }
    }
    else if (*(long *)(lVar7 + 0x28) != 0) {
      if (*(char *)(*(long *)(lVar7 + 0x28) + 0x11) == '\0') goto label_043c6c6c;
      pSVar26 = pSVar16[7].fields._registeredCallbacksLists;
      parent = (System_String_o **)0x0;
      if (pSVar26 != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
        parent = (System_String_o **)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar26,(MethodInfo *)0x0);
        pUVar17 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                            ((UnityEngine_Transform_o *)parent,"Prefabs/InGame/FeedPanel",1,MethodInfo_GameObject_InstantiateAndSetupPanel_FeedPanel);
        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
          pSVar24 = (System_Threading_ManualResetEvent_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_FeedPanel_GetComponent_FeedPanel);
          pSVar16[3].fields._kernelEvent = pSVar24;
          il2cpp_runtime_helper_022b4080(&pSVar16[3].fields);
          pSVar24 = pSVar16[3].fields._kernelEvent;
          parent = (System_String_o **)0x0;
          if (pSVar24 != (System_Threading_ManualResetEvent_o *)0x0) {
            parent = (System_String_o **)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pSVar24,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      ((UnityEngine_GameObject_o *)parent,2,2,(UnityEngine_Vector2_o)0xc248000000000000,
                       (MethodInfo *)0x0);
            lVar25 = *(long *)(TypeInfo_SettingsManager + 0xb8);
            goto label_043c6c6c;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    il2cpp_runtime_helper_023445d0(&"Minimap/Prefabs/MinimapPanel");
    g_data_057ae3f0 = '\x01';
  }
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
  pSVar27 = (System_Threading_CancellationCallbackInfo_o *)
            UI_ElementFactory__InstantiateAndBind(pUVar13,"Minimap/Prefabs/MinimapPanel",(MethodInfo *)0x0);
  ppSVar4 = &(((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields).
             _executingCallback;
  (((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields)._executingCallback =
       pSVar27;
  il2cpp_runtime_helper_022b4080(ppSVar4,pSVar27);
  UI_ElementFactory__SetAnchor
            ((UnityEngine_GameObject_o *)
             (((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields).
             _executingCallback,2,2,(UnityEngine_Vector2_o)0xc1200000c1200000,(MethodInfo *)0x0);
  pSVar27 = (((System_Threading_CancellationTokenSource_o *)((long)parent + 0x1c0))->fields).
            _executingCallback;
  pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
  if (pSVar27 != (System_Threading_CancellationCallbackInfo_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar27,MethodInfo_MinimapScaler_AddComponent_MinimapScaler);
    pSVar27 = *ppSVar4;
    pSVar16 = (System_Threading_CancellationTokenSource_o *)0x0;
    if (pSVar27 != (System_Threading_CancellationCallbackInfo_o *)0x0) {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pSVar27,0,(MethodInfo *)0x0);
      pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
      pSVar16 = (System_Threading_CancellationTokenSource_o *)parent;
      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_(pUVar17,MethodInfo_MinimapHandler_AddComponent_MinimapHandler);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Snapshot/SnapshotPopup");
    g_data_057ae3f1 = '\x01';
  }
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar16,(MethodInfo *)0x0);
  pUVar28 = (UnityEngine_Transform_o *)
            UI_ElementFactory__InstantiateAndSetupPanel_object_(pUVar13,"Prefabs/Snapshot/SnapshotPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_SnapshotPopup);
  if (pUVar28 != (UnityEngine_Transform_o *)0x0) {
    pIVar15 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar28,MethodInfo_SnapshotPopup_GetComponent_SnapshotPopup);
    *(Il2CppObject **)&pSVar16[5].fields._state = pIVar15;
    il2cpp_runtime_helper_022b4080(&pSVar16[5].fields._state);
    pUVar13 = pUVar28;
    __this_06 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar28,(MethodInfo *)0x0);
    if (__this_06 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_06,(UnityEngine_Vector3_o)ZEXT812(0x3f4ccccd3f4ccccd),(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor
                ((UnityEngine_GameObject_o *)pUVar28,0,0,(UnityEngine_Vector2_o)0xc302000041a00000,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar35 = (uint)pUVar13->klass[1]._1.namespaze;
  pUVar28 = pUVar13;
  (*(code *)pUVar13->klass[1]._1.name)();
  pvVar8 = pUVar13[6].monitor;
  if (pvVar8 != (void *)0x0) {
    if (g_data_057ae3bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetEmoteWheel_b__25_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
      g_data_057ae3bf = '\x01';
    }
    pUVar28 = (UnityEngine_Transform_o *)0x0;
    if (*(long **)((long)pvVar8 + 0x30) != (long *)0x0) {
      lVar25 = **(long **)((long)pvVar8 + 0x30);
      uVar35 = (uint)*(undefined8 *)(lVar25 + 0x2a0);
      (**(code **)(lVar25 + 0x298))();
      *(undefined1 *)((long)pvVar8 + 0x40) = 0;
      __this_00 = (UI_ItemHandler_o *)pUVar13[6].fields.m_CachedPtr;
      pUVar28 = (UnityEngine_Transform_o *)0x0;
      if (__this_00 != (UI_ItemHandler_o *)0x0) {
        UI_ItemHandler__SetItemWheel(__this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    g_data_057ae3e8 = '\x01';
  }
  pUVar17 = pUVar28[9].monitor;
  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
    pMVar36 = MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD;
    __this_07 = (UI_TopLeftHUD_o *)UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    uVar35 = (uint)pMVar36;
    if (__this_07 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_07,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar29 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar17,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar29 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar29,uVar35 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar29 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar17,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar29 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__get_enabled(pUVar29,(MethodInfo *)0x0);
    return;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_08 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
  pIVar31 = title;
  __this_09 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        ((UnityEngine_Transform_o *)__this_08,(System_String_o *)title,width,height,0,
                         (MethodInfo *)0x0);
  if (__this_09 != (UnityEngine_GameObject_o *)0x0) {
    pIVar31 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar30 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(__this_09,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar25 = MethodInfo_Void_Add;
    __this_08 = ((UnityEngine_Component_o *)(pUVar17 + 1))->monitor;
    if (__this_08 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_08->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this_08->fields)._items;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar35 = (__this_08->fields)._size;
        pIVar31 = pIVar30;
        if (uVar35 < (uint)pSVar6->max_length) {
          (__this_08->fields)._size = uVar35 + 1;
          pSVar6->m_Items[(int)uVar35] = (Il2CppObject *)pIVar30;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar35);
          pSVar37 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar17 + 0x18))->fields).m_CachedPtr;
          if (pSVar37 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar37,(Il2CppObject *)key,(Il2CppObject *)pIVar30,MethodInfo_Void_set_Item);
            return;
          }
          __this_08 = (System_Collections_Generic_List_object__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_08,(Il2CppObject *)pIVar30,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          pSVar37 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar17 + 0x18))->fields).m_CachedPtr;
          __this_08 = (System_Collections_Generic_List_object__o *)0x0;
          if (pSVar37 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar30 = pIVar31;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar37 = (System_Collections_Generic_Dictionary_object__object__o *)__this_08[0xe].fields._syncRoot;
  pIVar15 = (Il2CppObject *)0x0;
  if (pSVar37 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar37,(Il2CppObject *)pIVar31,MethodInfo_BasePopup_get_Item);
    if (pIVar15 == (Il2CppObject *)0x0) {
      return;
    }
    bVar5 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar5 <= (pIVar15->klass->_2).naturalAligment) &&
       ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar30 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar31 = (Il2CppClass *)0x0;
  if (pIVar15[0x25].klass != (Il2CppClass *)0x0) {
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar15[0x25].klass,
                        (Il2CppObject *)pIVar30,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      return;
    }
    pIVar31 = pIVar15[0x25].klass;
    if ((pIVar31 != (Il2CppClass *)0x0) &&
       (pIVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar31,
                             (Il2CppObject *)pIVar30,MethodInfo_BasePopup_get_Item), pIVar15 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar38 = (pIVar31->vtable + 0xf)[2].method;
  if (pMVar38 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar38,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar38,(MethodInfo *)0x0);
  pIVar15 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar13,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar38 + 2)[1].invoker_method = (InvokerMethod)pIVar15;
  il2cpp_runtime_helper_022b4080(&(pMVar38 + 2)[1].invoker_method);
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar38,(MethodInfo *)0x0);
  pIVar31 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar13,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar38 + 2)[1].klass = pIVar31;
  il2cpp_runtime_helper_022b4080(&(pMVar38 + 2)[1].klass);
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar38,(MethodInfo *)0x0);
  pIVar32 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar13,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar38 + 2)[1].return_type = pIVar32;
  il2cpp_runtime_helper_022b4080(&(pMVar38 + 2)[1].return_type);
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar38,(MethodInfo *)0x0);
  __this_10 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar13,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar38 + 3)[1].invoker_method = (InvokerMethod)__this_10;
  il2cpp_runtime_helper_022b4080(&(pMVar38 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar38 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar31 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar17 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar38 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_10 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar17,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar25 = MethodInfo_Void_Add;
    pIVar31 = pMVar38->klass;
    if (pIVar31 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_10 = (Il2CppRGCTXData *)(pMVar38 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar31->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar6 = ((System_Collections_Generic_List_object__Fields *)&(pIVar31->_1).name)->_items;
    if (pSVar6 == (System_Object_array *)0x0) goto label_043c7809;
    uVar35 = *(uint *)&(pIVar31->_1).namespaze;
    if ((uint)pSVar6->max_length <= uVar35) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar31,(Il2CppObject *)__this_10,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
      pIVar31 = pMVar38->klass;
      if (pIVar31 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar31->_1).namespaze = uVar35 + 1;
    pSVar6->m_Items[(int)uVar35] = (Il2CppObject *)__this_10;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar35);
    pIVar31 = pMVar38->klass;
    if (pIVar31 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar25 = MethodInfo_Void_Add;
    __this_10 = (Il2CppRGCTXData *)(pMVar38 + 2)[1].klass;
    puVar10 = (undefined1 *)((long)&(pIVar31->_1).namespaze + 4);
    *(int *)puVar10 = *(int *)puVar10 + 1;
    pcVar9 = (pIVar31->_1).name;
    if (pcVar9 == (char *)0x0) goto label_043c7809;
    uVar35 = *(uint *)&(pIVar31->_1).namespaze;
    if (*(uint *)(pcVar9 + 0x18) <= uVar35) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar31,(Il2CppObject *)__this_10,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
      pIVar31 = pMVar38->klass;
      if (pIVar31 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar31->_1).namespaze = uVar35 + 1;
    *(Il2CppRGCTXData **)(pcVar9 + (long)(int)uVar35 * 8 + 0x20) = __this_10;
    il2cpp_runtime_helper_022b4080(pcVar9 + (long)(int)uVar35 * 8 + 0x20);
    pIVar31 = pMVar38->klass;
    if (pIVar31 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar25 = MethodInfo_Void_Add;
    __this_10 = (Il2CppRGCTXData *)(pMVar38 + 2)[1].return_type;
    puVar10 = (undefined1 *)((long)&(pIVar31->_1).namespaze + 4);
    *(int *)puVar10 = *(int *)puVar10 + 1;
    pcVar9 = (pIVar31->_1).name;
    if (pcVar9 == (char *)0x0) goto label_043c7809;
    uVar35 = *(uint *)&(pIVar31->_1).namespaze;
    if (uVar35 < *(uint *)(pcVar9 + 0x18)) {
      *(uint *)&(pIVar31->_1).namespaze = uVar35 + 1;
      *(Il2CppRGCTXData **)(pcVar9 + (long)(int)uVar35 * 8 + 0x20) = __this_10;
      il2cpp_runtime_helper_022b4080(pcVar9 + (long)(int)uVar35 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar31,(Il2CppObject *)__this_10,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
    }
    pIVar31 = TypeInfo_InGameManager;
    __this_10 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_10 == (Il2CppRGCTXData *)0x0) {
      pMVar38[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar38[6].field7_0x38);
      pIVar39 = pMVar38[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_10 = (Il2CppRGCTXData *)0x0;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pIVar39,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        return;
      }
      lVar25 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar25 != 0) && (lVar25 = *(long *)(lVar25 + 0x70), lVar25 != 0)) {
        if (*(char *)(lVar25 + 0x11) == '\0') {
          return;
        }
        bVar11 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar39,(MethodInfo *)__this_10);
        if ((char)bVar11 == '\0') {
          return;
        }
        if (pMVar38[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar38[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar5 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar5 <= (__this_10->klass->_2).naturalAligment) &&
       ((__this_10->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_InGameManager)) {
      pMVar38[6].field7_0x38.rgctx_data = __this_10;
      if ((bVar5 <= (__this_10->klass->_2).naturalAligment) &&
         ((__this_10->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == pIVar31)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_10 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar25 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar25 != 0) && (lVar25 = *(long *)(lVar25 + 0x58), lVar25 != 0)) && (*(long *)(lVar25 + 0xc0) != 0))
  {
    if (*(char *)(*(long *)(lVar25 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar25 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar31 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_10,(MethodInfo *)pIVar31);
    *(undefined1 *)(__this_10 + 0x2f) = 1;
  }
  else {
    bVar11 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_10,(MethodInfo *)pIVar31);
    if ((char)bVar11 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_10,(MethodInfo *)pIVar31);
      pMVar38 = __this_10[0x22].method;
      pIVar39 = (Il2CppRGCTXData *)0x0;
      if (pMVar38 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar38->methodPointer + 0x288))(pMVar38,*(undefined8 *)(pMVar38->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar29 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_10,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar39 = __this_10;
  if (pUVar29 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar29,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar42 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar43 = (Il2CppMethodPointer)0x0;
  pUVar44 = (UnityEngine_Component_o *)0x0;
  if (pIVar39[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar41 = il2cpp_runtime_helper_022b2c90();
    if (auVar41._8_4_ == 1) {
      plVar33 = (long *)__cxa_begin_catch(auVar41._0_8_);
      lVar25 = *plVar33;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar43;
      __this_03.fields._list = pSVar42;
      __this_03.fields._current = (Il2CppObject *)pUVar44;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe40);
      if (lVar25 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar25);
    }
    __this_04.fields._8_8_ = pIVar43;
    __this_04.fields._list = pSVar42;
    __this_04.fields._current = (Il2CppObject *)pUVar44;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe40);
    _Unwind_Resume(auVar41._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffe40,
             (System_Collections_Generic_List_object__o *)pIVar39[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar43;
    __this_01.fields._list = pSVar42;
    __this_01.fields._current = (Il2CppObject *)pUVar44;
    bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe40);
    if ((char)bVar11 == '\0') break;
    if (pUVar44 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar17 = UnityEngine_Component__get_gameObject(pUVar44,(MethodInfo *)0x0);
    if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
  } while ((char)bVar11 == '\0');
  __this_02.fields._8_8_ = pIVar43;
  __this_02.fields._list = pSVar42;
  __this_02.fields._current = (Il2CppObject *)pUVar44;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe40);
  return;
}


// UI.InGameMenu$$OnFinishLoading
// il2cpp: void UI_InGameMenu__OnFinishLoading (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c7420

void UI_InGameMenu__OnFinishLoading(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  UI_CutsceneDialoguePanel_o *__this_00;
  UI_BasePopup_array *pUVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  UI_BasePopup_o *pUVar8;
  UI_InGameMenu_o *__this_05;
  UnityEngine_GameObject_o *pUVar9;
  Il2CppClass *method_00;
  UnityEngine_Behaviour_o *__this_06;
  long *plVar10;
  System_Collections_Generic_List_BasePopup__o *pSVar11;
  UI_InGameMenu_o *pUVar12;
  undefined1 auVar13 [12];
  System_Collections_Generic_List_T__o *pSVar14;
  Il2CppMethodPointer pIVar15;
  UnityEngine_Component_o *__this_07;
  
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar7,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (__this->fields)._characterPopup = pUVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._characterPopup);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar7,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (__this->fields)._scoreboardPopup = pUVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._scoreboardPopup);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar7,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (__this->fields)._mapPopup = pUVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._mapPopup);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_05 = (UI_InGameMenu_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar7,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (__this->fields)._cutsceneDialoguePanel = (UI_CutsceneDialoguePanel_o *)__this_05;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._cutsceneDialoguePanel);
  __this_00 = (__this->fields)._cutsceneDialoguePanel;
  if (__this_00 == (UI_CutsceneDialoguePanel_o *)0x0) {
label_043c7809:
    method_00 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    __this_05 = (UI_InGameMenu_o *)0x7;
    UI_ElementFactory__SetAnchor(pUVar9,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
    pSVar11 = (__this->fields)._popups;
    if (pSVar11 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c7809;
    __this_05 = (UI_InGameMenu_o *)(__this->fields)._characterPopup;
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar11->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_043c7809;
    uVar3 = (pSVar11->fields)._size;
    if ((uint)pUVar4->max_length <= uVar3) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)__this_05,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pSVar11 = (__this->fields)._popups;
      if (pSVar11 != (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    (pSVar11->fields)._size = uVar3 + 1;
    pUVar4->m_Items[(int)uVar3] = (UI_BasePopup_o *)__this_05;
    il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
    pSVar11 = (__this->fields)._popups;
    if (pSVar11 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c7809;
label_043c7630:
    lVar5 = MethodInfo_Void_Add;
    __this_05 = (UI_InGameMenu_o *)(__this->fields)._scoreboardPopup;
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar11->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_043c7809;
    uVar3 = (pSVar11->fields)._size;
    if ((uint)pUVar4->max_length <= uVar3) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)__this_05,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      pSVar11 = (__this->fields)._popups;
      if (pSVar11 != (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    (pSVar11->fields)._size = uVar3 + 1;
    pUVar4->m_Items[(int)uVar3] = (UI_BasePopup_o *)__this_05;
    il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
    pSVar11 = (__this->fields)._popups;
    if (pSVar11 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c7809;
label_043c769b:
    lVar5 = MethodInfo_Void_Add;
    __this_05 = (UI_InGameMenu_o *)(__this->fields)._mapPopup;
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar11->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_043c7809;
    uVar3 = (pSVar11->fields)._size;
    if (uVar3 < (uint)pUVar4->max_length) {
      (pSVar11->fields)._size = uVar3 + 1;
      pUVar4->m_Items[(int)uVar3] = (UI_BasePopup_o *)__this_05;
      il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)__this_05,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    method_00 = TypeInfo_InGameManager;
    __this_05 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_05 == (UI_InGameMenu_o *)0x0) {
      (__this->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&(__this->fields)._gameManager);
      pUVar12 = (UI_InGameMenu_o *)(__this->fields)._minimapPanel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_05 = (UI_InGameMenu_o *)0x0;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x70), lVar5 != 0)) {
        if (*(char *)(lVar5 + 0x11) == '\0') {
          return;
        }
        bVar6 = UI_InGameMenu__AllowMap(pUVar12,(MethodInfo *)__this_05);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar9 = (__this->fields)._minimapPanel;
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= (((Il2CppClass *)__this_05->klass)->_2).naturalAligment) &&
       ((((Il2CppClass *)__this_05->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      (__this->fields)._gameManager = (GameManagers_InGameManager_o *)__this_05;
      if ((bVar2 <= (((Il2CppClass *)__this_05->klass)->_2).naturalAligment) &&
         ((((Il2CppClass *)__this_05->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] == method_00))
      goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_05 = (UI_InGameMenu_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x58), lVar5 != 0)) && (*(long *)(lVar5 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar5 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar5 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)method_00 == '\0') {
    UI_InGameMenu__HideAllMenus(__this_05,(MethodInfo *)method_00);
    *(undefined1 *)&(__this_05->fields).SkipAHSSInput = 1;
  }
  else {
    bVar6 = UI_InGameMenu__IsPauseMenuActive(__this_05,(MethodInfo *)method_00);
    if ((char)bVar6 == '\0') {
      UI_InGameMenu__HideAllMenus(__this_05,(MethodInfo *)method_00);
      pUVar8 = (__this_05->fields)._pausePopup;
      pUVar12 = (UI_InGameMenu_o *)0x0;
      if (pUVar8 == (UI_BasePopup_o *)0x0) goto label_043c7930;
      (*(pUVar8->klass->vtable)._21_Show.methodPtr)(pUVar8,(pUVar8->klass->vtable)._21_Show.method);
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  __this_06 = (UnityEngine_Behaviour_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_05,MethodInfo_Canvas_GetComponent_Canvas);
  pUVar12 = __this_05;
  if (__this_06 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(__this_06,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar15 = (Il2CppMethodPointer)0x0;
  __this_07 = (UnityEngine_Component_o *)0x0;
  pSVar11 = (pUVar12->fields)._allPausePopups;
  if (pSVar11 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
label_043c7a44:
    auVar13 = il2cpp_runtime_helper_022b2c90();
    if (auVar13._8_4_ == 1) {
      plVar10 = (long *)__cxa_begin_catch(auVar13._0_8_);
      lVar5 = *plVar10;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar15;
      __this_03.fields._list = pSVar14;
      __this_03.fields._current = (Il2CppObject *)__this_07;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      if (lVar5 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_04.fields._8_8_ = pIVar15;
    __this_04.fields._list = pSVar14;
    __this_04.fields._current = (Il2CppObject *)__this_07;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    _Unwind_Resume(auVar13._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
             (System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar15;
    __this_01.fields._list = pSVar14;
    __this_01.fields._current = (Il2CppObject *)__this_07;
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
    if ((char)bVar6 == '\0') break;
    if (__this_07 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar9 = UnityEngine_Component__get_gameObject(__this_07,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
  } while ((char)bVar6 == '\0');
  __this_02.fields._8_8_ = pIVar15;
  __this_02.fields._list = pSVar14;
  __this_02.fields._current = (Il2CppObject *)__this_07;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  return;
}


// UI.InGameMenu$$AllowMap
// il2cpp: bool UI_InGameMenu__AllowMap (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c7820

bool_conflict UI_InGameMenu__AllowMap(UI_InGameMenu_o *__this,MethodInfo *method)

{
  long lVar1;
  UI_BasePopup_o *pUVar2;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  UnityEngine_Behaviour_o *__this_05;
  UnityEngine_GameObject_o *__this_06;
  undefined8 extraout_RAX;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_RAX_00;
  int iVar6;
  byte bVar7;
  UI_InGameMenu_o *pUVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_T__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  UnityEngine_Component_o *__this_07;
  
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this = (UI_InGameMenu_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) && (*(long *)(lVar1 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar1 + 0xc0) + 0x11) != '\0') {
      return 0;
    }
    lVar1 = *(long *)(lVar1 + 200);
    if (lVar1 != 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar1 >> 8),*(char *)(lVar1 + 0x11) == '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)method == '\0') {
    UI_InGameMenu__HideAllMenus(__this,method);
    *(undefined1 *)&(__this->fields).SkipAHSSInput = 1;
joined_r0x043c78f4:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    __this_05 = (UnityEngine_Behaviour_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
    pUVar8 = __this;
    if (__this_05 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_05,1,(MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
  else {
    bVar3 = UI_InGameMenu__IsPauseMenuActive(__this,method);
    if ((char)bVar3 != '\0') goto joined_r0x043c78f4;
    UI_InGameMenu__HideAllMenus(__this,method);
    pUVar2 = (__this->fields)._pausePopup;
    pUVar8 = (UI_InGameMenu_o *)0x0;
    if (pUVar2 != (UI_BasePopup_o *)0x0) {
      (*(pUVar2->klass->vtable)._21_Show.methodPtr)(pUVar2,(pUVar2->klass->vtable)._21_Show.method);
      goto joined_r0x043c78f4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  __this_07 = (UnityEngine_Component_o *)0x0;
  __this_00 = (pUVar8->fields)._allPausePopups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    do {
      __this_01.fields._8_8_ = pIVar11;
      __this_01.fields._list = pSVar10;
      __this_01.fields._current = (Il2CppObject *)__this_07;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') {
        iVar6 = 5;
        bVar7 = 0;
        goto label_043c7a14;
      }
      if (__this_07 == (UnityEngine_Component_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
        il2cpp_runtime_helper_022b2c90();
        goto label_043c7a44;
      }
      __this_06 = UnityEngine_Component__get_gameObject(__this_07,(MethodInfo *)0x0);
      if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
      bVar3 = UnityEngine_GameObject__get_activeSelf(__this_06,(MethodInfo *)0x0);
    } while ((char)bVar3 == '\0');
    bVar7 = 1;
    iVar6 = 4;
label_043c7a14:
    __this_02.fields._8_8_ = pIVar11;
    __this_02.fields._list = pSVar10;
    __this_02.fields._current = (Il2CppObject *)__this_07;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    uVar4 = extraout_RAX;
label_043c7a26:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),iVar6 == 4 & bVar7);
  }
label_043c7a44:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._list = pSVar10;
    __this_03.fields._current = (Il2CppObject *)__this_07;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    bVar7 = 0;
    iVar6 = 0;
    uVar4 = extraout_RAX_00;
    if (lVar1 == 0) goto label_043c7a26;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._list = pSVar10;
  __this_04.fields._current = (Il2CppObject *)__this_07;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar9._0_8_);
}


// UI.InGameMenu$$InMenu
// il2cpp: bool UI_InGameMenu__InMenu (const MethodInfo* method);
// 0x43bd970

bool_conflict UI_InGameMenu__InMenu(MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_RAX_01;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Il2CppObject *pIVar9;
  
  if (g_data_057ae3f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae3f7 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) goto label_043bdaf9;
    if (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu)
    goto label_043bdaf9;
    if ((System_Collections_Generic_List_object__o *)plVar1[4] !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)plVar1[4],MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
      while( true ) {
        __this.fields._8_8_ = pIVar8;
        __this.fields._list = pSVar7;
        __this.fields._current = pIVar9;
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
        if ((char)bVar3 == '\0') {
          __this_01.fields._8_8_ = pIVar8;
          __this_01.fields._list = pSVar7;
          __this_01.fields._current = pIVar9;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
          uVar4 = extraout_RAX_00;
          goto label_043bdaba;
        }
        if (pIVar9 == (Il2CppObject *)0x0) break;
        if (*(char *)&pIVar9[9].klass != '\0') {
          __this_00.fields._8_8_ = pIVar8;
          __this_00.fields._list = pSVar7;
          __this_00.fields._current = pIVar9;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
          return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
        }
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_043bdaf9:
    auVar6 = il2cpp_runtime_helper_022b2fd0(plVar1);
    if (auVar6._8_4_ != 1) break;
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = pSVar7;
    __this_02.fields._current = pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar4 = extraout_RAX_01;
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      break;
    }
label_043bdaba:
    if (plVar1[0x13] != 0) {
      if (*(char *)(plVar1[0x13] + 0x40) != '\0') {
        return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
      }
      lVar2 = plVar1[0x14];
      if (lVar2 != 0) {
        return (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),*(char *)(lVar2 + 0x28) != '\0');
      }
    }
  }
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._list = pSVar7;
  __this_03.fields._current = pIVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.InGameMenu$$SetPauseMenu
// il2cpp: void UI_InGameMenu__SetPauseMenu (UI_InGameMenu_o* __this, bool enabled, const MethodInfo* method);
// 0x43c78a0

void UI_InGameMenu__SetPauseMenu(UI_InGameMenu_o *__this,bool_conflict enabled,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  UnityEngine_Behaviour_o *__this_05;
  UnityEngine_GameObject_o *__this_06;
  long *plVar4;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  UI_InGameMenu_o *pUVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  UnityEngine_Component_o *__this_07;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if ((char)enabled == '\0') {
    UI_InGameMenu__HideAllMenus(__this,method_00);
    *(undefined1 *)&(__this->fields).SkipAHSSInput = 1;
  }
  else {
    bVar3 = UI_InGameMenu__IsPauseMenuActive(__this,method_00);
    if ((char)bVar3 == '\0') {
      UI_InGameMenu__HideAllMenus(__this,method_00);
      pUVar1 = (__this->fields)._pausePopup;
      pUVar5 = (UI_InGameMenu_o *)0x0;
      if (pUVar1 == (UI_BasePopup_o *)0x0) goto label_043c7930;
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  __this_05 = (UnityEngine_Behaviour_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponent_Canvas);
  pUVar5 = __this;
  if (__this_05 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(__this_05,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_07 = (UnityEngine_Component_o *)0x0;
  __this_00 = (pUVar5->fields)._allPausePopups;
  if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
label_043c7a44:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ == 1) {
      plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar2 = *plVar4;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar8;
      __this_03.fields._list = pSVar7;
      __this_03.fields._current = (Il2CppObject *)__this_07;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
      if (lVar2 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_04.fields._8_8_ = pIVar8;
    __this_04.fields._list = pSVar7;
    __this_04.fields._current = (Il2CppObject *)__this_07;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
    _Unwind_Resume(auVar6._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc0,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar8;
    __this_01.fields._list = pSVar7;
    __this_01.fields._current = (Il2CppObject *)__this_07;
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc0);
    if ((char)bVar3 == '\0') break;
    if (__this_07 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    __this_06 = UnityEngine_Component__get_gameObject(__this_07,(MethodInfo *)0x0);
    if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar3 = UnityEngine_GameObject__get_activeSelf(__this_06,(MethodInfo *)0x0);
  } while ((char)bVar3 == '\0');
  __this_02.fields._8_8_ = pIVar8;
  __this_02.fields._list = pSVar7;
  __this_02.fields._current = (Il2CppObject *)__this_07;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
  return;
}


// UI.InGameMenu$$ToggleScoreboardMenu
// il2cpp: void UI_InGameMenu__ToggleScoreboardMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c7af0

void UI_InGameMenu__ToggleScoreboardMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_BasePopup_o **ppUVar2;
  uint uVar3;
  UI_BasePopup_array *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  char cVar5;
  bool_conflict bVar6;
  MethodInfo *method_00;
  UnityEngine_Behaviour_o *pUVar7;
  UI_InGameMenu_o *pUVar8;
  UnityEngine_Transform_o *parent;
  UI_BasePopup_o *icon;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *__this_00;
  int32_t score;
  System_String_o *in_RCX;
  MethodInfo_24FB130 **content;
  char extraout_DL;
  char extraout_DL_00;
  System_String_o *title;
  undefined8 extraout_RDX;
  System_String_o *victim;
  System_String_o *killer;
  UI_InGameMenu_o *pUVar9;
  UI_InGameMenu_o *pUVar10;
  long *plVar11;
  UI_BasePopup_o *pUVar12;
  System_Collections_Generic_List_BasePopup__o *__this_01;
  UI_CutsceneDialoguePanel_o *__this_02;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar13;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffff38;
  
  pUVar9 = (UI_InGameMenu_o *)(__this->fields)._scoreboardPopup;
  if (pUVar9 != (UI_InGameMenu_o *)0x0) {
    method = (MethodInfo *)0x0;
    method_00 = (MethodInfo *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      method = (MethodInfo *)0x0;
      bVar6 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        bVar6 = UI_InGameMenu__InMenu(method_00);
        if ((char)bVar6 == '\0') {
          UI_InGameMenu__HideAllMenus(__this,method);
          pUVar12 = (__this->fields)._scoreboardPopup;
          pUVar9 = (UI_InGameMenu_o *)0x0;
          if (pUVar12 == (UI_BasePopup_o *)0x0) goto label_043c7bbd;
          (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
        }
      }
      else {
        pUVar12 = (__this->fields)._scoreboardPopup;
        pUVar9 = (UI_InGameMenu_o *)0x0;
        if (pUVar12 == (UI_BasePopup_o *)0x0) goto label_043c7bbd;
        (*(pUVar12->klass->vtable)._22_Hide.methodPtr)(pUVar12,(pUVar12->klass->vtable)._22_Hide.method);
      }
      if (g_data_057ae3ea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
        g_data_057ae3ea = '\x01';
      }
      method = MethodInfo_Canvas_GetComponent_Canvas;
      pUVar7 = (UnityEngine_Behaviour_o *)
               UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this,(MethodInfo_24E7B40 *)MethodInfo_Canvas_GetComponent_Canvas);
      pUVar9 = __this;
      if (pUVar7 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(pUVar7,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_043c7bbd:
  il2cpp_runtime_helper_022b2c90();
  if ((char)method == '\0') {
    pUVar12 = (pUVar9->fields)._scoreboardPopup;
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      (*(pUVar12->klass->vtable)._22_Hide.methodPtr)(pUVar12,(pUVar12->klass->vtable)._22_Hide.method);
      if (extraout_DL == '\0') {
        return;
      }
      *(undefined1 *)&(pUVar9->fields).SkipAHSSInput = 1;
      return;
    }
  }
  else {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)pUVar9);
    if ((char)bVar6 != '\0') {
      return;
    }
    UI_InGameMenu__HideAllMenus(pUVar9,method);
    pUVar12 = (pUVar9->fields)._scoreboardPopup;
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
      return;
    }
  }
  pUVar10 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = (UI_InGameMenu_o *)(pUVar10->fields)._mapPopup;
  if (pUVar9 != (UI_InGameMenu_o *)0x0) {
    method = (MethodInfo *)0x0;
    pUVar8 = (UI_InGameMenu_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    if (pUVar8 != (UI_InGameMenu_o *)0x0) {
      method = (MethodInfo *)0x0;
      bVar6 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        bVar6 = UI_InGameMenu__InMenu((MethodInfo *)pUVar8);
        if (((char)bVar6 == '\0') && (bVar6 = UI_InGameMenu__AllowMap(pUVar8,method), (char)bVar6 != '\0')) {
          UI_InGameMenu__HideAllMenus(pUVar10,method);
          pUVar12 = (pUVar10->fields)._mapPopup;
          pUVar9 = (UI_InGameMenu_o *)0x0;
          if (pUVar12 == (UI_BasePopup_o *)0x0) goto label_043c7d26;
          (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
        }
      }
      else {
        pUVar12 = (pUVar10->fields)._mapPopup;
        pUVar9 = (UI_InGameMenu_o *)0x0;
        if (pUVar12 == (UI_BasePopup_o *)0x0) goto label_043c7d26;
        (*(pUVar12->klass->vtable)._22_Hide.methodPtr)(pUVar12,(pUVar12->klass->vtable)._22_Hide.method);
      }
      if (g_data_057ae3ea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
        g_data_057ae3ea = '\x01';
      }
      method = MethodInfo_Canvas_GetComponent_Canvas;
      pUVar7 = (UnityEngine_Behaviour_o *)
               UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar10,(MethodInfo_24E7B40 *)MethodInfo_Canvas_GetComponent_Canvas);
      pUVar9 = pUVar10;
      if (pUVar7 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(pUVar7,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_043c7d26:
  il2cpp_runtime_helper_022b2c90();
  if ((char)method == '\0') {
    pUVar12 = (pUVar9->fields)._mapPopup;
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      (*(pUVar12->klass->vtable)._22_Hide.methodPtr)(pUVar12,(pUVar12->klass->vtable)._22_Hide.method);
      if (extraout_DL_00 == '\0') {
        return;
      }
      *(undefined1 *)&(pUVar9->fields).SkipAHSSInput = 1;
      return;
    }
  }
  else {
    pUVar10 = pUVar9;
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)pUVar9);
    if (((char)bVar6 != '\0') || (bVar6 = UI_InGameMenu__AllowMap(pUVar10,method), (char)bVar6 == '\0')) {
      return;
    }
    UI_InGameMenu__HideAllMenus(pUVar9,method);
    pUVar12 = (pUVar9->fields)._mapPopup;
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
      return;
    }
  }
  pUVar9 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  cVar5 = (char)method;
  plVar11 = (long *)pUVar9;
  if (g_data_057ae3f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    plVar11 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f8 = '\x01';
  }
  if (cVar5 == '\0') {
    pUVar12 = (pUVar9->fields)._characterPopup;
    pUVar10 = (UI_InGameMenu_o *)0x0;
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      (*(pUVar12->klass->vtable)._22_Hide.methodPtr)();
      pUVar12 = (pUVar9->fields)._characterChangePopup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar12 = (pUVar9->fields)._characterChangePopup;
        pUVar10 = (UI_InGameMenu_o *)0x0;
        if (pUVar12 == (UI_BasePopup_o *)0x0) goto label_043c7efa;
        (*(pUVar12->klass->vtable)._22_Hide.methodPtr)(pUVar12,(pUVar12->klass->vtable)._22_Hide.method);
      }
      goto joined_r0x043c7eb9;
    }
  }
  else {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)plVar11);
    if ((char)bVar6 == '\0') {
      UI_InGameMenu__HideAllMenus(pUVar9,method);
      pUVar12 = (pUVar9->fields)._characterPopup;
      pUVar10 = (UI_InGameMenu_o *)0x0;
      if (pUVar12 == (UI_BasePopup_o *)0x0) goto label_043c7efa;
      (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    }
joined_r0x043c7eb9:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    method = MethodInfo_Canvas_GetComponent_Canvas;
    pUVar7 = (UnityEngine_Behaviour_o *)
             UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo_24E7B40 *)MethodInfo_Canvas_GetComponent_Canvas);
    pUVar10 = pUVar9;
    if (pUVar7 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(pUVar7,1,(MethodInfo *)0x0);
      return;
    }
  }
label_043c7efa:
  il2cpp_runtime_helper_022b2c90();
  plVar11 = (long *)pUVar10;
  if (g_data_057ae3f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    plVar11 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f9 = '\x01';
  }
  bVar6 = UI_InGameMenu__InMenu((MethodInfo *)plVar11);
  if ((char)bVar6 != '\0') {
    return;
  }
  UI_InGameMenu__HideAllMenus(pUVar10,method);
  pUVar12 = (pUVar10->fields)._characterChangePopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar2 = &(pUVar10->fields)._characterChangePopup;
  icon = (UI_BasePopup_o *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    content = &MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP;
    icon = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(parent,0,MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    (pUVar10->fields)._characterChangePopup = icon;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    in_RCX = MethodInfo_Void_Add;
    __this_01 = (pUVar10->fields)._popups;
    if (__this_01 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c8043;
    icon = (pUVar10->fields)._characterChangePopup;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_01->fields)._items;
    content = (MethodInfo_24FB130 **)in_RCX;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_043c8043;
    uVar3 = (__this_01->fields)._size;
    if (uVar3 < (uint)pUVar4->max_length) {
      content = (MethodInfo_24FB130 **)(ulong)(uVar3 + 1);
      (__this_01->fields)._size = uVar3 + 1;
      pUVar4->m_Items[(int)uVar3] = icon;
      il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
      pUVar12 = *ppUVar2;
      if (pUVar12 == (UI_BasePopup_o *)0x0) {
        __this_01 = (System_Collections_Generic_List_BasePopup__o *)0x0;
        goto label_043c8043;
      }
      goto label_043c802b;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)icon,
               *(MethodInfo_362C220 **)(*(long *)((long)in_RCX[1].monitor + 0xc0) + 0x70));
  }
  pUVar12 = *ppUVar2;
  __this_01 = (System_Collections_Generic_List_BasePopup__o *)0x0;
  content = (MethodInfo_24FB130 **)in_RCX;
  if (pUVar12 != (UI_BasePopup_o *)0x0) {
label_043c802b:
    (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
    return;
  }
label_043c8043:
  il2cpp_runtime_helper_022b2c90();
  __this_02 = __this_01[9].monitor;
  if (__this_02 != (UI_CutsceneDialoguePanel_o *)0x0) {
    UI_CutsceneDialoguePanel__Show
              (__this_02,(System_String_o *)icon,title,(System_String_o *)content,(uint)in_R8 & 0xff,in_R9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  score = (int32_t)content;
  pUVar9 = (UI_InGameMenu_o *)__this_02[1].fields._contentLabel;
  if (pUVar9 != (UI_InGameMenu_o *)0x0) {
    vtableDispatch = (((UnityEngine_UI_Text_c *)pUVar9->klass)->vtable)._22_get_color.methodPtr;
    (*vtableDispatch)
              (pUVar9,(((UnityEngine_UI_Text_c *)pUVar9->klass)->vtable)._22_get_color.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)(pUVar9->fields)._showingBlood != '\0') {
    return;
  }
  *(undefined1 *)&(pUVar9->fields)._showingBlood = 1;
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  pUVar8 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  pUVar10 = pUVar8;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor
            ((UI_InGameMenu__WaitAndShowBlood_d__104_o *)pUVar8,0,(MethodInfo *)0x0);
  if (pUVar8 != (UI_InGameMenu_o *)0x0) {
    (pUVar8->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)pUVar9;
    il2cpp_runtime_helper_022b4080(&(pUVar8->fields)._popups,pUVar9);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)pUVar9,(System_Collections_IEnumerator_o *)pUVar8,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_00 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  killer = (System_String_o *)0x0;
  pUVar13 = __this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0) {
    (__this_00->fields).__4__this = pUVar10;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pUVar10);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar13[8].fields.__4__this;
  if (pUVar9 != (UI_InGameMenu_o *)0x0) {
    (*pUVar9->klass[2].vtable._6_HideAllPopups.methodPtr)();
    pUVar9 = pUVar13[8].fields.__4__this;
    if (pUVar9 != (UI_InGameMenu_o *)0x0) {
      (**(code **)&pUVar9->klass[1]._2.cctor_finished)(pUVar9,pUVar9->klass[1]._2.cctor_thread);
      *(undefined4 *)&pUVar13[0xd].fields.field_0x4 = 0x40000000;
      return;
    }
  }
  pUVar9 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UI_InGameMenu__ShowKillFeed_42c8210(pUVar9,killer,victim,score,in_R8,-1,-1,in_stack_ffffffffffffff38);
  return;
}


// UI.InGameMenu$$SetScoreboardMenu
// il2cpp: void UI_InGameMenu__SetScoreboardMenu (UI_InGameMenu_o* __this, bool enabled, bool fromClick, const MethodInfo* method);
// 0x43c7bd0

void UI_InGameMenu__SetScoreboardMenu
               (UI_InGameMenu_o *__this,bool_conflict enabled,bool_conflict fromClick,MethodInfo *method)

{
  int32_t *piVar1;
  UI_BasePopup_o **ppUVar2;
  uint uVar3;
  UI_BasePopup_array *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  char cVar5;
  bool_conflict bVar6;
  UI_InGameMenu_o *pUVar7;
  UnityEngine_Behaviour_o *pUVar8;
  UnityEngine_Transform_o *parent;
  UI_BasePopup_o *icon;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *__this_00;
  int32_t score;
  MethodInfo_24FB130 **content;
  char extraout_DL;
  System_String_o *title;
  undefined8 extraout_RDX;
  System_String_o *victim;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  System_String_o *killer;
  UI_InGameMenu_o *pUVar9;
  UI_InGameMenu_o *pUVar10;
  long *plVar11;
  UI_BasePopup_o *pUVar12;
  System_Collections_Generic_List_BasePopup__o *__this_01;
  UI_CutsceneDialoguePanel_o *__this_02;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar13;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffff40;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if ((char)enabled == '\0') {
    pUVar12 = (__this->fields)._scoreboardPopup;
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      (*(pUVar12->klass->vtable)._22_Hide.methodPtr)(pUVar12,(pUVar12->klass->vtable)._22_Hide.method);
      if ((char)fromClick == '\0') {
        return;
      }
      *(undefined1 *)&(__this->fields).SkipAHSSInput = 1;
      return;
    }
  }
  else {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)__this);
    if ((char)bVar6 != '\0') {
      return;
    }
    UI_InGameMenu__HideAllMenus(__this,method_00);
    pUVar12 = (__this->fields)._scoreboardPopup;
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
      return;
    }
  }
  pUVar9 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = (UI_InGameMenu_o *)(pUVar9->fields)._mapPopup;
  if (pUVar10 != (UI_InGameMenu_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pUVar7 = (UI_InGameMenu_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    if (pUVar7 != (UI_InGameMenu_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      bVar6 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        bVar6 = UI_InGameMenu__InMenu((MethodInfo *)pUVar7);
        if (((char)bVar6 == '\0') && (bVar6 = UI_InGameMenu__AllowMap(pUVar7,method_00), (char)bVar6 != '\0'))
        {
          UI_InGameMenu__HideAllMenus(pUVar9,method_00);
          pUVar12 = (pUVar9->fields)._mapPopup;
          pUVar10 = (UI_InGameMenu_o *)0x0;
          if (pUVar12 == (UI_BasePopup_o *)0x0) goto label_043c7d26;
          (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
        }
      }
      else {
        pUVar12 = (pUVar9->fields)._mapPopup;
        pUVar10 = (UI_InGameMenu_o *)0x0;
        if (pUVar12 == (UI_BasePopup_o *)0x0) goto label_043c7d26;
        (*(pUVar12->klass->vtable)._22_Hide.methodPtr)(pUVar12,(pUVar12->klass->vtable)._22_Hide.method);
      }
      if (g_data_057ae3ea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
        g_data_057ae3ea = '\x01';
      }
      method_00 = MethodInfo_Canvas_GetComponent_Canvas;
      pUVar8 = (UnityEngine_Behaviour_o *)
               UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar9,(MethodInfo_24E7B40 *)MethodInfo_Canvas_GetComponent_Canvas);
      pUVar10 = pUVar9;
      if (pUVar8 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(pUVar8,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_043c7d26:
  il2cpp_runtime_helper_022b2c90();
  if ((char)method_00 == '\0') {
    pUVar12 = (pUVar10->fields)._mapPopup;
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      (*(pUVar12->klass->vtable)._22_Hide.methodPtr)(pUVar12,(pUVar12->klass->vtable)._22_Hide.method);
      if (extraout_DL == '\0') {
        return;
      }
      *(undefined1 *)&(pUVar10->fields).SkipAHSSInput = 1;
      return;
    }
  }
  else {
    pUVar9 = pUVar10;
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)pUVar10);
    if (((char)bVar6 != '\0') || (bVar6 = UI_InGameMenu__AllowMap(pUVar9,method_00), (char)bVar6 == '\0')) {
      return;
    }
    UI_InGameMenu__HideAllMenus(pUVar10,method_00);
    pUVar12 = (pUVar10->fields)._mapPopup;
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
      return;
    }
  }
  pUVar10 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  cVar5 = (char)method_00;
  plVar11 = (long *)pUVar10;
  if (g_data_057ae3f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    plVar11 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f8 = '\x01';
  }
  if (cVar5 == '\0') {
    pUVar12 = (pUVar10->fields)._characterPopup;
    pUVar9 = (UI_InGameMenu_o *)0x0;
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      (*(pUVar12->klass->vtable)._22_Hide.methodPtr)();
      pUVar12 = (pUVar10->fields)._characterChangePopup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (MethodInfo *)0x0;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar12 = (pUVar10->fields)._characterChangePopup;
        pUVar9 = (UI_InGameMenu_o *)0x0;
        if (pUVar12 == (UI_BasePopup_o *)0x0) goto label_043c7efa;
        (*(pUVar12->klass->vtable)._22_Hide.methodPtr)(pUVar12,(pUVar12->klass->vtable)._22_Hide.method);
      }
      goto joined_r0x043c7eb9;
    }
  }
  else {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)plVar11);
    if ((char)bVar6 == '\0') {
      UI_InGameMenu__HideAllMenus(pUVar10,method_00);
      pUVar12 = (pUVar10->fields)._characterPopup;
      pUVar9 = (UI_InGameMenu_o *)0x0;
      if (pUVar12 == (UI_BasePopup_o *)0x0) goto label_043c7efa;
      (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    }
joined_r0x043c7eb9:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    method_00 = MethodInfo_Canvas_GetComponent_Canvas;
    pUVar8 = (UnityEngine_Behaviour_o *)
             UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar10,(MethodInfo_24E7B40 *)MethodInfo_Canvas_GetComponent_Canvas);
    pUVar9 = pUVar10;
    if (pUVar8 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(pUVar8,1,(MethodInfo *)0x0);
      return;
    }
  }
label_043c7efa:
  il2cpp_runtime_helper_022b2c90();
  plVar11 = (long *)pUVar9;
  if (g_data_057ae3f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    plVar11 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f9 = '\x01';
  }
  bVar6 = UI_InGameMenu__InMenu((MethodInfo *)plVar11);
  if ((char)bVar6 != '\0') {
    return;
  }
  UI_InGameMenu__HideAllMenus(pUVar9,method_00);
  pUVar12 = (pUVar9->fields)._characterChangePopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar2 = &(pUVar9->fields)._characterChangePopup;
  icon = (UI_BasePopup_o *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    content = &MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP;
    icon = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(parent,0,MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    (pUVar9->fields)._characterChangePopup = icon;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    method = MethodInfo_Void_Add;
    __this_01 = (pUVar9->fields)._popups;
    if (__this_01 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c8043;
    icon = (pUVar9->fields)._characterChangePopup;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_01->fields)._items;
    content = (MethodInfo_24FB130 **)method;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_043c8043;
    uVar3 = (__this_01->fields)._size;
    if (uVar3 < (uint)pUVar4->max_length) {
      content = (MethodInfo_24FB130 **)(ulong)(uVar3 + 1);
      (__this_01->fields)._size = uVar3 + 1;
      pUVar4->m_Items[(int)uVar3] = icon;
      il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
      pUVar12 = *ppUVar2;
      if (pUVar12 == (UI_BasePopup_o *)0x0) {
        __this_01 = (System_Collections_Generic_List_BasePopup__o *)0x0;
        goto label_043c8043;
      }
      goto label_043c802b;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)icon,
               (MethodInfo_362C220 *)method->klass->rgctx_data[0xe].method);
  }
  pUVar12 = *ppUVar2;
  __this_01 = (System_Collections_Generic_List_BasePopup__o *)0x0;
  content = (MethodInfo_24FB130 **)method;
  if (pUVar12 != (UI_BasePopup_o *)0x0) {
label_043c802b:
    (*(pUVar12->klass->vtable)._21_Show.methodPtr)(pUVar12,(pUVar12->klass->vtable)._21_Show.method);
    return;
  }
label_043c8043:
  il2cpp_runtime_helper_022b2c90();
  __this_02 = __this_01[9].monitor;
  if (__this_02 != (UI_CutsceneDialoguePanel_o *)0x0) {
    UI_CutsceneDialoguePanel__Show
              (__this_02,(System_String_o *)icon,title,(System_String_o *)content,(uint)in_R8 & 0xff,in_R9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  score = (int32_t)content;
  pUVar10 = (UI_InGameMenu_o *)__this_02[1].fields._contentLabel;
  if (pUVar10 != (UI_InGameMenu_o *)0x0) {
    vtableDispatch = (((UnityEngine_UI_Text_c *)pUVar10->klass)->vtable)._22_get_color.methodPtr;
    (*vtableDispatch)
              (pUVar10,(((UnityEngine_UI_Text_c *)pUVar10->klass)->vtable)._22_get_color.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)(pUVar10->fields)._showingBlood != '\0') {
    return;
  }
  *(undefined1 *)&(pUVar10->fields)._showingBlood = 1;
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  pUVar7 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  pUVar9 = pUVar7;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor
            ((UI_InGameMenu__WaitAndShowBlood_d__104_o *)pUVar7,0,(MethodInfo *)0x0);
  if (pUVar7 != (UI_InGameMenu_o *)0x0) {
    (pUVar7->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)pUVar10;
    il2cpp_runtime_helper_022b4080(&(pUVar7->fields)._popups,pUVar10);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)pUVar10,(System_Collections_IEnumerator_o *)pUVar7,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_00 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  killer = (System_String_o *)0x0;
  pUVar13 = __this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0) {
    (__this_00->fields).__4__this = pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pUVar9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar13[8].fields.__4__this;
  if (pUVar10 != (UI_InGameMenu_o *)0x0) {
    (*pUVar10->klass[2].vtable._6_HideAllPopups.methodPtr)();
    pUVar10 = pUVar13[8].fields.__4__this;
    if (pUVar10 != (UI_InGameMenu_o *)0x0) {
      (**(code **)&pUVar10->klass[1]._2.cctor_finished)(pUVar10,pUVar10->klass[1]._2.cctor_thread);
      *(undefined4 *)&pUVar13[0xd].fields.field_0x4 = 0x40000000;
      return;
    }
  }
  pUVar10 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UI_InGameMenu__ShowKillFeed_42c8210(pUVar10,killer,victim,score,in_R8,-1,-1,in_stack_ffffffffffffff40);
  return;
}


// UI.InGameMenu$$ToggleMapMenu
// il2cpp: void UI_InGameMenu__ToggleMapMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c7c50

void UI_InGameMenu__ToggleMapMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_BasePopup_o **ppUVar2;
  uint uVar3;
  UI_BasePopup_array *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  char cVar5;
  bool_conflict bVar6;
  UI_InGameMenu_o *pUVar7;
  UnityEngine_Behaviour_o *pUVar8;
  UnityEngine_Transform_o *parent;
  UI_BasePopup_o *icon;
  UI_InGameMenu_o *__this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *__this_01;
  int32_t score;
  System_String_o *in_RCX;
  MethodInfo_24FB130 **content;
  char extraout_DL;
  System_String_o *title;
  undefined8 extraout_RDX;
  System_String_o *victim;
  System_String_o *killer;
  UI_InGameMenu_o *pUVar9;
  long *plVar10;
  UI_BasePopup_o *pUVar11;
  System_Collections_Generic_List_BasePopup__o *__this_02;
  UI_CutsceneDialoguePanel_o *__this_03;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar12;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffff58;
  
  pUVar9 = (UI_InGameMenu_o *)(__this->fields)._mapPopup;
  if (pUVar9 != (UI_InGameMenu_o *)0x0) {
    method = (MethodInfo *)0x0;
    pUVar7 = (UI_InGameMenu_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    if (pUVar7 != (UI_InGameMenu_o *)0x0) {
      method = (MethodInfo *)0x0;
      bVar6 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        bVar6 = UI_InGameMenu__InMenu((MethodInfo *)pUVar7);
        if (((char)bVar6 == '\0') && (bVar6 = UI_InGameMenu__AllowMap(pUVar7,method), (char)bVar6 != '\0')) {
          UI_InGameMenu__HideAllMenus(__this,method);
          pUVar11 = (__this->fields)._mapPopup;
          pUVar9 = (UI_InGameMenu_o *)0x0;
          if (pUVar11 == (UI_BasePopup_o *)0x0) goto label_043c7d26;
          (*(pUVar11->klass->vtable)._21_Show.methodPtr)(pUVar11,(pUVar11->klass->vtable)._21_Show.method);
        }
      }
      else {
        pUVar11 = (__this->fields)._mapPopup;
        pUVar9 = (UI_InGameMenu_o *)0x0;
        if (pUVar11 == (UI_BasePopup_o *)0x0) goto label_043c7d26;
        (*(pUVar11->klass->vtable)._22_Hide.methodPtr)(pUVar11,(pUVar11->klass->vtable)._22_Hide.method);
      }
      if (g_data_057ae3ea == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
        g_data_057ae3ea = '\x01';
      }
      method = MethodInfo_Canvas_GetComponent_Canvas;
      pUVar8 = (UnityEngine_Behaviour_o *)
               UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this,(MethodInfo_24E7B40 *)MethodInfo_Canvas_GetComponent_Canvas);
      pUVar9 = __this;
      if (pUVar8 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(pUVar8,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_043c7d26:
  il2cpp_runtime_helper_022b2c90();
  if ((char)method == '\0') {
    pUVar11 = (pUVar9->fields)._mapPopup;
    if (pUVar11 != (UI_BasePopup_o *)0x0) {
      (*(pUVar11->klass->vtable)._22_Hide.methodPtr)(pUVar11,(pUVar11->klass->vtable)._22_Hide.method);
      if (extraout_DL == '\0') {
        return;
      }
      *(undefined1 *)&(pUVar9->fields).SkipAHSSInput = 1;
      return;
    }
  }
  else {
    pUVar7 = pUVar9;
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)pUVar9);
    if (((char)bVar6 != '\0') || (bVar6 = UI_InGameMenu__AllowMap(pUVar7,method), (char)bVar6 == '\0')) {
      return;
    }
    UI_InGameMenu__HideAllMenus(pUVar9,method);
    pUVar11 = (pUVar9->fields)._mapPopup;
    if (pUVar11 != (UI_BasePopup_o *)0x0) {
      (*(pUVar11->klass->vtable)._21_Show.methodPtr)(pUVar11,(pUVar11->klass->vtable)._21_Show.method);
      return;
    }
  }
  pUVar9 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  cVar5 = (char)method;
  plVar10 = (long *)pUVar9;
  if (g_data_057ae3f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    plVar10 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f8 = '\x01';
  }
  if (cVar5 == '\0') {
    pUVar11 = (pUVar9->fields)._characterPopup;
    pUVar7 = (UI_InGameMenu_o *)0x0;
    if (pUVar11 != (UI_BasePopup_o *)0x0) {
      (*(pUVar11->klass->vtable)._22_Hide.methodPtr)();
      pUVar11 = (pUVar9->fields)._characterChangePopup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar11 = (pUVar9->fields)._characterChangePopup;
        pUVar7 = (UI_InGameMenu_o *)0x0;
        if (pUVar11 == (UI_BasePopup_o *)0x0) goto label_043c7efa;
        (*(pUVar11->klass->vtable)._22_Hide.methodPtr)(pUVar11,(pUVar11->klass->vtable)._22_Hide.method);
      }
      goto joined_r0x043c7eb9;
    }
  }
  else {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)plVar10);
    if ((char)bVar6 == '\0') {
      UI_InGameMenu__HideAllMenus(pUVar9,method);
      pUVar11 = (pUVar9->fields)._characterPopup;
      pUVar7 = (UI_InGameMenu_o *)0x0;
      if (pUVar11 == (UI_BasePopup_o *)0x0) goto label_043c7efa;
      (*(pUVar11->klass->vtable)._21_Show.methodPtr)(pUVar11,(pUVar11->klass->vtable)._21_Show.method);
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    }
joined_r0x043c7eb9:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    method = MethodInfo_Canvas_GetComponent_Canvas;
    pUVar8 = (UnityEngine_Behaviour_o *)
             UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo_24E7B40 *)MethodInfo_Canvas_GetComponent_Canvas);
    pUVar7 = pUVar9;
    if (pUVar8 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(pUVar8,1,(MethodInfo *)0x0);
      return;
    }
  }
label_043c7efa:
  il2cpp_runtime_helper_022b2c90();
  plVar10 = (long *)pUVar7;
  if (g_data_057ae3f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    plVar10 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f9 = '\x01';
  }
  bVar6 = UI_InGameMenu__InMenu((MethodInfo *)plVar10);
  if ((char)bVar6 != '\0') {
    return;
  }
  UI_InGameMenu__HideAllMenus(pUVar7,method);
  pUVar11 = (pUVar7->fields)._characterChangePopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar2 = &(pUVar7->fields)._characterChangePopup;
  icon = (UI_BasePopup_o *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    content = &MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP;
    icon = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(parent,0,MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    (pUVar7->fields)._characterChangePopup = icon;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    in_RCX = MethodInfo_Void_Add;
    __this_02 = (pUVar7->fields)._popups;
    if (__this_02 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c8043;
    icon = (pUVar7->fields)._characterChangePopup;
    piVar1 = &(__this_02->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_02->fields)._items;
    content = (MethodInfo_24FB130 **)in_RCX;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_043c8043;
    uVar3 = (__this_02->fields)._size;
    if (uVar3 < (uint)pUVar4->max_length) {
      content = (MethodInfo_24FB130 **)(ulong)(uVar3 + 1);
      (__this_02->fields)._size = uVar3 + 1;
      pUVar4->m_Items[(int)uVar3] = icon;
      il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
      pUVar11 = *ppUVar2;
      if (pUVar11 == (UI_BasePopup_o *)0x0) {
        __this_02 = (System_Collections_Generic_List_BasePopup__o *)0x0;
        goto label_043c8043;
      }
      goto label_043c802b;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)icon,
               *(MethodInfo_362C220 **)(*(long *)((long)in_RCX[1].monitor + 0xc0) + 0x70));
  }
  pUVar11 = *ppUVar2;
  __this_02 = (System_Collections_Generic_List_BasePopup__o *)0x0;
  content = (MethodInfo_24FB130 **)in_RCX;
  if (pUVar11 != (UI_BasePopup_o *)0x0) {
label_043c802b:
    (*(pUVar11->klass->vtable)._21_Show.methodPtr)(pUVar11,(pUVar11->klass->vtable)._21_Show.method);
    return;
  }
label_043c8043:
  il2cpp_runtime_helper_022b2c90();
  __this_03 = __this_02[9].monitor;
  if (__this_03 != (UI_CutsceneDialoguePanel_o *)0x0) {
    UI_CutsceneDialoguePanel__Show
              (__this_03,(System_String_o *)icon,title,(System_String_o *)content,(uint)in_R8 & 0xff,in_R9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  score = (int32_t)content;
  pUVar9 = (UI_InGameMenu_o *)__this_03[1].fields._contentLabel;
  if (pUVar9 != (UI_InGameMenu_o *)0x0) {
    vtableDispatch = (((UnityEngine_UI_Text_c *)pUVar9->klass)->vtable)._22_get_color.methodPtr;
    (*vtableDispatch)
              (pUVar9,(((UnityEngine_UI_Text_c *)pUVar9->klass)->vtable)._22_get_color.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)(pUVar9->fields)._showingBlood != '\0') {
    return;
  }
  *(undefined1 *)&(pUVar9->fields)._showingBlood = 1;
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_00 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  pUVar7 = __this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor
            ((UI_InGameMenu__WaitAndShowBlood_d__104_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    (__this_00->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._popups,pUVar9);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)pUVar9,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_01 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  killer = (System_String_o *)0x0;
  pUVar12 = __this_01;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0) {
    (__this_01->fields).__4__this = pUVar7;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,pUVar7);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar12[8].fields.__4__this;
  if (pUVar9 != (UI_InGameMenu_o *)0x0) {
    (*pUVar9->klass[2].vtable._6_HideAllPopups.methodPtr)();
    pUVar9 = pUVar12[8].fields.__4__this;
    if (pUVar9 != (UI_InGameMenu_o *)0x0) {
      (**(code **)&pUVar9->klass[1]._2.cctor_finished)(pUVar9,pUVar9->klass[1]._2.cctor_thread);
      *(undefined4 *)&pUVar12[0xd].fields.field_0x4 = 0x40000000;
      return;
    }
  }
  pUVar9 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UI_InGameMenu__ShowKillFeed_42c8210(pUVar9,killer,victim,score,in_R8,-1,-1,in_stack_ffffffffffffff58);
  return;
}


// UI.InGameMenu$$SetMapMenu
// il2cpp: void UI_InGameMenu__SetMapMenu (UI_InGameMenu_o* __this, bool enabled, bool fromClick, const MethodInfo* method);
// 0x43c7d30

void UI_InGameMenu__SetMapMenu
               (UI_InGameMenu_o *__this,bool_conflict enabled,bool_conflict fromClick,MethodInfo *method)

{
  int32_t *piVar1;
  UI_BasePopup_o **ppUVar2;
  uint uVar3;
  UI_BasePopup_array *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  char cVar5;
  bool_conflict bVar6;
  UnityEngine_Behaviour_o *__this_00;
  UnityEngine_Transform_o *parent;
  UI_BasePopup_o *icon;
  UI_InGameMenu_o *__this_01;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *__this_02;
  int32_t score;
  MethodInfo_24FB130 **content;
  System_String_o *title;
  undefined8 extraout_RDX;
  System_String_o *victim;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  System_String_o *killer;
  UI_InGameMenu_o *pUVar7;
  long *plVar8;
  UI_InGameMenu_o *pUVar9;
  UI_BasePopup_o *pUVar10;
  System_Collections_Generic_List_BasePopup__o *__this_03;
  UI_CutsceneDialoguePanel_o *__this_04;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar11;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffff60;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if ((char)enabled == '\0') {
    pUVar10 = (__this->fields)._mapPopup;
    if (pUVar10 != (UI_BasePopup_o *)0x0) {
      (*(pUVar10->klass->vtable)._22_Hide.methodPtr)(pUVar10,(pUVar10->klass->vtable)._22_Hide.method);
      if ((char)fromClick == '\0') {
        return;
      }
      *(undefined1 *)&(__this->fields).SkipAHSSInput = 1;
      return;
    }
  }
  else {
    pUVar7 = __this;
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)__this);
    if (((char)bVar6 != '\0') || (bVar6 = UI_InGameMenu__AllowMap(pUVar7,method_00), (char)bVar6 == '\0')) {
      return;
    }
    UI_InGameMenu__HideAllMenus(__this,method_00);
    pUVar10 = (__this->fields)._mapPopup;
    if (pUVar10 != (UI_BasePopup_o *)0x0) {
      (*(pUVar10->klass->vtable)._21_Show.methodPtr)(pUVar10,(pUVar10->klass->vtable)._21_Show.method);
      return;
    }
  }
  pUVar7 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  cVar5 = (char)method_00;
  plVar8 = (long *)pUVar7;
  if (g_data_057ae3f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    plVar8 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f8 = '\x01';
  }
  if (cVar5 == '\0') {
    pUVar10 = (pUVar7->fields)._characterPopup;
    pUVar9 = (UI_InGameMenu_o *)0x0;
    if (pUVar10 != (UI_BasePopup_o *)0x0) {
      (*(pUVar10->klass->vtable)._22_Hide.methodPtr)();
      pUVar10 = (pUVar7->fields)._characterChangePopup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (MethodInfo *)0x0;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar10 = (pUVar7->fields)._characterChangePopup;
        pUVar9 = (UI_InGameMenu_o *)0x0;
        if (pUVar10 == (UI_BasePopup_o *)0x0) goto label_043c7efa;
        (*(pUVar10->klass->vtable)._22_Hide.methodPtr)(pUVar10,(pUVar10->klass->vtable)._22_Hide.method);
      }
      goto joined_r0x043c7eb9;
    }
  }
  else {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)plVar8);
    if ((char)bVar6 == '\0') {
      UI_InGameMenu__HideAllMenus(pUVar7,method_00);
      pUVar10 = (pUVar7->fields)._characterPopup;
      pUVar9 = (UI_InGameMenu_o *)0x0;
      if (pUVar10 == (UI_BasePopup_o *)0x0) goto label_043c7efa;
      (*(pUVar10->klass->vtable)._21_Show.methodPtr)(pUVar10,(pUVar10->klass->vtable)._21_Show.method);
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    }
joined_r0x043c7eb9:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    method_00 = MethodInfo_Canvas_GetComponent_Canvas;
    __this_00 = (UnityEngine_Behaviour_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar7,(MethodInfo_24E7B40 *)MethodInfo_Canvas_GetComponent_Canvas);
    pUVar9 = pUVar7;
    if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
label_043c7efa:
  il2cpp_runtime_helper_022b2c90();
  plVar8 = (long *)pUVar9;
  if (g_data_057ae3f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    plVar8 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f9 = '\x01';
  }
  bVar6 = UI_InGameMenu__InMenu((MethodInfo *)plVar8);
  if ((char)bVar6 != '\0') {
    return;
  }
  UI_InGameMenu__HideAllMenus(pUVar9,method_00);
  pUVar10 = (pUVar9->fields)._characterChangePopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar2 = &(pUVar9->fields)._characterChangePopup;
  icon = (UI_BasePopup_o *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    content = &MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP;
    icon = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(parent,0,MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    (pUVar9->fields)._characterChangePopup = icon;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    method = MethodInfo_Void_Add;
    __this_03 = (pUVar9->fields)._popups;
    if (__this_03 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c8043;
    icon = (pUVar9->fields)._characterChangePopup;
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_03->fields)._items;
    content = (MethodInfo_24FB130 **)method;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_043c8043;
    uVar3 = (__this_03->fields)._size;
    if (uVar3 < (uint)pUVar4->max_length) {
      content = (MethodInfo_24FB130 **)(ulong)(uVar3 + 1);
      (__this_03->fields)._size = uVar3 + 1;
      pUVar4->m_Items[(int)uVar3] = icon;
      il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
      pUVar10 = *ppUVar2;
      if (pUVar10 == (UI_BasePopup_o *)0x0) {
        __this_03 = (System_Collections_Generic_List_BasePopup__o *)0x0;
        goto label_043c8043;
      }
      goto label_043c802b;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)icon,
               (MethodInfo_362C220 *)method->klass->rgctx_data[0xe].method);
  }
  pUVar10 = *ppUVar2;
  __this_03 = (System_Collections_Generic_List_BasePopup__o *)0x0;
  content = (MethodInfo_24FB130 **)method;
  if (pUVar10 != (UI_BasePopup_o *)0x0) {
label_043c802b:
    (*(pUVar10->klass->vtable)._21_Show.methodPtr)(pUVar10,(pUVar10->klass->vtable)._21_Show.method);
    return;
  }
label_043c8043:
  il2cpp_runtime_helper_022b2c90();
  __this_04 = __this_03[9].monitor;
  if (__this_04 != (UI_CutsceneDialoguePanel_o *)0x0) {
    UI_CutsceneDialoguePanel__Show
              (__this_04,(System_String_o *)icon,title,(System_String_o *)content,(uint)in_R8 & 0xff,in_R9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  score = (int32_t)content;
  pUVar7 = (UI_InGameMenu_o *)__this_04[1].fields._contentLabel;
  if (pUVar7 != (UI_InGameMenu_o *)0x0) {
    vtableDispatch = (((UnityEngine_UI_Text_c *)pUVar7->klass)->vtable)._22_get_color.methodPtr;
    (*vtableDispatch)
              (pUVar7,(((UnityEngine_UI_Text_c *)pUVar7->klass)->vtable)._22_get_color.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)(pUVar7->fields)._showingBlood != '\0') {
    return;
  }
  *(undefined1 *)&(pUVar7->fields)._showingBlood = 1;
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_01 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  pUVar9 = __this_01;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor
            ((UI_InGameMenu__WaitAndShowBlood_d__104_o *)__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (UI_InGameMenu_o *)0x0) {
    (__this_01->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)pUVar7;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields)._popups,pUVar7);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)pUVar7,(System_Collections_IEnumerator_o *)__this_01,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_02 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  killer = (System_String_o *)0x0;
  pUVar11 = __this_02;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor(__this_02,0,(MethodInfo *)0x0);
  if (__this_02 != (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0) {
    (__this_02->fields).__4__this = pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).__4__this,pUVar9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar11[8].fields.__4__this;
  if (pUVar7 != (UI_InGameMenu_o *)0x0) {
    (*pUVar7->klass[2].vtable._6_HideAllPopups.methodPtr)();
    pUVar7 = pUVar11[8].fields.__4__this;
    if (pUVar7 != (UI_InGameMenu_o *)0x0) {
      (**(code **)&pUVar7->klass[1]._2.cctor_finished)(pUVar7,pUVar7->klass[1]._2.cctor_thread);
      *(undefined4 *)&pUVar11[0xd].fields.field_0x4 = 0x40000000;
      return;
    }
  }
  pUVar7 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UI_InGameMenu__ShowKillFeed_42c8210(pUVar7,killer,victim,score,in_R8,-1,-1,in_stack_ffffffffffffff60);
  return;
}


// UI.InGameMenu$$SetCharacterMenu
// il2cpp: void UI_InGameMenu__SetCharacterMenu (UI_InGameMenu_o* __this, bool enabled, const MethodInfo* method);
// 0x43c7db0

void UI_InGameMenu__SetCharacterMenu(UI_InGameMenu_o *__this,bool_conflict enabled,MethodInfo *method)

{
  int32_t *piVar1;
  UI_BasePopup_o **ppUVar2;
  uint uVar3;
  UI_BasePopup_array *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar5;
  UnityEngine_Behaviour_o *__this_00;
  UnityEngine_Transform_o *parent;
  UI_BasePopup_o *icon;
  UI_InGameMenu_o *__this_01;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *__this_02;
  int32_t score;
  System_String_o *in_RCX;
  MethodInfo_24FB130 **content;
  MethodInfo *extraout_RDX;
  System_String_o *title;
  undefined8 extraout_RDX_00;
  System_String_o *victim;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  System_String_o *killer;
  long *plVar6;
  UI_InGameMenu_o *pUVar7;
  UI_BasePopup_o *pUVar8;
  System_Collections_Generic_List_BasePopup__o *__this_03;
  UI_CutsceneDialoguePanel_o *__this_04;
  UI_InGameMenu_o *pUVar9;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar10;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffff78;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  plVar6 = (long *)__this;
  if (g_data_057ae3f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    plVar6 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f8 = '\x01';
    method = extraout_RDX;
  }
  if ((char)enabled == '\0') {
    pUVar8 = (__this->fields)._characterPopup;
    pUVar7 = (UI_InGameMenu_o *)0x0;
    if (pUVar8 != (UI_BasePopup_o *)0x0) {
      (*(pUVar8->klass->vtable)._22_Hide.methodPtr)(pUVar8,(pUVar8->klass->vtable)._22_Hide.method,method);
      pUVar8 = (__this->fields)._characterChangePopup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (MethodInfo *)0x0;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pUVar8 = (__this->fields)._characterChangePopup;
        pUVar7 = (UI_InGameMenu_o *)0x0;
        if (pUVar8 == (UI_BasePopup_o *)0x0) goto label_043c7efa;
        (*(pUVar8->klass->vtable)._22_Hide.methodPtr)(pUVar8,(pUVar8->klass->vtable)._22_Hide.method);
      }
      goto joined_r0x043c7eb9;
    }
  }
  else {
    bVar5 = UI_InGameMenu__InMenu((MethodInfo *)plVar6);
    if ((char)bVar5 == '\0') {
      UI_InGameMenu__HideAllMenus(__this,method_00);
      pUVar8 = (__this->fields)._characterPopup;
      pUVar7 = (UI_InGameMenu_o *)0x0;
      if (pUVar8 == (UI_BasePopup_o *)0x0) goto label_043c7efa;
      (*(pUVar8->klass->vtable)._21_Show.methodPtr)(pUVar8,(pUVar8->klass->vtable)._21_Show.method);
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
    }
joined_r0x043c7eb9:
    if (g_data_057ae3ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
      g_data_057ae3ea = '\x01';
    }
    method_00 = MethodInfo_Canvas_GetComponent_Canvas;
    __this_00 = (UnityEngine_Behaviour_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,(MethodInfo_24E7B40 *)MethodInfo_Canvas_GetComponent_Canvas);
    pUVar7 = __this;
    if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
label_043c7efa:
  il2cpp_runtime_helper_022b2c90();
  plVar6 = (long *)pUVar7;
  if (g_data_057ae3f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    plVar6 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f9 = '\x01';
  }
  bVar5 = UI_InGameMenu__InMenu((MethodInfo *)plVar6);
  if ((char)bVar5 != '\0') {
    return;
  }
  UI_InGameMenu__HideAllMenus(pUVar7,method_00);
  pUVar8 = (pUVar7->fields)._characterChangePopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar2 = &(pUVar7->fields)._characterChangePopup;
  icon = (UI_BasePopup_o *)0x0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    content = &MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP;
    icon = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(parent,0,MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    (pUVar7->fields)._characterChangePopup = icon;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    in_RCX = MethodInfo_Void_Add;
    __this_03 = (pUVar7->fields)._popups;
    if (__this_03 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c8043;
    icon = (pUVar7->fields)._characterChangePopup;
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_03->fields)._items;
    content = (MethodInfo_24FB130 **)in_RCX;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_043c8043;
    uVar3 = (__this_03->fields)._size;
    if (uVar3 < (uint)pUVar4->max_length) {
      content = (MethodInfo_24FB130 **)(ulong)(uVar3 + 1);
      (__this_03->fields)._size = uVar3 + 1;
      pUVar4->m_Items[(int)uVar3] = icon;
      il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
      pUVar8 = *ppUVar2;
      if (pUVar8 == (UI_BasePopup_o *)0x0) {
        __this_03 = (System_Collections_Generic_List_BasePopup__o *)0x0;
        goto label_043c8043;
      }
      goto label_043c802b;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)icon,
               *(MethodInfo_362C220 **)(*(long *)((long)in_RCX[1].monitor + 0xc0) + 0x70));
  }
  pUVar8 = *ppUVar2;
  __this_03 = (System_Collections_Generic_List_BasePopup__o *)0x0;
  content = (MethodInfo_24FB130 **)in_RCX;
  if (pUVar8 != (UI_BasePopup_o *)0x0) {
label_043c802b:
    (*(pUVar8->klass->vtable)._21_Show.methodPtr)(pUVar8,(pUVar8->klass->vtable)._21_Show.method);
    return;
  }
label_043c8043:
  il2cpp_runtime_helper_022b2c90();
  __this_04 = __this_03[9].monitor;
  if (__this_04 != (UI_CutsceneDialoguePanel_o *)0x0) {
    UI_CutsceneDialoguePanel__Show
              (__this_04,(System_String_o *)icon,title,(System_String_o *)content,(uint)in_R8 & 0xff,in_R9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  score = (int32_t)content;
  pUVar7 = (UI_InGameMenu_o *)__this_04[1].fields._contentLabel;
  if (pUVar7 != (UI_InGameMenu_o *)0x0) {
    vtableDispatch = (((UnityEngine_UI_Text_c *)pUVar7->klass)->vtable)._22_get_color.methodPtr;
    (*vtableDispatch)
              (pUVar7,(((UnityEngine_UI_Text_c *)pUVar7->klass)->vtable)._22_get_color.method,extraout_RDX_00,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)(pUVar7->fields)._showingBlood != '\0') {
    return;
  }
  *(undefined1 *)&(pUVar7->fields)._showingBlood = 1;
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_01 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  pUVar9 = __this_01;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor
            ((UI_InGameMenu__WaitAndShowBlood_d__104_o *)__this_01,0,(MethodInfo *)0x0);
  if (__this_01 == (UI_InGameMenu_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae403 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
      g_data_057ae403 = '\x01';
    }
    __this_02 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
    killer = (System_String_o *)0x0;
    pUVar10 = __this_02;
    UI_InGameMenu__WaitAndShowBlood_d__104___ctor(__this_02,0,(MethodInfo *)0x0);
    if (__this_02 == (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pUVar7 = pUVar10[8].fields.__4__this;
      if (pUVar7 != (UI_InGameMenu_o *)0x0) {
        (*pUVar7->klass[2].vtable._6_HideAllPopups.methodPtr)();
        pUVar7 = pUVar10[8].fields.__4__this;
        if (pUVar7 != (UI_InGameMenu_o *)0x0) {
          (**(code **)&pUVar7->klass[1]._2.cctor_finished)(pUVar7,pUVar7->klass[1]._2.cctor_thread);
          *(undefined4 *)&pUVar10[0xd].fields.field_0x4 = 0x40000000;
          return;
        }
      }
      pUVar7 = (UI_InGameMenu_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      UI_InGameMenu__ShowKillFeed_42c8210(pUVar7,killer,victim,score,in_R8,-1,-1,in_stack_ffffffffffffff78);
      return;
    }
    (__this_02->fields).__4__this = pUVar9;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).__4__this,pUVar9);
    return;
  }
  (__this_01->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)pUVar7;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._popups,pUVar7);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)pUVar7,(System_Collections_IEnumerator_o *)__this_01,
             (MethodInfo *)0x0);
  return;
}


// UI.InGameMenu$$ShowCharacterChangeMenu
// il2cpp: void UI_InGameMenu__ShowCharacterChangeMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c7f00

void UI_InGameMenu__ShowCharacterChangeMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UI_BasePopup_o **ppUVar2;
  uint uVar3;
  UI_BasePopup_array *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar5;
  UnityEngine_Transform_o *parent;
  UI_BasePopup_o *icon;
  UI_InGameMenu_o *__this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *__this_01;
  int32_t score;
  System_String_o *in_RCX;
  MethodInfo_24FB130 **content;
  System_String_o *title;
  undefined8 extraout_RDX;
  System_String_o *victim;
  System_String_o *killer;
  long *method_00;
  UI_BasePopup_o *pUVar6;
  System_Collections_Generic_List_BasePopup__o *__this_02;
  UI_CutsceneDialoguePanel_o *__this_03;
  UI_InGameMenu_o *pUVar7;
  UI_InGameMenu_o *pUVar8;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar9;
  System_String_o *in_R8;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffff90;
  
  method_00 = (long *)__this;
  if (g_data_057ae3f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    method_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f9 = '\x01';
  }
  bVar5 = UI_InGameMenu__InMenu((MethodInfo *)method_00);
  if ((char)bVar5 != '\0') {
    return;
  }
  UI_InGameMenu__HideAllMenus(__this,method);
  pUVar6 = (__this->fields)._characterChangePopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar2 = &(__this->fields)._characterChangePopup;
  icon = (UI_BasePopup_o *)0x0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    content = &MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP;
    icon = (UI_BasePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(parent,0,MethodInfo_CharacterChangePopup_CreateDefaultPopup_CharacterChangeP);
    (__this->fields)._characterChangePopup = icon;
    il2cpp_runtime_helper_022b4080(ppUVar2);
    in_RCX = MethodInfo_Void_Add;
    __this_02 = (__this->fields)._popups;
    if (__this_02 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043c8043;
    icon = (__this->fields)._characterChangePopup;
    piVar1 = &(__this_02->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_02->fields)._items;
    content = (MethodInfo_24FB130 **)in_RCX;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_043c8043;
    uVar3 = (__this_02->fields)._size;
    if (uVar3 < (uint)pUVar4->max_length) {
      content = (MethodInfo_24FB130 **)(ulong)(uVar3 + 1);
      (__this_02->fields)._size = uVar3 + 1;
      pUVar4->m_Items[(int)uVar3] = icon;
      il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
      pUVar6 = *ppUVar2;
      if (pUVar6 == (UI_BasePopup_o *)0x0) {
        __this_02 = (System_Collections_Generic_List_BasePopup__o *)0x0;
        goto label_043c8043;
      }
      goto label_043c802b;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)icon,
               *(MethodInfo_362C220 **)(*(long *)((long)in_RCX[1].monitor + 0xc0) + 0x70));
  }
  pUVar6 = *ppUVar2;
  __this_02 = (System_Collections_Generic_List_BasePopup__o *)0x0;
  content = (MethodInfo_24FB130 **)in_RCX;
  if (pUVar6 != (UI_BasePopup_o *)0x0) {
label_043c802b:
    (*(pUVar6->klass->vtable)._21_Show.methodPtr)(pUVar6,(pUVar6->klass->vtable)._21_Show.method);
    return;
  }
label_043c8043:
  il2cpp_runtime_helper_022b2c90();
  __this_03 = __this_02[9].monitor;
  if (__this_03 != (UI_CutsceneDialoguePanel_o *)0x0) {
    UI_CutsceneDialoguePanel__Show
              (__this_03,(System_String_o *)icon,title,(System_String_o *)content,(uint)in_R8 & 0xff,in_R9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  score = (int32_t)content;
  pUVar7 = (UI_InGameMenu_o *)__this_03[1].fields._contentLabel;
  if (pUVar7 != (UI_InGameMenu_o *)0x0) {
    vtableDispatch = (((UnityEngine_UI_Text_c *)pUVar7->klass)->vtable)._22_get_color.methodPtr;
    (*vtableDispatch)
              (pUVar7,(((UnityEngine_UI_Text_c *)pUVar7->klass)->vtable)._22_get_color.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)(pUVar7->fields)._showingBlood != '\0') {
    return;
  }
  *(undefined1 *)&(pUVar7->fields)._showingBlood = 1;
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_00 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  pUVar8 = __this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor
            ((UI_InGameMenu__WaitAndShowBlood_d__104_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    (__this_00->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)pUVar7;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._popups,pUVar7);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)pUVar7,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_01 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  killer = (System_String_o *)0x0;
  pUVar9 = __this_01;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0) {
    (__this_01->fields).__4__this = pUVar8;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,pUVar8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar9[8].fields.__4__this;
  if (pUVar7 != (UI_InGameMenu_o *)0x0) {
    (*pUVar7->klass[2].vtable._6_HideAllPopups.methodPtr)();
    pUVar7 = pUVar9[8].fields.__4__this;
    if (pUVar7 != (UI_InGameMenu_o *)0x0) {
      (**(code **)&pUVar7->klass[1]._2.cctor_finished)(pUVar7,pUVar7->klass[1]._2.cctor_thread);
      *(undefined4 *)&pUVar9[0xd].fields.field_0x4 = 0x40000000;
      return;
    }
  }
  pUVar7 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UI_InGameMenu__ShowKillFeed_42c8210(pUVar7,killer,victim,score,in_R8,-1,-1,in_stack_ffffffffffffff90);
  return;
}


// UI.InGameMenu$$ShowCutsceneMenu
// il2cpp: void UI_InGameMenu__ShowCutsceneMenu (UI_InGameMenu_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, bool full, const MethodInfo* method);
// 0x43c8050

void UI_InGameMenu__ShowCutsceneMenu
               (UI_InGameMenu_o *__this,System_String_o *icon,System_String_o *title,System_String_o *content,
               bool_conflict full,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  UI_InGameMenu_o *__this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *__this_01;
  int32_t score;
  undefined8 extraout_RDX;
  System_String_o *victim;
  System_String_o *killer;
  UI_CutsceneDialoguePanel_o *__this_02;
  UI_InGameMenu_o *pUVar1;
  UI_InGameMenu_o *pUVar2;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar3;
  undefined4 in_register_00000084;
  System_String_o *weapon;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  weapon = (System_String_o *)CONCAT44(in_register_00000084,full);
  __this_02 = (__this->fields)._cutsceneDialoguePanel;
  if (__this_02 != (UI_CutsceneDialoguePanel_o *)0x0) {
    UI_CutsceneDialoguePanel__Show(__this_02,icon,title,content,full & 0xff,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  score = (int32_t)content;
  pUVar1 = (UI_InGameMenu_o *)__this_02[1].fields._contentLabel;
  if (pUVar1 != (UI_InGameMenu_o *)0x0) {
    vtableDispatch = (((UnityEngine_UI_Text_c *)pUVar1->klass)->vtable)._22_get_color.methodPtr;
    (*vtableDispatch)
              (pUVar1,(((UnityEngine_UI_Text_c *)pUVar1->klass)->vtable)._22_get_color.method,extraout_RDX,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)(pUVar1->fields)._showingBlood != '\0') {
    return;
  }
  *(undefined1 *)&(pUVar1->fields)._showingBlood = 1;
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_00 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  pUVar2 = __this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor
            ((UI_InGameMenu__WaitAndShowBlood_d__104_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    (__this_00->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)pUVar1;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._popups,pUVar1);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)pUVar1,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_01 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  killer = (System_String_o *)0x0;
  pUVar3 = __this_01;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0) {
    (__this_01->fields).__4__this = pUVar2;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,pUVar2);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar3[8].fields.__4__this;
  if (pUVar1 != (UI_InGameMenu_o *)0x0) {
    (*pUVar1->klass[2].vtable._6_HideAllPopups.methodPtr)();
    pUVar1 = pUVar3[8].fields.__4__this;
    if (pUVar1 != (UI_InGameMenu_o *)0x0) {
      (**(code **)&pUVar1->klass[1]._2.cctor_finished)(pUVar1,pUVar1->klass[1]._2.cctor_thread);
      *(undefined4 *)&pUVar3[0xd].fields.field_0x4 = 0x40000000;
      return;
    }
  }
  pUVar1 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UI_InGameMenu__ShowKillFeed_42c8210(pUVar1,killer,victim,score,weapon,-1,-1,in_stack_ffffffffffffffa8);
  return;
}


// UI.InGameMenu$$HideCutsceneMenu
// il2cpp: void UI_InGameMenu__HideCutsceneMenu (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c8070

void UI_InGameMenu__HideCutsceneMenu(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_InGameMenu_c *pUVar1;
  code *vtableDispatch;
  undefined8 uVar2;
  UI_InGameMenu_o *__this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *__this_01;
  int32_t in_ECX;
  undefined8 in_RDX;
  System_String_o *victim;
  System_String_o *killer;
  UI_InGameMenu_o *pUVar3;
  UI_InGameMenu_o *pUVar4;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar5;
  System_String_o *in_R8;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  pUVar3 = (UI_InGameMenu_o *)(__this->fields)._cutsceneDialoguePanel;
  if (pUVar3 != (UI_InGameMenu_o *)0x0) {
    pUVar1 = pUVar3->klass;
    vtableDispatch = pUVar1[1]._2.genericContainerHandle;
    uVar2._0_4_ = pUVar1[1]._2.instance_size;
    uVar2._4_4_ = pUVar1[1]._2.actualSize;
    (*vtableDispatch)(pUVar3,uVar2,in_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)(pUVar3->fields)._showingBlood != '\0') {
    return;
  }
  *(undefined1 *)&(pUVar3->fields)._showingBlood = 1;
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_00 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  pUVar4 = __this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor
            ((UI_InGameMenu__WaitAndShowBlood_d__104_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    (__this_00->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)pUVar3;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._popups,pUVar3);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)pUVar3,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_01 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  killer = (System_String_o *)0x0;
  pUVar5 = __this_01;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0) {
    (__this_01->fields).__4__this = pUVar4;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,pUVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = pUVar5[8].fields.__4__this;
  if (pUVar3 != (UI_InGameMenu_o *)0x0) {
    (*pUVar3->klass[2].vtable._6_HideAllPopups.methodPtr)();
    pUVar3 = pUVar5[8].fields.__4__this;
    if (pUVar3 != (UI_InGameMenu_o *)0x0) {
      (**(code **)&pUVar3->klass[1]._2.cctor_finished)(pUVar3,pUVar3->klass[1]._2.cctor_thread);
      *(undefined4 *)&pUVar5[0xd].fields.field_0x4 = 0x40000000;
      return;
    }
  }
  pUVar3 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UI_InGameMenu__ShowKillFeed_42c8210(pUVar3,killer,victim,in_ECX,in_R8,-1,-1,in_stack_ffffffffffffffb0);
  return;
}


// UI.InGameMenu$$IsPauseMenuActive
// il2cpp: bool UI_InGameMenu__IsPauseMenuActive (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c7940

bool_conflict UI_InGameMenu__IsPauseMenuActive(UI_InGameMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_05;
  undefined8 extraout_RAX;
  undefined8 uVar3;
  long *plVar4;
  undefined8 extraout_RAX_00;
  int iVar5;
  byte bVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  UnityEngine_Component_o *__this_06;
  
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  __this_06 = (UnityEngine_Component_o *)0x0;
  __this_00 = (__this->fields)._allPausePopups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    do {
      __this_01.fields._8_8_ = pIVar9;
      __this_01.fields._list = pSVar8;
      __this_01.fields._current = (Il2CppObject *)__this_06;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') {
        iVar5 = 5;
        bVar6 = 0;
        goto label_043c7a14;
      }
      if (__this_06 == (UnityEngine_Component_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
        il2cpp_runtime_helper_022b2c90();
        goto label_043c7a44;
      }
      __this_05 = UnityEngine_Component__get_gameObject(__this_06,(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
      bVar2 = UnityEngine_GameObject__get_activeSelf(__this_05,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
    bVar6 = 1;
    iVar5 = 4;
label_043c7a14:
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = pSVar8;
    __this_02.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar3 = extraout_RAX;
label_043c7a26:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),iVar5 == 4 & bVar6);
  }
label_043c7a44:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = pSVar8;
    __this_03.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    bVar6 = 0;
    iVar5 = 0;
    uVar3 = extraout_RAX_00;
    if (lVar1 == 0) goto label_043c7a26;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = pSVar8;
  __this_04.fields._current = (Il2CppObject *)__this_06;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar7._0_8_);
}


// UI.InGameMenu$$ShowBlood
// il2cpp: void UI_InGameMenu__ShowBlood (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c80a0

void UI_InGameMenu__ShowBlood(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_InGameMenu_o *__this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *__this_01;
  int32_t in_ECX;
  System_String_o *victim;
  System_String_o *killer;
  UI_InGameMenu_o *pUVar1;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar2;
  System_String_o *in_R8;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if ((char)(__this->fields)._showingBlood != '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields)._showingBlood = 1;
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_00 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  pUVar1 = __this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor
            ((UI_InGameMenu__WaitAndShowBlood_d__104_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    (__this_00->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)__this;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._popups,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_01 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  killer = (System_String_o *)0x0;
  pUVar2 = __this_01;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0) {
    (__this_01->fields).__4__this = pUVar1;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,pUVar1);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = pUVar2[8].fields.__4__this;
  if (pUVar1 != (UI_InGameMenu_o *)0x0) {
    (*pUVar1->klass[2].vtable._6_HideAllPopups.methodPtr)();
    pUVar1 = pUVar2[8].fields.__4__this;
    if (pUVar1 != (UI_InGameMenu_o *)0x0) {
      (**(code **)&pUVar1->klass[1]._2.cctor_finished)(pUVar1,pUVar1->klass[1]._2.cctor_thread);
      *(undefined4 *)&pUVar2[0xd].fields.field_0x4 = 0x40000000;
      return;
    }
  }
  pUVar1 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UI_InGameMenu__ShowKillFeed_42c8210(pUVar1,killer,victim,in_ECX,in_R8,-1,-1,in_stack_ffffffffffffffb8);
  return;
}


// UI.InGameMenu$$ShowSnapshot
// il2cpp: void UI_InGameMenu__ShowSnapshot (UI_InGameMenu_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x43c81a0

void UI_InGameMenu__ShowSnapshot(UI_InGameMenu_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UI_SnapshotPopup_o *pUVar1;
  int32_t in_ECX;
  System_String_o *victim;
  UI_InGameMenu_o *__this_00;
  System_String_o *in_R8;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  pUVar1 = (__this->fields)._snapshotPopup;
  if (pUVar1 != (UI_SnapshotPopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._59_Load.methodPtr)(pUVar1,texture,(pUVar1->klass->vtable)._59_Load.method);
    pUVar1 = (__this->fields)._snapshotPopup;
    if (pUVar1 != (UI_SnapshotPopup_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      (__this->fields)._snapshotTimeLeft = 2.0;
      return;
    }
  }
  __this_00 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UI_InGameMenu__ShowKillFeed_42c8210
            (__this_00,(System_String_o *)texture,victim,in_ECX,in_R8,-1,-1,in_stack_ffffffffffffffe8);
  return;
}


// UI.InGameMenu$$ShowKillFeed
// il2cpp: void UI_InGameMenu__ShowKillFeed (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, const MethodInfo* method);
// 0x43c81f0

void UI_InGameMenu__ShowKillFeed
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,MethodInfo *method)

{
  MethodInfo *in_stack_fffffffffffffff0;
  
  UI_InGameMenu__ShowKillFeed_42c8210(__this,killer,victim,score,weapon,-1,-1,in_stack_fffffffffffffff0);
  return;
}


// UI.InGameMenu$$ShowKillFeed
// il2cpp: void UI_InGameMenu__ShowKillFeed (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, int32_t killerActorNumber, int32_t victimActorNumber, const MethodInfo* method);
// 0x43c8210

void UI_InGameMenu__ShowKillFeed_42c8210
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,int32_t killerActorNumber,int32_t victimActorNumber,MethodInfo *method)

{
  float timeLeft;
  long lVar1;
  UI_StylebarHandler_o *__this_00;
  UnityEngine_Object_c *__this_01;
  bool_conflict bVar2;
  UI_KillFeedSmallPopup_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  int32_t score_00;
  char extraout_DL;
  uint extraout_EDX;
  System_String_o *victim_00;
  int32_t unaff_EBX;
  int score_01;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  UI_InGameMenu_o *__this_04;
  UI_KillFeedBigPopup_o *__this_05;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_06;
  long lVar5;
  UnityEngine_Object_o *x;
  System_String_o *weapon_00;
  int32_t killerActorNumber_00;
  int unaff_R12D;
  float fVar6;
  MethodInfo *in_stack_ffffffffffffff70;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  pSVar4 = killer;
  __this_04 = __this;
  weapon_00 = weapon;
  killerActorNumber_00 = killerActorNumber;
  score_00 = score;
  if (g_data_057ae3fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_04 = (UI_InGameMenu_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3fb = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x160), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x14) < 1) {
      return;
    }
    __this_05 = (__this->fields)._killFeedBigPopup;
    __this_04 = (UI_InGameMenu_o *)0x0;
    if (__this_05 != (UI_KillFeedBigPopup_o *)0x0) {
      fVar6 = (__this_05->fields).TimeLeft;
      if (fVar6 <= 0.0) {
label_043c82f4:
        UI_KillFeedBigPopup__Show_42d03c0
                  (__this_05,killer,victim,score,weapon,killerActorNumber,victimActorNumber,(MethodInfo *)0x0)
        ;
        return;
      }
      pSVar4 = (__this_05->fields).Killer;
      score_00 = (__this_05->fields).Score;
      weapon_00 = (__this_05->fields).Weapon;
      killerActorNumber_00 = (__this_05->fields).KillerActorNumber;
      UI_InGameMenu__ShowKillFeedPushSmall
                (__this,pSVar4,(__this_05->fields).Victim,score_00,weapon_00,fVar6,killerActorNumber_00,
                 (__this_05->fields).VictimActorNumber,0,in_stack_ffffffffffffffb8);
      __this_05 = (__this->fields)._killFeedBigPopup;
      __this_04 = (UI_InGameMenu_o *)0x0;
      if (__this_05 != (UI_KillFeedBigPopup_o *)0x0) goto label_043c82f4;
    }
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  pSVar3 = pSVar4;
  if (g_data_057ae3fc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedSmallPopup_get_Item);
    g_data_057ae3fc = '\x01';
  }
  score_01 = (int)pSVar3;
  __this_06 = (__this_04->fields)._killFeedSmallPopups;
  if (__this_06 != (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0) {
    if ((__this_06->fields)._size <= unaff_R12D) {
      return;
    }
    score_01 = unaff_R12D;
    __this_02 = (UI_KillFeedSmallPopup_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_06,unaff_R12D,MethodInfo_KillFeedSmallPopup_get_Item);
    if (__this_02 != (UI_KillFeedSmallPopup_o *)0x0) {
      timeLeft = (__this_02->fields).TimeLeft;
      if (0.0 < timeLeft) {
        UI_InGameMenu__ShowKillFeedPushSmall
                  (__this_04,(__this_02->fields).Killer,(__this_02->fields).Victim,(__this_02->fields).Score,
                   (__this_02->fields).Weapon,timeLeft,(__this_02->fields).KillerActorNumber,
                   (__this_02->fields).VictimActorNumber,unaff_R12D + 1,in_stack_ffffffffffffff70);
      }
      UI_KillFeedSmallPopup__ShowImmediate_42d0c30
                (__this_02,pSVar4,victim_00,score_00,weapon_00,fVar6,killerActorNumber_00,unaff_EBX,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ae3fd = '\x01';
  }
  if (extraout_DL == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    lVar5 = TypeInfo_CustomLogicManager;
    if (lVar1 == 0) goto label_043c8502;
    if (*(char *)(lVar1 + 0x80) == '\0') {
      return;
    }
  }
  lVar5 = 0;
  if (__this_06[10].monitor != (UI_KillScorePopup_o *)0x0) {
    UI_KillScorePopup__Show(__this_06[10].monitor,score_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_06[0xd].fields._items = 0x40400000;
    __this_00 = *(UI_StylebarHandler_o **)&__this_06[4].fields._size;
    lVar5 = 0;
    if (__this_00 != (UI_StylebarHandler_o *)0x0) {
      UI_StylebarHandler__OnHit(__this_00,score_01,(MethodInfo *)0x0);
      return;
    }
  }
label_043c8502:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3fe = '\x01';
  }
  x = *(UnityEngine_Object_o **)(lVar5 + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = (System_String_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') || (*(long *)(lVar5 + 0xb8) != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ff == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae3ff = '\x01';
  }
  bVar2 = System_String__op_Equality(pSVar4,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(pSVar4,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(pSVar4,"TopRight",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__op_Equality(pSVar4,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          bVar2 = System_String__op_Equality(pSVar4,"MiddleLeft",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            bVar2 = System_String__op_Equality(pSVar4,"MiddleRight",(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              bVar2 = System_String__op_Equality(pSVar4,"BottomLeft",(MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                bVar2 = System_String__op_Equality(pSVar4,"BottomRight",(MethodInfo *)0x0);
                if ((char)bVar2 == '\0') {
                  bVar2 = System_String__op_Equality(pSVar4,"BottomCenter",(MethodInfo *)0x0);
                  if ((char)bVar2 == '\0') {
                    return;
                  }
                  __this_01 = x[0x14].klass;
                }
                else {
                  __this_01 = (UnityEngine_Object_c *)x[0x13].fields.m_CachedPtr;
                }
              }
              else {
                __this_01 = x[0x13].monitor;
              }
            }
            else {
              __this_01 = x[0x13].klass;
            }
          }
          else {
            __this_01 = (UnityEngine_Object_c *)x[0x12].fields.m_CachedPtr;
          }
        }
        else {
          __this_01 = x[0x12].monitor;
        }
      }
      else {
        __this_01 = x[0x12].klass;
      }
    }
    else {
      __this_01 = (UnityEngine_Object_c *)x[0x11].fields.m_CachedPtr;
    }
  }
  else {
    __this_01 = x[0x11].monitor;
  }
  if ((__this_01 != (UnityEngine_Object_c *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_03,extraout_EDX & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.InGameMenu$$ShowKillFeedPushSmall
// il2cpp: void UI_InGameMenu__ShowKillFeedPushSmall (UI_InGameMenu_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, float timeLeft, int32_t killerActorNumber, int32_t victimActorNumber, int32_t index, const MethodInfo* method);
// 0x43c8330

void UI_InGameMenu__ShowKillFeedPushSmall
               (UI_InGameMenu_o *__this,System_String_o *killer,System_String_o *victim,int32_t score,
               System_String_o *weapon,float timeLeft,int32_t killerActorNumber,int32_t victimActorNumber,
               int32_t index,MethodInfo *method)

{
  float timeLeft_00;
  long lVar1;
  UI_StylebarHandler_o *__this_00;
  UnityEngine_Object_c *__this_01;
  bool_conflict bVar2;
  UI_KillFeedSmallPopup_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  char extraout_DL;
  uint extraout_EDX;
  int32_t score_00;
  System_String_o *pSVar3;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_04;
  long lVar4;
  UnityEngine_Object_o *x;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  pSVar3 = killer;
  if (g_data_057ae3fc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedSmallPopup_get_Item);
    g_data_057ae3fc = '\x01';
  }
  score_00 = (int32_t)pSVar3;
  __this_04 = (__this->fields)._killFeedSmallPopups;
  if (__this_04 != (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0) {
    if ((__this_04->fields)._size <= index) {
      return;
    }
    score_00 = index;
    __this_02 = (UI_KillFeedSmallPopup_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_04,index,MethodInfo_KillFeedSmallPopup_get_Item);
    if (__this_02 != (UI_KillFeedSmallPopup_o *)0x0) {
      timeLeft_00 = (__this_02->fields).TimeLeft;
      if (0.0 < timeLeft_00) {
        UI_InGameMenu__ShowKillFeedPushSmall
                  (__this,(__this_02->fields).Killer,(__this_02->fields).Victim,(__this_02->fields).Score,
                   (__this_02->fields).Weapon,timeLeft_00,(__this_02->fields).KillerActorNumber,
                   (__this_02->fields).VictimActorNumber,index + 1,in_stack_ffffffffffffffa8);
      }
      UI_KillFeedSmallPopup__ShowImmediate_42d0c30
                (__this_02,killer,victim,score,weapon,timeLeft,killerActorNumber,victimActorNumber,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ae3fd = '\x01';
  }
  if (extraout_DL == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    lVar4 = TypeInfo_CustomLogicManager;
    if (lVar1 == 0) goto label_043c8502;
    if (*(char *)(lVar1 + 0x80) == '\0') {
      return;
    }
  }
  lVar4 = 0;
  if (__this_04[10].monitor != (UI_KillScorePopup_o *)0x0) {
    UI_KillScorePopup__Show(__this_04[10].monitor,score_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_04[0xd].fields._items = 0x40400000;
    __this_00 = *(UI_StylebarHandler_o **)&__this_04[4].fields._size;
    lVar4 = 0;
    if (__this_00 != (UI_StylebarHandler_o *)0x0) {
      UI_StylebarHandler__OnHit(__this_00,score_00,(MethodInfo *)0x0);
      return;
    }
  }
label_043c8502:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3fe = '\x01';
  }
  x = *(UnityEngine_Object_o **)(lVar4 + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = (System_String_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') || (*(long *)(lVar4 + 0xb8) != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ff == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae3ff = '\x01';
  }
  bVar2 = System_String__op_Equality(pSVar3,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(pSVar3,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(pSVar3,"TopRight",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__op_Equality(pSVar3,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          bVar2 = System_String__op_Equality(pSVar3,"MiddleLeft",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            bVar2 = System_String__op_Equality(pSVar3,"MiddleRight",(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              bVar2 = System_String__op_Equality(pSVar3,"BottomLeft",(MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                bVar2 = System_String__op_Equality(pSVar3,"BottomRight",(MethodInfo *)0x0);
                if ((char)bVar2 == '\0') {
                  bVar2 = System_String__op_Equality(pSVar3,"BottomCenter",(MethodInfo *)0x0);
                  if ((char)bVar2 == '\0') {
                    return;
                  }
                  __this_01 = x[0x14].klass;
                }
                else {
                  __this_01 = (UnityEngine_Object_c *)x[0x13].fields.m_CachedPtr;
                }
              }
              else {
                __this_01 = x[0x13].monitor;
              }
            }
            else {
              __this_01 = x[0x13].klass;
            }
          }
          else {
            __this_01 = (UnityEngine_Object_c *)x[0x12].fields.m_CachedPtr;
          }
        }
        else {
          __this_01 = x[0x12].monitor;
        }
      }
      else {
        __this_01 = x[0x12].klass;
      }
    }
    else {
      __this_01 = (UnityEngine_Object_c *)x[0x11].fields.m_CachedPtr;
    }
  }
  else {
    __this_01 = x[0x11].monitor;
  }
  if ((__this_01 != (UnityEngine_Object_c *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_03,extraout_EDX & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.InGameMenu$$ShowKillScore
// il2cpp: void UI_InGameMenu__ShowKillScore (UI_InGameMenu_o* __this, int32_t score, bool force, const MethodInfo* method);
// 0x43c8460

void UI_InGameMenu__ShowKillScore
               (UI_InGameMenu_o *__this,int32_t score,bool_conflict force,MethodInfo *method)

{
  long lVar1;
  UI_KillScorePopup_o *__this_00;
  UI_StylebarHandler_o *__this_01;
  UnityEngine_Object_c *__this_02;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_03;
  uint extraout_EDX;
  System_String_o *a;
  long lVar3;
  UnityEngine_Object_o *x;
  
  if (g_data_057ae3fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ae3fd = '\x01';
  }
  if ((char)force == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    lVar3 = TypeInfo_CustomLogicManager;
    if (lVar1 == 0) goto label_043c8502;
    if (*(char *)(lVar1 + 0x80) == '\0') {
      return;
    }
  }
  __this_00 = (__this->fields)._killScorePopup;
  lVar3 = 0;
  if (__this_00 != (UI_KillScorePopup_o *)0x0) {
    UI_KillScorePopup__Show(__this_00,score,(MethodInfo *)0x0);
    (__this->fields)._killScoreTimeLeft = 3.0;
    __this_01 = (__this->fields).StylebarHandler;
    lVar3 = 0;
    if (__this_01 != (UI_StylebarHandler_o *)0x0) {
      UI_StylebarHandler__OnHit(__this_01,score,(MethodInfo *)0x0);
      return;
    }
  }
label_043c8502:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3fe = '\x01';
  }
  x = *(UnityEngine_Object_o **)(lVar3 + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (System_String_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') || (*(long *)(lVar3 + 0xb8) != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ff == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae3ff = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(a,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(a,"TopRight",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__op_Equality(a,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          bVar2 = System_String__op_Equality(a,"MiddleLeft",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            bVar2 = System_String__op_Equality(a,"MiddleRight",(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              bVar2 = System_String__op_Equality(a,"BottomLeft",(MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                bVar2 = System_String__op_Equality(a,"BottomRight",(MethodInfo *)0x0);
                if ((char)bVar2 == '\0') {
                  bVar2 = System_String__op_Equality(a,"BottomCenter",(MethodInfo *)0x0);
                  if ((char)bVar2 == '\0') {
                    return;
                  }
                  __this_02 = x[0x14].klass;
                }
                else {
                  __this_02 = (UnityEngine_Object_c *)x[0x13].fields.m_CachedPtr;
                }
              }
              else {
                __this_02 = x[0x13].monitor;
              }
            }
            else {
              __this_02 = x[0x13].klass;
            }
          }
          else {
            __this_02 = (UnityEngine_Object_c *)x[0x12].fields.m_CachedPtr;
          }
        }
        else {
          __this_02 = x[0x12].monitor;
        }
      }
      else {
        __this_02 = x[0x12].klass;
      }
    }
    else {
      __this_02 = (UnityEngine_Object_c *)x[0x11].fields.m_CachedPtr;
    }
  }
  else {
    __this_02 = x[0x11].monitor;
  }
  if ((__this_02 != (UnityEngine_Object_c *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_03,extraout_EDX & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.InGameMenu$$GetStylebarRank
// il2cpp: int32_t UI_InGameMenu__GetStylebarRank (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c8510

int32_t UI_InGameMenu__GetStylebarRank(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_StylebarHandler_o *pUVar1;
  System_Int32_array *__this_00;
  bool_conflict bVar2;
  int32_t extraout_EAX;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_01;
  uint extraout_EDX;
  System_String_o *a;
  UI_StylebarHandler_o *x;
  
  if (g_data_057ae3fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae3fe = '\x01';
  }
  x = (__this->fields).StylebarHandler;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (System_String_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  pUVar1 = (__this->fields).StylebarHandler;
  if (pUVar1 != (UI_StylebarHandler_o *)0x0) {
    return (pUVar1->fields)._rank;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ff == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae3ff = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(a,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(a,"TopRight",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__op_Equality(a,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          bVar2 = System_String__op_Equality(a,"MiddleLeft",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            bVar2 = System_String__op_Equality(a,"MiddleRight",(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              bVar2 = System_String__op_Equality(a,"BottomLeft",(MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                bVar2 = System_String__op_Equality(a,"BottomRight",(MethodInfo *)0x0);
                if ((char)bVar2 == '\0') {
                  bVar2 = System_String__op_Equality(a,"BottomCenter",(MethodInfo *)0x0);
                  if ((char)bVar2 == '\0') {
                    return bVar2;
                  }
                  __this_00 = (System_Int32_array *)x[4].fields._styleBarPopup;
                }
                else {
                  __this_00 = (System_Int32_array *)x[4].fields.m_CancellationTokenSource;
                }
              }
              else {
                __this_00 = (System_Int32_array *)x[4].fields.m_CachedPtr;
              }
            }
            else {
              __this_00 = x[4].monitor;
            }
          }
          else {
            __this_00 = (System_Int32_array *)x[4].klass;
          }
        }
        else {
          __this_00 = *(System_Int32_array **)&x[3].fields._chainTime;
        }
      }
      else {
        __this_00 = *(System_Int32_array **)&x[3].fields._rank;
      }
    }
    else {
      __this_00 = *(System_Int32_array **)&x[3].fields._hits;
    }
  }
  else {
    __this_00 = x[3].fields.PointDecays;
  }
  if ((__this_00 != (System_Int32_array *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,extraout_EDX & 0xff,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  iVar3 = il2cpp_runtime_helper_022b2c90();
  return iVar3;
}


// UI.InGameMenu$$SetLabelActive
// il2cpp: void UI_InGameMenu__SetLabelActive (UI_InGameMenu_o* __this, System_String_o* label, bool active, const MethodInfo* method);
// 0x43c8590

void UI_InGameMenu__SetLabelActive
               (UI_InGameMenu_o *__this,System_String_o *label,bool_conflict active,MethodInfo *method)

{
  UnityEngine_UI_Text_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_01;
  
  if (g_data_057ae3ff == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae3ff = '\x01';
  }
  bVar1 = System_String__op_Equality(label,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(label,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(label,"TopRight",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Equality(label,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__op_Equality(label,"MiddleLeft",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            bVar1 = System_String__op_Equality(label,"MiddleRight",(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              bVar1 = System_String__op_Equality(label,"BottomLeft",(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                bVar1 = System_String__op_Equality(label,"BottomRight",(MethodInfo *)0x0);
                if ((char)bVar1 == '\0') {
                  bVar1 = System_String__op_Equality(label,"BottomCenter",(MethodInfo *)0x0);
                  if ((char)bVar1 == '\0') {
                    return;
                  }
                  __this_00 = (__this->fields)._bottomCenterLabel;
                }
                else {
                  __this_00 = (__this->fields)._bottomRightLabel;
                }
              }
              else {
                __this_00 = (__this->fields)._bottomLeftLabel;
              }
            }
            else {
              __this_00 = (__this->fields)._middleRightLabel;
            }
          }
          else {
            __this_00 = (__this->fields)._middleLeftLabel;
          }
        }
        else {
          __this_00 = (__this->fields)._middleCenterLabel;
        }
      }
      else {
        __this_00 = (__this->fields)._topRightLabel;
      }
    }
    else {
      __this_00 = (__this->fields)._topLeftLabel;
    }
  }
  else {
    __this_00 = (__this->fields)._topCenterLabel;
  }
  if ((__this_00 != (UnityEngine_UI_Text_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,active & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.InGameMenu$$SetKDRPanelActive
// il2cpp: void UI_InGameMenu__SetKDRPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x43c87c0

void UI_InGameMenu__SetKDRPanelActive(UI_InGameMenu_o *__this,bool_conflict active,MethodInfo *method)

{
  UI_HUDBottomHandler_o *pUVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_string__bool__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  long *plVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *in_RCX;
  System_String_o *message;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  MethodInfo *pMVar5;
  MethodInfo *pMVar6;
  UI_InGameMenu_o *pUVar7;
  UI_InGameMenu_o *__this_02;
  long lVar8;
  float value;
  
  pMVar5 = (MethodInfo *)CONCAT44(in_register_00000034,active);
  pUVar7 = (UI_InGameMenu_o *)(__this->fields).TopLeftHud;
  if (pUVar7 != (UI_InGameMenu_o *)0x0) {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar7,active & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = pMVar5;
  bVar3 = UI_InGameMenu__AllowMap(pUVar7,pMVar5);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar4 = (pUVar7->fields)._minimapPanel;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar4,(uint)pMVar5 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar4[8].monitor;
  pMVar5 = pMVar6;
  if (pUVar7 != (UI_InGameMenu_o *)0x0) {
    pMVar5 = (MethodInfo *)0x0;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,(uint)pMVar6 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = pMVar5;
  __this_02 = pUVar7;
  if (g_data_057ae400 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_02 = (UI_InGameMenu_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae400 = '\x01';
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x30), lVar8 != 0)) {
    if (*(char *)(lVar8 + 0x11) == '\0') {
      return;
    }
    __this_02 = (UI_InGameMenu_o *)(pUVar7->fields).FeedPanel;
    if (__this_02 != (UI_InGameMenu_o *)0x0) {
      pMVar6 = (MethodInfo *)0x0;
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,(uint)pMVar5 & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this_02->fields).HUDBottomHandler;
  pMVar5 = pMVar6;
  if (pUVar1 != (UI_HUDBottomHandler_o *)0x0) {
    if (g_data_057ae3d7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae3d7 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields)._hudBottom;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar5 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pUVar4 = (pUVar1->fields)._hudBottom;
    __this_02 = (UI_InGameMenu_o *)0x0;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,(uint)pMVar6 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  value = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae401 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ae401 = '\x01';
  }
  pMVar6 = pMVar5;
  UI_InGameMenu__SetLabelText(__this_02,(System_String_o *)pMVar5,message,in_RCX);
  __this_00 = (__this_02->fields)._labelHasTimeLeft;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    pMVar6 = pMVar5;
    System_Collections_Generic_Dictionary_object__bool___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)pMVar5,
               -(uint)(value != 0.0) & 1,MethodInfo_Void_set_Item);
    __this_01 = (__this_02->fields)._labelTimeLeft;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)pMVar5,
                 value,MethodInfo_Void_set_Item);
      return;
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae402 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae402 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pMVar6,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pMVar6,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      *(undefined8 *)(lVar8 + 0x238) = extraout_RDX;
      lVar8 = lVar8 + 0x238;
      goto label_043c8b1f;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pMVar6,"TopRight",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto label_043c8b58;
    plVar2 = *(long **)(lVar8 + 0x1b0);
  }
  else {
    plVar2 = *(long **)(lVar8 + 0x1a0);
  }
  while( true ) {
    while( true ) {
      while( true ) {
        if (plVar2 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar2 + 0x5e8);
          (*vtableDispatch)(plVar2,extraout_RDX,*(undefined8 *)(*plVar2 + 0x5f0),vtableDispatch)
          ;
          return;
        }
        il2cpp_runtime_helper_022b2c90();
label_043c8b58:
        bVar3 = System_String__op_Equality((System_String_o *)pMVar6,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          *(undefined8 *)(lVar8 + 0x220) = extraout_RDX;
          lVar8 = lVar8 + 0x220;
          goto label_043c8b1f;
        }
        bVar3 = System_String__op_Equality((System_String_o *)pMVar6,"MiddleLeft",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') break;
        plVar2 = *(long **)(lVar8 + 0x1c0);
      }
      bVar3 = System_String__op_Equality((System_String_o *)pMVar6,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') break;
      plVar2 = *(long **)(lVar8 + 0x1c8);
    }
    bVar3 = System_String__op_Equality((System_String_o *)pMVar6,"BottomLeft",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') break;
    plVar2 = *(long **)(lVar8 + 0x1d0);
  }
  bVar3 = System_String__op_Equality((System_String_o *)pMVar6,"BottomRight",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pMVar6,"BottomCenter",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    *(undefined8 *)(lVar8 + 0x230) = extraout_RDX;
    lVar8 = lVar8 + 0x230;
  }
  else {
    *(undefined8 *)(lVar8 + 0x228) = extraout_RDX;
    lVar8 = lVar8 + 0x228;
  }
label_043c8b1f:
  il2cpp_runtime_helper_022b4080(lVar8,extraout_RDX);
  return;
}


// UI.InGameMenu$$SetMinimapActive
// il2cpp: void UI_InGameMenu__SetMinimapActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x43c87e0

void UI_InGameMenu__SetMinimapActive(UI_InGameMenu_o *__this,bool_conflict active,MethodInfo *method)

{
  UI_HUDBottomHandler_o *pUVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_string__bool__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  long *plVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *in_RCX;
  System_String_o *message;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  MethodInfo *pMVar5;
  MethodInfo *pMVar6;
  UI_InGameMenu_o *__this_02;
  UI_InGameMenu_o *__this_03;
  long lVar7;
  float value;
  
  pMVar5 = (MethodInfo *)CONCAT44(in_register_00000034,active);
  bVar3 = UI_InGameMenu__AllowMap(__this,pMVar5);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar4 = (__this->fields)._minimapPanel;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar4,active & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = pUVar4[8].monitor;
  pMVar6 = pMVar5;
  if (__this_02 != (UI_InGameMenu_o *)0x0) {
    pMVar6 = (MethodInfo *)0x0;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,(uint)pMVar5 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar5 = pMVar6;
  __this_03 = __this_02;
  if (g_data_057ae400 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_03 = (UI_InGameMenu_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae400 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) {
    if (*(char *)(lVar7 + 0x11) == '\0') {
      return;
    }
    __this_03 = (UI_InGameMenu_o *)(__this_02->fields).FeedPanel;
    if (__this_03 != (UI_InGameMenu_o *)0x0) {
      pMVar5 = (MethodInfo *)0x0;
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,(uint)pMVar6 & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this_03->fields).HUDBottomHandler;
  pMVar6 = pMVar5;
  if (pUVar1 != (UI_HUDBottomHandler_o *)0x0) {
    if (g_data_057ae3d7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae3d7 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields)._hudBottom;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar6 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pUVar4 = (pUVar1->fields)._hudBottom;
    __this_03 = (UI_InGameMenu_o *)0x0;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,(uint)pMVar5 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  value = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae401 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ae401 = '\x01';
  }
  pMVar5 = pMVar6;
  UI_InGameMenu__SetLabelText(__this_03,(System_String_o *)pMVar6,message,in_RCX);
  __this_00 = (__this_03->fields)._labelHasTimeLeft;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    pMVar5 = pMVar6;
    System_Collections_Generic_Dictionary_object__bool___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)pMVar6,
               -(uint)(value != 0.0) & 1,MethodInfo_Void_set_Item);
    __this_01 = (__this_03->fields)._labelTimeLeft;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)pMVar6,
                 value,MethodInfo_Void_set_Item);
      return;
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae402 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae402 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)pMVar5,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pMVar5,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      *(undefined8 *)(lVar7 + 0x238) = extraout_RDX;
      lVar7 = lVar7 + 0x238;
      goto label_043c8b1f;
    }
    bVar3 = System_String__op_Equality((System_String_o *)pMVar5,"TopRight",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto label_043c8b58;
    plVar2 = *(long **)(lVar7 + 0x1b0);
  }
  else {
    plVar2 = *(long **)(lVar7 + 0x1a0);
  }
  while( true ) {
    while( true ) {
      while( true ) {
        if (plVar2 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar2 + 0x5e8);
          (*vtableDispatch)(plVar2,extraout_RDX,*(undefined8 *)(*plVar2 + 0x5f0),vtableDispatch)
          ;
          return;
        }
        il2cpp_runtime_helper_022b2c90();
label_043c8b58:
        bVar3 = System_String__op_Equality((System_String_o *)pMVar5,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          *(undefined8 *)(lVar7 + 0x220) = extraout_RDX;
          lVar7 = lVar7 + 0x220;
          goto label_043c8b1f;
        }
        bVar3 = System_String__op_Equality((System_String_o *)pMVar5,"MiddleLeft",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') break;
        plVar2 = *(long **)(lVar7 + 0x1c0);
      }
      bVar3 = System_String__op_Equality((System_String_o *)pMVar5,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') break;
      plVar2 = *(long **)(lVar7 + 0x1c8);
    }
    bVar3 = System_String__op_Equality((System_String_o *)pMVar5,"BottomLeft",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') break;
    plVar2 = *(long **)(lVar7 + 0x1d0);
  }
  bVar3 = System_String__op_Equality((System_String_o *)pMVar5,"BottomRight",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality((System_String_o *)pMVar5,"BottomCenter",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    *(undefined8 *)(lVar7 + 0x230) = extraout_RDX;
    lVar7 = lVar7 + 0x230;
  }
  else {
    *(undefined8 *)(lVar7 + 0x228) = extraout_RDX;
    lVar7 = lVar7 + 0x228;
  }
label_043c8b1f:
  il2cpp_runtime_helper_022b4080(lVar7,extraout_RDX);
  return;
}


// UI.InGameMenu$$SetChatPanelActive
// il2cpp: void UI_InGameMenu__SetChatPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x43c8820

void UI_InGameMenu__SetChatPanelActive(UI_InGameMenu_o *__this,bool_conflict active,MethodInfo *method)

{
  UI_HUDBottomHandler_o *pUVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_string__bool__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  long *plVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *in_RCX;
  System_String_o *message;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  UI_InGameMenu_o *__this_02;
  UI_InGameMenu_o *__this_03;
  long lVar7;
  float value;
  
  pSVar5 = (System_String_o *)CONCAT44(in_register_00000034,active);
  __this_02 = (UI_InGameMenu_o *)(__this->fields).ChatPanel;
  if (__this_02 != (UI_InGameMenu_o *)0x0) {
    pSVar5 = (System_String_o *)0x0;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,active & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar6 = pSVar5;
  __this_03 = __this_02;
  if (g_data_057ae400 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_03 = (UI_InGameMenu_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae400 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x30), lVar7 != 0)) {
    if (*(char *)(lVar7 + 0x11) == '\0') {
      return;
    }
    __this_03 = (UI_InGameMenu_o *)(__this_02->fields).FeedPanel;
    if (__this_03 != (UI_InGameMenu_o *)0x0) {
      pSVar6 = (System_String_o *)0x0;
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,(uint)pSVar5 & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this_03->fields).HUDBottomHandler;
  pSVar5 = pSVar6;
  if (pUVar1 != (UI_HUDBottomHandler_o *)0x0) {
    if (g_data_057ae3d7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae3d7 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields)._hudBottom;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = (System_String_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pUVar4 = (pUVar1->fields)._hudBottom;
    __this_03 = (UI_InGameMenu_o *)0x0;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,(uint)pSVar6 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  value = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae401 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ae401 = '\x01';
  }
  pSVar6 = pSVar5;
  UI_InGameMenu__SetLabelText(__this_03,pSVar5,message,in_RCX);
  __this_00 = (__this_03->fields)._labelHasTimeLeft;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    pSVar6 = pSVar5;
    System_Collections_Generic_Dictionary_object__bool___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)pSVar5,
               -(uint)(value != 0.0) & 1,MethodInfo_Void_set_Item);
    __this_01 = (__this_03->fields)._labelTimeLeft;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)pSVar5,
                 value,MethodInfo_Void_set_Item);
      return;
    }
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae402 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae402 = '\x01';
  }
  bVar3 = System_String__op_Equality(pSVar6,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(pSVar6,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      *(undefined8 *)(lVar7 + 0x238) = extraout_RDX;
      lVar7 = lVar7 + 0x238;
      goto label_043c8b1f;
    }
    bVar3 = System_String__op_Equality(pSVar6,"TopRight",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto label_043c8b58;
    plVar2 = *(long **)(lVar7 + 0x1b0);
  }
  else {
    plVar2 = *(long **)(lVar7 + 0x1a0);
  }
  while( true ) {
    while( true ) {
      while( true ) {
        if (plVar2 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar2 + 0x5e8);
          (*vtableDispatch)(plVar2,extraout_RDX,*(undefined8 *)(*plVar2 + 0x5f0),vtableDispatch)
          ;
          return;
        }
        il2cpp_runtime_helper_022b2c90();
label_043c8b58:
        bVar3 = System_String__op_Equality(pSVar6,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          *(undefined8 *)(lVar7 + 0x220) = extraout_RDX;
          lVar7 = lVar7 + 0x220;
          goto label_043c8b1f;
        }
        bVar3 = System_String__op_Equality(pSVar6,"MiddleLeft",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') break;
        plVar2 = *(long **)(lVar7 + 0x1c0);
      }
      bVar3 = System_String__op_Equality(pSVar6,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') break;
      plVar2 = *(long **)(lVar7 + 0x1c8);
    }
    bVar3 = System_String__op_Equality(pSVar6,"BottomLeft",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') break;
    plVar2 = *(long **)(lVar7 + 0x1d0);
  }
  bVar3 = System_String__op_Equality(pSVar6,"BottomRight",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(pSVar6,"BottomCenter",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    *(undefined8 *)(lVar7 + 0x230) = extraout_RDX;
    lVar7 = lVar7 + 0x230;
  }
  else {
    *(undefined8 *)(lVar7 + 0x228) = extraout_RDX;
    lVar7 = lVar7 + 0x228;
  }
label_043c8b1f:
  il2cpp_runtime_helper_022b4080(lVar7,extraout_RDX);
  return;
}


// UI.InGameMenu$$SetFeedPanelActive
// il2cpp: void UI_InGameMenu__SetFeedPanelActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x43c8850

void UI_InGameMenu__SetFeedPanelActive(UI_InGameMenu_o *__this,bool_conflict active,MethodInfo *method)

{
  UI_HUDBottomHandler_o *pUVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_string__bool__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  long *plVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *in_RCX;
  System_String_o *message;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  System_String_o *pSVar5;
  System_String_o *label;
  UI_InGameMenu_o *__this_02;
  long lVar6;
  float value;
  
  pSVar5 = (System_String_o *)CONCAT44(in_register_00000034,active);
  __this_02 = __this;
  if (g_data_057ae400 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_02 = (UI_InGameMenu_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae400 = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x30), lVar6 != 0)) {
    if (*(char *)(lVar6 + 0x11) == '\0') {
      return;
    }
    __this_02 = (UI_InGameMenu_o *)(__this->fields).FeedPanel;
    if (__this_02 != (UI_InGameMenu_o *)0x0) {
      pSVar5 = (System_String_o *)0x0;
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,active & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this_02->fields).HUDBottomHandler;
  label = pSVar5;
  if (pUVar1 != (UI_HUDBottomHandler_o *)0x0) {
    if (g_data_057ae3d7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae3d7 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields)._hudBottom;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    label = (System_String_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pUVar4 = (pUVar1->fields)._hudBottom;
    __this_02 = (UI_InGameMenu_o *)0x0;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,(uint)pSVar5 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  value = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae401 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ae401 = '\x01';
  }
  pSVar5 = label;
  UI_InGameMenu__SetLabelText(__this_02,label,message,in_RCX);
  __this_00 = (__this_02->fields)._labelHasTimeLeft;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    pSVar5 = label;
    System_Collections_Generic_Dictionary_object__bool___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)label,
               -(uint)(value != 0.0) & 1,MethodInfo_Void_set_Item);
    __this_01 = (__this_02->fields)._labelTimeLeft;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)label,
                 value,MethodInfo_Void_set_Item);
      return;
    }
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae402 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae402 = '\x01';
  }
  bVar3 = System_String__op_Equality(pSVar5,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(pSVar5,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      *(undefined8 *)(lVar6 + 0x238) = extraout_RDX;
      lVar6 = lVar6 + 0x238;
      goto label_043c8b1f;
    }
    bVar3 = System_String__op_Equality(pSVar5,"TopRight",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto label_043c8b58;
    plVar2 = *(long **)(lVar6 + 0x1b0);
  }
  else {
    plVar2 = *(long **)(lVar6 + 0x1a0);
  }
  while( true ) {
    while( true ) {
      while( true ) {
        if (plVar2 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar2 + 0x5e8);
          (*vtableDispatch)(plVar2,extraout_RDX,*(undefined8 *)(*plVar2 + 0x5f0),vtableDispatch)
          ;
          return;
        }
        il2cpp_runtime_helper_022b2c90();
label_043c8b58:
        bVar3 = System_String__op_Equality(pSVar5,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          *(undefined8 *)(lVar6 + 0x220) = extraout_RDX;
          lVar6 = lVar6 + 0x220;
          goto label_043c8b1f;
        }
        bVar3 = System_String__op_Equality(pSVar5,"MiddleLeft",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') break;
        plVar2 = *(long **)(lVar6 + 0x1c0);
      }
      bVar3 = System_String__op_Equality(pSVar5,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') break;
      plVar2 = *(long **)(lVar6 + 0x1c8);
    }
    bVar3 = System_String__op_Equality(pSVar5,"BottomLeft",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') break;
    plVar2 = *(long **)(lVar6 + 0x1d0);
  }
  bVar3 = System_String__op_Equality(pSVar5,"BottomRight",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(pSVar5,"BottomCenter",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    *(undefined8 *)(lVar6 + 0x230) = extraout_RDX;
    lVar6 = lVar6 + 0x230;
  }
  else {
    *(undefined8 *)(lVar6 + 0x228) = extraout_RDX;
    lVar6 = lVar6 + 0x228;
  }
label_043c8b1f:
  il2cpp_runtime_helper_022b4080(lVar6,extraout_RDX);
  return;
}


// UI.InGameMenu$$SetBottomHUDActive
// il2cpp: void UI_InGameMenu__SetBottomHUDActive (UI_InGameMenu_o* __this, bool active, const MethodInfo* method);
// 0x43c88f0

void UI_InGameMenu__SetBottomHUDActive(UI_InGameMenu_o *__this,bool_conflict active,MethodInfo *method)

{
  UI_HUDBottomHandler_o *pUVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_Dictionary_string__bool__o *__this_01;
  System_Collections_Generic_Dictionary_string__float__o *__this_02;
  long *plVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  MethodInfo *in_RCX;
  System_String_o *message;
  undefined8 extraout_RDX;
  undefined4 in_register_00000034;
  System_String_o *label;
  System_String_o *a;
  long lVar4;
  float value;
  
  label = (System_String_o *)CONCAT44(in_register_00000034,active);
  pUVar1 = (__this->fields).HUDBottomHandler;
  if (pUVar1 != (UI_HUDBottomHandler_o *)0x0) {
    if (g_data_057ae3d7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae3d7 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields)._hudBottom;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    label = (System_String_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    __this_00 = (pUVar1->fields)._hudBottom;
    __this = (UI_InGameMenu_o *)0x0;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,active & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  value = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae401 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ae401 = '\x01';
  }
  a = label;
  UI_InGameMenu__SetLabelText(__this,label,message,in_RCX);
  __this_01 = (__this->fields)._labelHasTimeLeft;
  if (__this_01 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    a = label;
    System_Collections_Generic_Dictionary_object__bool___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)label,
               -(uint)(value != 0.0) & 1,MethodInfo_Void_set_Item);
    __this_02 = (__this->fields)._labelTimeLeft;
    if (__this_02 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,(Il2CppObject *)label,
                 value,MethodInfo_Void_set_Item);
      return;
    }
  }
  lVar4 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae402 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae402 = '\x01';
  }
  bVar3 = System_String__op_Equality(a,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(a,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      *(undefined8 *)(lVar4 + 0x238) = extraout_RDX;
      lVar4 = lVar4 + 0x238;
      goto label_043c8b1f;
    }
    bVar3 = System_String__op_Equality(a,"TopRight",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto label_043c8b58;
    plVar2 = *(long **)(lVar4 + 0x1b0);
  }
  else {
    plVar2 = *(long **)(lVar4 + 0x1a0);
  }
  while( true ) {
    while( true ) {
      while( true ) {
        if (plVar2 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar2 + 0x5e8);
          (*vtableDispatch)(plVar2,extraout_RDX,*(undefined8 *)(*plVar2 + 0x5f0),vtableDispatch)
          ;
          return;
        }
        il2cpp_runtime_helper_022b2c90();
label_043c8b58:
        bVar3 = System_String__op_Equality(a,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          *(undefined8 *)(lVar4 + 0x220) = extraout_RDX;
          lVar4 = lVar4 + 0x220;
          goto label_043c8b1f;
        }
        bVar3 = System_String__op_Equality(a,"MiddleLeft",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') break;
        plVar2 = *(long **)(lVar4 + 0x1c0);
      }
      bVar3 = System_String__op_Equality(a,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') break;
      plVar2 = *(long **)(lVar4 + 0x1c8);
    }
    bVar3 = System_String__op_Equality(a,"BottomLeft",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') break;
    plVar2 = *(long **)(lVar4 + 0x1d0);
  }
  bVar3 = System_String__op_Equality(a,"BottomRight",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(a,"BottomCenter",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    *(undefined8 *)(lVar4 + 0x230) = extraout_RDX;
    lVar4 = lVar4 + 0x230;
  }
  else {
    *(undefined8 *)(lVar4 + 0x228) = extraout_RDX;
    lVar4 = lVar4 + 0x228;
  }
label_043c8b1f:
  il2cpp_runtime_helper_022b4080(lVar4,extraout_RDX);
  return;
}


// UI.InGameMenu$$SetLabel
// il2cpp: void UI_InGameMenu__SetLabel (UI_InGameMenu_o* __this, System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x43c8980

void UI_InGameMenu__SetLabel
               (UI_InGameMenu_o *__this,System_String_o *label,System_String_o *message,float time,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__bool__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  long *plVar1;
  code *vtableDispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  System_String_o *a;
  long lVar3;
  
  if (g_data_057ae401 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ae401 = '\x01';
  }
  a = label;
  UI_InGameMenu__SetLabelText(__this,label,message,method);
  __this_00 = (__this->fields)._labelHasTimeLeft;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
    a = label;
    System_Collections_Generic_Dictionary_object__bool___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)label,
               -(uint)(time != 0.0) & 1,MethodInfo_Void_set_Item);
    __this_01 = (__this->fields)._labelTimeLeft;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)label,time
                 ,MethodInfo_Void_set_Item);
      return;
    }
  }
  lVar3 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae402 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae402 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(a,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      *(undefined8 *)(lVar3 + 0x238) = extraout_RDX;
      lVar3 = lVar3 + 0x238;
      goto label_043c8b1f;
    }
    bVar2 = System_String__op_Equality(a,"TopRight",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_043c8b58;
    plVar1 = *(long **)(lVar3 + 0x1b0);
  }
  else {
    plVar1 = *(long **)(lVar3 + 0x1a0);
  }
  while( true ) {
    while( true ) {
      while( true ) {
        if (plVar1 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar1 + 0x5e8);
          (*vtableDispatch)(plVar1,extraout_RDX,*(undefined8 *)(*plVar1 + 0x5f0),vtableDispatch)
          ;
          return;
        }
        il2cpp_runtime_helper_022b2c90();
label_043c8b58:
        bVar2 = System_String__op_Equality(a,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          *(undefined8 *)(lVar3 + 0x220) = extraout_RDX;
          lVar3 = lVar3 + 0x220;
          goto label_043c8b1f;
        }
        bVar2 = System_String__op_Equality(a,"MiddleLeft",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') break;
        plVar1 = *(long **)(lVar3 + 0x1c0);
      }
      bVar2 = System_String__op_Equality(a,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') break;
      plVar1 = *(long **)(lVar3 + 0x1c8);
    }
    bVar2 = System_String__op_Equality(a,"BottomLeft",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') break;
    plVar1 = *(long **)(lVar3 + 0x1d0);
  }
  bVar2 = System_String__op_Equality(a,"BottomRight",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(a,"BottomCenter",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    *(undefined8 *)(lVar3 + 0x230) = extraout_RDX;
    lVar3 = lVar3 + 0x230;
  }
  else {
    *(undefined8 *)(lVar3 + 0x228) = extraout_RDX;
    lVar3 = lVar3 + 0x228;
  }
label_043c8b1f:
  il2cpp_runtime_helper_022b4080(lVar3,extraout_RDX);
  return;
}


// UI.InGameMenu$$SetLabelText
// il2cpp: void UI_InGameMenu__SetLabelText (UI_InGameMenu_o* __this, System_String_o* label, System_String_o* message, const MethodInfo* method);
// 0x43c8a30

void UI_InGameMenu__SetLabelText
               (UI_InGameMenu_o *__this,System_String_o *label,System_String_o *message,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  System_String_o **ppSVar3;
  
  if (g_data_057ae402 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopRight");
    il2cpp_runtime_helper_023445d0(&"MiddleRight");
    il2cpp_runtime_helper_023445d0(&"MiddleCenter");
    il2cpp_runtime_helper_023445d0(&"BottomCenter");
    il2cpp_runtime_helper_023445d0(&"MiddleLeft");
    il2cpp_runtime_helper_023445d0(&"TopLeft");
    il2cpp_runtime_helper_023445d0(&"TopCenter");
    il2cpp_runtime_helper_023445d0(&"BottomLeft");
    il2cpp_runtime_helper_023445d0(&"BottomRight");
    g_data_057ae402 = '\x01';
  }
  bVar2 = System_String__op_Equality(label,"TopCenter",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(label,"TopLeft",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      (__this->fields)._topLeftText = message;
      ppSVar3 = &(__this->fields)._topLeftText;
      goto label_043c8b1f;
    }
    bVar2 = System_String__op_Equality(label,"TopRight",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_043c8b58;
    pUVar1 = (__this->fields)._topRightLabel;
  }
  else {
    pUVar1 = (__this->fields)._topCenterLabel;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          vtableDispatch = (pUVar1->klass->vtable)._75_set_text.methodPtr;
          (*vtableDispatch)
                    (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method,vtableDispatch);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
label_043c8b58:
        bVar2 = System_String__op_Equality(label,"MiddleCenter",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          (__this->fields)._middleCenterText = message;
          ppSVar3 = &(__this->fields)._middleCenterText;
          goto label_043c8b1f;
        }
        bVar2 = System_String__op_Equality(label,"MiddleLeft",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') break;
        pUVar1 = (__this->fields)._middleLeftLabel;
      }
      bVar2 = System_String__op_Equality(label,"MiddleRight",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') break;
      pUVar1 = (__this->fields)._middleRightLabel;
    }
    bVar2 = System_String__op_Equality(label,"BottomLeft",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') break;
    pUVar1 = (__this->fields)._bottomLeftLabel;
  }
  bVar2 = System_String__op_Equality(label,"BottomRight",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(label,"BottomCenter",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    (__this->fields)._bottomCenterText = message;
    ppSVar3 = &(__this->fields)._bottomCenterText;
  }
  else {
    (__this->fields)._bottomRightText = message;
    ppSVar3 = &(__this->fields)._bottomRightText;
  }
label_043c8b1f:
  il2cpp_runtime_helper_022b4080(ppSVar3,message);
  return;
}


// UI.InGameMenu$$WaitAndShowBlood
// il2cpp: System_Collections_IEnumerator_o* UI_InGameMenu__WaitAndShowBlood (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c8130

System_Collections_IEnumerator_o * UI_InGameMenu__WaitAndShowBlood(UI_InGameMenu_o *__this,MethodInfo *method)

{
  UI_InGameMenu__WaitAndShowBlood_d__104_o *__this_00;
  System_Collections_IEnumerator_o *pSVar1;
  System_Collections_IEnumerator_o *extraout_RAX;
  int32_t in_ECX;
  System_String_o *victim;
  System_String_o *killer;
  UI_InGameMenu__WaitAndShowBlood_d__104_o *pUVar2;
  UI_InGameMenu_o *pUVar3;
  System_String_o *in_R8;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057ae403 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndShowBlood_d__104);
    g_data_057ae403 = '\x01';
  }
  __this_00 = (UI_InGameMenu__WaitAndShowBlood_d__104_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndShowBlood_d__104);
  killer = (System_String_o *)0x0;
  pUVar2 = __this_00;
  UI_InGameMenu__WaitAndShowBlood_d__104___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (UI_InGameMenu__WaitAndShowBlood_d__104_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = pUVar2[8].fields.__4__this;
  if (pUVar3 != (UI_InGameMenu_o *)0x0) {
    (*pUVar3->klass[2].vtable._6_HideAllPopups.methodPtr)();
    pUVar3 = pUVar2[8].fields.__4__this;
    if (pUVar3 != (UI_InGameMenu_o *)0x0) {
      pSVar1 = (System_Collections_IEnumerator_o *)
               (**(code **)&pUVar3->klass[1]._2.cctor_finished)(pUVar3,pUVar3->klass[1]._2.cctor_thread);
      *(undefined4 *)&pUVar2[0xd].fields.field_0x4 = 0x40000000;
      return pSVar1;
    }
  }
  pUVar3 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  UI_InGameMenu__ShowKillFeed_42c8210(pUVar3,killer,victim,in_ECX,in_R8,-1,-1,in_stack_ffffffffffffffd0);
  return extraout_RAX;
}


// UI.InGameMenu$$Update
// il2cpp: void UI_InGameMenu__Update (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c8c60

void UI_InGameMenu__Update(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  GameManagers_InGameManager_o *pGVar5;
  UI_GlobalPauseGamePopup_o *pUVar6;
  UI_GlobalPauseGamePopup_c *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  System_Collections_Generic_Dictionary_string__float__o *pSVar10;
  System_Collections_Generic_Dictionary_string__bool__o *pSVar11;
  Il2CppRGCTXData *pIVar12;
  Il2CppClass *pIVar13;
  void *pvVar14;
  Photon_Realtime_Player_o *player;
  long lVar15;
  Characters_BaseCharacter_o *pCVar16;
  long lVar17;
  UI_KillFeedBigPopup_o *pUVar18;
  UI_KillScorePopup_o *pUVar19;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  UI_SnapshotPopup_o *pUVar20;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_09;
  undefined8 uVar21;
  bool_conflict bVar22;
  int32_t iVar23;
  System_String_o *pSVar24;
  Photon_Realtime_Player_array *pPVar25;
  System_String_o *pSVar26;
  Il2CppObject *arg0;
  System_String_o *pSVar27;
  System_String_array *pSVar28;
  MethodInfo *pMVar29;
  long *plVar30;
  char extraout_DL;
  int iVar31;
  UI_InGameMenu_o *__this_10;
  MethodInfo_324D130 *unaff_R14;
  float fVar32;
  undefined1 auVar33 [12];
  float in_stack_ffffffffffffff28;
  uint uVar34;
  UI_InGameMenu_o *in_stack_ffffffffffffff30;
  Il2CppObject *pIVar35;
  Il2CppType *pIVar36;
  Il2CppObject *key;
  undefined1 auStack_a8 [40];
  Il2CppType *pIStack_80;
  Il2CppObject *pIStack_78;
  Il2CppRGCTXData *pIStack_70;
  _union_231595 _Stack_68;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  Il2CppRGCTXData *pIStack_40;
  _union_231595 _Stack_38;
  
  if (g_data_057ae404 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameCamera_SpecateMode_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KillFeedSmallPopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_Boolean_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_KillFeedSmallPopup_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SpecateMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"Paused by master client.");
    il2cpp_runtime_helper_023445d0(&"{0}: ");
    il2cpp_runtime_helper_023445d0(&"\nRestarting in ");
    il2cpp_runtime_helper_023445d0(&"). ");
    il2cpp_runtime_helper_023445d0(&"Prev: ");
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"Spectating. ");
    il2cpp_runtime_helper_023445d0(&"Next: ");
    il2cpp_runtime_helper_023445d0(&"Join: ");
    il2cpp_runtime_helper_023445d0(&"Spectating ");
    il2cpp_runtime_helper_023445d0(&" (");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Unpausing in: ");
    g_data_057ae404 = '\x01';
  }
  pIStack_78 = (Il2CppObject *)0x0;
  pIStack_70 = (Il2CppRGCTXData *)0x0;
  auStack_a8._32_8_ = (void *)0x0;
  pIStack_80 = (Il2CppType *)0x0;
  _Stack_68.genericMethod = (void *)0x0;
  pIVar35 = (Il2CppObject *)0x0;
  pIVar36 = (Il2CppType *)0x0;
  key = (Il2CppObject *)0x0;
  uVar34 = 0;
  auStack_a8._0_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  auStack_a8._8_8_ = (Il2CppType *)0x0;
  auStack_a8._16_8_ = (Il2CppType **)0x0;
  pGVar5 = (__this->fields)._gameManager;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar22 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar22 != '\0') {
    return;
  }
  pGVar5 = (__this->fields)._gameManager;
  if ((pGVar5 != (GameManagers_InGameManager_o *)0x0) &&
     (pUVar6 = (__this->fields)._globalPauseGamePopup, pUVar6 != (UI_GlobalPauseGamePopup_o *)0x0)) {
    pUVar7 = pUVar6->klass;
    if (*(char *)((long)&(pGVar5->fields)._gameSettingsLoaded + 2) == '\0') {
      (*(pUVar7->vtable)._22_Hide.methodPtr)();
      pSVar9 = (__this->fields).labelsToDeactivate;
    }
    else {
      (*(pUVar7->vtable)._21_Show.methodPtr)();
      pGVar5 = (__this->fields)._gameManager;
      if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto label_043c9c17;
      fVar32 = (float)(pGVar5->fields).HasSpawned;
      pUVar6 = (__this->fields)._globalPauseGamePopup;
      if (0.0 <= fVar32) {
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_stack_ffffffffffffff28 = fVar32;
        }
        pSVar24 = Utility_Util__FormatFloat(fVar32,1,(MethodInfo *)0x0);
        pSVar24 = System_String__Concat_3ae5ba0("Unpausing in: ",pSVar24,(MethodInfo *)0x0);
        if ((pUVar6 == (UI_GlobalPauseGamePopup_o *)0x0) ||
           (pUVar8 = (pUVar6->fields)._label, pUVar8 == (UnityEngine_UI_Text_o *)0x0)) goto label_043c9c17;
        (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                  (pUVar8,pSVar24,(pUVar8->klass->vtable)._75_set_text.method);
        pSVar9 = (__this->fields).labelsToDeactivate;
      }
      else {
        if ((pUVar6 == (UI_GlobalPauseGamePopup_o *)0x0) ||
           (pUVar8 = (pUVar6->fields)._label, pUVar8 == (UnityEngine_UI_Text_o *)0x0)) goto label_043c9c17;
        (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                  (pUVar8,"Paused by master client.",(pUVar8->klass->vtable)._75_set_text.method);
        pSVar9 = (__this->fields).labelsToDeactivate;
      }
    }
    if (pSVar9 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(pSVar9->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar23 = (pSVar9->fields)._size;
      (pSVar9->fields)._size = 0;
      if (0 < iVar23) {
        System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar23,(MethodInfo *)0x0);
      }
      pSVar11 = (__this->fields)._labelHasTimeLeft;
      in_stack_ffffffffffffff30 = __this;
      if (pSVar11 != (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
        System_Collections_Generic_Dictionary_object__bool___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
        _Stack_68 = _Stack_38;
        auStack_a8._36_4_ = auStack_58._4_4_;
        auStack_a8._32_4_ = auStack_58._0_4_;
        pIStack_78 = pIStack_48;
        pIStack_70 = pIStack_40;
        pIStack_80 = (Il2CppType *)auStack_58._8_8_;
        unaff_R14 = (MethodInfo_324D130 *)(auStack_a8 + 0x20);
        while (__this_06.fields._dictionary._4_4_ = uVar34,
              __this_06.fields._dictionary._0_4_ = in_stack_ffffffffffffff28, __this_06.fields._8_8_ = __this,
              __this_06.fields._current.fields.key = pIVar35,
              __this_06.fields._current.fields.value = (Il2CppObject *)pIVar36, __this_06.fields._32_8_ = key,
              bVar22 = System_Collections_Generic_Dictionary_Enumerator_object__bool___MoveNext
                                 (__this_06,unaff_R14), (char)bVar22 != '\0') {
          pSVar24 = (System_String_o *)il2cpp_runtime_helper_043cd1a0(unaff_R14,MethodInfo_KeyValuePair_2_System_String_System_Boolean_get_Current);
          if (extraout_DL != '\0') {
            pSVar10 = (__this->fields)._labelTimeLeft;
            if (pSVar10 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_043c9c1c;
            in_stack_ffffffffffffff28 =
                 System_Collections_Generic_Dictionary_object__float___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                            (Il2CppObject *)pSVar24,MethodInfo_Single_get_Item);
            fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__float___set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                       (Il2CppObject *)pSVar24,in_stack_ffffffffffffff28 - fVar32,MethodInfo_Void_set_Item);
            pSVar10 = (__this->fields)._labelTimeLeft;
            if (pSVar10 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_043c9c21;
            fVar32 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                                (Il2CppObject *)pSVar24,MethodInfo_Single_get_Item);
            pMVar29 = MethodInfo_Void_Add;
            if (fVar32 <= 0.0) {
              pSVar9 = (__this->fields).labelsToDeactivate;
              if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) goto label_043c9c26;
              piVar1 = &(pSVar9->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar28 = (pSVar9->fields)._items;
              if (pSVar28 == (System_String_array *)0x0) goto label_043c9c2b;
              uVar2 = (pSVar9->fields)._size;
              if (uVar2 < (uint)pSVar28->max_length) {
                pMVar29 = (MethodInfo *)(ulong)(uVar2 + 1);
                (pSVar9->fields)._size = uVar2 + 1;
                pSVar28->m_Items[(int)uVar2] = pSVar24;
                il2cpp_runtime_helper_022b4080(pSVar28->m_Items + (int)uVar2,pSVar24);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar24,
                           (MethodInfo_362C220 *)pMVar29->klass->rgctx_data[0xe].method);
              }
              UI_InGameMenu__SetLabelText(__this,pSVar24,"",pMVar29);
            }
          }
        }
        __this_07.fields._dictionary._4_4_ = uVar34;
        __this_07.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
        __this_07.fields._8_8_ = __this;
        __this_07.fields._current.fields.key = pIVar35;
        __this_07.fields._current.fields.value = (Il2CppObject *)pIVar36;
        __this_07.fields._32_8_ = key;
        System_Collections_Generic_Dictionary_Enumerator_object__bool___Dispose
                  (__this_07,(MethodInfo_324D240 *)(auStack_a8 + 0x20));
        __this_10 = __this;
        goto label_043c9225;
      }
    }
  }
label_043c9c17:
  do {
    do {
      do {
        do {
          do {
            il2cpp_runtime_helper_022b2c90();
            __this = in_stack_ffffffffffffff30;
label_043c9c1c:
            il2cpp_runtime_helper_022b2c90();
label_043c9c21:
            il2cpp_runtime_helper_022b2c90();
label_043c9c26:
            il2cpp_runtime_helper_022b2c90();
label_043c9c2b:
            il2cpp_runtime_helper_022b2c90();
label_043c9c30:
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        il2cpp_runtime_helper_022b2ca0();
                        do {
                          auVar33 = il2cpp_runtime_helper_022b2fd0(unaff_R14);
                          unaff_R14 = auVar33._0_8_;
                          if (auVar33._8_4_ != 1) {
                            __this_09.fields._dictionary._4_4_ = uVar34;
                            __this_09.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
                            __this_09.fields._8_8_ = __this;
                            __this_09.fields._current.fields.key = pIVar35;
                            __this_09.fields._current.fields.value = (Il2CppObject *)pIVar36;
                            __this_09.fields._32_8_ = key;
                            System_Collections_Generic_Dictionary_Enumerator_object__bool___Dispose
                                      (__this_09,(MethodInfo_324D240 *)(auStack_a8 + 0x20));
label_043c9e40:
                            _Unwind_Resume(unaff_R14);
                          }
                          plVar30 = (long *)__cxa_begin_catch(unaff_R14);
                          lVar15 = *plVar30;
                          __cxa_end_catch();
                          __this_08.fields._dictionary._4_4_ = uVar34;
                          __this_08.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
                          __this_08.fields._8_8_ = __this;
                          __this_08.fields._current.fields.key = pIVar35;
                          __this_08.fields._current.fields.value = (Il2CppObject *)pIVar36;
                          __this_08.fields._32_8_ = key;
                          System_Collections_Generic_Dictionary_Enumerator_object__bool___Dispose
                                    (__this_08,(MethodInfo_324D240 *)(auStack_a8 + 0x20));
                          __this_10 = __this;
                          if (lVar15 != 0) {
                            il2cpp_runtime_helper_022fefe0(lVar15);
                            __this_05.fields._list._4_4_ = uVar34;
                            __this_05.fields._list._0_4_ = in_stack_ffffffffffffff28;
                            __this_05.fields._8_8_ = __this;
                            __this_05.fields._current = pIVar35;
                            System_Collections_Generic_List_Enumerator_object___Dispose
                                      (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
                            goto label_043c9e40;
                          }
label_043c9225:
                          pSVar9 = (__this_10->fields).labelsToDeactivate;
                          in_stack_ffffffffffffff30 = __this_10;
                          if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) goto label_043c9c17;
                          __this = __this_10;
                          System_Collections_Generic_List_object___GetEnumerator
                                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,
                                     (System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
                          pIVar35 = (Il2CppObject *)CONCAT44(auStack_58._4_4_,auStack_58._0_4_);
                          unaff_R14 = (MethodInfo_324D130 *)&MethodInfo_Boolean_MoveNext;
                          pIVar36 = (Il2CppType *)auStack_58._8_8_;
                          key = pIStack_48;
                          while (__this_01.fields._list._4_4_ = uVar34,
                                __this_01.fields._list._0_4_ = in_stack_ffffffffffffff28,
                                __this_01.fields._8_8_ = __this, __this_01.fields._current = pIVar35,
                                bVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                                   (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38),
                                (char)bVar22 != '\0') {
                            pSVar11 = (__this_10->fields)._labelHasTimeLeft;
                            if (pSVar11 == (System_Collections_Generic_Dictionary_string__bool__o *)0x0) {
                              il2cpp_runtime_helper_022b2c90();
                              goto label_043c9c12;
                            }
                            System_Collections_Generic_Dictionary_object__bool___set_Item
                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,0,
                                       MethodInfo_Void_set_Item);
                          }
                          __this_02.fields._list._4_4_ = uVar34;
                          __this_02.fields._list._0_4_ = in_stack_ffffffffffffff28;
                          __this_02.fields._8_8_ = __this;
                          __this_02.fields._current = pIVar35;
                          System_Collections_Generic_List_Enumerator_object___Dispose
                                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
                          unaff_R14 = (MethodInfo_324D130 *)&MethodInfo_Boolean_MoveNext;
                          pGVar5 = (__this_10->fields)._gameManager;
                          in_stack_ffffffffffffff30 = __this;
                          if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto label_043c9c17;
                          pUVar8 = (__this_10->fields)._middleCenterLabel;
                          unaff_R14 = (MethodInfo_324D130 *)(__this_10->fields)._middleCenterText;
                          if ((char)(pGVar5->fields).IsEnding == '\0') {
                            if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_043c9c17;
                            (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                                      (pUVar8,unaff_R14,(pUVar8->klass->vtable)._75_set_text.method);
                          }
                          else {
                            uVar34 = (uint)(pGVar5->fields).EndTimeLeft;
                            pSVar24 = System_Int32__ToString
                                                ((int32_t)&stack0xffffffffffffff2c,(MethodInfo *)0x0);
                            pSVar24 = System_String__Concat_3af7150
                                                ((System_String_o *)unaff_R14,"\nRestarting in ",pSVar24,
                                                 (MethodInfo *)0x0);
                            in_stack_ffffffffffffff30 = __this;
                            if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_043c9c17;
                            (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                                      (pUVar8,pSVar24,(pUVar8->klass->vtable)._75_set_text.method);
                          }
                          unaff_R14 = *(MethodInfo_324D130 **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                          if (unaff_R14 == (MethodInfo_324D130 *)0x0) break;
                        } while (((byte)unaff_R14->methodPointer[0x130] <
                                  (byte)*(code *)(TypeInfo_InGameCamera + 0x130)) ||
                                (*(long *)(*(long *)(unaff_R14->methodPointer + 200) + -8 +
                                          (ulong)(byte)*(code *)(TypeInfo_InGameCamera + 0x130) * 8) != TypeInfo_InGameCamera));
                        in_stack_ffffffffffffff28 = (__this_10->fields)._spectateUpdateTimeLeft;
                        fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                        (__this_10->fields)._spectateUpdateTimeLeft = in_stack_ffffffffffffff28 - fVar32;
                        if (in_stack_ffffffffffffff28 - fVar32 <= 0.0) {
                          (__this_10->fields)._spectateUpdateTimeLeft = 1.0;
                          in_stack_ffffffffffffff30 = __this;
                          if (unaff_R14 == (MethodInfo_324D130 *)0x0) goto label_043c9c17;
                          pIVar12 = unaff_R14->rgctx_data;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          iVar31 = 0;
                          bVar22 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)pIVar12,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          __this_10 = __this;
                          if ((char)bVar22 != '\0') {
                            in_stack_ffffffffffffff30 = __this;
                            if ((((unaff_R14->rgctx_data == (Il2CppRGCTXData *)0x0) ||
                                 (pMVar29 = unaff_R14->rgctx_data[0xe].method, pMVar29 == (MethodInfo *)0x0))
                                || (pIVar13 = pMVar29->klass, pIVar13 == (Il2CppClass *)0x0)) ||
                               (pvVar14 = (pIVar13->_1).fields, pvVar14 == (void *)0x0)) goto label_043c9c17;
                            iVar3 = *(int *)((long)pvVar14 + 0x18);
                            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            iVar31 = 0;
                            pPVar25 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
                            uVar34 = 0;
                            in_stack_ffffffffffffff30 = __this;
                            if (pPVar25 == (Photon_Realtime_Player_array *)0x0) goto label_043c9c17;
                            iVar4 = (int)pPVar25->max_length;
                            __this_10 = __this;
                            if (0 < iVar4) {
                              iVar31 = 0;
                              if (iVar4 != 0) {
                                do {
                                  player = pPVar25->m_Items[(int)uVar34];
                                  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  iVar23 = PhotonExtensions__GetIntProperty
                                                     (player,*(System_String_o **)
                                                              (*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88),-1,
                                                      (MethodInfo *)0x0);
                                  iVar31 = iVar31 + (uint)(iVar23 == iVar3);
                                  uVar34 = uVar34 + 1;
                                  uVar2 = (uint)pPVar25->max_length;
                                  __this_10 = __this;
                                  if ((int)uVar2 <= (int)uVar34) goto label_043c9521;
                                } while (uVar34 < uVar2);
                              }
                              goto label_043c9c30;
                            }
                          }
label_043c9521:
                          (__this_10->fields)._spectateCount = iVar31;
                          __this = __this_10;
                        }
                        lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
                        in_stack_ffffffffffffff30 = __this;
                        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x20) == 0)) goto label_043c9c17;
                        if (*(int *)(*(long *)(lVar15 + 0x20) + 0x14) != 1) {
                          pGVar5 = (__this_10->fields)._gameManager;
                          if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto label_043c9c17;
                          pCVar16 = (pGVar5->fields).CurrentCharacter;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar22 = UnityEngine_Object__op_Equality
                                             ((UnityEngine_Object_o *)pCVar16,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if ((char)bVar22 == '\0') {
                            pGVar5 = (__this_10->fields)._gameManager;
                            in_stack_ffffffffffffff30 = __this;
                            if ((pGVar5 == (GameManagers_InGameManager_o *)0x0) ||
                               (pCVar16 = (pGVar5->fields).CurrentCharacter,
                               pCVar16 == (Characters_BaseCharacter_o *)0x0)) goto label_043c9c17;
                            if (*(char *)&(pCVar16->fields).FeedVictimName == '\0') {
                              pUVar8 = (__this_10->fields)._bottomCenterLabel;
                              if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_043c9c17;
                              pMVar29 = (MethodInfo *)(__this_10->fields)._bottomCenterText;
                              (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                                        (pUVar8,pMVar29,(pUVar8->klass->vtable)._75_set_text.method);
                              goto label_043c996a;
                            }
                          }
                        }
                        lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                        in_stack_ffffffffffffff30 = __this;
                        if ((lVar17 == 0) || (*(long *)(lVar15 + 0x20) == 0)) goto label_043c9c17;
                        if (*(int *)(*(long *)(lVar15 + 0x20) + 0x14) == 0) {
                          if (unaff_R14 == (MethodInfo_324D130 *)0x0) goto label_043c9c17;
                          pIVar12 = unaff_R14->rgctx_data;
                          iVar31 = *(int *)(TypeInfo_Object + 0xe4);
                          pSVar24 = "";
                        }
                        else {
                          lVar15 = *(long *)(lVar17 + 0x20);
                          if ((lVar15 == 0) || (plVar30 = *(long **)(lVar15 + 0xb0), plVar30 == (long *)0x0))
                          goto label_043c9c17;
                          pSVar24 = (System_String_o *)
                                    (**(code **)(*plVar30 + 0x168))(plVar30,*(undefined8 *)(*plVar30 + 0x170))
                          ;
                          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar24 = GameManagers_ChatManager__GetColorString(pSVar24,3,0,(MethodInfo *)0x0);
                          pSVar24 = System_String__Concat_3af7150
                                              ("Prev: ",pSVar24,", ",(MethodInfo *)0x0);
                          plVar30 = *(long **)(lVar15 + 0xb8);
                          in_stack_ffffffffffffff30 = __this;
                          if (plVar30 == (long *)0x0) goto label_043c9c17;
                          pSVar26 = (System_String_o *)
                                    (**(code **)(*plVar30 + 0x168))(plVar30,*(undefined8 *)(*plVar30 + 0x170))
                          ;
                          pSVar26 = GameManagers_ChatManager__GetColorString(pSVar26,3,0,(MethodInfo *)0x0);
                          pSVar24 = System_String__Concat_3af7470
                                              (pSVar24,"Next: ",pSVar26,", ",(MethodInfo *)0x0);
                          plVar30 = *(long **)(lVar15 + 0x68);
                          in_stack_ffffffffffffff30 = __this;
                          if (plVar30 == (long *)0x0) goto label_043c9c17;
                          pSVar26 = (System_String_o *)
                                    (**(code **)(*plVar30 + 0x168))(plVar30,*(undefined8 *)(*plVar30 + 0x170))
                          ;
                          pSVar26 = GameManagers_ChatManager__GetColorString(pSVar26,3,0,(MethodInfo *)0x0);
                          pSVar24 = System_String__Concat_3af7470
                                              (pSVar24,"Join: ",pSVar26,", ",(MethodInfo *)0x0);
                          in_stack_ffffffffffffff30 = __this;
                          if ((unaff_R14 == (MethodInfo_324D130 *)0x0) ||
                             ((unaff_R14->field8_0x40).genericMethod == (Utility_Cycle_T__o *)0x0))
                          goto label_043c9c17;
                          auStack_58._0_4_ =
                               Utility_Cycle_Int32Enum___Current
                                         ((unaff_R14->field8_0x40).genericMethod,MethodInfo_InGameCamera_SpecateMode_Current);
                          arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_SpecateMode,auStack_58);
                          pSVar26 = System_String__Format("{0}: ",arg0,(MethodInfo *)0x0);
                          plVar30 = *(long **)(lVar15 + 0x98);
                          in_stack_ffffffffffffff30 = __this;
                          if (plVar30 == (long *)0x0) goto label_043c9c17;
                          pSVar27 = (System_String_o *)
                                    (**(code **)(*plVar30 + 0x168))(plVar30,*(undefined8 *)(*plVar30 + 0x170))
                          ;
                          pSVar27 = GameManagers_ChatManager__GetColorString(pSVar27,3,0,(MethodInfo *)0x0);
                          pSVar24 = System_String__Concat_3af7150(pSVar24,pSVar26,pSVar27,(MethodInfo *)0x0);
                          pIVar12 = unaff_R14->rgctx_data;
                          iVar31 = *(int *)(TypeInfo_Object + 0xe4);
                        }
                        if (iVar31 == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar22 = UnityEngine_Object__op_Inequality
                                           ((UnityEngine_Object_o *)pIVar12,(UnityEngine_Object_o *)0x0,
                                            (MethodInfo *)0x0);
                        if ((char)bVar22 == '\0') {
label_043c9913:
                          pSVar24 = System_String__Concat_3ae5ba0("Spectating. ",pSVar24,(MethodInfo *)0x0);
                          goto label_043c9927;
                        }
                        pGVar5 = (__this_10->fields)._gameManager;
                        in_stack_ffffffffffffff30 = __this;
                        if (pGVar5 == (GameManagers_InGameManager_o *)0x0) goto label_043c9c17;
                        pIVar12 = unaff_R14->rgctx_data;
                        pCVar16 = (pGVar5->fields).CurrentCharacter;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        bVar22 = UnityEngine_Object__op_Inequality
                                           ((UnityEngine_Object_o *)pIVar12,(UnityEngine_Object_o *)pCVar16,
                                            (MethodInfo *)0x0);
                        if ((char)bVar22 == '\0') goto label_043c9913;
                        pSVar28 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,6);
                        in_stack_ffffffffffffff30 = __this;
                        if (pSVar28 == (System_String_array *)0x0) goto label_043c9c17;
                      } while ((int)pSVar28->max_length == 0);
                      pSVar28->m_Items[0] = "Spectating ";
                      il2cpp_runtime_helper_022b4080(pSVar28->m_Items);
                      in_stack_ffffffffffffff30 = __this;
                      if (unaff_R14->rgctx_data == (Il2CppRGCTXData *)0x0) goto label_043c9c17;
                    } while ((uint)pSVar28->max_length < 2);
                    *(Il2CppRGCTXData *)(pSVar28->m_Items + 1) = unaff_R14->rgctx_data[7];
                    il2cpp_runtime_helper_022b4080(pSVar28->m_Items + 1);
                  } while ((uint)pSVar28->max_length < 3);
                  pSVar28->m_Items[2] = " (";
                  il2cpp_runtime_helper_022b4080(pSVar28->m_Items + 2);
                  pSVar26 = System_Int32__ToString((int)__this_10 + 0x244,(MethodInfo *)0x0);
                } while ((uint)pSVar28->max_length < 4);
                pSVar28->m_Items[3] = pSVar26;
                il2cpp_runtime_helper_022b4080(pSVar28->m_Items + 3,pSVar26);
              } while ((uint)pSVar28->max_length < 5);
              pSVar28->m_Items[4] = "). ";
              il2cpp_runtime_helper_022b4080(pSVar28->m_Items + 4);
            } while ((uint)pSVar28->max_length < 6);
            pSVar28->m_Items[5] = pSVar24;
            il2cpp_runtime_helper_022b4080(pSVar28->m_Items + 5);
            pSVar24 = System_String__Concat_3af7570(pSVar28,(MethodInfo *)0x0);
label_043c9927:
            pUVar8 = (__this_10->fields)._bottomCenterLabel;
            pMVar29 = (MethodInfo *)
                      System_String__Concat_3af7150
                                ((__this_10->fields)._bottomCenterText,"\n",pSVar24,(MethodInfo *)0x0)
            ;
            in_stack_ffffffffffffff30 = __this;
          } while (pUVar8 == (UnityEngine_UI_Text_o *)0x0);
          (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                    (pUVar8,pMVar29,(pUVar8->klass->vtable)._75_set_text.method);
label_043c996a:
          pUVar8 = (__this_10->fields)._bottomRightLabel;
          unaff_R14 = (MethodInfo_324D130 *)(__this_10->fields)._bottomRightText;
          pSVar24 = UI_InGameMenu__GetKeybindStrings(__this_10,pMVar29);
          pSVar24 = System_String__Concat_3af7150
                              ((System_String_o *)unaff_R14,"\n",pSVar24,(MethodInfo *)0x0);
          in_stack_ffffffffffffff30 = __this;
        } while (pUVar8 == (UnityEngine_UI_Text_o *)0x0);
        (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                  (pUVar8,pSVar24,(pUVar8->klass->vtable)._75_set_text.method);
        pUVar8 = (__this_10->fields)._topLeftLabel;
        in_stack_ffffffffffffff30 = __this;
      } while (pUVar8 == (UnityEngine_UI_Text_o *)0x0);
      (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                (pUVar8,(__this_10->fields)._topLeftText,(pUVar8->klass->vtable)._75_set_text.method);
      pUVar18 = (__this_10->fields)._killFeedBigPopup;
      in_stack_ffffffffffffff30 = __this;
    } while (pUVar18 == (UI_KillFeedBigPopup_o *)0x0);
    in_stack_ffffffffffffff28 = (pUVar18->fields).TimeLeft;
    fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (pUVar18->fields).TimeLeft = in_stack_ffffffffffffff28 - fVar32;
    pUVar18 = (__this_10->fields)._killFeedBigPopup;
    in_stack_ffffffffffffff30 = __this;
  } while (pUVar18 == (UI_KillFeedBigPopup_o *)0x0);
  if (((char)(pUVar18->fields).IsActive != '\0') && ((pUVar18->fields).TimeLeft <= 0.0)) {
    (*(pUVar18->klass->vtable)._22_Hide.methodPtr)(pUVar18,(pUVar18->klass->vtable)._22_Hide.method);
  }
  in_stack_ffffffffffffff28 = (__this_10->fields)._killScoreTimeLeft;
  fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this_10->fields)._killScoreTimeLeft = in_stack_ffffffffffffff28 - fVar32;
  if (in_stack_ffffffffffffff28 - fVar32 <= 0.0) {
    pUVar19 = (__this_10->fields)._killScorePopup;
    in_stack_ffffffffffffff30 = __this;
    if (pUVar19 == (UI_KillScorePopup_o *)0x0) goto label_043c9c17;
    (*(pUVar19->klass->vtable)._22_Hide.methodPtr)(pUVar19,(pUVar19->klass->vtable)._22_Hide.method);
  }
  __this_00 = (__this_10->fields)._killFeedSmallPopups;
  in_stack_ffffffffffffff30 = __this;
  if (__this_00 != (System_Collections_Generic_List_KillFeedSmallPopup__o *)0x0) {
    unaff_R14 = (MethodInfo_324D130 *)auStack_a8;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)unaff_R14,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_KillFeedSmallPopup_GetEnumerator);
    while (__this_03.fields._list._4_4_ = uVar34, __this_03.fields._list._0_4_ = in_stack_ffffffffffffff28,
          __this_03.fields._8_8_ = __this, __this_03.fields._current = pIVar35,
          bVar22 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this_03,(MethodInfo_321A1D0 *)unaff_R14), uVar21 = auStack_a8._16_8_,
          (char)bVar22 != '\0') {
      if ((Il2CppType **)auStack_a8._16_8_ == (Il2CppType **)0x0) goto label_043c9c12;
      in_stack_ffffffffffffff28 = *(float *)(auStack_a8._16_8_ + 0xd8);
      fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      *(float *)(uVar21 + 0xd8) = in_stack_ffffffffffffff28 - fVar32;
      if ((in_stack_ffffffffffffff28 - fVar32 <= 0.0) && (*(char *)(uVar21 + 0x90) != '\0')) {
        (**(code **)&(*(Il2CppType **)uVar21)[0x29].bits)(uVar21,(*(Il2CppType **)uVar21)[0x2a].data);
      }
    }
    __this_04.fields._list._4_4_ = uVar34;
    __this_04.fields._list._0_4_ = in_stack_ffffffffffffff28;
    __this_04.fields._8_8_ = __this;
    __this_04.fields._current = pIVar35;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)auStack_a8);
    in_stack_ffffffffffffff28 = (__this_10->fields)._snapshotTimeLeft;
    fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this_10->fields)._snapshotTimeLeft = in_stack_ffffffffffffff28 - fVar32;
    pUVar20 = (__this_10->fields)._snapshotPopup;
    in_stack_ffffffffffffff30 = __this;
    if (pUVar20 != (UI_SnapshotPopup_o *)0x0) {
      if ((in_stack_ffffffffffffff28 - fVar32 <= 0.0) && ((char)(pUVar20->fields).IsActive != '\0')) {
        (*(pUVar20->klass->vtable)._22_Hide.methodPtr)(pUVar20,(pUVar20->klass->vtable)._22_Hide.method);
      }
      return;
    }
  }
  goto label_043c9c17;
label_043c9c12:
  il2cpp_runtime_helper_022b2c90();
  in_stack_ffffffffffffff30 = __this;
  goto label_043c9c17;
}


// UI.InGameMenu$$GetKeybindStrings
// il2cpp: System_String_o* UI_InGameMenu__GetKeybindStrings (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c9e60

System_String_o * UI_InGameMenu__GetKeybindStrings(UI_InGameMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  UnityEngine_Rigidbody_o *__this_00;
  void *pvVar9;
  UnityEngine_Transform_o *pUVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  char cVar12;
  bool_conflict bVar13;
  uint uVar14;
  uint uVar15;
  int32_t iVar16;
  undefined8 *puVar17;
  System_String_o *pSVar18;
  System_String_array *pSVar19;
  Il2CppClass *pIVar20;
  Il2CppClass *pIVar21;
  System_String_array **team;
  System_String_array *pSVar22;
  System_String_o **ppSVar23;
  System_String_array *pSVar24;
  System_String_array *pSVar25;
  Il2CppObject *pIVar26;
  System_String_o *pSVar27;
  Il2CppMethodPointer *ppIVar28;
  Photon_Realtime_Player_o *player;
  undefined8 uVar29;
  System_String_array *unaff_RBX;
  Il2CppClass **unaff_RBP;
  long *plVar30;
  System_String_array *key;
  long lVar31;
  int iVar32;
  Il2CppClass **format;
  int iVar33;
  long *unaff_R14;
  Il2CppClass **ppIVar34;
  int iVar35;
  Il2CppClass **ppIVar36;
  System_String_array *pSVar37;
  float fVar38;
  undefined1 auVar39 [12];
  int iStack_f4;
  System_String_o *pSStack_f0;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  System_String_array *pSStack_d8;
  System_String_array *pSStack_d0;
  System_String_o *pSStack_c8;
  System_String_array *pSStack_c0;
  Il2CppClass *pIStack_b8;
  System_String_array *pSStack_b0;
  long *plStack_a8;
  System_String_array *pSStack_a0;
  System_String_array *pSStack_98;
  System_String_o *pSStack_90;
  System_String_array *pSStack_88;
  Il2CppClass *pIStack_80;
  System_String_o *pSStack_78;
  undefined8 uStack_70;
  System_String_Fields SStack_68;
  Il2CppClass **ppIStack_60;
  undefined1 local_50 [8];
  System_String_o local_48;
  
  local_48.fields = (System_String_Fields)__this;
  if (g_data_057ae405 == '\0') {
    ppIStack_60 = (Il2CppClass **)0x43c9e8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    ppIStack_60 = (Il2CppClass **)0x43c9e98;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    ppIStack_60 = (Il2CppClass **)0x43c9ea4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    ppIStack_60 = (Il2CppClass **)0x43c9eb0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    ppIStack_60 = (Il2CppClass **)0x43c9ebc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppIStack_60 = (Il2CppClass **)0x43c9ec8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    ppIStack_60 = (Il2CppClass **)0x43c9ed4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    ppIStack_60 = (Il2CppClass **)0x43c9ee0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    ppIStack_60 = (Il2CppClass **)0x43c9eec;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    ppIStack_60 = (Il2CppClass **)0x43c9ef8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppIStack_60 = (Il2CppClass **)0x43c9f04;
    il2cpp_runtime_helper_023445d0(&"\n");
    ppIStack_60 = (Il2CppClass **)0x43c9f10;
    il2cpp_runtime_helper_023445d0(&"F0");
    ppIStack_60 = (Il2CppClass **)0x43c9f1c;
    il2cpp_runtime_helper_023445d0(&"Position: ");
    ppIStack_60 = (Il2CppClass **)0x43c9f28;
    il2cpp_runtime_helper_023445d0(&", ");
    ppIStack_60 = (Il2CppClass **)0x43c9f34;
    il2cpp_runtime_helper_023445d0(&"Spectating: ");
    ppIStack_60 = (Il2CppClass **)0x43c9f40;
    il2cpp_runtime_helper_023445d0(&"Interpolation: ");
    ppIStack_60 = (Il2CppClass **)0x43c9f4c;
    il2cpp_runtime_helper_023445d0(&"Pause: ");
    ppIStack_60 = (Il2CppClass **)0x43c9f58;
    il2cpp_runtime_helper_023445d0(&", Change Char: ");
    ppIStack_60 = (Il2CppClass **)0x43c9f64;
    il2cpp_runtime_helper_023445d0(&", Scoreboard: ");
    ppIStack_60 = (Il2CppClass **)0x43c9f70;
    il2cpp_runtime_helper_023445d0(&"");
    ppIStack_60 = (Il2CppClass **)0x43c9f7c;
    il2cpp_runtime_helper_023445d0(&"ON");
    ppIStack_60 = (Il2CppClass **)0x43c9f88;
    il2cpp_runtime_helper_023445d0(&"OFF");
    g_data_057ae405 = '\x01';
  }
  pIVar21 = "";
  _local_50 = (UnityEngine_Vector3_Fields)ZEXT812(0);
  format = &"";
  ppIVar36 = *(Il2CppClass ***)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if ((System_String_Fields)ppIVar36 == (System_String_Fields)0x0) {
label_043c9ff7:
    unaff_R14 = &TypeInfo_SettingsManager;
    lVar31 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    pSVar19 = unaff_RBX;
    if ((lVar31 == 0) || (lVar31 = *(long *)(lVar31 + 0xa0), lVar31 == 0)) goto label_043ca5dc;
    if (*(char *)(lVar31 + 0x11) == '\0') {
label_043ca12b:
      format = &"";
      lVar31 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      pSVar19 = unaff_RBX;
      if ((lVar31 == 0) || (*(long *)(lVar31 + 200) == 0)) {
label_043ca5dc:
        unaff_RBX = pSVar19;
        format = &"";
        ppIStack_60 = (Il2CppClass **)0x43ca5e1;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        if (*(char *)(*(long *)(lVar31 + 200) + 0x11) != '\0') {
          unaff_RBP = *(Il2CppClass ***)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
          ppIStack_60 = (Il2CppClass **)0x43ca16e;
          method = (MethodInfo *)"";
          bVar13 = System_String__op_Inequality
                             ((System_String_o *)pIVar21,(System_String_o *)"",(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            ppIStack_60 = (Il2CppClass **)0x43ca186;
            method = (MethodInfo *)", ";
            pIVar21 = (Il2CppClass *)
                      System_String__Concat_3ae5ba0
                                ((System_String_o *)pIVar21,(System_String_o *)", ",(MethodInfo *)0x0)
            ;
          }
          if (((unaff_RBP != (Il2CppClass **)0x0) && (unaff_RBP[4] != (Il2CppClass *)0x0)) &&
             (plVar30 = (unaff_RBP[4]->_1).generic_class, plVar30 != (long *)0x0)) {
            ppIStack_60 = (Il2CppClass **)0x43ca1bc;
            pSVar18 = (System_String_o *)
                      (**(code **)(*plVar30 + 0x168))(plVar30,*(undefined8 *)(*plVar30 + 0x170));
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              ppIStack_60 = (Il2CppClass **)0x43ca1d7;
              il2cpp_runtime_helper_02337ed0();
            }
            ppIStack_60 = (Il2CppClass **)0x43ca1e8;
            pSVar18 = GameManagers_ChatManager__GetColorString(pSVar18,3,0,(MethodInfo *)0x0);
            ppIStack_60 = (Il2CppClass **)0x43ca1ff;
            method = (MethodInfo *)"Pause: ";
            pSVar19 = (System_String_array *)
                      System_String__Concat_3af7150
                                ((System_String_o *)pIVar21,(System_String_o *)"Pause: ",pSVar18,
                                 (MethodInfo *)0x0);
            if ((unaff_RBP[4] != (Il2CppClass *)0x0) &&
               (pIVar20 = (unaff_RBP[4]->_1).klass, pIVar20 != (Il2CppClass *)0x0)) {
              pvVar9 = (pIVar20->_1).image;
              ppIStack_60 = (Il2CppClass **)0x43ca22c;
              pSVar18 = (System_String_o *)
                        (**(code **)((long)pvVar9 + 0x168))(pIVar20,*(undefined8 *)((long)pvVar9 + 0x170));
              ppIStack_60 = (Il2CppClass **)0x43ca23d;
              pSVar18 = GameManagers_ChatManager__GetColorString(pSVar18,3,0,(MethodInfo *)0x0);
              ppIStack_60 = (Il2CppClass **)0x43ca254;
              method = (MethodInfo *)", Scoreboard: ";
              unaff_RBX = (System_String_array *)
                          System_String__Concat_3af7150
                                    ((System_String_o *)pSVar19,(System_String_o *)", Scoreboard: ",pSVar18,
                                     (MethodInfo *)0x0);
              pSVar19 = unaff_RBX;
              if ((unaff_RBP[4] != (Il2CppClass *)0x0) &&
                 (plVar30 = (unaff_RBP[4]->_1).typeMetadataHandle, plVar30 != (long *)0x0)) {
                ppIStack_60 = (Il2CppClass **)0x43ca281;
                pSVar18 = (System_String_o *)
                          (**(code **)(*plVar30 + 0x168))(plVar30,*(undefined8 *)(*plVar30 + 0x170));
                ppIStack_60 = (Il2CppClass **)0x43ca292;
                pSVar18 = GameManagers_ChatManager__GetColorString(pSVar18,3,0,(MethodInfo *)0x0);
                ppIStack_60 = (Il2CppClass **)0x43ca2a9;
                method = (MethodInfo *)", Change Char: ";
                pIVar21 = (Il2CppClass *)
                          System_String__Concat_3af7150
                                    ((System_String_o *)unaff_RBX,(System_String_o *)", Change Char: ",pSVar18,
                                     (MethodInfo *)0x0);
                lVar31 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                if (lVar31 != 0) goto label_043ca2c3;
              }
            }
          }
          goto label_043ca5dc;
        }
label_043ca2c3:
        pSVar19 = unaff_RBX;
        if (*(long *)(lVar31 + 0x170) == 0) goto label_043ca5dc;
        if (*(int *)(*(long *)(lVar31 + 0x170) + 0x14) != 2) {
          ppIVar34 = (Il2CppClass **)unaff_R14;
          if ((System_String_Fields)ppIVar36 != (System_String_Fields)0x0) {
label_043ca4dd:
            pSVar19 = *(System_String_array **)((long)ppIVar36 + 0x38);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              ppIStack_60 = (Il2CppClass **)0x43ca4f9;
              il2cpp_runtime_helper_02337ed0();
            }
            method = (MethodInfo *)0x0;
            ppIStack_60 = (Il2CppClass **)0x43ca505;
            bVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pSVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (((char)bVar13 == '\0') ||
               (((UI_InGameMenu_Fields *)((long)local_48.fields + 0x10))->_spectateCount < 1)) {
              return (System_String_o *)pIVar21;
            }
            unaff_R14 = (long *)ppIVar34;
            if (*(Il2CppClass **)((long)ppIVar36 + 0x38) != (Il2CppClass *)0x0) {
              ppIStack_60 = (Il2CppClass **)0x43ca52f;
              bVar13 = Characters_BaseCharacter__IsMainCharacter
                                 ((Characters_BaseCharacter_o *)*(Il2CppClass **)((long)ppIVar36 + 0x38),
                                  (MethodInfo *)0x0);
              if ((char)bVar13 == '\0') {
                return (System_String_o *)pIVar21;
              }
              ppIStack_60 = (Il2CppClass **)0x43ca546;
              pSVar18 = System_Int32__ToString(local_48.fields._stringLength + 0x244,(MethodInfo *)0x0);
              ppIStack_60 = (Il2CppClass **)0x43ca55a;
              pSVar18 = System_String__Concat_3ae5ba0("Spectating: ",pSVar18,(MethodInfo *)0x0);
              ppIStack_60 = (Il2CppClass **)0x43ca56b;
              bVar13 = System_String__op_Inequality
                                 ((System_String_o *)pIVar21,(System_String_o *)"",(MethodInfo *)0x0
                                 );
              if ((char)bVar13 != '\0') {
                ppIStack_60 = (Il2CppClass **)0x43ca583;
                pSVar18 = System_String__Concat_3ae5ba0(pSVar18,"\n",(MethodInfo *)0x0);
              }
              ppIStack_60 = (Il2CppClass **)0x43ca593;
              pSVar18 = System_String__Concat_3ae5ba0(pSVar18,(System_String_o *)pIVar21,(MethodInfo *)0x0);
              return pSVar18;
            }
          }
          goto label_043ca5dc;
        }
        if ((((System_String_Fields)ppIVar36 == (System_String_Fields)0x0) ||
            (*(Il2CppClass **)((long)ppIVar36 + 0x28) == (Il2CppClass *)0x0)) ||
           (pUVar10 = (UnityEngine_Transform_o *)((*(Il2CppClass **)((long)ppIVar36 + 0x28))->_1).name,
           pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_043ca5dc;
        ppIStack_60 = (Il2CppClass **)0x43ca307;
        _local_50 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0)
        ;
        pSVar19 = *(System_String_array **)((long)ppIVar36 + 0x38);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          ppIStack_60 = (Il2CppClass **)0x43ca32e;
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)0x0;
        ppIStack_60 = (Il2CppClass **)0x43ca33a;
        bVar13 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pSVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          if (((*(Il2CppClass **)((long)ppIVar36 + 0x38) == (Il2CppClass *)0x0) ||
              (pvVar9 = ((*(Il2CppClass **)((long)ppIVar36 + 0x38))->_1).interopData, pvVar9 == (void *)0x0))
             || (pUVar10 = *(UnityEngine_Transform_o **)((long)pvVar9 + 0x10),
                pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_043ca5dc;
          ppIStack_60 = (Il2CppClass **)0x43ca36c;
          _local_50 = (UnityEngine_Vector3_Fields)
                      UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
        }
        method = (MethodInfo *)0x6;
        ppIStack_60 = (Il2CppClass **)0x43ca38b;
        unaff_RBX = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
        if (unaff_RBX == (System_String_array *)0x0) goto label_043ca5dc;
        if ((int)unaff_RBX->max_length != 0) {
          unaff_RBX->m_Items[0] = "Position: ";
          ppIStack_60 = (Il2CppClass **)0x43ca3b8;
          fVar38 = (float)il2cpp_runtime_helper_022b4080(unaff_RBX->m_Items);
          ppIVar34 = &"F0";
          ppIStack_60 = (Il2CppClass **)0x43ca3ce;
          method = (MethodInfo *)"F0";
          pIVar20 = (Il2CppClass *)
                    System_Single__ToString_3cccfe0
                              (fVar38,(System_String_o *)local_50,(MethodInfo *)"F0");
          unaff_R14 = (long *)ppIVar34;
          if (1 < (uint)unaff_RBX->max_length) {
            unaff_RBX->m_Items[1] = (System_String_o *)pIVar20;
            ppIStack_60 = (Il2CppClass **)0x43ca3e8;
            il2cpp_runtime_helper_022b4080(unaff_RBX->m_Items + 1);
            method = (MethodInfo *)pIVar20;
            if (2 < (uint)unaff_RBX->max_length) {
              unaff_RBP = &", ";
              unaff_RBX->m_Items[2] = (System_String_o *)", ";
              ppIStack_60 = (Il2CppClass **)0x43ca40f;
              local_48.monitor = ppIVar36;
              fVar38 = (float)il2cpp_runtime_helper_022b4080(unaff_RBX->m_Items + 2);
              ppIStack_60 = (Il2CppClass **)0x43ca41e;
              method = (MethodInfo *)"F0";
              pIVar20 = (Il2CppClass *)
                        System_Single__ToString_3cccfe0
                                  (fVar38,(System_String_o *)(local_50 + 4),(MethodInfo *)"F0");
              if (3 < (uint)unaff_RBX->max_length) {
                ppIVar36 = &"";
                unaff_RBX->m_Items[3] = (System_String_o *)pIVar20;
                ppIStack_60 = (Il2CppClass **)0x43ca43b;
                il2cpp_runtime_helper_022b4080(unaff_RBX->m_Items + 3);
                method = (MethodInfo *)pIVar20;
                if (4 < (uint)unaff_RBX->max_length) {
                  format = (Il2CppClass **)(local_50 + 8);
                  unaff_RBX->m_Items[4] = (System_String_o *)", ";
                  ppIStack_60 = (Il2CppClass **)0x43ca45b;
                  fVar38 = (float)il2cpp_runtime_helper_022b4080(unaff_RBX->m_Items + 4);
                  ppIStack_60 = (Il2CppClass **)0x43ca468;
                  method = (MethodInfo *)"F0";
                  pSVar18 = System_Single__ToString_3cccfe0
                                      (fVar38,(System_String_o *)format,(MethodInfo *)"F0");
                  if (5 < (uint)unaff_RBX->max_length) {
                    unaff_RBX->m_Items[5] = pSVar18;
                    ppIStack_60 = (Il2CppClass **)0x43ca485;
                    il2cpp_runtime_helper_022b4080(unaff_RBX->m_Items + 5);
                    ppIStack_60 = (Il2CppClass **)0x43ca48f;
                    pSVar18 = System_String__Concat_3af7570(unaff_RBX,(MethodInfo *)0x0);
                    ppIStack_60 = (Il2CppClass **)0x43ca4a2;
                    bVar13 = System_String__op_Inequality
                                       ((System_String_o *)pIVar21,(System_String_o *)"",
                                        (MethodInfo *)0x0);
                    if ((char)bVar13 != '\0') {
                      ppIStack_60 = (Il2CppClass **)0x43ca4ba;
                      pSVar18 = System_String__Concat_3ae5ba0(pSVar18,"\n",(MethodInfo *)0x0);
                    }
                    ppIVar36 = local_48.monitor;
                    ppIStack_60 = (Il2CppClass **)0x43ca4cf;
                    pIVar21 = (Il2CppClass *)
                              System_String__Concat_3ae5ba0
                                        (pSVar18,(System_String_o *)pIVar21,(MethodInfo *)0x0);
                    goto label_043ca4dd;
                  }
                }
              }
            }
          }
        }
      }
      ppIStack_60 = (Il2CppClass **)0x43ca5e6;
      il2cpp_runtime_helper_022b2ca0();
      goto label_043ca5e6;
    }
    unaff_RBX = *(System_String_array **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    pSVar19 = unaff_RBX;
    if (unaff_RBX == (System_String_array *)0x0) goto label_043ca5dc;
    pIVar20 = (unaff_RBX->obj).klass;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    method = (MethodInfo *)TypeInfo_InGameManager;
    if ((bVar1 <= (pIVar20->_2).naturalAligment) &&
       ((pIVar20->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      unaff_RBP = &"";
      pSVar18 = unaff_RBX->m_Items[10];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        ppIStack_60 = (Il2CppClass **)0x43ca08d;
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      ppIStack_60 = (Il2CppClass **)0x43ca099;
      bVar13 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pSVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar13 != '\0') && (pSVar18 = unaff_RBX->m_Items[10], pSVar18 != (System_String_o *)0x0)) {
        bVar1 = (TypeInfo_Human->_2).naturalAligment;
        method = (MethodInfo *)(ulong)bVar1;
        if ((bVar1 <= (pSVar18->klass->_2).naturalAligment) &&
           ((pSVar18->klass->_2).typeHierarchy
            [(long)((long)&((Il2CppClass *)((long)method + -0x1128))->vtable[0xfe].method + 7)] ==
            TypeInfo_Human)) {
          if ((pSVar18[4].fields == (System_String_Fields)0x0) ||
             (__this_00 = *(UnityEngine_Rigidbody_o **)((long)pSVar18[4].fields + 0x18),
             __this_00 == (UnityEngine_Rigidbody_o *)0x0)) goto label_043ca5dc;
          ppIStack_60 = (Il2CppClass **)0x43ca0f9;
          uVar14 = UnityEngine_Rigidbody__get_interpolation(__this_00,(MethodInfo *)0x0);
          unaff_RBX = (System_String_array *)(ulong)uVar14;
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            ppIStack_60 = (Il2CppClass **)0x43ca113;
            il2cpp_runtime_helper_02337ed0();
          }
          if (uVar14 == 1) {
            puVar17 = &"ON";
          }
          else {
            puVar17 = &"OFF";
          }
          ppIStack_60 = (Il2CppClass **)0x43ca5c0;
          method = (MethodInfo *)
                   GameManagers_ChatManager__GetColorString((System_String_o *)*puVar17,3,0,(MethodInfo *)0x0)
          ;
          ppIStack_60 = (Il2CppClass **)0x43ca5d4;
          pIVar21 = (Il2CppClass *)
                    System_String__Concat_3ae5ba0("Interpolation: ",(System_String_o *)method,(MethodInfo *)0x0);
        }
      }
      goto label_043ca12b;
    }
  }
  else {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    method = (MethodInfo *)TypeInfo_InGameCamera;
    if ((bVar1 <= ((*ppIVar36)->_2).naturalAligment) &&
       (((*ppIVar36)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) goto label_043c9ff7;
label_043ca5e6:
    ppIStack_60 = (Il2CppClass **)0x43ca5ee;
    il2cpp_runtime_helper_022b2fd0(ppIVar36);
  }
  ppIStack_60 = (Il2CppClass **)0x43ca5f6;
  pSVar19 = unaff_RBX;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_88 = unaff_RBX;
  pIStack_80 = pIVar21;
  pSStack_78 = (System_String_o *)format;
  uStack_70 = (System_String_o *)unaff_R14;
  SStack_68 = (System_String_Fields)ppIVar36;
  ppIStack_60 = unaff_RBP;
  if (g_data_057ae406 == '\0') {
    plStack_a8 = (long *)0x43ca62d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    plStack_a8 = (long *)0x43ca639;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    plStack_a8 = (long *)0x43ca645;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    plStack_a8 = (long *)0x43ca651;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    plStack_a8 = (long *)0x43ca65d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    plStack_a8 = (long *)0x43ca669;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    plStack_a8 = (long *)0x43ca675;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    plStack_a8 = (long *)0x43ca681;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    plStack_a8 = (long *)0x43ca68d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    plStack_a8 = (long *)0x43ca699;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    plStack_a8 = (long *)0x43ca6a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    plStack_a8 = (long *)0x43ca6b1;
    il2cpp_runtime_helper_023445d0(&" B ");
    plStack_a8 = (long *)0x43ca6bd;
    il2cpp_runtime_helper_023445d0(&": ");
    plStack_a8 = (long *)0x43ca6c9;
    il2cpp_runtime_helper_023445d0(&" R ");
    plStack_a8 = (long *)0x43ca6d5;
    il2cpp_runtime_helper_023445d0(&" H ");
    plStack_a8 = (long *)0x43ca6e1;
    il2cpp_runtime_helper_023445d0(&" / ");
    plStack_a8 = (long *)0x43ca6ed;
    il2cpp_runtime_helper_023445d0(&" APG ");
    plStack_a8 = (long *)0x43ca6f9;
    il2cpp_runtime_helper_023445d0(&" T ");
    plStack_a8 = (long *)0x43ca705;
    il2cpp_runtime_helper_023445d0(&" <color=red>*dead*</color> ");
    plStack_a8 = (long *)0x43ca711;
    il2cpp_runtime_helper_023445d0(&"");
    plStack_a8 = (long *)0x43ca71d;
    il2cpp_runtime_helper_023445d0(&" AHSS ");
    plStack_a8 = (long *)0x43ca729;
    il2cpp_runtime_helper_023445d0(&" TS ");
    g_data_057ae406 = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    plStack_a8 = (long *)0x43ca748;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_a8 = (long *)0x43ca76a;
  pSVar18 = PhotonExtensions__GetStringProperty
                      ((Photon_Realtime_Player_o *)method,
                       *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),
                       (System_String_o *)"",(MethodInfo *)0x0);
  plVar30 = &TypeInfo_PlayerStatus;
  if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
    plStack_a8 = (long *)0x43ca786;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_a8 = (long *)0x43ca79e;
  bVar13 = System_String__op_Inequality
                     (pSVar18,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    iVar32 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
    pSVar24 = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    iVar32 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
    pSVar24 = " <color=red>*dead*</color> ";
  }
  if (iVar32 == 0) {
    plStack_a8 = (long *)0x43ca7e3;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_a8 = (long *)0x43ca805;
  team = (System_String_array **)
         PhotonExtensions__GetStringProperty
                   ((Photon_Realtime_Player_o *)method,
                    *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                    (System_String_o *)"",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    plStack_a8 = (long *)0x43ca820;
    il2cpp_runtime_helper_02337ed0();
  }
  key = (System_String_array *)0x0;
  plStack_a8 = (long *)0x43ca82a;
  pSVar22 = (System_String_array *)
            GameManagers_TeamInfo__GetTeamColor((System_String_o *)team,(MethodInfo *)0x0);
  lVar31 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  pSVar37 = (System_String_array *)&TypeInfo_PlayerProperty;
  if (((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x58), lVar31 != 0)) &&
     (lVar31 = *(long *)(lVar31 + 0x20), pSStack_a0 = pSVar22, pSStack_98 = pSVar24, lVar31 != 0)) {
    iVar32 = *(int *)(lVar31 + 0x14);
    plStack_a8 = (long *)0x43ca897;
    pSVar18 = PhotonExtensions__GetStringProperty
                        ((Photon_Realtime_Player_o *)method,
                         *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),
                         (System_String_o *)"",(MethodInfo *)0x0);
    plStack_a8 = (long *)0x43ca8b9;
    bVar13 = System_String__op_Equality
                       ((System_String_o *)team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),
                        (MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      team = (System_String_array **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      plStack_a8 = (long *)0x43ca8ed;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_a8 = (long *)0x43ca904;
    bVar13 = System_String__op_Equality
                       ((System_String_o *)team,(System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8),
                        (MethodInfo *)0x0);
    pSVar24 = pSStack_a0;
    if (iVar32 == 2) {
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          plStack_a8 = (long *)0x43caa35;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_a8 = (long *)0x43caa4d;
        bVar13 = System_String__op_Equality
                           ((System_String_o *)team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                            (MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          iVar32 = *(int *)(TypeInfo_TeamInfo + 0xe4);
joined_r0x043caa72:
          if (iVar32 == 0) {
            plStack_a8 = (long *)0x43caa87;
            il2cpp_runtime_helper_02337ed0();
          }
          plStack_a8 = (long *)0x43caa9f;
          bVar13 = System_String__op_Equality
                             ((System_String_o *)team,
                              *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18),(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
              plStack_a8 = (long *)0x43caac0;
              il2cpp_runtime_helper_02337ed0();
            }
            plStack_a8 = (long *)0x43caad8;
            bVar13 = System_String__op_Equality
                               ((System_String_o *)team,
                                *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20),(MethodInfo *)0x0
                               );
            if ((char)bVar13 == '\0') {
              ppSVar23 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
            }
            else {
              ppSVar23 = &" H ";
            }
          }
          else {
            ppSVar23 = &" T ";
          }
        }
        else {
          ppSVar23 = (System_String_o **)&" R ";
        }
      }
      else {
        ppSVar23 = (System_String_o **)&" B ";
      }
      team = (System_String_array **)*ppSVar23;
label_043cab65:
      iVar32 = *(int *)(TypeInfo_Util + 0xe4);
    }
    else {
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          plStack_a8 = (long *)0x43ca93e;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_a8 = (long *)0x43ca957;
        bVar13 = System_String__op_Equality
                           ((System_String_o *)team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                            (MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          iVar32 = *(int *)(TypeInfo_TeamInfo + 0xe4);
          pSVar24 = pSStack_a0;
          goto joined_r0x043caa72;
        }
      }
      if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
        plStack_a8 = (long *)0x43ca978;
        il2cpp_runtime_helper_02337ed0();
      }
      plStack_a8 = (long *)0x43ca990;
      bVar13 = System_String__op_Equality
                         (pSVar18,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),(MethodInfo *)0x0)
      ;
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
          plStack_a8 = (long *)0x43ca9a6;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_a8 = (long *)0x43ca9bf;
        bVar13 = System_String__op_Equality
                           (pSVar18,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                            (MethodInfo *)0x0);
        if ((char)bVar13 != '\0') goto label_043ca9c7;
        if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
          plStack_a8 = (long *)0x43caaf7;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar24 = pSStack_a0;
        plStack_a8 = (long *)0x43cab14;
        bVar13 = System_String__op_Equality
                           (pSVar18,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                            (MethodInfo *)0x0);
        pSVar18 = " T ";
        if ((char)bVar13 == '\0') goto label_043cab65;
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          plStack_a8 = (long *)0x43cab3a;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar27 = *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
      }
      else {
label_043ca9c7:
        pSVar18 = " H ";
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          plStack_a8 = (long *)0x43ca9e9;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar27 = *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
      }
      plStack_a8 = (long *)0x43ca9fe;
      pSVar24 = (System_String_array *)GameManagers_TeamInfo__GetTeamColor(pSVar27,(MethodInfo *)0x0);
      iVar32 = *(int *)(TypeInfo_Util + 0xe4);
      team = (System_String_array **)pSVar18;
    }
    if (iVar32 == 0) {
      plStack_a8 = (long *)0x43cab7d;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_a8 = (long *)0x43cab8a;
    pSStack_a0 = (System_String_array *)
                 Utility_Util__ColorText((System_String_o *)team,(System_String_o *)pSVar24,(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      plStack_a8 = (long *)0x43caba6;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_a8 = (long *)0x43cabc8;
    pSVar24 = (System_String_array *)
              PhotonExtensions__GetStringProperty
                        ((Photon_Realtime_Player_o *)method,
                         *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),
                         (System_String_o *)"",(MethodInfo *)0x0);
    plVar30 = &TypeInfo_HumanLoadout;
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      plStack_a8 = (long *)0x43cabe4;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_a8 = (long *)0x43cabfd;
    bVar13 = System_String__op_Equality
                       ((System_String_o *)pSVar24,
                        *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        plStack_a8 = (long *)0x43cac1f;
        il2cpp_runtime_helper_02337ed0();
      }
      plStack_a8 = (long *)0x43cac38;
      bVar13 = System_String__op_Equality
                         ((System_String_o *)pSVar24,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8)
                          ,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
          plStack_a8 = (long *)0x43cac57;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_a8 = (long *)0x43cac70;
        bVar13 = System_String__op_Equality
                           ((System_String_o *)pSVar24,
                            *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          puVar17 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          puVar17 = &" TS ";
        }
      }
      else {
        puVar17 = &" AHSS ";
      }
    }
    else {
      puVar17 = &" APG ";
    }
    pSStack_90 = (System_String_o *)*puVar17;
    key = (System_String_array *)&g_data_00000005;
    plStack_a8 = (long *)0x43cacae;
    pSVar22 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pSVar37 = (System_String_array *)&TypeInfo_TeamInfo;
    if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
      uVar14 = *(uint *)&(((Il2CppClass *)method)->_1).namespaze;
      pSVar37 = (System_String_array *)(ulong)uVar14;
      plStack_a8 = (long *)0x43cacc8;
      uVar15 = Photon_Realtime_Player__get_IsMasterClient
                         ((Photon_Realtime_Player_o *)method,(MethodInfo *)0x0);
      team = (System_String_array **)(ulong)uVar15;
      bVar1 = *(byte *)((long)&(((Il2CppClass *)method)->_1).namespaze + 4);
      plVar30 = (long *)CONCAT71(0x55798,bVar1);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        plStack_a8 = (long *)0x43cace7;
        il2cpp_runtime_helper_02337ed0();
      }
      key = (System_String_array *)((ulong)team & 0xff);
      plStack_a8 = (long *)0x43cacf9;
      pSVar25 = (System_String_array *)
                GameManagers_ChatManager__GetIDString(uVar14,(bool_conflict)key,(uint)bVar1,(MethodInfo *)0x0)
      ;
      pSVar24 = pSVar22;
      if (pSVar22 != (System_String_array *)0x0) {
        plVar30 = &TypeInfo_PlayerProperty;
        if ((int)pSVar22->max_length == 0) goto label_043cb075;
        pSVar22->m_Items[0] = (System_String_o *)pSVar25;
        plStack_a8 = (long *)0x43cad23;
        il2cpp_runtime_helper_022b4080();
        key = pSVar25;
        if ((uint)pSVar22->max_length < 2) goto label_043cb075;
        pSVar22->m_Items[1] = (System_String_o *)pSStack_98;
        plStack_a8 = (long *)0x43cad3f;
        key = pSStack_98;
        il2cpp_runtime_helper_022b4080();
        if ((uint)pSVar22->max_length < 3) goto label_043cb075;
        pSVar22->m_Items[2] = (System_String_o *)pSStack_a0;
        plStack_a8 = (long *)0x43cad5a;
        key = pSStack_a0;
        il2cpp_runtime_helper_022b4080();
        if ((uint)pSVar22->max_length < 4) goto label_043cb075;
        pSVar22->m_Items[3] = pSStack_90;
        plStack_a8 = (long *)0x43cad76;
        il2cpp_runtime_helper_022b4080(pSVar22->m_Items + 3);
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          plStack_a8 = (long *)0x43cad88;
          il2cpp_runtime_helper_02337ed0();
        }
        key = (System_String_array *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
        plStack_a8 = (long *)0x43cadaa;
        pSVar18 = PhotonExtensions__GetStringProperty
                            ((Photon_Realtime_Player_o *)method,(System_String_o *)key,
                             (System_String_o *)"",(MethodInfo *)0x0);
        if ((uint)pSVar22->max_length < 5) goto label_043cb075;
        pSVar22->m_Items[4] = pSVar18;
        plStack_a8 = (long *)0x43cadc7;
        il2cpp_runtime_helper_022b4080(pSVar22->m_Items + 4);
        key = (System_String_array *)0x0;
        plStack_a8 = (long *)0x43cadd1;
        pSVar22 = (System_String_array *)System_String__Concat_3af7570(pSVar22,(MethodInfo *)0x0);
        pSVar24 = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        plVar30 = &TypeInfo_CustomLogicManager;
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          plStack_a8 = (long *)0x43caed1;
          il2cpp_runtime_helper_02337ed0();
          lVar31 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          lVar31 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        pSVar37 = pSVar22;
        if (lVar31 != 0) {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            plStack_a8 = (long *)0x43cae26;
            il2cpp_runtime_helper_02337ed0();
            lVar31 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            if (lVar31 == 0) goto label_043cb070;
          }
          key = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          plStack_a8 = (long *)0x43cae61;
          bVar13 = System_String__op_Inequality
                             (*(System_String_o **)(lVar31 + 0x78),(System_String_o *)key,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              plStack_a8 = (long *)0x43cae7b;
              il2cpp_runtime_helper_02337ed0();
            }
            lVar31 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            if (lVar31 != 0) {
              plStack_a8 = (long *)0x43caea1;
              pIVar26 = PhotonExtensions__GetCustomProperty
                                  ((Photon_Realtime_Player_o *)method,*(System_String_o **)(lVar31 + 0x78),
                                   (MethodInfo *)0x0);
              if (pIVar26 == (Il2CppObject *)0x0) {
                pSVar24 = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              else {
                plStack_a8 = (long *)0x43caebd;
                pSVar24 = (System_String_array *)
                          (*pIVar26->klass->vtable[3].methodPtr)(pIVar26,pIVar26->klass->vtable[3].method);
              }
              goto label_043cb006;
            }
            goto label_043cb070;
          }
        }
        pSVar18 = pSVar19->m_Items[0x47];
        pSStack_98 = pSVar22;
        if (pSVar18 != (System_String_o *)0x0) {
          plVar30 = (long *)0x0;
          pSVar37 = (System_String_array *)0xffffffff00000000;
          team = &" / ";
          uVar14 = *(uint *)&pSVar18[1].klass;
          if (0 < (int)uVar14) {
            do {
              if ((long *)(ulong)uVar14 <= plVar30) goto label_043cb075;
              plStack_a8 = (long *)0x43caf64;
              pIVar26 = PhotonExtensions__GetCustomProperty
                                  ((Photon_Realtime_Player_o *)method,(&pSVar18[1].monitor)[(long)plVar30],
                                   (MethodInfo *)0x0);
              if (pIVar26 == (Il2CppObject *)0x0) {
                key = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              else {
                plStack_a8 = (long *)0x43caf7c;
                key = (System_String_array *)
                      (*pIVar26->klass->vtable[3].methodPtr)(pIVar26,pIVar26->klass->vtable[3].method);
              }
              plStack_a8 = (long *)0x43cafb2;
              pSVar24 = (System_String_array *)
                        System_String__Concat_3ae5ba0
                                  ((System_String_o *)pSVar24,(System_String_o *)key,(MethodInfo *)0x0);
              pSVar18 = pSVar19->m_Items[0x47];
              if (pSVar18 == (System_String_o *)0x0) goto label_043cb070;
              if ((long)plVar30 < ((long)pSVar18[1].klass << 0x20) + -0x100000000 >> 0x20) {
                plStack_a8 = (long *)0x43cafeb;
                key = " / ";
                pSVar24 = (System_String_array *)
                          System_String__Concat_3ae5ba0
                                    ((System_String_o *)pSVar24,(System_String_o *)" / ",
                                     (MethodInfo *)0x0);
                pSVar18 = pSVar19->m_Items[0x47];
              }
              plVar30 = (long *)((long)plVar30 + 1);
              if (pSVar18 == (System_String_o *)0x0) goto label_043cb070;
              uVar14 = *(uint *)&pSVar18[1].klass;
              pSVar22 = pSStack_98;
            } while ((long)plVar30 < (long)(int)uVar14);
          }
label_043cb006:
          plStack_a8 = (long *)0x43cb01d;
          pSVar27 = System_String__Concat_3af7150
                              ((System_String_o *)pSVar22,": ",(System_String_o *)pSVar24,
                               (MethodInfo *)0x0);
          pSVar18 = pSVar27;
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            plStack_a8 = (long *)0x43cb032;
            pSVar18 = (System_String_o *)il2cpp_runtime_helper_02337ed0();
          }
          SStack_68 = (System_String_Fields)pSStack_88;
          uStack_70 = pSVar18;
          if (g_data_057ae92a == '\0') {
            pSStack_78 = (System_String_o *)0x449575d;
            il2cpp_runtime_helper_023445d0(&"<size={0}>{1}</size>",0x13,0);
            g_data_057ae92a = '\x01';
          }
          uStack_70 = (System_String_o *)CONCAT44(0x13,(undefined4)uStack_70);
          pSStack_78 = (System_String_o *)0x449577d;
          pIVar26 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_70 + 4);
          pSStack_78 = (System_String_o *)0x4495794;
          pSVar18 = System_String__Format_3af78e0
                              ("<size={0}>{1}</size>",pIVar26,(Il2CppObject *)pSVar27,(MethodInfo *)0x0);
          return pSVar18;
        }
      }
    }
  }
label_043cb070:
  plStack_a8 = (long *)0x43cb075;
  il2cpp_runtime_helper_022b2c90();
label_043cb075:
  plStack_a8 = (long *)0x43cb07a;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_d0 = pSVar24;
  pSStack_c8 = (System_String_o *)team;
  pSStack_c0 = pSVar19;
  pIStack_b8 = (Il2CppClass *)method;
  pSStack_b0 = pSVar37;
  plStack_a8 = plVar30;
  if (g_data_057ae407 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGrouping_string_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae407 = '\x01';
  }
  if (key == (System_String_array *)0x0) goto label_043cb7c1;
  pIVar21 = (key->obj).klass;
  uVar2._0_1_ = (pIVar21->_2).rank;
  uVar2._1_1_ = (pIVar21->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar11 = (pIVar21->_1).interfaceOffsets;
    lVar31 = 0;
    do {
      if (*(long *)((long)&pIVar11->interfaceType + lVar31) == TypeInfo_IEnumerable_Player) {
        ppIVar28 = &(&((System_String_VTable *)pIVar21->vtable)->_0_Equals)
                    [*(int *)((long)&pIVar11->offset + lVar31)].methodPtr;
        goto label_043cb181;
      }
      lVar31 = lVar31 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar31);
  }
  ppIVar28 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(key,TypeInfo_IEnumerable_Player,0);
label_043cb181:
  pSStack_d8 = key;
  pSVar19 = (System_String_array *)(**ppIVar28)(key,(MethodInfo *)ppIVar28[1]);
  if (pSVar19 != (System_String_array *)0x0) {
    pSStack_f0 = (System_String_o *)0x0;
    iVar32 = 0;
    iVar35 = 0;
    iVar33 = 0;
    iStack_f4 = 0;
    do {
      pIVar21 = (pSVar19->obj).klass;
      uVar3._0_1_ = (pIVar21->_2).rank;
      uVar3._1_1_ = (pIVar21->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar11 = (pIVar21->_1).interfaceOffsets;
        lVar31 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar31) == TypeInfo_IEnumerator) {
            ppIVar28 = &(&((System_String_VTable *)pIVar21->vtable)->_0_Equals)
                        [*(int *)((long)&pIVar11->offset + lVar31)].methodPtr;
            goto label_043cb223;
          }
          lVar31 = lVar31 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar31);
      }
      ppIVar28 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IEnumerator,0);
label_043cb223:
      cVar12 = (**ppIVar28)(pSVar19,(MethodInfo *)ppIVar28[1]);
      if (cVar12 == '\0') goto label_043cb3c1;
      pIVar21 = (pSVar19->obj).klass;
      uVar4._0_1_ = (pIVar21->_2).rank;
      uVar4._1_1_ = (pIVar21->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar11 = (pIVar21->_1).interfaceOffsets;
        lVar31 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar31) == TypeInfo_IEnumerator_Player) {
            ppIVar28 = &(&((System_String_VTable *)pIVar21->vtable)->_0_Equals)
                        [*(int *)((long)&pIVar11->offset + lVar31)].methodPtr;
            goto label_043cb293;
          }
          lVar31 = lVar31 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar31);
      }
      ppIVar28 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IEnumerator_Player,0);
label_043cb293:
      player = (Photon_Realtime_Player_o *)(**ppIVar28)(pSVar19,(MethodInfo *)ppIVar28[1]);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar16 = PhotonExtensions__GetIntProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,
                          (MethodInfo *)0x0);
      iVar32 = iVar32 + iVar16;
      iVar16 = PhotonExtensions__GetIntProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,
                          (MethodInfo *)0x0);
      iVar35 = iVar35 + iVar16;
      iVar16 = PhotonExtensions__GetIntProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,
                          (MethodInfo *)0x0);
      iVar33 = iVar33 + iVar16;
      iVar16 = PhotonExtensions__GetIntProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,
                          (MethodInfo *)0x0);
      iStack_f4 = iStack_f4 + iVar16;
    } while( true );
  }
  auVar39 = il2cpp_runtime_helper_022b2c90();
  uVar29 = auVar39._0_8_;
  iStack_f4 = 0;
  iVar33 = 0;
  iVar35 = 0;
  iVar32 = 0;
  if (auVar39._8_4_ != 1) {
    pSStack_f0 = (System_String_o *)0x0;
    goto label_043cb796;
  }
  puVar17 = (undefined8 *)__cxa_begin_catch();
  pSStack_f0 = (System_String_o *)*puVar17;
  __cxa_end_catch();
label_043cb3c1:
  pSVar24 = pSStack_d8;
  if (pSVar19 != (System_String_array *)0x0) {
    pIVar21 = (pSVar19->obj).klass;
    uVar5._0_1_ = (pIVar21->_2).rank;
    uVar5._1_1_ = (pIVar21->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar11 = (pIVar21->_1).interfaceOffsets;
      lVar31 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar31) == TypeInfo_IDisposable) {
          ppIVar28 = &(&((System_String_VTable *)pIVar21->vtable)->_0_Equals)
                      [*(int *)((long)&pIVar11->offset + lVar31)].methodPtr;
          goto label_043cb42d;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar31);
    }
    ppIVar28 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IDisposable,0);
label_043cb42d:
    (**ppIVar28)(pSVar19,(MethodInfo *)ppIVar28[1]);
  }
  if (pSStack_f0 != (System_String_o *)0x0) goto label_043cb7c6;
  pSVar19 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
  pIVar21 = (pSVar24->obj).klass;
  uVar6._0_1_ = (pIVar21->_2).rank;
  uVar6._1_1_ = (pIVar21->_2).minimumAlignment;
  if ((ulong)uVar6 != 0) {
    pIVar11 = (pIVar21->_1).interfaceOffsets;
    lVar31 = 0;
    do {
      if (*(long *)((long)&pIVar11->interfaceType + lVar31) == TypeInfo_IGrouping_string_Player) {
        ppIVar28 = &(&((System_String_VTable *)pIVar21->vtable)->_0_Equals)
                    [*(int *)((long)&pIVar11->offset + lVar31)].methodPtr;
        goto label_043cb4c1;
      }
      lVar31 = lVar31 + 0x10;
    } while ((ulong)uVar6 << 4 != lVar31);
  }
  ppIVar28 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar24,TypeInfo_IGrouping_string_Player,0);
label_043cb4c1:
  pSStack_f0 = (System_String_o *)(**ppIVar28)(pSVar24,(MethodInfo *)ppIVar28[1]);
  pIVar21 = (pSVar24->obj).klass;
  uVar7._0_1_ = (pIVar21->_2).rank;
  uVar7._1_1_ = (pIVar21->_2).minimumAlignment;
  if ((ulong)uVar7 != 0) {
    pIVar11 = (pIVar21->_1).interfaceOffsets;
    lVar31 = 0;
    do {
      if (*(long *)((long)&pIVar11->interfaceType + lVar31) == TypeInfo_IGrouping_string_Player) {
        ppIVar28 = &(&((System_String_VTable *)pIVar21->vtable)->_0_Equals)
                    [*(int *)((long)&pIVar11->offset + lVar31)].methodPtr;
        goto label_043cb521;
      }
      lVar31 = lVar31 + 0x10;
    } while ((ulong)uVar7 << 4 != lVar31);
  }
  ppIVar28 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar24,TypeInfo_IGrouping_string_Player,0);
label_043cb521:
  pSVar18 = (System_String_o *)(**ppIVar28)(pSVar24);
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar18 = GameManagers_TeamInfo__GetTeamColor(pSVar18,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar18 = Utility_Util__ColorText(pSStack_f0,pSVar18,(MethodInfo *)0x0);
  if (pSVar19 == (System_String_array *)0x0) goto label_043cb7c1;
  if ((pSVar18 != (System_String_o *)0x0) &&
     (lVar31 = il2cpp_runtime_helper_023051f0(pSVar18,(((pSVar19->obj).klass)->_1).element_class), lVar31 == 0))
  goto label_043cb7b2;
  if ((int)pSVar19->max_length != 0) {
    pSVar19->m_Items[0] = pSVar18;
    il2cpp_runtime_helper_022b4080(pSVar19->m_Items,pSVar18);
    iStack_dc = iVar32;
    pSVar18 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_dc);
    if ((pSVar18 != (System_String_o *)0x0) &&
       (lVar31 = il2cpp_runtime_helper_023051f0(pSVar18,(((pSVar19->obj).klass)->_1).element_class), lVar31 == 0))
    goto label_043cb7b2;
    if (1 < (uint)pSVar19->max_length) {
      pSVar19->m_Items[1] = pSVar18;
      il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 1,pSVar18);
      iStack_e0 = iVar35;
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_e0);
      if ((pSVar18 != (System_String_o *)0x0) &&
         (lVar31 = il2cpp_runtime_helper_023051f0(pSVar18,(((pSVar19->obj).klass)->_1).element_class), lVar31 == 0))
      goto label_043cb7b2;
      if (2 < (uint)pSVar19->max_length) {
        pSVar19->m_Items[2] = pSVar18;
        il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 2,pSVar18);
        iStack_e4 = iVar33;
        pSVar18 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_e4);
        if ((pSVar18 != (System_String_o *)0x0) &&
           (lVar31 = il2cpp_runtime_helper_023051f0(pSVar18,(((pSVar19->obj).klass)->_1).element_class), lVar31 == 0))
        goto label_043cb7b2;
        if (3 < (uint)pSVar19->max_length) {
          pSVar19->m_Items[3] = pSVar18;
          il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 3,pSVar18);
          iStack_e8 = iStack_f4;
          pSVar18 = (System_String_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_e8);
          if ((pSVar18 != (System_String_o *)0x0) &&
             (lVar31 = il2cpp_runtime_helper_023051f0(pSVar18,(((pSVar19->obj).klass)->_1).element_class), lVar31 == 0))
          goto label_043cb7b2;
          if (4 < (uint)pSVar19->max_length) {
            pSVar19->m_Items[4] = pSVar18;
            il2cpp_runtime_helper_022b4080(pSVar19->m_Items + 4,pSVar18);
            pSVar18 = System_String__Format_3af7980
                                ("{0}: {1}/{2}/{3}/{4}\n",(System_Object_array *)pSVar19,(MethodInfo *)0x0);
            return pSVar18;
          }
        }
      }
    }
  }
  do {
    il2cpp_runtime_helper_022b2ca0();
label_043cb7b2:
    uVar29 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar29,0);
label_043cb7c1:
    il2cpp_runtime_helper_022b2c90();
label_043cb7c6:
    uVar29 = il2cpp_runtime_helper_022fefe0();
    if (pSVar19 != (System_String_array *)0x0) {
      pIVar21 = (pSVar19->obj).klass;
      uVar8._0_1_ = (pIVar21->_2).rank;
      uVar8._1_1_ = (pIVar21->_2).minimumAlignment;
      if ((ulong)uVar8 != 0) {
        pIVar11 = (pIVar21->_1).interfaceOffsets;
        lVar31 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar31) == TypeInfo_IDisposable) {
            ppIVar28 = &(&((System_String_VTable *)pIVar21->vtable)->_0_Equals)
                        [*(int *)((long)&pIVar11->offset + lVar31)].methodPtr;
            goto label_043cb78d;
          }
          lVar31 = lVar31 + 0x10;
        } while ((ulong)uVar8 << 4 != lVar31);
      }
      ppIVar28 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IDisposable,0);
label_043cb78d:
      (**ppIVar28)(pSVar19);
    }
label_043cb796:
    if (pSStack_f0 == (System_String_o *)0x0) {
      _Unwind_Resume(uVar29);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// UI.InGameMenu$$GetPlayerListEntry
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerListEntry (UI_InGameMenu_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43ca600

System_String_o *
UI_InGameMenu__GetPlayerListEntry(UI_InGameMenu_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  Il2CppClass *pIVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  char cVar12;
  bool_conflict bVar13;
  uint uVar14;
  int32_t iVar15;
  System_String_o *pSVar16;
  System_String_array **team;
  System_String_array *pSVar17;
  System_String_o **ppSVar18;
  System_String_array *pSVar19;
  undefined8 *puVar20;
  System_String_array *pSVar21;
  Il2CppObject *pIVar22;
  VirtualInvokeData *pVVar23;
  Photon_Realtime_Player_o *player_00;
  undefined8 uVar24;
  long *plVar25;
  System_String_array *key;
  System_String_o *team_00;
  long lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  System_String_array *pSVar30;
  undefined1 auVar31 [12];
  int iStack_9c;
  System_String_o *pSStack_98;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  System_String_array *pSStack_80;
  System_String_array *pSStack_78;
  System_String_o *pSStack_70;
  UI_InGameMenu_o *pUStack_68;
  Photon_Realtime_Player_o *pPStack_60;
  System_String_array *pSStack_58;
  long *plStack_50;
  System_String_array *local_48;
  System_String_array *local_40;
  System_String_o *local_38;
  
  if (g_data_057ae406 == '\0') {
    plStack_50 = (long *)0x43ca62d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    plStack_50 = (long *)0x43ca639;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    plStack_50 = (long *)0x43ca645;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    plStack_50 = (long *)0x43ca651;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    plStack_50 = (long *)0x43ca65d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    plStack_50 = (long *)0x43ca669;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    plStack_50 = (long *)0x43ca675;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    plStack_50 = (long *)0x43ca681;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    plStack_50 = (long *)0x43ca68d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    plStack_50 = (long *)0x43ca699;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    plStack_50 = (long *)0x43ca6a5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    plStack_50 = (long *)0x43ca6b1;
    il2cpp_runtime_helper_023445d0(&" B ");
    plStack_50 = (long *)0x43ca6bd;
    il2cpp_runtime_helper_023445d0(&": ");
    plStack_50 = (long *)0x43ca6c9;
    il2cpp_runtime_helper_023445d0(&" R ");
    plStack_50 = (long *)0x43ca6d5;
    il2cpp_runtime_helper_023445d0(&" H ");
    plStack_50 = (long *)0x43ca6e1;
    il2cpp_runtime_helper_023445d0(&" / ");
    plStack_50 = (long *)0x43ca6ed;
    il2cpp_runtime_helper_023445d0(&" APG ");
    plStack_50 = (long *)0x43ca6f9;
    il2cpp_runtime_helper_023445d0(&" T ");
    plStack_50 = (long *)0x43ca705;
    il2cpp_runtime_helper_023445d0(&" <color=red>*dead*</color> ");
    plStack_50 = (long *)0x43ca711;
    il2cpp_runtime_helper_023445d0(&"");
    plStack_50 = (long *)0x43ca71d;
    il2cpp_runtime_helper_023445d0(&" AHSS ");
    plStack_50 = (long *)0x43ca729;
    il2cpp_runtime_helper_023445d0(&" TS ");
    g_data_057ae406 = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    plStack_50 = (long *)0x43ca748;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_50 = (long *)0x43ca76a;
  pSVar16 = PhotonExtensions__GetStringProperty
                      (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                       (MethodInfo *)0x0);
  plVar25 = &TypeInfo_PlayerStatus;
  if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
    plStack_50 = (long *)0x43ca786;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_50 = (long *)0x43ca79e;
  bVar13 = System_String__op_Inequality
                     (pSVar16,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerStatus + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    iVar27 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
    pSVar19 = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    iVar27 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
    pSVar19 = " <color=red>*dead*</color> ";
  }
  if (iVar27 == 0) {
    plStack_50 = (long *)0x43ca7e3;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_50 = (long *)0x43ca805;
  team = (System_String_array **)
         PhotonExtensions__GetStringProperty
                   (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                    (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    plStack_50 = (long *)0x43ca820;
    il2cpp_runtime_helper_02337ed0();
  }
  key = (System_String_array *)0x0;
  plStack_50 = (long *)0x43ca82a;
  pSVar17 = (System_String_array *)
            GameManagers_TeamInfo__GetTeamColor((System_String_o *)team,(MethodInfo *)0x0);
  lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  pSVar30 = (System_String_array *)&TypeInfo_PlayerProperty;
  if (((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x58), lVar26 != 0)) &&
     (lVar26 = *(long *)(lVar26 + 0x20), local_48 = pSVar17, local_40 = pSVar19, lVar26 != 0)) {
    iVar27 = *(int *)(lVar26 + 0x14);
    plStack_50 = (long *)0x43ca897;
    pSVar16 = PhotonExtensions__GetStringProperty
                        (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                         (MethodInfo *)0x0);
    plStack_50 = (long *)0x43ca8b9;
    bVar13 = System_String__op_Equality
                       ((System_String_o *)team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10),
                        (MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      team = (System_String_array **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      plStack_50 = (long *)0x43ca8ed;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_50 = (long *)0x43ca904;
    bVar13 = System_String__op_Equality
                       ((System_String_o *)team,(System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8),
                        (MethodInfo *)0x0);
    pSVar19 = local_48;
    if (iVar27 == 2) {
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          plStack_50 = (long *)0x43caa35;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_50 = (long *)0x43caa4d;
        bVar13 = System_String__op_Equality
                           ((System_String_o *)team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                            (MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          iVar27 = *(int *)(TypeInfo_TeamInfo + 0xe4);
joined_r0x043caa72:
          if (iVar27 == 0) {
            plStack_50 = (long *)0x43caa87;
            il2cpp_runtime_helper_02337ed0();
          }
          plStack_50 = (long *)0x43caa9f;
          bVar13 = System_String__op_Equality
                             ((System_String_o *)team,
                              *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18),(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
              plStack_50 = (long *)0x43caac0;
              il2cpp_runtime_helper_02337ed0();
            }
            plStack_50 = (long *)0x43caad8;
            bVar13 = System_String__op_Equality
                               ((System_String_o *)team,
                                *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20),(MethodInfo *)0x0
                               );
            if ((char)bVar13 == '\0') {
              ppSVar18 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
            }
            else {
              ppSVar18 = &" H ";
            }
          }
          else {
            ppSVar18 = &" T ";
          }
        }
        else {
          ppSVar18 = (System_String_o **)&" R ";
        }
      }
      else {
        ppSVar18 = (System_String_o **)&" B ";
      }
      team = (System_String_array **)*ppSVar18;
label_043cab65:
      iVar27 = *(int *)(TypeInfo_Util + 0xe4);
    }
    else {
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          plStack_50 = (long *)0x43ca93e;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_50 = (long *)0x43ca957;
        bVar13 = System_String__op_Equality
                           ((System_String_o *)team,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                            (MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          iVar27 = *(int *)(TypeInfo_TeamInfo + 0xe4);
          pSVar19 = local_48;
          goto joined_r0x043caa72;
        }
      }
      if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
        plStack_50 = (long *)0x43ca978;
        il2cpp_runtime_helper_02337ed0();
      }
      plStack_50 = (long *)0x43ca990;
      bVar13 = System_String__op_Equality
                         (pSVar16,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),(MethodInfo *)0x0)
      ;
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
          plStack_50 = (long *)0x43ca9a6;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_50 = (long *)0x43ca9bf;
        bVar13 = System_String__op_Equality
                           (pSVar16,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                            (MethodInfo *)0x0);
        if ((char)bVar13 != '\0') goto label_043ca9c7;
        if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
          plStack_50 = (long *)0x43caaf7;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar19 = local_48;
        plStack_50 = (long *)0x43cab14;
        bVar13 = System_String__op_Equality
                           (pSVar16,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                            (MethodInfo *)0x0);
        pSVar16 = " T ";
        if ((char)bVar13 == '\0') goto label_043cab65;
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          plStack_50 = (long *)0x43cab3a;
          il2cpp_runtime_helper_02337ed0();
        }
        team_00 = *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
      }
      else {
label_043ca9c7:
        pSVar16 = " H ";
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          plStack_50 = (long *)0x43ca9e9;
          il2cpp_runtime_helper_02337ed0();
        }
        team_00 = *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20);
      }
      plStack_50 = (long *)0x43ca9fe;
      pSVar19 = (System_String_array *)GameManagers_TeamInfo__GetTeamColor(team_00,(MethodInfo *)0x0);
      iVar27 = *(int *)(TypeInfo_Util + 0xe4);
      team = (System_String_array **)pSVar16;
    }
    if (iVar27 == 0) {
      plStack_50 = (long *)0x43cab7d;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_50 = (long *)0x43cab8a;
    local_48 = (System_String_array *)
               Utility_Util__ColorText((System_String_o *)team,(System_String_o *)pSVar19,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      plStack_50 = (long *)0x43caba6;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_50 = (long *)0x43cabc8;
    pSVar19 = (System_String_array *)
              PhotonExtensions__GetStringProperty
                        (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                         (MethodInfo *)0x0);
    plVar25 = &TypeInfo_HumanLoadout;
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      plStack_50 = (long *)0x43cabe4;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_50 = (long *)0x43cabfd;
    bVar13 = System_String__op_Equality
                       ((System_String_o *)pSVar19,
                        *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        plStack_50 = (long *)0x43cac1f;
        il2cpp_runtime_helper_02337ed0();
      }
      plStack_50 = (long *)0x43cac38;
      bVar13 = System_String__op_Equality
                         ((System_String_o *)pSVar19,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8)
                          ,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
          plStack_50 = (long *)0x43cac57;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_50 = (long *)0x43cac70;
        bVar13 = System_String__op_Equality
                           ((System_String_o *)pSVar19,
                            *(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          puVar20 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          puVar20 = &" TS ";
        }
      }
      else {
        puVar20 = &" AHSS ";
      }
    }
    else {
      puVar20 = &" APG ";
    }
    local_38 = (System_String_o *)*puVar20;
    key = (System_String_array *)&g_data_00000005;
    plStack_50 = (long *)0x43cacae;
    pSVar17 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pSVar30 = (System_String_array *)&TypeInfo_TeamInfo;
    if (player != (Photon_Realtime_Player_o *)0x0) {
      uVar9 = (player->fields).actorNumber;
      pSVar30 = (System_String_array *)(ulong)uVar9;
      plStack_50 = (long *)0x43cacc8;
      uVar14 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
      team = (System_String_array **)(ulong)uVar14;
      bVar1 = (byte)(player->fields).IsLocal;
      plVar25 = (long *)CONCAT71(0x55798,bVar1);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        plStack_50 = (long *)0x43cace7;
        il2cpp_runtime_helper_02337ed0();
      }
      key = (System_String_array *)((ulong)team & 0xff);
      plStack_50 = (long *)0x43cacf9;
      pSVar21 = (System_String_array *)
                GameManagers_ChatManager__GetIDString(uVar9,(bool_conflict)key,(uint)bVar1,(MethodInfo *)0x0);
      pSVar19 = pSVar17;
      if (pSVar17 != (System_String_array *)0x0) {
        plVar25 = &TypeInfo_PlayerProperty;
        if ((int)pSVar17->max_length == 0) goto label_043cb075;
        pSVar17->m_Items[0] = (System_String_o *)pSVar21;
        plStack_50 = (long *)0x43cad23;
        il2cpp_runtime_helper_022b4080();
        key = pSVar21;
        if ((uint)pSVar17->max_length < 2) goto label_043cb075;
        pSVar17->m_Items[1] = (System_String_o *)local_40;
        plStack_50 = (long *)0x43cad3f;
        key = local_40;
        il2cpp_runtime_helper_022b4080();
        if ((uint)pSVar17->max_length < 3) goto label_043cb075;
        pSVar17->m_Items[2] = (System_String_o *)local_48;
        plStack_50 = (long *)0x43cad5a;
        key = local_48;
        il2cpp_runtime_helper_022b4080();
        if ((uint)pSVar17->max_length < 4) goto label_043cb075;
        pSVar17->m_Items[3] = local_38;
        plStack_50 = (long *)0x43cad76;
        il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 3);
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          plStack_50 = (long *)0x43cad88;
          il2cpp_runtime_helper_02337ed0();
        }
        key = (System_String_array *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
        plStack_50 = (long *)0x43cadaa;
        pSVar16 = PhotonExtensions__GetStringProperty
                            (player,(System_String_o *)key,"",(MethodInfo *)0x0);
        if ((uint)pSVar17->max_length < 5) goto label_043cb075;
        pSVar17->m_Items[4] = pSVar16;
        plStack_50 = (long *)0x43cadc7;
        il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 4);
        key = (System_String_array *)0x0;
        plStack_50 = (long *)0x43cadd1;
        pSVar17 = (System_String_array *)System_String__Concat_3af7570(pSVar17,(MethodInfo *)0x0);
        pSVar19 = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        plVar25 = &TypeInfo_CustomLogicManager;
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          plStack_50 = (long *)0x43caed1;
          il2cpp_runtime_helper_02337ed0();
          lVar26 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        else {
          lVar26 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        }
        pSVar30 = pSVar17;
        if (lVar26 != 0) {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            plStack_50 = (long *)0x43cae26;
            il2cpp_runtime_helper_02337ed0();
            lVar26 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            if (lVar26 == 0) goto label_043cb070;
          }
          key = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          plStack_50 = (long *)0x43cae61;
          bVar13 = System_String__op_Inequality
                             (*(System_String_o **)(lVar26 + 0x78),(System_String_o *)key,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              plStack_50 = (long *)0x43cae7b;
              il2cpp_runtime_helper_02337ed0();
            }
            lVar26 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            if (lVar26 != 0) {
              plStack_50 = (long *)0x43caea1;
              pIVar22 = PhotonExtensions__GetCustomProperty
                                  (player,*(System_String_o **)(lVar26 + 0x78),(MethodInfo *)0x0);
              if (pIVar22 == (Il2CppObject *)0x0) {
                pSVar19 = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              else {
                plStack_50 = (long *)0x43caebd;
                pSVar19 = (System_String_array *)
                          (*pIVar22->klass->vtable[3].methodPtr)(pIVar22,pIVar22->klass->vtable[3].method);
              }
              goto label_043cb006;
            }
            goto label_043cb070;
          }
        }
        pSVar21 = (__this->fields).trackedProperties;
        local_40 = pSVar17;
        if (pSVar21 != (System_String_array *)0x0) {
          plVar25 = (long *)0x0;
          pSVar30 = (System_String_array *)0xffffffff00000000;
          team = &" / ";
          uVar9 = (uint)pSVar21->max_length;
          if (0 < (int)uVar9) {
            do {
              if ((long *)(ulong)uVar9 <= plVar25) goto label_043cb075;
              plStack_50 = (long *)0x43caf64;
              pIVar22 = PhotonExtensions__GetCustomProperty
                                  (player,pSVar21->m_Items[(long)plVar25],(MethodInfo *)0x0);
              if (pIVar22 == (Il2CppObject *)0x0) {
                key = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              else {
                plStack_50 = (long *)0x43caf7c;
                key = (System_String_array *)
                      (*pIVar22->klass->vtable[3].methodPtr)(pIVar22,pIVar22->klass->vtable[3].method);
              }
              plStack_50 = (long *)0x43cafb2;
              pSVar19 = (System_String_array *)
                        System_String__Concat_3ae5ba0
                                  ((System_String_o *)pSVar19,(System_String_o *)key,(MethodInfo *)0x0);
              pSVar21 = (__this->fields).trackedProperties;
              if (pSVar21 == (System_String_array *)0x0) goto label_043cb070;
              if ((long)plVar25 < (long)((pSVar21->max_length << 0x20) + -0x100000000) >> 0x20) {
                plStack_50 = (long *)0x43cafeb;
                key = " / ";
                pSVar19 = (System_String_array *)
                          System_String__Concat_3ae5ba0
                                    ((System_String_o *)pSVar19,(System_String_o *)" / ",
                                     (MethodInfo *)0x0);
                pSVar21 = (__this->fields).trackedProperties;
              }
              plVar25 = (long *)((long)plVar25 + 1);
              if (pSVar21 == (System_String_array *)0x0) goto label_043cb070;
              uVar9 = (uint)pSVar21->max_length;
              pSVar17 = local_40;
            } while ((long)plVar25 < (long)(int)uVar9);
          }
label_043cb006:
          plStack_50 = (long *)0x43cb01d;
          pSVar16 = System_String__Concat_3af7150
                              ((System_String_o *)pSVar17,": ",(System_String_o *)pSVar19,
                               (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            plStack_50 = (long *)0x43cb032;
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ae92a == '\0') {
            il2cpp_runtime_helper_023445d0(&"<size={0}>{1}</size>",0x13,0);
            g_data_057ae92a = '\x01';
          }
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffffec);
          pSVar16 = System_String__Format_3af78e0
                              ("<size={0}>{1}</size>",pIVar22,(Il2CppObject *)pSVar16,(MethodInfo *)0x0);
          return pSVar16;
        }
      }
    }
  }
label_043cb070:
  plStack_50 = (long *)0x43cb075;
  il2cpp_runtime_helper_022b2c90();
label_043cb075:
  plStack_50 = (long *)0x43cb07a;
  il2cpp_runtime_helper_022b2ca0();
  pSStack_78 = pSVar19;
  pSStack_70 = (System_String_o *)team;
  pUStack_68 = __this;
  pPStack_60 = player;
  pSStack_58 = pSVar30;
  plStack_50 = plVar25;
  if (g_data_057ae407 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGrouping_string_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae407 = '\x01';
  }
  if (key == (System_String_array *)0x0) goto label_043cb7c1;
  pIVar10 = (key->obj).klass;
  uVar2._0_1_ = (pIVar10->_2).rank;
  uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar11 = (pIVar10->_1).interfaceOffsets;
    lVar26 = 0;
    do {
      if (*(long *)((long)&pIVar11->interfaceType + lVar26) == TypeInfo_IEnumerable_Player) {
        pVVar23 = &((System_String_VTable *)pIVar10->vtable)->_0_Equals +
                  *(int *)((long)&pIVar11->offset + lVar26);
        goto label_043cb181;
      }
      lVar26 = lVar26 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar26);
  }
  pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(key,TypeInfo_IEnumerable_Player,0);
label_043cb181:
  pSStack_80 = key;
  __this = (UI_InGameMenu_o *)(*pVVar23->methodPtr)(key,pVVar23->method);
  if ((System_Object_array *)__this != (System_Object_array *)0x0) {
    pSStack_98 = (System_String_o *)0x0;
    iVar27 = 0;
    iVar29 = 0;
    iVar28 = 0;
    iStack_9c = 0;
    do {
      pIVar10 = (((System_Object_array *)__this)->obj).klass;
      uVar3._0_1_ = (pIVar10->_2).rank;
      uVar3._1_1_ = (pIVar10->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar11 = (pIVar10->_1).interfaceOffsets;
        lVar26 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar26) == TypeInfo_IEnumerator) {
            pVVar23 = pIVar10->vtable + *(int *)((long)&pIVar11->offset + lVar26);
            goto label_043cb223;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar26);
      }
      pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IEnumerator,0);
label_043cb223:
      cVar12 = (*pVVar23->methodPtr)(__this,pVVar23->method);
      if (cVar12 == '\0') goto label_043cb3c1;
      pIVar10 = (((System_Object_array *)__this)->obj).klass;
      uVar4._0_1_ = (pIVar10->_2).rank;
      uVar4._1_1_ = (pIVar10->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar11 = (pIVar10->_1).interfaceOffsets;
        lVar26 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar26) == TypeInfo_IEnumerator_Player) {
            pVVar23 = pIVar10->vtable + *(int *)((long)&pIVar11->offset + lVar26);
            goto label_043cb293;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar26);
      }
      pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IEnumerator_Player,0);
label_043cb293:
      player_00 = (Photon_Realtime_Player_o *)(*pVVar23->methodPtr)(__this,pVVar23->method);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar15 = PhotonExtensions__GetIntProperty
                         (player_00,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,
                          (MethodInfo *)0x0);
      iVar27 = iVar27 + iVar15;
      iVar15 = PhotonExtensions__GetIntProperty
                         (player_00,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,
                          (MethodInfo *)0x0);
      iVar29 = iVar29 + iVar15;
      iVar15 = PhotonExtensions__GetIntProperty
                         (player_00,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,
                          (MethodInfo *)0x0);
      iVar28 = iVar28 + iVar15;
      iVar15 = PhotonExtensions__GetIntProperty
                         (player_00,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,
                          (MethodInfo *)0x0);
      iStack_9c = iStack_9c + iVar15;
    } while( true );
  }
  auVar31 = il2cpp_runtime_helper_022b2c90();
  uVar24 = auVar31._0_8_;
  iStack_9c = 0;
  iVar28 = 0;
  iVar29 = 0;
  iVar27 = 0;
  if (auVar31._8_4_ != 1) {
    pSStack_98 = (System_String_o *)0x0;
    goto label_043cb796;
  }
  puVar20 = (undefined8 *)__cxa_begin_catch();
  pSStack_98 = (System_String_o *)*puVar20;
  __cxa_end_catch();
label_043cb3c1:
  pSVar19 = pSStack_80;
  if ((System_Object_array *)__this != (System_Object_array *)0x0) {
    pIVar10 = (((System_Object_array *)__this)->obj).klass;
    uVar5._0_1_ = (pIVar10->_2).rank;
    uVar5._1_1_ = (pIVar10->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar11 = (pIVar10->_1).interfaceOffsets;
      lVar26 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar26) == TypeInfo_IDisposable) {
          pVVar23 = pIVar10->vtable + *(int *)((long)&pIVar11->offset + lVar26);
          goto label_043cb42d;
        }
        lVar26 = lVar26 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar26);
    }
    pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_043cb42d:
    (*pVVar23->methodPtr)(__this,pVVar23->method);
  }
  if (pSStack_98 != (System_String_o *)0x0) goto label_043cb7c6;
  __this = (UI_InGameMenu_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
  pIVar10 = (pSVar19->obj).klass;
  uVar6._0_1_ = (pIVar10->_2).rank;
  uVar6._1_1_ = (pIVar10->_2).minimumAlignment;
  if ((ulong)uVar6 != 0) {
    pIVar11 = (pIVar10->_1).interfaceOffsets;
    lVar26 = 0;
    do {
      if (*(long *)((long)&pIVar11->interfaceType + lVar26) == TypeInfo_IGrouping_string_Player) {
        pVVar23 = &((System_String_VTable *)pIVar10->vtable)->_0_Equals +
                  *(int *)((long)&pIVar11->offset + lVar26);
        goto label_043cb4c1;
      }
      lVar26 = lVar26 + 0x10;
    } while ((ulong)uVar6 << 4 != lVar26);
  }
  pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IGrouping_string_Player,0);
label_043cb4c1:
  pSStack_98 = (System_String_o *)(*pVVar23->methodPtr)(pSVar19,pVVar23->method);
  pIVar10 = (pSVar19->obj).klass;
  uVar7._0_1_ = (pIVar10->_2).rank;
  uVar7._1_1_ = (pIVar10->_2).minimumAlignment;
  if ((ulong)uVar7 != 0) {
    pIVar11 = (pIVar10->_1).interfaceOffsets;
    lVar26 = 0;
    do {
      if (*(long *)((long)&pIVar11->interfaceType + lVar26) == TypeInfo_IGrouping_string_Player) {
        pVVar23 = &((System_String_VTable *)pIVar10->vtable)->_0_Equals +
                  *(int *)((long)&pIVar11->offset + lVar26);
        goto label_043cb521;
      }
      lVar26 = lVar26 + 0x10;
    } while ((ulong)uVar7 << 4 != lVar26);
  }
  pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IGrouping_string_Player,0);
label_043cb521:
  pSVar16 = (System_String_o *)(*pVVar23->methodPtr)(pSVar19);
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = GameManagers_TeamInfo__GetTeamColor(pSVar16,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = Utility_Util__ColorText(pSStack_98,pSVar16,(MethodInfo *)0x0);
  if ((System_Object_array *)__this == (System_Object_array *)0x0) goto label_043cb7c1;
  if ((pSVar16 != (System_String_o *)0x0) &&
     (lVar26 = il2cpp_runtime_helper_023051f0(pSVar16,(((((System_Object_array *)__this)->obj).klass)->_1).element_class),
     lVar26 == 0)) goto label_043cb7b2;
  if ((int)((System_Object_array *)__this)->max_length != 0) {
    ((System_Object_array *)__this)->m_Items[0] = (Il2CppObject *)pSVar16;
    il2cpp_runtime_helper_022b4080(((System_Object_array *)__this)->m_Items,pSVar16);
    iStack_84 = iVar27;
    pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_84);
    if ((pIVar22 != (Il2CppObject *)0x0) &&
       (lVar26 = il2cpp_runtime_helper_023051f0(pIVar22,(((((System_Object_array *)__this)->obj).klass)->_1).element_class
                                   ), lVar26 == 0)) goto label_043cb7b2;
    if (1 < (uint)((System_Object_array *)__this)->max_length) {
      ((System_Object_array *)__this)->m_Items[1] = pIVar22;
      il2cpp_runtime_helper_022b4080(((System_Object_array *)__this)->m_Items + 1,pIVar22);
      iStack_88 = iVar29;
      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_88);
      if ((pIVar22 != (Il2CppObject *)0x0) &&
         (lVar26 = il2cpp_runtime_helper_023051f0(pIVar22,(((((System_Object_array *)__this)->obj).klass)->_1).
                                              element_class), lVar26 == 0)) goto label_043cb7b2;
      if (2 < (uint)((System_Object_array *)__this)->max_length) {
        ((System_Object_array *)__this)->m_Items[2] = pIVar22;
        il2cpp_runtime_helper_022b4080(((System_Object_array *)__this)->m_Items + 2,pIVar22);
        iStack_8c = iVar28;
        pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_8c);
        if ((pIVar22 != (Il2CppObject *)0x0) &&
           (lVar26 = il2cpp_runtime_helper_023051f0(pIVar22,(((((System_Object_array *)__this)->obj).klass)->_1).
                                                element_class), lVar26 == 0)) goto label_043cb7b2;
        if (3 < (uint)((System_Object_array *)__this)->max_length) {
          ((System_Object_array *)__this)->m_Items[3] = pIVar22;
          il2cpp_runtime_helper_022b4080(((System_Object_array *)__this)->m_Items + 3,pIVar22);
          iStack_90 = iStack_9c;
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_90);
          if ((pIVar22 != (Il2CppObject *)0x0) &&
             (lVar26 = il2cpp_runtime_helper_023051f0(pIVar22,(((((System_Object_array *)__this)->obj).klass)->_1).
                                                  element_class), lVar26 == 0)) goto label_043cb7b2;
          if (4 < (uint)((System_Object_array *)__this)->max_length) {
            ((System_Object_array *)__this)->m_Items[4] = pIVar22;
            il2cpp_runtime_helper_022b4080(((System_Object_array *)__this)->m_Items + 4,pIVar22);
            pSVar16 = System_String__Format_3af7980
                                ("{0}: {1}/{2}/{3}/{4}\n",(System_Object_array *)__this,(MethodInfo *)0x0);
            return pSVar16;
          }
        }
      }
    }
  }
  do {
    il2cpp_runtime_helper_022b2ca0();
label_043cb7b2:
    uVar24 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar24,0);
label_043cb7c1:
    il2cpp_runtime_helper_022b2c90();
label_043cb7c6:
    uVar24 = il2cpp_runtime_helper_022fefe0();
    if ((System_Object_array *)__this != (System_Object_array *)0x0) {
      pIVar10 = (((System_Object_array *)__this)->obj).klass;
      uVar8._0_1_ = (pIVar10->_2).rank;
      uVar8._1_1_ = (pIVar10->_2).minimumAlignment;
      if ((ulong)uVar8 != 0) {
        pIVar11 = (pIVar10->_1).interfaceOffsets;
        lVar26 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar26) == TypeInfo_IDisposable) {
            pVVar23 = pIVar10->vtable + *(int *)((long)&pIVar11->offset + lVar26);
            goto label_043cb78d;
          }
          lVar26 = lVar26 + 0x10;
        } while ((ulong)uVar8 << 4 != lVar26);
      }
      pVVar23 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_043cb78d:
      (*pVVar23->methodPtr)(__this);
    }
label_043cb796:
    if (pSStack_98 == (System_String_o *)0x0) {
      _Unwind_Resume(uVar24);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// UI.InGameMenu$$GetAggregateStats
// il2cpp: System_String_o* UI_InGameMenu__GetAggregateStats (UI_InGameMenu_o* __this, System_Linq_IGrouping_string__Player__o* group, const MethodInfo* method);
// 0x43cb080

System_String_o *
UI_InGameMenu__GetAggregateStats
          (UI_InGameMenu_o *__this,System_Linq_IGrouping_string__Player__o *group,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  System_Linq_IGrouping_string__Player__c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Il2CppClass *pIVar10;
  System_Linq_IGrouping_string__Player__o *pSVar11;
  char cVar12;
  int32_t iVar13;
  VirtualInvokeData *pVVar14;
  Photon_Realtime_Player_o *player;
  undefined8 *puVar15;
  System_String_o *pSVar16;
  Il2CppObject *pIVar17;
  undefined8 uVar18;
  long lVar19;
  int iVar20;
  System_Object_array *unaff_R13;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [12];
  int local_54;
  System_String_o *local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  System_Linq_IGrouping_string__Player__o *local_38;
  
  if (g_data_057ae407 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGrouping_string_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae407 = '\x01';
  }
  if (group == (System_Linq_IGrouping_string__Player__o *)0x0) goto label_043cb7c1;
  pSVar8 = group->klass;
  uVar1._0_1_ = (pSVar8->_2).rank;
  uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar9 = (pSVar8->_1).interfaceOffsets;
    lVar19 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerable_Player) {
        pVVar14 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
        goto label_043cb181;
      }
      lVar19 = lVar19 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar19);
  }
  pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(group,TypeInfo_IEnumerable_Player,0);
label_043cb181:
  local_38 = group;
  unaff_R13 = (System_Object_array *)(*pVVar14->methodPtr)(group,pVVar14->method);
  if (unaff_R13 != (System_Object_array *)0x0) {
    local_50 = (System_String_o *)0x0;
    iVar20 = 0;
    iVar22 = 0;
    iVar21 = 0;
    local_54 = 0;
    do {
      pIVar10 = (unaff_R13->obj).klass;
      uVar2._0_1_ = (pIVar10->_2).rank;
      uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar9 = (pIVar10->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            pVVar14 = pIVar10->vtable + *(int *)((long)&pIVar9->offset + lVar19);
            goto label_043cb223;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar19);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_043cb223:
      cVar12 = (*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
      if (cVar12 == '\0') goto label_043cb3c1;
      pIVar10 = (unaff_R13->obj).klass;
      uVar3._0_1_ = (pIVar10->_2).rank;
      uVar3._1_1_ = (pIVar10->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar9 = (pIVar10->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IEnumerator_Player) {
            pVVar14 = pIVar10->vtable + *(int *)((long)&pIVar9->offset + lVar19);
            goto label_043cb293;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar19);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_Player,0);
label_043cb293:
      player = (Photon_Realtime_Player_o *)(*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar13 = PhotonExtensions__GetIntProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,
                          (MethodInfo *)0x0);
      iVar20 = iVar20 + iVar13;
      iVar13 = PhotonExtensions__GetIntProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,
                          (MethodInfo *)0x0);
      iVar22 = iVar22 + iVar13;
      iVar13 = PhotonExtensions__GetIntProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,
                          (MethodInfo *)0x0);
      iVar21 = iVar21 + iVar13;
      iVar13 = PhotonExtensions__GetIntProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,
                          (MethodInfo *)0x0);
      local_54 = local_54 + iVar13;
    } while( true );
  }
  auVar23 = il2cpp_runtime_helper_022b2c90();
  uVar18 = auVar23._0_8_;
  local_54 = 0;
  iVar21 = 0;
  iVar22 = 0;
  iVar20 = 0;
  if (auVar23._8_4_ != 1) {
    local_50 = (System_String_o *)0x0;
    goto label_043cb796;
  }
  puVar15 = (undefined8 *)__cxa_begin_catch();
  local_50 = (System_String_o *)*puVar15;
  __cxa_end_catch();
label_043cb3c1:
  pSVar11 = local_38;
  if (unaff_R13 != (System_Object_array *)0x0) {
    pIVar10 = (unaff_R13->obj).klass;
    uVar4._0_1_ = (pIVar10->_2).rank;
    uVar4._1_1_ = (pIVar10->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar9 = (pIVar10->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IDisposable) {
          pVVar14 = pIVar10->vtable + *(int *)((long)&pIVar9->offset + lVar19);
          goto label_043cb42d;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar19);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_043cb42d:
    (*pVVar14->methodPtr)(unaff_R13,pVVar14->method);
  }
  if (local_50 != (System_String_o *)0x0) goto label_043cb7c6;
  unaff_R13 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
  pSVar8 = pSVar11->klass;
  uVar5._0_1_ = (pSVar8->_2).rank;
  uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar5 != 0) {
    pIVar9 = (pSVar8->_1).interfaceOffsets;
    lVar19 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IGrouping_string_Player) {
        pVVar14 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
        goto label_043cb4c1;
      }
      lVar19 = lVar19 + 0x10;
    } while ((ulong)uVar5 << 4 != lVar19);
  }
  pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IGrouping_string_Player,0);
label_043cb4c1:
  local_50 = (System_String_o *)(*pVVar14->methodPtr)(pSVar11,pVVar14->method);
  pSVar8 = pSVar11->klass;
  uVar6._0_1_ = (pSVar8->_2).rank;
  uVar6._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar6 != 0) {
    pIVar9 = (pSVar8->_1).interfaceOffsets;
    lVar19 = 0;
    do {
      if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IGrouping_string_Player) {
        pVVar14 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar19);
        goto label_043cb521;
      }
      lVar19 = lVar19 + 0x10;
    } while ((ulong)uVar6 << 4 != lVar19);
  }
  pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IGrouping_string_Player,0);
label_043cb521:
  pSVar16 = (System_String_o *)(*pVVar14->methodPtr)(pSVar11);
  if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = GameManagers_TeamInfo__GetTeamColor(pSVar16,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = Utility_Util__ColorText(local_50,pSVar16,(MethodInfo *)0x0);
  if (unaff_R13 == (System_Object_array *)0x0) goto label_043cb7c1;
  if ((pSVar16 != (System_String_o *)0x0) &&
     (lVar19 = il2cpp_runtime_helper_023051f0(pSVar16,(((unaff_R13->obj).klass)->_1).element_class), lVar19 == 0))
  goto label_043cb7b2;
  if ((int)unaff_R13->max_length != 0) {
    unaff_R13->m_Items[0] = (Il2CppObject *)pSVar16;
    il2cpp_runtime_helper_022b4080(unaff_R13->m_Items,pSVar16);
    local_3c = iVar20;
    pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_3c);
    if ((pIVar17 != (Il2CppObject *)0x0) &&
       (lVar19 = il2cpp_runtime_helper_023051f0(pIVar17,(((unaff_R13->obj).klass)->_1).element_class), lVar19 == 0))
    goto label_043cb7b2;
    if (1 < (uint)unaff_R13->max_length) {
      unaff_R13->m_Items[1] = pIVar17;
      il2cpp_runtime_helper_022b4080(unaff_R13->m_Items + 1,pIVar17);
      local_40 = iVar22;
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_40);
      if ((pIVar17 != (Il2CppObject *)0x0) &&
         (lVar19 = il2cpp_runtime_helper_023051f0(pIVar17,(((unaff_R13->obj).klass)->_1).element_class), lVar19 == 0))
      goto label_043cb7b2;
      if (2 < (uint)unaff_R13->max_length) {
        unaff_R13->m_Items[2] = pIVar17;
        il2cpp_runtime_helper_022b4080(unaff_R13->m_Items + 2,pIVar17);
        local_44 = iVar21;
        pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_44);
        if ((pIVar17 != (Il2CppObject *)0x0) &&
           (lVar19 = il2cpp_runtime_helper_023051f0(pIVar17,(((unaff_R13->obj).klass)->_1).element_class), lVar19 == 0))
        goto label_043cb7b2;
        if (3 < (uint)unaff_R13->max_length) {
          unaff_R13->m_Items[3] = pIVar17;
          il2cpp_runtime_helper_022b4080(unaff_R13->m_Items + 3,pIVar17);
          local_48 = local_54;
          pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_48);
          if ((pIVar17 != (Il2CppObject *)0x0) &&
             (lVar19 = il2cpp_runtime_helper_023051f0(pIVar17,(((unaff_R13->obj).klass)->_1).element_class), lVar19 == 0))
          goto label_043cb7b2;
          if (4 < (uint)unaff_R13->max_length) {
            unaff_R13->m_Items[4] = pIVar17;
            il2cpp_runtime_helper_022b4080(unaff_R13->m_Items + 4,pIVar17);
            pSVar16 = System_String__Format_3af7980("{0}: {1}/{2}/{3}/{4}\n",unaff_R13,(MethodInfo *)0x0);
            return pSVar16;
          }
        }
      }
    }
  }
  do {
    il2cpp_runtime_helper_022b2ca0();
label_043cb7b2:
    uVar18 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar18,0);
label_043cb7c1:
    il2cpp_runtime_helper_022b2c90();
label_043cb7c6:
    uVar18 = il2cpp_runtime_helper_022fefe0();
    if (unaff_R13 != (System_Object_array *)0x0) {
      pIVar10 = (unaff_R13->obj).klass;
      uVar7._0_1_ = (pIVar10->_2).rank;
      uVar7._1_1_ = (pIVar10->_2).minimumAlignment;
      if ((ulong)uVar7 != 0) {
        pIVar9 = (pIVar10->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar19) == TypeInfo_IDisposable) {
            pVVar14 = pIVar10->vtable + *(int *)((long)&pIVar9->offset + lVar19);
            goto label_043cb78d;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar7 << 4 != lVar19);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_043cb78d:
      (*pVVar14->methodPtr)(unaff_R13);
    }
label_043cb796:
    if (local_50 == (System_String_o *)0x0) {
      _Unwind_Resume(uVar18);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// UI.InGameMenu$$GetPlayerList
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerList (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43cb7f0

System_String_o * UI_InGameMenu__GetPlayerList(UI_InGameMenu_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___c *pSVar12;
  Il2CppRuntimeInterfaceOffsetPair *pIVar13;
  UI_InGameMenu_c *pUVar14;
  System_Linq_IGrouping_string__Player__c *pSVar15;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar16;
  Il2CppClass *pIVar17;
  char cVar18;
  Photon_Realtime_Player_array *pPVar19;
  ulong uVar20;
  System_String_o *pSVar21;
  UI_InGameMenu_o *pUVar22;
  System_String_o **source;
  System_Func_TSource__bool__o *pSVar23;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar24;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Func_TSource__TKey__o *keySelector;
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *pSVar25;
  VirtualInvokeData *pVVar26;
  System_Linq_IGrouping_string__Player__o *group;
  System_String_o *pSVar27;
  long *plVar28;
  undefined8 *puVar29;
  Photon_Realtime_Player_o *player;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  ulong uVar30;
  UI_InGameMenu_o *__this_00;
  long lVar31;
  UI_InGameMenu_o *pUVar32;
  long lVar33;
  long *plVar34;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  
  if (g_data_057ae408 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057ae408 = '\x01';
  }
  pUVar22 = (UI_InGameMenu_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UI_InGameMenu_o *)0x0;
  pPVar19 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar19 != (Photon_Realtime_Player_array *)0x0) {
    if (0 < (int)pPVar19->max_length) {
      uVar20 = pPVar19->max_length & 0xffffffff;
      uVar30 = 0;
      method_00 = extraout_RDX;
      pUVar32 = pUVar22;
      do {
        if (uVar20 <= uVar30) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_043cb8ca;
        }
        pSVar21 = UI_InGameMenu__GetPlayerListEntry(__this,pPVar19->m_Items[uVar30],method_00);
        pUVar22 = (UI_InGameMenu_o *)
                  System_String__Concat_3af7150
                            ((System_String_o *)pUVar32,pSVar21,"\n",(MethodInfo *)0x0);
        uVar30 = uVar30 + 1;
        uVar11 = (uint)pPVar19->max_length;
        uVar20 = (ulong)uVar11;
        method_00 = extraout_RDX_00;
        __this_00 = pUVar32;
        pUVar32 = pUVar22;
      } while ((long)uVar30 < (long)(int)uVar11);
    }
    return (System_String_o *)pUVar22;
  }
label_043cb8ca:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae409 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Linq_IGrouping_2_System_String_Phot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Player_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Player_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_IGrouping_string_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_IGrouping_string_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetPlayerListTeams_b__110_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetPlayerListTeams_b__110_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetPlayerListTeams_b__110_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"\t");
    il2cpp_runtime_helper_023445d0(&":\n");
    g_data_057ae409 = '\x01';
  }
  pSVar21 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_String_o **)Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar23 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar23 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar23 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar23 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_bool);
    System_Func_object__bool____ctor();
    lVar31 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar31 + 8) = pSVar23;
    il2cpp_runtime_helper_022b4080(lVar31 + 8,pSVar23);
  }
  pSVar24 = System_Linq_Enumerable__Where_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,pSVar23,MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar19 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar23 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar23 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar23 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar23 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_bool);
    System_Func_object__bool____ctor();
    lVar31 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar31 + 0x10) = pSVar23;
    il2cpp_runtime_helper_022b4080(lVar31 + 0x10,pSVar23);
    source = (System_String_o **)&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player;
  }
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pPVar19,pSVar23,MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  plVar34 = (long *)&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player;
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar34 = (long *)**(undefined8 **)(TypeInfo_c + 0xb8);
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_string);
    System_Func_object__object____ctor();
    lVar31 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar31 + 0x18) = keySelector;
    il2cpp_runtime_helper_022b4080(lVar31 + 0x18,keySelector);
  }
  pSVar25 = System_Linq_Enumerable__GroupBy_object__object_(source_00,keySelector,MethodInfo_IEnumerable_1_System_Linq_IGrouping_2_System_String_Phot);
  if (pSVar25 == (System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *)0x0) goto label_043cc3e3;
  pSVar12 = pSVar25->klass;
  uVar1._0_1_ = (pSVar12->_2).rank;
  uVar1._1_1_ = (pSVar12->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar13 = (pSVar12->_1).interfaceOffsets;
    lVar31 = 0;
    do {
      if (*(long *)((long)&pIVar13->interfaceType + lVar31) == TypeInfo_IEnumerable_IGrouping_string_Player) {
        pVVar26 = pSVar12->vtable + *(int *)((long)&pIVar13->offset + lVar31);
        goto label_043cbca1;
      }
      lVar31 = lVar31 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar31);
  }
  pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar25,TypeInfo_IEnumerable_IGrouping_string_Player,0);
label_043cbca1:
  pUVar22 = (UI_InGameMenu_o *)(*pVVar26->methodPtr)(pSVar25,pVVar26->method);
  if (pUVar22 != (UI_InGameMenu_o *)0x0) {
    plVar34 = &TypeInfo_IEnumerator;
    source = &"\n";
label_043cbcd0:
    pUVar14 = pUVar22->klass;
    uVar2._0_1_ = (pUVar14->_2).rank;
    uVar2._1_1_ = (pUVar14->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar13 = (pUVar14->_1).interfaceOffsets;
      lVar31 = 0;
      do {
        if (*(long *)((long)&pIVar13->interfaceType + lVar31) == TypeInfo_IEnumerator) {
          pVVar26 = &(pUVar14->vtable)._0_Equals + *(int *)((long)&pIVar13->offset + lVar31);
          goto label_043cbd33;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar31);
    }
    pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar22,TypeInfo_IEnumerator,0);
label_043cbd33:
    cVar18 = (*pVVar26->methodPtr)(pUVar22,pVVar26->method);
    if (cVar18 != '\0') {
      pUVar14 = pUVar22->klass;
      uVar3._0_1_ = (pUVar14->_2).rank;
      uVar3._1_1_ = (pUVar14->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar13 = (pUVar14->_1).interfaceOffsets;
        lVar31 = 0;
        do {
          if (*(long *)((long)&pIVar13->interfaceType + lVar31) == TypeInfo_IEnumerator_IGrouping_string_Player) {
            pVVar26 = &(pUVar14->vtable)._0_Equals + *(int *)((long)&pIVar13->offset + lVar31);
            goto label_043cbdb3;
          }
          lVar31 = lVar31 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar31);
      }
      pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar22,TypeInfo_IEnumerator_IGrouping_string_Player,0);
label_043cbdb3:
      pUVar32 = pUVar22;
      auVar36 = (*pVVar26->methodPtr)(pUVar22,pVVar26->method);
      group = auVar36._0_8_;
      pSVar27 = UI_InGameMenu__GetAggregateStats(pUVar32,group,auVar36._8_8_);
      pSVar27 = System_String__Concat_3ae5ba0(pSVar21,pSVar27,(MethodInfo *)0x0);
      if (group == (System_Linq_IGrouping_string__Player__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        il2cpp_runtime_helper_022fefe0();
      }
      else {
        pSVar15 = group->klass;
        uVar4._0_1_ = (pSVar15->_2).rank;
        uVar4._1_1_ = (pSVar15->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar13 = (pSVar15->_1).interfaceOffsets;
          lVar31 = 0;
          do {
            if (*(long *)((long)&pIVar13->interfaceType + lVar31) == TypeInfo_IEnumerable_Player) {
              pVVar26 = pSVar15->vtable + *(int *)((long)&pIVar13->offset + lVar31);
              goto label_043cbe43;
            }
            lVar31 = lVar31 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar31);
        }
        pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(group,TypeInfo_IEnumerable_Player,0);
label_043cbe43:
        plVar28 = (long *)(*pVVar26->methodPtr)(group,pVVar26->method);
        if (plVar28 != (long *)0x0) {
          do {
            lVar31 = *plVar28;
            if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
              lVar33 = 0;
              do {
                if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IEnumerator) {
                  puVar29 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) * 0x10 + lVar31 + 0x138);
                  goto label_043cbec3;
                }
                lVar33 = lVar33 + 0x10;
              } while ((ulong)*(ushort *)(lVar31 + 0x12e) << 4 != lVar33);
            }
            puVar29 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IEnumerator,0);
label_043cbec3:
            cVar18 = (*(code *)*puVar29)(plVar28,puVar29[1]);
            if (cVar18 == '\0') goto label_043cbf70;
            lVar31 = *plVar28;
            if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
              lVar33 = 0;
              do {
                if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IEnumerator_Player) {
                  puVar29 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) * 0x10 + lVar31 + 0x138);
                  goto label_043cbf33;
                }
                lVar33 = lVar33 + 0x10;
              } while ((ulong)*(ushort *)(lVar31 + 0x12e) << 4 != lVar33);
            }
            puVar29 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IEnumerator_Player,0);
label_043cbf33:
            auVar36 = (*(code *)*puVar29)(plVar28,puVar29[1]);
            pSVar21 = UI_InGameMenu__GetPlayerListEntry(__this_00,auVar36._0_8_,auVar36._8_8_);
            pSVar27 = System_String__Concat_3af7470
                                (pSVar27,"\t",pSVar21,"\n",(MethodInfo *)0x0);
          } while( true );
        }
        il2cpp_runtime_helper_022b2c90();
      }
      goto label_043cc3e3;
    }
    if (pUVar22 == (UI_InGameMenu_o *)0x0) goto label_043cc0f6;
    pUVar14 = pUVar22->klass;
    uVar5._0_1_ = (pUVar14->_2).rank;
    uVar5._1_1_ = (pUVar14->_2).minimumAlignment;
    if ((ulong)uVar5 == 0) goto label_043cc0cf;
    pIVar13 = (pUVar14->_1).interfaceOffsets;
    lVar31 = 0;
    goto label_043cc0c0;
  }
  goto label_043cc3e8;
label_043cbf70:
  pSVar21 = pSVar27;
  if (plVar28 != (long *)0x0) {
    lVar31 = *plVar28;
    if ((ulong)*(ushort *)(lVar31 + 0x12e) != 0) {
      lVar33 = 0;
      do {
        if (*(long *)(*(long *)(lVar31 + 0xb0) + lVar33) == TypeInfo_IDisposable) {
          puVar29 = (undefined8 *)
                    (lVar31 + (long)*(int *)(*(long *)(lVar31 + 0xb0) + 8 + lVar33) * 0x10 + 0x138);
          goto label_043cbfdd;
        }
        lVar33 = lVar33 + 0x10;
      } while ((ulong)*(ushort *)(lVar31 + 0x12e) << 4 != lVar33);
    }
    puVar29 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IDisposable,0);
label_043cbfdd:
    (*(code *)*puVar29)(plVar28,puVar29[1]);
  }
  goto label_043cbcd0;
  while (lVar31 = lVar31 + 0x10, (ulong)uVar5 << 4 != lVar31) {
label_043cc0c0:
    if (*(long *)((long)&pIVar13->interfaceType + lVar31) == TypeInfo_IDisposable) {
      pVVar26 = &(pUVar14->vtable)._0_Equals + *(int *)((long)&pIVar13->offset + lVar31);
      goto label_043cc0ed;
    }
  }
label_043cc0cf:
  pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar22,TypeInfo_IDisposable,0);
label_043cc0ed:
  (*pVVar26->methodPtr)(pUVar22,pVVar26->method);
label_043cc0f6:
  plVar34 = (long *)0x0;
  if (pSVar24 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
    pSVar16 = pSVar24->klass;
    uVar6._0_1_ = (pSVar16->_2).rank;
    uVar6._1_1_ = (pSVar16->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar13 = (pSVar16->_1).interfaceOffsets;
      lVar31 = 0;
      do {
        if (*(long *)((long)&pIVar13->interfaceType + lVar31) == TypeInfo_IEnumerable_Player) {
          pVVar26 = pSVar16->vtable + *(int *)((long)&pIVar13->offset + lVar31);
          goto label_043cc171;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar31);
    }
    pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar24,TypeInfo_IEnumerable_Player,0);
label_043cc171:
    source = (System_String_o **)(*pVVar26->methodPtr)(pSVar24,pVVar26->method);
    if ((Photon_Realtime_Player_array *)source != (Photon_Realtime_Player_array *)0x0) {
      do {
        pIVar17 = (((Photon_Realtime_Player_array *)source)->obj).klass;
        uVar7._0_1_ = (pIVar17->_2).rank;
        uVar7._1_1_ = (pIVar17->_2).minimumAlignment;
        if ((ulong)uVar7 != 0) {
          pIVar13 = (pIVar17->_1).interfaceOffsets;
          lVar31 = 0;
          do {
            if (*(long *)((long)&pIVar13->interfaceType + lVar31) == TypeInfo_IEnumerator) {
              pVVar26 = pIVar17->vtable + *(int *)((long)&pIVar13->offset + lVar31);
              goto label_043cc1f3;
            }
            lVar31 = lVar31 + 0x10;
          } while ((ulong)uVar7 << 4 != lVar31);
        }
        pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(source,TypeInfo_IEnumerator,0);
label_043cc1f3:
        cVar18 = (*pVVar26->methodPtr)(source,pVVar26->method);
        if (cVar18 == '\0') {
          lVar31 = 0;
          goto label_043cc2d1;
        }
        pIVar17 = (((Photon_Realtime_Player_array *)source)->obj).klass;
        uVar8._0_1_ = (pIVar17->_2).rank;
        uVar8._1_1_ = (pIVar17->_2).minimumAlignment;
        if ((ulong)uVar8 != 0) {
          pIVar13 = (pIVar17->_1).interfaceOffsets;
          lVar31 = 0;
          do {
            if (*(long *)((long)&pIVar13->interfaceType + lVar31) == TypeInfo_IEnumerator_Player) {
              pVVar26 = pIVar17->vtable + *(int *)((long)&pIVar13->offset + lVar31);
              goto label_043cc263;
            }
            lVar31 = lVar31 + 0x10;
          } while ((ulong)uVar8 << 4 != lVar31);
        }
        pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(source,TypeInfo_IEnumerator_Player,0);
label_043cc263:
        player = (Photon_Realtime_Player_o *)(*pVVar26->methodPtr)(source,pVVar26->method);
        pSVar27 = (System_String_o *)
                  (*pSVar24->klass->vtable[3].methodPtr)(pSVar24,pSVar24->klass->vtable[3].method);
        pSVar21 = System_String__Concat_3af7150(pSVar21,pSVar27,":\n",(MethodInfo *)0x0);
        pSVar27 = UI_InGameMenu__GetPlayerListEntry(__this_00,player,method_01);
        pSVar21 = System_String__Concat_3af7470(pSVar21,"\t",pSVar27,"\n",(MethodInfo *)0x0);
      } while( true );
    }
    goto label_043cc3f5;
  }
label_043cc3e3:
  il2cpp_runtime_helper_022b2c90();
label_043cc3e8:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(plVar34);
label_043cc3f5:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar35 = il2cpp_runtime_helper_022fefe0();
    if (auVar35._8_4_ != 1) break;
    plVar34 = (long *)__cxa_begin_catch();
    lVar31 = *plVar34;
    __cxa_end_catch();
label_043cc2d1:
    if ((Photon_Realtime_Player_array *)source != (Photon_Realtime_Player_array *)0x0) {
      pIVar17 = (((Photon_Realtime_Player_array *)source)->obj).klass;
      uVar9._0_1_ = (pIVar17->_2).rank;
      uVar9._1_1_ = (pIVar17->_2).minimumAlignment;
      if ((ulong)uVar9 != 0) {
        pIVar13 = (pIVar17->_1).interfaceOffsets;
        lVar33 = 0;
        do {
          if (*(long *)((long)&pIVar13->interfaceType + lVar33) == TypeInfo_IDisposable) {
            pVVar26 = pIVar17->vtable + *(int *)((long)&pIVar13->offset + lVar33);
            goto label_043cc32d;
          }
          lVar33 = lVar33 + 0x10;
        } while ((ulong)uVar9 << 4 != lVar33);
      }
      pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(source,TypeInfo_IDisposable,0);
label_043cc32d:
      (*pVVar26->methodPtr)(source,pVVar26->method);
    }
    if (lVar31 == 0) {
      return pSVar21;
    }
  }
  if ((Photon_Realtime_Player_array *)source != (Photon_Realtime_Player_array *)0x0) {
    pIVar17 = (((Photon_Realtime_Player_array *)source)->obj).klass;
    uVar10._0_1_ = (pIVar17->_2).rank;
    uVar10._1_1_ = (pIVar17->_2).minimumAlignment;
    if ((ulong)uVar10 != 0) {
      pIVar13 = (pIVar17->_1).interfaceOffsets;
      lVar31 = 0;
      do {
        if (*(long *)((long)&pIVar13->interfaceType + lVar31) == TypeInfo_IDisposable) {
          pVVar26 = pIVar17->vtable + *(int *)((long)&pIVar13->offset + lVar31);
          goto label_043cc5ad;
        }
        lVar31 = lVar31 + 0x10;
      } while ((ulong)uVar10 << 4 != lVar31);
    }
    pVVar26 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(source,TypeInfo_IDisposable,0);
label_043cc5ad:
    (*pVVar26->methodPtr)(source,pVVar26->method);
  }
  _Unwind_Resume(auVar35._0_8_);
}


// UI.InGameMenu$$GetPlayerListTeams
// il2cpp: System_String_o* UI_InGameMenu__GetPlayerListTeams (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43cb8d0

System_String_o * UI_InGameMenu__GetPlayerListTeams(UI_InGameMenu_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___c *pSVar11;
  Il2CppRuntimeInterfaceOffsetPair *pIVar12;
  UI_InGameMenu_c *pUVar13;
  System_Linq_IGrouping_string__Player__c *pSVar14;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar15;
  Il2CppClass *pIVar16;
  char cVar17;
  System_String_o **source;
  System_Func_TSource__bool__o *pSVar18;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar19;
  Photon_Realtime_Player_array *source_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_01;
  System_Func_TSource__TKey__o *keySelector;
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *pSVar20;
  VirtualInvokeData *pVVar21;
  UI_InGameMenu_o *pUVar22;
  System_Linq_IGrouping_string__Player__o *group;
  System_String_o *pSVar23;
  long *plVar24;
  undefined8 *puVar25;
  System_String_o *pSVar26;
  Photon_Realtime_Player_o *player;
  MethodInfo *method_00;
  long lVar27;
  UI_InGameMenu_o *__this_00;
  long lVar28;
  long *plVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  
  if (g_data_057ae409 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Linq_IGrouping_2_System_String_Phot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Player_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Player_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_IGrouping_string_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_IGrouping_string_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_Player);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetPlayerListTeams_b__110_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetPlayerListTeams_b__110_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetPlayerListTeams_b__110_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"\t");
    il2cpp_runtime_helper_023445d0(&":\n");
    g_data_057ae409 = '\x01';
  }
  pSVar26 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_String_o **)Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_bool);
    System_Func_object__bool____ctor();
    lVar27 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar27 + 8) = pSVar18;
    il2cpp_runtime_helper_022b4080(lVar27 + 8,pSVar18);
  }
  pSVar19 = System_Linq_Enumerable__Where_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,pSVar18,MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source_00 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar18 = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar18 == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_bool);
    System_Func_object__bool____ctor();
    lVar27 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar27 + 0x10) = pSVar18;
    il2cpp_runtime_helper_022b4080(lVar27 + 0x10,pSVar18);
    source = (System_String_o **)&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player;
  }
  source_01 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,pSVar18,MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  plVar29 = (long *)&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player;
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar29 = (long *)**(undefined8 **)(TypeInfo_c + 0xb8);
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_string);
    System_Func_object__object____ctor();
    lVar27 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TKey__o **)(lVar27 + 0x18) = keySelector;
    il2cpp_runtime_helper_022b4080(lVar27 + 0x18,keySelector);
  }
  pSVar20 = System_Linq_Enumerable__GroupBy_object__object_(source_01,keySelector,MethodInfo_IEnumerable_1_System_Linq_IGrouping_2_System_String_Phot);
  if (pSVar20 == (System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *)0x0) goto label_043cc3e3;
  pSVar11 = pSVar20->klass;
  uVar1._0_1_ = (pSVar11->_2).rank;
  uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar12 = (pSVar11->_1).interfaceOffsets;
    lVar27 = 0;
    do {
      if (*(long *)((long)&pIVar12->interfaceType + lVar27) == TypeInfo_IEnumerable_IGrouping_string_Player) {
        pVVar21 = pSVar11->vtable + *(int *)((long)&pIVar12->offset + lVar27);
        goto label_043cbca1;
      }
      lVar27 = lVar27 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar27);
  }
  pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar20,TypeInfo_IEnumerable_IGrouping_string_Player,0);
label_043cbca1:
  pUVar22 = (UI_InGameMenu_o *)(*pVVar21->methodPtr)(pSVar20,pVVar21->method);
  if (pUVar22 != (UI_InGameMenu_o *)0x0) {
    plVar29 = &TypeInfo_IEnumerator;
    source = &"\n";
label_043cbcd0:
    pUVar13 = pUVar22->klass;
    uVar2._0_1_ = (pUVar13->_2).rank;
    uVar2._1_1_ = (pUVar13->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar12 = (pUVar13->_1).interfaceOffsets;
      lVar27 = 0;
      do {
        if (*(long *)((long)&pIVar12->interfaceType + lVar27) == TypeInfo_IEnumerator) {
          pVVar21 = &(pUVar13->vtable)._0_Equals + *(int *)((long)&pIVar12->offset + lVar27);
          goto label_043cbd33;
        }
        lVar27 = lVar27 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar27);
    }
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar22,TypeInfo_IEnumerator,0);
label_043cbd33:
    cVar17 = (*pVVar21->methodPtr)(pUVar22,pVVar21->method);
    if (cVar17 != '\0') {
      pUVar13 = pUVar22->klass;
      uVar3._0_1_ = (pUVar13->_2).rank;
      uVar3._1_1_ = (pUVar13->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar12 = (pUVar13->_1).interfaceOffsets;
        lVar27 = 0;
        do {
          if (*(long *)((long)&pIVar12->interfaceType + lVar27) == TypeInfo_IEnumerator_IGrouping_string_Player) {
            pVVar21 = &(pUVar13->vtable)._0_Equals + *(int *)((long)&pIVar12->offset + lVar27);
            goto label_043cbdb3;
          }
          lVar27 = lVar27 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar27);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar22,TypeInfo_IEnumerator_IGrouping_string_Player,0);
label_043cbdb3:
      __this_00 = pUVar22;
      auVar31 = (*pVVar21->methodPtr)(pUVar22,pVVar21->method);
      group = auVar31._0_8_;
      pSVar23 = UI_InGameMenu__GetAggregateStats(__this_00,group,auVar31._8_8_);
      pSVar23 = System_String__Concat_3ae5ba0(pSVar26,pSVar23,(MethodInfo *)0x0);
      if (group == (System_Linq_IGrouping_string__Player__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        il2cpp_runtime_helper_022fefe0();
      }
      else {
        pSVar14 = group->klass;
        uVar4._0_1_ = (pSVar14->_2).rank;
        uVar4._1_1_ = (pSVar14->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar12 = (pSVar14->_1).interfaceOffsets;
          lVar27 = 0;
          do {
            if (*(long *)((long)&pIVar12->interfaceType + lVar27) == TypeInfo_IEnumerable_Player) {
              pVVar21 = pSVar14->vtable + *(int *)((long)&pIVar12->offset + lVar27);
              goto label_043cbe43;
            }
            lVar27 = lVar27 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar27);
        }
        pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(group,TypeInfo_IEnumerable_Player,0);
label_043cbe43:
        plVar24 = (long *)(*pVVar21->methodPtr)(group,pVVar21->method);
        if (plVar24 != (long *)0x0) {
          do {
            lVar27 = *plVar24;
            if ((ulong)*(ushort *)(lVar27 + 0x12e) != 0) {
              lVar28 = 0;
              do {
                if (*(long *)(*(long *)(lVar27 + 0xb0) + lVar28) == TypeInfo_IEnumerator) {
                  puVar25 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar27 + 0xb0) + 8 + lVar28) * 0x10 + lVar27 + 0x138);
                  goto label_043cbec3;
                }
                lVar28 = lVar28 + 0x10;
              } while ((ulong)*(ushort *)(lVar27 + 0x12e) << 4 != lVar28);
            }
            puVar25 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar24,TypeInfo_IEnumerator,0);
label_043cbec3:
            cVar17 = (*(code *)*puVar25)(plVar24,puVar25[1]);
            if (cVar17 == '\0') goto label_043cbf70;
            lVar27 = *plVar24;
            if ((ulong)*(ushort *)(lVar27 + 0x12e) != 0) {
              lVar28 = 0;
              do {
                if (*(long *)(*(long *)(lVar27 + 0xb0) + lVar28) == TypeInfo_IEnumerator_Player) {
                  puVar25 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar27 + 0xb0) + 8 + lVar28) * 0x10 + lVar27 + 0x138);
                  goto label_043cbf33;
                }
                lVar28 = lVar28 + 0x10;
              } while ((ulong)*(ushort *)(lVar27 + 0x12e) << 4 != lVar28);
            }
            puVar25 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar24,TypeInfo_IEnumerator_Player,0);
label_043cbf33:
            auVar31 = (*(code *)*puVar25)(plVar24,puVar25[1]);
            pSVar26 = UI_InGameMenu__GetPlayerListEntry(__this,auVar31._0_8_,auVar31._8_8_);
            pSVar23 = System_String__Concat_3af7470
                                (pSVar23,"\t",pSVar26,"\n",(MethodInfo *)0x0);
          } while( true );
        }
        il2cpp_runtime_helper_022b2c90();
      }
      goto label_043cc3e3;
    }
    if (pUVar22 == (UI_InGameMenu_o *)0x0) goto label_043cc0f6;
    pUVar13 = pUVar22->klass;
    uVar5._0_1_ = (pUVar13->_2).rank;
    uVar5._1_1_ = (pUVar13->_2).minimumAlignment;
    if ((ulong)uVar5 == 0) goto label_043cc0cf;
    pIVar12 = (pUVar13->_1).interfaceOffsets;
    lVar27 = 0;
    goto label_043cc0c0;
  }
  goto label_043cc3e8;
label_043cbf70:
  pSVar26 = pSVar23;
  if (plVar24 != (long *)0x0) {
    lVar27 = *plVar24;
    if ((ulong)*(ushort *)(lVar27 + 0x12e) != 0) {
      lVar28 = 0;
      do {
        if (*(long *)(*(long *)(lVar27 + 0xb0) + lVar28) == TypeInfo_IDisposable) {
          puVar25 = (undefined8 *)
                    (lVar27 + (long)*(int *)(*(long *)(lVar27 + 0xb0) + 8 + lVar28) * 0x10 + 0x138);
          goto label_043cbfdd;
        }
        lVar28 = lVar28 + 0x10;
      } while ((ulong)*(ushort *)(lVar27 + 0x12e) << 4 != lVar28);
    }
    puVar25 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar24,TypeInfo_IDisposable,0);
label_043cbfdd:
    (*(code *)*puVar25)(plVar24,puVar25[1]);
  }
  goto label_043cbcd0;
  while (lVar27 = lVar27 + 0x10, (ulong)uVar5 << 4 != lVar27) {
label_043cc0c0:
    if (*(long *)((long)&pIVar12->interfaceType + lVar27) == TypeInfo_IDisposable) {
      pVVar21 = &(pUVar13->vtable)._0_Equals + *(int *)((long)&pIVar12->offset + lVar27);
      goto label_043cc0ed;
    }
  }
label_043cc0cf:
  pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar22,TypeInfo_IDisposable,0);
label_043cc0ed:
  (*pVVar21->methodPtr)(pUVar22,pVVar21->method);
label_043cc0f6:
  plVar29 = (long *)0x0;
  if (pSVar19 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
    pSVar15 = pSVar19->klass;
    uVar6._0_1_ = (pSVar15->_2).rank;
    uVar6._1_1_ = (pSVar15->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar12 = (pSVar15->_1).interfaceOffsets;
      lVar27 = 0;
      do {
        if (*(long *)((long)&pIVar12->interfaceType + lVar27) == TypeInfo_IEnumerable_Player) {
          pVVar21 = pSVar15->vtable + *(int *)((long)&pIVar12->offset + lVar27);
          goto label_043cc171;
        }
        lVar27 = lVar27 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar27);
    }
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar19,TypeInfo_IEnumerable_Player,0);
label_043cc171:
    source = (System_String_o **)(*pVVar21->methodPtr)(pSVar19,pVVar21->method);
    if ((Photon_Realtime_Player_array *)source != (Photon_Realtime_Player_array *)0x0) {
      do {
        pIVar16 = (((Photon_Realtime_Player_array *)source)->obj).klass;
        uVar7._0_1_ = (pIVar16->_2).rank;
        uVar7._1_1_ = (pIVar16->_2).minimumAlignment;
        if ((ulong)uVar7 != 0) {
          pIVar12 = (pIVar16->_1).interfaceOffsets;
          lVar27 = 0;
          do {
            if (*(long *)((long)&pIVar12->interfaceType + lVar27) == TypeInfo_IEnumerator) {
              pVVar21 = pIVar16->vtable + *(int *)((long)&pIVar12->offset + lVar27);
              goto label_043cc1f3;
            }
            lVar27 = lVar27 + 0x10;
          } while ((ulong)uVar7 << 4 != lVar27);
        }
        pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(source,TypeInfo_IEnumerator,0);
label_043cc1f3:
        cVar17 = (*pVVar21->methodPtr)(source,pVVar21->method);
        if (cVar17 == '\0') {
          lVar27 = 0;
          goto label_043cc2d1;
        }
        pIVar16 = (((Photon_Realtime_Player_array *)source)->obj).klass;
        uVar8._0_1_ = (pIVar16->_2).rank;
        uVar8._1_1_ = (pIVar16->_2).minimumAlignment;
        if ((ulong)uVar8 != 0) {
          pIVar12 = (pIVar16->_1).interfaceOffsets;
          lVar27 = 0;
          do {
            if (*(long *)((long)&pIVar12->interfaceType + lVar27) == TypeInfo_IEnumerator_Player) {
              pVVar21 = pIVar16->vtable + *(int *)((long)&pIVar12->offset + lVar27);
              goto label_043cc263;
            }
            lVar27 = lVar27 + 0x10;
          } while ((ulong)uVar8 << 4 != lVar27);
        }
        pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(source,TypeInfo_IEnumerator_Player,0);
label_043cc263:
        player = (Photon_Realtime_Player_o *)(*pVVar21->methodPtr)(source,pVVar21->method);
        pSVar23 = (System_String_o *)
                  (*pSVar19->klass->vtable[3].methodPtr)(pSVar19,pSVar19->klass->vtable[3].method);
        pSVar26 = System_String__Concat_3af7150(pSVar26,pSVar23,":\n",(MethodInfo *)0x0);
        pSVar23 = UI_InGameMenu__GetPlayerListEntry(__this,player,method_00);
        pSVar26 = System_String__Concat_3af7470(pSVar26,"\t",pSVar23,"\n",(MethodInfo *)0x0);
      } while( true );
    }
    goto label_043cc3f5;
  }
label_043cc3e3:
  il2cpp_runtime_helper_022b2c90();
label_043cc3e8:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(plVar29);
label_043cc3f5:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar30 = il2cpp_runtime_helper_022fefe0();
    if (auVar30._8_4_ != 1) break;
    plVar29 = (long *)__cxa_begin_catch();
    lVar27 = *plVar29;
    __cxa_end_catch();
label_043cc2d1:
    if ((Photon_Realtime_Player_array *)source != (Photon_Realtime_Player_array *)0x0) {
      pIVar16 = (((Photon_Realtime_Player_array *)source)->obj).klass;
      uVar9._0_1_ = (pIVar16->_2).rank;
      uVar9._1_1_ = (pIVar16->_2).minimumAlignment;
      if ((ulong)uVar9 != 0) {
        pIVar12 = (pIVar16->_1).interfaceOffsets;
        lVar28 = 0;
        do {
          if (*(long *)((long)&pIVar12->interfaceType + lVar28) == TypeInfo_IDisposable) {
            pVVar21 = pIVar16->vtable + *(int *)((long)&pIVar12->offset + lVar28);
            goto label_043cc32d;
          }
          lVar28 = lVar28 + 0x10;
        } while ((ulong)uVar9 << 4 != lVar28);
      }
      pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(source,TypeInfo_IDisposable,0);
label_043cc32d:
      (*pVVar21->methodPtr)(source,pVVar21->method);
    }
    if (lVar27 == 0) {
      return pSVar26;
    }
  }
  if ((Photon_Realtime_Player_array *)source != (Photon_Realtime_Player_array *)0x0) {
    pIVar16 = (((Photon_Realtime_Player_array *)source)->obj).klass;
    uVar10._0_1_ = (pIVar16->_2).rank;
    uVar10._1_1_ = (pIVar16->_2).minimumAlignment;
    if ((ulong)uVar10 != 0) {
      pIVar12 = (pIVar16->_1).interfaceOffsets;
      lVar27 = 0;
      do {
        if (*(long *)((long)&pIVar12->interfaceType + lVar27) == TypeInfo_IDisposable) {
          pVVar21 = pIVar16->vtable + *(int *)((long)&pIVar12->offset + lVar27);
          goto label_043cc5ad;
        }
        lVar27 = lVar27 + 0x10;
      } while ((ulong)uVar10 << 4 != lVar27);
    }
    pVVar21 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(source,TypeInfo_IDisposable,0);
label_043cc5ad:
    (*pVVar21->methodPtr)(source,pVVar21->method);
  }
  _Unwind_Resume(auVar30._0_8_);
}


// UI.InGameMenu$$HideAllMenus
// il2cpp: void UI_InGameMenu__HideAllMenus (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43c6f90

void UI_InGameMenu__HideAllMenus(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  UI_EmoteHandler_o *pUVar3;
  UI_BasePopup_o *pUVar4;
  UI_BasePopup_c *pUVar5;
  UI_ItemHandler_o *__this_00;
  System_Object_array *pSVar6;
  char *pcVar7;
  long lVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 *puVar9;
  bool_conflict bVar10;
  UI_TopLeftHUD_o *__this_05;
  UnityEngine_Behaviour_o *pUVar11;
  System_Collections_Generic_List_object__o *__this_06;
  UnityEngine_GameObject_o *__this_07;
  Il2CppClass *pIVar12;
  Il2CppObject *pIVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  UnityEngine_Transform_o *pUVar14;
  Il2CppClass *pIVar15;
  Il2CppType *pIVar16;
  Il2CppRGCTXData *__this_08;
  UnityEngine_GameObject_o *pUVar17;
  long *plVar18;
  Il2CppClass *title;
  uint uVar19;
  MethodInfo_255A0F0 *pMVar20;
  MethodInfo_24E7B40 *key;
  UI_InGameMenu_o *pUVar21;
  System_Collections_Generic_Dictionary_object__object__o *pSVar22;
  MethodInfo *pMVar23;
  Il2CppRGCTXData *pIVar24;
  float width;
  float in_XMM1_Da;
  undefined1 auVar25 [12];
  System_Collections_Generic_List_T__o *pSVar26;
  Il2CppMethodPointer pIVar27;
  UnityEngine_Component_o *__this_09;
  
  uVar19 = (uint)(__this->klass->vtable)._6_HideAllPopups.method;
  pUVar21 = __this;
  (*(__this->klass->vtable)._6_HideAllPopups.methodPtr)();
  pUVar3 = (__this->fields).EmoteHandler;
  if (pUVar3 != (UI_EmoteHandler_o *)0x0) {
    if (g_data_057ae3bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetEmoteWheel_b__25_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
      g_data_057ae3bf = '\x01';
    }
    pUVar4 = (pUVar3->fields)._emoteWheelPopup;
    pUVar21 = (UI_InGameMenu_o *)0x0;
    if (pUVar4 != (UI_BasePopup_o *)0x0) {
      pUVar5 = pUVar4->klass;
      uVar19 = (uint)(pUVar5->vtable)._22_Hide.method;
      (*(pUVar5->vtable)._22_Hide.methodPtr)();
      *(undefined1 *)&(pUVar3->fields).IsActive = 0;
      __this_00 = (__this->fields).ItemHandler;
      pUVar21 = (UI_InGameMenu_o *)0x0;
      if (__this_00 != (UI_ItemHandler_o *)0x0) {
        UI_ItemHandler__SetItemWheel(__this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    g_data_057ae3e8 = '\x01';
  }
  pUVar17 = (pUVar21->fields).TopLeftHud;
  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
    pMVar20 = MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD;
    __this_05 = (UI_TopLeftHUD_o *)UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_TopLeftHUD_GetComponent_TopLeftHUD);
    uVar19 = (uint)pMVar20;
    if (__this_05 != (UI_TopLeftHUD_o *)0x0) {
      UI_TopLeftHUD__ApplySettings(__this_05,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar11 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar17,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar11 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar11,uVar19 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3eb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3eb = '\x01';
  }
  key = MethodInfo_Canvas_GetComponent_Canvas;
  pUVar11 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar17,MethodInfo_Canvas_GetComponent_Canvas);
  if (pUVar11 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__get_enabled(pUVar11,(MethodInfo *)0x0);
    return;
  }
  width = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomPopup_GetComponent_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae3ec = '\x01';
  }
  __this_06 = (System_Collections_Generic_List_object__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
  pIVar15 = title;
  __this_07 = UI_ElementFactory__InstantiateAndSetupCustomPopup
                        ((UnityEngine_Transform_o *)__this_06,(System_String_o *)title,width,in_XMM1_Da,0,
                         (MethodInfo *)0x0);
  if (__this_07 != (UnityEngine_GameObject_o *)0x0) {
    pIVar15 = MethodInfo_CustomPopup_GetComponent_CustomPopup;
    pIVar12 = (Il2CppClass *)
              UnityEngine_GameObject__GetComponent_object_(__this_07,(MethodInfo_255A0F0 *)MethodInfo_CustomPopup_GetComponent_CustomPopup);
    lVar8 = MethodInfo_Void_Add;
    __this_06 = ((UnityEngine_Component_o *)(pUVar17 + 1))->monitor;
    if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_06->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this_06->fields)._items;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar19 = (__this_06->fields)._size;
        pIVar15 = pIVar12;
        if (uVar19 < (uint)pSVar6->max_length) {
          (__this_06->fields)._size = uVar19 + 1;
          pSVar6->m_Items[(int)uVar19] = (Il2CppObject *)pIVar12;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar19);
          pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar17 + 0x18))->fields).m_CachedPtr;
          if (pSVar22 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_043c724e:
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar22,(Il2CppObject *)key,(Il2CppObject *)pIVar12,MethodInfo_Void_set_Item);
            return;
          }
          __this_06 = (System_Collections_Generic_List_object__o *)0x0;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_06,(Il2CppObject *)pIVar12,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (((UnityEngine_Component_o *)(pUVar17 + 0x18))->fields).m_CachedPtr;
          __this_06 = (System_Collections_Generic_List_object__o *)0x0;
          if (pSVar22 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043c724e;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar12 = pIVar15;
  if (g_data_057ae3ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ed = '\x01';
  }
  pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)__this_06[0xe].fields._syncRoot;
  pIVar13 = (Il2CppObject *)0x0;
  if (pSVar22 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar22,(Il2CppObject *)pIVar15,MethodInfo_BasePopup_get_Item);
    if (pIVar13 == (Il2CppObject *)0x0) {
      return;
    }
    bVar2 = (TypeInfo_CustomPopup->_2).naturalAligment;
    if ((bVar2 <= (pIVar13->klass->_2).naturalAligment) &&
       ((pIVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomPopup)) {
      return;
    }
    pIVar12 = TypeInfo_CustomPopup;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Item);
    g_data_057ae3ee = '\x01';
  }
  pIVar15 = (Il2CppClass *)0x0;
  if (pIVar13[0x25].klass != (Il2CppClass *)0x0) {
    bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13[0x25].klass,
                        (Il2CppObject *)pIVar12,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar10 == '\0') {
      return;
    }
    pIVar15 = pIVar13[0x25].klass;
    if ((pIVar15 != (Il2CppClass *)0x0) &&
       (pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar15,
                             (Il2CppObject *)pIVar12,MethodInfo_BasePopup_get_Item), pIVar13 != (Il2CppObject *)0x0)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    g_data_057ae3ef = '\x01';
  }
  pMVar23 = (pIVar15->vtable + 0xf)[2].method;
  if (pMVar23 != (MethodInfo *)0x0) {
    source = System_Collections_Generic_Dictionary_object__object___get_Keys
                       ((System_Collections_Generic_Dictionary_object__object__o *)pMVar23,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_UI);
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae3f5 = '\x01';
  }
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar23,(MethodInfo *)0x0);
  pIVar13 = UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_CharacterPopup_CreateDefaultPopup_CharacterPopup);
  (pMVar23 + 2)[1].invoker_method = (InvokerMethod)pIVar13;
  il2cpp_runtime_helper_022b4080(&(pMVar23 + 2)[1].invoker_method);
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar23,(MethodInfo *)0x0);
  pIVar15 = (Il2CppClass *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_ScoreboardPopup_CreateDefaultPopup_ScoreboardPopup);
  (pMVar23 + 2)[1].klass = pIVar15;
  il2cpp_runtime_helper_022b4080(&(pMVar23 + 2)[1].klass);
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar23,(MethodInfo *)0x0);
  pIVar16 = (Il2CppType *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_MapPopup_CreateDefaultPopup_MapPopup);
  (pMVar23 + 2)[1].return_type = pIVar16;
  il2cpp_runtime_helper_022b4080(&(pMVar23 + 2)[1].return_type);
  pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pMVar23,(MethodInfo *)0x0);
  __this_08 = (Il2CppRGCTXData *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar14,0,MethodInfo_CutsceneDialoguePanel_CreateDefaultPopup_CutsceneDialogu);
  (pMVar23 + 3)[1].invoker_method = (InvokerMethod)__this_08;
  il2cpp_runtime_helper_022b4080(&(pMVar23 + 3)[1].invoker_method);
  if ((UnityEngine_Component_o *)(pMVar23 + 3)[1].invoker_method == (UnityEngine_Component_o *)0x0) {
label_043c7809:
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar17 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)(pMVar23 + 3)[1].invoker_method,(MethodInfo *)0x0);
    __this_08 = (Il2CppRGCTXData *)0x7;
    UI_ElementFactory__SetAnchor(pUVar17,7,7,(UnityEngine_Vector2_o)0x42c8000000000000,(MethodInfo *)0x0);
    lVar8 = MethodInfo_Void_Add;
    pIVar15 = pMVar23->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
    __this_08 = (Il2CppRGCTXData *)(pMVar23 + 2)[1].invoker_method;
    piVar1 = (int32_t *)((long)&(pIVar15->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar6 = ((System_Collections_Generic_List_object__Fields *)&(pIVar15->_1).name)->_items;
    if (pSVar6 == (System_Object_array *)0x0) goto label_043c7809;
    uVar19 = *(uint *)&(pIVar15->_1).namespaze;
    if ((uint)pSVar6->max_length <= uVar19) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_08,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      pIVar15 = pMVar23->klass;
      if (pIVar15 != (Il2CppClass *)0x0) goto label_043c7630;
      goto label_043c7809;
    }
    *(uint *)&(pIVar15->_1).namespaze = uVar19 + 1;
    pSVar6->m_Items[(int)uVar19] = (Il2CppObject *)__this_08;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar19);
    pIVar15 = pMVar23->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c7630:
    lVar8 = MethodInfo_Void_Add;
    __this_08 = (Il2CppRGCTXData *)(pMVar23 + 2)[1].klass;
    puVar9 = (undefined1 *)((long)&(pIVar15->_1).namespaze + 4);
    *(int *)puVar9 = *(int *)puVar9 + 1;
    pcVar7 = (pIVar15->_1).name;
    if (pcVar7 == (char *)0x0) goto label_043c7809;
    uVar19 = *(uint *)&(pIVar15->_1).namespaze;
    if (*(uint *)(pcVar7 + 0x18) <= uVar19) {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_08,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      pIVar15 = pMVar23->klass;
      if (pIVar15 != (Il2CppClass *)0x0) goto label_043c769b;
      goto label_043c7809;
    }
    *(uint *)&(pIVar15->_1).namespaze = uVar19 + 1;
    *(Il2CppRGCTXData **)(pcVar7 + (long)(int)uVar19 * 8 + 0x20) = __this_08;
    il2cpp_runtime_helper_022b4080(pcVar7 + (long)(int)uVar19 * 8 + 0x20);
    pIVar15 = pMVar23->klass;
    if (pIVar15 == (Il2CppClass *)0x0) goto label_043c7809;
label_043c769b:
    lVar8 = MethodInfo_Void_Add;
    __this_08 = (Il2CppRGCTXData *)(pMVar23 + 2)[1].return_type;
    puVar9 = (undefined1 *)((long)&(pIVar15->_1).namespaze + 4);
    *(int *)puVar9 = *(int *)puVar9 + 1;
    pcVar7 = (pIVar15->_1).name;
    if (pcVar7 == (char *)0x0) goto label_043c7809;
    uVar19 = *(uint *)&(pIVar15->_1).namespaze;
    if (uVar19 < *(uint *)(pcVar7 + 0x18)) {
      *(uint *)&(pIVar15->_1).namespaze = uVar19 + 1;
      *(Il2CppRGCTXData **)(pcVar7 + (long)(int)uVar19 * 8 + 0x20) = __this_08;
      il2cpp_runtime_helper_022b4080(pcVar7 + (long)(int)uVar19 * 8 + 0x20);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)__this_08,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    pIVar15 = TypeInfo_InGameManager;
    __this_08 = *(Il2CppRGCTXData **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_08 == (Il2CppRGCTXData *)0x0) {
      pMVar23[6].field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
label_043c777c:
      il2cpp_runtime_helper_022b4080(&pMVar23[6].field7_0x38);
      pIVar24 = pMVar23[5].field7_0x38.rgctx_data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_08 = (Il2CppRGCTXData *)0x0;
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pIVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x70), lVar8 != 0)) {
        if (*(char *)(lVar8 + 0x11) == '\0') {
          return;
        }
        bVar10 = UI_InGameMenu__AllowMap((UI_InGameMenu_o *)pIVar24,(MethodInfo *)__this_08);
        if ((char)bVar10 == '\0') {
          return;
        }
        if (pMVar23[5].field7_0x38.rgctx_data != (Il2CppRGCTXData *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pMVar23[5].field7_0x38.rgctx_data,1,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_043c7809;
    }
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= (__this_08->klass->_2).naturalAligment) &&
       ((__this_08->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      pMVar23[6].field7_0x38.rgctx_data = __this_08;
      if ((bVar2 <= (__this_08->klass->_2).naturalAligment) &&
         ((__this_08->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar15)) goto label_043c777c;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae3f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_08 = (Il2CppRGCTXData *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3f6 = '\x01';
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x58), lVar8 != 0)) && (*(long *)(lVar8 + 0xc0) != 0)) {
    if (*(char *)(*(long *)(lVar8 + 0xc0) + 0x11) != '\0') {
      return;
    }
    if (*(long *)(lVar8 + 200) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)pIVar15 == '\0') {
    UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_08,(MethodInfo *)pIVar15);
    *(undefined1 *)(__this_08 + 0x2f) = 1;
  }
  else {
    bVar10 = UI_InGameMenu__IsPauseMenuActive((UI_InGameMenu_o *)__this_08,(MethodInfo *)pIVar15);
    if ((char)bVar10 == '\0') {
      UI_InGameMenu__HideAllMenus((UI_InGameMenu_o *)__this_08,(MethodInfo *)pIVar15);
      pMVar23 = __this_08[0x22].method;
      pIVar24 = (Il2CppRGCTXData *)0x0;
      if (pMVar23 == (MethodInfo *)0x0) goto label_043c7930;
      (**(code **)(pMVar23->methodPointer + 0x288))(pMVar23,*(undefined8 *)(pMVar23->methodPointer + 0x290));
    }
  }
  if (g_data_057ae3ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    g_data_057ae3ea = '\x01';
  }
  pUVar11 = (UnityEngine_Behaviour_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_08,MethodInfo_Canvas_GetComponent_Canvas);
  pIVar24 = __this_08;
  if (pUVar11 != (UnityEngine_Behaviour_o *)0x0) {
    UnityEngine_Behaviour__set_enabled(pUVar11,1,(MethodInfo *)0x0);
    return;
  }
label_043c7930:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae3fa = '\x01';
  }
  pSVar26 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar27 = (Il2CppMethodPointer)0x0;
  __this_09 = (UnityEngine_Component_o *)0x0;
  if (pIVar24[0x3f].method == (MethodInfo *)0x0) {
label_043c7a44:
    auVar25 = il2cpp_runtime_helper_022b2c90();
    if (auVar25._8_4_ == 1) {
      plVar18 = (long *)__cxa_begin_catch(auVar25._0_8_);
      lVar8 = *plVar18;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar27;
      __this_03.fields._list = pSVar26;
      __this_03.fields._current = (Il2CppObject *)__this_09;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff00);
      if (lVar8 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar8);
    }
    __this_04.fields._8_8_ = pIVar27;
    __this_04.fields._list = pSVar26;
    __this_04.fields._current = (Il2CppObject *)__this_09;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff00);
    _Unwind_Resume(auVar25._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff00,
             (System_Collections_Generic_List_object__o *)pIVar24[0x3f].method,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
  do {
    __this_01.fields._8_8_ = pIVar27;
    __this_01.fields._list = pSVar26;
    __this_01.fields._current = (Il2CppObject *)__this_09;
    bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff00);
    if ((char)bVar10 == '\0') break;
    if (__this_09 == (UnityEngine_Component_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_043c7a3f:
      il2cpp_runtime_helper_022b2c90();
      goto label_043c7a44;
    }
    pUVar17 = UnityEngine_Component__get_gameObject(__this_09,(MethodInfo *)0x0);
    if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_043c7a3f;
    bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
  } while ((char)bVar10 == '\0');
  __this_02.fields._8_8_ = pIVar27;
  __this_02.fields._list = pSVar26;
  __this_02.fields._current = (Il2CppObject *)__this_09;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff00);
  return;
}


// UI.InGameMenu$$SetupPopups
// il2cpp: void UI_InGameMenu__SetupPopups (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43cc5f0

void UI_InGameMenu__SetupPopups(UI_InGameMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_IconPickPopup_o *__this_00;
  UI_BasePopup_array *pUVar3;
  code *pcVar4;
  long lVar5;
  System_Collections_Generic_List_BasePopup__o *__this_01;
  UnityEngine_Component_o *pUVar6;
  UI_BasePopup_o *pUVar7;
  UI_CustomAssetUrlPopup_o *pUVar8;
  UI_CustomAssetVideoUrlPopup_o *pUVar9;
  UnityEngine_GameObject_o *__this_02;
  UI_SkillTooltipPopup_o *pUVar10;
  System_Collections_Generic_List_BasePopup__c *pSVar11;
  System_Collections_Generic_List_object__o *pSVar12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_03;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  
  if (g_data_057ae40a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomAssetUrlPopup_GetComponent_CustomAssetUrlPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomAssetVideoUrlPopup_GetComponent_CustomAssetVideoUr);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PausePopup_GetComponent_PausePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomAssetUrlPopup_CreateDefaultPopup_CustomAssetUrlPop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomAssetVideoUrlPopup_CreateDefaultPopup_CustomAssetV);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PausePopup_CreateHeadedPanel_PausePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_CreateTooltipPopup_SkillTooltipPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkillTooltipPopup_GetComponent_SkillTooltipPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae40a = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  __this_01 = (System_Collections_Generic_List_BasePopup__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_01,0,MethodInfo_SettingsPopup_CreateHeadedPanel_SettingsPopup);
  if (pUVar6 != (UnityEngine_Component_o *)0x0) {
    pUVar7 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_BasePopup_GetComponent_BasePopup);
    (__this->fields)._settingsPopup = pUVar7;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._settingsPopup);
    __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_01,0,MethodInfo_PausePopup_CreateHeadedPanel_PausePopup)
    ;
    if (pUVar6 != (UnityEngine_Component_o *)0x0) {
      pUVar7 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_PausePopup_GetComponent_PausePopup);
      (__this->fields)._pausePopup = pUVar7;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._pausePopup);
      __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar6 = (UnityEngine_Component_o *)
               UI_ElementFactory__CreateHeadedPanel_object_
                         ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_CreateGameSelectMapPopup_CreateHeadedPanel_CreateGameSel);
      if (pUVar6 != (UnityEngine_Component_o *)0x0) {
        pUVar7 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_CreateGameSelectMapPopup_GetComponent_CreateGameSelectMa);
        (__this->fields)._selectMapPopup = pUVar7;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._selectMapPopup);
        __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar6 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateHeadedPanel_object_
                           ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_CreateGamePopup_CreateHeadedPanel_CreateGamePopup);
        if (pUVar6 != (UnityEngine_Component_o *)0x0) {
          pUVar7 = (UI_BasePopup_o *)UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_CreateGamePopup_GetComponent_CreateGamePopup);
          (__this->fields)._createGamePopup = pUVar7;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._createGamePopup);
          __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar6 = (UnityEngine_Component_o *)
                   UI_ElementFactory__CreateDefaultPopup_object_
                             ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_CustomAssetUrlPopup_CreateDefaultPopup_CustomAssetUrlPop);
          if (pUVar6 != (UnityEngine_Component_o *)0x0) {
            pUVar8 = (UI_CustomAssetUrlPopup_o *)
                     UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_CustomAssetUrlPopup_GetComponent_CustomAssetUrlPopup);
            (__this->fields)._customAssetUrlPopup = pUVar8;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._customAssetUrlPopup);
            __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pUVar6 = (UnityEngine_Component_o *)
                     UI_ElementFactory__CreateDefaultPopup_object_
                               ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_CustomAssetVideoUrlPopup_CreateDefaultPopup_CustomAssetV);
            if (pUVar6 != (UnityEngine_Component_o *)0x0) {
              pUVar9 = (UI_CustomAssetVideoUrlPopup_o *)
                       UnityEngine_Component__GetComponent_object_(pUVar6,MethodInfo_CustomAssetVideoUrlPopup_GetComponent_CustomAssetVideoUr);
              (__this->fields)._customAssetVideoUrlPopup = pUVar9;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._customAssetVideoUrlPopup);
              __this_00 = (__this->fields).IconPickPopup;
              __this_01 = (System_Collections_Generic_List_BasePopup__o *)0x0;
              if (__this_00 != (UI_IconPickPopup_o *)0x0) {
                __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                __this_02 = UI_ElementFactory__CreateTooltipPopup_object_
                                      ((UnityEngine_Transform_o *)__this_01,0,MethodInfo_GameObject_CreateTooltipPopup_SkillTooltipPopup);
                if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar10 = (UI_SkillTooltipPopup_o *)
                            UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_SkillTooltipPopup_GetComponent_SkillTooltipPopup);
                  (__this->fields).SkillTooltipPopup = pUVar10;
                  il2cpp_runtime_helper_022b4080(&(__this->fields).SkillTooltipPopup,pUVar10);
                  lVar5 = MethodInfo_Void_Add;
                  __this_01 = (__this->fields)._popups;
                  if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                    pUVar7 = (__this->fields)._settingsPopup;
                    piVar1 = &(__this_01->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar3 = (__this_01->fields)._items;
                    if (pUVar3 != (UI_BasePopup_array *)0x0) {
                      uVar2 = (__this_01->fields)._size;
                      if (uVar2 < (uint)pUVar3->max_length) {
                        (__this_01->fields)._size = uVar2 + 1;
                        pUVar3->m_Items[(int)uVar2] = pUVar7;
                        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                        __this_01 = (__this->fields)._popups;
                        lVar5 = MethodInfo_Void_Add;
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_01,
                                   (Il2CppObject *)pUVar7,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
                        ;
                        __this_01 = (__this->fields)._popups;
                        lVar5 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar5;
                      if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                        pUVar7 = (__this->fields)._pausePopup;
                        piVar1 = &(__this_01->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar3 = (__this_01->fields)._items;
                        if (pUVar3 != (UI_BasePopup_array *)0x0) {
                          uVar2 = (__this_01->fields)._size;
                          if (uVar2 < (uint)pUVar3->max_length) {
                            (__this_01->fields)._size = uVar2 + 1;
                            pUVar3->m_Items[(int)uVar2] = pUVar7;
                            il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                            __this_01 = (__this->fields)._popups;
                            lVar5 = MethodInfo_Void_Add;
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_01,
                                       (Il2CppObject *)pUVar7,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                            __this_01 = (__this->fields)._popups;
                            lVar5 = MethodInfo_Void_Add;
                          }
                          MethodInfo_Void_Add = lVar5;
                          if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                            pUVar7 = (__this->fields)._createGamePopup;
                            piVar1 = &(__this_01->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar3 = (__this_01->fields)._items;
                            if (pUVar3 != (UI_BasePopup_array *)0x0) {
                              uVar2 = (__this_01->fields)._size;
                              if (uVar2 < (uint)pUVar3->max_length) {
                                (__this_01->fields)._size = uVar2 + 1;
                                pUVar3->m_Items[(int)uVar2] = pUVar7;
                                il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                __this_01 = (__this->fields)._popups;
                                lVar5 = MethodInfo_Void_Add;
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_01,
                                           (Il2CppObject *)pUVar7,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                __this_01 = (__this->fields)._popups;
                                lVar5 = MethodInfo_Void_Add;
                              }
                              MethodInfo_Void_Add = lVar5;
                              if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                pUVar7 = (__this->fields)._selectMapPopup;
                                piVar1 = &(__this_01->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pUVar3 = (__this_01->fields)._items;
                                if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                  uVar2 = (__this_01->fields)._size;
                                  if (uVar2 < (uint)pUVar3->max_length) {
                                    (__this_01->fields)._size = uVar2 + 1;
                                    pUVar3->m_Items[(int)uVar2] = pUVar7;
                                    il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                    __this_01 = (__this->fields)._popups;
                                    lVar5 = MethodInfo_Void_Add;
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize
                                              ((System_Collections_Generic_List_object__o *)__this_01,
                                               (Il2CppObject *)pUVar7,
                                               *(MethodInfo_362C220 **)
                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                    __this_01 = (__this->fields)._popups;
                                    lVar5 = MethodInfo_Void_Add;
                                  }
                                  MethodInfo_Void_Add = lVar5;
                                  if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                    pUVar8 = (__this->fields)._customAssetUrlPopup;
                                    piVar1 = &(__this_01->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar3 = (__this_01->fields)._items;
                                    if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                      uVar2 = (__this_01->fields)._size;
                                      if (uVar2 < (uint)pUVar3->max_length) {
                                        (__this_01->fields)._size = uVar2 + 1;
                                        pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
                                        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                        __this_01 = (__this->fields)._popups;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)__this_01,
                                                   (Il2CppObject *)pUVar8,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                        __this_01 = (__this->fields)._popups;
                                        lVar5 = MethodInfo_Void_Add;
                                      }
                                      MethodInfo_Void_Add = lVar5;
                                      if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                        pUVar9 = (__this->fields)._customAssetVideoUrlPopup;
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
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)__this_01,
                                                       (Il2CppObject *)pUVar9,
                                                       *(MethodInfo_362C220 **)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                            __this_01 = (__this->fields)._popups;
                                            lVar5 = MethodInfo_Void_Add;
                                          }
                                          MethodInfo_Void_Add = lVar5;
                                          if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0
                                             ) {
                                            pUVar10 = (__this->fields).SkillTooltipPopup;
                                            piVar1 = &(__this_01->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pUVar3 = (__this_01->fields)._items;
                                            if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                              uVar2 = (__this_01->fields)._size;
                                              if (uVar2 < (uint)pUVar3->max_length) {
                                                (__this_01->fields)._size = uVar2 + 1;
                                                pUVar3->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar10;
                                                il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                __this_01 = (__this->fields)._allPausePopups;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)
                                                           __this_01,(Il2CppObject *)pUVar10,
                                                           *(MethodInfo_362C220 **)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                                          );
                                                __this_01 = (__this->fields)._allPausePopups;
                                                lVar5 = MethodInfo_Void_Add;
                                              }
                                              MethodInfo_Void_Add = lVar5;
                                              if (__this_01 !=
                                                  (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                pUVar7 = (__this->fields)._settingsPopup;
                                                piVar1 = &(__this_01->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pUVar3 = (__this_01->fields)._items;
                                                if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                  uVar2 = (__this_01->fields)._size;
                                                  if (uVar2 < (uint)pUVar3->max_length) {
                                                    (__this_01->fields)._size = uVar2 + 1;
                                                    pUVar3->m_Items[(int)uVar2] = pUVar7;
                                                    il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                    __this_01 = (__this->fields)._allPausePopups;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              ((System_Collections_Generic_List_object__o *)
                                                               __this_01,(Il2CppObject *)pUVar7,
                                                               *(MethodInfo_362C220 **)
                                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                                0x70));
                                                    __this_01 = (__this->fields)._allPausePopups;
                                                    lVar5 = MethodInfo_Void_Add;
                                                  }
                                                  MethodInfo_Void_Add = lVar5;
                                                  if (__this_01 !=
                                                      (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                    pUVar7 = (__this->fields)._pausePopup;
                                                    piVar1 = &(__this_01->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar3 = (__this_01->fields)._items;
                                                    if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (__this_01->fields)._size;
                                                      if (uVar2 < (uint)pUVar3->max_length) {
                                                        (__this_01->fields)._size = uVar2 + 1;
                                                        pUVar3->m_Items[(int)uVar2] = pUVar7;
                                                        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                        __this_01 = (__this->fields)._allPausePopups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)__this_01,(Il2CppObject *)pUVar7,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                    + 0x70));
                                                        __this_01 = (__this->fields)._allPausePopups;
                                                        lVar5 = MethodInfo_Void_Add;
                                                      }
                                                      MethodInfo_Void_Add = lVar5;
                                                      if (__this_01 !=
                                                          (System_Collections_Generic_List_BasePopup__o *)0x0)
                                                      {
                                                        pUVar7 = (__this->fields)._createGamePopup;
                                                        piVar1 = &(__this_01->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pUVar3 = (__this_01->fields)._items;
                                                        if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                          uVar2 = (__this_01->fields)._size;
                                                          if (uVar2 < (uint)pUVar3->max_length) {
                                                            (__this_01->fields)._size = uVar2 + 1;
                                                            pUVar3->m_Items[(int)uVar2] = pUVar7;
                                                            il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                            __this_01 = (__this->fields)._allPausePopups;
                                                            lVar5 = MethodInfo_Void_Add;
                                                          }
                                                          else {
                                                                                                                        
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar7,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._allPausePopups;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar8 = (__this->fields)._customAssetUrlPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar8;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             __this_01 = (__this->fields)._allPausePopups;
                                                             lVar5 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar8,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._allPausePopups;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar9 = (__this->fields)._customAssetVideoUrlPopup;
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
                                                             __this_01 = (__this->fields)._allPausePopups;
                                                             lVar5 = MethodInfo_Void_Add;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar9,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       __this_01 = (__this->fields)._allPausePopups;
                                                       lVar5 = MethodInfo_Void_Add;
                                                       }
                                                       MethodInfo_Void_Add = lVar5;
                                                       if (__this_01 !=
                                                           (System_Collections_Generic_List_BasePopup__o *)0x0
                                                          ) {
                                                         pUVar7 = (__this->fields)._selectMapPopup;
                                                         piVar1 = &(__this_01->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar3 = (__this_01->fields)._items;
                                                         if (pUVar3 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (__this_01->fields)._size;
                                                           if (uVar2 < (uint)pUVar3->max_length) {
                                                             (__this_01->fields)._size = uVar2 + 1;
                                                             pUVar3->m_Items[(int)uVar2] = pUVar7;
                                                             il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
                                                             return;
                                                           }
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,(Il2CppObject *)pUVar7,
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae40b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_KillFeedSmallPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_KillFeedSmallPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae40b = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_BasePopup__c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_KillFeedSmallPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_UI_KillFeedSmallPopup);
  __this_01[10].klass = pSVar11;
  il2cpp_runtime_helper_022b4080(__this_01 + 10,pSVar11);
  pSVar12 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor(pSVar12,MethodInfo_List_1_UI_BasePopup);
  *(System_Collections_Generic_List_object__o **)&__this_01[0xc].fields._size = pSVar12;
  il2cpp_runtime_helper_022b4080(&__this_01[0xc].fields._size,pSVar12);
  __this_03 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor(__this_03,MethodInfo_Dictionary_2_System_String_System_Single);
  __this_01[0xc].fields._syncRoot = (Il2CppObject *)__this_03;
  il2cpp_runtime_helper_022b4080(&__this_01[0xc].fields._syncRoot,__this_03);
  pSVar11 = (System_Collections_Generic_List_BasePopup__c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_bool);
  System_Collections_Generic_Dictionary_object__bool____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,MethodInfo_Dictionary_2_System_String_System_Boolean);
  __this_01[0xd].klass = pSVar11;
  il2cpp_runtime_helper_022b4080(__this_01 + 0xd,pSVar11);
  pSVar12 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar12,MethodInfo_List_1_System_String);
  __this_01[0xd].monitor = pSVar12;
  il2cpp_runtime_helper_022b4080(&__this_01[0xd].monitor,pSVar12);
  __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BasePopup);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_UI_BasePopup);
  __this_01[0xe].fields._syncRoot = (Il2CppObject *)__this_04;
  il2cpp_runtime_helper_022b4080(&__this_01[0xe].fields._syncRoot,__this_04);
  pSVar11 = (System_Collections_Generic_List_BasePopup__c *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (pSVar11 != (System_Collections_Generic_List_BasePopup__c *)0x0) {
    if (*(int *)&(pSVar11->_1).namespaze != 0) {
      (pSVar11->_1).byval_arg.data = "Kills";
      il2cpp_runtime_helper_022b4080(&(pSVar11->_1).byval_arg);
      if (1 < *(uint *)&(pSVar11->_1).namespaze) {
        *(undefined8 *)&(pSVar11->_1).byval_arg.bits = "Deaths";
        il2cpp_runtime_helper_022b4080(&(pSVar11->_1).byval_arg.bits);
        if (2 < *(uint *)&(pSVar11->_1).namespaze) {
          (pSVar11->_1).this_arg.data = "HighestDamage";
          il2cpp_runtime_helper_022b4080(&(pSVar11->_1).this_arg);
          if (3 < *(uint *)&(pSVar11->_1).namespaze) {
            *(undefined8 *)&(pSVar11->_1).this_arg.bits = "TotalDamage";
            il2cpp_runtime_helper_022b4080(&(pSVar11->_1).this_arg.bits);
            __this_01[0xf].klass = pSVar11;
            il2cpp_runtime_helper_022b4080(__this_01 + 0xf,pSVar11);
            if (g_data_057ae015 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
              g_data_057ae015 = '\x01';
            }
            pSVar12 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
            System_Collections_Generic_List_object____ctor(pSVar12,MethodInfo_List_1_UI_BasePopup);
            (__this_01->fields)._syncRoot = (Il2CppObject *)pSVar12;
            il2cpp_runtime_helper_022b4080(&(__this_01->fields)._syncRoot);
            UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


// UI.InGameMenu$$.ctor
// il2cpp: void UI_InGameMenu___ctor (UI_InGameMenu_o* __this, const MethodInfo* method);
// 0x43cce90

void UI_InGameMenu___ctor(UI_InGameMenu_o *__this,MethodInfo *method)

{
  code *pcVar1;
  System_Collections_Generic_List_KillFeedSmallPopup__o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  System_Collections_Generic_Dictionary_string__bool__o *__this_02;
  System_Collections_Generic_List_string__o *__this_03;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  System_String_array *pSVar3;
  
  if (g_data_057ae40b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Boolean);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_KillFeedSmallPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_KillFeedSmallPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae40b = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_KillFeedSmallPopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_KillFeedSmallPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_KillFeedSmallPopup);
  (__this->fields)._killFeedSmallPopups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._killFeedSmallPopups,__this_00);
  pSVar2 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._allPausePopups = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._allPausePopups,pSVar2);
  __this_01 = (System_Collections_Generic_Dictionary_string__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_System_String_System_Single);
  (__this->fields)._labelTimeLeft = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._labelTimeLeft,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_string__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_bool);
  System_Collections_Generic_Dictionary_object__bool____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,MethodInfo_Dictionary_2_System_String_System_Boolean);
  (__this->fields)._labelHasTimeLeft = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._labelHasTimeLeft,__this_02);
  __this_03 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String);
  (__this->fields).labelsToDeactivate = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this->fields).labelsToDeactivate,__this_03);
  __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BasePopup);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_UI_BasePopup);
  (__this->fields)._customPopups = (System_Collections_Generic_Dictionary_string__BasePopup__o *)__this_04;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._customPopups,__this_04);
  pSVar3 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = "Kills";
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = "Deaths";
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1);
        if (2 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[2] = "HighestDamage";
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 2);
          if (3 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[3] = "TotalDamage";
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 3);
            (__this->fields).trackedProperties = pSVar3;
            il2cpp_runtime_helper_022b4080(&(__this->fields).trackedProperties,pSVar3);
            if (g_data_057ae015 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
              il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
              g_data_057ae015 = '\x01';
            }
            pSVar2 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_UI_BasePopup);
            (__this->fields)._popups = pSVar2;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._popups);
            UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


