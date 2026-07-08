// Type: UI.ColorPickDragArea
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ColorPickDragArea.cs
// Prior source: NEW in this update
// --------------------------------

// UI.ColorPickDragArea$$Setup
// il2cpp: void UI_ColorPickDragArea__Setup (UI_ColorPickDragArea_o* __this, int32_t mode, System_Action_float__float__o* onChanged, const MethodInfo* method);
// 0x401f1a0

void UI_ColorPickDragArea__Setup
               (UI_ColorPickDragArea_o *__this,int32_t mode,System_Action_float__float__o *onChanged
               ,MethodInfo *method)

{
  (__this->fields)._mode = mode;
  (__this->fields)._onChanged = onChanged;
  il2cpp_runtime_glue(&(__this->fields)._onChanged,onChanged);
  return;
}


// UI.ColorPickDragArea$$OnPointerDown
// il2cpp: void UI_ColorPickDragArea__OnPointerDown (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x40214f0

void UI_ColorPickDragArea__OnPointerDown
               (UI_ColorPickDragArea_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Camera_o *cam;
  System_Action_float__float__o *pSVar4;
  UnityEngine_RectTransform_o *rect;
  float fVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_Fields UStack_40;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_24;
  
  if (DAT_057042e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_057042e7 = '\x01';
  }
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  rect = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
     (rect = (UnityEngine_RectTransform_o *)0x0, pUVar3->klass == TypeInfo_RectTransform)) {
    rect = pUVar3;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if ((__this->fields)._onChanged == (System_Action_float__float__o *)0x0) {
    return;
  }
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto LAB_04021717;
  auStack_38._8_8_ = 0;
  auStack_38._0_8_ = (eventData->fields)._position_k__BackingField.fields;
  cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (rect,(UnityEngine_Vector2_o)auStack_38._0_8_,cam,
                     (UnityEngine_Vector2_o *)&UStack_40,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) goto LAB_04021717;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  auStack_38._8_4_ = extraout_XMM0_Dc;
  auStack_38._0_8_ = UVar8.fields._0_8_;
  auStack_38._12_4_ = extraout_XMM0_Dd;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fVar6 = UVar8.fields.m_Width + UVar8.fields.m_XMin;
  if (((float)auStack_38._0_4_ != fVar6) ||
     (fVar7 = 0.0, NAN((float)auStack_38._0_4_) || NAN(fVar6))) {
    fVar6 = (UStack_40.x - (float)auStack_38._0_4_) / (fVar6 - (float)auStack_38._0_4_);
    fVar7 = 0.0;
    if ((0.0 <= fVar6) && (fVar7 = 1.0, fVar6 <= 1.0)) {
      fVar7 = fVar6;
    }
  }
  auStack_38._0_4_ = fVar7;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fStack_28 = UVar8.fields.m_YMin;
  fStack_24 = fStack_28;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fVar6 = UVar8.fields.m_YMin + UVar8.fields.m_Height;
  if ((fStack_28 != fVar6) || (fVar7 = 0.0, NAN(fStack_28) || NAN(fVar6))) {
    fVar6 = (UStack_40.y - fStack_28) / (fVar6 - fStack_28);
    fVar7 = 0.0;
    if ((0.0 <= fVar6) && (fVar7 = 1.0, fVar6 <= 1.0)) {
      fVar7 = fVar6;
    }
  }
  iVar1 = (__this->fields)._mode;
  fVar5 = 0.0;
  fVar6 = 0.0;
  if ((iVar1 == 1) || (fVar6 = fVar7, iVar1 != 2)) {
    pSVar4 = (__this->fields)._onChanged;
    fVar7 = (float)auStack_38._0_4_;
    if (0.0 <= (float)auStack_38._0_4_) goto LAB_040216f3;
  }
  else {
    pSVar4 = (__this->fields)._onChanged;
    fVar7 = 0.0;
LAB_040216f3:
    fVar5 = fVar7;
  }
  if (pSVar4 != (System_Action_float__float__o *)0x0) {
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
    (*(code *)(pSVar4->fields).invoke_impl)
              (fVar5,fVar7,(pSVar4->fields).method_code,(pSVar4->fields).method);
    return;
  }
LAB_04021717:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickDragArea$$OnDrag
// il2cpp: void UI_ColorPickDragArea__OnDrag (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4021720

void UI_ColorPickDragArea__OnDrag
               (UI_ColorPickDragArea_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Camera_o *cam;
  System_Action_float__float__o *pSVar4;
  UnityEngine_RectTransform_o *rect;
  float fVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_Fields UStack_40;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_24;
  
  if (DAT_057042e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_057042e7 = '\x01';
  }
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  rect = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
     (rect = (UnityEngine_RectTransform_o *)0x0, pUVar3->klass == TypeInfo_RectTransform)) {
    rect = pUVar3;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if ((__this->fields)._onChanged == (System_Action_float__float__o *)0x0) {
    return;
  }
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto LAB_04021717;
  auStack_38._8_8_ = 0;
  auStack_38._0_8_ = (eventData->fields)._position_k__BackingField.fields;
  cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (rect,(UnityEngine_Vector2_o)auStack_38._0_8_,cam,
                     (UnityEngine_Vector2_o *)&UStack_40,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) goto LAB_04021717;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  auStack_38._8_4_ = extraout_XMM0_Dc;
  auStack_38._0_8_ = UVar8.fields._0_8_;
  auStack_38._12_4_ = extraout_XMM0_Dd;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fVar6 = UVar8.fields.m_Width + UVar8.fields.m_XMin;
  if (((float)auStack_38._0_4_ != fVar6) ||
     (fVar7 = 0.0, NAN((float)auStack_38._0_4_) || NAN(fVar6))) {
    fVar6 = (UStack_40.x - (float)auStack_38._0_4_) / (fVar6 - (float)auStack_38._0_4_);
    fVar7 = 0.0;
    if ((0.0 <= fVar6) && (fVar7 = 1.0, fVar6 <= 1.0)) {
      fVar7 = fVar6;
    }
  }
  auStack_38._0_4_ = fVar7;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fStack_28 = UVar8.fields.m_YMin;
  fStack_24 = fStack_28;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fVar6 = UVar8.fields.m_YMin + UVar8.fields.m_Height;
  if ((fStack_28 != fVar6) || (fVar7 = 0.0, NAN(fStack_28) || NAN(fVar6))) {
    fVar6 = (UStack_40.y - fStack_28) / (fVar6 - fStack_28);
    fVar7 = 0.0;
    if ((0.0 <= fVar6) && (fVar7 = 1.0, fVar6 <= 1.0)) {
      fVar7 = fVar6;
    }
  }
  iVar1 = (__this->fields)._mode;
  fVar5 = 0.0;
  fVar6 = 0.0;
  if ((iVar1 == 1) || (fVar6 = fVar7, iVar1 != 2)) {
    pSVar4 = (__this->fields)._onChanged;
    fVar7 = (float)auStack_38._0_4_;
    if (0.0 <= (float)auStack_38._0_4_) goto LAB_040216f3;
  }
  else {
    pSVar4 = (__this->fields)._onChanged;
    fVar7 = 0.0;
LAB_040216f3:
    fVar5 = fVar7;
  }
  if (pSVar4 != (System_Action_float__float__o *)0x0) {
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
    (*(code *)(pSVar4->fields).invoke_impl)
              (fVar5,fVar7,(pSVar4->fields).method_code,(pSVar4->fields).method);
    return;
  }
LAB_04021717:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickDragArea$$Notify
// il2cpp: void UI_ColorPickDragArea__Notify (UI_ColorPickDragArea_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4021500

void UI_ColorPickDragArea__Notify
               (UI_ColorPickDragArea_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Camera_o *cam;
  System_Action_float__float__o *pSVar4;
  UnityEngine_RectTransform_o *rect;
  float fVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_Fields UStack_40;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_24;
  
  if (DAT_057042e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_057042e7 = '\x01';
  }
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  rect = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
     (rect = (UnityEngine_RectTransform_o *)0x0, pUVar3->klass == TypeInfo_RectTransform)) {
    rect = pUVar3;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if ((__this->fields)._onChanged == (System_Action_float__float__o *)0x0) {
    return;
  }
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto LAB_04021717;
  auStack_38._8_8_ = 0;
  auStack_38._0_8_ = (eventData->fields)._position_k__BackingField.fields;
  cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (rect,(UnityEngine_Vector2_o)auStack_38._0_8_,cam,
                     (UnityEngine_Vector2_o *)&UStack_40,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) goto LAB_04021717;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  auStack_38._8_4_ = extraout_XMM0_Dc;
  auStack_38._0_8_ = UVar8.fields._0_8_;
  auStack_38._12_4_ = extraout_XMM0_Dd;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fVar6 = UVar8.fields.m_Width + UVar8.fields.m_XMin;
  if (((float)auStack_38._0_4_ != fVar6) ||
     (fVar7 = 0.0, NAN((float)auStack_38._0_4_) || NAN(fVar6))) {
    fVar6 = (UStack_40.x - (float)auStack_38._0_4_) / (fVar6 - (float)auStack_38._0_4_);
    fVar7 = 0.0;
    if ((0.0 <= fVar6) && (fVar7 = 1.0, fVar6 <= 1.0)) {
      fVar7 = fVar6;
    }
  }
  auStack_38._0_4_ = fVar7;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fStack_28 = UVar8.fields.m_YMin;
  fStack_24 = fStack_28;
  UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fVar6 = UVar8.fields.m_YMin + UVar8.fields.m_Height;
  if ((fStack_28 != fVar6) || (fVar7 = 0.0, NAN(fStack_28) || NAN(fVar6))) {
    fVar6 = (UStack_40.y - fStack_28) / (fVar6 - fStack_28);
    fVar7 = 0.0;
    if ((0.0 <= fVar6) && (fVar7 = 1.0, fVar6 <= 1.0)) {
      fVar7 = fVar6;
    }
  }
  iVar1 = (__this->fields)._mode;
  fVar5 = 0.0;
  fVar6 = 0.0;
  if ((iVar1 == 1) || (fVar6 = fVar7, iVar1 != 2)) {
    pSVar4 = (__this->fields)._onChanged;
    fVar7 = (float)auStack_38._0_4_;
    if (0.0 <= (float)auStack_38._0_4_) goto LAB_040216f3;
  }
  else {
    pSVar4 = (__this->fields)._onChanged;
    fVar7 = 0.0;
LAB_040216f3:
    fVar5 = fVar7;
  }
  if (pSVar4 != (System_Action_float__float__o *)0x0) {
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
    (*(code *)(pSVar4->fields).invoke_impl)
              (fVar5,fVar7,(pSVar4->fields).method_code,(pSVar4->fields).method);
    return;
  }
LAB_04021717:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickDragArea$$.ctor
// il2cpp: void UI_ColorPickDragArea___ctor (UI_ColorPickDragArea_o* __this, const MethodInfo* method);
// 0x4021730

void UI_ColorPickDragArea___ctor(UI_ColorPickDragArea_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


