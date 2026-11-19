// Type: UI.CustomAssetVideoUrlPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/CustomAssetVideoUrlPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.CustomAssetVideoUrlPopup$$get_Title
// il2cpp: System_String_o* UI_CustomAssetVideoUrlPopup__get_Title (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1c2e0

System_String_o *
UI_CustomAssetVideoUrlPopup__get_Title(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547da7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_07547da7 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CustomAssetVideoUrlPopup$$get_Width
// il2cpp: float UI_CustomAssetVideoUrlPopup__get_Width (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1c340

float UI_CustomAssetVideoUrlPopup__get_Width(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.CustomAssetVideoUrlPopup$$get_Height
// il2cpp: float UI_CustomAssetVideoUrlPopup__get_Height (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1c350

float UI_CustomAssetVideoUrlPopup__get_Height(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.CustomAssetVideoUrlPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_VerticalPadding (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1c360

int32_t UI_CustomAssetVideoUrlPopup__get_VerticalPadding
                  (UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CustomAssetVideoUrlPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_HorizontalPadding (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1c370

int32_t UI_CustomAssetVideoUrlPopup__get_HorizontalPadding
                  (UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CustomAssetVideoUrlPopup$$get_PanelAlignment
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_PanelAlignment (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1c380

int32_t UI_CustomAssetVideoUrlPopup__get_PanelAlignment
                  (UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.CustomAssetVideoUrlPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_EscapeBehavior (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1c390

int32_t UI_CustomAssetVideoUrlPopup__get_EscapeBehavior
                  (UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.CustomAssetVideoUrlPopup$$get_ScrollBar
// il2cpp: bool UI_CustomAssetVideoUrlPopup__get_ScrollBar (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1c3a0

bool UI_CustomAssetVideoUrlPopup__get_ScrollBar(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.CustomAssetVideoUrlPopup$$Setup
// il2cpp: void UI_CustomAssetVideoUrlPopup__Setup (UI_CustomAssetVideoUrlPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d1c3b0

void UI_CustomAssetVideoUrlPopup__Setup
               (UI_CustomAssetVideoUrlPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_07547da8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547da8 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  iVar2 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,iVar2,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar3 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar3 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar4,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_2,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  __this_02 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,
                         (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,4,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (__this_02,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._label = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
    pUVar5 = (__this->fields)._label;
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar6 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar5,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      fVar7 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                        (__this,(__this->klass->vtable)._33_GetWidth.method);
      iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
      if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (pUVar6,fVar7 - (float)(iVar2 * 2),(pUVar6->klass->vtable)._36_set_preferredWidth.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomAssetVideoUrlPopup$$Show
// il2cpp: void UI_CustomAssetVideoUrlPopup__Show (UI_CustomAssetVideoUrlPopup_o* __this, System_Collections_Generic_List_string__o* urls, const MethodInfo* method);
// 0x5d1c710
// eh: try 0x5d1c8f4..0x5d1c9e8 -> pad 0x5d1c9f8 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d1ca10..0x5d1ca15 -> pad 0x5d1ca38 cleanup
// eh: try 0x5d1ca3b..0x5d1ca45 -> pad 0x5d1ca4d catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1c9f2: jmp 0x5d1c9f8
// asm:   0x5d1c9f4: jmp 0x5d1c9f8
// asm:   0x5d1c9f6: jmp 0x5d1c9f8
// asm:   0x5d1c9f8: mov rbx, rax
// asm:   0x5d1c9fb: cmp edx, 1
// asm:   0x5d1c9fe: jne 0x5d1ca3b
// asm:   0x5d1ca00: mov rdi, rbx
// asm:   0x5d1ca03: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d1ca08: mov rbx, qword ptr [rax]
// asm:   0x5d1ca0b: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d1ca10: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d1ca15: lea rax, [rip + 0x15720dc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d1ca1c: mov rsi, qword ptr [rax]
// asm:   0x5d1ca1f: mov rdi, rsp
// asm:   0x5d1ca22: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d1ca27: test rbx, rbx
// asm:   0x5d1ca2a: je 0x5d1c93c
// asm:   0x5d1ca30: mov rdi, rbx
// asm:   0x5d1ca33: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d1ca38: mov rbx, rax
// asm:   0x5d1ca3b: lea rdi, [rsp + 0x18]
// asm:   0x5d1ca40: call 0x2fdbec0  ; il2cpp_runtime_helper_02fdbec0()
// asm:   0x5d1ca45: mov rdi, rbx
// asm:   0x5d1ca48: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d1ca4d: mov rdi, rax
// asm:   0x5d1ca50: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CustomAssetVideoUrlPopup__Show
               (UI_CustomAssetVideoUrlPopup_o *__this,System_Collections_Generic_List_string__o *urls,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppObject *value;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar3;
  System_Text_StringBuilder_o *pSVar4;
  UnityEngine_RectTransform_o *pUVar5;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07547da9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"VideoUrlPrompt");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAsset");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547da9 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Done = false;
  (__this->fields).Result = 0;
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_UI_Text__set_supportRichText(pUVar1,false,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocale
                       ("InGameMenu","CustomAsset","VideoUrlPrompt",
                        "","",(MethodInfo *)0x0);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      pSVar4 = System_Text_StringBuilder__Append_530ed80(__this_00,pSVar3,(MethodInfo *)0x0);
      if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_530ed80(pSVar4,"\n",(MethodInfo *)0x0);
        if (urls != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    (&local_58,(System_Collections_Generic_List_object__o *)urls,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          local_40 = 0;
          local_38 = (undefined1 *)&local_58;
          while( true ) {
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
            value = local_58.fields._current;
            if (!bVar2) break;
            pSVar4 = System_Text_StringBuilder__Append_530ed80
                               (__this_00,"\n",(MethodInfo *)0x0);
            if (pSVar4 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Text_StringBuilder__Append_530ed80(pSVar4,(System_String_o *)value,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          pUVar1 = (__this->fields)._label;
          pSVar3 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._3_ToString.method);
          if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                      (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
            pUVar1 = (__this->fields)._label;
            if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
              pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
              }
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar5,(MethodInfo *)0x0);
              pUVar5 = (UnityEngine_RectTransform_o *)(__this->fields).SinglePanel;
              if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
                 (pUVar5->klass != TypeInfo_UnityEngine_RectTransform)) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomAssetVideoUrlPopup$$OnDisable
// il2cpp: void UI_CustomAssetVideoUrlPopup__OnDisable (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1ca60

void UI_CustomAssetVideoUrlPopup__OnDisable(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Done = true;
  return;
}


// UI.CustomAssetVideoUrlPopup$$OnButtonClick
// il2cpp: void UI_CustomAssetVideoUrlPopup__OnButtonClick (UI_CustomAssetVideoUrlPopup_o* __this, int32_t result, const MethodInfo* method);
// 0x5d1ca80

void UI_CustomAssetVideoUrlPopup__OnButtonClick
               (UI_CustomAssetVideoUrlPopup_o *__this,int32_t result,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547daa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07547daa = '\x01';
  }
  (__this->fields).Result = result;
  (__this->fields).Done = true;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  if (result != 3) {
    return;
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


// UI.CustomAssetVideoUrlPopup$$.ctor
// il2cpp: void UI_CustomAssetVideoUrlPopup___ctor (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1cb00

void UI_CustomAssetVideoUrlPopup___ctor(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_PromptPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomAssetVideoUrlPopup$$<Setup>b__19_0
// il2cpp: void UI_CustomAssetVideoUrlPopup___Setup_b__19_0 (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1cb10

void UI_CustomAssetVideoUrlPopup___Setup_b__19_0(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547daa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07547daa = '\x01';
  }
  (__this->fields).Result = 1;
  (__this->fields).Done = true;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CustomAssetVideoUrlPopup$$<Setup>b__19_1
// il2cpp: void UI_CustomAssetVideoUrlPopup___Setup_b__19_1 (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1cb60

void UI_CustomAssetVideoUrlPopup___Setup_b__19_1(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547daa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07547daa = '\x01';
  }
  (__this->fields).Result = 2;
  (__this->fields).Done = true;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CustomAssetVideoUrlPopup$$<Setup>b__19_2
// il2cpp: void UI_CustomAssetVideoUrlPopup___Setup_b__19_2 (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x5d1cbb0

void UI_CustomAssetVideoUrlPopup___Setup_b__19_2(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547daa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07547daa = '\x01';
  }
  (__this->fields).Result = 3;
  (__this->fields).Done = true;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


