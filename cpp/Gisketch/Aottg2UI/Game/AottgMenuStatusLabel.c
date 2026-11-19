// Type: Gisketch.Aottg2UI.Game.AottgMenuStatusLabel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMenuStatusLabel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMenuStatusLabel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMenuStatusLabel___ctor (Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_o* __this, System_String_o* id, System_String_o* style, const MethodInfo* method);
// 0x58c1b10

void Gisketch_Aottg2UI_Game_AottgMenuStatusLabel___ctor
               (Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_o *__this,System_String_o *id,
               System_String_o *style,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMenuStatusLabel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMenuStatusLabel__Build (Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58c29a0

void Gisketch_Aottg2UI_Game_AottgMenuStatusLabel__Build
               (Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075453e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_Build_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"-layer");
    Il2CppMethodInitialized_075453e7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_Build_b__8_0,
             (MethodInfo_4A81BE0 *)0x0);
  id = System_String__Concat_52f0320((__this->fields)._id,"-layer",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch","Absolute"
                      ,(System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,20.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMenuStatusLabel$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMenuStatusLabel__Refresh (Gisketch_Aottg2UI_State_GisketchUIState_o* state, const MethodInfo* method);
// 0x58c2b30

void Gisketch_Aottg2UI_Game_AottgMenuStatusLabel__Refresh
               (Gisketch_Aottg2UI_State_GisketchUIState_o *state,MethodInfo *method)

{
  System_String_o *value;
  MethodInfo *method_00;
  float fVar1;
  
  if (Il2CppMethodInitialized_075453e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel);
    il2cpp_codegen_initialize_runtime_metadata(&"menu.status.text");
    il2cpp_codegen_initialize_runtime_metadata(&"menu.status.visible");
    Il2CppMethodInitialized_075453e8 = '\x01';
  }
  if (state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    fVar1 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel->static_fields->_nextRefreshTime <= fVar1) {
      method_00 = (MethodInfo *)0x0;
      fVar1 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel->static_fields->_nextRefreshTime = fVar1 + 0.25;
      value = Gisketch_Aottg2UI_Game_AottgMenuStatusLabel__StatusText(method_00);
      Gisketch_Aottg2UI_State_GisketchUIState__Set(state,"menu.status.text",value,(MethodInfo *)0x0);
      if (value == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                (state,"menu.status.visible",0 < (value->fields)._stringLength,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgMenuStatusLabel$$StatusText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMenuStatusLabel__StatusText (const MethodInfo* method);
// 0x58c2c10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c2e45: mov rbx, r14

System_String_o * Gisketch_Aottg2UI_Game_AottgMenuStatusLabel__StatusText(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_GraphicsSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_String_o *str0;
  System_String_o *str2;
  int32_t local_34;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (Il2CppMethodInitialized_075453e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_ClientState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"room-list");
    il2cpp_codegen_initialize_runtime_metadata(&"server-select");
    il2cpp_codegen_initialize_runtime_metadata(&" Ping:");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS:");
    Il2CppMethodInitialized_075453e9 = '\x01';
  }
  local_34 = 0;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar2 == (Settings_GraphicsSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).ShowFPS, pSVar3 == (Settings_BoolSetting_o *)0x0)) goto label_058c2e97;
  if ((pSVar3->fields)._value == false) {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      if (g_data_075454e5 == '\0') goto label_058c2e67;
label_058c2cfe:
      uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (g_data_075454e5 != '\0') goto label_058c2cfe;
label_058c2e67:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      g_data_075454e5 = '\x01';
      uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    local_34 = TypeInfo_UI_UIManager->static_fields->_lastFPS;
    pSVar5 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_52f0320("FPS:",pSVar5,(MethodInfo *)0x0);
  }
  bVar4 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__IsScreenActive("server-select",(MethodInfo *)0x0);
  if (!bVar4) {
    bVar4 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__IsScreenActive
                      ("room-list",(MethodInfo *)0x0);
    str0 = pSVar5;
    if (!bVar4) goto label_058c2e48;
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  local_20 = Photon_Pun_PhotonNetwork__get_NetworkClientState((MethodInfo *)0x0);
  local_30.klass = (System_Enum_c *)TypeInfo_Photon_Realtime_ClientState;
  local_30.monitor = (void *)0xffffffffffffffff;
  str0 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
  bVar4 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    local_34 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
    str2 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
    str0 = System_String__Concat_5301f10(str0," Ping:",str2,(MethodInfo *)0x0);
  }
  if (pSVar5 == (System_String_o *)0x0) {
label_058c2e97:
    ThrowNullReferenceException();
  }
  if (0 < (pSVar5->fields)._stringLength) {
    str0 = System_String__Concat_5301f10(pSVar5,"\n",str0,(MethodInfo *)0x0);
  }
label_058c2e48:
  return str0;
}


// Gisketch.Aottg2UI.Game.AottgMenuStatusLabel$$<Build>b__8_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMenuStatusLabel___Build_b__8_0 (Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* layer, const MethodInfo* method);
// 0x58c2ea0

void Gisketch_Aottg2UI_Game_AottgMenuStatusLabel___Build_b__8_0
               (Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *layer,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075453ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"menu.status.text");
    il2cpp_codegen_initialize_runtime_metadata(&"menu.status.visible");
    Il2CppMethodInitialized_075453ea = '\x01';
  }
  if (layer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (layer,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                        (__this->fields)._style,(__this->fields)._id,"menu.status.text",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       (pGVar1 = (pGVar2->fields).bind, pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0)
       ) {
      (pGVar1->fields).visible = "menu.status.visible";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).visible);
      return;
    }
  }
  ThrowNullReferenceException();
}


