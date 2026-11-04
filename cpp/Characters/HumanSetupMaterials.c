// Type: Characters.HumanSetupMaterials
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSetupMaterials.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupMaterials.cs
// --------------------------------

// Characters.HumanSetupMaterials$$Init
// il2cpp: void Characters_HumanSetupMaterials__Init (const MethodInfo* method);
// 0x180547020

void
Characters_HumanSetupMaterials__Init(MethodInfo* method)

{
  return;
}


// Characters.HumanSetupMaterials$$GetCostumeMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetCostumeMaterial (System_String_o* mainTexture, System_String_o* maskTexture, System_String_o* colorTexture, System_String_o* pantsTexture, UnityEngine_Color_o shirt, UnityEngine_Color_o straps, UnityEngine_Color_o pants, UnityEngine_Color_o jacket, UnityEngine_Color_o boots, const MethodInfo* method);
// 0x18216e480

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetCostumeMaterial
          (System_String_o *mainTexture,System_String_o *maskTexture,System_String_o *colorTexture,
          System_String_o *pantsTexture,UnityEngine_Color_o *shirt,UnityEngine_Color_o *straps,
          UnityEngine_Color_o *pants,UnityEngine_Color_o *jacket,UnityEngine_Color_o *boots,MethodInfo *method
          )

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  UnityEngine_Material_o *__this;
  UnityEngine_Texture_o *pUVar3;
  UnityEngine_Texture_o *pUVar4;
  UnityEngine_Texture_o *pUVar5;
  UnityEngine_Texture_o *value;
  UnityEngine_Texture_o *value_00;
  UnityEngine_Vector4_Fields local_38;
  
  if (Il2CppMethodInitialized_184346cb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"HumanCostumeMat");
    il2cpp_codegen_initialize_runtime_metadata(&"_jacket_color");
    il2cpp_codegen_initialize_runtime_metadata(&"_main_tex_mask");
    il2cpp_codegen_initialize_runtime_metadata(&"_pants_tex");
    il2cpp_codegen_initialize_runtime_metadata(&"_main_tex");
    il2cpp_codegen_initialize_runtime_metadata(&"_color_tex");
    il2cpp_codegen_initialize_runtime_metadata(&"_boots_color");
    il2cpp_codegen_initialize_runtime_metadata(&"_straps_color");
    il2cpp_codegen_initialize_runtime_metadata(&"_pants_color");
    il2cpp_codegen_initialize_runtime_metadata(&"_shirt_color");
    Il2CppMethodInitialized_184346cb2 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Characters_HumanSetupMaterials->static_fields->MaterialPath,
                      "HumanCostumeMat",(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (pSVar1,pSVar2,true,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,mainTexture,
                      (MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,false,(MethodInfo *)0x0);
  value = (UnityEngine_Texture_o *)0x0;
  value_00 = value;
  if (pUVar3 != (UnityEngine_Texture_o *)0x0) {
    if (pUVar3->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
      value_00 = pUVar3;
    }
    if (value_00 == (UnityEngine_Texture_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,maskTexture,
                      (MethodInfo *)0x0);
  pUVar4 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,false,(MethodInfo *)0x0);
  pUVar3 = value;
  if (pUVar4 != (UnityEngine_Texture_o *)0x0) {
    if (pUVar4->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
      pUVar3 = pUVar4;
    }
    if (pUVar3 == (UnityEngine_Texture_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
    }
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,colorTexture,
                      (MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,false,(MethodInfo *)0x0);
  pUVar4 = value;
  if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
    if (pUVar5->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
      pUVar4 = pUVar5;
    }
    if (pUVar4 == (UnityEngine_Texture_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
    }
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,pantsTexture,
                      (MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,false,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
    if (pUVar5->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
      value = pUVar5;
    }
    if (value == (UnityEngine_Texture_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
    }
  }
  if (__this != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetTexture(__this,"_main_tex",value_00,(MethodInfo *)0x0);
    UnityEngine_Material__SetTexture(__this,"_main_tex_mask",pUVar3,(MethodInfo *)0x0);
    UnityEngine_Material__SetTexture(__this,"_color_tex",pUVar4,(MethodInfo *)0x0);
    UnityEngine_Material__SetTexture(__this,"_pants_tex",value,(MethodInfo *)0x0);
    local_38.x = (shirt->fields).r;
    local_38.y = (shirt->fields).g;
    local_38.z = (shirt->fields).b;
    local_38.w = (shirt->fields).a;
    UnityEngine_Material__SetVector
              (__this,"_shirt_color",(UnityEngine_Vector4_o *)&local_38,(MethodInfo *)0x0);
    local_38.x = (straps->fields).r;
    local_38.y = (straps->fields).g;
    local_38.z = (straps->fields).b;
    local_38.w = (straps->fields).a;
    UnityEngine_Material__SetVector
              (__this,"_straps_color",(UnityEngine_Vector4_o *)&local_38,(MethodInfo *)0x0);
    local_38.x = (pants->fields).r;
    local_38.y = (pants->fields).g;
    local_38.z = (pants->fields).b;
    local_38.w = (pants->fields).a;
    UnityEngine_Material__SetVector
              (__this,"_pants_color",(UnityEngine_Vector4_o *)&local_38,(MethodInfo *)0x0);
    local_38.x = (jacket->fields).r;
    local_38.y = (jacket->fields).g;
    local_38.z = (jacket->fields).b;
    local_38.w = (jacket->fields).a;
    UnityEngine_Material__SetVector
              (__this,"_jacket_color",(UnityEngine_Vector4_o *)&local_38,(MethodInfo *)0x0);
    local_38.x = (boots->fields).r;
    local_38.y = (boots->fields).g;
    local_38.z = (boots->fields).b;
    local_38.w = (boots->fields).a;
    UnityEngine_Material__SetVector
              (__this,"_boots_color",(UnityEngine_Vector4_o *)&local_38,(MethodInfo *)0x0);
    return __this;
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMaterials$$GetPartMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetPartMaterial (System_String_o* texture, bool isOneSided, const MethodInfo* method);
// 0x18216eed0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18216f006: mov rdx, qword ptr [rip + 0x1f284d3]  ; "HumanPartMat"
// asm:   0x18216f00d: jmp 0x18216f055
// asm:   0x18216f04e: mov rdx, qword ptr [rip + 0x1f283ab]  ; "HumanPart1SMat"

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetPartMaterial(System_String_o *texture,bool isOneSided,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Texture_o *pUVar5;
  UnityEngine_Texture_o *value;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184346cb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"HumanPartMat");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanPart1SMat");
    Il2CppMethodInitialized_184346cb3 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  __this = TypeInfo_Characters_HumanSetupMaterials->static_fields->PartMaterials;
  if (__this == (System_Collections_Generic_Dictionary_string__Material__o *)0x0) goto label_18216f1c3;
  bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)texture,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
  if (!bVar2) {
    if (isOneSided) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      pSVar3 = "HumanPart1SMat";
      if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
        pSVar3 = "HumanPart1SMat";
      }
    }
    else {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      pSVar3 = "HumanPartMat";
      if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
        pSVar3 = "HumanPartMat";
      }
    }
    pSVar3 = System_String__Concat_1969e50
                       (TypeInfo_Characters_HumanSetupMaterials->static_fields->MaterialPath,pSVar3,
                        (MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar6,pSVar3,true,
                        (MethodInfo_795F00 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pSVar3 = System_String__Concat_1969e50
                       (TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,texture,
                        (MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar5 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar6,pSVar3,false,(MethodInfo *)0x0);
    value = (UnityEngine_Texture_o *)0x0;
    if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
      if (pUVar5->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
        value = pUVar5;
      }
      if (value == (UnityEngine_Texture_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar5,TypeInfo_UnityEngine_Texture2D);
      }
    }
    if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_18216f1c3;
    UnityEngine_Material__set_mainTexture(pUVar4,value,(MethodInfo *)0x0);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->PartMaterials;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18216f1c3;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)texture,(Il2CppObject *)pUVar4,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item
              );
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_HumanSetupMaterials->static_fields->PartMaterials;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)texture,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    return pUVar4;
  }
label_18216f1c3:
  ThrowNullReferenceException();
}


// Characters.HumanSetupMaterials$$GetCustomSkinMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetCustomSkinMaterial (const MethodInfo* method);
// 0x18216e8f0

UnityEngine_Material_o * Characters_HumanSetupMaterials__GetCustomSkinMaterial(MethodInfo *method)

{
  System_String_o *path;
  System_String_o *name;
  UnityEngine_Material_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346cb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"HumanPartMat");
    Il2CppMethodInitialized_184346cb4 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  name = System_String__Concat_1969e50
                   (TypeInfo_Characters_HumanSetupMaterials->static_fields->MaterialPath,"HumanPartMat"
                    ,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,name,true,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  return pUVar1;
}


// Characters.HumanSetupMaterials$$GetHairMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetHairMaterial (System_String_o* texture, const MethodInfo* method);
// 0x18216ec70

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetHairMaterial(System_String_o *texture,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_String_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_Material_o *pUVar4;
  System_String_o *name;
  UnityEngine_Texture_o *pUVar5;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_184346cb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Hairs/Textures/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_codegen_initialize_runtime_metadata(&"Tex");
    Il2CppMethodInitialized_184346cb5 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  __this = TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials;
  if (__this == (System_Collections_Generic_Dictionary_string__Material__o *)0x0) goto label_18216eeb9;
  bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)texture,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
  if (!bVar3) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar1,"Human/Parts/Hairs/Materials/HumanHairMat",true,
                        (MethodInfo_795F00 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    name = System_String__Concat_1969b70
                     ("Human/Parts/Hairs/Textures/",texture,"Tex",(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar1,name,false,(MethodInfo *)0x0);
    value = (UnityEngine_Texture_o *)0x0;
    if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
      if (pUVar5->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
        value = pUVar5;
      }
      if (value == (UnityEngine_Texture_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar5,TypeInfo_UnityEngine_Texture2D);
      }
    }
    if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_18216eeb9;
    UnityEngine_Material__set_mainTexture(pUVar4,value,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18216eeb9;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)texture,(Il2CppObject *)pUVar4,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item
              );
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)texture,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    return pUVar4;
  }
label_18216eeb9:
  ThrowNullReferenceException();
}


// Characters.HumanSetupMaterials$$GetFaceMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetFaceMaterial (System_String_o* texture, bool untiled, const MethodInfo* method);
// 0x18216e9e0

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetFaceMaterial(System_String_o *texture,bool untiled,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  UnityEngine_Material_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_Texture_o *pUVar6;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_184346cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Face/Materials/");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanFaceMat");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanFaceUntiledMat");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Face/Textures/");
    Il2CppMethodInitialized_184346cb6 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  __this = TypeInfo_Characters_HumanSetupMaterials->static_fields->FaceMaterials;
  if (__this == (System_Collections_Generic_Dictionary_string__Material__o *)0x0) goto label_18216ec56;
  bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)texture,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
  if (!bVar2) {
    pSVar3 = "HumanFaceMat";
    if (untiled) {
      pSVar3 = "HumanFaceUntiledMat";
    }
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    pSVar3 = System_String__Concat_1969e50("Human/Parts/Face/Materials/",pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar5,pSVar3,true,
                        (MethodInfo_795F00 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    pSVar5 = System_String__Concat_1969e50("Human/Parts/Face/Textures/",texture,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar3,pSVar5,false,(MethodInfo *)0x0);
    value = (UnityEngine_Texture_o *)0x0;
    if (pUVar6 != (UnityEngine_Texture_o *)0x0) {
      if (pUVar6->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
        value = pUVar6;
      }
      if (value == (UnityEngine_Texture_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar6,TypeInfo_UnityEngine_Texture2D);
      }
    }
    if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_18216ec56;
    UnityEngine_Material__set_mainTexture(pUVar4,value,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->FaceMaterials;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18216ec56;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)texture,(Il2CppObject *)pUVar4,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item
              );
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_HumanSetupMaterials->static_fields->FaceMaterials;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)texture,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    return pUVar4;
  }
label_18216ec56:
  ThrowNullReferenceException();
}


// Characters.HumanSetupMaterials$$GetTitanEyeMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetTitanEyeMaterial (System_String_o* texture, const MethodInfo* method);
// 0x18216f360

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetTitanEyeMaterial(System_String_o *texture,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_String_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_Material_o *pUVar4;
  System_String_o *name;
  UnityEngine_Texture_o *pUVar5;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_184346cb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Heads/Textures/");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Heads/Materials/TitanEyesMat");
    Il2CppMethodInitialized_184346cb7 = '\x01';
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  __this = TypeInfo_Characters_HumanSetupMaterials->static_fields->TitanEyeMaterials;
  if (__this == (System_Collections_Generic_Dictionary_string__Material__o *)0x0) goto label_18216f595;
  bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)texture,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
  if (!bVar3) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar1,"Titans/Heads/Materials/TitanEyesMat",true,
                        (MethodInfo_795F00 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    name = System_String__Concat_1969e50("Titans/Heads/Textures/",texture,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar1,name,false,(MethodInfo *)0x0);
    value = (UnityEngine_Texture_o *)0x0;
    if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
      if (pUVar5->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
        value = pUVar5;
      }
      if (value == (UnityEngine_Texture_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar5,TypeInfo_UnityEngine_Texture2D);
      }
    }
    if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_18216f595;
    UnityEngine_Material__set_mainTexture(pUVar4,value,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->TitanEyeMaterials;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18216f595;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)texture,(Il2CppObject *)pUVar4,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item
              );
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_HumanSetupMaterials->static_fields->TitanEyeMaterials;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)texture,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    return pUVar4;
  }
label_18216f595:
  ThrowNullReferenceException();
}


// Characters.HumanSetupMaterials$$GetSkinMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetSkinMaterial (System_String_o* texture, UnityEngine_Color_o color, const MethodInfo* method);
// 0x18216f1e0

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetSkinMaterial
          (System_String_o *texture,UnityEngine_Color_o *color,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Material_o *__this;
  System_String_o *name;
  UnityEngine_Texture_o *pUVar2;
  UnityEngine_Texture_o *value;
  UnityEngine_Vector4_Fields local_38;
  
  if (Il2CppMethodInitialized_184346cb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Costumes/Textures/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Costumes/Materials/HumanSkinMat");
    il2cpp_codegen_initialize_runtime_metadata(&"_skin_color");
    il2cpp_codegen_initialize_runtime_metadata(&"_weapon_tex");
    Il2CppMethodInitialized_184346cb8 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (pSVar1,"Human/Parts/Costumes/Materials/HumanSkinMat",true,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  name = System_String__Concat_1969e50("Human/Parts/Costumes/Textures/",texture,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(pSVar1,name,false,(MethodInfo *)0x0);
  value = (UnityEngine_Texture_o *)0x0;
  if (pUVar2 != (UnityEngine_Texture_o *)0x0) {
    if (pUVar2->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
      value = pUVar2;
    }
    if (value == (UnityEngine_Texture_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
  }
  if (__this != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetTexture(__this,"_weapon_tex",value,(MethodInfo *)0x0);
    local_38.x = (color->fields).r;
    local_38.y = (color->fields).g;
    local_38.z = (color->fields).b;
    local_38.w = (color->fields).a;
    UnityEngine_Material__SetVector
              (__this,"_skin_color",(UnityEngine_Vector4_o *)&local_38,(MethodInfo *)0x0);
    return __this;
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMaterials$$.ctor
// il2cpp: void Characters_HumanSetupMaterials___ctor (Characters_HumanSetupMaterials_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_HumanSetupMaterials___ctor(Characters_HumanSetupMaterials_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSetupMaterials$$.cctor
// il2cpp: void Characters_HumanSetupMaterials___cctor (const MethodInfo* method);
// 0x18216f5b0

void Characters_HumanSetupMaterials___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Material__o *pSVar1;
  
  if (Il2CppMethodInitialized_184346cb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Costumes/Textures/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Costumes/Materials/");
    Il2CppMethodInitialized_184346cb9 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  TypeInfo_Characters_HumanSetupMaterials->static_fields->PartMaterials = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSetupMaterials->static_fields->PartMaterials,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  TypeInfo_Characters_HumanSetupMaterials->static_fields->FaceMaterials = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSetupMaterials->static_fields->FaceMaterials,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  TypeInfo_Characters_HumanSetupMaterials->static_fields->TitanEyeMaterials = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSetupMaterials->static_fields->TitanEyeMaterials,pSVar1)
  ;
  TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath = "Human/Parts/Costumes/Textures/";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,"Human/Parts/Costumes/Textures/");
  TypeInfo_Characters_HumanSetupMaterials->static_fields->MaterialPath = "Human/Parts/Costumes/Materials/";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Characters_HumanSetupMaterials->static_fields->MaterialPath,"Human/Parts/Costumes/Materials/");
  return;
}


