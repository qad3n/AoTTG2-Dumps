// Type: UI.LanguageFonts
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/LanguageFonts.cs
// Prior real C# source: none
// --------------------------------

// UI.LanguageFonts.<>c$$.cctor
// il2cpp: void UI_LanguageFonts___c___cctor (const MethodInfo* method);
// 0x5d55480

void UI_LanguageFonts___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547f21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts_c);
    Il2CppMethodInitialized_07547f21 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_LanguageFonts_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_LanguageFonts_c->static_fields->__9 = (UI_LanguageFonts___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_LanguageFonts_c->static_fields->__9);
  return;
}


// UI.LanguageFonts.<>c$$.ctor
// il2cpp: void UI_LanguageFonts___c___ctor (UI_LanguageFonts___c_o* __this, const MethodInfo* method);
// 0x5d554f0

void UI_LanguageFonts___c___ctor(UI_LanguageFonts___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LanguageFonts.<>c$$<Apply>b__7_0
// il2cpp: void UI_LanguageFonts___c___Apply_b__7_0 (UI_LanguageFonts___c_o* __this, const MethodInfo* method);
// 0x5d55500

void UI_LanguageFonts___c___Apply_b__7_0(UI_LanguageFonts___c_o *__this,MethodInfo *method)

{
  TMPro_TMP_FontAsset_o *value;
  
  if (Il2CppMethodInitialized_07547f22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Settings);
    Il2CppMethodInitialized_07547f22 = '\x01';
  }
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  value = TypeInfo_UI_LanguageFonts->static_fields->_designedDefault;
  if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
    TMPro_TMP_Settings__set_defaultFontAsset(value,(MethodInfo *)0x0);
    return;
  }
  TMPro_TMP_Settings__set_defaultFontAsset(value,(MethodInfo *)0x0);
  return;
}


// UI.LanguageFonts$$Apply
// il2cpp: void UI_LanguageFonts__Apply (const MethodInfo* method);
// 0x5d54a10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d54c6f: jmp 0x5d54b6e

void UI_LanguageFonts__Apply(MethodInfo *method)

{
  uint32_t uVar1;
  UI_LanguageFonts_StaticFields *pUVar2;
  Il2CppObject *object;
  bool bVar3;
  TMPro_TMP_FontAsset_o *pTVar4;
  UI_LanguageFonts___c_StaticFields *pUVar5;
  System_Action_o *__this;
  
  if (Il2CppMethodInitialized_07547f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Settings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_LanguageFonts_c_Apply_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts_c);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07547f19 = '\x01';
  }
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  pTVar4 = TypeInfo_UI_LanguageFonts->static_fields->_designedDefault;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) goto label_05d54b7d;
  if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
  }
  pTVar4 = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  pUVar2 = TypeInfo_UI_LanguageFonts->static_fields;
  pUVar2->_designedDefault = pTVar4;
  Il2CppCodeGenWriteBarrier(&pUVar2->_designedDefault);
  if ((TypeInfo_UI_LanguageFonts_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts_c);
    pUVar5 = TypeInfo_UI_LanguageFonts_c->static_fields;
    __this = pUVar5->__9__7_0;
    if (__this == (System_Action_o *)0x0) goto label_05d54bfa;
label_05d54b5b:
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar5 = TypeInfo_UI_LanguageFonts_c->static_fields;
    __this = pUVar5->__9__7_0;
    if (__this != (System_Action_o *)0x0) goto label_05d54b5b;
label_05d54bfa:
    if ((TypeInfo_UI_LanguageFonts_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts_c);
      pUVar5 = TypeInfo_UI_LanguageFonts_c->static_fields;
    }
    object = (Il2CppObject *)pUVar5->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor(__this,object,(intptr_t)MethodInfo_UI_LanguageFonts_c_Apply_b__7_0,(MethodInfo *)0x0)
    ;
    pUVar5 = TypeInfo_UI_LanguageFonts_c->static_fields;
    pUVar5->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pUVar5->__9__7_0);
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  UnityEngine_Application__add_quitting(__this,(MethodInfo *)0x0);
label_05d54b7d:
  pTVar4 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                     ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
  }
  TMPro_TMP_Settings__set_defaultFontAsset(pTVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
  }
  Gisketch_Aottg2UI_Styling_GisketchFontFallback__ApplyLanguage((MethodInfo *)0x0);
  return;
}


// UI.LanguageFonts$$Localize
// il2cpp: void UI_LanguageFonts__Localize (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5d54c80

void UI_LanguageFonts__Localize(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_o *text;
  System_Runtime_CompilerServices_ConditionalWeakTable_Text__Font__o *__this;
  bool bVar2;
  System_Object_array *pSVar3;
  ulong uVar4;
  UnityEngine_Font_o *font;
  MethodInfo *method_00;
  ulong uVar5;
  UnityEngine_UI_Text_o *method_01;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    Il2CppMethodInitialized_07547f1a = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       (root,true,
                        (MethodInfo_353C0B0 *)MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Text);
    if (pSVar3 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar3->max_length) {
        uVar4 = pSVar3->max_length & 0xffffffff;
        uVar5 = 0;
        do {
          if (uVar4 <= uVar5) {
            ThrowIndexOutOfRangeException();
          }
          text = (UnityEngine_UI_Text_o *)pSVar3->m_Items[uVar5];
          if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
          }
          __this = TypeInfo_UI_LanguageFonts->static_fields->PinnedFonts;
          if (__this == (System_Runtime_CompilerServices_ConditionalWeakTable_Text__Font__o *)0x0)
          goto label_05d54df7;
          method_01 = text;
          bVar2 = System_Runtime_CompilerServices_ConditionalWeakTable_object__object___TryGetValue
                            ((System_Runtime_CompilerServices_ConditionalWeakTable_TKey__TValue__o *)__this,
                             (Il2CppObject *)text,&local_38,
                             (MethodInfo_4909960 *)
                             MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_TryGetValue
                            );
          if (!bVar2) {
            if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
            }
            font = UI_LanguageFonts__DesignedFont(text,(MethodInfo *)method_01);
            method_00 = (MethodInfo *)UI_LanguageFonts__LegacyFont(font,(MethodInfo *)method_01);
            if (text == (UnityEngine_UI_Text_o *)0x0) goto label_05d54df7;
            UnityEngine_UI_Text__set_font(text,(UnityEngine_Font_o *)method_00,(MethodInfo *)0x0);
            if (TypeInfo_UI_LanguageFonts->static_fields->_rightToLeftLanguage != false) {
              if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
              }
              UI_LanguageFonts__EnsureRightToLeftLines(text,method_00);
            }
          }
          uVar5 = uVar5 + 1;
          uVar1 = (uint)pSVar3->max_length;
          uVar4 = (ulong)uVar1;
        } while ((long)uVar5 < (long)(int)uVar1);
      }
      return;
    }
  }
label_05d54df7:
  ThrowNullReferenceException();
}


// UI.LanguageFonts$$LegacyFont
// il2cpp: UnityEngine_Font_o* UI_LanguageFonts__LegacyFont (UnityEngine_Font_o* font, const MethodInfo* method);
// 0x5d54f00

UnityEngine_Font_o * UI_LanguageFonts__LegacyFont(UnityEngine_Font_o *font,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UI_LanguageFonts_StaticFields *pUVar4;
  bool bVar5;
  System_String_o *pSVar6;
  Il2CppClass *klass;
  UnityEngine_Font_o *local_20;
  
  if (Il2CppMethodInitialized_07547f1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Font_Font_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Font_Font_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Font_Font_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547f1b = '\x01';
  }
  local_20 = (UnityEngine_Font_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return (UnityEngine_Font_o *)0x0;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Language, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    pSVar6 = (pSVar2->fields)._value;
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    bVar5 = System_String__op_Inequality
                      (TypeInfo_UI_LanguageFonts->static_fields->_legacyFontsLanguage,pSVar6,(MethodInfo *)0x0
                      );
    klass = (Il2CppClass *)TypeInfo_UI_LanguageFonts;
    if (bVar5) {
      if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_UI_LanguageFonts->static_fields->LegacyFonts;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d55186;
      System_Collections_Generic_Dictionary_object__object___Clear
                (pSVar3,(MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_Font_Font_Clear
                );
      pUVar4 = TypeInfo_UI_LanguageFonts->static_fields;
      pUVar4->_legacyFontsLanguage = pSVar6;
      Il2CppCodeGenWriteBarrier(&pUVar4->_legacyFontsLanguage);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar6 = UI_UIManager__GetLanguageLetters((MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
      }
      bVar5 = Gisketch_Aottg2UI_Styling_GisketchArabicText__HasPresentationForms(pSVar6,(MethodInfo *)0x0);
      klass = (Il2CppClass *)TypeInfo_UI_LanguageFonts;
      TypeInfo_UI_LanguageFonts->static_fields->_rightToLeftLanguage = bVar5;
    }
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_UI_LanguageFonts;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)klass->static_fields->LegacyFonts;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar3,(Il2CppObject *)font,(Il2CppObject **)&local_20,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Font_Font_TryGetValue);
      if (!bVar5) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar6 = UI_UIManager__GetLanguageLetters((MethodInfo *)0x0);
        local_20 = Gisketch_Aottg2UI_Styling_GisketchTypography__LegacyFont(font,pSVar6,(MethodInfo *)0x0);
        if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_UI_LanguageFonts->static_fields->LegacyFonts;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d55186;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar3,(Il2CppObject *)font,(Il2CppObject *)local_20,
                   (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_Font_Font_set_Item);
      }
      return local_20;
    }
  }
label_05d55186:
  ThrowNullReferenceException();
}


// UI.LanguageFonts$$KeepDesignedFont
// il2cpp: void UI_LanguageFonts__KeepDesignedFont (UnityEngine_UI_Text_o* text, const MethodInfo* method);
// 0x5d55250
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d55281: jmp 0x5d55307

void UI_LanguageFonts__KeepDesignedFont(UnityEngine_UI_Text_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  System_Runtime_CompilerServices_ConditionalWeakTable_Text__Font__o *__this;
  UnityEngine_Font_o *value;
  
  if (Il2CppMethodInitialized_07547f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_AddOrUpdate);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    Il2CppMethodInitialized_07547f1c = '\x01';
    uVar1 = (TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    value = UI_LanguageFonts__DesignedFont(text,method);
  }
  else {
    value = UI_LanguageFonts__DesignedFont(text,method);
  }
  if (text != (UnityEngine_UI_Text_o *)0x0) {
    UnityEngine_UI_Text__set_font(text,value,(MethodInfo *)0x0);
    __this = TypeInfo_UI_LanguageFonts->static_fields->PinnedFonts;
    if (__this != (System_Runtime_CompilerServices_ConditionalWeakTable_Text__Font__o *)0x0) {
      System_Runtime_CompilerServices_ConditionalWeakTable_object__object___AddOrUpdate
                ((System_Runtime_CompilerServices_ConditionalWeakTable_TKey__TValue__o *)__this,
                 (Il2CppObject *)text,(Il2CppObject *)value,
                 (MethodInfo_49090D0 *)
                 MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_AddOrUpdate);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.LanguageFonts$$SetText
// il2cpp: void UI_LanguageFonts__SetText (UnityEngine_UI_Text_o* text, System_String_o* value, const MethodInfo* method);
// 0x5d53d90

void UI_LanguageFonts__SetText(UnityEngine_UI_Text_o *text,System_String_o *value,MethodInfo *method)

{
  System_Runtime_CompilerServices_ConditionalWeakTable_Text__string__o *pSVar1;
  bool bVar2;
  UnityEngine_UI_Text_o *b;
  System_String_o *a;
  UnityEngine_Font_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  System_String_o *local_28;
  
  if (Il2CppMethodInitialized_07547f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_string_AddOrUpdate);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    Il2CppMethodInitialized_07547f1d = '\x01';
  }
  local_28 = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  b = (UnityEngine_UI_Text_o *)
      Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(value,false,(MethodInfo *)0x0);
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  pSVar1 = TypeInfo_UI_LanguageFonts->static_fields->AssignedValues;
  if (pSVar1 != (System_Runtime_CompilerServices_ConditionalWeakTable_Text__string__o *)0x0) {
    pUVar4 = text;
    bVar2 = System_Runtime_CompilerServices_ConditionalWeakTable_object__object___TryGetValue
                      ((System_Runtime_CompilerServices_ConditionalWeakTable_TKey__TValue__o *)pSVar1,
                       (Il2CppObject *)text,(Il2CppObject **)&local_28,
                       (MethodInfo_4909960 *)
                       MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_string_TryGetValue
                      );
    if ((bVar2) &&
       (pUVar4 = (UnityEngine_UI_Text_o *)value,
       bVar2 = System_String__op_Equality(local_28,value,(MethodInfo *)0x0), bVar2)) {
      if (text == (UnityEngine_UI_Text_o *)0x0) goto label_05d53f38;
      a = (*(text->klass->vtable)._74_get_text.methodPtr)(text,(text->klass->vtable)._74_get_text.method);
      pUVar4 = b;
      bVar2 = System_String__op_Equality(a,(System_String_o *)b,(MethodInfo *)0x0);
      if (bVar2) {
        return;
      }
    }
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    pUVar3 = UI_LanguageFonts__DesignedFont(text,(MethodInfo *)pUVar4);
    pUVar3 = UI_LanguageFonts__LegacyFont(pUVar3,(MethodInfo *)pUVar4);
    if (text != (UnityEngine_UI_Text_o *)0x0) {
      UnityEngine_UI_Text__set_font(text,pUVar3,(MethodInfo *)0x0);
      (*(text->klass->vtable)._75_set_text.methodPtr)
                (text,(System_String_o *)b,(text->klass->vtable)._75_set_text.method);
      pSVar1 = TypeInfo_UI_LanguageFonts->static_fields->AssignedValues;
      if (pSVar1 != (System_Runtime_CompilerServices_ConditionalWeakTable_Text__string__o *)0x0) {
        pUVar4 = text;
        System_Runtime_CompilerServices_ConditionalWeakTable_object__object___AddOrUpdate
                  ((System_Runtime_CompilerServices_ConditionalWeakTable_TKey__TValue__o *)pSVar1,
                   (Il2CppObject *)text,(Il2CppObject *)value,
                   (MethodInfo_49090D0 *)
                   MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_string_AddOrUpdate);
        if (b != (UnityEngine_UI_Text_o *)value) {
          if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
          }
          UI_LanguageFonts__EnsureRightToLeftLines(text,(MethodInfo *)pUVar4);
        }
        return;
      }
    }
  }
label_05d53f38:
  ThrowNullReferenceException();
}


// UI.LanguageFonts$$EnsureRightToLeftLines
// il2cpp: void UI_LanguageFonts__EnsureRightToLeftLines (UnityEngine_UI_Text_o* text, const MethodInfo* method);
// 0x5d55190

void UI_LanguageFonts__EnsureRightToLeftLines(UnityEngine_UI_Text_o *text,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Styling_GisketchRtlTextLines_o *x;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_07547f1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchRtlTextLines);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchRtlTextLines);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547f1e = '\x01';
  }
  if (text != (UnityEngine_UI_Text_o *)0x0) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)text,
                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_GisketchRtlTextLines);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)text,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__AddComponent_object_
                (__this,(MethodInfo_353B6A0 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_GisketchRtlTextLines);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.LanguageFonts$$DesignedFont
// il2cpp: UnityEngine_Font_o* UI_LanguageFonts__DesignedFont (UnityEngine_UI_Text_o* text, const MethodInfo* method);
// 0x5d54e10

UnityEngine_Font_o * UI_LanguageFonts__DesignedFont(UnityEngine_UI_Text_o *text,MethodInfo *method)

{
  System_Runtime_CompilerServices_ConditionalWeakTable_Text__Font__o *pSVar1;
  bool bVar2;
  UnityEngine_Font_o *local_18;
  
  if (Il2CppMethodInitialized_07547f1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    Il2CppMethodInitialized_07547f1f = '\x01';
  }
  local_18 = (UnityEngine_Font_o *)0x0;
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  pSVar1 = TypeInfo_UI_LanguageFonts->static_fields->DesignedFonts;
  if (pSVar1 != (System_Runtime_CompilerServices_ConditionalWeakTable_Text__Font__o *)0x0) {
    bVar2 = System_Runtime_CompilerServices_ConditionalWeakTable_object__object___TryGetValue
                      ((System_Runtime_CompilerServices_ConditionalWeakTable_TKey__TValue__o *)pSVar1,
                       (Il2CppObject *)text,(Il2CppObject **)&local_18,
                       (MethodInfo_4909960 *)
                       MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_TryGetValue);
    if (bVar2) {
      return local_18;
    }
    if (text != (UnityEngine_UI_Text_o *)0x0) {
      local_18 = UnityEngine_UI_Text__get_font(text,(MethodInfo *)0x0);
      if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
      }
      pSVar1 = TypeInfo_UI_LanguageFonts->static_fields->DesignedFonts;
      if (pSVar1 != (System_Runtime_CompilerServices_ConditionalWeakTable_Text__Font__o *)0x0) {
        System_Runtime_CompilerServices_ConditionalWeakTable_object__object___Add
                  ((System_Runtime_CompilerServices_ConditionalWeakTable_TKey__TValue__o *)pSVar1,
                   (Il2CppObject *)text,(Il2CppObject *)local_18,
                   (MethodInfo_49093C0 *)
                   MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_Add);
        return local_18;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.LanguageFonts$$.cctor
// il2cpp: void UI_LanguageFonts___cctor (const MethodInfo* method);
// 0x5d55310

void UI_LanguageFonts___cctor(MethodInfo *method)

{
  UI_LanguageFonts_StaticFields *pUVar1;
  System_Runtime_CompilerServices_ConditionalWeakTable_Text__Font__o *pSVar2;
  System_Runtime_CompilerServices_ConditionalWeakTable_Text__string__o *__this;
  System_Collections_Generic_Dictionary_Font__Font__o *__this_00;
  
  if (Il2CppMethodInitialized_07547f20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Font_Font_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Font_Font);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    Il2CppMethodInitialized_07547f20 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font);
  System_Runtime_CompilerServices_ConditionalWeakTable_object__object____ctor
            ((System_Runtime_CompilerServices_ConditionalWeakTable_TKey__TValue__o *)pSVar2,
             (MethodInfo_49088E0 *)
             MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_ctor);
  TypeInfo_UI_LanguageFonts->static_fields->DesignedFonts = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_LanguageFonts->static_fields->DesignedFonts);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_string
                     );
  System_Runtime_CompilerServices_ConditionalWeakTable_object__object____ctor
            ((System_Runtime_CompilerServices_ConditionalWeakTable_TKey__TValue__o *)__this,
             (MethodInfo_49088E0 *)
             MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_string_ctor);
  pUVar1 = TypeInfo_UI_LanguageFonts->static_fields;
  pUVar1->AssignedValues = __this;
  Il2CppCodeGenWriteBarrier(&pUVar1->AssignedValues);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font);
  System_Runtime_CompilerServices_ConditionalWeakTable_object__object____ctor
            ((System_Runtime_CompilerServices_ConditionalWeakTable_TKey__TValue__o *)pSVar2,
             (MethodInfo_49088E0 *)
             MethodInfo_System_Runtime_CompilerServices_ConditionalWeakTable_Text_Font_ctor);
  pUVar1 = TypeInfo_UI_LanguageFonts->static_fields;
  pUVar1->PinnedFonts = pSVar2;
  Il2CppCodeGenWriteBarrier(&pUVar1->PinnedFonts);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Font_Font);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_Font_Font_ctor);
  pUVar1 = TypeInfo_UI_LanguageFonts->static_fields;
  pUVar1->LegacyFonts = __this_00;
  Il2CppCodeGenWriteBarrier(&pUVar1->LegacyFonts);
  return;
}


