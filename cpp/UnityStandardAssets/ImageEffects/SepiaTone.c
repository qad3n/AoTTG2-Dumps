// Type: UnityStandardAssets.ImageEffects.SepiaTone
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/SepiaTone.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/SepiaTone.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.SepiaTone$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_SepiaTone__OnRenderImage (UnityStandardAssets_ImageEffects_SepiaTone_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x4587d80

void UnityStandardAssets_ImageEffects_SepiaTone__OnRenderImage
               (UnityStandardAssets_ImageEffects_SepiaTone_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  UnityEngine_Material_o *mat;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)source;
  if (g_data_057af0fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Graphics);
    g_data_057af0fe = '\x01';
  }
  mat = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                  ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,method_00);
  if (*(int *)(TypeInfo_Graphics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Graphics__Blit_4dc2ad0((UnityEngine_Texture_o *)source,destination,mat,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.SepiaTone$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_SepiaTone___ctor (UnityStandardAssets_ImageEffects_SepiaTone_o* __this, const MethodInfo* method);
// 0x4587df0

void UnityStandardAssets_ImageEffects_SepiaTone___ctor
               (UnityStandardAssets_ImageEffects_SepiaTone_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


