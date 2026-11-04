// Type: Gisketch.Aottg2UI.Game.AottgGameCreateSession
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateSession.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___cctor (const MethodInfo* method);
// 0x181defed0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this;
  
  if (Il2CppMethodInitialized_184344a52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184344a52 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Begin>b__84_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Begin_b__84_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x181de7f30

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Begin_b__84_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,Map_Experience_o *item,
               MethodInfo *method)

{
  System_String_o *a;
  Settings_InGameSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344a53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344a53 = '\x01';
  }
  if (item != (Map_Experience_o *)0x0) {
    a = (item->fields).Name;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).ExperienceName, pSVar2 != (Settings_StringSetting_o *)0x0)) {
      bVar3 = System_String__Equals_196c550(a,(pSVar2->fields)._value,5,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Categories>b__88_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__88_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x1818d9d00

System_String_o*
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__88_0(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Map_Experience_o* item, MethodInfo* method)

{
  if (item != (Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *)0x0) {
    return (item->fields).id;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Categories>b__88_1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__88_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181dec220

bool
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__88_1(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Categories>b__88_2
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__88_2 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181dec240

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__88_2
                  (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *value,
                  MethodInfo *method)

{
  System_String_array *pSVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184344a54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    Il2CppMethodInitialized_184344a54 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  iVar2 = System_Array__IndexOf_object_
                    ((System_Object_array *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->CategoryOrder,
                     (Il2CppObject *)value,(MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
  if (iVar2 < 0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->CategoryOrder;
    if (pSVar1 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    iVar2 = (int32_t)pSVar1->max_length;
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Subcategories>b__89_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__89_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x181decc80

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__89_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,Map_Experience_o *item,
               MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344a55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344a55 = '\x01';
  }
  if (item != (Map_Experience_o *)0x0) {
    a = (item->fields).Category;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3b = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar1 = System_String__Equals_196c550
                      (a,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                         _Category_k__BackingField,5,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Subcategories>b__89_1
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__89_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x181dd0410

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__89_1
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,Map_Experience_o *item,
          MethodInfo *method)

{
  if (item != (Map_Experience_o *)0x0) {
    return (item->fields).SubCategory;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Subcategories>b__89_2
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__89_2 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181dec220

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__89_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<VisibleFields>b__95_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___VisibleFields_b__95_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x181decdb0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___VisibleFields_b__95_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,
               Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  if (field != (Settings_ExperienceRuleField_o *)0x0) {
    return (field->fields).Visible;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<LockedFields>b__96_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___LockedFields_b__96_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x181decc20

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___LockedFields_b__96_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,
               Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  if (field != (Settings_ExperienceRuleField_o *)0x0) {
    return (field->fields).Locked;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<AutofillTitanSpawnProbabilities>b__112_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AutofillTitanSpawnProbabilities_b__112_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, float value, const MethodInfo* method);
// 0x181de7ec0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AutofillTitanSpawnProbabilities_b__112_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,float value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344a56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_184344a56 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  return ABS(value) < 0.0001;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<AutofillTitanSpawnProbabilities>b__112_1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AutofillTitanSpawnProbabilities_b__112_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, float value, const MethodInfo* method);
// 0x181de7f20

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AutofillTitanSpawnProbabilities_b__112_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,float value,MethodInfo *method)

{
  return 0.0 < value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__123_2
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__123_2 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Settings_ExperienceRuleField_o* candidate, const MethodInfo* method);
// 0x181dec670

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__123_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,
               Settings_ExperienceRuleField_o *candidate,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344a57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    Il2CppMethodInitialized_184344a57 = '\x01';
  }
  if (candidate != (Settings_ExperienceRuleField_o *)0x0) {
    bVar1 = System_String__Equals_196c550((candidate->fields).Id,"general.MapCategory",5,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__123_3
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__123_3 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1808e13a0

System_String_o*
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__123_3(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__123_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__123_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1808e13a0

System_String_o*
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__123_0(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__123_1
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__123_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1808e13a0

System_String_o*
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__123_1(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<SandboxMapNames>b__124_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___SandboxMapNames_b__124_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1808e13a0

System_String_o*
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___SandboxMapNames_b__124_0(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<PresetNames>b__125_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___PresetNames_b__125_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1808e13a0

System_String_o*
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___PresetNames_b__125_0(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* name, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<RefreshSandbox>b__143_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___RefreshSandbox_b__143_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1808e13a0

System_String_o*
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___RefreshSandbox_b__143_0(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<RebuildSandboxFields>b__144_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___RebuildSandboxFields_b__144_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_Collections_Generic_KeyValuePair_string__Dictionary_string__BaseSetting___o item, const MethodInfo* method);
// 0x181decc40

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___RebuildSandboxFields_b__144_0
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__Dictionary_string__BaseSetting___o *item,
          MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344a58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_BaseSetting_get_Key
              );
    Il2CppMethodInitialized_184344a58 = 1;
    return (item->fields).key;
  }
  return (item->fields).key;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<AddDynamicFields>b__148_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AddDynamicFields_b__148_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_Collections_Generic_KeyValuePair_string__BaseSetting__o item, const MethodInfo* method);
// 0x181de7e80

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AddDynamicFields_b__148_0
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__BaseSetting__o *item,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344a59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Key);
    Il2CppMethodInitialized_184344a59 = 1;
    return (item->fields).key;
  }
  return (item->fields).key;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<MetadataOptions>b__153_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___MetadataOptions_b__153_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* item, const MethodInfo* method);
// 0x181dd0430

System_String_o*
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___MetadataOptions_b__153_0(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* item, MethodInfo* method)

{
  System_String_o *pSVar1;
  
  if (x != (System_String_o *)0x0) {
    pSVar1 = System_String__Trim(x,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<MetadataOptions>b__153_1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___MetadataOptions_b__153_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* item, const MethodInfo* method);
// 0x181dd0450

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___MetadataOptions_b__153_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *item,
               MethodInfo *method)

{
  if (item != (System_String_o *)0x0) {
    return 0 < (item->fields)._stringLength;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass119_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass119_0$$<ToggleSandboxAddon>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0___ToggleSandboxAddon_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x181ded0e0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0___ToggleSandboxAddon_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344a5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344a5a = '\x01';
  }
  if (item != (Settings_StringSetting_o *)0x0) {
    bVar1 = System_String__op_Equality((item->fields)._value,(__this->fields).addonName,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass119_0$$<ToggleSandboxAddon>b__1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0___ToggleSandboxAddon_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x181ded140

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0___ToggleSandboxAddon_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344a5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344a5b = '\x01';
  }
  if (item != (Settings_StringSetting_o *)0x0) {
    bVar1 = System_String__op_Equality((item->fields)._value,(__this->fields).addonName,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass120_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass120_0$$<IsSandboxAddonSelected>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0___IsSandboxAddonSelected_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x181dedbf0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0___IsSandboxAddonSelected_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  uint uVar1;
  System_String_o *a;
  System_String_array *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344a5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344a5c = '\x01';
  }
  if (item != (Settings_StringSetting_o *)0x0) {
    a = (item->fields)._value;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
    if (pSVar2 != (System_String_array *)0x0) {
      uVar1 = (__this->fields).index;
      if (uVar1 < (uint)pSVar2->max_length) {
        bVar3 = System_String__op_Equality(a,pSVar2->m_Items[(int)uVar1],(MethodInfo *)0x0);
        return bVar3;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass127_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass127_0$$<IsFavorite>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0___IsFavorite_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x181dedc90

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0___IsFavorite_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  System_String_o *a;
  Map_Experience_o *experience;
  bool bVar1;
  System_String_o *b;
  
  if (Il2CppMethodInitialized_184344a5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344a5d = '\x01';
  }
  if (item != (Settings_StringSetting_o *)0x0) {
    a = (item->fields)._value;
    experience = (__this->fields).experience;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    b = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperienceId(experience,(MethodInfo *)0x0);
    bVar1 = System_String__Equals_196c550(a,b,5,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass128_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass128_0$$<IsFavoritePreset>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0___IsFavoritePreset_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x181dedd20

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0___IsFavoritePreset_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344a5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344a5e = '\x01';
  }
  if (item != (Settings_StringSetting_o *)0x0) {
    bVar1 = System_String__Equals_196c550((item->fields)._value,(__this->fields).name,4,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass133_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass133_0$$<ToggleFavorite>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0___ToggleFavorite_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x181dee090

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0___ToggleFavorite_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344a5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344a5f = '\x01';
  }
  if (item != (Settings_StringSetting_o *)0x0) {
    bVar1 = System_String__Equals_196c550
                      ((item->fields)._value,(__this->fields).id,(__this->fields).comparison,(MethodInfo *)0x0
                      );
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass91_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass91_0$$<ExperiencesIn>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0___ExperiencesIn_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x181def650

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0___ExperiencesIn_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0_o *__this,
               Map_Experience_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (item == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Equals_196c550((item->fields).Category,(__this->fields).category,5,(MethodInfo *)0x0)
  ;
  if (!bVar1) {
    return false;
  }
  bVar1 = System_String__Equals_196c550
                    ((item->fields).SubCategory,(__this->fields).subcategory,5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass93_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass93_0$$<CategoryPreview>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0___CategoryPreview_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x181def6b0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0___CategoryPreview_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o *__this,
               Map_Experience_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (item == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Equals_196c550((item->fields).Category,(__this->fields).category,5,(MethodInfo *)0x0)
  ;
  if (!bVar1) {
    return false;
  }
  bVar1 = System_String__IsNullOrEmpty((item->fields).Preview,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass94_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass94_0$$<SubcategoryPreview>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0___SubcategoryPreview_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x181def700

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0___SubcategoryPreview_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0_o *__this,
               Map_Experience_o *item,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344a60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344a60 = '\x01';
  }
  if (item != (Map_Experience_o *)0x0) {
    a = (item->fields).Category;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3b = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar1 = System_String__Equals_196c550
                      (a,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                         _Category_k__BackingField,5,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_String__Equals_196c550
                        ((item->fields).SubCategory,(__this->fields).subcategory,5,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = System_String__IsNullOrEmpty((item->fields).Preview,(MethodInfo *)0x0);
        return !bVar1;
      }
    }
    return false;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_LaunchContext
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_LaunchContext (const MethodInfo* method);
// 0x1823f3ae0

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_LaunchContext(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e95 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LaunchContext_k__BackingField
  ;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_LaunchContext
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_LaunchContext (int32_t value, const MethodInfo* method);
// 0x1823f43a0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_LaunchContext(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e96 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LaunchContext_k__BackingField =
       value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Working
// il2cpp: Settings_InGameSet_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Working (const MethodInfo* method);
// 0x1823f4270

Settings_InGameSet_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Working(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e97 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Working
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Working (Settings_InGameSet_o* value, const MethodInfo* method);
// 0x1823f4700

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Working
               (Settings_InGameSet_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e98 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField,
             value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Category
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Category (const MethodInfo* method);
// 0x1823f37e0

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Category(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e99 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Category
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Category (System_String_o* value, const MethodInfo* method);
// 0x1823f42c0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Category(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e9a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField
             ,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Subcategory
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Subcategory (const MethodInfo* method);
// 0x1823f40c0

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Subcategory(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e9b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Subcategory_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Subcategory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Subcategory (System_String_o* value, const MethodInfo* method);
// 0x1823f4690

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Subcategory(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e9c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Subcategory_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Subcategory_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Experience
// il2cpp: Map_Experience_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Experience (const MethodInfo* method);
// 0x1823f3830

Map_Experience_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Experience(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e9d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Experience
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Experience (Map_Experience_o* value, const MethodInfo* method);
// 0x1823f4330

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Experience(Map_Experience_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e9e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Experience_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_RuleResult
// il2cpp: Settings_ExperienceRuleResult_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_RuleResult (const MethodInfo* method);
// 0x1823f3c80

Settings_ExperienceRuleResult_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_RuleResult(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347e9f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_RuleResult
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_RuleResult (Settings_ExperienceRuleResult_o* value, const MethodInfo* method);
// 0x1823f4470

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_RuleResult
               (Settings_ExperienceRuleResult_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ea0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ea0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_LoadError
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_LoadError (const MethodInfo* method);
// 0x1823f3b30

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_LoadError(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ea1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ea1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LoadError_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_LoadError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_LoadError (System_String_o* value, const MethodInfo* method);
// 0x1823f4400

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_LoadError(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ea2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ea2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LoadError_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _LoadError_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxSection
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxSection (const MethodInfo* method);
// 0x1823f3d70

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxSection(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ea3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ea3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
         _SandboxSection_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_SandboxSection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_SandboxSection (System_String_o* value, const MethodInfo* method);
// 0x1823f44e0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_SandboxSection
               (System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ea4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_SandboxSection_k__BackingField =
       value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _SandboxSection_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowRoomSettings
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowRoomSettings (const MethodInfo* method);
// 0x1823f4020

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowRoomSettings(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ea5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ea5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
         _ShowRoomSettings_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_ShowRoomSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_ShowRoomSettings (bool value, const MethodInfo* method);
// 0x1823f4630

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_ShowRoomSettings(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ea6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ea6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
       value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowFavorites
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowFavorites (const MethodInfo* method);
// 0x1823f3f80

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowFavorites(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ea7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ea7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField
  ;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_ShowFavorites
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_ShowFavorites (bool value, const MethodInfo* method);
// 0x1823f45d0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_ShowFavorites(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ea8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ea8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField =
       value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SelectedPresetName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SelectedPresetName (const MethodInfo* method);
// 0x1823f3e10

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SelectedPresetName(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ea9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ea9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
         _SelectedPresetName_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_SelectedPresetName
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_SelectedPresetName (System_String_o* value, const MethodInfo* method);
// 0x1823f4550

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_SelectedPresetName
               (System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347eaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eaa = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_SelectedPresetName_k__BackingField =
       value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _SelectedPresetName_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowSandboxVariableNames
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowSandboxVariableNames (const MethodInfo* method);
// 0x1823f4070

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowSandboxVariableNames(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347eab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eab = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowLockedSettings
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowLockedSettings (const MethodInfo* method);
// 0x1823f3fd0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowLockedSettings(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347eac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eac = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_MapDescription
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_MapDescription (const MethodInfo* method);
// 0x1823f3b80

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_MapDescription(MethodInfo *method)

{
  Settings_SandboxGameCreateConfiguration_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347ead == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ead = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  if (pSVar1 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    return (pSVar1->fields)._MapDescription_k__BackingField;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ModeDescription
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ModeDescription (const MethodInfo* method);
// 0x1823f3be0

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ModeDescription(MethodInfo *method)

{
  Settings_SandboxGameCreateConfiguration_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347eae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eae = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  if (__this != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    pSVar1 = Settings_SandboxGameCreateConfiguration__get_ModeDescription(__this,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_IsSandbox
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox (const MethodInfo* method);
// 0x1823f39d0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347eaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347eaf = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField ==
      (Settings_InGameSet_o *)0x0) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Sandbox, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    return (pSVar2->fields)._value;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_IsMultiplayer
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsMultiplayer (const MethodInfo* method);
// 0x1823f3980

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsMultiplayer(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347eb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eb0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_IsConfigured
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured (const MethodInfo* method);
// 0x1823f38d0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347eb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eb1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField !=
         (Settings_ExperienceRuleResult_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_CanStart
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_CanStart (const MethodInfo* method);
// 0x1823f36e0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_CanStart(MethodInfo *method)

{
  Settings_ExperienceRuleResult_o *result;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347eb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    Il2CppMethodInitialized_184347eb2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured((MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  result = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField;
  if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
  }
  bVar1 = Settings_ExperienceRuleEngine__Validate(result,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Experiences
// il2cpp: System_Collections_Generic_IReadOnlyList_Experience__o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Experiences (const MethodInfo* method);
// 0x1823f3880

System_Collections_Generic_IReadOnlyList_Experience__o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Experiences(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347eb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eb3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return (System_Collections_Generic_IReadOnlyList_Experience__o *)
         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxFields
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgSandboxField__o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxFields (const MethodInfo* method);
// 0x1823f3d20

System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxFields(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347eb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eb4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return (System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *)
         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxSections
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxSections (const MethodInfo* method);
// 0x1823f3dc0

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxSections(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347eb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eb5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxAddonNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxAddonNames (const MethodInfo* method);
// 0x1823f3cd0

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxAddonNames(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347eb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eb6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_MultiplayerFields
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgSandboxField__o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_MultiplayerFields (const MethodInfo* method);
// 0x1823f3c40

System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_MultiplayerFields(MethodInfo *method)

{
  System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *pSVar1;
  
  if (Il2CppMethodInitialized_184347eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eb7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields((MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SelectedVariant
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SelectedVariant (const MethodInfo* method);
// 0x1823f3e70

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SelectedVariant(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347eb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347eb8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField !=
      (Settings_InGameSet_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).ExperienceVariant, pSVar2 != (Settings_StringSetting_o *)0x0)) {
      return (pSVar2->fields)._value;
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_VariantNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_VariantNames (const MethodInfo* method);
// 0x1823f4110

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_VariantNames(MethodInfo *method)

{
  Settings_ExperienceRuleResult_o *pSVar1;
  Settings_PresetDefinition_o *pSVar2;
  System_Collections_Generic_Dictionary_string__List_string___o *__this;
  System_Collections_Generic_IEnumerable_TKey__o *source;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_184347eb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184347eb9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField;
  if (((pSVar1 != (Settings_ExperienceRuleResult_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Experience, pSVar2 != (Settings_PresetDefinition_o *)0x0)) &&
     ((pSVar2->fields).Variants != (System_Collections_Generic_Dictionary_string__List_string___o *)0x0)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f11 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f11 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
    if (((pSVar1 != (Settings_ExperienceRuleResult_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).Experience, pSVar2 != (Settings_PresetDefinition_o *)0x0)) &&
       (__this = (pSVar2->fields).Variants,
       __this != (System_Collections_Generic_Dictionary_string__List_string___o *)0x0)) {
      source = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                          (MethodInfo_13C6500 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
      pSVar3 = (System_String_array *)
               System_Linq_Enumerable__ToArray_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      return pSVar3;
    }
    ThrowNullReferenceException();
  }
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Begin
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__Begin (int32_t launchContext, bool multiplayer, const MethodInfo* method);
// 0x1823e6110
// eh: try 0x1823e684a..0x1823e6cae -> pad 0x1833157d0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e6849: nop 
// asm:   0x1823e68b4: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1823e68b9: test rcx, rcx
// asm:   0x1823e68bc: je 0x1823e6ca1
// asm:   0x1823e68c2: mov rax, qword ptr [rcx]
// asm:   0x1823e68c5: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1823e68cc: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1823e68d2: mov rbx, rax
// asm:   0x1823e68d5: lea rcx, [rip + 0x1cdcfbc]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
// asm:   0x1823e68dc: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823e68e1: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1823e68e8: jne 0x1823e68f2
// asm:   0x1823e68ea: mov rcx, rax
// asm:   0x1823e68ed: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1823e68f2: xor edx, edx
// asm:   0x1823e68f4: mov rcx, rbx
// asm:   0x1823e68f7: call 0x1823d59f0  ; il2cpp_runtime_helper_1823d59f0()
// asm:   0x1823e68fc: xor edi, edi
// asm:   0x1823e68fe: mov r14, qword ptr [rsp + 0x88]
// asm:   0x1823e6c8e: mov r8, qword ptr [rip + 0x1caefb3]  ; MethodInfo_Settings_TypedSetting_bool_set_Value
// asm:   0x1823e6c95: xor edx, edx
// asm:   0x1823e6c97: call 0x180e8f540  ; Settings_TypedSetting_bool___set_Value()
// asm:   0x1823e6c9c: jmp 0x1823e6b1c
// asm:   0x1833157d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833157d5: push rbx
// asm:   0x1833157d6: push rbp
// asm:   0x1833157d7: push rdi
// asm:   0x1833157d8: sub rsp, 0x30
// asm:   0x1833157dc: mov rbp, rdx
// asm:   0x1833157df: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x1833157e3: mov rax, qword ptr [rdi]
// asm:   0x1833157e6: mov rbx, qword ptr [rax]
// asm:   0x1833157e9: lea rcx, [rip + 0xd63768]  ; TypeInfo_System_Exception
// asm:   0x1833157f0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833157f5: mov rcx, rax
// asm:   0x1833157f8: mov rdx, rbx
// asm:   0x1833157fb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315800: test al, al
// asm:   0x183315802: mov rax, qword ptr [rdi]
// asm:   0x183315805: je 0x183315817
// asm:   0x183315807: mov qword ptr [rbp + 0x40], rax
// asm:   0x18331580b: movabs rax, 0
// asm:   0x183315815: jmp 0x18331582c
// asm:   0x183315817: mov qword ptr [rbp + 0x30], rax
// asm:   0x18331581b: lea rdx, [rip + 0xcc6766]
// asm:   0x183315822: lea rcx, [rbp + 0x30]
// asm:   0x183315826: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331582c: add rsp, 0x30
// asm:   0x183315830: pop rdi
// asm:   0x183315831: pop rbp
// asm:   0x183315832: pop rbx
// asm:   0x183315833: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__Begin
               (int32_t launchContext,bool multiplayer,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_AottgSandboxField__o *pSVar3;
  Settings_SandboxGameCreateConfiguration_o *__this;
  System_Collections_Generic_List_Experience__o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Il2CppObject *object;
  bool bVar7;
  System_String_array *value;
  Settings_InGameSet_o *__this_00;
  System_String_o *pSVar8;
  Settings_InGameSet_o *__this_01;
  System_Collections_Generic_List_Experience__o *collection;
  System_Func_Experience__bool__o *__this_02;
  Map_Experience_o *experience;
  Settings_InGameSet_o *pSVar9;
  
  if (Il2CppMethodInitialized_184347eba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_40737f8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Experience_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Experience_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Begin_b__84_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_184347eba = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f15 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LaunchContext_k__BackingField =
       launchContext;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer =
       multiplayer || launchContext == 1;
  if (Il2CppMethodInitialized_184347f16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f16 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField
             ,(void *)0x0);
  if (Il2CppMethodInitialized_184347f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f17 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Subcategory_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Subcategory_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f18 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField =
       (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Experience_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField =
       (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LoadError_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _LoadError_k__BackingField,(void *)0x0);
  pSVar8 = "General";
  if (Il2CppMethodInitialized_184347f1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_SandboxSection_k__BackingField =
       pSVar8;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _SandboxSection_k__BackingField,pSVar8);
  if (Il2CppMethodInitialized_184347f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
       launchContext == 1;
  if (Il2CppMethodInitialized_184347f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField =
       false;
  if (Il2CppMethodInitialized_184347f1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_SelectedPresetName_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _SelectedPresetName_k__BackingField,(void *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames = false;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings = false;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom = false;
  pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  if (pSVar3 != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    value = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames = value;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames,
               value);
    __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (__this != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
      Settings_SandboxGameCreateConfiguration__Reset(__this,(MethodInfo *)0x0);
      if ((launchContext == 2) &&
         (TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent != (Settings_InGameSet_o *)0x0)) {
        pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      }
      else {
        pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347f01 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
        Il2CppMethodInitialized_184347f01 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
      Settings_InGameSet___ctor(__this_00,(MethodInfo *)0x0);
      if (pSVar9 != (Settings_InGameSet_o *)0x0) {
        pSVar8 = (*(pSVar9->klass->vtable)._8_SerializeToJsonString.methodPtr)
                           (pSVar9,(pSVar9->klass->vtable)._8_SerializeToJsonString.method);
        if (__this_00 == (Settings_InGameSet_o *)0x0) goto label_1823e6ca1;
        (*(__this_00->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                  (__this_00,pSVar8,(__this_00->klass->vtable)._9_DeserializeFromJsonString.method);
      }
      if (Il2CppMethodInitialized_184347f01 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
        Il2CppMethodInitialized_184347f01 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
      Settings_InGameSet___ctor(__this_01,(MethodInfo *)0x0);
      if (pSVar9 != (Settings_InGameSet_o *)0x0) {
        pSVar8 = (*(pSVar9->klass->vtable)._8_SerializeToJsonString.methodPtr)
                           (pSVar9,(pSVar9->klass->vtable)._8_SerializeToJsonString.method);
        if (__this_01 == (Settings_InGameSet_o *)0x0) goto label_1823e6ca1;
        (*(__this_01->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                  (__this_01,pSVar8,(__this_01->klass->vtable)._9_DeserializeFromJsonString.method);
      }
      if (Il2CppMethodInitialized_184347f1f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f1f = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField =
           __this_01;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                  _Working_k__BackingField,__this_01);
      pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
      if (pSVar4 != (System_Collections_Generic_List_Experience__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar2 = (pSVar4->fields)._size;
        (pSVar4->fields)._size = 0;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        Map_BuiltinLevels__Init((MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
        collection = Map_BuiltinLevels__GetExperiences((MethodInfo *)0x0);
        if (pSVar4 == (System_Collections_Generic_List_Experience__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar4,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_Experience_AddRange);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_184344b3a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184344b3a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
        if ((pSVar9 != (Settings_InGameSet_o *)0x0) &&
           (pSVar5 = (pSVar9->fields).Sandbox, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
          if ((pSVar5->fields)._value == false) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            if (Il2CppMethodInitialized_184344b3a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184344b3a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Working_k__BackingField;
            if ((pSVar9 == (Settings_InGameSet_o *)0x0) ||
               (pSVar6 = (pSVar9->fields).ExperienceName, pSVar6 == (Settings_StringSetting_o *)0x0))
            goto label_1823e6ca1;
            bVar7 = System_String__IsNullOrEmpty((pSVar6->fields)._value,(MethodInfo *)0x0);
            if (!bVar7) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       ExperiencesInternal;
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
              }
              __this_02 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__84_0;
              if (__this_02 == (System_Func_Experience__bool__o *)0x0) {
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
                }
                object = (Il2CppObject *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
                __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
                System_Func_object__bool____ctor
                          ((System_Predicate_object__o *)__this_02,object,
                           (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Begin_b__84_0,
                           (MethodInfo_B61EB0 *)0x0);
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__84_0 = __this_02
                ;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__84_0
                           ,__this_02);
              }
              experience = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                                      (System_Func_TSource__bool__o *)__this_02,
                                      (MethodInfo_6BD2C0 *)
                                      MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_40737f8);
              if (experience != (Map_Experience_o *)0x0) {
                pSVar8 = (experience->fields).Category;
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                }
                il2cpp_runtime_helper_1823d5910(pSVar8,0);
                il2cpp_runtime_helper_1823d5c20((experience->fields).SubCategory,0);
                Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
                          (experience,__this_00,(System_String_o *)0x0,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          if (Il2CppMethodInitialized_184344b3a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184344b3a = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
          if ((pSVar9 != (Settings_InGameSet_o *)0x0) &&
             (pSVar6 = (pSVar9->fields).ExperienceName, pSVar6 != (Settings_StringSetting_o *)0x0)) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar6,
                       (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            if (Il2CppMethodInitialized_184344b3a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184344b3a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Working_k__BackingField;
            if ((pSVar9 != (Settings_InGameSet_o *)0x0) &&
               (pSVar6 = (pSVar9->fields).ExperienceVariant, pSVar6 != (Settings_StringSetting_o *)0x0)) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar6,
                         (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                         (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              if (Il2CppMethodInitialized_184344b3a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                Il2CppMethodInitialized_184344b3a = '\x01';
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Working_k__BackingField;
              if ((pSVar9 != (Settings_InGameSet_o *)0x0) &&
                 (pSVar5 = (pSVar9->fields).Sandbox, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
                Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)pSVar5,false,
                           (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                return;
              }
            }
          }
        }
      }
    }
  }
label_1823e6ca1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CacheExperiencePreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreview (System_String_o* previewPath, const MethodInfo* method);
// 0x1823e7980
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e7a5a: mov rsi, qword ptr [rsp + 0x38]
// asm:   0x1823e7a5f: mov rdi, qword ptr [rsp + 0x40]

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreview
               (System_String_o *previewPath,MethodInfo *method)

{
  System_String_o *previewPath_00;
  bool bVar1;
  System_String_array *pSVar2;
  uint uVar3;
  UnityEngine_Sprite_o *local_res8;
  
  if (Il2CppMethodInitialized_184347ebb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    Il2CppMethodInitialized_184347ebb = '\x01';
  }
  local_res8 = (UnityEngine_Sprite_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(previewPath,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    bVar1 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
                      (previewPath,&local_res8,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((previewPath == (System_String_o *)0x0) ||
         (pSVar2 = System_String__Split(previewPath,0x7c,0,(MethodInfo *)0x0),
         pSVar2 == (System_String_array *)0x0)) {
        ThrowNullReferenceException();
      }
      for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
        if ((uint)pSVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        previewPath_00 = pSVar2->m_Items[(int)uVar3];
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__CachePreviewSprite(previewPath_00,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CachePreviewSprite
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CachePreviewSprite (System_String_o* previewPath, const MethodInfo* method);
// 0x1823e7c70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e7df2: mov rdi, rbx
// asm:   0x1823e7ec2: mov rsi, qword ptr [rsp + 0x58]
// asm:   0x1823e7ec7: mov rdi, qword ptr [rsp + 0x60]

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CachePreviewSprite
               (System_String_o *previewPath,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UnityEngine_Texture2D_o *pUVar4;
  UnityEngine_Sprite_o *sprite;
  System_String_o *path;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Sprite_o *local_res8;
  UnityEngine_Rect_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184347ebc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184347ebc = '\x01';
  }
  local_res8 = (UnityEngine_Sprite_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(previewPath,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    bVar1 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
                      (previewPath,&local_res8,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar3 = System_String__Concat_1969e50
                         (TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps,"/",
                          (MethodInfo *)0x0);
      if (previewPath == (System_String_o *)0x0) {
label_1823e7ed2:
        ThrowNullReferenceException();
      }
      bVar1 = System_String__StartsWith_19722c0(previewPath,pSVar3,4,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        if (pSVar3 == (System_String_o *)0x0) goto label_1823e7ed2;
        path = TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps;
        pSVar3 = System_String__Substring(previewPath,(pSVar3->fields)._stringLength,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
      }
      else {
        path = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        pSVar3 = previewPath;
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
      }
      pUVar4 = (UnityEngine_Texture2D_o *)
               ApplicationManagers_ResourceManager__LoadAsset(path,pSVar3,false,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Texture2D_o *)0x0) {
        texture = (UnityEngine_Texture2D_o *)0x0;
        if (pUVar4->klass == TypeInfo_UnityEngine_Texture2D) {
          texture = pUVar4;
        }
        if (texture != (UnityEngine_Texture2D_o *)0x0) {
          iVar2 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                            (texture,(texture->klass->vtable)._5_get_width.method);
          local_28[0].m_XMin = 0.0;
          local_28[0].m_YMin = 0.0;
          local_28[0].m_Width = (float)iVar2;
          iVar2 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                            (texture,(texture->klass->vtable)._7_get_height.method);
          local_28[0].m_Height = (float)iVar2;
          sprite = UnityEngine_Sprite__Create_2ed4530
                             (texture,(UnityEngine_Rect_o *)local_28,(UnityEngine_Vector2_o)0x3f0000003f000000
                              ,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
          }
          Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store(previewPath,sprite,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CacheExperiencePreviews
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreviews (System_Collections_Generic_IEnumerable_Experience__o* experiences, const MethodInfo* method);
// 0x1823e7a80
// eh: try 0x1823e7b40..0x1823e7c60 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e7b3f: nop 
// asm:   0x1823e7c21: jmp 0x1823e7c49
// asm:   0x1823e7c23: mov r8, qword ptr [rsp + 0x30]
// asm:   0x1823e7c28: cmp qword ptr [r8], 0
// asm:   0x1823e7c2c: je 0x1823e7c3f
// asm:   0x1823e7c2e: xor ecx, ecx
// asm:   0x1823e7c30: mov r8, qword ptr [r8]
// asm:   0x1823e7c33: mov rdx, qword ptr [rip + 0x1cb16c6]  ; TypeInfo_System_IDisposable
// asm:   0x1823e7c3a: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1823e7c3f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1823e7c44: test rcx, rcx
// asm:   0x1823e7c47: jne 0x1823e7c60
// asm:   0x1823e7c60: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreviews
               (System_Collections_Generic_IEnumerable_Experience__o *experiences,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppObject *obj;
  void *pvVar4;
  VirtualInvokeData *pVVar5;
  Il2CppObject *pIVar6;
  ushort uVar7;
  
  if (Il2CppMethodInitialized_184347ebd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_184347ebd = '\x01';
  }
  if (experiences != (System_Collections_Generic_IEnumerable_Experience__o *)0x0) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    Map_BuiltinLevels__ResolveExperiencePreviews(experiences,(MethodInfo *)0x0);
    obj = InterfaceInvoker0_Invoke
                    (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_Experience,
                     (Il2CppObject *)experiences);
    while( true ) {
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar4 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,obj);
      if ((char)pvVar4 == '\0') break;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = obj->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        uVar7 = 0;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar7].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Experience) {
            pVVar5 = pIVar2->vtable + pIVar3[uVar7].offset;
            goto label_1823e7bb6;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar1);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Experience,0);
label_1823e7bb6:
      pIVar6 = (*pVVar5->methodPtr)(obj,pVVar5->method);
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar6[3].klass;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreview
                  ((System_String_o *)pIVar2,(MethodInfo *)0x0);
      }
    }
    if (obj != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Categories
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__Categories (const MethodInfo* method);
// 0x1823e7ee0

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__Categories(MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  Il2CppObject *pIVar1;
  System_Func_Experience__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_01;
  System_Linq_IOrderedEnumerable_TSource__o *source_01;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_184347ebe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_Experience_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__88_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__88_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__88_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184347ebe = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__88_0;
  if (__this == (System_Func_Experience__string__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__88_0,
               (MethodInfo_16E67D0 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__88_0 = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__88_0,__this);
  }
  source_00 = System_Linq_Enumerable__Select_Vector3__object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)__this,
                         (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_Experience_string);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__88_1;
  if (__this_00 == (System_Func_string__bool__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__88_1,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__88_1 = __this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__88_1,__this_00);
  }
  pSVar2 = System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
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
  pSVar2 = System_Linq_Enumerable__Distinct_object__6bb210
                     (pSVar2,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_6BB210 *)MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
  }
  __this_01 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__88_2;
  if (__this_01 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
    __this_01 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_int);
    System_Func_object__int____ctor
              (__this_01,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__88_2,
               (MethodInfo_AF4D50 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__88_2 =
         (System_Func_string__int__o *)__this_01;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__88_2,__this_01);
  }
  source_01 = System_Linq_Enumerable__OrderBy_object__int_
                        (pSVar2,(System_Func_TSource__TKey__o *)__this_01,
                         (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_int);
  pSVar3 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                      (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Subcategories
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories (const MethodInfo* method);
// 0x1823f13e0

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories(MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  Il2CppObject *pIVar1;
  System_Func_Experience__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  System_Func_Experience__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_string__bool__o *__this_01;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_184347ebf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_Experience_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__89_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__89_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__89_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184347ebf = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__89_0;
  if (__this == (System_Func_Experience__bool__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__89_0,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__89_0 = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__89_0,__this);
  }
  pSVar2 = System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Experience);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__89_1;
  if (__this_00 == (System_Func_Experience__string__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__89_1,
               (MethodInfo_16E67D0 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__89_1 = __this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__89_1,__this_00);
  }
  source_00 = System_Linq_Enumerable__Select_Vector3__object_
                        (pSVar2,(System_Func_TSource__TResult__o *)__this_00,
                         (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_Experience_string);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
  }
  __this_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__89_2;
  if (__this_01 == (System_Func_string__bool__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_01,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__89_2,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__89_2 = __this_01;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__89_2,__this_01);
  }
  pSVar2 = System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__bool__o *)__this_01,
                      (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
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
  pSVar2 = System_Linq_Enumerable__Distinct_object__6bb210
                     (pSVar2,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_6BB210 *)MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
  pSVar3 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (pSVar2,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CurrentExperiences
// il2cpp: Map_Experience_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__CurrentExperiences (const MethodInfo* method);
// 0x1823ea820

Map_Experience_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__CurrentExperiences(MethodInfo *method)

{
  System_String_o *category;
  Map_Experience_array *pMVar1;
  
  if (Il2CppMethodInitialized_184347ec0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ec0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  category = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField;
  if (Il2CppMethodInitialized_184347f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn
                     (category,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                               _Subcategory_k__BackingField,(MethodInfo *)0x0);
  return pMVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ExperiencesIn
// il2cpp: Map_Experience_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn (System_String_o* category, System_String_o* subcategory, const MethodInfo* method);
// 0x1823ea8f0

Map_Experience_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn
          (System_String_o *category,System_String_o *subcategory,MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0_o *object;
  System_Func_Experience__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Map_Experience_array *pMVar1;
  
  if (Il2CppMethodInitialized_184347ec1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass91_0_ExperiencesIn_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass91_0);
    Il2CppMethodInitialized_184347ec1 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass91_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass91_0_o *)0x0) {
    (object->fields).category = category;
    Il2CppCodeGenWriteBarrier(&(object->fields).category,category);
    (object->fields).subcategory = subcategory;
    Il2CppCodeGenWriteBarrier(&(object->fields).subcategory,subcategory);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass91_0_ExperiencesIn_b__0
               ,(MethodInfo_B61EB0 *)0x0);
    source_00 = System_Linq_Enumerable__Where_float_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this,
                           (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Experience);
    pMVar1 = (Map_Experience_array *)
             System_Linq_Enumerable__ToArray_object_
                       (source_00,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_Experience);
    return pMVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SingleExperience
// il2cpp: Map_Experience_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__SingleExperience (System_String_o* category, System_String_o* subcategory, const MethodInfo* method);
// 0x1823f1350

Map_Experience_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__SingleExperience
          (System_String_o *category,System_String_o *subcategory,MethodInfo *method)

{
  Map_Experience_array *pMVar1;
  
  if (Il2CppMethodInitialized_184347ec2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ec2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn
                     (category,subcategory,(MethodInfo *)0x0);
  if (pMVar1 == (Map_Experience_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pMVar1->max_length != 1) {
    return (Map_Experience_o *)0x0;
  }
  if ((int)pMVar1->max_length != 0) {
    return pMVar1->m_Items[0];
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CategoryPreview
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__CategoryPreview (System_String_o* category, const MethodInfo* method);
// 0x1823e8280

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__CategoryPreview(System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o *object;
  System_Func_Experience__bool__o *__this;
  Map_Experience_o *pMVar1;
  
  if (Il2CppMethodInitialized_184347ec3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_40737f8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass93_0_CategoryPreview_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass93_0);
    Il2CppMethodInitialized_184347ec3 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass93_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).category = category;
  Il2CppCodeGenWriteBarrier(&(object->fields).category,category);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass93_0_CategoryPreview_b__0
             ,(MethodInfo_B61EB0 *)0x0);
  pMVar1 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_6BD2C0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_40737f8
                     );
  if (pMVar1 != (Map_Experience_o *)0x0) {
    return (pMVar1->fields).Preview;
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SubcategoryPreview
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__SubcategoryPreview (System_String_o* subcategory, const MethodInfo* method);
// 0x1823f1780

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__SubcategoryPreview
          (System_String_o *subcategory,MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0_o *object;
  System_Func_Experience__bool__o *__this;
  Map_Experience_o *pMVar1;
  
  if (Il2CppMethodInitialized_184347ec4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_40737f8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass94_0_SubcategoryPreview_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass94_0);
    Il2CppMethodInitialized_184347ec4 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass94_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass94_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).subcategory = subcategory;
  Il2CppCodeGenWriteBarrier(&(object->fields).subcategory,subcategory);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass94_0_SubcategoryPreview_b__0
             ,(MethodInfo_B61EB0 *)0x0);
  pMVar1 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_6BD2C0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_40737f8
                     );
  if (pMVar1 != (Map_Experience_o *)0x0) {
    return (pMVar1->fields).Preview;
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$VisibleFields
// il2cpp: Settings_ExperienceRuleField_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields (const MethodInfo* method);
// 0x1823f2f40

Settings_ExperienceRuleField_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields(MethodInfo *method)

{
  Settings_ExperienceRuleResult_o *pSVar1;
  System_Collections_Generic_List_ExperienceRuleField__o *source;
  Il2CppObject *object;
  Settings_ExperienceRuleField_array *pSVar2;
  System_Func_ExperienceRuleField__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  
  if (Il2CppMethodInitialized_184347ec5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_ExperienceRuleField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleField_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ExperienceRuleField_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_VisibleFields_b__95_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184347ec5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField ==
      (Settings_ExperienceRuleResult_o *)0x0) {
    pSVar2 = (Settings_ExperienceRuleField_array *)SZArrayNew(TypeInfo_Settings_ExperienceRuleField_array,0);
    return pSVar2;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField;
  if (pSVar1 != (Settings_ExperienceRuleResult_o *)0x0) {
    source = (pSVar1->fields).Fields;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__95_0;
    if (__this == (System_Func_ExperienceRuleField__bool__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ExperienceRuleField_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_VisibleFields_b__95_0,
                 (MethodInfo_B61EB0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__95_0 = __this;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__95_0,__this);
    }
    source_00 = System_Linq_Enumerable__Where_float_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this,
                           (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
    pSVar2 = (Settings_ExperienceRuleField_array *)
             System_Linq_Enumerable__ToArray_object_
                       (source_00,
                        (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_ExperienceRuleField);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$LockedFields
// il2cpp: Settings_ExperienceRuleField_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__LockedFields (const MethodInfo* method);
// 0x1823ec030

Settings_ExperienceRuleField_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__LockedFields(MethodInfo *method)

{
  Settings_ExperienceRuleResult_o *pSVar1;
  System_Collections_Generic_List_ExperienceRuleField__o *source;
  Il2CppObject *object;
  Settings_ExperienceRuleField_array *pSVar2;
  System_Func_ExperienceRuleField__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  
  if (Il2CppMethodInitialized_184347ec6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_ExperienceRuleField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleField_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ExperienceRuleField_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_LockedFields_b__96_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184347ec6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField ==
      (Settings_ExperienceRuleResult_o *)0x0) {
    pSVar2 = (Settings_ExperienceRuleField_array *)SZArrayNew(TypeInfo_Settings_ExperienceRuleField_array,0);
    return pSVar2;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField;
  if (pSVar1 != (Settings_ExperienceRuleResult_o *)0x0) {
    source = (pSVar1->fields).Fields;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__96_0;
    if (__this == (System_Func_ExperienceRuleField__bool__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ExperienceRuleField_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_LockedFields_b__96_0,
                 (MethodInfo_B61EB0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__96_0 = __this;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__96_0,__this);
    }
    source_00 = System_Linq_Enumerable__Where_float_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this,
                           (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
    pSVar2 = (Settings_ExperienceRuleField_array *)
             System_Linq_Enumerable__ToArray_object_
                       (source_00,
                        (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_ExperienceRuleField);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ChangeField
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeField (int32_t index, System_String_o* value, const MethodInfo* method);
// 0x1823e83a0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeField
               (int32_t index,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Settings_ExperienceRuleField_o *pSVar3;
  Settings_TypedSetting_T__o *pSVar4;
  Settings_TypedSetting_T__c *pSVar5;
  Settings_WeatherSettings_o *pSVar6;
  Settings_SetSettingsContainer_WeatherSet__o *__this;
  Settings_SandboxGameCreateConfiguration_o *__this_00;
  float fVar7;
  bool bVar8;
  int32_t value_00;
  Settings_ExperienceRuleField_array *pSVar9;
  System_String_array *array;
  System_Globalization_CultureInfo_o *pSVar10;
  longlong lVar11;
  System_String_o *pSVar12;
  Settings_InGameSet_o *settings;
  MethodInfo *method_00;
  double dVar13;
  bool local_res8 [8];
  int32_t local_res20 [2];
  float local_28;
  float local_24 [7];
  
  if (Il2CppMethodInitialized_184347ec7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_184347ec7 = '\x01';
  }
  local_res8[0] = false;
  local_res20[0] = 0;
  local_28 = 0.0;
  local_24[0] = 0.0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)0x0);
  if (index < 0) {
    return false;
  }
  if (pSVar9 == (Settings_ExperienceRuleField_array *)0x0) goto label_1823e89a9;
  uVar1 = (uint)pSVar9->max_length;
  if ((int)uVar1 <= index) {
    return false;
  }
  if (uVar1 <= (uint)index) {
    ThrowIndexOutOfRangeException();
  }
  pSVar3 = pSVar9->m_Items[index];
  if (pSVar3 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823e89a9;
  if ((pSVar3->fields).Editable == false) {
    return false;
  }
  if (pSVar3 == (Settings_ExperienceRuleField_o *)0x0) goto label_1823e89a9;
  pSVar4 = (Settings_TypedSetting_T__o *)(pSVar3->fields).Setting;
  if (pSVar4 == (Settings_TypedSetting_T__o *)0x0) {
    return false;
  }
  pSVar5 = pSVar4->klass;
  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if (((pSVar5->_2).typeHierarchyDepth < bVar2) ||
     ((pSVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((pSVar5->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar5->_2).typeHierarchyDepth < bVar2) ||
         ((pSVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((pSVar5->_2).typeHierarchyDepth < bVar2) {
          return false;
        }
        if ((pSVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
        {
          return false;
        }
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar10 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar8 = System_Single__TryParse_1b4a540
                          (value,0xa7,(System_IFormatProvider_o *)pSVar10,local_24,(MethodInfo *)0x0);
        if (!bVar8) {
          return false;
        }
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)pSVar4,local_24[0],
                   (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      }
      else {
        bVar8 = System_String__Equals_196c550((pSVar3->fields).Id,"general.Difficulty",5,(MethodInfo *)0x0);
        if (bVar8) {
          if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354e58);
          }
          bVar8 = System_Enum__TryParse_Int32Enum__6b1ce0
                            (value,true,local_res20,
                             (MethodInfo_6B1CE0 *)MethodInfo_System_Enum_TryParse_GameDifficulty);
          if (bVar8) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar4,local_res20[0],
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            goto label_1823e8842;
          }
        }
        bVar8 = System_String__Equals_196c550((pSVar3->fields).Id,"general.WeatherIndex",5,(MethodInfo *)0x0);
        if ((bVar8) &&
           (TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings !=
            (Settings_WeatherSettings_o *)0x0)) {
          pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
          if ((pSVar6 == (Settings_WeatherSettings_o *)0x0) ||
             (__this = (pSVar6->fields).WeatherSets,
             __this == (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) goto label_1823e89a9;
          array = Settings_SetSettingsContainer_object___GetSetNames
                            ((Settings_SetSettingsContainer_T__o *)__this,
                             (MethodInfo_C8EC20 *)
                             MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
          value_00 = System_Array__IndexOf_object_
                               ((System_Object_array *)array,(Il2CppObject *)value,
                                (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
          if (value_00 < 0) {
            return false;
          }
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar4,value_00,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        }
        else {
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar10 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          method_00 = (MethodInfo *)0xa7;
          bVar8 = System_Single__TryParse_1b4a540
                            (value,0xa7,(System_IFormatProvider_o *)pSVar10,&local_28,(MethodInfo *)0x0);
          fVar7 = local_28;
          if (!bVar8) {
            return false;
          }
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar13 = il2cpp_runtime_helper_180012b90((double)fVar7,method_00);
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar4,(int)dVar13,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        }
      }
    }
    else {
      if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354de8);
      }
      bVar8 = System_Boolean__TryParse(value,local_res8,(MethodInfo *)0x0);
      if (!bVar8) {
        return false;
      }
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar4,local_res8[0],
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    }
  }
  else {
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    Settings_TypedSetting_object___set_Value
              (pSVar4,(Il2CppObject *)value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
label_1823e8842:
  bVar8 = System_String__Equals_196c550((pSVar3->fields).Id,"general.MapName",5,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    lVar11 = il2cpp_runtime_helper_181dd5530(0);
    if ((lVar11 == 0) || (*(longlong *)(lVar11 + 0x48) == 0)) goto label_1823e89a9;
    pSVar4 = *(Settings_TypedSetting_T__o **)(*(longlong *)(lVar11 + 0x48) + 0x30);
    lVar11 = il2cpp_runtime_helper_181dd5530(0);
    if ((lVar11 == 0) ||
       ((*(longlong *)(lVar11 + 0x48) == 0 ||
        (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x48) + 0x38), lVar11 == 0)))) goto label_1823e89a9;
    pSVar12 = *(System_String_o **)(lVar11 + 0x20);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar12 = Map_BuiltinLevels__FindMapCategory(pSVar12,(MethodInfo *)0x0);
    if (pSVar4 == (Settings_TypedSetting_T__o *)0x0) goto label_1823e89a9;
    Settings_TypedSetting_object___set_Value
              (pSVar4,(Il2CppObject *)pSVar12,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  bVar8 = System_String__Equals_196c550((pSVar3->fields).Id,"general.MapName",5,(MethodInfo *)0x0);
  if ((!bVar8) &&
     (bVar8 = System_String__Equals_196c550((pSVar3->fields).Id,"general.GameMode",5,(MethodInfo *)0x0),
     !bVar8)) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  settings = (Settings_InGameSet_o *)il2cpp_runtime_helper_181dd5530(0);
  if (__this_00 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    Settings_SandboxGameCreateConfiguration__RefreshDescriptions(__this_00,settings,(MethodInfo *)0x0);
    return true;
  }
label_1823e89a9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectCategory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectCategory (System_String_o* category, const MethodInfo* method);
// 0x1823eee40

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectCategory
               (System_String_o *category,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_BoolSetting_o *__this;
  Settings_StringSetting_o *pSVar2;
  System_String_o *subcategory;
  System_String_array *pSVar3;
  Map_Experience_o *experience;
  
  if (Il2CppMethodInitialized_184347ec8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184347ec8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField =
       false;
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (__this = (pSVar1->fields).Sandbox, __this != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this,false,
               (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    if (Il2CppMethodInitialized_184347f16 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f16 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField =
         category;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Category_k__BackingField,category);
    if (Il2CppMethodInitialized_184347f17 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f17 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Subcategory_k__BackingField =
         (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Subcategory_k__BackingField,(void *)0x0);
    if (Il2CppMethodInitialized_184347f18 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f18 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField =
         (Map_Experience_o *)0x0;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Experience_k__BackingField,(void *)0x0);
    if (Il2CppMethodInitialized_184347f19 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f19 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField =
         (Settings_ExperienceRuleResult_o *)0x0;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _RuleResult_k__BackingField,(void *)0x0);
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).ExperienceName, pSVar2 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).ExperienceVariant, pSVar2 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar2,
                   (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories((MethodInfo *)0x0);
        if (pSVar3 != (System_String_array *)0x0) {
          if ((int)pSVar3->max_length == 1) {
            subcategory = pSVar3->m_Items[0];
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            if (Il2CppMethodInitialized_184347ec9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184347ec9 = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            if (Il2CppMethodInitialized_184347f17 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184347f17 = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _Subcategory_k__BackingField = subcategory;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                        _Subcategory_k__BackingField,subcategory);
            if (Il2CppMethodInitialized_184347f18 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184347f18 = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField
                 = (Map_Experience_o *)0x0;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                        _Experience_k__BackingField,(void *)0x0);
            if (Il2CppMethodInitialized_184347f19 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184347f19 = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField
                 = (Settings_ExperienceRuleResult_o *)0x0;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                        _RuleResult_k__BackingField,(void *)0x0);
            if (Il2CppMethodInitialized_184344b3b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184344b3b = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            experience = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SingleExperience
                                   (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                    _Category_k__BackingField,subcategory,(MethodInfo *)0x0);
            if (experience != (Map_Experience_o *)0x0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
                        (experience,(Settings_InGameSet_o *)0x0,(System_String_o *)0x0,false,(MethodInfo *)0x0
                        );
            }
          }
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectSubcategory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSubcategory (System_String_o* subcategory, const MethodInfo* method);
// 0x1823efd70

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSubcategory
               (System_String_o *subcategory,MethodInfo *method)

{
  Map_Experience_o *experience;
  
  if (Il2CppMethodInitialized_184347ec9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ec9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f17 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Subcategory_k__BackingField =
       subcategory;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Subcategory_k__BackingField,subcategory);
  if (Il2CppMethodInitialized_184347f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f18 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField =
       (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Experience_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField =
       (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184344b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  experience = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SingleExperience
                         (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                          _Category_k__BackingField,subcategory,(MethodInfo *)0x0);
  if (experience != (Map_Experience_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
              (experience,(Settings_InGameSet_o *)0x0,(System_String_o *)0x0,false,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectExperience
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectExperience (Map_Experience_o* experience, const MethodInfo* method);
// 0x1823ef3c0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectExperience
               (Map_Experience_o *experience,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347eca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eca = '\x01';
  }
  if (experience != (Map_Experience_o *)0x0) {
    pSVar1 = (experience->fields).Category;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f16 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f16 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Category_k__BackingField,pSVar1);
    pSVar1 = (experience->fields).SubCategory;
    if (Il2CppMethodInitialized_184347f17 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f17 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Subcategory_k__BackingField =
         pSVar1;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Subcategory_k__BackingField,pSVar1);
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
              (experience,(Settings_InGameSet_o *)0x0,(System_String_o *)0x0,false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectVariant
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectVariant (System_String_o* variant, const MethodInfo* method);
// 0x1823eff60

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectVariant(System_String_o *variant,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  System_Collections_Generic_List_string__o *pSVar1;
  bool bVar2;
  longlong lVar3;
  Map_Experience_o *experience;
  Settings_InGameSet_o *pSVar4;
  Settings_ExperienceRuleResult_o *pSVar5;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347ecb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Unknown experience variant: ");
    Il2CppMethodInitialized_184347ecb = '\x01';
  }
  if (variant == (System_String_o *)0x0) {
    variant = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField !=
      (Map_Experience_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f11 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f11 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField !=
        (Settings_ExperienceRuleResult_o *)0x0) {
      bVar2 = System_String__IsNullOrEmpty(variant,(MethodInfo *)0x0);
      if (bVar2) {
label_1823f0120:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        experience = (Map_Experience_o *)il2cpp_runtime_helper_1823d56d0(0);
        pSVar4 = (Settings_InGameSet_o *)il2cpp_runtime_helper_181dd5530(0);
        pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Clone(pSVar4,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
                  (experience,pSVar4,variant,true,(MethodInfo *)0x0);
        lVar3 = il2cpp_runtime_helper_1823d5770(0);
        if (lVar3 == 0) {
          return false;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar5 = (Settings_ExperienceRuleResult_o *)il2cpp_runtime_helper_1823d5770(0);
        if (pSVar5 != (Settings_ExperienceRuleResult_o *)0x0) {
          bVar2 = Settings_ExperienceRuleResult__get_IsValid(pSVar5,(MethodInfo *)0x0);
          return bVar2;
        }
        goto label_1823f0355;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      lVar3 = il2cpp_runtime_helper_1823d5770(0);
      if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x10) == 0)) goto label_1823f0355;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x40) != 0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        lVar3 = il2cpp_runtime_helper_1823d5770(0);
        if (((lVar3 == 0) || (*(longlong *)(lVar3 + 0x10) == 0)) ||
           (__this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                      (*(longlong *)(lVar3 + 0x10) + 0x40),
           __this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) goto label_1823f0355;
        bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          (__this,(Il2CppObject *)variant,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
        if (bVar2) goto label_1823f0120;
      }
    }
  }
  value = System_String__Concat_1969e50("Unknown experience variant: ",variant,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LoadError_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _LoadError_k__BackingField,value);
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField ==
      (Settings_ExperienceRuleResult_o *)0x0) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField;
  if (pSVar5 != (Settings_ExperienceRuleResult_o *)0x0) {
    pSVar1 = (pSVar5->fields).Errors;
    if (Il2CppMethodInitialized_184347f10 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f10 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                           _LoadError_k__BackingField,MethodInfo_System_Collections_Generic_List_string_Add);
      return false;
    }
  }
label_1823f0355:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ConfigureExperience
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience (Map_Experience_o* experience, Settings_InGameSet_o* persisted, System_String_o* variant, bool changingVariant, const MethodInfo* method);
// 0x1823e9050
// eh: try 0x1823e9395..0x1823e9b30 -> pad 0x183340f70 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1823e9b30..0x1823e9b77 -> pad 0x1833193f0 catch Il2CppExceptionWrapper
// eh: try 0x1823e9b77..0x1823e9c50 -> pad 0x183340f70 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1823e9c50..0x1823e9dab -> pad 0x18332a0f0 catch Il2CppExceptionWrapper
// eh: try 0x1823e9dab..0x1823ea27a -> pad 0x183340f70 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1823ea27a..0x1823ea285 -> pad 0x1833193f0 catch Il2CppExceptionWrapper
// eh: try 0x1823ea285..0x1823ea317 -> pad 0x183340f70 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 155 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e93a0: mov rbx, r15
// asm:   0x1823e93f6: mov qword ptr [rsp + 0x140], r12
// asm:   0x1823e9447: mov rdi, r15
// asm:   0x1823e9b8d: mov rdx, qword ptr [rip + 0x1cb21bc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose
// asm:   0x1823e9b94: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1823e9b99: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1823e9b9e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823e9ba3: test rcx, rcx
// asm:   0x1823e9ba6: jne 0x1823ea285
// asm:   0x1823e9bac: xor r15d, r15d
// asm:   0x1823e9baf: mov r13, qword ptr [rsp + 0x70]
// asm:   0x1823e9bb4: mov r14, qword ptr [rsp + 0x40]
// asm:   0x1823e9bb9: mov qword ptr [rsp + 0x140], r14
// asm:   0x1823e9bc1: mov rdi, qword ptr [rsp + 0x78]
// asm:   0x1823e9bc6: mov r14, qword ptr [rsp + 0xb0]
// asm:   0x1823e9bce: mov esi, dword ptr [rsp + 0x130]
// asm:   0x1823e9bd5: inc esi
// asm:   0x1823e9bd7: jmp 0x1823e9a63
// asm:   0x1823e9c49: nop dword ptr [rax]
// asm:   0x1823e9dbf: mov rdx, qword ptr [rip + 0x1cad8b2]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x1823e9dc6: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1823e9dcb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1823e9dd0: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823e9dd5: test rcx, rcx
// asm:   0x1823e9dd8: jne 0x1823ea28f
// asm:   0x1823e9dde: xor r15d, r15d
// asm:   0x1823e9de1: mov r13, qword ptr [rsp + 0x70]
// asm:   0x1823e9de6: mov r14, qword ptr [rsp + 0x40]
// asm:   0x1823e9deb: mov rdi, qword ptr [rsp + 0x78]
// asm:   0x1823e9df0: jmp 0x1823e9452
// asm:   0x1823e9df5: mov r12, qword ptr [rsp + 0x138]
// asm:   0x1823ea126: nop 
// asm:   0x1823ea12c: lea rcx, [rip + 0x1cd9765]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
// asm:   0x1823ea133: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823ea138: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1823ea13f: jne 0x1823ea149
// asm:   0x1823ea141: mov rcx, rax
// asm:   0x1823ea144: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1823ea149: xor edx, edx
// asm:   0x1823ea14b: xor ecx, ecx
// asm:   0x1823ea14d: call 0x1823d5a60  ; il2cpp_runtime_helper_1823d5a60()
// asm:   0x1823ea152: xor ecx, ecx
// asm:   0x1823ea154: call 0x181dd5530  ; il2cpp_runtime_helper_181dd5530()
// asm:   0x1823ea159: test rax, rax
// asm:   0x1823ea15c: je 0x1823ea259
// asm:   0x1823ea162: mov rdi, qword ptr [rax + 0x78]
// asm:   0x1823ea166: test rdi, rdi
// asm:   0x1823ea169: je 0x1823ea259
// asm:   0x1823ea16f: mov rax, qword ptr [rip + 0x1f6acda]
// asm:   0x1823ea176: mov rdx, qword ptr [rax + 0xb8]
// asm:   0x1823ea17d: mov rbx, qword ptr [rdx]
// asm:   0x1823ea180: lea rcx, [rip + 0x1cac7d9]  ; MethodInfo_Settings_TypedSetting_string_set_Value
// asm:   0x1823ea187: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823ea18c: mov r8, rax
// asm:   0x1823ea18f: mov rdx, rbx
// asm:   0x1823ea192: mov rcx, rdi
// asm:   0x1823ea195: call 0x180e8f4c0  ; Settings_TypedSetting_object___set_Value()
// asm:   0x1823ea19a: xor ecx, ecx
// asm:   0x1823ea19c: call 0x181dd5530  ; il2cpp_runtime_helper_181dd5530()
// asm:   0x1823ea1a1: test rax, rax
// asm:   0x1823ea1a4: je 0x1823ea259
// asm:   0x1823ea1aa: mov rdi, qword ptr [rax + 0x90]
// asm:   0x1823ea1b1: test rdi, rdi
// asm:   0x1823ea1b4: je 0x1823ea259
// asm:   0x1823ea1ba: mov rax, qword ptr [rip + 0x1f6ac8f]
// asm:   0x1823ea1c1: mov rdx, qword ptr [rax + 0xb8]
// asm:   0x1823ea1c8: mov rbx, qword ptr [rdx]
// asm:   0x1823ea1cb: lea rcx, [rip + 0x1cac78e]  ; MethodInfo_Settings_TypedSetting_string_set_Value
// asm:   0x1823ea1d2: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823ea1d7: mov r8, rax
// asm:   0x1823ea1da: mov rdx, rbx
// asm:   0x1823ea1dd: mov rcx, rdi
// asm:   0x1823ea1e0: call 0x180e8f4c0  ; Settings_TypedSetting_object___set_Value()
// asm:   0x1823ea1e5: xor ecx, ecx
// asm:   0x1823ea1e7: call 0x181dd5530  ; il2cpp_runtime_helper_181dd5530()
// asm:   0x1823ea1ec: test rax, rax
// asm:   0x1823ea1ef: je 0x1823ea259
// asm:   0x1823ea1f1: mov rdi, qword ptr [rax + 0x98]
// asm:   0x1823ea1f8: test rdi, rdi
// asm:   0x1823ea1fb: je 0x1823ea259
// asm:   0x1823ea1fd: mov eax, dword ptr [rsp + 0x50]
// asm:   0x1823ea201: dec eax
// asm:   0x1823ea203: movsxd rdx, eax
// asm:   0x1823ea206: mov rbx, qword ptr [rsp + rdx*8 + 0x48]
// asm:   0x1823ea20b: lea rcx, [rip + 0x1caba36]  ; MethodInfo_Settings_TypedSetting_bool_set_Value
// asm:   0x1823ea212: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823ea217: mov r8, rax
// asm:   0x1823ea21a: xor edx, edx
// asm:   0x1823ea21c: mov rcx, rdi
// asm:   0x1823ea21f: call 0x180e8f540  ; Settings_TypedSetting_bool___set_Value()
// asm:   0x1823ea224: test rbx, rbx
// asm:   0x1823ea227: je 0x1823ea259
// asm:   0x1823ea229: mov rax, qword ptr [rbx]
// asm:   0x1823ea22c: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1823ea233: mov rcx, rbx
// asm:   0x1823ea236: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1823ea23c: mov rcx, rax
// asm:   0x1823ea23f: xor edx, edx
// asm:   0x1823ea241: call 0x1823d59f0  ; il2cpp_runtime_helper_1823d59f0()
// asm:   0x1823ea259: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1823ea285: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1823ea28f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833193f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833193f5: push rbp
// asm:   0x1833193f6: sub rsp, 0x30
// asm:   0x1833193fa: mov rbp, rdx
// asm:   0x1833193fd: mov rax, qword ptr [rbp + 0xd8]
// asm:   0x183319404: mov rcx, qword ptr [rax]
// asm:   0x183319407: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18331940b: movabs rax, 0
// asm:   0x183319415: add rsp, 0x30
// asm:   0x183319419: pop rbp
// asm:   0x18331941a: ret 
// asm:   0x18332a0f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a0f5: push rbp
// asm:   0x18332a0f6: sub rsp, 0x30
// asm:   0x18332a0fa: mov rbp, rdx
// asm:   0x18332a0fd: mov rax, qword ptr [rbp + 0xe0]
// asm:   0x18332a104: mov rcx, qword ptr [rax]
// asm:   0x18332a107: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18332a10b: movabs rax, 0
// asm:   0x18332a115: add rsp, 0x30
// asm:   0x18332a119: pop rbp
// asm:   0x18332a11a: ret 
// asm:   0x183340f70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340f75: push rbx
// asm:   0x183340f76: push rbp
// asm:   0x183340f77: push rdi
// asm:   0x183340f78: sub rsp, 0x30
// asm:   0x183340f7c: mov rbp, rdx
// asm:   0x183340f7f: mov rdi, qword ptr [rbp + 0xe8]
// asm:   0x183340f86: mov rax, qword ptr [rdi]
// asm:   0x183340f89: mov rbx, qword ptr [rax]
// asm:   0x183340f8c: lea rcx, [rip + 0xd37fc5]  ; TypeInfo_System_Exception
// asm:   0x183340f93: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340f98: mov rcx, rax
// asm:   0x183340f9b: mov rdx, rbx
// asm:   0x183340f9e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340fa3: test al, al
// asm:   0x183340fa5: mov rax, qword ptr [rdi]
// asm:   0x183340fa8: je 0x183340fc2
// asm:   0x183340faa: movsxd rcx, dword ptr [rbp + 0x50]
// asm:   0x183340fae: mov qword ptr [rbp + rcx*8 + 0x48], rax
// asm:   0x183340fb3: inc dword ptr [rbp + 0x50]
// asm:   0x183340fb6: movabs rax, 0
// asm:   0x183340fc0: jmp 0x183340fdd
// asm:   0x183340fc2: mov qword ptr [rbp + 0xb8], rax
// asm:   0x183340fc9: lea rdx, [rip + 0xc9afb8]
// asm:   0x183340fd0: lea rcx, [rbp + 0xb8]
// asm:   0x183340fd7: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183340fdd: add rsp, 0x30
// asm:   0x183340fe1: pop rdi
// asm:   0x183340fe2: pop rbp
// asm:   0x183340fe3: pop rbx
// asm:   0x183340fe4: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
               (Map_Experience_o *experience,Settings_InGameSet_o *persisted,System_String_o *variant,
               bool changingVariant,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_SandboxGameCreateConfiguration_o *pSVar4;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Il2CppClass *pIVar5;
  Settings_InGameSet_o *settings;
  System_Collections_Generic_List_string__o *__this;
  Settings_BaseSetting_o *target;
  Settings_BaseSetting_o *source;
  bool bVar6;
  Settings_InGameSet_o *pSVar7;
  Settings_PresetDefinition_o *__this_00;
  System_Func_string__string__o *pSVar8;
  Settings_ExperienceRuleResult_o *pSVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_HashSet_string__o *pSVar11;
  Il2CppObject *pIVar12;
  System_Collections_Generic_List_UIRule__o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  uint uVar13;
  System_Collections_Generic_HashSet_string__o *resetIds;
  System_String_o *local_res18;
  Il2CppObject *local_d0;
  Settings_BaseSetting_o *local_c8;
  Settings_BaseSetting_o *local_c0;
  Settings_PresetDefinition_o *local_b8;
  System_Collections_Generic_HashSet_string__o *local_b0;
  System_Collections_Generic_List_Enumerator_object__o local_a8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_90;
  Il2CppObject *local_78;
  System_Collections_Generic_List_Enumerator_T__o local_68 [2];
  
  if (Il2CppMethodInitialized_184347ecc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_FindMapCategory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_184347ecc = '\x01';
  }
  resetIds = (System_Collections_Generic_HashSet_string__o *)0x0;
  local_d0 = (Il2CppObject *)0x0;
  local_a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._current = (Il2CppObject *)0x0;
  local_90.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  local_c8 = (Settings_BaseSetting_o *)0x0;
  local_c0 = (Settings_BaseSetting_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f18 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField =
       experience;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Experience_k__BackingField,experience);
  if (Il2CppMethodInitialized_184347f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField =
       (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LoadError_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _LoadError_k__BackingField,(void *)0x0);
  pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__CreateOfficialWorkingSet
                     (persisted,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347f1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField = pSVar7;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField,
             pSVar7);
  pSVar11 = resetIds;
  if (experience != (Map_Experience_o *)0x0) {
    pSVar11 = (System_Collections_Generic_HashSet_string__o *)(experience->fields).Name;
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  __this_00 = Map_BuiltinLevels__LoadExperience((System_String_o *)pSVar11,(MethodInfo *)0x0);
  if (variant == (System_String_o *)0x0) {
    if (persisted == (Settings_InGameSet_o *)0x0) {
      variant = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar1 = (persisted->fields).ExperienceVariant;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      variant = (pSVar1->fields)._value;
    }
  }
  local_b8 = __this_00;
  bVar6 = System_String__IsNullOrEmpty(variant,(MethodInfo *)0x0);
  local_res18 = variant;
  if ((bVar6) && (__this_00 != (Settings_PresetDefinition_o *)0x0)) {
    local_res18 = Settings_PresetDefinition__get_DefaultVariant(__this_00,(MethodInfo *)0x0);
  }
  if (!changingVariant) {
    if (persisted == (Settings_InGameSet_o *)0x0) goto label_1823e944a;
    pSVar1 = (persisted->fields).ExperienceVariant;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = System_String__Equals_196c550((pSVar1->fields)._value,local_res18,5,(MethodInfo *)0x0);
    if (bVar6) goto label_1823e944a;
  }
  if (__this_00 != (Settings_PresetDefinition_o *)0x0) {
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
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor_176d450
              ((System_Collections_Generic_HashSet_object__o *)pSVar11,
               (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
               (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    pIVar12 = SZArrayNew(TypeInfo_string_array,2);
    if (persisted == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar1 = (persisted->fields).ExperienceVariant;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (pIVar12 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (*(int *)&pIVar12[1].monitor == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar5 = (Il2CppClass *)(pSVar1->fields)._value;
    pIVar12[2].klass = pIVar5;
    Il2CppCodeGenWriteBarrier(&pIVar12[2].klass,pIVar5);
    if (*(uint *)&pIVar12[1].monitor < 2) {
      ThrowIndexOutOfRangeException();
    }
    pIVar12[2].monitor = local_res18;
    local_b0 = pSVar11;
    Il2CppCodeGenWriteBarrier(&pIVar12[2].monitor,local_res18);
    local_78 = pIVar12;
    while( true ) {
      uVar13 = (uint)resetIds;
      if ((int)*(uint *)&pIVar12[1].monitor <= (int)uVar13) break;
      if (*(uint *)&pIVar12[1].monitor <= uVar13) {
        ThrowIndexOutOfRangeException();
      }
      pIVar5 = (&pIVar12[2].klass)[(int)uVar13];
      bVar6 = System_String__IsNullOrEmpty((System_String_o *)pIVar5,(MethodInfo *)0x0);
      if (((!bVar6) &&
          ((__this_00->fields).Variants !=
           (System_Collections_Generic_Dictionary_string__List_string___o *)0x0)) &&
         (bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             (__this_00->fields).Variants,(Il2CppObject *)pIVar5,&local_d0,
                             (MethodInfo_14769C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_string_TryGetValue),
         bVar6)) {
        __this_01 = Settings_RuleParser__Parse
                              ((System_Collections_Generic_IEnumerable_string__o *)local_d0,
                               (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
        if (__this_01 == (System_Collections_Generic_List_UIRule__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (local_68,(System_Collections_Generic_List_T__o *)__this_01,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
        local_a8.fields._list = local_68[0].fields._list;
        local_a8.fields._index = local_68[0].fields._index;
        local_a8.fields._version = local_68[0].fields._version;
        local_a8.fields._current = local_68[0].fields._current;
        while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&local_a8,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext),
              bVar6) {
          if ((System_String_o *)local_a8.fields._current == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          if (pSVar11 == (System_Collections_Generic_HashSet_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)pSVar11,
                     (Il2CppObject *)((System_String_o *)((longlong)local_a8.fields._current + 0x18))->klass,
                     (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_a8,
                   MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
      }
      resetIds = (System_Collections_Generic_HashSet_string__o *)(ulonglong)(uVar13 + 1);
    }
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
    Settings_InGameSet___ctor(pSVar7,(MethodInfo *)0x0);
    if (pSVar11 == (System_Collections_Generic_HashSet_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
               (System_Collections_Generic_HashSet_Vector2Int__o *)pSVar11,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    local_90.fields._set = (System_Collections_Generic_HashSet_T__o *)local_68[0].fields._list;
    local_90.fields._index = local_68[0].fields._index;
    local_90.fields._version = local_68[0].fields._version;
    local_90.fields._current = local_68[0].fields._current;
    while (bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             (&local_90,
                              (MethodInfo_15381F0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext),
          pIVar12 = local_90.fields._current, bVar6) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      settings = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
      if (Il2CppMethodInitialized_184347f04 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
        Il2CppMethodInitialized_184347f04 = '\x01';
      }
      if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
      }
      bVar6 = Settings_ExperienceRuleEngine__TryResolveSetting
                        (settings,(System_String_o *)pIVar12,&local_c8,(MethodInfo *)0x0);
      if (bVar6) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_184347f04 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
          Il2CppMethodInitialized_184347f04 = '\x01';
        }
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar6 = Settings_ExperienceRuleEngine__TryResolveSetting
                          (pSVar7,(System_String_o *)pIVar12,&local_c0,(MethodInfo *)0x0);
        source = local_c0;
        target = local_c8;
        if (bVar6) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__CopySettingValue(target,source,(MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_90,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    resetIds = pSVar11;
  }
label_1823e944a:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)pSVar8,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_BuiltinLevels_FindMapCategory,(MethodInfo_16E67D0 *)0x0);
  if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
  }
  pSVar9 = Settings_ExperienceRuleEngine__Apply(__this_00,pSVar7,pSVar8,local_res18,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField = pSVar9;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField,pSVar9);
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField;
  if (pSVar9 == (Settings_ExperienceRuleResult_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar6 = Settings_ExperienceRuleResult__get_IsValid(pSVar9,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f11 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f11 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__RestoreEditableValues
              (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _RuleResult_k__BackingField,persisted,resetIds,true,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if (pSVar7 == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = (pSVar7->fields).General;
    if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar1 = (pSVar2->fields).MapCategory;
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if (pSVar7 == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = (pSVar7->fields).General;
    if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (pSVar2->fields).MapName;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (pSVar3->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar10 = Map_BuiltinLevels__FindMapCategory(pSVar10,(MethodInfo *)0x0);
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pSVar10,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (pSVar4 == (Settings_SandboxGameCreateConfiguration_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_SandboxGameCreateConfiguration__Reset(pSVar4,(MethodInfo *)0x0);
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (pSVar4 == (Settings_SandboxGameCreateConfiguration_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_SandboxGameCreateConfiguration__Refresh
              (pSVar4,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                      _Working_k__BackingField,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)pSVar8,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_BuiltinLevels_FindMapCategory,(MethodInfo_16E67D0 *)0x0);
    if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
    }
    pSVar9 = Settings_ExperienceRuleEngine__Apply(__this_00,pSVar7,pSVar8,local_res18,(MethodInfo *)0x0);
    il2cpp_runtime_helper_1823d5a60(pSVar9);
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (pSVar4 == (Settings_SandboxGameCreateConfiguration_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = System_String__IsNullOrEmpty((pSVar4->fields)._LastError_k__BackingField,(MethodInfo *)0x0);
    if (!bVar6) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347f11 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f11 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _RuleResult_k__BackingField;
      if (pSVar9 == (Settings_ExperienceRuleResult_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration ==
          (Settings_SandboxGameCreateConfiguration_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pSVar9->fields).Errors == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_180012890();
    }
  }
  if (persisted != (Settings_InGameSet_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f11 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f11 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__RestoreEditableValues
              (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _RuleResult_k__BackingField,persisted,resetIds,false,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if (pSVar7 == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = (pSVar7->fields).General;
    if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar1 = (pSVar2->fields).MapCategory;
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if (pSVar7 == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = (pSVar7->fields).General;
    if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (pSVar2->fields).MapName;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (pSVar3->fields)._value;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar10 = Map_BuiltinLevels__FindMapCategory(pSVar10,(MethodInfo *)0x0);
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pSVar10,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ValidateContentOptions
            (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f11 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField !=
      (Settings_ExperienceRuleResult_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f11 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f11 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
    if (pSVar9 == (Settings_ExperienceRuleResult_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = Settings_ExperienceRuleResult__get_IsValid(pSVar9,(MethodInfo *)0x0);
    if (!bVar6) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347f11 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f11 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _RuleResult_k__BackingField;
      if (pSVar9 == (Settings_ExperienceRuleResult_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this = (pSVar9->fields).Errors;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                        ((System_Collections_Generic_List_T__o *)__this,
                         (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar10 = System_String__Join("\n",(System_String_array *)value,(MethodInfo *)0x0);
      il2cpp_runtime_helper_1823d59f0(pSVar10,0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectSandbox
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSandbox (const MethodInfo* method);
// 0x1823ef6c0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSandbox(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_BoolSetting_o *__this;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_IntSetting_o *__this_00;
  Settings_SandboxGameCreateConfiguration_o *__this_01;
  Settings_InGameSet_o *__this_02;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184347ecd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    Il2CppMethodInitialized_184347ecd = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField =
       false;
  if (Il2CppMethodInitialized_184347f1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_SelectedPresetName_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _SelectedPresetName_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
       false;
  pSVar4 = "Sandbox";
  if (Il2CppMethodInitialized_184347f16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f16 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField = pSVar4;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField
             ,pSVar4);
  if (Il2CppMethodInitialized_184347f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f17 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Subcategory_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Subcategory_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f18 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField =
       (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Experience_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField =
       (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LoadError_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _LoadError_k__BackingField,(void *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if (Il2CppMethodInitialized_184347f01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    Il2CppMethodInitialized_184347f01 = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(__this_02,(MethodInfo *)0x0);
  if (pSVar1 != (Settings_InGameSet_o *)0x0) {
    pSVar4 = (*(pSVar1->klass->vtable)._8_SerializeToJsonString.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._8_SerializeToJsonString.method);
    if (__this_02 == (Settings_InGameSet_o *)0x0) goto label_1823efd5f;
    (*(__this_02->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this_02,pSVar4,(__this_02->klass->vtable)._9_DeserializeFromJsonString.method);
  }
  if (Il2CppMethodInitialized_184347f1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField = __this_02;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField,
             __this_02);
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ExperienceName, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).ExperienceVariant, pSVar2 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
         (__this = (pSVar1->fields).Sandbox, __this != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this,true,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        if (Il2CppMethodInitialized_184344b3a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184344b3a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
        if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
            (pSVar3 = (pSVar1->fields).General, pSVar3 != (Settings_InGameGeneralSettings_o *)0x0)) &&
           (__this_00 = (pSVar3->fields).Difficulty, __this_00 != (Settings_IntSetting_o *)0x0)) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)__this_00,2,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar4 = "General";
          if (Il2CppMethodInitialized_184347f1b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184347f1b = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
          _SandboxSection_k__BackingField = pSVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                      _SandboxSection_k__BackingField,pSVar4);
          __this_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                      SandboxConfiguration;
          if (__this_01 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
            Settings_SandboxGameCreateConfiguration__Reset(__this_01,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_1823efd5f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectSandboxSection
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSandboxSection (int32_t index, const MethodInfo* method);
// 0x1823ef500

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSandboxSection(int32_t index,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_WeatherSettings_o *pSVar2;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar3;
  Settings_IntSetting_o *__this;
  bool bVar4;
  System_String_o *a;
  longlong lVar5;
  
  if (Il2CppMethodInitialized_184347ece == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    Il2CppMethodInitialized_184347ece = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  if ((!bVar4) || (index < 0)) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal;
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length <= index) {
      return false;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal;
    if (pSVar1 != (System_String_array *)0x0) {
      if ((uint)pSVar1->max_length <= (uint)index) {
        ThrowIndexOutOfRangeException();
      }
      il2cpp_runtime_helper_1823d5ad0(pSVar1->m_Items[index],0);
      a = (System_String_o *)il2cpp_runtime_helper_1823d57c0(0);
      bVar4 = System_String__op_Equality(a,"Weather",(MethodInfo *)0x0);
      if (!bVar4) {
label_1823ef67f:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields((MethodInfo *)0x0);
        return true;
      }
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
      if ((pSVar2 != (Settings_WeatherSettings_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).WeatherSets, pSVar3 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)
         ) {
        __this = (pSVar3->fields).SelectedSetIndex;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        lVar5 = il2cpp_runtime_helper_181dd5530(0);
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x70) != 0)) && (__this != (Settings_IntSetting_o *)0x0))
        {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)__this,*(int32_t *)(*(longlong *)(lVar5 + 0x70) + 0x1c),
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          goto label_1823ef67f;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetShowSandboxVariableNames
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetShowSandboxVariableNames (bool show, const MethodInfo* method);
// 0x1823f0630

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetShowSandboxVariableNames(bool show,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347ecf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ecf = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames = show;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetShowLockedSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetShowLockedSettings (bool show, const MethodInfo* method);
// 0x1823f05d0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetShowLockedSettings(bool show,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ed0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ed0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings = show;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanSpawnPreset
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnPreset (const MethodInfo* method);
// 0x1823f18a0

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnPreset(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  bool bVar4;
  System_Single_array *actual;
  System_Single_array *pSVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184347ed1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_0A95B058D7E04CB679EC0BB7F95FA5C0DC8DD51BCB9AD7669DDBDD3EA54E9D23
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_E9A2C0082D51D723E68D8CF41DC35C2AADBFDECED5F50F2C2900AAFF99643D89
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"All Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Variety");
    il2cpp_codegen_initialize_runtime_metadata(&"All Abnormals");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_184347ed1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField ==
      (Settings_InGameSet_o *)0x0) {
    return "Default";
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).TitanSpawnEnabled, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == false) {
      return "Default";
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom !=
        false) {
      return "Custom";
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    actual = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnProbabilities((MethodInfo *)0x0);
    pSVar5 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
    if (pSVar5 != (System_Single_array *)0x0) {
      if ((int)pSVar5->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar5->m_Items[0] = 100.0;
      bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Matches(actual,pSVar5,(MethodInfo *)0x0);
      if (bVar4) {
        return "All Normal";
      }
      pSVar5 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                ((System_Array_o *)pSVar5,
                 FieldRva_PrivateImplementationDetails_0A95B058D7E04CB679EC0BB7F95FA5C0DC8DD51BCB9AD7669DDBDD3EA54E9D23
                 ,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Matches(actual,pSVar5,(MethodInfo *)0x0);
      if (bVar4) {
        return "Variety";
      }
      pSVar5 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                ((System_Array_o *)pSVar5,
                 FieldRva_PrivateImplementationDetails_E9A2C0082D51D723E68D8CF41DC35C2AADBFDECED5F50F2C2900AAFF99643D89
                 ,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Matches(actual,pSVar5,(MethodInfo *)0x0);
      pSVar6 = "All Abnormals";
      if (!bVar4) {
        pSVar6 = "Custom";
      }
      return pSVar6;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanSpawnPreset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnPreset (System_String_o* preset, const MethodInfo* method);
// 0x1823f08a0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnPreset
               (System_String_o *preset,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *__this;
  bool bVar3;
  System_Single_array *values;
  System_RuntimeFieldHandle_o fldHandle;
  
  if (Il2CppMethodInitialized_184347ed2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_0A95B058D7E04CB679EC0BB7F95FA5C0DC8DD51BCB9AD7669DDBDD3EA54E9D23
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_E9A2C0082D51D723E68D8CF41DC35C2AADBFDECED5F50F2C2900AAFF99643D89
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"All Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Variety");
    il2cpp_codegen_initialize_runtime_metadata(&"All Abnormals");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_184347ed2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField ==
      (Settings_InGameSet_o *)0x0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) {
    __this = (pSVar2->fields).TitanSpawnEnabled;
    bVar3 = System_String__op_Inequality(preset,"Default",(MethodInfo *)0x0);
    if (__this != (Settings_BoolSetting_o *)0x0) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this,bVar3,
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      bVar3 = System_String__op_Equality(preset,"Custom",(MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom = bVar3;
      bVar3 = System_String__op_Equality(preset,"All Normal",(MethodInfo *)0x0);
      if (bVar3) {
        values = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
        if (values == (System_Single_array *)0x0) goto label_1823f0b2c;
        if ((int)values->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        values->m_Items[0] = 100.0;
      }
      else {
        bVar3 = System_String__op_Equality(preset,"Variety",(MethodInfo *)0x0);
        if (bVar3) {
          values = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
          fldHandle.fields.value =
               (System_RuntimeFieldHandle_Fields)
               (System_RuntimeFieldHandle_Fields)
               FieldRva_PrivateImplementationDetails_0A95B058D7E04CB679EC0BB7F95FA5C0DC8DD51BCB9AD7669DDBDD3EA54E9D23
               .value;
        }
        else {
          bVar3 = System_String__op_Equality(preset,"All Abnormals",(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          values = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
          fldHandle.fields.value =
               (System_RuntimeFieldHandle_Fields)
               (System_RuntimeFieldHandle_Fields)
               FieldRva_PrivateImplementationDetails_E9A2C0082D51D723E68D8CF41DC35C2AADBFDECED5F50F2C2900AAFF99643D89
               .value;
        }
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                  ((System_Array_o *)values,fldHandle,(MethodInfo *)0x0);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbabilities(values,(MethodInfo *)0x0);
      return;
    }
  }
label_1823f0b2c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanSpawnProbabilities
// il2cpp: System_Single_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnProbabilities (const MethodInfo* method);
// 0x1823f1bb0

System_Single_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnProbabilities(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  System_Single_array *pSVar4;
  
  if (Il2CppMethodInitialized_184347ed3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184347ed3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField ==
      (Settings_InGameSet_o *)0x0) {
    pSVar4 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,0);
    return pSVar4;
  }
  pSVar4 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if ((((pSVar1 != (Settings_InGameSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
      (pSVar3 = (pSVar2->fields).TitanSpawnNormal, pSVar3 != (Settings_FloatSetting_o *)0x0)) &&
     (pSVar4 != (System_Single_array *)0x0)) {
    if ((int)pSVar4->max_length != 0) {
      pSVar4->m_Items[0] = (pSVar3->fields)._value;
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
          (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) ||
         (pSVar3 = (pSVar2->fields).TitanSpawnAbnormal, pSVar3 == (Settings_FloatSetting_o *)0x0))
      goto label_1823f1f5f;
      if (1 < (uint)pSVar4->max_length) {
        pSVar4->m_Items[1] = (pSVar3->fields)._value;
        if (Il2CppMethodInitialized_184344b3a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184344b3a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
        if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
            (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) ||
           (pSVar3 = (pSVar2->fields).TitanSpawnJumper, pSVar3 == (Settings_FloatSetting_o *)0x0))
        goto label_1823f1f5f;
        if (2 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[2] = (pSVar3->fields)._value;
          if (Il2CppMethodInitialized_184344b3a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184344b3a = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
          if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
              (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) ||
             (pSVar3 = (pSVar2->fields).TitanSpawnCrawler, pSVar3 == (Settings_FloatSetting_o *)0x0))
          goto label_1823f1f5f;
          if (3 < (uint)pSVar4->max_length) {
            pSVar4->m_Items[3] = (pSVar3->fields)._value;
            if (Il2CppMethodInitialized_184344b3a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184344b3a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Working_k__BackingField;
            if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) ||
               (pSVar3 = (pSVar2->fields).TitanSpawnThrower, pSVar3 == (Settings_FloatSetting_o *)0x0))
            goto label_1823f1f5f;
            if (4 < (uint)pSVar4->max_length) {
              pSVar4->m_Items[4] = (pSVar3->fields)._value;
              if (Il2CppMethodInitialized_184344b3a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                Il2CppMethodInitialized_184344b3a = '\x01';
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Working_k__BackingField;
              if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                  (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) ||
                 (pSVar3 = (pSVar2->fields).TitanSpawnPunk, pSVar3 == (Settings_FloatSetting_o *)0x0))
              goto label_1823f1f5f;
              if (5 < (uint)pSVar4->max_length) {
                pSVar4->m_Items[5] = (pSVar3->fields)._value;
                return pSVar4;
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1823f1f5f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanSpawnProbability
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbability (int32_t index, float value, const MethodInfo* method);
// 0x1823f0c70

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbability
               (int32_t index,float value,MethodInfo *method)

{
  Settings_TypedSetting_bool__o *__this;
  Settings_FloatSetting_o *__this_00;
  Settings_FloatSetting_array *pSVar1;
  longlong lVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184347ed4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184347ed4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField !=
      (Settings_InGameSet_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnSettings((MethodInfo *)0x0);
    if (-1 < index) {
      if (pSVar1 != (Settings_FloatSetting_array *)0x0) {
        if ((int)pSVar1->max_length <= index) {
          return;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        lVar2 = il2cpp_runtime_helper_181dd5530(0);
        if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x60) != 0)) &&
           (__this = *(Settings_TypedSetting_bool__o **)(*(longlong *)(lVar2 + 0x60) + 0x30),
           __this != (Settings_TypedSetting_bool__o *)0x0)) {
          Settings_TypedSetting_bool___set_Value
                    (__this,true,(MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom =
               true;
          if ((uint)pSVar1->max_length <= (uint)index) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = pSVar1->m_Items[index];
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          fVar3 = System_Math__Min_1b2c340(100.0,value,(MethodInfo *)0x0);
          fVar3 = System_Math__Max_1b2c160(0.0,fVar3,(MethodInfo *)0x0);
          if (__this_00 != (Settings_FloatSetting_o *)0x0) {
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)__this_00,fVar3,
                       (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ResetTitanSpawnProbabilities
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ResetTitanSpawnProbabilities (const MethodInfo* method);
// 0x1823ee320

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ResetTitanSpawnProbabilities(MethodInfo *method)

{
  System_Single_array *values;
  
  if (Il2CppMethodInitialized_184347ed5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_184347ed5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom = true;
  values = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbabilities(values,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AutofillTitanSpawnProbabilities
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AutofillTitanSpawnProbabilities (const MethodInfo* method);
// 0x1823e5740

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AutofillTitanSpawnProbabilities(MethodInfo *method)

{
  float fVar1;
  Il2CppObject *pIVar2;
  int32_t iVar3;
  System_Single_array *values;
  System_Predicate_T__o *pSVar4;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  uint uVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184347ed6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Count_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_float_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AutofillTitanSpawnProbabilities_b__112_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AutofillTitanSpawnProbabilities_b__112_1
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184347ed6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  values = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnProbabilities((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
  }
  pSVar4 = (System_Predicate_T__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__112_0;
  if (pSVar4 == (System_Predicate_T__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    pIVar2 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
    pSVar4 = (System_Predicate_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_float_bool);
    System_Func_float__bool____ctor
              (pSVar4,pIVar2,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AutofillTitanSpawnProbabilities_b__112_0
               ,(MethodInfo_B61550 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__112_0 =
         (System_Func_float__bool__o *)pSVar4;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__112_0,pSVar4);
  }
  iVar3 = System_Linq_Enumerable__Count_float_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)values,
                     (System_Func_TSource__bool__o *)pSVar4,
                     (MethodInfo_6BAC20 *)MethodInfo_System_Linq_Enumerable_Count_float);
  if (iVar3 != 0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    pSVar4 = (System_Predicate_T__o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__112_1;
    if (pSVar4 == (System_Predicate_T__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      pIVar2 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
      pSVar4 = (System_Predicate_T__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_float_bool);
      System_Func_float__bool____ctor
                (pSVar4,pIVar2,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AutofillTitanSpawnProbabilities_b__112_1
                 ,(MethodInfo_B61550 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__112_1 =
           (System_Func_float__bool__o *)pSVar4;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__112_1,pSVar4);
    }
    source = System_Linq_Enumerable__Where_float_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)values,
                        (System_Func_TSource__bool__o *)pSVar4,
                        (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_float);
    fVar6 = System_Linq_Enumerable__Sum
                      ((System_Collections_Generic_IEnumerable_float__o *)source,(MethodInfo *)0x0);
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar6 = System_Math__Max_1b2c160(0.0,100.0 - fVar6,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom = true;
    if (values == (System_Single_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (uVar5 = 0; (int)uVar5 < (int)values->max_length; uVar5 = uVar5 + 1) {
      if ((uint)values->max_length <= uVar5) {
label_1823e5a8d:
        ThrowIndexOutOfRangeException();
      }
      fVar1 = values->m_Items[(int)uVar5];
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      if (ABS(fVar1) < 0.0001) {
        if ((uint)values->max_length <= uVar5) goto label_1823e5a8d;
        values->m_Items[(int)uVar5] = fVar6 / (float)iVar3;
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbabilities(values,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanHealthEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanHealthEnabled (bool enabled, const MethodInfo* method);
// 0x1823f06b0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanHealthEnabled(bool enabled,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_IntSetting_o *__this;
  Settings_IntSetting_o *pSVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_184347ed7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347ed7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField ==
      (Settings_InGameSet_o *)0x0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) {
    __this = (pSVar2->fields).TitanHealthMode;
    if (enabled) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
          (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) ||
         (pSVar3 = (pSVar2->fields).TitanHealthMode, pSVar3 == (Settings_IntSetting_o *)0x0))
      goto label_1823f088b;
      iVar4 = (pSVar3->fields)._value;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar4 = System_Math__Max_1b2c0d0(1,iVar4,(MethodInfo *)0x0);
    }
    else {
      iVar4 = 0;
    }
    if (__this != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this,iVar4,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
  }
label_1823f088b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanSpawnSettings
// il2cpp: Settings_FloatSetting_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnSettings (const MethodInfo* method);
// 0x1823f1f70

Settings_FloatSetting_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnSettings(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_FloatSetting_array *pSVar4;
  Il2CppObject *pIVar5;
  
  if (Il2CppMethodInitialized_184347ed8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting_array);
    Il2CppMethodInitialized_184347ed8 = '\x01';
  }
  pSVar4 = (Settings_FloatSetting_array *)SZArrayNew(TypeInfo_Settings_FloatSetting_array,6);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar4 != (Settings_FloatSetting_array *)0x0)) {
    pSVar3 = (pSVar2->fields).TitanSpawnNormal;
    if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
    }
    if ((int)pSVar4->max_length != 0) {
      pSVar4->m_Items[0] = pSVar3;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar3);
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0))
      goto label_1823f235d;
      pSVar3 = (pSVar2->fields).TitanSpawnAbnormal;
      if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
        pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class);
        if (pIVar5 == (Il2CppObject *)0x0) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
      }
      if (1 < (uint)pSVar4->max_length) {
        pSVar4->m_Items[1] = pSVar3;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar3);
        if (Il2CppMethodInitialized_184344b3a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184344b3a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
        if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
           (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0))
        goto label_1823f235d;
        pSVar3 = (pSVar2->fields).TitanSpawnJumper;
        if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
          pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class);
          if (pIVar5 == (Il2CppObject *)0x0) {
            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
          }
        }
        if (2 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[2] = pSVar3;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2,pSVar3);
          if (Il2CppMethodInitialized_184344b3a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184344b3a = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
          if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
             (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0))
          goto label_1823f235d;
          pSVar3 = (pSVar2->fields).TitanSpawnCrawler;
          if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
            pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class)
            ;
            if (pIVar5 == (Il2CppObject *)0x0) {
              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
            }
          }
          if (3 < (uint)pSVar4->max_length) {
            pSVar4->m_Items[3] = pSVar3;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 3,pSVar3);
            if (Il2CppMethodInitialized_184344b3a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184344b3a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Working_k__BackingField;
            if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
               (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0))
            goto label_1823f235d;
            pSVar3 = (pSVar2->fields).TitanSpawnThrower;
            if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
              pIVar5 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class);
              if (pIVar5 == (Il2CppObject *)0x0) {
                pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
              }
            }
            if (4 < (uint)pSVar4->max_length) {
              pSVar4->m_Items[4] = pSVar3;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 4,pSVar3);
              if (Il2CppMethodInitialized_184344b3a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                Il2CppMethodInitialized_184344b3a = '\x01';
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Working_k__BackingField;
              if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                 (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0))
              goto label_1823f235d;
              pSVar3 = (pSVar2->fields).TitanSpawnPunk;
              if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
                pIVar5 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class);
                if (pIVar5 == (Il2CppObject *)0x0) {
                  pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                }
              }
              if (5 < (uint)pSVar4->max_length) {
                pSVar4->m_Items[5] = pSVar3;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 5,pSVar3);
                return pSVar4;
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1823f235d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanSpawnProbabilities
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbabilities (System_Single_array* values, const MethodInfo* method);
// 0x1823f0b40
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f0c09: nop dword ptr [rax]
// asm:   0x1823f0c47: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x1823f0c4c: mov rdi, qword ptr [rsp + 0x38]

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbabilities
               (System_Single_array *values,MethodInfo *method)

{
  Settings_FloatSetting_array *pSVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184347ed9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_184347ed9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField !=
        (Settings_InGameSet_o *)0x0) && (values != (System_Single_array *)0x0)) &&
     (5 < (int)values->max_length)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnSettings((MethodInfo *)0x0);
    if (pSVar1 == (Settings_FloatSetting_array *)0x0) {
label_1823f0c5d:
      ThrowNullReferenceException();
    }
    for (uVar2 = 0; (int)uVar2 < (int)pSVar1->max_length; uVar2 = uVar2 + 1) {
      if (((uint)pSVar1->max_length <= uVar2) || ((uint)values->max_length <= uVar2)) {
        ThrowIndexOutOfRangeException();
      }
      if (pSVar1->m_Items[(int)uVar2] == (Settings_FloatSetting_o *)0x0) goto label_1823f0c5d;
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar1->m_Items[(int)uVar2],values->m_Items[(int)uVar2],
                 (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Matches
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__Matches (System_Single_array* actual, System_Single_array* expected, const MethodInfo* method);
// 0x1823ec250

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__Matches
               (System_Single_array *actual,System_Single_array *expected,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347eda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_184347eda = '\x01';
  }
  if ((actual == (System_Single_array *)0x0) || (expected == (System_Single_array *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((int)actual->max_length == (int)expected->max_length) {
    for (uVar4 = 0; (int)uVar4 < (int)actual->max_length; uVar4 = uVar4 + 1) {
      if (((uint)actual->max_length <= uVar4) || ((uint)expected->max_length <= uVar4)) {
        ThrowIndexOutOfRangeException();
      }
      fVar1 = actual->m_Items[(int)uVar4];
      fVar2 = expected->m_Items[(int)uVar4];
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      if (0.001 < ABS(fVar1 - fVar2)) goto label_1823ec342;
    }
    bVar3 = true;
  }
  else {
label_1823ec342:
    bVar3 = false;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ChangeSandboxField
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeSandboxField (int32_t index, System_String_o* value, const MethodInfo* method);
// 0x1823e8c50

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeSandboxField
               (int32_t index,System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_List_AottgSandboxField__o *pSVar1;
  Settings_TypedSetting_T__o *__this;
  Settings_SandboxGameCreateConfiguration_o *pSVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  longlong lVar7;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184347edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_184347edb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  if ((!bVar6) || (index < 0)) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  if (pSVar1 != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
    if ((pSVar1->fields)._size <= index) {
      return false;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
    if (pSVar1 != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
      field = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar1,index,
                         (MethodInfo_92B830 *)
                         MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item);
      bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetValue(field,value,(MethodInfo *)0x0);
      if (!bVar6) {
        return false;
      }
      if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
        bVar6 = System_String__op_Equality
                          ((field->fields)._Id_k__BackingField,"general.MapName",(MethodInfo *)0x0);
        if (!bVar6) {
label_1823e8efa:
          bVar6 = System_String__op_Equality
                            ((field->fields)._Id_k__BackingField,"general.MapCategory",(MethodInfo *)0x0);
          if (((!bVar6) &&
              (bVar6 = System_String__op_Equality
                                 ((field->fields)._Id_k__BackingField,"general.MapName",(MethodInfo *)0x0)
              , !bVar6)) &&
             (bVar6 = System_String__op_Equality
                                ((field->fields)._Id_k__BackingField,"general.GameMode",(MethodInfo *)0x0),
             !bVar6)) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields((MethodInfo *)0x0);
            return true;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox((MethodInfo *)0x0);
          return true;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        lVar7 = il2cpp_runtime_helper_181dd5530(0);
        if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x48) != 0)) {
          __this = *(Settings_TypedSetting_T__o **)(*(longlong *)(lVar7 + 0x48) + 0x30);
          pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration
          ;
          if (Il2CppMethodInitialized_184344b3a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184344b3a = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
          if ((((pSVar3 != (Settings_InGameSet_o *)0x0) &&
               (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_InGameGeneralSettings_o *)0x0)) &&
              (pSVar5 = (pSVar4->fields).MapName, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
             ((pSVar2 != (Settings_SandboxGameCreateConfiguration_o *)0x0 &&
              (value_00 = Settings_SandboxGameCreateConfiguration__FindMapCategory
                                    (pSVar2,(pSVar5->fields)._value,(MethodInfo *)0x0),
              __this != (Settings_TypedSetting_T__o *)0x0)))) {
            Settings_TypedSetting_object___set_Value
                      (__this,(Il2CppObject *)value_00,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     SandboxConfiguration;
            if (Il2CppMethodInitialized_184344b3a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184344b3a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            if (pSVar2 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
              Settings_SandboxGameCreateConfiguration__ApplyMapChange
                        (pSVar2,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                _Working_k__BackingField,(MethodInfo *)0x0);
              goto label_1823e8efa;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ChangeMultiplayerField
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeMultiplayerField (int32_t index, System_String_o* value, const MethodInfo* method);
// 0x1823e89b0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeMultiplayerField
               (int32_t index,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  Settings_TypedSetting_int__o *__this;
  bool bVar2;
  Il2CppObject *obj;
  void *pvVar3;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  int32_t value_00;
  bool local_res20 [8];
  
  if (Il2CppMethodInitialized_184347edc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    Il2CppMethodInitialized_184347edc = '\x01';
  }
  local_res20[0] = false;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eb7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  obj = (Il2CppObject *)
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields((MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer == false) ||
     (index < 0)) {
    return false;
  }
  if (obj != (Il2CppObject *)0x0) {
    pvVar3 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,obj);
    if ((int)pvVar3 <= index) {
      return false;
    }
    field = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)
            il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,obj,index);
    if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
      bVar2 = System_String__op_Equality
                        ((field->fields)._Id_k__BackingField,"misc.VoiceChat",(MethodInfo *)0x0);
      if (!bVar2) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetValue(field,value,(MethodInfo *)0x0);
        return bVar2;
      }
      if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354de8);
      }
      bVar2 = System_Boolean__TryParse(value,local_res20,(MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
      __this = (Settings_TypedSetting_int__o *)(field->fields)._Setting_k__BackingField;
      if (local_res20[0] == false) {
        if (__this != (Settings_TypedSetting_int__o *)0x0) {
          bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this);
          }
        }
        value_00 = 2;
      }
      else if (__this == (Settings_TypedSetting_int__o *)0x0) {
        value_00 = 1;
      }
      else {
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this);
        }
        value_00 = 1;
      }
      if (__this != (Settings_TypedSetting_int__o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  (__this,value_00,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleSandboxAddon
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleSandboxAddon (int32_t index, bool enabled, const MethodInfo* method);
// 0x1823f27f0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleSandboxAddon
               (int32_t index,bool enabled,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Settings_ListSetting_T__o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_SandboxGameCreateConfiguration_o *__this_01;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0_o *object;
  longlong lVar4;
  System_Func_StringSetting__bool__o *__this_02;
  Settings_StringSetting_o *__this_03;
  System_Predicate_T__o *match;
  Settings_InGameSet_o *settings;
  
  if (Il2CppMethodInitialized_184347edd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_AddItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass119_0_ToggleSandboxAddon_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass119_0_ToggleSandboxAddon_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass119_0);
    Il2CppMethodInitialized_184347edd = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass119_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  if ((!bVar3) || (index < 0)) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length <= index) {
      return false;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
    if (pSVar1 != (System_String_array *)0x0) {
      if ((uint)pSVar1->max_length <= (uint)index) {
        ThrowIndexOutOfRangeException();
      }
      if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass119_0_o *)0x0) {
        pSVar2 = pSVar1->m_Items[index];
        (object->fields).addonName = pSVar2;
        Il2CppCodeGenWriteBarrier(&(object->fields).addonName,pSVar2);
        lVar4 = il2cpp_runtime_helper_181dd5530(0);
        if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x48) != 0)) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x58), lVar4 != 0)) {
          source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar4 + 0x20);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
          System_Func_object__bool____ctor
                    ((System_Predicate_object__o *)__this_02,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass119_0_ToggleSandboxAddon_b__0
                     ,(MethodInfo_B61EB0 *)0x0);
          bVar3 = System_Linq_Enumerable__Any_object__6b6920
                            (source,(System_Func_TSource__bool__o *)__this_02,
                             (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
          if ((!enabled) || (bVar3)) {
            if (bVar3 && !enabled) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              lVar4 = il2cpp_runtime_helper_181dd5530(0);
              if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x48) == 0)) ||
                 (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x58), lVar4 == 0)) goto label_1823f2b4e;
              __this_00 = *(System_Collections_Generic_List_object__o **)(lVar4 + 0x20);
              match = (System_Predicate_T__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_StringSetting);
              System_Predicate_object____ctor
                        ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass119_0_ToggleSandboxAddon_b__1
                         ,(MethodInfo_B61EB0 *)0x0);
              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_1823f2b4e;
              System_Collections_Generic_List_object___RemoveAll
                        (__this_00,match,
                         (MethodInfo_946210 *)
                         MethodInfo_System_Collections_Generic_List_StringSetting_RemoveAll);
            }
          }
          else {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            lVar4 = il2cpp_runtime_helper_181dd5530(0);
            if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x48) == 0)) goto label_1823f2b4e;
            __this = *(Settings_ListSetting_T__o **)(*(longlong *)(lVar4 + 0x48) + 0x58);
            pSVar2 = (object->fields).addonName;
            __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
            Settings_StringSetting___ctor_1f27ee0(__this_03,pSVar2,0x7fffffff,(MethodInfo *)0x0);
            if (__this == (Settings_ListSetting_T__o *)0x0) goto label_1823f2b4e;
            Settings_ListSetting_object___AddItem
                      (__this,(Settings_BaseSetting_o *)__this_03,
                       (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          __this_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                      SandboxConfiguration;
          settings = (Settings_InGameSet_o *)il2cpp_runtime_helper_181dd5530(0);
          if (__this_01 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
            Settings_SandboxGameCreateConfiguration__SyncAddonSettings(__this_01,settings,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields((MethodInfo *)0x0);
            return true;
          }
        }
      }
    }
  }
label_1823f2b4e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsSandboxAddonSelected
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSandboxAddonSelected (int32_t index, const MethodInfo* method);
// 0x1823eb9f0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSandboxAddonSelected(int32_t index,MethodInfo *method)

{
  int iVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0_o *object;
  longlong lVar4;
  System_Func_StringSetting__bool__o *__this;
  
  if (Il2CppMethodInitialized_184347ede == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass120_0_IsSandboxAddonSelected_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass120_0);
    Il2CppMethodInitialized_184347ede = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass120_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass120_0_o *)0x0) {
    (object->fields).index = index;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
    if ((!bVar3) || ((object->fields).index < 0)) {
      return false;
    }
    iVar1 = (object->fields).index;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
    if (pSVar2 != (System_String_array *)0x0) {
      if ((int)pSVar2->max_length <= iVar1) {
        return false;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      lVar4 = il2cpp_runtime_helper_181dd5530(0);
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x48) != 0)) &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x58), lVar4 != 0)) {
        source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar4 + 0x20);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
        System_Func_object__bool____ctor
                  ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass120_0_IsSandboxAddonSelected_b__0
                   ,(MethodInfo_B61EB0 *)0x0);
        bVar3 = System_Linq_Enumerable__Any_object__6b6920
                          (source,(System_Func_TSource__bool__o *)__this,
                           (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
        return bVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ReplaceSandboxWorking
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ReplaceSandboxWorking (Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x1823ede10

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ReplaceSandboxWorking
               (Settings_InGameSet_o *settings,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_BoolSetting_o *__this;
  Settings_SandboxGameCreateConfiguration_o *__this_00;
  Settings_InGameSet_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347edf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    Il2CppMethodInitialized_184347edf = '\x01';
  }
  if (settings == (Settings_InGameSet_o *)0x0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
       false;
  pSVar3 = "Sandbox";
  if (Il2CppMethodInitialized_184347f16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f16 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField = pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField
             ,pSVar3);
  if (Il2CppMethodInitialized_184347f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f17 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Subcategory_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Subcategory_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f18 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField =
       (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Experience_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField =
       (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField,(void *)0x0);
  if (Il2CppMethodInitialized_184347f1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_SelectedPresetName_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _SelectedPresetName_k__BackingField,(void *)0x0);
  pSVar3 = "General";
  if (Il2CppMethodInitialized_184347f1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_SandboxSection_k__BackingField =
       pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _SandboxSection_k__BackingField,pSVar3);
  if (Il2CppMethodInitialized_184347f01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    Il2CppMethodInitialized_184347f01 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(pSVar2,(MethodInfo *)0x0);
  pSVar3 = (*(settings->klass->vtable)._8_SerializeToJsonString.methodPtr)
                     (settings,(settings->klass->vtable)._8_SerializeToJsonString.method);
  if (pSVar2 != (Settings_InGameSet_o *)0x0) {
    (*(pSVar2->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (pSVar2,pSVar3,(pSVar2->klass->vtable)._9_DeserializeFromJsonString.method);
    il2cpp_runtime_helper_1823d5c90(pSVar2,0);
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if ((pSVar2 != (Settings_InGameSet_o *)0x0) &&
       (pSVar1 = (pSVar2->fields).ExperienceName, pSVar1 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if ((pSVar2 != (Settings_InGameSet_o *)0x0) &&
         (pSVar1 = (pSVar2->fields).ExperienceVariant, pSVar1 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar1,
                   (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        if (Il2CppMethodInitialized_184344b3a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184344b3a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
        if ((pSVar2 != (Settings_InGameSet_o *)0x0) &&
           (__this = (pSVar2->fields).Sandbox, __this != (Settings_BoolSetting_o *)0x0)) {
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)__this,true,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                      SandboxConfiguration;
          if (__this_00 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
            Settings_SandboxGameCreateConfiguration__Reset(__this_00,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RefreshSandboxContent
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent (const MethodInfo* method);
// 0x1823eda60

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent(MethodInfo *method)

{
  Settings_SandboxGameCreateConfiguration_o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347ee0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ee0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (__this != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
      Settings_SandboxGameCreateConfiguration__Reset(__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox((MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FieldOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions (Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x1823eaef0

System_String_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions
          (Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  Settings_UIRule_o *pSVar1;
  Il2CppObject *pIVar2;
  Settings_BaseSetting_o *pSVar3;
  Settings_InspectorSettingMetadata_o *pSVar4;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Settings_SetSettingsContainer_WeatherSet__o *__this;
  bool bVar5;
  System_String_array *pSVar6;
  System_Func_string__bool__o *__this_00;
  System_Func_string__string__o *__this_01;
  longlong lVar7;
  System_String_o *pSVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar9;
  System_Func_ExperienceRuleField__bool__o *__this_02;
  Settings_ExperienceRuleField_o *pSVar10;
  System_Collections_Generic_IComparer_TKey__o *comparer;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_string__o *pSVar11;
  System_Func_string__string__o **targetAddress;
  
  if (Il2CppMethodInitialized_184347ee1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ExperienceRuleField_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__123_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__123_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__123_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__123_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_UIRule_MatchesAllowedValues);
    il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"mode.");
    Il2CppMethodInitialized_184347ee1 = '\x01';
  }
  if ((field == (Settings_ExperienceRuleField_o *)0x0) || ((field->fields).Rule == (Settings_UIRule_o *)0x0))
  {
    pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar6;
  }
  bVar5 = System_String__Equals_196c550((field->fields).Id,"general.WeatherIndex",5,(MethodInfo *)0x0);
  if (bVar5) {
    if (TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings == (Settings_WeatherSettings_o *)0x0
       ) {
label_1823eb6f2:
      pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
      return pSVar6;
    }
    __this = (TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings->fields).WeatherSets;
    if (__this != (Settings_SetSettingsContainer_WeatherSet__o *)0x0) {
      pSVar6 = Settings_SetSettingsContainer_object___GetSetNames
                         ((Settings_SetSettingsContainer_T__o *)__this,
                          (MethodInfo_C8EC20 *)MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames
                         );
      return pSVar6;
    }
    goto label_1823eb722;
  }
  bVar5 = System_String__Equals_196c550((field->fields).Id,"general.MapName",5,(MethodInfo *)0x0);
  pSVar1 = (field->fields).Rule;
  if (pSVar1 == (Settings_UIRule_o *)0x0) goto label_1823eb722;
  if (!bVar5) {
    if (((pSVar1->fields).AllowedValues == (System_Collections_Generic_List_string__o *)0x0) ||
       ((((pSVar1->fields).AllowedValues)->fields)._size == 0)) {
      pSVar3 = (field->fields).Setting;
      if ((pSVar3 == (Settings_BaseSetting_o *)0x0) ||
         ((pSVar4 = (pSVar3->fields).InspectorMetadata, pSVar4 == (Settings_InspectorSettingMetadata_o *)0x0
          || (pSVar11 = (pSVar4->fields).Dropbox, pSVar11 == (System_Collections_Generic_List_string__o *)0x0)
          ))) goto label_1823eb722;
      if ((pSVar11->fields)._size < 1) {
        pSVar8 = (field->fields).Id;
        if (pSVar8 != (System_String_o *)0x0) {
          bVar5 = System_String__StartsWith_19722c0(pSVar8,"mode.",5,(MethodInfo *)0x0);
          if (!bVar5) goto label_1823eb6f2;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          lVar7 = il2cpp_runtime_helper_181dd5530(0);
          if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x50) != 0)) &&
             (pSVar8 = (field->fields).Id, pSVar8 != (System_String_o *)0x0)) {
            settings = *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                        (*(longlong *)(lVar7 + 0x50) + 0x30);
            pSVar8 = System_String__Substring(pSVar8,5,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat_1969e50(pSVar8,"Dropbox",(MethodInfo *)0x0);
            pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataOptions
                               (settings,pSVar8,(MethodInfo *)0x0);
            return pSVar6;
          }
        }
        goto label_1823eb722;
      }
      pSVar3 = (field->fields).Setting;
      if ((pSVar3 == (Settings_BaseSetting_o *)0x0) ||
         (pSVar4 = (pSVar3->fields).InspectorMetadata, pSVar4 == (Settings_InspectorSettingMetadata_o *)0x0))
      goto label_1823eb722;
      pSVar11 = (pSVar4->fields).Dropbox;
    }
    else {
      bVar5 = System_String__Equals_196c550((field->fields).Id,"general.GameMode",5,(MethodInfo *)0x0);
      pSVar1 = (field->fields).Rule;
      if (bVar5) {
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar6 = Map_BuiltinLevels__QueryModeNames(pSVar1,(MethodInfo *)0x0);
        pSVar1 = (field->fields).Rule;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
        System_Func_object__bool____ctor
                  ((System_Predicate_object__o *)__this_00,(Il2CppObject *)pSVar1,
                   (intptr_t)MethodInfo_Settings_UIRule_MatchesAllowedValues,(MethodInfo_B61EB0 *)0x0);
        pSVar6 = (System_String_array *)
                 System_Linq_Enumerable__Where_float_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                            (System_Func_TSource__bool__o *)__this_00,
                            (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
        }
        __this_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_1;
        if (__this_01 != (System_Func_string__string__o *)0x0) goto label_1823eb666;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
        }
        pIVar2 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,pIVar2,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__123_1,
                   (MethodInfo_16E67D0 *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_1 = __this_01;
        targetAddress = &TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_1;
        goto label_1823eb65e;
      }
      if (pSVar1 == (Settings_UIRule_o *)0x0) goto label_1823eb722;
      pSVar11 = (pSVar1->fields).AllowedValues;
    }
    if (pSVar11 != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar9 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                         ((System_Collections_Generic_List_T__o *)pSVar11,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar9;
    }
label_1823eb722:
    ThrowNullReferenceException();
  }
  if (((pSVar1->fields).AllowedValues == (System_Collections_Generic_List_string__o *)0x0) ||
     ((((pSVar1->fields).AllowedValues)->fields)._size == 0)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    lVar7 = il2cpp_runtime_helper_1823d5770(0);
    if (lVar7 != 0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      lVar7 = il2cpp_runtime_helper_1823d5770(0);
      if (lVar7 == 0) goto label_1823eb722;
      source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar7 + 0x18);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      __this_02 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_2;
      if (__this_02 == (System_Func_ExperienceRuleField__bool__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
        }
        pIVar2 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ExperienceRuleField_bool);
        System_Func_object__bool____ctor
                  ((System_Predicate_object__o *)__this_02,pIVar2,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__123_2,
                   (MethodInfo_B61EB0 *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_2 = __this_02;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_2,
                   __this_02);
      }
      pSVar10 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                          (source,(System_Func_TSource__bool__o *)__this_02,
                           (MethodInfo_6BD2C0 *)
                           MethodInfo_System_Linq_Enumerable_FirstOrDefault_ExperienceRuleField);
      if (pSVar10 != (Settings_ExperienceRuleField_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        lVar7 = il2cpp_runtime_helper_181dd5530(0);
        if (((lVar7 == 0) || (*(longlong *)(lVar7 + 0x48) == 0)) ||
           (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x48) + 0x30), lVar7 == 0)) goto label_1823eb722;
        bVar5 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar7 + 0x20),(MethodInfo *)0x0);
        if (!bVar5) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          lVar7 = il2cpp_runtime_helper_181dd5530(0);
          if (((lVar7 == 0) || (*(longlong *)(lVar7 + 0x48) == 0)) ||
             (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x48) + 0x30), lVar7 == 0)) goto label_1823eb722;
          pSVar8 = *(System_String_o **)(lVar7 + 0x20);
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          pSVar6 = Map_BuiltinLevels__GetMapNames(pSVar8,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
          }
          __this_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_3;
          if (__this_01 != (System_Func_string__string__o *)0x0) goto label_1823eb666;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
          }
          pIVar2 = (Il2CppObject *)
                   TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,pIVar2,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__123_3,
                     (MethodInfo_16E67D0 *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_3 = __this_01;
          targetAddress = &TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_3
          ;
          goto label_1823eb65e;
        }
      }
    }
  }
  pSVar1 = (field->fields).Rule;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = Map_BuiltinLevels__QueryMapsNames(pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
  }
  __this_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_0;
  if (__this_01 != (System_Func_string__string__o *)0x0) goto label_1823eb666;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
  }
  pIVar2 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,pIVar2,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__123_0,
             (MethodInfo_16E67D0 *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_0 = __this_01;
  targetAddress = &TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__123_0;
label_1823eb65e:
  Il2CppCodeGenWriteBarrier(targetAddress,__this_01);
label_1823eb666:
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = (System_Collections_Generic_IComparer_TKey__o *)il2cpp_runtime_helper_181882cf0(0);
  source_00 = System_Linq_Enumerable__OrderBy_object__object__6c13e0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                         (System_Func_TSource__TKey__o *)__this_01,comparer,
                         (MethodInfo_6C13E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450)
  ;
  pSVar6 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar6;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SandboxMapNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__SandboxMapNames (const MethodInfo* method);
// 0x1823ee610

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__SandboxMapNames(MethodInfo *method)

{
  Settings_SandboxGameCreateConfiguration_o *pSVar1;
  Il2CppObject *object;
  System_String_array *pSVar2;
  System_Func_string__IEnumerable_string___o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Func_string__string__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source_01;
  
  if (Il2CppMethodInitialized_184347ee2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_SelectMany_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_GetMapNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_SandboxMapNames_b__124_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184347ee2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  if (pSVar1 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    pSVar2 = Settings_SandboxGameCreateConfiguration__GetMapCategories(pSVar1,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_IEnumerable_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)pSVar1,
               (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_GetMapNames,
               (MethodInfo_16E67D0 *)0x0);
    source = System_Linq_Enumerable__SelectMany_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                        (System_Func_TSource__IEnumerable_TResult___o *)__this,
                        (MethodInfo_6C1BA0 *)MethodInfo_System_Linq_Enumerable_SelectMany_string_string);
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
    source_00 = System_Linq_Enumerable__Distinct_object__6bb210
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Collections_Generic_IEqualityComparer_TSource__o *)
                           TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                           (MethodInfo_6BB210 *)MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__124_0;
    if (__this_00 == (System_Func_string__string__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_SandboxMapNames_b__124_0
                 ,(MethodInfo_16E67D0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__124_0 = __this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__124_0,
                 __this_00);
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
    source_01 = System_Linq_Enumerable__OrderBy_object__object__6c13e0
                          (source_00,(System_Func_TSource__TKey__o *)__this_00,
                           (System_Collections_Generic_IComparer_TKey__o *)
                           TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                           (MethodInfo_6C13E0 *)
                           MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450);
    pSVar2 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                        (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$PresetNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__PresetNames (const MethodInfo* method);
// 0x1823ecee0

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__PresetNames(MethodInfo *method)

{
  Settings_SetSettingsContainer_InGameSet__o *__this;
  Il2CppObject *object;
  System_String_array *pSVar1;
  System_Func_string__string__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  
  if (Il2CppMethodInitialized_184347ee3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_InGameSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_PresetNames_b__125_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184347ee3 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->InGameSettings != (Settings_InGameSettings_o *)0x0) {
    __this = (TypeInfo_Settings_SettingsManager->static_fields->InGameSettings->fields).InGameSets;
    if (__this != (Settings_SetSettingsContainer_InGameSet__o *)0x0) {
      pSVar1 = Settings_SetSettingsContainer_object___GetSetNames
                         ((Settings_SetSettingsContainer_T__o *)__this,
                          (MethodInfo_C8EC20 *)MethodInfo_Settings_SetSettingsContainer_InGameSet_GetSetNames)
      ;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__125_0;
      if (__this_00 == (System_Func_string__string__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
        }
        object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,object,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_PresetNames_b__125_0,
                   (MethodInfo_16E67D0 *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__125_0 = __this_00;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__125_0,
                   __this_00);
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
      source = System_Linq_Enumerable__OrderBy_object__object__6c13e0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                          (System_Func_TSource__TKey__o *)__this_00,
                          (System_Collections_Generic_IComparer_TKey__o *)
                          TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                          (MethodInfo_6C13E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450
                         );
      pSVar1 = (System_String_array *)
               System_Linq_Enumerable__ToArray_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      return pSVar1;
    }
    ThrowNullReferenceException();
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FavoriteExperienceId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperienceId (Map_Experience_o* experience, const MethodInfo* method);
// 0x1823eaa30

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperienceId
          (Map_Experience_o *experience,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *source;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347ee4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Uri_EscapeDataString);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_184347ee4 = '\x01';
  }
  source = SZArrayNew(TypeInfo_string_array,3);
  if ((experience != (Map_Experience_o *)0x0) && (source != (Il2CppObject *)0x0)) {
    if (*(int *)&source[1].monitor != 0) {
      pIVar1 = (Il2CppClass *)(experience->fields).Category;
      source[2].klass = pIVar1;
      Il2CppCodeGenWriteBarrier(&source[2].klass,pIVar1);
      if (1 < *(uint *)&source[1].monitor) {
        pSVar2 = (experience->fields).SubCategory;
        source[2].monitor = pSVar2;
        Il2CppCodeGenWriteBarrier(&source[2].monitor,pSVar2);
        if (2 < *(uint *)&source[1].monitor) {
          pIVar1 = (Il2CppClass *)(experience->fields).Name;
          source[3].klass = pIVar1;
          Il2CppCodeGenWriteBarrier(&source[3].klass,pIVar1);
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)MethodInfo_System_Uri_EscapeDataString,(MethodInfo_16E67D0 *)0x0);
          values = System_Linq_Enumerable__Select_Vector3__object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                              (System_Func_TSource__TResult__o *)__this,
                              (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
          pSVar2 = System_String__Join_196ecd0
                             ("|",(System_Collections_Generic_IEnumerable_string__o *)values
                              ,(MethodInfo *)0x0);
          return pSVar2;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsFavorite
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsFavorite (Map_Experience_o* experience, const MethodInfo* method);
// 0x1823eb840

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsFavorite
               (Map_Experience_o *experience,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_T__o *source;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0_o *object;
  System_Func_StringSetting__bool__o *__this;
  
  if (Il2CppMethodInitialized_184347ee5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass127_0_IsFavorite_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass127_0);
    Il2CppMethodInitialized_184347ee5 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass127_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass127_0_o *)0x0) {
    (object->fields).experience = experience;
    Il2CppCodeGenWriteBarrier(&(object->fields).experience,experience);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).FavoriteExperiences, pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)
       ) {
      source = (pSVar2->fields)._value;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass127_0_IsFavorite_b__0
                 ,(MethodInfo_B61EB0 *)0x0);
      bVar3 = System_Linq_Enumerable__Any_object__6b6920
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this,
                         (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsFavoritePreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsFavoritePreset (System_String_o* name, const MethodInfo* method);
// 0x1823eb730

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsFavoritePreset(System_String_o *name,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_T__o *source;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0_o *object;
  System_Func_StringSetting__bool__o *__this;
  
  if (Il2CppMethodInitialized_184347ee6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass128_0_IsFavoritePreset_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass128_0);
    Il2CppMethodInitialized_184347ee6 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass128_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass128_0_o *)0x0) {
    (object->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object->fields).name,name);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).FavoriteSandboxPresets,
       pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)) {
      source = (pSVar2->fields)._value;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass128_0_IsFavoritePreset_b__0
                 ,(MethodInfo_B61EB0 *)0x0);
      bVar3 = System_Linq_Enumerable__Any_object__6b6920
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this,
                         (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FavoriteExperiences
// il2cpp: Map_Experience_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperiences (const MethodInfo* method);
// 0x1823eab60

Map_Experience_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperiences(MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  System_Func_Experience__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Map_Experience_array *pMVar1;
  
  if (Il2CppMethodInitialized_184347ee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavorite);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    Il2CppMethodInitialized_184347ee7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavorite,
             (MethodInfo_B61EB0 *)0x0);
  source_00 = System_Linq_Enumerable__Where_float_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this,
                         (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Experience);
  pMVar1 = (Map_Experience_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source_00,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_Experience);
  return pMVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FavoritePresetNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoritePresetNames (const MethodInfo* method);
// 0x1823eac30

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoritePresetNames(MethodInfo *method)

{
  Settings_SetSettingsContainer_InGameSet__o *__this;
  Il2CppObject *object;
  System_String_array *pSVar1;
  System_Func_string__string__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Object_array *source_00;
  System_Func_string__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source_01;
  
  if (Il2CppMethodInitialized_184347ee8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavoritePreset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    Il2CppMethodInitialized_184347ee8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347ee3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_InGameSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_PresetNames_b__125_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184347ee3 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->InGameSettings == (Settings_InGameSettings_o *)0x0) {
    source_00 = (System_Object_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  else {
    __this = (TypeInfo_Settings_SettingsManager->static_fields->InGameSettings->fields).InGameSets;
    if (__this == (Settings_SetSettingsContainer_InGameSet__o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar1 = Settings_SetSettingsContainer_object___GetSetNames
                       ((Settings_SetSettingsContainer_T__o *)__this,
                        (MethodInfo_C8EC20 *)MethodInfo_Settings_SetSettingsContainer_InGameSet_GetSetNames);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__125_0;
    if (__this_00 == (System_Func_string__string__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_PresetNames_b__125_0,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__125_0 = __this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__125_0,
                 __this_00);
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
    source = System_Linq_Enumerable__OrderBy_object__object__6c13e0
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__TKey__o *)__this_00,
                        (System_Collections_Generic_IComparer_TKey__o *)
                        TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                        (MethodInfo_6C13E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450);
    source_00 = System_Linq_Enumerable__ToArray_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavoritePreset,
             (MethodInfo_B61EB0 *)0x0);
  source_01 = System_Linq_Enumerable__Where_float_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                         (System_Func_TSource__bool__o *)__this_01,
                         (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source_01,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleFavorite
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite (Map_Experience_o* experience, const MethodInfo* method);
// 0x1823f2640

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite
               (Map_Experience_o *experience,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *favorites;
  Il2CppClass *pIVar2;
  Il2CppObject *source;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347ee9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347ee9 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar1 != (Settings_UISettings_o *)0x0) {
    favorites = (pSVar1->fields).FavoriteExperiences;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347ee4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Uri_EscapeDataString);
      il2cpp_codegen_initialize_runtime_metadata(&"|");
      Il2CppMethodInitialized_184347ee4 = '\x01';
    }
    source = SZArrayNew(TypeInfo_string_array,3);
    if ((experience != (Map_Experience_o *)0x0) && (source != (Il2CppObject *)0x0)) {
      if (*(int *)&source[1].monitor != 0) {
        pIVar2 = (Il2CppClass *)(experience->fields).Category;
        source[2].klass = pIVar2;
        Il2CppCodeGenWriteBarrier(&source[2].klass,pIVar2);
        if (1 < *(uint *)&source[1].monitor) {
          pSVar3 = (experience->fields).SubCategory;
          source[2].monitor = pSVar3;
          Il2CppCodeGenWriteBarrier(&source[2].monitor,pSVar3);
          if (2 < *(uint *)&source[1].monitor) {
            pIVar2 = (Il2CppClass *)(experience->fields).Name;
            source[3].klass = pIVar2;
            Il2CppCodeGenWriteBarrier(&source[3].klass,pIVar2);
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                       (intptr_t)MethodInfo_System_Uri_EscapeDataString,(MethodInfo_16E67D0 *)0x0);
            values = System_Linq_Enumerable__Select_Vector3__object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                (System_Func_TSource__TResult__o *)__this,
                                (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
            pSVar3 = System_String__Join_196ecd0
                               ("|",
                                (System_Collections_Generic_IEnumerable_string__o *)values,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite_23f2460
                      (favorites,pSVar3,5,(MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleFavoritePreset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavoritePreset (System_String_o* name, const MethodInfo* method);
// 0x1823f23d0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavoritePreset
               (System_String_o *name,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *favorites;
  
  if (Il2CppMethodInitialized_184347eea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347eea = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar1 != (Settings_UISettings_o *)0x0) {
    favorites = (pSVar1->fields).FavoriteSandboxPresets;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite_23f2460(favorites,name,4,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleFavorite
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite (Settings_ListSetting_StringSetting__o* favorites, System_String_o* id, int32_t comparison, const MethodInfo* method);
// 0x1823f2460

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite_23f2460
               (Settings_ListSetting_StringSetting__o *favorites,System_String_o *id,int32_t comparison,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_String_o *defaultValue;
  System_Object_array *pSVar4;
  Settings_UISettings_o *pSVar5;
  MethodInfo *pMVar6;
  int32_t iVar7;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0_o *object;
  System_Predicate_T__o *match;
  Settings_StringSetting_o *__this;
  
  if (Il2CppMethodInitialized_184347eeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass133_0_ToggleFavorite_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass133_0);
    Il2CppMethodInitialized_184347eeb = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass133_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass133_0_o *)0x0) {
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    (object->fields).comparison = comparison;
    if (favorites != (Settings_ListSetting_StringSetting__o *)0x0) {
      pSVar3 = (System_Collections_Generic_List_object__o *)(favorites->fields)._value;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_StringSetting);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass133_0_ToggleFavorite_b__0
                 ,(MethodInfo_B61EB0 *)0x0);
      if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
        iVar7 = System_Collections_Generic_List_object___RemoveAll
                          (pSVar3,match,
                           (MethodInfo_946210 *)
                           MethodInfo_System_Collections_Generic_List_StringSetting_RemoveAll);
        if (iVar7 == 0) {
          pSVar3 = (System_Collections_Generic_List_object__o *)(favorites->fields)._value;
          defaultValue = (object->fields).id;
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
          Settings_StringSetting___ctor_1f27ee0(__this,defaultValue,0x7fffffff,(MethodInfo *)0x0);
          pMVar6 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_1823f2627;
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar3->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto label_1823f2627;
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            if ((uint)pSVar4->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,__this);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar3,(Il2CppObject *)__this,
                       (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
          }
        }
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
        if (pSVar5 != (Settings_UISettings_o *)0x0) {
          (*(pSVar5->klass->vtable)._18_Save.methodPtr)(pSVar5,(pSVar5->klass->vtable)._18_Save.method);
          return;
        }
      }
    }
  }
label_1823f2627:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$OpenFavorites
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenFavorites (const MethodInfo* method);
// 0x1823ecd80

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenFavorites(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347eec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347eec = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateRoot((MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField = true
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$LoadPreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__LoadPreset (System_String_o* name, const MethodInfo* method);
// 0x1823ebda0
// eh: try 0x1823ebee3..0x1823ec021 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ebf8d: mov rdx, qword ptr [rip + 0x1c8a544]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x1823ebf94: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823ebf99: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1823ebf9e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1823ebfa3: test rcx, rcx
// asm:   0x1823ebfa6: jne 0x1823ec021
// asm:   0x1823ebfa8: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1823ebfb0: test rdi, rdi
// asm:   0x1823ebfb3: je 0x1823ebff8
// asm:   0x1823ebfb5: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x1823ec021: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__LoadPreset(System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  Settings_SetSettingsContainer_InGameSet__o *pSVar2;
  Settings_ListSetting_T__o *__this;
  Settings_StringSetting_o *pSVar3;
  Il2CppObject *settings;
  bool bVar4;
  System_Collections_Generic_List_BaseSetting__o *__this_00;
  undefined1 local_40 [16];
  Settings_InGameSet_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184347eed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_InGameSet_GetItems);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347eed = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  bVar4 = System_String__IsNullOrWhiteSpace(name,(MethodInfo *)0x0);
  if ((bVar4) ||
     (TypeInfo_Settings_SettingsManager->static_fields->InGameSettings == (Settings_InGameSettings_o *)0x0)) {
    return false;
  }
  pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->InGameSettings->fields).InGameSets;
  if ((pSVar2 == (Settings_SetSettingsContainer_InGameSet__o *)0x0) ||
     ((__this = (pSVar2->fields).Sets, __this == (Settings_ListSetting_T__o *)0x0 ||
      (__this_00 = Settings_ListSetting_object___GetItems
                             (__this,(MethodInfo_182B160 *)MethodInfo_Settings_ListSetting_InGameSet_GetItems)
      , __this_00 == (System_Collections_Generic_List_BaseSetting__o *)0x0)))) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
             (System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
  local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
  local_28.fields._index = local_40._8_4_;
  local_28.fields._version = local_40._12_4_;
  local_28.fields._current = (Il2CppObject *)local_30;
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_8_ = &local_28;
  do {
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_28,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    settings = local_28.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
      return false;
    }
    if ((Settings_InGameSet_o *)local_28.fields._current == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_InGameSet->_2).typeHierarchyDepth;
    if (((((Settings_InGameSet_c *)(local_28.fields._current)->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((Settings_InGameSet_c *)(local_28.fields._current)->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1]
        != (Il2CppClass *)TypeInfo_Settings_InGameSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(local_28.fields._current);
    }
    pSVar3 = ((Settings_InGameSet_Fields *)((longlong)local_28.fields._current + 0x10))->Name;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar4 = System_String__Equals_196c550((pSVar3->fields)._value,name,4,(MethodInfo *)0x0);
  } while (!bVar4);
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
             MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ReplaceSandboxWorking
            ((Settings_InGameSet_o *)settings,(MethodInfo *)0x0);
  il2cpp_runtime_helper_1823d5b40(name,0);
  return true;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SavePreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SavePreset (System_String_o* name, System_String_o** error, const MethodInfo* method);
// 0x1823ee8f0
// eh: try 0x1823eeb81..0x1823eee28 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823eec2e: mov rdx, qword ptr [rip + 0x1c878a3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x1823eec35: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823eec3a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1823eec3f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1823eec44: test rcx, rcx
// asm:   0x1823eec47: jne 0x1823eee28
// asm:   0x1823eec4d: mov r15, qword ptr [rsp + 0xa8]
// asm:   0x1823eec55: mov r14, qword ptr [rsp + 0x90]
// asm:   0x1823eec5d: test r15, r15
// asm:   0x1823eec60: je 0x1823eec95
// asm:   0x1823eec62: mov rsi, qword ptr [rsp + 0x98]
// asm:   0x1823eec7d: mov rbx, r15
// asm:   0x1823eec80: jmp 0x1823eecae
// asm:   0x1823eec82: mov rdx, qword ptr [rip + 0x1ce705f]  ; "Built-in presets cannot be overwritten."
// asm:   0x1823eec89: mov rcx, qword ptr [rip + 0x1d0e9c0]  ; "GameCreate.Presets.Save.BuiltInProtected"
// asm:   0x1823eec90: jmp 0x1823eedf0
// asm:   0x1823eec95: mov rcx, qword ptr [rip + 0x1cbacbc]  ; TypeInfo_Settings_InGameSet
// asm:   0x1823eec9c: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1823eeca1: mov rbx, rax
// asm:   0x1823eeca4: xor edx, edx
// asm:   0x1823eeca6: mov rcx, rax
// asm:   0x1823eeca9: call 0x181f1b700  ; Settings_InGameSet___ctor()
// asm:   0x1823eedc2: mov rdx, qword ptr [rip + 0x1d0be57]  ; "Game settings are unavailable."
// asm:   0x1823eedc9: mov rcx, qword ptr [rip + 0x1d0ec00]  ; "GameCreate.Presets.Save.SettingsUnavailable"
// asm:   0x1823eedd0: jmp 0x1823eedf0
// asm:   0x1823eedd2: mov rdx, qword ptr [rip + 0x1cc9097]  ; "Open Sandbox before saving a preset."
// asm:   0x1823eedd9: mov rcx, qword ptr [rip + 0x1d0eb10]  ; "GameCreate.Presets.Save.SandboxRequired"
// asm:   0x1823eede0: jmp 0x1823eedf0
// asm:   0x1823eede2: mov rdx, qword ptr [rip + 0x1cd9d67]  ; "Enter a name for the preset."
// asm:   0x1823eede9: mov rcx, qword ptr [rip + 0x1d0ea20]  ; "GameCreate.Presets.Save.NameRequired"
// asm:   0x1823eee28: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SavePreset
               (System_String_o *name,System_String_o **error,MethodInfo *method)

{
  byte bVar1;
  Settings_SetSettingsContainer_InGameSet__o *pSVar2;
  Settings_ListSetting_T__o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Settings_InGameSettings_o *pSVar6;
  bool bVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_BaseSetting__o *__this;
  Settings_InGameSet_o *__this_00;
  Settings_BaseSetting_o *pSVar9;
  System_String_o *key;
  System_String_o *fallback;
  Settings_InGameSet_o *pSVar10;
  undefined1 local_60 [16];
  Settings_InGameSet_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Settings_InGameSet_o *local_38;
  
  if (Il2CppMethodInitialized_184347eee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_InGameSet_AddItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_InGameSet_GetItems);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Built-in presets cannot be overwritten.");
    il2cpp_codegen_initialize_runtime_metadata(&"Game settings are unavailable.");
    il2cpp_codegen_initialize_runtime_metadata(&"Enter a name for the preset.");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.NameRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.SettingsUnavailable");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.SandboxRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"Open Sandbox before saving a preset.");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.BuiltInProtected");
    Il2CppMethodInitialized_184347eee = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Settings_InGameSet_o *)0x0;
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error,(void *)0x0);
  if (name == (System_String_o *)0x0) {
    pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar8 = System_String__Trim(name,(MethodInfo *)0x0);
  }
  bVar7 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
  key = "GameCreate.Presets.Save.NameRequired";
  fallback = "Enter a name for the preset.";
  if (!bVar7) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    key = "GameCreate.Presets.Save.SandboxRequired";
    fallback = "Open Sandbox before saving a preset.";
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField !=
        (Settings_InGameSet_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
      key = "GameCreate.Presets.Save.SandboxRequired";
      fallback = "Open Sandbox before saving a preset.";
      if ((bVar7) &&
         (key = "GameCreate.Presets.Save.SettingsUnavailable", fallback = "Game settings are unavailable.",
         TypeInfo_Settings_SettingsManager->static_fields->InGameSettings != (Settings_InGameSettings_o *)0x0)
         ) {
        pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->InGameSettings->fields).InGameSets;
        if ((pSVar2 != (Settings_SetSettingsContainer_InGameSet__o *)0x0) &&
           ((pSVar3 = (pSVar2->fields).Sets, pSVar3 != (Settings_ListSetting_T__o *)0x0 &&
            (__this = Settings_ListSetting_object___GetItems
                                (pSVar3,(MethodInfo_182B160 *)
                                        MethodInfo_Settings_ListSetting_InGameSet_GetItems),
            __this != (System_Collections_Generic_List_BaseSetting__o *)0x0)))) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                     (System_Collections_Generic_List_T__o *)__this,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator
                    );
          local_48 = (undefined1  [8])local_60._0_8_;
          pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
          local_38 = local_50;
          local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
          do {
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
            __this_00 = local_38;
            if (!bVar7) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
              Settings_InGameSet___ctor(__this_00,(MethodInfo *)0x0);
              pSVar10 = (Settings_InGameSet_o *)0x0;
              goto label_1823eecae;
            }
            if (local_38 == (Settings_InGameSet_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar1 = (TypeInfo_Settings_InGameSet->_2).typeHierarchyDepth;
            if (((local_38->klass->_2).typeHierarchyDepth < bVar1) ||
               ((local_38->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_InGameSet)) {
              il2cpp_codegen_raise_invalid_cast_exception(local_38);
            }
            pSVar4 = (local_38->fields).Name;
            if (pSVar4 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar7 = System_String__Equals_196c550((pSVar4->fields)._value,pSVar8,4,(MethodInfo *)0x0);
          } while (!bVar7);
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                     MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
          pSVar5 = (__this_00->fields).Preset;
          if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
            key = "GameCreate.Presets.Save.BuiltInProtected";
            fallback = "Built-in presets cannot be overwritten.";
            pSVar10 = __this_00;
            if ((pSVar5->fields)._value != false) goto label_1823eedf0;
label_1823eecae:
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            pSVar9 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_181dd5530(0);
            if (__this_00 != (Settings_InGameSet_o *)0x0) {
              (*(__this_00->klass->vtable)._10_Copy.methodPtr)
                        (__this_00,pSVar9,(__this_00->klass->vtable)._10_Copy.method);
              pSVar4 = (__this_00->fields).Name;
              if (pSVar4 != (Settings_StringSetting_o *)0x0) {
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar8,
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                pSVar5 = (__this_00->fields).Preset;
                if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar5,false,
                             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  if (pSVar10 == (Settings_InGameSet_o *)0x0) {
                    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
                    if (((pSVar6 == (Settings_InGameSettings_o *)0x0) ||
                        (pSVar2 = (pSVar6->fields).InGameSets,
                        pSVar2 == (Settings_SetSettingsContainer_InGameSet__o *)0x0)) ||
                       (pSVar3 = (pSVar2->fields).Sets, pSVar3 == (Settings_ListSetting_T__o *)0x0))
                    goto label_1823eee2e;
                    Settings_ListSetting_object___AddItem
                              (pSVar3,(Settings_BaseSetting_o *)__this_00,
                               (MethodInfo_182A740 *)MethodInfo_Settings_ListSetting_InGameSet_AddItem);
                  }
                  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
                  if (pSVar6 != (Settings_InGameSettings_o *)0x0) {
                    (*(pSVar6->klass->vtable)._18_Save.methodPtr)
                              (pSVar6,(pSVar6->klass->vtable)._18_Save.method);
                    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                    }
                    il2cpp_runtime_helper_1823d5b40(pSVar8,0);
                    return true;
                  }
                }
              }
            }
          }
        }
label_1823eee2e:
        ThrowNullReferenceException();
      }
    }
  }
label_1823eedf0:
  pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     (key,fallback,(MethodInfo *)0x0);
  *error = pSVar8;
  Il2CppCodeGenWriteBarrier(error,pSVar8);
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Back
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__Back (const MethodInfo* method);
// 0x1823e5aa0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__Back(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_BoolSetting_o *__this;
  bool bVar3;
  char cVar4;
  bool bVar5;
  System_String_o *pSVar6;
  Map_Experience_o *pMVar7;
  System_String_array *pSVar8;
  
  if (Il2CppMethodInitialized_184347eef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    Il2CppMethodInitialized_184347eef = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField
      != false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f1c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f1c = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         false;
    if (Il2CppMethodInitialized_184347c45 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347c45 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
           _LaunchContext_k__BackingField != 1;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField ==
      (Map_Experience_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f11 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f11 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField !=
        (Settings_ExperienceRuleResult_o *)0x0) goto label_1823e5cd4;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
    if (bVar3) goto label_1823e5cd4;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    cVar4 = il2cpp_runtime_helper_1823d5870(0);
    if (cVar4 != '\0') {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      il2cpp_runtime_helper_1823d5bc0(0,0);
      return true;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_1823d58c0(0);
    bVar3 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_181dd54e0(0);
      bVar3 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
      goto label_1823e6004;
    }
  }
  else {
label_1823e5cd4:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
    if (bVar3) {
      bVar3 = false;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_181dd54e0(0);
      if (Il2CppMethodInitialized_184347f0f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f0f = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pMVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SingleExperience
                         (pSVar6,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                 _Subcategory_k__BackingField,(MethodInfo *)0x0);
      bVar3 = pMVar7 != (Map_Experience_o *)0x0;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    il2cpp_runtime_helper_1823d5980(0,0);
    il2cpp_runtime_helper_1823d5a60(0,0);
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).ExperienceName, pSVar2 == (Settings_StringSetting_o *)0x0))
    goto label_1823e6100;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).ExperienceVariant, pSVar2 == (Settings_StringSetting_o *)0x0))
    goto label_1823e6100;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
       (__this = (pSVar1->fields).Sandbox, __this == (Settings_BoolSetting_o *)0x0)) goto label_1823e6100;
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this,false,
               (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    if (Il2CppMethodInitialized_184344b3b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3b = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar5 = System_String__Equals_196c550
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Category_k__BackingField,"Sandbox",5,(MethodInfo *)0x0);
    if (bVar5) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      il2cpp_runtime_helper_1823d5910(0,0);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f0d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f0d = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField
        != false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      il2cpp_runtime_helper_1823d5910(0,0);
      il2cpp_runtime_helper_1823d5c20(0,0);
      return true;
    }
    if (!bVar3) {
      return true;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  il2cpp_runtime_helper_1823d5c20(0,0);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories((MethodInfo *)0x0);
  if (pSVar8 != (System_String_array *)0x0) {
    if ((int)pSVar8->max_length != 1) {
      return true;
    }
label_1823e6004:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    il2cpp_runtime_helper_1823d5910(0,0);
    return true;
  }
label_1823e6100:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NavigateRoot
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateRoot (const MethodInfo* method);
// 0x1823ec840

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateRoot(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347ef0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ef0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
       false;
  do {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Back((MethodInfo *)0x0);
  } while (bVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NavigateCategory
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateCategory (const MethodInfo* method);
// 0x1823ec6e0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateCategory(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347ef1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ef1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
       false;
  if (Il2CppMethodInitialized_184344b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = System_String__IsNullOrEmpty
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Category_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184344b3b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3b = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectCategory
                (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Category_k__BackingField,(MethodInfo *)0x0);
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NavigateSubcategory
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateSubcategory (const MethodInfo* method);
// 0x1823ec8f0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateSubcategory(MethodInfo *method)

{
  System_String_o *category;
  Settings_InGameSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  Map_Experience_o *pMVar4;
  System_String_array *pSVar5;
  
  if (Il2CppMethodInitialized_184347ef2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184347ef2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f1c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
       false;
  if (Il2CppMethodInitialized_184347f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar3 = System_String__IsNullOrEmpty
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Subcategory_k__BackingField,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184344b3b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3b = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      category = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Category_k__BackingField;
      if (Il2CppMethodInitialized_184347f0f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f0f = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pMVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SingleExperience
                         (category,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                   _Subcategory_k__BackingField,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184347f18 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f18 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField =
           (Map_Experience_o *)0x0;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                  _Experience_k__BackingField,(void *)0x0);
      if (Il2CppMethodInitialized_184347f19 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184347f19 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField =
           (Settings_ExperienceRuleResult_o *)0x0;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                  _RuleResult_k__BackingField,(void *)0x0);
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).ExperienceName, pSVar2 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar2,
                   (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        if (Il2CppMethodInitialized_184344b3a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184344b3a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
        if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
           (pSVar2 = (pSVar1->fields).ExperienceVariant, pSVar2 != (Settings_StringSetting_o *)0x0)) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar2,
                     (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          if (pMVar4 != (Map_Experience_o *)0x0) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            il2cpp_runtime_helper_1823d5c20(0,0);
            pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories((MethodInfo *)0x0);
            if (pSVar5 == (System_String_array *)0x0) goto label_1823eccb9;
            if ((int)pSVar5->max_length == 1) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              il2cpp_runtime_helper_1823d5910(0,0);
            }
          }
          return true;
        }
      }
label_1823eccb9:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$OpenRoomSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenRoomSettings (const MethodInfo* method);
// 0x1823ece10

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenRoomSettings(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ef3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ef3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer != false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f1c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f1c = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         true;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$OpenExperiences
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenExperiences (const MethodInfo* method);
// 0x1823eccc0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenExperiences(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347ef4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347ef4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f1c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f1c = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         false;
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateRoot((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RefreshSandbox
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox (const MethodInfo* method);
// 0x1823edaf0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox(MethodInfo *method)

{
  Settings_SandboxGameCreateConfiguration_o *pSVar1;
  Il2CppObject *object;
  System_String_o *value;
  System_String_array *pSVar2;
  System_Func_string__string__o *__this;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  
  if (Il2CppMethodInitialized_184347ef5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_RefreshSandbox_b__143_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184347ef5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (pSVar1 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    Settings_SandboxGameCreateConfiguration__Refresh
              (pSVar1,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                      _Working_k__BackingField,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (pSVar1 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
      pSVar2 = Settings_SandboxGameCreateConfiguration__GetAddonNames(pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__143_0;
      if (__this == (System_Func_string__string__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
        }
        object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_RefreshSandbox_b__143_0,
                   (MethodInfo_16E67D0 *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__143_0 = __this;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__143_0,__this
                  );
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
      source = System_Linq_Enumerable__OrderBy_object__object__6c13e0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                          (System_Func_TSource__TKey__o *)__this,
                          (System_Collections_Generic_IComparer_TKey__o *)
                          TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                          (MethodInfo_6C13E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450
                         );
      pSVar2 = (System_String_array *)
               System_Linq_Enumerable__ToArray_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames = pSVar2;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames,
                 pSVar2);
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
      if (pSVar1 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
        value = (pSVar1->fields)._LastError_k__BackingField;
        if (Il2CppMethodInitialized_184347f1a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184347f1a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LoadError_k__BackingField =
             value;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                    _LoadError_k__BackingField,value);
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields((MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RebuildSandboxFields
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields (const MethodInfo* method);
// 0x1823ed100
// eh: try 0x1823ed850..0x1823ed93b -> pad 0x183315a20 catch Il2CppExceptionWrapper
// eh: try 0x1823ed97e..0x1823ed98d -> pad 0x180014200 cleanup
// eh: try 0x1823eda44..0x1823eda50 -> pad 0x183315a20 catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ed954: mov r8, qword ptr [rsp + 0x40]
// asm:   0x1823ed959: cmp qword ptr [r8], 0
// asm:   0x1823ed95d: je 0x1823ed970
// asm:   0x1823ed95f: xor ecx, ecx
// asm:   0x1823ed961: mov r8, qword ptr [r8]
// asm:   0x1823ed964: mov rdx, qword ptr [rip + 0x1cab995]  ; TypeInfo_System_IDisposable
// asm:   0x1823ed96b: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1823ed970: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1823ed975: test rcx, rcx
// asm:   0x1823ed978: jne 0x1823eda50
// asm:   0x1823ed97e: jmp 0x1823ed996
// asm:   0x1823eda50: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields(MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  int length;
  System_Collections_Generic_List_AottgSandboxField__o *pSVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameGeneralSettings_o *pSVar5;
  Settings_StringSetting_o *setting;
  Settings_SandboxGameCreateConfiguration_o *__this;
  Settings_IntSetting_o *setting_00;
  Settings_SetSettingsContainer_WeatherSet__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  Il2CppType *handle;
  bool bVar8;
  ushort uVar9;
  System_String_array *pSVar10;
  System_Type_o *enumType;
  longlong lVar11;
  System_Func_KeyValuePair_string__Dictionary_string__BaseSetting____string__o *__this_01;
  System_Collections_Generic_IComparer_TKey__o *comparer;
  Il2CppObject *pIVar12;
  void *pvVar13;
  VirtualInvokeData *pVVar14;
  undefined8 *puVar15;
  System_String_o *pSVar16;
  Settings_BaseSettingsContainer_o *container;
  System_Collections_Generic_HashSet_string__o *excluded;
  int32_t local_res10 [2];
  Il2CppObject *local_res18;
  undefined1 local_30 [24];
  
  if (Il2CppMethodInitialized_184347ef6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_string_Dictionary_string_BaseSetting_string
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_KeyValuePair_string_Dictionary_string_BaseSetting_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_GameDifficulty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_Dictionary_string_BaseSetting
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_Dictionary_string_BaseSetting
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_BaseSetting_get_Key
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_BaseSetting_get_Value
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_RebuildSandboxFields_b__144_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"addon.");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"misc");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"mode");
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Mode");
    Il2CppMethodInitialized_184347ef6 = '\x01';
  }
  local_res10[0] = 0;
  local_res18 = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  if (pSVar3 != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    bVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
    if (!bVar8) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347f0b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347f0b = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _SandboxSection_k__BackingField;
    bVar8 = System_String__op_Equality(pSVar16,"General",(MethodInfo *)0x0);
    if (bVar8) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if ((pSVar4 != (Settings_InGameSet_o *)0x0) &&
         (pSVar5 = (pSVar4->fields).General, pSVar5 != (Settings_InGameGeneralSettings_o *)0x0)) {
        setting = (pSVar5->fields).MapName;
        pSVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SandboxMapNames((MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
                  ("general.MapName","Map",(Settings_BaseSetting_o *)setting,pSVar10,
                   (System_String_o *)0x0,(MethodInfo *)0x0);
        __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
        if (Il2CppMethodInitialized_184344b3a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184344b3a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (__this != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
          pSVar10 = Settings_SandboxGameCreateConfiguration__GetGameModes
                              (__this,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                      _Working_k__BackingField,local_res10,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_184344b3a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_184344b3a = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
          if ((pSVar4 != (Settings_InGameSet_o *)0x0) &&
             (pSVar5 = (pSVar4->fields).General, pSVar5 != (Settings_InGameGeneralSettings_o *)0x0)) {
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
                      ("general.GameMode","Mode",
                       (Settings_BaseSetting_o *)(pSVar5->fields).GameMode,pSVar10,(System_String_o *)0x0,
                       (MethodInfo *)0x0);
            if (Il2CppMethodInitialized_184344b3a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184344b3a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            handle = TypeRef_Settings_GameDifficulty;
            pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Working_k__BackingField;
            if ((pSVar4 != (Settings_InGameSet_o *)0x0) &&
               (pSVar5 = (pSVar4->fields).General, pSVar5 != (Settings_InGameGeneralSettings_o *)0x0)) {
              setting_00 = (pSVar5->fields).Difficulty;
              if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_184354ea0);
              }
              enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
              if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_184354e58);
              }
              pSVar10 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
                        ("general.Difficulty","Difficulty",(Settings_BaseSetting_o *)setting_00,
                         pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
              if (TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings ==
                  (Settings_WeatherSettings_o *)0x0) {
                pSVar10 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
              }
              else {
                __this_00 = (TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings->fields).
                            WeatherSets;
                if (__this_00 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0) goto label_1823eda3e;
                pSVar10 = Settings_SetSettingsContainer_object___GetSetNames
                                    ((Settings_SetSettingsContainer_T__o *)__this_00,
                                     (MethodInfo_C8EC20 *)
                                     MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              if (Il2CppMethodInitialized_184344b3a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                Il2CppMethodInitialized_184344b3a = '\x01';
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Working_k__BackingField;
              if (pSVar4 != (Settings_InGameSet_o *)0x0) {
                Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
                          ("general.Weather","Weather",
                           (Settings_BaseSetting_o *)(pSVar4->fields).WeatherIndex,pSVar10,
                           (System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      bVar8 = System_String__op_Equality(pSVar16,"Mode",(MethodInfo *)0x0);
      if (bVar8) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        lVar11 = il2cpp_runtime_helper_181dd5530(0);
        if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x50) != 0)) {
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddDynamicFields
                    ("mode",
                     *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                      (*(longlong *)(lVar11 + 0x50) + 0x30),(MethodInfo *)0x0);
          lVar11 = il2cpp_runtime_helper_181dd5530(0);
          if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x58) != 0)) {
            source = *(System_Collections_Generic_IEnumerable_TSource__o **)
                      (*(longlong *)(lVar11 + 0x58) + 0x30);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
            }
            __this_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__144_0;
            if (__this_01 ==
                (System_Func_KeyValuePair_string__Dictionary_string__BaseSetting____string__o *)0x0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
              }
              pIVar12 = (Il2CppObject *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Func_KeyValuePair_string_Dictionary_string_BaseSetting_string
                                    );
              System_Func_KeyValuePair_object__object___object____ctor
                        ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_01,pIVar12,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_RebuildSandboxFields_b__144_0
                         ,(MethodInfo_13859D0 *)0x0);
              TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__144_0 = __this_01;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__144_0,
                         __this_01);
            }
            if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
            }
            comparer = (System_Collections_Generic_IComparer_TKey__o *)il2cpp_runtime_helper_181882cf0(0);
            pIVar12 = (Il2CppObject *)
                      System_Linq_Enumerable__OrderBy_object__object__6c13e0
                                (source,(System_Func_TSource__TKey__o *)__this_01,comparer,
                                 (MethodInfo_6C13E0 *)
                                 MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_string_Dictionary_string_BaseSetting_string
                                );
            if (pIVar12 != (Il2CppObject *)0x0) {
              local_res18 = InterfaceInvoker0_Invoke
                                      (0,(Il2CppClass *)
                                         TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_Dictionary_string_BaseSetting
                                       ,pIVar12);
              do {
                if (local_res18 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pvVar13 = InterfaceInvoker0_Invoke
                                    (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
                pIVar12 = local_res18;
                if ((char)pvVar13 == '\0') {
                  if (local_res18 == (Il2CppObject *)0x0) {
                    return;
                  }
                  InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res18);
                  return;
                }
                if (local_res18 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar6 = local_res18->klass;
                uVar2 = (pIVar6->_2).interface_offsets_count;
                if (uVar2 != 0) {
                  pIVar7 = (pIVar6->_1).interfaceOffsets;
                  uVar9 = 0;
                  do {
                    if (pIVar7[uVar9].interfaceType ==
                        (Il2CppClass *)
                        TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_Dictionary_string_BaseSetting
                       ) {
                      pVVar14 = pIVar6->vtable + pIVar7[uVar9].offset;
                      goto label_1823ed8d2;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uVar2);
                }
                pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (local_res18,
                                     (Il2CppClass *)
                                     TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_Dictionary_string_BaseSetting
                                     ,0);
label_1823ed8d2:
                puVar15 = (undefined8 *)(*pVVar14->methodPtr)(local_30,pIVar12);
                settings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)puVar15[1];
                pSVar16 = System_String__Concat_1969e50
                                    ("addon.",(System_String_o *)*puVar15,(MethodInfo *)0x0);
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                }
                Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddDynamicFields
                          (pSVar16,settings,(MethodInfo *)0x0);
              } while( true );
            }
          }
        }
      }
      else {
        bVar8 = System_String__op_Equality(pSVar16,"Titans",(MethodInfo *)0x0);
        if (bVar8) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          lVar11 = il2cpp_runtime_helper_181dd5530(0);
          if (lVar11 != 0) {
            excluded = (System_Collections_Generic_HashSet_string__o *)0x0;
            container = *(Settings_BaseSettingsContainer_o **)(lVar11 + 0x60);
            pSVar16 = "titan";
label_1823ed9cc:
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddContainerFields
                      (pSVar16,container,excluded,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          bVar8 = System_String__op_Equality(pSVar16,"Misc",(MethodInfo *)0x0);
          if (!bVar8) {
            return;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          lVar11 = il2cpp_runtime_helper_181dd5530(0);
          if (lVar11 != 0) {
            excluded = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       MultiplayerMiscIds;
            container = *(Settings_BaseSettingsContainer_o **)(lVar11 + 0x68);
            pSVar16 = "misc";
            goto label_1823ed9cc;
          }
        }
      }
    }
  }
label_1823eda3e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AddContainerFields
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddContainerFields (System_String_o* prefix, Settings_BaseSettingsContainer_o* container, System_Collections_Generic_HashSet_string__o* excluded, const MethodInfo* method);
// 0x1823e4a30
// eh: try 0x1823e4bd0..0x1823e4d85 -> pad 0x183315b20 catch Il2CppExceptionWrapper
// eh: try 0x1823e4d85..0x1823e4db7 -> pad 0x180026a30 cleanup
// eh: try 0x1823e4db7..0x1823e504d -> pad 0x183315b20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e4da8: mov rdx, qword ptr [rip + 0x1cc5291]  ; "Off"
// asm:   0x1823e4daf: mov qword ptr [rax + 0x20], rdx
// asm:   0x1823e4db3: lea rcx, [rax + 0x20]
// asm:   0x1823e4db7: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1823e4dbc: cmp dword ptr [rbx + 0x18], 1
// asm:   0x1823e4dc0: jbe 0x1823e4ffb
// asm:   0x1823e4fc7: lea rcx, [rsp + 0x48]
// asm:   0x1823e4fcc: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1823e4fd1: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1823e4fd6: test rcx, rcx
// asm:   0x1823e4fd9: jne 0x1823e504d
// asm:   0x1823e504d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddContainerFields
               (System_String_o *prefix,Settings_BaseSettingsContainer_o *container,
               System_Collections_Generic_HashSet_string__o *excluded,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  Settings_BaseSetting_o *setting;
  System_String_array *options;
  System_String_o *pSVar11;
  ushort uVar12;
  System_String_o **targetAddress;
  Il2CppObject *local_res10;
  Il2CppObject *local_58 [2];
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_184347ef7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Fixed");
    il2cpp_codegen_initialize_runtime_metadata(&"FFA");
    il2cpp_codegen_initialize_runtime_metadata(&"misc");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanHealthMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanHeadMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Scaled");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347ef7 = '\x01';
  }
  local_res10 = (Il2CppObject *)0x0;
  local_58[0] = (Il2CppObject *)0x0;
  if ((container != (Settings_BaseSettingsContainer_o *)0x0) &&
     (pSVar3 = (container->fields).Settings,
     pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
    pIVar7 = (Il2CppObject *)
             System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar3,(MethodInfo *)0x0);
    if (pIVar7 != (Il2CppObject *)0x0) {
      local_res10 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,pIVar7);
      local_48 = 0;
      local_40 = &local_res10;
      local_38 = local_58;
label_1823e4bd0:
      if (local_res10 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res10);
      pIVar7 = local_res10;
      if ((char)pvVar8 == '\0') {
        local_58[0] = il2cpp_vm_Object_IsInst(local_res10,(Il2CppClass *)TypeInfo_System_IDisposable);
        if (local_58[0] != (Il2CppObject *)0x0) {
          InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_58[0]);
        }
        return;
      }
      if (local_res10 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = local_res10->klass;
      uVar2 = (pIVar4->_2).interface_offsets_count;
      if (uVar2 != 0) {
        uVar12 = 0;
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        do {
          if (pIVar5[uVar12].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar4->vtable + (pIVar5[uVar12].offset + 1);
            goto label_1823e4c59;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar2);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_res10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1823e4c59:
      pSVar10 = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,pVVar9->method);
      pSVar11 = (System_String_o *)0x0;
      if (pSVar10 != (System_String_o *)0x0) {
        if ((Il2CppClass *)pSVar10->klass == g_data_184354e50) {
          pSVar11 = pSVar10;
        }
        if (pSVar11 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
        }
      }
      if (excluded != (System_Collections_Generic_HashSet_string__o *)0x0) goto code_r0x0001823e4c85;
      goto label_1823e4c9f;
    }
  }
  ThrowNullReferenceException();
code_r0x0001823e4c85:
  bVar6 = System_Collections_Generic_HashSet_object___Contains
                    ((System_Collections_Generic_HashSet_object__o *)excluded,(Il2CppObject *)pSVar11,
                     (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  if (bVar6) goto label_1823e4bd0;
label_1823e4c9f:
  pSVar3 = (container->fields).Settings;
  if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    ThrowNullReferenceException();
  }
  setting = (Settings_BaseSetting_o *)
            System_Collections_Specialized_OrderedDictionary__get_Item
                      (pSVar3,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  if (setting != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
    if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
       ((setting->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported(setting,(MethodInfo *)0x0);
  if (!bVar6) goto label_1823e4bd0;
  options = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  bVar6 = System_String__op_Equality(prefix,"misc",(MethodInfo *)0x0);
  if (bVar6) {
    bVar6 = System_String__op_Equality(pSVar11,"PVP",(MethodInfo *)0x0);
    if (bVar6) {
      options = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
      pSVar10 = "Off";
      if (options == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)options->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      options->m_Items[0] = "Off";
      Il2CppCodeGenWriteBarrier(options->m_Items,pSVar10);
      pSVar10 = "FFA";
      if ((uint)options->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      options->m_Items[1] = "FFA";
      Il2CppCodeGenWriteBarrier(options->m_Items + 1,pSVar10);
      pSVar10 = "Team";
      if ((uint)options->max_length < 3) {
        ThrowIndexOutOfRangeException();
      }
      options->m_Items[2] = "Team";
      Il2CppCodeGenWriteBarrier(options->m_Items + 2,pSVar10);
      goto label_1823e4e8a;
    }
  }
  bVar6 = System_String__op_Equality(prefix,"titan",(MethodInfo *)0x0);
  if (bVar6) {
    bVar6 = System_String__op_Equality(pSVar11,"TitanHeadMode",(MethodInfo *)0x0);
    if (!bVar6) goto label_1823e4ee9;
    options = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    pSVar10 = "Default";
    if (options == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)options->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    options->m_Items[0] = "Default";
    Il2CppCodeGenWriteBarrier(options->m_Items,pSVar10);
    pSVar10 = "Random";
    if ((uint)options->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    options->m_Items[1] = "Random";
    targetAddress = options->m_Items + 1;
  }
  else {
label_1823e4ee9:
    bVar6 = System_String__op_Equality(prefix,"titan",(MethodInfo *)0x0);
    if (!bVar6) goto label_1823e4e8a;
    bVar6 = System_String__op_Equality(pSVar11,"TitanHealthMode",(MethodInfo *)0x0);
    if (!bVar6) goto label_1823e4e8a;
    options = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
    pSVar10 = "Off";
    if (options == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)options->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    options->m_Items[0] = "Off";
    Il2CppCodeGenWriteBarrier(options->m_Items,pSVar10);
    pSVar10 = "Fixed";
    if ((uint)options->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    options->m_Items[1] = "Fixed";
    Il2CppCodeGenWriteBarrier(options->m_Items + 1,pSVar10);
    pSVar10 = "Scaled";
    if ((uint)options->max_length < 3) {
      ThrowIndexOutOfRangeException();
    }
    options->m_Items[2] = "Scaled";
    targetAddress = options->m_Items + 2;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,pSVar10);
label_1823e4e8a:
  pSVar10 = System_String__Concat_1969b70(prefix,".",pSVar11,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Label(pSVar11,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
            (pSVar10,pSVar11,setting,options,(System_String_o *)0x0,(MethodInfo *)0x0);
  goto label_1823e4bd0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$BuildMultiplayerFields
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgSandboxField__o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields (const MethodInfo* method);
// 0x1823e6cb0

System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  void *pvVar4;
  Settings_IntSetting_o *pSVar5;
  System_String_o *pSVar6;
  Settings_InGameMiscSettings_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  Settings_FloatSetting_o *pSVar9;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  Il2CppObject *pIVar13;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar14;
  System_String_array *pSVar15;
  
  if (Il2CppMethodInitialized_184347ef8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata(&"Max Players");
    il2cpp_codegen_initialize_runtime_metadata(&"Vote Kicking");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice Chat");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AccountRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"general.RoomName");
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.Motd");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowVoteKicking");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMaxDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"Server Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Proximity Max");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMinDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"Account Required");
    il2cpp_codegen_initialize_runtime_metadata(&"MOTD");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MaxPlayers");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"Proximity Min");
    Il2CppMethodInitialized_184347ef8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184347f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f0a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer != false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField !=
        (Settings_InGameSet_o *)0x0) {
      pIVar11 = SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField_array,9);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) {
        pSVar3 = (pSVar2->fields).RoomName;
        pIVar12 = (Il2CppClass *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
        pSVar10 = "general.RoomName";
        pSVar6 = "Server Name";
        if (Il2CppMethodInitialized_184347e94 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
          Il2CppMethodInitialized_184347e94 = '\x01';
        }
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pIVar12,(MethodInfo *)0x0);
        (pIVar12->_1).name = (char *)pSVar10;
        Il2CppCodeGenWriteBarrier(&(pIVar12->_1).name,pSVar10);
        (pIVar12->_1).namespaze = (char *)pSVar6;
        Il2CppCodeGenWriteBarrier(&(pIVar12->_1).namespaze,pSVar6);
        (pIVar12->_1).byval_arg.data = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pIVar12->_1).byval_arg.data,pSVar3);
        pIVar13 = SZArrayNew(TypeInfo_string_array,0);
        *(Il2CppObject **)&(pIVar12->_1).byval_arg.bits = pIVar13;
        Il2CppCodeGenWriteBarrier((void **)&(pIVar12->_1).byval_arg.bits,pIVar13);
        pvVar4 = (void *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        (pIVar12->_1).this_arg.data = pvVar4;
        Il2CppCodeGenWriteBarrier(&(pIVar12->_1).this_arg.data,pvVar4);
        if (pIVar11 != (Il2CppObject *)0x0) {
          if (*(int *)&pIVar11[1].monitor != 0) {
            pIVar11[2].klass = pIVar12;
            Il2CppCodeGenWriteBarrier(&pIVar11[2].klass,pIVar12);
            if (Il2CppMethodInitialized_184344b3a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_184344b3a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Working_k__BackingField;
            if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
               (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0))
            goto label_1823e797a;
            pSVar5 = (pSVar2->fields).MaxPlayers;
            pGVar14 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
            pSVar10 = "general.MaxPlayers";
            pSVar6 = "Max Players";
            if (Il2CppMethodInitialized_184347e94 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
              Il2CppMethodInitialized_184347e94 = '\x01';
            }
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar14,(MethodInfo *)0x0
                      );
            (pGVar14->fields)._Id_k__BackingField = pSVar10;
            Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Id_k__BackingField,pSVar10);
            (pGVar14->fields)._Label_k__BackingField = pSVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Label_k__BackingField,pSVar6);
            (pGVar14->fields)._Setting_k__BackingField = (Settings_BaseSetting_o *)pSVar5;
            Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Setting_k__BackingField,pSVar5);
            pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
            (pGVar14->fields)._Options_k__BackingField = pSVar15;
            Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Options_k__BackingField,pSVar15);
            pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            (pGVar14->fields)._Tooltip_k__BackingField = pSVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Tooltip_k__BackingField,pSVar6);
            if (1 < *(uint *)&pIVar11[1].monitor) {
              pIVar11[2].monitor = pGVar14;
              Il2CppCodeGenWriteBarrier(&pIVar11[2].monitor,pGVar14);
              if (Il2CppMethodInitialized_184344b3a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                Il2CppMethodInitialized_184344b3a = '\x01';
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Working_k__BackingField;
              if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                 (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0))
              goto label_1823e797a;
              pSVar3 = (pSVar2->fields).Password;
              pIVar12 = (Il2CppClass *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
              pSVar10 = "general.Password";
              pSVar6 = "Password";
              if (Il2CppMethodInitialized_184347e94 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
                Il2CppMethodInitialized_184347e94 = '\x01';
              }
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pIVar12,
                         (MethodInfo *)0x0);
              (pIVar12->_1).name = (char *)pSVar10;
              Il2CppCodeGenWriteBarrier(&(pIVar12->_1).name,pSVar10);
              (pIVar12->_1).namespaze = (char *)pSVar6;
              Il2CppCodeGenWriteBarrier(&(pIVar12->_1).namespaze,pSVar6);
              (pIVar12->_1).byval_arg.data = pSVar3;
              Il2CppCodeGenWriteBarrier(&(pIVar12->_1).byval_arg.data,pSVar3);
              pIVar13 = SZArrayNew(TypeInfo_string_array,0);
              *(Il2CppObject **)&(pIVar12->_1).byval_arg.bits = pIVar13;
              Il2CppCodeGenWriteBarrier((void **)&(pIVar12->_1).byval_arg.bits,pIVar13);
              pvVar4 = (void *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              (pIVar12->_1).this_arg.data = pvVar4;
              Il2CppCodeGenWriteBarrier(&(pIVar12->_1).this_arg.data,pvVar4);
              if (2 < *(uint *)&pIVar11[1].monitor) {
                pIVar11[3].klass = pIVar12;
                Il2CppCodeGenWriteBarrier(&pIVar11[3].klass,pIVar12);
                if (Il2CppMethodInitialized_184344b3a == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                  Il2CppMethodInitialized_184344b3a = '\x01';
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                }
                pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                         _Working_k__BackingField;
                if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                   (pSVar7 = (pSVar1->fields).Misc, pSVar7 == (Settings_InGameMiscSettings_o *)0x0))
                goto label_1823e797a;
                pSVar3 = (pSVar7->fields).Motd;
                pGVar14 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
                pSVar10 = "MOTD";
                pSVar6 = "misc.Motd";
                if (Il2CppMethodInitialized_184347e94 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
                  Il2CppMethodInitialized_184347e94 = '\x01';
                }
                System_Object___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar14,
                           (MethodInfo *)0x0);
                (pGVar14->fields)._Id_k__BackingField = pSVar6;
                Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Id_k__BackingField,pSVar6);
                (pGVar14->fields)._Label_k__BackingField = pSVar10;
                Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Label_k__BackingField,pSVar10);
                (pGVar14->fields)._Setting_k__BackingField = (Settings_BaseSetting_o *)pSVar3;
                Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Setting_k__BackingField,pSVar3);
                pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
                (pGVar14->fields)._Options_k__BackingField = pSVar15;
                Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Options_k__BackingField,pSVar15);
                pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                (pGVar14->fields)._Tooltip_k__BackingField = pSVar6;
                Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Tooltip_k__BackingField,pSVar6);
                if (3 < *(uint *)&pIVar11[1].monitor) {
                  pIVar11[3].monitor = pGVar14;
                  Il2CppCodeGenWriteBarrier(&pIVar11[3].monitor,pGVar14);
                  if (Il2CppMethodInitialized_184344b3a == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                    Il2CppMethodInitialized_184344b3a = '\x01';
                  }
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                  }
                  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                           _Working_k__BackingField;
                  if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                     (pSVar7 = (pSVar1->fields).Misc, pSVar7 == (Settings_InGameMiscSettings_o *)0x0))
                  goto label_1823e797a;
                  pSVar8 = (pSVar7->fields).AllowVoteKicking;
                  pIVar12 = (Il2CppClass *)
                            il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
                  pSVar10 = "Vote Kicking";
                  pSVar6 = "misc.AllowVoteKicking";
                  if (Il2CppMethodInitialized_184347e94 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
                    Il2CppMethodInitialized_184347e94 = '\x01';
                  }
                  System_Object___ctor
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pIVar12,
                             (MethodInfo *)0x0);
                  (pIVar12->_1).name = (char *)pSVar6;
                  Il2CppCodeGenWriteBarrier(&(pIVar12->_1).name,pSVar6);
                  (pIVar12->_1).namespaze = (char *)pSVar10;
                  Il2CppCodeGenWriteBarrier(&(pIVar12->_1).namespaze,pSVar10);
                  (pIVar12->_1).byval_arg.data = pSVar8;
                  Il2CppCodeGenWriteBarrier(&(pIVar12->_1).byval_arg.data,pSVar8);
                  pIVar13 = SZArrayNew(TypeInfo_string_array,0);
                  *(Il2CppObject **)&(pIVar12->_1).byval_arg.bits = pIVar13;
                  Il2CppCodeGenWriteBarrier((void **)&(pIVar12->_1).byval_arg.bits,pIVar13);
                  pvVar4 = (void *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                  (pIVar12->_1).this_arg.data = pvVar4;
                  Il2CppCodeGenWriteBarrier(&(pIVar12->_1).this_arg.data,pvVar4);
                  if (4 < *(uint *)&pIVar11[1].monitor) {
                    pIVar11[4].klass = pIVar12;
                    Il2CppCodeGenWriteBarrier(&pIVar11[4].klass,pIVar12);
                    if (Il2CppMethodInitialized_184344b3a == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                      Il2CppMethodInitialized_184344b3a = '\x01';
                    }
                    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                    }
                    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                             _Working_k__BackingField;
                    if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                       (pSVar7 = (pSVar1->fields).Misc, pSVar7 == (Settings_InGameMiscSettings_o *)0x0))
                    goto label_1823e797a;
                    pSVar8 = (pSVar7->fields).AccountRequired;
                    pGVar14 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
                    pSVar10 = "misc.AccountRequired";
                    pSVar6 = "Account Required";
                    if (Il2CppMethodInitialized_184347e94 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
                      Il2CppMethodInitialized_184347e94 = '\x01';
                    }
                    System_Object___ctor
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar14,
                               (MethodInfo *)0x0);
                    (pGVar14->fields)._Id_k__BackingField = pSVar10;
                    Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Id_k__BackingField,pSVar10);
                    (pGVar14->fields)._Label_k__BackingField = pSVar6;
                    Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Label_k__BackingField,pSVar6);
                    (pGVar14->fields)._Setting_k__BackingField = (Settings_BaseSetting_o *)pSVar8;
                    Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Setting_k__BackingField,pSVar8);
                    pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
                    (pGVar14->fields)._Options_k__BackingField = pSVar15;
                    Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Options_k__BackingField,pSVar15);
                    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                    (pGVar14->fields)._Tooltip_k__BackingField = pSVar6;
                    Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Tooltip_k__BackingField,pSVar6);
                    if (5 < *(uint *)&pIVar11[1].monitor) {
                      pIVar11[4].monitor = pGVar14;
                      Il2CppCodeGenWriteBarrier(&pIVar11[4].monitor,pGVar14);
                      if (Il2CppMethodInitialized_184344b3a == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                        Il2CppMethodInitialized_184344b3a = '\x01';
                      }
                      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                      }
                      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                               _Working_k__BackingField;
                      if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                         (pSVar7 = (pSVar1->fields).Misc, pSVar7 == (Settings_InGameMiscSettings_o *)0x0))
                      goto label_1823e797a;
                      pSVar5 = (pSVar7->fields).VoiceChat;
                      pIVar12 = (Il2CppClass *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
                      pSVar10 = "Voice Chat";
                      pSVar6 = "misc.VoiceChat";
                      if (Il2CppMethodInitialized_184347e94 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
                        Il2CppMethodInitialized_184347e94 = '\x01';
                      }
                      System_Object___ctor
                                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pIVar12,
                                 (MethodInfo *)0x0);
                      (pIVar12->_1).name = (char *)pSVar6;
                      Il2CppCodeGenWriteBarrier(&(pIVar12->_1).name,pSVar6);
                      (pIVar12->_1).namespaze = (char *)pSVar10;
                      Il2CppCodeGenWriteBarrier(&(pIVar12->_1).namespaze,pSVar10);
                      (pIVar12->_1).byval_arg.data = pSVar5;
                      Il2CppCodeGenWriteBarrier(&(pIVar12->_1).byval_arg.data,pSVar5);
                      pIVar13 = SZArrayNew(TypeInfo_string_array,0);
                      *(Il2CppObject **)&(pIVar12->_1).byval_arg.bits = pIVar13;
                      Il2CppCodeGenWriteBarrier((void **)&(pIVar12->_1).byval_arg.bits,pIVar13);
                      pvVar4 = (void *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                      (pIVar12->_1).this_arg.data = pvVar4;
                      Il2CppCodeGenWriteBarrier(&(pIVar12->_1).this_arg.data,pvVar4);
                      if (6 < *(uint *)&pIVar11[1].monitor) {
                        pIVar11[5].klass = pIVar12;
                        Il2CppCodeGenWriteBarrier(&pIVar11[5].klass,pIVar12);
                        if (Il2CppMethodInitialized_184344b3a == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata
                                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                          Il2CppMethodInitialized_184344b3a = '\x01';
                        }
                        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                            cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                        }
                        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                 _Working_k__BackingField;
                        if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                           (pSVar7 = (pSVar1->fields).Misc, pSVar7 == (Settings_InGameMiscSettings_o *)0x0))
                        goto label_1823e797a;
                        pSVar9 = (pSVar7->fields).ProximityMinDistance;
                        pGVar14 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField)
                        ;
                        pSVar10 = "Proximity Min";
                        pSVar6 = "misc.ProximityMinDistance";
                        if (Il2CppMethodInitialized_184347e94 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
                          Il2CppMethodInitialized_184347e94 = '\x01';
                        }
                        System_Configuration_ConfigurationCollectionAttribute___ctor
                                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pGVar14,
                                   (MethodInfo *)0x0);
                        (pGVar14->fields)._Id_k__BackingField = pSVar6;
                        Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Id_k__BackingField,pSVar6);
                        (pGVar14->fields)._Label_k__BackingField = pSVar10;
                        Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Label_k__BackingField,pSVar10);
                        (pGVar14->fields)._Setting_k__BackingField = (Settings_BaseSetting_o *)pSVar9;
                        Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Setting_k__BackingField,pSVar9);
                        pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
                        (pGVar14->fields)._Options_k__BackingField = pSVar15;
                        Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Options_k__BackingField,pSVar15);
                        pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                        (pGVar14->fields)._Tooltip_k__BackingField = pSVar6;
                        Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._Tooltip_k__BackingField,pSVar6);
                        if (7 < *(uint *)&pIVar11[1].monitor) {
                          pIVar11[5].monitor = pGVar14;
                          Il2CppCodeGenWriteBarrier(&pIVar11[5].monitor,pGVar14);
                          if (Il2CppMethodInitialized_184344b3a == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                            Il2CppMethodInitialized_184344b3a = '\x01';
                          }
                          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                              cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                          }
                          pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                   _Working_k__BackingField;
                          if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
                             (pSVar7 = (pSVar1->fields).Misc, pSVar7 == (Settings_InGameMiscSettings_o *)0x0))
                          goto label_1823e797a;
                          pSVar9 = (pSVar7->fields).ProximityMaxDistance;
                          pIVar12 = (Il2CppClass *)
                                    il2cpp_codegen_object_new
                                              ((Il2CppClass *)
                                               TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
                          pSVar10 = "Proximity Max";
                          pSVar6 = "misc.ProximityMaxDistance";
                          if (Il2CppMethodInitialized_184347e94 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
                            Il2CppMethodInitialized_184347e94 = '\x01';
                          }
                          System_Object___ctor
                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pIVar12,
                                     (MethodInfo *)0x0);
                          (pIVar12->_1).name = (char *)pSVar6;
                          Il2CppCodeGenWriteBarrier(&(pIVar12->_1).name,pSVar6);
                          (pIVar12->_1).namespaze = (char *)pSVar10;
                          Il2CppCodeGenWriteBarrier(&(pIVar12->_1).namespaze,pSVar10);
                          (pIVar12->_1).byval_arg.data = pSVar9;
                          Il2CppCodeGenWriteBarrier(&(pIVar12->_1).byval_arg.data,pSVar9);
                          pIVar13 = SZArrayNew(TypeInfo_string_array,0);
                          *(Il2CppObject **)&(pIVar12->_1).byval_arg.bits = pIVar13;
                          Il2CppCodeGenWriteBarrier((void **)&(pIVar12->_1).byval_arg.bits,pIVar13);
                          pvVar4 = (void *)**(undefined8 **)(g_data_184354e50 + 0xb8);
                          (pIVar12->_1).this_arg.data = pvVar4;
                          Il2CppCodeGenWriteBarrier(&(pIVar12->_1).this_arg.data,pvVar4);
                          if (8 < *(uint *)&pIVar11[1].monitor) {
                            pIVar11[6].klass = pIVar12;
                            Il2CppCodeGenWriteBarrier(&pIVar11[6].klass,pIVar12);
                            return (System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *)pIVar11;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
label_1823e797a:
      ThrowNullReferenceException();
    }
  }
  pIVar11 = SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField_array,0);
  return (System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *)pIVar11;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AddDynamicFields
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddDynamicFields (System_String_o* prefix, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x1823e5060
// eh: try 0x1823e52c0..0x1823e5586 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823e52bc: nop dword ptr [rax]
// asm:   0x1823e551f: jmp 0x1823e5547
// asm:   0x1823e5521: mov r8, qword ptr [rsp + 0x40]
// asm:   0x1823e5526: cmp qword ptr [r8], 0
// asm:   0x1823e552a: je 0x1823e553d
// asm:   0x1823e552c: xor ecx, ecx
// asm:   0x1823e552e: mov r8, qword ptr [r8]
// asm:   0x1823e5531: mov rdx, qword ptr [rip + 0x1cb3dc8]  ; TypeInfo_System_IDisposable
// asm:   0x1823e5538: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1823e553d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1823e5542: test rcx, rcx
// asm:   0x1823e5545: jne 0x1823e5586
// asm:   0x1823e5586: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddDynamicFields
               (System_String_o *prefix,System_Collections_Generic_Dictionary_string__BaseSetting__o *settings
               ,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Settings_BaseSetting_o *setting;
  Settings_InspectorSettingMetadata_o *pSVar4;
  System_Collections_Generic_List_string__o *__this;
  bool bVar5;
  ushort uVar6;
  System_Func_KeyValuePair_string__BaseSetting___string__o *__this_00;
  Il2CppObject *pIVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  undefined8 *puVar10;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *options;
  System_String_o *pSVar11;
  System_String_o *id;
  System_String_o *pSVar12;
  undefined1 local_40 [24];
  
  if (Il2CppMethodInitialized_184347ef9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_string_BaseSetting_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_string_BaseSetting_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AddDynamicFields_b__148_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347ef9 = '\x01';
  }
  if (settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__148_0;
    if (__this_00 == (System_Func_KeyValuePair_string__BaseSetting___string__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      pIVar7 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_BaseSetting_string);
      System_Func_KeyValuePair_object__object___object____ctor
                ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_00,pIVar7,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AddDynamicFields_b__148_0,
                 (MethodInfo_13859D0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__148_0 = __this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__148_0,
                 __this_00);
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
    pIVar7 = (Il2CppObject *)
             System_Linq_Enumerable__OrderBy_object__object__6c13e0
                       ((System_Collections_Generic_IEnumerable_TSource__o *)settings,
                        (System_Func_TSource__TKey__o *)__this_00,
                        (System_Collections_Generic_IComparer_TKey__o *)
                        TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                        (MethodInfo_6C13E0 *)
                        MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_string_BaseSetting_string);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar7 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_BaseSetting,
                        pIVar7);
    while( true ) {
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar7);
      if ((char)pvVar8 == '\0') break;
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIVar7->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      uVar6 = 0;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        do {
          if (pIVar3[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_BaseSetting)
          {
            pVVar9 = pIVar2->vtable + pIVar3[uVar6].offset;
            goto label_1823e5346;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_BaseSetting
                          ,0);
label_1823e5346:
      puVar10 = (undefined8 *)(*pVVar9->methodPtr)(local_40);
      pSVar12 = (System_String_o *)*puVar10;
      setting = (Settings_BaseSetting_o *)puVar10[1];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported(setting,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsMetadataField(pSVar12,(MethodInfo *)0x0);
        if (!bVar5) {
          if (setting == (Settings_BaseSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = (setting->fields).InspectorMetadata;
          if (pSVar4 == (Settings_InspectorSettingMetadata_o *)0x0) {
            ThrowNullReferenceException();
          }
          __this = (pSVar4->fields).Dropbox;
          if (__this == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((__this->fields)._size < 1) {
            pSVar11 = System_String__Concat_1969e50(pSVar12,"Dropbox",(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            options = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                       *)Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataOptions
                                   (settings,pSVar11,(MethodInfo *)0x0);
          }
          else {
            options = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                                ((System_Collections_Generic_List_T__o *)__this,
                                 (MethodInfo_929FE0 *)
                                 MethodInfo_System_Collections_Generic_List_string_ToArray);
          }
          pSVar4 = (setting->fields).InspectorMetadata;
          if (pSVar4 == (Settings_InspectorSettingMetadata_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = System_String__IsNullOrEmpty((pSVar4->fields).Tooltip,(MethodInfo *)0x0);
          if (bVar5) {
            pSVar11 = System_String__Concat_1969e50(pSVar12,"Tooltip",(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataString
                                (settings,pSVar11,(MethodInfo *)0x0);
          }
          else {
            pSVar4 = (setting->fields).InspectorMetadata;
            if (pSVar4 == (Settings_InspectorSettingMetadata_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar11 = (pSVar4->fields).Tooltip;
          }
          id = System_String__Concat_1969b70(prefix,".",pSVar12,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Label(pSVar12,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
                    (id,pSVar12,setting,(System_String_array *)options,pSVar11,(MethodInfo *)0x0);
        }
      }
    }
    if (pIVar7 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar7);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AddSandboxField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField (System_String_o* id, System_String_o* label, Settings_BaseSetting_o* setting, System_String_array* options, System_String_o* tooltip, const MethodInfo* method);
// 0x1823e55a0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
               (System_String_o *id,System_String_o *label,Settings_BaseSetting_o *setting,
               System_String_array *options,System_String_o *tooltip,MethodInfo *method)

{
  System_Collections_Generic_List_AottgSandboxField__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *__this;
  
  if (Il2CppMethodInitialized_184347efa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add);
    Il2CppMethodInitialized_184347efa = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported(setting,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
      if (Il2CppMethodInitialized_184347e94 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
        Il2CppMethodInitialized_184347e94 = '\x01';
      }
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._Id_k__BackingField = id;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField,id);
      (__this->fields)._Label_k__BackingField = label;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Label_k__BackingField,label);
      (__this->fields)._Setting_k__BackingField = setting;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Setting_k__BackingField,setting);
      if (options == (System_String_array *)0x0) {
        options = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
      }
      if (__this != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
        (__this->fields)._Options_k__BackingField = options;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._Options_k__BackingField,options);
        if (tooltip == (System_String_o *)0x0) {
          tooltip = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        (__this->fields)._Tooltip_k__BackingField = tooltip;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._Tooltip_k__BackingField,tooltip);
        if (pSVar1 != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
          il2cpp_runtime_helper_180012890(pSVar1,__this,MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetValue
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetValue (Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, System_String_o* value, const MethodInfo* method);
// 0x1823f0e30

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetValue
               (Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  Settings_TypedSetting_T__o *__this;
  Settings_TypedSetting_T__c *pSVar2;
  System_String_array *pSVar3;
  float fVar4;
  bool bVar5;
  int32_t value_00;
  System_Globalization_CultureInfo_o *pSVar6;
  MethodInfo *method_00;
  double dVar7;
  bool local_res8 [8];
  float local_res20 [2];
  float local_28 [8];
  
  if (Il2CppMethodInitialized_184347efb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347efb = '\x01';
  }
  local_res8[0] = false;
  local_res20[0] = 0.0;
  local_28[0] = 0.0;
  if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    __this = (Settings_TypedSetting_T__o *)(field->fields)._Setting_k__BackingField;
    if (__this != (Settings_TypedSetting_T__o *)0x0) {
      pSVar2 = __this->klass;
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting))
      {
        if (value == (System_String_o *)0x0) {
          value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        Settings_TypedSetting_object___set_Value
                  (__this,(Il2CppObject *)value,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        return true;
      }
      bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
      if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
        {
          bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
          if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
             ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
            if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
            }
            pSVar6 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            bVar5 = System_Single__TryParse_1b4a540
                              (value,0xa7,(System_IFormatProvider_o *)pSVar6,local_28,(MethodInfo *)0x0);
            if (bVar5) {
              Settings_TypedSetting_float___set_Value
                        ((Settings_TypedSetting_float__o *)__this,local_28[0],
                         (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
              return true;
            }
          }
        }
        else {
          value_00 = System_Array__IndexOf_object_
                               ((System_Object_array *)(field->fields)._Options_k__BackingField,
                                (Il2CppObject *)value,
                                (MethodInfo_7674A0 *)MethodInfo_System_Array_IndexOf_string);
          pSVar3 = (field->fields)._Options_k__BackingField;
          if (pSVar3 == (System_String_array *)0x0) goto label_1823f119f;
          if ((pSVar3->max_length != 0) && (-1 < value_00)) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)__this,value_00,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            return true;
          }
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar6 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          method_00 = (MethodInfo *)0xa7;
          bVar5 = System_Single__TryParse_1b4a540
                            (value,0xa7,(System_IFormatProvider_o *)pSVar6,local_res20,(MethodInfo *)0x0);
          fVar4 = local_res20[0];
          if (bVar5) {
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            dVar7 = il2cpp_runtime_helper_180012b90((double)fVar4,method_00);
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)__this,(int)dVar7,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            return true;
          }
        }
      }
      else {
        if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354de8);
        }
        bVar5 = System_Boolean__TryParse(value,local_res8,(MethodInfo *)0x0);
        if (bVar5) {
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)__this,local_res8[0],
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          return true;
        }
      }
    }
    return false;
  }
label_1823f119f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsSupported
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported (Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x1823ebb80

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported
               (Settings_BaseSetting_o *setting,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  bool bVar3;
  Settings_BaseSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_184347efc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184347efc = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar2 = setting->klass;
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting)
           ) {
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
             (bVar3 = true,
             (pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
            bVar3 = false;
          }
          pSVar4 = (Settings_BaseSetting_o *)0x0;
          if (bVar3) {
            pSVar4 = setting;
          }
          return pSVar4 != (Settings_BaseSetting_o *)0x0;
        }
      }
    }
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsMetadataField
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsMetadataField (System_String_o* key, const MethodInfo* method);
// 0x1823eb950

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsMetadataField(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347efd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_184347efd = '\x01';
  }
  bVar1 = System_String__op_Equality(key,"Description",(MethodInfo *)0x0);
  if (!bVar1) {
    if (key == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__EndsWith_196bd20(key,"Tooltip",4,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__EndsWith_196bd20(key,"Dropbox",4,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$MetadataOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataOptions (System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, System_String_o* key, const MethodInfo* method);
// 0x1823ec360

System_String_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataOptions
          (System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,System_String_o *key,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_String_o *value;
  System_String_array *pSVar3;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  
  if (Il2CppMethodInitialized_184347efe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_MetadataOptions_b__153_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_MetadataOptions_b__153_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_184347efe = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  value = Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataString(settings,key,(MethodInfo *)0x0);
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar3;
  }
  if (value != (System_String_o *)0x0) {
    pSVar3 = System_String__Split(value,0x2c,0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__153_0;
    if (__this == (System_Func_string__string__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,pIVar1,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_MetadataOptions_b__153_0
                 ,(MethodInfo_16E67D0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__153_0 = __this;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__153_0,__this);
    }
    source = System_Linq_Enumerable__Select_Vector3__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                        (System_Func_TSource__TResult__o *)__this,
                        (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__153_1;
    if (__this_00 == (System_Func_string__bool__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this_00,pIVar1,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_MetadataOptions_b__153_1
                 ,(MethodInfo_B61EB0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__153_1 = __this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9__153_1,
                 __this_00);
    }
    source_00 = System_Linq_Enumerable__Where_float_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this_00,
                           (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
    pSVar3 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       (source_00,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    return pSVar3;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$MetadataString
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataString (System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, System_String_o* key, const MethodInfo* method);
// 0x1823ec610

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataString
          (System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,System_String_o *key,
          MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_184347eff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347eff = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  if (settings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)settings,(Il2CppObject *)key,
                     &local_res8,
                     (MethodInfo_14769C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
  if ((bVar2) && (local_res8 != (Il2CppObject *)0x0)) {
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (local_res8->klass->_2).typeHierarchyDepth) &&
       (((local_res8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_Settings_StringSetting &&
        (pIVar3 = local_res8 + 2, local_res8[2].klass != (Il2CppClass *)0x0)))) goto label_1823ec6cc;
  }
  pIVar3 = *(Il2CppObject **)(g_data_184354e50 + 0xb8);
label_1823ec6cc:
  return (System_String_o *)pIVar3->klass;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__Label (System_String_o* value, const MethodInfo* method);
// 0x1823ebcb0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ebd7c: dec edi
// asm:   0x1823ebd7e: test edi, edi
// asm:   0x1823ebd80: jg 0x1823ebcf5

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__Label(System_String_o *value,MethodInfo *method)

{
  int index;
  int iVar1;
  bool bVar2;
  uint16_t uVar3;
  
  if (Il2CppMethodInitialized_184347f00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_184347f00 = '\x01';
  }
  if (value != (System_String_o *)0x0) {
    index = (value->fields)._stringLength;
    while( true ) {
      iVar1 = index;
      index = iVar1 + -1;
      if (index < 1) {
        return value;
      }
      if (value == (System_String_o *)0x0) break;
      uVar3 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      bVar2 = System_Char__IsUpper(uVar3,(MethodInfo *)0x0);
      if (bVar2) {
        uVar3 = System_String__get_Chars(value,iVar1 + -2,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        bVar2 = System_Char__IsUpper(uVar3,(MethodInfo *)0x0);
        if (!bVar2) {
          value = System_String__Insert(value,index," ",(MethodInfo *)0x0);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Clone
// il2cpp: Settings_InGameSet_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__Clone (Settings_InGameSet_o* source, const MethodInfo* method);
// 0x1823e8fc0

Settings_InGameSet_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__Clone(Settings_InGameSet_o *source,MethodInfo *method)

{
  Settings_InGameSet_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347f01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    Il2CppMethodInitialized_184347f01 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(__this,(MethodInfo *)0x0);
  if (source != (Settings_InGameSet_o *)0x0) {
    pSVar1 = (*(source->klass->vtable)._8_SerializeToJsonString.methodPtr)
                       (source,(source->klass->vtable)._8_SerializeToJsonString.method);
    if (__this == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(__this->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this,pSVar1,(__this->klass->vtable)._9_DeserializeFromJsonString.method);
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CreateOfficialWorkingSet
// il2cpp: Settings_InGameSet_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__CreateOfficialWorkingSet (Settings_InGameSet_o* source, const MethodInfo* method);
// 0x1823ea390

Settings_InGameSet_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__CreateOfficialWorkingSet
          (Settings_InGameSet_o *source,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_InGameMiscSettings_o *pSVar8;
  Settings_InGameMiscSettings_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  Settings_BoolSetting_o *pSVar11;
  Settings_FloatSetting_o *pSVar12;
  Settings_FloatSetting_o *pSVar13;
  Settings_ListSetting_StringSetting__o *pSVar14;
  System_Collections_Generic_List_T__o *pSVar15;
  Settings_InGameAddonSettings_o *pSVar16;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this;
  Settings_InGameSet_o *__this_00;
  
  if (Il2CppMethodInitialized_184347f02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347f02 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(__this_00,(MethodInfo *)0x0);
  if (source == (Settings_InGameSet_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184344b3a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184344b3a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    if ((source != (Settings_InGameSet_o *)0x0) ||
       (source = TypeInfo_Settings_SettingsManager->static_fields->InGameUI,
       source != (Settings_InGameSet_o *)0x0)) goto label_1823ea4ee;
    if (__this_00 == (Settings_InGameSet_o *)0x0) goto label_1823ea80c;
  }
  else {
label_1823ea4ee:
    if ((((__this_00 == (Settings_InGameSet_o *)0x0) ||
         (pSVar2 = (__this_00->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
        (pSVar3 = (source->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0)) ||
       ((pSVar4 = (pSVar3->fields).RoomName, pSVar4 == (Settings_StringSetting_o *)0x0 ||
        (pSVar5 = (pSVar2->fields).RoomName, pSVar5 == (Settings_StringSetting_o *)0x0)))) goto label_1823ea80c;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar4->fields)._value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar2 = (__this_00->fields).General;
    if (((pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) ||
        ((pSVar3 = (source->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0 ||
         (pSVar4 = (pSVar3->fields).Password, pSVar4 == (Settings_StringSetting_o *)0x0)))) ||
       (pSVar5 = (pSVar2->fields).Password, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_1823ea80c;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar4->fields)._value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar2 = (__this_00->fields).General;
    if ((((pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) ||
         (pSVar3 = (source->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0)) ||
        (pSVar6 = (pSVar3->fields).MaxPlayers, pSVar6 == (Settings_IntSetting_o *)0x0)) ||
       (pSVar7 = (pSVar2->fields).MaxPlayers, pSVar7 == (Settings_IntSetting_o *)0x0)) goto label_1823ea80c;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar7,(pSVar6->fields)._value,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar8 = (__this_00->fields).Misc;
    if (((pSVar8 == (Settings_InGameMiscSettings_o *)0x0) ||
        (pSVar9 = (source->fields).Misc, pSVar9 == (Settings_InGameMiscSettings_o *)0x0)) ||
       ((pSVar4 = (pSVar9->fields).Motd, pSVar4 == (Settings_StringSetting_o *)0x0 ||
        (pSVar5 = (pSVar8->fields).Motd, pSVar5 == (Settings_StringSetting_o *)0x0)))) goto label_1823ea80c;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar4->fields)._value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar8 = (__this_00->fields).Misc;
    if (((pSVar8 == (Settings_InGameMiscSettings_o *)0x0) ||
        (pSVar9 = (source->fields).Misc, pSVar9 == (Settings_InGameMiscSettings_o *)0x0)) ||
       ((pSVar10 = (pSVar9->fields).AllowVoteKicking, pSVar10 == (Settings_BoolSetting_o *)0x0 ||
        (pSVar11 = (pSVar8->fields).AllowVoteKicking, pSVar11 == (Settings_BoolSetting_o *)0x0))))
    goto label_1823ea80c;
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)pSVar11,(pSVar10->fields)._value,
               (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    pSVar8 = (__this_00->fields).Misc;
    if ((((pSVar8 == (Settings_InGameMiscSettings_o *)0x0) ||
         (pSVar9 = (source->fields).Misc, pSVar9 == (Settings_InGameMiscSettings_o *)0x0)) ||
        (pSVar6 = (pSVar9->fields).VoiceChat, pSVar6 == (Settings_IntSetting_o *)0x0)) ||
       (pSVar7 = (pSVar8->fields).VoiceChat, pSVar7 == (Settings_IntSetting_o *)0x0)) goto label_1823ea80c;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar7,(pSVar6->fields)._value,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar8 = (__this_00->fields).Misc;
    if (((pSVar8 == (Settings_InGameMiscSettings_o *)0x0) ||
        (pSVar9 = (source->fields).Misc, pSVar9 == (Settings_InGameMiscSettings_o *)0x0)) ||
       ((pSVar12 = (pSVar9->fields).ProximityMinDistance, pSVar12 == (Settings_FloatSetting_o *)0x0 ||
        (pSVar13 = (pSVar8->fields).ProximityMinDistance, pSVar13 == (Settings_FloatSetting_o *)0x0))))
    goto label_1823ea80c;
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)pSVar13,(pSVar12->fields)._value,
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    pSVar8 = (__this_00->fields).Misc;
    if (((pSVar8 == (Settings_InGameMiscSettings_o *)0x0) ||
        (pSVar9 = (source->fields).Misc, pSVar9 == (Settings_InGameMiscSettings_o *)0x0)) ||
       ((pSVar12 = (pSVar9->fields).ProximityMaxDistance, pSVar12 == (Settings_FloatSetting_o *)0x0 ||
        (pSVar13 = (pSVar8->fields).ProximityMaxDistance, pSVar13 == (Settings_FloatSetting_o *)0x0))))
    goto label_1823ea80c;
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)pSVar13,(pSVar12->fields)._value,
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    pSVar8 = (__this_00->fields).Misc;
    if ((((pSVar8 == (Settings_InGameMiscSettings_o *)0x0) ||
         (pSVar9 = (source->fields).Misc, pSVar9 == (Settings_InGameMiscSettings_o *)0x0)) ||
        (pSVar10 = (pSVar9->fields).AccountRequired, pSVar10 == (Settings_BoolSetting_o *)0x0)) ||
       (pSVar11 = (pSVar8->fields).AccountRequired, pSVar11 == (Settings_BoolSetting_o *)0x0))
    goto label_1823ea80c;
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)pSVar11,(pSVar10->fields)._value,
               (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  }
  pSVar2 = (__this_00->fields).General;
  if (((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
      (pSVar14 = (pSVar2->fields).Addons, pSVar14 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
     (pSVar15 = (pSVar14->fields)._value, pSVar15 != (System_Collections_Generic_List_T__o *)0x0)) {
    length = (pSVar15->fields)._size;
    piVar1 = &(pSVar15->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar15->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar15->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar16 = (__this_00->fields).Addons;
    if ((pSVar16 != (Settings_InGameAddonSettings_o *)0x0) &&
       (__this = (pSVar16->fields).Current,
       __this != (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_13BF1C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_Clear);
      pSVar10 = (__this_00->fields).Sandbox;
      if (pSVar10 != (Settings_BoolSetting_o *)0x0) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar10,false,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return __this_00;
      }
    }
  }
label_1823ea80c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RestoreEditableValues
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RestoreEditableValues (Settings_ExperienceRuleResult_o* result, Settings_InGameSet_o* persisted, System_Collections_Generic_HashSet_string__o* resetIds, bool contentOnly, const MethodInfo* method);
// 0x1823ee3a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ee45d: nop dword ptr [rax]
// asm:   0x1823ee5ed: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x1823ee5f2: mov rbx, qword ptr [rsp + 0x58]
// asm:   0x1823ee5f7: mov rdi, qword ptr [rsp + 0x20]

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RestoreEditableValues
               (Settings_ExperienceRuleResult_o *result,Settings_InGameSet_o *persisted,
               System_Collections_Generic_HashSet_string__o *resetIds,bool contentOnly,MethodInfo *method)

{
  System_Collections_Generic_List_ExperienceRuleField__o *__this;
  System_String_o *id;
  Settings_BaseSetting_o *pSVar1;
  bool bVar2;
  Settings_ExperienceRuleField_o *pSVar3;
  Il2CppObject *value;
  int index;
  Settings_BaseSetting_o *local_res8;
  
  if (Il2CppMethodInitialized_184347f03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_184347f03 = '\x01';
  }
  local_res8 = (Settings_BaseSetting_o *)0x0;
  if (((result == (Settings_ExperienceRuleResult_o *)0x0) || (persisted == (Settings_InGameSet_o *)0x0)) ||
     (bVar2 = Settings_ExperienceRuleResult__get_IsValid(result,(MethodInfo *)0x0), !bVar2)) {
    return;
  }
  index = 0;
  while (__this = (result->fields).Fields,
        __this != (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) {
    if ((__this->fields)._size <= index) {
      return;
    }
    pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this,index,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Item);
    if (pSVar3 == (Settings_ExperienceRuleField_o *)0x0) break;
    if (((((pSVar3->fields).Visible != false) && ((pSVar3->fields).Editable != false)) &&
        ((resetIds == (System_Collections_Generic_HashSet_string__o *)0x0 ||
         (bVar2 = System_Collections_Generic_HashSet_object___Contains
                            ((System_Collections_Generic_HashSet_object__o *)resetIds,
                             (Il2CppObject *)(pSVar3->fields).Id,
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_string_Contains), !bVar2)))) &&
       (((!contentOnly ||
         (bVar2 = System_String__op_Inequality((pSVar3->fields).Id,"general.MapName",(MethodInfo *)0x0),
         !bVar2)) ||
        (bVar2 = System_String__op_Inequality((pSVar3->fields).Id,"general.GameMode",(MethodInfo *)0x0),
        !bVar2)))) {
      id = (pSVar3->fields).Id;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184347f04 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
        Il2CppMethodInitialized_184347f04 = '\x01';
      }
      if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
      }
      bVar2 = Settings_ExperienceRuleEngine__TryResolveSetting(persisted,id,&local_res8,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (pSVar3->fields).Setting;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        value = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingValue(pSVar1,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__CopySettingValue
                  ((pSVar3->fields).Setting,local_res8,(MethodInfo *)0x0);
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar2 = Settings_ExperienceRuleEngine__Validate(result,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar1 = (pSVar3->fields).Setting;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetSettingValue(pSVar1,value,(MethodInfo *)0x0);
        }
      }
    }
    index = index + 1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TryResolveSetting
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__TryResolveSetting (Settings_InGameSet_o* settings, System_String_o* id, Settings_BaseSetting_o** setting, const MethodInfo* method);
// 0x1823f2b60

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__TryResolveSetting
               (Settings_InGameSet_o *settings,System_String_o *id,Settings_BaseSetting_o **setting,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347f04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    Il2CppMethodInitialized_184347f04 = '\x01';
  }
  if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
  }
  bVar1 = Settings_ExperienceRuleEngine__TryResolveSetting(settings,id,setting,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SettingValue
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingValue (Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x1823f11b0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingValue
          (Settings_BaseSetting_o *setting,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  Il2CppObject *pIVar3;
  undefined4 local_res8 [8];
  
  if (Il2CppMethodInitialized_184347f05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347f05 = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar2 = setting->klass;
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      return (*(uint64_t *)((char *)setting + 0x20));
    }
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 1));
      pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
      return pIVar3;
    }
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      local_res8[0] = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
      pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
      return pIVar3;
    }
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      local_res8[0] = *(undefined4 *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
      pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
      return pIVar3;
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CopySettingValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CopySettingValue (Settings_BaseSetting_o* target, Settings_BaseSetting_o* source, const MethodInfo* method);
// 0x1823ea320

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CopySettingValue
               (Settings_BaseSetting_o *target,Settings_BaseSetting_o *source,MethodInfo *method)

{
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184347f06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347f06 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  value = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingValue(source,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetSettingValue(target,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetSettingValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetSettingValue (Settings_BaseSetting_o* setting, Il2CppObject* value, const MethodInfo* method);
// 0x1823f0360

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetSettingValue
               (Settings_BaseSetting_o *setting,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  void *pvVar3;
  int32_t *piVar4;
  Il2CppObject *pIVar5;
  float *pfVar6;
  
  if (Il2CppMethodInitialized_184347f07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347f07 = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar2 = setting->klass;
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if (((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
        ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting))
       && (value != (Il2CppObject *)0x0)) {
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e50) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)setting,pIVar5,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        return;
      }
    }
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
        ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) &&
       (value != (Il2CppObject *)0x0)) {
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354de8) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pvVar3 = il2cpp_object_unbox(value);
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)setting,*(bool *)pvVar3,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return;
      }
    }
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
        ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) &&
       (value != (Il2CppObject *)0x0)) {
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e08) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar4 = il2cpp_object_unbox(value);
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)setting,*piVar4,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        return;
      }
    }
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
        ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting))
       && (value != (Il2CppObject *)0x0)) {
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e38) {
        pIVar5 = value;
      }
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((value->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar6 = il2cpp_object_unbox(value);
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)setting,*pfVar6,
                   (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ValidateContentOptions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ValidateContentOptions (Settings_ExperienceRuleResult_o* result, const MethodInfo* method);
// 0x1823f2bd0
// eh: try 0x1823f2d00..0x1823f2f29 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823f2ed5: mov rdx, qword ptr [rip + 0x1c8be6c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose
// asm:   0x1823f2edc: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823f2ee1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1823f2ee6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1823f2eeb: test rcx, rcx
// asm:   0x1823f2eee: jne 0x1823f2f29
// asm:   0x1823f2f29: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ValidateContentOptions
               (Settings_ExperienceRuleResult_o *result,MethodInfo *method)

{
  System_Collections_Generic_List_ExperienceRuleField__o *__this;
  System_Collections_Generic_List_string__o *pSVar1;
  Settings_UIRule_o *pSVar2;
  Il2CppObject *field;
  bool bVar3;
  longlong lVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  undefined1 local_60 [16];
  Settings_ExperienceRuleField_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_184347f08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    il2cpp_codegen_initialize_runtime_metadata(&"No built-in content matches ");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184347f08 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (result != (Settings_ExperienceRuleResult_o *)0x0) {
    __this = (result->fields).Fields;
    if (__this == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = (Il2CppObject *)local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
label_1823f2d00:
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_48,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext);
    field = local_48.fields._current;
    if (bVar3) {
      if ((Settings_ExperienceRuleField_o *)local_48.fields._current == (Settings_ExperienceRuleField_o *)0x0)
      {
        ThrowNullReferenceException();
      }
      bVar3 = System_String__Equals_196c550
                        (((Settings_ExperienceRuleField_Fields *)((longlong)local_48.fields._current + 0x10))
                         ->Id,"general.MapCategory",5,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        lVar4 = il2cpp_runtime_helper_181dd5530(0);
        if (lVar4 == 0) {
          ThrowNullReferenceException();
        }
        if (*(longlong *)(lVar4 + 0x48) == 0) {
          ThrowNullReferenceException();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x30);
        if (lVar4 == 0) {
          ThrowNullReferenceException();
        }
        pSVar6 = *(System_String_o **)(lVar4 + 0x20);
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar5 = Map_BuiltinLevels__GetMapNames(pSVar6,(MethodInfo *)0x0);
        if (pSVar5 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if (pSVar5->max_length == 0) {
          pSVar1 = (result->fields).Errors;
          pSVar6 = System_String__Concat_1969b70
                             ("No built-in content matches ",
                              ((Settings_ExperienceRuleField_Fields *)((longlong)field + 0x10))->Id,
                              ".",(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar1,pSVar6,MethodInfo_System_Collections_Generic_List_string_Add);
        }
      }
      bVar3 = System_String__Equals_196c550
                        (((Settings_ExperienceRuleField_Fields *)((longlong)field + 0x10))->Id,
                         "general.MapName",5,(MethodInfo *)0x0);
      if (!bVar3) goto code_r0x0001823f2e10;
      goto label_1823f2e31;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
  }
  return;
code_r0x0001823f2e10:
  bVar3 = System_String__Equals_196c550
                    (((Settings_ExperienceRuleField_Fields *)((longlong)field + 0x10))->Id,
                     "general.GameMode",5,(MethodInfo *)0x0);
  if (bVar3) {
label_1823f2e31:
    pSVar2 = ((Settings_ExperienceRuleField_Fields *)((longlong)field + 0x10))->Rule;
    if (pSVar2 == (Settings_UIRule_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (((pSVar2->fields).AllowedValues != (System_Collections_Generic_List_string__o *)0x0) &&
       (0 < (((pSVar2->fields).AllowedValues)->fields)._size)) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions
                         ((Settings_ExperienceRuleField_o *)field,(MethodInfo *)0x0);
      if (pSVar5 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar5->max_length == 0) {
        pSVar1 = (result->fields).Errors;
        pSVar6 = System_String__Concat_1969b70
                           ("No built-in content matches ",
                            ((Settings_ExperienceRuleField_Fields *)((longlong)field + 0x10))->Id,
                            ".",(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pSVar1,pSVar6,MethodInfo_System_Collections_Generic_List_string_Add);
      }
    }
  }
  goto label_1823f2d00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___cctor (const MethodInfo* method);
// 0x1823f3160

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_String_o *pSVar1;
  System_Collections_Generic_List_Experience__o *__this;
  Settings_SandboxGameCreateConfiguration_o *__this_00;
  System_Collections_Generic_List_AottgSandboxField__o *__this_01;
  System_String_array *pSVar2;
  System_Collections_Generic_HashSet_string__o *__this_02;
  
  if (Il2CppMethodInitialized_184347f09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Experience_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SandboxGameCreateConfiguration);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Casual");
    il2cpp_codegen_initialize_runtime_metadata(&"Motd");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Mission");
    il2cpp_codegen_initialize_runtime_metadata(&"PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"Competitive");
    il2cpp_codegen_initialize_runtime_metadata(&"ProximityMaxDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"AllowVoteKicking");
    il2cpp_codegen_initialize_runtime_metadata(&"ProximityMinDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"AccountRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"Mode");
    Il2CppMethodInitialized_184347f09 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Experience);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Experience_ctor);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal,
             __this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration);
  Settings_SandboxGameCreateConfiguration___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration,
             __this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgSandboxField);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgSandboxField_ctor);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal = __this_01;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal,
             __this_01);
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames = pSVar2;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames,pSVar2
            );
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  pSVar1 = "General";
  if (pSVar2 == (System_String_array *)0x0) goto label_1823f36d1;
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "General";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
    pSVar1 = "Mode";
    if (1 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[1] = "Mode";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
      pSVar1 = "Titans";
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "Titans";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
        pSVar1 = "Misc";
        if (3 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[3] = "Misc";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
          pSVar1 = "Weather";
          if (4 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[4] = "Weather";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
            pSVar1 = "Custom";
            if (5 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[5] = "Custom";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
              TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal =
                   pSVar2;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                          SandboxSectionsInternal,pSVar2);
              pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
              pSVar1 = "Casual";
              if (pSVar2 == (System_String_array *)0x0) {
label_1823f36d1:
                ThrowNullReferenceException();
              }
              if ((int)pSVar2->max_length != 0) {
                pSVar2->m_Items[0] = "Casual";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                pSVar1 = "Competitive";
                if (1 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[1] = "Competitive";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                  pSVar1 = "Mission";
                  if (2 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[2] = "Mission";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
                    pSVar1 = "PVP";
                    if (3 < (uint)pSVar2->max_length) {
                      pSVar2->m_Items[3] = "PVP";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->CategoryOrder =
                           pSVar2;
                      Il2CppCodeGenWriteBarrier
                                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                  CategoryOrder,pSVar2);
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
                      __this_02 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string
                                            );
                      System_Collections_Generic_HashSet_object____ctor_176d450
                                ((System_Collections_Generic_HashSet_object__o *)__this_02,
                                 (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
                                 (MethodInfo_176D450 *)
                                 MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
                      if (__this_02 != (System_Collections_Generic_HashSet_string__o *)0x0) {
                        System_Collections_Generic_HashSet_object___Add
                                  ((System_Collections_Generic_HashSet_object__o *)__this_02,
                                   (Il2CppObject *)"Motd",
                                   (MethodInfo_1757CE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Add);
                        System_Collections_Generic_HashSet_object___Add
                                  ((System_Collections_Generic_HashSet_object__o *)__this_02,
                                   (Il2CppObject *)"AllowVoteKicking",
                                   (MethodInfo_1757CE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Add);
                        System_Collections_Generic_HashSet_object___Add
                                  ((System_Collections_Generic_HashSet_object__o *)__this_02,
                                   (Il2CppObject *)"VoiceChat",
                                   (MethodInfo_1757CE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Add);
                        System_Collections_Generic_HashSet_object___Add
                                  ((System_Collections_Generic_HashSet_object__o *)__this_02,
                                   (Il2CppObject *)"ProximityMinDistance",
                                   (MethodInfo_1757CE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Add);
                        System_Collections_Generic_HashSet_object___Add
                                  ((System_Collections_Generic_HashSet_object__o *)__this_02,
                                   (Il2CppObject *)"ProximityMaxDistance",
                                   (MethodInfo_1757CE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Add);
                        System_Collections_Generic_HashSet_object___Add
                                  ((System_Collections_Generic_HashSet_object__o *)__this_02,
                                   (Il2CppObject *)"AccountRequired",
                                   (MethodInfo_1757CE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Add);
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                        MultiplayerMiscIds = __this_02;
                        Il2CppCodeGenWriteBarrier
                                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                    MultiplayerMiscIds,__this_02);
                        return;
                      }
                      goto label_1823f36d1;
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
  ThrowIndexOutOfRangeException();
}


