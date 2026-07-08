// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorEditor.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor.Options$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o __this, System_String_o* pickerId, System_String_o* colorsEnabledKey, bool colorsEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x41db960

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o __this,
               System_String_o *pickerId,System_String_o *colorsEnabledKey,
               bool_conflict colorsEnabled,System_Action_GameObject__o *imported,
               System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,
               System_String_o *previewFont,MethodInfo *method)

{
  undefined4 in_register_00000014;
  
  pickerId->klass = (System_String_c *)colorsEnabledKey;
  il2cpp_runtime_glue();
  pickerId->monitor = (void *)CONCAT44(in_register_00000014,colorsEnabled);
  il2cpp_runtime_glue(&pickerId->monitor,(void *)CONCAT44(in_register_00000014,colorsEnabled));
  *(char *)&(pickerId->fields)._stringLength = (char)imported;
  pickerId[1].klass = (System_String_c *)previewEffectType;
  il2cpp_runtime_glue(pickerId + 1,previewEffectType);
  pickerId[1].monitor = previewEffectColors;
  il2cpp_runtime_glue(&pickerId[1].monitor,previewEffectColors);
  pickerId[1].fields = (System_String_Fields)__this.fields.PickerId;
  il2cpp_runtime_glue(&pickerId[1].fields,__this.fields.PickerId);
  pickerId[2].klass = (System_String_c *)__this.fields.ColorsEnabledKey;
  il2cpp_runtime_glue(pickerId + 2,__this.fields.ColorsEnabledKey);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___cctor (const MethodInfo* method);
// 0x41db170

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  
  if (DAT_05704e9d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_BuildEditor);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Gam);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Options);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentFactory);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    il2cpp_init_method_metadata(&"AottgCharacterTextColorEditor");
    DAT_05704e9d = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Options);
  System_Collections_Generic_Dictionary<object__AottgCharacterTextColorEditor_Options>___ctor
            (__this_00,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Gam);
  **(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8) = __this_00;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCharacterTextColorEditor + 0xb8),__this_00);
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
           **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)
            il2cpp_runtime_glue(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgCharacterTextColorEditor",factory,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o* __this, System_String_o* value, System_String_o* pickerId, System_String_o* colorsEnabledKey, bool colorsEnabled, bool inputEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x41db2a0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *__this,
               System_String_o *value,System_String_o *pickerId,System_String_o *colorsEnabledKey,
               bool_conflict colorsEnabled,bool_conflict inputEnabled,
               System_Action_GameObject__o *imported,System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,
               System_String_o *previewFont,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *)0x0) {
    (__this->fields)._value = value;
    il2cpp_runtime_glue(&__this->fields,value);
    (__this->fields)._pickerId = pickerId;
    il2cpp_runtime_glue(&(__this->fields)._pickerId,pickerId);
    (__this->fields)._colorsEnabledKey = colorsEnabledKey;
    il2cpp_runtime_glue(&(__this->fields)._colorsEnabledKey,colorsEnabledKey);
    *(char *)&(__this->fields)._colorsEnabled = (char)colorsEnabled;
    *(char *)((long)&(__this->fields)._colorsEnabled + 1) = (char)inputEnabled;
    (__this->fields)._imported = imported;
    il2cpp_runtime_glue(&(__this->fields)._imported,imported);
    (__this->fields)._previewEffectType = previewEffectType;
    il2cpp_runtime_glue(&(__this->fields)._previewEffectType,previewEffectType);
    (__this->fields)._previewEffectColors = previewEffectColors;
    il2cpp_runtime_glue(&(__this->fields)._previewEffectColors);
    (__this->fields)._previewFont = previewFont;
    il2cpp_runtime_glue(&(__this->fields)._previewFont);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__Build (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41db3b0

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_Action_GameObject__o *pSVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_IList_string__o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o value;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar11;
  undefined2 uStack_a2;
  System_String_o *pSStack_a0;
  System_String_o *pSStack_98;
  undefined8 uStack_90;
  System_Action_GameObject__o *pSStack_88;
  System_String_o *pSStack_80;
  System_Collections_Generic_IList_string__o *pSStack_78;
  System_String_o *pSStack_70;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_68;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGStack_60;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *pGStack_58;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_50;
  System_Enum_o SStack_48;
  undefined4 uStack_38;
  
  if (DAT_05704e9e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_init_method_metadata(&TypeInfo_AottgInputType);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"InputField");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"characterTextColorInput");
    il2cpp_init_method_metadata(&"profile-character-text-color-editor");
    il2cpp_init_method_metadata(&"profile-character-text-color-editor-input");
    il2cpp_init_method_metadata(&"AottgCharacterTextColorEditor");
    DAT_05704e9e = '\x01';
  }
  pGStack_60 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                         ((__this->fields)._value,(MethodInfo *)0x0);
  pGStack_50 = ui;
  if (*(int *)(TypeInfo_AottgCharacterTextColorEditor + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSStack_68 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               **(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8);
  pSStack_a0 = (__this->fields)._pickerId;
  pSVar11 = (__this->fields)._colorsEnabledKey;
  bVar5 = (__this->fields)._colorsEnabled;
  pSVar1 = (__this->fields)._imported;
  pSVar2 = (__this->fields)._previewEffectType;
  pSVar3 = (__this->fields)._previewEffectColors;
  pSVar4 = (__this->fields)._previewFont;
  pSStack_78 = (System_Collections_Generic_IList_string__o *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  pSStack_88 = (System_Action_GameObject__o *)0x0;
  pSStack_80 = (System_String_o *)0x0;
  pSStack_98 = (System_String_o *)0x0;
  uStack_90 = 0;
  pGStack_58 = __this;
  il2cpp_runtime_glue(&pSStack_a0);
  pSStack_98 = pSVar11;
  il2cpp_runtime_glue(&pSStack_98,pSVar11);
  uStack_90 = CONCAT71(uStack_90._1_7_,(char)bVar5);
  pSStack_88 = pSVar1;
  il2cpp_runtime_glue(&pSStack_88,pSVar1);
  pSStack_80 = pSVar2;
  il2cpp_runtime_glue(&pSStack_80,pSVar2);
  pSStack_78 = pSVar3;
  il2cpp_runtime_glue(&pSStack_78,pSVar3);
  pSStack_70 = pSVar4;
  il2cpp_runtime_glue(&pSStack_70,pSVar4);
  if (pSStack_68 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    value.fields.ColorsEnabledKey = pSStack_98;
    value.fields.PickerId = pSStack_a0;
    value.fields._16_8_ = uStack_90;
    value.fields.Imported = pSStack_88;
    value.fields.PreviewEffectType = pSStack_80;
    value.fields.PreviewEffectColors._0_4_ = (int)pSStack_78;
    value.fields.PreviewEffectColors._4_4_ = (int)((ulong)pSStack_78 >> 0x20);
    value.fields.PreviewFont._0_4_ = (int)pSStack_70;
    value.fields.PreviewFont._4_4_ = (int)((ulong)pSStack_70 >> 0x20);
    System_Collections_Generic_Dictionary<object__AottgCharacterTextColorEditor_Options>__set_Item
              (pSStack_68,(Il2CppObject *)"profile-character-text-color-editor",value,MethodInfo_Void_set_Item);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "AottgCharacterTextColorEditor";
      il2cpp_runtime_glue(&__this_00->fields);
      (__this_00->fields).id = "profile-character-text-color-editor";
      il2cpp_runtime_glue(&(__this_00->fields).id);
      pGVar6 = pGStack_58;
      (__this_00->fields).value = (pGStack_58->fields)._value;
      il2cpp_runtime_glue(&(__this_00->fields).value);
      (__this_00->fields).style = "clear";
      il2cpp_runtime_glue();
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar7,pGVar8,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
      (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_glue(&(__this_00->fields).search,pGVar9);
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition);
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_01->fields).type = "InputField";
        il2cpp_runtime_glue(&__this_01->fields);
        (__this_01->fields).id = "profile-character-text-color-editor-input";
        il2cpp_runtime_glue(&(__this_01->fields).id);
        (__this_01->fields).placeholder = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        il2cpp_runtime_glue(&(__this_01->fields).placeholder);
        SStack_48.klass = TypeInfo_AottgInputType;
        SStack_48.monitor = (void *)0xffffffffffffffff;
        uStack_38 = 0;
        pSVar11 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
        (__this_01->fields).inputType = pSVar11;
        il2cpp_runtime_glue(&(__this_01->fields).inputType,pSVar11);
        (__this_01->fields).style = "characterTextColorInput";
        il2cpp_runtime_glue(&(__this_01->fields).style);
        if (pGStack_60 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
          (__this_01->fields).value = (pGStack_60->fields).Text;
          il2cpp_runtime_glue(&(__this_01->fields).value);
          uStack_a2 = 0;
          System_Nullable<bool>___ctor
                    ((System_Nullable_bool__o)&uStack_a2,
                     (uint)*(byte *)((long)&(pGVar6->fields)._colorsEnabled + 1),MethodInfo_Nullable_1_Boolean);
          *(undefined2 *)((long)&(__this_01->fields).hasIcon + 3) = uStack_a2;
          (__this_01->fields).max.fields.value = 3.90962e-43;
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0
                              ,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this_01->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
          il2cpp_runtime_glue(&(__this_01->fields).search,pGVar9);
          if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar10->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pGVar10->m_Items[0] = __this_01;
            il2cpp_runtime_glue(pGVar10->m_Items,__this_01);
            (__this_00->fields).deferredChildren = pGVar10;
            il2cpp_runtime_glue(&(__this_00->fields).deferredChildren,pGVar10);
            if (pGStack_50 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
              Gisketch_Aottg2UI_Code_AottgUi__Add(pGStack_50,__this_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$BuildEditor
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__BuildEditor (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x41dba00

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__BuildEditor
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  byte bVar1;
  System_String_o *pickerId;
  System_String_o *previewEffectType;
  System_Collections_Generic_IList_string__o *previewEffectColors;
  System_String_o *previewFont;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  undefined8 extraout_RAX;
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
  if (DAT_05704e9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_AottgCharacterTextColorEditorRuntime_AddComponen);
    il2cpp_init_method_metadata(&"profile-character-text-color-editor-input");
    DAT_05704e9f = '\x01';
  }
  GStack_68.fields.PreviewEffectType = (System_String_o *)0x0;
  GStack_68.fields.PreviewEffectColors = (System_Collections_Generic_IList_string__o *)0x0;
  GStack_68.fields.ColorsEnabled = 0;
  GStack_68.fields._20_4_ = 0;
  GStack_68.fields.Imported = (System_Action_GameObject__o *)0x0;
  GStack_68.fields.PickerId = (System_String_o *)0x0;
  GStack_68.fields.ColorsEnabledKey = (System_String_o *)0x0;
  GStack_68.fields.PreviewFont = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_AottgCharacterTextColorEditor + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
      **(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary<object__AottgCharacterTextColorEditor_Options>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8),(Il2CppObject *)(node->fields).id,
                       &GStack_68,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 == '\0') {
      pSStack_a8 = (System_String_o *)0x0;
      pSStack_a0 = (System_Collections_Generic_IList_string__o *)0x0;
      uStack_b8 = 0;
      pSStack_b0 = (System_Action_GameObject__o *)0x0;
      pSStack_c8 = (System_String_o *)0x0;
      pSStack_c0 = (System_String_o *)0x0;
      apSStack_98[0] = (System_String_o *)0x0;
      il2cpp_runtime_glue(&pSStack_c8,0);
      pSStack_c0 = (System_String_o *)0x0;
      il2cpp_runtime_glue(&pSStack_c0,0);
      uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
      pSStack_b0 = (System_Action_GameObject__o *)0x0;
      il2cpp_runtime_glue(&pSStack_b0,0);
      pSStack_a8 = (System_String_o *)0x0;
      il2cpp_runtime_glue(&pSStack_a8,0);
      pSStack_a0 = (System_Collections_Generic_IList_string__o *)0x0;
      il2cpp_runtime_glue(&pSStack_a0,0);
      apSStack_98[0] = (System_String_o *)0x0;
      il2cpp_runtime_glue(apSStack_98,0);
      pSStack_88 = pSStack_c0;
      bVar1 = (byte)uStack_b8;
      pSStack_80 = pSStack_b0;
      pickerId = pSStack_c8;
      previewEffectType = pSStack_a8;
      previewEffectColors = pSStack_a0;
      previewFont = apSStack_98[0];
    }
    else {
      pSStack_88 = GStack_68.fields.ColorsEnabledKey;
      bVar1 = (byte)GStack_68.fields.ColorsEnabled;
      pSStack_80 = GStack_68.fields.Imported;
      pickerId = GStack_68.fields.PickerId;
      previewEffectType = GStack_68.fields.PreviewEffectType;
      previewEffectColors = GStack_68.fields.PreviewEffectColors;
      previewFont = GStack_68.fields.PreviewFont;
    }
    if (pUStack_78 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = (MethodInfo *)0x41dbbfb;
      __this = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
               UnityEngine_GameObject__AddComponent<object>(pUStack_78,MethodInfo_AottgCharacterTextColorEditorRuntime_AddComponen);
      if ((pGStack_70 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
         (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0)) {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup
                  (__this,"profile-character-text-color-editor-input",(node->fields).value,pickerId,(pGStack_70->fields).State,
                   pSStack_88,(uint)(bVar1 & 1),pSStack_80,previewEffectType,previewEffectColors,
                   previewFont,method_00);
        return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


