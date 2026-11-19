// Type: CustomSkins.HumanHairCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomSkins/HumanHairCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/HumanHairCustomSkinPart.cs
// --------------------------------

// CustomSkins.HumanHairCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_HumanHairCustomSkinPart___ctor (CustomSkins_HumanHairCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, System_Collections_Generic_List_Renderer__o* renderers, System_String_o* rendererId, int32_t maxSize, Characters_HumanSetup_o* setup, System_String_o* hairTexture, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x59614c0

void CustomSkins_HumanHairCustomSkinPart___ctor
               (CustomSkins_HumanHairCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               System_Collections_Generic_List_Renderer__o *renderers,System_String_o *rendererId,
               int32_t maxSize,Characters_HumanSetup_o *setup,System_String_o *hairTexture,
               System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,renderers,rendererId,maxSize,textureScale,true,
             in_stack_ffffffffffffffe0);
  (__this->fields)._hairTexture = hairTexture;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hairTexture);
  (__this->fields)._setup = setup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setup);
  return;
}


// CustomSkins.HumanHairCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_HumanHairCustomSkinPart__SetMaterial (CustomSkins_HumanHairCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5964fc0

void CustomSkins_HumanHairCustomSkinPart__SetMaterial
               (CustomSkins_HumanHairCustomSkinPart_o *__this,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07545940 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545940 = '\x01';
    method = extraout_RDX;
  }
  CustomSkins_BaseCustomSkinPart__SetMaterial((CustomSkins_BaseCustomSkinPart_o *)__this,material,method);
  pCVar1 = (__this->fields)._setup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._setup;
    if (pCVar1 == (Characters_HumanSetup_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_HumanSetup__RefreshHairMaterials(pCVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomSkins.HumanHairCustomSkinPart$$CreateMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_HumanHairCustomSkinPart__CreateMaterial (CustomSkins_HumanHairCustomSkinPart_o* __this, const MethodInfo* method);
// 0x5965050

UnityEngine_Material_o *
CustomSkins_HumanHairCustomSkinPart__CreateMaterial
          (CustomSkins_HumanHairCustomSkinPart_o *__this,MethodInfo *method)

{
  System_String_o *texture;
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_Material_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545941 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    Il2CppMethodInitialized_07545941 = '\x01';
  }
  method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
  bVar1 = System_String__op_Equality
                    ((__this->fields)._hairTexture,(System_String_o *)method_00,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = CustomSkins_BaseCustomSkinPart__CreateMaterial
                       ((CustomSkins_BaseCustomSkinPart_o *)__this,method_00);
    return pUVar2;
  }
  texture = (__this->fields)._hairTexture;
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pUVar2 = Characters_HumanSetupMaterials__GetHairMaterial(texture,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
  UnityEngine_Material___ctor_68dcfd0(__this_00,pUVar2,(MethodInfo *)0x0);
  return __this_00;
}


