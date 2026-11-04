// Type: UI.MessagePopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MessagePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/MessagePopup.cs
// --------------------------------

// UI.MessagePopup$$get_Title
// il2cpp: System_String_o* UI_MessagePopup__get_Title (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_MessagePopup__get_Title(UI_MessagePopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.MessagePopup$$get_Width
// il2cpp: float UI_MessagePopup__get_Width (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x1821c1230

float
UI_MessagePopup__get_Width(UI_MessagePopup_o* __this, MethodInfo* method)

{
  return 300.0;
}


// UI.MessagePopup$$get_Height
// il2cpp: float UI_MessagePopup__get_Height (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x1821c11b0

float
UI_MessagePopup__get_Height(UI_MessagePopup_o* __this, MethodInfo* method)

{
  return 240.0;
}


// UI.MessagePopup$$get_VerticalPadding
// il2cpp: int32_t UI_MessagePopup__get_VerticalPadding (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_MessagePopup__get_VerticalPadding(UI_MessagePopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.MessagePopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MessagePopup__get_HorizontalPadding (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_MessagePopup__get_HorizontalPadding(UI_MessagePopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.MessagePopup$$get_PanelAlignment
// il2cpp: int32_t UI_MessagePopup__get_PanelAlignment (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_MessagePopup__get_PanelAlignment(UI_MessagePopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.MessagePopup$$get_LabelHeight
// il2cpp: float UI_MessagePopup__get_LabelHeight (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x1821c11c0

float
UI_MessagePopup__get_LabelHeight(UI_MessagePopup_o* __this, MethodInfo* method)

{
  return 60.0;
}


// UI.MessagePopup$$Setup
// il2cpp: void UI_MessagePopup__Setup (UI_MessagePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821c5850

void UI_MessagePopup__Setup(UI_MessagePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t iVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184346f2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MessagePopup_Setup_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Okay");
    Il2CppMethodInitialized_184346f2c = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  iVar1 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,iVar1,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Okay",(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MessagePopup_Setup_b__16_0,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateTextButton(parent_00,__this_01,pSVar2,0.0,__this_02,(MethodInfo *)0x0);
  (__this->fields)._button = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._button,pUVar3);
  pUVar3 = UI_ElementFactory__CreateDefaultLabel
                     ((__this->fields).SinglePanel,__this_00,
                      (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,4,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar3,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._label = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._label,pUVar4);
    pUVar4 = (__this->fields)._label;
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar5 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar4,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      fVar6 = (*(__this->klass->vtable)._62_get_LabelHeight.methodPtr)
                        (__this,(__this->klass->vtable)._62_get_LabelHeight.method);
      if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                  (pUVar5,fVar6,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
        pUVar4 = (__this->fields)._label;
        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
          pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar4,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                             );
          fVar6 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                                   (__this,(__this->klass->vtable)._33_GetWidth.method);
          iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                            (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
          if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
                      (pUVar5,fVar6 - (float)(iVar1 * 2),(pUVar5->klass->vtable)._36_set_preferredWidth.method
                      );
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MessagePopup$$Show
// il2cpp: void UI_MessagePopup__Show (UI_MessagePopup_o* __this, System_String_o* message, bool allowDismiss, const MethodInfo* method);
// 0x1821c5b40

void UI_MessagePopup__Show
               (UI_MessagePopup_o *__this,System_String_o *message,bool allowDismiss,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._button;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,allowDismiss,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._label;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MessagePopup$$OnButtonClick
// il2cpp: void UI_MessagePopup__OnButtonClick (UI_MessagePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x180a37400

void
UI_MessagePopup__OnButtonClick(UI_MessagePopup_o* __this, System_String_o* name, MethodInfo* method)

{
  Unity_VisualScripting_IGraph_o *pUVar1;
  
  pUVar1 = (Unity_VisualScripting_IGraph_o *)
           (*(__this->klass->vtable)._22_unknown.methodPtr)(__this,(__this->klass->vtable)._22_unknown.method)
  ;
  return pUVar1;
}


// UI.MessagePopup$$.ctor
// il2cpp: void UI_MessagePopup___ctor (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_MessagePopup___ctor(UI_MessagePopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MessagePopup$$<Setup>b__16_0
// il2cpp: void UI_MessagePopup___Setup_b__16_0 (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x1821c5bb0

void UI_MessagePopup___Setup_b__16_0(UI_MessagePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Okay");
    Il2CppMethodInitialized_184346f2d = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


