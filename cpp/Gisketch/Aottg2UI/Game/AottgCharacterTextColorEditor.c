// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorEditor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor.Options$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o __this, System_String_o* pickerId, System_String_o* colorsEnabledKey, bool colorsEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x181e0bc10

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o *__this,
               System_String_o *pickerId,System_String_o *colorsEnabledKey,bool colorsEnabled,
               System_Action_GameObject__o *imported,System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,System_String_o *previewFont,
               MethodInfo *method)

{
  (__this->fields).PickerId = pickerId;
  Il2CppCodeGenWriteBarrier((void **)__this,pickerId);
  (__this->fields).ColorsEnabledKey = colorsEnabledKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ColorsEnabledKey,colorsEnabledKey);
  (__this->fields).Imported = imported;
  (__this->fields).ColorsEnabled = colorsEnabled;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Imported,imported);
  (__this->fields).PreviewEffectType = previewEffectType;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PreviewEffectType,previewEffectType);
  (__this->fields).PreviewEffectColors = previewEffectColors;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PreviewEffectColors,previewEffectColors);
  (__this->fields).PreviewFont = previewFont;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PreviewFont,previewFont);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___cctor (const MethodInfo* method);
// 0x181e04300

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  System_Collections_Generic_Dictionary_string__AottgCharacterTextColorEditor_Options__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_01;
  
  if (Il2CppMethodInitialized_184344bda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_BuildEditor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgCharacterTextColorEditor");
    Il2CppMethodInitialized_184344bda = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options
                        );
  System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options_ctor
            );
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->static_fields->EditorOptions = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->static_fields->EditorOptions,
             __this_00);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_BuildEditor,
             (MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgCharacterTextColorEditor",__this_01,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o* __this, System_String_o* value, System_String_o* pickerId, System_String_o* colorsEnabledKey, bool colorsEnabled, bool inputEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x181e04430

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *__this,System_String_o *value,
               System_String_o *pickerId,System_String_o *colorsEnabledKey,bool colorsEnabled,
               bool inputEnabled,System_Action_GameObject__o *imported,System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,System_String_o *previewFont,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *)0x0) {
    (__this->fields)._value = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._value,value);
    (__this->fields)._pickerId = pickerId;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pickerId,pickerId);
    (__this->fields)._colorsEnabledKey = colorsEnabledKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._colorsEnabledKey,colorsEnabledKey);
    (__this->fields)._colorsEnabled = colorsEnabled;
    (__this->fields)._inputEnabled = inputEnabled;
    (__this->fields)._imported = imported;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._imported,imported);
    (__this->fields)._previewEffectType = previewEffectType;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectType,previewEffectType);
    (__this->fields)._previewEffectColors = previewEffectColors;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectColors,previewEffectColors);
    (__this->fields)._previewFont = previewFont;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._previewFont,previewFont);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__Build (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e03ce0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool bVar1;
  System_Action_GameObject__o *value;
  System_Collections_Generic_Dictionary_string__AottgCharacterTextColorEditor_Options__o *__this_00;
  System_String_o *value_00;
  System_Collections_Generic_IList_string__o *value_01;
  System_String_o *value_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value_03;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_String_o *pSVar5;
  System_Nullable_bool__Fields local_res8 [4];
  Gisketch_Aottg2UI_Code_AottgUi_o *local_res10;
  System_String_o *local_e8;
  System_String_o *pSStack_e0;
  undefined8 uStack_d8;
  System_Action_GameObject__o *pSStack_d0;
  System_String_o *pSStack_c8;
  System_Collections_Generic_IList_string__o *local_c0;
  System_String_o *pSStack_b8;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_b0;
  System_Enum_o local_a8;
  undefined4 local_98;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o local_88;
  
  local_res10 = ui;
  if (Il2CppMethodInitialized_184344bdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"characterTextColorInput");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-text-color-editor");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-text-color-editor-input");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgCharacterTextColorEditor");
    Il2CppMethodInitialized_184344bdb = '\x01';
  }
  local_b0 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                       ((__this->fields)._value,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor);
  }
  pSVar5 = (__this->fields)._colorsEnabledKey;
  bVar1 = (__this->fields)._colorsEnabled;
  value = (__this->fields)._imported;
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->static_fields->EditorOptions;
  value_00 = (__this->fields)._previewEffectType;
  value_01 = (__this->fields)._previewEffectColors;
  value_02 = (__this->fields)._previewFont;
  local_e8 = (__this->fields)._pickerId;
  pSStack_e0 = (System_String_o *)0x0;
  uStack_d8 = 0;
  pSStack_d0 = (System_Action_GameObject__o *)0x0;
  pSStack_c8 = (System_String_o *)0x0;
  local_c0 = (System_Collections_Generic_IList_string__o *)0x0;
  pSStack_b8 = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&local_e8,local_e8);
  pSStack_e0 = pSVar5;
  Il2CppCodeGenWriteBarrier(&pSStack_e0,pSVar5);
  uStack_d8._0_1_ = bVar1;
  pSStack_d0 = value;
  Il2CppCodeGenWriteBarrier(&pSStack_d0,value);
  pSStack_c8 = value_00;
  Il2CppCodeGenWriteBarrier(&pSStack_c8,value_00);
  local_c0 = value_01;
  Il2CppCodeGenWriteBarrier(&local_c0,value_01);
  pSStack_b8 = value_02;
  Il2CppCodeGenWriteBarrier(&pSStack_b8,value_02);
  if (__this_00 !=
      (System_Collections_Generic_Dictionary_string__AottgCharacterTextColorEditor_Options__o *)0x0) {
    local_88.fields.PickerId = local_e8;
    local_88.fields.ColorsEnabledKey = pSStack_e0;
    local_88.fields.ColorsEnabled = uStack_d8._0_1_;
    local_88.fields._17_7_ = uStack_d8._1_7_;
    local_88.fields.Imported = pSStack_d0;
    local_88.fields.PreviewEffectType = pSStack_c8;
    local_88.fields.PreviewEffectColors = local_c0;
    local_88.fields.PreviewFont = pSStack_b8;
    System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)"profile-character-text-color-editor",&local_88,
               (MethodInfo_1488DD0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options_set_Item
              );
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "AottgCharacterTextColorEditor";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).type,"AottgCharacterTextColorEditor");
      (__this_01->fields).id = "profile-character-text-color-editor";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).id,"profile-character-text-color-editor");
      pSVar5 = (__this->fields)._value;
      (__this_01->fields).value = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).value,pSVar5);
      (__this_01->fields).style = "clear";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).style,"clear");
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (__this_01->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout,pGVar4);
      value_03 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
      if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_02->fields).type = "InputField";
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).type,"InputField");
        (__this_02->fields).id = "profile-character-text-color-editor-input";
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).id,"profile-character-text-color-editor-input");
        pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        (__this_02->fields).placeholder = pSVar5;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).placeholder,pSVar5);
        local_a8.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
        local_a8.monitor = &g_data_ffffffffffffffff;
        local_98 = 0;
        pSVar5 = System_Enum__ToString(&local_a8,(MethodInfo *)0x0);
        (__this_02->fields).inputType = pSVar5;
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).inputType,pSVar5);
        (__this_02->fields).style = "characterTextColorInput";
        Il2CppCodeGenWriteBarrier(&(__this_02->fields).style,"characterTextColorInput");
        if (local_b0 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
          pSVar5 = (local_b0->fields).Text;
          (__this_02->fields).value = pSVar5;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).value,pSVar5);
          local_res8[0].hasValue = false;
          local_res8[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Data_SqlTypes_SqlByte_o *)local_res8,(__this->fields)._inputEnabled,
                     MethodInfo_System_Nullable_bool_ctor);
          (__this_02->fields).enabled.fields = local_res8[0];
          (__this_02->fields).formKey = "profile-character-text-color-editor-input";
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).formKey,"profile-character-text-color-editor-input");
          (__this_02->fields).formLabel = "Text";
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).formLabel,"Text");
          (__this_02->fields).maxCharacters = 0x117;
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this_02->fields).layout = pGVar4;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).layout,pGVar4);
          if (value_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)value_03->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            value_03->m_Items[0] = __this_02;
            Il2CppCodeGenWriteBarrier(value_03->m_Items,__this_02);
            (__this_01->fields).children = value_03;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).children,value_03);
            if (local_res10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
              Gisketch_Aottg2UI_Code_AottgUi__Add(local_res10,__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$BuildEditor
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__BuildEditor (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181e03910

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__BuildEditor
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AottgCharacterTextColorEditor_Options__o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_String_o *value;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *document;
  System_String_o *value_00;
  System_String_o *value_01;
  undefined8 uVar4;
  System_Action_GameObject__o *value_02;
  undefined4 uVar5;
  undefined4 uVar6;
  System_String_o *local_e8;
  System_String_o *pSStack_e0;
  undefined8 uStack_d8;
  System_Action_GameObject__o *pSStack_d0;
  System_String_o *pSStack_c8;
  System_Collections_Generic_IList_string__o *local_c0;
  void *pvStack_b8;
  System_Collections_Generic_IList_string__o *local_b0;
  System_String_o *local_a8;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o local_a0 [2];
  
  if (Il2CppMethodInitialized_184344bdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgCharacterTextColorEditorRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-text-color-editor-input");
    Il2CppMethodInitialized_184344bdc = '\x01';
  }
  local_a0[0].fields.PreviewFont = (System_String_o *)0x0;
  local_a0[0].fields.PickerId = (System_String_o *)0x0;
  local_a0[0].fields.ColorsEnabledKey = (System_String_o *)0x0;
  local_a0[0].fields.ColorsEnabled = false;
  local_a0[0].fields._17_7_ = 0;
  local_a0[0].fields.Imported = (System_Action_GameObject__o *)0x0;
  local_a0[0].fields.PreviewEffectType = (System_String_o *)0x0;
  local_a0[0].fields.PreviewEffectColors = (System_Collections_Generic_IList_string__o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor);
  }
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (__this = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->static_fields->EditorOptions,
     __this != (System_Collections_Generic_Dictionary_string__AottgCharacterTextColorEditor_Options__o *)0x0))
  {
    bVar2 = System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (Il2CppObject *)(node->fields).id,local_a0,
                       (MethodInfo_1485190 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options_TryGetValue
                      );
    if (bVar2) {
      uVar5 = SUB84(local_a0[0].fields.PreviewFont,0);
      uVar6 = (undefined4)((ulonglong)local_a0[0].fields.PreviewFont >> 0x20);
      pSVar3 = local_a0[0].fields.PickerId;
      value_01 = local_a0[0].fields.ColorsEnabledKey;
      local_a8 = local_a0[0].fields.PreviewEffectType;
      local_b0 = local_a0[0].fields.PreviewEffectColors;
      uVar4 = local_a0[0].fields._16_8_;
      value_02 = local_a0[0].fields.Imported;
    }
    else {
      local_e8 = (System_String_o *)0x0;
      pSStack_e0 = (System_String_o *)0x0;
      uStack_d8 = 0;
      pSStack_d0 = (System_Action_GameObject__o *)0x0;
      pSStack_c8 = (System_String_o *)0x0;
      local_c0 = (System_Collections_Generic_IList_string__o *)0x0;
      pvStack_b8 = (void *)0x0;
      Il2CppCodeGenWriteBarrier(&local_e8,(void *)0x0);
      pSStack_e0 = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&pSStack_e0,(void *)0x0);
      uStack_d8._0_1_ = true;
      pSStack_d0 = (System_Action_GameObject__o *)0x0;
      Il2CppCodeGenWriteBarrier(&pSStack_d0,(void *)0x0);
      pSStack_c8 = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&pSStack_c8,(void *)0x0);
      local_c0 = (System_Collections_Generic_IList_string__o *)0x0;
      Il2CppCodeGenWriteBarrier(&local_c0,(void *)0x0);
      pvStack_b8 = (void *)0x0;
      Il2CppCodeGenWriteBarrier(&pvStack_b8,(void *)0x0);
      uVar5 = SUB84(pvStack_b8,0);
      uVar6 = (undefined4)((ulonglong)pvStack_b8 >> 0x20);
      pSVar3 = local_e8;
      value_01 = pSStack_e0;
      local_a8 = pSStack_c8;
      local_b0 = local_c0;
      uVar4 = uStack_d8;
      value_02 = pSStack_d0;
    }
    if (go != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_AottgCharacterTextColorEditorRuntime
                            );
      value = "profile-character-text-color-editor-input";
      if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
         (__this_00 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0)) {
        value_00 = (node->fields).value;
        pGVar1 = (context->fields).State;
        if (Il2CppMethodInitialized_184344bdf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
          Il2CppMethodInitialized_184344bdf = '\x01';
        }
        (__this_00->fields)._inputId = value;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._inputId,value);
        (__this_00->fields)._pickerId = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._pickerId,pSVar3);
        (__this_00->fields)._state = pGVar1;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._state,pGVar1);
        (__this_00->fields)._colorsEnabledKey = value_01;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._colorsEnabledKey,value_01);
        (__this_00->fields)._colorsEnabled = SUB81(uVar4,0);
        (__this_00->fields)._imported = value_02;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._imported,value_02);
        if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
        }
        pSVar3 = PatreonEffects_NameFontCatalog__Normalize
                           ((System_String_o *)CONCAT44(uVar6,uVar5),(MethodInfo *)0x0);
        (__this_00->fields)._previewFont = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._previewFont,pSVar3);
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
                  (__this_00,local_a8,local_b0,(MethodInfo *)0x0);
        if ((__this_00->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          pGVar1 = (__this_00->fields)._state;
          __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
          System_Action_object____ctor
                    (__this_01,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_OnStateChanged,
                     (MethodInfo *)0x0);
          Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
                    (pGVar1,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
        }
        if (value_00 == (System_String_o *)0x0) {
          value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        (__this_00->fields)._initialValue = value_00;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._initialValue,value_00);
        if ((__this_00->fields)._attached != false) {
          document = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                               ((__this_00->fields)._initialValue,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyDocument
                    (__this_00,document,true,(MethodInfo *)0x0);
        }
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


