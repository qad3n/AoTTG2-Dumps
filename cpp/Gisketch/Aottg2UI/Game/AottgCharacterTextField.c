// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextField
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextField.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, System_String_o* id, System_String_o* label, System_String_o* placeholder, System_String_o* value, bool enabled, System_String_o* effectPrefix, System_Action_GisketchActionContext__o* changed, System_String_o* labelKey, System_String_o* placeholderKey, const MethodInfo* method);
// 0x181e06160

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *placeholder,System_String_o *value,bool enabled,
               System_String_o *effectPrefix,System_Action_GisketchActionContext__o *changed,
               System_String_o *labelKey,System_String_o *placeholderKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._labelKey = labelKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelKey,labelKey);
  (__this->fields)._placeholder = placeholder;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._placeholder,placeholder);
  (__this->fields)._placeholderKey = placeholderKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._placeholderKey,placeholderKey);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value,value);
  (__this->fields)._enabled = enabled;
  (__this->fields)._effectPrefix = effectPrefix;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._effectPrefix,effectPrefix);
  (__this->fields)._changed = changed;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._changed,changed);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value (System_String_o* id, System_String_o* fallback, const MethodInfo* method);
// 0x181e05f20

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
          (System_String_o *id,System_String_o *fallback,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  System_String_o *local_res8;
  
  if (Il2CppMethodInitialized_184344bfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_184344bfc = '\x01';
  }
  local_res8 = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)id,(Il2CppObject **)&local_res8,
                     (MethodInfo_14769C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  if (bVar1) {
    return local_res8;
  }
  if (fallback != (System_String_o *)0x0) {
    return fallback;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue (UnityEngine_GameObject_o* source, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x181e05300
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0550e: mov rdx, rbp
// asm:   0x181e05511: jmp 0x181e05524

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue
               (UnityEngine_GameObject_o *source,System_String_o *id,System_String_o *value,MethodInfo *method
               )

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  TMPro_TMP_InputField_o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184344bfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bfd = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)id,(Il2CppObject *)value,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((source == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_181e05563;
      pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
    }
    else {
      pUVar2 = (UnityEngine_Transform_o *)0x0;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    }
    if (Il2CppMethodInitialized_184344c05 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184344c05 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                             ((UnityEngine_Component_o *)pUVar2,true,
                              (MethodInfo_665440 *)
                              MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField),
         pSVar3 == (System_Object_array *)0x0)) goto label_181e05563;
      for (uVar5 = 0; (int)uVar5 < (int)pSVar3->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pSVar3->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (TMPro_TMP_InputField_o *)pSVar3->m_Items[(int)uVar5];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if ((__this_00 == (TMPro_TMP_InputField_o *)0x0) ||
             (__this_01 = (UnityEngine_Object_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_Object_o *)0x0)) goto label_181e05563;
          pSVar4 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
          bVar1 = System_String__op_Equality(pSVar4,id,(MethodInfo *)0x0);
          if (bVar1) {
            pSVar4 = value;
            if (value == (System_String_o *)0x0) {
              pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            }
            TMPro_TMP_InputField__SetTextWithoutNotify(__this_00,pSVar4,(MethodInfo *)0x0);
            TMPro_TMP_InputField__ForceLabelUpdate(__this_00,(MethodInfo *)0x0);
          }
        }
      }
    }
    return;
  }
label_181e05563:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont (UnityEngine_GameObject_o* source, System_String_o* id, System_String_o* font, const MethodInfo* method);
// 0x181e04b70

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
               (UnityEngine_GameObject_o *source,System_String_o *id,System_String_o *font,MethodInfo *method)

{
  TMPro_TMP_InputField_o *input;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344bfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344bfe = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_181e04d6d;
    pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  if (Il2CppMethodInitialized_184344c06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c06 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar2,true,
                          (MethodInfo_665440 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField),
     pSVar3 != (System_Object_array *)0x0)) {
    uVar4 = 0;
    do {
      if ((int)pSVar3->max_length <= (int)uVar4) {
        return;
      }
      if ((uint)pSVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      input = (TMPro_TMP_InputField_o *)pSVar3->m_Items[(int)uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((input == (TMPro_TMP_InputField_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)input,(MethodInfo *)0x0)
           , __this == (UnityEngine_Object_o *)0x0)) break;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
          }
          PatreonEffects_NameFontCatalog__Apply_20cbe80(input,font,(MethodInfo *)0x0);
        }
      }
      uVar4 = uVar4 + 1;
    } while( true );
  }
label_181e04d6d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$VisibleText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__VisibleText (System_String_o* value, const MethodInfo* method);
// 0x181e05ff0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__VisibleText(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344bff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184344bff = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar1 = MiscExtensions__StripRichText(value,(MethodInfo *)0x0);
  pSVar1 = MiscExtensions__StripHex(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__Build (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e04510

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344c00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"-field");
    Il2CppMethodInitialized_184344c00 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)(__this->fields)._id,(Il2CppObject *)(__this->fields)._value,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__17_0,
               (MethodInfo *)0x0);
    id = System_String__Concat_1969e50((__this->fields)._id,"-field",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,5.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"default",(System_Action_AottgUi__o *)__this_01,id,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).active = (__this->fields)._enabled;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$IsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, bool fallback, const MethodInfo* method);
// 0x181e04830

bool Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *id,bool fallback,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  System_String_o *key;
  
  if (Il2CppMethodInitialized_184344c01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c01 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181e0497c;
    x = UnityEngine_GameObject__GetComponentInParent_object_
                  (__this,(MethodInfo_6F53B0 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    x = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (x == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_181e0497c:
      ThrowNullReferenceException();
    }
    if ((x->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      __this_00 = (x->fields)._State_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
      }
      if (Il2CppMethodInitialized_184344c04 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".enabled");
        Il2CppMethodInitialized_184344c04 = '\x01';
      }
      key = System_String__Concat_1969e50(id,".enabled",(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(__this_00,key,fallback,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFromInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x181e04d80

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *id,
               System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  TMPro_TMP_InputField_o *__this_01;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_184344c02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c02 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181e04ff5;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
  }
  else {
    __this_01 = (TMPro_TMP_InputField_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_01 == (TMPro_TMP_InputField_o *)0x0) goto label_181e04ff5;
    ppSVar3 = &(__this_01->fields).m_Text;
  }
  else {
    ppSVar3 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  pSVar2 = *ppSVar3;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  if (Il2CppMethodInitialized_184344c03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_184344c03 = '\x01';
  }
  if (pSVar2 == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar2 = MiscExtensions__StripRichText(pSVar2,(MethodInfo *)0x0);
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace_1970e80
                       (pSVar2,"\n",
                        (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_01 == (TMPro_TMP_InputField_o *)0x0) goto label_181e04ff5;
      bVar1 = System_String__op_Inequality((__this_01->fields).m_Text,pSVar2,(MethodInfo *)0x0);
      if (bVar1) {
        TMPro_TMP_InputField__SetTextWithoutNotify(__this_01,pSVar2,(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values;
    pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__FromEditableRaw(pSVar2,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)id,(Il2CppObject *)pSVar2,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      if (changed != (System_Action_GisketchActionContext__o *)0x0) {
        local_28 = *(undefined4 *)&(context->fields).ElementId;
        uStack_24 = *(undefined4 *)((longlong)&(context->fields).ElementId + 4);
        uStack_20 = *(undefined4 *)&(context->fields).GameObject;
        uStack_1c = *(undefined4 *)((longlong)&(context->fields).GameObject + 4);
        local_18 = *(undefined4 *)&(context->fields).Node;
        uStack_14 = *(undefined4 *)((longlong)&(context->fields).Node + 4);
        iStack_10 = (context->fields).InputSource;
        uStack_c = *(undefined4 *)&(context->fields).field_0x1c;
        (*(code *)(changed->fields).invoke_impl)
                  ((changed->fields).method_code,&local_28,(changed->fields).method);
      }
      return;
    }
  }
label_181e04ff5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$CleanInput
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput (System_String_o* value, const MethodInfo* method);
// 0x181e04750

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344c03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_184344c03 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar1 = MiscExtensions__StripRichText(value,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace_1970e80
                       (pSVar1,"\n",
                        (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$EnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__EnabledKey (System_String_o* id, const MethodInfo* method);
// 0x181e047f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__EnabledKey(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344c04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".enabled");
    Il2CppMethodInitialized_184344c04 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(id,".enabled",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetInputText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x181e05180
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0521f: nop 
// asm:   0x181e05299: mov rdx, rbp
// asm:   0x181e0529c: jmp 0x181e052af
// asm:   0x181e052cd: mov rsi, qword ptr [rsp + 0x30]
// asm:   0x181e052d2: mov rdi, qword ptr [rsp + 0x38]

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,MethodInfo *method)

{
  TMPro_TMP_InputField_o *__this;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c05 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_665440 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField),
       pSVar2 == (System_Object_array *)0x0)) {
label_181e052ee:
      ThrowNullReferenceException();
    }
    for (uVar4 = 0; (int)uVar4 < (int)pSVar2->max_length; uVar4 = uVar4 + 1) {
      if ((uint)pSVar2->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      __this = (TMPro_TMP_InputField_o *)pSVar2->m_Items[(int)uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((__this == (TMPro_TMP_InputField_o *)0x0) ||
           (__this_00 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_Object_o *)0x0)) goto label_181e052ee;
        pSVar3 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar3,id,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar3 = value;
          if (value == (System_String_o *)0x0) {
            pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          }
          TMPro_TMP_InputField__SetTextWithoutNotify(__this,pSVar3,(MethodInfo *)0x0);
          TMPro_TMP_InputField__ForceLabelUpdate(__this,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetInputFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputFont (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* font, const MethodInfo* method);
// 0x181e05000
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0514c: mov rsi, qword ptr [rsp + 0x30]
// asm:   0x181e05151: mov rdi, qword ptr [rsp + 0x38]

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputFont
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *font,MethodInfo *method)

{
  TMPro_TMP_InputField_o *input;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344c06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c06 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_665440 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField),
       pSVar2 == (System_Object_array *)0x0)) {
label_181e0516d:
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      input = (TMPro_TMP_InputField_o *)pSVar2->m_Items[(int)uVar3];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((input == (TMPro_TMP_InputField_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)input,(MethodInfo *)0x0)
           , __this == (UnityEngine_Object_o *)0x0)) goto label_181e0516d;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
          }
          PatreonEffects_NameFontCatalog__Apply_20cbe80(input,font,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFieldVisible
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible (UnityEngine_GameObject_o* source, System_String_o* id, bool visible, const MethodInfo* method);
// 0x181e04990
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e04a8e: nop 

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible
               (UnityEngine_GameObject_o *source,System_String_o *id,bool visible,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  System_String_o *b;
  UnityEngine_GameObject_o *__this_00;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344c07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-field");
    Il2CppMethodInitialized_184344c07 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_181e04b5f;
    pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar2,true,
                          (MethodInfo_665440 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_Transform),
     pSVar3 != (System_Object_array *)0x0)) {
    uVar4 = 0;
    do {
      if ((int)pSVar3->max_length <= (int)uVar4) {
        return;
      }
      if ((uint)pSVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar3->m_Items[(int)uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) break;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        b = System_String__Concat_1969e50(id,"-field",(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
        if (bVar1) {
          __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
          UnityEngine_GameObject__SetActive(__this_00,visible,(MethodInfo *)0x0);
        }
      }
      uVar4 = uVar4 + 1;
    } while( true );
  }
label_181e04b5f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___cctor (const MethodInfo* method);
// 0x181e06060

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  
  if (Il2CppMethodInitialized_184344c08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_40dd6f8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184344c08 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_40dd6f8
            );
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__17_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__17_0 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x181e05570

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__17_0
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344c09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__17_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"accountInputLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    Il2CppMethodInitialized_184344c09 = '\x01';
  }
  if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (field,(__this->fields)._label,"accountInputLabel",(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar2 = (__this->fields)._labelKey;
      (pGVar1->fields).textKey = pSVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,pSVar2);
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__17_1,
                 (MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969e50((__this->fields)._id,"-row",(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (field,"row",(System_Action_AottgUi__o *)__this_00,pSVar2,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__17_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__17_1 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e05790

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__17_1
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row
               ,MethodInfo *method)

{
  System_String_o *label;
  System_String_o *placeholder;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar5;
  System_String_o *pSVar6;
  System_Nullable_bool__Fields local_res8 [4];
  System_Nullable_bool__Fields local_res10 [4];
  
  if (Il2CppMethodInitialized_184344c0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__17_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__17_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"characterTextInput");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SetEffects");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/SparkleIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"-set-effects");
    il2cpp_codegen_initialize_runtime_metadata(&"Set Effects");
    Il2CppMethodInitialized_184344c0a = '\x01';
  }
  pSVar6 = (__this->fields)._id;
  label = (__this->fields)._label;
  placeholder = (__this->fields)._placeholder;
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (pDVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__17_2,
             (MethodInfo_1387DC0 *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__FormInput
                       (row,pSVar6,label,placeholder,0,"characterTextInput",pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)pDVar3,0.2,0x200,
                        (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
                       );
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar6 = (__this->fields)._placeholderKey;
      (pGVar4->fields).textKey = pSVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textKey,pSVar6);
      pSVar6 = (__this->fields)._value;
      (pGVar4->fields).value = pSVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).value,pSVar6);
      local_res8[0].hasValue = false;
      local_res8[0].value = false;
      System_Nullable_bool____ctor
                ((System_Data_SqlTypes_SqlByte_o *)local_res8,(__this->fields)._enabled,
                 MethodInfo_System_Nullable_bool_ctor);
      (pGVar4->fields).enabled.fields = local_res8[0];
      pGVar5 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar5,(MethodInfo *)0x0);
      pSVar6 = (__this->fields)._id;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
      }
      if (Il2CppMethodInitialized_184344c04 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".enabled");
        Il2CppMethodInitialized_184344c04 = '\x01';
      }
      pSVar6 = System_String__Concat_1969e50(pSVar6,".enabled",(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (pGVar5->fields).enabled = pSVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).enabled,pSVar6);
        (pGVar4->fields).bind = pGVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind,pGVar5);
        pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (pDVar3,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__17_3,
                   (MethodInfo_1387DC0 *)0x0);
        pSVar6 = System_String__Concat_1969e50((__this->fields)._id,"-set-effects",(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_18c6e10
                           (row,0,"MainMenu.Profile.SetEffects","Set Effects",
                            (System_Action_GisketchActionContext__o *)pDVar3,pSVar6,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"UI/Icons/Profile/SparkleIcon",
                            (MethodInfo *)0x0);
        local_res10[0].hasValue = false;
        local_res10[0].value = false;
        System_Nullable_bool____ctor
                  ((System_Data_SqlTypes_SqlByte_o *)local_res10,(__this->fields)._enabled,
                   MethodInfo_System_Nullable_bool_ctor);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar4->fields).enabled.fields = local_res10[0];
          pGVar5 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar5,(MethodInfo *)0x0);
          pSVar6 = (__this->fields)._id;
          if (Il2CppMethodInitialized_184344c04 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&".enabled");
            Il2CppMethodInitialized_184344c04 = '\x01';
          }
          pSVar6 = System_String__Concat_1969e50(pSVar6,".enabled",(MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
            (pGVar5->fields).enabled = pSVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar5->fields).enabled,pSVar6);
            (pGVar4->fields).bind = pGVar5;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind,pGVar5);
            pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(160.0,(MethodInfo *)0x0);
            pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            (pGVar4->fields).layout = pGVar2;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout,pGVar2);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__17_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__17_2 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e05ca0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__17_2
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_String_o *id;
  System_Action_GisketchActionContext__o *changed;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184344c0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    Il2CppMethodInitialized_184344c0b = '\x01';
  }
  id = (__this->fields)._id;
  changed = (__this->fields)._changed;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput(&local_28,id,changed,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__17_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__17_3 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e05d30

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__17_3
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_String_o *str0;
  System_String_o *label;
  System_String_o *effectPrefix;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  UnityEngine_Object_o *x;
  bool bVar1;
  bool fallback;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x_00;
  System_String_o *key;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_68;
  
  if (Il2CppMethodInitialized_184344c0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    Il2CppMethodInitialized_184344c0c = '\x01';
  }
  local_68.fields.Node = (context->fields).Node;
  local_68.fields.InputSource = (context->fields).InputSource;
  local_68.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  str0 = (__this->fields)._id;
  label = (__this->fields)._label;
  effectPrefix = (__this->fields)._effectPrefix;
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  fallback = (__this->fields)._enabled;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  if (Il2CppMethodInitialized_184344c01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c01 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_181e05f19;
    x_00 = UnityEngine_GameObject__GetComponentInParent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    x_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (x_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_181e05f19:
      ThrowNullReferenceException();
    }
    if ((x_00->fields)._State_k__BackingField != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      __this_00 = (x_00->fields)._State_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
      }
      if (Il2CppMethodInitialized_184344c04 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".enabled");
        Il2CppMethodInitialized_184344c04 = '\x01';
      }
      key = System_String__Concat_1969e50(str0,".enabled",(MethodInfo *)0x0);
      fallback = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(__this_00,key,fallback,(MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  local_68.fields.ElementId = (context->fields).ElementId;
  local_68.fields.GameObject = (context->fields).GameObject;
  local_68.fields.Node = (context->fields).Node;
  local_68.fields.InputSource = (context->fields).InputSource;
  local_68.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open
            (&local_68,str0,label,effectPrefix,fallback,(MethodInfo *)0x0);
  return;
}


