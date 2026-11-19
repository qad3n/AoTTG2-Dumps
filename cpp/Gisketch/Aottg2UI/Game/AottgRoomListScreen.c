// Type: Gisketch.Aottg2UI.Game.AottgRoomListScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgRoomListScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgRoomListScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListScreen___c___cctor (const MethodInfo* method);
// 0x58d17b0

void Gisketch_Aottg2UI_Game_AottgRoomListScreen___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545473 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c);
    Il2CppMethodInitialized_07545473 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgRoomListScreen___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgRoomListScreen___c_o* __this, const MethodInfo* method);
// 0x58d1820

void Gisketch_Aottg2UI_Game_AottgRoomListScreen___c___ctor
               (Gisketch_Aottg2UI_Game_AottgRoomListScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListScreen.<>c$$<BuildContent>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListScreen___c___BuildContent_b__10_0 (Gisketch_Aottg2UI_Game_AottgRoomListScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* list, const MethodInfo* method);
// 0x58d1830

void Gisketch_Aottg2UI_Game_AottgRoomListScreen___c___BuildContent_b__10_0
               (Gisketch_Aottg2UI_Game_AottgRoomListScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *list,MethodInfo *method)

{
  uint32_t uVar1;
  MethodInfo *pMVar2;
  
  pMVar2 = (MethodInfo *)list;
  if (Il2CppMethodInitialized_07545474 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Il2CppMethodInitialized_07545474 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    Gisketch_Aottg2UI_Game_AottgRoomList__BuildHeader(list,pMVar2);
  }
  else {
    Gisketch_Aottg2UI_Game_AottgRoomList__BuildHeader(list,pMVar2);
  }
  if (list == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar2 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Code_AottgUi__Separator
            (list,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgRoomList__Build(list,pMVar2);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRoomListScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgRoomListScreen_o* __this, const MethodInfo* method);
// 0x58d0d80

System_String_o *
Gisketch_Aottg2UI_Game_AottgRoomListScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgRoomListScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754546d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_0754546d = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgRoomListScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRoomListScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgRoomListScreen_o* __this, const MethodInfo* method);
// 0x58d0db0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRoomListScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgRoomListScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754546e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_0754546e = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomListScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListScreen__Build (Gisketch_Aottg2UI_Game_AottgRoomListScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58d0e80

void Gisketch_Aottg2UI_Game_AottgRoomListScreen__Build
               (Gisketch_Aottg2UI_Game_AottgRoomListScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_o *__this_03;
  Gisketch_Aottg2UI_Game_AottgRoomListScreen_c *method_00;
  
  if (Il2CppMethodInitialized_0754546f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_BuildContent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerSettingsPopup.Lobby");
    il2cpp_codegen_initialize_runtime_metadata(&"menuStatusText");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-status");
    Il2CppMethodInitialized_0754546f = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen);
  }
  options = Gisketch_Aottg2UI_Game_AottgRoomListScreen__Options((MethodInfo *)method_00);
  footerOptions = Gisketch_Aottg2UI_Game_AottgRoomListScreen__FooterOptions((MethodInfo *)method_00);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
            (__this_00,"MainMenu.MultiplayerSettingsPopup.Lobby",options,footerOptions,120.0,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_BuildContent,
             (MethodInfo_4A81BE0 *)0x0);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor
            (__this_02,__this_00,__this_01,(System_Action_AottgUi__o *)0x0,0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel);
  pSVar2 = "room-list-status";
  pSVar1 = "menuStatusText";
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_03,(MethodInfo *)0x0);
  (__this_03->fields)._id = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields)._id);
  (__this_03->fields)._style = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields)._style);
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_03,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListScreen$$Options
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgRoomListScreen__Options (const MethodInfo* method);
// 0x58d1040

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgRoomListScreen__Options(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_58;
  
  if (Il2CppMethodInitialized_07545470 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Create");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer.room-list.create");
    il2cpp_codegen_initialize_runtime_metadata(&"create");
    il2cpp_codegen_initialize_runtime_metadata(&"plus");
    Il2CppMethodInitialized_07545470 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
  local_58.fields.Searchable = false;
  local_58.fields._49_7_ = 0;
  local_58.fields.Tooltip = (System_String_o *)0x0;
  local_58.fields.ActionId = (System_String_o *)0x0;
  local_58.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_58.fields.TextKey = (System_String_o *)0x0;
  local_58.fields.Icon = (System_String_o *)0x0;
  local_58.fields._text = (System_String_o *)0x0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            (&local_58,"create","Common.Create","multiplayer.room-list.create","plus"
             ,false,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pGVar1->m_Items[0].fields.StackedOptions = local_58.fields.StackedOptions;
  pGVar1->m_Items[0].fields.Searchable = local_58.fields.Searchable;
  *(undefined7 *)&pGVar1->m_Items[0].fields.field_0x31 = local_58.fields._49_7_;
  pGVar1->m_Items[0].fields.Tooltip = local_58.fields.Tooltip;
  pGVar1->m_Items[0].fields.ActionId = local_58.fields.ActionId;
  pGVar1->m_Items[0].fields.Action = local_58.fields.Action;
  pGVar1->m_Items[0].fields.TextKey = local_58.fields.TextKey;
  pGVar1->m_Items[0].fields.Icon = local_58.fields.Icon;
  pGVar1->m_Items[0].fields._text = local_58.fields._text;
  pGVar1->m_Items[0].fields.Id = local_58.fields.Id;
  Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomListScreen$$FooterOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgRoomListScreen__FooterOptions (const MethodInfo* method);
// 0x58d1160

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgRoomListScreen__FooterOptions(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_58;
  
  if (Il2CppMethodInitialized_07545471 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"exitLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer.room-list.back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_07545471 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
  local_58.fields.Searchable = false;
  local_58.fields._49_7_ = 0;
  local_58.fields.Tooltip = (System_String_o *)0x0;
  local_58.fields.ActionId = (System_String_o *)0x0;
  local_58.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_58.fields.TextKey = (System_String_o *)0x0;
  local_58.fields.Icon = (System_String_o *)0x0;
  local_58.fields._text = (System_String_o *)0x0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            (&local_58,"back","Common.Back","multiplayer.room-list.back","exitLeft"
             ,false,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pGVar1->m_Items[0].fields.StackedOptions = local_58.fields.StackedOptions;
  pGVar1->m_Items[0].fields.Searchable = local_58.fields.Searchable;
  *(undefined7 *)&pGVar1->m_Items[0].fields.field_0x31 = local_58.fields._49_7_;
  pGVar1->m_Items[0].fields.Tooltip = local_58.fields.Tooltip;
  pGVar1->m_Items[0].fields.ActionId = local_58.fields.ActionId;
  pGVar1->m_Items[0].fields.Action = local_58.fields.Action;
  pGVar1->m_Items[0].fields.TextKey = local_58.fields.TextKey;
  pGVar1->m_Items[0].fields.Icon = local_58.fields.Icon;
  pGVar1->m_Items[0].fields._text = local_58.fields._text;
  pGVar1->m_Items[0].fields.Id = local_58.fields.Id;
  Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomListScreen$$BuildContent
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListScreen__BuildContent (Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x58d1280

void Gisketch_Aottg2UI_Game_AottgRoomListScreen__BuildContent
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgCustomServerWarning_o *__this;
  Gisketch_Aottg2UI_Game_AottgRoomListScreen___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  
  if (Il2CppMethodInitialized_07545472 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCustomServerWarning);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c_BuildContent_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgRoomListRefresher");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-list");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-refresher");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list-custom-warning");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_07545472 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCustomServerWarning);
  pSVar1 = "room-list-custom-warning";
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._placement = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._placement);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c);
    }
    pSVar1 = "clear";
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c->static_fields;
    __this_00 = pGVar2->__9__10_0;
    if (__this_00 == (System_Action_AottgUi__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c);
        pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c->static_fields;
      }
      object = (Il2CppObject *)pGVar2->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c_BuildContent_b__10_0,
                 (MethodInfo_4A81BE0 *)0x0);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c->static_fields;
      pGVar2->__9__10_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&pGVar2->__9__10_0);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,pSVar1,__this_00,"room-list-list",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "AottgRoomListRefresher";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).type);
      (__this_01->fields).id = "room-list-refresher";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).id);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          "Absolute",(System_String_o *)0x0,0.0,pGVar3,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (__this_01->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout);
      Gisketch_Aottg2UI_Code_AottgUi__Add(content,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomListScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListScreen___cctor (const MethodInfo* method);
// 0x58d1610

void Gisketch_Aottg2UI_Game_AottgRoomListScreen___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgRoomListRefresher__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomListScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomListScreen___ctor (Gisketch_Aottg2UI_Game_AottgRoomListScreen_o* __this, const MethodInfo* method);
// 0x58d17a0

void Gisketch_Aottg2UI_Game_AottgRoomListScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgRoomListScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


