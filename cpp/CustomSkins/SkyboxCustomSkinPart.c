// Type: CustomSkins.SkyboxCustomSkinPart
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/SkyboxCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/SkyboxCustomSkinPart.cs
// --------------------------------

// CustomSkins.SkyboxCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinPart___ctor (CustomSkins_SkyboxCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, UnityEngine_Material_o* skyboxMaterial, System_String_o* textureName, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x181e94520

void CustomSkins_SkyboxCustomSkinPart___ctor
               (CustomSkins_SkyboxCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               UnityEngine_Material_o *skyboxMaterial,System_String_o *textureName,System_String_o *rendererId
               ,int32_t maxSize,System_Nullable_Vector2__o *textureScale,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  System_Nullable_Vector2__Fields local_38 [2];
  
  local_38[0].hasValue = (textureScale->fields).hasValue;
  local_38[0]._1_3_ = *(undefined3 *)&(textureScale->fields).field_0x1;
  local_38[0].value.fields.x = (textureScale->fields).value.fields.x;
  local_38[0].value.fields.y = (textureScale->fields).value.fields.y;
  if (Il2CppMethodInitialized_184344fa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_Value);
    Il2CppMethodInitialized_184344fa1 = '\x01';
  }
  (__this->fields)._defaultTextureScale.fields.x = 1.0;
  (__this->fields)._defaultTextureScale.fields.y = 1.0;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._loader = loader;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._loader,loader);
  (__this->fields)._renderers = (System_Collections_Generic_List_Renderer__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._renderers,(void *)0x0);
  (__this->fields)._rendererId = rendererId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rendererId,rendererId);
  (__this->fields)._maxSize = maxSize;
  if (local_38[0].hasValue == false) {
    fVar2 = (__this->fields)._defaultTextureScale.fields.x;
    textureScale._4_4_ = (__this->fields)._defaultTextureScale.fields.y;
  }
  else {
    UVar1 = System_Nullable_Vector2___get_Value
                      ((System_Nullable_Vector2__o *)local_38,
                       (MethodInfo_AE2BD0 *)MethodInfo_System_Nullable_Vector2_get_Value);
    fVar2 = UVar1.fields.x;
    textureScale._4_4_ = UVar1.fields.y;
  }
  (__this->fields)._textureScale.fields.x = fVar2;
  (__this->fields)._textureScale.fields.y = textureScale._4_4_;
  (__this->fields)._useTransparentMaterial = false;
  (__this->fields)._skyboxMaterial = skyboxMaterial;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._skyboxMaterial,skyboxMaterial);
  (__this->fields)._textureName = textureName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._textureName,textureName);
  return;
}


// CustomSkins.SkyboxCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_SkyboxCustomSkinPart__IsValidPart (CustomSkins_SkyboxCustomSkinPart_o* __this, const MethodInfo* method);
// 0x181e94400

bool CustomSkins_SkyboxCustomSkinPart__IsValidPart
               (CustomSkins_SkyboxCustomSkinPart_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344fb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344fb4 = '\x01';
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
// 0x180547020

void
CustomSkins_SkyboxCustomSkinPart__DisableRenderers(CustomSkins_SkyboxCustomSkinPart_o* __this, MethodInfo* method)

{
  return;
}


// CustomSkins.SkyboxCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_SkyboxCustomSkinPart__SetMaterial (CustomSkins_SkyboxCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x181e94450

void CustomSkins_SkyboxCustomSkinPart__SetMaterial
               (CustomSkins_SkyboxCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method
               )

{
  System_String_o *name;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Texture_o *value;
  
  if (material != (UnityEngine_Material_o *)0x0) {
    name = (__this->fields)._textureName;
    __this_00 = (__this->fields)._skyboxMaterial;
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
// 0x181e944a0

UnityEngine_Material_o *
CustomSkins_SkyboxCustomSkinPart__SetNewTexture
          (CustomSkins_SkyboxCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  UnityEngine_Material_o *__this_00;
  
  if (texture != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)texture,1,(MethodInfo *)0x0);
    __this_00 = CustomSkins_SkyboxCustomSkinLoader__CreateSkyboxMaterial((MethodInfo *)0x0);
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


