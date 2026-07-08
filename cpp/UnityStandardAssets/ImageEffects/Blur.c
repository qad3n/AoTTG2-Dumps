// Type: UnityStandardAssets.ImageEffects.Blur
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Blur.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Blur.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.Blur$$get_material
// il2cpp: UnityEngine_Material_o* UnityStandardAssets_ImageEffects_Blur__get_material (UnityStandardAssets_ImageEffects_Blur_o* __this, const MethodInfo* method);
// 0x4254ab0

UnityEngine_Material_o *
UnityStandardAssets_ImageEffects_Blur__get_material
          (UnityStandardAssets_ImageEffects_Blur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Shader_o *shader;
  bool_conflict bVar1;
  UnityEngine_Material_o *__this_00;
  
  if (DAT_05705232 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Blur);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705232 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    shader = (__this->fields).blurShader;
    __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_Blur + 0xb8) = __this_00;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Blur + 0xb8),__this_00);
    if ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8) ==
        (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Object__set_hideFlags
              ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8),0x34,(MethodInfo *)0x0
              );
  }
  return (UnityEngine_Material_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8);
}


// UnityStandardAssets.ImageEffects.Blur$$OnDisable
// il2cpp: void UnityStandardAssets_ImageEffects_Blur__OnDisable (UnityStandardAssets_ImageEffects_Blur_o* __this, const MethodInfo* method);
// 0x4254ba0

void UnityStandardAssets_ImageEffects_Blur__OnDisable
               (UnityStandardAssets_ImageEffects_Blur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05705233 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Blur);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705233 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_Blur + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UnityStandardAssets.ImageEffects.Blur$$Start
// il2cpp: void UnityStandardAssets_ImageEffects_Blur__Start (UnityStandardAssets_ImageEffects_Blur_o* __this, const MethodInfo* method);
// 0x4254c40

void UnityStandardAssets_ImageEffects_Blur__Start
               (UnityStandardAssets_ImageEffects_Blur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *exists;
  bool_conflict bVar1;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Shader_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_05705234 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05705234 = '\x01';
  }
  bVar1 = UnityEngine_SystemInfo__get_supportsImageEffects((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    exists = (UnityEngine_Object_o *)(__this->fields).blurShader;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this_00 = UnityStandardAssets_ImageEffects_Blur__get_material(__this,method_00);
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        __this_01 = UnityEngine_Material__get_shader(__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Shader_o *)0x0) {
          bVar1 = UnityEngine_Shader__get_isSupported(__this_01,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            return;
          }
          goto LAB_04254cca;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_04254cca:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,0,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Blur$$FourTapCone
// il2cpp: void UnityStandardAssets_ImageEffects_Blur__FourTapCone (UnityStandardAssets_ImageEffects_Blur_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, int32_t iteration, const MethodInfo* method);
// 0x4254cf0

void UnityStandardAssets_ImageEffects_Blur__FourTapCone
               (UnityStandardAssets_ImageEffects_Blur_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *dest,int32_t iteration,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Material_o *mat;
  UnityEngine_Vector2_array *offsets;
  MethodInfo *method_00;
  float fVar3;
  
  method_00 = (MethodInfo *)source;
  if (DAT_05705235 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05705235 = '\x01';
  }
  fVar3 = (__this->fields).blurSpread;
  mat = UnityStandardAssets_ImageEffects_Blur__get_material(__this,method_00);
  offsets = (UnityEngine_Vector2_array *)il2cpp_glue_02274930(TypeInfo_Vector2,4);
  if (offsets != (UnityEngine_Vector2_array *)0x0) {
    uVar1 = (uint)offsets->max_length;
    if (uVar1 != 0) {
      fVar3 = (float)iteration * fVar3 + 0.5;
      offsets->m_Items[0].fields =
           (UnityEngine_Vector2_Fields)(CONCAT44(fVar3,fVar3) ^ 0x8000000080000000);
      if (((uVar1 != 1) &&
          (offsets->m_Items[1].fields =
                (UnityEngine_Vector2_Fields)(CONCAT44(fVar3,fVar3) ^ 0x80000000), 2 < uVar1)) &&
         (UVar2.fields.y = fVar3, UVar2.fields.x = fVar3, offsets->m_Items[2].fields = UVar2.fields,
         uVar1 != 3)) {
        offsets->m_Items[3].fields =
             (UnityEngine_Vector2_Fields)(CONCAT44(fVar3,fVar3) ^ 0x8000000000000000);
        if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Graphics__BlitMultiTap
                  ((UnityEngine_Texture_o *)source,dest,mat,offsets,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Blur$$DownSample4x
// il2cpp: void UnityStandardAssets_ImageEffects_Blur__DownSample4x (UnityStandardAssets_ImageEffects_Blur_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, const MethodInfo* method);
// 0x4254e20

void UnityStandardAssets_ImageEffects_Blur__DownSample4x
               (UnityStandardAssets_ImageEffects_Blur_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *dest,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Material_o *mat;
  UnityEngine_Vector2_array *offsets;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)source;
  if (DAT_05705236 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_05705236 = '\x01';
  }
  mat = UnityStandardAssets_ImageEffects_Blur__get_material(__this,method_00);
  offsets = (UnityEngine_Vector2_array *)il2cpp_glue_02274930(TypeInfo_Vector2,4);
  if (offsets != (UnityEngine_Vector2_array *)0x0) {
    uVar1 = (uint)offsets->max_length;
    if (uVar1 != 0) {
      offsets->m_Items[0].fields = (UnityEngine_Vector2_Fields)0xbf800000bf800000;
      if (uVar1 != 1) {
        offsets->m_Items[1].fields.x = -1.0;
        offsets->m_Items[1].fields.y = 1.0;
        if (2 < uVar1) {
          offsets->m_Items[2].fields.x = 1.0;
          offsets->m_Items[2].fields.y = 1.0;
          if (uVar1 != 3) {
            offsets->m_Items[3].fields.x = 1.0;
            offsets->m_Items[3].fields.y = -1.0;
            if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Graphics__BlitMultiTap
                      ((UnityEngine_Texture_o *)source,dest,mat,offsets,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Blur$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_Blur__OnRenderImage (UnityStandardAssets_ImageEffects_Blur_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4254f10

void UnityStandardAssets_ImageEffects_Blur__OnRenderImage
               (UnityStandardAssets_ImageEffects_Blur_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Texture_o *source_00;
  MethodInfo *method_00;
  int32_t iteration;
  UnityEngine_Texture_o *source_01;
  MethodInfo *in_R8;
  int width;
  
  if (DAT_05705237 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    DAT_05705237 = '\x01';
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
                UnityEngine_RenderTexture__GetTemporary(width,iVar1,0,(MethodInfo *)0x0);
    UnityStandardAssets_ImageEffects_Blur__DownSample4x
              (__this,source,(UnityEngine_RenderTexture_o *)source_00,method_00);
    source_01 = source_00;
    if ((__this->fields).iterations < 1) {
      iVar1 = *(int *)(TypeInfo_Graphics + 0xe4);
    }
    else {
      do {
        source_00 = (UnityEngine_Texture_o *)
                    UnityEngine_RenderTexture__GetTemporary(width,iVar1,0,(MethodInfo *)0x0);
        UnityStandardAssets_ImageEffects_Blur__FourTapCone
                  (__this,(UnityEngine_RenderTexture_o *)source_01,
                   (UnityEngine_RenderTexture_o *)source_00,iteration,in_R8);
        UnityEngine_RenderTexture__ReleaseTemporary
                  ((UnityEngine_RenderTexture_o *)source_01,(MethodInfo *)0x0);
        iteration = iteration + 1;
        source_01 = source_00;
      } while (iteration < (__this->fields).iterations);
      iVar1 = *(int *)(TypeInfo_Graphics + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit(source_00,destination,(MethodInfo *)0x0);
    UnityEngine_RenderTexture__ReleaseTemporary
              ((UnityEngine_RenderTexture_o *)source_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Blur$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Blur___ctor (UnityStandardAssets_ImageEffects_Blur_o* __this, const MethodInfo* method);
// 0x4255060

void UnityStandardAssets_ImageEffects_Blur___ctor
               (UnityStandardAssets_ImageEffects_Blur_o *__this,MethodInfo *method)

{
  (__this->fields).iterations = 3;
  (__this->fields).blurSpread = 0.6;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


