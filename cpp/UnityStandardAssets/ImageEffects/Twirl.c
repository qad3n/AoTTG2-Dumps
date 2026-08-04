// Type: UnityStandardAssets.ImageEffects.Twirl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Twirl.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Twirl.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.Twirl$$OnRenderImage
// il2cpp: void UnityStandardAssets_ImageEffects_Twirl__OnRenderImage (UnityStandardAssets_ImageEffects_Twirl_o* __this, UnityEngine_RenderTexture_o* source, UnityEngine_RenderTexture_o* destination, const MethodInfo* method);
// 0x458a110

void UnityStandardAssets_ImageEffects_Twirl__OnRenderImage
               (UnityStandardAssets_ImageEffects_Twirl_o *__this,UnityEngine_RenderTexture_o *source,
               UnityEngine_RenderTexture_o *destination,MethodInfo *method)

{
  UnityEngine_Material_o *material;
  
  material = UnityStandardAssets_ImageEffects_ImageEffectBase__get_material
                       ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,(MethodInfo *)0x0);
  UnityStandardAssets_ImageEffects_ImageEffects__RenderDistortion
            (material,source,destination,(__this->fields).angle,
             (UnityEngine_Vector2_o)(__this->fields).center.fields,
             (UnityEngine_Vector2_o)(__this->fields).radius.fields,(MethodInfo *)0x0);
  return;
}


// UnityStandardAssets.ImageEffects.Twirl$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Twirl___ctor (UnityStandardAssets_ImageEffects_Twirl_o* __this, const MethodInfo* method);
// 0x458a150

void UnityStandardAssets_ImageEffects_Twirl___ctor
               (UnityStandardAssets_ImageEffects_Twirl_o *__this,MethodInfo *method)

{
  (__this->fields).radius.fields = (UnityEngine_Vector2_Fields)0x3e99999a3e99999a;
  (__this->fields).angle = 50.0;
  (__this->fields).center.fields.x = 0.5;
  (__this->fields).center.fields.y = 0.5;
  UnityStandardAssets_ImageEffects_ImageEffectBase___ctor
            ((UnityStandardAssets_ImageEffects_ImageEffectBase_o *)__this,(MethodInfo *)0x0);
  return;
}


