// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerPopover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* id, UnityEngine_GameObject_o* source, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5375760
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537588a: cmp byte ptr [rip + 0x21cd1e8], 0
// asm:   0x5375891: jne 0x53758a6
// asm:   0x53758f8: cmp byte ptr [rip + 0x21cd169], 0
// asm:   0x53758ff: jne 0x537592c
// asm:   0x5375d71: jmp 0x53758a6
// asm:   0x5375d88: jmp 0x537592c

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *id,
               UnityEngine_GameObject_o *source,Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o **targetAddress;
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  System_Action_GisketchUIColorPickerValue__c *pSVar7;
  System_String_o *pSVar8;
  bool bVar9;
  UnityEngine_Transform_o *pUVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar12;
  TMPro_TMP_InputField_o *pTVar13;
  UnityEngine_Events_UnityAction_o *pUVar14;
  System_Action_GisketchUIColorPickerValue__o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar15;
  System_Delegate_o *obj;
  MethodInfo *pMVar16;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_Action_GisketchUIColorPickerValue__o *a;
  UnityEngine_Color_o rgbColor;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o **local_38;
  
  if (Il2CppMethodInitialized_07542a83 == '\0') {
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
    Il2CppMethodInitialized_07542a83 = '\x01';
  }
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source);
  (__this->fields)._root = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._root);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  if (Il2CppMethodInitialized_07542a79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-visual");
    Il2CppMethodInitialized_07542a79 = '\x01';
  }
  pSVar11 = System_String__Concat_52f0320(id,"-visual",(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar10,pSVar11,
                       (MethodInfo_353CD00 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_GisketchUIColorPickerVisual
                      );
  pMVar16 = (MethodInfo *)&(pGVar12->fields)._EnableAlpha_k__BackingField;
  if (pGVar12 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
    pMVar16 = (MethodInfo *)&(__this->fields)._enableAlpha;
  }
  bVar9 = *(bool *)&pMVar16->methodPointer;
  (__this->fields)._enableAlpha = bVar9;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  if (Il2CppMethodInitialized_07542a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_07542a68 = '\x01';
  }
  pSVar8 = "#FFFFFFFF";
  pSVar11 = "#FFFFFF";
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  if (bVar9 != false) {
    pSVar11 = pSVar8;
  }
  pSVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar11,bVar9,pMVar16);
  value = &(__this->fields)._value;
  bVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar11,(__this->fields)._enableAlpha,value,pMVar16);
  if (!bVar9) {
    fStack_3c = 0.0;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStack_44,&fStack_40,&fStack_3c,(MethodInfo *)0x0);
    (value->fields).R = (char)0xffffffff;
    (value->fields).G = (char)(0xffffffff >> 8);
    (value->fields).B = (char)(0xffffffff >> 0x10);
    (value->fields).A = (char)(0xffffffff >> 0x18);
    (value->fields).H = fStack_44;
    (__this->fields)._value.fields.S = fStack_40;
    (__this->fields)._value.fields.V = fStack_3c;
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_52f0320(id,"-r",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  pTVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar10,pSVar11,
                       (MethodInfo_353CD00 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TMP_InputField);
  (__this->fields)._r = pTVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._r);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_52f0320(id,"-g",(MethodInfo *)0x0);
  pTVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar10,pSVar11,
                       (MethodInfo_353CD00 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TMP_InputField);
  (__this->fields)._g = pTVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._g);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_52f0320(id,"-b",(MethodInfo *)0x0);
  pTVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar10,pSVar11,
                       (MethodInfo_353CD00 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TMP_InputField);
  (__this->fields)._b = pTVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._b);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542a7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-hex");
    Il2CppMethodInitialized_07542a7a = '\x01';
  }
  pSVar11 = System_String__Concat_52f0320(id,"-hex",(MethodInfo *)0x0);
  pTVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar10,pSVar11,
                       (MethodInfo_353CD00 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_TMP_InputField);
  (__this->fields)._hex = pTVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hex);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542a79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-visual");
    Il2CppMethodInitialized_07542a79 = '\x01';
  }
  pSVar11 = System_String__Concat_52f0320(id,"-visual",(MethodInfo *)0x0);
  pGVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                      (pUVar10,pSVar11,
                       (MethodInfo_353CD00 *)
                       MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_GisketchUIColorPickerVisual
                      );
  targetAddress = &(__this->fields)._visual;
  (__this->fields)._visual = pGVar12;
  Il2CppCodeGenWriteBarrier(targetAddress);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput(__this,(__this->fields)._r,method_00);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput(__this,(__this->fields)._g,method_01);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput(__this,(__this->fields)._b,method_02);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput(__this,(__this->fields)._hex,method_03);
  pSVar11 = System_String__Concat_52f0320(id,"-cancel",(MethodInfo *)0x0);
  pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  pMVar16 = (MethodInfo *)0x0;
  UnityEngine_Events_UnityAction___ctor
            (pUVar14,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_Cancel,(MethodInfo *)0x0
            );
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton(__this,pSVar11,pUVar14,pMVar16);
  pSVar11 = System_String__Concat_52f0320(id,"-save",(MethodInfo *)0x0);
  pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  pMVar16 = (MethodInfo *)0x0;
  UnityEngine_Events_UnityAction___ctor
            (pUVar14,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_Save,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton(__this,pSVar11,pUVar14,pMVar16);
  pGVar12 = (__this->fields)._visual;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar16 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar9) {
label_05375d48:
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,pMVar16);
    return;
  }
  pGVar12 = (__this->fields)._visual;
  local_38 = targetAddress;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue);
  System_Action_GisketchUIColorPickerValue____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnVisualChanged,
             (MethodInfo_4A80620 *)0x0);
  if (pGVar12 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
    if (Il2CppMethodInitialized_07542a95 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
      Il2CppMethodInitialized_07542a95 = '\x01';
    }
    a = (pGVar12->fields).Changed;
    do {
      obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
      pSVar7 = TypeInfo_System_Action_GisketchUIColorPickerValue;
      pMVar16 = (MethodInfo *)0x0;
      if ((obj != (System_Delegate_o *)0x0) &&
         (pMVar16 = (MethodInfo *)
                    il2cpp_vm_Object_IsInst
                              ((Il2CppObject *)obj,
                               (Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue),
         pMVar16 == (MethodInfo *)0x0)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar7);
      }
      pSVar15 = il2cpp_codegen_interlocked_compare_exchange_ref(&(pGVar12->fields).Changed,pMVar16,a);
      bVar9 = pSVar15 != a;
      a = pSVar15;
    } while (bVar9);
    pGVar12 = *local_38;
    if (pGVar12 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      fVar5 = (__this->fields)._value.fields.S;
      fVar6 = (__this->fields)._value.fields.V;
      uVar1 = (__this->fields)._value.fields.G;
      uVar2 = (__this->fields)._value.fields.B;
      uVar3 = (__this->fields)._value.fields.A;
      fVar4 = (__this->fields)._value.fields.H;
      (pGVar12->fields)._value.fields.R = (__this->fields)._value.fields.R;
      (pGVar12->fields)._value.fields.G = uVar1;
      (pGVar12->fields)._value.fields.B = uVar2;
      (pGVar12->fields)._value.fields.A = uVar3;
      (pGVar12->fields)._value.fields.H = fVar4;
      (pGVar12->fields)._value.fields.S = fVar5;
      (pGVar12->fields)._value.fields.V = fVar6;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar12,pMVar16);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar12,pMVar16);
      goto label_05375d48;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnDestroy (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x53777b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnDestroy
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar1;
  System_Action_GisketchUIColorPickerValue__c *pSVar2;
  bool bVar3;
  System_Action_GisketchUIColorPickerValue__o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar4;
  System_Delegate_o *obj;
  Il2CppObject *value;
  System_Action_GisketchUIColorPickerValue__o *source;
  
  if (Il2CppMethodInitialized_07542a84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnVisualChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a84 = '\x01';
  }
  pGVar1 = (__this->fields)._visual;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar1 = (__this->fields)._visual;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue);
    System_Action_GisketchUIColorPickerValue____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnVisualChanged,
               (MethodInfo_4A80620 *)0x0);
    if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_07542a96 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
      Il2CppMethodInitialized_07542a96 = '\x01';
    }
    source = (pGVar1->fields).Changed;
    do {
      obj = System_Delegate__Remove
                      ((System_Delegate_o *)source,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
      pSVar2 = TypeInfo_System_Action_GisketchUIColorPickerValue;
      value = (Il2CppObject *)0x0;
      if (obj != (System_Delegate_o *)0x0) {
        value = il2cpp_vm_Object_IsInst
                          ((Il2CppObject *)obj,
                           (Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue);
        if (value == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar2);
        }
      }
      pSVar4 = il2cpp_codegen_interlocked_compare_exchange_ref(&(pGVar1->fields).Changed,value,source);
      bVar3 = pSVar4 != source;
      source = pSVar4;
    } while (bVar3);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnVisualChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnVisualChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, const MethodInfo* method);
// 0x53779b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnVisualChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields value_00;
  MethodInfo *in_RCX;
  MethodInfo *pMVar1;
  MethodInfo *method_00;
  
  pMVar1 = value.fields._0_8_;
  method_00 = pMVar1;
  if (Il2CppMethodInitialized_07542a85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_07542a85 = '\x01';
  }
  if ((__this->fields)._syncing != false) {
    return;
  }
  *(MethodInfo **)&(__this->fields)._value.fields = pMVar1;
  (__this->fields)._value.fields.S = value.fields.S;
  (__this->fields)._value.fields.V = value.fields.V;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,method_00);
  id = (__this->fields)._id;
  source = (__this->fields)._source;
  value_00 = (__this->fields)._value.fields;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
            (id,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)value_00,source,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnRgbChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnRgbChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* __, const MethodInfo* method);
// 0x5377a60

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnRgbChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *__,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  UnityEngine_Color_o rgbColor;
  uint8_t local_1b;
  uint8_t local_1a;
  uint8_t local_19;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o local_18;
  
  local_19 = 0;
  local_1a = 0;
  local_1b = 0;
  if ((__this->fields)._syncing == false) {
    bVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb
                      (__this,&local_19,&local_1a,&local_1b,in_R8);
    if (bVar1) {
      local_18.fields.G = local_1a;
      local_18.fields.R = local_19;
      auVar2._0_4_ = (float)local_19;
      auVar2._4_4_ = (float)local_1a;
      auVar2._8_8_ = 0;
      auVar2 = divps(auVar2,_DAT_01009880);
      local_18.fields.A = (__this->fields)._value.fields.A;
      local_18.fields.B = local_1b;
      local_18.fields._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar3._0_4_ = (float)local_1b;
      auVar3._4_4_ = (float)local_18.fields.A;
      auVar3._8_8_ = 0;
      auVar3 = divps(auVar3,_DAT_01009880);
      method_00 = (MethodInfo *)0x0;
      rgbColor.fields._0_8_ = auVar2._0_8_;
      rgbColor.fields._8_8_ = auVar3._0_8_;
      UnityEngine_Color__RGBToHSV
                (rgbColor,&local_18.fields.H,&local_18.fields.S,&local_18.fields.V,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue(__this,local_18,true,method_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnHexChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnHexChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* text, const MethodInfo* method);
// 0x5378030

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnHexChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *text,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value;
  bool bVar2;
  System_String_o *b;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_28;
  
  if (Il2CppMethodInitialized_07542a86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a86 = '\x01';
  }
  GStack_28.R = 0;
  GStack_28.G = 0;
  GStack_28.B = 0;
  GStack_28.A = 0;
  GStack_28.H = 0.0;
  GStack_28.S = 0.0;
  GStack_28.V = 0.0;
  if ((__this->fields)._syncing == false) {
    pTVar1 = (__this->fields)._hex;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      b = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
                    (text,(__this->fields)._enableAlpha,method_00);
      pTVar1 = (__this->fields)._hex;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
label_05378115:
        ThrowNullReferenceException();
      }
      bVar2 = System_String__op_Inequality((pTVar1->fields).m_Text,b,(MethodInfo *)0x0);
      if (bVar2) {
        pTVar1 = (__this->fields)._hex;
        if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_05378115;
        TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,b,(MethodInfo *)0x0);
      }
      bVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                        (b,(__this->fields)._enableAlpha,
                         (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStack_28,in_RCX);
      if (bVar2) {
        value.fields.S = GStack_28.S;
        value.fields.V = GStack_28.V;
        value.fields.R = GStack_28.R;
        value.fields.G = GStack_28.G;
        value.fields.B = GStack_28.B;
        value.fields.A = GStack_28.A;
        value.fields.H = GStack_28.H;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue(__this,value,true,in_RCX);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Save
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Save (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x53782e0

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
  MethodInfo *in_RCX;
  float fVar7;
  float fVar8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields GStack_48;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_07542a87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a87 = '\x01';
  }
  GStack_48.R = 0;
  GStack_48.G = 0;
  GStack_48.B = 0;
  GStack_48.A = 0;
  GStack_48.H = 0.0;
  GStack_48.S = 0.0;
  GStack_48.V = 0.0;
  pTVar1 = (__this->fields)._hex;
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
    ppSVar6 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (*ppSVar6,(__this->fields)._enableAlpha,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&GStack_48,in_RCX);
  uVar3 = GStack_48._0_8_;
  if (bVar5) {
    id = (__this->fields)._id;
    source = (__this->fields)._source;
    fVar7 = GStack_48.S;
    fVar8 = GStack_48.V;
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      fStack_38 = GStack_48.S;
      fStack_34 = GStack_48.V;
      uStack_30 = 0;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      fVar7 = fStack_38;
      fVar8 = fStack_34;
    }
    uVar4 = GStack_48._0_8_;
    value.fields.V = fVar8;
    value.fields.S = fVar7;
    GStack_48.R = (uint8_t)uVar3;
    GStack_48.G = SUB81(uVar3,1);
    GStack_48.B = SUB81(uVar3,2);
    GStack_48.A = SUB81(uVar3,3);
    GStack_48.H = SUB84(uVar3,4);
    value.fields.R = GStack_48.R;
    value.fields.G = GStack_48.G;
    value.fields.B = GStack_48.B;
    value.fields.A = GStack_48.A;
    value.fields.H = GStack_48.H;
    GStack_48._0_8_ = uVar4;
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit(id,value,source,in_RCX);
    pGVar2 = (__this->fields)._root;
    if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar2->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Cancel (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x5378410

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Cancel
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07542a88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_07542a88 = '\x01';
    in_RDX = extraout_RDX;
  }
  id = (__this->fields)._id;
  source = (__this->fields)._source;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    in_RDX = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel(id,source,in_RDX);
  pGVar1 = (__this->fields)._root;
  if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, bool visual, const MethodInfo* method);
// 0x5377f30

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,bool visual,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar1;
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields value_00;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  
  pMVar9 = value.fields._0_8_;
  pMVar10 = pMVar9;
  if (Il2CppMethodInitialized_07542a89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a89 = '\x01';
  }
  *(MethodInfo **)&(__this->fields)._value.fields = pMVar9;
  (__this->fields)._value.fields.S = value.fields.S;
  (__this->fields)._value.fields.V = value.fields.V;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,pMVar10);
  if (visual) {
    pGVar1 = (__this->fields)._visual;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar10 = (MethodInfo *)0x0;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      pGVar1 = (__this->fields)._visual;
      if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar6 = (__this->fields)._value.fields.S;
      fVar7 = (__this->fields)._value.fields.V;
      uVar2 = (__this->fields)._value.fields.G;
      uVar3 = (__this->fields)._value.fields.B;
      uVar4 = (__this->fields)._value.fields.A;
      fVar5 = (__this->fields)._value.fields.H;
      (pGVar1->fields)._value.fields.R = (__this->fields)._value.fields.R;
      (pGVar1->fields)._value.fields.G = uVar2;
      (pGVar1->fields)._value.fields.B = uVar3;
      (pGVar1->fields)._value.fields.A = uVar4;
      (pGVar1->fields)._value.fields.H = fVar5;
      (pGVar1->fields)._value.fields.S = fVar6;
      (pGVar1->fields)._value.fields.V = fVar7;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar1,pMVar10);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar1,pMVar10);
    }
  }
  id = (__this->fields)._id;
  source = (__this->fields)._source;
  value_00 = (__this->fields)._value.fields;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
            (id,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)value_00,source,method);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SyncFields
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x5377550
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53776b7: cmp byte ptr [rip + 0x21cb3ba], 0
// asm:   0x53776be: jne 0x53776d3
// asm:   0x5377799: jmp 0x53776d3

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *__this_00;
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TMPro_TMP_InputField_o *pTVar5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  ulong uVar12;
  uint3 uVar13;
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  bool bVar16;
  System_String_o *pSVar17;
  UnityEngine_Transform_o *root;
  UnityEngine_UI_Image_o *x;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  UnityEngine_Color_o UVar22;
  UnityEngine_Color_Fields local_40;
  
  if (Il2CppMethodInitialized_07542a8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a8a = '\x01';
  }
  (__this->fields)._syncing = true;
  pTVar5 = (__this->fields)._r;
  __this_00 = &(__this->fields)._value;
  pSVar17 = System_Byte__ToString((uint8_t *)__this_00,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar5,pSVar17,method_00);
  pTVar5 = (__this->fields)._g;
  pSVar17 = System_Byte__ToString(&(__this->fields)._value.fields.G,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar5,pSVar17,method_01);
  pTVar5 = (__this->fields)._b;
  pSVar17 = System_Byte__ToString(&(__this->fields)._value.fields.B,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar5,pSVar17,method_02);
  pTVar5 = (__this->fields)._hex;
  bVar16 = (__this->fields)._enableAlpha;
  if (Il2CppMethodInitialized_07542a90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_07542a90 = '\x01';
  }
  uVar1._0_1_ = (__this->fields)._value.fields.B;
  uVar1._1_1_ = (__this->fields)._value.fields.A;
  uVar3._0_1_ = (__this_00->fields).R;
  uVar3._1_1_ = (__this_00->fields).G;
  uVar3._2_1_ = (__this_00->fields).B;
  uVar3._3_1_ = (__this_00->fields).A;
  uVar13 = CONCAT12(uVar3._1_1_,(short)uVar3);
  uVar12 = (ulong)uVar13 & 0xffffffffffff00ff;
  auVar6._8_4_ = 0;
  auVar6._0_8_ = uVar12;
  auVar6[0xc] = uVar3._3_1_;
  auVar7[8] = uVar3._2_1_;
  auVar7._0_8_ = uVar12;
  auVar7[9] = 0;
  auVar7._10_3_ = auVar6._10_3_;
  auVar14._5_8_ = 0;
  auVar14._0_5_ = auVar7._8_5_;
  auVar8[4] = uVar3._1_1_;
  auVar8._0_4_ = (uint)uVar12;
  auVar8[5] = 0;
  auVar8._6_7_ = SUB137(auVar14 << 0x40,6);
  auVar18._0_4_ = (float)((uint)uVar12 & 0xffff);
  auVar18._4_4_ = (float)auVar8._4_4_;
  auVar18._8_4_ = (float)auVar7._8_4_;
  auVar18._12_4_ = (float)(uint3)(auVar6._10_3_ >> 0x10);
  auVar18 = divps(auVar18,_DAT_01009880);
  auVar20._0_4_ = (float)(uVar1 & 0xff);
  auVar20._4_4_ = (float)(byte)uVar1._1_1_;
  auVar20._8_8_ = 0;
  auVar20 = divps(auVar20,_DAT_01009880);
  local_40._0_8_ = auVar18._0_8_;
  local_40._8_8_ = auVar20._0_8_;
  if (bVar16 == false) {
    pSVar17 = UnityEngine_ColorUtility__ToHtmlStringRGB_68fde50
                        ((UnityEngine_Color_o *)&local_40,(MethodInfo *)0x0);
  }
  else {
    pSVar17 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0
                        ((UnityEngine_Color_o *)&local_40,(MethodInfo *)0x0);
  }
  pSVar17 = System_String__Concat_52f0320("#",pSVar17,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar5,pSVar17,method_03);
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar17 = (__this->fields)._id;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  if (Il2CppMethodInitialized_07542a78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-preview");
    Il2CppMethodInitialized_07542a78 = '\x01';
  }
  pSVar17 = System_String__Concat_52f0320(pSVar17,"-preview",(MethodInfo *)0x0);
  x = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                (root,pSVar17,
                 (MethodInfo_353CD00 *)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Image);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar16 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar16) {
    if (x == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2._0_1_ = (__this->fields)._value.fields.B;
    uVar2._1_1_ = (__this->fields)._value.fields.A;
    auVar21._0_4_ = (float)(uVar2 & 0xff);
    auVar21._4_4_ = (float)(byte)uVar2._1_1_;
    auVar21._8_8_ = 0;
    auVar20 = divps(auVar21,_DAT_01009880);
    uVar4._0_1_ = (__this_00->fields).R;
    uVar4._1_1_ = (__this_00->fields).G;
    uVar4._2_1_ = (__this_00->fields).B;
    uVar4._3_1_ = (__this_00->fields).A;
    uVar13 = CONCAT12(uVar4._1_1_,(short)uVar4);
    uVar12 = (ulong)uVar13 & 0xffffffffffff00ff;
    auVar9._8_4_ = 0;
    auVar9._0_8_ = uVar12;
    auVar9[0xc] = uVar4._3_1_;
    auVar10[8] = uVar4._2_1_;
    auVar10._0_8_ = uVar12;
    auVar10[9] = 0;
    auVar10._10_3_ = auVar9._10_3_;
    auVar15._5_8_ = 0;
    auVar15._0_5_ = auVar10._8_5_;
    auVar11[4] = uVar4._1_1_;
    auVar11._0_4_ = (uint)uVar12;
    auVar11[5] = 0;
    auVar11._6_7_ = SUB137(auVar15 << 0x40,6);
    auVar19._0_4_ = (float)((uint)uVar12 & 0xffff);
    auVar19._4_4_ = (float)auVar11._4_4_;
    auVar19._8_4_ = (float)auVar10._8_4_;
    auVar19._12_4_ = (float)(uint3)(auVar9._10_3_ >> 0x10);
    auVar18 = divps(auVar19,_DAT_01009880);
    UVar22.fields._0_8_ = auVar18._0_8_;
    UVar22.fields._8_8_ = auVar20._0_8_;
    (*(x->klass->vtable)._23_set_color.methodPtr)(x,UVar22,(x->klass->vtable)._23_set_color.method);
  }
  (__this->fields)._syncing = false;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$TryRgb
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, uint8_t* r, uint8_t* g, uint8_t* b, const MethodInfo* method);
// 0x5377b40
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5377bc3: jmp 0x5377bf9
// asm:   0x5377cb3: jmp 0x5377ce9
// asm:   0x5377d9d: jmp 0x5377dd6

bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,uint8_t *r,uint8_t *g,uint8_t *b
               ,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  System_Globalization_CultureInfo_o *pSVar5;
  System_String_o *pSVar6;
  int iVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar8;
  bool bVar9;
  int32_t local_4c;
  int32_t local_48;
  int32_t local_44;
  uint8_t *local_40;
  uint8_t *local_38;
  
  local_40 = g;
  if (Il2CppMethodInitialized_07542a8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a8b = '\x01';
  }
  pTVar1 = (__this->fields)._r;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = (__this->fields)._r;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_05377ea9;
    pSVar6 = (pTVar1->fields).m_Text;
  }
  else {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (Il2CppMethodInitialized_07542a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07542a93 = '\x01';
  }
  local_4c = 0;
  *r = 0;
  local_38 = r;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar2 = System_Int32__TryParse_54b7c80
                    (pSVar6,7,(System_IFormatProvider_o *)pSVar5,&local_4c,(MethodInfo *)0x0);
  if (bVar2) {
    iVar7 = 0xff;
    if (local_4c < 0xff) {
      iVar7 = local_4c;
    }
    iVar8 = 0;
    if (0 < iVar7) {
      iVar8 = iVar7;
    }
    *local_38 = (uint8_t)iVar8;
  }
  pTVar1 = (__this->fields)._g;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar1 = (__this->fields)._g;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto label_05377ea9;
    pSVar6 = (pTVar1->fields).m_Text;
  }
  else {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (Il2CppMethodInitialized_07542a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07542a93 = '\x01';
  }
  local_48 = 0;
  *local_40 = 0;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar3 = System_Int32__TryParse_54b7c80
                    (pSVar6,7,(System_IFormatProvider_o *)pSVar5,&local_48,(MethodInfo *)0x0);
  if (bVar3) {
    iVar7 = 0xff;
    if (local_48 < 0xff) {
      iVar7 = local_48;
    }
    iVar8 = 0;
    if (0 < iVar7) {
      iVar8 = iVar7;
    }
    *local_40 = (uint8_t)iVar8;
  }
  pTVar1 = (__this->fields)._b;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar1 = (__this->fields)._b;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
label_05377ea9:
      ThrowNullReferenceException();
    }
    pSVar6 = (pTVar1->fields).m_Text;
  }
  else {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (Il2CppMethodInitialized_07542a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07542a93 = '\x01';
  }
  local_44 = 0;
  *b = 0;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  bVar9 = false;
  pSVar5 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar4 = System_Int32__TryParse_54b7c80
                    (pSVar6,7,(System_IFormatProvider_o *)pSVar5,&local_44,(MethodInfo *)0x0);
  if (bVar4) {
    iVar7 = 0xff;
    if (local_44 < 0xff) {
      iVar7 = local_44;
    }
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    *b = (uint8_t)iVar7;
    if ((bVar2 && bVar3) && bVar4) {
      pTVar1 = (__this->fields)._r;
      pSVar6 = System_Byte__ToString(local_38,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar6,method_00);
      pTVar1 = (__this->fields)._g;
      pSVar6 = System_Byte__ToString(local_40,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar6,method_01);
      pTVar1 = (__this->fields)._b;
      pSVar6 = System_Byte__ToString(b,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar6,method_02);
      bVar9 = true;
    }
  }
  else {
    bVar9 = false;
  }
  return bVar9;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireRgbInput
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, TMPro_TMP_InputField_o* input, const MethodInfo* method);
// 0x53770a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,TMPro_TMP_InputField_o *input,
               MethodInfo *method)

{
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  bool bVar1;
  TMPro_TMP_InputField_OnValidateInput_o *__this_01;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar2;
  UnityEngine_Events_UnityAction_T0__o *__this_02;
  
  if (Il2CppMethodInitialized_07542a8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnRgbChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateDigit);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    Il2CppMethodInitialized_07542a8c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (input != (TMPro_TMP_InputField_o *)0x0) {
    pTVar2 = (input->fields).m_OnValidateInput;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor
              (__this_01,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateDigit,
               (MethodInfo *)0x0);
    pTVar2 = (TMPro_TMP_InputField_OnValidateInput_o *)
             System_Delegate__Combine
                       ((System_Delegate_o *)pTVar2,(System_Delegate_o *)__this_01,(MethodInfo *)0x0);
    if ((pTVar2 != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) &&
       (pTVar2->klass != TypeInfo_TMPro_TMP_InputField_OnValidateInput)) {
      il2cpp_codegen_raise_invalid_cast_exception(pTVar2);
    }
    TMPro_TMP_InputField__set_onValidateInput(input,pTVar2,(MethodInfo *)0x0);
    __this_00 = (input->fields).m_OnValueChanged;
    __this_02 = (UnityEngine_Events_UnityAction_T0__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (__this_02,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnRgbChanged,
               (MethodInfo_4311A10 *)0x0);
    if (__this_00 != (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent_object___AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,__this_02,
                 (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireHexInput
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, TMPro_TMP_InputField_o* input, const MethodInfo* method);
// 0x5377200

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,TMPro_TMP_InputField_o *input,
               MethodInfo *method)

{
  TMPro_TMP_InputField_OnChangeEvent_o *__this_00;
  bool bVar1;
  TMPro_TMP_InputField_OnValidateInput_o *__this_01;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar2;
  UnityEngine_Events_UnityAction_T0__o *__this_02;
  
  if (Il2CppMethodInitialized_07542a8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnHexChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateHex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    Il2CppMethodInitialized_07542a8d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (input != (TMPro_TMP_InputField_o *)0x0) {
    pTVar2 = (input->fields).m_OnValidateInput;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor
              (__this_01,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_ValidateHex,
               (MethodInfo *)0x0);
    pTVar2 = (TMPro_TMP_InputField_OnValidateInput_o *)
             System_Delegate__Combine
                       ((System_Delegate_o *)pTVar2,(System_Delegate_o *)__this_01,(MethodInfo *)0x0);
    if ((pTVar2 != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) &&
       (pTVar2->klass != TypeInfo_TMPro_TMP_InputField_OnValidateInput)) {
      il2cpp_codegen_raise_invalid_cast_exception(pTVar2);
    }
    TMPro_TMP_InputField__set_onValidateInput(input,pTVar2,(MethodInfo *)0x0);
    __this_00 = (input->fields).m_OnValueChanged;
    __this_02 = (UnityEngine_Events_UnityAction_T0__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string);
    UnityEngine_Events_UnityAction_object____ctor
              (__this_02,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_OnHexChanged,
               (MethodInfo_4311A10 *)0x0);
    if (__this_00 != (TMPro_TMP_InputField_OnChangeEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent_object___AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,__this_02,
                 (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireButton
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* id, UnityEngine_Events_UnityAction_o* action, const MethodInfo* method);
// 0x5377360

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *id,
               UnityEngine_Events_UnityAction_o *action,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *root;
  UnityEngine_UI_Button_o *x;
  
  if (Il2CppMethodInitialized_07542a8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker_Find_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a8e = '\x01';
  }
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  x = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find_object_
                (root,id,(MethodInfo_353CD00 *)
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
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SetText
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText (TMPro_TMP_InputField_o* input, System_String_o* value, const MethodInfo* method);
// 0x5378490

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText
               (TMPro_TMP_InputField_o *input,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542a8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a8f = '\x01';
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
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$ValidateDigit
// il2cpp: uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateDigit (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x53785d0

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
// 0x53785e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537861f: jmp 0x5378635

uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateHex
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  uint16_t uVar1;
  uint16_t uVar2;
  
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
  }
  uVar2 = 0;
  uVar1 = System_Char__ToUpperInvariant(addedChar,(MethodInfo *)0x0);
  if (uVar1 == 0x23) {
    if (charIndex == 0) {
      uVar2 = 0x23;
    }
  }
  else {
    if ((ushort)(uVar1 - 0x41) < 6) {
      uVar2 = uVar1;
    }
    if ((ushort)(uVar1 - 0x30) < 10) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x5378640

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


