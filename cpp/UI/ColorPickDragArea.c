// Type: UI.ColorPickDragArea
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/ColorPickDragArea.cs
// Prior real C# source: none
// --------------------------------

// UI.ColorPickDragArea$$Setup
// il2cpp: void UI_ColorPickDragArea__Setup (UI_ColorPickDragArea_o* __this, int32_t mode, System_Action_float__float__o* onChanged, const MethodInfo* method);
// 0x5cb9fe0

void UI_ColorPickDragArea__Setup
               (UI_ColorPickDragArea_o *__this,int32_t mode,System_Action_float__float__o *onChanged,
               MethodInfo *method)

{
  (__this->fields)._mode = mode;
  (__this->fields)._onChanged = onChanged;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onChanged);
  return;
}


// UI.ColorPickDragArea$$OnPointerDown
// il2cpp: void UI_ColorPickDragArea__OnPointerDown (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5cbc350

void UI_ColorPickDragArea__OnPointerDown
               (UI_ColorPickDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UI_ColorPickDragArea__Notify(__this,eventData,method);
  return;
}


// UI.ColorPickDragArea$$OnDrag
// il2cpp: void UI_ColorPickDragArea__OnDrag (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5cbc5c0

void UI_ColorPickDragArea__OnDrag
               (UI_ColorPickDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UI_ColorPickDragArea__Notify(__this,eventData,method);
  return;
}


// UI.ColorPickDragArea$$Notify
// il2cpp: void UI_ColorPickDragArea__Notify (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5cbc360

void UI_ColorPickDragArea__Notify
               (UI_ColorPickDragArea_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  int iVar1;
  System_Action_float__float__o *pSVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Camera_o *cam;
  UnityEngine_RectTransform_o *rect;
  float fVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar7;
  uint uVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector2_Fields UStack_40;
  undefined1 auStack_38 [8];
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [16];
  
  if (Il2CppMethodInitialized_07547af1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547af1 = '\x01';
  }
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  pUVar5 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  rect = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
     (rect = (UnityEngine_RectTransform_o *)0x0, pUVar5->klass == TypeInfo_UnityEngine_RectTransform)) {
    rect = pUVar5;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar4) || ((__this->fields)._onChanged == (System_Action_float__float__o *)0x0)) {
    return;
  }
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    _fStack_30 = 0;
    auStack_38 = (undefined1  [8])(eventData->fields)._position_k__BackingField.fields;
    cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    bVar4 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (rect,(UnityEngine_Vector2_o)auStack_38,cam,(UnityEngine_Vector2_o *)&UStack_40,
                       (MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UVar10 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      fStack_30 = (float)extraout_XMM0_Dc;
      auStack_38 = (undefined1  [8])UVar10.fields._0_8_;
      fStack_2c = (float)extraout_XMM0_Dd;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      UVar10 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      fVar7 = UVar10.fields.m_Width + UVar10.fields.m_XMin;
      uVar8 = 0;
      if (((float)auStack_38._0_4_ != fVar7) || (NAN((float)auStack_38._0_4_) || NAN(fVar7))) {
        fVar9 = (UStack_40.x - (float)auStack_38._0_4_) / (fVar7 - (float)auStack_38._0_4_);
        fVar7 = 1.0;
        if (fVar9 <= 1.0) {
          fVar7 = fVar9;
        }
        uVar8 = -(uint)(0.0 <= fVar9) & (uint)fVar7;
      }
      auStack_28 = ZEXT416(uVar8);
      UVar10 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      auStack_38._4_4_ = UVar10.fields.m_YMin;
      auStack_38._0_4_ = auStack_38._4_4_;
      fStack_30 = (float)auStack_38._4_4_;
      fStack_2c = (float)auStack_38._4_4_;
      UVar10 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      fVar9 = UVar10.fields.m_Height + UVar10.fields.m_YMin;
      fVar7 = 0.0;
      if (((float)auStack_38._0_4_ != fVar9) || (NAN((float)auStack_38._0_4_) || NAN(fVar9))) {
        fVar9 = (UStack_40.y - (float)auStack_38._0_4_) / (fVar9 - (float)auStack_38._0_4_);
        fVar7 = 1.0;
        if (fVar9 <= 1.0) {
          fVar7 = fVar9;
        }
        fVar7 = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar7);
      }
      pSVar2 = (__this->fields)._onChanged;
      if (pSVar2 != (System_Action_float__float__o *)0x0) {
        iVar1 = (__this->fields)._mode;
        fVar9 = 0.0;
        if (iVar1 != 2) {
          fVar9 = (float)auStack_28._0_4_;
        }
        fVar3 = 0.0;
        if (iVar1 != 1) {
          fVar3 = fVar7;
        }
        fVar7 = 1.0;
        if (fVar3 <= 1.0) {
          fVar7 = fVar3;
        }
        fVar6 = (float)auStack_28._0_4_;
        if (iVar1 != 1) {
          fVar6 = fVar9;
        }
        fVar9 = 1.0;
        if (fVar6 <= 1.0) {
          fVar9 = fVar6;
        }
        (*(code *)(pSVar2->fields).invoke_impl)
                  (-(uint)(0.0 <= fVar6) & (uint)fVar9,-(uint)(0.0 <= fVar3) & (uint)fVar7,
                   (pSVar2->fields).method_code,(pSVar2->fields).method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ColorPickDragArea$$.ctor
// il2cpp: void UI_ColorPickDragArea___ctor (UI_ColorPickDragArea_o* __this, const MethodInfo* method);
// 0x5cbc5d0

void UI_ColorPickDragArea___ctor(UI_ColorPickDragArea_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


