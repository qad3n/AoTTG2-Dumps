// Type: UI.ScoreboardPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ScoreboardPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardPopup.cs
// --------------------------------

// UI.ScoreboardPopup$$get_Title
// il2cpp: System_String_o* UI_ScoreboardPopup__get_Title (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_ScoreboardPopup__get_Title(UI_ScoreboardPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.ScoreboardPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_ScoreboardPopup__get_PopupAnimationType (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_ScoreboardPopup__get_PopupAnimationType(UI_ScoreboardPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.ScoreboardPopup$$get_MinFadeAlpha
// il2cpp: float UI_ScoreboardPopup__get_MinFadeAlpha (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x1821779b0

float UI_ScoreboardPopup__get_MinFadeAlpha(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.ScoreboardPopup$$get_Width
// il2cpp: float UI_ScoreboardPopup__get_Width (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x18226b2e0

float UI_ScoreboardPopup__get_Width(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  return 1400.0;
}


// UI.ScoreboardPopup$$get_Height
// il2cpp: float UI_ScoreboardPopup__get_Height (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x1821bb440

float
UI_ScoreboardPopup__get_Height(UI_ScoreboardPopup_o* __this, MethodInfo* method)

{
  return 800.0;
}


// UI.ScoreboardPopup$$get_CategoryPanel
// il2cpp: bool UI_ScoreboardPopup__get_CategoryPanel (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_ScoreboardPopup__get_CategoryPanel(UI_ScoreboardPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.ScoreboardPopup$$get_CategoryButtons
// il2cpp: bool UI_ScoreboardPopup__get_CategoryButtons (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_ScoreboardPopup__get_CategoryButtons(UI_ScoreboardPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.ScoreboardPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_ScoreboardPopup__get_DefaultCategoryPanel (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x18226b2b0

System_String_o *
UI_ScoreboardPopup__get_DefaultCategoryPanel(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347356 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Scoreboard");
    Il2CppMethodInitialized_184347356 = '\x01';
  }
  return "Scoreboard";
}


// UI.ScoreboardPopup$$Setup
// il2cpp: void UI_ScoreboardPopup__Setup (UI_ScoreboardPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18226ace0

void UI_ScoreboardPopup__Setup(UI_ScoreboardPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Type__o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar3;
  System_String_o *pSVar4;
  System_Type_o *t;
  float width;
  float height;
  float headerHeight;
  float footerHeight;
  
  if (Il2CppMethodInitialized_184347357 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameFooter");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.scoreboard.back");
    Il2CppMethodInitialized_184347357 = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
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
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view,pGVar3);
  (*(__this->klass->vtable)._44_SetupTopButtons.methodPtr)
            (__this,(__this->klass->vtable)._44_SetupTopButtons.method);
  pGVar3 = (__this->fields)._view;
  pUVar2 = (__this->fields).BottomBar;
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
    __this_00 = (__this->fields)._categoryPanelTypes;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)pSVar4,
                         (MethodInfo_1455450 *)
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
// 0x18226b0f0

void UI_ScoreboardPopup__Show(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  UI_ScoreboardScorePanel_o *__this_02;
  
  if (Il2CppMethodInitialized_184347358 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ScoreboardScorePanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"Scoreboard");
    Il2CppMethodInitialized_184347358 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)"Moderation",
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Item),
     __this_01 != (UnityEngine_UI_Button_o *)0x0)) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    bVar2 = UI_ScoreboardPopup__ShouldShowModerationTab((MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar3,bVar2,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._currentCategoryPanelName;
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Moderation",(MethodInfo *)0x0);
        if ((bVar2) && (bVar2 = UI_ScoreboardPopup__ShouldShowModerationTab((MethodInfo *)0x0), !bVar2)) {
          (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
                    (__this,"Scoreboard",(__this->klass->vtable)._28_SetCategoryPanel.method);
        }
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._currentCategoryPanelName;
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Scoreboard",(MethodInfo *)0x0);
          if (!bVar2) {
            return;
          }
          pUVar3 = (__this->fields)._currentCategoryPanel;
          if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
             (__this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar3,(MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_ScoreboardScorePanel
                                    ), __this_02 != (UI_ScoreboardScorePanel_o *)0x0)) {
            UI_ScoreboardScorePanel__Sync(__this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardPopup$$SetupTopButtons
// il2cpp: void UI_ScoreboardPopup__SetupTopButtons (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x18226aa00

void UI_ScoreboardPopup__SetupTopButtons(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  UnityEngine_Transform_o *parent;
  Il2CppClass *str0;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *item;
  System_String_o *pSVar3;
  UnityEngine_UI_Button_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347359 == '\0') {
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
    Il2CppMethodInitialized_184347359 = '\x01';
  }
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  pSVar3 = "Scoreboard";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      pIVar2[2].klass = (Il2CppClass *)"Scoreboard";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar3);
      pSVar3 = "GameInfo";
      if (1 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[2].monitor = "GameInfo";
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,pSVar3);
        pSVar3 = "Moderation";
        if (2 < *(uint *)&pIVar2[1].monitor) {
          pIVar2[3].klass = (Il2CppClass *)"Moderation";
          Il2CppCodeGenWriteBarrier(&pIVar2[3].klass,pSVar3);
          uVar4 = 0;
          while( true ) {
            if (*(int *)&pIVar2[1].monitor <= (int)uVar4) {
              return;
            }
            if (*(uint *)&pIVar2[1].monitor <= uVar4) break;
            __this_00 = (__this->fields)._view;
            parent = (__this->fields).TopBar;
            pSVar3 = (__this->fields).LocaleCategory;
            str0 = (&pIVar2[2].klass)[(int)uVar4];
            item = System_String__Concat_1969e50
                             ((System_String_o *)str0,"Button",(MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar3 = UI_UIManager__GetLocale
                               (pSVar3,"Top",item,"","",
                                (MethodInfo *)0x0);
            if (__this_00 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) goto label_18226accc;
            __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__Button
                                  (__this_00,parent,pSVar3,"ingame.scoreboard.tab",(System_String_o *)str0,240.0
                                   ,44.0,3,(MethodInfo *)0x0);
            __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._topButtons;
            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto label_18226accc;
            System_Collections_Generic_Dictionary_object__object___Add
                      (__this_01,(Il2CppObject *)str0,(Il2CppObject *)__this_02,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
            if (__this_02 == (UnityEngine_UI_Button_o *)0x0) goto label_18226accc;
            __this_03 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            bVar1 = System_String__op_Inequality
                              ((System_String_o *)str0,"Moderation",(MethodInfo *)0x0);
            if (bVar1) {
              bVar1 = true;
            }
            else {
              bVar1 = UI_ScoreboardPopup__ShouldShowModerationTab((MethodInfo *)0x0);
            }
            if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto label_18226accc;
            UnityEngine_GameObject__SetActive(__this_03,bVar1,(MethodInfo *)0x0);
            uVar4 = uVar4 + 1;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_18226accc:
  ThrowNullReferenceException();
}


// UI.ScoreboardPopup$$RegisterCategoryPanels
// il2cpp: void UI_ScoreboardPopup__RegisterCategoryPanels (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x18226a400

void UI_ScoreboardPopup__RegisterCategoryPanels(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434735a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_ScoreboardInfoPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_ScoreboardModerationPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_ScoreboardScorePanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"GameInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Scoreboard");
    Il2CppMethodInitialized_18434735a = '\x01';
  }
  handle = TypeRef_UI_ScoreboardScorePanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"Scoreboard",(Il2CppObject *)pSVar2,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_ScoreboardInfoPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"GameInfo",(Il2CppObject *)pSVar2,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UI_ScoreboardModerationPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)"Moderation",(Il2CppObject *)pSVar2,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardPopup$$SetTopButton
// il2cpp: void UI_ScoreboardPopup__SetTopButton (UI_ScoreboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18226a620
// eh: try 0x18226a700..0x18226a7ac -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18226a774: mov rdx, qword ptr [rip + 0x1e4ef05]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_Dispose
// asm:   0x18226a77b: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18226a780: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18226a785: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18226a78a: test rcx, rcx
// asm:   0x18226a78d: jne 0x18226a7ac
// asm:   0x18226a7ac: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_ScoreboardPopup__SetTopButton(UI_ScoreboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Button__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_01;
  Il2CppObject *a;
  Il2CppObject *button;
  bool bVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_90;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_68;
  
  if (Il2CppMethodInitialized_18434735b == '\0') {
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
    Il2CppMethodInitialized_18434735b = '\x01';
  }
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  __this_00 = (__this->fields)._topButtons;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__Button__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_68,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Button_GetEnumerator);
    local_90.fields._dictionary = local_68.fields._dictionary;
    local_90.fields._version = local_68.fields._version;
    local_90.fields._index = local_68.fields._index;
    local_90.fields._current.fields.key = local_68.fields._current.fields.key;
    local_90.fields._current.fields.value = local_68.fields._current.fields.value;
    local_90.fields._getEnumeratorRetType = local_68.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_68.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_90,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_MoveNext);
      button = local_90.fields._current.fields.value;
      a = local_90.fields._current.fields.key;
      if (!bVar1) {
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_90,
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Button_Dispose);
        return;
      }
      if ((UnityEngine_UI_Button_o *)local_90.fields._current.fields.value == (UnityEngine_UI_Button_o *)0x0)
      break;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)local_90.fields._current.fields.value,true,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.ScoreboardPopup$$SetCategoryPanel
// il2cpp: void UI_ScoreboardPopup__SetCategoryPanel (UI_ScoreboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18226a540

void UI_ScoreboardPopup__SetCategoryPanel
               (UI_ScoreboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434735c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"Scoreboard");
    Il2CppMethodInitialized_18434735c = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._currentCategoryPanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = UI_BasePanel__GetCurrentCategoryName((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(name,pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
  }
  bVar1 = System_String__op_Equality(name,"Moderation",(MethodInfo *)0x0);
  if ((!bVar1) ||
     (bVar1 = UI_ScoreboardPopup__ShouldShowModerationTab((MethodInfo *)0x0), pSVar2 = "Scoreboard",
     bVar1)) {
    pSVar2 = name;
  }
  UI_HeadedPanel__SetCategoryPanel((UI_HeadedPanel_o *)__this,pSVar2,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardPopup$$ShouldShowModerationTab
// il2cpp: bool UI_ScoreboardPopup__ShouldShowModerationTab (const MethodInfo* method);
// 0x18226afa0

bool UI_ScoreboardPopup__ShouldShowModerationTab(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_array *array;
  
  if (Il2CppMethodInitialized_18434735d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"admin");
    il2cpp_codegen_initialize_runtime_metadata(&"moderator");
    Il2CppMethodInitialized_18434735d = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_184344524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344524 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode != false) {
    return false;
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    array = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    if (array == (System_String_array *)0x0) {
      return false;
    }
    iVar2 = System_Array__IndexOf_object_
                      ((System_Object_array *)array,(Il2CppObject *)"admin",
                       (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
    if (iVar2 < 0) {
      iVar2 = System_Array__IndexOf_object_
                        ((System_Object_array *)array,(Il2CppObject *)"moderator",
                         (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
      return (bool)((byte)((uint)iVar2 >> 0x1f) ^ 1);
    }
  }
  return true;
}


// UI.ScoreboardPopup$$SetupPopups
// il2cpp: void UI_ScoreboardPopup__SetupPopups (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x18226a7c0

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
  
  if (Il2CppMethodInitialized_18434735e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardKickPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardMutePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardProfilePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_18434735e = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar6,false,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardProfilePopup);
  (__this->fields)._profilePopup = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._profilePopup,pUVar7);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar6,false,
                      (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardKickPopup
                     );
  (__this->fields)._kickPopup = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._kickPopup,pUVar8);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar6,false,
                      (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_ScoreboardMutePopup
                     );
  (__this->fields)._mutePopup = pUVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mutePopup,pUVar9);
  pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
  pSVar3 = (__this->fields)._popups;
  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    pUVar7 = (__this->fields)._profilePopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18226a9ec;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18226a9f2;
      pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar7;
      Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar7,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_18226a9ec;
    pUVar9 = (__this->fields)._mutePopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar3->fields)._items;
    if (pUVar4 == (UI_BasePopup_array *)0x0) goto label_18226a9ec;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar4->max_length <= uVar2) goto label_18226a9f2;
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
    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar8 = (__this->fields)._kickPopup;
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
          pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar8;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,pUVar8);
          return;
        }
label_18226a9f2:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_18226a9ec:
  ThrowNullReferenceException();
}


// UI.ScoreboardPopup$$.ctor
// il2cpp: void UI_ScoreboardPopup___ctor (UI_ScoreboardPopup_o* __this, const MethodInfo* method);
// 0x18226b250

void UI_ScoreboardPopup___ctor(UI_ScoreboardPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434735f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_18434735f = '\x01';
  }
  (__this->fields).LocaleCategory = "ScoreboardPopup";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory,"ScoreboardPopup");
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


