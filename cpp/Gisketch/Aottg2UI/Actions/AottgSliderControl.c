// Type: Gisketch.Aottg2UI.Actions.AottgSliderControl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSliderControl.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSliderControl$$get_Value
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__get_Value (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x3b90620

float Gisketch_Aottg2UI_Actions_AottgSliderControl__get_Value
                (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._max;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$set_Value
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__set_Value (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float value, const MethodInfo* method);
// 0x3b90630

void Gisketch_Aottg2UI_Actions_AottgSliderControl__set_Value
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._max = value;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__Setup (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_RectTransform_o* track, UnityEngine_RectTransform_o* fill, UnityEngine_RectTransform_o* thumb, UnityEngine_RectTransform_o* thumbFace, TMPro_TextMeshProUGUI_o* label, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, UnityEngine_GameObject_o* target, float railHeight, const MethodInfo* method);
// 0x3b90640

void Gisketch_Aottg2UI_Actions_AottgSliderControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,UnityEngine_RectTransform_o *track,
               UnityEngine_RectTransform_o *fill,UnityEngine_RectTransform_o *thumb,
               UnityEngine_RectTransform_o *thumbFace,TMPro_TextMeshProUGUI_o *label,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,UnityEngine_GameObject_o *target,
               float railHeight,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_Globalization_CultureInfo_o *pSVar2;
  MethodInfo *method_00;
  System_String_o *pSVar3;
  float fVar4;
  float fStack_48;
  undefined4 uStack_44;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *pGStack_40;
  undefined1 local_38 [8];
  
  local_38._4_4_ = (undefined4)((ulong)in_RAX >> 0x20);
  local_38._0_4_ = railHeight;
  if (g_data_057a9ebc == '\0') {
    pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b90677;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    g_data_057a9ebc = '\x01';
  }
  (__this->fields).m_CanvasGroupCache = (System_Collections_Generic_List_CanvasGroup__o *)track;
  pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b90694;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_CanvasGroupCache,track);
  (__this->fields)._track = fill;
  pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b906aa;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._track,fill);
  (__this->fields)._fill = thumb;
  pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b906c0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._fill,thumb);
  (__this->fields)._thumb = thumbFace;
  pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b906d6;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._thumb,thumbFace);
  (__this->fields)._thumbFace = (UnityEngine_RectTransform_o *)label;
  pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b906ec;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._thumbFace,label);
  (__this->fields)._label = (TMPro_TextMeshProUGUI_o *)node;
  pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b90707;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,node);
  (__this->fields)._node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)actions;
  pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b9071f;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._node);
  pSVar3 = (System_String_o *)&(__this->fields)._actions;
  (__this->fields)._actions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)target;
  pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b90737;
  il2cpp_runtime_helper_022b4080();
  (__this->fields)._min = (float)local_38._0_4_;
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b90763;
    fVar4 = System_Nullable_float___GetValueOrDefault_37ebc40
                      ((System_Nullable_float__o)&(node->fields).enabled.fields.value,0.0,MethodInfo_Single_GetValueOrDefault);
    *(float *)&(__this->fields)._target = fVar4;
    pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b90782;
    fVar4 = System_Nullable_float___GetValueOrDefault_37ebc40
                      ((System_Nullable_float__o)&(node->fields).referenceHeight,1.0,MethodInfo_Single_GetValueOrDefault);
    *(float *)((long)&(__this->fields)._target + 4) = fVar4;
    pSVar3 = (node->fields).value;
    local_38._0_4_ = *(undefined4 *)&(__this->fields)._target;
    if (g_data_057a9ec1 == '\0') {
      pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b907b0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
      g_data_057a9ec1 = '\x01';
    }
    local_38 = (undefined1  [8])((ulong)local_38 & 0xffffffff);
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b907d7;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b907de;
    pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    method_00 = (MethodInfo *)(local_38 + 4);
    pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b907f6;
    bVar1 = System_Single__TryParse_3ccd6a0
                      (pSVar3,0xa7,(System_IFormatProvider_o *)pSVar2,(float *)method_00,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      fVar4 = (float)local_38._0_4_;
    }
    else {
      fVar4 = (float)local_38._4_4_;
    }
    pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b90813;
    Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue(__this,fVar4,0,0,method_00);
    return;
  }
  pGStack_40 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x3b90827;
  uStack_44 = il2cpp_runtime_helper_022b2c90();
  pGStack_40 = __this;
  if (g_data_057a9ec1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057a9ec1 = '\x01';
  }
  fStack_48 = 0.0;
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Single__TryParse_3ccd6a0
                    (pSVar3,0xa7,(System_IFormatProvider_o *)pSVar2,&fStack_48,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetNormalizedValue
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetNormalizedValue (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float normalized, bool notify, const MethodInfo* method);
// 0x3b90ae0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetNormalizedValue
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float normalized,bool_conflict notify,
               MethodInfo *method)

{
  ushort uVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  System_Threading_CancellationTokenSource_o *gameObject;
  undefined8 uVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *pGVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppMethodPointer pIVar6;
  char cVar7;
  bool_conflict bVar8;
  System_Globalization_CultureInfo_o *method_00;
  MethodInfo *pMVar9;
  VirtualInvokeData *pVVar10;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *unaff_RBX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *unaff_RBP;
  undefined4 in_register_00000034;
  long lVar11;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *value;
  undefined8 unaff_R14;
  ulong unaff_R15;
  float __this_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pMVar9 = (MethodInfo *)CONCAT44(in_register_00000034,notify);
  while( true ) {
    fVar13 = *(float *)&(__this->fields)._target;
    fVar12 = 1.0;
    if (normalized <= 1.0) {
      fVar12 = normalized;
    }
    fVar12 = (float)(-(uint)(0.0 <= normalized) & (uint)fVar12);
    fVar15 = 0.0;
    if (0.0 <= fVar12) {
      fVar15 = fVar12;
    }
    fVar13 = (*(float *)((long)&(__this->fields)._target + 4) - fVar13) * fVar15 + fVar13;
    *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(Gisketch_Aottg2UI_Actions_AottgSliderControl_o **)((long)register0x00000020 + -0x20) = unaff_RBX;
    unaff_R15 = (ulong)pMVar9 & 0xffffffff;
    if (g_data_057a9ebe == '\0') {
      *(float *)((long)register0x00000020 + -0x58) = fVar13;
      *(undefined4 *)((long)register0x00000020 + -0x54) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x4c) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b908f0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b908fc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
      fVar13 = *(float *)((long)register0x00000020 + -0x58);
      g_data_057a9ebe = '\x01';
    }
    *(undefined4 *)((long)register0x00000020 + -0x7c) = 0;
    fVar12 = *(float *)&(__this->fields)._target;
    fVar15 = *(float *)((long)&(__this->fields)._target + 4);
    fVar14 = fVar12;
    if (fVar15 <= fVar12) {
      fVar14 = fVar15;
    }
    if (fVar12 <= fVar15) {
      fVar12 = fVar15;
    }
    if (fVar13 <= fVar12) {
      fVar12 = fVar13;
    }
    fVar13 = (float)(~-(uint)(fVar14 <= fVar13) & (uint)fVar14 | (uint)fVar12 & -(uint)(fVar14 <= fVar13));
    (__this->fields)._max = fVar13;
    pTVar2 = (__this->fields)._label;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      *(float *)((long)register0x00000020 + -0x7c) = fVar13;
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b9096f;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90976;
      method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90985;
      pMVar9 = (MethodInfo *)
               System_Single__ToString_3cccf70
                         (__this_00,(System_IFormatProvider_o *)((long)register0x00000020 + -0x7c),
                          (MethodInfo *)method_00);
      *(MethodInfo **)&(pTVar2->fields).m_RaycastPadding.fields.z = pMVar9;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90998;
      il2cpp_runtime_helper_022b4080(&(pTVar2->fields).m_RaycastPadding.fields.z);
    }
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b909a0;
    Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals(__this,pMVar9);
    if ((char)unaff_R15 == '\0') {
      return;
    }
    pTVar2 = (__this->fields)._label;
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) {
      value = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0;
      pMVar9 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90a84;
      bVar8 = System_String__IsNullOrEmpty((System_String_o *)0x0,(MethodInfo *)0x0);
      cVar7 = (char)bVar8;
    }
    else {
      value = *(Gisketch_Aottg2UI_Actions_AottgSliderControl_o **)&(pTVar2->fields).m_RaycastPadding.fields;
      pMVar9 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b909c4;
      bVar8 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      cVar7 = (char)bVar8;
    }
    if (cVar7 != '\0') {
      return;
    }
    unaff_RBP = (__this->fields)._node;
    if (unaff_RBP == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      return;
    }
    pTVar2 = (__this->fields)._label;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90ad2;
    normalized = (float)il2cpp_runtime_helper_022b2c90();
    unaff_RBX = __this;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xa8);
    __this = value;
    unaff_R14 = 0;
  }
  gameObject = (pTVar2->fields).m_CancellationTokenSource;
  uVar3._0_4_ = (pTVar2->fields).m_RaycastPadding.fields.x;
  uVar3._4_4_ = (pTVar2->fields).m_RaycastPadding.fields.y;
  node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this->fields)._actions;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90a18;
  Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
            ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
             *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)((long)register0x00000020 + -0xa8),
             (System_String_o *)((long)register0x00000020 + -0x78),(UnityEngine_GameObject_o *)gameObject,node
             ,(int32_t)pTVar2,(MethodInfo *)0x0);
  *(undefined4 *)((long)register0x00000020 + -0x38) = *(undefined4 *)((long)register0x00000020 + -0x68);
  *(undefined4 *)((long)register0x00000020 + -0x34) = *(undefined4 *)((long)register0x00000020 + -100);
  *(undefined4 *)((long)register0x00000020 + -0x30) = *(undefined4 *)((long)register0x00000020 + -0x60);
  *(undefined4 *)((long)register0x00000020 + -0x2c) = *(undefined4 *)((long)register0x00000020 + -0x5c);
  *(undefined8 *)((long)register0x00000020 + -0x48) = *(undefined8 *)((long)register0x00000020 + -0x78);
  *(undefined8 *)((long)register0x00000020 + -0x40) = *(undefined8 *)((long)register0x00000020 + -0x70);
  pGVar4 = unaff_RBP->klass;
  uVar1._0_1_ = (pGVar4->_2).rank;
  uVar1._1_1_ = (pGVar4->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar5 = (pGVar4->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IGisketchActionHandler) {
        pVVar10 = &(pGVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar11);
        goto label_03b90aa0;
      }
      lVar11 = lVar11 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar11);
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90a79;
  pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IGisketchActionHandler,0);
label_03b90aa0:
  pMVar9 = pVVar10->method;
  *(undefined4 *)((long)register0x00000020 + -0x98) = *(undefined4 *)((long)register0x00000020 + -0x38);
  *(undefined4 *)((long)register0x00000020 + -0x94) = *(undefined4 *)((long)register0x00000020 + -0x34);
  *(undefined4 *)((long)register0x00000020 + -0x90) = *(undefined4 *)((long)register0x00000020 + -0x30);
  *(undefined4 *)((long)register0x00000020 + -0x8c) = *(undefined4 *)((long)register0x00000020 + -0x2c);
  *(undefined8 *)((long)register0x00000020 + -0xa8) = *(undefined8 *)((long)register0x00000020 + -0x48);
  *(undefined8 *)((long)register0x00000020 + -0xa0) = *(undefined8 *)((long)register0x00000020 + -0x40);
  pIVar6 = pVVar10->methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90abf;
  (*pIVar6)(unaff_RBP,uVar3,pMVar9);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerDown (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b90b30

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerDown
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  long lVar2;
  System_Collections_Generic_List_CanvasGroup__o *pSVar3;
  UnityEngine_RectTransform_o *__this_00;
  undefined1 auVar4 [16];
  UnityEngine_Vector2_o UVar5;
  undefined1 auVar6 [16];
  bool_conflict bVar7;
  MethodInfo *method_00;
  UnityEngine_EventSystems_PointerEventData_o *unaff_RBX;
  undefined1 *puVar8;
  UnityEngine_EventSystems_PointerEventData_o *__this_01;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this_02;
  UnityEngine_EventSystems_PointerEventData_o *unaff_R12;
  undefined8 *unaff_R13;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *unaff_R14;
  System_Collections_Generic_List_CanvasGroup__o *unaff_R15;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar10;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  
  UnityEngine_UI_Selectable__OnPointerDown((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eed = '\x01';
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c87 = '\x01';
  }
  lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar2 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a9f2a = '\x01';
      lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
    }
    else {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))();
    }
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
  puVar8 = (undefined1 *)register0x00000020;
  do {
    __this_02 = __this;
    __this_01 = eventData;
    *(System_Collections_Generic_List_CanvasGroup__o **)(puVar8 + -8) = unaff_R15;
    *(Gisketch_Aottg2UI_Actions_AottgSliderControl_o **)(puVar8 + -0x10) = unaff_R14;
    *(undefined8 **)(puVar8 + -0x18) = unaff_R13;
    *(UnityEngine_EventSystems_PointerEventData_o **)(puVar8 + -0x20) = unaff_R12;
    *(UnityEngine_EventSystems_PointerEventData_o **)(puVar8 + -0x28) = unaff_RBX;
    if (g_data_057a9ebd == '\0') {
      *(undefined8 *)(puVar8 + -0x60) = 0x3b90c28;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar8 + -0x60) = 0x3b90c34;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057a9ebd = '\x01';
    }
    *(undefined8 *)(puVar8 + -0x50) = 0;
    pSVar3 = (__this_02->fields).m_CanvasGroupCache;
    unaff_R13 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar8 + -0x60) = 0x3b90c64;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar8 + -0x60) = 0x3b90c70;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      return;
    }
    if ((char)bVar7 != '\0') {
      return;
    }
    unaff_R15 = (__this_02->fields).m_CanvasGroupCache;
    *(UnityEngine_Vector2_Fields *)(puVar8 + -0x48) = (__this_01->fields)._position_k__BackingField.fields;
    *(undefined8 *)(puVar8 + -0x40) = 0;
    *(undefined8 *)(puVar8 + -0x60) = 0x3b90ca1;
    unaff_RBX = (UnityEngine_EventSystems_PointerEventData_o *)
                UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      *(undefined8 *)(puVar8 + -0x60) = 0x3b90cbc;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    *(undefined8 *)(puVar8 + -0x60) = 0x3b90cd3;
    eventData = unaff_RBX;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              ((UnityEngine_RectTransform_o *)unaff_R15,
               (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(puVar8 + -0x48),
               (UnityEngine_Camera_o *)unaff_RBX,(UnityEngine_Vector2_o *)(puVar8 + -0x50),(MethodInfo *)0x0);
    pSVar3 = (__this_02->fields).m_CanvasGroupCache;
    if (pSVar3 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
      eventData = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
      *(undefined8 *)(puVar8 + -0x60) = 0x3b90cea;
      UVar12 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pSVar3,(MethodInfo *)0x0);
      auVar6._8_4_ = in_XMM1_Dc;
      auVar6._0_8_ = UVar12.fields._8_8_;
      auVar6._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])(puVar8 + -0x48) = auVar6;
      pSVar3 = (__this_02->fields).m_CanvasGroupCache;
      if (pSVar3 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
        *(undefined8 *)(puVar8 + -0x60) = 0x3b90d06;
        UVar5 = UnityEngine_RectTransform__get_pivot((UnityEngine_RectTransform_o *)pSVar3,(MethodInfo *)0x0);
        auVar4._8_4_ = extraout_XMM0_Dc;
        auVar4._0_4_ = UVar5.fields.x;
        auVar4._4_4_ = UVar5.fields.y;
        auVar4._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])(puVar8 + -0x38) = auVar4;
        if (g_data_057a9ec0 == '\0') {
          *(undefined8 *)(puVar8 + -0x60) = 0x3b90d20;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9ec0 = '\x01';
        }
        unaff_RBX = (UnityEngine_EventSystems_PointerEventData_o *)(__this_02->fields)._thumb;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar8 + -0x60) = 0x3b90d40;
          il2cpp_runtime_helper_02337ed0();
        }
        eventData = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
        *(undefined8 *)(puVar8 + -0x60) = 0x3b90d4c;
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          fVar9 = 12.0;
          goto label_03b90d79;
        }
        __this_00 = (__this_02->fields)._thumb;
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          *(undefined8 *)(puVar8 + -0x60) = 0x3b90d67;
          UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
          fVar9 = UVar5.fields.x * 0.5;
label_03b90d79:
          fVar1 = *(float *)(puVar8 + -0x48);
          fVar10 = 0.0;
          if (fVar9 + fVar9 < fVar1) {
            fVar11 = fVar1 - fVar9;
            if ((fVar9 != fVar11) || (fVar10 = 0.0, NAN(fVar9) || NAN(fVar11))) {
              fVar9 = ((fVar1 * *(float *)(puVar8 + -0x38) + *(float *)(puVar8 + -0x50)) - fVar9) /
                      (fVar11 - fVar9);
              fVar10 = 0.0;
              if ((0.0 <= fVar9) && (fVar10 = 1.0, fVar9 <= 1.0)) {
                fVar10 = fVar9;
              }
            }
          }
          fVar9 = *(float *)&(__this_02->fields)._target;
          fVar1 = *(float *)((long)&(__this_02->fields)._target + 4);
          fVar11 = 0.0;
          if (0.0 <= fVar10) {
            fVar11 = fVar10;
          }
          *(undefined8 *)(puVar8 + -0x60) = 0x3b90e01;
          Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
                    (__this_02,(fVar1 - fVar9) * fVar11 + fVar9,1,1,method_00);
          return;
        }
      }
    }
    __this = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0;
    *(undefined8 *)(puVar8 + -0x60) = 0x3b90e14;
    il2cpp_runtime_helper_022b2c90();
    puVar8 = puVar8 + -0x58;
    unaff_R12 = __this_01;
    unaff_R14 = __this_02;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnDrag (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b90e20

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnDrag
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_List_CanvasGroup__o *pSVar2;
  UnityEngine_RectTransform_o *__this_00;
  undefined1 auVar3 [16];
  UnityEngine_Vector2_o UVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  MethodInfo *method_00;
  UnityEngine_EventSystems_PointerEventData_o *unaff_RBX;
  UnityEngine_EventSystems_PointerEventData_o *__this_01;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this_02;
  UnityEngine_EventSystems_PointerEventData_o *unaff_R12;
  undefined8 *unaff_R13;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *unaff_R14;
  System_Collections_Generic_List_CanvasGroup__o *unaff_R15;
  float fVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  
  do {
    __this_02 = __this;
    __this_01 = eventData;
    *(System_Collections_Generic_List_CanvasGroup__o **)((long)register0x00000020 + -8) = unaff_R15;
    *(Gisketch_Aottg2UI_Actions_AottgSliderControl_o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R13;
    *(UnityEngine_EventSystems_PointerEventData_o **)((long)register0x00000020 + -0x20) = unaff_R12;
    *(UnityEngine_EventSystems_PointerEventData_o **)((long)register0x00000020 + -0x28) = unaff_RBX;
    if (g_data_057a9ebd == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90c28;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90c34;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057a9ebd = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
    pSVar2 = (__this_02->fields).m_CanvasGroupCache;
    unaff_R13 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90c64;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90c70;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      return;
    }
    if ((char)bVar6 != '\0') {
      return;
    }
    unaff_R15 = (__this_02->fields).m_CanvasGroupCache;
    *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x48) =
         (__this_01->fields)._position_k__BackingField.fields;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90ca1;
    unaff_RBX = (UnityEngine_EventSystems_PointerEventData_o *)
                UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90cbc;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90cd3;
    eventData = unaff_RBX;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              ((UnityEngine_RectTransform_o *)unaff_R15,
               (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x48),
               (UnityEngine_Camera_o *)unaff_RBX,(UnityEngine_Vector2_o *)((long)register0x00000020 + -0x50),
               (MethodInfo *)0x0);
    pSVar2 = (__this_02->fields).m_CanvasGroupCache;
    if (pSVar2 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
      eventData = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90cea;
      UVar10 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pSVar2,(MethodInfo *)0x0);
      auVar5._8_4_ = in_XMM1_Dc;
      auVar5._0_8_ = UVar10.fields._8_8_;
      auVar5._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar5;
      pSVar2 = (__this_02->fields).m_CanvasGroupCache;
      if (pSVar2 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90d06;
        UVar4 = UnityEngine_RectTransform__get_pivot((UnityEngine_RectTransform_o *)pSVar2,(MethodInfo *)0x0);
        auVar3._8_4_ = extraout_XMM0_Dc;
        auVar3._0_4_ = UVar4.fields.x;
        auVar3._4_4_ = UVar4.fields.y;
        auVar3._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar3;
        if (g_data_057a9ec0 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90d20;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9ec0 = '\x01';
        }
        unaff_RBX = (UnityEngine_EventSystems_PointerEventData_o *)(__this_02->fields)._thumb;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90d40;
          il2cpp_runtime_helper_02337ed0();
        }
        eventData = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90d4c;
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          fVar7 = 12.0;
          goto label_03b90d79;
        }
        __this_00 = (__this_02->fields)._thumb;
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90d67;
          UVar4 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
          fVar7 = UVar4.fields.x * 0.5;
label_03b90d79:
          fVar1 = *(float *)((long)register0x00000020 + -0x48);
          fVar8 = 0.0;
          if (fVar7 + fVar7 < fVar1) {
            fVar9 = fVar1 - fVar7;
            if ((fVar7 != fVar9) || (fVar8 = 0.0, NAN(fVar7) || NAN(fVar9))) {
              fVar7 = ((fVar1 * *(float *)((long)register0x00000020 + -0x38) +
                       *(float *)((long)register0x00000020 + -0x50)) - fVar7) / (fVar9 - fVar7);
              fVar8 = 0.0;
              if ((0.0 <= fVar7) && (fVar8 = 1.0, fVar7 <= 1.0)) {
                fVar8 = fVar7;
              }
            }
          }
          fVar7 = *(float *)&(__this_02->fields)._target;
          fVar1 = *(float *)((long)&(__this_02->fields)._target + 4);
          fVar9 = 0.0;
          if (0.0 <= fVar8) {
            fVar9 = fVar8;
          }
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90e01;
          Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
                    (__this_02,(fVar1 - fVar7) * fVar9 + fVar7,1,1,method_00);
          return;
        }
      }
    }
    __this = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90e14;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x58);
    unaff_R12 = __this_01;
    unaff_R14 = __this_02;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerUp (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b90e30

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnPointerUp
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_UI_Selectable__OnPointerUp((UnityEngine_UI_Selectable_o *)__this,eventData,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnMove (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_AxisEventData_o* eventData, const MethodInfo* method);
// 0x3b90e50

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnMove
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_AxisEventData_o *eventData,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  long lVar3;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *value;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar4;
  undefined8 extraout_RDX_02;
  UnityEngine_Object_o *pUVar5;
  
  if (eventData == (UnityEngine_EventSystems_AxisEventData_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    uVar4 = extraout_RDX;
    if (g_data_057a9eed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9eed = '\x01';
      uVar4 = extraout_RDX_00;
    }
    if (g_data_057a9c87 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9c87 = '\x01';
      uVar4 = extraout_RDX_01;
    }
    lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    if (*(int *)(lVar3 + 0x18) != 1) {
      if (g_data_057a9f2a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9f2a = '\x01';
        lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
        *(undefined4 *)(lVar3 + 0x18) = 1;
        lVar3 = *(long *)(lVar3 + 0x10);
        uVar4 = extraout_RDX_02;
      }
      else {
        *(undefined4 *)(lVar3 + 0x18) = 1;
        lVar3 = *(long *)(lVar3 + 0x10);
      }
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28),uVar4,*(code **)(lVar3 + 0x18))
        ;
        return;
      }
    }
    return;
  }
  if (((eventData->fields)._moveDir_k__BackingField | 2U) == 2) {
    if (g_data_057a9eed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9eed = '\x01';
    }
    if (g_data_057a9c87 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9c87 = '\x01';
    }
    lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    if (*(int *)(lVar3 + 0x18) != 1) {
      if (g_data_057a9f2a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9f2a = '\x01';
        lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      }
      *(undefined4 *)(lVar3 + 0x18) = 1;
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      }
    }
    Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
              (__this,(*(float *)((long)&(__this->fields)._target + 4) - *(float *)&(__this->fields)._target)
                      * 0.05 * *(float *)(&g_data_00d1d580 +
                                         (ulong)((eventData->fields)._moveDir_k__BackingField == 2) * 4) +
                      (__this->fields)._max,1,2,(MethodInfo *)&g_data_00d1d580);
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
    (*(eventData->klass->vtable)._5_Use.methodPtr)(eventData,(eventData->klass->vtable)._5_Use.method);
    return;
  }
  if (eventData != (UnityEngine_EventSystems_AxisEventData_o *)0x0) {
    switch((eventData->fields)._moveDir_k__BackingField) {
    case 0:
      x = (UnityEngine_Object_o *)
          (*(__this->klass->vtable)._27_FindSelectableOnLeft.methodPtr)
                    (__this,(__this->klass->vtable)._27_FindSelectableOnLeft.method);
      break;
    case 1:
      x = (UnityEngine_Object_o *)
          (*(__this->klass->vtable)._29_FindSelectableOnUp.methodPtr)
                    (__this,(__this->klass->vtable)._29_FindSelectableOnUp.method);
      break;
    case 2:
      x = (UnityEngine_Object_o *)
          (*(__this->klass->vtable)._28_FindSelectableOnRight.methodPtr)
                    (__this,(__this->klass->vtable)._28_FindSelectableOnRight.method);
      break;
    case 3:
      x = (UnityEngine_Object_o *)
          (*(__this->klass->vtable)._30_FindSelectableOnDown.methodPtr)
                    (__this,(__this->klass->vtable)._30_FindSelectableOnDown.method);
      break;
    default:
      return;
    }
    if (g_data_057b83f4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057b83f4 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar5 = x;
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      cVar1 = (*(code *)x->klass[1]._1.declaringType)(x);
      if (cVar1 == '\0') {
        return;
      }
      value = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pUVar5 = x;
      if (eventData != (UnityEngine_EventSystems_AxisEventData_o *)0x0) {
        UnityEngine_EventSystems_BaseEventData__set_selectedObject
                  ((UnityEngine_EventSystems_BaseEventData_o *)eventData,value,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    cVar1 = (*(code *)pUVar5->klass[1]._1.declaringType)();
    if ((((cVar1 != '\0') &&
         (cVar1 = (*(code *)pUVar5->klass[1].vtable._0_Equals.method)
                            (pUVar5,pUVar5->klass[1].vtable._1_Finalize.methodPtr), cVar1 != '\0')) &&
        (*(char *)&pUVar5[10].klass != '\0')) && (*(char *)((long)&pUVar5[10].klass + 1) == '\0')) {
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90(__this,0,0);
  if (((__this->fields).m_Navigation.fields.m_Mode == 3) && (*(uint *)&(__this->fields)._track < 2)) {
    return;
  }
  UnityEngine_UI_Selectable__FindSelectableOnLeft
            ((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnSubmit (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b90f90

void Gisketch_Aottg2UI_Actions_AottgSliderControl__OnSubmit
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    method = extraout_RDX;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    method = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 1) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
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
                (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),method,*(code **)(lVar1 + 0x18));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b90c00

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetFromPointer
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_List_CanvasGroup__o *pSVar2;
  UnityEngine_RectTransform_o *__this_00;
  undefined1 auVar3 [16];
  UnityEngine_Vector2_o UVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  MethodInfo *method_00;
  UnityEngine_EventSystems_PointerEventData_o *unaff_RBX;
  UnityEngine_EventSystems_PointerEventData_o *__this_01;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this_02;
  UnityEngine_EventSystems_PointerEventData_o *unaff_R12;
  undefined8 *unaff_R13;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *unaff_R14;
  System_Collections_Generic_List_CanvasGroup__o *unaff_R15;
  float fVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  
  do {
    __this_02 = __this;
    __this_01 = eventData;
    *(System_Collections_Generic_List_CanvasGroup__o **)((long)register0x00000020 + -8) = unaff_R15;
    *(Gisketch_Aottg2UI_Actions_AottgSliderControl_o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R13;
    *(UnityEngine_EventSystems_PointerEventData_o **)((long)register0x00000020 + -0x20) = unaff_R12;
    *(UnityEngine_EventSystems_PointerEventData_o **)((long)register0x00000020 + -0x28) = unaff_RBX;
    if (g_data_057a9ebd == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90c28;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90c34;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057a9ebd = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
    pSVar2 = (__this_02->fields).m_CanvasGroupCache;
    unaff_R13 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90c64;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90c70;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      return;
    }
    if ((char)bVar6 != '\0') {
      return;
    }
    unaff_R15 = (__this_02->fields).m_CanvasGroupCache;
    *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x48) =
         (__this_01->fields)._position_k__BackingField.fields;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90ca1;
    unaff_RBX = (UnityEngine_EventSystems_PointerEventData_o *)
                UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90cbc;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90cd3;
    eventData = unaff_RBX;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              ((UnityEngine_RectTransform_o *)unaff_R15,
               (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x48),
               (UnityEngine_Camera_o *)unaff_RBX,(UnityEngine_Vector2_o *)((long)register0x00000020 + -0x50),
               (MethodInfo *)0x0);
    pSVar2 = (__this_02->fields).m_CanvasGroupCache;
    if (pSVar2 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
      eventData = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90cea;
      UVar10 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pSVar2,(MethodInfo *)0x0);
      auVar5._8_4_ = in_XMM1_Dc;
      auVar5._0_8_ = UVar10.fields._8_8_;
      auVar5._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar5;
      pSVar2 = (__this_02->fields).m_CanvasGroupCache;
      if (pSVar2 != (System_Collections_Generic_List_CanvasGroup__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90d06;
        UVar4 = UnityEngine_RectTransform__get_pivot((UnityEngine_RectTransform_o *)pSVar2,(MethodInfo *)0x0);
        auVar3._8_4_ = extraout_XMM0_Dc;
        auVar3._0_4_ = UVar4.fields.x;
        auVar3._4_4_ = UVar4.fields.y;
        auVar3._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar3;
        if (g_data_057a9ec0 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90d20;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9ec0 = '\x01';
        }
        unaff_RBX = (UnityEngine_EventSystems_PointerEventData_o *)(__this_02->fields)._thumb;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90d40;
          il2cpp_runtime_helper_02337ed0();
        }
        eventData = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90d4c;
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          fVar7 = 12.0;
          goto label_03b90d79;
        }
        __this_00 = (__this_02->fields)._thumb;
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90d67;
          UVar4 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
          fVar7 = UVar4.fields.x * 0.5;
label_03b90d79:
          fVar1 = *(float *)((long)register0x00000020 + -0x48);
          fVar8 = 0.0;
          if (fVar7 + fVar7 < fVar1) {
            fVar9 = fVar1 - fVar7;
            if ((fVar7 != fVar9) || (fVar8 = 0.0, NAN(fVar7) || NAN(fVar9))) {
              fVar7 = ((fVar1 * *(float *)((long)register0x00000020 + -0x38) +
                       *(float *)((long)register0x00000020 + -0x50)) - fVar7) / (fVar9 - fVar7);
              fVar8 = 0.0;
              if ((0.0 <= fVar7) && (fVar8 = 1.0, fVar7 <= 1.0)) {
                fVar8 = fVar7;
              }
            }
          }
          fVar7 = *(float *)&(__this_02->fields)._target;
          fVar1 = *(float *)((long)&(__this_02->fields)._target + 4);
          fVar9 = 0.0;
          if (0.0 <= fVar8) {
            fVar9 = fVar8;
          }
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90e01;
          Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
                    (__this_02,(fVar1 - fVar7) * fVar9 + fVar7,1,1,method_00);
          return;
        }
      }
    }
    __this = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b90e14;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x58);
    unaff_R12 = __this_01;
    unaff_R14 = __this_02;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, float value, bool notify, int32_t source, const MethodInfo* method);
// 0x3b908c0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValue
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,float value,bool_conflict notify,
               int32_t source,MethodInfo *method)

{
  ushort uVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  System_Threading_CancellationTokenSource_o *gameObject;
  undefined8 uVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *pGVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppMethodPointer pIVar6;
  MethodInfo *pMVar7;
  char cVar8;
  bool_conflict bVar9;
  System_Globalization_CultureInfo_o *method_00;
  MethodInfo *pMVar10;
  VirtualInvokeData *pVVar11;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *unaff_RBX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *unaff_RBP;
  undefined4 in_register_00000034;
  long lVar12;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *value_00;
  MethodInfo *unaff_R14;
  ulong unaff_R15;
  float __this_00;
  float fVar13;
  float fVar14;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar15;
  
  pMVar10 = (MethodInfo *)CONCAT44(in_register_00000034,notify);
  pMVar7 = (MethodInfo *)(ulong)(uint)source;
  while( true ) {
    method_01 = pMVar7;
    *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(MethodInfo **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(Gisketch_Aottg2UI_Actions_AottgSliderControl_o **)((long)register0x00000020 + -0x20) = unaff_RBX;
    unaff_R15 = (ulong)pMVar10 & 0xffffffff;
    if (g_data_057a9ebe == '\0') {
      *(float *)((long)register0x00000020 + -0x58) = value;
      *(undefined4 *)((long)register0x00000020 + -0x54) = in_XMM0_Db;
      *(undefined4 *)((long)register0x00000020 + -0x50) = in_XMM0_Dc;
      *(undefined4 *)((long)register0x00000020 + -0x4c) = in_XMM0_Dd;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b908f0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b908fc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
      value = *(float *)((long)register0x00000020 + -0x58);
      g_data_057a9ebe = '\x01';
    }
    *(undefined4 *)((long)register0x00000020 + -0x7c) = 0;
    fVar15 = *(float *)&(__this->fields)._target;
    fVar14 = *(float *)((long)&(__this->fields)._target + 4);
    fVar13 = fVar15;
    if (fVar14 <= fVar15) {
      fVar13 = fVar14;
    }
    if (fVar15 <= fVar14) {
      fVar15 = fVar14;
    }
    if (value <= fVar15) {
      fVar15 = value;
    }
    fVar15 = (float)(~-(uint)(fVar13 <= value) & (uint)fVar13 | (uint)fVar15 & -(uint)(fVar13 <= value));
    (__this->fields)._max = fVar15;
    pTVar2 = (__this->fields)._label;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      *(float *)((long)register0x00000020 + -0x7c) = fVar15;
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b9096f;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90976;
      method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90985;
      pMVar10 = (MethodInfo *)
                System_Single__ToString_3cccf70
                          (__this_00,(System_IFormatProvider_o *)((long)register0x00000020 + -0x7c),
                           (MethodInfo *)method_00);
      *(MethodInfo **)&(pTVar2->fields).m_RaycastPadding.fields.z = pMVar10;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90998;
      il2cpp_runtime_helper_022b4080(&(pTVar2->fields).m_RaycastPadding.fields.z);
    }
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b909a0;
    Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals(__this,pMVar10);
    if ((char)unaff_R15 == '\0') {
      return;
    }
    pTVar2 = (__this->fields)._label;
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) {
      value_00 = (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0;
      pMVar10 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90a84;
      bVar9 = System_String__IsNullOrEmpty((System_String_o *)0x0,(MethodInfo *)0x0);
      cVar8 = (char)bVar9;
    }
    else {
      value_00 = *(Gisketch_Aottg2UI_Actions_AottgSliderControl_o **)&(pTVar2->fields).m_RaycastPadding.fields
      ;
      pMVar10 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b909c4;
      bVar9 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
      cVar8 = (char)bVar9;
    }
    if (cVar8 != '\0') {
      return;
    }
    unaff_RBP = (__this->fields)._node;
    if (unaff_RBP == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      return;
    }
    pTVar2 = (__this->fields)._label;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90ad2;
    fVar13 = (float)il2cpp_runtime_helper_022b2c90();
    fVar15 = *(float *)&(value_00->fields)._target;
    fVar14 = 1.0;
    if (fVar13 <= 1.0) {
      fVar14 = fVar13;
    }
    fVar14 = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar14);
    fVar13 = 0.0;
    if (0.0 <= fVar14) {
      fVar13 = fVar14;
    }
    value = (*(float *)((long)&(value_00->fields)._target + 4) - fVar15) * fVar13 + fVar15;
    in_XMM0_Db = 0;
    in_XMM0_Dc = 0;
    in_XMM0_Dd = 0;
    pMVar7 = (MethodInfo *)0x0;
    unaff_RBX = __this;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xa8);
    __this = value_00;
    unaff_R14 = method_01;
  }
  gameObject = (pTVar2->fields).m_CancellationTokenSource;
  uVar3._0_4_ = (pTVar2->fields).m_RaycastPadding.fields.x;
  uVar3._4_4_ = (pTVar2->fields).m_RaycastPadding.fields.y;
  node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this->fields)._actions;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90a18;
  Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
            ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
             *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)((long)register0x00000020 + -0xa8),
             (System_String_o *)((long)register0x00000020 + -0x78),(UnityEngine_GameObject_o *)gameObject,node
             ,(int32_t)pTVar2,method_01);
  *(undefined4 *)((long)register0x00000020 + -0x38) = *(undefined4 *)((long)register0x00000020 + -0x68);
  *(undefined4 *)((long)register0x00000020 + -0x34) = *(undefined4 *)((long)register0x00000020 + -100);
  *(undefined4 *)((long)register0x00000020 + -0x30) = *(undefined4 *)((long)register0x00000020 + -0x60);
  *(undefined4 *)((long)register0x00000020 + -0x2c) = *(undefined4 *)((long)register0x00000020 + -0x5c);
  *(undefined8 *)((long)register0x00000020 + -0x48) = *(undefined8 *)((long)register0x00000020 + -0x78);
  *(undefined8 *)((long)register0x00000020 + -0x40) = *(undefined8 *)((long)register0x00000020 + -0x70);
  pGVar4 = unaff_RBP->klass;
  uVar1._0_1_ = (pGVar4->_2).rank;
  uVar1._1_1_ = (pGVar4->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar5 = (pGVar4->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IGisketchActionHandler) {
        pVVar11 = &(pGVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar12);
        goto label_03b90aa0;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar12);
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90a79;
  pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_IGisketchActionHandler,0);
label_03b90aa0:
  pMVar10 = pVVar11->method;
  *(undefined4 *)((long)register0x00000020 + -0x98) = *(undefined4 *)((long)register0x00000020 + -0x38);
  *(undefined4 *)((long)register0x00000020 + -0x94) = *(undefined4 *)((long)register0x00000020 + -0x34);
  *(undefined4 *)((long)register0x00000020 + -0x90) = *(undefined4 *)((long)register0x00000020 + -0x30);
  *(undefined4 *)((long)register0x00000020 + -0x8c) = *(undefined4 *)((long)register0x00000020 + -0x2c);
  *(undefined8 *)((long)register0x00000020 + -0xa8) = *(undefined8 *)((long)register0x00000020 + -0x48);
  *(undefined8 *)((long)register0x00000020 + -0xa0) = *(undefined8 *)((long)register0x00000020 + -0x40);
  pIVar6 = pVVar11->methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x3b90abf;
  (*pIVar6)(unaff_RBP,uVar3,pMVar10);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$RefreshVisuals
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x3b910d0

void Gisketch_Aottg2UI_Actions_AottgSliderControl__RefreshVisuals
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_CanvasGroup__o *pSVar2;
  UnityEngine_Vector2_o value;
  double dVar3;
  UnityEngine_Vector2_o UVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  bool_conflict bVar8;
  UnityEngine_UI_Selectable_o *__this_00;
  System_String_o *pSVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_RectTransform_o *pUVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  UnityEngine_Rect_o UVar16;
  int local_5c;
  undefined1 local_58 [16];
  double local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  if (g_data_057a9ebf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057a9ebf = '\x01';
  }
  auVar7 = local_58._4_12_;
  local_5c = 0;
  fVar11 = *(float *)&(__this->fields)._target;
  fVar12 = *(float *)((long)&(__this->fields)._target + 4);
  if ((fVar11 != fVar12) || (NAN(fVar11) || NAN(fVar12))) {
    fVar11 = ((__this->fields)._max - fVar11) / (fVar12 - fVar11);
    auVar5._12_4_ = 0;
    auVar5._0_12_ = local_58._4_12_;
    local_58 = auVar5 << 0x20;
    if (0.0 <= fVar11) {
      local_58._0_4_ = 1.0;
      if (fVar11 <= 1.0) {
        local_58._0_4_ = fVar11;
      }
      local_58 = CONCAT124(auVar7,local_58._0_4_);
    }
  }
  else {
    auVar6._12_4_ = 0;
    auVar6._0_12_ = local_58._4_12_;
    local_58 = auVar6 << 0x20;
  }
  uVar14 = 0;
  uVar13 = 0;
  pUVar10 = (__this->fields)._thumbFace;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar10 = (__this->fields)._thumbFace;
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    local_38._0_4_ = (float)local_58._0_4_ * 100.0;
    fVar11 = (float)local_58._0_4_ * 100.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      fVar11 = (float)local_38._0_4_;
    }
    local_48 = (double)fVar11;
    method_01 = (MethodInfo *)local_40;
    dVar3 = modf(local_48,(double *)method_01,method_00);
    uVar13 = 0;
    uVar14 = 0;
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
    __this_00 = (UnityEngine_UI_Selectable_o *)System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)__this_00,"%",(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_03b91499;
    (*(code *)pUVar10->klass[3].rgctx_data)(pUVar10,pSVar9,pUVar10->klass[3]._2.typeHierarchy);
  }
  pSVar2 = (__this->fields).m_CanvasGroupCache;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pSVar2 = (__this->fields).m_CanvasGroupCache;
  __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
  if (pSVar2 == (System_Collections_Generic_List_CanvasGroup__o *)0x0) goto label_03b91499;
  UVar16 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pSVar2,(MethodInfo *)0x0);
  if (UVar16.fields.m_Width <= 0.0) {
    return;
  }
  local_38._8_4_ = uVar13;
  local_38._0_8_ = UVar16.fields._8_8_;
  local_38._12_4_ = uVar14;
  if (g_data_057a9ec0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec0 = '\x01';
  }
  pUVar10 = (__this->fields)._thumb;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    fVar11 = 12.0;
    pUVar10 = (__this->fields)._fill;
    __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_03b91499;
  }
  else {
    pUVar10 = (__this->fields)._thumb;
    __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto label_03b91499;
    UVar4 = UnityEngine_RectTransform__get_sizeDelta(pUVar10,(MethodInfo *)0x0);
    fVar11 = UVar4.fields.x * 0.5;
    pUVar10 = (__this->fields)._fill;
    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) {
      __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
      goto label_03b91499;
    }
  }
  fVar12 = fVar11;
  if (fVar11 <= (float)local_38._0_4_ - fVar11) {
    fVar12 = (float)local_38._0_4_ - fVar11;
  }
  fVar15 = 0.0;
  if (0.0 <= (float)local_58._0_4_) {
    fVar15 = (float)local_58._0_4_;
  }
  fVar11 = (fVar12 - fVar11) * fVar15 + fVar11;
  local_58 = ZEXT416((uint)fVar11);
  UVar4.fields.y = 0.0;
  UVar4.fields.x = fVar11;
  UnityEngine_RectTransform__set_anchoredPosition(pUVar10,UVar4,(MethodInfo *)0x0);
  pUVar10 = (__this->fields)._track;
  __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
  if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (pUVar10,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
    pUVar10 = (__this->fields)._track;
    __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMax
                (pUVar10,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
      pUVar10 = (__this->fields)._track;
      __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_offsetMin
                  (pUVar10,(UnityEngine_Vector2_o)((ulong)(uint)((__this->fields)._min * -0.5) << 0x20),
                   (MethodInfo *)0x0);
        pUVar10 = (__this->fields)._track;
        __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
        if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
          value.fields.y = (__this->fields)._min * 0.5;
          value.fields.x = (float)local_58._0_4_;
          UnityEngine_RectTransform__set_offsetMax(pUVar10,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_03b91499:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ec2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Selectable);
    g_data_057a9ec2 = '\x01';
    iVar1 = *(int *)(TypeInfo_Selectable + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Selectable + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    UnityEngine_UI_Selectable___ctor(__this_00,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_UI_Selectable___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$ThumbWidth
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__ThumbWidth (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x3b91040

float Gisketch_Aottg2UI_Actions_AottgSliderControl__ThumbWidth
                (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *x;
  UnityEngine_RectTransform_c *pUVar2;
  void *pvVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  bool_conflict bVar10;
  UnityEngine_UI_Selectable_o *__this_00;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *method_01;
  UnityEngine_RectTransform_o *pUVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  UnityEngine_Rect_o UVar18;
  int iStack_74;
  undefined1 auStack_70 [16];
  double dStack_60;
  Il2CppMethodPointer pIStack_58;
  undefined1 auStack_50 [16];
  Il2CppClass *pIStack_38;
  
  if (g_data_057a9ec0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec0 = '\x01';
  }
  x = (Il2CppClass *)(__this->fields)._thumb;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return 24.0;
  }
  __this_01 = (__this->fields)._thumb;
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    return UVar5.fields.x;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_38 = x;
  if (g_data_057a9ebf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057a9ebf = '\x01';
  }
  auVar9 = auStack_70._4_12_;
  iStack_74 = 0;
  fVar13 = *(float *)&__this_01[0xd].monitor;
  fVar14 = *(float *)((long)&__this_01[0xd].monitor + 4);
  if ((fVar13 != fVar14) || (NAN(fVar13) || NAN(fVar14))) {
    fVar13 = (*(float *)((long)&__this_01[0xd].fields.m_CachedPtr + 4) - fVar13) / (fVar14 - fVar13);
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auStack_70._4_12_;
    auStack_70 = auVar7 << 0x20;
    if (0.0 <= fVar13) {
      auStack_70._0_4_ = 1.0;
      if (fVar13 <= 1.0) {
        auStack_70._0_4_ = fVar13;
      }
      auStack_70 = CONCAT124(auVar9,auStack_70._0_4_);
    }
  }
  else {
    auVar8._12_4_ = 0;
    auVar8._0_12_ = auStack_70._4_12_;
    auStack_70 = auVar8 << 0x20;
  }
  uVar16 = 0;
  uVar15 = 0;
  pUVar2 = __this_01[0xc].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    pUVar2 = __this_01[0xc].klass;
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    auStack_50._0_4_ = (float)auStack_70._0_4_ * 100.0;
    fVar13 = (float)auStack_70._0_4_ * 100.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      fVar13 = (float)auStack_50._0_4_;
    }
    dStack_60 = (double)fVar13;
    method_01 = (MethodInfo *)&pIStack_58;
    dVar6 = modf(dStack_60,(double *)method_01,method_00);
    uVar15 = 0;
    uVar16 = 0;
    if (0.0 <= (float)auStack_50._0_4_) {
      if ((dVar6 != 0.5) || (NAN(dVar6))) {
        pIStack_58 = (Il2CppMethodPointer)floor(dStack_60 + 0.5,method_01);
      }
      else if (((long)(double)pIStack_58 & 1U) != 0) {
        pIStack_58 = (Il2CppMethodPointer)((double)pIStack_58 + 1.0);
      }
    }
    else if ((dVar6 != -0.5) || (NAN(dVar6))) {
      pIStack_58 = (Il2CppMethodPointer)ceil(dStack_60 + -0.5,method_01);
    }
    else if (((long)(double)pIStack_58 & 1U) != 0) {
      pIStack_58 = (Il2CppMethodPointer)((double)pIStack_58 + -1.0);
    }
    iStack_74 = (int)(double)pIStack_58;
    __this_00 = (UnityEngine_UI_Selectable_o *)System_Int32__ToString((int32_t)&iStack_74,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat_3ae5ba0((System_String_o *)__this_00,"%",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_RectTransform_c *)0x0) goto label_03b91499;
    pvVar3 = (pUVar2->_1).image;
    (**(code **)((long)pvVar3 + 0x558))(pUVar2,pSVar11,*(undefined8 *)((long)pvVar3 + 0x560));
  }
  pUVar4 = (UnityEngine_Object_o *)__this_01[10].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return extraout_XMM0_Da;
  }
  pUVar12 = (UnityEngine_RectTransform_o *)__this_01[10].fields.m_CachedPtr;
  __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
  if (pUVar12 == (UnityEngine_RectTransform_o *)0x0) goto label_03b91499;
  UVar18 = UnityEngine_RectTransform__get_rect(pUVar12,(MethodInfo *)0x0);
  if (UVar18.fields.m_Width <= 0.0) {
    return 0.0;
  }
  auStack_50._8_4_ = uVar15;
  auStack_50._0_8_ = UVar18.fields._8_8_;
  auStack_50._12_4_ = uVar16;
  if (g_data_057a9ec0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ec0 = '\x01';
  }
  pUVar4 = (UnityEngine_Object_o *)__this_01[0xb].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    fVar13 = 12.0;
    pUVar12 = __this_01[0xb].monitor;
    __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
    if (pUVar12 == (UnityEngine_RectTransform_o *)0x0) goto label_03b91499;
  }
  else {
    pUVar12 = (UnityEngine_RectTransform_o *)__this_01[0xb].fields.m_CachedPtr;
    __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
    if (pUVar12 == (UnityEngine_RectTransform_o *)0x0) goto label_03b91499;
    UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar12,(MethodInfo *)0x0);
    fVar13 = UVar5.fields.x * 0.5;
    pUVar12 = __this_01[0xb].monitor;
    if (pUVar12 == (UnityEngine_RectTransform_o *)0x0) {
      __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
      goto label_03b91499;
    }
  }
  fVar14 = fVar13;
  if (fVar13 <= (float)auStack_50._0_4_ - fVar13) {
    fVar14 = (float)auStack_50._0_4_ - fVar13;
  }
  fVar17 = 0.0;
  if (0.0 <= (float)auStack_70._0_4_) {
    fVar17 = (float)auStack_70._0_4_;
  }
  fVar13 = (fVar14 - fVar13) * fVar17 + fVar13;
  auStack_70 = ZEXT416((uint)fVar13);
  UVar5.fields.y = 0.0;
  UVar5.fields.x = fVar13;
  UnityEngine_RectTransform__set_anchoredPosition(pUVar12,UVar5,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
  if (__this_01[0xb].klass != (UnityEngine_RectTransform_c *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              ((UnityEngine_RectTransform_o *)__this_01[0xb].klass,(UnityEngine_Vector2_o)0x3f00000000000000,
               (MethodInfo *)0x0);
    __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
    if (__this_01[0xb].klass != (UnityEngine_RectTransform_c *)0x0) {
      UnityEngine_RectTransform__set_anchorMax
                ((UnityEngine_RectTransform_o *)__this_01[0xb].klass,(UnityEngine_Vector2_o)0x3f00000000000000
                 ,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
      if (__this_01[0xb].klass != (UnityEngine_RectTransform_c *)0x0) {
        UnityEngine_RectTransform__set_offsetMin
                  ((UnityEngine_RectTransform_o *)__this_01[0xb].klass,
                   (UnityEngine_Vector2_o)
                   ((ulong)(uint)(*(float *)&__this_01[0xd].fields.m_CachedPtr * -0.5) << 0x20),
                   (MethodInfo *)0x0);
        __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
        if (__this_01[0xb].klass != (UnityEngine_RectTransform_c *)0x0) {
          value.fields.y = *(float *)&__this_01[0xd].fields.m_CachedPtr * 0.5;
          value.fields.x = (float)auStack_70._0_4_;
          UnityEngine_RectTransform__set_offsetMax
                    ((UnityEngine_RectTransform_o *)__this_01[0xb].klass,value,(MethodInfo *)0x0);
          return extraout_XMM0_Da_00;
        }
      }
    }
  }
label_03b91499:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ec2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Selectable);
    g_data_057a9ec2 = '\x01';
    iVar1 = *(int *)(TypeInfo_Selectable + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Selectable + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    UnityEngine_UI_Selectable___ctor(__this_00,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  UnityEngine_UI_Selectable___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_XMM0_Da_01;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$ParseFloat
// il2cpp: float Gisketch_Aottg2UI_Actions_AottgSliderControl__ParseFloat (System_String_o* value, float fallback, const MethodInfo* method);
// 0x3b90830

float Gisketch_Aottg2UI_Actions_AottgSliderControl__ParseFloat
                (System_String_o *value,float fallback,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Globalization_CultureInfo_o *provider;
  float local_10;
  float local_c;
  
  local_c = fallback;
  if (g_data_057a9ec1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057a9ec1 = '\x01';
  }
  local_10 = 0.0;
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Single__TryParse_3ccd6a0
                    (value,0xa7,(System_IFormatProvider_o *)provider,&local_10,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return local_c;
  }
  return local_10;
}


// Gisketch.Aottg2UI.Actions.AottgSliderControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSliderControl___ctor (Gisketch_Aottg2UI_Actions_AottgSliderControl_o* __this, const MethodInfo* method);
// 0x3b914a0

void Gisketch_Aottg2UI_Actions_AottgSliderControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057a9ec2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Selectable);
    g_data_057a9ec2 = '\x01';
    iVar1 = *(int *)(TypeInfo_Selectable + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Selectable + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  return;
}


