// Type: CustomSkins.SkyboxCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/SkyboxCustomSkinPart.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinParts/SkyboxCustomSkinPart.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.SkyboxCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinPart___ctor (CustomSkins_SkyboxCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, UnityEngine_Material_o* skyboxMaterial, System_String_o* textureName, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x42452c0

void CustomSkins_SkyboxCustomSkinPart___ctor
               (CustomSkins_SkyboxCustomSkinPart_o *__this,
               CustomSkins_BaseCustomSkinLoader_o *loader,UnityEngine_Material_o *skyboxMaterial,
               System_String_o *textureName,System_String_o *rendererId,int32_t maxSize,
               System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,
             (System_Collections_Generic_List_Renderer__o *)0x0,rendererId,maxSize,textureScale,0,
             in_stack_ffffffffffffffe0);
  (__this->fields)._skyboxMaterial = skyboxMaterial;
  il2cpp_runtime_glue(&(__this->fields)._skyboxMaterial,skyboxMaterial);
  (__this->fields)._textureName = textureName;
  il2cpp_runtime_glue(&(__this->fields)._textureName,textureName);
  return;
}


// CustomSkins.SkyboxCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_SkyboxCustomSkinPart__IsValidPart (CustomSkins_SkyboxCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4247ef0

bool_conflict
CustomSkins_SkyboxCustomSkinPart__IsValidPart
          (CustomSkins_SkyboxCustomSkinPart_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  
  if (DAT_057051dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057051dc = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._skyboxMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// CustomSkins.SkyboxCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_SkyboxCustomSkinPart__DisableRenderers (CustomSkins_SkyboxCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4247f40

void CustomSkins_SkyboxCustomSkinPart__DisableRenderers
               (CustomSkins_SkyboxCustomSkinPart_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.SkyboxCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_SkyboxCustomSkinPart__SetMaterial (CustomSkins_SkyboxCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4247f50

void CustomSkins_SkyboxCustomSkinPart__SetMaterial
               (CustomSkins_SkyboxCustomSkinPart_o *__this,UnityEngine_Material_o *material,
               MethodInfo *method)

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.SkyboxCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_SkyboxCustomSkinPart__SetNewTexture (CustomSkins_SkyboxCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x4247f90

UnityEngine_Material_o *
CustomSkins_SkyboxCustomSkinPart__SetNewTexture
          (CustomSkins_SkyboxCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,
          MethodInfo *method)

{
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_00;
  
  if (DAT_057051dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&"RenderFX/Skybox");
    DAT_057051dd = '\x01';
  }
  if (texture != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)texture,1,(MethodInfo *)0x0);
    shader = UnityEngine_Shader__Find("RenderFX/Skybox",(MethodInfo *)0x0);
    __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__CopyPropertiesFromMaterial
                (__this_00,(__this->fields)._skyboxMaterial,(MethodInfo *)0x0);
      UnityEngine_Material__SetTexture
                (__this_00,(__this->fields)._textureName,(UnityEngine_Texture_o *)texture,
                 (MethodInfo *)0x0);
      (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                (__this,__this_00,(__this->klass->vtable)._6_SetMaterial.method);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


