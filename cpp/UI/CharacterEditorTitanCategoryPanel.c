// Type: UI.CharacterEditorTitanCategoryPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCategoryPanel.cs
// --------------------------------

// UI.CharacterEditorTitanCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorTitanCategoryPanel__get_Height (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821dda70

float
UI_CharacterEditorTitanCategoryPanel__get_Height(UI_CharacterEditorTitanCategoryPanel_o* __this, MethodInfo* method)

{
  return 280.0;
}


// UI.CharacterEditorTitanCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorTitanCategoryPanel__Setup (UI_CharacterEditorTitanCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821dd6c0

void UI_CharacterEditorTitanCategoryPanel__Setup
               (UI_CharacterEditorTitanCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  Settings_StringSetting_o *setting;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  System_String_array *options;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_184346fc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCategoryPanel_Setup_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"Shake");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346fc9 = '\x01';
  }
  UI_CharacterEditorCategoryPanel__Setup((UI_CharacterEditorCategoryPanel_o *)__this,parent,(MethodInfo *)0x0)
  ;
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar1,(MethodInfo *)0x0);
  options = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar1 = "Laugh";
  if (options != (System_String_array *)0x0) {
    if ((int)options->max_length != 0) {
      options->m_Items[0] = "Laugh";
      Il2CppCodeGenWriteBarrier(options->m_Items,pSVar1);
      pSVar1 = "Nod";
      if (1 < (uint)options->max_length) {
        options->m_Items[1] = "Nod";
        Il2CppCodeGenWriteBarrier(options->m_Items + 1,pSVar1);
        pSVar1 = "Shake";
        if (2 < (uint)options->max_length) {
          options->m_Items[2] = "Shake";
          Il2CppCodeGenWriteBarrier(options->m_Items + 2,pSVar1);
          pSVar1 = "Roar";
          if (3 < (uint)options->max_length) {
            options->m_Items[3] = "Roar";
            Il2CppCodeGenWriteBarrier(options->m_Items + 3,pSVar1);
            parent_00 = (__this->fields).SinglePanel;
            setting = (__this->fields)._emote;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar1 = UI_UIManager__GetLocale
                               ("CharacterEditor","Preview","Emote",
                                "","",(MethodInfo *)0x0);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_CharacterEditorTitanCategoryPanel_Setup_b__3_0,
                       (MethodInfo *)0x0);
            UI_ElementFactory__CreateDropdownSetting
                      (parent_00,__this_00,(Settings_BaseSetting_o *)setting,pSVar1,options,
                       "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,__this_01,
                       (System_Int32_array *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCategoryPanel$$OnEmote
// il2cpp: void UI_CharacterEditorTitanCategoryPanel__OnEmote (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821dd660

void
UI_CharacterEditorTitanCategoryPanel__OnEmote(UI_CharacterEditorTitanCategoryPanel_o* __this, MethodInfo* method)

{
  GameManagers_CharacterEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Characters_DummyCharacter_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346fca = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._emote, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Character, __this_00 != (Characters_DummyCharacter_o *)0x0)) {
    Characters_DummyCharacter__EmoteAction(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorTitanCategoryPanel___ctor (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821dd990

void UI_CharacterEditorTitanCategoryPanel___ctor
               (UI_CharacterEditorTitanCategoryPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346fcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh");
    Il2CppMethodInitialized_184346fcb = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar1,"Laugh",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._emote = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._emote,pSVar1);
  if (Il2CppMethodInitialized_184346f77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184346f77 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._category = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._category,pSVar1);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCategoryPanel$$<Setup>b__3_0
// il2cpp: void UI_CharacterEditorTitanCategoryPanel___Setup_b__3_0 (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821dd660

void UI_CharacterEditorTitanCategoryPanel___Setup_b__3_0
               (UI_CharacterEditorTitanCategoryPanel_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Characters_DummyCharacter_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346fca = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._emote, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Character, __this_00 != (Characters_DummyCharacter_o *)0x0)) {
    Characters_DummyCharacter__EmoteAction(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


