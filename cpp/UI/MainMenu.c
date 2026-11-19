// Type: UI.MainMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MainMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainMenu.cs
// --------------------------------

// UI.MainMenu.<WaitAndChangeBackground>d__16$$.ctor
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__16___ctor (UI_MainMenu__WaitAndChangeBackground_d__16_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d58290

void UI_MainMenu__WaitAndChangeBackground_d__16___ctor
               (UI_MainMenu__WaitAndChangeBackground_d__16_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MainMenu.<WaitAndChangeBackground>d__16$$System.IDisposable.Dispose
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__16__System_IDisposable_Dispose (UI_MainMenu__WaitAndChangeBackground_d__16_o* __this, const MethodInfo* method);
// 0x5d58420

void UI_MainMenu__WaitAndChangeBackground_d__16__System_IDisposable_Dispose
               (UI_MainMenu__WaitAndChangeBackground_d__16_o *__this,MethodInfo *method)

{
  return;
}


// UI.MainMenu.<WaitAndChangeBackground>d__16$$MoveNext
// il2cpp: bool UI_MainMenu__WaitAndChangeBackground_d__16__MoveNext (UI_MainMenu__WaitAndChangeBackground_d__16_o* __this, const MethodInfo* method);
// 0x5d58430

bool UI_MainMenu__WaitAndChangeBackground_d__16__MoveNext
               (UI_MainMenu__WaitAndChangeBackground_d__16_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MainMenu_o *pUVar2;
  UI_MainBackgroundMenu_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  UnityEngine_WaitForSeconds_o *__this_02;
  
  if (Il2CppMethodInitialized_07547f44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07547f44 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pUVar2 == (UI_MainMenu_o *)0x0) ||
       (__this_00 = (pUVar2->fields)._backgroundMenu, __this_00 == (UI_MainBackgroundMenu_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UI_MainBackgroundMenu__ChangeMainBackground(__this_00,method);
    __this_01 = (pUVar2->fields)._tipPanel;
    if (__this_01 != (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,true,(MethodInfo *)0x0);
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_02,20.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  (__this->fields).__1__state = 1;
  return true;
}


// UI.MainMenu.<WaitAndChangeBackground>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MainMenu__WaitAndChangeBackground_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MainMenu__WaitAndChangeBackground_d__16_o* __this, const MethodInfo* method);
// 0x5d58500

Il2CppObject *
UI_MainMenu__WaitAndChangeBackground_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_MainMenu__WaitAndChangeBackground_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainMenu.<WaitAndChangeBackground>d__16$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MainMenu__WaitAndChangeBackground_d__16__System_Collections_IEnumerator_Reset (UI_MainMenu__WaitAndChangeBackground_d__16_o* __this, const MethodInfo* method);
// 0x5d58510

void UI_MainMenu__WaitAndChangeBackground_d__16__System_Collections_IEnumerator_Reset
               (UI_MainMenu__WaitAndChangeBackground_d__16_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_MainMenu_WaitAndChangeBackground_d__16_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.MainMenu.<WaitAndChangeBackground>d__16$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MainMenu__WaitAndChangeBackground_d__16__System_Collections_IEnumerator_get_Current (UI_MainMenu__WaitAndChangeBackground_d__16_o* __this, const MethodInfo* method);
// 0x5d58550

Il2CppObject *
UI_MainMenu__WaitAndChangeBackground_d__16__System_Collections_IEnumerator_get_Current
          (UI_MainMenu__WaitAndChangeBackground_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainMenu$$Setup
// il2cpp: void UI_MainMenu__Setup (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d57ad0

void UI_MainMenu__Setup(UI_MainMenu_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *a;
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *pGVar3;
  
  if (Il2CppMethodInitialized_07547f3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackgroundInfo");
    Il2CppMethodInitialized_07547f3c = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  a = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pSVar2 = ApplicationManagers_ResourceManager__LoadText(pSVar2,"MainBackgroundInfo",(MethodInfo *)0x0);
    method_00 = (MethodInfo *)SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
    TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo = (SimpleJSONFixed_JSONNode_o *)method_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo);
  }
  UI_MainMenu__SetupMainBackground(__this,method_00);
  pGVar3 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMainMenu((MethodInfo *)0x0);
  (__this->fields)._tipPanel = pGVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tipPanel);
  return;
}


// UI.MainMenu$$SetupMainBackground
// il2cpp: void UI_MainMenu__SetupMainBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d57c20

void UI_MainMenu__SetupMainBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_MainBackgroundMenu_o *pUVar1;
  UI_MainMenu__WaitAndChangeBackground_d__16_o *__this_00;
  
  if (Il2CppMethodInitialized_07547f3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateMenu_MainBackgroundMenu);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/BackgroundMenu");
    Il2CppMethodInitialized_07547f3d = '\x01';
  }
  pUVar1 = UI_ElementFactory__CreateMenu_object_
                     ("Prefabs/Panels/BackgroundMenu",
                      (MethodInfo_34D73E0 *)MethodInfo_UI_ElementFactory_CreateMenu_MainBackgroundMenu);
  (__this->fields)._backgroundMenu = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundMenu);
  pUVar1 = (__this->fields)._backgroundMenu;
  if (pUVar1 == (UI_MainBackgroundMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._4_Setup.methodPtr)(pUVar1,(pUVar1->klass->vtable)._4_Setup.method);
  if (Il2CppMethodInitialized_07547f41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu_WaitAndChangeBackground_d__16);
    Il2CppMethodInitialized_07547f41 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MainMenu_WaitAndChangeBackground_d__16);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.MainMenu$$ShowMultiplayerRoomList
// il2cpp: void UI_MainMenu__ShowMultiplayerRoomList (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d57db0

void UI_MainMenu__ShowMultiplayerRoomList(UI_MainMenu_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_07547f3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&"room-list");
    Il2CppMethodInitialized_07547f3e = '\x01';
  }
  (*(__this->klass->vtable)._7_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._7_HideAllPopups.method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  Gisketch_Aottg2UI_Game_AottgRoomList__Reset((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Sync((MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (pGVar1->fields)._Screens_k__BackingField;
  if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
            (__this_00,"room-list",(MethodInfo *)0x0);
  return;
}


// UI.MainMenu$$ShowMultiplayerServerSelect
// il2cpp: void UI_MainMenu__ShowMultiplayerServerSelect (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d57e50

void UI_MainMenu__ShowMultiplayerServerSelect(UI_MainMenu_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_07547f3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&"server-select");
    Il2CppMethodInitialized_07547f3f = '\x01';
  }
  (*(__this->klass->vtable)._7_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._7_HideAllPopups.method);
  Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Sync((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
  }
  Gisketch_Aottg2UI_Game_AottgQuickPlay__Prewarm((MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (pGVar1->fields)._Screens_k__BackingField;
  if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
            (__this_00,"server-select",(MethodInfo *)0x0);
  return;
}


// UI.MainMenu$$OpenIntroAction
// il2cpp: void UI_MainMenu__OpenIntroAction (UI_MainMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d57ef0

void UI_MainMenu__OpenIntroAction(UI_MainMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_MainMenu__OnIntroButtonClick(__this,name,method);
  return;
}


// UI.MainMenu$$ClosePopups
// il2cpp: void UI_MainMenu__ClosePopups (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d58070

void UI_MainMenu__ClosePopups(UI_MainMenu_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._7_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._7_HideAllPopups.method);
  return;
}


// UI.MainMenu$$SetupPopups
// il2cpp: void UI_MainMenu__SetupPopups (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d58090

void UI_MainMenu__SetupPopups(UI_MainMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Component_o *pUVar7;
  UI_BasePopup_o *pUVar8;
  
  if (Il2CppMethodInitialized_07547f40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_LeaderboardPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateHeadedPanel_QuestPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_07547f40 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar6,false,
                      (MethodInfo_34D7370 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_LeaderboardPopup);
  if (pUVar7 != (UnityEngine_Component_o *)0x0) {
    pUVar8 = (UI_BasePopup_o *)
             UnityEngine_Component__GetComponent_object_
                       (pUVar7,(MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup);
    (__this->fields)._leaderboardPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._leaderboardPopup);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar6,false,
                        (MethodInfo_34D7370 *)MethodInfo_UI_ElementFactory_CreateHeadedPanel_QuestPopup);
    if (pUVar7 != (UnityEngine_Component_o *)0x0) {
      pUVar8 = (UI_BasePopup_o *)
               UnityEngine_Component__GetComponent_object_
                         (pUVar7,(MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BasePopup
                         );
      (__this->fields)._questPopup = pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._questPopup);
      pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
      pSVar3 = (__this->fields)._popups;
      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar8 = (__this->fields)._leaderboardPopup;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 != (UI_BasePopup_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = pUVar8;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
          pSVar3 = (__this->fields)._popups;
          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar8 = (__this->fields)._questPopup;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar3->fields)._items;
            if (pUVar4 != (UI_BasePopup_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar4->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar4->m_Items[(int)uVar2] = pUVar8;
                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar8,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MainMenu$$SetupIntroPanel
// il2cpp: void UI_MainMenu__SetupIntroPanel (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d57d10

void UI_MainMenu__SetupIntroPanel(UI_MainMenu_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowMainMenu((MethodInfo *)0x0);
  (__this->fields)._tipPanel = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tipPanel);
  return;
}


// UI.MainMenu$$ChangeMainBackground
// il2cpp: void UI_MainMenu__ChangeMainBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d58250

void UI_MainMenu__ChangeMainBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_MainBackgroundMenu_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *__this_01;
  
  __this_00 = (__this->fields)._backgroundMenu;
  if (__this_00 == (UI_MainBackgroundMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MainBackgroundMenu__ChangeMainBackground(__this_00,method);
  __this_01 = (__this->fields)._tipPanel;
  if (__this_01 == (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip(__this_01,true,(MethodInfo *)0x0);
  return;
}


// UI.MainMenu$$WaitAndChangeBackground
// il2cpp: System_Collections_IEnumerator_o* UI_MainMenu__WaitAndChangeBackground (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d57d40

System_Collections_IEnumerator_o *
UI_MainMenu__WaitAndChangeBackground(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_MainMenu__WaitAndChangeBackground_d__16_o *__this_00;
  
  if (Il2CppMethodInitialized_07547f41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu_WaitAndChangeBackground_d__16);
    Il2CppMethodInitialized_07547f41 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MainMenu_WaitAndChangeBackground_d__16);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MainMenu$$IsPopupActive
// il2cpp: bool UI_MainMenu__IsPopupActive (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d582b0
// eh: try 0x5d58354..0x5d583a9 -> pad 0x5d583b0 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d583c8..0x5d583cd -> pad 0x5d583f3 cleanup
// eh: try 0x5d583f6..0x5d58400 -> pad 0x5d58408 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d583ae: jmp 0x5d583b0
// asm:   0x5d583b0: mov rbx, rax
// asm:   0x5d583b3: cmp edx, 1
// asm:   0x5d583b6: jne 0x5d583f6
// asm:   0x5d583b8: mov rdi, rbx
// asm:   0x5d583bb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d583c0: mov r14, qword ptr [rax]
// asm:   0x5d583c3: mov qword ptr [rsp + 0x20], r14
// asm:   0x5d583c8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d583cd: lea rax, [rip + 0x153538c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x5d583d4: mov rsi, qword ptr [rax]
// asm:   0x5d583d7: mov rdi, rsp
// asm:   0x5d583da: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d583df: xor ebx, ebx
// asm:   0x5d583e1: mov ebp, 0
// asm:   0x5d583e6: test r14, r14
// asm:   0x5d583e9: je 0x5d58393
// asm:   0x5d583eb: mov rdi, r14
// asm:   0x5d583ee: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d583f3: mov rbx, rax
// asm:   0x5d583f6: lea rdi, [rsp + 0x20]
// asm:   0x5d583fb: call 0x2fdcae0  ; il2cpp_runtime_helper_02fdcae0()
// asm:   0x5d58400: mov rdi, rbx
// asm:   0x5d58403: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d58408: mov rdi, rax
// asm:   0x5d5840b: call 0x2ab61e0  ; __clang_call_terminate()

bool UI_MainMenu__IsPopupActive(UI_MainMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_07547f42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_07547f42 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
  local_28 = 0;
  local_20 = (undefined1 *)&local_48;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    if (!bVar1) {
      iVar2 = 5;
      goto label_05d58381;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
  } while (*(char *)&local_48.fields._current[9].klass == '\0');
  iVar2 = 4;
label_05d58381:
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
  return iVar2 == 4 && bVar1;
}


// UI.MainMenu$$OnIntroButtonClick
// il2cpp: void UI_MainMenu__OnIntroButtonClick (UI_MainMenu_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d57f00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d57ff2: jmp 0x5d5806b

void UI_MainMenu__OnIntroButtonClick(UI_MainMenu_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  UI_ExternalLinkPopup_o *__this_00;
  bool bVar2;
  MethodInfo *pMVar3;
  
  pMVar3 = (MethodInfo *)name;
  if (Il2CppMethodInitialized_07547f43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"https://www.patreon.com/aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"QuestButton");
    il2cpp_codegen_initialize_runtime_metadata(&"LeaderboardButton");
    il2cpp_codegen_initialize_runtime_metadata(&"PatreonButton");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerButton");
    Il2CppMethodInitialized_07547f43 = '\x01';
  }
  bVar2 = UI_MainMenu__IsPopupActive(__this,pMVar3);
  (*(__this->klass->vtable)._7_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._7_HideAllPopups.method);
  if ((bVar2) &&
     (bVar2 = System_String__op_Equality((__this->fields)._lastButtonClicked,name,(MethodInfo *)0x0), bVar2))
  {
    return;
  }
  (__this->fields)._lastButtonClicked = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastButtonClicked);
  pMVar3 = (MethodInfo *)"MultiplayerButton";
  bVar2 = System_String__op_Equality(name,"MultiplayerButton",(MethodInfo *)0x0);
  if (bVar2) {
    UI_MainMenu__ShowMultiplayerServerSelect(__this,pMVar3);
    return;
  }
  bVar2 = System_String__op_Equality(name,"QuestButton",(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._questPopup;
  }
  else {
    bVar2 = System_String__op_Equality(name,"LeaderboardButton",(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__op_Equality(name,"PatreonButton",(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      __this_00 = (__this->fields).ExternalLinkPopup;
      if (__this_00 != (UI_ExternalLinkPopup_o *)0x0) {
        UI_ExternalLinkPopup__Show(__this_00,"https://www.patreon.com/aottg2",(MethodInfo *)0x0);
        return;
      }
      goto label_05d5806b;
    }
    pUVar1 = (__this->fields)._leaderboardPopup;
  }
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
    return;
  }
label_05d5806b:
  ThrowNullReferenceException();
}


// UI.MainMenu$$.ctor
// il2cpp: void UI_MainMenu___ctor (UI_MainMenu_o* __this, const MethodInfo* method);
// 0x5d58410

void UI_MainMenu___ctor(UI_MainMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


