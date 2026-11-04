// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangeEmoteStickerDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___cctor (const MethodInfo* method);
// 0x181e27960

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o *__this;
  
  if (Il2CppMethodInitialized_184344c50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c);
    Il2CppMethodInitialized_184344c50 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___ctor(Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$<BuildBody>b__7_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___BuildBody_b__7_0 (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x181e227a0

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___BuildBody_b__7_0
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *item,MethodInfo *method)

{
  System_Action_GisketchActionContext__string__o *pSVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_184344c51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEmoteSlotActions);
    Il2CppMethodInitialized_184344c51 = '\x01';
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEmoteSlotActions->static_fields->SaveSticker;
  if (pSVar1 != (System_Action_GisketchActionContext__string__o *)0x0) {
    local_28 = *(undefined4 *)&(context->fields).ElementId;
    uStack_24 = *(undefined4 *)((longlong)&(context->fields).ElementId + 4);
    uStack_20 = *(undefined4 *)&(context->fields).GameObject;
    uStack_1c = *(undefined4 *)((longlong)&(context->fields).GameObject + 4);
    local_18 = *(undefined4 *)&(context->fields).Node;
    uStack_14 = *(undefined4 *)((longlong)&(context->fields).Node + 4);
    iStack_10 = (context->fields).InputSource;
    uStack_c = *(undefined4 *)&(context->fields).field_0x1c;
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,&local_28,(item->fields).Key,(pSVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x181e0ec90

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344c4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Change Emote Sticker");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.ChangeEmoteSticker");
    Il2CppMethodInitialized_184344c4c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("MainMenu.Profile.ChangeEmoteSticker","Change Emote Sticker",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x181e0ec60

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344c4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/chat");
    Il2CppMethodInitialized_184344c4d = '\x01';
  }
  return "material-icons/chat";
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x181e0eb30

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184344c4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344c4e = '\x01';
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
// 0x181e0e920

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *id;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_String_o *searchPlaceholder;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_01;
  
  if (Il2CppMethodInitialized_184344c4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c_BuildBody_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SearchStickers");
    il2cpp_codegen_initialize_runtime_metadata(&"emote-sticker-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"Search stickers");
    Il2CppMethodInitialized_184344c4f = '\x01';
  }
  presets = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets((MethodInfo *)0x0);
  items = Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems(presets,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  searchPlaceholder =
       Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                 ("MainMenu.Profile.SearchStickers","Search stickers",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c);
  }
  id = "emote-sticker-picker";
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields->__9__7_0;
  if (__this_00 == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c);
    }
    object = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields->__9;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem)
    ;
    System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c_BuildBody_b__7_0,
               (MethodInfo_1468040 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields->__9__7_0 = __this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c->static_fields->__9__7_0,
               __this_00);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
            (__this_01,id,items,4,132.0,132.0,68.0,68.0,searchPlaceholder,__this_00,420.0,true,false,
             (MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___ctor(Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


