// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerPopover.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* id, UnityEngine_GameObject_o* source, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b017e0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *id,
               UnityEngine_GameObject_o *source,Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *value;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o **ppGVar1;
  byte bVar2;
  int iVar3;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  bool_conflict bVar11;
  UnityEngine_Transform_o *pUVar12;
  System_String_o *pSVar13;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  TMPro_TMP_InputField_o *pTVar16;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar17;
  UnityEngine_Events_UnityAction_o *pUVar18;
  System_Delegate_o *b;
  System_Action_GisketchUIColorPickerValue__o *pSVar19;
  System_Delegate_o *pSVar20;
  MethodInfo *pMVar21;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *pGVar22;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_Action_GisketchUIColorPickerValue__o *a;
  bool bVar23;
  UnityEngine_Color_o rgbColor;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o **ppGStack_40;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *pGStack_38;
  
  if (DAT_057014bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchUIColorPickerValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_Cancel);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnVisualChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_Save);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColor);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"-cancel");
    il2cpp_init_method_metadata(&"-save");
    il2cpp_init_method_metadata(&"-g");
    il2cpp_init_method_metadata(&"-r");
    il2cpp_init_method_metadata(&"-b");
    DAT_057014bd = '\x01';
  }
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&(__this->fields)._id,id);
  (__this->fields)._source = source;
  il2cpp_runtime_glue(&(__this->fields)._source,source);
  (__this->fields)._root = root;
  il2cpp_runtime_glue(&(__this->fields)._root);
  pUVar12 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057014b3 == '\0') {
    il2cpp_init_method_metadata(&"-visual");
    DAT_057014b3 = '\x01';
  }
  pSVar13 = System_String__Concat(id,"-visual",(MethodInfo *)0x0);
  pIVar14 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar12,pSVar13,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColor)
  ;
  pIVar15 = pIVar14 + 9;
  if (pIVar14 == (Il2CppObject *)0x0) {
    pIVar15 = (Il2CppObject *)&(__this->fields)._enableAlpha;
  }
  bVar2 = *(byte *)&pIVar15->klass;
  *(byte *)&(__this->fields)._enableAlpha = bVar2;
  pGVar22 = __this;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_057014a2 != '\0') goto LAB_03b01987;
LAB_03b019ca:
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    il2cpp_init_method_metadata(&"#FFFFFF");
    DAT_057014a2 = '\x01';
    if (bVar2 != 0) goto LAB_03b0198c;
LAB_03b019fa:
    iVar3 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar13 = "#FFFFFF";
  }
  else {
    if (DAT_057014a2 == '\0') goto LAB_03b019ca;
LAB_03b01987:
    if (bVar2 == 0) goto LAB_03b019fa;
LAB_03b0198c:
    iVar3 = *(int *)(TypeInfo_GisketchUIColorPicker + 0xe4);
    pSVar13 = "#FFFFFFFF";
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  pSVar13 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                      (id,pSVar13,(uint)bVar2,(MethodInfo *)pGVar22);
  value = &(__this->fields)._value;
  bVar11 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                     (pSVar13,(uint)(byte)(__this->fields)._enableAlpha,value,(MethodInfo *)pGVar22)
  ;
  if ((char)bVar11 == '\0') {
    fStack_44 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&fStack_4c,&fStack_48,&fStack_44,(MethodInfo *)0x0);
    (value->fields).R = (char)0xffffffff;
    (value->fields).G = (char)(0xffffffff >> 8);
    (value->fields).B = (char)(0xffffffff >> 0x10);
    (value->fields).A = (char)(0xffffffff >> 0x18);
    (value->fields).H = fStack_4c;
    (__this->fields)._value.fields.S = fStack_48;
    (__this->fields)._value.fields.V = fStack_44;
  }
  pGStack_38 = value;
  pUVar12 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar13 = System_String__Concat(id,"-r",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pTVar16 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar12,pSVar13,MethodInfo_TMP_InputField_Find_TMP_InputField)
  ;
  (__this->fields)._r = pTVar16;
  il2cpp_runtime_glue(&(__this->fields)._r);
  pUVar12 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar13 = System_String__Concat(id,"-g",(MethodInfo *)0x0);
  pTVar16 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar12,pSVar13,MethodInfo_TMP_InputField_Find_TMP_InputField)
  ;
  (__this->fields)._g = pTVar16;
  il2cpp_runtime_glue(&(__this->fields)._g);
  pUVar12 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar13 = System_String__Concat(id,"-b",(MethodInfo *)0x0);
  pTVar16 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar12,pSVar13,MethodInfo_TMP_InputField_Find_TMP_InputField)
  ;
  (__this->fields)._b = pTVar16;
  il2cpp_runtime_glue(&(__this->fields)._b);
  pUVar12 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (DAT_057014b4 == '\0') {
    il2cpp_init_method_metadata(&"-hex");
    DAT_057014b4 = '\x01';
  }
  pSVar13 = System_String__Concat(id,"-hex",(MethodInfo *)0x0);
  pTVar16 = (TMPro_TMP_InputField_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar12,pSVar13,MethodInfo_TMP_InputField_Find_TMP_InputField)
  ;
  (__this->fields)._hex = pTVar16;
  il2cpp_runtime_glue(&(__this->fields)._hex);
  pUVar12 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (DAT_057014b3 == '\0') {
    il2cpp_init_method_metadata(&"-visual");
    DAT_057014b3 = '\x01';
  }
  pSVar13 = System_String__Concat(id,"-visual",(MethodInfo *)0x0);
  pGVar17 = (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)
            Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(pUVar12,pSVar13,MethodInfo_GisketchUIColorPickerVisual_Find_GisketchUIColor)
  ;
  ppGVar1 = &(__this->fields)._visual;
  (__this->fields)._visual = pGVar17;
  il2cpp_runtime_glue(ppGVar1,pGVar17);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            (__this,(__this->fields)._r,method_00);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            (__this,(__this->fields)._g,method_01);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
            (__this,(__this->fields)._b,method_02);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
            (__this,(__this->fields)._hex,method_03);
  pSVar13 = System_String__Concat(id,"-cancel",(MethodInfo *)0x0);
  pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  pMVar21 = (MethodInfo *)0x0;
  UnityEngine_Events_UnityAction___ctor();
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton(__this,pSVar13,pUVar18,pMVar21);
  pSVar13 = System_String__Concat(id,"-save",(MethodInfo *)0x0);
  pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  pMVar21 = (MethodInfo *)0x0;
  UnityEngine_Events_UnityAction___ctor();
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton(__this,pSVar13,pUVar18,pMVar21);
  pGVar17 = (__this->fields)._visual;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar21 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pGVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar11 == '\0') {
LAB_03b01e15:
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,pMVar21);
    return;
  }
  pGVar17 = (__this->fields)._visual;
  b = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchUIColorPickerValue);
  System_Action<GisketchUIColorPickerValue>___ctor();
  if (pGVar17 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
    ppGStack_40 = ppGVar1;
    if (DAT_057014cf == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_GisketchUIColorPickerValue);
      DAT_057014cf = '\x01';
    }
    a = (pGVar17->fields).Changed;
    do {
      pSVar20 = System_Delegate__Combine((System_Delegate_o *)a,b,(MethodInfo *)0x0);
      uVar10 = TypeInfo_Action_GisketchUIColorPickerValue;
      pMVar21 = (MethodInfo *)0x0;
      if ((pSVar20 != (System_Delegate_o *)0x0) &&
         (pMVar21 = (MethodInfo *)il2cpp_runtime_glue(pSVar20,TypeInfo_Action_GisketchUIColorPickerValue),
         pMVar21 == (MethodInfo *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar20,uVar10);
      }
      pSVar19 = (System_Action_GisketchUIColorPickerValue__o *)
                il2cpp_glue_022c2530(&(pGVar17->fields).Changed,pMVar21,a);
      bVar23 = a != pSVar19;
      a = pSVar19;
    } while (bVar23);
    pGVar17 = *ppGStack_40;
    if (pGVar17 != (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
      uVar4 = (pGStack_38->fields).G;
      uVar5 = (pGStack_38->fields).B;
      uVar6 = (pGStack_38->fields).A;
      fVar7 = (pGStack_38->fields).H;
      fVar8 = (pGStack_38->fields).S;
      fVar9 = (pGStack_38->fields).V;
      (pGVar17->fields)._value.fields.R = (pGStack_38->fields).R;
      (pGVar17->fields)._value.fields.G = uVar4;
      (pGVar17->fields)._value.fields.B = uVar5;
      (pGVar17->fields)._value.fields.A = uVar6;
      (pGVar17->fields)._value.fields.H = fVar7;
      (pGVar17->fields)._value.fields.S = fVar8;
      (pGVar17->fields)._value.fields.V = fVar9;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(pGVar17,pMVar21);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(pGVar17,pMVar21);
      goto LAB_03b01e15;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnDestroy (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x3b037f0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnDestroy
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *pGVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  System_Delegate_o *value;
  System_Action_GisketchUIColorPickerValue__o *pSVar4;
  System_Delegate_o *pSVar5;
  long lVar6;
  System_Action_GisketchUIColorPickerValue__o *source;
  bool bVar7;
  
  if (DAT_057014be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchUIColorPickerValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnVisualChanged);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014be = '\x01';
  }
  pGVar1 = (__this->fields)._visual;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pGVar1 = (__this->fields)._visual;
    value = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchUIColorPickerValue);
    System_Action<GisketchUIColorPickerValue>___ctor();
    if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (DAT_057014d0 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_GisketchUIColorPickerValue);
      DAT_057014d0 = '\x01';
    }
    source = (pGVar1->fields).Changed;
    do {
      pSVar5 = System_Delegate__Remove((System_Delegate_o *)source,value,(MethodInfo *)0x0);
      uVar2 = TypeInfo_Action_GisketchUIColorPickerValue;
      lVar6 = 0;
      if (pSVar5 != (System_Delegate_o *)0x0) {
        lVar6 = il2cpp_runtime_glue(pSVar5,TypeInfo_Action_GisketchUIColorPickerValue);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar5,uVar2);
        }
      }
      pSVar4 = (System_Action_GisketchUIColorPickerValue__o *)
               il2cpp_glue_022c2530(&(pGVar1->fields).Changed,lVar6,source);
      bVar7 = source != pSVar4;
      source = pSVar4;
    } while (bVar7);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnVisualChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnVisualChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, const MethodInfo* method);
// 0x3b039f0

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
  if (DAT_057014bf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_057014bf = '\x01';
  }
  if ((char)(__this->fields)._syncing != '\0') {
    return;
  }
  *(MethodInfo **)&(__this->fields)._value.fields = pMVar1;
  (__this->fields)._value.fields.S = (float)(int)value.fields._8_8_;
  (__this->fields)._value.fields.V = (float)(int)((ulong)value.fields._8_8_ >> 0x20);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,method_00);
  id = (__this->fields)._id;
  source = (__this->fields)._source;
  value_00 = (__this->fields)._value.fields;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
            (id,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)value_00,source,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnRgbChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnRgbChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* __, const MethodInfo* method);
// 0x3b03aa0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnRgbChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *__,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value;
  bool_conflict bVar1;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  UnityEngine_Color_o rgbColor;
  byte local_1b;
  byte local_1a;
  byte local_19;
  byte local_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  float fStack_14;
  undefined8 uStack_10;
  
  local_19 = 0;
  local_1a = 0;
  local_1b = 0;
  if ((char)(__this->fields)._syncing == '\0') {
    bVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb
                      (__this,&local_19,&local_1a,&local_1b,in_R8);
    if ((char)bVar1 != '\0') {
      bStack_15 = (__this->fields)._value.fields.A;
      fStack_14 = 0.0;
      uStack_10 = 0;
      local_18 = local_19;
      bStack_17 = local_1a;
      bStack_16 = local_1b;
      rgbColor.fields.r = (float)local_19 / 255.0;
      rgbColor.fields.b = (float)local_1b / 255.0;
      rgbColor.fields.a = (float)bStack_15 / 255.0;
      method_00 = (MethodInfo *)0x0;
      rgbColor.fields.g = (float)local_1a / 255.0;
      UnityEngine_Color__RGBToHSV
                (rgbColor,&fStack_14,(float *)&uStack_10,(float *)((long)&uStack_10 + 4),
                 (MethodInfo *)0x0);
      value.fields.G = bStack_17;
      value.fields.R = local_18;
      value.fields.B = bStack_16;
      value.fields.A = bStack_15;
      value.fields.H = fStack_14;
      value.fields.S = (float)(undefined4)uStack_10;
      value.fields.V = (float)uStack_10._4_4_;
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue(__this,value,1,method_00);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$OnHexChanged
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnHexChanged (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* text, const MethodInfo* method);
// 0x3b04070

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__OnHexChanged
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *text,
               MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value;
  bool_conflict bVar2;
  System_String_o *b;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_28;
  
  if (DAT_057014c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014c0 = '\x01';
  }
  local_28.R = '\0';
  local_28.G = '\0';
  local_28.B = '\0';
  local_28.A = '\0';
  local_28.H = 0.0;
  local_28.S = 0.0;
  local_28.V = 0.0;
  if ((char)(__this->fields)._syncing == '\0') {
    pTVar1 = (__this->fields)._hex;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      b = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__FilterHexInput
                    (text,(uint)(byte)(__this->fields)._enableAlpha,method_00);
      pTVar1 = (__this->fields)._hex;
      if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
LAB_03b0414c:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = System_String__op_Inequality
                        (*(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a,b,
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pTVar1 = (__this->fields)._hex;
        if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_03b0414c;
        TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,b,(MethodInfo *)0x0);
      }
      bVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                        (b,(uint)(byte)(__this->fields)._enableAlpha,
                         (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_28,in_RCX);
      if ((char)bVar2 != '\0') {
        value.fields.S = local_28.S;
        value.fields.V = local_28.V;
        value.fields.R = local_28.R;
        value.fields.G = local_28.G;
        value.fields.B = local_28.B;
        value.fields.A = local_28.A;
        value.fields.H = local_28.H;
        Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue(__this,value,1,in_RCX);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Save
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Save (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x3b04330

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Save
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  bool_conflict bVar5;
  float *pfVar6;
  MethodInfo *in_RCX;
  float fVar7;
  float fVar8;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_48;
  float local_38;
  float fStack_34;
  undefined8 uStack_30;
  
  if (DAT_057014c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014c1 = '\x01';
  }
  local_48.R = '\0';
  local_48.G = '\0';
  local_48.B = '\0';
  local_48.A = '\0';
  local_48.H = 0.0;
  local_48.S = 0.0;
  local_48.V = 0.0;
  pTVar1 = (__this->fields)._hex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pfVar6 = *(float **)(DAT_057110b0 + 0xb8);
  }
  else {
    pTVar1 = (__this->fields)._hex;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pfVar6 = &(pTVar1->fields).m_SelectionColor.fields.a;
  }
  bVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (*(System_String_o **)pfVar6,(uint)(byte)(__this->fields)._enableAlpha,
                     (Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_48,in_RCX);
  uVar3 = local_48._0_8_;
  if ((char)bVar5 != '\0') {
    id = (__this->fields)._id;
    source = (__this->fields)._source;
    fVar7 = local_48.S;
    fVar8 = local_48.V;
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      local_38 = local_48.S;
      fStack_34 = local_48.V;
      uStack_30 = 0;
      il2cpp_init_class();
      fVar7 = local_38;
      fVar8 = fStack_34;
    }
    uVar4 = local_48._0_8_;
    value.fields.V = fVar8;
    value.fields.S = fVar7;
    local_48.R = (uint8_t)uVar3;
    local_48.G = SUB81(uVar3,1);
    local_48.B = SUB81(uVar3,2);
    local_48.A = SUB81(uVar3,3);
    local_48.H = SUB84(uVar3,4);
    value.fields.R = local_48.R;
    value.fields.G = local_48.G;
    value.fields.B = local_48.B;
    value.fields.A = local_48.A;
    value.fields.H = local_48.H;
    local_48._0_8_ = uVar4;
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Commit(id,value,source,in_RCX);
    pGVar2 = (__this->fields)._root;
    if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar2->fields)._Theme_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Cancel (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x3b04460

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__Cancel
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_GameObject_o *source;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_057014c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    DAT_057014c2 = '\x01';
    in_RDX = extraout_RDX;
  }
  id = (__this->fields)._id;
  source = (__this->fields)._source;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Cancel(id,source,in_RDX);
  pGVar1 = (__this->fields)._root;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar1->fields)._Theme_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
              ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,(MethodInfo *)0x0)
    ;
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, bool visual, const MethodInfo* method);
// 0x3b03f70

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetValue
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,bool_conflict visual,
               MethodInfo *method)

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
  bool_conflict bVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  
  pMVar9 = value.fields._0_8_;
  pMVar10 = pMVar9;
  if (DAT_057014c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014c3 = '\x01';
  }
  *(MethodInfo **)&(__this->fields)._value.fields = pMVar9;
  (__this->fields)._value.fields.S = (float)(int)value.fields._8_8_;
  (__this->fields)._value.fields.V = (float)(int)((ulong)value.fields._8_8_ >> 0x20);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields(__this,pMVar10);
  if ((char)visual != '\0') {
    pGVar1 = (__this->fields)._visual;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar10 = (MethodInfo *)0x0;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar8 != '\0') {
      pGVar1 = (__this->fields)._visual;
      if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (__this->fields)._value.fields.G;
      uVar3 = (__this->fields)._value.fields.B;
      uVar4 = (__this->fields)._value.fields.A;
      fVar5 = (__this->fields)._value.fields.H;
      fVar6 = (__this->fields)._value.fields.S;
      fVar7 = (__this->fields)._value.fields.V;
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
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Preview
            (id,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o)value_00,source,method);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SyncFields
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, const MethodInfo* method);
// 0x3b03590

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SyncFields
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  UnityEngine_Transform_o *root;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o color;
  
  if (DAT_057014c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_Find_Image);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014c4 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._syncing = 1;
  pTVar1 = (__this->fields)._r;
  cVar2 = (char)__this;
  pSVar4 = System_Byte__ToString(cVar2 + '@',(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar4,method_00);
  pTVar1 = (__this->fields)._g;
  pSVar4 = System_Byte__ToString(cVar2 + 'A',(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar4,method_01);
  pTVar1 = (__this->fields)._b;
  pSVar4 = System_Byte__ToString(cVar2 + 'B',(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar4,method_02);
  pTVar1 = (__this->fields)._hex;
  bVar3 = (__this->fields)._enableAlpha;
  if (DAT_057014ca == '\0') {
    il2cpp_init_method_metadata();
    DAT_057014ca = '\x01';
  }
  fVar5 = (float)(__this->fields)._value.fields.R / 255.0;
  fVar7 = (float)(__this->fields)._value.fields.G / 255.0;
  fVar6 = (float)(__this->fields)._value.fields.B / 255.0;
  fVar8 = (float)(__this->fields)._value.fields.A / 255.0;
  if ((char)bVar3 == '\0') {
    color.fields.b = fVar6;
    color.fields.a = fVar8;
    color.fields.r = fVar5;
    color.fields.g = fVar7;
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGB(color,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = UnityEngine_ColorUtility__ToHtmlStringRGBA
                       ((UnityEngine_Color_o)CONCAT88(CONCAT44(fVar8,fVar6),CONCAT44(fVar7,fVar5)),
                        (MethodInfo *)0x0);
  }
  pSVar4 = System_String__Concat("#",pSVar4,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar4,method_03);
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._id;
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057014b2 == '\0') {
    il2cpp_init_method_metadata(&"-preview");
    DAT_057014b2 = '\x01';
  }
  pSVar4 = System_String__Concat(pSVar4,"-preview",(MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(root,pSVar4,MethodInfo_Image_Find_Image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (**(code **)&x->klass[1]._2.naturalAligment)
              (CONCAT44((float)(__this->fields)._value.fields.G / 255.0,
                        (float)(__this->fields)._value.fields.R / 255.0),
               CONCAT44((float)(__this->fields)._value.fields.A / 255.0,
                        (float)(__this->fields)._value.fields.B / 255.0),x,
               x->klass[1].vtable._0_Equals.methodPtr);
  }
  *(undefined1 *)&(__this->fields)._syncing = 0;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$TryRgb
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, uint8_t* r, uint8_t* g, uint8_t* b, const MethodInfo* method);
// 0x3b03b80

bool_conflict
Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__TryRgb
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,uint8_t *r,uint8_t *g,
          uint8_t *b,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  bool_conflict bVar2;
  System_Globalization_CultureInfo_o *pSVar3;
  System_String_o *pSVar4;
  int iVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  bool_conflict bVar6;
  byte bVar7;
  byte bVar8;
  uint8_t uVar9;
  int32_t local_4c;
  int32_t local_48;
  int32_t local_44;
  byte *local_40;
  uint8_t *local_38;
  
  if (DAT_057014c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014c5 = '\x01';
  }
  pTVar1 = (__this->fields)._r;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    pTVar1 = (__this->fields)._r;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_03b03ee8;
    pSVar4 = *(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a;
  }
  if (DAT_057014cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_057014cd = '\x01';
  }
  local_4c = 0;
  *r = '\0';
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar9 = '\0';
  bVar8 = 0;
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar2 = System_Int32__TryParse
                    (pSVar4,7,(System_IFormatProvider_o *)pSVar3,&local_4c,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    iVar5 = 0xff;
    if (local_4c < 0x100) {
      iVar5 = local_4c;
    }
    if (0 < iVar5) {
      uVar9 = (uint8_t)iVar5;
    }
    *r = uVar9;
    bVar8 = 1;
  }
  pTVar1 = (__this->fields)._g;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    pTVar1 = (__this->fields)._g;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) goto LAB_03b03ee8;
    pSVar4 = *(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a;
  }
  if (DAT_057014cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_057014cd = '\x01';
  }
  local_48 = 0;
  *g = '\0';
  local_40 = g;
  local_38 = r;
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = 0;
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar2 = System_Int32__TryParse
                    (pSVar4,7,(System_IFormatProvider_o *)pSVar3,&local_48,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    iVar5 = 0xff;
    if (local_48 < 0x100) {
      iVar5 = local_48;
    }
    if (0 < iVar5) {
      bVar7 = (byte)iVar5;
    }
    *local_40 = bVar7;
    bVar7 = 1;
  }
  pTVar1 = (__this->fields)._b;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    pTVar1 = (__this->fields)._b;
    if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
LAB_03b03ee8:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar4 = *(System_String_o **)&(pTVar1->fields).m_SelectionColor.fields.a;
  }
  if (DAT_057014cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CultureInfo);
    DAT_057014cd = '\x01';
  }
  local_44 = 0;
  *b = '\0';
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = 0;
  pSVar3 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar2 = System_Int32__TryParse
                    (pSVar4,7,(System_IFormatProvider_o *)pSVar3,&local_44,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar6 = 0;
  }
  else {
    iVar5 = 0xff;
    if (local_44 < 0x100) {
      iVar5 = local_44;
    }
    uVar9 = (uint8_t)iVar5;
    if (iVar5 < 1) {
      uVar9 = '\0';
    }
    *b = uVar9;
    if ((bVar8 & bVar7) != 0) {
      pTVar1 = (__this->fields)._r;
      pSVar4 = System_Byte__ToString((uint8_t)local_38,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar4,method_00);
      pTVar1 = (__this->fields)._g;
      pSVar4 = System_Byte__ToString((uint8_t)local_40,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar4,method_01);
      pTVar1 = (__this->fields)._b;
      pSVar4 = System_Byte__ToString((uint8_t)b,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText(pTVar1,pSVar4,method_02);
      bVar6 = (bool_conflict)CONCAT71((int7)((ulong)pTVar1 >> 8),1);
    }
  }
  return bVar6;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireRgbInput
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, TMPro_TMP_InputField_o* input, const MethodInfo* method);
// 0x3b030e0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireRgbInput
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,
               TMPro_TMP_InputField_o *input,MethodInfo *method)

{
  System_Delegate_o *a;
  TMPro_TMP_InputField_TextSelectionEvent_o *__this_00;
  bool_conflict bVar1;
  System_Delegate_o *b;
  TMPro_TMP_InputField_OnValidateInput_o *value;
  UnityEngine_Events_UnityAction_T0__o *call;
  
  if (DAT_057014c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnRgbChanged);
    il2cpp_init_method_metadata(&MethodInfo_Char_ValidateDigit);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_OnValidateInput);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    DAT_057014c6 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (input != (TMPro_TMP_InputField_o *)0x0) {
    a = (System_Delegate_o *)(input->fields).m_OnTouchScreenKeyboardStatusChanged;
    b = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor();
    value = (TMPro_TMP_InputField_OnValidateInput_o *)
            System_Delegate__Combine(a,b,(MethodInfo *)0x0);
    if ((value != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) && (value->klass != TypeInfo_OnValidateInput))
    {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    TMPro_TMP_InputField__set_onValidateInput(input,value,(MethodInfo *)0x0);
    __this_00 = (input->fields).m_OnEndTextSelection;
    call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,MethodInfo_Void_AddListener);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireHexInput
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, TMPro_TMP_InputField_o* input, const MethodInfo* method);
// 0x3b03240

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireHexInput
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,
               TMPro_TMP_InputField_o *input,MethodInfo *method)

{
  System_Delegate_o *a;
  TMPro_TMP_InputField_TextSelectionEvent_o *__this_00;
  bool_conflict bVar1;
  System_Delegate_o *b;
  TMPro_TMP_InputField_OnValidateInput_o *value;
  UnityEngine_Events_UnityAction_T0__o *call;
  
  if (DAT_057014c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnHexChanged);
    il2cpp_init_method_metadata(&MethodInfo_Char_ValidateHex);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_OnValidateInput);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    DAT_057014c7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (input != (TMPro_TMP_InputField_o *)0x0) {
    a = (System_Delegate_o *)(input->fields).m_OnTouchScreenKeyboardStatusChanged;
    b = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor();
    value = (TMPro_TMP_InputField_OnValidateInput_o *)
            System_Delegate__Combine(a,b,(MethodInfo *)0x0);
    if ((value != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) && (value->klass != TypeInfo_OnValidateInput))
    {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    TMPro_TMP_InputField__set_onValidateInput(input,value,(MethodInfo *)0x0);
    __this_00 = (input->fields).m_OnEndTextSelection;
    call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_string);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 != (TMPro_TMP_InputField_TextSelectionEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,MethodInfo_Void_AddListener);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$WireButton
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o* __this, System_String_o* id, UnityEngine_Events_UnityAction_o* action, const MethodInfo* method);
// 0x3b033a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__WireButton
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,System_String_o *id,
               UnityEngine_Events_UnityAction_o *action,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_Transform_o *root;
  UnityEngine_Object_o *x;
  
  if (DAT_057014c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_Find_Button);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014c8 = '\x01';
  }
  root = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Find<object>(root,id,MethodInfo_Button_Find_Button);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if ((x != (UnityEngine_Object_o *)0x0) &&
       (__this_00 = (UnityEngine_Events_UnityEvent_o *)x[10].fields.m_CachedPtr,
       __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,action,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$SetText
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText (TMPro_TMP_InputField_o* input, System_String_o* value, const MethodInfo* method);
// 0x3b044e0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__SetText
               (TMPro_TMP_InputField_o *input,System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057014c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057014c9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (input == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_String__op_Inequality
                      (*(System_String_o **)&(input->fields).m_SelectionColor.fields.a,value,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      TMPro_TMP_InputField__SetTextWithoutNotify(input,value,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$ValidateDigit
// il2cpp: uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateDigit (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x3b04620

uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateDigit
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  if (0x2f < addedChar) {
    if (0x39 < addedChar) {
      addedChar = 0;
    }
    return addedChar;
  }
  return 0;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerPopover$$ValidateHex
// il2cpp: uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateHex (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x3b04640

uint16_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover__ValidateHex
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  uint16_t uVar1;
  uint16_t uVar2;
  
  if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = System_Char__ToUpperInvariant(addedChar,(MethodInfo *)0x0);
  uVar2 = 0;
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
// 0x3b046a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerPopover_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


