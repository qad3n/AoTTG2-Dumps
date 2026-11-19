// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextField
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextField.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextField.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___c__DisplayClass15_0___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextField___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x58eeff0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___c__DisplayClass15_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField___c__DisplayClass15_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField.<>c__DisplayClass15_0$$<Build>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___c__DisplayClass15_0___Build_b__1 (Gisketch_Aottg2UI_Game_AottgCharacterTextField___c__DisplayClass15_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58ef120
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ef40c: cmp byte ptr [rip + 0x1c56165], 0
// asm:   0x58ef413: jne 0x58ef428
// asm:   0x58ef68e: jmp 0x58ef428

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___c__DisplayClass15_0___Build_b__1
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField___c__DisplayClass15_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_GisketchActionContext__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar7;
  System_String_o *pSVar8;
  System_Nullable_bool__Fields aSStack_50 [4];
  System_Nullable_bool__Fields aSStack_48 [4];
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_07545580 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__15_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__15_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"characterTextInput");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SetEffects");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/SparkleIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"-set-effects");
    Il2CppMethodInitialized_07545580 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) &&
     (pGVar6 = (__this->fields).label, pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    pSVar8 = (pGVar1->fields)._id;
    pSStack_38 = (pGVar6->fields).text;
    pSVar2 = (pGVar1->fields)._placeholderKey;
    pGStack_40 = row;
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).__4__this;
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar5,(Il2CppObject *)pGVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__15_2,
               (MethodInfo_4A803E0 *)0x0);
    if (pGStack_40 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__FormInput
                         (pGStack_40,pSVar8,pSStack_38,pSVar2,0,"characterTextInput",pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar5,0.2,0x200,
                          (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar1 = (__this->fields).__4__this;
      if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) &&
         (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar6->fields).textKey = (pGVar1->fields)._placeholderKey;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).textKey);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
          (pGVar6->fields).value = (pGVar1->fields)._value;
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).value);
          pGVar1 = (__this->fields).__4__this;
          if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
            aSStack_48[0].hasValue = false;
            aSStack_48[0].value = false;
            System_Nullable_bool____ctor
                      ((System_Nullable_bool__o *)aSStack_48,(pGVar1->fields)._enabled,
                       (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
            (pGVar6->fields).enabled.fields = aSStack_48[0];
            pGVar7 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar7,(MethodInfo *)0x0);
            pGVar1 = (__this->fields).__4__this;
            if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
              pSVar8 = (pGVar1->fields)._id;
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
              }
              if (Il2CppMethodInitialized_07545578 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&".enabled");
                Il2CppMethodInitialized_07545578 = '\x01';
              }
              pSVar8 = System_String__Concat_52f0320(pSVar8,".enabled",(MethodInfo *)0x0);
              if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
                (pGVar7->fields).enabled = pSVar8;
                Il2CppCodeGenWriteBarrier(&(pGVar7->fields).enabled);
                (pGVar6->fields).bind = pGVar7;
                Il2CppCodeGenWriteBarrier(&(pGVar6->fields).bind);
                pGVar1 = (__this->fields).__4__this;
                pSVar5 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                System_Action_GisketchActionContext____ctor
                          (pSVar5,(Il2CppObject *)pGVar1,
                           (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__15_3,
                           (MethodInfo_4A803E0 *)0x0);
                pGVar1 = (__this->fields).__4__this;
                if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
                  pSVar8 = System_String__Concat_52f0320
                                     ((pGVar1->fields)._id,"-set-effects",(MethodInfo *)0x0);
                  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
                                     (pGStack_40,0,"MainMenu.Profile.SetEffects",pSVar5,pSVar8,(System_String_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                      "UI/Icons/Profile/SparkleIcon",(MethodInfo *)0x0);
                  pGVar1 = (__this->fields).__4__this;
                  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
                    aSStack_50[0].hasValue = false;
                    aSStack_50[0].value = false;
                    System_Nullable_bool____ctor
                              ((System_Nullable_bool__o *)aSStack_50,(pGVar1->fields)._enabled,
                               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
                    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                      (pGVar6->fields).enabled.fields = aSStack_50[0];
                      pGVar7 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)
                                          TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
                      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar7,(MethodInfo *)0x0);
                      pGVar1 = (__this->fields).__4__this;
                      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
                        pSVar8 = (pGVar1->fields)._id;
                        if (Il2CppMethodInitialized_07545578 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&".enabled");
                          Il2CppMethodInitialized_07545578 = '\x01';
                        }
                        pSVar8 = System_String__Concat_52f0320(pSVar8,".enabled",(MethodInfo *)0x0)
                        ;
                        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
                          (pGVar7->fields).enabled = pSVar8;
                          Il2CppCodeGenWriteBarrier(&(pGVar7->fields).enabled);
                          (pGVar6->fields).bind = pGVar7;
                          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).bind);
                          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(160.0,(MethodInfo *)0x0);
                          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                             ("Column",(System_String_o *)0x0,
                                              (System_String_o *)0x0,(System_String_o *)0x0,
                                              (System_String_o *)0x0,0.0,pGVar3,
                                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,
                                              0.0,0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
                          (pGVar6->fields).layout = pGVar4;
                          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, System_String_o* id, System_String_o* labelKey, System_String_o* placeholderKey, System_String_o* value, bool enabled, System_String_o* effectPrefix, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x58edf10

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,System_String_o *id,
               System_String_o *labelKey,System_String_o *placeholderKey,System_String_o *value,bool enabled,
               System_String_o *effectPrefix,System_Action_GisketchActionContext__o *changed,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._labelKey = labelKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelKey);
  (__this->fields)._placeholderKey = placeholderKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._placeholderKey);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value);
  (__this->fields)._enabled = enabled;
  (__this->fields)._effectPrefix = effectPrefix;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._effectPrefix);
  (__this->fields)._changed = changed;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._changed);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value (System_String_o* id, System_String_o* fallback, const MethodInfo* method);
// 0x58df000
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58df085: mov rbx, qword ptr [rsp + 8]
// asm:   0x58df08a: jmp 0x58df0a9

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
          (System_String_o *id,System_String_o *fallback,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  System_String_o *local_20;
  
  if (Il2CppMethodInitialized_07545570 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_07545570 = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)id,(Il2CppObject **)&local_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  if ((!bVar1) && (local_20 = fallback, fallback == (System_String_o *)0x0)) {
    local_20 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return local_20;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue (UnityEngine_GameObject_o* source, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x58e55f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e5633: jmp 0x58e5739

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue
               (UnityEngine_GameObject_o *source,System_String_o *id,System_String_o *value,MethodInfo *method
               )

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545571 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545571 = '\x01';
    if (value == (System_String_o *)0x0) goto label_058e5668;
label_058e5610:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor != 0)
    goto label_058e5624;
label_058e5694:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item;
  }
  else {
    if (value != (System_String_o *)0x0) goto label_058e5610;
label_058e5668:
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0)
    goto label_058e5694;
label_058e5624:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item;
  }
  MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item = method_00;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_058e5739:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this,(Il2CppObject *)id,(Il2CppObject *)value,(MethodInfo_4AAD4C0 *)method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_058e5739;
    pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText(pUVar2,id,value,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont (UnityEngine_GameObject_o* source, System_String_o* id, System_String_o* font, const MethodInfo* method);
// 0x58df7c0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
               (UnityEngine_GameObject_o *source,System_String_o *id,System_String_o *font,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  
  if (Il2CppMethodInitialized_07545572 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545572 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
        goto label_058df844;
      }
    }
    ThrowNullReferenceException();
  }
label_058df844:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputFont(pUVar2,id,font,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$VisibleText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__VisibleText (System_String_o* value, const MethodInfo* method);
// 0x58ee380
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ee38d: test rbx, rbx
// asm:   0x58ee390: je 0x58ee3d2

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__VisibleText(System_String_o *value,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545573 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_07545573 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (((Il2CppClass *)TypeInfo_MiscExtensions)->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_MiscExtensions)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar2 = MiscExtensions__StripRichText(value,(MethodInfo *)0x0);
  pSVar2 = MiscExtensions__StripHex(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__Build (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58ee410
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ee456: jmp 0x58ee614

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Action_AottgUi__o *__this_01;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_07545574 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"-field");
    Il2CppMethodInitialized_07545574 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField)->static_fields;
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)(__this->fields)._id,(Il2CppObject *)(__this->fields)._value,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_Build_b__15_0,
               (MethodInfo_4A81BE0 *)0x0);
    id = System_String__Concat_52f0320((__this->fields)._id,"-field",(MethodInfo *)0x0);
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
    if ((ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
       (pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (ui,"default",__this_01,id,layout,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
       pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      (pGVar2->fields).active = (__this->fields)._enabled;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$IsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, bool fallback, const MethodInfo* method);
// 0x58ee620

bool Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,bool fallback,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x;
  System_String_o *key;
  
  if (Il2CppMethodInitialized_07545575 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545575 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_058ee754;
    x = UnityEngine_GameObject__GetComponentInParent_object_
                  (context.fields.GameObject,
                   (MethodInfo_353BB40 *)MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot
                  );
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (x == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
label_058ee754:
      ThrowNullReferenceException();
    }
    __this = (x->fields)._State_k__BackingField;
    if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
      }
      if (Il2CppMethodInitialized_07545578 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&".enabled");
        Il2CppMethodInitialized_07545578 = '\x01';
      }
      key = System_String__Concat_52f0320(id,".enabled",(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(__this,key,fallback,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFromInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x58ee7a0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
               System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *x;
  bool bVar1;
  TMPro_TMP_InputField_o *__this_00;
  System_String_o **ppSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R9;
  bool local_41;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07545576 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545576 = '\x01';
  }
  x = (UnityEngine_Object_o *)context.fields.GameObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (TMPro_TMP_InputField_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_058ee9de;
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)x,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField
                          );
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto label_058ee9de;
    ppSVar2 = &(__this_00->fields).m_Text;
  }
  else {
    ppSVar2 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  pSVar3 = *ppSVar2;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput(pSVar3,method_01);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto label_058ee9de;
    bVar1 = System_String__op_Inequality((__this_00->fields).m_Text,pSVar3,(MethodInfo *)0x0);
    if (bVar1) {
      TMPro_TMP_InputField__SetTextWithoutNotify(__this_00,pSVar3,(MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values;
  local_40 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
  local_38 = (System_String_o *)0x0;
  if (pSVar3 == (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_57e90b0
                    (pSVar3,(Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,&local_40,
                     &local_38,&local_41,in_R9);
  if (bVar1) {
    if (local_40 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) goto label_058ee9de;
    pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                       ((local_40->fields).Text,
                        (System_Collections_Generic_IList_string__o *)(local_40->fields).Colors,method_00);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)id,(Il2CppObject *)pSVar3,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    if (changed != (System_Action_GisketchActionContext__o *)0x0) {
      (*(code *)(changed->fields).invoke_impl)((changed->fields).method_code,(changed->fields).method);
    }
    return;
  }
label_058ee9de:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$CleanInput
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput (System_String_o* value, const MethodInfo* method);
// 0x58ee9f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58ee9fd: test rbx, rbx
// asm:   0x58eea00: je 0x58eea7d

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput(System_String_o *value,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545577 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_07545577 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (((Il2CppClass *)TypeInfo_MiscExtensions)->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_MiscExtensions)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar2 = MiscExtensions__StripRichText(value,(MethodInfo *)0x0);
  if (pSVar2 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__Replace_5304550
                     (pSVar2,"\n",(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                      (MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$EnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__EnabledKey (System_String_o* id, const MethodInfo* method);
// 0x58ee760

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__EnabledKey(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545578 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".enabled");
    Il2CppMethodInitialized_07545578 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,".enabled",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetInputText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x58edfe0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  TMPro_TMP_InputField_o *pTVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *pUVar6;
  System_String_o *pSVar7;
  int iVar8;
  ulong uVar9;
  
  if (Il2CppMethodInitialized_07545579 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545579 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((root == (UnityEngine_Transform_o *)0x0) ||
     (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)root,true,
                          (MethodInfo_34B1260 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField),
     pSVar4 == (System_Object_array *)0x0)) {
label_058ee1f4:
    ThrowNullReferenceException();
  }
  iVar8 = (int)pSVar4->max_length;
  uVar5 = pSVar4->max_length & 0xffffffff;
  if (value == (System_String_o *)0x0) {
    if (iVar8 < 1) {
      return;
    }
    uVar9 = 0;
    while (uVar9 < uVar5) {
      pTVar2 = (TMPro_TMP_InputField_o *)pSVar4->m_Items[uVar9];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
           (pUVar6 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
           pUVar6 == (UnityEngine_Object_o *)0x0)) goto label_058ee1f4;
        pSVar7 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality(pSVar7,id,(MethodInfo *)0x0);
        if (bVar3) {
          TMPro_TMP_InputField__SetTextWithoutNotify
                    (pTVar2,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
          TMPro_TMP_InputField__ForceLabelUpdate(pTVar2,(MethodInfo *)0x0);
        }
      }
      uVar9 = uVar9 + 1;
      uVar1 = (uint)pSVar4->max_length;
      uVar5 = (ulong)uVar1;
      if ((long)(int)uVar1 <= (long)uVar9) {
        return;
      }
    }
  }
  else {
    if (iVar8 < 1) {
      return;
    }
    uVar9 = 0;
    while (uVar9 < uVar5) {
      pTVar2 = (TMPro_TMP_InputField_o *)pSVar4->m_Items[uVar9];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
           (pUVar6 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
           pUVar6 == (UnityEngine_Object_o *)0x0)) goto label_058ee1f4;
        pSVar7 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality(pSVar7,id,(MethodInfo *)0x0);
        if (bVar3) {
          TMPro_TMP_InputField__SetTextWithoutNotify(pTVar2,value,(MethodInfo *)0x0);
          TMPro_TMP_InputField__ForceLabelUpdate(pTVar2,(MethodInfo *)0x0);
        }
      }
      uVar9 = uVar9 + 1;
      uVar1 = (uint)pSVar4->max_length;
      uVar5 = (ulong)uVar1;
      if ((long)(int)uVar1 <= (long)uVar9) {
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetInputFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputFont (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* font, const MethodInfo* method);
// 0x58ee200

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputFont
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *font,MethodInfo *method)

{
  uint uVar1;
  TMPro_TMP_InputField_o *input;
  bool bVar2;
  System_Object_array *pSVar3;
  ulong uVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_0754557a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754557a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((root == (UnityEngine_Transform_o *)0x0) ||
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)root,true,
                          (MethodInfo_34B1260 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField),
     pSVar3 == (System_Object_array *)0x0)) {
label_058ee377:
    ThrowNullReferenceException();
  }
  if ((int)pSVar3->max_length < 1) {
    return;
  }
  uVar4 = pSVar3->max_length & 0xffffffff;
  uVar5 = 0;
  do {
    if (uVar4 <= uVar5) {
      ThrowIndexOutOfRangeException();
    }
    input = (TMPro_TMP_InputField_o *)pSVar3->m_Items[uVar5];
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if ((input == (TMPro_TMP_InputField_o *)0x0) ||
         (__this = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)input,(MethodInfo *)0x0),
         __this == (UnityEngine_Object_o *)0x0)) goto label_058ee377;
      a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
        }
        PatreonEffects_NameFontCatalog__Apply_58c81e0(input,font,(MethodInfo *)0x0);
      }
    }
    uVar5 = uVar5 + 1;
    uVar1 = (uint)pSVar3->max_length;
    uVar4 = (ulong)uVar1;
    if ((long)(int)uVar1 <= (long)uVar5) {
      return;
    }
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFieldVisible
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible (UnityEngine_GameObject_o* source, System_String_o* id, bool visible, const MethodInfo* method);
// 0x58eeac0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible
               (UnityEngine_GameObject_o *source,System_String_o *id,bool visible,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  System_String_o *b;
  UnityEngine_GameObject_o *__this_00;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_0754557b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-field");
    Il2CppMethodInitialized_0754557b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_058eec91;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar3,true,
                          (MethodInfo_34B1260 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_Transform),
     pSVar4 != (System_Object_array *)0x0)) {
    if ((int)pSVar4->max_length < 1) {
      return;
    }
    uVar5 = pSVar4->max_length & 0xffffffff;
    uVar6 = 0;
    do {
      if (uVar5 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar6];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) break;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        b = System_String__Concat_52f0320(id,"-field",(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
        if (bVar2) {
          __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
          UnityEngine_GameObject__SetActive(__this_00,visible,(MethodInfo *)0x0);
        }
      }
      uVar6 = uVar6 + 1;
      uVar1 = (uint)pSVar4->max_length;
      uVar5 = (ulong)uVar1;
      if ((long)(int)uVar1 <= (long)uVar6) {
        return;
      }
    } while( true );
  }
label_058eec91:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___cctor (const MethodInfo* method);
// 0x58eeca0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58eecc8: cmp byte ptr [rip + 0x1c53bb7], 0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  
  if (Il2CppMethodInitialized_0754557c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_0754557c = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38
            );
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->static_fields->Values);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_0 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x58eede0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_0
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterTextField___c__DisplayClass15_0_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_Action_AottgUi__o *__this_01;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754557d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_c__DisplayClass15_0_Build_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"accountInputLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    Il2CppMethodInitialized_0754557d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_c__DisplayClass15_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField___c__DisplayClass15_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                         (field,(__this->fields)._labelKey,"accountInputLabel",(System_String_o *)0x0,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      (__this_00->fields).label = pGVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).label);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField_c__DisplayClass15_0_Build_b__1,
                 (MethodInfo_4A81BE0 *)0x0);
      id = System_String__Concat_52f0320((__this->fields)._id,"-row",(MethodInfo *)0x0);
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
                (field,"row",__this_01,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_2 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58ef000

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_2
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *id;
  System_Action_GisketchActionContext__o *changed;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_0754557e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    Il2CppMethodInitialized_0754557e = '\x01';
    in_RDX = extraout_RDX;
  }
  id = (__this->fields)._id;
  changed = (__this->fields)._changed;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    in_RDX = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput(context,id,changed,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_3 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58ef060

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_3
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *effectPrefix;
  bool bVar1;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_0754557f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    Il2CppMethodInitialized_0754557f = '\x01';
    in_RDX = extraout_RDX;
  }
  id = (__this->fields)._id;
  effectPrefix = (__this->fields)._effectPrefix;
  bVar1 = (__this->fields)._enabled;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    in_RDX = extraout_RDX_00;
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled(context,id,bVar1,in_RDX);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open(context,id,effectPrefix,bVar1,in_RCX);
  return;
}


