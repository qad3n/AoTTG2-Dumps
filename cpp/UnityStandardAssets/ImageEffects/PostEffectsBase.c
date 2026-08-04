// Type: UnityStandardAssets.ImageEffects.PostEffectsBase
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/PostEffectsBase.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/PostEffectsBase.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckShaderAndCreateMaterial
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, UnityEngine_Shader_o* s, UnityEngine_Material_o* m2Create, const MethodInfo* method);
// 0x4576a60

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShaderAndCreateMaterial
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,UnityEngine_Shader_o *s,
          UnityEngine_Material_o *m2Create,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  intptr_t iVar6;
  System_Object_array *pSVar10;
  UnityEngine_Material_c *exists;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long lVar16;
  char cVar17;
  bool_conflict bVar18;
  int32_t iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  UnityEngine_Object_o *x;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar24;
  System_String_array *values;
  System_String_o *pSVar25;
  UnityEngine_Material_o *extraout_RAX;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar26;
  UnityEngine_Texture_o *pUVar27;
  UnityEngine_Texture_o *source;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar28;
  UnityEngine_Material_o *extraout_RAX_00;
  UnityEngine_Material_o *extraout_RAX_01;
  UnityEngine_Material_o *extraout_RAX_02;
  UnityEngine_Material_o *extraout_RAX_03;
  undefined4 extraout_var;
  UnityEngine_Material_o *extraout_RAX_04;
  UnityEngine_Material_o *extraout_RAX_05;
  UnityEngine_Material_o *extraout_RAX_06;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Material_o *extraout_RAX_07;
  MethodInfo *pMVar29;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_RenderTexture_o *dest_00;
  UnityEngine_RenderTexture_o *dest_01;
  UnityEngine_RenderTexture_o *rt;
  UnityEngine_RenderTexture_o *__this_01;
  UnityEngine_RenderTexture_o *__this_02;
  int width;
  UnityStandardAssets_ImageEffects_Bloom_o *source_00;
  uint uVar30;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar31;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar32;
  UnityStandardAssets_ImageEffects_Bloom_o *pUVar33;
  System_String_o *source_01;
  UnityEngine_Material_o *pUVar34;
  UnityEngine_Material_o *pUVar35;
  UnityEngine_Material_o *__this_03;
  UnityEngine_MonoBehaviour_o *__this_04;
  uint height;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar36;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float in_XMM1_Da;
  float in_XMM1_Db;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  UnityEngine_Vector4_o value_03;
  UnityEngine_Vector4_o value_04;
  UnityEngine_Vector4_o value_05;
  UnityEngine_Vector4_o value_06;
  UnityEngine_Vector4_o value_07;
  UnityEngine_Vector4_o value_08;
  UnityEngine_Vector4_o value_09;
  UnityEngine_Vector4_o value_10;
  UnityEngine_Vector4_o value_11;
  UnityStandardAssets_ImageEffects_Bloom_o *local_f0;
  
  value_02.fields.z = in_XMM1_Da;
  value_02.fields.w = in_XMM1_Db;
  if (g_data_057af0e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" on effect ");
    il2cpp_runtime_helper_023445d0(&"Missing shader in ");
    il2cpp_runtime_helper_023445d0(&" is not supported on this platform!");
    il2cpp_runtime_helper_023445d0(&"The shader ");
    g_data_057af0e6 = '\x01';
    value_02.fields.z = in_XMM1_Da;
    value_02.fields.w = in_XMM1_Db;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar31 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
  pUVar33 = (UnityStandardAssets_ImageEffects_Bloom_o *)s;
  bVar18 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)s,(MethodInfo *)0x0);
  if ((char)bVar18 == '\0') {
    pSVar25 = (System_String_o *)
              (*(__this->klass->vtable)._3_ToString.methodPtr)
                        (__this,(__this->klass->vtable)._3_ToString.method);
    pSVar25 = System_String__Concat_3ae5ba0("Missing shader in ",pSVar25,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar25,(MethodInfo *)0x0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    return (UnityEngine_Material_o *)0x0;
  }
  if (s == (UnityEngine_Shader_o *)0x0) {
label_04576dd7:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar18 = UnityEngine_Shader__get_isSupported(s,(MethodInfo *)0x0);
    if ((char)bVar18 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar31 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
      pUVar33 = (UnityStandardAssets_ImageEffects_Bloom_o *)m2Create;
      bVar18 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)m2Create,(MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        if (m2Create == (UnityEngine_Material_o *)0x0) goto label_04576dd7;
        x = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(m2Create,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar18 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)s,(MethodInfo *)0x0);
        if ((char)bVar18 != '\0') {
          return m2Create;
        }
      }
    }
    bVar18 = UnityEngine_Shader__get_isSupported(s,(MethodInfo *)0x0);
    if ((char)bVar18 != '\0') {
      pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar24,s,(MethodInfo *)0x0);
      lVar16 = MethodInfo_Void_Add;
      pUVar33 = *(UnityStandardAssets_ImageEffects_Bloom_o **)&(__this->fields).isSupported;
      pUVar31 = (UnityStandardAssets_ImageEffects_Bloom_o *)s;
      if (pUVar33 != (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) {
        piVar1 = (int32_t *)((long)&(pUVar33->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        pSVar10 = (System_Object_array *)(pUVar33->fields).m_CachedPtr;
        if (pSVar10 != (System_Object_array *)0x0) {
          uVar30 = *(uint *)&(pUVar33->fields).m_CancellationTokenSource;
          pUVar31 = pUVar24;
          if (uVar30 < (uint)pSVar10->max_length) {
            *(uint *)&(pUVar33->fields).m_CancellationTokenSource = uVar30 + 1;
            pUVar33 = (UnityStandardAssets_ImageEffects_Bloom_o *)(pSVar10->m_Items + (int)uVar30);
            pSVar10->m_Items[(int)uVar30] = (Il2CppObject *)pUVar24;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pUVar33,(Il2CppObject *)pUVar24,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          if (pUVar24 != (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) {
            UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)pUVar24,0x34,(MethodInfo *)0x0);
            return (UnityEngine_Material_o *)pUVar24;
          }
        }
      }
      goto label_04576dd7;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
    pUVar31 = (UnityStandardAssets_ImageEffects_Bloom_o *)&g_data_00000005;
    pUVar33 = TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    if (values == (System_String_array *)0x0) goto label_04576dd7;
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "The shader ";
      il2cpp_runtime_helper_022b4080(values->m_Items);
      pUVar31 = (UnityStandardAssets_ImageEffects_Bloom_o *)(s->klass->vtable)._3_ToString.method;
      pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)(*(s->klass->vtable)._3_ToString.methodPtr)();
      pUVar33 = (UnityStandardAssets_ImageEffects_Bloom_o *)s;
      if (1 < (uint)values->max_length) {
        pUVar33 = (UnityStandardAssets_ImageEffects_Bloom_o *)(values->m_Items + 1);
        values->m_Items[1] = (System_String_o *)pUVar24;
        il2cpp_runtime_helper_022b4080();
        pUVar31 = pUVar24;
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = " on effect ";
          il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          pUVar31 = (UnityStandardAssets_ImageEffects_Bloom_o *)(__this->klass->vtable)._3_ToString.method;
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)
                    (*(__this->klass->vtable)._3_ToString.methodPtr)();
          pUVar33 = (UnityStandardAssets_ImageEffects_Bloom_o *)__this;
          if (3 < (uint)values->max_length) {
            pUVar33 = (UnityStandardAssets_ImageEffects_Bloom_o *)(values->m_Items + 3);
            values->m_Items[3] = (System_String_o *)pUVar24;
            il2cpp_runtime_helper_022b4080();
            pUVar31 = pUVar24;
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = " is not supported on this platform!";
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              pSVar25 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Debug__Log((Il2CppObject *)pSVar25,(MethodInfo *)0x0);
              return (UnityEngine_Material_o *)0x0;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af0a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
    il2cpp_runtime_helper_023445d0(&"_TintColor");
    il2cpp_runtime_helper_023445d0(&"_Threshhold");
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    il2cpp_runtime_helper_023445d0(&"_Offsets");
    il2cpp_runtime_helper_023445d0(&"_StretchWidth");
    il2cpp_runtime_helper_023445d0(&"_Saturation");
    g_data_057af0a1 = '\x01';
  }
  source_00 = (UnityStandardAssets_ImageEffects_Bloom_o *)(pUVar33->klass->vtable)._4_CheckResources.method;
  pUVar24 = pUVar33;
  cVar17 = (*(pUVar33->klass->vtable)._4_CheckResources.methodPtr)();
  if (cVar17 == '\0') {
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)pUVar31,dest,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  *(undefined1 *)&(pUVar33->fields).screenBlendMode = 0;
  iVar20 = (pUVar33->fields).tweakMode;
  if (iVar20 == 0) {
    if (pUVar31 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) goto label_04577c14;
    source_00 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
    pUVar26 = pUVar31;
    iVar19 = UnityEngine_RenderTexture__get_format((UnityEngine_RenderTexture_o *)pUVar31,(MethodInfo *)0x0);
    if (iVar19 == 2) {
      source_00 = MethodInfo_Camera_GetComponent_Camera;
      pUVar24 = pUVar33;
      pUVar26 = (UnityStandardAssets_ImageEffects_Bloom_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar33,(MethodInfo_24E7B40 *)MethodInfo_Camera_GetComponent_Camera);
      if (pUVar26 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) goto label_04577c14;
      source_00 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
      bVar18 = UnityEngine_Camera__get_allowHDR((UnityEngine_Camera_o *)pUVar26,(MethodInfo *)0x0);
      *(char *)&(pUVar33->fields).screenBlendMode = (char)bVar18;
      pUVar24 = pUVar26;
      if ((char)bVar18 != '\0') goto label_04576f46;
    }
    else {
      *(undefined1 *)&(pUVar33->fields).screenBlendMode = 0;
    }
label_04576f51:
    cVar17 = '\0';
  }
  else {
    *(bool *)&(pUVar33->fields).screenBlendMode = iVar20 == 1;
    pUVar26 = pUVar24;
    if (iVar20 != 1) goto label_04576f51;
label_04576f46:
    cVar17 = (char)(pUVar33->fields).supportHDRTextures;
    pUVar26 = pUVar24;
  }
  *(char *)&(pUVar33->fields).screenBlendMode = cVar17;
  iVar19 = 1;
  if (cVar17 == '\0') {
    iVar19 = *(int32_t *)((long)&(pUVar33->fields).createdMaterials + 4);
  }
  pUVar24 = pUVar26;
  if (pUVar31 != (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) {
    uVar30 = (uint)(cVar17 == '\0') * 5 + 2;
    iVar20 = (*pUVar31->klass[1]._1.image)(pUVar31,pUVar31->klass[1]._1.gc_desc);
    iVar21 = (*pUVar31->klass[1]._1.byval_arg.data)
                       (pUVar31,*(undefined8 *)&pUVar31->klass[1]._1.byval_arg.bits);
    iVar22 = (*pUVar31->klass[1]._1.image)(pUVar31,pUVar31->klass[1]._1.gc_desc);
    width = (int)(((uint)(iVar22 >> 0x1f) >> 0x1e) + iVar22) >> 2;
    iVar22 = (*pUVar31->klass[1]._1.byval_arg.data)
                       (pUVar31,*(undefined8 *)&pUVar31->klass[1]._1.byval_arg.bits);
    height = (int)(((uint)(iVar22 >> 0x1f) >> 0x1e) + iVar22) >> 2;
    iVar22 = (*pUVar31->klass[1]._1.image)(pUVar31,pUVar31->klass[1]._1.gc_desc);
    iVar23 = (*pUVar31->klass[1]._1.byval_arg.data)
                       (pUVar31,*(undefined8 *)&pUVar31->klass[1]._1.byval_arg.bits);
    pUVar26 = (UnityStandardAssets_ImageEffects_Bloom_o *)
              UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar30,(MethodInfo *)0x0);
    pUVar27 = (UnityEngine_Texture_o *)
              UnityEngine_RenderTexture__GetTemporary_4de1d50
                        (iVar20 / 2,iVar21 / 2,0,uVar30,(MethodInfo *)0x0);
    if ((pUVar33->fields).doHdr < 1) {
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit
                ((UnityEngine_Texture_o *)pUVar31,(UnityEngine_RenderTexture_o *)pUVar27,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit_4dc2a60
                (pUVar27,(UnityEngine_RenderTexture_o *)pUVar26,
                 (UnityEngine_Material_o *)(pUVar33->fields).screenBlendShader,6,(MethodInfo *)0x0);
    }
    else {
      pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).screenBlendShader;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2a60
                ((UnityEngine_Texture_o *)pUVar31,(UnityEngine_RenderTexture_o *)pUVar27,pUVar34,2,
                 (MethodInfo *)0x0);
      source = (UnityEngine_Texture_o *)
               UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar30,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit_4dc2a60
                (pUVar27,(UnityEngine_RenderTexture_o *)source,
                 (UnityEngine_Material_o *)(pUVar33->fields).screenBlendShader,2,(MethodInfo *)0x0);
      UnityEngine_Graphics__Blit_4dc2a60
                (source,(UnityEngine_RenderTexture_o *)pUVar26,
                 (UnityEngine_Material_o *)(pUVar33->fields).screenBlendShader,6,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)source,(MethodInfo *)0x0);
    }
    source_00 = (UnityStandardAssets_ImageEffects_Bloom_o *)(ulong)height;
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)pUVar27,(MethodInfo *)0x0);
    local_f0 = (UnityStandardAssets_ImageEffects_Bloom_o *)
               UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar30,(MethodInfo *)0x0);
    uVar3 = (pUVar33->fields).bloomIntensity;
    uVar7 = (pUVar33->fields).bloomThreshold;
    uVar4 = (pUVar33->fields).bloomThresholdColor.fields.r;
    uVar8 = (pUVar33->fields).bloomThresholdColor.fields.g;
    value_02.fields.z = (float)(pUVar33->fields).quality;
    if (g_data_057af0a5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
      il2cpp_runtime_helper_023445d0(&"_Threshhold");
      g_data_057af0a5 = '\x01';
    }
    value_02.fields.w = 0.0;
    pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).brightPassFilterShader;
    pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
    if (pUVar34 != (UnityEngine_Material_o *)0x0) {
      value.fields.x = (float)uVar3 * value_02.fields.z;
      value.fields.y = (float)uVar7 * value_02.fields.z;
      value.fields.z = value_02.fields.z * (float)uVar4;
      value.fields.w = value_02.fields.z * (float)uVar8;
      UnityEngine_Material__SetVector(pUVar34,(System_String_o *)"_Threshhold",value,(MethodInfo *)0x0);
      pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).brightPassFilterShader;
      value_02.fields.z = value.fields.z;
      value_02.fields.w = value.fields.w;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        value_02.fields.z = value.fields.z;
        value_02.fields.w = value.fields.w;
      }
      value.fields.w = 1.4013e-45;
      UnityEngine_Graphics__Blit_4dc2a60
                ((UnityEngine_Texture_o *)pUVar26,(UnityEngine_RenderTexture_o *)local_f0,pUVar34,1,
                 (MethodInfo *)0x0);
      value.fields.z = (pUVar33->fields).bloomThresholdColor.fields.b;
      if (((int)value.fields.z < 1) || (value.fields.w = 1.4013e-44, 10 < (int)value.fields.z)) {
        (pUVar33->fields).bloomThresholdColor.fields.b = value.fields.w;
      }
      value.fields.z = (float)iVar22 / (float)iVar23;
      iVar22 = 0;
      do {
        while( true ) {
          source_00 = (UnityStandardAssets_ImageEffects_Bloom_o *)(ulong)height;
          value.fields.w = ((float)iVar22 * 0.25 + 1.0) * (float)(pUVar33->fields).hdr;
          pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)
                    UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar30,(MethodInfo *)0x0);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          value_02.fields.z = 0.0;
          value_02.fields.w = 0.0;
          UnityEngine_Material__SetVector
                    (pUVar34,(System_String_o *)"_Offsets",
                     (UnityEngine_Vector4_o)(ZEXT416((uint)(value.fields.w * 0.001953125)) << 0x20),
                     (MethodInfo *)0x0);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)local_f0,(UnityEngine_RenderTexture_o *)pUVar28,pUVar34,4,
                     (MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)local_f0,(MethodInfo *)0x0);
          source_00 = (UnityStandardAssets_ImageEffects_Bloom_o *)(ulong)height;
          local_f0 = (UnityStandardAssets_ImageEffects_Bloom_o *)
                     UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar30,(MethodInfo *)0x0);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          value_02.fields.z = 0.0;
          value_02.fields.w = 0.0;
          UnityEngine_Material__SetVector
                    (pUVar34,(System_String_o *)"_Offsets",
                     (UnityEngine_Vector4_o)ZEXT416((uint)((value.fields.w / value.fields.z) * 0.001953125)),
                     (MethodInfo *)0x0);
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar28,(UnityEngine_RenderTexture_o *)local_f0,
                     (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader,4,(MethodInfo *)0x0);
          source_00 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)pUVar28,(MethodInfo *)0x0);
          pUVar32 = (UnityStandardAssets_ImageEffects_Bloom_o *)(ulong)height;
          if (0 < (pUVar33->fields).doHdr) break;
label_045772cc:
          iVar22 = iVar22 + 1;
          if ((int)(pUVar33->fields).bloomThresholdColor.fields.b <= iVar22) goto label_045774c7;
        }
        if (iVar22 != 0) {
          pUVar24 = pUVar28;
          if (pUVar26 != (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) {
            UnityEngine_RenderTexture__MarkRestoreExpected
                      ((UnityEngine_RenderTexture_o *)pUVar26,(MethodInfo *)0x0);
            pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).screenBlendShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            source_00 = pUVar26;
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)local_f0,(UnityEngine_RenderTexture_o *)pUVar26,pUVar34,10,
                       (MethodInfo *)0x0);
            goto label_045772cc;
          }
          goto label_04577c14;
        }
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0
                  ((UnityEngine_RenderTexture_o *)pUVar26,(MethodInfo *)0x0);
        value_02.fields.z = (float)g_data_00d1ca10;
        value_02.fields.w = g_data_00d1ca10._4_4_;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = g_data_00d1ca10;
        UnityEngine_GL__Clear_4dc38b0(0,1,(UnityEngine_Color_o)(auVar12 << 0x40),(MethodInfo *)0x0);
        source_00 = pUVar26;
        UnityEngine_Graphics__Blit
                  ((UnityEngine_Texture_o *)local_f0,(UnityEngine_RenderTexture_o *)pUVar26,(MethodInfo *)0x0)
        ;
        iVar22 = 1;
      } while (1 < (int)(pUVar33->fields).bloomThresholdColor.fields.b);
label_045774c7:
      pMVar29 = (MethodInfo *)(ulong)uVar30;
      if (0 < (pUVar33->fields).doHdr) {
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__SetRenderTarget_4dc2ef0
                  ((UnityEngine_RenderTexture_o *)local_f0,(MethodInfo *)0x0);
        value_02.fields.z = (float)g_data_00d1ca10;
        value_02.fields.w = g_data_00d1ca10._4_4_;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = g_data_00d1ca10;
        UnityEngine_GL__Clear_4dc38b0(0,1,(UnityEngine_Color_o)(auVar13 << 0x40),(MethodInfo *)0x0);
        source_00 = local_f0;
        UnityEngine_Graphics__Blit_4dc2a60
                  ((UnityEngine_Texture_o *)pUVar26,(UnityEngine_RenderTexture_o *)local_f0,
                   (UnityEngine_Material_o *)(pUVar33->fields).screenBlendShader,6,(MethodInfo *)0x0);
      }
      value.fields.w = (float)(pUVar33->fields).lensflareMode;
      if (**(float **)(TypeInfo_Mathf + 0xb8) <= value.fields.w &&
          value.fields.w != **(float **)(TypeInfo_Mathf + 0xb8)) {
        pUVar28 = (UnityStandardAssets_ImageEffects_Bloom_o *)
                  UnityEngine_RenderTexture__GetTemporary_4de1d50(width,height,0,uVar30,(MethodInfo *)0x0);
        if ((pUVar33->fields).hollywoodFlareBlurIterations == 0) {
          source_00 = local_f0;
          pUVar24 = pUVar33;
          UnityStandardAssets_ImageEffects_Bloom__BrightFilter
                    (pUVar33,(pUVar33->fields).hollyStretchWidth,(UnityEngine_RenderTexture_o *)local_f0,
                     (UnityEngine_RenderTexture_o *)pUVar28,pMVar29);
          value.fields.z = extraout_XMM0_Da_01;
          if (0 < (pUVar33->fields).doHdr) {
            if (pUVar26 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) goto label_04577c14;
            pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
            source_00 = *(UnityStandardAssets_ImageEffects_Bloom_o **)&pUVar26->klass[1]._1.byval_arg.bits;
            pUVar24 = pUVar26;
            iVar22 = (*pUVar26->klass[1]._1.byval_arg.data)();
            if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
            UnityEngine_Material__SetVector
                      (pUVar34,(System_String_o *)"_Offsets",
                       (UnityEngine_Vector4_o)(ZEXT416((uint)(1.5 / (float)iVar22)) << 0x20),(MethodInfo *)0x0
                      );
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__SetRenderTarget_4dc2ef0
                      ((UnityEngine_RenderTexture_o *)pUVar26,(MethodInfo *)0x0);
            value_02.fields.z = (float)g_data_00d1ca10;
            value_02.fields.w = g_data_00d1ca10._4_4_;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = g_data_00d1ca10;
            UnityEngine_GL__Clear_4dc38b0(0,1,(UnityEngine_Color_o)(auVar14 << 0x40),(MethodInfo *)0x0);
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)pUVar28,(UnityEngine_RenderTexture_o *)pUVar26,
                       (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader,4,(MethodInfo *)0x0);
            pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
            source_00 = pUVar26->klass[1]._1.gc_desc;
            pUVar24 = pUVar26;
            iVar22 = (*pUVar26->klass[1]._1.image)();
            if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
            UnityEngine_Material__SetVector
                      (pUVar34,(System_String_o *)"_Offsets",
                       (UnityEngine_Vector4_o)ZEXT416((uint)(1.5 / (float)iVar22)),(MethodInfo *)0x0);
            UnityEngine_Graphics__SetRenderTarget_4dc2ef0
                      ((UnityEngine_RenderTexture_o *)pUVar28,(MethodInfo *)0x0);
            value_02.fields.z = (float)g_data_00d1ca10;
            value_02.fields.w = g_data_00d1ca10._4_4_;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = g_data_00d1ca10;
            UnityEngine_GL__Clear_4dc38b0(0,1,(UnityEngine_Color_o)(auVar15 << 0x40),(MethodInfo *)0x0);
            pMVar29 = (MethodInfo *)&g_data_00000004;
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)pUVar26,(UnityEngine_RenderTexture_o *)pUVar28,
                       (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader,4,(MethodInfo *)0x0);
            value.fields.z = extraout_XMM0_Da_02;
          }
          UnityStandardAssets_ImageEffects_Bloom__Vignette
                    (pUVar33,value.fields.z,(UnityEngine_RenderTexture_o *)pUVar28,
                     (UnityEngine_RenderTexture_o *)pUVar28,pMVar29);
          UnityStandardAssets_ImageEffects_Bloom__BlendFlares
                    (pUVar33,(UnityEngine_RenderTexture_o *)pUVar28,(UnityEngine_RenderTexture_o *)local_f0,
                     pMVar29);
        }
        else {
          value_00.fields.x = cosf((float)(pUVar33->fields).bloomBlurIterations);
          value.fields.w = sinf((float)(pUVar33->fields).bloomBlurIterations);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          source_00 = pUVar32;
          if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          fVar36 = (pUVar33->fields).flareRotation;
          value_00.fields.y = value.fields.w;
          value_00.fields.z = 0.0;
          value_00.fields.w = 0.0;
          value_02.fields.z = 0.0;
          value_02.fields.w = 0.0;
          source_00 = "_Offsets";
          UnityEngine_Material__SetVector(pUVar34,(System_String_o *)"_Offsets",value_00,(MethodInfo *)0x0);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          value_01.fields.y = 1.0;
          value_01.fields.x = (pUVar33->fields).hollyStretchWidth;
          value_01.fields.z = 0.0;
          value_01.fields.w = 0.0;
          value_02.fields.z = 0.0;
          value_02.fields.w = 0.0;
          source_00 = "_Threshhold";
          UnityEngine_Material__SetVector(pUVar34,(System_String_o *)"_Threshhold",value_01,(MethodInfo *)0x0);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          value_02.fields.w = (pUVar33->fields).flareColorA.fields.g;
          uVar5 = (pUVar33->fields).lensflareThreshold;
          uVar9 = (pUVar33->fields).lensFlareSaturation;
          fVar2 = (float)(pUVar33->fields).lensflareMode;
          value_02.fields.x = (float)uVar5 * value_02.fields.w * fVar2;
          value_02.fields.y = (float)uVar9 * value_02.fields.w * fVar2;
          value_02.fields.z = (pUVar33->fields).flareColorA.fields.r * value_02.fields.w * fVar2;
          value_02.fields.w = value_02.fields.w * value_02.fields.w * fVar2;
          source_00 = "_TintColor";
          UnityEngine_Material__SetVector(pUVar34,(System_String_o *)"_TintColor",value_02,(MethodInfo *)0x0);
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)(pUVar33->fields).blurAndFlaresShader;
          if ((pUVar24 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) ||
             (source_00 = "_Saturation",
             UnityEngine_Material__SetFloat
                       ((UnityEngine_Material_o *)pUVar24,(System_String_o *)"_Saturation",
                        (pUVar33->fields).lensflareIntensity,(MethodInfo *)0x0),
             pUVar26 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0)) goto label_04577c14;
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)pUVar26,(MethodInfo *)0x0);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          source_00 = pUVar26;
          pUVar24 = pUVar28;
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar28,(UnityEngine_RenderTexture_o *)pUVar26,pUVar34,2,
                     (MethodInfo *)0x0);
          if (pUVar28 == (UnityStandardAssets_ImageEffects_Bloom_o *)0x0) goto label_04577c14;
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)pUVar28,(MethodInfo *)0x0);
          source_00 = pUVar28;
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar26,(UnityEngine_RenderTexture_o *)pUVar28,
                     (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader,3,(MethodInfo *)0x0);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          value_02.fields.z = (fVar36 / value.fields.z) * 0.001953125;
          value_03.fields.x = value_00.fields.x * value_02.fields.z;
          value_03.fields.y = value_02.fields.z * value.fields.w;
          value_03.fields.z = 0.0;
          value_03.fields.w = 0.0;
          value_02.fields.z = 0.0;
          value_02.fields.w = 0.0;
          source_00 = "_Offsets";
          UnityEngine_Material__SetVector(pUVar34,(System_String_o *)"_Offsets",value_03,(MethodInfo *)0x0);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          UnityEngine_Material__SetFloat
                    (pUVar34,"_StretchWidth",(pUVar33->fields).flareRotation,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)pUVar26,(MethodInfo *)0x0);
          source_00 = pUVar26;
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar28,(UnityEngine_RenderTexture_o *)pUVar26,
                     (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader,1,(MethodInfo *)0x0);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          fVar36 = (pUVar33->fields).flareRotation;
          UnityEngine_Material__SetFloat(pUVar34,"_StretchWidth",fVar36 + fVar36,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)pUVar28,(MethodInfo *)0x0);
          source_00 = pUVar28;
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar26,(UnityEngine_RenderTexture_o *)pUVar28,
                     (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader,1,(MethodInfo *)0x0);
          pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
          pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
          if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
          iVar22 = 0;
          UnityEngine_Material__SetFloat
                    (pUVar34,"_StretchWidth",(pUVar33->fields).flareRotation * 4.0,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__DiscardContents_4ddf360
                    ((UnityEngine_RenderTexture_o *)pUVar26,(MethodInfo *)0x0);
          pMVar29 = (MethodInfo *)0x1;
          source_00 = pUVar26;
          UnityEngine_Graphics__Blit_4dc2a60
                    ((UnityEngine_Texture_o *)pUVar28,(UnityEngine_RenderTexture_o *)pUVar26,
                     (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader,1,(MethodInfo *)0x0);
          fVar36 = extraout_XMM0_Da;
          if (0 < (int)(pUVar33->fields).bloomThresholdColor.fields.a) {
            do {
              pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
              pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
              if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
              value_02.fields.z = (pUVar33->fields).flareRotation;
              value_02.fields.z = ((value_02.fields.z + value_02.fields.z) / value.fields.z) * 0.001953125;
              value_04.fields.x = value_00.fields.x * value_02.fields.z;
              value_02.fields.z = value_02.fields.z * value.fields.w;
              value_05.fields.y = value_02.fields.z;
              value_05.fields.x = value_04.fields.x;
              value_04.fields.y = value_02.fields.z;
              value_04.fields.z = 0.0;
              value_04.fields.w = 0.0;
              value_02.fields.z = 0.0;
              value_02.fields.w = 0.0;
              UnityEngine_Material__SetVector
                        (pUVar34,(System_String_o *)"_Offsets",value_04,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__DiscardContents_4ddf360
                        ((UnityEngine_RenderTexture_o *)pUVar28,(MethodInfo *)0x0);
              pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
              if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              source_00 = pUVar28;
              UnityEngine_Graphics__Blit_4dc2a60
                        ((UnityEngine_Texture_o *)pUVar26,(UnityEngine_RenderTexture_o *)pUVar28,pUVar34,4,
                         (MethodInfo *)0x0);
              pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader;
              pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
              if (pUVar34 == (UnityEngine_Material_o *)0x0) goto label_04577c14;
              value_05.fields.z = 0.0;
              value_05.fields.w = 0.0;
              value_02.fields.z = 0.0;
              value_02.fields.w = 0.0;
              UnityEngine_Material__SetVector
                        (pUVar34,(System_String_o *)"_Offsets",value_05,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__DiscardContents_4ddf360
                        ((UnityEngine_RenderTexture_o *)pUVar26,(MethodInfo *)0x0);
              pMVar29 = (MethodInfo *)&g_data_00000004;
              source_00 = pUVar26;
              UnityEngine_Graphics__Blit_4dc2a60
                        ((UnityEngine_Texture_o *)pUVar28,(UnityEngine_RenderTexture_o *)pUVar26,
                         (UnityEngine_Material_o *)(pUVar33->fields).blurAndFlaresShader,4,(MethodInfo *)0x0);
              iVar22 = iVar22 + 1;
              fVar36 = extraout_XMM0_Da_00;
            } while (iVar22 < (int)(pUVar33->fields).bloomThresholdColor.fields.a);
          }
          if ((pUVar33->fields).hollywoodFlareBlurIterations != 1) {
            UnityStandardAssets_ImageEffects_Bloom__Vignette
                      (pUVar33,fVar36,(UnityEngine_RenderTexture_o *)pUVar26,
                       (UnityEngine_RenderTexture_o *)pUVar28,pMVar29);
            UnityStandardAssets_ImageEffects_Bloom__BlendFlares
                      (pUVar33,(UnityEngine_RenderTexture_o *)pUVar28,(UnityEngine_RenderTexture_o *)pUVar26,
                       pMVar29);
          }
          UnityStandardAssets_ImageEffects_Bloom__AddTo
                    (pUVar33,1.0,(UnityEngine_RenderTexture_o *)pUVar26,
                     (UnityEngine_RenderTexture_o *)local_f0,pMVar29);
        }
        source_00 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
        UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)pUVar28,(MethodInfo *)0x0);
      }
      pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).screenBlendShader;
      pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
      if (pUVar34 != (UnityEngine_Material_o *)0x0) {
        source_00 = "_Intensity";
        UnityEngine_Material__SetFloat
                  (pUVar34,(System_String_o *)"_Intensity",(pUVar33->fields).sepBlurSpread,(MethodInfo *)0x0);
        pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).screenBlendShader;
        pUVar24 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
        if (pUVar34 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetTexture
                    (pUVar34,"_ColorBuffer",(UnityEngine_Texture_o *)pUVar31,(MethodInfo *)0x0);
          if ((pUVar33->fields).doHdr < 1) {
            pUVar34 = (UnityEngine_Material_o *)(pUVar33->fields).screenBlendShader;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2a60
                      ((UnityEngine_Texture_o *)local_f0,dest,pUVar34,iVar19,(MethodInfo *)0x0);
          }
          else {
            pUVar27 = (UnityEngine_Texture_o *)
                      UnityEngine_RenderTexture__GetTemporary_4de1d50
                                (iVar20 / 2,iVar21 / 2,0,uVar30,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit
                      ((UnityEngine_Texture_o *)local_f0,(UnityEngine_RenderTexture_o *)pUVar27,
                       (MethodInfo *)0x0);
            UnityEngine_Graphics__Blit_4dc2a60
                      (pUVar27,dest,(UnityEngine_Material_o *)(pUVar33->fields).screenBlendShader,iVar19,
                       (MethodInfo *)0x0);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)pUVar27,(MethodInfo *)0x0);
          }
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)pUVar26,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__ReleaseTemporary
                    ((UnityEngine_RenderTexture_o *)local_f0,(MethodInfo *)0x0);
          return extraout_RAX_00;
        }
      }
    }
  }
label_04577c14:
  uVar11 = il2cpp_runtime_helper_022b2c90();
  pUVar33 = source_00;
  if (g_data_057af0a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Threshhold");
    g_data_057af0a5 = '\x01';
  }
  pUVar34 = (UnityEngine_Material_o *)(pUVar24->fields).brightPassFilterShader;
  if (pUVar34 != (UnityEngine_Material_o *)0x0) {
    value_06.fields.w = value_02.fields.w;
    value_06.fields.z = value_02.fields.z;
    value_06.fields.x = (float)(int)uVar11;
    value_06.fields.y = (float)(int)((ulong)uVar11 >> 0x20);
    UnityEngine_Material__SetVector(pUVar34,(System_String_o *)"_Threshhold",value_06,(MethodInfo *)0x0);
    pUVar34 = (UnityEngine_Material_o *)(pUVar24->fields).brightPassFilterShader;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60((UnityEngine_Texture_o *)source_00,dest_00,pUVar34,1,(MethodInfo *)0x0)
    ;
    return extraout_RAX_01;
  }
  value_07.fields.x = il2cpp_runtime_helper_022b2c90();
  pUVar31 = pUVar33;
  if (g_data_057af0a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Threshhold");
    g_data_057af0a4 = '\x01';
  }
  pUVar35 = (UnityEngine_Material_o *)pUVar34[10].fields.m_CachedPtr;
  if (pUVar35 != (UnityEngine_Material_o *)0x0) {
    value_07.fields.y = (float)value_07.fields.x;
    value_07.fields.w = (float)value_07.fields.x;
    value_07.fields.z = (float)value_07.fields.x;
    UnityEngine_Material__SetVector(pUVar35,(System_String_o *)"_Threshhold",value_07,(MethodInfo *)0x0);
    pUVar34 = (UnityEngine_Material_o *)pUVar34[10].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60((UnityEngine_Texture_o *)pUVar33,dest_01,pUVar34,0,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_ColorBuffer");
    g_data_057af0a6 = '\x01';
  }
  exists = pUVar35[8].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar25 = (System_String_o *)0x0;
  bVar18 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar18 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar18 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar31,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
    if ((char)bVar18 == '\0') {
      return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar18);
    }
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__SetRenderTarget_4dc2ef0(rt,(MethodInfo *)0x0);
    UnityEngine_GL__Clear_4dc38b0
              (0,1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)pUVar31,rt,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
  pUVar34 = pUVar35[9].monitor;
  if ((pUVar34 != (UnityEngine_Material_o *)0x0) &&
     (pSVar25 = "_ColorBuffer",
     UnityEngine_Material__SetTexture
               (pUVar34,"_ColorBuffer",(UnityEngine_Texture_o *)pUVar35[8].klass,(MethodInfo *)0x0),
     rt != (UnityEngine_RenderTexture_o *)0x0)) {
    UnityEngine_RenderTexture__MarkRestoreExpected(rt,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar18 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar31,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
    pUVar33 = (UnityStandardAssets_ImageEffects_Bloom_o *)0x0;
    if ((char)bVar18 == '\0') {
      pUVar33 = pUVar31;
    }
    pUVar34 = pUVar35[9].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar30 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar31,(UnityEngine_Object_o *)rt,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60
              ((UnityEngine_Texture_o *)pUVar33,rt,pUVar34,(uVar30 & 0xff) * 4 + 3,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  source_01 = pSVar25;
  if (g_data_057af0a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"colorD");
    il2cpp_runtime_helper_023445d0(&"colorB");
    il2cpp_runtime_helper_023445d0(&"colorA");
    il2cpp_runtime_helper_023445d0(&"colorC");
    g_data_057af0a3 = '\x01';
  }
  pUVar35 = (UnityEngine_Material_o *)pUVar34[8].fields.m_CachedPtr;
  __this_03 = (UnityEngine_Material_o *)0x0;
  if (pUVar35 != (UnityEngine_Material_o *)0x0) {
    value_02.fields.z = *(float *)((long)&pUVar34[4].fields.m_CachedPtr + 4);
    value_08.fields.x = SUB84(pUVar34[5].monitor,0) * value_02.fields.z;
    value_08.fields.y = (float)((ulong)pUVar34[5].monitor >> 0x20) * value_02.fields.z;
    iVar6 = pUVar34[5].fields.m_CachedPtr;
    value_08.fields.z = (float)iVar6 * value_02.fields.z;
    value_08.fields.w = (float)((ulong)iVar6 >> 0x20) * value_02.fields.z;
    source_01 = "colorA";
    UnityEngine_Material__SetVector(pUVar35,"colorA",value_08,(MethodInfo *)0x0);
    pUVar35 = (UnityEngine_Material_o *)pUVar34[8].fields.m_CachedPtr;
    __this_03 = (UnityEngine_Material_o *)0x0;
    if (pUVar35 != (UnityEngine_Material_o *)0x0) {
      value_02.fields.z = *(float *)((long)&pUVar34[4].fields.m_CachedPtr + 4);
      value_09.fields.x = SUB84(pUVar34[6].klass,0) * value_02.fields.z;
      value_09.fields.y = (float)((ulong)pUVar34[6].klass >> 0x20) * value_02.fields.z;
      value_09.fields.z = SUB84(pUVar34[6].monitor,0) * value_02.fields.z;
      value_09.fields.w = (float)((ulong)pUVar34[6].monitor >> 0x20) * value_02.fields.z;
      source_01 = "colorB";
      UnityEngine_Material__SetVector(pUVar35,"colorB",value_09,(MethodInfo *)0x0);
      pUVar35 = (UnityEngine_Material_o *)pUVar34[8].fields.m_CachedPtr;
      __this_03 = (UnityEngine_Material_o *)0x0;
      if (pUVar35 != (UnityEngine_Material_o *)0x0) {
        iVar6 = pUVar34[6].fields.m_CachedPtr;
        value_02.fields.z = *(float *)((long)&pUVar34[4].fields.m_CachedPtr + 4);
        value_10.fields.x = (float)iVar6 * value_02.fields.z;
        value_10.fields.y = (float)((ulong)iVar6 >> 0x20) * value_02.fields.z;
        value_10.fields.z = SUB84(pUVar34[7].klass,0) * value_02.fields.z;
        value_10.fields.w = (float)((ulong)pUVar34[7].klass >> 0x20) * value_02.fields.z;
        source_01 = "colorC";
        UnityEngine_Material__SetVector(pUVar35,"colorC",value_10,(MethodInfo *)0x0);
        __this_03 = (UnityEngine_Material_o *)pUVar34[8].fields.m_CachedPtr;
        if (__this_03 != (UnityEngine_Material_o *)0x0) {
          value_02.fields.z = *(float *)((long)&pUVar34[4].fields.m_CachedPtr + 4);
          value_11.fields.x = SUB84(pUVar34[7].monitor,0) * value_02.fields.z;
          value_11.fields.y = (float)((ulong)pUVar34[7].monitor >> 0x20) * value_02.fields.z;
          iVar6 = pUVar34[7].fields.m_CachedPtr;
          value_11.fields.z = (float)iVar6 * value_02.fields.z;
          value_11.fields.w = (float)((ulong)iVar6 >> 0x20) * value_02.fields.z;
          source_01 = "colorD";
          UnityEngine_Material__SetVector(__this_03,"colorD",value_11,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_RenderTexture__MarkRestoreExpected(__this_01,(MethodInfo *)0x0);
            pUVar34 = (UnityEngine_Material_o *)pUVar34[8].fields.m_CachedPtr;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__Blit_4dc2ad0
                      ((UnityEngine_Texture_o *)pSVar25,__this_01,pUVar34,(MethodInfo *)0x0);
            return extraout_RAX_05;
          }
        }
      }
    }
  }
  value_02.fields.z = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Intensity");
    g_data_057af0a2 = '\x01';
  }
  __this_04 = __this_03[9].monitor;
  if ((__this_04 != (UnityEngine_MonoBehaviour_o *)0x0) &&
     (UnityEngine_Material__SetFloat
                ((UnityEngine_Material_o *)__this_04,(System_String_o *)"_Intensity",value_02.fields.z,
                 (MethodInfo *)0x0), __this_02 != (UnityEngine_RenderTexture_o *)0x0)) {
    UnityEngine_RenderTexture__MarkRestoreExpected(__this_02,(MethodInfo *)0x0);
    pUVar34 = __this_03[9].monitor;
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2a60
              ((UnityEngine_Texture_o *)source_01,__this_02,pUVar34,9,(MethodInfo *)0x0);
    return extraout_RAX_06;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)&__this_04[1].fields.m_CachedPtr + 4) = 1;
  __this_04[2].klass = (UnityEngine_MonoBehaviour_c *)0x140200000;
  __this_04[2].monitor = (void *)0x3f0000003f000000;
  *(undefined4 *)&__this_04[2].fields.m_CachedPtr = 0x3f800000;
  *(undefined4 *)((long)&__this_04[2].fields.m_CachedPtr + 4) = 0x3f800000;
  *(undefined4 *)&__this_04[2].fields.m_CancellationTokenSource = 0x3f800000;
  *(undefined4 *)((long)&__this_04[2].fields.m_CancellationTokenSource + 4) = 0x3f800000;
  __this_04[3].klass = (UnityEngine_MonoBehaviour_c *)0x200000002;
  *(undefined8 *)((long)&__this_04[3].monitor + 4) = 0x4020000000000001;
  __this_04[3].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3f4000003e99999a;
  __this_04[4].klass = (UnityEngine_MonoBehaviour_c *)0x3ecccccd3ecccccd;
  __this_04[4].monitor = (void *)0x3f4000003f4ccccd;
  *(undefined4 *)&__this_04[4].fields.m_CachedPtr = 0x3ecccccd;
  *(undefined8 *)((long)&__this_04[4].fields.m_CachedPtr + 4) = 0x3f4ccccd3f4ccccd;
  *(undefined8 *)((long)&__this_04[4].fields.m_CancellationTokenSource + 4) = 0x3f4ccccd3f400000;
  *(undefined4 *)((long)&__this_04[5].klass + 4) = 0x3ecccccd;
  *(undefined4 *)&__this_04[5].monitor = 0x3f4ccccd;
  *(undefined4 *)((long)&__this_04[5].monitor + 4) = 0x3f400000;
  *(undefined4 *)&__this_04[5].fields.m_CachedPtr = 0x3f4ccccd;
  *(undefined8 *)((long)&__this_04[5].fields.m_CachedPtr + 4) = 0x3ecccccd;
  *(undefined4 *)((long)&__this_04[5].fields.m_CancellationTokenSource + 4) = 0x3f400000;
  if (g_data_057af0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    g_data_057af0ed = '\x01';
  }
  *(undefined1 *)&__this_04[1].klass = 1;
  *(undefined1 *)((long)&__this_04[1].klass + 2) = 1;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_Material);
  __this_04[1].monitor = __this_00;
  il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
  return extraout_RAX_07;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CreateMaterial
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, UnityEngine_Shader_o* s, UnityEngine_Material_o* m2Create, const MethodInfo* method);
// 0x4575fb0

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_PostEffectsBase__CreateMaterial
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,UnityEngine_Shader_o *s,
          UnityEngine_Material_o *m2Create,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar6;
  UnityEngine_Object_o *__this_01;
  UnityEngine_Material_o *extraout_RAX;
  
  if (g_data_057af0e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Missing shader in ");
    g_data_057af0e7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)s,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar6 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    pSVar6 = System_String__Concat_3ae5ba0("Missing shader in ",pSVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    return (UnityEngine_Material_o *)0x0;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (System_Collections_Generic_List_object__o *)m2Create;
  bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)m2Create,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_045760ff:
    if (s == (UnityEngine_Shader_o *)0x0) goto label_045761bf;
  }
  else {
    if (m2Create == (UnityEngine_Material_o *)0x0) goto label_045761bf;
    __this_00 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Material__get_shader(m2Create,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)s,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_045760ff;
    if (s == (UnityEngine_Shader_o *)0x0) goto label_045761bf;
    bVar5 = UnityEngine_Shader__get_isSupported(s,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return m2Create;
    }
  }
  bVar5 = UnityEngine_Shader__get_isSupported(s,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return (UnityEngine_Material_o *)0x0;
  }
  __this_01 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor((UnityEngine_Material_o *)__this_01,s,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        __this_00 = (System_Collections_Generic_List_object__o *)(pSVar3->m_Items + (int)uVar2);
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
        il2cpp_runtime_helper_022b4080();
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,(Il2CppObject *)__this_01,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      if (__this_01 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_hideFlags(__this_01,0x34,(MethodInfo *)0x0);
        return (UnityEngine_Material_o *)__this_01;
      }
    }
  }
label_045761bf:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,0,(MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this_00->fields)._syncRoot + 2) = 0;
  return extraout_RAX;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$OnEnable
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__OnEnable (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x4584c40

void UnityStandardAssets_ImageEffects_PostEffectsBase__OnEnable
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$OnDestroy
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__OnDestroy (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x4584c50

void UnityStandardAssets_ImageEffects_PostEffectsBase__OnDestroy
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  UnityStandardAssets_ImageEffects_PostEffectsBase__RemoveCreatedMaterials(__this,method);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$RemoveCreatedMaterials
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__RemoveCreatedMaterials (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x4584c60

void UnityStandardAssets_ImageEffects_PostEffectsBase__RemoveCreatedMaterials
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  UnityEngine_Object_o *obj;
  UnityEngine_Behaviour_o *__this_00;
  undefined1 uVar5;
  
  if (g_data_057af0e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0e8 = '\x01';
  }
  pSVar2 = *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported;
  if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    while( true ) {
      if (iVar1 < 1) {
        return;
      }
      obj = (UnityEngine_Object_o *)System_Collections_Generic_List_object___get_Item(pSVar2,0,MethodInfo_Material_get_Item);
      pSVar2 = *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported;
      if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) break;
      System_Collections_Generic_List_object___RemoveAt(pSVar2,0,MethodInfo_Void_RemoveAt);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      pSVar2 = *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported;
      if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) break;
      iVar1 = (pSVar2->fields)._size;
    }
  }
  __this_00 = (UnityEngine_Behaviour_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
  }
  *(undefined1 *)((long)&__this_00[1].monitor + 2) = 1;
  uVar5 = 0;
  bVar3 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&__this_00[1].monitor = (char)bVar3;
  iVar4 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar4) {
    bVar3 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar5 = (undefined1)bVar3;
  }
  *(undefined1 *)((long)&__this_00[1].monitor + 1) = uVar5;
  bVar3 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    UnityEngine_Behaviour__set_enabled(__this_00,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&__this_00[1].monitor + 2) = 0;
  }
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckSupport
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x4584d40

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  undefined8 unaff_RBX;
  undefined1 uVar4;
  
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  uVar4 = 0;
  bVar1 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&(__this->fields).supportHDRTextures = (char)bVar1;
  iVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar2) {
    bVar1 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar4 = (undefined1)bVar1;
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1) = uVar4;
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  bVar3 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if ((char)bVar1 == '\0') {
    bVar3 = 0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  return bVar3;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckResources
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__CheckResources (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x4584dc0

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckResources
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined8 extraout_RAX;
  
  if (g_data_057af0e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&" should be overwritten.");
    il2cpp_runtime_helper_023445d0(&"CheckResources () for ");
    g_data_057af0e9 = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._3_ToString.methodPtr)(__this,(__this->klass->vtable)._3_ToString.method)
  ;
  pSVar1 = System_String__Concat_3af7150("CheckResources () for ",pSVar1," should be overwritten.",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return (bool_conflict)
         CONCAT71((int7)((ulong)extraout_RAX >> 8),
                  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2));
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__Start (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x457e6d0

void UnityStandardAssets_ImageEffects_PostEffectsBase__Start
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._4_CheckResources.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_CheckResources.method,in_RDX,vtableDispatch);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckSupport
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, bool needDepth, const MethodInfo* method);
// 0x4575ed0

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport_4475ed0
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,bool_conflict needDepth,
          MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  long lVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  bool_conflict bVar6;
  uint uVar7;
  bool_conflict extraout_EAX;
  UnityEngine_Camera_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_String_o *pSVar8;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_object__o *exists;
  undefined1 uVar9;
  MethodInfo_24E7B40 *exists_00;
  undefined8 unaff_R14;
  
  if (g_data_057af0ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    g_data_057af0ea = '\x01';
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 1;
  uVar9 = 0;
  bVar4 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(2,(MethodInfo *)0x0);
  *(char *)&(__this->fields).supportHDRTextures = (char)bVar4;
  iVar5 = UnityEngine_SystemInfo__get_graphicsShaderLevel((MethodInfo *)0x0);
  if (0x31 < iVar5) {
    bVar4 = UnityEngine_SystemInfo__get_supportsComputeShaders((MethodInfo *)0x0);
    uVar9 = (undefined1)bVar4;
  }
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1) = uVar9;
  bVar4 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_04575f7f:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
    return 0;
  }
  bVar4 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if ((char)needDepth == '\0') {
    return bVar4;
  }
  bVar6 = UnityEngine_SystemInfo__SupportsRenderTextureFormat(1,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') goto label_04575f7f;
  exists_00 = MethodInfo_Camera_GetComponent_Camera;
  __this_00 = (UnityEngine_Camera_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Camera_GetComponent_Camera);
  if (__this_00 != (UnityEngine_Camera_o *)0x0) {
    uVar7 = UnityEngine_Camera__get_depthTextureMode(__this_00,(MethodInfo *)0x0);
    UnityEngine_Camera__set_depthTextureMode(__this_00,uVar7 | 1,(MethodInfo *)0x0);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Missing shader in ");
    g_data_057af0e7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists_00,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pSVar8 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    pSVar8 = System_String__Concat_3ae5ba0("Missing shader in ",pSVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (System_Collections_Generic_List_object__o *)0x0;
    UnityEngine_Debug__Log((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    goto label_045761b2;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = exists;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_045760ff:
    if (exists_00 == (MethodInfo_24E7B40 *)0x0) goto label_045761bf;
  }
  else {
    if (exists == (System_Collections_Generic_List_object__o *)0x0) goto label_045761bf;
    __this_01 = (System_Collections_Generic_List_object__o *)
                UnityEngine_Material__get_shader((UnityEngine_Material_o *)exists,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)exists_00,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_045760ff;
    if (exists_00 == (MethodInfo_24E7B40 *)0x0) goto label_045761bf;
    bVar4 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)exists_00,(MethodInfo *)0x0);
    __this_02 = exists;
    if ((char)bVar4 != '\0') goto label_045761b2;
  }
  __this_02 = (System_Collections_Generic_List_object__o *)0x0;
  bVar4 = UnityEngine_Shader__get_isSupported((UnityEngine_Shader_o *)exists_00,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_045761b2:
    return (bool_conflict)__this_02;
  }
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
  UnityEngine_Material___ctor
            ((UnityEngine_Material_o *)__this_02,(UnityEngine_Shader_o *)exists_00,(MethodInfo *)0x0);
  lVar3 = MethodInfo_Void_Add;
  __this_01 = *(System_Collections_Generic_List_object__o **)&(__this->fields).isSupported;
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar2 = (__this_01->fields)._items;
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar7 = (__this_01->fields)._size;
      if (uVar7 < (uint)pSVar2->max_length) {
        (__this_01->fields)._size = uVar7 + 1;
        __this_01 = (System_Collections_Generic_List_object__o *)(pSVar2->m_Items + (int)uVar7);
        pSVar2->m_Items[(int)uVar7] = (Il2CppObject *)__this_02;
        il2cpp_runtime_helper_022b4080();
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_01,(Il2CppObject *)__this_02,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_02,0x34,(MethodInfo *)0x0);
        goto label_045761b2;
      }
    }
  }
label_045761bf:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,0,(MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this_01->fields)._syncRoot + 2) = 0;
  return extraout_EAX;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckSupport
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, bool needDepth, bool needHdr, const MethodInfo* method);
// 0x457b550

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport_447b550
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,bool_conflict needDepth,
          bool_conflict needHdr,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined4 in_register_00000014;
  
  bVar1 = UnityStandardAssets_ImageEffects_PostEffectsBase__CheckSupport_4475ed0
                    (__this,needDepth,(MethodInfo *)CONCAT44(in_register_00000014,needHdr));
  if ((((char)bVar1 != '\0') && ((char)needHdr != '\0')) &&
     (bVar1 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1),
     (char)(__this->fields).supportHDRTextures == '\0')) {
    bVar1 = 0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
    *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  }
  return bVar1;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$Dx11Support
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__Dx11Support (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x4584e60

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__Dx11Support
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((long)&(__this->fields).supportHDRTextures + 1));
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$ReportAutoDisable
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x45761f0

void UnityStandardAssets_ImageEffects_PostEffectsBase__ReportAutoDisable
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057af0eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&" has been disabled as it's not supported on the current platform.");
    il2cpp_runtime_helper_023445d0(&"The image effect ");
    g_data_057af0eb = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._3_ToString.methodPtr)(__this,(__this->klass->vtable)._3_ToString.method)
  ;
  pSVar1 = System_String__Concat_3af7150("The image effect ",pSVar1," has been disabled as it's not supported on the current platform.",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) != 0) {
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$CheckShader
// il2cpp: bool UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShader (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, UnityEngine_Shader_o* s, const MethodInfo* method);
// 0x4584e70

bool_conflict
UnityStandardAssets_ImageEffects_PostEffectsBase__CheckShader
          (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,UnityEngine_Shader_o *s,
          MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  int iVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_String_array *values;
  MethodInfo *pMVar4;
  System_String_o *message;
  MethodInfo *extraout_RDX;
  UnityEngine_Material_o *__this_00;
  MethodInfo *value;
  int32_t pass;
  float fVar5;
  
  if (g_data_057af0ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" on effect ");
    il2cpp_runtime_helper_023445d0(&"The shader ");
    il2cpp_runtime_helper_023445d0(&" is not part of the Unity 3.2+ effects suite anymore. For best performance and quality, please ensure you are using the latest Standard Assets Image Effects (Pro only) package.");
    g_data_057af0ec = '\x01';
    method = extraout_RDX;
  }
  value = (MethodInfo *)&g_data_00000005;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5,method);
  pMVar4 = "The shader ";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = (System_String_o *)"The shader ";
      il2cpp_runtime_helper_022b4080(values->m_Items);
      value = pMVar4;
      if (s == (UnityEngine_Shader_o *)0x0) goto label_04585007;
      value = (s->klass->vtable)._3_ToString.method;
      pMVar4 = (MethodInfo *)(*(s->klass->vtable)._3_ToString.methodPtr)(s);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (System_String_o *)pMVar4;
        il2cpp_runtime_helper_022b4080(values->m_Items + 1);
        value = pMVar4;
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = " on effect ";
          il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          value = (__this->klass->vtable)._3_ToString.method;
          pMVar4 = (MethodInfo *)(*(__this->klass->vtable)._3_ToString.methodPtr)(__this);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (System_String_o *)pMVar4;
            il2cpp_runtime_helper_022b4080(values->m_Items + 3);
            value = pMVar4;
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = " is not part of the Unity 3.2+ effects suite anymore. For best performance and quality, please ensure you are using the latest Standard Assets Image Effects (Pro only) package.";
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              message = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
              bVar1 = UnityEngine_Shader__get_isSupported(s,(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
                *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
              }
              return 0;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04585007:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_RenderTexture__set_active((UnityEngine_RenderTexture_o *)value,(MethodInfo *)0x0);
  UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
  UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Material_o *)0x0) {
label_04585419:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af0ee == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      il2cpp_runtime_helper_023445d0(&"OnRenderImage in Helper called ...");
      g_data_057af0ee = '\x01';
    }
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log("OnRenderImage in Helper called ...",(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  pass = 0;
  iVar2 = UnityEngine_Material__get_passCount(__this_00,(MethodInfo *)0x0);
  if (0 < iVar2) {
    do {
      UnityEngine_Material__SetPass(__this_00,pass,(MethodInfo *)0x0);
      if (value == (MethodInfo *)0x0) goto label_04585419;
      iVar3 = (**(code **)(value->methodPointer + 0x188))(value);
      fVar5 = 1.0 / (float)iVar3 + 0.0;
      UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar5,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar5,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,1.0,0.1,(MethodInfo *)0x0);
      iVar3 = (**(code **)(value->methodPointer + 0x188))(value,*(undefined8 *)(value->methodPointer + 400));
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      fVar5 = 1.0 - 1.0 / (float)iVar3;
      UnityEngine_GL__Vertex3(fVar5,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar5,1.0,0.1,(MethodInfo *)0x0);
      iVar3 = (**(code **)(value->methodPointer + 0x1a8))(value,*(undefined8 *)(value->methodPointer + 0x1b0))
      ;
      fVar5 = 1.0 / (float)iVar3 + 0.0;
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,fVar5,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,fVar5,0.1,(MethodInfo *)0x0);
      iVar3 = (**(code **)(value->methodPointer + 0x1a8))();
      fVar5 = 1.0 - 1.0 / (float)iVar3;
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,fVar5,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,fVar5,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__End((MethodInfo *)0x0);
      pass = pass + 1;
      iVar2 = UnityEngine_Material__get_passCount(__this_00,(MethodInfo *)0x0);
    } while (pass < iVar2);
  }
  UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
  return extraout_EAX;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$NotSupported
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__NotSupported (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x45761d0

void UnityStandardAssets_ImageEffects_PostEffectsBase__NotSupported
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this->fields).supportHDRTextures + 2) = 0;
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$DrawBorder
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase__DrawBorder (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4585010

void UnityStandardAssets_ImageEffects_PostEffectsBase__DrawBorder
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,UnityEngine_RenderTexture_o *dest,
               UnityEngine_Material_o *material,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  int32_t pass;
  float fVar3;
  
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
  UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
  if (material == (UnityEngine_Material_o *)0x0) {
label_04585419:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af0ee == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      il2cpp_runtime_helper_023445d0(&"OnRenderImage in Helper called ...");
      g_data_057af0ee = '\x01';
    }
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log("OnRenderImage in Helper called ...",(MethodInfo *)0x0);
    return;
  }
  pass = 0;
  iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
  if (0 < iVar1) {
    do {
      UnityEngine_Material__SetPass(material,pass,(MethodInfo *)0x0);
      if (dest == (UnityEngine_RenderTexture_o *)0x0) goto label_04585419;
      iVar2 = (*(dest->klass->vtable)._5_get_width.methodPtr)(dest);
      fVar3 = 1.0 / (float)iVar2 + 0.0;
      UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar3,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar3,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,1.0,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._5_get_width.methodPtr)(dest,(dest->klass->vtable)._5_get_width.method);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      fVar3 = 1.0 - 1.0 / (float)iVar2;
      UnityEngine_GL__Vertex3(fVar3,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar3,1.0,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._7_get_height.methodPtr)
                        (dest,(dest->klass->vtable)._7_get_height.method);
      fVar3 = 1.0 / (float)iVar2 + 0.0;
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,fVar3,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,fVar3,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._7_get_height.methodPtr)();
      fVar3 = 1.0 - 1.0 / (float)iVar2;
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,fVar3,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,fVar3,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__End((MethodInfo *)0x0);
      pass = pass + 1;
      iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
    } while (pass < iVar1);
  }
  UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsBase$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsBase___ctor (UnityStandardAssets_ImageEffects_PostEffectsBase_o* __this, const MethodInfo* method);
// 0x4576880

void UnityStandardAssets_ImageEffects_PostEffectsBase___ctor
               (UnityStandardAssets_ImageEffects_PostEffectsBase_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
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


