// Type: UI.MessagePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MessagePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/MessagePopup.cs
// --------------------------------

// UI.MessagePopup$$get_Title
// il2cpp: System_String_o* UI_MessagePopup__get_Title (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x434f830

System_String_o * UI_MessagePopup__get_Title(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.MessagePopup$$get_Width
// il2cpp: float UI_MessagePopup__get_Width (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x434f850

float UI_MessagePopup__get_Width(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.MessagePopup$$get_Height
// il2cpp: float UI_MessagePopup__get_Height (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x434f860

float UI_MessagePopup__get_Height(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 240.0;
}


// UI.MessagePopup$$get_VerticalPadding
// il2cpp: int32_t UI_MessagePopup__get_VerticalPadding (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x434f870

int32_t UI_MessagePopup__get_VerticalPadding(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.MessagePopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MessagePopup__get_HorizontalPadding (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x434f880

int32_t UI_MessagePopup__get_HorizontalPadding(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.MessagePopup$$get_PanelAlignment
// il2cpp: int32_t UI_MessagePopup__get_PanelAlignment (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x434f890

int32_t UI_MessagePopup__get_PanelAlignment(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MessagePopup$$get_LabelHeight
// il2cpp: float UI_MessagePopup__get_LabelHeight (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x434f8a0

float UI_MessagePopup__get_LabelHeight(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 60.0;
}


// UI.MessagePopup$$Setup
// il2cpp: void UI_MessagePopup__Setup (UI_MessagePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x434f8b0

void UI_MessagePopup__Setup(UI_MessagePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_UI_Text_o *pUVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  int32_t fontSize;
  int iVar3;
  System_String_o *pSVar4;
  UnityEngine_UI_Text_o *method_00;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *pUVar5;
  Il2CppObject *pIVar6;
  uint extraout_EDX;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  UI_MessagePopup_o *__this_01;
  long *plVar7;
  float fVar8;
  
  if (g_data_057ae12f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Okay");
    g_data_057ae12f = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  method_00 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)method_00,0x18,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Okay",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pUVar5 = UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar4,0.0,onClick,(MethodInfo *)0x0);
  (__this->fields)._button = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._button,pUVar5);
  __this_01 = (UI_MessagePopup_o *)(__this->fields).SinglePanel;
  pUVar5 = UI_ElementFactory__CreateDefaultLabel
                     ((UnityEngine_Transform_o *)__this_01,(UI_ElementStyle_o *)method_00,
                      (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar5,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._label;
    (__this->fields)._label = method_00;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar2 = (__this->fields)._label;
    __this_01 = (UI_MessagePopup_o *)0x0;
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      method_00 = (UnityEngine_UI_Text_o *)(__this->klass->vtable)._59_get_LabelHeight.method;
      __this_01 = __this;
      (*(__this->klass->vtable)._59_get_LabelHeight.methodPtr)();
      if (pIVar6 != (Il2CppObject *)0x0) {
        method_00 = (UnityEngine_UI_Text_o *)pIVar6->klass->vtable[0x26].method;
        (*pIVar6->klass->vtable[0x26].methodPtr)(pIVar6);
        pUVar2 = *ppUVar1;
        __this_01 = (UI_MessagePopup_o *)0x0;
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement)
          ;
          fVar8 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                                   (__this,(__this->klass->vtable)._33_GetWidth.method);
          method_00 = (UnityEngine_UI_Text_o *)(__this->klass->vtable)._10_get_HorizontalPadding.method;
          iVar3 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)();
          __this_01 = __this;
          if (pIVar6 != (Il2CppObject *)0x0) {
            UNRECOVERED_JUMPTABLE_00 = pIVar6->klass->vtable[0x24].methodPtr;
            (*UNRECOVERED_JUMPTABLE_00)
                      (fVar8 - (float)(iVar3 * 2),pIVar6,pIVar6->klass->vtable[0x24].method,extraout_RDX_00,
                       UNRECOVERED_JUMPTABLE_00);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePopup__Show((UI_BasePopup_o *)__this_01,(MethodInfo *)method_00);
  pUVar5 = (__this_01->fields)._button;
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar5,extraout_EDX & 0xff,(MethodInfo *)0x0);
    pUVar2 = (__this_01->fields)._label;
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (pUVar2->klass->vtable)._75_set_text.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pUVar2,method_00,(pUVar2->klass->vtable)._75_set_text.method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  plVar7 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  (**(code **)(*plVar7 + 0x298))();
  return;
}


// UI.MessagePopup$$Show
// il2cpp: void UI_MessagePopup__Show (UI_MessagePopup_o* __this, System_String_o* message, bool allowDismiss, const MethodInfo* method);
// 0x434fb90

void UI_MessagePopup__Show
               (UI_MessagePopup_o *__this,System_String_o *message,bool_conflict allowDismiss,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  long *plVar2;
  
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)message);
  __this_00 = (__this->fields)._button;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,allowDismiss & 0xff,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._label;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      vtableDispatch = (pUVar1->klass->vtable)._75_set_text.methodPtr;
      (*vtableDispatch)
                (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method,vtableDispatch);
      return;
    }
  }
  plVar2 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  (**(code **)(*plVar2 + 0x298))();
  return;
}


// UI.MessagePopup$$OnButtonClick
// il2cpp: void UI_MessagePopup__OnButtonClick (UI_MessagePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x434fbf0

void UI_MessagePopup__OnButtonClick(UI_MessagePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,method,vtableDispatch);
  return;
}


// UI.MessagePopup$$.ctor
// il2cpp: void UI_MessagePopup___ctor (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x434fc10

void UI_MessagePopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor(__this,method);
  return;
}


// UI.MessagePopup$$<Setup>b__16_0
// il2cpp: void UI_MessagePopup___Setup_b__16_0 (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x434fc20

void UI_MessagePopup___Setup_b__16_0(UI_MessagePopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae130 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Okay");
    g_data_057ae130 = '\x01';
    in_RDX = extraout_RDX;
  }
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


