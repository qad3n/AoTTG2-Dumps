// Type: UnityStandardAssets.ImageEffects.SepiaTone
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/SepiaTone.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/SepiaTone.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.SepiaTone$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_SepiaTone__OnRenderImage (UnityStandardAssets_ImageEffects_SepiaTone_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4262c80

void UnityStandardAssets_ImageEffects_SepiaTone__OnRenderImage
               (UnityStandardAssets_ImageEffects_SepiaTone_o *__this,
               UnityEngine_RenderTexture_o *source,UnityEngine_RenderTexture_o *destination,
               MethodInfo *method)

{
  UnityEngine_Material_o *mat;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)source;
  if (DAT_05705282 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Graphics);
    DAT_05705282 = '\x01';
  }
  mat = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                  ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,method_00);
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)source,destination,mat,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.SepiaTone$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_SepiaTone___ctor (UnityStandardAssets_ImageEffects_SepiaTone_o* __this, const MethodInfo* method);
// 0x4262cf0

void UnityStandardAssets_ImageEffects_SepiaTone___ctor
               (UnityStandardAssets_ImageEffects_SepiaTone_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


