// Type: CustomSkins.HumanCostumeCustomSkinPart
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomSkins/HumanCostumeCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanCostumeCustomSkinPart.cs
// --------------------------------

// CustomSkins.HumanCostumeCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_HumanCostumeCustomSkinPart___ctor (CustomSkins_HumanCostumeCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x181e8b130

void CustomSkins_HumanCostumeCustomSkinPart___ctor
               (CustomSkins_HumanCostumeCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o *textureScale,MethodInfo *method)

{
  System_Nullable_Vector2__Fields local_18 [2];
  
  local_18[0].hasValue = (textureScale->fields).hasValue;
  local_18[0]._1_3_ = *(undefined3 *)&(textureScale->fields).field_0x1;
  local_18[0].value.fields.x = (textureScale->fields).value.fields.x;
  local_18[0].value.fields.y = (textureScale->fields).value.fields.y;
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,
             (System_Nullable_Vector2__o *)local_18,true,(MethodInfo *)0x0);
  return;
}


// CustomSkins.HumanCostumeCustomSkinPart$$CreateMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_HumanCostumeCustomSkinPart__CreateMaterial (CustomSkins_HumanCostumeCustomSkinPart_o* __this, const MethodInfo* method);
// 0x181e8b0f0

UnityEngine_Material_o *
CustomSkins_HumanCostumeCustomSkinPart__CreateMaterial
          (CustomSkins_HumanCostumeCustomSkinPart_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  
  if (Il2CppMethodInitialized_184344fb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    Il2CppMethodInitialized_184344fb1 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pUVar1 = Characters_HumanSetupMaterials__GetCustomSkinMaterial((MethodInfo *)0x0);
  return pUVar1;
}


