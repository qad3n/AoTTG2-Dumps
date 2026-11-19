// Type: UI.MobileInputHoldControl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileInputHoldControl.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputHoldControl.SlideButton$$.ctor
// il2cpp: void UI_MobileInputHoldControl_SlideButton___ctor (UI_MobileInputHoldControl_SlideButton_o __this, UnityEngine_RectTransform_o* rect, UI_MobileInputButton_o* button, const MethodInfo* method);
// 0x5c6e600

void UI_MobileInputHoldControl_SlideButton___ctor
               (UI_MobileInputHoldControl_SlideButton_o *__this,UnityEngine_RectTransform_o *rect,
               UI_MobileInputButton_o *button,MethodInfo *method)

{
  (__this->fields).Rect = rect;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Button = button;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Button);
  return;
}


// UI.MobileInputHoldControl$$Setup
// il2cpp: void UI_MobileInputHoldControl__Setup (UI_MobileInputHoldControl_o* __this, UnityEngine_RectTransform_o* rect, UI_MobileInputSkin_o* normalSkin, UI_MobileInputSkin_o* pressedSkin, int32_t shape, const MethodInfo* method);
// 0x5c6e0c0

void UI_MobileInputHoldControl__Setup
               (UI_MobileInputHoldControl_o *__this,UnityEngine_RectTransform_o *rect,
               UI_MobileInputSkin_o *normalSkin,UI_MobileInputSkin_o *pressedSkin,int32_t shape,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  UnityEngine_RectTransform_o *x;
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UI_MobileInputHoldControl_o *__this_00;
  
  if (Il2CppMethodInitialized_075478da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478da = '\x01';
  }
  targetAddress = &(__this->fields)._rect;
  (__this->fields)._rect = rect;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields)._normalSkin = normalSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._normalSkin);
  (__this->fields)._pressedSkin = pressedSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedSkin);
  (__this->fields)._shape = shape;
  x = (__this->fields)._rect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = __this;
  if ((bVar1) &&
     (__this_00 = (UI_MobileInputHoldControl_o *)*targetAddress,
     __this_00 == (UI_MobileInputHoldControl_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this_00,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  (__this->fields)._image = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  return;
}


// UI.MobileInputHoldControl$$OnDisable
// il2cpp: void UI_MobileInputHoldControl__OnDisable (UI_MobileInputHoldControl_o* __this, const MethodInfo* method);
// 0x5c6e440

void UI_MobileInputHoldControl__OnDisable(UI_MobileInputHoldControl_o *__this,MethodInfo *method)

{
  UI_MobileInputHoldControl__ResetControl(__this,method);
  return;
}


// UI.MobileInputHoldControl$$Update
// il2cpp: void UI_MobileInputHoldControl__Update (UI_MobileInputHoldControl_o* __this, const MethodInfo* method);
// 0x5c6e540

void UI_MobileInputHoldControl__Update(UI_MobileInputHoldControl_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *pMVar2;
  MethodInfo *method_00;
  UnityEngine_Vector2_Fields local_20;
  UnityEngine_Vector2_Fields local_18;
  InvokerMethod pIStack_10;
  
  local_20.x = 0.0;
  local_20.y = 0.0;
  if ((__this->fields)._pressed != false) {
    pMVar2 = (MethodInfo *)&local_20;
    bVar1 = Utility_MobilePlatformUtility__TryGetHeldPointerPosition
                      ((__this->fields)._pointerId,(UnityEngine_Vector2_o *)pMVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      UI_MobileInputHoldControl__ResetControl(__this,pMVar2);
      return;
    }
    local_18 = local_20;
    pIStack_10 = (InvokerMethod)0x0;
    pMVar2 = (MethodInfo *)
             UI_MobileInputHoldControl__GetSlideButton(__this,(UnityEngine_Vector2_o)local_20,pMVar2);
    UI_MobileInputHoldControl__SetActiveSlideButton(__this,(UI_MobileInputButton_o *)pMVar2,method_00);
    UI_MobileInputHoldControl__UpdateMovingContent(__this,(UnityEngine_Vector2_o)local_18,pMVar2);
  }
  return;
}


// UI.MobileInputHoldControl$$OnInitializePotentialDrag
// il2cpp: void UI_MobileInputHoldControl__OnInitializePotentialDrag (UI_MobileInputHoldControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c6e5e0

void UI_MobileInputHoldControl__OnInitializePotentialDrag
               (UI_MobileInputHoldControl_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  (eventData->fields)._useDragThreshold_k__BackingField = false;
  return;
}


// UI.MobileInputHoldControl$$RegisterSlideButton
// il2cpp: void UI_MobileInputHoldControl__RegisterSlideButton (UI_MobileInputHoldControl_o* __this, UnityEngine_RectTransform_o* rectTransform, UI_MobileInputButton_o* button, const MethodInfo* method);
// 0x5c6ad60

void UI_MobileInputHoldControl__RegisterSlideButton
               (UI_MobileInputHoldControl_o *__this,UnityEngine_RectTransform_o *rectTransform,
               UI_MobileInputButton_o *button,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_MobileInputHoldControl_SlideButton__o *__this_00;
  UI_MobileInputHoldControl_SlideButton_array *pUVar3;
  UI_MobileInputHoldControl_SlideButton_o item;
  MethodInfo *pMVar4;
  bool bVar5;
  UnityEngine_RectTransform_o *local_30;
  UI_MobileInputButton_o *local_28;
  
  if (Il2CppMethodInitialized_075478db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478db = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rectTransform,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)button,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      __this_00 = (__this->fields)._slideButtons;
      local_28 = (UI_MobileInputButton_o *)0x0;
      local_30 = rectTransform;
      Il2CppCodeGenWriteBarrier(&local_30);
      local_28 = button;
      Il2CppCodeGenWriteBarrier(&local_28);
      pMVar4 = MethodInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton_Add;
      if (__this_00 != (System_Collections_Generic_List_MobileInputHoldControl_SlideButton__o *)0x0) {
        item.fields.Button = local_28;
        item.fields.Rect = local_30;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (__this_00->fields)._items;
        if (pUVar3 != (UI_MobileInputHoldControl_SlideButton_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2].fields.Rect = local_30;
            pUVar3->m_Items[(int)uVar2].fields.Button = local_28;
            Il2CppCodeGenWriteBarrier((void **)(pUVar3->m_Items + (int)uVar2));
            return;
          }
          System_Collections_Generic_List_MobileInputHoldControl_SlideButton___AddWithResize
                    (__this_00,item,(MethodInfo_3AC8070 *)pMVar4->klass->rgctx_data[0xe].method);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.MobileInputHoldControl$$SetupMovingContent
// il2cpp: void UI_MobileInputHoldControl__SetupMovingContent (UI_MobileInputHoldControl_o* __this, UnityEngine_RectTransform_o* content, bool moveContentWithTouch, const MethodInfo* method);
// 0x5c6a060

void UI_MobileInputHoldControl__SetupMovingContent
               (UI_MobileInputHoldControl_o *__this,UnityEngine_RectTransform_o *content,
               bool moveContentWithTouch,MethodInfo *method)

{
  (__this->fields)._movingContent = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._movingContent);
  (__this->fields)._moveContentWithTouch = moveContentWithTouch;
  UI_MobileInputHoldControl__ResetMovingContent(__this,(MethodInfo *)content);
  return;
}


// UI.MobileInputHoldControl$$OnPointerDown
// il2cpp: void UI_MobileInputHoldControl__OnPointerDown (UI_MobileInputHoldControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c6e6e0

void UI_MobileInputHoldControl__OnPointerDown
               (UI_MobileInputHoldControl_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields screenPosition;
  int32_t shape;
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  UnityEngine_Camera_o *pUVar3;
  MethodInfo *pMVar4;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075478dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478dc = '\x01';
  }
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._pointerId = (eventData->fields)._pointerId_k__BackingField;
  pUVar3 = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
  (__this->fields)._eventCamera = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
  (__this->fields)._pressed = true;
  (*(__this->klass->vtable)._8_OnControlPressed.methodPtr)
            (__this,(__this->klass->vtable)._8_OnControlPressed.method);
  pUVar1 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._image;
    pMVar4 = (MethodInfo *)(__this->fields)._pressedSkin;
    shape = (__this->fields)._shape;
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    UI_MobileControlSkinManager__ApplySkin(pUVar1,(UI_MobileInputSkin_o *)pMVar4,shape,in_RCX);
  }
  screenPosition = (eventData->fields)._position_k__BackingField.fields;
  pMVar4 = (MethodInfo *)
           UI_MobileInputHoldControl__GetSlideButton(__this,(UnityEngine_Vector2_o)screenPosition,pMVar4);
  UI_MobileInputHoldControl__SetActiveSlideButton(__this,(UI_MobileInputButton_o *)pMVar4,method_00);
  UI_MobileInputHoldControl__UpdateMovingContent(__this,(UnityEngine_Vector2_o)screenPosition,pMVar4);
  return;
}


// UI.MobileInputHoldControl$$OnDrag
// il2cpp: void UI_MobileInputHoldControl__OnDrag (UI_MobileInputHoldControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c6e800

void UI_MobileInputHoldControl__OnDrag
               (UI_MobileInputHoldControl_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  return;
}


// UI.MobileInputHoldControl$$OnPointerUp
// il2cpp: void UI_MobileInputHoldControl__OnPointerUp (UI_MobileInputHoldControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c6e810

void UI_MobileInputHoldControl__OnPointerUp
               (UI_MobileInputHoldControl_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((eventData->fields)._pointerId_k__BackingField == (__this->fields)._pointerId) {
    UI_MobileInputHoldControl__ResetControl(__this,(MethodInfo *)eventData);
    return;
  }
  return;
}


// UI.MobileInputHoldControl$$SetInputFromScreenPosition
// il2cpp: void UI_MobileInputHoldControl__SetInputFromScreenPosition (UI_MobileInputHoldControl_o* __this, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x5c6e5b0

void UI_MobileInputHoldControl__SetInputFromScreenPosition
               (UI_MobileInputHoldControl_o *__this,UnityEngine_Vector2_o screenPosition,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)UI_MobileInputHoldControl__GetSlideButton(__this,screenPosition,method);
  UI_MobileInputHoldControl__SetActiveSlideButton(__this,(UI_MobileInputButton_o *)method_00,method_01);
  UI_MobileInputHoldControl__UpdateMovingContent(__this,screenPosition,method_00);
  return;
}


// UI.MobileInputHoldControl$$UpdateMovingContent
// il2cpp: void UI_MobileInputHoldControl__UpdateMovingContent (UI_MobileInputHoldControl_o* __this, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x5c6ea90

void UI_MobileInputHoldControl__UpdateMovingContent
               (UI_MobileInputHoldControl_o *__this,UnityEngine_Vector2_o screenPosition,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Camera_o *cam;
  undefined1 auVar2 [16];
  bool bVar3;
  float fVar4;
  UnityEngine_Vector2_Fields value;
  undefined1 auVar5 [16];
  float fVar6;
  UnityEngine_Rect_o UVar7;
  UnityEngine_Rect_o UVar8;
  float local_68;
  UnityEngine_Vector2_Fields local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_075478dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075478dd = '\x01';
  }
  local_40.x = 0.0;
  local_40.y = 0.0;
  if ((__this->fields)._moveContentWithTouch != false) {
    pUVar1 = (__this->fields)._movingContent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar1 = (__this->fields)._rect;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        pUVar1 = (__this->fields)._rect;
        cam = (__this->fields)._eventCamera;
        if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
        }
        bVar3 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                          (pUVar1,screenPosition,cam,(UnityEngine_Vector2_o *)&local_40,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar1 = (__this->fields)._rect;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UVar7 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            pUVar1 = (__this->fields)._rect;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UVar8 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
              value = local_40;
              local_68 = UVar7.fields.m_Width;
              if (UVar8.fields.m_Height <= local_68) {
                local_68 = UVar8.fields.m_Height;
              }
              local_68 = local_68 * 0.22;
              pUVar1 = (__this->fields)._movingContent;
              auVar5._8_8_ = 0;
              auVar5._0_4_ = local_40.x;
              auVar5._4_4_ = local_40.y;
              if (Il2CppMethodInitialized_07545ca1 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                Il2CppMethodInitialized_07545ca1 = '\x01';
              }
              fVar6 = value.y * value.y;
              fVar4 = fVar6 + value.x * value.x;
              if (local_68 * local_68 < fVar4) {
                if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                  local_38 = fVar4;
                  fStack_34 = fVar6;
                  fStack_30 = fVar6;
                  fStack_2c = fVar6;
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  fVar4 = local_38;
                }
                if (fVar4 < 0.0) {
                  fVar4 = sqrtf(fVar4);
                }
                else {
                  fVar4 = SQRT(fVar4);
                }
                auVar2._4_4_ = fVar4;
                auVar2._0_4_ = fVar4;
                auVar2._8_4_ = fVar4;
                auVar2._12_4_ = fVar4;
                auVar5 = divps(auVar5,auVar2);
                value.x = auVar5._0_4_ * local_68;
                value.y = auVar5._4_4_ * local_68;
              }
              if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchoredPosition
                          (pUVar1,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
                return;
              }
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  return;
}


// UI.MobileInputHoldControl$$ResetMovingContent
// il2cpp: void UI_MobileInputHoldControl__ResetMovingContent (UI_MobileInputHoldControl_o* __this, const MethodInfo* method);
// 0x5c6e630

void UI_MobileInputHoldControl__ResetMovingContent(UI_MobileInputHoldControl_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075478de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478de = '\x01';
  }
  pUVar1 = (__this->fields)._movingContent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._movingContent;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar1,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MobileInputHoldControl$$OnControlPressed
// il2cpp: void UI_MobileInputHoldControl__OnControlPressed (UI_MobileInputHoldControl_o* __this, const MethodInfo* method);
// 0x5c6ecd0

void UI_MobileInputHoldControl__OnControlPressed(UI_MobileInputHoldControl_o *__this,MethodInfo *method)

{
  return;
}


// UI.MobileInputHoldControl$$OnControlReleased
// il2cpp: void UI_MobileInputHoldControl__OnControlReleased (UI_MobileInputHoldControl_o* __this, const MethodInfo* method);
// 0x5c6ece0

void UI_MobileInputHoldControl__OnControlReleased(UI_MobileInputHoldControl_o *__this,MethodInfo *method)

{
  return;
}


// UI.MobileInputHoldControl$$IsInputHeldByControl
// il2cpp: bool UI_MobileInputHoldControl__IsInputHeldByControl (UI_MobileInputHoldControl_o* __this, Settings_MobileInput_o* input, const MethodInfo* method);
// 0x5c6ecf0

bool UI_MobileInputHoldControl__IsInputHeldByControl
               (UI_MobileInputHoldControl_o *__this,Settings_MobileInput_o *input,MethodInfo *method)

{
  return false;
}


// UI.MobileInputHoldControl$$GetSlideButton
// il2cpp: UI_MobileInputButton_o* UI_MobileInputHoldControl__GetSlideButton (UI_MobileInputHoldControl_o* __this, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x5c6e830

UI_MobileInputButton_o *
UI_MobileInputHoldControl__GetSlideButton
          (UI_MobileInputHoldControl_o *__this,UnityEngine_Vector2_o screenPosition,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *rectTransform;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  int index;
  System_Collections_Generic_List_MobileInputHoldControl_SlideButton__o *__this_01;
  UI_MobileInputHoldControl_SlideButton_o UVar2;
  
  if (Il2CppMethodInitialized_075478df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478df = '\x01';
  }
  __this_01 = (__this->fields)._slideButtons;
  if (__this_01 != (System_Collections_Generic_List_MobileInputHoldControl_SlideButton__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return (UI_MobileInputButton_o *)0x0;
      }
      UVar2 = System_Collections_Generic_List_MobileInputHoldControl_SlideButton___get_Item
                        (__this_01,index,
                         (MethodInfo_3AC7D00 *)
                         MethodInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton_get_Item
                        );
      rectTransform = UVar2.fields.Rect;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)rectTransform,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((rectTransform == (UnityEngine_RectTransform_o *)0x0) ||
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)rectTransform,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
        bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
        if ((bVar1) &&
           (bVar1 = UI_MobileInputHoldControl__ContainsScreenPoint
                              (__this,rectTransform,screenPosition,18.0,method_00), bVar1)) {
          return UVar2.fields.Button;
        }
      }
      index = index + 1;
      __this_01 = (__this->fields)._slideButtons;
    } while (__this_01 != (System_Collections_Generic_List_MobileInputHoldControl_SlideButton__o *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.MobileInputHoldControl$$SetActiveSlideButton
// il2cpp: void UI_MobileInputHoldControl__SetActiveSlideButton (UI_MobileInputHoldControl_o* __this, UI_MobileInputButton_o* button, const MethodInfo* method);
// 0x5c6e950

void UI_MobileInputHoldControl__SetActiveSlideButton
               (UI_MobileInputHoldControl_o *__this,UI_MobileInputButton_o *button,MethodInfo *method)

{
  UI_MobileInputButton_o **targetAddress;
  UI_MobileInputButton_o *pUVar1;
  bool bVar2;
  System_Func_MobileInput__bool__o *__this_00;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075478e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInput_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478e0 = '\x01';
  }
  pUVar1 = (__this->fields)._activeSlideButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)button,(MethodInfo *)0x0);
  if (!bVar2) {
    targetAddress = &(__this->fields)._activeSlideButton;
    pUVar1 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._activeSlideButton;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInput_bool);
      in_RCX = (MethodInfo *)0x0;
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)(__this->klass->vtable)._10_IsInputHeldByControl.method,(MethodInfo_4F19300 *)0x0);
      if (pUVar1 == (UI_MobileInputButton_o *)0x0) goto label_05c6ea8b;
      UI_MobileInputButton__SetPressed_5b6de60(pUVar1,false,__this_00,in_RCX);
    }
    *targetAddress = button;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar1 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (*targetAddress != (UI_MobileInputButton_o *)0x0) {
        UI_MobileInputButton__SetPressed_5b6de60
                  (*targetAddress,true,(System_Func_MobileInput__bool__o *)0x0,in_RCX);
        return;
      }
label_05c6ea8b:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.MobileInputHoldControl$$ContainsScreenPoint
// il2cpp: bool UI_MobileInputHoldControl__ContainsScreenPoint (UI_MobileInputHoldControl_o* __this, UnityEngine_RectTransform_o* rectTransform, UnityEngine_Vector2_o screenPosition, float padding, const MethodInfo* method);
// 0x5c6ed00
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6edbe: cmp byte ptr [rip + 0x18d5f8f], 0
// asm:   0x5c6edc5: je 0x5c6ee34
// asm:   0x5c6edd7: cmp byte ptr [rip + 0x18d5f77], 0
// asm:   0x5c6edde: je 0x5c6ee6d
// asm:   0x5c6ee14: ucomiss xmm3, xmm1
// asm:   0x5c6ee17: jae 0x5c6eed8
// asm:   0x5c6ee1d: jmp 0x5c6ef52
// asm:   0x5c6ef06: jmp 0x5c6ef3e
// asm:   0x5c6efb0: addss xmm4, xmm0
// asm:   0x5c6efb4: ucomiss xmm4, xmm3
// asm:   0x5c6efb7: seta r15b
// asm:   0x5c6efbb: jmp 0x5c6ef55

bool UI_MobileInputHoldControl__ContainsScreenPoint
               (UI_MobileInputHoldControl_o *__this,UnityEngine_RectTransform_o *rectTransform,
               UnityEngine_Vector2_o screenPosition,float padding,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Camera_o *cam;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Vector2_Fields local_50;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (Il2CppMethodInitialized_075478e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075478e1 = '\x01';
  }
  local_50.x = 0.0;
  local_50.y = 0.0;
  cam = (__this->fields)._eventCamera;
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  bVar5 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (rectTransform,screenPosition,cam,(UnityEngine_Vector2_o *)&local_50,(MethodInfo *)0x0);
  if (bVar5) {
    if (rectTransform == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar11 = UnityEngine_RectTransform__get_rect(rectTransform,(MethodInfo *)0x0);
    fVar6 = UVar11.fields.m_YMin;
    fStack_40 = (float)in_XMM1_Dc;
    local_48 = (undefined1  [8])UVar11.fields._8_8_;
    fStack_3c = (float)in_XMM1_Dd;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (Il2CppMethodInitialized_07544d54 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      Il2CppMethodInitialized_07544d54 = '\x01';
      uVar1 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = *(uint32_t *)((long)TypeInfo_UnityEngine_Rect + 0xe4);
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (Il2CppMethodInitialized_07544d55 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      Il2CppMethodInitialized_07544d55 = '\x01';
      uVar1 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar7 = UVar11.fields.m_XMin - padding;
    fVar8 = local_50.x;
    fVar9 = local_50.y;
    fVar10 = local_38;
    fVar4 = fVar6;
    fVar2 = fStack_34;
    fVar3 = local_28;
    if (g_data_0754205c == '\0') {
      local_38 = fVar7;
      fStack_34 = fVar6;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      g_data_0754205c = '\x01';
      fVar7 = local_38;
      fVar10 = local_38;
      fVar4 = fStack_34;
      fVar2 = fStack_34;
      fVar3 = local_28;
    }
    fStack_34 = fVar4;
    local_38 = fVar7;
    if (local_38 <= fVar8) {
      local_28 = ((((float)local_48._0_4_ + UVar11.fields.m_XMin) - local_38) + local_38 + padding) - local_38
      ;
      if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
        uStack_24 = local_48._4_4_;
        uStack_20 = fStack_40;
        uStack_1c = fStack_3c;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        fVar7 = local_38 + local_28;
      }
      else {
        fVar7 = local_38 + local_28;
        local_38 = fVar10;
        fStack_34 = fVar2;
        local_28 = fVar3;
      }
      if ((fVar8 < fVar7) && (fVar10 = fVar6 - padding, fVar10 <= fVar9)) {
        local_48._4_4_ = (float)local_48._4_4_ + fVar6;
        local_48._0_4_ = (((float)local_48._4_4_ - fVar10) + fVar10 + padding) - fVar10;
        if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
          fStack_40 = (float)local_48._4_4_;
          fStack_3c = (float)local_48._4_4_;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        return fVar9 < fVar10 + (float)local_48._0_4_;
      }
    }
    return false;
  }
  return false;
}


// UI.MobileInputHoldControl$$ContainsInput
// il2cpp: bool UI_MobileInputHoldControl__ContainsInput (Settings_MobileInput_array* inputs, Settings_MobileInput_o* input, const MethodInfo* method);
// 0x5c6e2b0

bool UI_MobileInputHoldControl__ContainsInput
               (Settings_MobileInput_array *inputs,Settings_MobileInput_o *input,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((inputs != (Settings_MobileInput_array *)0x0) && (input != (Settings_MobileInput_o *)0x0)) {
    iVar1 = (int)inputs->max_length;
    if (iVar1 < 1) {
      return false;
    }
    iVar2 = 0;
    do {
      if (inputs->m_Items[iVar2] == input) {
        return true;
      }
      bVar3 = iVar1 + -1 != iVar2;
      iVar2 = iVar2 + 1;
    } while (bVar3);
  }
  return false;
}


// UI.MobileInputHoldControl$$ResetControl
// il2cpp: void UI_MobileInputHoldControl__ResetControl (UI_MobileInputHoldControl_o* __this, const MethodInfo* method);
// 0x5c6e450

void UI_MobileInputHoldControl__ResetControl(UI_MobileInputHoldControl_o *__this,MethodInfo *method)

{
  int32_t shape;
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075478e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478e2 = '\x01';
  }
  bVar2 = (__this->fields)._pressed;
  (__this->fields)._pointerId = -0x80000000;
  (__this->fields)._eventCamera = (UnityEngine_Camera_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
  (__this->fields)._pressed = false;
  UI_MobileInputHoldControl__SetActiveSlideButton(__this,(UI_MobileInputButton_o *)0x0,method_00);
  if (bVar2 != false) {
    (*(__this->klass->vtable)._9_OnControlReleased.methodPtr)
              (__this,(__this->klass->vtable)._9_OnControlReleased.method);
  }
  pUVar1 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._image;
    method_01 = (MethodInfo *)(__this->fields)._normalSkin;
    shape = (__this->fields)._shape;
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    UI_MobileControlSkinManager__ApplySkin(pUVar1,(UI_MobileInputSkin_o *)method_01,shape,in_RCX);
  }
  UI_MobileInputHoldControl__ResetMovingContent(__this,method_01);
  return;
}


// UI.MobileInputHoldControl$$.ctor
// il2cpp: void UI_MobileInputHoldControl___ctor (UI_MobileInputHoldControl_o* __this, const MethodInfo* method);
// 0x5c6e3b0

void UI_MobileInputHoldControl___ctor(UI_MobileInputHoldControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MobileInputHoldControl_SlideButton__o *__this_00;
  
  if (Il2CppMethodInitialized_075478e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton);
    Il2CppMethodInitialized_075478e3 = '\x01';
  }
  (__this->fields)._pointerId = -0x80000000;
  (__this->fields)._moveContentWithTouch = true;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton);
  System_Collections_Generic_List_MobileInputHoldControl_SlideButton____ctor
            (__this_00,
             (MethodInfo_3AC76F0 *)
             MethodInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton_ctor);
  (__this->fields)._slideButtons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._slideButtons);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


