// Type: UnityStandardAssets.ImageEffects.PostEffectsHelper
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/PostEffectsHelper.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/PostEffectsHelper.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.PostEffectsHelper$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsHelper__OnRenderImage (UnityStandardAssets_ImageEffects_PostEffectsHelper_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4585420

void UnityStandardAssets_ImageEffects_PostEffectsHelper__OnRenderImage
               (UnityStandardAssets_ImageEffects_PostEffectsHelper_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,MethodInfo *method
               )

{
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


// UnityStandardAssets.ImageEffects.PostEffectsHelper$$DrawLowLevelPlaneAlignedWithCamera
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawLowLevelPlaneAlignedWithCamera (float dist, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* material, UnityEngine_Camera_o* cameraForProjectionMatrix, const MethodInfo* method);
// 0x4585480

void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawLowLevelPlaneAlignedWithCamera
               (float dist,UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *dest,
               UnityEngine_Material_o *material,UnityEngine_Camera_o *cameraForProjectionMatrix,
               MethodInfo *method)

{
  UnityEngine_Matrix4x4_o mat;
  int32_t iVar1;
  int iVar2;
  UnityEngine_Material_o *__this;
  int iVar3;
  System_String_o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  System_String_o *value;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float x;
  float y;
  UnityEngine_Matrix4x4_Fields local_60;
  
  if (g_data_057af0ef == '\0') {
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    g_data_057af0ef = '\x01';
  }
  __this_00 = (System_String_o *)0x0;
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  if (material != (UnityEngine_Material_o *)0x0) {
    __this_00 = "_MainTex";
    UnityEngine_Material__SetTexture(material,"_MainTex",(UnityEngine_Texture_o *)source,(MethodInfo *)0x0);
    UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
    dest = (UnityEngine_RenderTexture_o *)0x0;
    UnityEngine_GL__LoadIdentity((MethodInfo *)0x0);
    if (cameraForProjectionMatrix != (UnityEngine_Camera_o *)0x0) {
      iVar3 = 0;
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
      fVar5 = UnityEngine_Camera__get_fieldOfView(cameraForProjectionMatrix,(MethodInfo *)0x0);
      fVar5 = fVar5 * 0.5 * 0.017453292;
      fVar6 = cosf(fVar5);
      fVar5 = sinf(fVar5);
      fVar7 = UnityEngine_Camera__get_aspect(cameraForProjectionMatrix,(MethodInfo *)0x0);
      iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
      if (0 < iVar1) {
        fVar6 = fVar6 / fVar5;
        x = (fVar7 / -fVar6) * dist;
        fVar7 = (fVar7 / fVar6) * dist;
        fVar5 = (-1.0 / fVar6) * dist;
        y = (1.0 / fVar6) * dist;
        fVar6 = -dist;
        do {
          UnityEngine_Material__SetPass(material,iVar3,(MethodInfo *)0x0);
          UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
          UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
          UnityEngine_GL__Vertex3(x,fVar5,fVar6,(MethodInfo *)0x0);
          UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
          UnityEngine_GL__Vertex3(fVar7,fVar5,fVar6,(MethodInfo *)0x0);
          UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
          UnityEngine_GL__Vertex3(fVar7,y,fVar6,(MethodInfo *)0x0);
          UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
          UnityEngine_GL__Vertex3(x,y,fVar6,(MethodInfo *)0x0);
          UnityEngine_GL__End((MethodInfo *)0x0);
          iVar3 = iVar3 + 1;
          iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
        } while (iVar3 < iVar1);
      }
      UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
  value = (System_String_o *)0x0;
  UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
  if (__this_00 == (System_String_o *)0x0) {
label_04585b59:
    fVar5 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057af0f0 == '\0') {
      il2cpp_runtime_helper_023445d0(&"_MainTex");
      g_data_057af0f0 = '\x01';
    }
    UnityEngine_RenderTexture__set_active((UnityEngine_RenderTexture_o *)__this_01,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Material_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
      return;
    }
    iVar3 = 0;
    UnityEngine_Material__SetTexture(__this,"_MainTex",(UnityEngine_Texture_o *)value,(MethodInfo *)0x0);
    UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
    UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
    iVar1 = UnityEngine_Material__get_passCount(__this,(MethodInfo *)0x0);
    if (0 < iVar1) {
      do {
        UnityEngine_Material__SetPass(__this,iVar3,(MethodInfo *)0x0);
        UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
        UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
        UnityEngine_GL__Vertex3(fVar5,in_XMM2_Da,0.1,(MethodInfo *)0x0);
        UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
        UnityEngine_GL__Vertex3(in_XMM1_Da,in_XMM2_Da,0.1,(MethodInfo *)0x0);
        UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
        UnityEngine_GL__Vertex3(in_XMM1_Da,in_XMM3_Da,0.1,(MethodInfo *)0x0);
        UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
        UnityEngine_GL__Vertex3(fVar5,in_XMM3_Da,0.1,(MethodInfo *)0x0);
        UnityEngine_GL__End((MethodInfo *)0x0);
        iVar3 = iVar3 + 1;
        iVar1 = UnityEngine_Material__get_passCount(__this,(MethodInfo *)0x0);
      } while (iVar3 < iVar1);
    }
    UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
    return;
  }
  __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
  iVar1 = UnityEngine_Material__get_passCount((UnityEngine_Material_o *)__this_00,(MethodInfo *)0x0);
  if (0 < iVar1) {
    do {
      iVar3 = (int)__this_01;
      value = __this_00;
      UnityEngine_Material__SetPass((UnityEngine_Material_o *)__this_00,iVar3,(MethodInfo *)0x0);
      if (dest == (UnityEngine_RenderTexture_o *)0x0) goto label_04585b59;
      iVar2 = (*(dest->klass->vtable)._5_get_width.methodPtr)(dest);
      fVar5 = 1.0 / (float)iVar2 + 0.0;
      UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar5,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar5,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,1.0,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._5_get_width.methodPtr)(dest,(dest->klass->vtable)._5_get_width.method);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      fVar5 = 1.0 - 1.0 / (float)iVar2;
      UnityEngine_GL__Vertex3(fVar5,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar5,1.0,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._7_get_height.methodPtr)
                        (dest,(dest->klass->vtable)._7_get_height.method);
      fVar5 = 1.0 / (float)iVar2 + 0.0;
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,fVar5,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,fVar5,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._7_get_height.methodPtr)();
      fVar5 = 1.0 - 1.0 / (float)iVar2;
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,fVar5,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,fVar5,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      in_XMM1_Da = 1.0;
      in_XMM2_Da = 0.1;
      UnityEngine_GL__Vertex3(0.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__End((MethodInfo *)0x0);
      uVar4 = iVar3 + 1;
      __this_01 = (UnityEngine_MonoBehaviour_o *)(ulong)uVar4;
      iVar1 = UnityEngine_Material__get_passCount((UnityEngine_Material_o *)__this_00,(MethodInfo *)0x0);
    } while ((int)uVar4 < iVar1);
  }
  UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsHelper$$DrawBorder
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawBorder (UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4585760

void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawBorder
               (UnityEngine_RenderTexture_o *dest,UnityEngine_Material_o *material,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  UnityEngine_Material_o *__this;
  int iVar3;
  UnityEngine_MonoBehaviour_o *__this_00;
  UnityEngine_Texture_o *value;
  uint uVar4;
  float in_XMM1_Da;
  float fVar5;
  float in_XMM2_Da;
  float in_XMM3_Da;
  
  __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
  value = (UnityEngine_Texture_o *)0x0;
  UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
  if (material == (UnityEngine_Material_o *)0x0) {
label_04585b59:
    fVar5 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057af0f0 == '\0') {
      il2cpp_runtime_helper_023445d0(&"_MainTex");
      g_data_057af0f0 = '\x01';
    }
    UnityEngine_RenderTexture__set_active((UnityEngine_RenderTexture_o *)__this_00,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Material_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
      return;
    }
    iVar3 = 0;
    UnityEngine_Material__SetTexture(__this,"_MainTex",value,(MethodInfo *)0x0);
    UnityEngine_GL__PushMatrix((MethodInfo *)0x0);
    UnityEngine_GL__LoadOrtho((MethodInfo *)0x0);
    iVar1 = UnityEngine_Material__get_passCount(__this,(MethodInfo *)0x0);
    if (0 < iVar1) {
      do {
        UnityEngine_Material__SetPass(__this,iVar3,(MethodInfo *)0x0);
        UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
        UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
        UnityEngine_GL__Vertex3(fVar5,in_XMM2_Da,0.1,(MethodInfo *)0x0);
        UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
        UnityEngine_GL__Vertex3(in_XMM1_Da,in_XMM2_Da,0.1,(MethodInfo *)0x0);
        UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
        UnityEngine_GL__Vertex3(in_XMM1_Da,in_XMM3_Da,0.1,(MethodInfo *)0x0);
        UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
        UnityEngine_GL__Vertex3(fVar5,in_XMM3_Da,0.1,(MethodInfo *)0x0);
        UnityEngine_GL__End((MethodInfo *)0x0);
        iVar3 = iVar3 + 1;
        iVar1 = UnityEngine_Material__get_passCount(__this,(MethodInfo *)0x0);
      } while (iVar3 < iVar1);
    }
    UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
    return;
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
  iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
  if (0 < iVar1) {
    do {
      iVar3 = (int)__this_00;
      value = (UnityEngine_Texture_o *)material;
      UnityEngine_Material__SetPass(material,iVar3,(MethodInfo *)0x0);
      if (dest == (UnityEngine_RenderTexture_o *)0x0) goto label_04585b59;
      iVar2 = (*(dest->klass->vtable)._5_get_width.methodPtr)(dest);
      fVar5 = 1.0 / (float)iVar2 + 0.0;
      UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar5,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar5,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,1.0,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._5_get_width.methodPtr)(dest,(dest->klass->vtable)._5_get_width.method);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      fVar5 = 1.0 - 1.0 / (float)iVar2;
      UnityEngine_GL__Vertex3(fVar5,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(fVar5,1.0,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._7_get_height.methodPtr)
                        (dest,(dest->klass->vtable)._7_get_height.method);
      fVar5 = 1.0 / (float)iVar2 + 0.0;
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,0.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,fVar5,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,fVar5,0.1,(MethodInfo *)0x0);
      iVar2 = (*(dest->klass->vtable)._7_get_height.methodPtr)();
      fVar5 = 1.0 - 1.0 / (float)iVar2;
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(0.0,fVar5,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,fVar5,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(1.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      in_XMM1_Da = 1.0;
      in_XMM2_Da = 0.1;
      UnityEngine_GL__Vertex3(0.0,1.0,0.1,(MethodInfo *)0x0);
      UnityEngine_GL__End((MethodInfo *)0x0);
      uVar4 = iVar3 + 1;
      __this_00 = (UnityEngine_MonoBehaviour_o *)(ulong)uVar4;
      iVar1 = UnityEngine_Material__get_passCount(material,(MethodInfo *)0x0);
    } while ((int)uVar4 < iVar1);
  }
  UnityEngine_GL__PopMatrix((MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.PostEffectsHelper$$DrawLowLevelQuad
// il2cpp: void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawLowLevelQuad (float x1, float x2, float y1, float y2, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4585b60

void UnityStandardAssets_ImageEffects_PostEffectsHelper__DrawLowLevelQuad
               (float x1,float x2,float y1,float y2,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *dest,UnityEngine_Material_o *material,MethodInfo *method)

{
  int32_t iVar1;
  int pass;
  
  if (g_data_057af0f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    g_data_057af0f0 = '\x01';
  }
  UnityEngine_RenderTexture__set_active(dest,(MethodInfo *)0x0);
  if (material == (UnityEngine_Material_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)dest,(MethodInfo *)0x0);
    return;
  }
  pass = 0;
  UnityEngine_Material__SetTexture(material,"_MainTex",(UnityEngine_Texture_o *)source,(MethodInfo *)0x0);
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
// 0x4585d00

void UnityStandardAssets_ImageEffects_PostEffectsHelper___ctor
               (UnityStandardAssets_ImageEffects_PostEffectsHelper_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


