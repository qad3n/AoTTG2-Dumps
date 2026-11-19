// Type: Gisketch.Aottg2UI.Game.AottgToolsDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgToolsDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgToolsDialog.<>c__DisplayClass7_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgToolsDialog___c__DisplayClass7_0___ctor (Gisketch_Aottg2UI_Game_AottgToolsDialog___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x58c3e70

void Gisketch_Aottg2UI_Game_AottgToolsDialog___c__DisplayClass7_0___ctor
               (Gisketch_Aottg2UI_Game_AottgToolsDialog___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgToolsDialog.<>c__DisplayClass7_0$$<SceneEntry>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgToolsDialog___c__DisplayClass7_0___SceneEntry_b__0 (Gisketch_Aottg2UI_Game_AottgToolsDialog___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x58c3e90

void Gisketch_Aottg2UI_Game_AottgToolsDialog___c__DisplayClass7_0___SceneEntry_b__0
               (Gisketch_Aottg2UI_Game_AottgToolsDialog___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  ApplicationManagers_SceneLoader__LoadScene((__this->fields).scene,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgToolsDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgToolsDialog__get_Title (Gisketch_Aottg2UI_Game_AottgToolsDialog_o* __this, const MethodInfo* method);
// 0x58c3a00

System_String_o *
Gisketch_Aottg2UI_Game_AottgToolsDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgToolsDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075453f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.ToolsButton");
    Il2CppMethodInitialized_075453f3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Intro.ToolsButton",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgToolsDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgToolsDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgToolsDialog_o* __this, const MethodInfo* method);
// 0x58c3a60

System_String_o *
Gisketch_Aottg2UI_Game_AottgToolsDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgToolsDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075453f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"wrench");
    Il2CppMethodInitialized_075453f4 = '\x01';
  }
  return "wrench";
}


// Gisketch.Aottg2UI.Game.AottgToolsDialog$$get_Entries
// il2cpp: Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_array* Gisketch_Aottg2UI_Game_AottgToolsDialog__get_Entries (Gisketch_Aottg2UI_Game_AottgToolsDialog_o* __this, const MethodInfo* method);
// 0x58c3a90

Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_array *
Gisketch_Aottg2UI_Game_AottgToolsDialog__get_Entries
          (Gisketch_Aottg2UI_Game_AottgToolsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_array *pGVar1;
  System_Action_o *__this_00;
  System_Action_GisketchActionContext__o *action;
  MethodInfo *in_R8;
  Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_Fields GStack_b8;
  Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_Fields GStack_90;
  Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_Fields GStack_70;
  Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_Fields GStack_50;
  Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_Fields GStack_30;
  
  if (Il2CppMethodInitialized_075453f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_Open);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_array);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"singleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"GalleryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotViewerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"menuGrid");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditorButton");
    il2cpp_codegen_initialize_runtime_metadata(&"video");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.ToolsPopup.AdvancedConfigurationButton");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorButton");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/map");
    Il2CppMethodInitialized_075453f5 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_array,5);
  Gisketch_Aottg2UI_Game_AottgToolsDialog__SceneEntry
            ((Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_o *)&GStack_30,"MapEditorButton",
             "material-icons/map",3,in_R8);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length != 0) {
    pGVar1->m_Items[0].fields.Icon = GStack_30.Icon;
    pGVar1->m_Items[0].fields.Action = GStack_30.Action;
    pGVar1->m_Items[0].fields.Variant = GStack_30.Variant;
    *(undefined4 *)&pGVar1->m_Items[0].fields.field_0x4 = GStack_30._4_4_;
    pGVar1->m_Items[0].fields.Key = GStack_30.Key;
    Il2CppCodeGenWriteBarrier(&pGVar1->m_Items[0].fields.Key);
    Gisketch_Aottg2UI_Game_AottgToolsDialog__SceneEntry
              ((Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_o *)&GStack_50,"CharacterEditorButton",
               "singleplayer",4,in_R8);
    if ((pGVar1->max_length & 0xfffffffe) != 0) {
      pGVar1->m_Items[1].fields.Icon = GStack_50.Icon;
      pGVar1->m_Items[1].fields.Action = GStack_50.Action;
      pGVar1->m_Items[1].fields.Variant = GStack_50.Variant;
      *(undefined4 *)&pGVar1->m_Items[1].fields.field_0x4 = GStack_50._4_4_;
      pGVar1->m_Items[1].fields.Key = GStack_50.Key;
      Il2CppCodeGenWriteBarrier(&pGVar1->m_Items[1].fields.Key);
      Gisketch_Aottg2UI_Game_AottgToolsDialog__SceneEntry
                ((Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_o *)&GStack_70,"SnapshotViewerButton",
                 "video",5,in_R8);
      if (2 < (uint)pGVar1->max_length) {
        pGVar1->m_Items[2].fields.Icon = GStack_70.Icon;
        pGVar1->m_Items[2].fields.Action = GStack_70.Action;
        pGVar1->m_Items[2].fields.Variant = GStack_70.Variant;
        *(undefined4 *)&pGVar1->m_Items[2].fields.field_0x4 = GStack_70._4_4_;
        pGVar1->m_Items[2].fields.Key = GStack_70.Key;
        Il2CppCodeGenWriteBarrier(&pGVar1->m_Items[2].fields.Key);
        Gisketch_Aottg2UI_Game_AottgToolsDialog__SceneEntry
                  ((Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_o *)&GStack_90,"GalleryButton",
                   "menuGrid",6,in_R8);
        if ((pGVar1->max_length & 0xfffffffc) != 0) {
          pGVar1->m_Items[3].fields.Icon = GStack_90.Icon;
          pGVar1->m_Items[3].fields.Action = GStack_90.Action;
          pGVar1->m_Items[3].fields.Variant = GStack_90.Variant;
          *(undefined4 *)&pGVar1->m_Items[3].fields.field_0x4 = GStack_90._4_4_;
          pGVar1->m_Items[3].fields.Key = GStack_90.Key;
          Il2CppCodeGenWriteBarrier(&pGVar1->m_Items[3].fields.Key);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgAdvancedConfigurationDialog_Open,
                     (MethodInfo *)0x0);
          action = Gisketch_Aottg2UI_Game_AottgButtonListDialog__CloseThen(__this_00,(MethodInfo *)0x0);
          GStack_b8.Icon = (System_String_o *)0x0;
          GStack_b8.Action = (System_Action_GisketchActionContext__o *)0x0;
          GStack_b8.Variant = 0;
          GStack_b8._4_4_ = 0;
          GStack_b8.Key = (System_String_o *)0x0;
          Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry___ctor
                    ((Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_o *)&GStack_b8,3,
                     "MainMenu.ToolsPopup.AdvancedConfigurationButton","gear",action,(MethodInfo *)0x0);
          if (4 < (uint)pGVar1->max_length) {
            pGVar1->m_Items[4].fields.Icon = GStack_b8.Icon;
            pGVar1->m_Items[4].fields.Action = GStack_b8.Action;
            pGVar1->m_Items[4].fields.Variant = GStack_b8.Variant;
            *(undefined4 *)&pGVar1->m_Items[4].fields.field_0x4 = GStack_b8._4_4_;
            pGVar1->m_Items[4].fields.Key = GStack_b8.Key;
            Il2CppCodeGenWriteBarrier(&pGVar1->m_Items[4].fields.Key);
            return pGVar1;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgToolsDialog$$SceneEntry
// il2cpp: Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_o Gisketch_Aottg2UI_Game_AottgToolsDialog__SceneEntry (System_String_o* item, System_String_o* icon, int32_t scene, const MethodInfo* method);
// 0x58c3d60

Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_o *
Gisketch_Aottg2UI_Game_AottgToolsDialog__SceneEntry
          (Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry_o *__return_storage_ptr__,System_String_o *item,
          System_String_o *icon,int32_t scene,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgToolsDialog___c__DisplayClass7_0_o *__this;
  System_String_o *key;
  System_Action_o *__this_00;
  System_Action_GisketchActionContext__o *action;
  
  if (Il2CppMethodInitialized_075453f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgToolsDialog_c__DisplayClass7_0_SceneEntry_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgToolsDialog_c__DisplayClass7_0);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.ToolsPopup.");
    Il2CppMethodInitialized_075453f6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgToolsDialog_c__DisplayClass7_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgToolsDialog___c__DisplayClass7_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).scene = scene;
  key = System_String__Concat_52f0320("MainMenu.ToolsPopup.",item,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgToolsDialog_c__DisplayClass7_0_SceneEntry_b__0,
             (MethodInfo *)0x0);
  action = Gisketch_Aottg2UI_Game_AottgButtonListDialog__CloseThen(__this_00,(MethodInfo *)0x0);
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).Key = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Icon = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Action = (System_Action_GisketchActionContext__o *)0x0;
  Gisketch_Aottg2UI_Game_AottgButtonListDialog_Entry___ctor
            (__return_storage_ptr__,3,key,icon,action,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgToolsDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgToolsDialog___ctor (Gisketch_Aottg2UI_Game_AottgToolsDialog_o* __this, const MethodInfo* method);
// 0x58c3e80

void Gisketch_Aottg2UI_Game_AottgToolsDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgToolsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgButtonListDialog___ctor
            ((Gisketch_Aottg2UI_Game_AottgButtonListDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


