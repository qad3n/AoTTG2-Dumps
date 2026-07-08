// Type: Gisketch.Aottg2UI.Actions.AottgSliderControl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSliderControl.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSliderControl$$get_Value
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__get_Value (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x3b244d0

float Gisketch_Aottg2UI_Actions_AottgSliderControl__get_Value
                (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._max;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$set_Value
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__set_Value (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float value, const MethodInfo* method);
// 0x3b244e0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__set_Value
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float value,
               MethodInfo *method)

{
  (__this->fields)._max = value;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__Setup (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_RectTransform_o* track, UnityEngine_RectTransform_o* fill, UnityEngine_RectTransform_o* thumb, UnityEngine_RectTransform_o* thumbFace, TMPro_TextMeshProUGUI_o* label, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, UnityEngine_GameObject_o* target, float railHeight, const MethodInfo* method);
// 0x3b244f0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_RectTransform_o *track,UnityEngine_RectTransform_o *fill,
               UnityEngine_RectTransform_o *thumb,UnityEngine_RectTransform_o *thumbFace,
               TMPro_TextMeshProUGUI_o *label,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,
               UnityEngine_GameObject_o *target,float railHeight,MethodInfo *method)

{
  System_String_o *s;
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo *method_00;
  float fVar2;
  undefined1 local_38 [8];
  
  local_38._4_4_ = (undefined4)((ulong)in_RAX >> 0x20);
  local_38._0_4_ = railHeight;
  if (DAT_0570158d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_GetValueOrDefault);
    DAT_0570158d = '\x01';
  }
  (__this->fields).m_CanvasGroupCache = (System_Collections_Generic_List_CanvasGroup__o *)track;
  il2cpp_runtime_glue(&(__this->fields).m_CanvasGroupCache,track);
  (__this->fields)._track = fill;
  il2cpp_runtime_glue(&(__this->fields)._track,fill);
  (__this->fields)._fill = thumb;
  il2cpp_runtime_glue(&(__this->fields)._fill,thumb);
  (__this->fields)._thumb = thumbFace;
  il2cpp_runtime_glue(&(__this->fields)._thumb,thumbFace);
  (__this->fields)._thumbFace = (UnityEngine_RectTransform_o *)label;
  il2cpp_runtime_glue(&(__this->fields)._thumbFace,label);
  (__this->fields)._label = (TMPro_TextMeshProUGUI_o *)node;
  il2cpp_runtime_glue(&(__this->fields)._label,node);
  (__this->fields)._node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)actions;
  il2cpp_runtime_glue(&(__this->fields)._node);
  (__this->fields)._actions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)target;
  il2cpp_runtime_glue(&(__this->fields)._actions);
  (__this->fields)._min = (float)local_38._0_4_;
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    fVar2 = System_Nullable<float>__GetValueOrDefault
                      ((System_Nullable_float__o)&(node->fields).enabled.fields.value,0.0,
                       MethodInfo_Single_GetValueOrDefault);
    *(float *)&(__this->fields)._target = fVar2;
    fVar2 = System_Nullable<float>__GetValueOrDefault
                      ((System_Nullable_float__o)&(node->fields).referenceHeight,1.0,MethodInfo_Single_GetValueOrDefault);
    *(float *)((long)&(__this->fields)._target + 4) = fVar2;
    s = (node->fields).value;
    local_38._0_4_ = *(undefined4 *)&(__this->fields)._target;
    if (DAT_05701592 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
      DAT_05701592 = '\x01';
    }
    local_38 = (undefined1  [8])((ulong)local_38 & 0xffffffff);
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    method_00 = (MethodInfo *)(local_38 + 4);
    bVar1 = System_Single__TryParse
                      (s,0xa7,(System_IFormatProvider_o *)provider,(float *)method_00,
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      fVar2 = (float)local_38._0_4_;
    }
    else {
      fVar2 = (float)local_38._4_4_;
    }
    Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue(__this,fVar2,0,0,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetNormalizedValue
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetNormalizedValue (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float normalized, bool notify, const MethodInfo* method);
// 0x3b249d0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetNormalizedValue
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float normalized,
               bool_conflict notify,MethodInfo *method)

{
  float fVar1;
  MethodInfo *in_RCX;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)&(__this->fields)._target;
  fVar2 = 1.0;
  if (normalized <= 1.0) {
    fVar2 = normalized;
  }
  fVar2 = (float)(-(uint)(0.0 <= normalized) & (uint)fVar2);
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar2;
  }
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
            (__this,(*(float *)((long)&(__this->fields)._target + 4) - fVar1) * fVar3 + fVar1,notify
             ,0,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerDown (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b24a20

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerDown
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  MethodInfo *method_00;
  UnityEngine_EventSystems_PointerEventData_o *method_01;
  
  method_01 = eventData;
  UnityEngine_UI_Selectable__OnPointerDown
            ((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  if (DAT_057015b9 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057015b9 = '\x01';
  }
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570136d = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 0) {
    if (DAT_057015f6 == '\0') {
      il2cpp_init_method_metadata();
      DAT_057015f6 = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      method_01 = *(UnityEngine_EventSystems_PointerEventData_o **)(lVar1 + 0x28);
      (**(code **)(lVar1 + 0x18))();
    }
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)method_01);
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer(__this,eventData,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnDrag (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b24d10

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnDrag
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer(__this,eventData,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerUp (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b24d20

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerUp
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_Selectable__OnPointerUp
            ((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnMove (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_AxisEventData_o* eventData, const MethodInfo* method);
// 0x3b24d40

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnMove
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_AxisEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  MethodInfo *method_00;
  
  if (eventData == (UnityEngine_EventSystems_AxisEventData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (((eventData->fields)._moveDir_k__BackingField | 2U) == 2) {
    if (DAT_057015b9 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_057015b9 = '\x01';
    }
    if (DAT_0570136d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_0570136d = '\x01';
    }
    lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    if (*(int *)(lVar1 + 0x18) != 1) {
      if (DAT_057015f6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
        DAT_057015f6 = '\x01';
        lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      }
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      }
    }
    method_00 = (MethodInfo *)0x1;
    Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
              (__this,(*(float *)((long)&(__this->fields)._target + 4) -
                      *(float *)&(__this->fields)._target) * 0.05 *
                      *(float *)(&DAT_00cd0ef0 +
                                (ulong)((eventData->fields)._moveDir_k__BackingField == 2) * 4) +
                      (__this->fields)._max,1,2,(MethodInfo *)&DAT_00cd0ef0);
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,method_00);
    (*(eventData->klass->vtable)._5_Use.methodPtr)
              (eventData,(eventData->klass->vtable)._5_Use.method);
    return;
  }
  UnityEngine_UI_Selectable__OnMove
            ((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnSubmit (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b24e80

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnSubmit
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_057015b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_057015b9 = '\x01';
    method = extraout_RDX;
  }
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_0570136d = '\x01';
    method = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 1) {
    if (DAT_057015f6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_057015f6 = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
      method = extraout_RDX_01;
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),method,
                 *(code **)(lVar1 + 0x18));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b24af0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Collections_Generic_List_CanvasGroup__o *pSVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  UnityEngine_Camera_o *cam;
  MethodInfo *method_00;
  float fVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_Fields local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if (DAT_0570158e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_0570158e = '\x01';
  }
  local_50.x = 0.0;
  local_50.y = 0.0;
  pSVar1 = (__this->fields).m_CanvasGroupCache;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) || ((char)bVar4 != '\0')) {
    return;
  }
  pSVar1 = (__this->fields).m_CanvasGroupCache;
  local_48._8_8_ = 0;
  local_48._0_8_ = (eventData->fields)._position_k__BackingField.fields;
  cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            ((UnityEngine_RectTransform_o *)pSVar1,(UnityEngine_Vector2_o)local_48._0_8_,cam,
             (UnityEngine_Vector2_o *)&local_50,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).m_CanvasGroupCache;
  if (pSVar1 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
    UVar8 = UnityEngine_RectTransform__get_rect
                      ((UnityEngine_RectTransform_o *)pSVar1,(MethodInfo *)0x0);
    local_48._8_4_ = in_XMM1_Dc;
    local_48._0_8_ = UVar8.fields._8_8_;
    local_48._12_4_ = in_XMM1_Dd;
    pSVar1 = (__this->fields).m_CanvasGroupCache;
    if (pSVar1 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_pivot
                        ((UnityEngine_RectTransform_o *)pSVar1,(MethodInfo *)0x0);
      local_38._8_4_ = extraout_XMM0_Dc;
      local_38._0_4_ = UVar3.fields.x;
      local_38._4_4_ = UVar3.fields.y;
      local_38._12_4_ = extraout_XMM0_Dd;
      if (DAT_05701591 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_05701591 = '\x01';
      }
      pUVar2 = (__this->fields)._thumb;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        fVar5 = 12.0;
      }
      else {
        pUVar2 = (__this->fields)._thumb;
        if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b24cff;
        UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
        fVar5 = UVar3.fields.x * 0.5;
      }
      fVar6 = 0.0;
      if (fVar5 + fVar5 < (float)local_48._0_4_) {
        fVar7 = (float)local_48._0_4_ - fVar5;
        if ((fVar5 != fVar7) || (fVar6 = 0.0, NAN(fVar5) || NAN(fVar7))) {
          fVar5 = (((float)local_48._0_4_ * (float)local_38._0_4_ + local_50.x) - fVar5) /
                  (fVar7 - fVar5);
          fVar6 = 0.0;
          if ((0.0 <= fVar5) && (fVar6 = 1.0, fVar5 <= 1.0)) {
            fVar6 = fVar5;
          }
        }
      }
      fVar5 = *(float *)&(__this->fields)._target;
      fVar7 = 0.0;
      if (0.0 <= fVar6) {
        fVar7 = fVar6;
      }
      Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
                (__this,(*(float *)((long)&(__this->fields)._target + 4) - fVar5) * fVar7 + fVar5,1,
                 1,method_00);
      return;
    }
  }
LAB_03b24cff:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float value, bool notify, int32_t source, const MethodInfo* method);
// 0x3b24770

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float value,
               bool_conflict notify,int32_t source,MethodInfo *method)

{
  ushort uVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  undefined8 uVar4;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *pGVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  char cVar8;
  bool_conflict bVar9;
  System_Globalization_CultureInfo_o *method_00;
  MethodInfo *method_01;
  VirtualInvokeData *pVVar10;
  undefined4 in_register_00000034;
  long lVar11;
  float fVar12;
  float __this_00;
  undefined1 in_register_00001204 [12];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float local_8c;
  System_Threading_CancellationTokenSource_o *local_88;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGStack_80;
  TMPro_TextMeshProUGUI_o *pTStack_78;
  undefined8 local_70;
  System_Threading_CancellationTokenSource_o *local_68;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGStack_60;
  TMPro_TextMeshProUGUI_o *local_58;
  int32_t iStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  
  auVar13._4_12_ = in_register_00001204;
  auVar13._0_4_ = value;
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,notify);
  if (DAT_0570158f == '\0') {
    local_48 = auVar13;
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    il2cpp_init_method_metadata(&TypeInfo_IGisketchActionHandler);
    DAT_0570158f = '\x01';
    auVar13 = local_48;
  }
  local_8c = 0.0;
  fVar15 = *(float *)&(__this->fields)._target;
  fVar12 = *(float *)((long)&(__this->fields)._target + 4);
  fVar14 = fVar15;
  if (fVar12 <= fVar15) {
    fVar14 = fVar12;
  }
  if (fVar15 <= fVar12) {
    fVar15 = fVar12;
  }
  fVar12 = auVar13._0_4_;
  if (fVar12 <= fVar15) {
    fVar15 = fVar12;
  }
  fVar15 = (float)(~-(uint)(fVar14 <= fVar12) & (uint)fVar14 |
                  (uint)fVar15 & -(uint)(fVar14 <= fVar12));
  (__this->fields)._max = fVar15;
  pTVar2 = (__this->fields)._label;
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    local_8c = fVar15;
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    method_01 = (MethodInfo *)
                System_Single__ToString
                          (__this_00,(System_IFormatProvider_o *)&local_8c,(MethodInfo *)method_00);
    *(MethodInfo **)&(pTVar2->fields).m_RaycastPadding.fields.z = method_01;
    il2cpp_runtime_glue(&(pTVar2->fields).m_RaycastPadding.fields.z);
  }
  Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals(__this,method_01);
  if ((char)notify != '\0') {
    pTVar2 = (__this->fields)._label;
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) {
      bVar9 = System_String__IsNullOrEmpty((System_String_o *)0x0,(MethodInfo *)0x0);
      cVar8 = (char)bVar9;
    }
    else {
      bVar9 = System_String__IsNullOrEmpty
                        (*(System_String_o **)&(pTVar2->fields).m_RaycastPadding.fields,
                         (MethodInfo *)0x0);
      cVar8 = (char)bVar9;
    }
    if ((cVar8 == '\0') &&
       (pGVar3 = (__this->fields)._node,
       pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pTVar2 = (__this->fields)._label;
      if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      local_88 = (pTVar2->fields).m_CancellationTokenSource;
      uVar4._0_4_ = (pTVar2->fields).m_RaycastPadding.fields.x;
      uVar4._4_4_ = (pTVar2->fields).m_RaycastPadding.fields.y;
      pGVar5 = (__this->fields)._actions;
      pGStack_80 = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0;
      pTStack_78 = (TMPro_TextMeshProUGUI_o *)0x0;
      local_70 = 0;
      il2cpp_runtime_glue(&local_88);
      pGStack_80 = pGVar5;
      il2cpp_runtime_glue(&pGStack_80,pGVar5);
      pTStack_78 = pTVar2;
      il2cpp_runtime_glue(&pTStack_78,pTVar2);
      local_70 = CONCAT44(local_70._4_4_,source);
      local_58 = pTStack_78;
      uStack_4c = local_70._4_4_;
      local_68 = local_88;
      pGStack_60 = pGStack_80;
      pGVar6 = pGVar3->klass;
      uVar1._0_1_ = (pGVar6->_2).rank;
      uVar1._1_1_ = (pGVar6->_2).minimumAlignment;
      iStack_50 = source;
      if ((ulong)uVar1 != 0) {
        pIVar7 = (pGVar6->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar11) == TypeInfo_IGisketchActionHandler) {
            pVVar10 = &(pGVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar11);
            goto LAB_03b24990;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar11);
      }
      pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(pGVar3,TypeInfo_IGisketchActionHandler,0);
LAB_03b24990:
      (*pVVar10->methodPtr)(pGVar3,uVar4,pVVar10->method);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$RefreshVisuals
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x3b24fc0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  System_Collections_Generic_List_CanvasGroup__o *pSVar2;
  UnityEngine_Vector2_o value;
  double dVar3;
  UnityEngine_Vector2_o UVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  bool_conflict bVar8;
  System_String_o *pSVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  UnityEngine_Rect_o UVar15;
  int local_5c;
  undefined1 local_58 [16];
  double local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  if (DAT_05701590 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"%");
    DAT_05701590 = '\x01';
  }
  auVar7 = local_58._4_12_;
  local_5c = 0;
  fVar10 = *(float *)&(__this->fields)._target;
  fVar11 = *(float *)((long)&(__this->fields)._target + 4);
  if ((fVar10 != fVar11) || (NAN(fVar10) || NAN(fVar11))) {
    fVar10 = ((__this->fields)._max - fVar10) / (fVar11 - fVar10);
    auVar5._12_4_ = 0;
    auVar5._0_12_ = local_58._4_12_;
    local_58 = auVar5 << 0x20;
    if (0.0 <= fVar10) {
      local_58._0_4_ = 1.0;
      if (fVar10 <= 1.0) {
        local_58._0_4_ = fVar10;
      }
      local_58 = CONCAT124(auVar7,local_58._0_4_);
    }
  }
  else {
    auVar6._12_4_ = 0;
    auVar6._0_12_ = local_58._4_12_;
    local_58 = auVar6 << 0x20;
  }
  uVar13 = 0;
  uVar12 = 0;
  pUVar1 = (__this->fields)._thumbFace;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar1 = (__this->fields)._thumbFace;
    if (DAT_056ff244 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056ff244 = '\x01';
    }
    local_38._0_4_ = (float)local_58._0_4_ * 100.0;
    fVar10 = (float)local_58._0_4_ * 100.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
      fVar10 = (float)local_38._0_4_;
    }
    local_48 = (double)fVar10;
    method_01 = (MethodInfo *)local_40;
    dVar3 = modf(local_48,(double *)method_01,method_00);
    uVar12 = 0;
    uVar13 = 0;
    if (0.0 <= (float)local_38._0_4_) {
      if ((dVar3 != 0.5) || (NAN(dVar3))) {
        local_40 = (undefined1  [8])floor(local_48 + 0.5,method_01);
      }
      else if (((long)(double)local_40 & 1U) != 0) {
        local_40 = (undefined1  [8])((double)local_40 + 1.0);
      }
    }
    else if ((dVar3 != -0.5) || (NAN(dVar3))) {
      local_40 = (undefined1  [8])ceil(local_48 + -0.5,method_01);
    }
    else if (((long)(double)local_40 & 1U) != 0) {
      local_40 = (undefined1  [8])((double)local_40 + -1.0);
    }
    local_5c = (int)(double)local_40;
    pSVar9 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,"%",(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b25389;
    (*(code *)pUVar1->klass[3].rgctx_data)(pUVar1,pSVar9,pUVar1->klass[3]._2.typeHierarchy);
  }
  pSVar2 = (__this->fields).m_CanvasGroupCache;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pSVar2 = (__this->fields).m_CanvasGroupCache;
  if (pSVar2 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
    UVar15 = UnityEngine_RectTransform__get_rect
                       ((UnityEngine_RectTransform_o *)pSVar2,(MethodInfo *)0x0);
    if (UVar15.fields.m_Width <= 0.0) {
      return;
    }
    local_38._8_4_ = uVar12;
    local_38._0_8_ = UVar15.fields._8_8_;
    local_38._12_4_ = uVar13;
    if (DAT_05701591 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05701591 = '\x01';
    }
    pUVar1 = (__this->fields)._thumb;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar8 == '\0') {
      fVar10 = 12.0;
      pUVar1 = (__this->fields)._fill;
    }
    else {
      pUVar1 = (__this->fields)._thumb;
      if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b25389;
      UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
      fVar10 = UVar4.fields.x * 0.5;
      pUVar1 = (__this->fields)._fill;
    }
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      fVar11 = fVar10;
      if (fVar10 <= (float)local_38._0_4_ - fVar10) {
        fVar11 = (float)local_38._0_4_ - fVar10;
      }
      fVar14 = 0.0;
      if (0.0 <= (float)local_58._0_4_) {
        fVar14 = (float)local_58._0_4_;
      }
      fVar10 = (fVar11 - fVar10) * fVar14 + fVar10;
      local_58 = ZEXT416((uint)fVar10);
      UVar4.fields.y = 0.0;
      UVar4.fields.x = fVar10;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar1,UVar4,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._track;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin
                  (pUVar1,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._track;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar1,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._track;
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_offsetMin
                      (pUVar1,(UnityEngine_Vector2_o)
                              ((ulong)(uint)((__this->fields)._min * -0.5) << 0x20),
                       (MethodInfo *)0x0);
            pUVar1 = (__this->fields)._track;
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              value.fields.y = (__this->fields)._min * 0.5;
              value.fields.x = (float)local_58._0_4_;
              UnityEngine_RectTransform__set_offsetMax(pUVar1,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03b25389:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$ThumbWidth
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__ThumbWidth (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x3b24f30

float Gisketch_Aottg2UI_Actions_AottgSliderControl__ThumbWidth
                (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (DAT_05701591 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701591 = '\x01';
  }
  pUVar1 = (__this->fields)._thumb;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._thumb;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
      return UVar3.fields.x;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 24.0;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$ParseFloat
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__ParseFloat (System_String_o* value, float fallback, const MethodInfo* method);
// 0x3b246e0

float Gisketch_Aottg2UI_Actions_AottgSliderControl__ParseFloat
                (System_String_o *value,float fallback,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Globalization_CultureInfo_o *provider;
  float local_10;
  float local_c;
  
  local_c = fallback;
  if (DAT_05701592 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_05701592 = '\x01';
  }
  local_10 = 0.0;
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Single__TryParse
                    (value,0xa7,(System_IFormatProvider_o *)provider,&local_10,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return local_c;
  }
  return local_10;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl___ctor (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x3b25390

void Gisketch_Aottg2UI_Actions_AottgSliderControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05701593 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Selectable);
    DAT_05701593 = '\x01';
    iVar1 = *(int *)(TypeInfo_Selectable + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Selectable + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  return;
}


