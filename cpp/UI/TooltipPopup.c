// Type: UI.TooltipPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/TooltipPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/TooltipPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.TooltipPopup$$get_AnimationTime
// il2cpp: float UI_TooltipPopup__get_AnimationTime (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x402c7d0

float UI_TooltipPopup__get_AnimationTime(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  return 0.15;
}


// UI.TooltipPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_TooltipPopup__get_PopupAnimationType (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x402c7e0

int32_t UI_TooltipPopup__get_PopupAnimationType(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.TooltipPopup$$get_TextColor
// il2cpp: System_String_o* UI_TooltipPopup__get_TextColor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x402c7f0

System_String_o * UI_TooltipPopup__get_TextColor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  if (DAT_0570434b == '\0') {
    il2cpp_init_method_metadata(&"TooltipTextColor");
    DAT_0570434b = '\x01';
  }
  return "TooltipTextColor";
}


// UI.TooltipPopup$$get_BackgroundColor
// il2cpp: System_String_o* UI_TooltipPopup__get_BackgroundColor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x402c820

System_String_o * UI_TooltipPopup__get_BackgroundColor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  if (DAT_0570434c == '\0') {
    il2cpp_init_method_metadata(&"TooltipBackgroundColor");
    DAT_0570434c = '\x01';
  }
  return "TooltipBackgroundColor";
}


// UI.TooltipPopup$$Setup
// il2cpp: void UI_TooltipPopup__Setup (UI_TooltipPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x402c850

void UI_TooltipPopup__Setup(UI_TooltipPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Color_o UVar8;
  
  if (DAT_0570434d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"Panel");
    il2cpp_init_method_metadata(&"Panel/Label");
    DAT_0570434d = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Panel/Label",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = (UnityEngine_UI_Text_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar2,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._label = pUVar3;
      il2cpp_runtime_glue(&(__this->fields)._label,pUVar3);
      pUVar3 = (__this->fields)._label;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                  (pUVar3,**(undefined8 **)(DAT_057110b0 + 0xb8),
                   (pUVar3->klass->vtable)._75_set_text.method);
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar2 = UnityEngine_Transform__Find(pUVar2,"Panel",(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
            ppUVar1 = &(__this->fields)._panel;
            (__this->fields)._panel = pUVar4;
            il2cpp_runtime_glue(ppUVar1,pUVar4);
            pUVar3 = (__this->fields)._label;
            pSVar5 = (System_String_o *)
                     (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            pSVar6 = (System_String_o *)
                     (*(__this->klass->vtable)._59_get_TextColor.methodPtr)
                               (__this,(__this->klass->vtable)._59_get_TextColor.method);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UVar8 = UI_UIManager__GetThemeColor
                              (pSVar5,"DefaultSetting",pSVar6,"DefaultPanel",(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                        (UVar8.fields._0_8_,UVar8.fields._8_8_,pUVar3,
                         (pUVar3->klass->vtable)._23_set_color.method);
              pUVar4 = *ppUVar1;
              if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
                pUVar2 = UnityEngine_Transform__Find
                                   ((UnityEngine_Transform_o *)pUVar4,"Background",(MethodInfo *)0x0
                                   );
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  pIVar7 = UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)pUVar2,MethodInfo_Image_GetComponent_Image);
                  pSVar5 = (System_String_o *)
                           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                  pSVar6 = (System_String_o *)
                           (*(__this->klass->vtable)._60_get_BackgroundColor.methodPtr)
                                     (__this,(__this->klass->vtable)._60_get_BackgroundColor.method)
                  ;
                  UVar8 = UI_UIManager__GetThemeColor
                                    (pSVar5,"DefaultSetting",pSVar6,"DefaultPanel",(MethodInfo *)0x0);
                  if (pIVar7 != (Il2CppObject *)0x0) {
                    (*pIVar7->klass->vtable[0x17].methodPtr)
                              (UVar8.fields._0_8_,UVar8.fields._8_8_,pIVar7,
                               pIVar7->klass->vtable[0x17].method);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TooltipPopup$$Show
// il2cpp: void UI_TooltipPopup__Show (UI_TooltipPopup_o* __this, System_String_o* message, UnityEngine_Component_o* caller, float offset, const MethodInfo* method);
// 0x40239e0

void UI_TooltipPopup__Show
               (UI_TooltipPopup_o *__this,System_String_o *message,UnityEngine_Component_o *caller,
               float offset,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  float value;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_04023af2;
  bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    UnityEngine_MonoBehaviour__StopAllCoroutines
              ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    value = (float)(*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)(__this);
    if (DAT_057042cd == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      DAT_057042cd = '\x01';
    }
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_04023af2;
    __this_02 = (UnityEngine_CanvasGroup_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this_01,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    if (__this_02 == (UnityEngine_CanvasGroup_o *)0x0) goto LAB_04023af2;
    UnityEngine_CanvasGroup__set_alpha(__this_02,value,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,message,(pUVar1->klass->vtable)._75_set_text.method);
    (__this->fields).Caller = caller;
    il2cpp_runtime_glue();
    (__this->fields)._offset = offset;
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    UI_TooltipPopup__SetTooltipPosition(__this,(MethodInfo *)caller);
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)caller);
    return;
  }
LAB_04023af2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TooltipPopup$$SetTooltipPosition
// il2cpp: void UI_TooltipPopup__SetTooltipPosition (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x402cb10

void UI_TooltipPopup__SetTooltipPosition(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Vector2_o UVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  float local_28;
  float fStack_24;
  
  if (DAT_0570434e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570434e = '\x01';
  }
  __this_01 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    fVar4 = (__this->fields)._offset;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (__this->fields).Caller;
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      fVar4 = (fVar4 + UVar1.fields.x * 0.5) * *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x38);
      pUVar3 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar6 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
        iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          local_28 = UVar6.fields.x;
          fStack_24 = UVar6.fields.y;
          fVar5 = fVar4 + local_28;
          if ((float)iVar2 < fVar5) {
            fVar5 = local_28 - fVar4;
          }
          UVar6.fields.y = fStack_24;
          UVar6.fields.x = fVar5;
          UnityEngine_Transform__set_position(pUVar3,UVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TooltipPopup$$Update
// il2cpp: void UI_TooltipPopup__Update (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x402cc60

void UI_TooltipPopup__Update(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  MethodInfo *method_00;
  
  if (DAT_0570434f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570434f = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).Caller;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    UI_TooltipPopup__SetTooltipPosition(__this,method_00);
    return;
  }
  return;
}


// UI.TooltipPopup$$.ctor
// il2cpp: void UI_TooltipPopup___ctor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x402c7c0

void UI_TooltipPopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor(__this,method);
  return;
}


