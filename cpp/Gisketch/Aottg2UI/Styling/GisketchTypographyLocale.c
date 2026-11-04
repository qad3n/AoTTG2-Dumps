// Type: Gisketch.Aottg2UI.Styling.GisketchTypographyLocale
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchTypographyLocale.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$CurrentLanguageName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName (const MethodInfo* method);
// 0x1818b9cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818b9e8a: jmp 0x1818b9e8e

System_String_o * Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName(MethodInfo *method)

{
  System_Reflection_FieldInfo_o *pSVar1;
  System_Reflection_PropertyInfo_o *__this;
  bool bVar2;
  longlong lVar3;
  Il2CppObject *obj;
  System_String_o *pSVar4;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184341f46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_184341f46 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  bVar2 = Unity_VisualScripting_Namespace__op_Equality
                    ((Unity_VisualScripting_Namespace_o *)
                     TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                     GeneralSettingsField,(Unity_VisualScripting_Namespace_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return "English";
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  bVar2 = Unity_VisualScripting_Namespace__op_Equality
                    ((Unity_VisualScripting_Namespace_o *)
                     TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->LanguageField
                     ,(Unity_VisualScripting_Namespace_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return "English";
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  bVar2 = Unity_VisualScripting_Namespace__op_Equality
                    ((Unity_VisualScripting_Namespace_o *)
                     TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->ValueProperty
                     ,(Unity_VisualScripting_Namespace_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return "English";
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->GeneralSettingsField;
  if (pSVar1 == (System_Reflection_FieldInfo_o *)0x0) {
label_1818b9ebb:
    ThrowNullReferenceException();
  }
  lVar3 = (*(pSVar1->klass->vtable)._26_unknown.methodPtr)
                    (pSVar1,0,(pSVar1->klass->vtable)._26_unknown.method);
  if (lVar3 != 0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->LanguageField;
    if (pSVar1 == (System_Reflection_FieldInfo_o *)0x0) goto label_1818b9ebb;
    obj = (Il2CppObject *)(*(pSVar1->klass->vtable)._26_unknown.methodPtr)();
    if (obj != (Il2CppObject *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
      }
      __this = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->ValueProperty;
      if (__this == (System_Reflection_PropertyInfo_o *)0x0) goto label_1818b9ebb;
      pSVar4 = (System_String_o *)System_Reflection_PropertyInfo__GetValue(__this,obj,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_o *)0x0) {
        value = (System_String_o *)0x0;
        if ((Il2CppClass *)pSVar4->klass == g_data_184354e50) {
          value = pSVar4;
        }
        goto label_1818b9e8e;
      }
    }
  }
  value = (System_String_o *)0x0;
label_1818b9e8e:
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2) {
    value = "English";
  }
  return value;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$DisplayKeyForLanguage
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage (System_String_o* baseKey, System_String_o* languageName, const MethodInfo* method);
// 0x1818b9f30
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ba1f1: mov rdx, qword ptr [rip + 0x27b9a80]  ; "Russian"
// asm:   0x1818ba253: mov rdx, qword ptr [rip + 0x27e364e]  ; "\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0"
// asm:   0x1818ba25a: jmp 0x1818ba1f8

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
          (System_String_o *baseKey,System_String_o *languageName,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *b;
  
  if (Il2CppMethodInitialized_184341f47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansKR-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0");
    il2cpp_codegen_initialize_runtime_metadata(&"Russian");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansSC-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe0\xb9\x84\xe0\xb8\x97\xe0\xb8\xa2");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansArabic-VariableFont_wdth,wght SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e");
    il2cpp_codegen_initialize_runtime_metadata(&"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9");
    il2cpp_codegen_initialize_runtime_metadata(&"Thai");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansThai-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansJP-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSans-Regular SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"NotoSansTC-Regular SDF");
    Il2CppMethodInitialized_184341f47 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  if (Il2CppMethodInitialized_184341f49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"header SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"IntensaFuente SDF");
    Il2CppMethodInitialized_184341f49 = '\x01';
  }
  bVar1 = System_String__op_Equality(baseKey,"header SDF",(MethodInfo *)0x0);
  if ((!bVar1) &&
     (bVar1 = System_String__op_Equality(baseKey,"IntensaFuente SDF",(MethodInfo *)0x0), !bVar1)) {
    return baseKey;
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(languageName,(MethodInfo *)0x0);
  if (uVar2 < 0x5406374f) {
    if (uVar2 < 0x24ed3d98) {
      b = "\xd0\xa3\xd0\xba\xd1\x80\xd0\xb0\xd1\x97\xd0\xbd\xd1\x81\xd1\x8c\xd0\xba\xd0\xb0";
      if (uVar2 != 0xfcb004f) {
        if (uVar2 != 0x24ed3d97) {
          return baseKey;
        }
        bVar1 = System_String__op_Equality(languageName,"\xce\x95\xce\xbb\xce\xbb\xce\xb7\xce\xbd\xce\xb9\xce\xba\xce\xac",(MethodInfo *)0x0);
        if (bVar1) {
          return "NotoSans-Regular SDF";
        }
        return baseKey;
      }
    }
    else {
      if (uVar2 == 0x4539dc68) {
        bVar1 = System_String__op_Equality(languageName,"\xe7\xb9\x81\xe9\xab\x94\xe4\xb8\xad\xe6\x96\x87",(MethodInfo *)0x0);
        if (!bVar1) {
          return baseKey;
        }
        return "NotoSansTC-Regular SDF";
      }
      b = "Russian";
      if (uVar2 != 0x47592386) {
        if (uVar2 != 0x5406374e) {
          return baseKey;
        }
        bVar1 = System_String__op_Equality(languageName,"\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e",(MethodInfo *)0x0);
        if (!bVar1) {
          return baseKey;
        }
        return "NotoSansJP-Regular SDF";
      }
    }
    bVar1 = System_String__op_Equality(languageName,b,(MethodInfo *)0x0);
    if (bVar1) {
      return "NotoSans-Regular SDF";
    }
    return baseKey;
  }
  if (uVar2 < 0x6d41f9c5) {
    if (uVar2 == 0x6044a05b) {
      bVar1 = System_String__op_Equality(languageName,"Thai",(MethodInfo *)0x0);
      if (!bVar1) {
        return baseKey;
      }
      return "NotoSansThai-Regular SDF";
    }
    if (uVar2 != 0x6d41f9c4) {
      return baseKey;
    }
    bVar1 = System_String__op_Equality(languageName,"\xe7\xae\x80\xe4\xbd\x93\xe4\xb8\xad\xe6\x96\x87",(MethodInfo *)0x0);
    if (!bVar1) {
      return baseKey;
    }
    return "NotoSansSC-Regular SDF";
  }
  if (uVar2 == 0x892b5b2a) {
    bVar1 = System_String__op_Equality(languageName,"\xe0\xb9\x84\xe0\xb8\x97\xe0\xb8\xa2",(MethodInfo *)0x0);
    if (!bVar1) {
      return baseKey;
    }
    return "NotoSansThai-Regular SDF";
  }
  if (uVar2 == 0x9bcbdd02) {
    bVar1 = System_String__op_Equality(languageName,"\xed\x95\x9c\xea\xb5\xad\xec\x96\xb4",(MethodInfo *)0x0);
    if (!bVar1) {
      return baseKey;
    }
    return "NotoSansKR-Regular SDF";
  }
  if (uVar2 != 0xa76ce029) {
    return baseKey;
  }
  bVar1 = System_String__op_Equality(languageName,"\xd8\xa7\xd9\x84\xd8\xb9\xd8\xb1\xd8\xa8\xd9\x8a\xd8\xa9",(MethodInfo *)0x0);
  if (!bVar1) {
    return baseKey;
  }
  return "NotoSansArabic-VariableFont_wdth,wght SDF";
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$DisplayKeyForCurrentLanguage
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForCurrentLanguage (System_String_o* baseKey, const MethodInfo* method);
// 0x1818b9ed0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForCurrentLanguage
          (System_String_o *baseKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184341f48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    Il2CppMethodInitialized_184341f48 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__DisplayKeyForLanguage
                     (baseKey,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$IsDisplayKey
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__IsDisplayKey (System_String_o* key, const MethodInfo* method);
// 0x1818ba2a0

bool Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__IsDisplayKey(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"header SDF");
    il2cpp_codegen_initialize_runtime_metadata(&"IntensaFuente SDF");
    Il2CppMethodInitialized_184341f49 = '\x01';
  }
  bVar1 = System_String__op_Equality(key,"header SDF",(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  bVar1 = System_String__op_Equality(key,"IntensaFuente SDF",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchTypographyLocale$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchTypographyLocale___cctor (const MethodInfo* method);
// 0x1818ba310

void Gisketch_Aottg2UI_Styling_GisketchTypographyLocale___cctor(MethodInfo *method)

{
  System_Xml_Linq_XNamespace_o *pSVar1;
  bool bVar2;
  System_Type_o *pSVar3;
  System_Reflection_FieldInfo_o *pSVar4;
  System_Reflection_PropertyInfo_o *value;
  
  if (Il2CppMethodInitialized_184341f4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_cctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Type_GetType);
    il2cpp_codegen_initialize_runtime_metadata(&"Language");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings.SettingsManager, Scripts");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings.GeneralSettings, Scripts");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings.StringSetting, Scripts");
    il2cpp_codegen_initialize_runtime_metadata(&"GeneralSettings");
    Il2CppMethodInitialized_184341f4a = '\x01';
  }
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = (System_Type_o *)
           il2cpp_runtime_helper_180416c90("Settings.SettingsManager, Scripts",MethodInfo_System_Type_GetType,
                         MethodInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_cctor);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->SettingsManagerType = pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->SettingsManagerType,
             pSVar3);
  pSVar3 = (System_Type_o *)
           il2cpp_runtime_helper_180416c90("Settings.GeneralSettings, Scripts",MethodInfo_System_Type_GetType,
                         MethodInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale_cctor);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->GeneralSettingsType = pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->GeneralSettingsType,
             pSVar3);
  pSVar3 = (System_Type_o *)il2cpp_runtime_helper_180416c90("Settings.StringSetting, Scripts",MethodInfo_System_Type_GetType);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->StringSettingType = pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->StringSettingType,
             pSVar3);
  bVar2 = System_Xml_Linq_XNamespace__op_Inequality
                    ((System_Xml_Linq_XNamespace_o *)
                     TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                     SettingsManagerType,(System_Xml_Linq_XNamespace_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->SettingsManagerType;
    if (pSVar3 == (System_Type_o *)0x0) goto label_1818ba63a;
    pSVar4 = (System_Reflection_FieldInfo_o *)
             (*(pSVar3->klass->vtable)._90_unknown.methodPtr)(pSVar3,"GeneralSettings");
  }
  else {
    pSVar4 = (System_Reflection_FieldInfo_o *)0x0;
  }
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->GeneralSettingsField = pSVar4;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->GeneralSettingsField
             ,pSVar4);
  pSVar1 = (System_Xml_Linq_XNamespace_o *)
           TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->GeneralSettingsType;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  bVar2 = System_Xml_Linq_XNamespace__op_Inequality
                    (pSVar1,(System_Xml_Linq_XNamespace_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->GeneralSettingsType;
    if (pSVar3 == (System_Type_o *)0x0) goto label_1818ba63a;
    pSVar4 = (System_Reflection_FieldInfo_o *)
             (*(pSVar3->klass->vtable)._90_unknown.methodPtr)(pSVar3,"Language");
  }
  else {
    pSVar4 = (System_Reflection_FieldInfo_o *)0x0;
  }
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->LanguageField = pSVar4;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->LanguageField,pSVar4
            );
  pSVar1 = (System_Xml_Linq_XNamespace_o *)
           TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->StringSettingType;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  bVar2 = System_Xml_Linq_XNamespace__op_Inequality
                    (pSVar1,(System_Xml_Linq_XNamespace_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->StringSettingType;
    if (pSVar3 == (System_Type_o *)0x0) {
label_1818ba63a:
      ThrowNullReferenceException();
    }
    value = System_Type__GetProperty_1b52a90(pSVar3,"Value",0x34,(MethodInfo *)0x0);
  }
  else {
    value = (System_Reflection_PropertyInfo_o *)0x0;
  }
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->ValueProperty = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->ValueProperty,value)
  ;
  return;
}


