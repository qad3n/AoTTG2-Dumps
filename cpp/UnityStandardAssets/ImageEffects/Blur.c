// Type: UnityStandardAssets.ImageEffects.Blur
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Blur.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Blur.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.Blur$$get_material
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_Blur__get_material (UnityStandardAssets_ImageEffects_Blur_o* __this, const MethodInfo* method);
// 0x4579bb0

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_Blur__get_material
          (UnityStandardAssets_ImageEffects_Blur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_Shader_o *shader;
  bool_conflict bVar2;
  UnityEngine_Material_o *__this_00;
  undefined4 extraout_var;
  UnityEngine_Material_o *extraout_RAX;
  
  if (g_data_057af0ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Blur);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0ae = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    shader = (__this->fields).blurShader;
    __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_Blur + 0xb8) = __this_00;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Blur + 0xb8));
    if ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8) == (UnityEngine_Object_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057af0af == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Blur);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057af0af = '\x01';
      }
      pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
        return extraout_RAX;
      }
      return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar2);
    }
    UnityEngine_Object__set_hideFlags
              ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8),0x34,(MethodInfo *)0x0);
  }
  return (UnityEngine_Material_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8);
}


// UnityStandardAssets.ImageEffects.Blur$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_Blur__OnDisable (UnityStandardAssets_ImageEffects_Blur_o* __this, const MethodInfo* method);
// 0x4579ca0

void UnityStandardAssets_ImageEffects_Blur__OnDisable
               (UnityStandardAssets_ImageEffects_Blur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057af0af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Blur);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0af = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.Blur$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_Blur__Start (UnityStandardAssets_ImageEffects_Blur_o* __this, const MethodInfo* method);
// 0x4579d40

void UnityStandardAssets_ImageEffects_Blur__Start
               (UnityStandardAssets_ImageEffects_Blur_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *exists;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  int iVar4;
  UnityStandardAssets_ImageEffects_Blur_o *__this_00;
  UnityEngine_Shader_o *__this_01;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Vector2_array *pUVar6;
  UnityEngine_Texture_o *source;
  int in_ECX;
  MethodInfo *pMVar7;
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_RenderTexture_o *dest_00;
  UnityEngine_RenderTexture_o *dest_01;
  int32_t iteration;
  UnityEngine_Texture_o *source_00;
  MethodInfo *pMVar8;
  UnityEngine_RenderTexture_o *source_01;
  UnityStandardAssets_ImageEffects_Blur_o *pUVar9;
  long *__this_02;
  MethodInfo *in_R8;
  int width;
  float fVar10;
  
  if (g_data_057af0b0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057af0b0 = '\x01';
  }
  bVar3 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    exists = (UnityEngine_Object_o *)(__this->fields).blurShader;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar7 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar9 = __this;
      __this_00 = (UnityStandardAssets_ImageEffects_Blur_o *)
                  UnityStandardAssets_ImageEffects_Blur__get_material(__this,pMVar7);
      if (__this_00 != (UnityStandardAssets_ImageEffects_Blur_o *)0x0) {
        pMVar7 = (MethodInfo *)0x0;
        __this_01 = UnityEngine_Material__get_shader((UnityEngine_Material_o *)__this_00,(MethodInfo *)0x0);
        pUVar9 = __this_00;
        if (__this_01 != (UnityEngine_Shader_o *)0x0) {
          bVar3 = UnityEngine_Shader__get_isSupported(__this_01,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            return;
          }
          goto label_04579dca;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar8 = pMVar7;
      if (g_data_057af0b1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057af0b1 = '\x01';
      }
      fVar10 = (pUVar9->fields).blurSpread;
      pUVar5 = UnityStandardAssets_ImageEffects_Blur__get_material(pUVar9,pMVar8);
      pMVar8 = (MethodInfo *)&g_data_00000004;
      pUVar9 = TypeInfo_Vector2;
      pUVar6 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40();
      if (pUVar6 != (UnityEngine_Vector2_array *)0x0) {
        uVar1 = (uint)pUVar6->max_length;
        if (uVar1 != 0) {
          fVar10 = (float)in_ECX * fVar10 + 0.5;
          pUVar6->m_Items[0].fields =
               (UnityEngine_Vector2_Fields)(CONCAT44(fVar10,fVar10) ^ 0x8000000080000000);
          if (((uVar1 != 1) &&
              (pUVar6->m_Items[1].fields = (UnityEngine_Vector2_Fields)(CONCAT44(fVar10,fVar10) ^ 0x80000000),
              2 < uVar1)) &&
             (UVar2.fields.y = fVar10, UVar2.fields.x = fVar10, pUVar6->m_Items[2].fields = UVar2.fields,
             uVar1 != 3)) {
            pUVar6->m_Items[3].fields =
                 (UnityEngine_Vector2_Fields)(CONCAT44(fVar10,fVar10) ^ 0x8000000000000000);
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Graphics__BlitMultiTap
                      ((UnityEngine_Texture_o *)pMVar7,dest,pUVar5,pUVar6,(MethodInfo *)0x0);
            return;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
      il2cpp_runtime_helper_022b2c90();
      pMVar7 = pMVar8;
      if (g_data_057af0b2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057af0b2 = '\x01';
      }
      pUVar5 = UnityStandardAssets_ImageEffects_Blur__get_material(pUVar9,pMVar7);
      source_01 = (UnityEngine_RenderTexture_o *)&g_data_00000004;
      pUVar9 = TypeInfo_Vector2;
      pUVar6 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40();
      if (pUVar6 != (UnityEngine_Vector2_array *)0x0) {
        uVar1 = (uint)pUVar6->max_length;
        if (((uVar1 != 0) &&
            (pUVar6->m_Items[0].fields = (UnityEngine_Vector2_Fields)0xbf800000bf800000, uVar1 != 1)) &&
           ((pUVar6->m_Items[1].fields.x = -1.0, pUVar6->m_Items[1].fields.y = 1.0, 2 < uVar1 &&
            (pUVar6->m_Items[2].fields.x = 1.0, pUVar6->m_Items[2].fields.y = 1.0, uVar1 != 3)))) {
          pUVar6->m_Items[3].fields.x = 1.0;
          pUVar6->m_Items[3].fields.y = -1.0;
          if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Graphics__BlitMultiTap
                    ((UnityEngine_Texture_o *)pMVar8,dest_00,pUVar5,pUVar6,(MethodInfo *)0x0);
          return;
        }
        il2cpp_runtime_helper_022b2ca0();
      }
      il2cpp_runtime_helper_022b2c90();
      __this_02 = (long *)pUVar9;
      if (g_data_057af0b3 == '\0') {
        __this_02 = &TypeInfo_Graphics;
        il2cpp_runtime_helper_023445d0();
        g_data_057af0b3 = '\x01';
      }
      if (source_01 != (UnityEngine_RenderTexture_o *)0x0) {
        iVar4 = (*(source_01->klass->vtable)._5_get_width.methodPtr)
                          (source_01,(source_01->klass->vtable)._5_get_width.method);
        width = (int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2;
        iVar4 = (*(source_01->klass->vtable)._7_get_height.methodPtr)
                          (source_01,(source_01->klass->vtable)._7_get_height.method);
        iVar4 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2;
        iteration = 0;
        pMVar7 = (MethodInfo *)0x0;
        source = (UnityEngine_Texture_o *)
                 UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar4,0,(MethodInfo *)0x0);
        UnityStandardAssets_ImageEffects_Blur__DownSample4x
                  (pUVar9,source_01,(UnityEngine_RenderTexture_o *)source,pMVar7);
        source_00 = source;
        if ((pUVar9->fields).iterations < 1) {
          iVar4 = *(int *)(TypeInfo_Graphics + 0xe4);
        }
        else {
          do {
            source = (UnityEngine_Texture_o *)
                     UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar4,0,(MethodInfo *)0x0);
            UnityStandardAssets_ImageEffects_Blur__FourTapCone
                      (pUVar9,(UnityEngine_RenderTexture_o *)source_00,(UnityEngine_RenderTexture_o *)source,
                       iteration,in_R8);
            UnityEngine_RenderTexture__ReleaseTemporary
                      ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
            iteration = iteration + 1;
            source_00 = source;
          } while (iteration < (pUVar9->fields).iterations);
          iVar4 = *(int *)(TypeInfo_Graphics + 0xe4);
        }
        if (iVar4 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__Blit(source,dest_01,(MethodInfo *)0x0);
        UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)source,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      (((UnityStandardAssets_ImageEffects_Blur_o *)__this_02)->fields).iterations = 3;
      (((UnityStandardAssets_ImageEffects_Blur_o *)__this_02)->fields).blurSpread = 0.6;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
      return;
    }
  }
label_04579dca:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Blur$$FourTapCone
// il2cpp: void UnityStandardAssets_ImageEffects_Blur__FourTapCone (UnityStandardAssets_ImageEffects_Blur_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, int32_t iteration, const MethodInfo* method);
// 0x4579df0

void UnityStandardAssets_ImageEffects_Blur__FourTapCone
               (UnityStandardAssets_ImageEffects_Blur_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *dest,int32_t iteration,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_o UVar2;
  int iVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Vector2_array *pUVar5;
  UnityEngine_Texture_o *source_00;
  UnityEngine_RenderTexture_o *dest_00;
  UnityEngine_RenderTexture_o *dest_01;
  int32_t iteration_00;
  UnityEngine_Texture_o *source_01;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  UnityEngine_RenderTexture_o *source_02;
  UnityStandardAssets_ImageEffects_Blur_o *pUVar7;
  long *__this_00;
  int width;
  float fVar8;
  
  pMVar6 = (MethodInfo *)source;
  if (g_data_057af0b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057af0b1 = '\x01';
  }
  fVar8 = (__this->fields).blurSpread;
  pUVar4 = UnityStandardAssets_ImageEffects_Blur__get_material(__this,pMVar6);
  pMVar6 = (MethodInfo *)&g_data_00000004;
  pUVar7 = TypeInfo_Vector2;
  pUVar5 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
    uVar1 = (uint)pUVar5->max_length;
    if (uVar1 != 0) {
      fVar8 = (float)iteration * fVar8 + 0.5;
      pUVar5->m_Items[0].fields = (UnityEngine_Vector2_Fields)(CONCAT44(fVar8,fVar8) ^ 0x8000000080000000);
      if (((uVar1 != 1) &&
          (pUVar5->m_Items[1].fields = (UnityEngine_Vector2_Fields)(CONCAT44(fVar8,fVar8) ^ 0x80000000),
          2 < uVar1)) &&
         (UVar2.fields.y = fVar8, UVar2.fields.x = fVar8, pUVar5->m_Items[2].fields = UVar2.fields, uVar1 != 3
         )) {
        pUVar5->m_Items[3].fields = (UnityEngine_Vector2_Fields)(CONCAT44(fVar8,fVar8) ^ 0x8000000000000000);
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Graphics__BlitMultiTap
                  ((UnityEngine_Texture_o *)source,dest,pUVar4,pUVar5,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar6;
  if (g_data_057af0b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057af0b2 = '\x01';
  }
  pUVar4 = UnityStandardAssets_ImageEffects_Blur__get_material(pUVar7,method_00);
  source_02 = (UnityEngine_RenderTexture_o *)&g_data_00000004;
  pUVar7 = TypeInfo_Vector2;
  pUVar5 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40();
  if (pUVar5 != (UnityEngine_Vector2_array *)0x0) {
    uVar1 = (uint)pUVar5->max_length;
    if (((uVar1 != 0) &&
        (pUVar5->m_Items[0].fields = (UnityEngine_Vector2_Fields)0xbf800000bf800000, uVar1 != 1)) &&
       ((pUVar5->m_Items[1].fields.x = -1.0, pUVar5->m_Items[1].fields.y = 1.0, 2 < uVar1 &&
        (pUVar5->m_Items[2].fields.x = 1.0, pUVar5->m_Items[2].fields.y = 1.0, uVar1 != 3)))) {
      pUVar5->m_Items[3].fields.x = 1.0;
      pUVar5->m_Items[3].fields.y = -1.0;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__BlitMultiTap
                ((UnityEngine_Texture_o *)pMVar6,dest_00,pUVar4,pUVar5,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (long *)pUVar7;
  if (g_data_057af0b3 == '\0') {
    __this_00 = &TypeInfo_Graphics;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0b3 = '\x01';
  }
  if (source_02 != (UnityEngine_RenderTexture_o *)0x0) {
    iVar3 = (*(source_02->klass->vtable)._5_get_width.methodPtr)
                      (source_02,(source_02->klass->vtable)._5_get_width.method);
    width = (int)(((uint)(iVar3 >> 0x1f) >> 0x1e) + iVar3) >> 2;
    iVar3 = (*(source_02->klass->vtable)._7_get_height.methodPtr)
                      (source_02,(source_02->klass->vtable)._7_get_height.method);
    iVar3 = (int)(((uint)(iVar3 >> 0x1f) >> 0x1e) + iVar3) >> 2;
    iteration_00 = 0;
    pMVar6 = (MethodInfo *)0x0;
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar3,0,(MethodInfo *)0x0);
    UnityStandardAssets_ImageEffects_Blur__DownSample4x
              (pUVar7,source_02,(UnityEngine_RenderTexture_o *)source_00,pMVar6);
    source_01 = source_00;
    if ((pUVar7->fields).iterations < 1) {
      iVar3 = *(int *)(TypeInfo_Graphics + 0xe4);
    }
    else {
      do {
        source_00 = (UnityEngine_Texture_o *)
                    UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar3,0,(MethodInfo *)0x0);
        UnityStandardAssets_ImageEffects_Blur__FourTapCone
                  (pUVar7,(UnityEngine_RenderTexture_o *)source_01,(UnityEngine_RenderTexture_o *)source_00,
                   iteration_00,method);
        UnityEngine_RenderTexture__ReleaseTemporary
                  ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
        iteration_00 = iteration_00 + 1;
        source_01 = source_00;
      } while (iteration_00 < (pUVar7->fields).iterations);
      iVar3 = *(int *)(TypeInfo_Graphics + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit(source_00,dest_01,(MethodInfo *)0x0);
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (((UnityStandardAssets_ImageEffects_Blur_o *)__this_00)->fields).iterations = 3;
  (((UnityStandardAssets_ImageEffects_Blur_o *)__this_00)->fields).blurSpread = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Blur$$DownSample4x
// il2cpp: void UnityStandardAssets_ImageEffects_Blur__DownSample4x (UnityStandardAssets_ImageEffects_Blur_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, const MethodInfo* method);
// 0x4579f20

void UnityStandardAssets_ImageEffects_Blur__DownSample4x
               (UnityStandardAssets_ImageEffects_Blur_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *dest,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  UnityEngine_Material_o *mat;
  UnityEngine_Vector2_array *offsets;
  UnityEngine_Texture_o *source_00;
  MethodInfo *pMVar3;
  UnityEngine_RenderTexture_o *dest_00;
  int32_t iteration;
  UnityEngine_Texture_o *source_01;
  UnityEngine_RenderTexture_o *source_02;
  UnityStandardAssets_ImageEffects_Blur_o *__this_00;
  long *__this_01;
  MethodInfo *in_R8;
  int width;
  
  pMVar3 = (MethodInfo *)source;
  if (g_data_057af0b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057af0b2 = '\x01';
  }
  mat = UnityStandardAssets_ImageEffects_Blur__get_material(__this,pMVar3);
  source_02 = (UnityEngine_RenderTexture_o *)&g_data_00000004;
  __this_00 = TypeInfo_Vector2;
  offsets = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40();
  if (offsets != (UnityEngine_Vector2_array *)0x0) {
    uVar1 = (uint)offsets->max_length;
    if ((((uVar1 != 0) &&
         (offsets->m_Items[0].fields = (UnityEngine_Vector2_Fields)0xbf800000bf800000, uVar1 != 1)) &&
        (offsets->m_Items[1].fields.x = -1.0, offsets->m_Items[1].fields.y = 1.0, 2 < uVar1)) &&
       (offsets->m_Items[2].fields.x = 1.0, offsets->m_Items[2].fields.y = 1.0, uVar1 != 3)) {
      offsets->m_Items[3].fields.x = 1.0;
      offsets->m_Items[3].fields.y = -1.0;
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__BlitMultiTap((UnityEngine_Texture_o *)source,dest,mat,offsets,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (long *)__this_00;
  if (g_data_057af0b3 == '\0') {
    __this_01 = &TypeInfo_Graphics;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0b3 = '\x01';
  }
  if (source_02 != (UnityEngine_RenderTexture_o *)0x0) {
    iVar2 = (*(source_02->klass->vtable)._5_get_width.methodPtr)
                      (source_02,(source_02->klass->vtable)._5_get_width.method);
    width = (int)(((uint)(iVar2 >> 0x1f) >> 0x1e) + iVar2) >> 2;
    iVar2 = (*(source_02->klass->vtable)._7_get_height.methodPtr)
                      (source_02,(source_02->klass->vtable)._7_get_height.method);
    iVar2 = (int)(((uint)(iVar2 >> 0x1f) >> 0x1e) + iVar2) >> 2;
    iteration = 0;
    pMVar3 = (MethodInfo *)0x0;
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar2,0,(MethodInfo *)0x0);
    UnityStandardAssets_ImageEffects_Blur__DownSample4x
              (__this_00,source_02,(UnityEngine_RenderTexture_o *)source_00,pMVar3);
    source_01 = source_00;
    if ((__this_00->fields).iterations < 1) {
      iVar2 = *(int *)(TypeInfo_Graphics + 0xe4);
    }
    else {
      do {
        source_00 = (UnityEngine_Texture_o *)
                    UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar2,0,(MethodInfo *)0x0);
        UnityStandardAssets_ImageEffects_Blur__FourTapCone
                  (__this_00,(UnityEngine_RenderTexture_o *)source_01,(UnityEngine_RenderTexture_o *)source_00
                   ,iteration,in_R8);
        UnityEngine_RenderTexture__ReleaseTemporary
                  ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
        iteration = iteration + 1;
        source_01 = source_00;
      } while (iteration < (__this_00->fields).iterations);
      iVar2 = *(int *)(TypeInfo_Graphics + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit(source_00,dest_00,(MethodInfo *)0x0);
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (((UnityStandardAssets_ImageEffects_Blur_o *)__this_01)->fields).iterations = 3;
  (((UnityStandardAssets_ImageEffects_Blur_o *)__this_01)->fields).blurSpread = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Blur$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_Blur__OnRenderImage (UnityStandardAssets_ImageEffects_Blur_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x457a010

void UnityStandardAssets_ImageEffects_Blur__OnRenderImage
               (UnityStandardAssets_ImageEffects_Blur_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Texture_o *source_00;
  MethodInfo *method_00;
  int32_t iteration;
  UnityEngine_Texture_o *source_01;
  long *__this_00;
  MethodInfo *in_R8;
  int width;
  
  __this_00 = (long *)__this;
  if (g_data_057af0b3 == '\0') {
    __this_00 = &TypeInfo_Graphics;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0b3 = '\x01';
  }
  if (source != (UnityEngine_RenderTexture_o *)0x0) {
    iVar1 = (*(source->klass->vtable)._5_get_width.methodPtr)
                      (source,(source->klass->vtable)._5_get_width.method);
    width = (int)(((uint)(iVar1 >> 0x1f) >> 0x1e) + iVar1) >> 2;
    iVar1 = (*(source->klass->vtable)._7_get_height.methodPtr)
                      (source,(source->klass->vtable)._7_get_height.method);
    iVar1 = (int)(((uint)(iVar1 >> 0x1f) >> 0x1e) + iVar1) >> 2;
    iteration = 0;
    method_00 = (MethodInfo *)0x0;
    source_00 = (UnityEngine_Texture_o *)
                UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar1,0,(MethodInfo *)0x0);
    UnityStandardAssets_ImageEffects_Blur__DownSample4x
              (__this,source,(UnityEngine_RenderTexture_o *)source_00,method_00);
    source_01 = source_00;
    if ((__this->fields).iterations < 1) {
      iVar1 = *(int *)(TypeInfo_Graphics + 0xe4);
    }
    else {
      do {
        source_00 = (UnityEngine_Texture_o *)
                    UnityEngine_RenderTexture__GetTemporary_4de1d70(width,iVar1,0,(MethodInfo *)0x0);
        UnityStandardAssets_ImageEffects_Blur__FourTapCone
                  (__this,(UnityEngine_RenderTexture_o *)source_01,(UnityEngine_RenderTexture_o *)source_00,
                   iteration,in_R8);
        UnityEngine_RenderTexture__ReleaseTemporary
                  ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
        iteration = iteration + 1;
        source_01 = source_00;
      } while (iteration < (__this->fields).iterations);
      iVar1 = *(int *)(TypeInfo_Graphics + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit(source_00,destination,(MethodInfo *)0x0);
    UnityEngine_RenderTexture__ReleaseTemporary((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (((UnityStandardAssets_ImageEffects_Blur_o *)__this_00)->fields).iterations = 3;
  (((UnityStandardAssets_ImageEffects_Blur_o *)__this_00)->fields).blurSpread = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Blur$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Blur___ctor (UnityStandardAssets_ImageEffects_Blur_o* __this, const MethodInfo* method);
// 0x457a160

void UnityStandardAssets_ImageEffects_Blur___ctor
               (UnityStandardAssets_ImageEffects_Blur_o *__this,MethodInfo *method)

{
  (__this->fields).iterations = 3;
  (__this->fields).blurSpread = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


