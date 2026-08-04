// Type: UnityStandardAssets.ImageEffects.ColorCorrectionRamp
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ColorCorrectionRamp.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ColorCorrectionRamp.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.ColorCorrectionRamp$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionRamp__OnRenderImage (UnityStandardAssets_ImageEffects_ColorCorrectionRamp_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4580730

void UnityStandardAssets_ImageEffects_ColorCorrectionRamp__OnRenderImage
               (UnityStandardAssets_ImageEffects_ColorCorrectionRamp_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,MethodInfo *method
               )

{
  UnityEngine_Object_o *x;
  UnityEngine_Shader_o *shader;
  bool_conflict bVar1;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *pMVar3;
  UnityStandardAssets_ImageEffects_ColorCorrectionRamp_o *pUVar4;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  pMVar3 = (MethodInfo *)source;
  if (g_data_057af0c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_RampTex");
    g_data_057af0c6 = '\x01';
  }
  pUVar4 = __this;
  pUVar2 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                     ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar3);
  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
    pMVar3 = "_RampTex";
    UnityEngine_Material__SetTexture
              (pUVar2,(System_String_o *)"_RampTex",(__this->fields).textureRamp,(MethodInfo *)0x0);
    pUVar2 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                       ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar3);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)source,destination,pUVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af0d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af0d8 = '\x01';
  }
  x = (UnityEngine_Object_o *)(pUVar4->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    shader = (pUVar4->fields).shader;
    pUVar2 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    UnityEngine_Material___ctor(pUVar2,shader,(MethodInfo *)0x0);
    (pUVar4->fields).m_Material = pUVar2;
    il2cpp_runtime_helper_022b4080(&(pUVar4->fields).m_Material);
    __this_00 = (UnityEngine_MonoBehaviour_o *)(pUVar4->fields).m_Material;
    if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_00,0x3d,(MethodInfo *)0x0);
  }
  return;
}


// UnityStandardAssets.ImageEffects.ColorCorrectionRamp$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionRamp___ctor (UnityStandardAssets_ImageEffects_ColorCorrectionRamp_o* __this, const MethodInfo* method);
// 0x45808a0

void UnityStandardAssets_ImageEffects_ColorCorrectionRamp___ctor
               (UnityStandardAssets_ImageEffects_ColorCorrectionRamp_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


