// Type: UI.ScoreboardPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ScoreboardPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardPopup.cs
// --------------------------------

// UI.ScoreboardPopup$$get_Title
// il2cpp: System_String_o* UI_ScoreboardPopup__get_Title (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d49350

System_String_o * UI_ScoreboardPopup__get_Title(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.ScoreboardPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_ScoreboardPopup__get_PopupAnimationType (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d49370

int32_t UI_ScoreboardPopup__get_PopupAnimationType(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.ScoreboardPopup$$get_MinFadeAlpha
// il2cpp: float UI_ScoreboardPopup__get_MinFadeAlpha (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d49380

float UI_ScoreboardPopup__get_MinFadeAlpha(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.ScoreboardPopup$$get_Width
// il2cpp: float UI_ScoreboardPopup__get_Width (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d49390

float UI_ScoreboardPopup__get_Width(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 1400.0;
}


// UI.ScoreboardPopup$$get_Height
// il2cpp: float UI_ScoreboardPopup__get_Height (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d493a0

float UI_ScoreboardPopup__get_Height(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.ScoreboardPopup$$get_CategoryPanel
// il2cpp: bool UI_ScoreboardPopup__get_CategoryPanel (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d493b0

bool UI_ScoreboardPopup__get_CategoryPanel(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.ScoreboardPopup$$get_CategoryButtons
// il2cpp: bool UI_ScoreboardPopup__get_CategoryButtons (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d493c0

bool UI_ScoreboardPopup__get_CategoryButtons(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.ScoreboardPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_ScoreboardPopup__get_DefaultCategoryPanel (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d493d0

System_String_o *
UI_ScoreboardPopup__get_DefaultCategoryPanel(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547ece == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Scoreboard");
    Il2CppMethodInitialized_07547ece = '\x01';
  }
  return "Scoreboard";
}


// UI.ScoreboardPopup$$Setup
// il2cpp: void UI_ScoreboardPopup__Setup (UI_ScoreboardPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d49400

void UI_ScoreboardPopup__Setup(UI_ScoreboardPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar3;
  System_String_o *pSVar4;
  System_Type_o *t;
  float width;
  float height;
  float headerHeight;
  float footerHeight;
  
  if (Il2CppMethodInitialized_07547ecf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameFooter");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.scoreboard.back");
    Il2CppMethodInitialized_07547ecf = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  width = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  height = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                     (__this,(__this->klass->vtable)._6_get_Height.method);
  headerHeight = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                           (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
  footerHeight = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                           (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell
                     (pUVar2,width,height,headerHeight,footerHeight,&(__this->fields).TopBar,
                      &(__this->fields).BottomBar,"inGameFooter",(MethodInfo *)0x0);
  (__this->fields)._view = pGVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view);
  (*(__this->klass->vtable)._44_SetupTopButtons.methodPtr)
            (__this,(__this->klass->vtable)._44_SetupTopButtons.method);
  pUVar2 = (__this->fields).BottomBar;
  pGVar3 = (__this->fields)._view;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgInGameView__Button
              (pGVar3,pUVar2,pSVar4,"ingame.scoreboard.back",(System_String_o *)0x0,220.0,44.0,3,
               (MethodInfo *)0x0);
    (*(__this->klass->vtable)._25_SetupPopups.methodPtr)
              (__this,(__this->klass->vtable)._25_SetupPopups.method);
    (*(__this->klass->vtable)._27_RegisterCategoryPanels.methodPtr)
              (__this,(__this->klass->vtable)._27_RegisterCategoryPanels.method);
    t = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    pSVar4 = UI_UIManager__GetLastcategory(t,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._categoryPanelTypes;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (__this_00,(Il2CppObject *)pSVar4,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Type_ContainsKey);
      if (!bVar1) {
        pSVar4 = (*(__this->klass->vtable)._19_get_DefaultCategoryPanel.methodPtr)
                           (__this,(__this->klass->vtable)._19_get_DefaultCategoryPanel.method);
      }
      (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
                (__this,pSVar4,(__this->klass->vtable)._28_SetCategoryPanel.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardPopup$$Show
// il2cpp: void UI_ScoreboardPopup__Show (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d49680

void UI_ScoreboardPopup__Show(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  UnityEngine_UI_Button_o *method_00;
  UnityEngine_GameObject_o *pUVar3;
  UI_ScoreboardScorePanel_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07547ed0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ScoreboardScorePanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"Scoreboard");
    Il2CppMethodInitialized_07547ed0 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)"Moderation",
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Item);
    if (method_00 != (UnityEngine_UI_Button_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)method_00,(MethodInfo *)0x0);
      bVar2 = UI_ScoreboardPopup__ShouldShowModerationTab((MethodInfo *)method_00);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar3,bVar2,(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._currentCategoryPanelName;
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          pMVar4 = (MethodInfo *)(pSVar1->fields)._value;
          bVar2 = System_String__op_Equality
                            ((System_String_o *)pMVar4,"Moderation",(MethodInfo *)0x0);
          if (bVar2) {
            bVar2 = UI_ScoreboardPopup__ShouldShowModerationTab(pMVar4);
            if (!bVar2) {
              (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
                        (__this,"Scoreboard",(__this->klass->vtable)._28_SetCategoryPanel.method);
            }
          }
          UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._currentCategoryPanelName;
          if (pSVar1 != (Settings_StringSetting_o *)0x0) {
            bVar2 = System_String__op_Equality
                              ((pSVar1->fields)._value,"Scoreboard",(MethodInfo *)0x0);
            if (!bVar2) {
              return;
            }
            pUVar3 = (__this->fields)._currentCategoryPanel;
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              pMVar4 = MethodInfo_UnityEngine_GameObject_GetComponent_ScoreboardScorePanel;
              __this_01 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar3,(MethodInfo_353B730 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_ScoreboardScorePanel
                                    );
              if (__this_01 != (UI_ScoreboardScorePanel_o *)0x0) {
                UI_ScoreboardScorePanel__Sync(__this_01,pMVar4);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardPopup$$SetupTopButtons
// il2cpp: void UI_ScoreboardPopup__SetupTopButtons (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d49b30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d49c6d: nop dword ptr [rax]

void UI_ScoreboardPopup__SetupTopButtons(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  bool value;
  Il2CppObject *pIVar2;
  ulong uVar3;
  System_String_o *item;
  System_String_o *pSVar4;
  UnityEngine_UI_Button_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  Il2CppClass *method_00;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_07547ed1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.scoreboard.tab");
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"GameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Scoreboard");
    Il2CppMethodInitialized_07547ed1 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  if (pIVar2 == (Il2CppObject *)0x0) {
label_05d49dbe:
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)"Scoreboard";
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = "GameInfo";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)"Moderation";
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        if (0 < (int)pIVar2[1].monitor) {
          uVar3 = (ulong)pIVar2[1].monitor & 0xffffffff;
          uVar5 = 0;
          do {
            if (uVar3 <= uVar5) goto label_05d49dc3;
            method_00 = (&pIVar2[2].klass)[uVar5];
            __this_00 = (__this->fields)._view;
            parent = (__this->fields).TopBar;
            pSVar4 = (__this->fields).LocaleCategory;
            item = System_String__Concat_52f0320
                             ((System_String_o *)method_00,"Button",(MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar4 = UI_UIManager__GetLocale
                               (pSVar4,"Top",item,"","",
                                (MethodInfo *)0x0);
            if (__this_00 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_05d49dbe;
            __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                  (__this_00,parent,pSVar4,"ingame.scoreboard.tab",(System_String_o *)method_00,
                                   240.0,44.0,3,(MethodInfo *)0x0);
            __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._topButtons;
            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto label_05d49dbe;
            System_Collections_Generic_Dictionary_object__object___Add
                      (__this_01,(Il2CppObject *)method_00,(Il2CppObject *)__this_02,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
            if (__this_02 == (UnityEngine_UI_Button_o *)0x0) goto label_05d49dbe;
            __this_03 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            bVar1 = System_String__op_Inequality
                              ((System_String_o *)method_00,"Moderation",(MethodInfo *)0x0);
            value = true;
            if (!bVar1) {
              value = UI_ScoreboardPopup__ShouldShowModerationTab((MethodInfo *)method_00);
            }
            if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto label_05d49dbe;
            UnityEngine_GameObject__SetActive(__this_03,value,(MethodInfo *)0x0);
            uVar5 = uVar5 + 1;
            uVar3 = (ulong)*(uint *)&pIVar2[1].monitor;
          } while ((long)uVar5 < (long)(int)*(uint *)&pIVar2[1].monitor);
        }
        return;
      }
    }
  }
label_05d49dc3:
  ThrowIndexOutOfRangeException();
}


// UI.ScoreboardPopup$$RegisterCategoryPanels
// il2cpp: void UI_ScoreboardPopup__RegisterCategoryPanels (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d49dd0

void UI_ScoreboardPopup__RegisterCategoryPanels(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547ed2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_ScoreboardInfoPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_ScoreboardModerationPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_ScoreboardScorePanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"GameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Scoreboard");
    Il2CppMethodInitialized_07547ed2 = '\x01';
  }
  handle = TypeRef_UI_ScoreboardScorePanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"Scoreboard",(Il2CppObject *)pSVar2,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_ScoreboardInfoPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"GameInfo",(Il2CppObject *)pSVar2,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UI_ScoreboardModerationPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)"Moderation",(Il2CppObject *)pSVar2,
                   (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardPopup$$SetTopButton
// il2cpp: void UI_ScoreboardPopup__SetTopButton (UI_ScoreboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d49f10
// eh: try 0x5d49fd3..0x5d4a058 -> pad 0x5d4a063 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d4a07c..0x5d4a081 -> pad 0x5d4a0a2 cleanup
// eh: try 0x5d4a0a5..0x5d4a0ad -> pad 0x5d4a0b5 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d4a05d: jmp 0x5d4a065
// asm:   0x5d4a05f: jmp 0x5d4a065
// asm:   0x5d4a061: jmp 0x5d4a065
// asm:   0x5d4a063: jmp 0x5d4a065
// asm:   0x5d4a065: mov rbx, rax
// asm:   0x5d4a068: cmp edx, 1
// asm:   0x5d4a06b: jne 0x5d4a0a5
// asm:   0x5d4a06d: mov rdi, rbx
// asm:   0x5d4a070: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d4a075: mov rbx, qword ptr [rax]
// asm:   0x5d4a078: mov qword ptr [rsp], rbx
// asm:   0x5d4a07c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d4a081: lea rax, [rip + 0x1545e08]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_Dispose
// asm:   0x5d4a088: mov rsi, qword ptr [rax]
// asm:   0x5d4a08b: lea rdi, [rsp + 0x10]
// asm:   0x5d4a090: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5d4a095: test rbx, rbx
// asm:   0x5d4a098: je 0x5d4a03f
// asm:   0x5d4a09a: mov rdi, rbx
// asm:   0x5d4a09d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d4a0a2: mov rbx, rax
// asm:   0x5d4a0a5: mov rdi, rsp
// asm:   0x5d4a0a8: call 0x2fdca50  ; il2cpp_runtime_helper_02fdca50()
// asm:   0x5d4a0ad: mov rdi, rbx
// asm:   0x5d4a0b0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d4a0b5: mov rdi, rax
// asm:   0x5d4a0b8: call 0x2ab61e0  ; __clang_call_terminate()

void UI_ScoreboardPopup__SetTopButton(UI_ScoreboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_01;
  Il2CppObject *a;
  Il2CppObject *button;
  bool bVar1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o SStack_58;
  
  if (Il2CppMethodInitialized_07547ed3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_Button_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_Button_get_Value);
    Il2CppMethodInitialized_07547ed3 = '\x01';
  }
  SStack_58.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_58.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_58.fields._version = 0;
  SStack_58.fields._index = 0;
  SStack_58.fields._getEnumeratorRetType = 0;
  SStack_58.fields._36_4_ = 0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            (&SStack_58,__this_00,
             (MethodInfo_4AAD970 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Button_GetEnumerator);
  while( true ) {
    bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&SStack_58,
                       (MethodInfo_4CE66D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_MoveNext);
    button = SStack_58.fields._current.fields.value;
    a = SStack_58.fields._current.fields.key;
    if (!bVar1) {
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&SStack_58,
                 (MethodInfo_4CE67F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_Dispose);
      return;
    }
    if ((UnityEngine_UI_Button_o *)SStack_58.fields._current.fields.value == (UnityEngine_UI_Button_o *)0x0)
    break;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)SStack_58.fields._current.fields.value,true,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._view;
    bVar1 = System_String__op_Equality((System_String_o *)a,name,(MethodInfo *)0x0);
    if (__this_01 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Game_AottgInGameView__SetButtonSelected
              (__this_01,(UnityEngine_UI_Button_o *)button,bVar1,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardPopup$$SetCategoryPanel
// il2cpp: void UI_ScoreboardPopup__SetCategoryPanel (UI_ScoreboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d4a0c0

void UI_ScoreboardPopup__SetCategoryPanel
               (UI_ScoreboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  System_String_o *b;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547ed4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"Scoreboard");
    Il2CppMethodInitialized_07547ed4 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    b = UI_BasePanel__GetCurrentCategoryName((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(name,b,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
  }
  method_00 = (MethodInfo *)name;
  bVar1 = System_String__op_Equality(name,"Moderation",(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = UI_ScoreboardPopup__ShouldShowModerationTab(method_00);
    if (!bVar1) {
      name = "Scoreboard";
    }
  }
  UI_HeadedPanel__SetCategoryPanel((UI_HeadedPanel_o *)__this,name,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup$$ShouldShowModerationTab
// il2cpp: bool UI_ScoreboardPopup__ShouldShowModerationTab (const MethodInfo* method);
// 0x5d497e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d49805: cmp byte ptr [rip + 0x17fb4b6], 0
// asm:   0x5d49833: jmp 0x5d498e0

bool UI_ScoreboardPopup__ShouldShowModerationTab(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_array *array;
  
  if (Il2CppMethodInitialized_07547ed5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"admin");
    il2cpp_codegen_initialize_runtime_metadata(&"moderator");
    Il2CppMethodInitialized_07547ed5 = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_07544cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->static_fields + 0x30);
  }
  if (cVar1 == '\0') {
    if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar3) {
      return true;
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    }
    else {
      array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    }
    if (array != (System_String_array *)0x0) {
      iVar4 = System_Array__IndexOf_object_
                        ((System_Object_array *)array,(Il2CppObject *)"admin",
                         (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
      if (iVar4 < 0) {
        iVar4 = System_Array__IndexOf_object_
                          ((System_Object_array *)array,(Il2CppObject *)"moderator",
                           (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
        return -1 < iVar4;
      }
      return true;
    }
  }
  return false;
}


// UI.ScoreboardPopup$$SetupPopups
// il2cpp: void UI_ScoreboardPopup__SetupPopups (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d4a190

void UI_ScoreboardPopup__SetupPopups(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_ScoreboardProfilePopup_o *pUVar7;
  UI_ScoreboardKickPopup_o *pUVar8;
  UI_ScoreboardMutePopup_o *pUVar9;
  
  if (Il2CppMethodInitialized_07547ed6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardKickPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardMutePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardProfilePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_07547ed6 = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar6,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardProfilePopup);
  (__this->fields)._profilePopup = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._profilePopup);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar6,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardKickPopup);
  (__this->fields)._kickPopup = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._kickPopup);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar6,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardMutePopup);
  (__this->fields)._mutePopup = pUVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mutePopup);
  pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
  pSVar3 = (__this->fields)._popups;
  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    pUVar7 = (__this->fields)._profilePopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 != (UI_BasePopup_array *)0x0) {
      uVar2 = (pSVar3->fields)._size;
      if (uVar2 < (uint)pUVar4->max_length) {
        (pSVar3->fields)._size = uVar2 + 1;
        pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar7;
        Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
      pSVar3 = (__this->fields)._popups;
      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        pUVar9 = (__this->fields)._mutePopup;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 != (UI_BasePopup_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
          pSVar3 = (__this->fields)._popups;
          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            pUVar8 = (__this->fields)._kickPopup;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (pSVar3->fields)._items;
            if (pUVar4 != (UI_BasePopup_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar4->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
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


// UI.ScoreboardPopup$$.ctor
// il2cpp: void UI_ScoreboardPopup___ctor (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x5d4a3b0

void UI_ScoreboardPopup___ctor(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547ed7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547ed7 = '\x01';
  }
  (__this->fields).LocaleCategory = "ScoreboardPopup";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


