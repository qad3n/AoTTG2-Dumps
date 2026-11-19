// Type: Characters.HumanSetupMaterials
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSetupMaterials.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupMaterials.cs
// --------------------------------

// Characters.HumanSetupMaterials$$Init
// il2cpp: void Characters_HumanSetupMaterials__Init (const MethodInfo* method);
// 0x5c04ef0

void Characters_HumanSetupMaterials__Init(MethodInfo *method)

{
  return;
}


// Characters.HumanSetupMaterials$$GetCostumeMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetCostumeMaterial (System_String_o* mainTexture, System_String_o* maskTexture, System_String_o* colorTexture, System_String_o* pantsTexture, UnityEngine_Color_o shirt, UnityEngine_Color_o straps, UnityEngine_Color_o pants, UnityEngine_Color_o jacket, UnityEngine_Color_o boots, const MethodInfo* method);
// 0x5c04f00
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0502a: mov r14, rbx
// asm:   0x5c0502d: jmp 0x5c0503a
// asm:   0x5c05059: mov r13, rbp
// asm:   0x5c0505c: jmp 0x5c0506a

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetCostumeMaterial
          (System_String_o *mainTexture,System_String_o *maskTexture,System_String_o *colorTexture,
          System_String_o *pantsTexture,UnityEngine_Color_o shirt,UnityEngine_Color_o straps,
          UnityEngine_Color_o pants,UnityEngine_Color_o jacket,UnityEngine_Color_o boots,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  UnityEngine_Material_o *__this;
  UnityEngine_Texture_o *value;
  UnityEngine_Texture_o *value_00;
  UnityEngine_Texture_o *value_01;
  UnityEngine_Texture_o *value_02;
  
  if (Il2CppMethodInitialized_07547682 == '\0') {
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
    Il2CppMethodInitialized_07547682 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pSVar2 = System_String__Concat_52f0320
                     (TypeInfo_Characters_HumanSetupMaterials->static_fields->MaterialPath,
                      "HumanCostumeMat",(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (pSVar1,pSVar2,true,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar2 = System_String__Concat_52f0320
                     (TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,mainTexture,
                      (MethodInfo *)0x0);
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,false,false,(MethodInfo *)0x0);
  if ((value != (UnityEngine_Texture_o *)0x0) &&
     (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
    il2cpp_codegen_raise_invalid_cast_exception(value);
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar2 = System_String__Concat_52f0320
                     (TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,maskTexture,
                      (MethodInfo *)0x0);
  value_00 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,false,false,(MethodInfo *)0x0);
  if ((value_00 != (UnityEngine_Texture_o *)0x0) &&
     (value_00->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
    il2cpp_codegen_raise_invalid_cast_exception(value_00);
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar2 = System_String__Concat_52f0320
                     (TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,colorTexture,
                      (MethodInfo *)0x0);
  value_01 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,false,false,(MethodInfo *)0x0);
  if ((value_01 != (UnityEngine_Texture_o *)0x0) &&
     (value_01->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
    il2cpp_codegen_raise_invalid_cast_exception(value_01);
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  pSVar2 = System_String__Concat_52f0320
                     (TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,pantsTexture,
                      (MethodInfo *)0x0);
  value_02 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,false,false,(MethodInfo *)0x0);
  if ((value_02 != (UnityEngine_Texture_o *)0x0) &&
     (value_02->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
    il2cpp_codegen_raise_invalid_cast_exception(value_02);
  }
  if (__this == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetTexture(__this,"_main_tex",value,(MethodInfo *)0x0);
  UnityEngine_Material__SetTexture(__this,"_main_tex_mask",value_00,(MethodInfo *)0x0);
  UnityEngine_Material__SetTexture(__this,"_color_tex",value_01,(MethodInfo *)0x0);
  UnityEngine_Material__SetTexture(__this,"_pants_tex",value_02,(MethodInfo *)0x0);
  UnityEngine_Material__SetColor(__this,"_shirt_color",shirt,(MethodInfo *)0x0);
  UnityEngine_Material__SetColor(__this,"_straps_color",straps,(MethodInfo *)0x0);
  UnityEngine_Material__SetColor(__this,"_pants_color",pants,(MethodInfo *)0x0);
  UnityEngine_Material__SetColor(__this,"_jacket_color",jacket,(MethodInfo *)0x0);
  UnityEngine_Material__SetColor(__this,"_boots_color",boots,(MethodInfo *)0x0);
  return __this;
}


// Characters.HumanSetupMaterials$$GetPartMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetPartMaterial (System_String_o* texture, bool isOneSided, const MethodInfo* method);
// 0x5c05360
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c053a3: jmp 0x5c0565e

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetPartMaterial(System_String_o *texture,bool isOneSided,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  System_String_o **ppSVar4;
  System_String_o *pSVar5;
  UnityEngine_Material_o *pUVar6;
  UnityEngine_Texture_o *value;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_07547683 == '\0') {
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
    Il2CppMethodInitialized_07547683 = '\x01';
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) goto label_05c0543f;
label_05c0538f:
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->PartMaterials;
  }
  else {
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor != 0) goto label_05c0538f;
label_05c0543f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->PartMaterials;
  }
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c0565e;
  bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar2,(Il2CppObject *)texture,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
  if (!bVar3) {
    uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
    if (isOneSided) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
      }
      pSVar5 = TypeInfo_Characters_HumanSetupMaterials->static_fields->MaterialPath;
      ppSVar4 = &"HumanPart1SMat";
    }
    else {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
      }
      pSVar5 = TypeInfo_Characters_HumanSetupMaterials->static_fields->MaterialPath;
      ppSVar4 = &"HumanPartMat";
    }
    pSVar5 = System_String__Concat_52f0320(pSVar5,*ppSVar4,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar7,pSVar5,true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pSVar5 = System_String__Concat_52f0320
                       (TypeInfo_Characters_HumanSetupMaterials->static_fields->TexturePath,texture,
                        (MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar7,pSVar5,false,false,(MethodInfo *)0x0);
    if ((value != (UnityEngine_Texture_o *)0x0) &&
       (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    if (pUVar6 == (UnityEngine_Material_o *)0x0) goto label_05c0565e;
    UnityEngine_Material__set_mainTexture(pUVar6,value,(MethodInfo *)0x0);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->PartMaterials;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c0565e;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)texture,(Il2CppObject *)pUVar6,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item
              );
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_HumanSetupMaterials->static_fields->PartMaterials;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar2,(Il2CppObject *)texture,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    return pUVar6;
  }
label_05c0565e:
  ThrowNullReferenceException();
}


// Characters.HumanSetupMaterials$$GetCustomSkinMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetCustomSkinMaterial (const MethodInfo* method);
// 0x5c05670

UnityEngine_Material_o * Characters_HumanSetupMaterials__GetCustomSkinMaterial(MethodInfo *method)

{
  System_String_o *path;
  System_String_o *name;
  UnityEngine_Material_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547684 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"HumanPartMat");
    Il2CppMethodInitialized_07547684 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  name = System_String__Concat_52f0320
                   (TypeInfo_Characters_HumanSetupMaterials->static_fields->MaterialPath,"HumanPartMat"
                    ,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,name,true,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  return pUVar1;
}


// Characters.HumanSetupMaterials$$GetHairMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetHairMaterial (System_String_o* texture, const MethodInfo* method);
// 0x5c05760
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c057a0: jmp 0x5c059cb

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetHairMaterial(System_String_o *texture,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  bool bVar3;
  UnityEngine_Material_o *pUVar4;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_07547685 == '\0') {
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
    Il2CppMethodInitialized_07547685 = '\x01';
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) goto label_05c05848;
label_05c0578d:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials;
  }
  else {
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor != 0) goto label_05c0578d;
label_05c05848:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials;
  }
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c059cb;
  bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,(Il2CppObject *)texture,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
  if (!bVar3) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar2,"Human/Parts/Hairs/Materials/HumanHairMat",true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    name = System_String__Concat_5301f10
                     ("Human/Parts/Hairs/Textures/",texture,"Tex",(MethodInfo *)0x0);
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar2,name,false,false,(MethodInfo *)0x0);
    if ((value != (UnityEngine_Texture_o *)0x0) &&
       (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_05c059cb;
    UnityEngine_Material__set_mainTexture(pUVar4,value,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c059cb;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)texture,(Il2CppObject *)pUVar4,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item
              );
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)texture,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    return pUVar4;
  }
label_05c059cb:
  ThrowNullReferenceException();
}


// Characters.HumanSetupMaterials$$GetFaceMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetFaceMaterial (System_String_o* texture, bool untiled, const MethodInfo* method);
// 0x5c059e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c05a21: jmp 0x5c05c72

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetFaceMaterial(System_String_o *texture,bool untiled,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  System_String_o *pSVar4;
  UnityEngine_Material_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_07547686 == '\0') {
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
    Il2CppMethodInitialized_07547686 = '\x01';
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) goto label_05c05ad4;
label_05c05a0d:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->FaceMaterials;
  }
  else {
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor != 0) goto label_05c05a0d;
label_05c05ad4:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->FaceMaterials;
  }
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c05c72;
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,(Il2CppObject *)texture,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
  if (!bVar2) {
    if (untiled) {
      ppSVar3 = &"HumanFaceUntiledMat";
    }
    else {
      ppSVar3 = &"HumanFaceMat";
    }
    pSVar4 = *ppSVar3;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    pSVar4 = System_String__Concat_52f0320("Human/Parts/Face/Materials/",pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar5 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar6,pSVar4,true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    pSVar6 = System_String__Concat_52f0320("Human/Parts/Face/Textures/",texture,(MethodInfo *)0x0);
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar4,pSVar6,false,false,(MethodInfo *)0x0);
    if ((value != (UnityEngine_Texture_o *)0x0) &&
       (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    if (pUVar5 == (UnityEngine_Material_o *)0x0) goto label_05c05c72;
    UnityEngine_Material__set_mainTexture(pUVar5,value,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->FaceMaterials;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c05c72;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)texture,(Il2CppObject *)pUVar5,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item
              );
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_HumanSetupMaterials->static_fields->FaceMaterials;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)texture,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    return pUVar5;
  }
label_05c05c72:
  ThrowNullReferenceException();
}


// Characters.HumanSetupMaterials$$GetTitanEyeMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetTitanEyeMaterial (System_String_o* texture, const MethodInfo* method);
// 0x5c05c80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c05cc1: jmp 0x5c05ed9

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetTitanEyeMaterial(System_String_o *texture,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  bool bVar3;
  UnityEngine_Material_o *pUVar4;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_07547687 == '\0') {
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
    Il2CppMethodInitialized_07547687 = '\x01';
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) goto label_05c05d5d;
label_05c05cad:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->TitanEyeMaterials;
  }
  else {
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor != 0) goto label_05c05cad;
label_05c05d5d:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->TitanEyeMaterials;
  }
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c05ed9;
  bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,(Il2CppObject *)texture,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
  if (!bVar3) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar2,"Titans/Heads/Materials/TitanEyesMat",true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    name = System_String__Concat_52f0320("Titans/Heads/Textures/",texture,(MethodInfo *)0x0);
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar2,name,false,false,(MethodInfo *)0x0);
    if ((value != (UnityEngine_Texture_o *)0x0) &&
       (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_05c05ed9;
    UnityEngine_Material__set_mainTexture(pUVar4,value,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Characters_HumanSetupMaterials->static_fields->TitanEyeMaterials;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c05ed9;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)texture,(Il2CppObject *)pUVar4,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item
              );
  }
  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Characters_HumanSetupMaterials->static_fields->TitanEyeMaterials;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)texture,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    return pUVar4;
  }
label_05c05ed9:
  ThrowNullReferenceException();
}


// Characters.HumanSetupMaterials$$GetSkinMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetSkinMaterial (System_String_o* texture, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5c05ef0

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetSkinMaterial
          (System_String_o *texture,UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Material_o *__this;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_07547688 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Costumes/Textures/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Costumes/Materials/HumanSkinMat");
    il2cpp_codegen_initialize_runtime_metadata(&"_skin_color");
    il2cpp_codegen_initialize_runtime_metadata(&"_weapon_tex");
    Il2CppMethodInitialized_07547688 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (pSVar1,"Human/Parts/Costumes/Materials/HumanSkinMat",true,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  name = System_String__Concat_52f0320("Human/Parts/Costumes/Textures/",texture,(MethodInfo *)0x0);
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar1,name,false,false,(MethodInfo *)0x0);
  if ((value != (UnityEngine_Texture_o *)0x0) &&
     (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
    il2cpp_codegen_raise_invalid_cast_exception(value);
  }
  if (__this == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetTexture(__this,"_weapon_tex",value,(MethodInfo *)0x0);
  UnityEngine_Material__SetColor(__this,"_skin_color",color,(MethodInfo *)0x0);
  return __this;
}


// Characters.HumanSetupMaterials$$.ctor
// il2cpp: void Characters_HumanSetupMaterials___ctor (Characters_HumanSetupMaterials_o* __this, const MethodInfo* method);
// 0x5c06080

void Characters_HumanSetupMaterials___ctor(Characters_HumanSetupMaterials_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSetupMaterials$$.cctor
// il2cpp: void Characters_HumanSetupMaterials___cctor (const MethodInfo* method);
// 0x5c06090

void Characters_HumanSetupMaterials___cctor(MethodInfo *method)

{
  Characters_HumanSetupMaterials_StaticFields *pCVar1;
  System_Collections_Generic_Dictionary_string__Material__o *pSVar2;
  
  if (Il2CppMethodInitialized_07547689 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Costumes/Textures/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Costumes/Materials/");
    Il2CppMethodInitialized_07547689 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSetupMaterials->static_fields->HairMaterials);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  pCVar1 = TypeInfo_Characters_HumanSetupMaterials->static_fields;
  pCVar1->PartMaterials = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->PartMaterials);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  pCVar1 = TypeInfo_Characters_HumanSetupMaterials->static_fields;
  pCVar1->FaceMaterials = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->FaceMaterials);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  pCVar1 = TypeInfo_Characters_HumanSetupMaterials->static_fields;
  pCVar1->TitanEyeMaterials = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->TitanEyeMaterials);
  pCVar1 = TypeInfo_Characters_HumanSetupMaterials->static_fields;
  pCVar1->TexturePath = "Human/Parts/Costumes/Textures/";
  Il2CppCodeGenWriteBarrier(&pCVar1->TexturePath);
  pCVar1 = TypeInfo_Characters_HumanSetupMaterials->static_fields;
  pCVar1->MaterialPath = "Human/Parts/Costumes/Materials/";
  Il2CppCodeGenWriteBarrier(&pCVar1->MaterialPath);
  return;
}


