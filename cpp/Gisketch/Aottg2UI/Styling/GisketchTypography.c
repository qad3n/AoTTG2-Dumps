// Type: Gisketch.Aottg2UI.Styling.GisketchTypography
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchTypography.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchTypography$$Resolve
// il2cpp: TMPro_TMP_FontAsset_o* Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve (System_String_o* family, int32_t weight, System_String_o* requiredText, bool useLocaleDisplayFont, const MethodInfo* method);
// 0x3b42c40

TMPro_TMP_FontAsset_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
          (System_String_o *family,int32_t weight,System_String_o *requiredText,
          bool_conflict useLocaleDisplayFont,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_String_o *key;
  System_String_o *pSVar3;
  System_String_o *baseKey;
  TMPro_TMP_FontAsset_o *pTVar4;
  System_String_array *assetNames;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  System_String_o *local_40;
  System_String_o *local_38;
  
  local_38 = requiredText;
  if (g_data_057a9c8b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_runtime_helper_023445d0(&"Invalid AoTTG UI font asset ");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"Missing AoTTG UI font asset ");
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/");
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057a9c8b = '\x01';
    requiredText = (System_String_o *)extraout_RDX;
  }
  local_40 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    requiredText = (System_String_o *)extraout_RDX_00;
  }
  key = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,(MethodInfo *)requiredText);
  if (*(int *)((long)&TypeInfo_GisketchTypographyLocale[2].parameters + 4) == 0) {
    pMVar5 = TypeInfo_GisketchTypographyLocale;
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName(pMVar5);
    pMVar5 = extraout_RDX_04;
  }
  else {
    pSVar3 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName(TypeInfo_GisketchTypographyLocale);
    pMVar5 = extraout_RDX_01;
  }
  if (g_data_057a9c8e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    g_data_057a9c8e = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
    pMVar5 = extraout_RDX_05;
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar5 = extraout_RDX_06;
  }
  baseKey = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,pMVar5);
  if ((char)useLocaleDisplayFont != '\0') {
    pMVar5 = extraout_RDX_02;
    if (*(int *)((long)&TypeInfo_GisketchTypographyLocale[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar5 = extraout_RDX_03;
    }
    baseKey = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage(baseKey,pSVar3,pMVar5)
    ;
  }
  pSVar3 = System_String__Concat_3ae5ba0("UI/Fonts/",baseKey,(MethodInfo *)0x0);
  pTVar4 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_(pSVar3,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    assetNames = Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey(key,pMVar5);
    Gisketch_Aottg2UI_Styling_GisketchTypography__ValidateFallbacks(pTVar4,assetNames,method_00);
    bVar2 = Gisketch_Aottg2UI_Styling_GisketchTypography__CanRender(pTVar4,local_38,1,&local_40,method);
    if ((char)bVar2 != '\0') {
      return pTVar4;
    }
    System_String__Concat_3af7470("Invalid AoTTG UI font asset ",baseKey,": ",local_40,(MethodInfo *)0x0);
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
  }
  else {
    System_String__Concat_3af7150("Missing AoTTG UI font asset ",baseKey,".",(MethodInfo *)0x0);
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar4 = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
  return pTVar4;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__Key (System_String_o* family, int32_t weight, const MethodInfo* method);
// 0x3b42f00

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__Key(System_String_o *family,int32_t weight,MethodInfo *method)

{
  long *plVar1;
  System_Reflection_PropertyInfo_o *__this;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  undefined8 *puVar4;
  long lVar5;
  Il2CppObject *obj;
  System_String_o *pSVar6;
  char in_CL;
  MethodInfo *languageName;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar7;
  int32_t weight_00;
  
  if (g_data_057a9c8c == '\0') {
    il2cpp_runtime_helper_023445d0(&"header SDF");
    il2cpp_runtime_helper_023445d0(&"subtext");
    il2cpp_runtime_helper_023445d0(&"menutext");
    il2cpp_runtime_helper_023445d0(&"Barlow-SemiBold SDF");
    il2cpp_runtime_helper_023445d0(&"IntensaFuente SDF");
    il2cpp_runtime_helper_023445d0(&"header");
    il2cpp_runtime_helper_023445d0(&"Barlow-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"Barlow-Bold SDF");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"jek5");
    il2cpp_runtime_helper_023445d0(&"barlow");
    il2cpp_runtime_helper_023445d0(&"Barlow-Medium SDF");
    il2cpp_runtime_helper_023445d0(&"JEK5 SDF");
    g_data_057a9c8c = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(family,(MethodInfo *)0x0);
  pSVar3 = "barlow";
  if ((char)bVar2 == '\0') {
    if ((family == (System_String_o *)0x0) ||
       (pSVar3 = System_String__Trim(family,(MethodInfo *)0x0), pSVar3 == (System_String_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c97 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
        il2cpp_runtime_helper_023445d0(&"English");
        g_data_057a9c97 = '\x01';
      }
      if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = System_Reflection_FieldInfo__op_Equality
                        (*(System_Reflection_FieldInfo_o **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x18),
                         (System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_Reflection_FieldInfo__op_Equality
                          (*(System_Reflection_FieldInfo_o **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x20),
                           (System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          weight_00 = 0;
          bVar2 = System_Reflection_PropertyInfo__op_Equality
                            (*(System_Reflection_PropertyInfo_o **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x28),
                             (System_Reflection_PropertyInfo_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar1 = *(long **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x18);
            if (plVar1 == (long *)0x0) {
label_03b432b8:
              pSVar3 = (System_String_o *)0x0;
              il2cpp_runtime_helper_022b2c90();
              pMVar7 = languageName;
              if (g_data_057a9c8e == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
                g_data_057a9c8e = '\x01';
                pMVar7 = extraout_RDX;
              }
              if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar7 = extraout_RDX_00;
              }
              pSVar3 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(pSVar3,weight_00,pMVar7);
              if (in_CL == '\0') {
                return pSVar3;
              }
              pMVar7 = extraout_RDX_01;
              if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar7 = extraout_RDX_02;
              }
              pSVar3 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
                                 (pSVar3,(System_String_o *)languageName,pMVar7);
              return pSVar3;
            }
            weight_00 = 0;
            lVar5 = (**(code **)(*plVar1 + 0x2d8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x2e0));
            pSVar3 = (System_String_o *)0x0;
            if (lVar5 != 0) {
              if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              plVar1 = *(long **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x20);
              if (plVar1 == (long *)0x0) goto label_03b432b8;
              obj = (Il2CppObject *)
                    (**(code **)(*plVar1 + 0x2d8))(plVar1,lVar5,*(undefined8 *)(*plVar1 + 0x2e0));
              weight_00 = (int32_t)lVar5;
              if (obj == (Il2CppObject *)0x0) {
                pSVar3 = (System_String_o *)0x0;
              }
              else {
                if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this = *(System_Reflection_PropertyInfo_o **)(*(long *)(TypeInfo_GisketchTypographyLocale + 0xb8) + 0x28);
                if (__this == (System_Reflection_PropertyInfo_o *)0x0) goto label_03b432b8;
                pSVar6 = (System_String_o *)
                         System_Reflection_PropertyInfo__GetValue(__this,obj,(MethodInfo *)0x0);
                pSVar3 = (System_String_o *)0x0;
                if ((pSVar6 != (System_String_o *)0x0) &&
                   (pSVar3 = (System_String_o *)0x0, (Il2CppClass *)pSVar6->klass == g_data_057b9c00)) {
                  pSVar3 = pSVar6;
                }
              }
            }
            bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              pSVar3 = "English";
            }
            return pSVar3;
          }
        }
      }
      return "English";
    }
    pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
  }
  bVar2 = System_String__op_Equality(pSVar3,"subtext",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(pSVar3,"text",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_03b4303e;
    puVar4 = &"barlow";
  }
  else {
    puVar4 = &"jek5";
  }
  pSVar3 = (System_String_o *)*puVar4;
label_03b4303e:
  bVar2 = System_String__op_Equality(pSVar3,"header",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(pSVar3,"menutext",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(pSVar3,"jek5",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (weight < 0x1c3) {
          puVar4 = &"Barlow-Regular SDF";
        }
        else if (weight < 0x227) {
          puVar4 = &"Barlow-Medium SDF";
        }
        else if (weight < 0x28b) {
          puVar4 = &"Barlow-SemiBold SDF";
        }
        else {
          puVar4 = &"Barlow-Bold SDF";
        }
      }
      else {
        puVar4 = &"JEK5 SDF";
      }
    }
    else {
      puVar4 = &"IntensaFuente SDF";
    }
  }
  else {
    puVar4 = &"header SDF";
  }
  return (System_String_o *)*puVar4;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$KeyForLanguage
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage (System_String_o* family, int32_t weight, System_String_o* languageName, const MethodInfo* method);
// 0x3b43aa0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage
          (System_String_o *family,int32_t weight,System_String_o *languageName,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar3;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  
  if (g_data_057a9c8d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    g_data_057a9c8d = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
    pMVar3 = extraout_RDX_01;
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
    pMVar3 = (MethodInfo *)languageName;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar3 = extraout_RDX_02;
  }
  if (g_data_057a9c8e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    g_data_057a9c8e = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
    pMVar3 = extraout_RDX_03;
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar3 = extraout_RDX_04;
  }
  pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,pMVar3);
  pMVar3 = extraout_RDX;
  if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar3 = extraout_RDX_00;
  }
  pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
                     (pSVar2,languageName,pMVar3);
  return pSVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$KeyForLanguage
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage (System_String_o* family, int32_t weight, System_String_o* languageName, bool useLocaleDisplayFont, const MethodInfo* method);
// 0x3b432c0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage_3a432c0
          (System_String_o *family,int32_t weight,System_String_o *languageName,
          bool_conflict useLocaleDisplayFont,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar2;
  
  pMVar2 = (MethodInfo *)languageName;
  if (g_data_057a9c8e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    g_data_057a9c8e = '\x01';
    pMVar2 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar2 = extraout_RDX_00;
  }
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,pMVar2);
  if ((char)useLocaleDisplayFont != '\0') {
    pMVar2 = extraout_RDX_01;
    if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar2 = extraout_RDX_02;
    }
    pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
                       (pSVar1,languageName,pMVar2);
    return pSVar1;
  }
  return pSVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$FallbackAssetNamesFor
// il2cpp: System_String_array* Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesFor (System_String_o* family, int32_t weight, const MethodInfo* method);
// 0x3b43ef0

System_String_array *
Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesFor
          (System_String_o *family,int32_t weight,MethodInfo *method)

{
  System_String_o *key;
  System_String_array *pSVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)weight;
  if (g_data_057a9c8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    g_data_057a9c8f = '\x01';
    method = extraout_RDX;
  }
  if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_00;
  }
  key = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,method);
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey(key,method_00);
  return pSVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$FallbackAssetNamesForKey
// il2cpp: System_String_array* Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey (System_String_o* key, const MethodInfo* method);
// 0x3b43370

System_String_array *
Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey
          (System_String_o *key,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  
  if (g_data_057a9c90 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    g_data_057a9c90 = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c91 == '\0') {
    il2cpp_runtime_helper_023445d0(&"header SDF");
    il2cpp_runtime_helper_023445d0(&"IntensaFuente SDF");
    g_data_057a9c91 = '\x01';
  }
  bVar3 = System_String__op_Equality(key,"header SDF",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(key,"IntensaFuente SDF",(MethodInfo *)0x0);
    bVar2 = true;
    if ((char)bVar3 == '\0') goto label_03b433f7;
  }
  bVar2 = false;
label_03b433f7:
  if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  puVar4 = *(undefined8 **)(TypeInfo_GisketchTypography + 0xb8) + 1;
  if (bVar2) {
    puVar4 = *(undefined8 **)(TypeInfo_GisketchTypography + 0xb8);
  }
  return (System_String_array *)*puVar4;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$IsDisplayKey
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__IsDisplayKey (System_String_o* key, const MethodInfo* method);
// 0x3b43f50

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchTypography__IsDisplayKey(System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057a9c91 == '\0') {
    il2cpp_runtime_helper_023445d0(&"header SDF");
    il2cpp_runtime_helper_023445d0(&"IntensaFuente SDF");
    g_data_057a9c91 = '\x01';
  }
  bVar1 = System_String__op_Equality(key,"header SDF",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
  }
  bVar1 = System_String__op_Equality(key,"IntensaFuente SDF",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ValidateFallbacks
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography__ValidateFallbacks (TMPro_TMP_FontAsset_o* font, System_String_array* assetNames, const MethodInfo* method);
// 0x3b43470

void Gisketch_Aottg2UI_Styling_GisketchTypography__ValidateFallbacks
               (TMPro_TMP_FontAsset_o *font,System_String_array *assetNames,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  TMPro_TMP_FontAsset_array *pTVar4;
  System_Collections_Generic_List_TMP_FontAsset__o *current;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this;
  bool_conflict bVar5;
  TMPro_TMP_FontAsset_o *pTVar6;
  ulong uVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  undefined8 *in_RCX;
  uint extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *pMVar10;
  MethodInfo *languageName;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  TMPro_TMP_FontAsset_o *unaff_RBX;
  ulong unaff_RBP;
  int32_t weight;
  TMPro_TMP_FontAsset_o *pTVar11;
  TMPro_TMP_FontAsset_o *__this_00;
  System_String_o *pSStack_78;
  System_UInt32_array *pSStack_70;
  TMPro_TMP_FontAsset_o *pTStack_68;
  System_String_array *pSStack_60;
  undefined8 *puStack_58;
  TMPro_TMP_FontAsset_o *pTStack_50;
  System_Collections_Generic_List_TMP_FontAsset__o *pSStack_48;
  ulong uStack_40;
  
  if (g_data_057a9c92 == '\0') {
    uStack_40 = 0x3b4349a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    uStack_40 = 0x3b434a6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_40 = 0x3b434b2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_TMPro_TMP_FontAsset);
    uStack_40 = 0x3b434be;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    uStack_40 = 0x3b434ca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_TMP_FontAsset);
    uStack_40 = 0x3b434d6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    uStack_40 = 0x3b434e2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    uStack_40 = 0x3b434ee;
    il2cpp_runtime_helper_023445d0(&" had stale fallback order. Applied runtime fallback order.");
    uStack_40 = 0x3b434fa;
    il2cpp_runtime_helper_023445d0(&"Missing AoTTG UI fallback font asset ");
    uStack_40 = 0x3b43506;
    il2cpp_runtime_helper_023445d0(&"AoTTG UI font asset ");
    uStack_40 = 0x3b43512;
    il2cpp_runtime_helper_023445d0(&"UI/Fonts/");
    uStack_40 = 0x3b4351e;
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057a9c92 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_40 = 0x3b4353e;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x3b4354a;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (assetNames == (System_String_array *)0x0) {
    return;
  }
  if ((char)bVar5 != '\0') {
    return;
  }
  if (assetNames->max_length == 0) {
    return;
  }
  uStack_40 = 0x3b43576;
  pTVar6 = (TMPro_TMP_FontAsset_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_TMP_FontAsset);
  uVar2 = (uint)assetNames->max_length;
  pTVar11 = (TMPro_TMP_FontAsset_o *)(ulong)uVar2;
  uStack_40 = 0x3b43590;
  __this_00 = pTVar6;
  System_Collections_Generic_List_object____ctor_362b930
            ((System_Collections_Generic_List_object__o *)pTVar6,uVar2,MethodInfo_List_1_TMPro_TMP_FontAsset);
  pMVar10 = extraout_RDX;
  if (0 < (int)assetNames->max_length) {
    uVar7 = assetNames->max_length & 0xffffffff;
    unaff_RBP = 0;
    if (pTVar6 == (TMPro_TMP_FontAsset_o *)0x0) {
      do {
        if (uVar7 <= unaff_RBP) goto label_03b438aa;
        uStack_40 = 0x3b4360c;
        pSVar8 = System_String__Concat_3ae5ba0("UI/Fonts/",assetNames->m_Items[unaff_RBP],(MethodInfo *)0x0);
        in_RCX = &MethodInfo_TMP_FontAsset_Load_TMP_FontAsset;
        uStack_40 = 0x3b4361e;
        unaff_RBX = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_(pSVar8,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          uStack_40 = 0x3b43633;
          il2cpp_runtime_helper_02337ed0();
        }
        pTVar11 = (TMPro_TMP_FontAsset_o *)0x0;
        uStack_40 = 0x3b4363f;
        __this_00 = unaff_RBX;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            uStack_40 = 0x3b4369b;
            il2cpp_runtime_helper_02337ed0();
          }
          uStack_40 = 0x3b435ce;
          pTVar11 = font;
          __this_00 = unaff_RBX;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)font,(MethodInfo *)0x0)
          ;
          pMVar10 = extraout_RDX_00;
          if ((char)bVar5 != '\0') goto label_03b438af;
        }
        else {
          if ((uint)assetNames->max_length <= unaff_RBP) goto label_03b438aa;
          pTVar11 = (TMPro_TMP_FontAsset_o *)assetNames->m_Items[unaff_RBP];
          uStack_40 = 0x3b43675;
          System_String__Concat_3af7150
                    ("Missing AoTTG UI fallback font asset ",(System_String_o *)pTVar11,".",(MethodInfo *)0x0);
          pMVar10 = extraout_RDX_01;
          __this_00 = TypeInfo_GisketchTypography;
          if ((TypeInfo_GisketchTypography->fields).m_IsMultiAtlasTexturesEnabled == 0) {
            uStack_40 = 0x3b43691;
            il2cpp_runtime_helper_02337ed0();
            pMVar10 = extraout_RDX_02;
          }
        }
        unaff_RBP = unaff_RBP + 1;
        uVar2 = (uint)assetNames->max_length;
        uVar7 = (ulong)uVar2;
        in_RCX = (undefined8 *)(long)(int)uVar2;
      } while ((long)unaff_RBP < (long)in_RCX);
    }
    else {
      do {
        if (uVar7 <= unaff_RBP) goto label_03b438aa;
        uStack_40 = 0x3b436f6;
        pSVar8 = System_String__Concat_3ae5ba0("UI/Fonts/",assetNames->m_Items[unaff_RBP],(MethodInfo *)0x0);
        in_RCX = &MethodInfo_TMP_FontAsset_Load_TMP_FontAsset;
        uStack_40 = 0x3b43708;
        unaff_RBX = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_(pSVar8,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          uStack_40 = 0x3b4371d;
          il2cpp_runtime_helper_02337ed0();
        }
        pTVar11 = (TMPro_TMP_FontAsset_o *)0x0;
        uStack_40 = 0x3b43729;
        __this_00 = unaff_RBX;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            uStack_40 = 0x3b43792;
            il2cpp_runtime_helper_02337ed0();
          }
          uStack_40 = 0x3b4379f;
          pTVar11 = font;
          __this_00 = unaff_RBX;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)font,(MethodInfo *)0x0)
          ;
          in_RCX = MethodInfo_Void_Add;
          pMVar10 = extraout_RDX_06;
          if ((char)bVar5 != '\0') {
            piVar1 = &((System_Collections_Generic_List_TMP_FontAsset__Fields *)&pTVar6->fields)->_version;
            *piVar1 = *piVar1 + 1;
            pTVar4 = ((System_Collections_Generic_List_TMP_FontAsset__Fields *)&pTVar6->fields)->_items;
            if (pTVar4 == (TMPro_TMP_FontAsset_array *)0x0) goto label_03b438af;
            uVar2 = (pTVar6->fields).m_InstanceID;
            pTVar11 = unaff_RBX;
            if (uVar2 < (uint)pTVar4->max_length) {
              (pTVar6->fields).m_InstanceID = uVar2 + 1;
              __this_00 = (TMPro_TMP_FontAsset_o *)(pTVar4->m_Items + (int)uVar2);
              pTVar4->m_Items[(int)uVar2] = unaff_RBX;
              uStack_40 = 0x3b437ec;
              il2cpp_runtime_helper_022b4080();
              pMVar10 = extraout_RDX_07;
            }
            else {
              uStack_40 = 0x3b436ba;
              __this_00 = pTVar6;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pTVar6,(Il2CppObject *)unaff_RBX,
                         *(MethodInfo_362C220 **)(*(long *)(in_RCX[4] + 0xc0) + 0x70));
              pMVar10 = extraout_RDX_03;
            }
          }
        }
        else {
          if ((uint)assetNames->max_length <= unaff_RBP) goto label_03b438aa;
          pTVar11 = (TMPro_TMP_FontAsset_o *)assetNames->m_Items[unaff_RBP];
          uStack_40 = 0x3b4375b;
          System_String__Concat_3af7150
                    ("Missing AoTTG UI fallback font asset ",(System_String_o *)pTVar11,".",(MethodInfo *)0x0);
          pMVar10 = extraout_RDX_04;
          __this_00 = TypeInfo_GisketchTypography;
          if ((TypeInfo_GisketchTypography->fields).m_IsMultiAtlasTexturesEnabled == 0) {
            uStack_40 = 0x3b43777;
            il2cpp_runtime_helper_02337ed0();
            pMVar10 = extraout_RDX_05;
          }
        }
        unaff_RBP = unaff_RBP + 1;
        uVar2 = (uint)assetNames->max_length;
        uVar7 = (ulong)uVar2;
        in_RCX = (undefined8 *)(long)(int)uVar2;
      } while ((long)unaff_RBP < (long)in_RCX);
    }
  }
  if (pTVar6 != (TMPro_TMP_FontAsset_o *)0x0) {
    if ((pTVar6->fields).m_InstanceID == 0) {
      return;
    }
    if (font != (TMPro_TMP_FontAsset_o *)0x0) {
      current = (font->fields).fallbackFontAssets;
      if ((TypeInfo_GisketchTypography->fields).m_IsMultiAtlasTexturesEnabled == 0) {
        uStack_40 = 0x3b4382e;
        il2cpp_runtime_helper_02337ed0();
        pMVar10 = extraout_RDX_08;
      }
      uStack_40 = 0x3b43839;
      bVar5 = Gisketch_Aottg2UI_Styling_GisketchTypography__FallbacksMatch
                        (current,(System_Collections_Generic_List_TMP_FontAsset__o *)pTVar6,pMVar10);
      if ((char)bVar5 != '\0') {
        return;
      }
      (font->fields).fallbackFontAssets = (System_Collections_Generic_List_TMP_FontAsset__o *)pTVar6;
      uStack_40 = 0x3b43853;
      il2cpp_runtime_helper_022b4080(&(font->fields).fallbackFontAssets);
      uStack_40 = 0x3b4385d;
      pSVar8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)font,(MethodInfo *)0x0);
      uStack_40 = 0x3b4387b;
      System_String__Concat_3af7150("AoTTG UI font asset ",pSVar8," had stale fallback order. Applied runtime fallback order.",(MethodInfo *)0x0);
      if ((TypeInfo_GisketchTypography->fields).m_IsMultiAtlasTexturesEnabled != 0) {
        return;
      }
      il2cpp_runtime_helper_02337ed0();
      return;
    }
  }
label_03b438af:
  uStack_40 = 0x3b438b4;
  il2cpp_runtime_helper_022b2c90();
  puStack_58 = &TypeInfo_Object;
  pTStack_68 = unaff_RBX;
  pSStack_60 = assetNames;
  pTStack_50 = font;
  pSStack_48 = (System_Collections_Generic_List_TMP_FontAsset__o *)pTVar6;
  uStack_40 = unaff_RBP;
  if (g_data_057a9c94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"required glyphs are missing");
    il2cpp_runtime_helper_023445d0(&"_FaceColor");
    il2cpp_runtime_helper_023445d0(&"material is missing");
    il2cpp_runtime_helper_023445d0(&"material is missing _FaceColor");
    il2cpp_runtime_helper_023445d0(&"font is null");
    g_data_057a9c94 = '\x01';
  }
  pSStack_70 = (System_UInt32_array *)0x0;
  pSStack_78 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  weight = 0;
  pTVar6 = __this_00;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (__this_00 == (TMPro_TMP_FontAsset_o *)0x0) {
label_03b43a90:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c8d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
        g_data_057a9c8d = '\x01';
        iVar3 = (TypeInfo_GisketchTypography->fields).m_IsMultiAtlasTexturesEnabled;
        pMVar10 = extraout_RDX_13;
      }
      else {
        iVar3 = (TypeInfo_GisketchTypography->fields).m_IsMultiAtlasTexturesEnabled;
        pMVar10 = languageName;
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar10 = extraout_RDX_14;
      }
      if (g_data_057a9c8e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
        g_data_057a9c8e = '\x01';
        iVar3 = (TypeInfo_GisketchTypography->fields).m_IsMultiAtlasTexturesEnabled;
        pMVar10 = extraout_RDX_15;
      }
      else {
        iVar3 = (TypeInfo_GisketchTypography->fields).m_IsMultiAtlasTexturesEnabled;
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar10 = extraout_RDX_16;
      }
      pSVar8 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key((System_String_o *)pTVar6,weight,pMVar10);
      pMVar10 = extraout_RDX_11;
      if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar10 = extraout_RDX_12;
      }
      Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
                (pSVar8,(System_String_o *)languageName,pMVar10);
      return;
    }
    x = (UnityEngine_Object_o *)(__this_00->fields).material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    weight = 0;
    bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      __this = (__this_00->fields).material;
      pTVar6 = (TMPro_TMP_FontAsset_o *)0x0;
      if (__this == (UnityEngine_Material_o *)0x0) goto label_03b43a90;
      bVar5 = UnityEngine_Material__HasProperty_4dcb5b0(__this,"_FaceColor",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        puVar9 = &"material is missing _FaceColor";
      }
      else {
        pMVar10 = extraout_RDX_09;
        if ((TypeInfo_GisketchTypography->fields).m_IsMultiAtlasTexturesEnabled == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar10 = extraout_RDX_10;
        }
        pSVar8 = Gisketch_Aottg2UI_Styling_GisketchTypography__RequiredCharacters
                           ((System_String_o *)pTVar11,extraout_EDX & 0xff,pMVar10);
        bVar5 = TMPro_TMP_FontAsset__HasCharacters_4c50910(__this_00,pSVar8,&pSStack_70,1,0,(MethodInfo *)0x0)
        ;
        if (((char)bVar5 != '\0') ||
           (((__this_00->fields).m_AtlasPopulationMode == 1 &&
            (bVar5 = TMPro_TMP_FontAsset__TryAddCharacters_4c53320
                               (__this_00,pSVar8,&pSStack_78,1,(MethodInfo *)0x0), (char)bVar5 != '\0')))) {
          *in_RCX = 0;
          il2cpp_runtime_helper_022b4080(in_RCX,0);
          return;
        }
        puVar9 = &"required glyphs are missing";
      }
    }
    else {
      puVar9 = &"material is missing";
    }
  }
  else {
    puVar9 = &"font is null";
  }
  *in_RCX = *puVar9;
  il2cpp_runtime_helper_022b4080(in_RCX,*puVar9);
  return;
label_03b438aa:
  uStack_40 = 0x3b438af;
  il2cpp_runtime_helper_022b2ca0();
  goto label_03b438af;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$FallbacksMatch
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__FallbacksMatch (System_Collections_Generic_List_TMP_FontAsset__o* current, System_Collections_Generic_List_TMP_FontAsset__o* expected, const MethodInfo* method);
// 0x3b43fc0

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchTypography__FallbacksMatch
          (System_Collections_Generic_List_TMP_FontAsset__o *current,
          System_Collections_Generic_List_TMP_FontAsset__o *expected,MethodInfo *method)

{
  long lVar1;
  uint16_t uVar2;
  bool_conflict bVar3;
  undefined8 in_RAX;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *y;
  System_String_o **ppSVar4;
  System_Text_StringBuilder_o *__this;
  System_Collections_Generic_HashSet_char__o *__this_00;
  long lVar5;
  int32_t iVar6;
  int iVar7;
  char cVar8;
  System_Collections_Generic_List_TMP_FontAsset__o *pSVar9;
  long *value;
  System_String_o *a;
  
  pSVar9 = expected;
  value = (long *)current;
  if (g_data_057a9c93 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_get_Item);
    value = &TypeInfo_Object;
    in_RAX = il2cpp_runtime_helper_023445d0();
    g_data_057a9c93 = '\x01';
  }
  cVar8 = (char)pSVar9;
  if (current != (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
    if (expected == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c95 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Char);
        il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_char);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
        il2cpp_runtime_helper_023445d0(&"Aa0");
        g_data_057a9c95 = '\x01';
      }
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (cVar8 != '\0') {
          __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
          System_Text_StringBuilder___ctor_3b028a0(__this,"Aa0",(MethodInfo *)0x0);
          __this_00 = (System_Collections_Generic_HashSet_char__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_char);
          System_Collections_Generic_HashSet_char____ctor_33ce5f0
                    (__this_00,(System_Collections_Generic_IEnumerable_T__o *)"Aa0",MethodInfo_HashSet_1_System_Char);
          if ((System_Collections_Generic_List_TMP_FontAsset__o *)value !=
              (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
            if (__this_00 == (System_Collections_Generic_HashSet_char__o *)0x0) {
              if (0 < *(int *)&(((System_Collections_Generic_List_TMP_FontAsset__o *)value)->fields)._items) {
                iVar6 = 0;
                do {
                  uVar2 = System_String__get_Chars((System_String_o *)value,iVar6,(MethodInfo *)0x0);
                  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar3 = System_Char__IsControl(uVar2,(MethodInfo *)0x0);
                  if ((char)bVar3 == '\0') goto label_03b44330;
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)&(((System_Collections_Generic_List_TMP_FontAsset__o *)value)->fields
                                          )._items);
              }
            }
            else {
              iVar7 = *(int *)&(((System_Collections_Generic_List_TMP_FontAsset__o *)value)->fields)._items;
              if (__this == (System_Text_StringBuilder_o *)0x0) {
                if (0 < iVar7) {
                  iVar6 = 0;
                  do {
                    uVar2 = System_String__get_Chars((System_String_o *)value,iVar6,(MethodInfo *)0x0);
                    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar3 = System_Char__IsControl(uVar2,(MethodInfo *)0x0);
                    if (((char)bVar3 == '\0') &&
                       (bVar3 = System_Collections_Generic_HashSet_char___Add(__this_00,uVar2,MethodInfo_Boolean_Add),
                       (char)bVar3 != '\0')) goto label_03b44330;
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < *(int *)&(((System_Collections_Generic_List_TMP_FontAsset__o *)value)->
                                            fields)._items);
                }
              }
              else if (0 < iVar7) {
                iVar6 = 0;
                do {
                  uVar2 = System_String__get_Chars((System_String_o *)value,iVar6,(MethodInfo *)0x0);
                  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar3 = System_Char__IsControl(uVar2,(MethodInfo *)0x0);
                  if (((char)bVar3 == '\0') &&
                     (bVar3 = System_Collections_Generic_HashSet_char___Add(__this_00,uVar2,MethodInfo_Boolean_Add),
                     (char)bVar3 != '\0')) {
                    System_Text_StringBuilder__Append_3b048f0(__this,uVar2,(MethodInfo *)0x0);
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)&(((System_Collections_Generic_List_TMP_FontAsset__o *)value)->fields
                                          )._items);
              }
            }
            if (__this != (System_Text_StringBuilder_o *)0x0) {
              bVar3 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                                (__this,(__this->klass->vtable)._3_ToString.method);
              return bVar3;
            }
          }
label_03b44330:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9c96 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
            il2cpp_runtime_helper_023445d0(&TypeInfo_string);
            il2cpp_runtime_helper_023445d0(&"NotoSansKR-Regular SDF");
            il2cpp_runtime_helper_023445d0(&"NotoSansSC-Regular SDF");
            il2cpp_runtime_helper_023445d0(&"NotoSansArabic-VariableFont_wdth,wght SDF");
            il2cpp_runtime_helper_023445d0(&"Symbola SDF");
            il2cpp_runtime_helper_023445d0(&"NotoSansThai-Regular SDF");
            il2cpp_runtime_helper_023445d0(&"NotoSansJP-Regular SDF");
            il2cpp_runtime_helper_023445d0(&"NotoSans-Regular SDF");
            il2cpp_runtime_helper_023445d0(&"NotoSansTC-Regular SDF");
            g_data_057a9c96 = '\x01';
          }
          a = TypeInfo_string;
          lVar5 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
          if (lVar5 != 0) {
            if (*(int *)(lVar5 + 0x18) != 0) {
              a = (System_String_o *)(lVar5 + 0x20);
              *(undefined8 *)(lVar5 + 0x20) = "NotoSans-Regular SDF";
              il2cpp_runtime_helper_022b4080();
              if (1 < *(uint *)(lVar5 + 0x18)) {
                a = (System_String_o *)(lVar5 + 0x28);
                *(undefined8 *)(lVar5 + 0x28) = "NotoSansSC-Regular SDF";
                il2cpp_runtime_helper_022b4080();
                if (2 < *(uint *)(lVar5 + 0x18)) {
                  a = (System_String_o *)(lVar5 + 0x30);
                  *(undefined8 *)(lVar5 + 0x30) = "NotoSansTC-Regular SDF";
                  il2cpp_runtime_helper_022b4080();
                  if (3 < *(uint *)(lVar5 + 0x18)) {
                    a = (System_String_o *)(lVar5 + 0x38);
                    *(undefined8 *)(lVar5 + 0x38) = "NotoSansJP-Regular SDF";
                    il2cpp_runtime_helper_022b4080();
                    if (4 < *(uint *)(lVar5 + 0x18)) {
                      a = (System_String_o *)(lVar5 + 0x40);
                      *(undefined8 *)(lVar5 + 0x40) = "NotoSansKR-Regular SDF";
                      il2cpp_runtime_helper_022b4080();
                      if (5 < *(uint *)(lVar5 + 0x18)) {
                        a = (System_String_o *)(lVar5 + 0x48);
                        *(undefined8 *)(lVar5 + 0x48) = "NotoSansThai-Regular SDF";
                        il2cpp_runtime_helper_022b4080();
                        if (6 < *(uint *)(lVar5 + 0x18)) {
                          a = (System_String_o *)(lVar5 + 0x50);
                          *(undefined8 *)(lVar5 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                          il2cpp_runtime_helper_022b4080();
                          if (7 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined8 *)(lVar5 + 0x58) = "Symbola SDF";
                            il2cpp_runtime_helper_022b4080(lVar5 + 0x58);
                            **(long **)(TypeInfo_GisketchTypography + 0xb8) = lVar5;
                            il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchTypography + 0xb8),lVar5);
                            a = TypeInfo_string;
                            lVar5 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
                            if (lVar5 == 0) goto label_03b44787;
                            if (*(int *)(lVar5 + 0x18) != 0) {
                              a = (System_String_o *)(lVar5 + 0x20);
                              *(undefined8 *)(lVar5 + 0x20) = "NotoSans-Regular SDF";
                              il2cpp_runtime_helper_022b4080();
                              if (1 < *(uint *)(lVar5 + 0x18)) {
                                a = (System_String_o *)(lVar5 + 0x28);
                                *(undefined8 *)(lVar5 + 0x28) = "NotoSansSC-Regular SDF";
                                il2cpp_runtime_helper_022b4080();
                                if (2 < *(uint *)(lVar5 + 0x18)) {
                                  a = (System_String_o *)(lVar5 + 0x30);
                                  *(undefined8 *)(lVar5 + 0x30) = "NotoSansTC-Regular SDF";
                                  il2cpp_runtime_helper_022b4080();
                                  if (3 < *(uint *)(lVar5 + 0x18)) {
                                    a = (System_String_o *)(lVar5 + 0x38);
                                    *(undefined8 *)(lVar5 + 0x38) = "NotoSansJP-Regular SDF";
                                    il2cpp_runtime_helper_022b4080();
                                    if (4 < *(uint *)(lVar5 + 0x18)) {
                                      a = (System_String_o *)(lVar5 + 0x40);
                                      *(undefined8 *)(lVar5 + 0x40) = "NotoSansKR-Regular SDF";
                                      il2cpp_runtime_helper_022b4080();
                                      if (5 < *(uint *)(lVar5 + 0x18)) {
                                        a = (System_String_o *)(lVar5 + 0x48);
                                        *(undefined8 *)(lVar5 + 0x48) = "NotoSansThai-Regular SDF";
                                        il2cpp_runtime_helper_022b4080();
                                        if (6 < *(uint *)(lVar5 + 0x18)) {
                                          a = (System_String_o *)(lVar5 + 0x50);
                                          *(undefined8 *)(lVar5 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                          il2cpp_runtime_helper_022b4080();
                                          if (7 < *(uint *)(lVar5 + 0x18)) {
                                            *(undefined8 *)(lVar5 + 0x58) = "Symbola SDF";
                                            il2cpp_runtime_helper_022b4080(lVar5 + 0x58);
                                            lVar1 = *(long *)(TypeInfo_GisketchTypography + 0xb8);
                                            *(long *)(lVar1 + 8) = lVar5;
                                            il2cpp_runtime_helper_022b4080(lVar1 + 8,lVar5);
                                            a = TypeInfo_string;
                                            lVar5 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
                                            if (lVar5 == 0) goto label_03b44787;
                                            if (*(int *)(lVar5 + 0x18) != 0) {
                                              a = (System_String_o *)(lVar5 + 0x20);
                                              *(undefined8 *)(lVar5 + 0x20) = "NotoSans-Regular SDF";
                                              il2cpp_runtime_helper_022b4080();
                                              if (1 < *(uint *)(lVar5 + 0x18)) {
                                                a = (System_String_o *)(lVar5 + 0x28);
                                                *(undefined8 *)(lVar5 + 0x28) = "NotoSansSC-Regular SDF";
                                                il2cpp_runtime_helper_022b4080();
                                                if (2 < *(uint *)(lVar5 + 0x18)) {
                                                  a = (System_String_o *)(lVar5 + 0x30);
                                                  *(undefined8 *)(lVar5 + 0x30) = "NotoSansTC-Regular SDF";
                                                  il2cpp_runtime_helper_022b4080();
                                                  if (3 < *(uint *)(lVar5 + 0x18)) {
                                                    a = (System_String_o *)(lVar5 + 0x38);
                                                    *(undefined8 *)(lVar5 + 0x38) = "NotoSansJP-Regular SDF";
                                                    il2cpp_runtime_helper_022b4080();
                                                    if (4 < *(uint *)(lVar5 + 0x18)) {
                                                      a = (System_String_o *)(lVar5 + 0x40);
                                                      *(undefined8 *)(lVar5 + 0x40) = "NotoSansKR-Regular SDF";
                                                      il2cpp_runtime_helper_022b4080();
                                                      if (5 < *(uint *)(lVar5 + 0x18)) {
                                                        a = (System_String_o *)(lVar5 + 0x48);
                                                        *(undefined8 *)(lVar5 + 0x48) = "NotoSansThai-Regular SDF";
                                                        il2cpp_runtime_helper_022b4080();
                                                        if (6 < *(uint *)(lVar5 + 0x18)) {
                                                          a = (System_String_o *)(lVar5 + 0x50);
                                                          *(undefined8 *)(lVar5 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                                          il2cpp_runtime_helper_022b4080();
                                                          if (7 < *(uint *)(lVar5 + 0x18)) {
                                                            *(undefined8 *)(lVar5 + 0x58) = "Symbola SDF";
                                                            il2cpp_runtime_helper_022b4080(lVar5 + 0x58);
                                                            lVar1 = *(long *)(TypeInfo_GisketchTypography + 0xb8);
                                                            *(long *)(lVar1 + 0x10) = lVar5;
                                                            bVar3 = il2cpp_runtime_helper_022b4080(lVar1 + 0x10,lVar5);
                                                            return bVar3;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            il2cpp_runtime_helper_022b2ca0();
          }
label_03b44787:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9c9a == '\0') {
            il2cpp_runtime_helper_023445d0(&"header SDF");
            il2cpp_runtime_helper_023445d0(&"IntensaFuente SDF");
            g_data_057a9c9a = '\x01';
          }
          bVar3 = System_String__op_Equality(a,"header SDF",(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar3 >> 8),1);
          }
          bVar3 = System_String__op_Equality(a,"IntensaFuente SDF",(MethodInfo *)0x0);
          return bVar3;
        }
      }
      else {
        if (cVar8 == '\0') {
          ppSVar4 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
        }
        else {
          ppSVar4 = &"Aa0";
        }
        value = (long *)*ppSVar4;
      }
      return (bool_conflict)value;
    }
    iVar7 = (current->fields)._size;
    if (iVar7 == (expected->fields)._size) {
      if (iVar7 < 1) {
        return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
      }
      iVar7 = 0;
      while( true ) {
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)current,iVar7,MethodInfo_TMP_FontAsset_get_Item);
        y = (UnityEngine_Object_o *)
            System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)expected,iVar7,MethodInfo_TMP_FontAsset_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') break;
        iVar7 = iVar7 + 1;
        if ((expected->fields)._size <= iVar7) {
          return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar3 >> 8),1);
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$CanRender
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__CanRender (TMPro_TMP_FontAsset_o* font, System_String_o* requiredText, bool includeProbeCharacters, System_String_o** error, const MethodInfo* method);
// 0x3b438c0

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchTypography__CanRender
          (TMPro_TMP_FontAsset_o *font,System_String_o *requiredText,bool_conflict includeProbeCharacters,
          System_String_o **error,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_o *pSVar4;
  undefined8 uVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  MethodInfo *languageName;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  int32_t weight;
  TMPro_TMP_FontAsset_o *family;
  System_String_o *local_40;
  System_UInt32_array *local_38;
  
  if (g_data_057a9c94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"required glyphs are missing");
    il2cpp_runtime_helper_023445d0(&"_FaceColor");
    il2cpp_runtime_helper_023445d0(&"material is missing");
    il2cpp_runtime_helper_023445d0(&"material is missing _FaceColor");
    il2cpp_runtime_helper_023445d0(&"font is null");
    g_data_057a9c94 = '\x01';
  }
  local_38 = (System_UInt32_array *)0x0;
  local_40 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  weight = 0;
  family = font;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (font == (TMPro_TMP_FontAsset_o *)0x0) {
label_03b43a90:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c8d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
        g_data_057a9c8d = '\x01';
        iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
        pMVar6 = extraout_RDX_03;
      }
      else {
        iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
        pMVar6 = languageName;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar6 = extraout_RDX_04;
      }
      if (g_data_057a9c8e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypographyLocale);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
        g_data_057a9c8e = '\x01';
        iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
        pMVar6 = extraout_RDX_05;
      }
      else {
        iVar1 = *(int *)(TypeInfo_GisketchTypography + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar6 = extraout_RDX_06;
      }
      pSVar4 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key((System_String_o *)family,weight,pMVar6);
      pMVar6 = extraout_RDX_01;
      if (*(int *)(TypeInfo_GisketchTypographyLocale + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar6 = extraout_RDX_02;
      }
      pSVar4 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
                         (pSVar4,(System_String_o *)languageName,pMVar6);
      return (bool_conflict)pSVar4;
    }
    x = (UnityEngine_Object_o *)(font->fields).material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    weight = 0;
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this = (font->fields).material;
      family = (TMPro_TMP_FontAsset_o *)0x0;
      if (__this == (UnityEngine_Material_o *)0x0) goto label_03b43a90;
      bVar2 = UnityEngine_Material__HasProperty_4dcb5b0(__this,"_FaceColor",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        puVar3 = &"material is missing _FaceColor";
      }
      else {
        pMVar6 = extraout_RDX;
        if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar6 = extraout_RDX_00;
        }
        pSVar4 = Gisketch_Aottg2UI_Styling_GisketchTypography__RequiredCharacters
                           (requiredText,includeProbeCharacters & 0xff,pMVar6);
        bVar2 = TMPro_TMP_FontAsset__HasCharacters_4c50910(font,pSVar4,&local_38,1,0,(MethodInfo *)0x0);
        if (((char)bVar2 != '\0') ||
           (((font->fields).m_AtlasPopulationMode == 1 &&
            (bVar2 = TMPro_TMP_FontAsset__TryAddCharacters_4c53320(font,pSVar4,&local_40,1,(MethodInfo *)0x0),
            (char)bVar2 != '\0')))) {
          *error = (System_String_o *)0x0;
          uVar5 = il2cpp_runtime_helper_022b4080(error,0);
          return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
        }
        puVar3 = &"required glyphs are missing";
      }
    }
    else {
      puVar3 = &"material is missing";
    }
  }
  else {
    puVar3 = &"font is null";
  }
  *error = (System_String_o *)*puVar3;
  il2cpp_runtime_helper_022b4080(error,*puVar3);
  return 0;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$RequiredCharacters
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__RequiredCharacters (System_String_o* requiredText, bool includeProbeCharacters, const MethodInfo* method);
// 0x3b440a0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__RequiredCharacters
          (System_String_o *requiredText,bool_conflict includeProbeCharacters,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint16_t uVar3;
  bool_conflict bVar4;
  System_String_o **ppSVar5;
  System_Text_StringBuilder_o *__this;
  System_Collections_Generic_HashSet_char__o *__this_00;
  System_String_o *pSVar6;
  long lVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int32_t iVar8;
  
  if (g_data_057a9c95 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Char);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_char);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"Aa0");
    g_data_057a9c95 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(requiredText,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if ((char)includeProbeCharacters != '\0') {
      __this = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
      System_Text_StringBuilder___ctor_3b028a0(__this,"Aa0",(MethodInfo *)0x0);
      __this_00 = (System_Collections_Generic_HashSet_char__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_char);
      System_Collections_Generic_HashSet_char____ctor_33ce5f0
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)"Aa0",MethodInfo_HashSet_1_System_Char);
      if (requiredText != (System_String_o *)0x0) {
        if (__this_00 == (System_Collections_Generic_HashSet_char__o *)0x0) {
          if (0 < (requiredText->fields)._stringLength) {
            iVar8 = 0;
            do {
              uVar3 = System_String__get_Chars(requiredText,iVar8,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar4 = System_Char__IsControl(uVar3,(MethodInfo *)0x0);
              if ((char)bVar4 == '\0') goto label_03b44330;
              iVar8 = iVar8 + 1;
            } while (iVar8 < (requiredText->fields)._stringLength);
          }
        }
        else {
          iVar1 = (requiredText->fields)._stringLength;
          if (__this == (System_Text_StringBuilder_o *)0x0) {
            if (0 < iVar1) {
              iVar8 = 0;
              do {
                uVar3 = System_String__get_Chars(requiredText,iVar8,(MethodInfo *)0x0);
                if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar4 = System_Char__IsControl(uVar3,(MethodInfo *)0x0);
                if (((char)bVar4 == '\0') &&
                   (bVar4 = System_Collections_Generic_HashSet_char___Add(__this_00,uVar3,MethodInfo_Boolean_Add),
                   (char)bVar4 != '\0')) goto label_03b44330;
                iVar8 = iVar8 + 1;
              } while (iVar8 < (requiredText->fields)._stringLength);
            }
          }
          else if (0 < iVar1) {
            iVar8 = 0;
            do {
              uVar3 = System_String__get_Chars(requiredText,iVar8,(MethodInfo *)0x0);
              if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar4 = System_Char__IsControl(uVar3,(MethodInfo *)0x0);
              if (((char)bVar4 == '\0') &&
                 (bVar4 = System_Collections_Generic_HashSet_char___Add(__this_00,uVar3,MethodInfo_Boolean_Add),
                 (char)bVar4 != '\0')) {
                System_Text_StringBuilder__Append_3b048f0(__this,uVar3,(MethodInfo *)0x0);
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < (requiredText->fields)._stringLength);
          }
        }
        if (__this != (System_Text_StringBuilder_o *)0x0) {
          pSVar6 = (System_String_o *)
                   (*(__this->klass->vtable)._3_ToString.methodPtr)
                             (__this,(__this->klass->vtable)._3_ToString.method);
          return pSVar6;
        }
      }
label_03b44330:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c96 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
        il2cpp_runtime_helper_023445d0(&TypeInfo_string);
        il2cpp_runtime_helper_023445d0(&"NotoSansKR-Regular SDF");
        il2cpp_runtime_helper_023445d0(&"NotoSansSC-Regular SDF");
        il2cpp_runtime_helper_023445d0(&"NotoSansArabic-VariableFont_wdth,wght SDF");
        il2cpp_runtime_helper_023445d0(&"Symbola SDF");
        il2cpp_runtime_helper_023445d0(&"NotoSansThai-Regular SDF");
        il2cpp_runtime_helper_023445d0(&"NotoSansJP-Regular SDF");
        il2cpp_runtime_helper_023445d0(&"NotoSans-Regular SDF");
        il2cpp_runtime_helper_023445d0(&"NotoSansTC-Regular SDF");
        g_data_057a9c96 = '\x01';
      }
      pSVar6 = TypeInfo_string;
      lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) != 0) {
          pSVar6 = (System_String_o *)(lVar7 + 0x20);
          *(undefined8 *)(lVar7 + 0x20) = "NotoSans-Regular SDF";
          il2cpp_runtime_helper_022b4080();
          if (1 < *(uint *)(lVar7 + 0x18)) {
            pSVar6 = (System_String_o *)(lVar7 + 0x28);
            *(undefined8 *)(lVar7 + 0x28) = "NotoSansSC-Regular SDF";
            il2cpp_runtime_helper_022b4080();
            if (2 < *(uint *)(lVar7 + 0x18)) {
              pSVar6 = (System_String_o *)(lVar7 + 0x30);
              *(undefined8 *)(lVar7 + 0x30) = "NotoSansTC-Regular SDF";
              il2cpp_runtime_helper_022b4080();
              if (3 < *(uint *)(lVar7 + 0x18)) {
                pSVar6 = (System_String_o *)(lVar7 + 0x38);
                *(undefined8 *)(lVar7 + 0x38) = "NotoSansJP-Regular SDF";
                il2cpp_runtime_helper_022b4080();
                if (4 < *(uint *)(lVar7 + 0x18)) {
                  pSVar6 = (System_String_o *)(lVar7 + 0x40);
                  *(undefined8 *)(lVar7 + 0x40) = "NotoSansKR-Regular SDF";
                  il2cpp_runtime_helper_022b4080();
                  if (5 < *(uint *)(lVar7 + 0x18)) {
                    pSVar6 = (System_String_o *)(lVar7 + 0x48);
                    *(undefined8 *)(lVar7 + 0x48) = "NotoSansThai-Regular SDF";
                    il2cpp_runtime_helper_022b4080();
                    if (6 < *(uint *)(lVar7 + 0x18)) {
                      pSVar6 = (System_String_o *)(lVar7 + 0x50);
                      *(undefined8 *)(lVar7 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                      il2cpp_runtime_helper_022b4080();
                      if (7 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined8 *)(lVar7 + 0x58) = "Symbola SDF";
                        il2cpp_runtime_helper_022b4080(lVar7 + 0x58);
                        **(long **)(TypeInfo_GisketchTypography + 0xb8) = lVar7;
                        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchTypography + 0xb8),lVar7);
                        pSVar6 = TypeInfo_string;
                        lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
                        if (lVar7 == 0) goto label_03b44787;
                        if (*(int *)(lVar7 + 0x18) != 0) {
                          pSVar6 = (System_String_o *)(lVar7 + 0x20);
                          *(undefined8 *)(lVar7 + 0x20) = "NotoSans-Regular SDF";
                          il2cpp_runtime_helper_022b4080();
                          if (1 < *(uint *)(lVar7 + 0x18)) {
                            pSVar6 = (System_String_o *)(lVar7 + 0x28);
                            *(undefined8 *)(lVar7 + 0x28) = "NotoSansSC-Regular SDF";
                            il2cpp_runtime_helper_022b4080();
                            if (2 < *(uint *)(lVar7 + 0x18)) {
                              pSVar6 = (System_String_o *)(lVar7 + 0x30);
                              *(undefined8 *)(lVar7 + 0x30) = "NotoSansTC-Regular SDF";
                              il2cpp_runtime_helper_022b4080();
                              if (3 < *(uint *)(lVar7 + 0x18)) {
                                pSVar6 = (System_String_o *)(lVar7 + 0x38);
                                *(undefined8 *)(lVar7 + 0x38) = "NotoSansJP-Regular SDF";
                                il2cpp_runtime_helper_022b4080();
                                if (4 < *(uint *)(lVar7 + 0x18)) {
                                  pSVar6 = (System_String_o *)(lVar7 + 0x40);
                                  *(undefined8 *)(lVar7 + 0x40) = "NotoSansKR-Regular SDF";
                                  il2cpp_runtime_helper_022b4080();
                                  if (5 < *(uint *)(lVar7 + 0x18)) {
                                    pSVar6 = (System_String_o *)(lVar7 + 0x48);
                                    *(undefined8 *)(lVar7 + 0x48) = "NotoSansThai-Regular SDF";
                                    il2cpp_runtime_helper_022b4080();
                                    if (6 < *(uint *)(lVar7 + 0x18)) {
                                      pSVar6 = (System_String_o *)(lVar7 + 0x50);
                                      *(undefined8 *)(lVar7 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                      il2cpp_runtime_helper_022b4080();
                                      if (7 < *(uint *)(lVar7 + 0x18)) {
                                        *(undefined8 *)(lVar7 + 0x58) = "Symbola SDF";
                                        il2cpp_runtime_helper_022b4080(lVar7 + 0x58);
                                        lVar2 = *(long *)(TypeInfo_GisketchTypography + 0xb8);
                                        *(long *)(lVar2 + 8) = lVar7;
                                        il2cpp_runtime_helper_022b4080(lVar2 + 8,lVar7);
                                        pSVar6 = TypeInfo_string;
                                        lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
                                        if (lVar7 == 0) goto label_03b44787;
                                        if (*(int *)(lVar7 + 0x18) != 0) {
                                          pSVar6 = (System_String_o *)(lVar7 + 0x20);
                                          *(undefined8 *)(lVar7 + 0x20) = "NotoSans-Regular SDF";
                                          il2cpp_runtime_helper_022b4080();
                                          if (1 < *(uint *)(lVar7 + 0x18)) {
                                            pSVar6 = (System_String_o *)(lVar7 + 0x28);
                                            *(undefined8 *)(lVar7 + 0x28) = "NotoSansSC-Regular SDF";
                                            il2cpp_runtime_helper_022b4080();
                                            if (2 < *(uint *)(lVar7 + 0x18)) {
                                              pSVar6 = (System_String_o *)(lVar7 + 0x30);
                                              *(undefined8 *)(lVar7 + 0x30) = "NotoSansTC-Regular SDF";
                                              il2cpp_runtime_helper_022b4080();
                                              if (3 < *(uint *)(lVar7 + 0x18)) {
                                                pSVar6 = (System_String_o *)(lVar7 + 0x38);
                                                *(undefined8 *)(lVar7 + 0x38) = "NotoSansJP-Regular SDF";
                                                il2cpp_runtime_helper_022b4080();
                                                if (4 < *(uint *)(lVar7 + 0x18)) {
                                                  pSVar6 = (System_String_o *)(lVar7 + 0x40);
                                                  *(undefined8 *)(lVar7 + 0x40) = "NotoSansKR-Regular SDF";
                                                  il2cpp_runtime_helper_022b4080();
                                                  if (5 < *(uint *)(lVar7 + 0x18)) {
                                                    pSVar6 = (System_String_o *)(lVar7 + 0x48);
                                                    *(undefined8 *)(lVar7 + 0x48) = "NotoSansThai-Regular SDF";
                                                    il2cpp_runtime_helper_022b4080();
                                                    if (6 < *(uint *)(lVar7 + 0x18)) {
                                                      pSVar6 = (System_String_o *)(lVar7 + 0x50);
                                                      *(undefined8 *)(lVar7 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                                      il2cpp_runtime_helper_022b4080();
                                                      if (7 < *(uint *)(lVar7 + 0x18)) {
                                                        *(undefined8 *)(lVar7 + 0x58) = "Symbola SDF";
                                                        il2cpp_runtime_helper_022b4080(lVar7 + 0x58);
                                                        lVar2 = *(long *)(TypeInfo_GisketchTypography + 0xb8);
                                                        *(long *)(lVar2 + 0x10) = lVar7;
                                                        pSVar6 = (System_String_o *)
                                                                 il2cpp_runtime_helper_022b4080(lVar2 + 0x10,lVar7);
                                                        return pSVar6;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
label_03b44787:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c9a == '\0') {
        il2cpp_runtime_helper_023445d0(&"header SDF");
        il2cpp_runtime_helper_023445d0(&"IntensaFuente SDF");
        g_data_057a9c9a = '\x01';
      }
      bVar4 = System_String__op_Equality(pSVar6,"header SDF",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        bVar4 = System_String__op_Equality(pSVar6,"IntensaFuente SDF",(MethodInfo *)0x0);
        return (System_String_o *)CONCAT44(extraout_var_00,bVar4);
      }
      return (System_String_o *)CONCAT71((int7)(CONCAT44(extraout_var,bVar4) >> 8),1);
    }
  }
  else {
    if ((char)includeProbeCharacters == '\0') {
      ppSVar5 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      ppSVar5 = &"Aa0";
    }
    requiredText = *ppSVar5;
  }
  return requiredText;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ReportError
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportError (System_String_o* message, const MethodInfo* method);
// 0x3b43360

void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportError(System_String_o *message,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ReportWarning
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportWarning (System_String_o* message, const MethodInfo* method);
// 0x3b43fb0

void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportWarning(System_String_o *message,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography___cctor (const MethodInfo* method);
// 0x3b44340

void Gisketch_Aottg2UI_Styling_GisketchTypography___cctor(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  long lVar3;
  System_String_o *a;
  
  if (g_data_057a9c96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"NotoSansKR-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"NotoSansSC-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    il2cpp_runtime_helper_023445d0(&"Symbola SDF");
    il2cpp_runtime_helper_023445d0(&"NotoSansThai-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"NotoSansJP-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"NotoSans-Regular SDF");
    il2cpp_runtime_helper_023445d0(&"NotoSansTC-Regular SDF");
    g_data_057a9c96 = '\x01';
  }
  a = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      a = (System_String_o *)(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0x20) = "NotoSans-Regular SDF";
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar3 + 0x18)) {
        a = (System_String_o *)(lVar3 + 0x28);
        *(undefined8 *)(lVar3 + 0x28) = "NotoSansSC-Regular SDF";
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar3 + 0x18)) {
          a = (System_String_o *)(lVar3 + 0x30);
          *(undefined8 *)(lVar3 + 0x30) = "NotoSansTC-Regular SDF";
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar3 + 0x18)) {
            a = (System_String_o *)(lVar3 + 0x38);
            *(undefined8 *)(lVar3 + 0x38) = "NotoSansJP-Regular SDF";
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar3 + 0x18)) {
              a = (System_String_o *)(lVar3 + 0x40);
              *(undefined8 *)(lVar3 + 0x40) = "NotoSansKR-Regular SDF";
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar3 + 0x18)) {
                a = (System_String_o *)(lVar3 + 0x48);
                *(undefined8 *)(lVar3 + 0x48) = "NotoSansThai-Regular SDF";
                il2cpp_runtime_helper_022b4080();
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  a = (System_String_o *)(lVar3 + 0x50);
                  *(undefined8 *)(lVar3 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                  il2cpp_runtime_helper_022b4080();
                  if (7 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x58) = "Symbola SDF";
                    il2cpp_runtime_helper_022b4080(lVar3 + 0x58);
                    **(long **)(TypeInfo_GisketchTypography + 0xb8) = lVar3;
                    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchTypography + 0xb8),lVar3);
                    a = TypeInfo_string;
                    lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
                    if (lVar3 == 0) goto label_03b44787;
                    if (*(int *)(lVar3 + 0x18) != 0) {
                      a = (System_String_o *)(lVar3 + 0x20);
                      *(undefined8 *)(lVar3 + 0x20) = "NotoSans-Regular SDF";
                      il2cpp_runtime_helper_022b4080();
                      if (1 < *(uint *)(lVar3 + 0x18)) {
                        a = (System_String_o *)(lVar3 + 0x28);
                        *(undefined8 *)(lVar3 + 0x28) = "NotoSansSC-Regular SDF";
                        il2cpp_runtime_helper_022b4080();
                        if (2 < *(uint *)(lVar3 + 0x18)) {
                          a = (System_String_o *)(lVar3 + 0x30);
                          *(undefined8 *)(lVar3 + 0x30) = "NotoSansTC-Regular SDF";
                          il2cpp_runtime_helper_022b4080();
                          if (3 < *(uint *)(lVar3 + 0x18)) {
                            a = (System_String_o *)(lVar3 + 0x38);
                            *(undefined8 *)(lVar3 + 0x38) = "NotoSansJP-Regular SDF";
                            il2cpp_runtime_helper_022b4080();
                            if (4 < *(uint *)(lVar3 + 0x18)) {
                              a = (System_String_o *)(lVar3 + 0x40);
                              *(undefined8 *)(lVar3 + 0x40) = "NotoSansKR-Regular SDF";
                              il2cpp_runtime_helper_022b4080();
                              if (5 < *(uint *)(lVar3 + 0x18)) {
                                a = (System_String_o *)(lVar3 + 0x48);
                                *(undefined8 *)(lVar3 + 0x48) = "NotoSansThai-Regular SDF";
                                il2cpp_runtime_helper_022b4080();
                                if (6 < *(uint *)(lVar3 + 0x18)) {
                                  a = (System_String_o *)(lVar3 + 0x50);
                                  *(undefined8 *)(lVar3 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                  il2cpp_runtime_helper_022b4080();
                                  if (7 < *(uint *)(lVar3 + 0x18)) {
                                    *(undefined8 *)(lVar3 + 0x58) = "Symbola SDF";
                                    il2cpp_runtime_helper_022b4080(lVar3 + 0x58);
                                    lVar1 = *(long *)(TypeInfo_GisketchTypography + 0xb8);
                                    *(long *)(lVar1 + 8) = lVar3;
                                    il2cpp_runtime_helper_022b4080(lVar1 + 8,lVar3);
                                    a = TypeInfo_string;
                                    lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,8);
                                    if (lVar3 == 0) goto label_03b44787;
                                    if (*(int *)(lVar3 + 0x18) != 0) {
                                      a = (System_String_o *)(lVar3 + 0x20);
                                      *(undefined8 *)(lVar3 + 0x20) = "NotoSans-Regular SDF";
                                      il2cpp_runtime_helper_022b4080();
                                      if (1 < *(uint *)(lVar3 + 0x18)) {
                                        a = (System_String_o *)(lVar3 + 0x28);
                                        *(undefined8 *)(lVar3 + 0x28) = "NotoSansSC-Regular SDF";
                                        il2cpp_runtime_helper_022b4080();
                                        if (2 < *(uint *)(lVar3 + 0x18)) {
                                          a = (System_String_o *)(lVar3 + 0x30);
                                          *(undefined8 *)(lVar3 + 0x30) = "NotoSansTC-Regular SDF";
                                          il2cpp_runtime_helper_022b4080();
                                          if (3 < *(uint *)(lVar3 + 0x18)) {
                                            a = (System_String_o *)(lVar3 + 0x38);
                                            *(undefined8 *)(lVar3 + 0x38) = "NotoSansJP-Regular SDF";
                                            il2cpp_runtime_helper_022b4080();
                                            if (4 < *(uint *)(lVar3 + 0x18)) {
                                              a = (System_String_o *)(lVar3 + 0x40);
                                              *(undefined8 *)(lVar3 + 0x40) = "NotoSansKR-Regular SDF";
                                              il2cpp_runtime_helper_022b4080();
                                              if (5 < *(uint *)(lVar3 + 0x18)) {
                                                a = (System_String_o *)(lVar3 + 0x48);
                                                *(undefined8 *)(lVar3 + 0x48) = "NotoSansThai-Regular SDF";
                                                il2cpp_runtime_helper_022b4080();
                                                if (6 < *(uint *)(lVar3 + 0x18)) {
                                                  a = (System_String_o *)(lVar3 + 0x50);
                                                  *(undefined8 *)(lVar3 + 0x50) = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                                  il2cpp_runtime_helper_022b4080();
                                                  if (7 < *(uint *)(lVar3 + 0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x58) = "Symbola SDF";
                                                    il2cpp_runtime_helper_022b4080(lVar3 + 0x58);
                                                    lVar1 = *(long *)(TypeInfo_GisketchTypography + 0xb8);
                                                    *(long *)(lVar1 + 0x10) = lVar3;
                                                    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,lVar3);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b44787:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c9a == '\0') {
    il2cpp_runtime_helper_023445d0(&"header SDF");
    il2cpp_runtime_helper_023445d0(&"IntensaFuente SDF");
    g_data_057a9c9a = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"header SDF",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  System_String__op_Equality(a,"IntensaFuente SDF",(MethodInfo *)0x0);
  return;
}


