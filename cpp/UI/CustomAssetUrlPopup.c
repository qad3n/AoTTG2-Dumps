// Type: UI.CustomAssetUrlPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CustomAssetUrlPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CustomAssetUrlPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.CustomAssetUrlPopup$$get_Title
// il2cpp: System_String_o* UI_CustomAssetUrlPopup__get_Title (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x40a8990

System_String_o *
UI_CustomAssetUrlPopup__get_Title(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704613 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Confirm");
    DAT_05704613 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CustomAssetUrlPopup$$get_Width
// il2cpp: float UI_CustomAssetUrlPopup__get_Width (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x40a89f0

float UI_CustomAssetUrlPopup__get_Width(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.CustomAssetUrlPopup$$get_Height
// il2cpp: float UI_CustomAssetUrlPopup__get_Height (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x40a8a00

float UI_CustomAssetUrlPopup__get_Height(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.CustomAssetUrlPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CustomAssetUrlPopup__get_VerticalPadding (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x40a8a10

int32_t UI_CustomAssetUrlPopup__get_VerticalPadding
                  (UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CustomAssetUrlPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CustomAssetUrlPopup__get_HorizontalPadding (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x40a8a20

int32_t UI_CustomAssetUrlPopup__get_HorizontalPadding
                  (UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CustomAssetUrlPopup$$get_PanelAlignment
// il2cpp: int32_t UI_CustomAssetUrlPopup__get_PanelAlignment (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x40a8a30

int32_t UI_CustomAssetUrlPopup__get_PanelAlignment
                  (UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.CustomAssetUrlPopup$$Setup
// il2cpp: void UI_CustomAssetUrlPopup__Setup (UI_CustomAssetUrlPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40a8a40

void UI_CustomAssetUrlPopup__Setup
               (UI_CustomAssetUrlPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  int32_t fontSize;
  int iVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *pUVar6;
  Il2CppObject *pIVar7;
  float fVar8;
  
  if (DAT_05704614 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__16_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__16_1);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Confirm");
    il2cpp_init_method_metadata(&"Cancel");
    DAT_05704614 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  __this_02 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,
                         (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,4,
                         (MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._label;
    (__this->fields)._label = pUVar6;
    il2cpp_runtime_glue(ppUVar1,pUVar6);
    pUVar6 = (__this->fields)._label;
    if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
      pIVar7 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      fVar8 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                               (__this,(__this->klass->vtable)._33_GetWidth.method);
      iVar3 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
      if (pIVar7 != (Il2CppObject *)0x0) {
        (*pIVar7->klass->vtable[0x24].methodPtr)
                  (fVar8 - (float)(iVar3 * 2),pIVar7,pIVar7->klass->vtable[0x24].method);
        pUVar6 = *ppUVar1;
        if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
          pIVar7 = UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar7 != (Il2CppObject *)0x0) {
            vtable_dispatch = pIVar7->klass->vtable[0x26].methodPtr;
            (*vtable_dispatch)
                      ((__this->fields).LabelHeight,pIVar7,pIVar7->klass->vtable[0x26].method,
                       vtable_dispatch);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CustomAssetUrlPopup$$Show
// il2cpp: void UI_CustomAssetUrlPopup__Show (UI_CustomAssetUrlPopup_o* __this, System_String_o* url, const MethodInfo* method);
// 0x40a8d70

void UI_CustomAssetUrlPopup__Show
               (UI_CustomAssetUrlPopup_o *__this,System_String_o *url,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar3;
  
  if (DAT_05704615 == '\0') {
    il2cpp_init_method_metadata(&"You are about to download a required file: ");
    DAT_05704615 = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  *(undefined2 *)&(__this->fields).Done = 0;
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_UI_Text__set_supportRichText(pUVar1,0,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._label;
    pSVar3 = System_String__Concat("You are about to download a required file: ",url,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar2 = pUVar1->klass;
      vtable_dispatch = (pUVar2->vtable)._75_set_text.methodPtr;
      (*vtable_dispatch)
                (pUVar1,pSVar3,(pUVar2->vtable)._75_set_text.method,pUVar2,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CustomAssetUrlPopup$$OnButtonClick
// il2cpp: void UI_CustomAssetUrlPopup__OnButtonClick (UI_CustomAssetUrlPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40a8e10

void UI_CustomAssetUrlPopup__OnButtonClick
               (UI_CustomAssetUrlPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704616 == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_05704616 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)((long)&(__this->fields).Done + 1) = 1;
  }
  *(undefined1 *)&(__this->fields).Done = 1;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CustomAssetUrlPopup$$.ctor
// il2cpp: void UI_CustomAssetUrlPopup___ctor (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x40a8e80

void UI_CustomAssetUrlPopup___ctor(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  (__this->fields).LabelHeight = 60.0;
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CustomAssetUrlPopup$$<Setup>b__16_0
// il2cpp: void UI_CustomAssetUrlPopup___Setup_b__16_0 (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x40a8ea0

void UI_CustomAssetUrlPopup__<Setup>b__16_0(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (DAT_05704617 == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_05704617 = '\x01';
  }
  a = "Confirm";
  if (DAT_05704616 == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_05704616 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)((long)&(__this->fields).Done + 1) = 1;
  }
  *(undefined1 *)&(__this->fields).Done = 1;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CustomAssetUrlPopup$$<Setup>b__16_1
// il2cpp: void UI_CustomAssetUrlPopup___Setup_b__16_1 (UI_CustomAssetUrlPopup_o* __this, const MethodInfo* method);
// 0x40a8f30

void UI_CustomAssetUrlPopup__<Setup>b__16_1(UI_CustomAssetUrlPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (DAT_05704618 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_05704618 = '\x01';
  }
  a = "Cancel";
  if (DAT_05704616 == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_05704616 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)((long)&(__this->fields).Done + 1) = 1;
  }
  *(undefined1 *)&(__this->fields).Done = 1;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


