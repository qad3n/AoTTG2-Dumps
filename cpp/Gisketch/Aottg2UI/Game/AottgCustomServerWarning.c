// Type: Gisketch.Aottg2UI.Game.AottgCustomServerWarning
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCustomServerWarning.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCustomServerWarning___ctor (Gisketch_Aottg2UI_Game_AottgCustomServerWarning_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* placement, const MethodInfo* method);
// 0x58c6380

void Gisketch_Aottg2UI_Game_AottgCustomServerWarning___ctor
               (Gisketch_Aottg2UI_Game_AottgCustomServerWarning_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *placement,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._placement = placement;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._placement);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Build (Gisketch_Aottg2UI_Game_AottgCustomServerWarning_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58c63c0

void Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Build
               (Gisketch_Aottg2UI_Game_AottgCustomServerWarning_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  float fVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_0754540c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCustomServerWarning_Build_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"card");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer.customServerWarning.visible");
    Il2CppMethodInitialized_0754540c = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,14.0,14.0,14.0,0.0,0.0,
                      0.0,0.0,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._placement;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_058c65f6;
    (layout->fields).alignSelf = (pGVar1->fields).alignSelf;
    Il2CppCodeGenWriteBarrier(&(layout->fields).alignSelf);
    pGVar1 = (__this->fields)._placement;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_058c65f6;
    (layout->fields).width = (pGVar1->fields).width;
    Il2CppCodeGenWriteBarrier(&(layout->fields).width);
    pGVar1 = (__this->fields)._placement;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_058c65f6;
    fVar2 = (pGVar1->fields).offsetY;
    (layout->fields).offsetX = (pGVar1->fields).offsetX;
    (layout->fields).offsetY = fVar2;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCustomServerWarning_Build_b__8_0,
             (MethodInfo_4A81BE0 *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"card",__this_00,(__this->fields)._id,layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_01->fields).visible = "multiplayer.customServerWarning.visible";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).bind = __this_01;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        return;
      }
    }
  }
label_058c65f6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$Sync
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Sync (const MethodInfo* method);
// 0x58c6600

void Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Sync(MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754540d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer.customServerWarning.text");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer.customServerWarning.visible");
    Il2CppMethodInitialized_0754540d = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__get_Root((MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this = (pGVar1->fields)._State_k__BackingField;
    if (__this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    value = Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Message(method_00);
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,"multiplayer.customServerWarning.text",value,(MethodInfo *)0x0);
    if (value != (System_String_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                (__this,"multiplayer.customServerWarning.visible",0 < (value->fields)._stringLength,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$Message
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Message (const MethodInfo* method);
// 0x58c66a0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c674b: lea rax, [rip + 0x1a1281e]  ; "CustomAppIdAndLobbyActive"
// asm:   0x58c6752: mov r14, qword ptr [rax]
// asm:   0x58c6755: cmp byte ptr [rip + 0x1c7ecb3], 0
// asm:   0x58c675c: jne 0x58c677d
// asm:   0x58c6854: lea rax, [rip + 0x1a1274d]  ; "CustomLobbyActive"
// asm:   0x58c685b: mov r14, qword ptr [rax]
// asm:   0x58c685e: cmp byte ptr [rip + 0x1c7ebaa], 0
// asm:   0x58c686b: jmp 0x58c677d

System_String_o * Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Message(MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Settings_MultiplayerSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  System_String_o *str1;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_0754540e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAppIdActive");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomAppIdAndLobbyActive");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomLobbyActive");
    Il2CppMethodInitialized_0754540e = '\x01';
  }
  pSVar7 = "CustomAppIdActive";
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (((pSVar3 != (Settings_MultiplayerSettings_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).LobbyMode, pSVar4 != (Settings_IntSetting_o *)0x0)) &&
     (pSVar5 = (pSVar3->fields).AppIdMode, pSVar5 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar4->fields)._value;
    iVar2 = (pSVar5->fields)._value;
    if ((iVar1 != 1) || (str1 = "CustomAppIdAndLobbyActive", iVar2 != 1)) {
      if (iVar2 == 1) {
        if (Il2CppMethodInitialized_0754540f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerMapPopup.");
          Il2CppMethodInitialized_0754540f = '\x01';
        }
        pSVar7 = System_String__Concat_52f0320("MainMenu.MultiplayerMapPopup.",pSVar7,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar7,(MethodInfo *)0x0);
        return pSVar7;
      }
      str1 = "CustomLobbyActive";
      if (iVar1 != 1) {
        return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
    }
    if (Il2CppMethodInitialized_0754540f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerMapPopup.");
      Il2CppMethodInitialized_0754540f = '\x01';
    }
    pSVar7 = System_String__Concat_52f0320("MainMenu.MultiplayerMapPopup.",str1,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar7,(MethodInfo *)0x0);
    pSVar6 = (pSVar3->fields).CustomLobby;
    if (pSVar6 != (Settings_StringSetting_o *)0x0) {
      pSVar7 = System_String__Format(pSVar7,(Il2CppObject *)(pSVar6->fields)._value,(MethodInfo *)0x0);
      return pSVar7;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Text (System_String_o* item, const MethodInfo* method);
// 0x58c68a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Text(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754540f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.MultiplayerMapPopup.");
    Il2CppMethodInitialized_0754540f = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("MainMenu.MultiplayerMapPopup.",item,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCustomServerWarning$$<Build>b__8_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCustomServerWarning___Build_b__8_0 (Gisketch_Aottg2UI_Game_AottgCustomServerWarning_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x58c6920

void Gisketch_Aottg2UI_Game_AottgCustomServerWarning___Build_b__8_0
               (Gisketch_Aottg2UI_Game_AottgCustomServerWarning_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  MethodInfo *method_00;
  System_Nullable_bool__Fields local_30 [4];
  
  if (Il2CppMethodInitialized_07545410 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"icon");
    il2cpp_codegen_initialize_runtime_metadata(&"-border");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"-icon");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer.customServerWarning.text");
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"calloutBorderWarning");
    il2cpp_codegen_initialize_runtime_metadata(&"-text");
    Il2CppMethodInitialized_07545410 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320((__this->fields)._id,"-border",(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(7.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Stretch",(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (card,"calloutBorderWarning",(System_Action_AottgUi__o *)0x0,pSVar1,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_52f0320((__this->fields)._id,"-icon",(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (card,"warning","icon",pSVar1,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      method_00 = (MethodInfo *)&(pGVar5->fields).layout;
      (pGVar5->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier((void **)method_00);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgCustomServerWarning__Message(method_00);
      id = System_String__Concat_52f0320((__this->fields)._id,"-text",(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (card,pSVar1,"text",id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      local_30[0].hasValue = false;
      local_30[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_30,true,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).richText.fields = local_30[0];
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar2,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,1.0,(MethodInfo *)0x0);
        (pGVar5->fields).layout = pGVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (__this_00->fields).text = "multiplayer.customServerWarning.text";
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
          (pGVar5->fields).bind = __this_00;
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


