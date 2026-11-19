// Type: CustomSkins.HumanCostumeCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/HumanCostumeCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanCostumeCustomSkinPart.cs
// --------------------------------

// CustomSkins.HumanCostumeCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_HumanCostumeCustomSkinPart___ctor (CustomSkins_HumanCostumeCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x5961520

void CustomSkins_HumanCostumeCustomSkinPart___ctor
               (CustomSkins_HumanCostumeCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  MethodInfo *in_stack_fffffffffffffff0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,textureScale,true,
             in_stack_fffffffffffffff0);
  return;
}


// CustomSkins.HumanCostumeCustomSkinPart$$CreateMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_HumanCostumeCustomSkinPart__CreateMaterial (CustomSkins_HumanCostumeCustomSkinPart_o* __this, const MethodInfo* method);
// 0x5964f60

UnityEngine_Material_o *
CustomSkins_HumanCostumeCustomSkinPart__CreateMaterial
          (CustomSkins_HumanCostumeCustomSkinPart_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Material_o *pUVar2;
  
  if (Il2CppMethodInitialized_0754593f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    Il2CppMethodInitialized_0754593f = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    pUVar2 = Characters_HumanSetupMaterials__GetCustomSkinMaterial((MethodInfo *)0x0);
    return pUVar2;
  }
  pUVar2 = Characters_HumanSetupMaterials__GetCustomSkinMaterial((MethodInfo *)0x0);
  return pUVar2;
}


