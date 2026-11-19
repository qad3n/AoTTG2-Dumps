// Type: Gisketch.Aottg2UI.Game.AottgScreenSection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgScreenSection.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScreenSection.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5916350

void Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass16_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection.<>c__DisplayClass16_0$$<Adapt>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass16_0___Adapt_b__0 (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __, const MethodInfo* method);
// 0x59163a0

void Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass16_0___Adapt_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __,
               MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields).buildContent;
  if (pSVar1 == (System_Action_AottgUi__o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,ui,(pSVar1->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$get_HasHeaderActions
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgScreenSection__get_HasHeaderActions (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, const MethodInfo* method);
// 0x5915ee0

bool Gisketch_Aottg2UI_Game_AottgScreenSection__get_HasHeaderActions
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,MethodInfo *method)

{
  return (__this->fields)._buildHeaderActions != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, System_String_o* id, System_String_o* textKey, System_String_o* icon, System_Action_AottgUi__o* buildContent, System_String_o* keywords, bool autoAddKeywords, System_Action_AottgUi__AottgScreenSectionContext__o* buildHeaderActions, bool hideSearch, bool hideHeader, const MethodInfo* method);
// 0x5915ef0

void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,System_String_o *id,
               System_String_o *textKey,System_String_o *icon,System_Action_AottgUi__o *buildContent,
               System_String_o *keywords,bool autoAddKeywords,
               System_Action_AottgUi__AottgScreenSectionContext__o *buildHeaderActions,bool hideSearch,
               bool hideHeader,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o *buildContent_00;
  System_String_o *text;
  MethodInfo *method_00;
  
  buildContent_00 = Gisketch_Aottg2UI_Game_AottgScreenSection__Adapt(buildContent,(MethodInfo *)id);
  if (Il2CppMethodInitialized_075456f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075456f0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  method_00 = (MethodInfo *)0x5915f64;
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(textKey,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816130
            (__this,id,textKey,text,icon,buildContent_00,keywords,autoAddKeywords,buildHeaderActions,
             hideSearch,hideHeader,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, System_String_o* id, System_String_o* textKey, System_String_o* icon, System_Action_AottgUi__AottgScreenSectionContext__o* buildContent, System_String_o* keywords, bool autoAddKeywords, System_Action_AottgUi__AottgScreenSectionContext__o* buildHeaderActions, bool hideSearch, bool hideHeader, const MethodInfo* method);
// 0x5916070

void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816070
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,System_String_o *id,
               System_String_o *textKey,System_String_o *icon,
               System_Action_AottgUi__AottgScreenSectionContext__o *buildContent,System_String_o *keywords,
               bool autoAddKeywords,System_Action_AottgUi__AottgScreenSectionContext__o *buildHeaderActions,
               bool hideSearch,bool hideHeader,MethodInfo *method)

{
  System_String_o *text;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075456f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075456f0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  method_00 = (MethodInfo *)0x59160dc;
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(textKey,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816130
            (__this,id,textKey,text,icon,buildContent,keywords,autoAddKeywords,buildHeaderActions,hideSearch,
             hideHeader,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, System_String_o* id, System_String_o* textKey, System_String_o* text, System_String_o* icon, System_Action_AottgUi__AottgScreenSectionContext__o* buildContent, System_String_o* keywords, bool autoAddKeywords, System_Action_AottgUi__AottgScreenSectionContext__o* buildHeaderActions, bool hideSearch, bool hideHeader, const MethodInfo* method);
// 0x5916130

void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816130
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,System_String_o *id,
               System_String_o *textKey,System_String_o *text,System_String_o *icon,
               System_Action_AottgUi__AottgScreenSectionContext__o *buildContent,System_String_o *keywords,
               bool autoAddKeywords,System_Action_AottgUi__AottgScreenSectionContext__o *buildHeaderActions,
               bool hideSearch,bool hideHeader,MethodInfo *method)

{
  System_String_o **targetAddress;
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    id = text;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgScreenSection__SafeId(id,method_00);
  targetAddress = &(__this->fields).Id;
  (__this->fields).Id = pSVar2;
  Il2CppCodeGenWriteBarrier(targetAddress);
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar1) {
    text = *targetAddress;
  }
  (__this->fields).Text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Text);
  (__this->fields).TextKey = textKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TextKey);
  (__this->fields).Icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon);
  (__this->fields).Keywords = keywords;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Keywords);
  (__this->fields).AutoAddKeywords = autoAddKeywords;
  (__this->fields).HideSearch = hideSearch;
  (__this->fields).HideHeader = hideHeader;
  (__this->fields)._buildContent = buildContent;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields)._buildHeaderActions = buildHeaderActions;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buildHeaderActions);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$WithText
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_o Gisketch_Aottg2UI_Game_AottgScreenSection__WithText (System_String_o* id, System_String_o* text, System_String_o* icon, System_Action_AottgUi__AottgScreenSectionContext__o* buildContent, System_String_o* keywords, bool autoAddKeywords, System_Action_AottgUi__AottgScreenSectionContext__o* buildHeaderActions, bool hideSearch, bool hideHeader, const MethodInfo* method);
// 0x59162e0

Gisketch_Aottg2UI_Game_AottgScreenSection_o *
Gisketch_Aottg2UI_Game_AottgScreenSection__WithText
          (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__return_storage_ptr__,System_String_o *id,
          System_String_o *text,System_String_o *icon,
          System_Action_AottgUi__AottgScreenSectionContext__o *buildContent,System_String_o *keywords,
          bool autoAddKeywords,System_Action_AottgUi__AottgScreenSectionContext__o *buildHeaderActions,
          bool hideSearch,bool hideHeader,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe0;
  
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).AutoAddKeywords = false;
  (__return_storage_ptr__->fields).HideSearch = false;
  (__return_storage_ptr__->fields).HideHeader = false;
  *(undefined5 *)&(__return_storage_ptr__->fields).field_0x3b = 0;
  (__return_storage_ptr__->fields).TextKey = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Icon = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Id = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Text = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  (__return_storage_ptr__->fields)._buildHeaderActions =
       (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_5816130
            (__return_storage_ptr__,id,(System_String_o *)0x0,text,icon,buildContent,keywords,autoAddKeywords,
             buildHeaderActions,hideSearch,hideHeader,in_stack_ffffffffffffffe0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$Adapt
// il2cpp: System_Action_AottgUi__AottgScreenSectionContext__o* Gisketch_Aottg2UI_Game_AottgScreenSection__Adapt (System_Action_AottgUi__o* buildContent, const MethodInfo* method);
// 0x5915fb0

System_Action_AottgUi__AottgScreenSectionContext__o *
Gisketch_Aottg2UI_Game_AottgScreenSection__Adapt(System_Action_AottgUi__o *buildContent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass16_0_o *__this;
  System_Action_T1__T2__o *__this_00;
  
  if (Il2CppMethodInitialized_075456f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_c__DisplayClass16_0_Adapt_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_c__DisplayClass16_0);
    Il2CppMethodInitialized_075456f1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_c__DisplayClass16_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass16_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).buildContent = buildContent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).buildContent);
  if ((__this->fields).buildContent == (System_Action_AottgUi__o *)0x0) {
    __this_00 = (System_Action_T1__T2__o *)0x0;
  }
  else {
    __this_00 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    System_Action_object__AottgScreenSectionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_c__DisplayClass16_0_Adapt_b__0,
               (MethodInfo_4A897E0 *)0x0);
  }
  return (System_Action_AottgUi__AottgScreenSectionContext__o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection__Build (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5916360

void Gisketch_Aottg2UI_Game_AottgScreenSection__Build
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields)._buildContent;
  if (pSVar1 == (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,ui,(pSVar1->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$BuildHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection__BuildHeaderActions (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5916380

void Gisketch_Aottg2UI_Game_AottgScreenSection__BuildHeaderActions
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields)._buildHeaderActions;
  if (pSVar1 == (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,ui,(pSVar1->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenSection__SafeId (System_String_o* value, const MethodInfo* method);
// 0x5916250

System_String_o * Gisketch_Aottg2UI_Game_AottgScreenSection__SafeId(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075456f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_075456f2 = '\x01';
  }
  if ((value != (System_String_o *)0x0) ||
     (value = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), value != (System_String_o *)0x0)) {
    pSVar1 = System_String__Trim(value,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
      if (pSVar1 != (System_String_o *)0x0) {
        pSVar1 = System_String__Replace_5304550
                           (pSVar1," ","-",(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


