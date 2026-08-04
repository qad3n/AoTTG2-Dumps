// Type: UnityStandardAssets.ImageEffects.ImageEffects
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ImageEffects.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ImageEffects.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.ImageEffects$$RenderDistortion
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffects__RenderDistortion (UnityEngine_Material_o* material, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, float angle, UnityEngine_Vector2_o center, UnityEngine_Vector2_o radius, const MethodInfo* method);
// 0x4582e40

void UnityStandardAssets_ImageEffects_ImageEffects__RenderDistortion
               (UnityEngine_Material_o *material,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,float angle,UnityEngine_Vector2_o center,
               UnityEngine_Vector2_o radius,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  undefined1 auVar3 [12];
  UnityEngine_Matrix4x4_o value;
  undefined1 auVar4 [16];
  UnityEngine_RenderTexture_o *dest;
  UnityEngine_Texture_o *source_00;
  uint in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar5;
  float fVar6;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o pos;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector2_Fields local_f8;
  UnityEngine_Texture_o local_e8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  intptr_t local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_78._8_4_ = in_XMM2_Dc;
  local_78._0_8_ = radius.fields;
  local_78._12_4_ = in_XMM2_Dd;
  dest = source;
  source_00 = (UnityEngine_Texture_o *)material;
  if (g_data_057af0da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_Angle");
    il2cpp_runtime_helper_023445d0(&"_RotationMatrix");
    source_00 = (UnityEngine_Texture_o *)&"_CenterRadius";
    il2cpp_runtime_helper_023445d0();
    g_data_057af0da = '\x01';
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (source != (UnityEngine_RenderTexture_o *)0x0) {
    UVar2 = UnityEngine_Texture__get_texelSize((UnityEngine_Texture_o *)source,(MethodInfo *)0x0);
    local_f8 = center.fields;
    if (UVar2.fields.y < 0.0) {
      local_f8.x = center.fields.x;
      local_f8.y = center.fields.y;
      angle = -angle;
      in_XMM0_Dc = in_XMM0_Dc ^ 0x80000000;
      in_XMM0_Dd = in_XMM0_Dd ^ 0x80000000;
      local_f8.y = 1.0 - local_f8.y;
    }
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    local_88 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    uStack_80 = 0;
    fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    auVar3._4_8_ = 0;
    auVar3._0_4_ = angle * 0.017453292;
    UVar9 = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o)(auVar3 << 0x40),(MethodInfo *)0x0);
    fVar5 = UVar9.fields.x;
    fVar6 = UVar9.fields.y;
    fVar7 = UVar9.fields.z;
    fVar8 = UVar9.fields.w;
    if (g_data_057a6932 == '\0') {
      local_98._8_4_ = extraout_XMM0_Dc;
      local_98._0_8_ = UVar9.fields._0_8_;
      local_98._12_4_ = extraout_XMM0_Dd;
      local_a8._8_4_ = in_XMM0_Dc;
      local_a8._0_8_ = UVar9.fields._8_8_;
      local_a8._12_4_ = in_XMM0_Dd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6932 = '\x01';
      fVar5 = (float)local_98._0_4_;
      fVar6 = (float)local_98._4_4_;
      fVar7 = (float)local_a8._0_4_;
      fVar8 = (float)local_a8._4_4_;
    }
    source_00 = &local_e8;
    dest = (UnityEngine_RenderTexture_o *)0x0;
    pos.fields.z = fVar1;
    pos.fields.x = (float)(undefined4)local_88;
    pos.fields.y = (float)local_88._4_4_;
    UVar9.fields.y = fVar6;
    UVar9.fields.x = fVar5;
    UVar9.fields.w = fVar8;
    UVar9.fields.z = fVar7;
    UnityEngine_Matrix4x4__TRS
              ((UnityEngine_Matrix4x4_o *)source_00,pos,UVar9,
               (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
               (MethodInfo *)0x0);
    local_38 = local_b8;
    uStack_30 = uStack_b0;
    local_48 = local_c8;
    uStack_40 = uStack_c0;
    local_58 = local_e8.fields.m_CachedPtr;
    uStack_50 = uStack_d0;
    local_68 = CONCAT44(local_e8.klass._4_4_,local_e8.klass._0_4_);
    uStack_60 = CONCAT44(local_e8.monitor._4_4_,local_e8.monitor._0_4_);
    if (material != (UnityEngine_Material_o *)0x0) {
      value.fields.m10 = (float)local_e8.klass._4_4_;
      value.fields.m00 = (float)local_e8.klass._0_4_;
      value.fields.m30 = (float)local_e8.monitor._4_4_;
      value.fields.m20 = (float)local_e8.monitor._0_4_;
      value.fields.m01 = (float)(undefined4)local_e8.fields.m_CachedPtr;
      value.fields.m11 = (float)local_e8.fields.m_CachedPtr._4_4_;
      value.fields.m21 = (float)(undefined4)uStack_d0;
      value.fields.m31 = (float)uStack_d0._4_4_;
      value.fields.m02 = (float)(undefined4)local_c8;
      value.fields.m12 = (float)local_c8._4_4_;
      value.fields.m22 = (float)(undefined4)uStack_c0;
      value.fields.m32 = (float)uStack_c0._4_4_;
      value.fields.m03 = (float)(undefined4)local_b8;
      value.fields.m13 = (float)local_b8._4_4_;
      value.fields.m23 = (float)(undefined4)uStack_b0;
      value.fields.m33 = (float)uStack_b0._4_4_;
      UnityEngine_Material__SetMatrix(material,"_RotationMatrix",value,(MethodInfo *)0x0);
      auVar4 = local_78;
      value_00.fields.z = (float)local_78._0_4_;
      value_00.fields.w = (float)local_78._4_4_;
      value_00.fields.x = local_f8.x;
      value_00.fields.y = local_f8.y;
      local_78 = auVar4;
      UnityEngine_Material__SetVector(material,"_CenterRadius",value_00,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat(material,"_Angle",angle * 0.017453292,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0
                ((UnityEngine_Texture_o *)source,destination,material,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    g_data_057af0db = '\x01';
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit(source_00,dest,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ImageEffects$$Blit
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffects__Blit (UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, const MethodInfo* method);
// 0x4583120

void UnityStandardAssets_ImageEffects_ImageEffects__Blit
               (UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *dest,MethodInfo *method)

{
  if (g_data_057af0db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    g_data_057af0db = '\x01';
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,dest,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ImageEffects$$BlitWithMaterial
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffects__BlitWithMaterial (UnityEngine_Material_o* material, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, const MethodInfo* method);
// 0x4583180

void UnityStandardAssets_ImageEffects_ImageEffects__BlitWithMaterial
               (UnityEngine_Material_o *material,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *dest,MethodInfo *method)

{
  if (g_data_057af0dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    g_data_057af0dc = '\x01';
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)source,dest,material,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ImageEffects$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffects___ctor (UnityStandardAssets_ImageEffects_ImageEffects_o* __this, const MethodInfo* method);
// 0x45831e0

void UnityStandardAssets_ImageEffects_ImageEffects___ctor
               (UnityStandardAssets_ImageEffects_ImageEffects_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


