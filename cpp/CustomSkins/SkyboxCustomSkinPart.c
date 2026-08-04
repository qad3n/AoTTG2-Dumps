// Type: CustomSkins.SkyboxCustomSkinPart
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/SkyboxCustomSkinPart.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/SkyboxCustomSkinPart.cs
// --------------------------------

// CustomSkins.SkyboxCustomSkinPart$$.ctor
// il2cpp: void CustomSkins_SkyboxCustomSkinPart___ctor (CustomSkins_SkyboxCustomSkinPart_o* __this, CustomSkins_BaseCustomSkinLoader_o* loader, UnityEngine_Material_o* skyboxMaterial, System_String_o* textureName, System_String_o* rendererId, int32_t maxSize, System_Nullable_Vector2__o textureScale, const MethodInfo* method);
// 0x4092450

void CustomSkins_SkyboxCustomSkinPart___ctor
               (CustomSkins_SkyboxCustomSkinPart_o *__this,CustomSkins_BaseCustomSkinLoader_o *loader,
               UnityEngine_Material_o *skyboxMaterial,System_String_o *textureName,System_String_o *rendererId
               ,int32_t maxSize,System_Nullable_Vector2__o textureScale,MethodInfo *method)

{
  ulong *puVar1;
  System_String_o **ppSVar2;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  CustomSkins_BaseCustomSkinPart___ctor
            ((CustomSkins_BaseCustomSkinPart_o *)__this,loader,
             (System_Collections_Generic_List_Renderer__o *)0x0,rendererId,maxSize,textureScale,0,
             in_stack_ffffffffffffffe0);
  (__this->fields)._skyboxMaterial = skyboxMaterial;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._skyboxMaterial,skyboxMaterial);
  (__this->fields)._textureName = textureName;
  ppSVar2 = &(__this->fields)._textureName;
  if (g_data_057ba470 != 0) {
    LOCK();
    puVar1 = (ulong *)((long)&g_data_05803fe8 + (ulong)((uint)((ulong)ppSVar2 >> 0xf) & 0x3fff8));
    *puVar1 = *puVar1 | 1L << ((byte)((ulong)ppSVar2 >> 0xc) & 0x3f);
    UNLOCK();
  }
  return;
}


// CustomSkins.SkyboxCustomSkinPart$$IsValidPart
// il2cpp: bool CustomSkins_SkyboxCustomSkinPart__IsValidPart (CustomSkins_SkyboxCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4094f50

bool_conflict
CustomSkins_SkyboxCustomSkinPart__IsValidPart(CustomSkins_SkyboxCustomSkinPart_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  
  if (g_data_057ac435 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac435 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._skyboxMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// CustomSkins.SkyboxCustomSkinPart$$DisableRenderers
// il2cpp: void CustomSkins_SkyboxCustomSkinPart__DisableRenderers (CustomSkins_SkyboxCustomSkinPart_o* __this, const MethodInfo* method);
// 0x4094fa0

void CustomSkins_SkyboxCustomSkinPart__DisableRenderers
               (CustomSkins_SkyboxCustomSkinPart_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.SkyboxCustomSkinPart$$SetMaterial
// il2cpp: void CustomSkins_SkyboxCustomSkinPart__SetMaterial (CustomSkins_SkyboxCustomSkinPart_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4094fb0

void CustomSkins_SkyboxCustomSkinPart__SetMaterial
               (CustomSkins_SkyboxCustomSkinPart_o *__this,UnityEngine_Material_o *material,MethodInfo *method
               )

{
  UnityEngine_Material_o *__this_00;
  System_String_o *name;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Texture_o *value;
  UnityEngine_Shader_o *shader;
  CustomSkins_SkyboxCustomSkinPart_o *__this_01;
  UnityEngine_Object_o *x;
  System_String_o *__this_02;
  System_String_o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_03;
  
  __this_02 = (System_String_o *)0x0;
  if (material != (UnityEngine_Material_o *)0x0) {
    __this_00 = (__this->fields)._skyboxMaterial;
    name = (__this->fields)._textureName;
    __this_02 = name;
    value = UnityEngine_Material__GetTexture(material,name,(MethodInfo *)0x0);
    __this = (CustomSkins_SkyboxCustomSkinPart_o *)material;
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetTexture(__this_00,name,value,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar1 = (System_String_o **)__this;
  if (g_data_057ac436 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    ppSVar1 = &"RenderFX/Skybox";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac436 = '\x01';
  }
  if (__this_02 != (System_String_o *)0x0) {
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)__this_02,1,(MethodInfo *)0x0);
    shader = UnityEngine_Shader__Find("RenderFX/Skybox",(MethodInfo *)0x0);
    __this_01 = (CustomSkins_SkyboxCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    ppSVar1 = (System_String_o **)__this_01;
    UnityEngine_Material___ctor((UnityEngine_Material_o *)__this_01,shader,(MethodInfo *)0x0);
    if (__this_01 != (CustomSkins_SkyboxCustomSkinPart_o *)0x0) {
      UnityEngine_Material__CopyPropertiesFromMaterial
                ((UnityEngine_Material_o *)__this_01,(__this->fields)._skyboxMaterial,(MethodInfo *)0x0);
      UnityEngine_Material__SetTexture
                ((UnityEngine_Material_o *)__this_01,(__this->fields)._textureName,
                 (UnityEngine_Texture_o *)__this_02,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                (__this,__this_01,(__this->klass->vtable)._6_SetMaterial.method);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac437 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac437 = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_object__o *)
              (((CustomSkins_SkyboxCustomSkinPart_o *)ppSVar1)->fields)._skyboxMaterial;
  if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
    if (0 < (__this_03->fields)._size) {
      x = (UnityEngine_Object_o *)System_Collections_Generic_List_object___get_Item(__this_03,0,MethodInfo_MeleeWeaponTrail_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac438 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac438 = '\x01';
  }
  if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  vtableDispatch = (__this_03->klass->vtable)._6_IndexOf.methodPtr;
  (*vtableDispatch)
            (__this_03,*(undefined8 *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10),
             (__this_03->klass->vtable)._6_IndexOf.method,vtableDispatch);
  return;
}


// CustomSkins.SkyboxCustomSkinPart$$SetNewTexture
// il2cpp: UnityEngine_Material_o* CustomSkins_SkyboxCustomSkinPart__SetNewTexture (CustomSkins_SkyboxCustomSkinPart_o* __this, UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x4094ff0

UnityEngine_Material_o *
CustomSkins_SkyboxCustomSkinPart__SetNewTexture
          (CustomSkins_SkyboxCustomSkinPart_o *__this,UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  UnityEngine_Shader_o *shader;
  CustomSkins_SkyboxCustomSkinPart_o *__this_00;
  UnityEngine_Object_o *x;
  undefined4 extraout_var;
  UnityEngine_Material_o *pUVar2;
  System_String_o **ppSVar3;
  System_Collections_Generic_List_object__o *__this_01;
  
  ppSVar3 = (System_String_o **)__this;
  if (g_data_057ac436 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    ppSVar3 = &"RenderFX/Skybox";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac436 = '\x01';
  }
  if (texture != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)texture,1,(MethodInfo *)0x0);
    shader = UnityEngine_Shader__Find("RenderFX/Skybox",(MethodInfo *)0x0);
    __this_00 = (CustomSkins_SkyboxCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
    ppSVar3 = (System_String_o **)__this_00;
    UnityEngine_Material___ctor((UnityEngine_Material_o *)__this_00,shader,(MethodInfo *)0x0);
    if (__this_00 != (CustomSkins_SkyboxCustomSkinPart_o *)0x0) {
      UnityEngine_Material__CopyPropertiesFromMaterial
                ((UnityEngine_Material_o *)__this_00,(__this->fields)._skyboxMaterial,(MethodInfo *)0x0);
      UnityEngine_Material__SetTexture
                ((UnityEngine_Material_o *)__this_00,(__this->fields)._textureName,
                 (UnityEngine_Texture_o *)texture,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._6_SetMaterial.methodPtr)
                (__this,__this_00,(__this->klass->vtable)._6_SetMaterial.method);
      return (UnityEngine_Material_o *)__this_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac437 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac437 = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)
              (((CustomSkins_SkyboxCustomSkinPart_o *)ppSVar3)->fields)._skyboxMaterial;
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    if (0 < (__this_01->fields)._size) {
      x = (UnityEngine_Object_o *)System_Collections_Generic_List_object___get_Item(__this_01,0,MethodInfo_MeleeWeaponTrail_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return (UnityEngine_Material_o *)CONCAT44(extraout_var,bVar1);
    }
    return (UnityEngine_Material_o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac438 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac438 = '\x01';
  }
  if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  vtableDispatch = (__this_01->klass->vtable)._6_IndexOf.methodPtr;
  pUVar2 = (UnityEngine_Material_o *)
           (*vtableDispatch)
                     (__this_01,*(undefined8 *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10),
                      (__this_01->klass->vtable)._6_IndexOf.method,vtableDispatch);
  return pUVar2;
}


