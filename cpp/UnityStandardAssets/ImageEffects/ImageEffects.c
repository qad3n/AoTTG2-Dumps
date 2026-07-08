// Type: UnityStandardAssets.ImageEffects.ImageEffects
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ImageEffects.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ImageEffects.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.ImageEffects$$RenderDistortion
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffects__RenderDistortion (UnityEngine_Material_o* material, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, float angle, UnityEngine_Vector2_o center, UnityEngine_Vector2_o radius, const MethodInfo* method);
// 0x425dd40

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
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector3_o pos;
  UnityEngine_Vector2_Fields local_f8;
  UnityEngine_Matrix4x4_o local_e8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_78._8_4_ = in_XMM2_Dc;
  local_78._0_8_ = radius.fields;
  local_78._12_4_ = in_XMM2_Dd;
  if (DAT_0570525e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_Angle");
    il2cpp_init_method_metadata(&"_RotationMatrix");
    il2cpp_init_method_metadata(&"_CenterRadius");
    DAT_0570525e = '\x01';
  }
  local_38._0_4_ = 0.0;
  local_38._4_4_ = 0.0;
  uStack_30._0_4_ = 0.0;
  uStack_30._4_4_ = 0.0;
  local_48._0_4_ = 0.0;
  local_48._4_4_ = 0.0;
  uStack_40._0_4_ = 0.0;
  uStack_40._4_4_ = 0.0;
  local_58._0_4_ = 0.0;
  local_58._4_4_ = 0.0;
  uStack_50._0_4_ = 0.0;
  uStack_50._4_4_ = 0.0;
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
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
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
    if (DAT_056fe077 == '\0') {
      local_98._8_4_ = extraout_XMM0_Dc;
      local_98._0_8_ = UVar9.fields._0_8_;
      local_98._12_4_ = extraout_XMM0_Dd;
      local_a8._8_4_ = in_XMM0_Dc;
      local_a8._0_8_ = UVar9.fields._8_8_;
      local_a8._12_4_ = in_XMM0_Dd;
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
      fVar5 = (float)local_98._0_4_;
      fVar6 = (float)local_98._4_4_;
      fVar7 = (float)local_a8._0_4_;
      fVar8 = (float)local_a8._4_4_;
    }
    pos.fields.z = fVar1;
    pos.fields.x = (float)(undefined4)local_88;
    pos.fields.y = (float)local_88._4_4_;
    UVar9.fields.y = fVar6;
    UVar9.fields.x = fVar5;
    UVar9.fields.w = fVar8;
    UVar9.fields.z = fVar7;
    UnityEngine_Matrix4x4__TRS
              (&local_e8,pos,UVar9,
               (UnityEngine_Vector3_o)
               *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
               (MethodInfo *)0x0);
    local_38._0_4_ = local_e8.fields.m03;
    local_38._4_4_ = local_e8.fields.m13;
    uStack_30._0_4_ = local_e8.fields.m23;
    uStack_30._4_4_ = local_e8.fields.m33;
    local_48._0_4_ = local_e8.fields.m02;
    local_48._4_4_ = local_e8.fields.m12;
    uStack_40._0_4_ = local_e8.fields.m22;
    uStack_40._4_4_ = local_e8.fields.m32;
    local_58._0_4_ = local_e8.fields.m01;
    local_58._4_4_ = local_e8.fields.m11;
    uStack_50._0_4_ = local_e8.fields.m21;
    uStack_50._4_4_ = local_e8.fields.m31;
    local_68 = CONCAT44(local_e8.fields.m10,local_e8.fields.m00);
    uStack_60 = CONCAT44(local_e8.fields.m30,local_e8.fields.m20);
    if (material != (UnityEngine_Material_o *)0x0) {
      value.fields.m10 = local_e8.fields.m10;
      value.fields.m00 = local_e8.fields.m00;
      value.fields.m30 = local_e8.fields.m30;
      value.fields.m20 = local_e8.fields.m20;
      value.fields.m01 = local_e8.fields.m01;
      value.fields.m11 = local_e8.fields.m11;
      value.fields.m21 = local_e8.fields.m21;
      value.fields.m31 = local_e8.fields.m31;
      value.fields.m02 = local_e8.fields.m02;
      value.fields.m12 = local_e8.fields.m12;
      value.fields.m22 = local_e8.fields.m22;
      value.fields.m32 = local_e8.fields.m32;
      value.fields.m03 = local_e8.fields.m03;
      value.fields.m13 = local_e8.fields.m13;
      value.fields.m23 = local_e8.fields.m23;
      value.fields.m33 = local_e8.fields.m33;
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
        il2cpp_init_class();
      }
      UnityEngine_Graphics__Blit
                ((UnityEngine_Texture_o *)source,destination,material,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ImageEffects$$Blit
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffects__Blit (UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, const MethodInfo* method);
// 0x425e020

void UnityStandardAssets_ImageEffects_ImageEffects__Blit
               (UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *dest,
               MethodInfo *method)

{
  if (DAT_0570525f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    DAT_0570525f = '\x01';
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,dest,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ImageEffects$$BlitWithMaterial
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffects__BlitWithMaterial (UnityEngine_Material_o* material, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* dest, const MethodInfo* method);
// 0x425e080

void UnityStandardAssets_ImageEffects_ImageEffects__BlitWithMaterial
               (UnityEngine_Material_o *material,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *dest,MethodInfo *method)

{
  if (DAT_05705260 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    DAT_05705260 = '\x01';
  }
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,dest,material,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.ImageEffects$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ImageEffects___ctor (UnityStandardAssets_ImageEffects_ImageEffects_o* __this, const MethodInfo* method);
// 0x425e0e0

void UnityStandardAssets_ImageEffects_ImageEffects___ctor
               (UnityStandardAssets_ImageEffects_ImageEffects_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


