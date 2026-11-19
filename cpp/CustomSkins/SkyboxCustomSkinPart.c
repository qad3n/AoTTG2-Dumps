// Type: CustomSkins.SkyboxCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomSkins/SkyboxCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/SkyboxCustomSkinPart.cs
// --------------------------------

// CustomSkins.SkyboxCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinPart___ctor (CustomSkins_SkyboxCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, UnityEngine_Material_o* skyboxMaterial, System_String_o* textureName, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x59620b0

void CustomSkins_SkyboxCustomSkinPart___ctor
               (CustomSkins_SkyboxCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               UnityEngine_Material_o *skyboxMaterial,System_String_o *textureName,System_String_o *rendererId
               ,int32_t maxSize,System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,
             (System_Collections_Generic_List_Renderer__o *)0x0,rendererId,maxSize,textureScale,false,
             in_stack_ffffffffffffffe0);
  (__this->fields)._skyboxMaterial = skyboxMaterial;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._skyboxMaterial);
  (__this->fields)._textureName = textureName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._textureName);
  return;
}


// CustomSkins.SkyboxCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_SkyboxCustomSkinPart__IsValidPart (CustomSkins_SkyboxCustomSkinPart_o* __this, const MethodInfo* method);
// 0x5965110

bool CustomSkins_SkyboxCustomSkinPart__IsValidPart
               (CustomSkins_SkyboxCustomSkinPart_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545942 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545942 = '\x01';
  }
  x = (__this->fields)._skyboxMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// CustomSkins.SkyboxCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_SkyboxCustomSkinPart__DisableRenderers (CustomSkins_SkyboxCustomSkinPart_o* __this, const MethodInfo* method);
// 0x5965160

void CustomSkins_SkyboxCustomSkinPart__DisableRenderers
               (CustomSkins_SkyboxCustomSkinPart_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.SkyboxCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_SkyboxCustomSkinPart__SetMaterial (CustomSkins_SkyboxCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5965170

void CustomSkins_SkyboxCustomSkinPart__SetMaterial
               (CustomSkins_SkyboxCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method
               )

{
  UnityEngine_Material_o *__this_00;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  
  if (material != (UnityEngine_Material_o *)0x0) {
    __this_00 = (__this->fields)._skyboxMaterial;
    name = (__this->fields)._textureName;
    value = UnityEngine_Material__GetTexture(material,name,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture(__this_00,name,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.SkyboxCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_SkyboxCustomSkinPart__SetNewTexture (CustomSkins_SkyboxCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x59651b0

UnityEngine_Material_o *
CustomSkins_SkyboxCustomSkinPart__SetNewTexture
          (CustomSkins_SkyboxCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  MethodInfo *method_00;
  
  if (texture != (UnityEngine_Texture2D_o *)0x0) {
    method_00 = (MethodInfo *)texture;
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)texture,1,(MethodInfo *)0x0);
    __this_00 = CustomSkins_SkyboxCustomSkinLoader__CreateSkyboxMaterial(method_00);
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture
                (__this_00,(__this->fields)._textureName,(UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                (__this,__this_00,(__this->klass->vtable)._6_SetMaterial.method);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


