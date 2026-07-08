// Type: UI.CharacterEditorTitanCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanCategoryPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCategoryPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorTitanCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorTitanCategoryPanel__get_Height (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4057de0

float UI_CharacterEditorTitanCategoryPanel__get_Height
                (UI_CharacterEditorTitanCategoryPanel_o *__this,MethodInfo *method)

{
  return 280.0;
}


// UI.CharacterEditorTitanCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorTitanCategoryPanel__Setup (UI_CharacterEditorTitanCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4057df0

void UI_CharacterEditorTitanCategoryPanel__Setup
               (UI_CharacterEditorTitanCategoryPanel_o *__this,UI_BasePanel_o *parent,
               MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  Settings_StringSetting_o *setting;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  System_String_array *options;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  
  if (DAT_0570444c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Roar");
    il2cpp_init_method_metadata(&"Preview");
    il2cpp_init_method_metadata(&"Shake");
    il2cpp_init_method_metadata(&"Nod");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"Laugh");
    il2cpp_init_method_metadata(&"");
    DAT_0570444c = '\x01';
  }
  UI_CharacterEditorCategoryPanel__Setup
            ((UI_CharacterEditorCategoryPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar1,(MethodInfo *)0x0);
  options = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,4);
  if (options != (System_String_array *)0x0) {
    if ((int)options->max_length != 0) {
      options->m_Items[0] = "Laugh";
      il2cpp_runtime_glue(options->m_Items);
      if (1 < (uint)options->max_length) {
        options->m_Items[1] = "Nod";
        il2cpp_runtime_glue(options->m_Items + 1);
        if (2 < (uint)options->max_length) {
          options->m_Items[2] = "Shake";
          il2cpp_runtime_glue(options->m_Items + 2);
          if (3 < (uint)options->max_length) {
            options->m_Items[3] = "Roar";
            il2cpp_runtime_glue(options->m_Items + 3);
            parent_00 = (__this->fields).SinglePanel;
            setting = (__this->fields)._emote;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar1 = UI_UIManager__GetLocale
                               ("CharacterEditor","Preview","Emote","","",
                                (MethodInfo *)0x0);
            onDropdownOptionSelect =
                 (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            UI_ElementFactory__CreateDropdownSetting
                      (parent_00,__this_00,(Settings_BaseSetting_o *)setting,pSVar1,options,
                       "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,
                       onDropdownOptionSelect,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCategoryPanel$$OnEmote
// il2cpp: void UI_CharacterEditorTitanCategoryPanel__OnEmote (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x40580a0

void UI_CharacterEditorTitanCategoryPanel__OnEmote
               (UI_CharacterEditorTitanCategoryPanel_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Characters_DummyCharacter_o *__this_00;
  
  if (DAT_0570444d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_0570444d = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._emote, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Character, __this_00 != (Characters_DummyCharacter_o *)0x0)) {
    Characters_DummyCharacter__EmoteAction(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorTitanCategoryPanel___ctor (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4058100

void UI_CharacterEditorTitanCategoryPanel___ctor
               (UI_CharacterEditorTitanCategoryPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  
  if (DAT_0570444e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"Laugh");
    DAT_0570444e = '\x01';
  }
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,"Laugh",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._emote = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._emote);
  UI_CharacterEditorCategoryPanel___ctor
            ((UI_CharacterEditorCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCategoryPanel$$<Setup>b__3_0
// il2cpp: void UI_CharacterEditorTitanCategoryPanel___Setup_b__3_0 (UI_CharacterEditorTitanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4058190

void UI_CharacterEditorTitanCategoryPanel__<Setup>b__3_0
               (UI_CharacterEditorTitanCategoryPanel_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Characters_DummyCharacter_o *__this_00;
  
  if (DAT_0570444d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_0570444d = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._emote, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Character, __this_00 != (Characters_DummyCharacter_o *)0x0)) {
    Characters_DummyCharacter__EmoteAction(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


