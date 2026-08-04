// Type: UnityStandardAssets.ImageEffects.Grayscale
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Grayscale.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Grayscale.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.Grayscale$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_Grayscale__OnRenderImage (UnityStandardAssets_ImageEffects_Grayscale_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4582c50

void UnityStandardAssets_ImageEffects_Grayscale__OnRenderImage
               (UnityStandardAssets_ImageEffects_Grayscale_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  MethodInfo *pMVar2;
  UnityStandardAssets_ImageEffects_Grayscale_o *__this_00;
  
  pMVar2 = (MethodInfo *)source;
  if (g_data_057af0d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    il2cpp_runtime_helper_023445d0(&"_RampOffset");
    il2cpp_runtime_helper_023445d0(&"_RampTex");
    g_data_057af0d6 = '\x01';
  }
  __this_00 = __this;
  pUVar1 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                     ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar2);
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    pMVar2 = "_RampTex";
    UnityEngine_Material__SetTexture
              (pUVar1,(System_String_o *)"_RampTex",(__this->fields).textureRamp,(MethodInfo *)0x0);
    __this_00 = __this;
    pUVar1 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                       ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar2);
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      pMVar2 = "_RampOffset";
      UnityEngine_Material__SetFloat
                (pUVar1,(System_String_o *)"_RampOffset",(__this->fields).rampOffset,(MethodInfo *)0x0);
      pUVar1 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                         ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar2);
      if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)source,destination,pUVar1,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Grayscale$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Grayscale___ctor (UnityStandardAssets_ImageEffects_Grayscale_o* __this, const MethodInfo* method);
// 0x4582d20

void UnityStandardAssets_ImageEffects_Grayscale___ctor
               (UnityStandardAssets_ImageEffects_Grayscale_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


