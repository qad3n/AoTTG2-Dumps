// Type: UI.ContentLocale
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/ContentLocale.cs
// Prior real C# source: none
// --------------------------------

// UI.ContentLocale$$ModeName
// il2cpp: System_String_o* UI_ContentLocale__ModeName (System_String_o* mode, const MethodInfo* method);
// 0x5ce4b50

System_String_o * UI_ContentLocale__ModeName(System_String_o *mode,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547c09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_07547c09 = '\x01';
  }
  pSVar1 = UI_ContentLocale__Get
                     ("GameModes",mode,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                      mode,in_R8);
  return pSVar1;
}


// UI.ContentLocale$$ModeDescription
// il2cpp: System_String_o* UI_ContentLocale__ModeDescription (System_String_o* mode, System_String_o* fallback, const MethodInfo* method);
// 0x5ce4ca0

System_String_o *
UI_ContentLocale__ModeDescription(System_String_o *mode,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547c0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_07547c0a = '\x01';
  }
  pSVar1 = UI_ContentLocale__Get("GameModes",mode,"Description",fallback,in_R8);
  return pSVar1;
}


// UI.ContentLocale$$ModeSettingTooltip
// il2cpp: System_String_o* UI_ContentLocale__ModeSettingTooltip (System_String_o* mode, System_String_o* setting, System_String_o* fallback, const MethodInfo* method);
// 0x5ce4d00

System_String_o *
UI_ContentLocale__ModeSettingTooltip
          (System_String_o *mode,System_String_o *setting,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547c0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip.");
    il2cpp_codegen_initialize_runtime_metadata(&"GameModes");
    Il2CppMethodInitialized_07547c0b = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("Tooltip.",setting,(MethodInfo *)0x0);
  pSVar1 = UI_ContentLocale__Get("GameModes",mode,pSVar1,fallback,in_R8);
  return pSVar1;
}


// UI.ContentLocale$$MapCategory
// il2cpp: System_String_o* UI_ContentLocale__MapCategory (System_String_o* category, const MethodInfo* method);
// 0x5ce4d70

System_String_o * UI_ContentLocale__MapCategory(System_String_o *category,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547c0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Maps");
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    Il2CppMethodInitialized_07547c0c = '\x01';
  }
  pSVar1 = UI_ContentLocale__Get("Maps","Category",category,category,in_R8);
  return pSVar1;
}


// UI.ContentLocale$$ExperienceCategory
// il2cpp: System_String_o* UI_ContentLocale__ExperienceCategory (System_String_o* category, const MethodInfo* method);
// 0x5ce4dc0

System_String_o * UI_ContentLocale__ExperienceCategory(System_String_o *category,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547c0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    il2cpp_codegen_initialize_runtime_metadata(&"Experiences");
    Il2CppMethodInitialized_07547c0d = '\x01';
  }
  pSVar1 = UI_ContentLocale__Get("Experiences","Category",category,category,in_R8);
  return pSVar1;
}


// UI.ContentLocale$$ExperienceSubcategory
// il2cpp: System_String_o* UI_ContentLocale__ExperienceSubcategory (System_String_o* subcategory, const MethodInfo* method);
// 0x5ce4e10

System_String_o * UI_ContentLocale__ExperienceSubcategory(System_String_o *subcategory,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547c0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Subcategory");
    il2cpp_codegen_initialize_runtime_metadata(&"Experiences");
    Il2CppMethodInitialized_07547c0e = '\x01';
  }
  pSVar1 = UI_ContentLocale__Get("Experiences","Subcategory",subcategory,subcategory,in_R8);
  return pSVar1;
}


// UI.ContentLocale$$ExperienceName
// il2cpp: System_String_o* UI_ContentLocale__ExperienceName (Map_Experience_o* experience, const MethodInfo* method);
// 0x5ce4e60

System_String_o * UI_ContentLocale__ExperienceName(Map_Experience_o *experience,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547c0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Experiences");
    Il2CppMethodInitialized_07547c0f = '\x01';
  }
  if (experience == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (experience->fields).Name;
  pSVar1 = UI_ContentLocale__Get("Experiences","Name",pSVar1,pSVar1,in_R8);
  return pSVar1;
}


// UI.ContentLocale$$ExperienceDescription
// il2cpp: System_String_o* UI_ContentLocale__ExperienceDescription (Map_Experience_o* experience, const MethodInfo* method);
// 0x5ce4ec0

System_String_o * UI_ContentLocale__ExperienceDescription(Map_Experience_o *experience,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547c10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Experiences");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_07547c10 = '\x01';
  }
  if (experience == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = UI_ContentLocale__Get
                     ("Experiences","Description",(experience->fields).TemplateName,
                      (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),in_R8);
  return pSVar1;
}


// UI.ContentLocale$$ExperienceVariant
// il2cpp: System_String_o* UI_ContentLocale__ExperienceVariant (System_String_o* variant, const MethodInfo* method);
// 0x5ce4f30

System_String_o * UI_ContentLocale__ExperienceVariant(System_String_o *variant,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547c11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Variant");
    il2cpp_codegen_initialize_runtime_metadata(&"Experiences");
    Il2CppMethodInitialized_07547c11 = '\x01';
  }
  pSVar1 = UI_ContentLocale__Get("Experiences","Variant",variant,variant,in_R8);
  return pSVar1;
}


// UI.ContentLocale$$Get
// il2cpp: System_String_o* UI_ContentLocale__Get (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* fallback, const MethodInfo* method);
// 0x5ce4ba0

System_String_o *
UI_ContentLocale__Get
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547c12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_07547c12 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(subCategory,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    bVar1 = UI_UIManager__HasLocale(category,subCategory,item,"English",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar2 = UI_UIManager__GetLocale
                         (category,subCategory,item,"","",
                          (MethodInfo *)0x0);
      return pSVar2;
    }
  }
  if (fallback == (System_String_o *)0x0) {
    fallback = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return fallback;
}


