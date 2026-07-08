// Type: UnityStandardAssets.ImageEffects.PostEffectsHelper
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/PostEffectsHelper.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/PostEffectsHelper.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.PostEffectsHelper$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsHelper__OnRenderImage (UnityStandardAssets_ImageEffects_PostEffectsHelper_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4260320

void UnityStandardAssets_ImageEffects_PostEffectsHelper__OnRenderImage
               (UnityStandardAssets_ImageEffects_PostEffectsHelper_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  if (DAT_05705272 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&"OnRenderImage in Helper called ...");
    DAT_05705272 = '\x01';
  }
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Debug__Log("OnRenderImage in Helper called ...",(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsHelper$$DrawLowLevelPlaneAlignedWithCamera
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawLowLevelPlaneAlignedWithCamera (float dist, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* material, UnityEngine_Camera_o* cameraForProjectionMatrix, const MethodInfo* method);
// 0x4260380

void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawLowLevelPlaneAlignedWithCamera
               (float dist,UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *dest,
               UnityEngine_Material_o *material,UnityEngine_Camera_o *cameraForProjectionMatrix,
               MethodInfo *method)

{
  UnityEngine_Matrix4x4_o mat;
  int32_t iVar1;
  int pass;
  float fVar2;
  float fVar3;
  float fVar4;
  float x;
  float y;
  UnityEngine_Matrix4x4_Fields local_60;
  
  if (DAT_05705273 == '\0') {
    il2cpp_init_method_metadata(&"_MainTex");
    DAT_05705273 = '\x01';
  }
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  if (material != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetTexture
              (material,"_MainTex",(UnityEngine_Texture_o *)source,(MethodInfo *)0x0);
    UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
    UnityEngine_GL__LoadIdentity((MethodInfo *)0x0);
    if (cameraForProjectionMatrix != (UnityEngine_Camera_o *)0x0) {
      pass = 0;
      UnityEngine_Camera__get_projectionMatrix
                ((UnityEngine_Matrix4x4_o *)&local_60,cameraForProjectionMatrix,(MethodInfo *)0x0);
      mat.fields.m20 = local_60.m20;
      mat.fields.m30 = local_60.m30;
      mat.fields.m00 = local_60.m00;
      mat.fields.m10 = local_60.m10;
      mat.fields.m01 = local_60.m01;
      mat.fields.m11 = local_60.m11;
      mat.fields.m21 = local_60.m21;
      mat.fields.m31 = local_60.m31;
      mat.fields.m02 = local_60.m02;
      mat.fields.m12 = local_60.m12;
      mat.fields.m22 = local_60.m22;
      mat.fields.m32 = local_60.m32;
      mat.fields.m03 = local_60.m03;
      mat.fields.m13 = local_60.m13;
      mat.fields.m23 = local_60.m23;
      mat.fields.m33 = local_60.m33;
      UnityEngine_GL__LoadProjectionMatrix(mat,(MethodInfo *)0x0);
      fVar2 = UnityEngine_Camera__get_fieldOfView(cameraForProjectionMatrix,(MethodInfo *)0x0);
      fVar2 = fVar2 * 0.5 * 0.017453292;
      fVar3 = cosf(fVar2);
      fVar2 = sinf(fVar2);
      fVar4 = UnityEngine_Camera__get_aspect(cameraForProjectionMatrix,(MethodInfo *)0x0);
      iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
      if (0 < iVar1) {
        fVar3 = fVar3 / fVar2;
        x = (fVar4 / -fVar3) * dist;
        fVar4 = (fVar4 / fVar3) * dist;
        fVar2 = (-1.0 / fVar3) * dist;
        y = (1.0 / fVar3) * dist;
        fVar3 = -dist;
        do {
          UnityEngine_Material__SetPass(material,pass,(MethodInfo *)0x0);
          UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
          UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
          UnityEngine_GL__Vertex3(x,fVar2,fVar3,(MethodInfo *)0x0);
          UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
          UnityEngine_GL__Vertex3(fVar4,fVar2,fVar3,(MethodInfo *)0x0);
          UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
          UnityEngine_GL__Vertex3(fVar4,y,fVar3,(MethodInfo *)0x0);
          UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
          UnityEngine_GL__Vertex3(x,y,fVar3,(MethodInfo *)0x0);
          UnityEngine_GL__End((MethodInfo *)0x0);
          pass = pass + 1;
          iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
        } while (pass < iVar1);
      }
      UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.PostEffectsHelper$$DrawBorder
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawBorder (UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4260660

void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawBorder
               (UnityEngine_RenderTexture_o *dest,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  int pass;
  float fVar3;
  
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
  UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
  if (material != (UnityEngine_Material_o *)0x0) {
    pass = 0;
    iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
    if (0 < iVar1) {
      do {
        UnityEngine_Material__SetPass(material,pass,(MethodInfo *)0x0);
        if (dest == (UnityEngine_RenderTexture_o *)0x0) goto LAB_04260a59;
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
        iVar2 = (*(dest->klass->vtable)._5_get_width.methodPtr)
                          (dest,(dest->klass->vtable)._5_get_width.method);
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
LAB_04260a59:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.PostEffectsHelper$$DrawLowLevelQuad
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawLowLevelQuad (float x1, float x2, float y1, float y2, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4260a60

void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawLowLevelQuad
               (float x1,float x2,float y1,float y2,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *dest,UnityEngine_Material_o *material,MethodInfo *method
               )

{
  int32_t iVar1;
  int pass;
  
  if (DAT_05705274 == '\0') {
    il2cpp_init_method_metadata(&"_MainTex");
    DAT_05705274 = '\x01';
  }
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  if (material == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pass = 0;
  UnityEngine_Material__SetTexture
            (material,"_MainTex",(UnityEngine_Texture_o *)source,(MethodInfo *)0x0);
  UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
  UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
  iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
  if (0 < iVar1) {
    do {
      UnityEngine_Material__SetPass(material,pass,(MethodInfo *)0x0);
      UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(x1,y1,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(x2,y1,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(x2,y2,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(x1,y2,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__End((MethodInfo *)0x0);
      pass = pass + 1;
      iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
    } while (pass < iVar1);
  }
  UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsHelper$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsHelper___ctor (UnityStandardAssets_ImageEffects_PostEffectsHelper_o* __this, const MethodInfo* method);
// 0x4260c00

void UnityStandardAssets_ImageEffects_PostEffectsHelper___ctor
               (UnityStandardAssets_ImageEffects_PostEffectsHelper_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


