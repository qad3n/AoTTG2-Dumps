// Type: Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgRoomListOptionsPopover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x58d1bc0

void Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover.<>c__DisplayClass4_0$$<Option>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___c__DisplayClass4_0___Option_b__0 (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58d1be0

void Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___c__DisplayClass4_0___Option_b__0
               (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  bool value;
  Gisketch_Aottg2UI_Game_AottgRoomList_c *method_00;
  
  if (Il2CppMethodInitialized_07545478 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07545478 = '\x01';
  }
  __this_00 = (__this->fields).setting;
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    value = false;
  }
  else {
    value = System_String__op_Equality
                      (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
  }
  if (__this_00 == (Settings_BoolSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)__this_00,value,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Gisketch_Aottg2UI_Game_AottgRoomList__Refresh((MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgRoomList__Refresh((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover__get_RootLayout (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_o* __this, const MethodInfo* method);
// 0x58d18c0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545475 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545475 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(320.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover__Build (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58d1990

void Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover__Build
               (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07545476 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerFilterPopup.ShowFull");
    il2cpp_codegen_initialize_runtime_metadata(&"show-full");
    il2cpp_codegen_initialize_runtime_metadata(&"show-password");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerFilterPopup.ShowPassword");
    Il2CppMethodInitialized_07545476 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
  }
  Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover__Option
            (ui,"show-full","MainMenu.MultiplayerFilterPopup.ShowFull",
             TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->ShowFull,in_R8);
  Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover__Option
            (ui,"show-password","MainMenu.MultiplayerFilterPopup.ShowPassword",
             TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->ShowPassword,in_R8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover$$Option
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover__Option (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* labelKey, Settings_BoolSetting_o* setting, const MethodInfo* method);
// 0x58d1a60

void Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover__Option
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_o *labelKey,
               Settings_BoolSetting_o *setting,MethodInfo *method)

{
  bool value;
  Settings_BoolSetting_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___c__DisplayClass4_0_o *__this;
  System_String_o *id_00;
  System_String_o *text;
  System_Action_GisketchActionContext__o *__this_00;
  
  if (Il2CppMethodInitialized_07545477 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_c__DisplayClass4_0_Option_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-options-");
    Il2CppMethodInitialized_07545477 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_c__DisplayClass4_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___c__DisplayClass4_0_o *)0x0) {
    (__this->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this->fields).setting);
    id_00 = System_String__Concat_52f0320("room-list-options-",id,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(labelKey,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).setting;
    if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
      value = (pSVar1->fields)._value;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_c__DisplayClass4_0_Option_b__0,
                 (MethodInfo_4A803E0 *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                  (ui,id_00,text,value,__this_00,(System_String_o *)0x0,(System_String_o *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___ctor (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_o* __this, const MethodInfo* method);
// 0x58d1bd0

void Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover___ctor
               (Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgPopover___ctor
            ((Gisketch_Aottg2UI_Code_AottgPopover_o *)__this,(MethodInfo *)0x0);
  return;
}


