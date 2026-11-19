// Type: UI.MobileInputJoystick
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileInputJoystick.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputJoystick$$get_ActiveJoystick
// il2cpp: UI_MobileInputJoystick_o* UI_MobileInputJoystick__get_ActiveJoystick (const MethodInfo* method);
// 0x5c6f5b0

UI_MobileInputJoystick_o * UI_MobileInputJoystick__get_ActiveJoystick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_075478ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputJoystick);
    Il2CppMethodInitialized_075478ea = '\x01';
  }
  return TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField;
}


// UI.MobileInputJoystick$$set_ActiveJoystick
// il2cpp: void UI_MobileInputJoystick__set_ActiveJoystick (UI_MobileInputJoystick_o* value, const MethodInfo* method);
// 0x5c6f5f0

void UI_MobileInputJoystick__set_ActiveJoystick(UI_MobileInputJoystick_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075478eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputJoystick);
    Il2CppMethodInitialized_075478eb = '\x01';
  }
  TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField);
  return;
}


// UI.MobileInputJoystick$$get_PulledPastReelOutRing
// il2cpp: bool UI_MobileInputJoystick__get_PulledPastReelOutRing (UI_MobileInputJoystick_o* __this, const MethodInfo* method);
// 0x5c6f640

bool UI_MobileInputJoystick__get_PulledPastReelOutRing(UI_MobileInputJoystick_o *__this,MethodInfo *method)

{
  return (__this->fields)._PulledPastReelOutRing_k__BackingField;
}


// UI.MobileInputJoystick$$set_PulledPastReelOutRing
// il2cpp: void UI_MobileInputJoystick__set_PulledPastReelOutRing (UI_MobileInputJoystick_o* __this, bool value, const MethodInfo* method);
// 0x5c6f650

void UI_MobileInputJoystick__set_PulledPastReelOutRing
               (UI_MobileInputJoystick_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._PulledPastReelOutRing_k__BackingField = value;
  return;
}


// UI.MobileInputJoystick$$get_ReelInAngle
// il2cpp: float UI_MobileInputJoystick__get_ReelInAngle (UI_MobileInputJoystick_o* __this, const MethodInfo* method);
// 0x5c6f660

float UI_MobileInputJoystick__get_ReelInAngle(UI_MobileInputJoystick_o *__this,MethodInfo *method)

{
  return (__this->fields)._reelInAngle;
}


// UI.MobileInputJoystick$$get_ReelOutAngle
// il2cpp: float UI_MobileInputJoystick__get_ReelOutAngle (UI_MobileInputJoystick_o* __this, const MethodInfo* method);
// 0x5c6f670

float UI_MobileInputJoystick__get_ReelOutAngle(UI_MobileInputJoystick_o *__this,MethodInfo *method)

{
  return (__this->fields)._reelOutAngle;
}


// UI.MobileInputJoystick$$Setup
// il2cpp: void UI_MobileInputJoystick__Setup (UI_MobileInputJoystick_o* __this, UnityEngine_RectTransform_o* joystickBase, UnityEngine_RectTransform_o* handle, float radius, UnityEngine_UI_Image_o* reelOutRingImage, float reelOutActivationRadius, UI_MobileInputSkin_o* normalSkin, UI_MobileInputSkin_o* activeSkin, UI_MobileInputSkin_o* reelRingSkin, UI_MobileInputSkin_o* reelInSkin, UI_MobileInputSkin_o* reelOutSkin, int32_t shape, float reelInAngle, float reelOutAngle, const MethodInfo* method);
// 0x5c68b60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c68d01: lea rdi, [rbx + 0x38]
// asm:   0x5c68d05: jmp 0x5c68d13

void UI_MobileInputJoystick__Setup
               (UI_MobileInputJoystick_o *__this,UnityEngine_RectTransform_o *joystickBase,
               UnityEngine_RectTransform_o *handle,float radius,UnityEngine_UI_Image_o *reelOutRingImage,
               float reelOutActivationRadius,UI_MobileInputSkin_o *normalSkin,UI_MobileInputSkin_o *activeSkin
               ,UI_MobileInputSkin_o *reelRingSkin,UI_MobileInputSkin_o *reelInSkin,
               UI_MobileInputSkin_o *reelOutSkin,int32_t shape,float reelInAngle,float reelOutAngle,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  UnityEngine_RectTransform_c *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_RectTransform_c **method_00;
  MethodInfo *method_01;
  UnityEngine_Vector2_Fields UVar4;
  undefined1 auVar5 [16];
  undefined4 in_XMM2_Db;
  
  method_00 = (UnityEngine_RectTransform_c **)reelOutRingImage;
  if (Il2CppMethodInitialized_075478ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_075478ec = '\x01';
  }
  targetAddress = &(__this->fields)._base;
  (__this->fields)._base = joystickBase;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields)._handle = handle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._handle);
  (__this->fields)._radius = radius;
  (__this->fields)._reelOutRingImage = reelOutRingImage;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._reelOutRingImage);
  (__this->fields)._reelOutActivationRadius = reelOutActivationRadius;
  auVar5._4_4_ = 180.0 - reelOutAngle;
  auVar5._0_4_ = reelInAngle;
  auVar5._8_4_ = in_XMM2_Db;
  auVar5._12_4_ = 0;
  auVar5 = minps(_DAT_01006360,auVar5);
  (__this->fields)._reelInAngle = (float)(-(uint)(0.0 <= reelInAngle) & auVar5._0_4_);
  (__this->fields)._reelOutAngle = (float)(-(uint)(0.0 <= 180.0 - reelOutAngle) & auVar5._4_4_);
  (__this->fields)._normalSkin = normalSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._normalSkin);
  (__this->fields)._activeSkin = activeSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeSkin);
  (__this->fields)._reelRingSkin = reelRingSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._reelRingSkin);
  (__this->fields)._reelInSkin = reelInSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._reelInSkin);
  (__this->fields)._reelOutSkin = reelOutSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._reelOutSkin);
  (__this->fields)._shape = shape;
  pUVar2 = (__this->fields)._base;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
    pUVar1 = TypeInfo_UnityEngine_RectTransform;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields)._parentRect = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      method_00 = &TypeInfo_UnityEngine_RectTransform;
      if ((pUVar2->klass != TypeInfo_UnityEngine_RectTransform) ||
         ((__this->fields)._parentRect = pUVar2, pUVar2->klass != pUVar1)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._parentRect);
    pUVar2 = *targetAddress;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      (__this->fields)._restPosition.fields = UVar4;
      pUVar2 = (__this->fields)._base;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
        (__this->fields)._image = pUVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
        UI_MobileInputJoystick__ApplyBaseSkin(__this,(__this->fields)._normalSkin,method_01);
        UI_MobileInputJoystick__SetReelRingColor(__this,false,false,(MethodInfo *)method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputJoystick$$OnDisable
// il2cpp: void UI_MobileInputJoystick__OnDisable (UI_MobileInputJoystick_o* __this, const MethodInfo* method);
// 0x5c6f750

void UI_MobileInputJoystick__OnDisable(UI_MobileInputJoystick_o *__this,MethodInfo *method)

{
  UI_MobileInputJoystick__ResetJoystick(__this,method);
  return;
}


// UI.MobileInputJoystick$$Update
// il2cpp: void UI_MobileInputJoystick__Update (UI_MobileInputJoystick_o* __this, const MethodInfo* method);
// 0x5c6f990

void UI_MobileInputJoystick__Update(UI_MobileInputJoystick_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  UnityEngine_Vector2_Fields local_10;
  
  local_10.x = 0.0;
  local_10.y = 0.0;
  if ((__this->fields)._pressed != false) {
    method_00 = (MethodInfo *)&local_10;
    bVar1 = Utility_MobilePlatformUtility__TryGetHeldPointerPosition
                      ((__this->fields)._pointerId,(UnityEngine_Vector2_o *)method_00,(MethodInfo *)0x0);
    if (!bVar1) {
      UI_MobileInputJoystick__ResetJoystick(__this,method_00);
      return;
    }
    UI_MobileInputJoystick__SetInputFromScreenPosition(__this,(UnityEngine_Vector2_o)local_10,method_00);
  }
  return;
}


// UI.MobileInputJoystick$$OnInitializePotentialDrag
// il2cpp: void UI_MobileInputJoystick__OnInitializePotentialDrag (UI_MobileInputJoystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c6fba0

void UI_MobileInputJoystick__OnInitializePotentialDrag
               (UI_MobileInputJoystick_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  (eventData->fields)._useDragThreshold_k__BackingField = false;
  return;
}


// UI.MobileInputJoystick$$OnPointerDown
// il2cpp: void UI_MobileInputJoystick__OnPointerDown (UI_MobileInputJoystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c6fbc0

void UI_MobileInputJoystick__OnPointerDown
               (UI_MobileInputJoystick_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o localPoint;
  undefined1 auVar3 [16];
  bool bVar4;
  UnityEngine_Camera_o *pUVar5;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  UnityEngine_Vector2_Fields UStack_50;
  undefined1 auStack_48 [16];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_075478ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_075478ed = '\x01';
  }
  UStack_50.x = 0.0;
  UStack_50.y = 0.0;
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto label_05c6fe14;
  (__this->fields)._pointerId = (eventData->fields)._pointerId_k__BackingField;
  pUVar5 = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
  (__this->fields)._eventCamera = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
  (__this->fields)._pressed = true;
  if (Il2CppMethodInitialized_07547977 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputJoystick);
    Il2CppMethodInitialized_07547977 = '\x01';
  }
  TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField);
  pUVar2 = (__this->fields)._base;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pUVar2 = (__this->fields)._parentRect;
  pUVar5 = (__this->fields)._eventCamera;
  UVar1 = (eventData->fields)._position_k__BackingField.fields;
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            (pUVar2,(UnityEngine_Vector2_o)UVar1,pUVar5,(UnityEngine_Vector2_o *)&UStack_50,(MethodInfo *)0x0)
  ;
  UVar1 = (__this->fields)._restPosition.fields;
  auVar12._0_4_ = UStack_50.x - UVar1.x;
  auVar12._4_4_ = UStack_50.y - UVar1.y;
  auVar12._8_8_ = 0;
  fVar7 = (__this->fields)._radius;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  if (g_data_07545ca1 == '\0') {
    auStack_48 = ZEXT416((uint)fVar7);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_07545ca1 = '\x01';
    fVar7 = (float)auStack_48._0_4_;
    uVar8 = auStack_48._4_4_;
    uVar9 = auStack_48._8_4_;
    uVar10 = auStack_48._12_4_;
  }
  fVar13 = auVar12._4_4_ * auVar12._4_4_;
  fVar6 = fVar13 + auVar12._0_4_ * auVar12._0_4_;
  if (fVar7 * fVar7 < fVar6) {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      auStack_48._4_4_ = uVar8;
      auStack_48._0_4_ = fVar7;
      auStack_48._8_4_ = uVar9;
      auStack_48._12_4_ = uVar10;
      fStack_38 = fVar6;
      fStack_34 = fVar13;
      fStack_30 = fVar13;
      fStack_2c = fVar13;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      fVar6 = fStack_38;
      fVar7 = (float)auStack_48._0_4_;
      uVar8 = auStack_48._4_4_;
      uVar9 = auStack_48._8_4_;
      uVar10 = auStack_48._12_4_;
      if (0.0 <= fStack_38) goto label_05c6fd70;
label_05c6fd9f:
      auStack_48._4_4_ = uVar8;
      auStack_48._0_4_ = fVar7;
      auStack_48._8_4_ = uVar9;
      auStack_48._12_4_ = uVar10;
      fVar6 = sqrtf(fVar6);
      fVar7 = (float)auStack_48._0_4_;
    }
    else {
      if (fVar6 < 0.0) goto label_05c6fd9f;
label_05c6fd70:
      fVar6 = SQRT(fVar6);
    }
    auVar11._4_4_ = fVar6;
    auVar11._0_4_ = fVar6;
    auVar11._8_4_ = fVar6;
    auVar11._12_4_ = fVar6;
    auVar11 = divps(auVar12,auVar11);
    auVar12._0_4_ = auVar11._0_4_ * fVar7;
    auVar12._4_4_ = auVar11._4_4_ * fVar7;
    auVar12._8_4_ = auVar11._8_4_ * fVar7;
    auVar12._12_4_ = auVar11._12_4_ * fVar7;
  }
  pUVar2 = (__this->fields)._base;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    fVar7 = (__this->fields)._radius;
    auVar3._4_4_ = fVar7;
    auVar3._0_4_ = fVar7;
    auVar3._8_4_ = fVar7;
    auVar3._12_4_ = fVar7;
    auVar12 = divps(auVar12,auVar3);
    method_00 = (MethodInfo *)0x0;
    value.fields.y = UStack_50.y - fVar7 * auVar12._4_4_;
    value.fields.x = UStack_50.x - fVar7 * auVar12._0_4_;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value,(MethodInfo *)0x0);
    fVar7 = (__this->fields)._radius;
    localPoint.fields.y = fVar7 * auVar12._4_4_;
    localPoint.fields.x = fVar7 * auVar12._0_4_;
    UI_MobileInputJoystick__SetInput(__this,(UnityEngine_Vector2_o)auVar12._0_8_,localPoint,method_00);
    return;
  }
label_05c6fe14:
  ThrowNullReferenceException();
}


// UI.MobileInputJoystick$$OnDrag
// il2cpp: void UI_MobileInputJoystick__OnDrag (UI_MobileInputJoystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c6ff90

void UI_MobileInputJoystick__OnDrag
               (UI_MobileInputJoystick_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((eventData->fields)._pointerId_k__BackingField != (__this->fields)._pointerId) {
    return;
  }
  if (Il2CppMethodInitialized_07547977 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputJoystick);
    Il2CppMethodInitialized_07547977 = '\x01';
  }
  TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField);
  return;
}


// UI.MobileInputJoystick$$OnPointerUp
// il2cpp: void UI_MobileInputJoystick__OnPointerUp (UI_MobileInputJoystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70000

void UI_MobileInputJoystick__OnPointerUp
               (UI_MobileInputJoystick_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((eventData->fields)._pointerId_k__BackingField == (__this->fields)._pointerId) {
    UI_MobileInputJoystick__ResetJoystick(__this,(MethodInfo *)eventData);
    return;
  }
  return;
}


// UI.MobileInputJoystick$$SetInput
// il2cpp: void UI_MobileInputJoystick__SetInput (UI_MobileInputJoystick_o* __this, UnityEngine_Vector2_o input, UnityEngine_Vector2_o localPoint, const MethodInfo* method);
// 0x5c6fe20

void UI_MobileInputJoystick__SetInput
               (UI_MobileInputJoystick_o *__this,UnityEngine_Vector2_o input,UnityEngine_Vector2_o localPoint,
               MethodInfo *method)

{
  float fVar1;
  UI_MobileInputJoystick_o *x;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o value;
  bool bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_075478ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478ee = '\x01';
  }
  fVar1 = (__this->fields)._reelOutActivationRadius;
  (__this->fields)._PulledPastReelOutRing_k__BackingField =
       fVar1 * fVar1 < localPoint.fields.y * localPoint.fields.y + localPoint.fields.x * localPoint.fields.x;
  if (Il2CppMethodInitialized_07547976 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputJoystick);
    Il2CppMethodInitialized_07547976 = '\x01';
  }
  x = TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (bVar3) {
    if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    }
    Settings_MobileInputBridge__SetMoveVector(input,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  local_48 = input.fields.x;
  fStack_44 = input.fields.y;
  UI_MobileInputJoystick__ApplyBaseSkin
            (__this,(&(__this->fields)._normalSkin)[0.01 < fStack_44 * fStack_44 + local_48 * local_48],
             method_00);
  pUVar2 = (__this->fields)._handle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._handle;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar1 = (__this->fields)._radius;
    value.fields.y = fVar1 * fStack_44;
    value.fields.x = fVar1 * local_48;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MobileInputJoystick$$SetInputFromScreenPosition
// il2cpp: void UI_MobileInputJoystick__SetInputFromScreenPosition (UI_MobileInputJoystick_o* __this, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x5c6f9f0

void UI_MobileInputJoystick__SetInputFromScreenPosition
               (UI_MobileInputJoystick_o *__this,UnityEngine_Vector2_o screenPosition,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  undefined1 auVar2 [16];
  UnityEngine_Vector2_Fields UVar3;
  bool bVar4;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  UnityEngine_Vector2_Fields local_50;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_075478ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_075478ef = '\x01';
  }
  local_50.x = 0.0;
  local_50.y = 0.0;
  pUVar1 = (__this->fields)._base;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pUVar1 = (__this->fields)._base;
  method_00 = (MethodInfo *)(__this->fields)._eventCamera;
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            (pUVar1,screenPosition,(UnityEngine_Camera_o *)method_00,(UnityEngine_Vector2_o *)&local_50,
             (MethodInfo *)0x0);
  UVar3 = local_50;
  auVar11._8_8_ = 0;
  auVar11._0_4_ = local_50.x;
  auVar11._4_4_ = local_50.y;
  fVar6 = (__this->fields)._radius;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  if (g_data_07545ca1 == '\0') {
    local_48 = ZEXT416((uint)fVar6);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_07545ca1 = '\x01';
    fVar6 = (float)local_48._0_4_;
    uVar7 = local_48._4_4_;
    uVar8 = local_48._8_4_;
    uVar9 = local_48._12_4_;
  }
  fVar5 = UVar3.x;
  fVar12 = UVar3.y;
  fVar12 = fVar12 * fVar12;
  fVar5 = fVar12 + fVar5 * fVar5;
  if (fVar5 <= fVar6 * fVar6) goto label_05c6fb66;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    local_48._4_4_ = uVar7;
    local_48._0_4_ = fVar6;
    local_48._8_4_ = uVar8;
    local_48._12_4_ = uVar9;
    local_38 = fVar5;
    fStack_34 = fVar12;
    fStack_30 = fVar12;
    fStack_2c = fVar12;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar5 = local_38;
    fVar6 = (float)local_48._0_4_;
    uVar7 = local_48._4_4_;
    uVar8 = local_48._8_4_;
    uVar9 = local_48._12_4_;
    if (0.0 <= local_38) goto label_05c6fb12;
label_05c6fb41:
    local_48._4_4_ = uVar7;
    local_48._0_4_ = fVar6;
    local_48._8_4_ = uVar8;
    local_48._12_4_ = uVar9;
    fVar5 = sqrtf(fVar5);
    fVar6 = (float)local_48._0_4_;
  }
  else {
    if (fVar5 < 0.0) goto label_05c6fb41;
label_05c6fb12:
    fVar5 = SQRT(fVar5);
  }
  auVar10._4_4_ = fVar5;
  auVar10._0_4_ = fVar5;
  auVar10._8_4_ = fVar5;
  auVar10._12_4_ = fVar5;
  auVar10 = divps(auVar11,auVar10);
  auVar11._0_4_ = auVar10._0_4_ * fVar6;
  auVar11._4_4_ = auVar10._4_4_ * fVar6;
  auVar11._8_4_ = auVar10._8_4_ * fVar6;
  auVar11._12_4_ = auVar10._12_4_ * fVar6;
label_05c6fb66:
  fVar6 = (__this->fields)._radius;
  auVar2._4_4_ = fVar6;
  auVar2._0_4_ = fVar6;
  auVar2._8_4_ = fVar6;
  auVar2._12_4_ = fVar6;
  auVar11 = divps(auVar11,auVar2);
  UI_MobileInputJoystick__SetInput
            (__this,(UnityEngine_Vector2_o)auVar11._0_8_,(UnityEngine_Vector2_o)local_50,method_00);
  return;
}


// UI.MobileInputJoystick$$ResetJoystick
// il2cpp: void UI_MobileInputJoystick__ResetJoystick (UI_MobileInputJoystick_o* __this, const MethodInfo* method);
// 0x5c6f760

void UI_MobileInputJoystick__ResetJoystick(UI_MobileInputJoystick_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields move;
  UI_MobileInputJoystick_o *x;
  UnityEngine_RectTransform_o *pUVar1;
  bool bVar2;
  bool bVar3;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075478f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478f0 = '\x01';
  }
  if (Il2CppMethodInitialized_07547976 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputJoystick);
    Il2CppMethodInitialized_07547976 = '\x01';
  }
  x = TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._pointerId = -0x80000000;
  (__this->fields)._eventCamera = (UnityEngine_Camera_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
  (__this->fields)._pressed = false;
  (__this->fields)._PulledPastReelOutRing_k__BackingField = false;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(__this->fields)._base,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (bVar3) {
    pUVar1 = (__this->fields)._base;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto label_05c6f989;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar1,(UnityEngine_Vector2_o)(__this->fields)._restPosition.fields,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  UI_MobileInputJoystick__ApplyBaseSkin(__this,(__this->fields)._normalSkin,method_00);
  pUVar1 = (__this->fields)._handle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._handle;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
label_05c6f989:
      ThrowNullReferenceException();
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar1,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  UI_MobileInputJoystick__SetReelRingColor(__this,false,false,in_RCX);
  if (bVar2) {
    if (Il2CppMethodInitialized_07547977 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputJoystick);
      Il2CppMethodInitialized_07547977 = '\x01';
    }
    TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField =
         (UI_MobileInputJoystick_o *)0x0;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    move = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
    if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    }
    Settings_MobileInputBridge__SetMoveVector((UnityEngine_Vector2_o)move,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MobileInputJoystick$$SetReelRingColor
// il2cpp: void UI_MobileInputJoystick__SetReelRingColor (UI_MobileInputJoystick_o* __this, bool reelIn, bool reelOut, const MethodInfo* method);
// 0x5c69850
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c698cd: jmp 0x5c69943

void UI_MobileInputJoystick__SetReelRingColor
               (UI_MobileInputJoystick_o *__this,bool reelIn,bool reelOut,MethodInfo *method)

{
  int32_t shape;
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  UI_MobileInputSkin_o *skin;
  
  if (Il2CppMethodInitialized_075478f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478f1 = '\x01';
  }
  pUVar1 = (__this->fields)._reelOutRingImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (reelIn) {
      skin = (__this->fields)._reelInSkin;
      if (skin != (__this->fields)._appliedRingSkin) goto label_05c698e4;
    }
    else if (reelOut) {
      skin = (__this->fields)._reelOutSkin;
      if (skin != (__this->fields)._appliedRingSkin) {
label_05c698e4:
        (__this->fields)._appliedRingSkin = skin;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._appliedRingSkin);
        pUVar1 = (__this->fields)._reelOutRingImage;
        shape = (__this->fields)._shape;
        if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
        }
        UI_MobileControlSkinManager__ApplySkin(pUVar1,skin,shape,method);
        return;
      }
    }
    else {
      skin = (__this->fields)._reelRingSkin;
      if (skin != (__this->fields)._appliedRingSkin) goto label_05c698e4;
    }
  }
  return;
}


// UI.MobileInputJoystick$$ApplyBaseSkin
// il2cpp: void UI_MobileInputJoystick__ApplyBaseSkin (UI_MobileInputJoystick_o* __this, UI_MobileInputSkin_o* skin, const MethodInfo* method);
// 0x5c6f680

void UI_MobileInputJoystick__ApplyBaseSkin
               (UI_MobileInputJoystick_o *__this,UI_MobileInputSkin_o *skin,MethodInfo *method)

{
  int32_t shape;
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075478f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478f2 = '\x01';
  }
  pUVar1 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) || ((__this->fields)._appliedBaseSkin == skin)) {
    return;
  }
  (__this->fields)._appliedBaseSkin = skin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._appliedBaseSkin);
  pUVar1 = (__this->fields)._image;
  shape = (__this->fields)._shape;
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  UI_MobileControlSkinManager__ApplySkin(pUVar1,skin,shape,in_RCX);
  return;
}


// UI.MobileInputJoystick$$.ctor
// il2cpp: void UI_MobileInputJoystick___ctor (UI_MobileInputJoystick_o* __this, const MethodInfo* method);
// 0x5c70030

void UI_MobileInputJoystick___ctor(UI_MobileInputJoystick_o *__this,MethodInfo *method)

{
  (__this->fields)._pointerId = -0x80000000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


