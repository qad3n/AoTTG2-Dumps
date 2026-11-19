// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorEditor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor.Options$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o __this, System_String_o* pickerId, System_String_o* colorsEnabledKey, bool colorsEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x58eb730

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o *__this,
               System_String_o *pickerId,System_String_o *colorsEnabledKey,bool colorsEnabled,
               System_Action_GameObject__o *imported,System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,System_String_o *previewFont,
               MethodInfo *method)

{
  (__this->fields).PickerId = pickerId;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).ColorsEnabledKey = colorsEnabledKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ColorsEnabledKey);
  (__this->fields).ColorsEnabled = colorsEnabled;
  (__this->fields).Imported = imported;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Imported);
  (__this->fields).PreviewEffectType = previewEffectType;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PreviewEffectType);
  (__this->fields).PreviewEffectColors = previewEffectColors;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PreviewEffectColors);
  (__this->fields).PreviewFont = previewFont;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PreviewFont);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___cctor (const MethodInfo* method);
// 0x58eb020

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  System_Collections_Generic_Dictionary_string__AottgCharacterTextColorEditor_Options__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_01;
  
  if (Il2CppMethodInitialized_0754554e == '\0') {
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
    Il2CppMethodInitialized_0754554e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options
                        );
  System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4AC4820 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options_ctor
            );
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->static_fields->EditorOptions = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->static_fields->EditorOptions);
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
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgCharacterTextColorEditor",__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o* __this, System_String_o* value, System_String_o* pickerId, System_String_o* colorsEnabledKey, bool colorsEnabled, bool inputEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x58e2d90

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *__this,System_String_o *value,
               System_String_o *pickerId,System_String_o *colorsEnabledKey,bool colorsEnabled,
               bool inputEnabled,System_Action_GameObject__o *imported,System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,System_String_o *previewFont,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value);
  (__this->fields)._pickerId = pickerId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pickerId);
  (__this->fields)._colorsEnabledKey = colorsEnabledKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colorsEnabledKey);
  (__this->fields)._colorsEnabled = colorsEnabled;
  (__this->fields)._inputEnabled = inputEnabled;
  (__this->fields)._imported = imported;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._imported);
  (__this->fields)._previewEffectType = previewEffectType;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectType);
  (__this->fields)._previewEffectColors = previewEffectColors;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewEffectColors);
  (__this->fields)._previewFont = previewFont;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previewFont);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__Build (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58eb150

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool bVar1;
  System_Action_GameObject__o *pSVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_IList_string__o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o value;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar11;
  System_Nullable_bool__Fields aSStack_a8 [4];
  System_String_o *pSStack_a0;
  System_String_o *pSStack_98;
  undefined8 uStack_90;
  System_Action_GameObject__o *pSStack_88;
  System_String_o *pSStack_80;
  System_Collections_Generic_IList_string__o *pSStack_78;
  System_String_o *pSStack_70;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_68;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGStack_60;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *pGStack_58;
  System_Collections_Generic_Dictionary_string__AottgCharacterTextColorEditor_Options__o *pSStack_50;
  System_Enum_o SStack_48;
  undefined4 uStack_38;
  
  pGStack_68 = ui;
  if (Il2CppMethodInitialized_0754554f == '\0') {
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
    Il2CppMethodInitialized_0754554f = '\x01';
  }
  pGStack_60 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                         ((__this->fields)._value,(MethodInfo *)ui);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor);
  }
  pSStack_50 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->static_fields->EditorOptions;
  pSStack_a0 = (__this->fields)._pickerId;
  pSVar11 = (__this->fields)._colorsEnabledKey;
  bVar1 = (__this->fields)._colorsEnabled;
  pSVar2 = (__this->fields)._imported;
  pSVar3 = (__this->fields)._previewEffectType;
  pSVar4 = (__this->fields)._previewEffectColors;
  pSVar5 = (__this->fields)._previewFont;
  pSStack_78 = (System_Collections_Generic_IList_string__o *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  pSStack_88 = (System_Action_GameObject__o *)0x0;
  pSStack_80 = (System_String_o *)0x0;
  pSStack_98 = (System_String_o *)0x0;
  uStack_90 = 0;
  pGStack_58 = __this;
  Il2CppCodeGenWriteBarrier(&pSStack_a0);
  pSStack_98 = pSVar11;
  Il2CppCodeGenWriteBarrier(&pSStack_98);
  uStack_90 = CONCAT71(uStack_90._1_7_,bVar1);
  pSStack_88 = pSVar2;
  Il2CppCodeGenWriteBarrier(&pSStack_88);
  pSStack_80 = pSVar3;
  Il2CppCodeGenWriteBarrier(&pSStack_80);
  pSStack_78 = pSVar4;
  Il2CppCodeGenWriteBarrier(&pSStack_78);
  pSStack_70 = pSVar5;
  Il2CppCodeGenWriteBarrier(&pSStack_70);
  if (pSStack_50 !=
      (System_Collections_Generic_Dictionary_string__AottgCharacterTextColorEditor_Options__o *)0x0) {
    value.fields.ColorsEnabledKey = pSStack_98;
    value.fields.PickerId = pSStack_a0;
    value.fields._16_8_ = uStack_90;
    value.fields.Imported = pSStack_88;
    value.fields.PreviewEffectType = pSStack_80;
    value.fields.PreviewEffectColors._0_4_ = (int)pSStack_78;
    value.fields.PreviewEffectColors._4_4_ = (int)((ulong)pSStack_78 >> 0x20);
    value.fields.PreviewFont._0_4_ = (int)pSStack_70;
    value.fields.PreviewFont._4_4_ = (int)((ulong)pSStack_70 >> 0x20);
    System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSStack_50,
               (Il2CppObject *)"profile-character-text-color-editor",value,
               (MethodInfo_4AC5500 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options_set_Item
              );
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "AottgCharacterTextColorEditor";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
      (__this_00->fields).id = "profile-character-text-color-editor";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
      pGVar6 = pGStack_58;
      (__this_00->fields).value = (pGStack_58->fields)._value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
      (__this_00->fields).style = "clear";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (__this_00->fields).layout = pGVar9;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_01->fields).type = "InputField";
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).type);
        (__this_01->fields).id = "profile-character-text-color-editor-input";
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).id);
        (__this_01->fields).placeholder = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).placeholder);
        SStack_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Code_AottgInputType;
        SStack_48.monitor = (void *)0xffffffffffffffff;
        uStack_38 = 0;
        pSVar11 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
        (__this_01->fields).inputType = pSVar11;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).inputType);
        (__this_01->fields).style = "characterTextColorInput";
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).style);
        if (pGStack_60 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
          (__this_01->fields).value = (pGStack_60->fields).Text;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).value);
          aSStack_a8[0].hasValue = false;
          aSStack_a8[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o *)aSStack_a8,(pGVar6->fields)._inputEnabled,
                     (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
          (__this_01->fields).enabled.fields = aSStack_a8[0];
          (__this_01->fields).formKey = "profile-character-text-color-editor-input";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).formKey);
          (__this_01->fields).formLabel = "Text";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).formLabel);
          (__this_01->fields).maxCharacters = 0x117;
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this_01->fields).layout = pGVar9;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout);
          if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar10->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            pGVar10->m_Items[0] = __this_01;
            Il2CppCodeGenWriteBarrier(pGVar10->m_Items);
            (__this_00->fields).children = pGVar10;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields).children);
            if (pGStack_68 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
              Gisketch_Aottg2UI_Code_AottgUi__Add(pGStack_68,__this_00,(MethodInfo *)0x0);
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
// 0x58eb7d0

bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__BuildEditor
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AottgCharacterTextColorEditor_Options__o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_00;
  System_String_o *previewFont;
  byte bVar2;
  System_String_o *pickerId;
  System_String_o *previewEffectType;
  System_Collections_Generic_IList_string__o *previewEffectColors;
  MethodInfo *method_00;
  System_String_o *pSStack_c8;
  System_String_o *pSStack_c0;
  undefined8 uStack_b8;
  System_Action_GameObject__o *pSStack_b0;
  System_String_o *pSStack_a8;
  System_Collections_Generic_IList_string__o *pSStack_a0;
  System_String_o *apSStack_98 [2];
  System_String_o *pSStack_88;
  System_Action_GameObject__o *pSStack_80;
  UnityEngine_GameObject_o *pUStack_78;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGStack_70;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o GStack_68;
  
  pUStack_78 = go;
  pGStack_70 = context;
  if (Il2CppMethodInitialized_07545550 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgCharacterTextColorEditorRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-text-color-editor-input");
    Il2CppMethodInitialized_07545550 = '\x01';
  }
  GStack_68.fields.PreviewEffectType = (System_String_o *)0x0;
  GStack_68.fields.PreviewEffectColors = (System_Collections_Generic_IList_string__o *)0x0;
  GStack_68.fields.ColorsEnabled = false;
  GStack_68.fields._17_7_ = 0;
  GStack_68.fields.Imported = (System_Action_GameObject__o *)0x0;
  GStack_68.fields.PickerId = (System_String_o *)0x0;
  GStack_68.fields.ColorsEnabledKey = (System_String_o *)0x0;
  GStack_68.fields.PreviewFont = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor);
  }
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (__this = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor->static_fields->EditorOptions,
     __this != (System_Collections_Generic_Dictionary_string__AottgCharacterTextColorEditor_Options__o *)0x0))
  {
    bVar1 = System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options___TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (Il2CppObject *)(node->fields).id,&GStack_68,
                       (MethodInfo_4AC7730 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AottgCharacterTextColorEditor_Options_TryGetValue
                      );
    if (bVar1) {
      pSStack_88 = GStack_68.fields.ColorsEnabledKey;
      pSStack_80 = GStack_68.fields.Imported;
      previewFont = GStack_68.fields.PreviewFont;
      pickerId = GStack_68.fields.PickerId;
      previewEffectType = GStack_68.fields.PreviewEffectType;
      previewEffectColors = GStack_68.fields.PreviewEffectColors;
      bVar2 = GStack_68.fields.ColorsEnabled;
    }
    else {
      pSStack_a8 = (System_String_o *)0x0;
      pSStack_a0 = (System_Collections_Generic_IList_string__o *)0x0;
      uStack_b8 = 0;
      pSStack_b0 = (System_Action_GameObject__o *)0x0;
      pSStack_c8 = (System_String_o *)0x0;
      pSStack_c0 = (System_String_o *)0x0;
      apSStack_98[0] = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&pSStack_c8);
      pSStack_c0 = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&pSStack_c0);
      uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
      pSStack_b0 = (System_Action_GameObject__o *)0x0;
      Il2CppCodeGenWriteBarrier(&pSStack_b0);
      pSStack_a8 = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&pSStack_a8);
      pSStack_a0 = (System_Collections_Generic_IList_string__o *)0x0;
      Il2CppCodeGenWriteBarrier(&pSStack_a0);
      apSStack_98[0] = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(apSStack_98);
      pSStack_88 = pSStack_c0;
      pSStack_80 = pSStack_b0;
      previewFont = apSStack_98[0];
      pickerId = pSStack_c8;
      previewEffectType = pSStack_a8;
      previewEffectColors = pSStack_a0;
      bVar2 = (byte)uStack_b8;
    }
    if (pUStack_78 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = (MethodInfo *)0x58eb9bf;
      __this_00 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            (pUStack_78,
                             (MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_AottgCharacterTextColorEditorRuntime
                            );
      if ((pGStack_70 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
         (__this_00 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0)) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup
                  (__this_00,"profile-character-text-color-editor-input",(node->fields).value,pickerId,(pGStack_70->fields).State,
                   pSStack_88,(bool)(bVar2 & 1),pSStack_80,previewEffectType,previewEffectColors,previewFont,
                   method_00);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


