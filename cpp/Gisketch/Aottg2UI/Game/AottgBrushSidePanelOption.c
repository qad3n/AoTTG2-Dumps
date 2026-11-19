// Type: Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgBrushSidePanelOption.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this, System_String_o* id, System_String_o* textKey, System_String_o* actionId, System_String_o* icon, bool searchable, System_String_o* tooltip, const MethodInfo* method);
// 0x5914130

void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *__this,System_String_o *id,
               System_String_o *textKey,System_String_o *actionId,System_String_o *icon,bool searchable,
               System_String_o *tooltip,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe8;
  
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_5814160
            (__this,id,textKey,(System_String_o *)0x0,actionId,(System_Action_GisketchActionContext__o *)0x0,
             icon,searchable,tooltip,(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0,
             in_stack_ffffffffffffffe8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this, System_String_o* id, System_String_o* textKey, System_Action_GisketchActionContext__o* action, System_String_o* icon, bool searchable, System_String_o* tooltip, const MethodInfo* method);
// 0x5914260

void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_5814260
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *__this,System_String_o *id,
               System_String_o *textKey,System_Action_GisketchActionContext__o *action,System_String_o *icon,
               bool searchable,System_String_o *tooltip,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe8;
  
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_5814160
            (__this,id,textKey,(System_String_o *)0x0,(System_String_o *)0x0,action,icon,searchable,tooltip,
             (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0,in_stack_ffffffffffffffe8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this, System_String_o* id, System_String_o* textKey, System_String_o* text, System_String_o* actionId, System_Action_GisketchActionContext__o* action, System_String_o* icon, bool searchable, System_String_o* tooltip, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* stackedOptions, const MethodInfo* method);
// 0x5914160

void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_5814160
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *__this,System_String_o *id,
               System_String_o *textKey,System_String_o *text,System_String_o *actionId,
               System_Action_GisketchActionContext__o *action,System_String_o *icon,bool searchable,
               System_String_o *tooltip,Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *stackedOptions
               ,MethodInfo *method)

{
  if (id == (System_String_o *)0x0) {
    id = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Id);
  (__this->fields).TextKey = textKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TextKey);
  (__this->fields)._text = text;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).ActionId = actionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ActionId);
  (__this->fields).Action = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Action);
  (__this->fields).Icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon);
  (__this->fields).Searchable = searchable;
  (__this->fields).Tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Tooltip);
  (__this->fields).StackedOptions = stackedOptions;
  Il2CppCodeGenWriteBarrier(&(__this->fields).StackedOptions);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$get_Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__get_Text (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this, const MethodInfo* method);
// 0x5914290

System_String_o *
Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__get_Text
          (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075456d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075456d8 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).TextKey,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (__this->fields)._text;
    if (pSVar2 == (System_String_o *)0x0) {
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    return pSVar2;
  }
  pSVar2 = (__this->fields).TextKey;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$WithText
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__WithText (System_String_o* id, System_String_o* text, System_Action_GisketchActionContext__o* action, System_String_o* icon, const MethodInfo* method);
// 0x5914320

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *
Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__WithText
          (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *__return_storage_ptr__,System_String_o *id,
          System_String_o *text,System_Action_GisketchActionContext__o *action,System_String_o *icon,
          MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffe8;
  
  *(undefined8 *)&(__return_storage_ptr__->fields).Searchable = 0;
  (__return_storage_ptr__->fields).Tooltip = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).ActionId = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Action = (System_Action_GisketchActionContext__o *)0x0;
  (__return_storage_ptr__->fields).TextKey = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Icon = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._text = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Id = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).StackedOptions =
       (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_5814160
            (__return_storage_ptr__,id,(System_String_o *)0x0,text,(System_String_o *)0x0,action,icon,false,
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0,
             in_stack_ffffffffffffffe8);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$Stack
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__Stack (System_String_o* id, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* options, const MethodInfo* method);
// 0x5914370

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *
Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__Stack
          (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *__return_storage_ptr__,System_String_o *id,
          Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options,MethodInfo *method)

{
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_075456d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    Il2CppMethodInitialized_075456d9 = '\x01';
  }
  if (options == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    options = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,0);
  }
  *(undefined8 *)&(__return_storage_ptr__->fields).Searchable = 0;
  (__return_storage_ptr__->fields).Tooltip = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).ActionId = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Action = (System_Action_GisketchActionContext__o *)0x0;
  (__return_storage_ptr__->fields).TextKey = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Icon = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._text = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Id = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).StackedOptions =
       (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor_5814160
            (__return_storage_ptr__,id,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
             (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,false,(System_String_o *)0x0
             ,options,in_stack_ffffffffffffffd8);
  return __return_storage_ptr__;
}


