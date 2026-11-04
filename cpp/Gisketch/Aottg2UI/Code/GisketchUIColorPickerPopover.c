// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerPopover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* id, UnityEngine_GameObject_o* source, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1818ef1d0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *id,
               UnityEngine_GameObject_o *source,Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  System_Action_GisketchUIColorPickerValue__c *pSVar7;
  bool bVar8;
  UnityEngine_Transform_o *pUVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar11;
  TMPro_TMP_InputField_o *pTVar12;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar13;
  DG_Tweening_Core_DOSetter_T__o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar14;
  DG_Tweening_Core_DOSetter_Vector4__o *__this_02;
  System_Delegate_o *obj;
  Il2CppObject *pIVar15;
  System_Action_GisketchUIColorPickerValue__o *pSVar16;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar17;
  System_Action_GisketchUIColorPickerValue__o *a;
  undefined8 local_38;
  undefined8 uStack_30;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_184342104 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_Cancel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnVisualChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_Save);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_GisketchUIColorPickerVisual);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"-cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"-save");
    il2cpp_codegen_initialize_runtime_metadata(&"-g");
    il2cpp_codegen_initialize_runtime_metadata(&"-r");
    il2cpp_codegen_initialize_runtime_metadata(&"-b");
    Il2CppMethodInitialized_184342104 = '\x01';
  }
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source,source);
  (__this->fields)._root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root,root);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  pSVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__VisualId(id,(MethodInfo *)0x0);
  pGVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar9,pSVar10,
                       (MethodInfo_68B400 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_GisketchUIColorPickerVisual
                      );
  if (pGVar11 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
    bVar8 = (__this->fields)._enableAlpha;
  }
  else {
    bVar8 = (pGVar11->fields)._EnableAlpha_k__BackingField;
  }
  (__this->fields)._enableAlpha = bVar8;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  pSVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Current(id,bVar8,(MethodInfo *)0x0);
  bVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar10,(__this->fields)._enableAlpha,&(__this->fields)._value,(MethodInfo *)0x0);
  if (!bVar8) {
    uStack_30 = 0;
    local_38 = 0xffffffff;
    local_28.r = 1.0;
    local_28.g = 1.0;
    local_28.b = 1.0;
    local_28.a = 1.0;
    UnityEngine_Color__RGBToHSV
              ((UnityEngine_Color_o *)&local_28,(float *)((longlong)&local_38 + 4),(float *)&uStack_30,
               (float *)((longlong)&uStack_30 + 4),(MethodInfo *)0x0);
    (__this->fields)._value.fields.R = (undefined1)local_38;
    (__this->fields)._value.fields.G = local_38._1_1_;
    (__this->fields)._value.fields.B = local_38._2_1_;
    (__this->fields)._value.fields.A = local_38._3_1_;
    (__this->fields)._value.fields.H = (float)local_38._4_4_;
    (__this->fields)._value.fields.S = (float)(undefined4)uStack_30;
    (__this->fields)._value.fields.V = (float)uStack_30._4_4_;
  }
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_1969e50(id,"-r",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  pTVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar9,pSVar10,
                       (MethodInfo_68B400 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TMP_InputField);
  (__this->fields)._r = pTVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._r,pTVar12);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_1969e50(id,"-g",(MethodInfo *)0x0);
  pTVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar9,pSVar10,
                       (MethodInfo_68B400 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TMP_InputField);
  (__this->fields)._g = pTVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._g,pTVar12);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_1969e50(id,"-b",(MethodInfo *)0x0);
  pTVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar9,pSVar10,
                       (MethodInfo_68B400 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TMP_InputField);
  (__this->fields)._b = pTVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._b,pTVar12);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__HexId(id,(MethodInfo *)0x0);
  pTVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar9,pSVar10,
                       (MethodInfo_68B400 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TMP_InputField);
  (__this->fields)._hex = pTVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hex,pTVar12);
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__VisualId(id,(MethodInfo *)0x0);
  pGVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar9,pSVar10,
                       (MethodInfo_68B400 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_GisketchUIColorPickerVisual
                      );
  (__this->fields)._visual = pGVar11;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visual,pGVar11);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            (__this,(__this->fields)._r,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            (__this,(__this->fields)._g,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            (__this,(__this->fields)._b,(MethodInfo *)0x0);
  pTVar12 = (__this->fields)._hex;
  if (Il2CppMethodInitialized_18434210e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnHexChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateHex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    Il2CppMethodInitialized_18434210e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar8) {
    if (pTVar12 == (TMPro_TMP_InputField_o *)0x0) goto label_1818ef813;
    pTVar17 = (pTVar12->fields).m_OnValidateInput;
    pTVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor
              ((UnityEngine_UI_InputField_OnValidateInput_o *)pTVar13,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateHex,
               (MethodInfo *)0x0);
    pTVar13 = (TMPro_TMP_InputField_OnValidateInput_o *)
              System_Delegate__Combine
                        ((System_Delegate_o *)pTVar17,(System_Delegate_o *)pTVar13,(MethodInfo *)0x0);
    pTVar17 = (TMPro_TMP_InputField_OnValidateInput_o *)0x0;
    if (pTVar13 != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
      if (pTVar13->klass == TypeInfo_TMPro_TMP_InputField_OnValidateInput) {
        pTVar17 = pTVar13;
      }
      if (pTVar17 == (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pTVar13,TypeInfo_TMPro_TMP_InputField_OnValidateInput);
      }
    }
    TMPro_TMP_InputField__set_onValidateInput(pTVar12,pTVar17,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pTVar12->fields).m_OnValueChanged;
    __this_01 = (DG_Tweening_Core_DOSetter_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnHexChanged,
               (MethodInfo_EB6EC0 *)0x0);
    if (__this_00 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) goto label_1818ef813;
    UnityEngine_Events_UnityEvent_Vector2___AddListener
              (__this_00,(UnityEngine_Events_UnityAction_T0__o *)__this_01,
               (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
  }
  pSVar10 = System_String__Concat_1969e50(id,"-cancel",(MethodInfo *)0x0);
  pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_Cancel,(MethodInfo *)0x0
            );
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton(__this,pSVar10,pUVar14,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_1969e50(id,"-save",(MethodInfo *)0x0);
  pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_Save,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton(__this,pSVar10,pUVar14,(MethodInfo *)0x0);
  pGVar11 = (__this->fields)._visual;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    pGVar11 = (__this->fields)._visual;
    __this_02 = (DG_Tweening_Core_DOSetter_Vector4__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue);
    System_Action_GisketchUIColorPickerValue____ctor
              (__this_02,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnVisualChanged,
               (MethodInfo_E5A5D0 *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      if (Il2CppMethodInitialized_184342116 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
        Il2CppMethodInitialized_184342116 = '\x01';
      }
      a = (pGVar11->fields).Changed;
      do {
        obj = System_Delegate__Combine
                        ((System_Delegate_o *)a,(System_Delegate_o *)__this_02,(MethodInfo *)0x0);
        pSVar7 = TypeInfo_System_Action_GisketchUIColorPickerValue;
        if (obj != (System_Delegate_o *)0x0) {
          pIVar15 = il2cpp_vm_Object_IsInst
                              ((Il2CppObject *)obj,
                               (Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue);
          if (pIVar15 == (Il2CppObject *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar7);
          }
        }
        pSVar16 = (System_Action_GisketchUIColorPickerValue__o *)il2cpp_runtime_helper_1804174a0(&(pGVar11->fields).Changed);
        bVar8 = pSVar16 != a;
        a = pSVar16;
      } while (bVar8);
      pGVar11 = (__this->fields)._visual;
      if (pGVar11 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        uVar1 = (__this->fields)._value.fields.G;
        uVar2 = (__this->fields)._value.fields.B;
        uVar3 = (__this->fields)._value.fields.A;
        fVar4 = (__this->fields)._value.fields.H;
        fVar5 = (__this->fields)._value.fields.S;
        fVar6 = (__this->fields)._value.fields.V;
        (pGVar11->fields)._value.fields.R = (__this->fields)._value.fields.R;
        (pGVar11->fields)._value.fields.G = uVar1;
        (pGVar11->fields)._value.fields.B = uVar2;
        (pGVar11->fields)._value.fields.A = uVar3;
        (pGVar11->fields)._value.fields.H = fVar4;
        (pGVar11->fields)._value.fields.S = fVar5;
        (pGVar11->fields)._value.fields.V = fVar6;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar11,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar11,(MethodInfo *)0x0);
        goto label_1818ef7ef;
      }
    }
label_1818ef813:
    ThrowNullReferenceException();
  }
label_1818ef7ef:
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnDestroy (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x1818eeb10
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818eebe9: nop dword ptr [rax]
// asm:   0x1818eec36: mov r14, qword ptr [rsp + 0x40]
// asm:   0x1818eec3b: mov rbp, qword ptr [rsp + 0x30]
// asm:   0x1818eec40: mov rsi, qword ptr [rsp + 0x38]

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnDestroy
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar1;
  System_Action_GisketchUIColorPickerValue__c *pSVar2;
  bool bVar3;
  DG_Tweening_Core_DOSetter_Vector4__o *__this_00;
  System_Delegate_o *obj;
  Il2CppObject *pIVar4;
  System_Action_GisketchUIColorPickerValue__o *pSVar5;
  System_Action_GisketchUIColorPickerValue__o *source;
  
  if (Il2CppMethodInitialized_184342105 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnVisualChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342105 = '\x01';
  }
  pGVar1 = (__this->fields)._visual;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar1 = (__this->fields)._visual;
    __this_00 = (DG_Tweening_Core_DOSetter_Vector4__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue);
    System_Action_GisketchUIColorPickerValue____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnVisualChanged,
               (MethodInfo_E5A5D0 *)0x0);
    if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_184342117 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
      Il2CppMethodInitialized_184342117 = '\x01';
    }
    source = (pGVar1->fields).Changed;
    do {
      obj = System_Delegate__Remove
                      ((System_Delegate_o *)source,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
      pSVar2 = TypeInfo_System_Action_GisketchUIColorPickerValue;
      pIVar4 = (Il2CppObject *)0x0;
      if ((obj != (System_Delegate_o *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)obj,
                              (Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue),
         pIVar4 == (Il2CppObject *)0x0)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar2);
      }
      pSVar5 = (System_Action_GisketchUIColorPickerValue__o *)il2cpp_runtime_helper_1804174a0(&(pGVar1->fields).Changed,pIVar4);
      bVar3 = pSVar5 != source;
      source = pSVar5;
    } while (bVar3);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnVisualChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnVisualChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, const MethodInfo* method);
// 0x1818eee70

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnVisualChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value,MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184342106 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_184342106 = '\x01';
  }
  if ((__this->fields)._syncing == false) {
    uVar1 = (value->fields).G;
    uVar2 = (value->fields).B;
    uVar3 = (value->fields).A;
    fVar4 = (value->fields).H;
    fVar5 = (value->fields).S;
    fVar6 = (value->fields).V;
    (__this->fields)._value.fields.R = (value->fields).R;
    (__this->fields)._value.fields.G = uVar1;
    (__this->fields)._value.fields.B = uVar2;
    (__this->fields)._value.fields.A = uVar3;
    (__this->fields)._value.fields.H = fVar4;
    (__this->fields)._value.fields.S = fVar5;
    (__this->fields)._value.fields.V = fVar6;
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,(MethodInfo *)0x0);
    id = (__this->fields)._id;
    local_28[0].R = (__this->fields)._value.fields.R;
    local_28[0].G = (__this->fields)._value.fields.G;
    local_28[0].B = (__this->fields)._value.fields.B;
    local_28[0].A = (__this->fields)._value.fields.A;
    local_28[0].H = (__this->fields)._value.fields.H;
    local_28[0].S = (__this->fields)._value.fields.S;
    local_28[0].V = (__this->fields)._value.fields.V;
    source = (__this->fields)._source;
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
              (id,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)local_28,source,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnRgbChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnRgbChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* __, const MethodInfo* method);
// 0x1818eed70

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnRgbChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *__,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  byte local_res8 [8];
  byte local_res20 [8];
  byte local_38 [16];
  undefined8 local_28;
  float afStack_20 [2];
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o local_18;
  
  local_res8[0] = 0;
  local_res20[0] = 0;
  local_38[0] = 0;
  if ((__this->fields)._syncing == false) {
    bVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb
                      (__this,local_res8,local_res20,local_38,(MethodInfo *)0x0);
    if (bVar2) {
      bVar1 = (__this->fields)._value.fields.A;
      afStack_20[0] = 0.0;
      afStack_20[1] = 0.0;
      local_28 = (ulonglong)CONCAT31(CONCAT12(bVar1,CONCAT11(local_38[0],local_res20[0])),local_res8[0]);
      local_18.fields.H = (float)local_res20[0] / 255.0;
      local_18.fields._0_4_ = (float)local_res8[0] / 255.0;
      local_18.fields.V = (float)bVar1 / 255.0;
      local_18.fields.S = (float)local_38[0] / 255.0;
      UnityEngine_Color__RGBToHSV
                ((UnityEngine_Color_o *)&local_18,(float *)((longlong)&local_28 + 4),afStack_20,afStack_20 + 1
                 ,(MethodInfo *)0x0);
      local_18.fields.R = (undefined1)local_28;
      local_18.fields.G = local_28._1_1_;
      local_18.fields.B = local_28._2_1_;
      local_18.fields.A = local_28._3_1_;
      local_18.fields.H = (float)local_28._4_4_;
      local_18.fields.S = afStack_20[0];
      local_18.fields.V = afStack_20[1];
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue(__this,&local_18,true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnHexChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnHexChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* text, const MethodInfo* method);
// 0x1818eec70

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnHexChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *text,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  System_String_o *b;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_18;
  
  if (Il2CppMethodInitialized_184342107 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342107 = '\x01';
  }
  local_18.R = '\0';
  local_18.G = '\0';
  local_18.B = '\0';
  local_18.A = '\0';
  local_18.H = 0.0;
  local_18.S = 0.0;
  local_18.V = 0.0;
  if ((__this->fields)._syncing == false) {
    pTVar1 = (__this->fields)._hex;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      b = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
                    (text,(__this->fields)._enableAlpha,(MethodInfo *)0x0);
      pTVar1 = (__this->fields)._hex;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
label_1818eed68:
        ThrowNullReferenceException();
      }
      bVar2 = System_String__op_Inequality((pTVar1->fields).m_Text,b,(MethodInfo *)0x0);
      if (bVar2) {
        pTVar1 = (__this->fields)._hex;
        if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818eed68;
        TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,b,(MethodInfo *)0x0);
      }
      bVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                        (b,(__this->fields)._enableAlpha,
                         (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_18,(MethodInfo *)0x0);
      if (bVar2) {
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue
                  (__this,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_18,true,
                   (MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Save
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Save (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x1818eef10

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Save
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  System_String_o **ppSVar6;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184342108 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342108 = '\x01';
  }
  pTVar1 = (__this->fields)._hex;
  local_28[0].R = '\0';
  local_28[0].G = '\0';
  local_28[0].B = '\0';
  local_28[0].A = '\0';
  local_28[0].H = 0.0;
  local_28[0].S = 0.0;
  local_28[0].V = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pTVar1 = (__this->fields)._hex;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
      ThrowNullReferenceException();
    }
    ppSVar6 = &(pTVar1->fields).m_Text;
  }
  else {
    ppSVar6 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (*ppSVar6,(__this->fields)._enableAlpha,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)local_28,(MethodInfo *)0x0);
  uVar4 = local_28[0]._8_8_;
  uVar3 = local_28[0]._0_8_;
  if (bVar5) {
    id = (__this->fields)._id;
    source = (__this->fields)._source;
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    local_28[0]._0_8_ = uVar3;
    local_28[0]._8_8_ = uVar4;
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit
              (id,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)local_28,source,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._root;
    if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar2->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Cancel (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x1818eea80

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Cancel
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_184342109 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_184342109 = '\x01';
  }
  id = (__this->fields)._id;
  source = (__this->fields)._source;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel(id,source,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._root;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,true,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, bool visual, const MethodInfo* method);
// 0x1818ef0d0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value,bool visual,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar1;
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  undefined8 uVar2;
  undefined8 uVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434210a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434210a = '\x01';
  }
  uVar4 = (value->fields).G;
  uVar5 = (value->fields).B;
  uVar6 = (value->fields).A;
  fVar7 = (value->fields).H;
  fVar8 = (value->fields).S;
  fVar9 = (value->fields).V;
  (__this->fields)._value.fields.R = (value->fields).R;
  (__this->fields)._value.fields.G = uVar4;
  (__this->fields)._value.fields.B = uVar5;
  (__this->fields)._value.fields.A = uVar6;
  (__this->fields)._value.fields.H = fVar7;
  (__this->fields)._value.fields.S = fVar8;
  (__this->fields)._value.fields.V = fVar9;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,(MethodInfo *)0x0);
  if (visual) {
    pGVar1 = (__this->fields)._visual;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar10) {
      pGVar1 = (__this->fields)._visual;
      if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar4 = (__this->fields)._value.fields.G;
      uVar5 = (__this->fields)._value.fields.B;
      uVar6 = (__this->fields)._value.fields.A;
      fVar7 = (__this->fields)._value.fields.H;
      fVar8 = (__this->fields)._value.fields.S;
      fVar9 = (__this->fields)._value.fields.V;
      (pGVar1->fields)._value.fields.R = (__this->fields)._value.fields.R;
      (pGVar1->fields)._value.fields.G = uVar4;
      (pGVar1->fields)._value.fields.B = uVar5;
      (pGVar1->fields)._value.fields.A = uVar6;
      (pGVar1->fields)._value.fields.H = fVar7;
      (pGVar1->fields)._value.fields.S = fVar8;
      (pGVar1->fields)._value.fields.V = fVar9;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar1,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar1,(MethodInfo *)0x0);
    }
  }
  id = (__this->fields)._id;
  uVar2._0_1_ = (__this->fields)._value.fields.R;
  uVar2._1_1_ = (__this->fields)._value.fields.G;
  uVar2._2_1_ = (__this->fields)._value.fields.B;
  uVar2._3_1_ = (__this->fields)._value.fields.A;
  uVar2._4_4_ = (__this->fields)._value.fields.H;
  uVar3._0_4_ = (__this->fields)._value.fields.S;
  uVar3._4_4_ = (__this->fields)._value.fields.V;
  source = (__this->fields)._source;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  local_28[0]._0_8_ = uVar2;
  local_28[0]._8_8_ = uVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
            (id,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)local_28,source,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SyncFields
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x1818ef840

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  System_String_o *pSVar3;
  UnityEngine_Transform_o *root;
  UnityEngine_UI_Image_o *x;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_18434210b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434210b = '\x01';
  }
  pTVar1 = (__this->fields)._r;
  (__this->fields)._syncing = true;
  pSVar3 = System_Byte__ToString((uint8_t *)&(__this->fields)._value,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184342110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342110 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818efb8b;
    bVar2 = System_String__op_Inequality((pTVar1->fields).m_Text,pSVar3,(MethodInfo *)0x0);
    if (bVar2) {
      TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,pSVar3,(MethodInfo *)0x0);
    }
  }
  pTVar1 = (__this->fields)._g;
  pSVar3 = System_Byte__ToString(&(__this->fields)._value.fields.G,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184342110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342110 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818efb8b;
    bVar2 = System_String__op_Inequality((pTVar1->fields).m_Text,pSVar3,(MethodInfo *)0x0);
    if (bVar2) {
      TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,pSVar3,(MethodInfo *)0x0);
    }
  }
  pTVar1 = (__this->fields)._b;
  pSVar3 = System_Byte__ToString(&(__this->fields)._value.fields.B,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184342110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342110 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818efb8b;
    bVar2 = System_String__op_Inequality((pTVar1->fields).m_Text,pSVar3,(MethodInfo *)0x0);
    if (bVar2) {
      TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,pSVar3,(MethodInfo *)0x0);
    }
  }
  pTVar1 = (__this->fields)._hex;
  pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToHex
                     (&(__this->fields)._value,(__this->fields)._enableAlpha,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184342110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342110 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818efb8b;
    bVar2 = System_String__op_Inequality((pTVar1->fields).m_Text,pSVar3,(MethodInfo *)0x0);
    if (bVar2) {
      TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,pSVar3,(MethodInfo *)0x0);
    }
  }
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._id;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__PreviewId(pSVar3,(MethodInfo *)0x0);
  x = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                (root,pSVar3,
                 (MethodInfo_68B400 *)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Image);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    local_18.fields.r = (float)(__this->fields)._value.fields.R / 255.0;
    local_18.fields.a = (float)(__this->fields)._value.fields.A / 255.0;
    local_18.fields.g = (float)(__this->fields)._value.fields.G / 255.0;
    local_18.fields.b = (float)(__this->fields)._value.fields.B / 255.0;
    if (x == (UnityEngine_UI_Image_o *)0x0) {
label_1818efb8b:
      ThrowNullReferenceException();
    }
    (*(x->klass->vtable)._23_set_color.methodPtr)(x,&local_18,(x->klass->vtable)._23_set_color.method);
  }
  (__this->fields)._syncing = false;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$TryRgb
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, uint8_t* r, uint8_t* g, uint8_t* b, const MethodInfo* method);
// 0x1818efba0

bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,uint8_t *r,uint8_t *g,uint8_t *b
               ,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  System_String_o *pSVar6;
  System_String_o **ppSVar7;
  
  if (Il2CppMethodInitialized_18434210c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434210c = '\x01';
  }
  pTVar1 = (__this->fields)._r;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._r;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818efeb1;
    ppSVar7 = &(pTVar1->fields).m_Text;
  }
  else {
    ppSVar7 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  bVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParseByte(*ppSVar7,r,(MethodInfo *)0x0);
  pTVar1 = (__this->fields)._g;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar1 = (__this->fields)._g;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818efeb1;
    ppSVar7 = &(pTVar1->fields).m_Text;
  }
  else {
    ppSVar7 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  bVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParseByte(*ppSVar7,g,(MethodInfo *)0x0);
  pTVar1 = (__this->fields)._b;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar1 = (__this->fields)._b;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818efeb1;
    ppSVar7 = &(pTVar1->fields).m_Text;
  }
  else {
    ppSVar7 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  bVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParseByte(*ppSVar7,b,(MethodInfo *)0x0);
  if ((bVar3 && bVar2) && bVar4) {
    pTVar1 = (__this->fields)._r;
    pSVar6 = System_Byte__ToString(r,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184342110 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184342110 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818efeb1;
      bVar5 = System_String__op_Inequality((pTVar1->fields).m_Text,pSVar6,(MethodInfo *)0x0);
      if (bVar5) {
        TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,pSVar6,(MethodInfo *)0x0);
      }
    }
    pTVar1 = (__this->fields)._g;
    pSVar6 = System_Byte__ToString(g,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184342110 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184342110 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_1818efeb1;
      bVar5 = System_String__op_Inequality((pTVar1->fields).m_Text,pSVar6,(MethodInfo *)0x0);
      if (bVar5) {
        TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,pSVar6,(MethodInfo *)0x0);
      }
    }
    pTVar1 = (__this->fields)._b;
    pSVar6 = System_Byte__ToString(b,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184342110 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184342110 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
label_1818efeb1:
        ThrowNullReferenceException();
      }
      bVar5 = System_String__op_Inequality((pTVar1->fields).m_Text,pSVar6,(MethodInfo *)0x0);
      if (bVar5) {
        TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,pSVar6,(MethodInfo *)0x0);
      }
    }
  }
  return (bVar3 && bVar2) && bVar4;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireRgbInput
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, TMPro_TMP_InputField_o* input, const MethodInfo* method);
// 0x1818f01b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,TMPro_TMP_InputField_o *input,
               MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  bool bVar1;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar2;
  DG_Tweening_Core_DOSetter_T__o *__this_01;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar3;
  
  if (Il2CppMethodInitialized_18434210d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnRgbChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateDigit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    Il2CppMethodInitialized_18434210d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (input != (TMPro_TMP_InputField_o *)0x0) {
      pTVar3 = (input->fields).m_OnValidateInput;
      pTVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TMPro_TMP_InputField_OnValidateInput);
      TMPro_TMP_InputField_OnValidateInput___ctor
                ((UnityEngine_UI_InputField_OnValidateInput_o *)pTVar2,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateDigit,
                 (MethodInfo *)0x0);
      pTVar2 = (TMPro_TMP_InputField_OnValidateInput_o *)
               System_Delegate__Combine
                         ((System_Delegate_o *)pTVar3,(System_Delegate_o *)pTVar2,(MethodInfo *)0x0);
      pTVar3 = (TMPro_TMP_InputField_OnValidateInput_o *)0x0;
      if (pTVar2 != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
        if (pTVar2->klass == TypeInfo_TMPro_TMP_InputField_OnValidateInput) {
          pTVar3 = pTVar2;
        }
        if (pTVar3 == (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pTVar2,TypeInfo_TMPro_TMP_InputField_OnValidateInput);
        }
      }
      TMPro_TMP_InputField__set_onValidateInput(input,pTVar3,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(input->fields).m_OnValueChanged;
      __this_01 = (DG_Tweening_Core_DOSetter_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
      UnityEngine_Events_UnityAction_object____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnRgbChanged,
                 (MethodInfo_EB6EC0 *)0x0);
      if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
        UnityEngine_Events_UnityEvent_Vector2___AddListener
                  (__this_00,(UnityEngine_Events_UnityAction_T0__o *)__this_01,
                   (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireHexInput
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, TMPro_TMP_InputField_o* input, const MethodInfo* method);
// 0x1818f0040

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,TMPro_TMP_InputField_o *input,
               MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  bool bVar1;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar2;
  DG_Tweening_Core_DOSetter_T__o *__this_01;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar3;
  
  if (Il2CppMethodInitialized_18434210e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnHexChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateHex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    Il2CppMethodInitialized_18434210e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (input != (TMPro_TMP_InputField_o *)0x0) {
      pTVar3 = (input->fields).m_OnValidateInput;
      pTVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TMPro_TMP_InputField_OnValidateInput);
      TMPro_TMP_InputField_OnValidateInput___ctor
                ((UnityEngine_UI_InputField_OnValidateInput_o *)pTVar2,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateHex,
                 (MethodInfo *)0x0);
      pTVar2 = (TMPro_TMP_InputField_OnValidateInput_o *)
               System_Delegate__Combine
                         ((System_Delegate_o *)pTVar3,(System_Delegate_o *)pTVar2,(MethodInfo *)0x0);
      pTVar3 = (TMPro_TMP_InputField_OnValidateInput_o *)0x0;
      if (pTVar2 != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
        if (pTVar2->klass == TypeInfo_TMPro_TMP_InputField_OnValidateInput) {
          pTVar3 = pTVar2;
        }
        if (pTVar3 == (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pTVar2,TypeInfo_TMPro_TMP_InputField_OnValidateInput);
        }
      }
      TMPro_TMP_InputField__set_onValidateInput(input,pTVar3,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(input->fields).m_OnValueChanged;
      __this_01 = (DG_Tweening_Core_DOSetter_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
      UnityEngine_Events_UnityAction_object____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnHexChanged,
                 (MethodInfo_EB6EC0 *)0x0);
      if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
        UnityEngine_Events_UnityEvent_Vector2___AddListener
                  (__this_00,(UnityEngine_Events_UnityAction_T0__o *)__this_01,
                   (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireButton
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* id, UnityEngine_Events_UnityAction_o* action, const MethodInfo* method);
// 0x1818eff60

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *id,
               UnityEngine_Events_UnityAction_o *action,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *root;
  UnityEngine_UI_Button_o *x;
  
  if (Il2CppMethodInitialized_18434210f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434210f = '\x01';
  }
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  x = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                (root,id,(MethodInfo_68B400 *)
                         MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Button);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((x == (UnityEngine_UI_Button_o *)0x0) ||
       (__this_00 = (UnityEngine_Events_UnityEvent_o *)(x->fields).m_OnClick,
       __this_00 == (UnityEngine_Events_UnityEvent_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UnityEngine_Events_UnityEvent__AddListener(__this_00,action,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SetText
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText (TMPro_TMP_InputField_o* input, System_String_o* value, const MethodInfo* method);
// 0x1818ef040

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText
               (TMPro_TMP_InputField_o *input,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184342110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342110 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (input == (TMPro_TMP_InputField_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__op_Inequality((input->fields).m_Text,value,(MethodInfo *)0x0);
    if (bVar1) {
      TMPro_TMP_InputField__SetTextWithoutNotify(input,value,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$ValidateDigit
// il2cpp: uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateDigit (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x1818efec0

uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateDigit
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  uint16_t uVar1;
  
  uVar1 = 0;
  if ((ushort)(addedChar - 0x30) < 10) {
    uVar1 = addedChar;
  }
  return uVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$ValidateHex
// il2cpp: uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateHex (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x1818efed0

uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateHex
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  uint16_t uVar1;
  uint16_t uVar2;
  
  if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e48);
  }
  uVar1 = System_Char__ToUpperInvariant(addedChar,(MethodInfo *)0x0);
  if (uVar1 == 0x23) {
    if (charIndex != 0) {
      return 0;
    }
    return 0x23;
  }
  if (9 < (ushort)(uVar1 - 0x30)) {
    uVar2 = 0;
    if ((ushort)(uVar1 - 0x41) < 6) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return uVar1;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover___ctor(Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


