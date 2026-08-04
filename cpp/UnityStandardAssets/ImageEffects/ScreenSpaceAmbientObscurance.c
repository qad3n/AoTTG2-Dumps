// Type: UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ScreenSpaceAmbientObscurance.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ScreenSpaceAmbientObscurance.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance__CheckResources (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o* __this, const MethodInfo* method);
// 0x45867f0

bool_conflict
UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance__CheckResources
          (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  undefined8 uVar1;
  undefined8 extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  
  UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport_4475ed0
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,1,in_RDX);
  method_00 = (MethodInfo *)
              UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
                        ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,
                         (UnityEngine_Shader_o *)(__this->fields).rand,
                         (UnityEngine_Material_o *)(__this->fields).aoShader,in_RCX);
  (__this->fields).aoShader = (UnityEngine_Shader_o *)method_00;
  uVar1 = il2cpp_runtime_helper_022b4080(&(__this->fields).aoShader);
  if (*(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),1);
  }
  UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
            ((UnityStandardAssets_ImageEffects_PostEffectsBase_o *)__this,method_00);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(char *)((long)&(__this->fields).supportHDRTextures + 2) != '\0');
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance__OnDisable (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o* __this, const MethodInfo* method);
// 0x4586850

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance__OnDisable
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Shader_o **ppUVar3;
  
  if (g_data_057af0f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0f6 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).aoShader;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar3 = &(__this->fields).aoShader;
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)*ppUVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
  }
  *ppUVar3 = (UnityEngine_Shader_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar3,0);
  return;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance__OnRenderImage (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x45868e0

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance__OnRenderImage
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,MethodInfo *method
               )

{
  byte bVar1;
  UnityEngine_Material_o *pUVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  UnityEngine_Matrix4x4_o __this_00;
  UnityEngine_Matrix4x4_o __this_01;
  UnityEngine_Matrix4x4_o __this_02;
  UnityEngine_Matrix4x4_o __this_03;
  UnityEngine_Matrix4x4_o __this_04;
  UnityEngine_Matrix4x4_o __this_05;
  UnityEngine_Matrix4x4_o __this_06;
  UnityEngine_Matrix4x4_o __this_07;
  UnityEngine_Matrix4x4_o __this_08;
  UnityEngine_Matrix4x4_o __this_09;
  UnityEngine_Matrix4x4_o __this_10;
  UnityEngine_Matrix4x4_o __this_11;
  UnityEngine_Matrix4x4_o __this_12;
  UnityEngine_Matrix4x4_o __this_13;
  UnityEngine_Matrix4x4_o __this_14;
  UnityEngine_Matrix4x4_o __this_15;
  UnityEngine_Matrix4x4_o __this_16;
  UnityEngine_Matrix4x4_o __this_17;
  UnityEngine_Matrix4x4_o __this_18;
  UnityEngine_Matrix4x4_o value;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *pUVar5;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_Camera_o *__this_19;
  UnityEngine_Texture_o *source_00;
  UnityEngine_Texture_o *pUVar8;
  System_Collections_Generic_List_object__o *__this_20;
  int32_t iVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  float extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  float extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  float extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  float extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  undefined8 in_stack_fffffffffffffd18;
  undefined8 in_stack_fffffffffffffd20;
  undefined8 in_stack_fffffffffffffd28;
  undefined8 in_stack_fffffffffffffd30;
  undefined8 in_stack_fffffffffffffd38;
  undefined8 in_stack_fffffffffffffd40;
  undefined8 in_stack_fffffffffffffd48;
  undefined8 in_stack_fffffffffffffd50;
  Il2CppMethodPointer pIStack_2a8;
  Il2CppMethodPointer pIStack_2a0;
  InvokerMethod pIStack_298;
  char *pcStack_290;
  Il2CppClass *pIStack_288;
  Il2CppType *pIStack_280;
  Il2CppType **ppIStack_278;
  _union_13 _Stack_270;
  float fStack_268;
  undefined4 uStack_264;
  undefined4 uStack_25c;
  float fStack_258;
  float fStack_254;
  UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *pUStack_240;
  undefined8 uStack_238;
  undefined8 uStack_228;
  Il2CppMethodPointer pIStack_218;
  Il2CppMethodPointer pIStack_210;
  InvokerMethod pIStack_208;
  char *pcStack_200;
  Il2CppClass *pIStack_1f8;
  Il2CppType *pIStack_1f0;
  Il2CppType **ppIStack_1e8;
  _union_13 _Stack_1e0;
  Il2CppMethodPointer pIStack_1d8;
  Il2CppMethodPointer pIStack_1d0;
  InvokerMethod pIStack_1c8;
  char *pcStack_1c0;
  Il2CppClass *pIStack_1b8;
  Il2CppType *pIStack_1b0;
  Il2CppType **ppIStack_1a8;
  _union_13 _Stack_1a0;
  Il2CppMethodPointer pIStack_198;
  Il2CppMethodPointer pIStack_190;
  InvokerMethod pIStack_188;
  char *pcStack_180;
  Il2CppClass *pIStack_178;
  Il2CppType *pIStack_170;
  Il2CppType **ppIStack_168;
  _union_13 _Stack_160;
  undefined1 auStack_158 [96];
  float fStack_f8;
  float fStack_f4;
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_d8;
  undefined4 uStack_d4;
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  undefined4 uStack_44;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  
  if (g_data_057af0f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Rand");
    il2cpp_runtime_helper_023445d0(&"_ProjInfo");
    il2cpp_runtime_helper_023445d0(&"_Axis");
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    il2cpp_runtime_helper_023445d0(&"_AOTex");
    il2cpp_runtime_helper_023445d0(&"_ProjInfoRight");
    il2cpp_runtime_helper_023445d0(&"_Radius2");
    il2cpp_runtime_helper_023445d0(&"_ProjectionInv");
    il2cpp_runtime_helper_023445d0(&"_ProjInfoLeft");
    il2cpp_runtime_helper_023445d0(&"_Radius");
    il2cpp_runtime_helper_023445d0(&"_BlurFilterDistance");
    g_data_057af0f7 = '\x01';
  }
  auStack_158._48_8_ = (Il2CppType **)0x0;
  auStack_158._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_158._32_8_ = (Il2CppClass *)0x0;
  auStack_158._40_8_ = (Il2CppType *)0x0;
  auStack_158._16_8_ = (InvokerMethod)0x0;
  auStack_158._24_8_ = (char *)0x0;
  auStack_158._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_158._8_8_ = (Il2CppMethodPointer)0x0;
  ppIStack_1e8 = (Il2CppType **)0x0;
  _Stack_1e0.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_1f8 = (Il2CppClass *)0x0;
  pIStack_1f0 = (Il2CppType *)0x0;
  pIStack_208 = (InvokerMethod)0x0;
  pcStack_200 = (char *)0x0;
  pIStack_218 = (Il2CppMethodPointer)0x0;
  pIStack_210 = (Il2CppMethodPointer)0x0;
  ppIStack_168 = (Il2CppType **)0x0;
  _Stack_160.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_178 = (Il2CppClass *)0x0;
  pIStack_170 = (Il2CppType *)0x0;
  pIStack_188 = (InvokerMethod)0x0;
  pcStack_180 = (char *)0x0;
  pIStack_198 = (Il2CppMethodPointer)0x0;
  pIStack_190 = (Il2CppMethodPointer)0x0;
  ppIStack_1a8 = (Il2CppType **)0x0;
  _Stack_1a0.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_1b8 = (Il2CppClass *)0x0;
  pIStack_1b0 = (Il2CppType *)0x0;
  pIStack_1c8 = (InvokerMethod)0x0;
  pcStack_1c0 = (char *)0x0;
  pIStack_1d8 = (Il2CppMethodPointer)0x0;
  pIStack_1d0 = (Il2CppMethodPointer)0x0;
  cVar6 = (*(__this->klass->vtable)._4_CheckResources.methodPtr)
                    (__this,(__this->klass->vtable)._4_CheckResources.method);
  if (cVar6 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,(MethodInfo *)0x0);
    return;
  }
  pUStack_240 = __this;
  __this_19 = (UnityEngine_Camera_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
  if (__this_19 == (UnityEngine_Camera_o *)0x0) goto label_0458727d;
  UnityEngine_Camera__get_projectionMatrix
            ((UnityEngine_Matrix4x4_o *)&pIStack_2a8,__this_19,(MethodInfo *)0x0);
  auStack_158._48_8_ = ppIStack_278;
  auStack_158._56_8_ = _Stack_270;
  auStack_158._32_8_ = pIStack_288;
  auStack_158._40_8_ = pIStack_280;
  auStack_158._16_8_ = pIStack_298;
  auStack_158._24_8_ = pcStack_290;
  auStack_158._0_8_ = pIStack_2a8;
  auStack_158._8_8_ = pIStack_2a0;
  __this_00.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
  __this_00.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
  __this_00.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
  __this_00.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
  __this_00.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
  __this_00.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
  __this_00.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
  __this_00.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
  __this_00.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
  __this_00.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
  __this_00.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
  __this_00.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
  __this_00.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
  __this_00.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
  __this_00.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
  __this_00.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
  UnityEngine_Matrix4x4__get_inverse
            ((UnityEngine_Matrix4x4_o *)&pIStack_2a8,__this_00,(MethodInfo *)auStack_158);
  ppIStack_1e8 = ppIStack_278;
  _Stack_1e0 = _Stack_270;
  pIStack_1f8 = pIStack_288;
  pIStack_1f0 = pIStack_280;
  pIStack_208 = pIStack_298;
  pcStack_200 = pcStack_290;
  pIStack_218 = pIStack_2a8;
  pIStack_210 = pIStack_2a0;
  __this_01.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
  __this_01.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
  __this_01.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
  __this_01.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
  __this_01.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
  __this_01.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
  __this_01.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
  __this_01.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
  __this_01.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
  __this_01.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
  __this_01.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
  __this_01.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
  __this_01.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
  __this_01.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
  __this_01.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
  __this_01.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
  iVar9 = (int32_t)(MethodInfo *)auStack_158;
  fStack_268 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_01,iVar9,(MethodInfo *)0x0);
  __this_02.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
  __this_02.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
  __this_02.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
  __this_02.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
  __this_02.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
  __this_02.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
  __this_02.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
  __this_02.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
  __this_02.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
  __this_02.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
  __this_02.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
  __this_02.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
  __this_02.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
  __this_02.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
  __this_02.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
  __this_02.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
  uStack_264 = extraout_XMM0_Db;
  uStack_25c = extraout_XMM0_Dd;
  fVar12 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_02,iVar9,(MethodInfo *)&g_data_00000005);
  uStack_238 = (UnityEngine_Texture_o *)CONCAT44(extraout_XMM0_Db_00,fVar12);
  __this_03.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
  __this_03.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
  __this_03.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
  __this_03.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
  __this_03.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
  __this_03.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
  __this_03.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
  __this_03.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
  __this_03.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
  __this_03.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
  __this_03.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
  __this_03.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
  __this_03.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
  __this_03.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
  __this_03.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
  __this_03.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
  fStack_258 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_03,iVar9,(MethodInfo *)&g_data_00000008);
  __this_04.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
  __this_04.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
  __this_04.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
  __this_04.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
  __this_04.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
  __this_04.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
  __this_04.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
  __this_04.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
  __this_04.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
  __this_04.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
  __this_04.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
  __this_04.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
  __this_04.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
  __this_04.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
  __this_04.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
  __this_04.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
  fStack_254 = extraout_XMM0_Db_01;
  fVar12 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_04,iVar9,(MethodInfo *)0x0);
  uStack_228 = (UnityEngine_RenderTexture_o *)CONCAT44(extraout_XMM0_Db_02,fVar12);
  __this_05.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
  __this_05.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
  __this_05.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
  __this_05.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
  __this_05.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
  __this_05.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
  __this_05.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
  __this_05.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
  __this_05.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
  __this_05.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
  __this_05.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
  __this_05.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
  __this_05.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
  __this_05.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
  __this_05.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
  __this_05.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
  fStack_58 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_05,iVar9,(MethodInfo *)0x9);
  __this_06.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
  __this_06.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
  __this_06.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
  __this_06.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
  __this_06.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
  __this_06.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
  __this_06.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
  __this_06.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
  __this_06.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
  __this_06.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
  __this_06.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
  __this_06.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
  __this_06.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
  __this_06.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
  __this_06.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
  __this_06.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
  fStack_54 = extraout_XMM0_Db_03;
  fStack_48 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_06,iVar9,(MethodInfo *)&g_data_00000005);
  uStack_44 = extraout_XMM0_Db_04;
  bVar7 = UnityEngine_Camera__get_stereoEnabled(__this_19,(MethodInfo *)0x0);
  pUVar5 = pUStack_240;
  if ((char)bVar7 != '\0') {
    UnityEngine_Camera__GetStereoProjectionMatrix
              ((UnityEngine_Matrix4x4_o *)&pIStack_2a8,__this_19,0,(MethodInfo *)0x0);
    ppIStack_168 = ppIStack_278;
    _Stack_160 = _Stack_270;
    pIStack_178 = pIStack_288;
    pIStack_170 = pIStack_280;
    pIStack_188 = pIStack_298;
    pcStack_180 = pcStack_290;
    pIStack_198 = pIStack_2a8;
    pIStack_190 = pIStack_2a0;
    UnityEngine_Camera__GetStereoProjectionMatrix
              ((UnityEngine_Matrix4x4_o *)&pIStack_2a8,__this_19,1,(MethodInfo *)0x0);
    ppIStack_1a8 = ppIStack_278;
    _Stack_1a0 = _Stack_270;
    pIStack_1b8 = pIStack_288;
    pIStack_1b0 = pIStack_280;
    pIStack_1c8 = pIStack_298;
    pcStack_1c0 = pcStack_290;
    pIStack_1d8 = pIStack_2a8;
    pIStack_1d0 = pIStack_2a0;
    __this_07.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_07.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_07.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_07.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_07.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_07.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_07.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_07.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_07.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_07.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_07.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_07.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_07.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_07.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_07.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_07.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    iVar9 = (int32_t)&pIStack_198;
    fStack_68 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_07,iVar9,(MethodInfo *)0x0);
    __this_08.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_08.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_08.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_08.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_08.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_08.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_08.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_08.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_08.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_08.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_08.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_08.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_08.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_08.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_08.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_08.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    uStack_64 = extraout_XMM0_Db_05;
    fStack_88 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_08,iVar9,(MethodInfo *)&g_data_00000005);
    __this_09.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_09.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_09.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_09.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_09.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_09.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_09.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_09.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_09.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_09.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_09.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_09.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_09.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_09.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_09.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_09.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    uStack_84 = extraout_XMM0_Db_06;
    fStack_78 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_09,iVar9,(MethodInfo *)&g_data_00000008);
    __this_10.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_10.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_10.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_10.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_10.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_10.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_10.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_10.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_10.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_10.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_10.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_10.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_10.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_10.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_10.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_10.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    fStack_74 = extraout_XMM0_Db_07;
    fStack_b8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_10,iVar9,(MethodInfo *)0x0);
    __this_11.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_11.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_11.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_11.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_11.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_11.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_11.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_11.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_11.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_11.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_11.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_11.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_11.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_11.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_11.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_11.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    uStack_b4 = extraout_XMM0_Db_08;
    uStack_ac = extraout_XMM0_Dd_00;
    fStack_f8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_11,iVar9,(MethodInfo *)0x9);
    __this_12.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_12.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_12.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_12.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_12.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_12.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_12.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_12.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_12.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_12.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_12.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_12.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_12.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_12.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_12.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_12.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    fStack_f4 = extraout_XMM0_Db_09;
    fStack_e8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_12,iVar9,(MethodInfo *)&g_data_00000005);
    __this_13.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_13.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_13.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_13.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_13.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_13.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_13.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_13.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_13.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_13.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_13.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_13.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_13.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_13.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_13.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_13.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    iVar9 = (int32_t)&pIStack_1d8;
    uStack_e4 = extraout_XMM0_Db_10;
    fStack_a8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_13,iVar9,(MethodInfo *)0x0);
    __this_14.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_14.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_14.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_14.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_14.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_14.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_14.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_14.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_14.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_14.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_14.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_14.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_14.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_14.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_14.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_14.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    uStack_a4 = extraout_XMM0_Db_11;
    uStack_9c = extraout_XMM0_Dd_01;
    fStack_d8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_14,iVar9,(MethodInfo *)&g_data_00000005);
    __this_15.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_15.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_15.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_15.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_15.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_15.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_15.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_15.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_15.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_15.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_15.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_15.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_15.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_15.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_15.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_15.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    uStack_d4 = extraout_XMM0_Db_12;
    fStack_98 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_15,iVar9,(MethodInfo *)&g_data_00000008);
    __this_16.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_16.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_16.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_16.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_16.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_16.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_16.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_16.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_16.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_16.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_16.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_16.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_16.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_16.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_16.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_16.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    fStack_94 = extraout_XMM0_Db_13;
    fStack_c8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_16,iVar9,(MethodInfo *)0x0);
    __this_17.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_17.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_17.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_17.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_17.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_17.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_17.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_17.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_17.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_17.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_17.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_17.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_17.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_17.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_17.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_17.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    uStack_c4 = extraout_XMM0_Db_14;
    auStack_158._64_4_ = UnityEngine_Matrix4x4__get_Item_4de8290(__this_17,iVar9,(MethodInfo *)0x9);
    __this_18.fields.m20 = (float)(int)in_stack_fffffffffffffd20;
    __this_18.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffd20 >> 0x20);
    __this_18.fields.m00 = (float)(int)in_stack_fffffffffffffd18;
    __this_18.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffd18 >> 0x20);
    __this_18.fields.m01 = (float)(int)in_stack_fffffffffffffd28;
    __this_18.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffd28 >> 0x20);
    __this_18.fields.m21 = (float)(int)in_stack_fffffffffffffd30;
    __this_18.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffd30 >> 0x20);
    __this_18.fields.m02 = (float)(int)in_stack_fffffffffffffd38;
    __this_18.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffd38 >> 0x20);
    __this_18.fields.m22 = (float)(int)in_stack_fffffffffffffd40;
    __this_18.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffd40 >> 0x20);
    __this_18.fields.m03 = (float)(int)in_stack_fffffffffffffd48;
    __this_18.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffd48 >> 0x20);
    __this_18.fields.m23 = (float)(int)in_stack_fffffffffffffd50;
    __this_18.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    auStack_158._68_4_ = extraout_XMM0_Db_15;
    auStack_158._80_4_ = UnityEngine_Matrix4x4__get_Item_4de8290(__this_18,iVar9,(MethodInfo *)&g_data_00000005);
    pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
    __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
    if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_0458727d;
    auVar16._4_4_ = fStack_f8 + 1.0;
    auVar16._0_4_ = 1.0 - fStack_78;
    auVar16._8_4_ = 0.0 - fStack_74;
    auVar16._12_4_ = 0.0 - fStack_f4;
    auVar13._4_4_ = uStack_b4;
    auVar13._0_4_ = fStack_b8;
    auVar13._8_4_ = uStack_b4;
    auVar13._12_4_ = uStack_ac;
    auVar17._8_8_ = auVar13._8_8_;
    auVar17._4_4_ = fStack_e8;
    auVar17._0_4_ = fStack_b8;
    auVar14._0_12_ = auVar17._0_12_;
    auVar14._12_4_ = uStack_e4;
    auVar17 = divps(auVar16,auVar14);
    auVar15._4_4_ = fStack_88;
    auVar15._0_4_ = fStack_68;
    auVar15._8_4_ = uStack_64;
    auVar15._12_4_ = uStack_84;
    auVar15 = divps(_DAT_00d1ba30,auVar15);
    value_00.fields._0_8_ = auVar15._0_8_;
    value_00.fields._8_8_ = auVar17._0_8_;
    auStack_158._84_4_ = extraout_XMM0_Db_16;
    UnityEngine_Material__SetVector(pUVar2,"_ProjInfoLeft",value_00,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
    __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
    if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_0458727d;
    auVar19._4_4_ = uStack_a4;
    auVar19._0_4_ = fStack_a8;
    auVar19._8_4_ = uStack_a4;
    auVar19._12_4_ = uStack_9c;
    auVar18._8_8_ = auVar19._8_8_;
    auVar18._4_4_ = fStack_d8;
    auVar18._0_4_ = fStack_a8;
    auVar20._0_12_ = auVar18._0_12_;
    auVar20._12_4_ = uStack_d4;
    auVar15 = divps(_DAT_00d1ba30,auVar20);
    auVar21._4_4_ = (float)auStack_158._64_4_ + 1.0;
    auVar21._0_4_ = 1.0 - fStack_98;
    auVar21._8_4_ = 0.0 - fStack_94;
    auVar21._12_4_ = 0.0 - (float)auStack_158._68_4_;
    auVar3._4_4_ = auStack_158._80_4_;
    auVar3._0_4_ = fStack_c8;
    auVar3._8_4_ = uStack_c4;
    auVar3._12_4_ = auStack_158._84_4_;
    auVar17 = divps(auVar21,auVar3);
    value_01.fields._0_8_ = auVar15._0_8_;
    value_01.fields._8_8_ = auVar17._0_8_;
    UnityEngine_Material__SetVector(pUVar2,"_ProjInfoRight",value_01,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
  __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
    auVar23._4_4_ = uStack_264;
    auVar23._0_4_ = fStack_268;
    auVar23._8_4_ = uStack_264;
    auVar23._12_4_ = uStack_25c;
    auVar22._8_8_ = auVar23._8_8_;
    auVar22._4_4_ = (undefined4)uStack_238;
    auVar22._0_4_ = fStack_268;
    auVar24._0_12_ = auVar22._0_12_;
    auVar24._12_4_ = uStack_238._4_4_;
    auVar15 = divps(_DAT_00d1ba30,auVar24);
    auVar25._4_4_ = fStack_58 + 1.0;
    auVar25._0_4_ = 1.0 - fStack_258;
    auVar25._8_4_ = 0.0 - fStack_254;
    auVar25._12_4_ = 0.0 - fStack_54;
    auVar4._4_4_ = fStack_48;
    auVar4._0_4_ = (undefined4)uStack_228;
    auVar4._8_4_ = uStack_228._4_4_;
    auVar4._12_4_ = uStack_44;
    auVar17 = divps(auVar25,auVar4);
    value_02.fields._0_8_ = auVar15._0_8_;
    value_02.fields._8_8_ = auVar17._0_8_;
    UnityEngine_Material__SetVector(pUVar2,"_ProjInfo",value_02,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
    ppIStack_278 = ppIStack_1e8;
    _Stack_270.methodMetadataHandle = _Stack_1e0.methodMetadataHandle;
    pIStack_288 = pIStack_1f8;
    pIStack_280 = pIStack_1f0;
    pIStack_298 = pIStack_208;
    pcStack_290 = pcStack_200;
    pIStack_2a8 = pIStack_218;
    pIStack_2a0 = pIStack_210;
    __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
      value.fields._8_8_ = pIStack_210;
      value.fields._0_8_ = pIStack_218;
      value.fields._16_8_ = pIStack_208;
      value.fields._24_8_ = pcStack_200;
      value.fields._32_8_ = pIStack_1f8;
      value.fields._40_8_ = pIStack_1f0;
      value.fields._48_8_ = ppIStack_1e8;
      value.fields._56_8_ = _Stack_1e0.rgctx_data;
      UnityEngine_Material__SetMatrix(pUVar2,"_ProjectionInv",value,(MethodInfo *)0x0);
      pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
      __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__SetTexture
                  (pUVar2,"_Rand",*(UnityEngine_Texture_o **)&(pUVar5->fields).downsample,
                   (MethodInfo *)0x0);
        pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
        __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat
                    (pUVar2,"_Radius",*(float *)((long)&(pUVar5->fields).createdMaterials + 4),
                     (MethodInfo *)0x0);
          pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
          __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
          if (pUVar2 != (UnityEngine_Material_o *)0x0) {
            fVar12 = *(float *)((long)&(pUVar5->fields).createdMaterials + 4);
            UnityEngine_Material__SetFloat(pUVar2,"_Radius2",fVar12 * fVar12,(MethodInfo *)0x0);
            pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
            __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
            if (pUVar2 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetFloat
                        (pUVar2,"_Intensity",*(float *)&(pUVar5->fields).createdMaterials,(MethodInfo *)0x0);
              __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)
                       (pUVar5->fields).aoShader;
              if ((__this != (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0) &&
                 (UnityEngine_Material__SetFloat
                            ((UnityEngine_Material_o *)__this,"_BlurFilterDistance",(pUVar5->fields).radius,
                             (MethodInfo *)0x0), source != (UnityEngine_RenderTexture_o *)0x0)) {
                fVar12 = (float)(*(source->klass->vtable)._5_get_width.methodPtr)
                                          (source,(source->klass->vtable)._5_get_width.method);
                fStack_268 = (float)(*(source->klass->vtable)._7_get_height.methodPtr)
                                              (source,(source->klass->vtable)._7_get_height.method);
                bVar1 = (byte)(pUVar5->fields).blurIterations;
                fStack_258 = fVar12;
                source_00 = (UnityEngine_Texture_o *)
                            UnityEngine_RenderTexture__GetTemporary_4de1e00
                                      ((int)fVar12 >> (bVar1 & 0x1f),(int)fStack_268 >> (bVar1 & 0x1f),
                                       (MethodInfo *)0x0);
                pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
                if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uStack_228 = destination;
                UnityEngine_Graphics__Blit_4dc2a60
                          ((UnityEngine_Texture_o *)source,(UnityEngine_RenderTexture_o *)source_00,pUVar2,0,
                           (MethodInfo *)0x0);
                if (0 < (pUVar5->fields).blurIterations) {
                  pUVar8 = (UnityEngine_Texture_o *)
                           UnityEngine_RenderTexture__GetTemporary_4de1e00
                                     ((int32_t)fStack_258,(int32_t)fStack_268,(MethodInfo *)0x0);
                  pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit_4dc2a60
                            (source_00,(UnityEngine_RenderTexture_o *)pUVar8,pUVar2,4,(MethodInfo *)0x0);
                  UnityEngine_RenderTexture__ReleaseTemporary
                            ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
                  source_00 = pUVar8;
                }
                pUVar5 = pUStack_240;
                __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)
                         (pUStack_240->fields).aoShader;
                bVar11 = __this == (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
                uStack_238 = (UnityEngine_Texture_o *)source;
                if (0 < (int)(pUStack_240->fields).intensity) {
                  iVar10 = 0;
                  do {
                    if (bVar11) goto label_0458727d;
                    UnityEngine_Material__SetVector
                              ((UnityEngine_Material_o *)__this,"_Axis",
                               (UnityEngine_Vector4_o)ZEXT816(0x3f800000),(MethodInfo *)0x0);
                    pUVar8 = (UnityEngine_Texture_o *)
                             UnityEngine_RenderTexture__GetTemporary_4de1e00
                                       ((int32_t)fStack_258,(int32_t)fStack_268,(MethodInfo *)0x0);
                    pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
                    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UnityEngine_Graphics__Blit_4dc2a60
                              (source_00,(UnityEngine_RenderTexture_o *)pUVar8,pUVar2,1,(MethodInfo *)0x0);
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
                    pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
                    __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
                    if (pUVar2 == (UnityEngine_Material_o *)0x0) goto label_0458727d;
                    UnityEngine_Material__SetVector
                              (pUVar2,"_Axis",(UnityEngine_Vector4_o)ZEXT816(0x3f80000000000000),
                               (MethodInfo *)0x0);
                    source_00 = (UnityEngine_Texture_o *)
                                UnityEngine_RenderTexture__GetTemporary_4de1e00
                                          ((int32_t)fStack_258,(int32_t)fStack_268,(MethodInfo *)0x0);
                    UnityEngine_Graphics__Blit_4dc2a60
                              (pUVar8,(UnityEngine_RenderTexture_o *)source_00,
                               (UnityEngine_Material_o *)(pUVar5->fields).aoShader,1,(MethodInfo *)0x0);
                    UnityEngine_RenderTexture__ReleaseTemporary
                              ((UnityEngine_RenderTexture_o *)pUVar8,(MethodInfo *)0x0);
                    iVar10 = iVar10 + 1;
                    __this = (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)
                             (pUVar5->fields).aoShader;
                    bVar11 = __this == (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *)0x0;
                  } while (iVar10 < (int)(pUVar5->fields).intensity);
                }
                if (!bVar11) {
                  UnityEngine_Material__SetTexture
                            ((UnityEngine_Material_o *)__this,"_AOTex",source_00,(MethodInfo *)0x0);
                  pUVar8 = uStack_238;
                  pUVar2 = (UnityEngine_Material_o *)(pUVar5->fields).aoShader;
                  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Graphics__Blit_4dc2a60(pUVar8,uStack_228,pUVar2,2,(MethodInfo *)0x0);
                  UnityEngine_RenderTexture__ReleaseTemporary
                            ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_0458727d:
  il2cpp_runtime_helper_022b2c90();
  (__this->fields).createdMaterials = (System_Collections_Generic_List_Material__o *)0x3e4ccccd3f000000;
  (__this->fields).intensity = 1.4013e-45;
  (__this->fields).radius = 1.25;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&(__this->fields).supportHDRTextures = 1;
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  __this_20 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_20,MethodInfo_List_1_UnityEngine_Material);
  *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported = __this_20;
  il2cpp_runtime_helper_022b4080(&(__this->fields).isSupported);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance___ctor (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o* __this, const MethodInfo* method);
// 0x4587290

void UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance___ctor
               (UnityStandardAssets_ImageEffects_ScreenSpaceAmbientObscurance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  (__this->fields).createdMaterials = (System_Collections_Generic_List_Material__o *)0x3e4ccccd3f000000;
  (__this->fields).intensity = 1.4013e-45;
  (__this->fields).radius = 1.25;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&(__this->fields).supportHDRTextures = 1;
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
  *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).isSupported);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


