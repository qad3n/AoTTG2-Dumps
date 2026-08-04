// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextColorEditor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor.Options$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o __this, System_String_o* pickerId, System_String_o* colorsEnabledKey, bool colorsEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x450ea30

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o __this,
               System_String_o *pickerId,System_String_o *colorsEnabledKey,bool_conflict colorsEnabled,
               System_Action_GameObject__o *imported,System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,System_String_o *previewFont,
               MethodInfo *method)

{
  undefined4 in_register_00000014;
  
  pickerId->klass = (System_String_c *)colorsEnabledKey;
  il2cpp_runtime_helper_022b4080();
  pickerId->monitor = (void *)CONCAT44(in_register_00000014,colorsEnabled);
  il2cpp_runtime_helper_022b4080(&pickerId->monitor,(void *)CONCAT44(in_register_00000014,colorsEnabled));
  *(char *)&(pickerId->fields)._stringLength = (char)imported;
  pickerId[1].klass = (System_String_c *)previewEffectType;
  il2cpp_runtime_helper_022b4080(pickerId + 1,previewEffectType);
  pickerId[1].monitor = previewEffectColors;
  il2cpp_runtime_helper_022b4080(&pickerId[1].monitor,previewEffectColors);
  pickerId[1].fields = (System_String_Fields)__this.fields.PickerId;
  il2cpp_runtime_helper_022b4080(&pickerId[1].fields,__this.fields.PickerId);
  pickerId[2].klass = (System_String_c *)__this.fields.ColorsEnabledKey;
  il2cpp_runtime_helper_022b4080(pickerId + 2,__this.fields.ColorsEnabledKey);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___cctor (const MethodInfo* method);
// 0x450e350

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  intptr_t iVar1;
  intptr_t iVar2;
  intptr_t iVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o value;
  intptr_t iVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar9;
  undefined1 uVar10;
  void *extraout_RDX;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  System_String_o *in_R8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_R9;
  System_String_o *in_stack_fffffffffffffef8;
  System_String_o *in_stack_ffffffffffffff00;
  undefined2 uStack_ba;
  intptr_t iStack_b8;
  System_String_o *pSStack_b0;
  System_String_o *pSStack_a8;
  intptr_t iStack_a0;
  intptr_t iStack_98;
  intptr_t iStack_90;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_88;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_80;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGStack_78;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGStack_70;
  MethodInfo *pMStack_68;
  System_Enum_o SStack_60;
  undefined4 uStack_50;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGStack_48;
  
  if (g_data_057aed70 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildEditor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Game_AottgC);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Options);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"AottgCharacterTextColorEditor");
    g_data_057aed70 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Options);
  System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options____ctor
            (__this_00,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Game_AottgC);
  **(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterTextColorEditor + 0xb8));
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  pMVar11 = (MethodInfo *)0x0;
  uVar10 = 0;
  pGVar12 = factory;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgCharacterTextColorEditor",factory,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar11;
  pGStack_48 = factory;
  if (g_data_057aed71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"characterTextColorInput");
    il2cpp_runtime_helper_023445d0(&"profile-character-text-color-editor");
    il2cpp_runtime_helper_023445d0(&"profile-character-text-color-editor-input");
    il2cpp_runtime_helper_023445d0(&"AottgCharacterTextColorEditor");
    g_data_057aed71 = '\x01';
  }
  pGStack_78 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                         ((System_String_o *)(pGVar12->fields).method_ptr,method_00);
  pMStack_68 = pMVar11;
  if (*(int *)(TypeInfo_AottgCharacterTextColorEditor + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_80 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8)
  ;
  iStack_b8 = (pGVar12->fields).invoke_impl;
  pSVar8 = (System_String_o *)(pGVar12->fields).m_target;
  iVar4 = (pGVar12->fields).method;
  iVar1 = (pGVar12->fields).delegate_trampoline;
  iVar2 = (pGVar12->fields).extra_arg;
  iVar3 = (pGVar12->fields).method_code;
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(pGVar12->fields).interp_method;
  iStack_90 = 0;
  pGStack_88 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
  iStack_a0 = 0;
  iStack_98 = 0;
  pSStack_b0 = (System_String_o *)0x0;
  pSStack_a8 = (System_String_o *)0x0;
  pGStack_70 = pGVar12;
  il2cpp_runtime_helper_022b4080(&iStack_b8);
  pSStack_b0 = pSVar8;
  il2cpp_runtime_helper_022b4080(&pSStack_b0,pSVar8);
  pSStack_a8 = (System_String_o *)CONCAT71(pSStack_a8._1_7_,(char)iVar4);
  iStack_a0 = iVar1;
  il2cpp_runtime_helper_022b4080(&iStack_a0,iVar1);
  iStack_98 = iVar2;
  il2cpp_runtime_helper_022b4080(&iStack_98,iVar2);
  iStack_90 = iVar3;
  il2cpp_runtime_helper_022b4080(&iStack_90,iVar3);
  pGStack_88 = pGVar9;
  il2cpp_runtime_helper_022b4080(&pGStack_88);
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (pSStack_80 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    value.fields.ColorsEnabledKey = pSStack_b0;
    value.fields.PickerId = (System_String_o *)iStack_b8;
    value.fields._16_8_ = pSStack_a8;
    value.fields.Imported = (System_Action_GameObject__o *)iStack_a0;
    value.fields.PreviewEffectType = (System_String_o *)iStack_98;
    value.fields.PreviewEffectColors._0_4_ = (int)iStack_90;
    value.fields.PreviewEffectColors._4_4_ = (int)((ulong)iStack_90 >> 0x20);
    value.fields.PreviewFont._0_4_ = (int)pGStack_88;
    value.fields.PreviewFont._4_4_ = (int)((ulong)pGStack_88 >> 0x20);
    in_stack_fffffffffffffef8 = pSStack_b0;
    in_stack_ffffffffffffff00 = pSStack_a8;
    System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options___set_Item
              (pSStack_80,(Il2CppObject *)"profile-character-text-color-editor",value,MethodInfo_Void_set_Item);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGVar13 = __this_01;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "AottgCharacterTextColorEditor";
      il2cpp_runtime_helper_022b4080(&__this_01->fields);
      (__this_01->fields).id = "profile-character-text-color-editor";
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).id);
      pGVar12 = pGStack_70;
      (__this_01->fields).value = (System_String_o *)(pGStack_70->fields).method_ptr;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).value);
      (__this_01->fields).style = "clear";
      il2cpp_runtime_helper_022b4080();
      in_R9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      in_stack_fffffffffffffef8 = (System_String_o *)0x0;
      in_stack_ffffffffffffff00 = (System_String_o *)0x0;
      uVar10 = 0;
      in_R8 = (System_String_o *)0x0;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,in_R9,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (__this_01->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields).search,pGVar6);
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
      __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
      pGVar13 = __this_02;
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
      if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_02->fields).type = "InputField";
        il2cpp_runtime_helper_022b4080(&__this_02->fields);
        (__this_02->fields).id = "profile-character-text-color-editor-input";
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).id);
        (__this_02->fields).placeholder = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).placeholder);
        SStack_60.klass = TypeInfo_AottgInputType;
        SStack_60.monitor = (void *)0xffffffffffffffff;
        uStack_50 = 0;
        pSVar8 = System_Enum__ToString(&SStack_60,(MethodInfo *)0x0);
        (__this_02->fields).inputType = pSVar8;
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).inputType,pSVar8);
        pGVar9 = "characterTextColorInput";
        pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_02->fields).style;
        (__this_02->fields).style = (System_String_o *)"characterTextColorInput";
        il2cpp_runtime_helper_022b4080();
        if (pGStack_78 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
          (__this_02->fields).value = (pGStack_78->fields).Text;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields).value);
          uStack_ba = 0;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o)&uStack_ba,(uint)*(byte *)((long)&(pGVar12->fields).method + 1),
                     MethodInfo_Nullable_1_Boolean);
          *(undefined2 *)((long)&(__this_02->fields).hasIcon + 3) = uStack_ba;
          (__this_02->fields).max.fields.value = 3.90962e-43;
          in_R9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
          in_stack_fffffffffffffef8 = (System_String_o *)0x0;
          in_stack_ffffffffffffff00 = (System_String_o *)0x0;
          uVar10 = 0;
          in_R8 = (System_String_o *)0x0;
          pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                   Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,in_R9,pGVar5,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_02->fields).search;
          (__this_02->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
          il2cpp_runtime_helper_022b4080();
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if (*(int *)&pGVar7->max_length == 0) goto label_0450ea23;
            ((Il2CppType *)pGVar7->m_Items)->data = __this_02;
            il2cpp_runtime_helper_022b4080((Il2CppType *)pGVar7->m_Items,__this_02);
            (__this_01->fields).deferredChildren = pGVar7;
            il2cpp_runtime_helper_022b4080(&(__this_01->fields).deferredChildren);
            pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
            pGVar9 = pGVar7;
            if (pMStack_68 != (MethodInfo *)0x0) {
              Gisketch_Aottg2UI_Code_AottgUi__Add
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMStack_68,__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450ea23:
  il2cpp_runtime_helper_022b2ca0();
  pGVar13->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)pGVar9;
  il2cpp_runtime_helper_022b4080();
  pGVar13->monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&pGVar13->monitor,extraout_RDX);
  *(undefined1 *)&(pGVar13->fields).type = uVar10;
  (pGVar13->fields).id = in_R8;
  il2cpp_runtime_helper_022b4080(&(pGVar13->fields).id,in_R8);
  (pGVar13->fields).text = (System_String_o *)in_R9;
  il2cpp_runtime_helper_022b4080(&(pGVar13->fields).text,in_R9);
  (pGVar13->fields).textKey = in_stack_fffffffffffffef8;
  il2cpp_runtime_helper_022b4080(&(pGVar13->fields).textKey,in_stack_fffffffffffffef8);
  (pGVar13->fields).placeholder = in_stack_ffffffffffffff00;
  il2cpp_runtime_helper_022b4080(&(pGVar13->fields).placeholder,in_stack_ffffffffffffff00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o* __this, System_String_o* value, System_String_o* pickerId, System_String_o* colorsEnabledKey, bool colorsEnabled, bool inputEnabled, System_Action_GameObject__o* imported, System_String_o* previewEffectType, System_Collections_Generic_IList_string__o* previewEffectColors, System_String_o* previewFont, const MethodInfo* method);
// 0x4506870

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *__this,System_String_o *value,
               System_String_o *pickerId,System_String_o *colorsEnabledKey,bool_conflict colorsEnabled,
               bool_conflict inputEnabled,System_Action_GameObject__o *imported,
               System_String_o *previewEffectType,
               System_Collections_Generic_IList_string__o *previewEffectColors,System_String_o *previewFont,
               MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *)0x0) {
    (__this->fields)._value = value;
    il2cpp_runtime_helper_022b4080(&__this->fields,value);
    (__this->fields)._pickerId = pickerId;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._pickerId,pickerId);
    (__this->fields)._colorsEnabledKey = colorsEnabledKey;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._colorsEnabledKey,colorsEnabledKey);
    *(char *)&(__this->fields)._colorsEnabled = (char)colorsEnabled;
    *(char *)((long)&(__this->fields)._colorsEnabled + 1) = (char)inputEnabled;
    (__this->fields)._imported = imported;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._imported,imported);
    (__this->fields)._previewEffectType = previewEffectType;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._previewEffectType,previewEffectType);
    (__this->fields)._previewEffectColors = previewEffectColors;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._previewEffectColors);
    (__this->fields)._previewFont = previewFont;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._previewFont);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed39 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    g_data_057aed39 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
    method_00 = TypeInfo_AottgCharacterSetEffectsDialog;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgCharacterSetEffectsDialog[2].parameters + 4);
    method_00 = TypeInfo_AottgCharacterSetEffectsDialog;
  }
  TypeInfo_AottgCharacterSetEffectsDialog = method_00;
  if (iVar1 != 0) {
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(method_00);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__Build (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x450e480

void Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_Action_GameObject__o *pSVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_IList_string__o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o value;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar10;
  undefined1 in_CL;
  void *extraout_RDX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  System_String_o *in_R8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_R9;
  System_String_o *in_stack_ffffffffffffff10;
  System_String_o *in_stack_ffffffffffffff18;
  undefined2 uStack_a2;
  System_String_o *pSStack_a0;
  System_String_o *pSStack_98;
  System_String_o *pSStack_90;
  System_Action_GameObject__o *pSStack_88;
  System_String_o *pSStack_80;
  System_Collections_Generic_IList_string__o *pSStack_78;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_70;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_68;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGStack_60;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *pGStack_58;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_50;
  System_Enum_o SStack_48;
  undefined4 uStack_38;
  
  method_00 = (MethodInfo *)ui;
  if (g_data_057aed71 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgInputType);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"characterTextColorInput");
    il2cpp_runtime_helper_023445d0(&"profile-character-text-color-editor");
    il2cpp_runtime_helper_023445d0(&"profile-character-text-color-editor-input");
    il2cpp_runtime_helper_023445d0(&"AottgCharacterTextColorEditor");
    g_data_057aed71 = '\x01';
  }
  pGStack_60 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse((__this->fields)._value,method_00);
  pGStack_50 = ui;
  if (*(int *)(TypeInfo_AottgCharacterTextColorEditor + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_68 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_AottgCharacterTextColorEditor + 0xb8)
  ;
  pSStack_a0 = (__this->fields)._pickerId;
  pSVar9 = (__this->fields)._colorsEnabledKey;
  bVar4 = (__this->fields)._colorsEnabled;
  pSVar1 = (__this->fields)._imported;
  pSVar2 = (__this->fields)._previewEffectType;
  pSVar3 = (__this->fields)._previewEffectColors;
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(__this->fields)._previewFont;
  pSStack_78 = (System_Collections_Generic_IList_string__o *)0x0;
  pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
  pSStack_88 = (System_Action_GameObject__o *)0x0;
  pSStack_80 = (System_String_o *)0x0;
  pSStack_98 = (System_String_o *)0x0;
  pSStack_90 = (System_String_o *)0x0;
  pGStack_58 = __this;
  il2cpp_runtime_helper_022b4080(&pSStack_a0);
  pSStack_98 = pSVar9;
  il2cpp_runtime_helper_022b4080(&pSStack_98,pSVar9);
  pSStack_90 = (System_String_o *)CONCAT71(pSStack_90._1_7_,(char)bVar4);
  pSStack_88 = pSVar1;
  il2cpp_runtime_helper_022b4080(&pSStack_88,pSVar1);
  pSStack_80 = pSVar2;
  il2cpp_runtime_helper_022b4080(&pSStack_80,pSVar2);
  pSStack_78 = pSVar3;
  il2cpp_runtime_helper_022b4080(&pSStack_78,pSVar3);
  pGStack_70 = pGVar10;
  il2cpp_runtime_helper_022b4080(&pGStack_70);
  pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (pSStack_68 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    value.fields.ColorsEnabledKey = pSStack_98;
    value.fields.PickerId = pSStack_a0;
    value.fields._16_8_ = pSStack_90;
    value.fields.Imported = pSStack_88;
    value.fields.PreviewEffectType = pSStack_80;
    value.fields.PreviewEffectColors._0_4_ = (int)pSStack_78;
    value.fields.PreviewEffectColors._4_4_ = (int)((ulong)pSStack_78 >> 0x20);
    value.fields.PreviewFont._0_4_ = (int)pGStack_70;
    value.fields.PreviewFont._4_4_ = (int)((ulong)pGStack_70 >> 0x20);
    in_stack_ffffffffffffff10 = pSStack_98;
    in_stack_ffffffffffffff18 = pSStack_90;
    System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options___set_Item
              (pSStack_68,(Il2CppObject *)"profile-character-text-color-editor",value,MethodInfo_Void_set_Item);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGVar11 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "AottgCharacterTextColorEditor";
      il2cpp_runtime_helper_022b4080(&__this_00->fields);
      (__this_00->fields).id = "profile-character-text-color-editor";
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).id);
      pGVar5 = pGStack_58;
      (__this_00->fields).value = (pGStack_58->fields)._value;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).value);
      (__this_00->fields).style = "clear";
      il2cpp_runtime_helper_022b4080();
      in_R9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
      in_stack_ffffffffffffff10 = (System_String_o *)0x0;
      in_stack_ffffffffffffff18 = (System_String_o *)0x0;
      in_CL = 0;
      in_R8 = (System_String_o *)0x0;
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,in_R9,pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).search,pGVar7);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
      pGVar11 = __this_01;
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_01->fields).type = "InputField";
        il2cpp_runtime_helper_022b4080(&__this_01->fields);
        (__this_01->fields).id = "profile-character-text-color-editor-input";
        il2cpp_runtime_helper_022b4080(&(__this_01->fields).id);
        (__this_01->fields).placeholder = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        il2cpp_runtime_helper_022b4080(&(__this_01->fields).placeholder);
        SStack_48.klass = TypeInfo_AottgInputType;
        SStack_48.monitor = (void *)0xffffffffffffffff;
        uStack_38 = 0;
        pSVar9 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
        (__this_01->fields).inputType = pSVar9;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields).inputType,pSVar9);
        pGVar10 = "characterTextColorInput";
        pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_01->fields).style;
        (__this_01->fields).style = (System_String_o *)"characterTextColorInput";
        il2cpp_runtime_helper_022b4080();
        if (pGStack_60 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
          (__this_01->fields).value = (pGStack_60->fields).Text;
          il2cpp_runtime_helper_022b4080(&(__this_01->fields).value);
          uStack_a2 = 0;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o)&uStack_a2,
                     (uint)*(byte *)((long)&(pGVar5->fields)._colorsEnabled + 1),MethodInfo_Nullable_1_Boolean);
          *(undefined2 *)((long)&(__this_01->fields).hasIcon + 3) = uStack_a2;
          (__this_01->fields).max.fields.value = 3.90962e-43;
          in_R9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
          in_stack_ffffffffffffff10 = (System_String_o *)0x0;
          in_stack_ffffffffffffff18 = (System_String_o *)0x0;
          in_CL = 0;
          in_R8 = (System_String_o *)0x0;
          pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                    Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,in_R9,pGVar6,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,0.0,(MethodInfo *)0x0);
          pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_01->fields).search;
          (__this_01->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
          il2cpp_runtime_helper_022b4080();
          if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if (*(int *)&pGVar8->max_length == 0) goto label_0450ea23;
            ((Il2CppType *)pGVar8->m_Items)->data = __this_01;
            il2cpp_runtime_helper_022b4080((Il2CppType *)pGVar8->m_Items,__this_01);
            (__this_00->fields).deferredChildren = pGVar8;
            il2cpp_runtime_helper_022b4080(&(__this_00->fields).deferredChildren);
            pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
            pGVar10 = pGVar8;
            if (pGStack_50 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
              Gisketch_Aottg2UI_Code_AottgUi__Add(pGStack_50,__this_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0450ea23:
  il2cpp_runtime_helper_022b2ca0();
  pGVar11->klass = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)pGVar10;
  il2cpp_runtime_helper_022b4080();
  pGVar11->monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&pGVar11->monitor,extraout_RDX);
  *(undefined1 *)&(pGVar11->fields).type = in_CL;
  (pGVar11->fields).id = in_R8;
  il2cpp_runtime_helper_022b4080(&(pGVar11->fields).id,in_R8);
  (pGVar11->fields).text = (System_String_o *)in_R9;
  il2cpp_runtime_helper_022b4080(&(pGVar11->fields).text,in_R9);
  (pGVar11->fields).textKey = in_stack_ffffffffffffff10;
  il2cpp_runtime_helper_022b4080(&(pGVar11->fields).textKey,in_stack_ffffffffffffff10);
  (pGVar11->fields).placeholder = in_stack_ffffffffffffff18;
  il2cpp_runtime_helper_022b4080(&(pGVar11->fields).placeholder,in_stack_ffffffffffffff18);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextColorEditor$$BuildEditor
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__BuildEditor (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x450ead0

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor__BuildEditor
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  Il2CppClass *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  TMPro_TMP_InputField_o *x;
  TMPro_TMP_Text_o *pTVar2;
  Il2CppMethodPointer vtableDispatch;
  byte bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *previewEffectColors;
  System_String_o *previewFont;
  undefined1 uVar6;
  System_Action_GameObject__o *pSVar7;
  System_Action_GameObject__o *type;
  bool_conflict bVar8;
  bool_conflict extraout_EAX;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *pGVar9;
  undefined8 extraout_RAX;
  System_String_array *pSVar10;
  System_Action_string__o *value;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *document;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *key;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *method_01;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_02;
  System_Collections_Generic_List_string__o *__this_03;
  System_String_o *in_R9;
  MethodInfo *pMVar11;
  System_String_o *pSStack_c8;
  System_String_o *pSStack_c0;
  System_Action_GameObject__o *pSStack_b8;
  System_Action_GameObject__o *pSStack_b0;
  System_String_o *pSStack_a8;
  System_String_o *pSStack_a0;
  System_String_o *apSStack_98 [2];
  System_String_o *pSStack_88;
  System_Action_GameObject__o *pSStack_80;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *pGStack_78;
  MethodInfo *pMStack_70;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_Options_o GStack_68;
  
  key = node;
  pGStack_78 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)go;
  pMStack_70 = (MethodInfo *)context;
  if (cRam00000000057aed72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextColorEditor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCharacterTextColorEditorRuntime_AddComponent_AottgC);
    il2cpp_runtime_helper_023445d0(&"profile-character-text-color-editor-input");
    cRam00000000057aed72 = '\x01';
  }
  GStack_68.fields.PreviewEffectType = (System_String_o *)0x0;
  GStack_68.fields.PreviewEffectColors = (System_Collections_Generic_IList_string__o *)0x0;
  GStack_68.fields.ColorsEnabled = 0;
  GStack_68.fields._20_4_ = 0;
  GStack_68.fields.Imported = (System_Action_GameObject__o *)0x0;
  GStack_68.fields.PickerId = (System_String_o *)0x0;
  GStack_68.fields.ColorsEnabledKey = (System_String_o *)0x0;
  GStack_68.fields.PreviewFont = (System_String_o *)0x0;
  if (*(int *)((long)&TypeInfo_AottgCharacterTextColorEditor[1].fields.m_CancellationTokenSource + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = TypeInfo_AottgCharacterTextColorEditor;
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    __this = (((TypeInfo_AottgCharacterTextColorEditor->fields)._previewEffectColors)->obj).klass;
    __this_01 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
    if (__this != (Il2CppClass *)0x0) {
      key = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(node->fields).id;
      view = (Gisketch_Aottg2UI_Building_GisketchView_o *)_DAT_05589ca0;
      bVar8 = System_Collections_Generic_Dictionary_object__AottgCharacterTextColorEditor_Options___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,
                         &GStack_68,(MethodInfo_311D100 *)_DAT_05589ca0);
      if ((char)bVar8 == '\0') {
        pSStack_a8 = (System_String_o *)0x0;
        pSStack_a0 = (System_String_o *)0x0;
        pSStack_b8 = (System_Action_GameObject__o *)0x0;
        pSStack_b0 = (System_Action_GameObject__o *)0x0;
        pSStack_c8 = (System_String_o *)0x0;
        pSStack_c0 = (System_String_o *)0x0;
        apSStack_98[0] = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&pSStack_c8);
        pSStack_c0 = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&pSStack_c0);
        pSStack_b8 = (System_Action_GameObject__o *)CONCAT71(pSStack_b8._1_7_,1);
        pSStack_b0 = (System_Action_GameObject__o *)0x0;
        il2cpp_runtime_helper_022b4080(&pSStack_b0);
        pSStack_a8 = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&pSStack_a8);
        pSStack_a0 = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&pSStack_a0);
        apSStack_98[0] = (System_String_o *)0x0;
        key = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        il2cpp_runtime_helper_022b4080(apSStack_98);
        pSStack_88 = pSStack_c0;
        bVar3 = (byte)pSStack_b8;
        pSStack_80 = pSStack_b0;
        method_01 = _DAT_055a12f0;
        pSVar4 = pSStack_c8;
        pSVar5 = pSStack_a8;
        previewEffectColors = pSStack_a0;
        previewFont = apSStack_98[0];
        __this_01 = pGStack_78;
      }
      else {
        pSStack_88 = GStack_68.fields.ColorsEnabledKey;
        bVar3 = (byte)GStack_68.fields.ColorsEnabled;
        pSStack_80 = GStack_68.fields.Imported;
        method_01 = _DAT_055a12f0;
        pSVar4 = GStack_68.fields.PickerId;
        pSVar5 = GStack_68.fields.PreviewEffectType;
        previewEffectColors = (System_String_o *)GStack_68.fields.PreviewEffectColors;
        previewFont = GStack_68.fields.PreviewFont;
        __this_01 = pGStack_78;
      }
      _DAT_055a12f0 = method_01;
      pGStack_78 = __this_01;
      if (__this_01 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
        pMVar11 = (MethodInfo *)&g_data_0450eccb;
        pGVar9 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
                 UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)__this_01,(MethodInfo_255A020 *)method_01);
        view = (Gisketch_Aottg2UI_Building_GisketchView_o *)pMStack_70;
        key = method_01;
        if ((pMStack_70 != (MethodInfo *)0x0) &&
           (pGVar9 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0)) {
          Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Setup
                    (pGVar9,"profile-character-text-color-editor-input",(node->fields).value,pSVar4,
                     (Gisketch_Aottg2UI_State_GisketchUIState_o *)pMStack_70->parameters,pSStack_88,
                     (uint)(bVar3 & 1),pSStack_80,pSVar5,
                     (System_Collections_Generic_IList_string__o *)previewEffectColors,previewFont,pMVar11);
          return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar5 = pSStack_a0;
  pSVar4 = pSStack_a8;
  type = pSStack_b0;
  pSVar7 = pSStack_b8;
  uVar6 = pSStack_c0._0_1_;
  pMVar11 = (MethodInfo *)view;
  if (cRam00000000057aed73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    cRam00000000057aed73 = '\x01';
  }
  (__this_01->fields)._inputId = (System_String_o *)key;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._inputId,key);
  (__this_01->fields)._pickerId = (System_String_o *)view;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._pickerId,view);
  (__this_01->fields)._state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)method;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._state,method);
  (__this_01->fields)._colorsEnabledKey = in_R9;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._colorsEnabledKey,in_R9);
  *(undefined1 *)((long)&(__this_01->fields)._attached + 2) = uVar6;
  (__this_01->fields)._imported = pSVar7;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._imported);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_String_array *)PatreonEffects_NameFontCatalog__Normalize(pSVar5,(MethodInfo *)0x0);
  (__this_01->fields)._previewEffectColors = pSVar10;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._previewEffectColors,pSVar10);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
            (__this_01,(System_String_o *)type,(System_Collections_Generic_IList_string__o *)pSVar4,pMVar11);
  __this_00 = (__this_01->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_00,value,(MethodInfo *)0x0);
  }
  pMVar11 = extraout_RDX;
  if (extraout_RDX == (MethodInfo *)0x0) {
    pMVar11 = (MethodInfo *)**(long **)(g_data_057b9c00 + 0xb8);
  }
  (__this_01->fields)._initialValue = (System_String_o *)pMVar11;
  bVar8 = il2cpp_runtime_helper_022b4080(&(__this_01->fields)._initialValue);
  if ((char)(__this_01->fields)._attached == '\0') {
    return bVar8;
  }
  document = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)
             Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                       ((__this_01->fields)._initialValue,pMVar11);
  pGVar9 = document;
  if (g_data_057aed80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed80 = '\x01';
  }
  __this_02 = document;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Trim_4410c10
            ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)document,(MethodInfo *)pGVar9);
  if (document != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    pGVar9 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)(document->fields).m_CachedPtr;
    (__this_01->fields)._lastText = (System_String_o *)pGVar9;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields)._lastText);
    __this_03 = (__this_01->fields)._colors;
    __this_02 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
    if (__this_03 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this_03->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (__this_03->fields)._size;
      (__this_03->fields)._size = 0;
      if (0 < length) {
        pGVar9 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        System_Array__Clear((System_Array_o *)(__this_03->fields)._items,0,length,(MethodInfo *)0x0);
        __this_03 = (__this_01->fields)._colors;
        __this_02 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
        if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) goto label_0450f31d;
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_03,
                 (System_Collections_Generic_IEnumerable_T__o *)(document->fields).m_CancellationTokenSource,
                 MethodInfo_Void_AddRange);
      x = (__this_01->fields)._input;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetInputText
                  (__this_01,(System_String_o *)(document->fields).m_CachedPtr,method_00);
      }
      if (g_data_057aed7f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aed7f = '\x01';
      }
      pTVar2 = (__this_01->fields)._text;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar9 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return bVar8;
      }
      pTVar2 = (__this_01->fields)._text;
      __this_02 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
      if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
        vtableDispatch = (pTVar2->klass->vtable)._106_ForceMeshUpdate.methodPtr;
        bVar8 = (*vtableDispatch)
                          (pTVar2,0,0,(pTVar2->klass->vtable)._106_ForceMeshUpdate.method,
                           vtableDispatch);
        return bVar8;
      }
    }
  }
label_0450f31d:
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Attach(__this_02,(MethodInfo *)pGVar9);
  return extraout_EAX;
}


