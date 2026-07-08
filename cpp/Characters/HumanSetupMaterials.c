// Type: Characters.HumanSetupMaterials
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanSetupMaterials.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Setup/HumanSetupMaterials.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanSetupMaterials$$Init
// il2cpp: void Characters_HumanSetupMaterials__Init (const MethodInfo* method);
// 0x3fdae50

void Characters_HumanSetupMaterials__Init(MethodInfo *method)

{
  return;
}


// Characters.HumanSetupMaterials$$GetCostumeMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetCostumeMaterial (System_String_o* mainTexture, System_String_o* maskTexture, System_String_o* colorTexture, System_String_o* pantsTexture, UnityEngine_Color_o shirt, UnityEngine_Color_o straps, UnityEngine_Color_o pants, UnityEngine_Color_o jacket, UnityEngine_Color_o boots, const MethodInfo* method);
// 0x3fdd870

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetCostumeMaterial
          (System_String_o *mainTexture,System_String_o *maskTexture,System_String_o *colorTexture,
          System_String_o *pantsTexture,UnityEngine_Color_o shirt,UnityEngine_Color_o straps,
          UnityEngine_Color_o pants,UnityEngine_Color_o jacket,UnityEngine_Color_o boots,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  UnityEngine_Material_o *__this;
  UnityEngine_Texture_o *value;
  UnityEngine_Texture_o *value_00;
  UnityEngine_Texture_o *value_01;
  UnityEngine_Texture_o *value_02;
  
  if (DAT_05704137 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"HumanCostumeMat");
    il2cpp_init_method_metadata(&"_jacket_color");
    il2cpp_init_method_metadata(&"_main_tex_mask");
    il2cpp_init_method_metadata(&"_pants_tex");
    il2cpp_init_method_metadata(&"_main_tex");
    il2cpp_init_method_metadata(&"_color_tex");
    il2cpp_init_method_metadata(&"_boots_color");
    il2cpp_init_method_metadata(&"_straps_color");
    il2cpp_init_method_metadata(&"_pants_color");
    il2cpp_init_method_metadata(&"_shirt_color");
    DAT_05704137 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28),"HumanCostumeMat",
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_Material_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (pSVar1,pSVar2,1,MethodInfo_Material_InstantiateAsset_Material);
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  pSVar2 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),mainTexture,
                      (MethodInfo *)0x0);
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,0,(MethodInfo *)0x0);
  if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(value);
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  pSVar2 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),maskTexture,
                      (MethodInfo *)0x0);
  value_00 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,0,(MethodInfo *)0x0);
  if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(value_00);
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  pSVar2 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),colorTexture,
                      (MethodInfo *)0x0);
  value_01 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,0,(MethodInfo *)0x0);
  if ((value_01 != (UnityEngine_Texture_o *)0x0) && (value_01->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(value_01);
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  pSVar2 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),pantsTexture,
                      (MethodInfo *)0x0);
  value_02 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar1,pSVar2,0,(MethodInfo *)0x0);
  if ((value_02 != (UnityEngine_Texture_o *)0x0) && (value_02->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(value_02);
  }
  if (__this == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
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
// 0x3fe1860

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetPartMaterial
          (System_String_o *texture,bool_conflict isOneSided,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  UnityEngine_Material_o *pUVar6;
  UnityEngine_Texture_o *value;
  
  if (DAT_05704138 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"HumanPartMat");
    il2cpp_init_method_metadata(&"HumanPart1SMat");
    DAT_05704138 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto LAB_03fe1941;
LAB_03fe1891:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto LAB_03fe1891;
LAB_03fe1941:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
  }
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fe1b37;
  bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar1,(Il2CppObject *)texture,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28);
      if ((char)isOneSided == '\0') goto LAB_03fe19df;
LAB_03fe19bd:
      puVar4 = &"HumanPart1SMat";
    }
    else {
      pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28);
      if ((char)isOneSided != '\0') goto LAB_03fe19bd;
LAB_03fe19df:
      puVar4 = &"HumanPartMat";
    }
    pSVar5 = System_String__Concat(pSVar5,(System_String_o *)*puVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar6 = (UnityEngine_Material_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset<object>
                       (pSVar2,pSVar5,1,MethodInfo_Material_InstantiateAsset_Material);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = System_String__Concat
                       (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x20),texture,
                        (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar2,pSVar5,0,(MethodInfo *)0x0);
    if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    if (pUVar6 == (UnityEngine_Material_o *)0x0) goto LAB_03fe1b37;
    UnityEngine_Material__set_mainTexture(pUVar6,value,(MethodInfo *)0x0);
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fe1b37;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar1,(Il2CppObject *)texture,(Il2CppObject *)pUVar6,MethodInfo_Void_set_Item);
  }
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 8);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar6 = (UnityEngine_Material_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar1,(Il2CppObject *)texture,MethodInfo_Material_get_Item);
    return pUVar6;
  }
LAB_03fe1b37:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMaterials$$GetCustomSkinMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetCustomSkinMaterial (const MethodInfo* method);
// 0x3fe5030

UnityEngine_Material_o * Characters_HumanSetupMaterials__GetCustomSkinMaterial(MethodInfo *method)

{
  System_String_o *path;
  System_String_o *name;
  UnityEngine_Material_o *pUVar1;
  
  if (DAT_05704139 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"HumanPartMat");
    DAT_05704139 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    il2cpp_init_class();
  }
  name = System_String__Concat
                   (*(System_String_o **)(*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x28),"HumanPartMat",
                    (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar1 = (UnityEngine_Material_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>(path,name,1,MethodInfo_Material_InstantiateAsset_Material);
  return pUVar1;
}


// Characters.HumanSetupMaterials$$GetHairMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetHairMaterial (System_String_o* texture, const MethodInfo* method);
// 0x3fe32b0

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetHairMaterial(System_String_o *texture,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Material_o *pUVar3;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  
  if (DAT_0570413a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"Human/Parts/Hairs/Textures/");
    il2cpp_init_method_metadata(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_init_method_metadata(&"Tex");
    DAT_0570413a = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto LAB_03fe3398;
LAB_03fe32dd:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto LAB_03fe32dd;
LAB_03fe3398:
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fe3516;
  bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (__this,(Il2CppObject *)texture,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = (UnityEngine_Material_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset<object>
                       (pSVar1,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    name = System_String__Concat("Human/Parts/Hairs/Textures/",texture,"Tex",(MethodInfo *)0x0);
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar1,name,0,(MethodInfo *)0x0);
    if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_03fe3516;
    UnityEngine_Material__set_mainTexture(pUVar3,value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)
        **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fe3516;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              ((System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)texture,(Il2CppObject *)pUVar3
               ,MethodInfo_Void_set_Item);
  }
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar3 = (UnityEngine_Material_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)
                        **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)texture,MethodInfo_Material_get_Item)
    ;
    return pUVar3;
  }
LAB_03fe3516:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMaterials$$GetFaceMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetFaceMaterial (System_String_o* texture, bool untiled, const MethodInfo* method);
// 0x3fe4bc0

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetFaceMaterial
          (System_String_o *texture,bool_conflict untiled,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_o *pSVar4;
  UnityEngine_Material_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_Texture_o *value;
  
  if (DAT_0570413b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"Human/Parts/Face/Materials/");
    il2cpp_init_method_metadata(&"HumanFaceMat");
    il2cpp_init_method_metadata(&"HumanFaceUntiledMat");
    il2cpp_init_method_metadata(&"Human/Parts/Face/Textures/");
    DAT_0570413b = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto LAB_03fe4cb4;
LAB_03fe4bed:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto LAB_03fe4bed;
LAB_03fe4cb4:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fe4e4d;
  bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar1,(Il2CppObject *)texture,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 == '\0') {
    if ((char)untiled == '\0') {
      puVar3 = &"HumanFaceMat";
    }
    else {
      puVar3 = &"HumanFaceUntiledMat";
    }
    pSVar4 = (System_String_o *)*puVar3;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    pSVar4 = System_String__Concat("Human/Parts/Face/Materials/",pSVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar5 = (UnityEngine_Material_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset<object>
                       (pSVar6,pSVar4,1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    pSVar6 = System_String__Concat("Human/Parts/Face/Textures/",texture,(MethodInfo *)0x0);
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar4,pSVar6,0,(MethodInfo *)0x0);
    if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    if (pUVar5 == (UnityEngine_Material_o *)0x0) goto LAB_03fe4e4d;
    UnityEngine_Material__set_mainTexture(pUVar5,value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fe4e4d;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar1,(Il2CppObject *)texture,(Il2CppObject *)pUVar5,MethodInfo_Void_set_Item);
  }
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar5 = (UnityEngine_Material_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar1,(Il2CppObject *)texture,MethodInfo_Material_get_Item);
    return pUVar5;
  }
LAB_03fe4e4d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMaterials$$GetTitanEyeMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetTitanEyeMaterial (System_String_o* texture, const MethodInfo* method);
// 0x3fe5120

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetTitanEyeMaterial(System_String_o *texture,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_Material_o *pUVar4;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  
  if (DAT_0570413c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"Titans/Heads/Textures/");
    il2cpp_init_method_metadata(&"Titans/Heads/Materials/TitanEyesMat");
    DAT_0570413c = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto LAB_03fe51fd;
LAB_03fe514d:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x18);
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto LAB_03fe514d;
LAB_03fe51fd:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x18);
  }
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fe5374;
  bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar1,(Il2CppObject *)texture,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar4 = (UnityEngine_Material_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset<object>
                       (pSVar2,"Titans/Heads/Materials/TitanEyesMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    name = System_String__Concat("Titans/Heads/Textures/",texture,(MethodInfo *)0x0);
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar2,name,0,(MethodInfo *)0x0);
    if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_03fe5374;
    UnityEngine_Material__set_mainTexture(pUVar4,value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x18);
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fe5374;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar1,(Il2CppObject *)texture,(Il2CppObject *)pUVar4,MethodInfo_Void_set_Item);
  }
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x18);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar4 = (UnityEngine_Material_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar1,(Il2CppObject *)texture,MethodInfo_Material_get_Item);
    return pUVar4;
  }
LAB_03fe5374:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMaterials$$GetSkinMaterial
// il2cpp: UnityEngine_Material_o* Characters_HumanSetupMaterials__GetSkinMaterial (System_String_o* texture, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3fe3ce0

UnityEngine_Material_o *
Characters_HumanSetupMaterials__GetSkinMaterial
          (System_String_o *texture,UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Material_o *__this;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  
  if (DAT_0570413d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"Human/Parts/Costumes/Textures/");
    il2cpp_init_method_metadata(&"Human/Parts/Costumes/Materials/HumanSkinMat");
    il2cpp_init_method_metadata(&"_skin_color");
    il2cpp_init_method_metadata(&"_weapon_tex");
    DAT_0570413d = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_Material_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (pSVar1,"Human/Parts/Costumes/Materials/HumanSkinMat",1,MethodInfo_Material_InstantiateAsset_Material);
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  name = System_String__Concat("Human/Parts/Costumes/Textures/",texture,(MethodInfo *)0x0);
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar1,name,0,(MethodInfo *)0x0);
  if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(value);
  }
  if (__this != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__SetTexture(__this,"_weapon_tex",value,(MethodInfo *)0x0);
    UnityEngine_Material__SetColor(__this,"_skin_color",color,(MethodInfo *)0x0);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMaterials$$.ctor
// il2cpp: void Characters_HumanSetupMaterials___ctor (Characters_HumanSetupMaterials_o* __this, const MethodInfo* method);
// 0x3fe5390

void Characters_HumanSetupMaterials___ctor
               (Characters_HumanSetupMaterials_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSetupMaterials$$.cctor
// il2cpp: void Characters_HumanSetupMaterials___cctor (const MethodInfo* method);
// 0x3fe53a0

void Characters_HumanSetupMaterials___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  
  if (DAT_0570413e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Material);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&"Human/Parts/Costumes/Textures/");
    il2cpp_init_method_metadata(&"Human/Parts/Costumes/Materials/");
    DAT_0570413e = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Material);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_HumanSetupMaterials + 0xb8),pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Material);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar1 = *(long *)(TypeInfo_HumanSetupMaterials + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Material);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar1 = *(long *)(TypeInfo_HumanSetupMaterials + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Material);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar1 = *(long *)(TypeInfo_HumanSetupMaterials + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x18,pSVar2);
  lVar1 = *(long *)(TypeInfo_HumanSetupMaterials + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "Human/Parts/Costumes/Textures/";
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_HumanSetupMaterials + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Human/Parts/Costumes/Materials/";
  il2cpp_runtime_glue(lVar1 + 0x28);
  return;
}


