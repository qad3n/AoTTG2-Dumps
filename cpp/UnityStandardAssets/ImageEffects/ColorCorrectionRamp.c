// Type: UnityStandardAssets.ImageEffects.ColorCorrectionRamp
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/ColorCorrectionRamp.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/ColorCorrectionRamp.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.ColorCorrectionRamp$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionRamp__OnRenderImage (UnityStandardAssets_ImageEffects_ColorCorrectionRamp_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x425b630

void UnityStandardAssets_ImageEffects_ColorCorrectionRamp__OnRenderImage
               (UnityStandardAssets_ImageEffects_ColorCorrectionRamp_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  MethodInfo *pMVar2;
  
  pMVar2 = (MethodInfo *)source;
  if (DAT_0570524a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    il2cpp_init_method_metadata(&"_RampTex");
    DAT_0570524a = '\x01';
  }
  pUVar1 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                     ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar2);
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    pMVar2 = "_RampTex";
    UnityEngine_Material__SetTexture
              (pUVar1,(System_String_o *)"_RampTex",(__this->fields).textureRamp,(MethodInfo *)0x0
              );
    pUVar1 = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                       ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,pMVar2);
    if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,pUVar1,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.ColorCorrectionRamp$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_ColorCorrectionRamp___ctor (UnityStandardAssets_ImageEffects_ColorCorrectionRamp_o* __this, const MethodInfo* method);
// 0x425b7a0

void UnityStandardAssets_ImageEffects_ColorCorrectionRamp___ctor
               (UnityStandardAssets_ImageEffects_ColorCorrectionRamp_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


