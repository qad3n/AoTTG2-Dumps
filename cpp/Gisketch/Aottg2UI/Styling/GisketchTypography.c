// Type: Gisketch.Aottg2UI.Styling.GisketchTypography
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchTypography.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchTypography$$Resolve
// il2cpp: TMPro_TMP_FontAsset_o* Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve (System_String_o* family, int32_t weight, System_String_o* requiredText, const MethodInfo* method);
// 0x5341db0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5341fa4: jmp 0x5341e6e

TMPro_TMP_FontAsset_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
          (System_String_o *family,int32_t weight,System_String_o *requiredText,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  TMPro_TMP_FontAsset_o *pTVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_03;
  Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_c *method_02;
  System_String_o *local_30;
  
  if (Il2CppMethodInitialized_075428b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Settings);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid AoTTG UI font asset ");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"Missing AoTTG UI font asset ");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_075428b0 = '\x01';
  }
  local_30 = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    method_02 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)method_02);
    pMVar5 = extraout_RDX_03;
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName
                       ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    pMVar5 = extraout_RDX;
  }
  if (Il2CppMethodInitialized_075428b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    Il2CppMethodInitialized_075428b6 = '\x01';
    pMVar5 = extraout_RDX_00;
  }
  pSVar3 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,pMVar5);
  pMVar5 = extraout_RDX_01;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    pMVar5 = extraout_RDX_02;
  }
  pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__FontKeyForLanguage(pSVar3,pSVar2,pMVar5);
  if (Il2CppMethodInitialized_075428b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/");
    Il2CppMethodInitialized_075428b1 = '\x01';
  }
  pSVar3 = System_String__Concat_52f0320("UI/Fonts/",pSVar2,(MethodInfo *)0x0);
  pTVar4 = UnityEngine_Resources__Load_object_
                     (pSVar3,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    System_String__Concat_5301f10("Missing AoTTG UI font asset ",pSVar2,".",(MethodInfo *)0x0);
    if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
    }
    pTVar4 = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
    return pTVar4;
  }
  bVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__HasUsableMaterial(pTVar4,&local_30,method_00);
  if (bVar1) {
    bVar1 = System_String__IsNullOrEmpty(requiredText,(MethodInfo *)0x0);
    if (!bVar1) {
      Gisketch_Aottg2UI_Styling_GisketchTypography__ForText(requiredText,pTVar4,method_01);
    }
  }
  else {
    System_String__Concat_5302810
              ("Invalid AoTTG UI font asset ",pSVar2,": ",local_30,(MethodInfo *)0x0);
    if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
    }
    pTVar4 = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
  }
  return pTVar4;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$Load
// il2cpp: TMPro_TMP_FontAsset_o* Gisketch_Aottg2UI_Styling_GisketchTypography__Load (System_String_o* key, const MethodInfo* method);
// 0x5342230

TMPro_TMP_FontAsset_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__Load(System_String_o *key,MethodInfo *method)

{
  System_String_o *path;
  TMPro_TMP_FontAsset_o *pTVar1;
  
  if (Il2CppMethodInitialized_075428b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/");
    Il2CppMethodInitialized_075428b1 = '\x01';
  }
  path = System_String__Concat_52f0320("UI/Fonts/",key,(MethodInfo *)0x0);
  pTVar1 = UnityEngine_Resources__Load_object_
                     (path,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
  return pTVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__Key (System_String_o* family, int32_t weight, const MethodInfo* method);
// 0x5342460

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__Key(System_String_o *family,int32_t weight,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_075428b2 == '\0') {
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
    Il2CppMethodInitialized_075428b2 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(family,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = "barlow";
  }
  else {
    if (family == (System_String_o *)0x0) {
label_05342645:
      ThrowNullReferenceException();
    }
    pSVar2 = System_String__Trim(family,(MethodInfo *)0x0);
    if (pSVar2 == (System_String_o *)0x0) goto label_05342645;
    pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
  }
  bVar1 = System_String__op_Equality(pSVar2,"subtext",(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar3 = &"jek5";
  }
  else {
    bVar1 = System_String__op_Equality(pSVar2,"text",(MethodInfo *)0x0);
    if (!bVar1) goto label_0534259e;
    ppSVar3 = &"barlow";
  }
  pSVar2 = *ppSVar3;
label_0534259e:
  bVar1 = System_String__op_Equality(pSVar2,"header",(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar3 = &"header SDF";
  }
  else {
    bVar1 = System_String__op_Equality(pSVar2,"menutext",(MethodInfo *)0x0);
    if (bVar1) {
      ppSVar3 = &"IntensaFuente SDF";
    }
    else {
      bVar1 = System_String__op_Equality(pSVar2,"jek5",(MethodInfo *)0x0);
      if (bVar1) {
        ppSVar3 = &"JEK5 SDF";
      }
      else if (weight < 0x1c3) {
        ppSVar3 = &"Barlow-Regular SDF";
      }
      else if ((uint)weight < 0x227) {
        ppSVar3 = &"Barlow-Medium SDF";
      }
      else if ((uint)weight < 0x28b) {
        ppSVar3 = &"Barlow-SemiBold SDF";
      }
      else {
        ppSVar3 = &"Barlow-Bold SDF";
      }
    }
  }
  return *ppSVar3;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$FontSize
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchTypography__FontSize (System_String_o* family, int32_t weight, float size, const MethodInfo* method);
// 0x5342650

float Gisketch_Aottg2UI_Styling_GisketchTypography__FontSize
                (System_String_o *family,int32_t weight,float size,MethodInfo *method)

{
  System_String_o *baseKey;
  System_String_o *languageName;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_c *method_01;
  float fVar1;
  
  if (Il2CppMethodInitialized_075428b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    Il2CppMethodInitialized_075428b3 = '\x01';
    method = extraout_RDX;
  }
  baseKey = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,method);
  method_01 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  languageName = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName
                           ((MethodInfo *)method_01);
  fVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__SizeScale(baseKey,languageName,method_00);
  return fVar1 * size;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ForText
// il2cpp: TMPro_TMP_FontAsset_o* Gisketch_Aottg2UI_Styling_GisketchTypography__ForText (System_String_o* text, TMPro_TMP_FontAsset_o* preferred, const MethodInfo* method);
// 0x5342390
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53423f9: nop dword ptr [rax]
// asm:   0x534241a: jmp 0x534244c

TMPro_TMP_FontAsset_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__ForText
          (System_String_o *text,TMPro_TMP_FontAsset_o *preferred,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  System_String_o *characters;
  uint index;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075428b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075428b4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)preferred,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((text != (System_String_o *)0x0) && (bVar1)) && (0 < (text->fields)._stringLength)) {
    index = 0;
    do {
      method_00 = (MethodInfo *)(ulong)index;
      uVar2 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      if (0x7e < uVar2) {
        characters = Gisketch_Aottg2UI_Styling_GisketchTypography__VisibleCharacters(text,method_00);
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
        }
        Gisketch_Aottg2UI_Styling_GisketchFontFallback__Ensure(preferred,characters,(MethodInfo *)0x0);
        return preferred;
      }
      index = index + 1;
    } while ((int)index < (text->fields)._stringLength);
  }
  return preferred;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$LegacyFont
// il2cpp: UnityEngine_Font_o* Gisketch_Aottg2UI_Styling_GisketchTypography__LegacyFont (UnityEngine_Font_o* designed, System_String_o* languageLetters, const MethodInfo* method);
// 0x5342b20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5342c8b: jmp 0x5342b83

UnityEngine_Font_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__LegacyFont
          (UnityEngine_Font_o *designed,System_String_o *languageLetters,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  MethodInfo *method_00;
  System_String_o *key;
  UnityEngine_Font_o *x;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075428b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Barlow-Regular SDF");
    Il2CppMethodInitialized_075428b5 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale;
  }
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale =
       (Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)klass);
  }
  else {
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)klass);
  }
  if (Il2CppMethodInitialized_075428c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Indonesian");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_075428c1 = '\x01';
  }
  bVar2 = System_String__op_Equality((System_String_o *)method_00,"English",(MethodInfo *)0x0);
  if (((!bVar2) &&
      (bVar2 = System_String__op_Equality
                         ((System_String_o *)method_00,"Indonesian",(MethodInfo *)0x0), !bVar2)) &&
     (bVar2 = Gisketch_Aottg2UI_Styling_GisketchTypography__Covers(designed,languageLetters,method_01), !bVar2
     )) {
    method_02 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
      method_02 = extraout_RDX_00;
    }
    key = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__FontKeyForLanguage
                    ("Barlow-Regular SDF",(System_String_o *)method_00,method_02);
    x = Gisketch_Aottg2UI_Styling_GisketchTypography__SourceFont(key,method_00);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      designed = x;
    }
  }
  return designed;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$KeyForLanguage
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage (System_String_o* family, int32_t weight, System_String_o* languageName, const MethodInfo* method);
// 0x53421d0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage
          (System_String_o *family,int32_t weight,System_String_o *languageName,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar2;
  
  pMVar2 = (MethodInfo *)languageName;
  if (Il2CppMethodInitialized_075428b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    Il2CppMethodInitialized_075428b6 = '\x01';
    pMVar2 = extraout_RDX;
  }
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__Key(family,weight,pMVar2);
  pMVar2 = extraout_RDX_00;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    pMVar2 = extraout_RDX_01;
  }
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__FontKeyForLanguage(pSVar1,languageName,pMVar2);
  return pSVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$SourceFont
// il2cpp: UnityEngine_Font_o* Gisketch_Aottg2UI_Styling_GisketchTypography__SourceFont (System_String_o* key, const MethodInfo* method);
// 0x5342f80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5342fab: cmp byte ptr [rip + 0x21ff90e], 0
// asm:   0x53430bf: jmp 0x5342fc7

UnityEngine_Font_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__SourceFont(System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *path;
  TMPro_TMP_FontAsset_o *x;
  UnityEngine_Font_o *pUVar3;
  
  if (Il2CppMethodInitialized_075428b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075428b7 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  if (Il2CppMethodInitialized_075428c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    Il2CppMethodInitialized_075428c0 = '\x01';
  }
  pUVar3 = (UnityEngine_Font_o *)0x0;
  bVar2 = System_String__op_Inequality(key,"NotoSansArabic-VariableFont_wdth,wght SDF",(MethodInfo *)0x0);
  if (bVar2) {
    if (Il2CppMethodInitialized_075428b1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
      il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/");
      Il2CppMethodInitialized_075428b1 = '\x01';
    }
    path = System_String__Concat_52f0320("UI/Fonts/",key,(MethodInfo *)0x0);
    x = UnityEngine_Resources__Load_object_
                  (path,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar3 = (UnityEngine_Font_o *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x == (TMPro_TMP_FontAsset_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = (x->fields).m_SourceFontFile;
    }
  }
  return pUVar3;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$Covers
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__Covers (UnityEngine_Font_o* font, System_String_o* characters, const MethodInfo* method);
// 0x5342cf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5342dec: jmp 0x5342d86

bool Gisketch_Aottg2UI_Styling_GisketchTypography__Covers
               (UnityEngine_Font_o *font,System_String_o *characters,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint16_t uVar3;
  uint in_EAX;
  int32_t iVar4;
  int index;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_075428b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextCore_LowLevel_FontEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075428b8 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = false;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_TextCore_LowLevel_FontEngine->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_TextCore_LowLevel_FontEngine);
    }
    bVar2 = false;
    iVar4 = UnityEngine_TextCore_LowLevel_FontEngine__LoadFontFace_69f8320(font,(MethodInfo *)0x0);
    if (iVar4 == 0) {
      if (characters == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((characters->fields)._stringLength < 1) {
        bVar2 = true;
      }
      else {
        index = 0;
        do {
          uVar3 = System_String__get_Chars(characters,index,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_TextCore_LowLevel_FontEngine->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_UnityEngine_TextCore_LowLevel_FontEngine);
          }
          bVar2 = UnityEngine_TextCore_LowLevel_FontEngine__TryGetGlyphIndex
                            ((uint)uVar3,(uint32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
        } while ((bVar2) && (index = index + 1, index < (characters->fields)._stringLength));
      }
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$IsAscii
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__IsAscii (System_String_o* text, const MethodInfo* method);
// 0x5342890

bool Gisketch_Aottg2UI_Styling_GisketchTypography__IsAscii(System_String_o *text,MethodInfo *method)

{
  uint16_t uVar1;
  bool bVar2;
  int index;
  
  bVar2 = true;
  if ((text != (System_String_o *)0x0) && (0 < (text->fields)._stringLength)) {
    index = 0;
    do {
      uVar1 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
      bVar2 = uVar1 < 0x7f;
      if (!bVar2) {
        return bVar2;
      }
      index = index + 1;
    } while (index < (text->fields)._stringLength);
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$VisibleCharacters
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypography__VisibleCharacters (System_String_o* text, const MethodInfo* method);
// 0x53428e0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5342982: jmp 0x5342a5f
// asm:   0x5342990: mov eax, r13d
// asm:   0x53429ca: jne 0x5342993
// asm:   0x5342a3e: mov ecx, r13d
// asm:   0x5342a41: nop word ptr cs:[rax + rax]
// asm:   0x5342a87: jne 0x5342a50
// asm:   0x5342aec: jmp 0x5342b17

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypography__VisibleCharacters(System_String_o *text,MethodInfo *method)

{
  int32_t capacity;
  bool bVar1;
  bool bVar2;
  uint16_t uVar3;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar4;
  int index;
  
  if (Il2CppMethodInitialized_075428b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_075428b9 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar2) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (text != (System_String_o *)0x0) {
    capacity = (text->fields)._stringLength;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor_530d510(__this,capacity,(MethodInfo *)0x0);
    if (0 < (text->fields)._stringLength) {
      bVar2 = false;
      index = 0;
      if (__this == (System_Text_StringBuilder_o *)0x0) {
        do {
          uVar3 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
          bVar1 = true;
          if (uVar3 != 0x3c) {
            if ((bool)(uVar3 == 0x3e & bVar2)) {
              bVar1 = false;
            }
            else {
              bVar1 = bVar2;
              if (!bVar2) {
                if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init(g_data_07556750);
                }
                bVar2 = System_Char__IsWhiteSpace(uVar3,(MethodInfo *)0x0);
                if (!bVar2) {
                  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(g_data_07556750);
                  }
                  bVar2 = System_Char__IsControl(uVar3,(MethodInfo *)0x0);
                  if (!bVar2) goto label_05342b17;
                }
              }
            }
          }
          bVar2 = bVar1;
          index = index + 1;
        } while (index < (text->fields)._stringLength);
      }
      else {
        do {
          uVar3 = System_String__get_Chars(text,index,(MethodInfo *)0x0);
          bVar1 = true;
          if (((uVar3 != 0x3c) && (bVar1 = false, !(bool)(uVar3 == 0x3e & bVar2))) && (bVar1 = bVar2, !bVar2))
          {
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            bVar2 = System_Char__IsWhiteSpace(uVar3,(MethodInfo *)0x0);
            if (!bVar2) {
              if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_07556750);
              }
              bVar2 = System_Char__IsControl(uVar3,(MethodInfo *)0x0);
              if (!bVar2) {
                System_Text_StringBuilder__Append_530f6a0(__this,uVar3,(MethodInfo *)0x0);
              }
            }
          }
          bVar2 = bVar1;
          index = index + 1;
        } while (index < (text->fields)._stringLength);
      }
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar4 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar4;
    }
  }
label_05342b17:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$HasUsableMaterial
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypography__HasUsableMaterial (TMPro_TMP_FontAsset_o* font, System_String_o** error, const MethodInfo* method);
// 0x53422a0

bool Gisketch_Aottg2UI_Styling_GisketchTypography__HasUsableMaterial
               (TMPro_TMP_FontAsset_o *font,System_String_o **error,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_075428ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"_FaceColor");
    il2cpp_codegen_initialize_runtime_metadata(&"material is missing");
    il2cpp_codegen_initialize_runtime_metadata(&"material is missing _FaceColor");
    Il2CppMethodInitialized_075428ba = '\x01';
  }
  if (font == (TMPro_TMP_FontAsset_o *)0x0) {
label_05342388:
    ThrowNullReferenceException();
  }
  pUVar1 = (font->fields).m_Material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    ppSVar4 = &"material is missing";
label_0534232a:
    *error = *ppSVar4;
    bVar2 = false;
  }
  else {
    iVar3 = UnityEngine_SystemInfo__get_graphicsDeviceType((MethodInfo *)0x0);
    if (iVar3 != 4) {
      pUVar1 = (font->fields).m_Material;
      if (pUVar1 == (UnityEngine_Material_o *)0x0) goto label_05342388;
      bVar2 = UnityEngine_Material__HasProperty_68dd940(pUVar1,"_FaceColor",(MethodInfo *)0x0);
      if (!bVar2) {
        ppSVar4 = &"material is missing _FaceColor";
        goto label_0534232a;
      }
    }
    *error = (System_String_o *)0x0;
    bVar2 = true;
  }
  Il2CppCodeGenWriteBarrier(error);
  return bVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchTypography$$ReportError
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportError (System_String_o* message, const MethodInfo* method);
// 0x5342290

void Gisketch_Aottg2UI_Styling_GisketchTypography__ReportError(System_String_o *message,MethodInfo *method)

{
  return;
}


