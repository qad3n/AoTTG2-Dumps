// Type: UI.CustomAssetVideoUrlPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CustomAssetVideoUrlPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.CustomAssetVideoUrlPopup$$get_Title
// il2cpp: System_String_o* UI_CustomAssetVideoUrlPopup__get_Title (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x182240690

System_String_o *
UI_CustomAssetVideoUrlPopup__get_Title(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347234 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184347234 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CustomAssetVideoUrlPopup$$get_Width
// il2cpp: float UI_CustomAssetVideoUrlPopup__get_Width (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x18210fb90

float
UI_CustomAssetVideoUrlPopup__get_Width(UI_CustomAssetVideoUrlPopup_o* __this, MethodInfo* method)

{
  return 500.0;
}


// UI.CustomAssetVideoUrlPopup$$get_Height
// il2cpp: float UI_CustomAssetVideoUrlPopup__get_Height (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x1821c1230

float
UI_CustomAssetVideoUrlPopup__get_Height(UI_CustomAssetVideoUrlPopup_o* __this, MethodInfo* method)

{
  return 300.0;
}


// UI.CustomAssetVideoUrlPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_VerticalPadding (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_CustomAssetVideoUrlPopup__get_VerticalPadding(UI_CustomAssetVideoUrlPopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.CustomAssetVideoUrlPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_HorizontalPadding (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_CustomAssetVideoUrlPopup__get_HorizontalPadding(UI_CustomAssetVideoUrlPopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.CustomAssetVideoUrlPopup$$get_PanelAlignment
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_PanelAlignment (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_CustomAssetVideoUrlPopup__get_PanelAlignment(UI_CustomAssetVideoUrlPopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.CustomAssetVideoUrlPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_CustomAssetVideoUrlPopup__get_EscapeBehavior (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_CustomAssetVideoUrlPopup__get_EscapeBehavior(UI_CustomAssetVideoUrlPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.CustomAssetVideoUrlPopup$$get_ScrollBar
// il2cpp: bool UI_CustomAssetVideoUrlPopup__get_ScrollBar (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_CustomAssetVideoUrlPopup__get_ScrollBar(UI_CustomAssetVideoUrlPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.CustomAssetVideoUrlPopup$$Setup
// il2cpp: void UI_CustomAssetVideoUrlPopup__Setup (UI_CustomAssetVideoUrlPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18223ff50

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
  
  if (Il2CppMethodInitialized_184347235 == '\0') {
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
    Il2CppMethodInitialized_184347235 = '\x01';
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
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar3 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar3 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CustomAssetVideoUrlPopup_Setup_b__19_2,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
  __this_02 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,
                         (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,4,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (__this_02,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._label = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._label,pUVar5);
    pUVar5 = (__this->fields)._label;
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar6 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar5,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      fVar7 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
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
// 0x1822402c0
// eh: try 0x182240420..0x182240568 -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182240476: mov rdx, qword ptr [rip + 0x1e5749b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18224047d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182240482: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182240487: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18224048c: test rcx, rcx
// asm:   0x18224048f: jne 0x182240568
// asm:   0x182240495: xor edi, edi
// asm:   0x182240497: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x18224049f: mov r15, qword ptr [rsp + 0xa8]
// asm:   0x1822404a7: mov r12, r15
// asm:   0x182240568: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void UI_CustomAssetVideoUrlPopup__Show
               (UI_CustomAssetVideoUrlPopup_o *__this,System_Collections_Generic_List_string__o *urls,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  System_Text_StringBuilder_o *__this_01;
  System_String_o *pSVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_RectTransform_o *layoutRoot;
  undefined1 local_58 [16];
  System_String_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  System_String_o *local_30;
  
  if (Il2CppMethodInitialized_184347236 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"This custom content contains video player(s) that will connect to the following URL(s):\n");
    Il2CppMethodInitialized_184347236 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (System_String_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Done = false;
  layoutRoot = (UnityEngine_RectTransform_o *)0x0;
  (__this->fields).Result = 0;
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_UI_Text__set_supportRichText(pUVar1,false,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_197dca0(__this_00,"This custom content contains video player(s) that will connect to the following URL(s):\n",(MethodInfo *)0x0);
      if (urls != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                   (System_Collections_Generic_List_T__o *)urls,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_40 = (undefined1  [8])local_58._0_8_;
        pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
        local_30 = local_48;
        local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          pSVar3 = local_30;
          if (!bVar2) break;
          __this_01 = System_Text_StringBuilder__Append_197dca0
                                (__this_00,"\n",(MethodInfo *)0x0);
          if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Text_StringBuilder__Append_197dca0(__this_01,pSVar3,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
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
            pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
            }
            UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar4,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_RectTransform_o *)(__this->fields).SinglePanel;
            if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
              if (pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
                layoutRoot = pUVar4;
              }
              if (layoutRoot == (UnityEngine_RectTransform_o *)0x0) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
            }
            UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CustomAssetVideoUrlPopup$$OnDisable
// il2cpp: void UI_CustomAssetVideoUrlPopup__OnDisable (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x18223f8f0

void UI_CustomAssetVideoUrlPopup__OnDisable(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Done = true;
  return;
}


// UI.CustomAssetVideoUrlPopup$$OnButtonClick
// il2cpp: void UI_CustomAssetVideoUrlPopup__OnButtonClick (UI_CustomAssetVideoUrlPopup_o* __this, int32_t result, const MethodInfo* method);
// 0x18223fed0

void UI_CustomAssetVideoUrlPopup__OnButtonClick
               (UI_CustomAssetVideoUrlPopup_o *__this,int32_t result,MethodInfo *method)

{
  UI_CustomAssetVideoUrlPopup_c *pUVar1;
  
  if (Il2CppMethodInitialized_184347237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184347237 = '\x01';
  }
  pUVar1 = __this->klass;
  (__this->fields).Result = result;
  (__this->fields).Done = true;
  (*(pUVar1->vtable)._22_Hide.methodPtr)(__this,(pUVar1->vtable)._22_Hide.method);
  if (result == 3) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  }
  return;
}


// UI.CustomAssetVideoUrlPopup$$.ctor
// il2cpp: void UI_CustomAssetVideoUrlPopup___ctor (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x181dd9cd0

void
UI_CustomAssetVideoUrlPopup___ctor(UI_CustomAssetVideoUrlPopup_o* __this, MethodInfo* method)

{
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomAssetVideoUrlPopup$$<Setup>b__19_0
// il2cpp: void UI_CustomAssetVideoUrlPopup___Setup_b__19_0 (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x182240580

void UI_CustomAssetVideoUrlPopup___Setup_b__19_0(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  UI_CustomAssetVideoUrlPopup_c *pUVar1;
  
  if (Il2CppMethodInitialized_184347237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184347237 = '\x01';
  }
  pUVar1 = __this->klass;
  (__this->fields).Result = 1;
  (__this->fields).Done = true;
  (*(pUVar1->vtable)._22_Hide.methodPtr)(__this,(pUVar1->vtable)._22_Hide.method);
  return;
}


// UI.CustomAssetVideoUrlPopup$$<Setup>b__19_1
// il2cpp: void UI_CustomAssetVideoUrlPopup___Setup_b__19_1 (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x1822405d0

void UI_CustomAssetVideoUrlPopup___Setup_b__19_1(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  UI_CustomAssetVideoUrlPopup_c *pUVar1;
  
  if (Il2CppMethodInitialized_184347237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184347237 = '\x01';
  }
  pUVar1 = __this->klass;
  (__this->fields).Result = 2;
  (__this->fields).Done = true;
  (*(pUVar1->vtable)._22_Hide.methodPtr)(__this,(pUVar1->vtable)._22_Hide.method);
  return;
}


// UI.CustomAssetVideoUrlPopup$$<Setup>b__19_2
// il2cpp: void UI_CustomAssetVideoUrlPopup___Setup_b__19_2 (UI_CustomAssetVideoUrlPopup_o* __this, const MethodInfo* method);
// 0x182240620

void UI_CustomAssetVideoUrlPopup___Setup_b__19_2(UI_CustomAssetVideoUrlPopup_o *__this,MethodInfo *method)

{
  UI_CustomAssetVideoUrlPopup_c *pUVar1;
  
  if (Il2CppMethodInitialized_184347237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184347237 = '\x01';
  }
  pUVar1 = __this->klass;
  (__this->fields).Result = 3;
  (__this->fields).Done = true;
  (*(pUVar1->vtable)._22_Hide.methodPtr)(__this,(pUVar1->vtable)._22_Hide.method);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


