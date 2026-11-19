// Type: Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgRoomPasswordDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c___cctor (const MethodInfo* method);
// 0x58d26c0

void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545484 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c);
    Il2CppMethodInitialized_07545484 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c_o* __this, const MethodInfo* method);
// 0x58d2730

void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog.<>c$$<BuildBody>b__9_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c___BuildBody_b__9_0 (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58d2740

void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c___BuildBody_b__9_0
               (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545485 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog);
    Il2CppMethodInitialized_07545485 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Actions_GisketchActionContext__get_InputText(&context,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog->static_fields->_password = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog->static_fields->_password);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__get_Title (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o* __this, const MethodInfo* method);
// 0x58d1e90

System_String_o *
Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754547e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Password");
    Il2CppMethodInitialized_0754547e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Password",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o* __this, const MethodInfo* method);
// 0x58d1ef0

bool Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o* __this, const MethodInfo* method);
// 0x58d1f00

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754547f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_0754547f = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58d1fc0

void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c_StaticFields *pGVar2;
  System_Action_GisketchActionContext__o *__this_00;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  MethodInfo *method_00;
  System_Nullable_bool__Fields aSStack_48 [4];
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_07545480 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c_BuildBody_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-room-password-room");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer-room-password-input");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Password");
    Il2CppMethodInitialized_07545480 = '\x01';
  }
  method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog->static_fields->_password =
       (System_String_o *)method_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog->static_fields->_password);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    if (g_data_075454e8 != '\0') goto label_058d20f7;
label_058d22de:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    g_data_075454e8 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor != 0)
    goto label_058d2107;
label_058d2301:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_PasswordRoom_k__BackingField ==
        (Photon_Realtime_RoomInfo_o *)0x0) goto label_058d2119;
label_058d231b:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
      if (g_data_075454e8 != '\0') goto label_058d2335;
label_058d23ef:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
      g_data_075454e8 = '\x01';
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (g_data_075454e8 == '\0') goto label_058d23ef;
label_058d2335:
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgRoomList__RoomTitle
                       (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->
                        _PasswordRoom_k__BackingField,method_00);
    if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_058d241f;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (body,pSVar3,"text","multiplayer-room-password-room",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    aSStack_48[0].hasValue = false;
    aSStack_48[0].value = false;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o *)aSStack_48,true,
               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_058d241f;
    (pGVar4->fields).richText.fields = aSStack_48[0];
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075454e8 == '\0') goto label_058d22de;
label_058d20f7:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0)
    goto label_058d2301;
label_058d2107:
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->static_fields->_PasswordRoom_k__BackingField !=
        (Photon_Realtime_RoomInfo_o *)0x0) goto label_058d231b;
label_058d2119:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSStack_38 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("Common.Password",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c);
  }
  id = "multiplayer-room-password-input";
  pSVar3 = "inputField";
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c->static_fields;
  __this_00 = pGVar2->__9__9_0;
  if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
    pGStack_40 = body;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c_BuildBody_b__9_0,
               (MethodInfo_4A803E0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c->static_fields;
    pGVar2->__9__9_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__9_0);
    body = pGStack_40;
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__InputField
              (body,id,pSStack_38,3,pSVar3,layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               __this_00,0.0,0,(System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_058d241f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58d2430

void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *__this_00;
  
  if (Il2CppMethodInitialized_07545481 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_Join);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Join");
    Il2CppMethodInitialized_07545481 = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Back","overlay.close",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_Join,
             (MethodInfo_4A803E0 *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_52658f0
            (footer,"Common.Join",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$Join
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__Join (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58d2500

void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog__Join
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  System_String_o *pSVar3;
  System_String_o *message;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07545482 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerPasswordPopup.IncorrectPassword");
    Il2CppMethodInitialized_07545482 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog);
  }
  pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog->static_fields->_password;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
    bVar1 = Gisketch_Aottg2UI_Game_AottgRoomList__TryJoinPasswordRoom(pSVar3,in_RSI);
  }
  else {
    bVar1 = Gisketch_Aottg2UI_Game_AottgRoomList__TryJoinPasswordRoom(pSVar3,in_RSI);
  }
  if (!bVar1) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("Common.Password",(MethodInfo *)0x0);
    message = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("MainMenu.MultiplayerPasswordPopup.IncorrectPassword",(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomList);
      method_00 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Game_AottgRoomList__Warn(pSVar3,message,method_00);
    return;
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this = (pGVar2->fields)._Overlays_k__BackingField;
  if (__this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this,true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___ctor (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o* __this, const MethodInfo* method);
// 0x58d2650

void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___cctor (const MethodInfo* method);
// 0x58d2660

void Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545483 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog);
    Il2CppMethodInitialized_07545483 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog->static_fields->_password =
       (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog->static_fields->_password);
  return;
}


