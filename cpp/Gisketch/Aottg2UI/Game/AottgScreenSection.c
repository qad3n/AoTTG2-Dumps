// Type: Gisketch.Aottg2UI.Game.AottgScreenSection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgScreenSection.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScreenSection.<>c__DisplayClass13_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0___ctor(Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection.<>c__DisplayClass13_0$$<.ctor>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0____ctor_b__0 (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __, const MethodInfo* method);
// 0x181d86fe0

void
Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0____ctor_b__0(Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __, MethodInfo* method)

{
  System_Action_float____o *pSVar1;
  
  pSVar1 = (__this->fields).buildContent;
  if (pSVar1 != (System_Action_float____o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,buf,(pSVar1->fields).method);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$get_HasHeaderActions
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgScreenSection__get_HasHeaderActions (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, const MethodInfo* method);
// 0x181e2dad0

bool Gisketch_Aottg2UI_Game_AottgScreenSection__get_HasHeaderActions
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,MethodInfo *method)

{
  return (__this->fields)._buildHeaderActions != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, System_String_o* id, System_String_o* label, System_String_o* icon, System_Action_AottgUi__o* buildContent, System_String_o* textKey, System_String_o* keywords, bool autoAddKeywords, System_String_o* searchTitle, System_Action_AottgUi__AottgScreenSectionContext__o* buildHeaderActions, bool hideSearch, bool hideHeader, const MethodInfo* method);
// 0x181e2d750

void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,System_String_o *id,System_String_o *label
               ,System_String_o *icon,System_Action_AottgUi__o *buildContent,System_String_o *textKey,
               System_String_o *keywords,bool autoAddKeywords,System_String_o *searchTitle,
               System_Action_AottgUi__AottgScreenSectionContext__o *buildHeaderActions,bool hideSearch,
               bool hideHeader,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_o *object;
  System_Action_T1__T2__o *__this_00;
  
  if (Il2CppMethodInitialized_184344d72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_c__DisplayClass13_0_ctor_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_c__DisplayClass13_0);
    Il2CppMethodInitialized_184344d72 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_c__DisplayClass13_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgScreenSection___c__DisplayClass13_0_o *)0x0) {
    (object->fields).buildContent = buildContent;
    Il2CppCodeGenWriteBarrier(&(object->fields).buildContent,buildContent);
    if ((object->fields).buildContent == (System_Action_AottgUi__o *)0x0) {
      __this_00 = (System_Action_T1__T2__o *)0x0;
    }
    else {
      __this_00 = (System_Action_T1__T2__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_AottgUi_AottgScreenSectionContext);
      System_Action_object__AottgScreenSectionContext____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_c__DisplayClass13_0_ctor_b__0,
                 (MethodInfo_1467710 *)0x0);
    }
    Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
              (__this,id,label,icon,(System_Action_AottgUi__AottgScreenSectionContext__o *)__this_00,textKey,
               keywords,autoAddKeywords,searchTitle,buildHeaderActions,hideSearch,hideHeader,(MethodInfo *)0x0
              );
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, System_String_o* id, System_String_o* label, System_String_o* icon, System_Action_AottgUi__AottgScreenSectionContext__o* buildContent, System_String_o* textKey, System_String_o* keywords, bool autoAddKeywords, System_String_o* searchTitle, System_Action_AottgUi__AottgScreenSectionContext__o* buildHeaderActions, bool hideSearch, bool hideHeader, const MethodInfo* method);
// 0x181e2d890
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2d8fc: mov rcx, rsi
// asm:   0x181e2d8ff: jmp 0x181e2d967
// asm:   0x181e2d91b: jmp 0x181e2d967
// asm:   0x181e2d964: mov rcx, rdi

void Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_1e2d890
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,System_String_o *id,System_String_o *label
               ,System_String_o *icon,System_Action_AottgUi__AottgScreenSectionContext__o *buildContent,
               System_String_o *textKey,System_String_o *keywords,bool autoAddKeywords,
               System_String_o *searchTitle,
               System_Action_AottgUi__AottgScreenSectionContext__o *buildHeaderActions,bool hideSearch,
               bool hideHeader,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344d73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184344d73 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    if (Il2CppMethodInitialized_184344d74 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&" ");
      il2cpp_codegen_initialize_runtime_metadata(&"-");
      Il2CppMethodInitialized_184344d74 = '\x01';
    }
    id = label;
    if (label == (System_String_o *)0x0) {
      id = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
joined_r0x000181e2d95e:
      if (id == (System_String_o *)0x0) goto label_181e2daca;
    }
  }
  else {
    if (Il2CppMethodInitialized_184344d74 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&" ");
      il2cpp_codegen_initialize_runtime_metadata(&"-");
      Il2CppMethodInitialized_184344d74 = '\x01';
    }
    if (id == (System_String_o *)0x0) {
      id = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
      goto joined_r0x000181e2d95e;
    }
  }
  pSVar2 = System_String__Trim(id,(MethodInfo *)0x0);
  if ((pSVar2 != (System_String_o *)0x0) &&
     (pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0), pSVar2 != (System_String_o *)0x0)) {
    pSVar2 = System_String__Replace_1970e80
                       (pSVar2," ","-",(MethodInfo *)0x0);
    (__this->fields).Id = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Id,pSVar2);
    bVar1 = System_String__IsNullOrEmpty(label,(MethodInfo *)0x0);
    if (bVar1) {
      label = (__this->fields).Id;
    }
    (__this->fields).Label = label;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Label,label);
    (__this->fields).TextKey = textKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).TextKey,textKey);
    (__this->fields).Icon = icon;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Icon,icon);
    bVar1 = System_String__IsNullOrEmpty(textKey,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_String__IsNullOrEmpty(searchTitle,(MethodInfo *)0x0);
      if (bVar1) {
        searchTitle = (__this->fields).Label;
      }
    }
    else {
      bVar1 = System_String__IsNullOrEmpty(searchTitle,(MethodInfo *)0x0);
      if (bVar1) {
        searchTitle = (__this->fields).Label;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      searchTitle = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                              (textKey,searchTitle,(MethodInfo *)0x0);
    }
    (__this->fields).SearchTitle = searchTitle;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SearchTitle,searchTitle);
    (__this->fields).Keywords = keywords;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Keywords,keywords);
    (__this->fields).AutoAddKeywords = autoAddKeywords;
    (__this->fields).HideSearch = hideSearch;
    (__this->fields).HideHeader = hideHeader;
    (__this->fields)._buildContent = buildContent;
    Il2CppCodeGenWriteBarrier((void **)__this,buildContent);
    (__this->fields)._buildHeaderActions = buildHeaderActions;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._buildHeaderActions,buildHeaderActions);
    return;
  }
label_181e2daca:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection__Build (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x181e2d680

void Gisketch_Aottg2UI_Game_AottgScreenSection__Build
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  int32_t iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pSVar1 = (__this->fields)._buildContent;
  if (pSVar1 != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
    local_28 = *(undefined4 *)&(context->fields)._group;
    uStack_24 = *(undefined4 *)((longlong)&(context->fields)._group + 4);
    iStack_20 = (context->fields)._order;
    uStack_1c = *(undefined4 *)&(context->fields).field_0xc;
    local_18 = *(undefined4 *)&(context->fields)._SectionId_k__BackingField;
    uStack_14 = *(undefined4 *)((longlong)&(context->fields)._SectionId_k__BackingField + 4);
    uStack_10 = *(undefined4 *)&(context->fields)._SectionTitle_k__BackingField;
    uStack_c = *(undefined4 *)((longlong)&(context->fields)._SectionTitle_k__BackingField + 4);
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,local_18,&local_28,(pSVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$BuildHeaderActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenSection__BuildHeaderActions (Gisketch_Aottg2UI_Game_AottgScreenSection_o __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x181e2d640

void Gisketch_Aottg2UI_Game_AottgScreenSection__BuildHeaderActions
               (Gisketch_Aottg2UI_Game_AottgScreenSection_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  int32_t iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pSVar1 = (__this->fields)._buildHeaderActions;
  if (pSVar1 != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
    local_28 = *(undefined4 *)&(context->fields)._group;
    uStack_24 = *(undefined4 *)((longlong)&(context->fields)._group + 4);
    iStack_20 = (context->fields)._order;
    uStack_1c = *(undefined4 *)&(context->fields).field_0xc;
    local_18 = *(undefined4 *)&(context->fields)._SectionId_k__BackingField;
    uStack_14 = *(undefined4 *)((longlong)&(context->fields)._SectionId_k__BackingField + 4);
    uStack_10 = *(undefined4 *)&(context->fields)._SectionTitle_k__BackingField;
    uStack_c = *(undefined4 *)((longlong)&(context->fields)._SectionTitle_k__BackingField + 4);
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,local_18,&local_28,(pSVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenSection$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenSection__SafeId (System_String_o* value, const MethodInfo* method);
// 0x181e2d6c0

System_String_o * Gisketch_Aottg2UI_Game_AottgScreenSection__SafeId(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344d74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_184344d74 = '\x01';
  }
  if ((value != (System_String_o *)0x0) ||
     (value = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), value != (System_String_o *)0x0)) {
    pSVar1 = System_String__Trim(value,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
      if (pSVar1 != (System_String_o *)0x0) {
        pSVar1 = System_String__Replace_1970e80
                           (pSVar1," ","-",(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


