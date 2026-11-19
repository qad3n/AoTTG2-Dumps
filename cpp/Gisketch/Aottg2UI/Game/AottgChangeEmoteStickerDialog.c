// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgChangeEmoteStickerDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___cctor (const MethodInfo* method);
// 0x58f5b40

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075455c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c);
    Il2CppMethodInitialized_075455c3 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o* __this, const MethodInfo* method);
// 0x58f5bb0

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$<BuildBody>b__7_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___BuildBody_b__7_0 (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x58f5bc0

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___BuildBody_b__7_0
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  System_Action_GisketchActionContext__string__o *pSVar1;
  code *vtableDispatch;
  
  if (Il2CppMethodInitialized_075455c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEmoteSlotActions);
    Il2CppMethodInitialized_075455c4 = '\x01';
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEmoteSlotActions->static_fields->SaveSticker;
  if (pSVar1 == (System_Action_GisketchActionContext__string__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar1->fields).method_code,item.fields.Key,(pSVar1->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x58f57d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075455bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.ChangeEmoteSticker");
    Il2CppMethodInitialized_075455bf = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Profile.ChangeEmoteSticker",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x58f5830

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075455c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/chat");
    Il2CppMethodInitialized_075455c0 = '\x01';
  }
  return "material-icons/chat";
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x58f5860

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_075455c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075455c1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  }
  fVar2 = Gisketch_Aottg2UI_Code_GisketchGridPicker__PreferredWidthFor(4,132.0,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar2 + 36.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58f5960

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *id;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_String_o *searchPlaceholder;
  Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_StaticFields *pGVar1;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_01;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_075455c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c_BuildBody_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SearchStickers");
    ppSVar2 = &"emote-sticker-picker";
    il2cpp_codegen_initialize_runtime_metadata(&"emote-sticker-picker");
    Il2CppMethodInitialized_075455c2 = '\x01';
    __this = (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *)ppSVar2;
  }
  presets = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets((MethodInfo *)__this);
  items = Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems(presets,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  searchPlaceholder =
       Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Profile.SearchStickers",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c);
  }
  id = "emote-sticker-picker";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields;
  __this_00 = pGVar1->__9__7_0;
  if (__this_00 == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem)
    ;
    System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c_BuildBody_b__7_0,
               (MethodInfo_4A88DC0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields;
    pGVar1->__9__7_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__7_0);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
            (__this_01,id,items,4,132.0,132.0,68.0,68.0,searchPlaceholder,__this_00,420.0,true,false,true,
             (MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x58f5b30

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


