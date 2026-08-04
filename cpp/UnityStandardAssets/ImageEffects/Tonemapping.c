// Type: UnityStandardAssets.ImageEffects.Tonemapping
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Tonemapping.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Tonemapping.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.Tonemapping$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_Tonemapping__CheckResources (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, const MethodInfo* method);
// 0x45889b0

bool_conflict
UnityStandardAssets_ImageEffects_Tonemapping__CheckResources
          (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,MethodInfo *method)

{
  UnityEngine_AnimationCurve_o **ppUVar1;
  undefined8 *puVar2;
  char **ppcVar3;
  InvokerMethod *ppIVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Keyframe_o __this_00;
  UnityEngine_Keyframe_o __this_01;
  UnityEngine_Keyframe_o __this_02;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int32_t iVar9;
  bool_conflict extraout_EAX;
  bool_conflict bVar10;
  UnityEngine_Material_o *pUVar11;
  UnityEngine_Texture2D_o *pUVar13;
  ulong extraout_RAX;
  undefined8 extraout_RAX_00;
  UnityEngine_Keyframe_array *pUVar14;
  UnityEngine_AnimationCurve_o *pUVar15;
  long lVar16;
  MethodInfo *method_00;
  _union_14 *p_Var17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Color_o color;
  undefined8 in_stack_ffffffffffffff00;
  undefined4 in_stack_ffffffffffffff08;
  undefined4 in_stack_ffffffffffffff0c;
  float in_stack_ffffffffffffff10;
  float in_stack_ffffffffffffff14;
  float in_stack_ffffffffffffff18;
  float fStack_e4;
  int32_t iStack_e0;
  undefined8 uStack_dc;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  float fStack_c4;
  int32_t iStack_c0;
  undefined8 uStack_bc;
  undefined1 auStack_b0 [8];
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  _union_14 _Stack_90;
  float fStack_88;
  float fStack_84;
  int32_t iStack_80;
  undefined8 uStack_7c;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  UnityStandardAssets_ImageEffects_Tonemapping_o *pUStack_48;
  ulong uVar12;
  
  if (g_data_057af103 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057af103 = '\x01';
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport_447b550
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,0,1,(MethodInfo *)0x0);
  pUVar11 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                      ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                       *(UnityEngine_Shader_o **)&(__this->fields).white,
                       *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat,
                       (MethodInfo *)0x0);
  *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat = pUVar11;
  il2cpp_runtime_helper_022b4080(&(__this->fields).validRenderTextureFormat);
  pUVar15 = (__this->fields).remapCurve;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar15,(MethodInfo *)0x0);
  uVar12 = (ulong)uVar8;
  if (((char)uVar8 != '\0') || (*(int *)&(__this->fields).createdMaterials != 1)) {
label_04588ada:
    bVar10 = (bool_conflict)CONCAT71((int7)(uVar12 >> 8),1);
    if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) == '\0') {
      UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
                ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,(MethodInfo *)0x0);
      bVar10 = (bool_conflict)
               CONCAT71((int7)((ulong)extraout_RAX_00 >> 8),
                        *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
    }
    return bVar10;
  }
  ppUVar1 = &(__this->fields).remapCurve;
  pUVar13 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
  UnityEngine_Texture2D___ctor_4dd9090(pUVar13,0x100,1,5,0,1,(MethodInfo *)0x0);
  *ppUVar1 = (UnityEngine_AnimationCurve_o *)pUVar13;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  if ((UnityEngine_Texture_o *)*ppUVar1 != (UnityEngine_Texture_o *)0x0) {
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar1,1,(MethodInfo *)0x0);
    if ((UnityEngine_Texture_o *)*ppUVar1 != (UnityEngine_Texture_o *)0x0) {
      UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar1,1,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_AnimationCurve_o *)0x0) {
        UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)*ppUVar1,0x34,(MethodInfo *)0x0);
        uVar12 = extraout_RAX;
        goto label_04588ada;
      }
    }
  }
  lVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  pUStack_48 = __this;
  if (g_data_057af104 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationCurve);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Keyframe);
    g_data_057af104 = '\x01';
  }
  iStack_80 = 0;
  uStack_7c = 0;
  _Stack_90.genericMethod = (Il2CppClass *)0x0;
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  method_00 = *(MethodInfo **)(lVar16 + 0x38);
  if ((method_00 != (MethodInfo *)0x0) &&
     (pUVar14 = UnityEngine_AnimationCurve__get_keys
                          ((UnityEngine_AnimationCurve_o *)method_00,(MethodInfo *)0x0),
     pUVar14 != (UnityEngine_Keyframe_array *)0x0)) {
    puVar2 = (undefined8 *)(lVar16 + 0x38);
    if ((int)pUVar14->max_length < 1) {
      pUVar14 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
      uStack_a0 = 0;
      uStack_9c = 0;
      auStack_b0 = (undefined1  [8])0x0;
      fStack_a8 = 0.0;
      uStack_a4 = 0;
      method_00 = (MethodInfo *)auStack_b0;
      __this_00.fields.m_InTangent = (float)in_stack_ffffffffffffff08;
      __this_00.fields.m_Time = (float)(int)in_stack_ffffffffffffff00;
      __this_00.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
      __this_00.fields.m_OutTangent = (float)in_stack_ffffffffffffff0c;
      __this_00.fields.m_WeightedMode = (int32_t)in_stack_ffffffffffffff10;
      __this_00.fields.m_InWeight = in_stack_ffffffffffffff14;
      __this_00.fields.m_OutWeight = in_stack_ffffffffffffff18;
      UnityEngine_Keyframe___ctor(__this_00,0.0,0.0,method_00);
      if (pUVar14 == (UnityEngine_Keyframe_array *)0x0) goto label_04588ddd;
      uVar6 = auStack_b0._0_4_;
      uVar7 = auStack_b0._4_4_;
      if ((int)pUVar14->max_length == 0) goto label_04588de2;
      pUVar14->m_Items[0].fields.m_OutTangent = (float)uStack_a4;
      pUVar14->m_Items[0].fields.m_WeightedMode = uStack_a0;
      *(undefined8 *)&pUVar14->m_Items[0].fields.m_InWeight = uStack_9c;
      pUVar14->m_Items[0].fields.m_Time = (float)auStack_b0._0_4_;
      pUVar14->m_Items[0].fields.m_Value = (float)auStack_b0._4_4_;
      pUVar14->m_Items[0].fields.m_InTangent = fStack_a8;
      pUVar14->m_Items[0].fields.m_OutTangent = (float)uStack_a4;
      iStack_c0 = 0;
      uStack_bc = 0;
      auStack_d0 = (undefined1  [8])0x0;
      fStack_c8 = 0.0;
      fStack_c4 = 0.0;
      method_00 = (MethodInfo *)auStack_d0;
      __this_01.fields.m_InTangent = (float)in_stack_ffffffffffffff08;
      __this_01.fields.m_Time = (float)(int)in_stack_ffffffffffffff00;
      __this_01.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
      __this_01.fields.m_OutTangent = (float)in_stack_ffffffffffffff0c;
      __this_01.fields.m_WeightedMode = uVar6;
      __this_01.fields.m_InWeight = (float)uVar7;
      __this_01.fields.m_OutWeight = fStack_a8;
      UnityEngine_Keyframe___ctor(__this_01,2.0,1.0,method_00);
      iStack_e0 = iStack_c0;
      uStack_dc = uStack_bc;
      fStack_e4 = fStack_c4;
      if ((uint)pUVar14->max_length < 2) goto label_04588de2;
      pUVar14->m_Items[1].fields.m_OutTangent = fStack_c4;
      pUVar14->m_Items[1].fields.m_WeightedMode = iStack_c0;
      *(undefined8 *)&pUVar14->m_Items[1].fields.m_InWeight = uStack_bc;
      pUVar14->m_Items[1].fields.m_Time = (float)auStack_d0._0_4_;
      pUVar14->m_Items[1].fields.m_Value = (float)auStack_d0._4_4_;
      pUVar14->m_Items[1].fields.m_InTangent = fStack_c8;
      pUVar14->m_Items[1].fields.m_OutTangent = fStack_c4;
      in_stack_ffffffffffffff10 = (float)auStack_d0._0_4_;
      in_stack_ffffffffffffff14 = (float)auStack_d0._4_4_;
      in_stack_ffffffffffffff18 = fStack_c8;
      pUVar15 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
      UnityEngine_AnimationCurve___ctor(pUVar15,pUVar14,(MethodInfo *)0x0);
      *puVar2 = pUVar15;
      pUVar14 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b4080(puVar2);
    }
    method_00 = (MethodInfo *)*puVar2;
    if (method_00 == (MethodInfo *)0x0) {
      return (bool_conflict)pUVar14;
    }
    iVar9 = UnityEngine_AnimationCurve__get_length
                      ((UnityEngine_AnimationCurve_o *)method_00,(MethodInfo *)0x0);
    fVar18 = 1.0;
    if (0 < iVar9) {
      pUVar15 = (UnityEngine_AnimationCurve_o *)*puVar2;
      if (pUVar15 == (UnityEngine_AnimationCurve_o *)0x0) goto label_04588ddd;
      iVar9 = UnityEngine_AnimationCurve__get_length(pUVar15,(MethodInfo *)0x0);
      UnityEngine_AnimationCurve__get_Item
                ((UnityEngine_Keyframe_o *)&stack0xffffffffffffff10,pUVar15,iVar9 + -1,(MethodInfo *)0x0);
      _Stack_90._4_4_ = in_stack_ffffffffffffff14;
      _Stack_90._0_4_ = in_stack_ffffffffffffff10;
      iStack_80 = iStack_e0;
      uStack_7c = uStack_dc;
      fStack_84 = fStack_e4;
      __this_02.fields.m_InTangent = (float)in_stack_ffffffffffffff08;
      __this_02.fields.m_Time = (float)(int)in_stack_ffffffffffffff00;
      __this_02.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
      __this_02.fields.m_OutTangent = (float)in_stack_ffffffffffffff0c;
      __this_02.fields.m_WeightedMode = (int32_t)in_stack_ffffffffffffff10;
      __this_02.fields.m_InWeight = in_stack_ffffffffffffff14;
      __this_02.fields.m_OutWeight = in_stack_ffffffffffffff18;
      fStack_88 = in_stack_ffffffffffffff18;
      fVar18 = UnityEngine_Keyframe__get_time(__this_02,(MethodInfo *)&_Stack_90);
    }
    fVar20 = 0.0;
    do {
      method_00 = (MethodInfo *)*puVar2;
      if (method_00 == (MethodInfo *)0x0) goto label_04588ddd;
      fVar19 = UnityEngine_AnimationCurve__Evaluate
                         ((UnityEngine_AnimationCurve_o *)method_00,fVar18 * fVar20,(MethodInfo *)0x0);
      pUVar13 = *(UnityEngine_Texture2D_o **)(lVar16 + 0x40);
      if (pUVar13 == (UnityEngine_Texture2D_o *)0x0) goto label_04588ddd;
      auStack_70 = ZEXT416((uint)fVar19);
      uStack_60._4_4_ = fVar19;
      uStack_60._0_4_ = fVar19;
      uStack_58 = 0;
      fVar19 = floorf(fVar20 * 255.0);
      color.fields.a = 1.0;
      color.fields.b = (float)auStack_70._0_4_;
      color.fields._0_8_ = uStack_60;
      UnityEngine_Texture2D__SetPixel(pUVar13,(int)fVar19,0,color,(MethodInfo *)0x0);
      fVar20 = fVar20 + 0.003921569;
    } while (fVar20 <= 1.0);
    method_00 = (MethodInfo *)0x0;
    if (*(UnityEngine_Texture2D_o **)(lVar16 + 0x40) != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply_4dd97c0(*(UnityEngine_Texture2D_o **)(lVar16 + 0x40),(MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
label_04588ddd:
  il2cpp_runtime_helper_022b2c90();
label_04588de2:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af105 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af105 = '\x01';
  }
  pUVar5 = (UnityEngine_Object_o *)method_00[1].name;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Implicit(pUVar5,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    ppcVar3 = &method_00[1].name;
    pUVar5 = (UnityEngine_Object_o *)*ppcVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar5,(MethodInfo *)0x0);
    *ppcVar3 = (char *)0x0;
    il2cpp_runtime_helper_022b4080(ppcVar3);
  }
  pUVar5 = (UnityEngine_Object_o *)method_00[1].invoker_method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Implicit(pUVar5,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    ppIVar4 = &method_00[1].invoker_method;
    pUVar5 = (UnityEngine_Object_o *)*ppIVar4;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar5,(MethodInfo *)0x0);
    *ppIVar4 = (InvokerMethod)0x0;
    il2cpp_runtime_helper_022b4080(ppIVar4);
  }
  pUVar5 = (method_00->field8_0x40).genericMethod;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Implicit(pUVar5,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return bVar10;
  }
  p_Var17 = &method_00->field8_0x40;
  pUVar5 = p_Var17->genericMethod;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__DestroyImmediate_4e01e00(pUVar5,(MethodInfo *)0x0);
  p_Var17->genericMethod = (void *)0x0;
  bVar10 = il2cpp_runtime_helper_022b4080(p_Var17,0);
  return bVar10;
}


// UnityStandardAssets.ImageEffects.Tonemapping$$UpdateCurve
// il2cpp: float UnityStandardAssets_ImageEffects_Tonemapping__UpdateCurve (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, const MethodInfo* method);
// 0x4588b10

float UnityStandardAssets_ImageEffects_Tonemapping__UpdateCurve
                (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  char **ppcVar2;
  InvokerMethod *ppIVar3;
  UnityEngine_Texture2D_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Keyframe_o __this_00;
  UnityEngine_Keyframe_o __this_01;
  UnityEngine_Keyframe_o __this_02;
  undefined4 uVar6;
  undefined4 uVar7;
  int32_t iVar8;
  bool_conflict bVar9;
  UnityEngine_Keyframe_array *pUVar10;
  UnityEngine_AnimationCurve_o *pUVar11;
  MethodInfo *method_00;
  _union_14 *p_Var12;
  float fVar13;
  float extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  UnityEngine_Color_o color;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff34;
  float in_stack_ffffffffffffff38;
  float in_stack_ffffffffffffff3c;
  float in_stack_ffffffffffffff40;
  float fStack_bc;
  int32_t iStack_b8;
  undefined8 uStack_b4;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  int32_t iStack_98;
  undefined8 uStack_94;
  undefined1 local_88 [8];
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  _union_14 local_68;
  float fStack_60;
  float fStack_5c;
  int32_t iStack_58;
  undefined8 uStack_54;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (g_data_057af104 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationCurve);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Keyframe);
    g_data_057af104 = '\x01';
  }
  iStack_58 = 0;
  uStack_54 = 0;
  local_68.genericMethod = (Il2CppClass *)0x0;
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  method_00 = *(MethodInfo **)&(__this->fields).type;
  if (method_00 != (MethodInfo *)0x0) {
    pUVar10 = UnityEngine_AnimationCurve__get_keys
                        ((UnityEngine_AnimationCurve_o *)method_00,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_Keyframe_array *)0x0) {
      piVar1 = &(__this->fields).type;
      if ((int)pUVar10->max_length < 1) {
        pUVar10 = (UnityEngine_Keyframe_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Keyframe);
        uStack_78 = 0;
        uStack_74 = 0;
        local_88 = (undefined1  [8])0x0;
        fStack_80 = 0.0;
        uStack_7c = 0;
        method_00 = (MethodInfo *)local_88;
        __this_00.fields.m_InTangent = (float)in_stack_ffffffffffffff30;
        __this_00.fields.m_Time = (float)(int)in_stack_ffffffffffffff28;
        __this_00.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
        __this_00.fields.m_OutTangent = (float)in_stack_ffffffffffffff34;
        __this_00.fields.m_WeightedMode = (int32_t)in_stack_ffffffffffffff38;
        __this_00.fields.m_InWeight = in_stack_ffffffffffffff3c;
        __this_00.fields.m_OutWeight = in_stack_ffffffffffffff40;
        UnityEngine_Keyframe___ctor(__this_00,0.0,0.0,method_00);
        if (pUVar10 == (UnityEngine_Keyframe_array *)0x0) goto label_04588ddd;
        uVar6 = local_88._0_4_;
        uVar7 = local_88._4_4_;
        if ((int)pUVar10->max_length == 0) goto label_04588de2;
        pUVar10->m_Items[0].fields.m_OutTangent = (float)uStack_7c;
        pUVar10->m_Items[0].fields.m_WeightedMode = uStack_78;
        *(undefined8 *)&pUVar10->m_Items[0].fields.m_InWeight = uStack_74;
        pUVar10->m_Items[0].fields.m_Time = (float)local_88._0_4_;
        pUVar10->m_Items[0].fields.m_Value = (float)local_88._4_4_;
        pUVar10->m_Items[0].fields.m_InTangent = fStack_80;
        pUVar10->m_Items[0].fields.m_OutTangent = (float)uStack_7c;
        iStack_98 = 0;
        uStack_94 = 0;
        local_a8 = (undefined1  [8])0x0;
        fStack_a0 = 0.0;
        fStack_9c = 0.0;
        method_00 = (MethodInfo *)local_a8;
        __this_01.fields.m_InTangent = (float)in_stack_ffffffffffffff30;
        __this_01.fields.m_Time = (float)(int)in_stack_ffffffffffffff28;
        __this_01.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
        __this_01.fields.m_OutTangent = (float)in_stack_ffffffffffffff34;
        __this_01.fields.m_WeightedMode = uVar6;
        __this_01.fields.m_InWeight = (float)uVar7;
        __this_01.fields.m_OutWeight = fStack_80;
        UnityEngine_Keyframe___ctor(__this_01,2.0,1.0,method_00);
        iStack_b8 = iStack_98;
        uStack_b4 = uStack_94;
        fStack_bc = fStack_9c;
        if ((uint)pUVar10->max_length < 2) goto label_04588de2;
        pUVar10->m_Items[1].fields.m_OutTangent = fStack_9c;
        pUVar10->m_Items[1].fields.m_WeightedMode = iStack_98;
        *(undefined8 *)&pUVar10->m_Items[1].fields.m_InWeight = uStack_94;
        pUVar10->m_Items[1].fields.m_Time = (float)local_a8._0_4_;
        pUVar10->m_Items[1].fields.m_Value = (float)local_a8._4_4_;
        pUVar10->m_Items[1].fields.m_InTangent = fStack_a0;
        pUVar10->m_Items[1].fields.m_OutTangent = fStack_9c;
        in_stack_ffffffffffffff38 = (float)local_a8._0_4_;
        in_stack_ffffffffffffff3c = (float)local_a8._4_4_;
        in_stack_ffffffffffffff40 = fStack_a0;
        pUVar11 = (UnityEngine_AnimationCurve_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimationCurve);
        UnityEngine_AnimationCurve___ctor(pUVar11,pUVar10,(MethodInfo *)0x0);
        *(UnityEngine_AnimationCurve_o **)piVar1 = pUVar11;
        il2cpp_runtime_helper_022b4080(piVar1);
      }
      method_00 = *(MethodInfo **)piVar1;
      fVar14 = 1.0;
      if (method_00 == (MethodInfo *)0x0) goto label_04588dca;
      iVar8 = UnityEngine_AnimationCurve__get_length
                        ((UnityEngine_AnimationCurve_o *)method_00,(MethodInfo *)0x0);
      fVar14 = 1.0;
      if (0 < iVar8) {
        pUVar11 = *(UnityEngine_AnimationCurve_o **)piVar1;
        if (pUVar11 == (UnityEngine_AnimationCurve_o *)0x0) goto label_04588ddd;
        iVar8 = UnityEngine_AnimationCurve__get_length(pUVar11,(MethodInfo *)0x0);
        UnityEngine_AnimationCurve__get_Item
                  ((UnityEngine_Keyframe_o *)&stack0xffffffffffffff38,pUVar11,iVar8 + -1,(MethodInfo *)0x0);
        local_68._4_4_ = in_stack_ffffffffffffff3c;
        local_68._0_4_ = in_stack_ffffffffffffff38;
        iStack_58 = iStack_b8;
        uStack_54 = uStack_b4;
        fStack_5c = fStack_bc;
        __this_02.fields.m_InTangent = (float)in_stack_ffffffffffffff30;
        __this_02.fields.m_Time = (float)(int)in_stack_ffffffffffffff28;
        __this_02.fields.m_Value = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
        __this_02.fields.m_OutTangent = (float)in_stack_ffffffffffffff34;
        __this_02.fields.m_WeightedMode = (int32_t)in_stack_ffffffffffffff38;
        __this_02.fields.m_InWeight = in_stack_ffffffffffffff3c;
        __this_02.fields.m_OutWeight = in_stack_ffffffffffffff40;
        fStack_60 = in_stack_ffffffffffffff40;
        fVar14 = UnityEngine_Keyframe__get_time(__this_02,(MethodInfo *)&local_68);
      }
      fVar15 = 0.0;
      do {
        method_00 = *(MethodInfo **)piVar1;
        if (method_00 == (MethodInfo *)0x0) goto label_04588ddd;
        fVar13 = UnityEngine_AnimationCurve__Evaluate
                           ((UnityEngine_AnimationCurve_o *)method_00,fVar14 * fVar15,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Texture2D_o *)(__this->fields).remapCurve;
        if (pUVar4 == (UnityEngine_Texture2D_o *)0x0) goto label_04588ddd;
        local_48 = ZEXT416((uint)fVar13);
        local_38._4_4_ = fVar13;
        local_38._0_4_ = fVar13;
        uStack_30 = 0;
        fVar13 = floorf(fVar15 * 255.0);
        color.fields.a = 1.0;
        color.fields.b = (float)local_48._0_4_;
        color.fields._0_8_ = local_38;
        UnityEngine_Texture2D__SetPixel(pUVar4,(int)fVar13,0,color,(MethodInfo *)0x0);
        fVar15 = fVar15 + 0.003921569;
      } while (fVar15 <= 1.0);
      pUVar4 = (UnityEngine_Texture2D_o *)(__this->fields).remapCurve;
      method_00 = (MethodInfo *)0x0;
      if (pUVar4 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__Apply_4dd97c0(pUVar4,(MethodInfo *)0x0);
label_04588dca:
        return 1.0 / fVar14;
      }
    }
  }
label_04588ddd:
  il2cpp_runtime_helper_022b2c90();
label_04588de2:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af105 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af105 = '\x01';
  }
  pUVar5 = (UnityEngine_Object_o *)method_00[1].name;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Implicit(pUVar5,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    ppcVar2 = &method_00[1].name;
    pUVar5 = (UnityEngine_Object_o *)*ppcVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar5,(MethodInfo *)0x0);
    *ppcVar2 = (char *)0x0;
    il2cpp_runtime_helper_022b4080(ppcVar2);
  }
  pUVar5 = (UnityEngine_Object_o *)method_00[1].invoker_method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Implicit(pUVar5,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    ppIVar3 = &method_00[1].invoker_method;
    pUVar5 = (UnityEngine_Object_o *)*ppIVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar5,(MethodInfo *)0x0);
    *ppIVar3 = (InvokerMethod)0x0;
    il2cpp_runtime_helper_022b4080(ppIVar3);
  }
  pUVar5 = (method_00->field8_0x40).genericMethod;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Implicit(pUVar5,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    p_Var12 = &method_00->field8_0x40;
    pUVar5 = p_Var12->genericMethod;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar5,(MethodInfo *)0x0);
    p_Var12->genericMethod = (void *)0x0;
    fVar14 = (float)il2cpp_runtime_helper_022b4080(p_Var12,0);
    return fVar14;
  }
  return extraout_XMM0_Da;
}


// UnityStandardAssets.ImageEffects.Tonemapping$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_Tonemapping__OnDisable (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, const MethodInfo* method);
// 0x4588df0

void UnityStandardAssets_ImageEffects_Tonemapping__OnDisable
               (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  bool_conflict *pbVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_AnimationCurve_o *pUVar4;
  bool_conflict bVar5;
  UnityEngine_AnimationCurve_o **ppUVar6;
  
  if (g_data_057af105 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af105 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).tonemapMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ppUVar1 = &(__this->fields).tonemapMaterial;
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
    *ppUVar1 = (UnityEngine_Material_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar1);
  }
  pUVar3 = *(UnityEngine_Object_o **)&(__this->fields).validRenderTextureFormat;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Implicit(pUVar3,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pbVar2 = &(__this->fields).validRenderTextureFormat;
    pUVar3 = *(UnityEngine_Object_o **)pbVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
    *(undefined8 *)pbVar2 = 0;
    il2cpp_runtime_helper_022b4080(pbVar2);
  }
  pUVar4 = (__this->fields).remapCurve;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ppUVar6 = &(__this->fields).remapCurve;
    pUVar4 = *ppUVar6;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
    *ppUVar6 = (UnityEngine_AnimationCurve_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar6,0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.Tonemapping$$CreateInternalRenderTexture
// il2cpp: bool UnityStandardAssets_ImageEffects_Tonemapping__CreateInternalRenderTexture (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, const MethodInfo* method);
// 0x4588f40

bool_conflict
UnityStandardAssets_ImageEffects_Tonemapping__CreateInternalRenderTexture
          (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  UnityEngine_Texture_o *pUVar1;
  double dVar2;
  char cVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  UnityStandardAssets_ImageEffects_Tonemapping_o *pUVar9;
  UnityEngine_Texture_o *source;
  long *plVar10;
  UnityEngine_RenderTexture_o *pUVar11;
  long lVar12;
  UnityStandardAssets_ImageEffects_Tonemapping_o *pUVar13;
  undefined8 uVar14;
  ulong uVar15;
  int32_t iVar16;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_Material_o *pUVar17;
  uint uVar18;
  UnityStandardAssets_ImageEffects_Tonemapping_o *pUVar19;
  long *plVar20;
  UnityStandardAssets_ImageEffects_Tonemapping_o *source_00;
  MethodInfo *method_00;
  UnityStandardAssets_ImageEffects_Tonemapping_o *__this_00;
  UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this_01;
  float fVar21;
  float fVar22;
  UnityEngine_Vector4_o value;
  UnityEngine_Texture_o *local_90;
  UnityEngine_Texture_o *local_80;
  
  if (g_data_057af106 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    g_data_057af106 = '\x01';
  }
  exists = (UnityEngine_Object_o *)(__this->fields).tonemapMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return 0;
  }
  bVar4 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(0xd,(MethodInfo *)0x0);
  iVar16 = 2;
  if ((char)bVar4 != '\0') {
    iVar16 = 0xd;
  }
  *(int32_t *)&(__this->fields).rt = iVar16;
  pUVar9 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
  UnityEngine_RenderTexture___ctor_4de1290
            ((UnityEngine_RenderTexture_o *)pUVar9,1,1,0,iVar16,(MethodInfo *)0x0);
  (__this->fields).tonemapMaterial = (UnityEngine_Material_o *)pUVar9;
  source_00 = pUVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields).tonemapMaterial);
  __this_00 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(__this->fields).tonemapMaterial;
  if (__this_00 != (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0) {
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_00,0x34,(MethodInfo *)0x0);
    return (bool_conflict)CONCAT71((int7)((ulong)pUVar9 >> 8),1);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af107 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    il2cpp_runtime_helper_023445d0(&"_HdrParams");
    il2cpp_runtime_helper_023445d0(&"No valid adaptive tonemapper type found!");
    il2cpp_runtime_helper_023445d0(&"_ExposureAdjustment");
    il2cpp_runtime_helper_023445d0(&"_Curve");
    il2cpp_runtime_helper_023445d0(&"_SmallTex");
    il2cpp_runtime_helper_023445d0(&"_AdaptionSpeed");
    il2cpp_runtime_helper_023445d0(&"_RangeScale");
    g_data_057af107 = '\x01';
  }
  method_00 = (__this_00->klass->vtable)._4_CheckResources.method;
  cVar3 = (*(__this_00->klass->vtable)._4_CheckResources.methodPtr)(__this_00);
  if (cVar3 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source_00,dest,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  fVar21 = *(float *)&(__this_00->fields).curveTex;
  fVar22 = 0.001;
  if (0.001 <= fVar21) {
    fVar22 = fVar21;
  }
  *(float *)&(__this_00->fields).curveTex = fVar22;
  switch(*(undefined4 *)&(__this_00->fields).createdMaterials) {
  case 0:
    pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
    if (pUVar17 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar17,"_ExposureAdjustment",fVar22,(MethodInfo *)0x0);
      pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar16 = 6;
label_045892f4:
      UnityEngine_Graphics__Blit_4dc2a60
                ((UnityEngine_Texture_o *)source_00,dest,pUVar17,iVar16,(MethodInfo *)0x0);
      return extraout_EAX_00;
    }
    break;
  case 1:
    fVar21 = UnityStandardAssets_ImageEffects_Tonemapping__UpdateCurve(__this_00,method_00);
    pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
    if (pUVar17 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar17,"_RangeScale",fVar21,(MethodInfo *)0x0);
      pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
      if (pUVar17 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetTexture
                  (pUVar17,"_Curve",(UnityEngine_Texture_o *)(__this_00->fields).remapCurve,
                   (MethodInfo *)0x0);
        pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar16 = 4;
        goto label_045892f4;
      }
    }
    break;
  case 2:
    pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
    if (pUVar17 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar17,"_ExposureAdjustment",fVar22,(MethodInfo *)0x0);
      pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar16 = 5;
      goto label_045892f4;
    }
    break;
  case 3:
    pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
    if (pUVar17 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar17,"_ExposureAdjustment",fVar22,(MethodInfo *)0x0);
      pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar16 = 8;
      goto label_045892f4;
    }
    break;
  case 4:
    pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
    if (pUVar17 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar17,"_ExposureAdjustment",fVar22 * 0.5,(MethodInfo *)0x0);
      pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar16 = 7;
      goto label_045892f4;
    }
    break;
  default:
    uVar5 = UnityStandardAssets_ImageEffects_Tonemapping__CreateInternalRenderTexture(__this_00,method_00);
    iVar16 = *(int32_t *)((long)&(__this_00->fields).createdMaterials + 4);
    source = (UnityEngine_Texture_o *)
             UnityEngine_RenderTexture__GetTemporary_4de1d50
                       (iVar16,iVar16,0,*(int32_t *)&(__this_00->fields).rt,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit
              ((UnityEngine_Texture_o *)source_00,(UnityEngine_RenderTexture_o *)source,(MethodInfo *)0x0);
    pUVar9 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0;
    if (source != (UnityEngine_Texture_o *)0x0) {
      iVar6 = (*(source->klass->vtable)._5_get_width.methodPtr)
                        (source,(source->klass->vtable)._5_get_width.method);
      if (g_data_057af10d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057af10d = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      dVar2 = System_Math__Log((double)iVar6,2.0,(MethodInfo *)0x0);
      uVar18 = (uint)dVar2;
      plVar10 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,uVar18);
      pUVar9 = __this_00;
      local_80 = source;
      if ((int)uVar18 < 1) {
        if (plVar10 == (long *)0x0) break;
      }
      else {
        if (plVar10 == (long *)0x0) goto label_045898e1;
        plVar20 = plVar10 + 4;
        iVar6 = 2;
        pUVar13 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0;
        do {
          uVar7 = (*(source->klass->vtable)._5_get_width.methodPtr)
                            (source,(source->klass->vtable)._5_get_width.method);
          pUVar9 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)uVar7;
          iVar8 = (*(source->klass->vtable)._5_get_width.methodPtr)
                            (source,(source->klass->vtable)._5_get_width.method);
          pUVar11 = UnityEngine_RenderTexture__GetTemporary_4de1d50
                              ((int)uVar7 / iVar6,iVar8 / iVar6,0,*(int32_t *)&(__this_00->fields).rt,
                               (MethodInfo *)0x0);
          if ((pUVar11 != (UnityEngine_RenderTexture_o *)0x0) &&
             (lVar12 = il2cpp_runtime_helper_023051f0(pUVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0))
          goto label_045898cd;
          if ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar10 + 3) <= pUVar13)
          goto label_045898c8;
          *plVar20 = (long)pUVar11;
          il2cpp_runtime_helper_022b4080(plVar20,pUVar11);
          iVar6 = iVar6 * 2;
          pUVar13 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)((long)&pUVar13->klass + 1);
          plVar20 = plVar20 + 1;
        } while ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)uVar18 != pUVar13);
      }
      uVar7 = uVar18 - 1;
      pUVar9 = __this_00;
      if (uVar7 < *(uint *)(plVar10 + 3)) {
        local_90 = (UnityEngine_Texture_o *)plVar10[(long)(int)uVar7 + 4];
        pUVar11 = (UnityEngine_RenderTexture_o *)plVar10[4];
        pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit_4dc2a60(source,pUVar11,pUVar17,1,(MethodInfo *)0x0);
        iVar6 = *(int *)&(__this_00->fields).createdMaterials;
        if (iVar6 == 6) {
          if (0 < (int)uVar7) {
            pUVar13 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar10 + 3);
            pUVar9 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0;
            do {
              pUVar19 = pUVar9;
              pUVar9 = pUVar19;
              if ((pUVar13 <= pUVar19) ||
                 (pUVar9 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)((long)&pUVar19->klass + 1),
                 pUVar13 <= pUVar9)) goto label_045898c8;
              pUVar1 = (UnityEngine_Texture_o *)plVar10[(long)((long)&pUVar19->klass + 4)];
              pUVar11 = (UnityEngine_RenderTexture_o *)plVar10[(long)((long)&pUVar19->klass + 5)];
              pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Graphics__Blit_4dc2a60(pUVar1,pUVar11,pUVar17,9,(MethodInfo *)0x0);
              pUVar13 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar10 + 3);
              if (pUVar13 <= pUVar9) goto label_045898c8;
            } while ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)uVar7 != pUVar9);
            local_90 = (UnityEngine_Texture_o *)plVar10[(long)((long)&pUVar19->klass + 5)];
          }
        }
        else if ((iVar6 == 5) && (0 < (int)uVar7)) {
          pUVar13 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar10 + 3);
          pUVar9 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0;
          do {
            pUVar19 = pUVar9;
            pUVar9 = pUVar19;
            if ((pUVar13 <= pUVar19) ||
               (pUVar9 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)((long)&pUVar19->klass + 1),
               pUVar13 <= pUVar9)) goto label_045898c8;
            pUVar1 = (UnityEngine_Texture_o *)plVar10[(long)((long)&pUVar19->klass + 4)];
            pUVar11 = (UnityEngine_RenderTexture_o *)plVar10[(long)((long)&pUVar19->klass + 5)];
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit(pUVar1,pUVar11,(MethodInfo *)0x0);
            pUVar13 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar10 + 3);
            if (pUVar13 <= pUVar9) goto label_045898c8;
          } while ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)uVar7 != pUVar9);
          local_90 = (UnityEngine_Texture_o *)plVar10[(long)((long)&pUVar19->klass + 5)];
        }
        fVar21 = (__this_00->fields).middleGrey;
        fVar22 = 0.001;
        if (0.001 <= fVar21) {
          fVar22 = fVar21;
        }
        (__this_00->fields).middleGrey = fVar22;
        pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
        if (pUVar17 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat(pUVar17,"_AdaptionSpeed",fVar22,(MethodInfo *)0x0);
          pUVar11 = (UnityEngine_RenderTexture_o *)(__this_00->fields).tonemapMaterial;
          if (pUVar11 != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_RenderTexture__MarkRestoreExpected(pUVar11,(MethodInfo *)0x0);
            pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
            pUVar11 = (UnityEngine_RenderTexture_o *)(__this_00->fields).tonemapMaterial;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2a60(local_90,pUVar11,pUVar17,uVar5 & 0xff | 2,(MethodInfo *)0x0);
            fVar21 = *(float *)((long)&(__this_00->fields).curveTex + 4);
            fVar22 = 0.001;
            if (0.001 <= fVar21) {
              fVar22 = fVar21;
            }
            *(float *)((long)&(__this_00->fields).curveTex + 4) = fVar22;
            pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
            pUVar9 = __this_00;
            if (pUVar17 != (UnityEngine_Material_o *)0x0) {
              fVar21 = (__this_00->fields).exposureAdjustment;
              value.fields.w = fVar21 * fVar21;
              value.fields.z = fVar22;
              value.fields.y = fVar22;
              value.fields.x = fVar22;
              UnityEngine_Material__SetVector(pUVar17,"_HdrParams",value,(MethodInfo *)0x0);
              pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
              if (pUVar17 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetTexture
                          (pUVar17,"_SmallTex",(UnityEngine_Texture_o *)(__this_00->fields).tonemapMaterial,
                           (MethodInfo *)0x0);
                iVar6 = *(int *)&(__this_00->fields).createdMaterials;
                if (iVar6 == 6) {
                  pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit_4dc2a60
                            ((UnityEngine_Texture_o *)source_00,dest,pUVar17,10,(MethodInfo *)0x0);
                }
                else if (iVar6 == 5) {
                  pUVar17 = *(UnityEngine_Material_o **)&(__this_00->fields).validRenderTextureFormat;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit_4dc2a60
                            ((UnityEngine_Texture_o *)source_00,dest,pUVar17,0,(MethodInfo *)0x0);
                }
                else {
                  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Debug__LogError("No valid adaptive tonemapper type found!",(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source_00,dest,(MethodInfo *)0x0);
                }
                if (0 < (int)uVar18) {
                  pUVar9 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0;
                  do {
                    if ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar10 + 3) <=
                        pUVar9) goto label_045898c8;
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)plVar10[(long)((long)&pUVar9->klass + 4)],
                               (MethodInfo *)0x0);
                    pUVar9 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)((long)&pUVar9->klass + 1);
                  } while ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)uVar18 != pUVar9);
                }
                UnityEngine_RenderTexture__ReleaseTemporary
                          ((UnityEngine_RenderTexture_o *)source,(MethodInfo *)0x0);
                return extraout_EAX_01;
              }
            }
          }
        }
      }
      else {
label_045898c8:
        il2cpp_runtime_helper_022b2ca0();
label_045898cd:
        uVar14 = il2cpp_runtime_helper_0231b270();
        il2cpp_runtime_helper_022b2b10(uVar14,0);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_045898e1:
  iVar6 = (*(local_80->klass->vtable)._5_get_width.methodPtr)
                    (local_80,(local_80->klass->vtable)._5_get_width.method);
  uVar15 = (*(local_80->klass->vtable)._5_get_width.methodPtr)
                     (local_80,(local_80->klass->vtable)._5_get_width.method);
  __this_01 = (UnityStandardAssets_ImageEffects_PostEffectsBase_o *)(ulong)(uint)(iVar6 / 2);
  UnityEngine_RenderTexture__GetTemporary_4de1d50
            (iVar6 / 2,(int)(((uint)(uVar15 >> 0x1f) & 1) + (int)uVar15) >> 1,0,
             *(int32_t *)&(pUVar9->fields).rt,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  (__this_01->fields).createdMaterials = (System_Collections_Generic_List_Material__o *)0x10000000003;
  __this_01[1].fields.m_CachedPtr = 0x3ecccccd3fc00000;
  __this_01[1].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3fc0000040000000;
  *(undefined1 *)&__this_01[1].fields.isSupported = 1;
  *(undefined4 *)&__this_01[2].monitor = 2;
  UnityStandardAssets_ImageEffects_PostEffectsBase___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_EAX_02;
}


// UnityStandardAssets.ImageEffects.Tonemapping$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_Tonemapping__OnRenderImage (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4589030

void UnityStandardAssets_ImageEffects_Tonemapping__OnRenderImage
               (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  UnityEngine_Texture_o *pUVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  UnityEngine_Texture_o *source_00;
  long *plVar8;
  UnityEngine_RenderTexture_o *pUVar9;
  long lVar10;
  UnityStandardAssets_ImageEffects_Tonemapping_o *pUVar11;
  undefined8 uVar12;
  ulong uVar13;
  int32_t iVar14;
  UnityEngine_Material_o *pUVar15;
  uint uVar16;
  UnityStandardAssets_ImageEffects_Tonemapping_o *unaff_RBX;
  UnityStandardAssets_ImageEffects_Tonemapping_o *pUVar17;
  long *plVar18;
  MethodInfo *method_00;
  UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this_00;
  float fVar19;
  float fVar20;
  UnityEngine_Vector4_o value;
  UnityEngine_Texture_o *pUStack_68;
  UnityEngine_Texture_o *pUStack_58;
  
  if (g_data_057af107 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    il2cpp_runtime_helper_023445d0(&"_HdrParams");
    il2cpp_runtime_helper_023445d0(&"No valid adaptive tonemapper type found!");
    il2cpp_runtime_helper_023445d0(&"_ExposureAdjustment");
    il2cpp_runtime_helper_023445d0(&"_Curve");
    il2cpp_runtime_helper_023445d0(&"_SmallTex");
    il2cpp_runtime_helper_023445d0(&"_AdaptionSpeed");
    il2cpp_runtime_helper_023445d0(&"_RangeScale");
    g_data_057af107 = '\x01';
  }
  method_00 = (__this->klass->vtable)._4_CheckResources.method;
  cVar3 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)(__this);
  if (cVar3 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  fVar19 = *(float *)&(__this->fields).curveTex;
  fVar20 = 0.001;
  if (0.001 <= fVar19) {
    fVar20 = fVar19;
  }
  *(float *)&(__this->fields).curveTex = fVar20;
  switch(*(undefined4 *)&(__this->fields).createdMaterials) {
  case 0:
    pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
    if (pUVar15 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar15,"_ExposureAdjustment",fVar20,(MethodInfo *)0x0);
      pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar14 = 6;
label_045892f4:
      UnityEngine_Graphics__Blit_4dc2a60
                ((UnityEngine_Texture_o *)source,destination,pUVar15,iVar14,(MethodInfo *)0x0);
      return;
    }
    break;
  case 1:
    fVar19 = UnityStandardAssets_ImageEffects_Tonemapping__UpdateCurve(__this,method_00);
    pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
    if (pUVar15 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar15,"_RangeScale",fVar19,(MethodInfo *)0x0);
      pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (pUVar15 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetTexture
                  (pUVar15,"_Curve",(UnityEngine_Texture_o *)(__this->fields).remapCurve,(MethodInfo *)0x0
                  );
        pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar14 = 4;
        goto label_045892f4;
      }
    }
    break;
  case 2:
    pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
    if (pUVar15 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar15,"_ExposureAdjustment",fVar20,(MethodInfo *)0x0);
      pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar14 = 5;
      goto label_045892f4;
    }
    break;
  case 3:
    pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
    if (pUVar15 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar15,"_ExposureAdjustment",fVar20,(MethodInfo *)0x0);
      pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar14 = 8;
      goto label_045892f4;
    }
    break;
  case 4:
    pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
    if (pUVar15 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat(pUVar15,"_ExposureAdjustment",fVar20 * 0.5,(MethodInfo *)0x0);
      pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar14 = 7;
      goto label_045892f4;
    }
    break;
  default:
    uVar4 = UnityStandardAssets_ImageEffects_Tonemapping__CreateInternalRenderTexture(__this,method_00);
    iVar14 = *(int32_t *)((long)&(__this->fields).createdMaterials + 4);
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary_4de1d50
                          (iVar14,iVar14,0,*(int32_t *)&(__this->fields).rt,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit
              ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
    unaff_RBX = (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0;
    if (source_00 != (UnityEngine_Texture_o *)0x0) {
      iVar5 = (*(source_00->klass->vtable)._5_get_width.methodPtr)
                        (source_00,(source_00->klass->vtable)._5_get_width.method);
      if (g_data_057af10d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057af10d = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      dVar2 = System_Math__Log((double)iVar5,2.0,(MethodInfo *)0x0);
      uVar16 = (uint)dVar2;
      plVar8 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_RenderTexture,uVar16);
      unaff_RBX = __this;
      pUStack_58 = source_00;
      if ((int)uVar16 < 1) {
        if (plVar8 == (long *)0x0) break;
      }
      else {
        if (plVar8 == (long *)0x0) goto label_045898e1;
        plVar18 = plVar8 + 4;
        iVar5 = 2;
        pUVar11 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0;
        do {
          uVar6 = (*(source_00->klass->vtable)._5_get_width.methodPtr)
                            (source_00,(source_00->klass->vtable)._5_get_width.method);
          unaff_RBX = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)uVar6;
          iVar7 = (*(source_00->klass->vtable)._5_get_width.methodPtr)
                            (source_00,(source_00->klass->vtable)._5_get_width.method);
          pUVar9 = UnityEngine_RenderTexture__GetTemporary_4de1d50
                             ((int)uVar6 / iVar5,iVar7 / iVar5,0,*(int32_t *)&(__this->fields).rt,
                              (MethodInfo *)0x0);
          if ((pUVar9 != (UnityEngine_RenderTexture_o *)0x0) &&
             (lVar10 = il2cpp_runtime_helper_023051f0(pUVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto label_045898cd;
          if ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar8 + 3) <= pUVar11)
          goto label_045898c8;
          *plVar18 = (long)pUVar9;
          il2cpp_runtime_helper_022b4080(plVar18,pUVar9);
          iVar5 = iVar5 * 2;
          pUVar11 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)((long)&pUVar11->klass + 1);
          plVar18 = plVar18 + 1;
        } while ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)uVar16 != pUVar11);
      }
      uVar6 = uVar16 - 1;
      unaff_RBX = __this;
      if (uVar6 < *(uint *)(plVar8 + 3)) {
        pUStack_68 = (UnityEngine_Texture_o *)plVar8[(long)(int)uVar6 + 4];
        pUVar9 = (UnityEngine_RenderTexture_o *)plVar8[4];
        pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit_4dc2a60(source_00,pUVar9,pUVar15,1,(MethodInfo *)0x0);
        iVar5 = *(int *)&(__this->fields).createdMaterials;
        if (iVar5 == 6) {
          if (0 < (int)uVar6) {
            pUVar11 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar8 + 3);
            unaff_RBX = (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0;
            do {
              pUVar17 = unaff_RBX;
              unaff_RBX = pUVar17;
              if ((pUVar11 <= pUVar17) ||
                 (unaff_RBX = (UnityStandardAssets_ImageEffects_Tonemapping_o *)((long)&pUVar17->klass + 1),
                 pUVar11 <= unaff_RBX)) goto label_045898c8;
              pUVar1 = (UnityEngine_Texture_o *)plVar8[(long)((long)&pUVar17->klass + 4)];
              pUVar9 = (UnityEngine_RenderTexture_o *)plVar8[(long)((long)&pUVar17->klass + 5)];
              pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Graphics__Blit_4dc2a60(pUVar1,pUVar9,pUVar15,9,(MethodInfo *)0x0);
              pUVar11 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar8 + 3);
              if (pUVar11 <= unaff_RBX) goto label_045898c8;
            } while ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)uVar6 != unaff_RBX);
            pUStack_68 = (UnityEngine_Texture_o *)plVar8[(long)((long)&pUVar17->klass + 5)];
          }
        }
        else if ((iVar5 == 5) && (0 < (int)uVar6)) {
          pUVar11 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar8 + 3);
          unaff_RBX = (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0;
          do {
            pUVar17 = unaff_RBX;
            unaff_RBX = pUVar17;
            if ((pUVar11 <= pUVar17) ||
               (unaff_RBX = (UnityStandardAssets_ImageEffects_Tonemapping_o *)((long)&pUVar17->klass + 1),
               pUVar11 <= unaff_RBX)) goto label_045898c8;
            pUVar1 = (UnityEngine_Texture_o *)plVar8[(long)((long)&pUVar17->klass + 4)];
            pUVar9 = (UnityEngine_RenderTexture_o *)plVar8[(long)((long)&pUVar17->klass + 5)];
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit(pUVar1,pUVar9,(MethodInfo *)0x0);
            pUVar11 = (UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar8 + 3);
            if (pUVar11 <= unaff_RBX) goto label_045898c8;
          } while ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)uVar6 != unaff_RBX);
          pUStack_68 = (UnityEngine_Texture_o *)plVar8[(long)((long)&pUVar17->klass + 5)];
        }
        fVar19 = (__this->fields).middleGrey;
        fVar20 = 0.001;
        if (0.001 <= fVar19) {
          fVar20 = fVar19;
        }
        (__this->fields).middleGrey = fVar20;
        pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
        if (pUVar15 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat(pUVar15,"_AdaptionSpeed",fVar20,(MethodInfo *)0x0);
          pUVar9 = (UnityEngine_RenderTexture_o *)(__this->fields).tonemapMaterial;
          if (pUVar9 != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_RenderTexture__MarkRestoreExpected(pUVar9,(MethodInfo *)0x0);
            pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
            pUVar9 = (UnityEngine_RenderTexture_o *)(__this->fields).tonemapMaterial;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2a60(pUStack_68,pUVar9,pUVar15,uVar4 & 0xff | 2,(MethodInfo *)0x0);
            fVar19 = *(float *)((long)&(__this->fields).curveTex + 4);
            fVar20 = 0.001;
            if (0.001 <= fVar19) {
              fVar20 = fVar19;
            }
            *(float *)((long)&(__this->fields).curveTex + 4) = fVar20;
            pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
            unaff_RBX = __this;
            if (pUVar15 != (UnityEngine_Material_o *)0x0) {
              fVar19 = (__this->fields).exposureAdjustment;
              value.fields.w = fVar19 * fVar19;
              value.fields.z = fVar20;
              value.fields.y = fVar20;
              value.fields.x = fVar20;
              UnityEngine_Material__SetVector(pUVar15,"_HdrParams",value,(MethodInfo *)0x0);
              pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
              if (pUVar15 != (UnityEngine_Material_o *)0x0) {
                UnityEngine_Material__SetTexture
                          (pUVar15,"_SmallTex",(UnityEngine_Texture_o *)(__this->fields).tonemapMaterial,
                           (MethodInfo *)0x0);
                iVar5 = *(int *)&(__this->fields).createdMaterials;
                if (iVar5 == 6) {
                  pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit_4dc2a60
                            ((UnityEngine_Texture_o *)source,destination,pUVar15,10,(MethodInfo *)0x0);
                }
                else if (iVar5 == 5) {
                  pUVar15 = *(UnityEngine_Material_o **)&(__this->fields).validRenderTextureFormat;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit_4dc2a60
                            ((UnityEngine_Texture_o *)source,destination,pUVar15,0,(MethodInfo *)0x0);
                }
                else {
                  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Debug__LogError("No valid adaptive tonemapper type found!",(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
                }
                if (0 < (int)uVar16) {
                  unaff_RBX = (UnityStandardAssets_ImageEffects_Tonemapping_o *)0x0;
                  do {
                    if ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)*(uint *)(plVar8 + 3) <=
                        unaff_RBX) goto label_045898c8;
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)plVar8[(long)((long)&unaff_RBX->klass + 4)],
                               (MethodInfo *)0x0);
                    unaff_RBX = (UnityStandardAssets_ImageEffects_Tonemapping_o *)
                                ((long)&unaff_RBX->klass + 1);
                  } while ((UnityStandardAssets_ImageEffects_Tonemapping_o *)(ulong)uVar16 != unaff_RBX);
                }
                UnityEngine_RenderTexture__ReleaseTemporary
                          ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
label_045898c8:
        il2cpp_runtime_helper_022b2ca0();
label_045898cd:
        uVar12 = il2cpp_runtime_helper_0231b270();
        il2cpp_runtime_helper_022b2b10(uVar12,0);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_045898e1:
  iVar5 = (*(pUStack_58->klass->vtable)._5_get_width.methodPtr)
                    (pUStack_58,(pUStack_58->klass->vtable)._5_get_width.method);
  uVar13 = (*(pUStack_58->klass->vtable)._5_get_width.methodPtr)
                     (pUStack_58,(pUStack_58->klass->vtable)._5_get_width.method);
  __this_00 = (UnityStandardAssets_ImageEffects_PostEffectsBase_o *)(ulong)(uint)(iVar5 / 2);
  UnityEngine_RenderTexture__GetTemporary_4de1d50
            (iVar5 / 2,(int)(((uint)(uVar13 >> 0x1f) & 1) + (int)uVar13) >> 1,0,
             *(int32_t *)&(unaff_RBX->fields).rt,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  (__this_00->fields).createdMaterials = (System_Collections_Generic_List_Material__o *)0x10000000003;
  __this_00[1].fields.m_CachedPtr = 0x3ecccccd3fc00000;
  __this_00[1].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3fc0000040000000;
  *(undefined1 *)&__this_00[1].fields.isSupported = 1;
  *(undefined4 *)&__this_00[2].monitor = 2;
  UnityStandardAssets_ImageEffects_PostEffectsBase___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Tonemapping$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Tonemapping___ctor (UnityStandardAssets_ImageEffects_Tonemapping_o* __this, const MethodInfo* method);
// 0x4589940

void UnityStandardAssets_ImageEffects_Tonemapping___ctor
               (UnityStandardAssets_ImageEffects_Tonemapping_o *__this,MethodInfo *method)

{
  (__this->fields).createdMaterials = (System_Collections_Generic_List_Material__o *)0x10000000003;
  (__this->fields).curveTex = (UnityEngine_Texture2D_o *)0x3ecccccd3fc00000;
  (__this->fields).exposureAdjustment = 2.0;
  (__this->fields).middleGrey = 1.5;
  *(undefined1 *)&(__this->fields).tonemapper = 1;
  *(undefined4 *)&(__this->fields).rt = 2;
  UnityStandardAssets_ImageEffects_PostEffectsBase___ctor
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,(MethodInfo *)0x0);
  return;
}


