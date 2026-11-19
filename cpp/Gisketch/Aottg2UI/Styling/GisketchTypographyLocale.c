// Type: Gisketch.Aottg2UI.Styling.GisketchTypographyLocale
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchTypographyLocale.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$CurrentLanguageName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName (const MethodInfo* method);
// 0x5342000
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534219b: jmp 0x534219f

System_String_o * Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName(MethodInfo *method)

{
  System_Reflection_FieldInfo_o *pSVar1;
  System_Reflection_PropertyInfo_o *__this;
  bool bVar2;
  long lVar3;
  Il2CppObject *obj;
  System_String_o *pSVar4;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_075428bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_075428bb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  bVar2 = System_Reflection_FieldInfo__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                     GeneralSettingsField,(System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    }
    bVar2 = System_Reflection_FieldInfo__op_Equality
                      (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                       LanguageField,(System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
      }
      bVar2 = System_Reflection_PropertyInfo__op_Equality
                        (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                         ValueProperty,(System_Reflection_PropertyInfo_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                 GeneralSettingsField;
        if (pSVar1 == (System_Reflection_FieldInfo_o *)0x0) {
label_053421c0:
          ThrowNullReferenceException();
        }
        lVar3 = (*(pSVar1->klass->vtable)._26_unknown.methodPtr)
                          (pSVar1,0,(pSVar1->klass->vtable)._26_unknown.method);
        value = (System_String_o *)0x0;
        if (lVar3 != 0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
          }
          pSVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->LanguageField;
          if (pSVar1 == (System_Reflection_FieldInfo_o *)0x0) goto label_053421c0;
          obj = (Il2CppObject *)
                (*(pSVar1->klass->vtable)._26_unknown.methodPtr)
                          (pSVar1,lVar3,(pSVar1->klass->vtable)._26_unknown.method);
          if (obj == (Il2CppObject *)0x0) {
            value = (System_String_o *)0x0;
          }
          else {
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
            }
            __this = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->ValueProperty
            ;
            if (__this == (System_Reflection_PropertyInfo_o *)0x0) goto label_053421c0;
            pSVar4 = (System_String_o *)System_Reflection_PropertyInfo__GetValue(__this,obj,(MethodInfo *)0x0)
            ;
            value = (System_String_o *)0x0;
            if ((pSVar4 != (System_String_o *)0x0) &&
               (value = (System_String_o *)0x0, (Il2CppClass *)pSVar4->klass == g_data_07556758)) {
              value = pSVar4;
            }
          }
        }
        bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar2) {
          return value;
        }
      }
    }
  }
  return "English";
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$FontKeyForLanguage
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__FontKeyForLanguage (System_String_o* baseKey, System_String_o* languageName, const MethodInfo* method);
// 0x5342e00
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5342e2b: cmp byte ptr [rip + 0x21ffa8f], 0
// asm:   0x5342e32: jne 0x5342e53
// asm:   0x5342ed4: jmp 0x5342e53
// asm:   0x5342f03: cmp byte ptr [rip + 0x21ff9ba], 0
// asm:   0x5342f0a: je 0x5342f60
// asm:   0x5342f0c: test r14, r14
// asm:   0x5342f0f: je 0x5342f78

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__FontKeyForLanguage
          (System_String_o *baseKey,System_String_o *languageName,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075428bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Barlow-Bold SDF");
    Il2CppMethodInitialized_075428bc = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  if (Il2CppMethodInitialized_075428c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Indonesian");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_075428c1 = '\x01';
  }
  bVar2 = System_String__op_Equality(languageName,"English",(MethodInfo *)0x0);
  if (!bVar2) {
    method_00 = (MethodInfo *)"Indonesian";
    bVar2 = System_String__op_Equality(languageName,"Indonesian",(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
      }
      bVar2 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__UsesLatinFonts(languageName,method_00);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor;
      if (!bVar2) {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
        }
        pSVar3 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__ScriptFontKey(languageName,method_00);
        return pSVar3;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
      }
      if (Il2CppMethodInitialized_075428c4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Barlow-");
        Il2CppMethodInitialized_075428c4 = '\x01';
      }
      if (baseKey == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_String__StartsWith(baseKey,"Barlow-",(MethodInfo *)0x0);
      if (!bVar2) {
        baseKey = "Barlow-Bold SDF";
      }
    }
  }
  return baseKey;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$SizeScale
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__SizeScale (System_String_o* baseKey, System_String_o* languageName, const MethodInfo* method);
// 0x53426c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53427f4: cmp byte ptr [rip + 0x22000c9], 0
// asm:   0x53427fb: je 0x5342866
// asm:   0x53427fd: test r15, r15
// asm:   0x5342800: je 0x534287e

float Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__SizeScale
                (System_String_o *baseKey,System_String_o *languageName,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_075428bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"header SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"Barlow-Bold SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSans-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"JEK5 SDF");
    Il2CppMethodInitialized_075428bd = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    method = extraout_RDX_00;
  }
  a = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__FontKeyForLanguage(baseKey,languageName,method);
  bVar1 = System_String__op_Equality(a,baseKey,(MethodInfo *)0x0);
  fVar2 = 1.0;
  if (!bVar1) {
    bVar1 = System_String__op_Equality(baseKey,"header SDF",(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_String__op_Equality(a,"Barlow-Bold SDF",(MethodInfo *)0x0);
      if (bVar1) {
        fVar2 = 0.95;
      }
      else {
        fVar2 = 0.92;
      }
    }
    else {
      bVar1 = System_String__op_Equality(baseKey,"JEK5 SDF",(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = System_String__op_Equality(a,"Barlow-Bold SDF",(MethodInfo *)0x0);
        if (bVar1) {
          fVar2 = 0.89;
        }
        else {
          fVar2 = 0.86;
        }
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
        }
        if (Il2CppMethodInitialized_075428c4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Barlow-");
          Il2CppMethodInitialized_075428c4 = '\x01';
        }
        if (baseKey == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = System_String__StartsWith(baseKey,"Barlow-",(MethodInfo *)0x0);
        fVar2 = 1.0;
        if (bVar1) {
          bVar1 = System_String__op_Equality(a,"NotoSans-Regular SDF",(MethodInfo *)0x0);
          if (bVar1) {
            fVar2 = 0.94;
          }
          else {
            fVar2 = 1.0;
          }
        }
      }
    }
  }
  return fVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$CharacterFontKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CharacterFontKey (int32_t unicode, System_String_o* languageName, const MethodInfo* method);
// 0x5343510

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CharacterFontKey
          (int32_t unicode,System_String_o *languageName,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)languageName;
  if (Il2CppMethodInitialized_075428be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansKR-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"Symbola SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansThai-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansJP-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSans-Regular SDF");
    Il2CppMethodInitialized_075428be = '\x01';
  }
  if ((unicode < 0x10000) && (unicode - 0x2c00U < 0xfffff590)) {
    if (unicode - 0xe80U < 0xffffff80) {
      if (((unicode - 0xff00U < 0xffffff70) && (unicode - 0x900U < 0xfffffd00)) &&
         (unicode - 0xfe00U < 0xfffffd50)) {
        if (((unicode - 0xd7b0U < 0xffffd450) && ((unicode & 0xffffff00U) != 0x1100)) &&
           (unicode - 0x3190U < 0xffffffa0)) {
          if ((unicode - 0x3100U < 0xffffff40) && (unicode - 0x3200U < 0xfffffff0)) {
            if ((((unicode - 0xf900U < 0x200) || (unicode - 0x3400U < 0x6c00)) || (unicode - 0x2e80U < 0x160))
               || (((unicode & 0xffffffc0U) == 0x3000 || (unicode - 0xff00U < 0xf0)))) {
              if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
              }
              pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__HanFontKey(languageName,method_00);
              return pSVar2;
            }
            ppSVar1 = &"NotoSans-Regular SDF";
          }
          else {
            ppSVar1 = &"NotoSansJP-Regular SDF";
          }
        }
        else {
          ppSVar1 = &"NotoSansKR-Regular SDF";
        }
      }
      else {
        ppSVar1 = &"NotoSansArabic-VariableFont_wdth,wght SDF";
      }
    }
    else {
      ppSVar1 = &"NotoSansThai-Regular SDF";
    }
  }
  else {
    ppSVar1 = &"Symbola SDF";
  }
  return *ppSVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$HanFontKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__HanFontKey (System_String_o* languageName, const MethodInfo* method);
// 0x53436d0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__HanFontKey
          (System_String_o *languageName,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_075428bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansSC-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansThai-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSans-Regular SDF");
    Il2CppMethodInitialized_075428bf = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  a = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__ScriptFontKey(languageName,method);
  bVar1 = System_String__op_Equality(a,"NotoSans-Regular SDF",(MethodInfo *)0x0);
  if (((bVar1) || (bVar1 = System_String__op_Equality(a,"NotoSansArabic-VariableFont_wdth,wght SDF",(MethodInfo *)0x0), bVar1)) ||
     (bVar1 = System_String__op_Equality(a,"NotoSansThai-Regular SDF",(MethodInfo *)0x0), bVar1)) {
    return "NotoSansSC-Regular SDF";
  }
  return a;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$SupportsLegacyText
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__SupportsLegacyText (System_String_o* key, const MethodInfo* method);
// 0x53430d0

bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__SupportsLegacyText
               (System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075428c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    Il2CppMethodInitialized_075428c0 = '\x01';
  }
  bVar1 = System_String__op_Inequality(key,"NotoSansArabic-VariableFont_wdth,wght SDF",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$UsesDesignedFonts
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__UsesDesignedFonts (System_String_o* languageName, const MethodInfo* method);
// 0x5342c90

bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__UsesDesignedFonts
               (System_String_o *languageName,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075428c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Indonesian");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_075428c1 = '\x01';
  }
  bVar1 = System_String__op_Equality(languageName,"English",(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  bVar1 = System_String__op_Equality(languageName,"Indonesian",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$UsesLatinFonts
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__UsesLatinFonts (System_String_o* languageName, const MethodInfo* method);
// 0x5343110

bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__UsesLatinFonts
               (System_String_o *languageName,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_075428c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Polski");
    il2cpp_codegen_initialize_runtime_metadata(&"T\xc3\xbcrk\xc3\xa7e");
    il2cpp_codegen_initialize_runtime_metadata(&"Catal\xc3\xa0");
    il2cpp_codegen_initialize_runtime_metadata(&"\xc4\x8ce\xc5\xa1tina");
    il2cpp_codegen_initialize_runtime_metadata(&"Suomi");
    il2cpp_codegen_initialize_runtime_metadata(&"Deutsch");
    il2cpp_codegen_initialize_runtime_metadata(&"Italiano");
    il2cpp_codegen_initialize_runtime_metadata(&"Dutch");
    il2cpp_codegen_initialize_runtime_metadata(&"Fran\xc3\xa7ais");
    il2cpp_codegen_initialize_runtime_metadata(&"PT-BR");
    il2cpp_codegen_initialize_runtime_metadata(&"Ti\xe1\xba\xbfng Vi\xe1\xbb\x87t");
    il2cpp_codegen_initialize_runtime_metadata(&"Espa\xc3\xb1ol");
    il2cpp_codegen_initialize_runtime_metadata(&"Magyar");
    il2cpp_codegen_initialize_runtime_metadata(&"Rom\xc3\xa2n\xc4\x83");
    Il2CppMethodInitialized_075428c2 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash_52ab550(languageName,(MethodInfo *)0x0);
  if (uVar2 < 0xa289821b) {
    if (uVar2 < 0x2b3a09a1) {
      if (uVar2 == 0x7ffda29) {
        ppSVar3 = &"Polski";
      }
      else if (uVar2 == 0x19f0b05e) {
        ppSVar3 = &"Espa\xc3\xb1ol";
      }
      else {
        if (uVar2 != 0x2b3a09a0) {
          return false;
        }
        ppSVar3 = &"PT-BR";
      }
    }
    else if (uVar2 < 0x6ea5fa0d) {
      if (uVar2 == 0x4b11e090) {
        ppSVar3 = &"Magyar";
      }
      else {
        if (uVar2 != 0x6ea5fa0c) {
          return false;
        }
        ppSVar3 = &"Italiano";
      }
    }
    else if (uVar2 == 0x8a78f070) {
      ppSVar3 = &"Suomi";
    }
    else {
      if (uVar2 != 0xa289821a) {
        return false;
      }
      ppSVar3 = &"Rom\xc3\xa2n\xc4\x83";
    }
  }
  else if (uVar2 < 0xbbfbc980) {
    if (uVar2 == 0xa776196e) {
      ppSVar3 = &"Catal\xc3\xa0";
    }
    else if (uVar2 == 0xb297e9d1) {
      ppSVar3 = &"Dutch";
    }
    else {
      if (uVar2 != 0xbbfbc97f) {
        return false;
      }
      ppSVar3 = &"\xc4\x8ce\xc5\xa1tina";
    }
  }
  else if (uVar2 < 0xf41f19e4) {
    if (uVar2 == 0xca98de7e) {
      ppSVar3 = &"T\xc3\xbcrk\xc3\xa7e";
    }
    else {
      if (uVar2 != 0xf41f19e3) {
        return false;
      }
      ppSVar3 = &"Deutsch";
    }
  }
  else if (uVar2 == 0xfeab4202) {
    ppSVar3 = &"Ti\xe1\xba\xbfng Vi\xe1\xbb\x87t";
  }
  else {
    if (uVar2 != 0xf8f1b0d6) {
      return false;
    }
    ppSVar3 = &"Fran\xc3\xa7ais";
  }
  bVar1 = System_String__op_Equality(languageName,*ppSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$ScriptFontKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__ScriptFontKey (System_String_o* languageName, const MethodInfo* method);
// 0x5343370

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__ScriptFontKey
          (System_String_o *languageName,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075428c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansKR-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansSC-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe0\xb9\x84\xe0\xb8\x97\xe0\xb8\xa2");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e");
    il2cpp_codegen_initialize_runtime_metadata(&"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansThai-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansJP-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSans-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansTC-Regular SDF");
    Il2CppMethodInitialized_075428c3 = '\x01';
  }
  bVar1 = System_String__op_Equality(languageName,"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87",(MethodInfo *)0x0);
  if (bVar1) {
    return "NotoSansSC-Regular SDF";
  }
  bVar1 = System_String__op_Equality(languageName,"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87",(MethodInfo *)0x0);
  if (bVar1) {
    return "NotoSansTC-Regular SDF";
  }
  bVar1 = System_String__op_Equality(languageName,"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e",(MethodInfo *)0x0);
  if (bVar1) {
    return "NotoSansJP-Regular SDF";
  }
  bVar1 = System_String__op_Equality(languageName,"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4",(MethodInfo *)0x0);
  if (bVar1) {
    return "NotoSansKR-Regular SDF";
  }
  bVar1 = System_String__op_Equality(languageName,"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9",(MethodInfo *)0x0);
  if (bVar1) {
    return "NotoSansArabic-VariableFont_wdth,wght SDF";
  }
  bVar1 = System_String__op_Equality(languageName,"\xe0\xb9\x84\xe0\xb8\x97\xe0\xb8\xa2",(MethodInfo *)0x0);
  if (bVar1) {
    return "NotoSansThai-Regular SDF";
  }
  return "NotoSans-Regular SDF";
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$IsBarlowKey
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__IsBarlowKey (System_String_o* key, const MethodInfo* method);
// 0x5343330

bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__IsBarlowKey(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075428c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Barlow-");
    Il2CppMethodInitialized_075428c4 = '\x01';
  }
  if (key == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__StartsWith(key,"Barlow-",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypographyLocale___cctor (const MethodInfo* method);
// 0x53437a0

void Gisketch_Aottg2UI_Styling_GisketchTypographyLocale___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_StaticFields *pGVar1;
  bool bVar2;
  System_String_array *pSVar3;
  System_Type_o *pSVar4;
  System_Reflection_FieldInfo_o *pSVar5;
  System_Reflection_PropertyInfo_o *pSVar6;
  
  if (Il2CppMethodInitialized_075428c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_cctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Type_GetType);
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansKR-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"Language");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings.SettingsManager, Scripts");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansSC-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings.GeneralSettings, Scripts");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"Symbola SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansThai-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings.StringSetting, Scripts");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansJP-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSans-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"GeneralSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansTC-Regular SDF");
    Il2CppMethodInitialized_075428c5 = '\x01';
  }
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
  if (pSVar3 == (System_String_array *)0x0) {
label_05343c2b:
    ThrowNullReferenceException();
  }
  if ((int)pSVar3->max_length != 0) {
    pSVar3->m_Items[0] = "NotoSans-Regular SDF";
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
    if ((pSVar3->max_length & 0xfffffffe) != 0) {
      pSVar3->m_Items[1] = "NotoSansSC-Regular SDF";
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1);
      if (2 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[2] = "NotoSansTC-Regular SDF";
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2);
        if ((pSVar3->max_length & 0xfffffffc) != 0) {
          pSVar3->m_Items[3] = "NotoSansJP-Regular SDF";
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 3);
          if (4 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[4] = "NotoSansKR-Regular SDF";
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 4);
            if (5 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[5] = "NotoSansArabic-VariableFont_wdth,wght SDF";
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 5);
              if (6 < (uint)pSVar3->max_length) {
                pSVar3->m_Items[6] = "NotoSansThai-Regular SDF";
                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 6);
                if ((pSVar3->max_length & 0xfffffff8) != 0) {
                  pSVar3->m_Items[7] = "Symbola SDF";
                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 7);
                  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->FallbackFontKeys
                       = pSVar3;
                  Il2CppCodeGenWriteBarrier
                            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                              FallbackFontKeys);
                  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(g_data_075567a8);
                  }
                  pSVar4 = (System_Type_o *)
                           il2cpp_runtime_helper_030d66e0("Settings.SettingsManager, Scripts",MethodInfo_System_Type_GetType,
                                        MethodInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_cctor);
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields;
                  pGVar1->SettingsManagerType = pSVar4;
                  Il2CppCodeGenWriteBarrier(&pGVar1->SettingsManagerType);
                  pSVar4 = (System_Type_o *)
                           il2cpp_runtime_helper_030d66e0("Settings.GeneralSettings, Scripts",MethodInfo_System_Type_GetType,
                                        MethodInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_cctor);
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields;
                  pGVar1->GeneralSettingsType = pSVar4;
                  Il2CppCodeGenWriteBarrier(&pGVar1->GeneralSettingsType);
                  pSVar4 = (System_Type_o *)
                           il2cpp_runtime_helper_030d66e0("Settings.StringSetting, Scripts",MethodInfo_System_Type_GetType,
                                        MethodInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_cctor);
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields;
                  pGVar1->StringSettingType = pSVar4;
                  Il2CppCodeGenWriteBarrier(&pGVar1->StringSettingType);
                  pSVar5 = (System_Reflection_FieldInfo_o *)0x0;
                  bVar2 = System_Type__op_Inequality
                                    (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->
                                     static_fields->SettingsManagerType,(System_Type_o *)0x0,(MethodInfo *)0x0
                                    );
                  if (bVar2) {
                    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                             SettingsManagerType;
                    if (pSVar4 == (System_Type_o *)0x0) goto label_05343c2b;
                    pSVar5 = (System_Reflection_FieldInfo_o *)
                             (*(pSVar4->klass->vtable)._90_unknown.methodPtr)
                                       (pSVar4,"GeneralSettings",0x38);
                  }
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields;
                  pGVar1->GeneralSettingsField = pSVar5;
                  Il2CppCodeGenWriteBarrier(&pGVar1->GeneralSettingsField);
                  pSVar4 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                           GeneralSettingsType;
                  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(g_data_075567a8);
                  }
                  pSVar5 = (System_Reflection_FieldInfo_o *)0x0;
                  bVar2 = System_Type__op_Inequality(pSVar4,(System_Type_o *)0x0,(MethodInfo *)0x0);
                  if (bVar2) {
                    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                             GeneralSettingsType;
                    if (pSVar4 == (System_Type_o *)0x0) goto label_05343c2b;
                    pSVar5 = (System_Reflection_FieldInfo_o *)
                             (*(pSVar4->klass->vtable)._90_unknown.methodPtr)
                                       (pSVar4,"Language",0x34);
                  }
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields;
                  pGVar1->LanguageField = pSVar5;
                  Il2CppCodeGenWriteBarrier(&pGVar1->LanguageField);
                  pSVar4 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                           StringSettingType;
                  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(g_data_075567a8);
                  }
                  pSVar6 = (System_Reflection_PropertyInfo_o *)0x0;
                  bVar2 = System_Type__op_Inequality(pSVar4,(System_Type_o *)0x0,(MethodInfo *)0x0);
                  if (bVar2) {
                    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                             StringSettingType;
                    if (pSVar4 == (System_Type_o *)0x0) goto label_05343c2b;
                    pSVar6 = System_Type__GetProperty_54da400
                                       (pSVar4,"Value",0x34,(MethodInfo *)0x0);
                  }
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields;
                  pGVar1->ValueProperty = pSVar6;
                  Il2CppCodeGenWriteBarrier(&pGVar1->ValueProperty);
                  return;
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


