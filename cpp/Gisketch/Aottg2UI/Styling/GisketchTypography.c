// Type: Gisketch.Aottg2UI.Styling.GisketchTypography
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchTypography.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchTypography$$Resolve
// il2cpp: TMPro_TMP_FontAsset_o* Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve (System_String_o* family, int32_t weight, System_String_o* requiredText, bool useLocaleDisplayFont, const MethodInfo* method);
// 0x1818bb1e0

TMPro_TMP_FontAsset_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
          (System_String_o *family,int32_t weight,System_String_o *requiredText,bool useLocaleDisplayFont,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *key;
  System_String_o *pSVar2;
  System_String_o *path;
  TMPro_TMP_FontAsset_o *pTVar3;
  System_String_array *assetNames;
  System_String_o *local_res8 [4];
  
  if (Il2CppMethodInitialized_184341f3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Settings);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid AoTTG UI font asset ");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"Missing AoTTG UI font asset ");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184341f3a = '\x01';
  }
  local_res8[0] = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
  }
  key = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)0x0);
  pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage_18bac70
                     (family,weight,pSVar2,useLocaleDisplayFont,(MethodInfo *)0x0);
  path = System_String__Concat_1969e50("UI/Fonts/",pSVar2,(MethodInfo *)0x0);
  pTVar3 = UnityEngine_Resources__Load_object_
                     (path,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    System_String__Concat_1969b70("Missing AoTTG UI font asset ",pSVar2,".",(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    }
    assetNames = Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey(key,(MethodInfo *)0x0)
    ;
    Gisketch_Aottg2UI_Styling_GisketchTypography__ValidateFallbacks(pTVar3,assetNames,(MethodInfo *)0x0);
    bVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__CanRender
                      (pTVar3,requiredText,true,local_res8,(MethodInfo *)0x0);
    if (bVar1) {
      return pTVar3;
    }
    System_String__Concat_1969590
              ("Invalid AoTTG UI font asset ",pSVar2,": ",local_res8[0],(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
  }
  if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
  }
  pTVar3 = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
  return pTVar3;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__Key (System_String_o* family, int32_t weight, const MethodInfo* method);
// 0x1818bade0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818baead: mov rbx, qword ptr [rip + 0x27d8b2c]  ; "barlow"
// asm:   0x1818baeb4: jmp 0x1818baedf
// asm:   0x1818baf14: mov rbx, qword ptr [rip + 0x27c37f5]  ; "jek5"

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__Key(System_String_o *family,int32_t weight,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184341f3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"header SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"menutext");
    il2cpp_codegen_initialize_runtime_metadata(&"Barlow-SemiBold SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"IntensaFuente SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"Barlow-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"Barlow-Bold SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"jek5");
    il2cpp_codegen_initialize_runtime_metadata(&"barlow");
    il2cpp_codegen_initialize_runtime_metadata(&"Barlow-Medium SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"JEK5 SDF");
    Il2CppMethodInitialized_184341f3b = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(family,(MethodInfo *)0x0);
  pSVar2 = "barlow";
  if (!bVar1) {
    if ((family == (System_String_o *)0x0) ||
       (pSVar2 = System_String__Trim(family,(MethodInfo *)0x0), pSVar2 == (System_String_o *)0x0)) {
      ThrowNullReferenceException();
    }
    pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
  }
  bVar1 = System_String__op_Equality(pSVar2,"subtext",(MethodInfo *)0x0);
  a = "jek5";
  if ((!bVar1) &&
     (bVar1 = System_String__op_Equality(pSVar2,"text",(MethodInfo *)0x0), a = pSVar2, bVar1))
  {
    a = "barlow";
  }
  bVar1 = System_String__op_Equality(a,"header",(MethodInfo *)0x0);
  if (bVar1) {
    return "header SDF";
  }
  bVar1 = System_String__op_Equality(a,"menutext",(MethodInfo *)0x0);
  if (bVar1) {
    return "IntensaFuente SDF";
  }
  bVar1 = System_String__op_Equality(a,"jek5",(MethodInfo *)0x0);
  if (bVar1) {
    return "JEK5 SDF";
  }
  if (weight < 0x1c3) {
    return "Barlow-Regular SDF";
  }
  if (weight < 0x227) {
    return "Barlow-Medium SDF";
  }
  if (0x28a < weight) {
    return "Barlow-Bold SDF";
  }
  return "Barlow-SemiBold SDF";
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$KeyForLanguage
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage (System_String_o* family, int32_t weight, System_String_o* languageName, const MethodInfo* method);
// 0x1818bad10

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage
          (System_String_o *family,int32_t weight,System_String_o *languageName,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184341f3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    Il2CppMethodInitialized_184341f3c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
  }
  if (Il2CppMethodInitialized_184341f3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    Il2CppMethodInitialized_184341f3d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
  }
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
                     (pSVar1,languageName,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$KeyForLanguage
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage (System_String_o* family, int32_t weight, System_String_o* languageName, bool useLocaleDisplayFont, const MethodInfo* method);
// 0x1818bac70

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage_18bac70
          (System_String_o *family,int32_t weight,System_String_o *languageName,bool useLocaleDisplayFont,
          MethodInfo *method)

{
  System_String_o *baseKey;
  
  if (Il2CppMethodInitialized_184341f3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    Il2CppMethodInitialized_184341f3d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
  }
  baseKey = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,(MethodInfo *)0x0);
  if (useLocaleDisplayFont) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    }
    baseKey = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
                        (baseKey,languageName,(MethodInfo *)0x0);
  }
  return baseKey;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$FallbackAssetNamesFor
// il2cpp: System_String_array* Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesFor (System_String_o* family, int32_t weight, const MethodInfo* method);
// 0x1818baaa0

System_String_array *
Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesFor
          (System_String_o *family,int32_t weight,MethodInfo *method)

{
  System_String_o *key;
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_184341f3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    Il2CppMethodInitialized_184341f3e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
  }
  key = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey(key,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$FallbackAssetNamesForKey
// il2cpp: System_String_array* Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey (System_String_o* key, const MethodInfo* method);
// 0x1818ba9b0

System_String_array *
Gisketch_Aottg2UI_Styling_GisketchTypography__FallbackAssetNamesForKey
          (System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    Il2CppMethodInitialized_184341f3f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
  }
  if (Il2CppMethodInitialized_184341f40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"header SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"IntensaFuente SDF");
    Il2CppMethodInitialized_184341f40 = '\x01';
  }
  bVar1 = System_String__op_Equality(key,"header SDF",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(key,"IntensaFuente SDF",(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
      }
      return TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->static_fields->BodyFallbackAssetNames;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
  }
  return TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->static_fields->DisplayFallbackAssetNames;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$IsDisplayKey
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__IsDisplayKey (System_String_o* key, const MethodInfo* method);
// 0x1818bac00

bool Gisketch_Aottg2UI_Styling_GisketchTypography__IsDisplayKey(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"header SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"IntensaFuente SDF");
    Il2CppMethodInitialized_184341f40 = '\x01';
  }
  bVar1 = System_String__op_Equality(key,"header SDF",(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  bVar1 = System_String__op_Equality(key,"IntensaFuente SDF",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ValidateFallbacks
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography__ValidateFallbacks (TMPro_TMP_FontAsset_o* font, System_String_array* assetNames, const MethodInfo* method);
// 0x1818bb400
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818bb74c: mov r14, qword ptr [rsp + 0x20]
// asm:   0x1818bb751: mov rbp, qword ptr [rsp + 0x48]
// asm:   0x1818bb756: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x1818bb75b: mov rsi, qword ptr [rsp + 0x50]

void Gisketch_Aottg2UI_Styling_GisketchTypography__ValidateFallbacks
               (TMPro_TMP_FontAsset_o *font,System_String_array *assetNames,MethodInfo *method)

{
  System_Collections_Generic_List_TMP_FontAsset__o *__this;
  bool bVar1;
  System_Collections_Generic_List_TMP_FontAsset__o *__this_00;
  System_String_o *pSVar2;
  TMPro_TMP_FontAsset_o *pTVar3;
  TMPro_TMP_FontAsset_o *y;
  uint uVar4;
  int index;
  
  if (Il2CppMethodInitialized_184341f41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_ctor_40e2850);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&" had stale fallback order. Applied runtime fallback order.");
    il2cpp_codegen_initialize_runtime_metadata(&"Missing AoTTG UI fallback font asset ");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI font asset ");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184341f41 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((!bVar1) && (assetNames != (System_String_array *)0x0)) && (assetNames->max_length != 0)) {
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TMP_FontAsset);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_T__o *)__this_00,(int32_t)assetNames->max_length,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_TMP_FontAsset_ctor_40e2850);
    uVar4 = 0;
    while ((int)uVar4 < (int)assetNames->max_length) {
      if ((uint)assetNames->max_length <= uVar4) {
label_1818bb76e:
        ThrowIndexOutOfRangeException();
      }
      pSVar2 = System_String__Concat_1969e50
                         ("UI/Fonts/",assetNames->m_Items[(int)uVar4],(MethodInfo *)0x0);
      pTVar3 = UnityEngine_Resources__Load_object_
                         (pSVar2,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((uint)assetNames->max_length <= uVar4) goto label_1818bb76e;
        System_String__Concat_1969b70
                  ("Missing AoTTG UI fallback font asset ",assetNames->m_Items[(int)uVar4],".",
                   (MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
        }
label_1818bb60c:
        uVar4 = uVar4 + 1;
      }
      else {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)font,(MethodInfo *)0x0);
        if (!bVar1) goto label_1818bb60c;
        if (__this_00 == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) goto label_1818bb768;
        il2cpp_runtime_helper_180012890(__this_00,pTVar3);
        uVar4 = uVar4 + 1;
      }
    }
    if (__this_00 == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
label_1818bb768:
      ThrowNullReferenceException();
    }
    if ((__this_00->fields)._size != 0) {
      if (font == (TMPro_TMP_FontAsset_o *)0x0) goto label_1818bb768;
      __this = (font->fields).m_FallbackFontAssetTable;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
      }
      if (Il2CppMethodInitialized_184341f42 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184341f42 = '\x01';
      }
      if ((__this == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) ||
         ((__this->fields)._size != (__this_00->fields)._size)) {
label_1818bb6fe:
        (font->fields).m_FallbackFontAssetTable = __this_00;
        Il2CppCodeGenWriteBarrier(&(font->fields).m_FallbackFontAssetTable,__this_00);
        pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)font,(MethodInfo *)0x0);
        System_String__Concat_1969b70("AoTTG UI font asset ",pSVar2," had stale fallback order. Applied runtime fallback order.",(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
        }
      }
      else {
        for (index = 0; index < (__this_00->fields)._size; index = index + 1) {
          pTVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)__this,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item);
          y = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)__this_00,index,
                         (MethodInfo_92B830 *)
                         MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
          if (bVar1) goto label_1818bb6fe;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$FallbacksMatch
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__FallbacksMatch (System_Collections_Generic_List_TMP_FontAsset__o* current, System_Collections_Generic_List_TMP_FontAsset__o* expected, const MethodInfo* method);
// 0x1818bab10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818bab7d: nop dword ptr [rax]

bool Gisketch_Aottg2UI_Styling_GisketchTypography__FallbacksMatch
               (System_Collections_Generic_List_TMP_FontAsset__o *current,
               System_Collections_Generic_List_TMP_FontAsset__o *expected,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_FontAsset_o *x;
  TMPro_TMP_FontAsset_o *y;
  int index;
  
  if (Il2CppMethodInitialized_184341f42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f42 = '\x01';
  }
  if (current != (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
    if (expected == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((current->fields)._size == (expected->fields)._size) {
      index = 0;
      while( true ) {
        if ((expected->fields)._size <= index) {
          return true;
        }
        x = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)current,index,
                       (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item)
        ;
        y = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)expected,index,
                       (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item)
        ;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        if (bVar1) break;
        index = index + 1;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$CanRender
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__CanRender (TMPro_TMP_FontAsset_o* font, System_String_o* requiredText, bool includeProbeCharacters, System_String_o** error, const MethodInfo* method);
// 0x1818ba640
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ba82c: nop dword ptr [rax]
// asm:   0x1818ba8c9: mov rbp, qword ptr [rip + 0x27c69a8]  ; "Aa0"
// asm:   0x1818ba8d0: jmp 0x1818ba8e3
// asm:   0x1818ba941: mov rcx, rdi

bool Gisketch_Aottg2UI_Styling_GisketchTypography__CanRender
               (TMPro_TMP_FontAsset_o *font,System_String_o *requiredText,bool includeProbeCharacters,
               System_String_o **error,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  uint16_t c;
  System_Text_StringBuilder_o *__this;
  System_Collections_Generic_HashSet_char__o *__this_00;
  System_String_o *value;
  int32_t index;
  System_UInt32_array *local_res8;
  
  if (Il2CppMethodInitialized_184341f43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"required glyphs are missing");
    il2cpp_codegen_initialize_runtime_metadata(&"_FaceColor");
    il2cpp_codegen_initialize_runtime_metadata(&"material is missing");
    il2cpp_codegen_initialize_runtime_metadata(&"material is missing _FaceColor");
    il2cpp_codegen_initialize_runtime_metadata(&"font is null");
    Il2CppMethodInitialized_184341f43 = '\x01';
  }
  local_res8 = (System_UInt32_array *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    *error = "font is null";
    Il2CppCodeGenWriteBarrier(error,"font is null");
    return false;
  }
  if (font == (TMPro_TMP_FontAsset_o *)0x0) goto label_1818ba99c;
  pUVar1 = (font->fields).m_Material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    *error = "material is missing";
    value = "material is missing";
  }
  else {
    pUVar1 = (font->fields).m_Material;
    if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_1818ba99c;
    bVar2 = UnityEngine_Material__HasProperty_2ee2c00(pUVar1,"_FaceColor",(MethodInfo *)0x0);
    if (!bVar2) {
      *error = "material is missing _FaceColor";
      value = "material is missing _FaceColor";
      goto label_1818ba944;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    }
    if (Il2CppMethodInitialized_184341f44 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_char_Add);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_char_ctor_40d8140);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_char);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"Aa0");
      Il2CppMethodInitialized_184341f44 = '\x01';
    }
    bVar2 = System_String__IsNullOrEmpty(requiredText,(MethodInfo *)0x0);
    if (bVar2) {
      requiredText = "Aa0";
      if (!includeProbeCharacters) {
        requiredText = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
    }
    else if (includeProbeCharacters) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
      System_Text_StringBuilder___ctor_1981780(__this,"Aa0",(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_char);
      System_Collections_Generic_HashSet_char____ctor_176db00
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)"Aa0",
                 (MethodInfo_176DB00 *)MethodInfo_System_Collections_Generic_HashSet_char_ctor_40d8140);
      index = 0;
      if (requiredText == (System_String_o *)0x0) {
label_1818ba99c:
        ThrowNullReferenceException();
      }
      for (; index < (requiredText->fields)._stringLength; index = index + 1) {
        c = System_String__get_Chars(requiredText,index,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        bVar2 = System_Char__IsControl(c,(MethodInfo *)0x0);
        if (!bVar2) {
          if (__this_00 == (System_Collections_Generic_HashSet_char__o *)0x0) goto label_1818ba99c;
          bVar2 = System_Collections_Generic_HashSet_char___Add
                            (__this_00,c,
                             (MethodInfo_1757D40 *)MethodInfo_System_Collections_Generic_HashSet_char_Add);
          if (bVar2) {
            if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818ba99c;
            System_Text_StringBuilder__Append_197e090(__this,c,(MethodInfo *)0x0);
          }
        }
      }
      if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818ba99c;
      requiredText = (*(__this->klass->vtable)._3_ToString.methodPtr)
                               (__this,(__this->klass->vtable)._3_ToString.method);
    }
    bVar2 = TMPro_TMP_FontAsset__HasCharacters_2ceb400
                      (font,requiredText,&local_res8,true,true,(MethodInfo *)0x0);
    if (bVar2) {
      *error = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(error,(void *)0x0);
      return true;
    }
    *error = "required glyphs are missing";
    value = "required glyphs are missing";
  }
label_1818ba944:
  Il2CppCodeGenWriteBarrier(error,value);
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$RequiredCharacters
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__RequiredCharacters (System_String_o* requiredText, bool includeProbeCharacters, const MethodInfo* method);
// 0x1818bb010

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__RequiredCharacters
          (System_String_o *requiredText,bool includeProbeCharacters,MethodInfo *method)

{
  bool bVar1;
  uint16_t c;
  System_Text_StringBuilder_o *__this;
  System_Collections_Generic_HashSet_char__o *__this_00;
  System_String_o *pSVar2;
  int32_t index;
  
  if (Il2CppMethodInitialized_184341f44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_char_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_char_ctor_40d8140);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_char);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Aa0");
    Il2CppMethodInitialized_184341f44 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(requiredText,(MethodInfo *)0x0);
  if (bVar1) {
    if (includeProbeCharacters) {
      return "Aa0";
    }
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (!includeProbeCharacters) {
    return requiredText;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_1981780(__this,"Aa0",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_char);
  System_Collections_Generic_HashSet_char____ctor_176db00
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)"Aa0",
             (MethodInfo_176DB00 *)MethodInfo_System_Collections_Generic_HashSet_char_ctor_40d8140);
  index = 0;
  if (requiredText != (System_String_o *)0x0) {
    for (; index < (requiredText->fields)._stringLength; index = index + 1) {
      c = System_String__get_Chars(requiredText,index,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar1 = System_Char__IsControl(c,(MethodInfo *)0x0);
      if (!bVar1) {
        if (__this_00 == (System_Collections_Generic_HashSet_char__o *)0x0) goto label_1818bb1ce;
        bVar1 = System_Collections_Generic_HashSet_char___Add
                          (__this_00,c,
                           (MethodInfo_1757D40 *)MethodInfo_System_Collections_Generic_HashSet_char_Add);
        if (bVar1) {
          if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1818bb1ce;
          System_Text_StringBuilder__Append_197e090(__this,c,(MethodInfo *)0x0);
        }
      }
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar2 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
label_1818bb1ce:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ReportError
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportError (System_String_o* message, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Styling_GisketchTypography__ReportError(System_String_o* message, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ReportWarning
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportWarning (System_String_o* message, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Styling_GisketchTypography__ReportWarning(System_String_o* message, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography___cctor (const MethodInfo* method);
// 0x1818bb780

void Gisketch_Aottg2UI_Styling_GisketchTypography___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_184341f45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansKR-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansSC-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"Symbola SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansThai-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansJP-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSans-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansTC-Regular SDF");
    Il2CppMethodInitialized_184341f45 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
  pSVar1 = "NotoSans-Regular SDF";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "NotoSans-Regular SDF";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      pSVar1 = "NotoSansSC-Regular SDF";
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "NotoSansSC-Regular SDF";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
        pSVar1 = "NotoSansTC-Regular SDF";
        if (2 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[2] = "NotoSansTC-Regular SDF";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
          pSVar1 = "NotoSansJP-Regular SDF";
          if (3 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[3] = "NotoSansJP-Regular SDF";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
            pSVar1 = "NotoSansKR-Regular SDF";
            if (4 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[4] = "NotoSansKR-Regular SDF";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
              pSVar1 = "NotoSansThai-Regular SDF";
              if (5 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[5] = "NotoSansThai-Regular SDF";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
                pSVar1 = "NotoSansArabic-VariableFont_wdth,wght SDF";
                if (6 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[6] = "NotoSansArabic-VariableFont_wdth,wght SDF";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6,pSVar1);
                  pSVar1 = "Symbola SDF";
                  if (7 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[7] = "Symbola SDF";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7,pSVar1);
                    TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->static_fields->
                    BodyFallbackAssetNames = pSVar2;
                    Il2CppCodeGenWriteBarrier
                              (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->static_fields->
                                BodyFallbackAssetNames,pSVar2);
                    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
                    pSVar1 = "NotoSans-Regular SDF";
                    if (pSVar2 == (System_String_array *)0x0) goto label_1818bbbad;
                    if ((int)pSVar2->max_length != 0) {
                      pSVar2->m_Items[0] = "NotoSans-Regular SDF";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                      pSVar1 = "NotoSansSC-Regular SDF";
                      if (1 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[1] = "NotoSansSC-Regular SDF";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                        pSVar1 = "NotoSansTC-Regular SDF";
                        if (2 < (uint)pSVar2->max_length) {
                          pSVar2->m_Items[2] = "NotoSansTC-Regular SDF";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
                          pSVar1 = "NotoSansJP-Regular SDF";
                          if (3 < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[3] = "NotoSansJP-Regular SDF";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
                            pSVar1 = "NotoSansKR-Regular SDF";
                            if (4 < (uint)pSVar2->max_length) {
                              pSVar2->m_Items[4] = "NotoSansKR-Regular SDF";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
                              pSVar1 = "NotoSansThai-Regular SDF";
                              if (5 < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[5] = "NotoSansThai-Regular SDF";
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
                                pSVar1 = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                if (6 < (uint)pSVar2->max_length) {
                                  pSVar2->m_Items[6] = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6,pSVar1);
                                  pSVar1 = "Symbola SDF";
                                  if (7 < (uint)pSVar2->max_length) {
                                    pSVar2->m_Items[7] = "Symbola SDF";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7,pSVar1);
                                    TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->static_fields->
                                    DisplayFallbackAssetNames = pSVar2;
                                    Il2CppCodeGenWriteBarrier
                                              (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->
                                                static_fields->DisplayFallbackAssetNames,pSVar2);
                                    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
                                    pSVar1 = "NotoSans-Regular SDF";
                                    if (pSVar2 == (System_String_array *)0x0) goto label_1818bbbad;
                                    if ((int)pSVar2->max_length != 0) {
                                      pSVar2->m_Items[0] = "NotoSans-Regular SDF";
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                      pSVar1 = "NotoSansSC-Regular SDF";
                                      if (1 < (uint)pSVar2->max_length) {
                                        pSVar2->m_Items[1] = "NotoSansSC-Regular SDF";
                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                        pSVar1 = "NotoSansTC-Regular SDF";
                                        if (2 < (uint)pSVar2->max_length) {
                                          pSVar2->m_Items[2] = "NotoSansTC-Regular SDF";
                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
                                          pSVar1 = "NotoSansJP-Regular SDF";
                                          if (3 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[3] = "NotoSansJP-Regular SDF";
                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
                                            pSVar1 = "NotoSansKR-Regular SDF";
                                            if (4 < (uint)pSVar2->max_length) {
                                              pSVar2->m_Items[4] = "NotoSansKR-Regular SDF";
                                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
                                              pSVar1 = "NotoSansThai-Regular SDF";
                                              if (5 < (uint)pSVar2->max_length) {
                                                pSVar2->m_Items[5] = "NotoSansThai-Regular SDF";
                                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
                                                pSVar1 = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                                if (6 < (uint)pSVar2->max_length) {
                                                  pSVar2->m_Items[6] = "NotoSansArabic-VariableFont_wdth,wght SDF";
                                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6,pSVar1);
                                                  pSVar1 = "Symbola SDF";
                                                  if (7 < (uint)pSVar2->max_length) {
                                                    pSVar2->m_Items[7] = "Symbola SDF";
                                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7,pSVar1);
                                                    TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->
                                                    static_fields->GlobalFallbackAssetNames = pSVar2;
                                                    Il2CppCodeGenWriteBarrier
                                                              (&
                                                       TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->
                                                       static_fields->GlobalFallbackAssetNames,pSVar2);
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
    ThrowIndexOutOfRangeException();
  }
label_1818bbbad:
  ThrowNullReferenceException();
}


