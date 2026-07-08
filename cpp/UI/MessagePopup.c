// Type: UI.MessagePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MessagePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/MessagePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MessagePopup$$get_Title
// il2cpp: System_String_o* UI_MessagePopup__get_Title (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x4026080

System_String_o * UI_MessagePopup__get_Title(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.MessagePopup$$get_Width
// il2cpp: float UI_MessagePopup__get_Width (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x40260a0

float UI_MessagePopup__get_Width(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.MessagePopup$$get_Height
// il2cpp: float UI_MessagePopup__get_Height (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x40260b0

float UI_MessagePopup__get_Height(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 240.0;
}


// UI.MessagePopup$$get_VerticalPadding
// il2cpp: int32_t UI_MessagePopup__get_VerticalPadding (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x40260c0

int32_t UI_MessagePopup__get_VerticalPadding(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.MessagePopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MessagePopup__get_HorizontalPadding (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x40260d0

int32_t UI_MessagePopup__get_HorizontalPadding(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.MessagePopup$$get_PanelAlignment
// il2cpp: int32_t UI_MessagePopup__get_PanelAlignment (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x40260e0

int32_t UI_MessagePopup__get_PanelAlignment(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MessagePopup$$get_LabelHeight
// il2cpp: float UI_MessagePopup__get_LabelHeight (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x40260f0

float UI_MessagePopup__get_LabelHeight(UI_MessagePopup_o *__this,MethodInfo *method)

{
  return 60.0;
}


// UI.MessagePopup$$Setup
// il2cpp: void UI_MessagePopup__Setup (UI_MessagePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4026100

void UI_MessagePopup__Setup(UI_MessagePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  UnityEngine_Transform_o *parent_00;
  Il2CppMethodPointer vtable_dispatch;
  int32_t fontSize;
  int iVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  float fVar7;
  
  if (DAT_05704319 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Okay");
    DAT_05704319 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Okay",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pUVar4 = UI_ElementFactory__CreateTextButton
                     (parent_00,__this_01,pSVar3,0.0,onClick,(MethodInfo *)0x0);
  (__this->fields)._button = pUVar4;
  il2cpp_runtime_glue(&(__this->fields)._button,pUVar4);
  pUVar4 = UI_ElementFactory__CreateDefaultLabel
                     ((__this->fields).SinglePanel,__this_00,
                      (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,4,
                      (MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._label;
    (__this->fields)._label = pUVar5;
    il2cpp_runtime_glue(ppUVar1,pUVar5);
    pUVar5 = (__this->fields)._label;
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      pIVar6 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      (*(__this->klass->vtable)._59_get_LabelHeight.methodPtr)
                (__this,(__this->klass->vtable)._59_get_LabelHeight.method);
      if (pIVar6 != (Il2CppObject *)0x0) {
        (*pIVar6->klass->vtable[0x26].methodPtr)(pIVar6,pIVar6->klass->vtable[0x26].method);
        pUVar5 = *ppUVar1;
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          pIVar6 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          fVar7 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                                   (__this,(__this->klass->vtable)._33_GetWidth.method);
          iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                            (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
          if (pIVar6 != (Il2CppObject *)0x0) {
            vtable_dispatch = pIVar6->klass->vtable[0x24].methodPtr;
            (*vtable_dispatch)
                      (fVar7 - (float)(iVar2 * 2),pIVar6,pIVar6->klass->vtable[0x24].method,
                       extraout_RDX_00,vtable_dispatch);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MessagePopup$$Show
// il2cpp: void UI_MessagePopup__Show (UI_MessagePopup_o* __this, System_String_o* message, bool allowDismiss, const MethodInfo* method);
// 0x40263e0

void UI_MessagePopup__Show
               (UI_MessagePopup_o *__this,System_String_o *message,bool_conflict allowDismiss,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)message);
  __this_00 = (__this->fields)._button;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,allowDismiss & 0xff,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._label;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      vtable_dispatch = (pUVar1->klass->vtable)._75_set_text.methodPtr;
      (*vtable_dispatch)
                (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MessagePopup$$OnButtonClick
// il2cpp: void UI_MessagePopup__OnButtonClick (UI_MessagePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4026440

void UI_MessagePopup__OnButtonClick
               (UI_MessagePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,method,vtable_dispatch);
  return;
}


// UI.MessagePopup$$.ctor
// il2cpp: void UI_MessagePopup___ctor (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x4026460

void UI_MessagePopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor(__this,method);
  return;
}


// UI.MessagePopup$$<Setup>b__16_0
// il2cpp: void UI_MessagePopup___Setup_b__16_0 (UI_MessagePopup_o* __this, const MethodInfo* method);
// 0x4026470

void UI_MessagePopup__<Setup>b__16_0(UI_MessagePopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_0570431a == '\0') {
    il2cpp_init_method_metadata(&"Okay");
    DAT_0570431a = '\x01';
    in_RDX = extraout_RDX;
  }
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


