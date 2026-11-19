// Type: Gisketch.Aottg2UI.Game.AottgGameCreateSession
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateSession.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___cctor (const MethodInfo* method);
// 0x58a7b20

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075452ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_075452ea = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, const MethodInfo* method);
// 0x58a7b90

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Begin>b__85_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Begin_b__85_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x58a7ba0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a7c14: jmp 0x58a7c7e

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Begin_b__85_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,Map_Experience_o *item,
               MethodInfo *method)

{
  System_String_o *a;
  Settings_InGameSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075452eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452eb = '\x01';
  }
  if (item == (Map_Experience_o *)0x0) goto label_058a7c7e;
  a = (item->fields).Name;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058a7c24;
label_058a7bf8:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a7c04;
label_058a7c43:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058a7bf8;
label_058a7c24:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a7c43;
label_058a7c04:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ExperienceName, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    bVar3 = System_String__Equals_52ffe30(a,(pSVar2->fields)._value,5,(MethodInfo *)0x0);
    return bVar3;
  }
label_058a7c7e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Categories>b__90_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__90_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x58a7c90

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__90_0
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,Map_Experience_o *item,
          MethodInfo *method)

{
  if (item == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (item->fields).Category;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Categories>b__90_1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__90_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58a7cb0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__90_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Categories>b__90_2
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__90_2 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58a7cc0

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Categories_b__90_2
                  (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *value,
                  MethodInfo *method)

{
  System_String_array *pSVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_075452ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    Il2CppMethodInitialized_075452ec = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  iVar2 = System_Array__IndexOf_object_
                    ((System_Object_array *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->CategoryOrder,
                     (Il2CppObject *)value,(MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
  if (-1 < iVar2) {
    return iVar2;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->CategoryOrder;
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  return (int32_t)pSVar1->max_length;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Subcategories>b__91_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__91_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x58a7d70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a7db3: cmp byte ptr [rip + 0x1c9d51a], 0
// asm:   0x58a7dba: je 0x58a7df7

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__91_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,Map_Experience_o *item,
               MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075452ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452ed = '\x01';
  }
  if (item == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (item->fields).Category;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = System_String__Equals_52ffe30
                    (a,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Category_k__BackingField,5,(MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Subcategories>b__91_1
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__91_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x58a7e30

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__91_1
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,Map_Experience_o *item,
          MethodInfo *method)

{
  if (item == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (item->fields).SubCategory;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Subcategories>b__91_2
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__91_2 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58a7e50

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___Subcategories_b__91_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<VisibleFields>b__97_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___VisibleFields_b__97_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x58a7e60

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___VisibleFields_b__97_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,
               Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  if (field == (Settings_ExperienceRuleField_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (field->fields).Visible;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<LockedFields>b__98_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___LockedFields_b__98_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x58a7e80

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___LockedFields_b__98_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,
               Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  if (field == (Settings_ExperienceRuleField_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (field->fields).Locked;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<AutofillTitanSpawnProbabilities>b__114_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AutofillTitanSpawnProbabilities_b__114_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, float value, const MethodInfo* method);
// 0x58a7ea0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AutofillTitanSpawnProbabilities_b__114_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,float value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075452ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_075452ee = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  return ABS(value) < 0.0001;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<AutofillTitanSpawnProbabilities>b__114_1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AutofillTitanSpawnProbabilities_b__114_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, float value, const MethodInfo* method);
// 0x58a7f10

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AutofillTitanSpawnProbabilities_b__114_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,float value,MethodInfo *method)

{
  return 0.0 < value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__125_3
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__125_3 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Settings_ExperienceRuleField_o* candidate, const MethodInfo* method);
// 0x58a7f20

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__125_3
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,
               Settings_ExperienceRuleField_o *candidate,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075452ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    Il2CppMethodInitialized_075452ef = '\x01';
  }
  if (candidate == (Settings_ExperienceRuleField_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Equals_52ffe30((candidate->fields).Id,"general.MapCategory",5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__125_4
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__125_4 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58a7f70

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__125_4
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *value,
          MethodInfo *method)

{
  return value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__125_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__125_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58a7f80

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__125_0
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *value,
          MethodInfo *method)

{
  return value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__125_1
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__125_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58a7f90

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___FieldOptions_b__125_1
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *value,
          MethodInfo *method)

{
  return value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<SandboxMapNames>b__126_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___SandboxMapNames_b__126_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58a7fa0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___SandboxMapNames_b__126_0
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *value,
          MethodInfo *method)

{
  return value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<PresetNames>b__127_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___PresetNames_b__127_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x58a7fb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___PresetNames_b__127_0
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *name,
          MethodInfo *method)

{
  return name;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<CustomPresetNames>b__128_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___CustomPresetNames_b__128_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Settings_InGameSet_o* preset, const MethodInfo* method);
// 0x58a7fc0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___CustomPresetNames_b__128_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,Settings_InGameSet_o *preset,
               MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_075452f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075452f0 = '\x01';
  }
  if ((preset == (Settings_InGameSet_o *)0x0) ||
     (pSVar1 = (preset->fields).Preset, pSVar1 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._value == false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<CustomPresetNames>b__128_1
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___CustomPresetNames_b__128_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, Settings_InGameSet_o* preset, const MethodInfo* method);
// 0x58a8000

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___CustomPresetNames_b__128_1
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,Settings_InGameSet_o *preset,
          MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_075452f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452f1 = '\x01';
  }
  if ((preset == (Settings_InGameSet_o *)0x0) ||
     (pSVar1 = (preset->fields).Name, pSVar1 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<CustomPresetNames>b__128_2
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___CustomPresetNames_b__128_2 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x58a8040

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___CustomPresetNames_b__128_2
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *name,
          MethodInfo *method)

{
  return name;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<RefreshSandbox>b__147_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___RefreshSandbox_b__147_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x58a8050

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___RefreshSandbox_b__147_0
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *value,
          MethodInfo *method)

{
  return value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<RebuildSandboxFields>b__148_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___RebuildSandboxFields_b__148_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_Collections_Generic_KeyValuePair_string__Dictionary_string__BaseSetting___o item, const MethodInfo* method);
// 0x58a8060

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___RebuildSandboxFields_b__148_0
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__Dictionary_string__BaseSetting___o item,
          MethodInfo *method)

{
  if (Il2CppMethodInitialized_075452f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_BaseSetting_get_Key
              );
    Il2CppMethodInitialized_075452f2 = '\x01';
  }
  return item.fields.key;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<AddDynamicFields>b__163_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AddDynamicFields_b__163_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_Collections_Generic_KeyValuePair_string__BaseSetting__o item, const MethodInfo* method);
// 0x58a8090

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___AddDynamicFields_b__163_0
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__BaseSetting__o item,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075452f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Key);
    Il2CppMethodInitialized_075452f3 = '\x01';
  }
  return item.fields.key;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<MetadataOptions>b__168_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___MetadataOptions_b__168_0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* item, const MethodInfo* method);
// 0x58a80c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___MetadataOptions_b__168_0
          (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *item,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (item == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__Trim(item,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<MetadataOptions>b__168_1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___MetadataOptions_b__168_1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o* __this, System_String_o* item, const MethodInfo* method);
// 0x58a80e0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c___MetadataOptions_b__168_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_o *__this,System_String_o *item,
               MethodInfo *method)

{
  if (item == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  return 0 < (item->fields)._stringLength;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass121_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0_o* __this, const MethodInfo* method);
// 0x58a8100

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass121_0$$<ToggleSandboxAddon>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0___ToggleSandboxAddon_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x58a8110

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0___ToggleSandboxAddon_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075452f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452f4 = '\x01';
  }
  if (item == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((item->fields)._value,(__this->fields).addonName,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass121_0$$<ToggleSandboxAddon>b__1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0___ToggleSandboxAddon_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x58a8160

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0___ToggleSandboxAddon_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075452f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452f5 = '\x01';
  }
  if (item == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality((item->fields)._value,(__this->fields).addonName,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass122_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0_o* __this, const MethodInfo* method);
// 0x58a81b0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass122_0$$<IsSandboxAddonSelected>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0___IsSandboxAddonSelected_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x58a81c0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0___IsSandboxAddonSelected_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  uint uVar1;
  System_String_o *a;
  System_String_array *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075452f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452f6 = '\x01';
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
      if ((uint)pSVar2->max_length <= uVar1) {
        ThrowIndexOutOfRangeException();
      }
      bVar3 = System_String__op_Equality(a,pSVar2->m_Items[(int)uVar1],(MethodInfo *)0x0);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass125_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0_o* __this, const MethodInfo* method);
// 0x58a8250

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass125_0$$<FieldOptions>b__2
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0___FieldOptions_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0_o* __this, System_String_o* name, int32_t index, const MethodInfo* method);
// 0x58a8260

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0___FieldOptions_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0_o *__this,
               System_String_o *name,int32_t index,MethodInfo *method)

{
  Settings_ExperienceRuleField_o *pSVar1;
  Settings_UIRule_o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Globalization_CultureInfo_o *provider;
  int32_t iStack_14;
  
  if (Il2CppMethodInitialized_075452f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    Il2CppMethodInitialized_075452f7 = '\x01';
  }
  pSVar1 = (__this->fields).field;
  if (pSVar1 != (Settings_ExperienceRuleField_o *)0x0) {
    bVar3 = System_String__Equals_52ffe30((pSVar1->fields).Id,"general.Weather",5,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).field;
    if (bVar3) {
      if ((pSVar1 != (Settings_ExperienceRuleField_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).Rule, pSVar2 != (Settings_UIRule_o *)0x0)) {
        bVar3 = Settings_UIRule__MatchesAllowedValues(pSVar2,name,(MethodInfo *)0x0);
        if (bVar3) {
          return true;
        }
        pSVar1 = (__this->fields).field;
        if ((pSVar1 != (Settings_ExperienceRuleField_o *)0x0) && (name != (System_String_o *)0x0)) {
          pSVar2 = (pSVar1->fields).Rule;
          pSVar4 = System_String__TrimEnd_53071b0(name,0x2a,(MethodInfo *)0x0);
          if (pSVar2 != (Settings_UIRule_o *)0x0) {
            bVar3 = Settings_UIRule__MatchesAllowedValues(pSVar2,pSVar4,(MethodInfo *)0x0);
            return bVar3;
          }
        }
      }
    }
    else if (pSVar1 != (Settings_ExperienceRuleField_o *)0x0) {
      pSVar2 = (pSVar1->fields).Rule;
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar4 = System_Int32__ToString_54b7520
                         (&iStack_14,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      if (pSVar2 != (Settings_UIRule_o *)0x0) {
        bVar3 = Settings_UIRule__MatchesAllowedValues(pSVar2,pSVar4,(MethodInfo *)0x0);
        return bVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass130_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0_o* __this, const MethodInfo* method);
// 0x58a8390

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass130_0$$<IsFavorite>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0___IsFavorite_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x58a83a0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0___IsFavorite_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  System_String_o *a;
  Map_Experience_o *experience;
  bool bVar1;
  System_String_o *b;
  
  if (Il2CppMethodInitialized_075452f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452f8 = '\x01';
  }
  if (item == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (item->fields)._value;
  experience = (__this->fields).experience;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  b = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperienceId(experience,(MethodInfo *)0x0);
  bVar1 = System_String__Equals_52ffe30(a,b,5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass131_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0_o* __this, const MethodInfo* method);
// 0x58a8420

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass131_0$$<IsFavoritePreset>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0___IsFavoritePreset_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x58a8430

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0___IsFavoritePreset_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075452f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452f9 = '\x01';
  }
  if (item == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Equals_52ffe30((item->fields)._value,(__this->fields).name,4,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass136_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0_o* __this, const MethodInfo* method);
// 0x58a8480

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass136_0$$<ToggleFavorite>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0___ToggleFavorite_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x58a8490

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0___ToggleFavorite_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075452fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452fa = '\x01';
  }
  if (item == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Equals_52ffe30
                    ((item->fields)._value,(__this->fields).id,(__this->fields).comparison,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass140_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0_o* __this, const MethodInfo* method);
// 0x58a84e0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass140_0$$<DeletePreset>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0___DeletePreset_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0_o* __this, Settings_InGameSet_o* candidate, const MethodInfo* method);
// 0x58a84f0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0___DeletePreset_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0_o *__this,
               Settings_InGameSet_o *candidate,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075452fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452fb = '\x01';
  }
  if ((candidate == (Settings_InGameSet_o *)0x0) ||
     (pSVar1 = (candidate->fields).Name, pSVar1 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = System_String__Equals_52ffe30((pSVar1->fields)._value,(__this->fields).name,4,(MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass140_0$$<DeletePreset>b__1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0___DeletePreset_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x58a8550

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0___DeletePreset_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0_o *__this,
               Settings_StringSetting_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075452fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452fc = '\x01';
  }
  if (item == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Equals_52ffe30((item->fields)._value,(__this->fields).name,4,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass93_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o* __this, const MethodInfo* method);
// 0x58a85a0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass93_0$$<ExperiencesIn>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0___ExperiencesIn_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x58a85b0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0___ExperiencesIn_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o *__this,
               Map_Experience_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (item == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Equals_52ffe30((item->fields).Category,(__this->fields).category,5,(MethodInfo *)0x0)
  ;
  if (bVar1) {
    bVar1 = System_String__Equals_52ffe30
                      ((item->fields).SubCategory,(__this->fields).subcategory,5,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass95_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0_o* __this, const MethodInfo* method);
// 0x58a8610

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass95_0$$<CategoryPreview>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0___CategoryPreview_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x58a8620

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0___CategoryPreview_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0_o *__this,
               Map_Experience_o *item,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (item == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = false;
  bVar1 = System_String__Equals_52ffe30((item->fields).Category,(__this->fields).category,5,(MethodInfo *)0x0)
  ;
  if (bVar1) {
    bVar2 = System_String__IsNullOrEmpty((item->fields).Preview,(MethodInfo *)0x0);
    bVar2 = !bVar2;
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass96_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0_o* __this, const MethodInfo* method);
// 0x58a8670

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass96_0$$<SubcategoryPreview>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0___SubcategoryPreview_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0_o* __this, Map_Experience_o* item, const MethodInfo* method);
// 0x58a8680
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a86cb: cmp byte ptr [rip + 0x1c9cc02], 0
// asm:   0x58a86d2: je 0x58a874c

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0___SubcategoryPreview_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0_o *__this,
               Map_Experience_o *item,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *a;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075452fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452fd = '\x01';
  }
  if (item == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (item->fields).Category;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar3 = false;
  bVar2 = System_String__Equals_52ffe30
                    (a,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Category_k__BackingField,5,(MethodInfo *)0x0);
  if (bVar2) {
    bVar3 = false;
    bVar2 = System_String__Equals_52ffe30
                      ((item->fields).SubCategory,(__this->fields).subcategory,5,(MethodInfo *)0x0);
    if (bVar2) {
      bVar3 = System_String__IsNullOrEmpty((item->fields).Preview,(MethodInfo *)0x0);
      bVar3 = !bVar3;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_LaunchContext
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_LaunchContext (const MethodInfo* method);
// 0x5897230

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_LaunchContext(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754524b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754524b = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
           _LaunchContext_k__BackingField;
  }
  return *(int32_t *)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x38
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_LaunchContext
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_LaunchContext (int32_t value, const MethodInfo* method);
// 0x58972a0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_LaunchContext(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754524c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754524c = '\x01';
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
// 0x58972f0

Settings_InGameSet_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Working(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754524d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754524d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  return *(Settings_InGameSet_o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x40
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Working
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Working (Settings_InGameSet_o* value, const MethodInfo* method);
// 0x5897360

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Working
               (Settings_InGameSet_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_0754524e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754524e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar1->_Working_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pGVar1->_Working_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Category
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Category (const MethodInfo* method);
// 0x58973c0

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Category(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754524f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754524f = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Category_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x48
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Category
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Category (System_String_o* value, const MethodInfo* method);
// 0x5897430

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Category(System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_07545250 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545250 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar1->_Category_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pGVar1->_Category_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Subcategory
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Subcategory (const MethodInfo* method);
// 0x5897490

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Subcategory(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545251 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545251 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Subcategory_k__BackingField
    ;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x50
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Subcategory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Subcategory (System_String_o* value, const MethodInfo* method);
// 0x5897500

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Subcategory(System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_07545252 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545252 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar1->_Subcategory_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pGVar1->_Subcategory_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Experience
// il2cpp: Map_Experience_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Experience (const MethodInfo* method);
// 0x5897560

Map_Experience_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Experience(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545253 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545253 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Experience_k__BackingField;
  }
  return *(Map_Experience_o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x58
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Experience
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Experience (Map_Experience_o* value, const MethodInfo* method);
// 0x58975d0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_Experience(Map_Experience_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_07545254 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545254 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar1->_Experience_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pGVar1->_Experience_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_RuleResult
// il2cpp: Settings_ExperienceRuleResult_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_RuleResult (const MethodInfo* method);
// 0x5897630

Settings_ExperienceRuleResult_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_RuleResult(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545255 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545255 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField;
  }
  return *(Settings_ExperienceRuleResult_o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x60
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_RuleResult
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_RuleResult (Settings_ExperienceRuleResult_o* value, const MethodInfo* method);
// 0x58976a0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_RuleResult
               (Settings_ExperienceRuleResult_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_07545256 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545256 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar1->_RuleResult_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pGVar1->_RuleResult_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_LoadError
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_LoadError (const MethodInfo* method);
// 0x5897700

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_LoadError(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545257 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545257 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_LoadError_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x68
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_LoadError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_LoadError (System_String_o* value, const MethodInfo* method);
// 0x5897770

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_LoadError(System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_07545258 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545258 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar1->_LoadError_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pGVar1->_LoadError_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxSection
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxSection (const MethodInfo* method);
// 0x58977d0

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxSection(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545259 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545259 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
           _SandboxSection_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x70
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_SandboxSection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_SandboxSection (System_String_o* value, const MethodInfo* method);
// 0x5897840

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_SandboxSection
               (System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_0754525a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754525a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar1->_SandboxSection_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pGVar1->_SandboxSection_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowRoomSettings
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowRoomSettings (const MethodInfo* method);
// 0x58978a0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowRoomSettings(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754525b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754525b = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
           _ShowRoomSettings_k__BackingField;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                + 0x78);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_ShowRoomSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_ShowRoomSettings (bool value, const MethodInfo* method);
// 0x5897910

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_ShowRoomSettings(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754525c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754525c = '\x01';
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
// 0x5897960

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowFavorites(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754525d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754525d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
           _ShowFavorites_k__BackingField;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                + 0x79);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_ShowFavorites
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_ShowFavorites (bool value, const MethodInfo* method);
// 0x58979d0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_ShowFavorites(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754525e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754525e = '\x01';
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
// 0x5897a20

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SelectedPresetName(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754525f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754525f = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
           _SelectedPresetName_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x80
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_SelectedPresetName
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_SelectedPresetName (System_String_o* value, const MethodInfo* method);
// 0x5897a90

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__set_SelectedPresetName
               (System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_07545260 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545260 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar1->_SelectedPresetName_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pGVar1->_SelectedPresetName_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowSandboxVariableNames
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowSandboxVariableNames (const MethodInfo* method);
// 0x5897af0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowSandboxVariableNames(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545261 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545261 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                + 0x21);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowLockedSettings
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowLockedSettings (const MethodInfo* method);
// 0x5897b60

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ShowLockedSettings(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545262 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545262 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                + 0x22);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_MapDescription
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_MapDescription (const MethodInfo* method);
// 0x58953b0

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_MapDescription(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_SandboxGameCreateConfiguration_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545263 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545263 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  }
  else {
    pSVar2 = *(Settings_SandboxGameCreateConfiguration_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              8);
  }
  if (pSVar2 == (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._MapDescription_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ModeDescription
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ModeDescription (const MethodInfo* method);
// 0x5895430
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589557d: jmp 0x58954b0

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ModeDescription(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *fallback;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar5;
  Settings_InGameSet_o *pSVar6;
  
  if (Il2CppMethodInitialized_07545264 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07545264 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589551d;
label_05895458:
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_05895465;
label_0589552f:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05895552;
label_05895475:
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pSVar6 = pGVar5->_Working_k__BackingField;
    if (pSVar6 != (Settings_InGameSet_o *)0x0) goto label_05895489;
label_0589556e:
    pSVar4 = (System_String_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05895458;
label_0589551d:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589552f;
label_05895465:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05895475;
label_05895552:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pSVar6 = pGVar5->_Working_k__BackingField;
    if (pSVar6 == (Settings_InGameSet_o *)0x0) goto label_0589556e;
label_05895489:
    pSVar2 = (pSVar6->fields).General;
    if ((pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_05895582;
    pSVar4 = (pSVar3->fields)._value;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  }
  if (pGVar5->SandboxConfiguration != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    fallback = Settings_SandboxGameCreateConfiguration__get_ModeDescription
                         (pGVar5->SandboxConfiguration,(MethodInfo *)0x0);
    pSVar4 = UI_ContentLocale__ModeDescription(pSVar4,fallback,(MethodInfo *)0x0);
    return pSVar4;
  }
label_05895582:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_IsSandbox
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox (const MethodInfo* method);
// 0x587a250
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587a26d: cmp byte ptr [rip + 0x1ccb059], 0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox(MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar2;
  Settings_InGameSet_o *pSVar3;
  
  if (Il2CppMethodInitialized_07545265 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545265 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pSVar3 = pGVar2->_Working_k__BackingField;
  }
  else {
    pGVar2 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields;
    pSVar3 = pGVar2->_Working_k__BackingField;
  }
  if (pSVar3 == (Settings_InGameSet_o *)0x0) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_configurationMode == 1;
  }
  return pGVar2->_configurationMode == 1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_IsMultiplayer
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsMultiplayer (const MethodInfo* method);
// 0x5897bd0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsMultiplayer(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545266 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545266 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                + 0x20);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_IsConfigured
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured (const MethodInfo* method);
// 0x588e120
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588e16e: cmp byte ptr [rip + 0x1cb7161], 0
// asm:   0x588e175: je 0x588e1a2

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_07545267 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545267 = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_00);
  if (bVar2) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_RuleResult_k__BackingField !=
         (Settings_ExperienceRuleResult_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_CanStart
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_CanStart (const MethodInfo* method);
// 0x588e1d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588e234: cmp byte ptr [rip + 0x1cb709b], 0
// asm:   0x588e23b: je 0x588e2dc

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_CanStart(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ExperienceRuleResult_o *result;
  bool bVar2;
  bool bVar3;
  Il2CppClass *pIVar4;
  
  if (Il2CppMethodInitialized_07545268 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    Il2CppMethodInitialized_07545268 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pIVar4 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pIVar4 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)pIVar4;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured((MethodInfo *)pIVar4);
    pIVar4 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured((MethodInfo *)pIVar4);
    pIVar4 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)pIVar4;
  if (bVar2) {
    if ((pIVar4->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar4);
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)pIVar4);
    bVar2 = true;
    if (!bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_075452d6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452d6 = '\x01';
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
                cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      result = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _RuleResult_k__BackingField;
      if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        bVar2 = Settings_ExperienceRuleEngine__Validate(result,(MethodInfo *)0x0);
        return bVar2;
      }
      bVar2 = Settings_ExperienceRuleEngine__Validate(result,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Experiences
// il2cpp: System_Collections_Generic_IReadOnlyList_Experience__o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Experiences (const MethodInfo* method);
// 0x5897c40

System_Collections_Generic_IReadOnlyList_Experience__o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_Experiences(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545269 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545269 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return (System_Collections_Generic_IReadOnlyList_Experience__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  }
  return *(System_Collections_Generic_IReadOnlyList_Experience__o **)
          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxFields
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgSandboxField__o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxFields (const MethodInfo* method);
// 0x5897cb0

System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxFields(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754526a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754526a = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return (System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  }
  return *(System_Collections_Generic_IReadOnlyList_AottgSandboxField__o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x10
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxSections
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxSections (const MethodInfo* method);
// 0x5897d20

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxSections(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754526b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754526b = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal;
  }
  return *(System_String_array **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x28
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxAddonNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxAddonNames (const MethodInfo* method);
// 0x5897d90

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SandboxAddonNames(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754526c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754526c = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
  }
  return *(System_String_array **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x18
          );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_MultiplayerFields
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgSandboxField__o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_MultiplayerFields (const MethodInfo* method);
// 0x58865c0

System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_MultiplayerFields(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *pSVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754526d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754526d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields((MethodInfo *)klass);
    return pSVar2;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields((MethodInfo *)klass);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SelectedVariant
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SelectedVariant (const MethodInfo* method);
// 0x5888df0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5888e15: cmp byte ptr [rip + 0x1cbc4b1], 0
// asm:   0x5888e1c: je 0x5888ecf
// asm:   0x5888e51: cmp byte ptr [rip + 0x1cbc475], 0
// asm:   0x5888e58: je 0x5888f38
// asm:   0x5888e82: jmp 0x5888f88

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SelectedVariant(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_0754526e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754526e = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar2 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields **)
               ((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xb8))->
             _Working_k__BackingField;
  }
  if (pSVar2 == (Settings_InGameSet_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if (pSVar2 != (Settings_InGameSet_o *)0x0) {
    pSVar3 = (pSVar2->fields).ExperienceVariant;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      return (pSVar3->fields)._value;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_VariantNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_VariantNames (const MethodInfo* method);
// 0x5888c20
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5888c41: cmp byte ptr [rip + 0x1cbc68e], 0
// asm:   0x5888c72: jmp 0x5888d51
// asm:   0x5888d27: cmp byte ptr [rip + 0x1cbc5a8], 0
// asm:   0x5888d2e: je 0x5888d71
// asm:   0x5888d4c: jmp 0x5888ddc

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_VariantNames(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ExperienceRuleResult_o *pSVar2;
  Settings_PresetDefinition_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_array *pSVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  
  if (Il2CppMethodInitialized_0754526f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754526f = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  else {
    pSVar2 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields **)
               ((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xb8))->
             _RuleResult_k__BackingField;
  }
  if (((pSVar2 == (Settings_ExperienceRuleResult_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Experience, pSVar3 == (Settings_PresetDefinition_o *)0x0)) ||
     ((pSVar3->fields).Variants == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0)) {
    pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar4;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_ExperienceRuleResult_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x60);
  }
  if (((pSVar2 == (Settings_ExperienceRuleResult_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Experience, pSVar3 == (Settings_PresetDefinition_o *)0x0)) ||
     (__this = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar3->fields).Variants,
     __this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  source = System_Collections_Generic_Dictionary_object__object___get_Keys
                     (__this,(MethodInfo_4AAD0F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Keys);
  pSVar4 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Begin
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__Begin (int32_t launchContext, bool multiplayer, const MethodInfo* method);
// 0x58987e0
// eh: try 0x5898f7f..0x5899575 -> pad 0x5899575 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x589958e..0x5899818 -> pad 0x5899818 (+1 call sites) cleanup
// eh: try 0x589981b..0x5899820 -> pad 0x5899828 catch (...) [compiler noexcept guard]
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5898c98: cmp byte ptr [rip + 0x1cac623], 0
// asm:   0x5898dec: jmp 0x58997f2
// asm:   0x5898ecc: jmp 0x5898cb4
// asm:   0x589900e: jmp 0x58997f2
// asm:   0x58990c0: jmp 0x58997f2
// asm:   0x5899159: jmp 0x58997f2
// asm:   0x58992ac: cmp byte ptr [rip + 0x1cac02d], 0
// asm:   0x58992b3: je 0x589953e
// asm:   0x589937e: jmp 0x58997f2
// asm:   0x5899429: jmp 0x58997f2
// asm:   0x58994bb: jmp 0x58997f2
// asm:   0x5899575: jmp 0x5899577
// asm:   0x5899577: mov rbx, rax
// asm:   0x589957a: cmp edx, 1
// asm:   0x589957d: jne 0x5899820
// asm:   0x5899583: mov rdi, rbx
// asm:   0x5899586: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x589958b: mov rbx, rax
// asm:   0x589958e: lea rdi, [rip + 0x19deb2b]  ; TypeInfo_System_Exception
// asm:   0x5899595: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x589959a: mov rcx, qword ptr [rbx]
// asm:   0x589959d: mov rsi, qword ptr [rcx]
// asm:   0x58995a0: mov rdi, rax
// asm:   0x58995a3: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x58995a8: test al, al
// asm:   0x58995aa: je 0x58997f7
// asm:   0x58995b0: mov rbx, qword ptr [rbx]
// asm:   0x58995b3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58995b8: test rbx, rbx
// asm:   0x58995bb: je 0x58997f2
// asm:   0x58995c1: mov rax, qword ptr [rbx]
// asm:   0x58995c4: mov rsi, qword ptr [rax + 0x190]
// asm:   0x58995cb: mov rdi, rbx
// asm:   0x58995ce: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x58995d4: mov rbx, rax
// asm:   0x58995d7: lea rdi, [rip + 0x19dbfc2]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
// asm:   0x58995de: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x58995e3: cmp dword ptr [rax + 0xe4], 0
// asm:   0x58995ea: jne 0x58995f4
// asm:   0x58995ec: mov rdi, rax
// asm:   0x58995ef: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x58995f4: mov rdi, rbx
// asm:   0x58995f7: xor esi, esi
// asm:   0x58995f9: call 0x58a7a20  ; il2cpp_runtime_helper_058a7a20()
// asm:   0x58995fe: mov rdi, qword ptr [r12]
// asm:   0x5899602: mov eax, dword ptr [rdi + 0xe4]
// asm:   0x5899608: cmp r14d, 2
// asm:   0x589960c: je 0x5898fe4
// asm:   0x589963c: jmp 0x58997f2
// asm:   0x58996e7: jmp 0x58997f2
// asm:   0x5899779: jmp 0x58997f2
// asm:   0x58997f7: mov edi, 8
// asm:   0x58997fc: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5899801: mov rcx, qword ptr [rbx]
// asm:   0x5899804: mov qword ptr [rax], rcx
// asm:   0x5899807: lea rsi, [rip + 0x1593cf2]
// asm:   0x589980e: mov rdi, rax
// asm:   0x5899811: xor edx, edx
// asm:   0x5899813: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5899818: mov rbx, rax
// asm:   0x589981b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5899820: mov rdi, rbx
// asm:   0x5899823: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5899828: mov rdi, rax
// asm:   0x589982b: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__Begin
               (int32_t launchContext,bool multiplayer,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  int32_t iVar3;
  void *pvVar4;
  System_Collections_Generic_List_AottgSandboxField__o *pSVar5;
  Settings_SandboxGameCreateConfiguration_o *__this;
  Settings_InGameSet_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  System_Collections_Generic_List_Experience__o *pSVar8;
  Settings_StringSetting_o *pSVar9;
  Il2CppObject *object;
  bool bVar10;
  System_String_array *pSVar11;
  Settings_InGameSet_o *__this_00;
  System_String_o *pSVar12;
  Settings_InGameSet_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar13;
  System_Collections_Generic_List_Experience__o *collection;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar14;
  System_Func_Experience__bool__o *__this_02;
  Map_Experience_o *experience;
  Il2CppClass *pIVar15;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07545270 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_71a84e8);
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
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Begin_b__85_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_07545270 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589891e;
label_05898811:
    if (g_data_075452df != '\0') goto label_0589881e;
label_05898930:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452df = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05898954;
label_0589882f:
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pGVar13->_LaunchContext_k__BackingField = launchContext;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05898811;
label_0589891e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452df == '\0') goto label_05898930;
label_0589881e:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589882f;
label_05898954:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pGVar13->_LaunchContext_k__BackingField = launchContext;
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar15);
      pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
      pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    }
  }
  pGVar13->_isMultiplayer = launchContext == 1 || multiplayer;
  if (Il2CppMethodInitialized_075452e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e0 = '\x01';
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  if ((pIVar15->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar15);
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  pGVar13 = pIVar15->static_fields;
  pGVar13->_Category_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar13->_Category_k__BackingField);
  if (Il2CppMethodInitialized_075452e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar13->_Subcategory_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar13->_Subcategory_k__BackingField);
  if (Il2CppMethodInitialized_075452e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar13->_Experience_k__BackingField = (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar13->_Experience_k__BackingField);
  if (Il2CppMethodInitialized_075452e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar13->_RuleResult_k__BackingField = (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar13->_RuleResult_k__BackingField);
  if (Il2CppMethodInitialized_075452e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar13->_LoadError_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar13->_LoadError_k__BackingField);
  pSVar12 = "General";
  if (Il2CppMethodInitialized_075452e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar13->_SandboxSection_k__BackingField = pSVar12;
  Il2CppCodeGenWriteBarrier(&pGVar13->_SandboxSection_k__BackingField);
  if (Il2CppMethodInitialized_075452e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e6 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05898e15;
label_05898b77:
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         false;
    if (Il2CppMethodInitialized_075452e7 != '\0') goto label_05898b8f;
label_05898e36:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e7 = '\x01';
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05898e56;
label_05898b9c:
    *(undefined1 *)((long)pIVar15->static_fields + 0x79) = 0;
    if (Il2CppMethodInitialized_075452e8 != '\0') goto label_05898bb4;
label_05898e77:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e8 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05898b77;
label_05898e15:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         false;
    if (Il2CppMethodInitialized_075452e7 == '\0') goto label_05898e36;
label_05898b8f:
    if ((pIVar15->_2).cctor_finished_or_no_cctor != 0) goto label_05898b9c;
label_05898e56:
    il2cpp_codegen_runtime_class_init(pIVar15);
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField =
         false;
    if (Il2CppMethodInitialized_075452e8 == '\0') goto label_05898e77;
label_05898bb4:
    uVar2 = (pIVar15->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar15);
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  pvVar4 = pIVar15->static_fields;
  *(undefined8 *)((long)pvVar4 + 0x80) = 0;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar4 + 0x80));
  pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar13->_showSandboxVariableNames = false;
  pGVar13->_showLockedSettings = false;
  pGVar13->_titanSpawnPresetCustom = false;
  pSVar5 = pGVar13->SandboxFieldsInternal;
  if (pSVar5 == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) goto label_058997f2;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar3 = (pSVar5->fields)._size;
  (pSVar5->fields)._size = 0;
  if (0 < iVar3) {
    System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar3,(MethodInfo *)0x0);
  }
  pSVar11 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar13->_sandboxAddonNames = pSVar11;
  Il2CppCodeGenWriteBarrier(&pGVar13->_sandboxAddonNames);
  __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  if (__this == (Settings_SandboxGameCreateConfiguration_o *)0x0) goto label_058997f2;
  Settings_SandboxGameCreateConfiguration__Reset(__this,(MethodInfo *)0x0);
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if (pSVar6 == (Settings_InGameSet_o *)0x0) {
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    Il2CppMethodInitialized_075452c2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(__this_00,(MethodInfo *)0x0);
  if (pSVar6 != (Settings_InGameSet_o *)0x0) {
    pSVar12 = (*(pSVar6->klass->vtable)._8_SerializeToJsonString.methodPtr)
                        (pSVar6,(pSVar6->klass->vtable)._8_SerializeToJsonString.method);
    if (__this_00 == (Settings_InGameSet_o *)0x0) goto label_058997f2;
    (*(__this_00->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this_00,pSVar12,(__this_00->klass->vtable)._9_DeserializeFromJsonString.method);
  }
  if (Il2CppMethodInitialized_075452c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    Il2CppMethodInitialized_075452c2 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(__this_01,(MethodInfo *)0x0);
  if (pSVar6 != (Settings_InGameSet_o *)0x0) {
    pSVar12 = (*(pSVar6->klass->vtable)._8_SerializeToJsonString.methodPtr)
                        (pSVar6,(pSVar6->klass->vtable)._8_SerializeToJsonString.method);
    if (__this_01 == (Settings_InGameSet_o *)0x0) goto label_058997f2;
    (*(__this_01->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this_01,pSVar12,(__this_01->klass->vtable)._9_DeserializeFromJsonString.method);
  }
  if (Il2CppMethodInitialized_075452e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar13->_Working_k__BackingField = __this_01;
  Il2CppCodeGenWriteBarrier(&pGVar13->_Working_k__BackingField);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05898ef5;
label_05898dd8:
    pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pSVar6 = pGVar13->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05898dd8;
label_05898ef5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pSVar6 = pGVar13->_Working_k__BackingField;
  }
  if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
     (pSVar7 = (pSVar6->fields).Sandbox, pSVar7 == (Settings_BoolSetting_o *)0x0)) goto label_058997f2;
  bVar10 = (pSVar7->fields)._value;
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  }
  pGVar13->_configurationMode = (uint)bVar10;
  pSVar8 = pGVar13->ExperiencesInternal;
  if (pSVar8 == (System_Collections_Generic_List_Experience__o *)0x0) goto label_058997f2;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar3 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar3) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__Init((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  collection = Map_BuiltinLevels__GetExperiences((MethodInfo *)0x0);
  if (pSVar8 == (System_Collections_Generic_List_Experience__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___AddRange
            ((System_Collections_Generic_List_object__o *)pSVar8,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_Experience_AddRange);
  uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  if (launchContext != 2) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589964f;
label_0589961f:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_0589962c;
label_0589966f:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    else {
      if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589961f;
label_0589964f:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589966f;
label_0589962c:
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
       (pSVar9 = (pSVar6->fields).ExperienceName, pSVar9 == (Settings_StringSetting_o *)0x0))
    goto label_058997f2;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    if (Il2CppMethodInitialized_075452cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589970c;
label_058996d7:
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_058996d7;
label_0589970c:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
       (pSVar9 = (pSVar6->fields).ExperienceVariant, pSVar9 == (Settings_StringSetting_o *)0x0))
    goto label_058997f2;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    if (Il2CppMethodInitialized_075452cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589979b;
label_05899769:
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_05899769;
label_0589979b:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    if ((pSVar6 != (Settings_InGameSet_o *)0x0) &&
       (pSVar7 = (pSVar6->fields).Sandbox, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar7,false,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_configurationMode = 0;
      return;
    }
    goto label_058997f2;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_05899021;
label_05898ff1:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05898ffe;
label_05899041:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_05898ff1;
label_05899021:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05899041;
label_05898ffe:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)pIVar15;
  if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
     (pSVar7 = (pSVar6->fields).Sandbox, pSVar7 == (Settings_BoolSetting_o *)0x0)) goto label_058997f2;
  uVar2 = (pIVar15->_2).cctor_finished_or_no_cctor;
  if ((pSVar7->fields)._value != false) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar15);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox((MethodInfo *)pIVar15);
    return;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar15);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058990d3;
label_058990a3:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058990b0;
label_058990f3:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058990a3;
label_058990d3:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058990f3;
label_058990b0:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
     (pSVar7 = (pSVar6->fields).Sandbox, pSVar7 == (Settings_BoolSetting_o *)0x0)) goto label_058997f2;
  if ((pSVar7->fields)._value == false) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589916c;
label_0589913c:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_05899149;
label_0589918c:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    else {
      if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589913c;
label_0589916c:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589918c;
label_05899149:
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
       (pSVar9 = (pSVar6->fields).ExperienceName, pSVar9 == (Settings_StringSetting_o *)0x0))
    goto label_058997f2;
    bVar10 = System_String__IsNullOrEmpty((pSVar9->fields)._value,(MethodInfo *)0x0);
    if (!bVar10) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      }
      pGVar14 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
      __this_02 = pGVar14->__9__85_0;
      if (__this_02 == (System_Func_Experience__bool__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
          pGVar14 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
        }
        object = (Il2CppObject *)pGVar14->__9;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
        System_Func_object__bool____ctor
                  ((System_Func_object__bool__o *)__this_02,object,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Begin_b__85_0,
                   (MethodInfo_4F19300 *)0x0);
        pGVar14 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
        pGVar14->__9__85_0 = __this_02;
        Il2CppCodeGenWriteBarrier(&pGVar14->__9__85_0);
      }
      experience = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                              (System_Func_TSource__bool__o *)__this_02,
                              (MethodInfo_34ED9E0 *)
                              MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_71a84e8);
      if (experience != (Map_Experience_o *)0x0) {
        pSVar12 = (experience->fields).Category;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_075452e0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452e0 = '\x01';
          uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
                  cctor_finished_or_no_cctor;
        }
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
        pGVar13->_Category_k__BackingField = pSVar12;
        Il2CppCodeGenWriteBarrier(&pGVar13->_Category_k__BackingField);
        pSVar12 = (experience->fields).SubCategory;
        if (Il2CppMethodInitialized_075452e1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452e1 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pGVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
        pGVar13->_Subcategory_k__BackingField = pSVar12;
        Il2CppCodeGenWriteBarrier(&pGVar13->_Subcategory_k__BackingField);
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
                  (experience,__this_00,(System_String_o *)0x0,false,in_R8);
        return;
      }
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_05899391;
label_05899361:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589936e;
label_058993b1:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_05899361;
label_05899391:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058993b1;
label_0589936e:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
     (pSVar9 = (pSVar6->fields).ExperienceName, pSVar9 == (Settings_StringSetting_o *)0x0)) goto label_058997f2;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589944e;
label_05899419:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05899419;
label_0589944e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
     (pSVar9 = (pSVar6->fields).ExperienceVariant, pSVar9 == (Settings_StringSetting_o *)0x0))
  goto label_058997f2;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058994e0;
label_058994ab:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058994ab;
label_058994e0:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar6 != (Settings_InGameSet_o *)0x0) &&
     (pSVar7 = (pSVar6->fields).Sandbox, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)pSVar7,false,
               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    return;
  }
label_058997f2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SaveForNextRound
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SaveForNextRound (const MethodInfo* method);
// 0x589b580
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589b5a0: cmp byte ptr [rip + 0x1ca9d26], 0
// asm:   0x589b5c3: jmp 0x589b6c4
// asm:   0x589b674: cmp byte ptr [rip + 0x1ca9c52], 0
// asm:   0x589b67b: je 0x589b6da
// asm:   0x589b689: test rbx, rbx
// asm:   0x589b68c: je 0x589b706

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SaveForNextRound(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  bool bVar3;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545271 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545271 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    pSVar2 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (pSVar2 != (Settings_InGameSet_o *)0x0) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_CanStart((MethodInfo *)klass);
    }
    else {
      bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_CanStart((MethodInfo *)klass);
    }
    if (bVar3) {
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_075452cd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452cd = '\x01';
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
                cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (pSVar2 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pSVar2->klass->vtable)._10_Copy.methodPtr)
                (pSVar2,*(Settings_BaseSetting_o **)
                         ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->
                                static_fields + 0x40),(pSVar2->klass->vtable)._10_Copy.method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CacheExperiencePreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreview (System_String_o* previewPath, const MethodInfo* method);
// 0x589b710

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreview
               (System_String_o *previewPath,MethodInfo *method)

{
  uint uVar1;
  System_String_o *previewPath_00;
  bool bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  MethodInfo *method_00;
  UnityEngine_Sprite_o *local_28;
  
  if (Il2CppMethodInitialized_07545272 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    Il2CppMethodInitialized_07545272 = '\x01';
  }
  local_28 = (UnityEngine_Sprite_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(previewPath,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    bVar2 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
                      (previewPath,&local_28,(MethodInfo *)0x0);
    if (!bVar2) {
      if (previewPath != (System_String_o *)0x0) {
        method_00 = (MethodInfo *)0x7c;
        pSVar3 = System_String__Split(previewPath,0x7c,0,(MethodInfo *)0x0);
        if (pSVar3 != (System_String_array *)0x0) {
          if ((int)pSVar3->max_length < 1) {
            return;
          }
          uVar4 = pSVar3->max_length & 0xffffffff;
          uVar5 = 0;
          do {
            if (uVar4 <= uVar5) {
              ThrowIndexOutOfRangeException();
            }
            previewPath_00 = pSVar3->m_Items[uVar5];
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__CachePreviewSprite(previewPath_00,method_00);
            uVar5 = uVar5 + 1;
            uVar1 = (uint)pSVar3->max_length;
            uVar4 = (ulong)uVar1;
          } while ((long)uVar5 < (long)(int)uVar1);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CachePreviewSprite
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CachePreviewSprite (System_String_o* previewPath, const MethodInfo* method);
// 0x589b810

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CachePreviewSprite
               (System_String_o *previewPath,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Sprite_o *sprite;
  System_String_o *path;
  UnityEngine_Sprite_o *local_30;
  
  if (Il2CppMethodInitialized_07545273 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07545273 = '\x01';
  }
  local_30 = (UnityEngine_Sprite_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(previewPath,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    bVar2 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
                      (previewPath,&local_30,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = System_String__Concat_52f0320
                         (TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps,"/",
                          (MethodInfo *)0x0);
      if (previewPath == (System_String_o *)0x0) {
label_0589ba3b:
        ThrowNullReferenceException();
      }
      bVar2 = System_String__StartsWith_53002b0(previewPath,pSVar5,4,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        if (pSVar5 == (System_String_o *)0x0) goto label_0589ba3b;
        path = TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps;
        pSVar5 = System_String__Substring(previewPath,(pSVar5->fields)._stringLength,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
      }
      else {
        path = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pSVar5 = previewPath;
      }
      texture = (UnityEngine_Texture2D_o *)
                ApplicationManagers_ResourceManager__LoadAsset(path,pSVar5,false,false,(MethodInfo *)0x0);
      if ((texture != (UnityEngine_Texture2D_o *)0x0) && (texture->klass == TypeInfo_UnityEngine_Texture2D)) {
        iVar3 = (*(TypeInfo_UnityEngine_Texture2D->vtable)._5_get_width.methodPtr)
                          (texture,(TypeInfo_UnityEngine_Texture2D->vtable)._5_get_width.method);
        iVar4 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                          (texture,(texture->klass->vtable)._7_get_height.method);
        auVar1._4_4_ = (float)iVar4;
        auVar1._0_4_ = (float)iVar3;
        auVar1._8_8_ = 0;
        sprite = UnityEngine_Sprite__Create_68ba7d0
                           (texture,(UnityEngine_Rect_o)(auVar1 << 0x40),
                            (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
        }
        Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store(previewPath,sprite,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CacheExperiencePreviews
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreviews (System_Collections_Generic_IEnumerable_Experience__o* experiences, const MethodInfo* method);
// 0x587d770
// eh: try 0x587d8b0..0x587d9de -> pad 0x587d9de (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x587da02..0x587da07 -> pad 0x587da91 cleanup
// eh: try 0x587da94..0x587da9e -> pad 0x587daa6 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587d829: nop dword ptr [rax]
// asm:   0x587d88e: lea r15, [rip + 0x19fbb63]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x587d895: xor r14d, r14d
// asm:   0x587d898: lea r12, [rip + 0x19f36c1]  ; TypeInfo_System_Collections_Generic_IEnumerator_Experience
// asm:   0x587d89f: lea r13, [rip + 0x19f7cfa]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
// asm:   0x587d8a6: jmp 0x587d8c6
// asm:   0x587d8b8: mov rbx, qword ptr [rsp + 8]
// asm:   0x587d8bd: test rbx, rbx
// asm:   0x587d8c0: je 0x587d9d4
// asm:   0x587d9de: jmp 0x587d9e6
// asm:   0x587d9e0: jmp 0x587d9e6
// asm:   0x587d9e2: jmp 0x587d9e6
// asm:   0x587d9e4: jmp 0x587d9e6
// asm:   0x587d9e6: mov rbx, rax
// asm:   0x587d9e9: cmp edx, 1
// asm:   0x587d9ec: jne 0x587da94
// asm:   0x587d9f2: mov rdi, rbx
// asm:   0x587d9f5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x587d9fa: mov r14, qword ptr [rax]
// asm:   0x587d9fd: mov qword ptr [rsp + 0x10], r14
// asm:   0x587da02: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x587da89: mov rdi, r14
// asm:   0x587da8c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x587da91: mov rbx, rax
// asm:   0x587da94: lea rdi, [rsp + 0x10]
// asm:   0x587da99: call 0x2fcf890  ; il2cpp_runtime_helper_02fcf890()
// asm:   0x587da9e: mov rdi, rbx
// asm:   0x587daa1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x587daa6: mov rdi, rax
// asm:   0x587daa9: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreviews
               (System_Collections_Generic_IEnumerable_Experience__o *experiences,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_Experience__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppClass *pIVar3;
  char cVar4;
  VirtualInvokeData *pVVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  ulong uVar8;
  MethodInfo *method_00;
  long lVar9;
  Il2CppObject *local_40;
  undefined8 local_38;
  Il2CppObject **local_30;
  
  if (Il2CppMethodInitialized_07545274 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_07545274 = '\x01';
  }
  if (experiences == (System_Collections_Generic_IEnumerable_Experience__o *)0x0) {
    return;
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__ResolveExperiencePreviews(experiences,(MethodInfo *)0x0);
  pSVar1 = experiences->klass;
  uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar9 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_Experience__c **)((long)&pIVar2->interfaceType + lVar9) ==
          TypeInfo_System_Collections_Generic_IEnumerable_Experience) {
        pVVar5 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
        goto label_0587d861;
      }
      lVar9 = lVar9 + 0x10;
    } while (uVar8 * 0x10 != lVar9);
  }
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)experiences,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_Experience,0);
label_0587d861:
  pIVar6 = (*pVVar5->methodPtr)((Il2CppObject *)experiences,pVVar5->method);
  local_38 = 0;
  local_30 = &local_40;
  do {
    local_40 = pIVar6;
    if (pIVar6 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar6->klass;
    uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar9) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar5 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_0587d923;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0587d923:
    cVar4 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    pIVar6 = local_40;
    if (cVar4 == '\0') {
      if (local_40 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar3 = local_40->klass;
      uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar8 == 0) goto label_0587da4f;
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar9 = 0;
      break;
    }
    if (local_40 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_40->klass;
    uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_Experience__c **)((long)&pIVar2->interfaceType + lVar9)
            == TypeInfo_System_Collections_Generic_IEnumerator_Experience) {
          pVVar5 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_0587d9a3;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_40,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_Experience,0);
label_0587d9a3:
    method_00 = pVVar5->method;
    pIVar7 = (*pVVar5->methodPtr)(pIVar6,method_00);
    pIVar6 = local_40;
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar7[3].klass;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreview
                ((System_String_o *)pIVar3,method_00);
      pIVar6 = local_40;
    }
  } while( true );
  while (lVar9 = lVar9 + 0x10, uVar8 * 0x10 != lVar9) {
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
      pVVar5 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar9);
      goto label_0587da6d;
    }
  }
label_0587da4f:
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(local_40,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0587da6d:
  (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Categories
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__Categories (const MethodInfo* method);
// 0x587c850
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587c95d: jmp 0x587c978
// asm:   0x587ca0d: jmp 0x587ca28
// asm:   0x587cab3: cmp byte ptr [rip + 0x1cc5dcc], 0
// asm:   0x587caba: je 0x587cb21
// asm:   0x587cb11: jmp 0x587cb5b
// asm:   0x587cb40: jmp 0x587cac8

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__Categories(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_Experience__o *source;
  Il2CppObject *pIVar2;
  System_Func_Experience__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar4;
  System_Func_string__int__o *__this_01;
  System_Linq_IOrderedEnumerable_TSource__o *source_01;
  System_String_array *pSVar5;
  
  if (Il2CppMethodInitialized_07545275 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_Experience_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__90_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__90_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__90_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_07545275 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this = pGVar4->__9__90_0;
  }
  else {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this = pGVar4->__9__90_0;
  }
  if (__this == (System_Func_Experience__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar4->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__90_0,
               (MethodInfo_4F19B50 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar4->__9__90_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__90_0);
  }
  source_00 = System_Linq_Enumerable__Select_object__object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)__this,
                         (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_Experience_string);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = pGVar4->__9__90_1;
  }
  else {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = pGVar4->__9__90_1;
  }
  if (__this_00 == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar4->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__90_1,
               (MethodInfo_4F19300 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar4->__9__90_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__90_1);
  }
  pSVar3 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
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
  pSVar3 = System_Linq_Enumerable__Distinct_object__34e8be0
                     (pSVar3,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34E8BE0 *)MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_01 = pGVar4->__9__90_2;
  }
  else {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_01 = pGVar4->__9__90_2;
  }
  if (__this_01 == (System_Func_string__int__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar4->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_int);
    System_Func_object__int____ctor
              ((System_Func_object__int__o *)__this_01,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__90_2,
               (MethodInfo_4F198F0 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar4->__9__90_2 = __this_01;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__90_2);
  }
  source_01 = System_Linq_Enumerable__OrderBy_object__int_
                        (pSVar3,(System_Func_TSource__TKey__o *)__this_01,
                         (MethodInfo_34F1DD0 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_int);
  pSVar5 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Subcategories
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories (const MethodInfo* method);
// 0x587ce00
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587cf0d: jmp 0x587cf28
// asm:   0x587cfbd: jmp 0x587cfd8
// asm:   0x587d06d: jmp 0x587d088
// asm:   0x587d113: cmp byte ptr [rip + 0x1cc576c], 0
// asm:   0x587d11a: je 0x587d178
// asm:   0x587d197: jmp 0x587d128

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_Experience__o *source;
  Il2CppObject *pIVar2;
  System_Func_Experience__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_Func_Experience__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar4;
  System_Func_string__bool__o *__this_01;
  System_String_array *pSVar5;
  
  if (Il2CppMethodInitialized_07545276 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_Experience_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__91_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__91_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__91_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_07545276 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this = pGVar4->__9__91_0;
  }
  else {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this = pGVar4->__9__91_0;
  }
  if (__this == (System_Func_Experience__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar4->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__91_0,
               (MethodInfo_4F19300 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar4->__9__91_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__91_0);
  }
  pSVar3 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_Experience);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = pGVar4->__9__91_1;
  }
  else {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = pGVar4->__9__91_1;
  }
  if (__this_00 == (System_Func_Experience__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar4->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_00,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__91_1,
               (MethodInfo_4F19B50 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar4->__9__91_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__91_1);
  }
  source_00 = System_Linq_Enumerable__Select_object__object_
                        (pSVar3,(System_Func_TSource__TResult__o *)__this_00,
                         (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_Experience_string);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_01 = pGVar4->__9__91_2;
  }
  else {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_01 = pGVar4->__9__91_2;
  }
  if (__this_01 == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar4->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_01,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__91_2,
               (MethodInfo_4F19300 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar4->__9__91_2 = __this_01;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__91_2);
  }
  pSVar3 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__bool__o *)__this_01,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
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
  pSVar3 = System_Linq_Enumerable__Distinct_object__34e8be0
                     (pSVar3,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34E8BE0 *)MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
  pSVar5 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (pSVar3,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CurrentExperiences
// il2cpp: Map_Experience_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__CurrentExperiences (const MethodInfo* method);
// 0x587dcf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587dd14: cmp byte ptr [rip + 0x1cc75b9], 0

Map_Experience_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__CurrentExperiences(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *category;
  Map_Experience_array *pMVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  
  if (Il2CppMethodInitialized_07545277 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545277 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    in_RDX = extraout_RDX_00;
  }
  if (Il2CppMethodInitialized_075452d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX_01;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    category = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _Category_k__BackingField;
    in_RDX = extraout_RDX_02;
  }
  else {
    category = *(System_String_o **)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                + 0x48);
  }
  if (Il2CppMethodInitialized_075452d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d3 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX_03;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    in_RDX = extraout_RDX_04;
  }
  pMVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn
                     (category,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                               _Subcategory_k__BackingField,in_RDX);
  return pMVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ExperiencesIn
// il2cpp: Map_Experience_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn (System_String_o* category, System_String_o* subcategory, const MethodInfo* method);
// 0x587d640

Map_Experience_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn
          (System_String_o *category,System_String_o *subcategory,MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o *__this;
  System_Func_Experience__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Map_Experience_array *pMVar1;
  
  if (Il2CppMethodInitialized_07545278 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass93_0_ExperiencesIn_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass93_0);
    Il2CppMethodInitialized_07545278 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass93_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass93_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).category = category;
  Il2CppCodeGenWriteBarrier(&(__this->fields).category);
  (__this->fields).subcategory = subcategory;
  Il2CppCodeGenWriteBarrier(&(__this->fields).subcategory);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass93_0_ExperiencesIn_b__0,
             (MethodInfo_4F19300 *)0x0);
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_Experience);
  pMVar1 = (Map_Experience_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source_00,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_Experience);
  return pMVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SingleExperience
// il2cpp: Map_Experience_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__SingleExperience (System_String_o* category, System_String_o* subcategory, const MethodInfo* method);
// 0x589ba40

Map_Experience_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__SingleExperience
          (System_String_o *category,System_String_o *subcategory,MethodInfo *method)

{
  Map_Experience_array *pMVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07545279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545279 = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    method = extraout_RDX_00;
  }
  pMVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn(category,subcategory,method);
  if (pMVar1 == (Map_Experience_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pMVar1->max_length == 1) {
    return pMVar1->m_Items[0];
  }
  return (Map_Experience_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CategoryPreview
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__CategoryPreview (System_String_o* category, const MethodInfo* method);
// 0x589bab0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__CategoryPreview(System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0_o *__this;
  System_Func_Experience__bool__o *__this_00;
  Map_Experience_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754527a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_71a84e8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass95_0_CategoryPreview_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass95_0);
    Il2CppMethodInitialized_0754527a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass95_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass95_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).category = category;
  Il2CppCodeGenWriteBarrier(&(__this->fields).category);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
  pSVar2 = (System_String_o *)0x0;
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass95_0_CategoryPreview_b__0
             ,(MethodInfo_4F19300 *)0x0);
  pMVar1 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_34ED9E0 *)
                      MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_71a84e8);
  if (pMVar1 != (Map_Experience_o *)0x0) {
    pSVar2 = (pMVar1->fields).Preview;
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SubcategoryPreview
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__SubcategoryPreview (System_String_o* subcategory, const MethodInfo* method);
// 0x589bbd0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__SubcategoryPreview
          (System_String_o *subcategory,MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0_o *__this;
  System_Func_Experience__bool__o *__this_00;
  Map_Experience_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754527b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_71a84e8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass96_0_SubcategoryPreview_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass96_0);
    Il2CppMethodInitialized_0754527b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass96_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass96_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).subcategory = subcategory;
  Il2CppCodeGenWriteBarrier(&(__this->fields).subcategory);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
  pSVar2 = (System_String_o *)0x0;
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass96_0_SubcategoryPreview_b__0
             ,(MethodInfo_4F19300 *)0x0);
  pMVar1 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_34ED9E0 *)
                      MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience_71a84e8);
  if (pMVar1 != (Map_Experience_o *)0x0) {
    pSVar2 = (pMVar1->fields).Preview;
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$VisibleFields
// il2cpp: Settings_ExperienceRuleField_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields (const MethodInfo* method);
// 0x5889360
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588938c: cmp byte ptr [rip + 0x1cbbf43], 0
// asm:   0x5889393: je 0x58894b2
// asm:   0x58893c8: cmp byte ptr [rip + 0x1cbbf07], 0
// asm:   0x58893cf: je 0x588951d
// asm:   0x5889429: jmp 0x588957a

Settings_ExperienceRuleField_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ExperienceRuleResult_o *pSVar2;
  System_Collections_Generic_List_ExperienceRuleField__o *source;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar3;
  System_Func_ExperienceRuleField__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Settings_ExperienceRuleField_array *pSVar4;
  
  if (Il2CppMethodInitialized_0754527c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_ExperienceRuleField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleField_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ExperienceRuleField_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_VisibleFields_b__97_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_0754527c = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  else {
    pSVar2 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields **)
               ((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xb8))->
             _RuleResult_k__BackingField;
  }
  if (pSVar2 == (Settings_ExperienceRuleResult_o *)0x0) {
    pSVar4 = (Settings_ExperienceRuleField_array *)SZArrayNew(TypeInfo_Settings_ExperienceRuleField_array,0);
    return pSVar4;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_ExperienceRuleResult_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x60);
  }
  if (pSVar2 == (Settings_ExperienceRuleResult_o *)0x0) {
    ThrowNullReferenceException();
  }
  source = (pSVar2->fields).Fields;
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this = pGVar3->__9__97_0;
  }
  else {
    pGVar3 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->static_fields;
    __this = pGVar3->__9__97_0;
  }
  if (__this == (System_Func_ExperienceRuleField__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    object = (Il2CppObject *)pGVar3->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ExperienceRuleField_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_VisibleFields_b__97_0,
               (MethodInfo_4F19300 *)0x0);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar3->__9__97_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar3->__9__97_0);
  }
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
  pSVar4 = (Settings_ExperienceRuleField_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source_00,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_ExperienceRuleField);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$LockedFields
// il2cpp: Settings_ExperienceRuleField_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__LockedFields (const MethodInfo* method);
// 0x5887200
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588722c: cmp byte ptr [rip + 0x1cbe0a3], 0
// asm:   0x5887233: je 0x5887352
// asm:   0x5887268: cmp byte ptr [rip + 0x1cbe067], 0
// asm:   0x588726f: je 0x58873bd
// asm:   0x58872c9: jmp 0x588741a

Settings_ExperienceRuleField_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__LockedFields(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ExperienceRuleResult_o *pSVar2;
  System_Collections_Generic_List_ExperienceRuleField__o *source;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar3;
  System_Func_ExperienceRuleField__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Settings_ExperienceRuleField_array *pSVar4;
  
  if (Il2CppMethodInitialized_0754527d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_ExperienceRuleField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleField_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ExperienceRuleField_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_LockedFields_b__98_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_0754527d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  else {
    pSVar2 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields **)
               ((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xb8))->
             _RuleResult_k__BackingField;
  }
  if (pSVar2 == (Settings_ExperienceRuleResult_o *)0x0) {
    pSVar4 = (Settings_ExperienceRuleField_array *)SZArrayNew(TypeInfo_Settings_ExperienceRuleField_array,0);
    return pSVar4;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_ExperienceRuleResult_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x60);
  }
  if (pSVar2 == (Settings_ExperienceRuleResult_o *)0x0) {
    ThrowNullReferenceException();
  }
  source = (pSVar2->fields).Fields;
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this = pGVar3->__9__98_0;
  }
  else {
    pGVar3 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->static_fields;
    __this = pGVar3->__9__98_0;
  }
  if (__this == (System_Func_ExperienceRuleField__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    object = (Il2CppObject *)pGVar3->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ExperienceRuleField_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_LockedFields_b__98_0,
               (MethodInfo_4F19300 *)0x0);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar3->__9__98_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar3->__9__98_0);
  }
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
  pSVar4 = (Settings_ExperienceRuleField_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source_00,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_ExperienceRuleField);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ChangeField
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeField (int32_t index, System_String_o* value, const MethodInfo* method);
// 0x589bcf0
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589be1a: jmp 0x589bf1d
// asm:   0x589c087: lea rcx, [rip + 0x1a02d2a]  ; MethodInfo_Settings_TypedSetting_int_set_Value
// asm:   0x589c08e: mov rdx, qword ptr [rcx]
// asm:   0x589c091: mov rdi, r15
// asm:   0x589c094: mov esi, eax
// asm:   0x589c096: jmp 0x589c120
// asm:   0x589c113: lea rax, [rip + 0x1a02c9e]  ; MethodInfo_Settings_TypedSetting_int_set_Value
// asm:   0x589c11a: mov rdx, qword ptr [rax]
// asm:   0x589c11d: mov rdi, r15
// asm:   0x589c179: jmp 0x589c361
// asm:   0x589c1fa: jmp 0x589c361
// asm:   0x589c2fb: test rbx, rbx
// asm:   0x589c2fe: je 0x589c361
// asm:   0x589c300: mov rax, qword ptr [rdi + 0xb8]
// asm:   0x589c307: mov rsi, qword ptr [rax + 0x40]
// asm:   0x589c30b: mov rdi, rbx
// asm:   0x589c30e: xor edx, edx
// asm:   0x589c310: call 0x5b3f830  ; Settings_SandboxGameCreateConfiguration__RefreshDescriptions()
// asm:   0x589c315: mov bpl, 1
// asm:   0x589c318: jmp 0x589bf1f

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeField
               (int32_t index,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint32_t uVar4;
  Settings_ExperienceRuleField_o *pSVar5;
  Settings_TypedSetting_T__o *__this;
  Settings_TypedSetting_T__c *pSVar6;
  Settings_WeatherSettings_o *__this_00;
  Settings_InGameSet_o *pSVar7;
  Settings_InGameGeneralSettings_o *pSVar8;
  Settings_StringSetting_o *__this_01;
  Settings_StringSetting_o *pSVar9;
  bool bVar10;
  int32_t value_00;
  Settings_ExperienceRuleField_array *pSVar11;
  System_Globalization_CultureInfo_o *pSVar12;
  System_String_o *pSVar13;
  Settings_SandboxGameCreateConfiguration_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  float fVar14;
  double dVar15;
  bool local_39;
  float local_38;
  float local_34;
  int32_t local_30;
  float local_2c;
  
  if (Il2CppMethodInitialized_0754527e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_0754527e = '\x01';
  }
  local_39 = false;
  local_30 = 0;
  local_34 = 0.0;
  local_38 = 0.0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)method_00);
  }
  else {
    pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields
                        ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (index < 0) {
    return false;
  }
  if (pSVar11 == (Settings_ExperienceRuleField_array *)0x0) goto label_0589c361;
  uVar3 = (uint)pSVar11->max_length;
  if ((int)uVar3 <= index) {
    return false;
  }
  if (uVar3 <= (uint)index) {
    ThrowIndexOutOfRangeException();
  }
  pSVar5 = pSVar11->m_Items[(uint)index];
  if (pSVar5 == (Settings_ExperienceRuleField_o *)0x0) goto label_0589c361;
  if ((pSVar5->fields).Editable == false) {
    return false;
  }
  __this = (Settings_TypedSetting_T__o *)(pSVar5->fields).Setting;
  if (__this == (Settings_TypedSetting_T__o *)0x0) {
    return false;
  }
  pSVar6 = __this->klass;
  bVar1 = (pSVar6->_2).typeHierarchyDepth;
  bVar2 = (((Il2CppClass *)TypeInfo_Settings_StringSetting)->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
    bVar2 = (((Il2CppClass *)TypeInfo_Settings_BoolSetting)->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar2 = (((Il2CppClass *)TypeInfo_Settings_IntSetting)->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar2 = (((Il2CppClass *)TypeInfo_Settings_FloatSetting)->_2).typeHierarchyDepth;
        if (bVar1 < bVar2) {
          return false;
        }
        if ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting) {
          return false;
        }
        if ((((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo)->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar12 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar10 = System_Single__TryParse_54d11a0
                           (value,0xa7,(System_IFormatProvider_o *)pSVar12,&local_38,(MethodInfo *)0x0);
        if (!bVar10) {
          return false;
        }
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)__this,local_38,
                   (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      }
      else {
        pSVar13 = (pSVar5->fields).Id;
        if ((((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar10 = Settings_ExperienceRuleEngine__TryParseValueName(pSVar13,value,&local_30,(MethodInfo *)0x0);
        if (bVar10) {
          value_00 = local_30;
        }
        else {
          bVar10 = Settings_WeatherSettings__IsWeatherSetting((pSVar5->fields).Id,(MethodInfo *)0x0);
          if ((!bVar10) ||
             (__this_00 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings,
             __this_00 == (Settings_WeatherSettings_o *)0x0)) {
            if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
            }
            pSVar12 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            bVar10 = System_Single__TryParse_54d11a0
                               (value,0xa7,(System_IFormatProvider_o *)pSVar12,&local_34,(MethodInfo *)0x0);
            if (!bVar10) {
              return false;
            }
            fVar14 = local_34;
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              local_2c = local_34;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              fVar14 = local_2c;
            }
            dVar15 = (double)il2cpp_runtime_helper_02fb2080((double)fVar14);
            value_00 = (int32_t)dVar15;
          }
          else {
            value_00 = Settings_WeatherSettings__FindWeatherIndex(__this_00,value,(MethodInfo *)0x0);
            if (value_00 < 0) {
              return false;
            }
          }
        }
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this,value_00,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      }
    }
    else {
      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075566f0);
      }
      bVar10 = System_Boolean__TryParse(value,&local_39,(MethodInfo *)0x0);
      if (!bVar10) {
        return false;
      }
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this,local_39,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    }
  }
  else {
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    Settings_TypedSetting_object___set_Value
              (__this,(Il2CppObject *)value,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  bVar10 = System_String__Equals_52ffe30((pSVar5->fields).Id,"general.MapName",5,(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589c15d;
label_0589c18c:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_0589c169;
label_0589c1ab:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    else {
      if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589c18c;
label_0589c15d:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589c1ab;
label_0589c169:
      pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    if ((pSVar7 == (Settings_InGameSet_o *)0x0) ||
       (pSVar8 = (pSVar7->fields).General, pSVar8 == (Settings_InGameGeneralSettings_o *)0x0))
    goto label_0589c361;
    __this_01 = (pSVar8->fields).MapCategory;
    if (Il2CppMethodInitialized_075452cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_0589c1ea;
label_0589c21a:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589c21a;
label_0589c1ea:
      pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    if (((pSVar7 == (Settings_InGameSet_o *)0x0) ||
        (pSVar8 = (pSVar7->fields).General, pSVar8 == (Settings_InGameGeneralSettings_o *)0x0)) ||
       (pSVar9 = (pSVar8->fields).MapName, pSVar9 == (Settings_StringSetting_o *)0x0)) goto label_0589c361;
    pSVar13 = (pSVar9->fields)._value;
    if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar13 = Map_BuiltinLevels__FindMapCategory(pSVar13,(MethodInfo *)0x0);
    if (__this_01 == (Settings_StringSetting_o *)0x0) goto label_0589c361;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)pSVar13,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  bVar10 = System_String__Equals_52ffe30((pSVar5->fields).Id,"general.MapName",5,(MethodInfo *)0x0);
  if ((!bVar10) &&
     (bVar10 = System_String__Equals_52ffe30((pSVar5->fields).Id,"general.GameMode",5,(MethodInfo *)0x0),
     !bVar10)) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    __this_02 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589c2f2;
label_0589c339:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar4 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    __this_02 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589c339;
label_0589c2f2:
    uVar4 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (__this_02 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    Settings_SandboxGameCreateConfiguration__RefreshDescriptions
              (__this_02,
               *(Settings_InGameSet_o **)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                + 0x40),(MethodInfo *)0x0);
    return true;
  }
label_0589c361:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectCategory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectCategory (System_String_o* category, const MethodInfo* method);
// 0x589c370
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589c3f5: jmp 0x589c7da
// asm:   0x589c5e4: jmp 0x589c7da
// asm:   0x589c741: jmp 0x589c7da

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectCategory
               (System_String_o *category,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_BoolSetting_o *__this;
  Settings_StringSetting_o *__this_00;
  System_String_o *subcategory;
  System_String_array *pSVar4;
  MethodInfo *method_00;
  Il2CppClass *klass;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754527f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_0754527f = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589c398;
label_0589c43c:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452e7 != '\0') goto label_0589c3a5;
label_0589c44e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e7 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589c43c;
label_0589c398:
    if (Il2CppMethodInitialized_075452e7 == '\0') goto label_0589c44e;
label_0589c3a5:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_ShowFavorites_k__BackingField = false;
  pGVar2->_configurationMode = 0;
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589c3e1;
label_0589c49d:
    il2cpp_codegen_runtime_class_init(klass);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((((Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass)->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589c49d;
label_0589c3e1:
    pSVar3 = ((Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass)->static_fields->
             _Working_k__BackingField;
  }
  if ((pSVar3 == (Settings_InGameSet_o *)0x0) ||
     (__this = (pSVar3->fields).Sandbox, __this == (Settings_BoolSetting_o *)0x0)) goto label_0589c7da;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)__this,false,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  if (Il2CppMethodInitialized_075452e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e0 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Category_k__BackingField = category;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Category_k__BackingField);
  if (Il2CppMethodInitialized_075452e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e1 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Subcategory_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Subcategory_k__BackingField);
  if (Il2CppMethodInitialized_075452e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e2 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Experience_k__BackingField = (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Experience_k__BackingField);
  if (Il2CppMethodInitialized_075452e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e3 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_RuleResult_k__BackingField = (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_RuleResult_k__BackingField);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589c5d0;
label_0589c6cc:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589c6cc;
label_0589c5d0:
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar3 == (Settings_InGameSet_o *)0x0) ||
     (__this_00 = (pSVar3->fields).ExperienceName, __this_00 == (Settings_StringSetting_o *)0x0))
  goto label_0589c7da;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589c731;
label_0589c765:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589c765;
label_0589c731:
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar3 != (Settings_InGameSet_o *)0x0) &&
     (method_01 = (MethodInfo *)(pSVar3->fields).ExperienceVariant, method_01 != (MethodInfo *)0x0)) {
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)method_01,(Il2CppObject *)method_00,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories(method_01);
    if (pSVar4 != (System_String_array *)0x0) {
      if ((int)pSVar4->max_length != 1) {
        return;
      }
      subcategory = pSVar4->m_Items[0];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSubcategory(subcategory,method_00);
      return;
    }
  }
label_0589c7da:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectSubcategory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSubcategory (System_String_o* subcategory, const MethodInfo* method);
// 0x589c7e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589c80c: cmp byte ptr [rip + 0x1ca8ace], 0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSubcategory
               (System_String_o *subcategory,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar2;
  System_String_o *category;
  Map_Experience_o *experience;
  Map_Experience_array *pMVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07545280 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545280 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e1 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Subcategory_k__BackingField = subcategory;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Subcategory_k__BackingField);
  if (Il2CppMethodInitialized_075452e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e2 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Experience_k__BackingField = (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Experience_k__BackingField);
  if (Il2CppMethodInitialized_075452e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e3 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_RuleResult_k__BackingField = (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_RuleResult_k__BackingField);
  if (Il2CppMethodInitialized_075452d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    method_00 = extraout_RDX_00;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    method_00 = extraout_RDX;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    category = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _Category_k__BackingField;
    method_00 = extraout_RDX_01;
  }
  else {
    category = *(System_String_o **)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                + 0x48);
  }
  if (Il2CppMethodInitialized_07545279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545279 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    method_00 = extraout_RDX_02;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    method_00 = extraout_RDX_03;
  }
  pMVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn(category,subcategory,method_00);
  if (pMVar3 == (Map_Experience_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (((int)pMVar3->max_length != 1) ||
     (experience = pMVar3->m_Items[0], experience == (Map_Experience_o *)0x0)) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
            (experience,(Settings_InGameSet_o *)0x0,(System_String_o *)0x0,false,in_R8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectExperience
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectExperience (Map_Experience_o* experience, const MethodInfo* method);
// 0x588fd50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588fd94: cmp byte ptr [rip + 0x1cb5545], 0
// asm:   0x588fd9b: je 0x588fe19

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectExperience
               (Map_Experience_o *experience,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar3;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07545281 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545281 = '\x01';
  }
  if (experience == (Map_Experience_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (experience->fields).Category;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e0 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar3->_Category_k__BackingField = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar3->_Category_k__BackingField);
  pSVar2 = (experience->fields).SubCategory;
  if (Il2CppMethodInitialized_075452e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e1 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar3->_Subcategory_k__BackingField = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar3->_Subcategory_k__BackingField);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
            (experience,(Settings_InGameSet_o *)0x0,(System_String_o *)0x0,false,in_R8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectVariant
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectVariant (System_String_o* variant, const MethodInfo* method);
// 0x588e4d0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588e534: jmp 0x588e8e8
// asm:   0x588e62f: jmp 0x588e8e8
// asm:   0x588e6be: jmp 0x588ec7d
// asm:   0x588e752: jmp 0x588ec7d
// asm:   0x588e8e3: jmp 0x588eb18
// asm:   0x588e97c: jmp 0x588eb18
// asm:   0x588ea1f: jmp 0x588ec7d
// asm:   0x588ea83: test rbx, rbx
// asm:   0x588ea88: jmp 0x588ec7d
// asm:   0x588ebb8: jmp 0x588e84d

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectVariant(System_String_o *variant,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  Settings_PresetDefinition_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Settings_InGameSet_o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar6;
  Settings_ExperienceRuleResult_o *pSVar7;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar8;
  MethodInfo *pMVar9;
  bool bVar10;
  Settings_InGameSet_o *__this_01;
  System_String_o *pSVar11;
  MethodInfo *in_R8;
  Map_Experience_o *pMVar12;
  
  if (Il2CppMethodInitialized_07545282 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.UnknownVariant");
    Il2CppMethodInitialized_07545282 = '\x01';
    if (variant == (System_String_o *)0x0) goto label_0588e585;
label_0588e4ee:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588e505;
label_0588e5b4:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452d2 == '\0') goto label_0588e5c6;
label_0588e512:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588e522;
label_0588e5e9:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Experience_k__BackingField;
  }
  else {
    if (variant != (System_String_o *)0x0) goto label_0588e4ee;
label_0588e585:
    variant = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588e5b4;
label_0588e505:
    if (g_data_075452d2 != '\0') goto label_0588e512;
label_0588e5c6:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d2 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588e5e9;
label_0588e522:
    pMVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Experience_k__BackingField;
  }
  if (pMVar12 != (Map_Experience_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452d6 == '\0') goto label_0588e642;
label_0588e615:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_0588e621;
label_0588e661:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _RuleResult_k__BackingField;
    }
    else {
      if (Il2CppMethodInitialized_075452d6 != '\0') goto label_0588e615;
label_0588e642:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452d6 = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0588e661;
label_0588e621:
      pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _RuleResult_k__BackingField;
    }
    if (pSVar7 != (Settings_ExperienceRuleResult_o *)0x0) {
      bVar10 = System_String__IsNullOrEmpty(variant,(MethodInfo *)0x0);
      if (!bVar10) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          if (Il2CppMethodInitialized_075452d6 == '\0') goto label_0588e6d1;
label_0588e6a2:
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
          goto label_0588e6ae;
label_0588e6f0:
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _RuleResult_k__BackingField;
        }
        else {
          if (Il2CppMethodInitialized_075452d6 != '\0') goto label_0588e6a2;
label_0588e6d1:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452d6 = '\x01';
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
          goto label_0588e6f0;
label_0588e6ae:
          pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _RuleResult_k__BackingField;
        }
        if ((pSVar7 == (Settings_ExperienceRuleResult_o *)0x0) ||
           (pSVar4 = (pSVar7->fields).Experience, pSVar4 == (Settings_PresetDefinition_o *)0x0))
        goto label_0588ec7d;
        if ((pSVar4->fields).Variants == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0)
        goto label_0588e8e8;
        if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          if (Il2CppMethodInitialized_075452d6 == '\0') goto label_0588e765;
label_0588e736:
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
          goto label_0588e742;
label_0588e784:
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _RuleResult_k__BackingField;
        }
        else {
          if (Il2CppMethodInitialized_075452d6 != '\0') goto label_0588e736;
label_0588e765:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452d6 = '\x01';
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
          goto label_0588e784;
label_0588e742:
          pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _RuleResult_k__BackingField;
        }
        if (((pSVar7 == (Settings_ExperienceRuleResult_o *)0x0) ||
            (pSVar4 = (pSVar7->fields).Experience, pSVar4 == (Settings_PresetDefinition_o *)0x0)) ||
           (__this = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar4->fields).Variants,
           __this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_0588ec7d;
        bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           (__this,(Il2CppObject *)variant,
                            (MethodInfo_4AAD6F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
        if (!bVar10) goto label_0588e8e8;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        if (g_data_075452d2 == '\0') goto label_0588eb36;
label_0588e7f1:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_0588e801;
label_0588eb59:
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pMVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                  _Experience_k__BackingField;
        if (Il2CppMethodInitialized_075452cd == '\0') goto label_0588eb79;
label_0588e819:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_0588e826;
label_0588eb98:
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
      }
      else {
        if (g_data_075452d2 != '\0') goto label_0588e7f1;
label_0588eb36:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        g_data_075452d2 = '\x01';
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_0588eb59;
label_0588e801:
        pMVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                  _Experience_k__BackingField;
        if (Il2CppMethodInitialized_075452cd != '\0') goto label_0588e819;
label_0588eb79:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452cd = '\x01';
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_0588eb98;
label_0588e826:
        pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
      }
      if (Il2CppMethodInitialized_075452c2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
        Il2CppMethodInitialized_075452c2 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
      Settings_InGameSet___ctor(__this_01,(MethodInfo *)0x0);
      if (pSVar5 != (Settings_InGameSet_o *)0x0) {
        pSVar11 = (*(pSVar5->klass->vtable)._8_SerializeToJsonString.methodPtr)
                            (pSVar5,(pSVar5->klass->vtable)._8_SerializeToJsonString.method);
        if (__this_01 == (Settings_InGameSet_o *)0x0) goto label_0588ec7d;
        (*(__this_01->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                  (__this_01,pSVar11,(__this_01->klass->vtable)._9_DeserializeFromJsonString.method);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience(pMVar12,__this_01,variant,true,in_R8)
      ;
      if (Il2CppMethodInitialized_075452d6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452d6 = '\x01';
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_0588ebe0;
label_0588e8d1:
        pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _RuleResult_k__BackingField;
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_0588e8d1;
label_0588ebe0:
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _RuleResult_k__BackingField;
      }
      if (pSVar7 == (Settings_ExperienceRuleResult_o *)0x0) {
        return false;
      }
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        if (Il2CppMethodInitialized_075452d6 == '\0') goto label_0588ec46;
label_0588ec0c:
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (Il2CppMethodInitialized_075452d6 != '\0') goto label_0588ec0c;
label_0588ec46:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452d6 = '\x01';
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _RuleResult_k__BackingField;
      }
      else {
        pSVar7 = *(Settings_ExperienceRuleResult_o **)
                  ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->
                         static_fields + 0x60);
      }
      if (pSVar7 != (Settings_ExperienceRuleResult_o *)0x0) {
        bVar10 = Settings_ExperienceRuleResult__get_IsValid(pSVar7,(MethodInfo *)0x0);
        return bVar10;
      }
      goto label_0588ec7d;
    }
  }
label_0588e8e8:
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar11 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Configuration.UnknownVariant",(MethodInfo *)0x0)
  ;
  pSVar11 = System_String__Format(pSVar11,(Il2CppObject *)variant,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452e4 == '\0') goto label_0588e98f;
label_0588e936:
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452e4 != '\0') goto label_0588e936;
label_0588e98f:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e4 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar6->_LoadError_k__BackingField = pSVar11;
  Il2CppCodeGenWriteBarrier(&pGVar6->_LoadError_k__BackingField);
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588e9d7;
label_0588e96e:
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588e96e;
label_0588e9d7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  if (pSVar7 == (Settings_ExperienceRuleResult_o *)0x0) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452d6 == '\0') goto label_0588ea32;
label_0588ea03:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588ea0f;
label_0588ea51:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452d6 != '\0') goto label_0588ea03;
label_0588ea32:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588ea51;
label_0588ea0f:
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  if (pSVar7 != (Settings_ExperienceRuleResult_o *)0x0) {
    __this_00 = (pSVar7->fields).Errors;
    if (Il2CppMethodInitialized_075452d5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452d5 = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
              cctor_finished_or_no_cctor;
    }
    pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
    }
    MethodInfo_System_Collections_Generic_List_string_Add = pMVar9;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar11 = *(System_String_o **)
                 ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                 + 0x68);
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_00->fields)._items;
      if (pSVar8 != (System_String_array *)0x0) {
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar8->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pSVar8->m_Items[(int)uVar3] = pSVar11;
          Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar11,
                     (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
        }
        return false;
      }
    }
  }
label_0588ec7d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ConfigureExperience
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience (Map_Experience_o* experience, Settings_InGameSet_o* persisted, System_String_o* variant, bool changingVariant, const MethodInfo* method);
// 0x5899c50
// eh: try 0x589a048..0x589b2d3 -> pad 0x589b37c (+98 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x589b2da..0x589b2e4 -> pad 0x589b56b catch (...) [compiler noexcept guard]
// eh: try 0x589b3c1..0x589b3c6 -> pad 0x589b3cb catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x589b3d2..0x589b3dc -> pad 0x589b56b catch (...) [compiler noexcept guard]
// eh: try 0x589b3f1..0x589b559 -> pad 0x589b559 (+1 call sites) cleanup
// eh: try 0x589b55d..0x589b562 -> pad 0x589b56b catch (...) [compiler noexcept guard]
// asm: 234 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5899f2a: jmp 0x589a048
// asm:   0x589a14d: jmp 0x589a17a
// asm:   0x589a319: nop dword ptr [rax]
// asm:   0x589a393: test ebx, ebx
// asm:   0x589a395: je 0x589a260
// asm:   0x589a39b: jmp 0x589b1ef
// asm:   0x589a3bf: jmp 0x589a3c7
// asm:   0x589a3c1: jmp 0x589a3c7
// asm:   0x589a3c3: jmp 0x589a3c7
// asm:   0x589a3c5: jmp 0x589a3c7
// asm:   0x589a3c7: mov rbx, rdx
// asm:   0x589a3ca: mov qword ptr [rsp], rax
// asm:   0x589a3ce: cmp ebx, 1
// asm:   0x589a3d1: jne 0x589b2da
// asm:   0x589a3d7: mov rdi, qword ptr [rsp]
// asm:   0x589a3db: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x589a3e0: mov rax, qword ptr [rax]
// asm:   0x589a3e3: mov r14, rax
// asm:   0x589a3e6: mov qword ptr [rsp + 0x20], rax
// asm:   0x589a3eb: xor ebx, ebx
// asm:   0x589a3ed: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x589a3f2: jmp 0x589a368
// asm:   0x589a4ed: jmp 0x589a554
// asm:   0x589a664: cmp ebx, 0xa
// asm:   0x589a667: je 0x589a671
// asm:   0x589a669: test ebx, ebx
// asm:   0x589a66b: jne 0x589b1ef
// asm:   0x589a6a5: jmp 0x589a6cd
// asm:   0x589a764: jmp 0x589a78c
// asm:   0x589a82d: jmp 0x589a8a7
// asm:   0x589a9fc: test rbx, rbx
// asm:   0x589a9ff: je 0x589ab23
// asm:   0x589aa3e: jmp 0x589ab4e
// asm:   0x589abcb: jmp 0x589abf3
// asm:   0x589ad46: jmp 0x589ad6e
// asm:   0x589aea0: jmp 0x589aec8
// asm:   0x589af11: jmp 0x589b1ef
// asm:   0x589b059: jmp 0x589b1c9
// asm:   0x589b258: mov rdi, r14
// asm:   0x589b25b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x589b2d3: mov rbx, rdx
// asm:   0x589b2d6: mov qword ptr [rsp], rax
// asm:   0x589b2da: lea rdi, [rsp + 0x20]
// asm:   0x589b2df: call 0x2fcf920  ; il2cpp_runtime_helper_02fcf920()
// asm:   0x589b2e4: jmp 0x589b3dc
// asm:   0x589b2e9: jmp 0x589b38c
// asm:   0x589b2ee: jmp 0x589b38c
// asm:   0x589b2f3: jmp 0x589b38c
// asm:   0x589b2f8: jmp 0x589b38c
// asm:   0x589b2fd: jmp 0x589b38c
// asm:   0x589b302: jmp 0x589b38c
// asm:   0x589b307: jmp 0x589b38c
// asm:   0x589b30c: jmp 0x589b38c
// asm:   0x589b30e: jmp 0x589b38c
// asm:   0x589b310: jmp 0x589b38c
// asm:   0x589b312: jmp 0x589b38c
// asm:   0x589b314: jmp 0x589b38c
// asm:   0x589b316: jmp 0x589b38c
// asm:   0x589b318: jmp 0x589b38c
// asm:   0x589b31a: jmp 0x589b38c
// asm:   0x589b31c: jmp 0x589b38c
// asm:   0x589b31e: jmp 0x589b38c
// asm:   0x589b320: jmp 0x589b38c
// asm:   0x589b322: jmp 0x589b38c
// asm:   0x589b324: jmp 0x589b38c
// asm:   0x589b326: jmp 0x589b38c
// asm:   0x589b328: jmp 0x589b38c
// asm:   0x589b32a: jmp 0x589b38c
// asm:   0x589b32c: jmp 0x589b38c
// asm:   0x589b32e: jmp 0x589b38c
// asm:   0x589b330: jmp 0x589b38c
// asm:   0x589b332: jmp 0x589b38c
// asm:   0x589b334: jmp 0x589b38c
// asm:   0x589b336: jmp 0x589b38c
// asm:   0x589b338: jmp 0x589b38c
// asm:   0x589b33a: jmp 0x589b38c
// asm:   0x589b33c: jmp 0x589b38c
// asm:   0x589b33e: jmp 0x589b38c
// asm:   0x589b340: jmp 0x589b38c
// asm:   0x589b342: jmp 0x589b38c
// asm:   0x589b344: jmp 0x589b38c
// asm:   0x589b346: jmp 0x589b38c
// asm:   0x589b348: jmp 0x589b38c
// asm:   0x589b34a: jmp 0x589b38c
// asm:   0x589b34c: jmp 0x589b38c
// asm:   0x589b34e: jmp 0x589b38c
// asm:   0x589b350: jmp 0x589b38c
// asm:   0x589b352: jmp 0x589b38c
// asm:   0x589b354: jmp 0x589b38c
// asm:   0x589b356: jmp 0x589b38c
// asm:   0x589b358: jmp 0x589b38c
// asm:   0x589b35a: jmp 0x589b38c
// asm:   0x589b35c: jmp 0x589b38c
// asm:   0x589b35e: jmp 0x589b38c
// asm:   0x589b360: jmp 0x589b38c
// asm:   0x589b362: jmp 0x589b38c
// asm:   0x589b364: jmp 0x589b38c
// asm:   0x589b366: jmp 0x589b38c
// asm:   0x589b368: jmp 0x589b38c
// asm:   0x589b36a: jmp 0x589b38c
// asm:   0x589b36c: jmp 0x589b38c
// asm:   0x589b36e: jmp 0x589b38c
// asm:   0x589b370: jmp 0x589b38c
// asm:   0x589b372: jmp 0x589b38c
// asm:   0x589b374: jmp 0x589b38c
// asm:   0x589b376: jmp 0x589b38c
// asm:   0x589b378: jmp 0x589b38c
// asm:   0x589b37a: jmp 0x589b38c
// asm:   0x589b37c: jmp 0x589b38c
// asm:   0x589b37e: jmp 0x589b38c
// asm:   0x589b380: jmp 0x589b38c
// asm:   0x589b382: jmp 0x589b39d
// asm:   0x589b384: jmp 0x589b38c
// asm:   0x589b386: jmp 0x589b38c
// asm:   0x589b388: jmp 0x589b39d
// asm:   0x589b38a: jmp 0x589b38c
// asm:   0x589b38c: mov rbx, rdx
// asm:   0x589b38f: mov qword ptr [rsp], rax
// asm:   0x589b393: jmp 0x589b3dc
// asm:   0x589b395: jmp 0x589b39d
// asm:   0x589b397: jmp 0x589b39d
// asm:   0x589b399: jmp 0x589b39d
// asm:   0x589b39b: jmp 0x589b39d
// asm:   0x589b39d: mov rbx, rdx
// asm:   0x589b3a0: mov qword ptr [rsp], rax
// asm:   0x589b3a4: cmp ebx, 1
// asm:   0x589b3a7: jne 0x589b3d2
// asm:   0x589b3a9: mov rdi, qword ptr [rsp]
// asm:   0x589b3ad: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x589b3b2: mov rcx, qword ptr [rax]
// asm:   0x589b3b5: mov qword ptr [rsp + 0x38], rcx
// asm:   0x589b3ba: mov qword ptr [rsp + 0x20], rcx
// asm:   0x589b3bf: xor ebx, ebx
// asm:   0x589b3c1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x589b3c6: jmp 0x589a642
// asm:   0x589b3cb: mov rbx, rdx
// asm:   0x589b3ce: mov qword ptr [rsp], rax
// asm:   0x589b3d2: lea rdi, [rsp + 0x20]
// asm:   0x589b3d7: call 0x2fcf950  ; il2cpp_runtime_helper_02fcf950()
// asm:   0x589b3dc: cmp ebx, 1
// asm:   0x589b3df: jne 0x589b562
// asm:   0x589b3e5: mov rdi, qword ptr [rsp]
// asm:   0x589b3e9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x589b3ee: mov rbx, rax
// asm:   0x589b3f1: lea rdi, [rip + 0x19dccc8]  ; TypeInfo_System_Exception
// asm:   0x589b3f8: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x589b3fd: mov rcx, qword ptr [rbx]
// asm:   0x589b400: mov rsi, qword ptr [rcx]
// asm:   0x589b403: mov rdi, rax
// asm:   0x589b406: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x589b40b: test al, al
// asm:   0x589b40d: je 0x589b538
// asm:   0x589b413: mov r14, qword ptr [rbx]
// asm:   0x589b416: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x589b41b: lea rdi, [rip + 0x19da17e]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
// asm:   0x589b422: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x589b427: cmp dword ptr [rax + 0xe4], 0
// asm:   0x589b42e: jne 0x589b438
// asm:   0x589b430: mov rdi, rax
// asm:   0x589b433: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x589b438: xor edi, edi
// asm:   0x589b43a: xor esi, esi
// asm:   0x589b43c: call 0x58a79a0  ; il2cpp_runtime_helper_058a79a0()
// asm:   0x589b441: xor edi, edi
// asm:   0x589b443: call 0x58a7670  ; il2cpp_runtime_helper_058a7670()
// asm:   0x589b448: test rax, rax
// asm:   0x589b44b: je 0x589b533
// asm:   0x589b451: mov rbp, qword ptr [rax + 0x78]
// asm:   0x589b455: test rbp, rbp
// asm:   0x589b458: je 0x589b533
// asm:   0x589b45e: lea r15, [rip + 0x1cbb263]
// asm:   0x589b465: mov rax, qword ptr [r15 + 0x90]
// asm:   0x589b46c: mov rax, qword ptr [rax + 0xb8]
// asm:   0x589b473: mov rbx, qword ptr [rax]
// asm:   0x589b476: lea rdi, [rip + 0x1a03973]  ; MethodInfo_Settings_TypedSetting_string_set_Value
// asm:   0x589b47d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x589b482: mov rdi, rbp
// asm:   0x589b485: mov rsi, rbx
// asm:   0x589b488: mov rdx, rax
// asm:   0x589b48b: call 0x43da280  ; Settings_TypedSetting_object___set_Value()
// asm:   0x589b490: xor edi, edi
// asm:   0x589b492: call 0x58a7670  ; il2cpp_runtime_helper_058a7670()
// asm:   0x589b497: test rax, rax
// asm:   0x589b49a: je 0x589b533
// asm:   0x589b4a0: mov rbp, qword ptr [rax + 0x90]
// asm:   0x589b4a7: test rbp, rbp
// asm:   0x589b4aa: je 0x589b533
// asm:   0x589b4b0: mov rax, qword ptr [r15 + 0x90]
// asm:   0x589b4b7: mov rax, qword ptr [rax + 0xb8]
// asm:   0x589b4be: mov rbx, qword ptr [rax]
// asm:   0x589b4c1: lea rdi, [rip + 0x1a03928]  ; MethodInfo_Settings_TypedSetting_string_set_Value
// asm:   0x589b4c8: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x589b4cd: mov rdi, rbp
// asm:   0x589b4d0: mov rsi, rbx
// asm:   0x589b4d3: mov rdx, rax
// asm:   0x589b4d6: call 0x43da280  ; Settings_TypedSetting_object___set_Value()
// asm:   0x589b4db: xor edi, edi
// asm:   0x589b4dd: call 0x58a7670  ; il2cpp_runtime_helper_058a7670()
// asm:   0x589b4e2: test rax, rax
// asm:   0x589b4e5: je 0x589b533
// asm:   0x589b4e7: mov rbp, qword ptr [rax + 0x98]
// asm:   0x589b4ee: test rbp, rbp
// asm:   0x589b4f1: je 0x589b533
// asm:   0x589b4f3: lea rdi, [rip + 0x1a0387e]  ; MethodInfo_Settings_TypedSetting_bool_set_Value
// asm:   0x589b4fa: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x589b4ff: mov rdi, rbp
// asm:   0x589b502: xor esi, esi
// asm:   0x589b504: mov rdx, rax
// asm:   0x589b507: call 0x43da020  ; Settings_TypedSetting_bool___set_Value()
// asm:   0x589b50c: test r14, r14
// asm:   0x589b50f: je 0x589b533
// asm:   0x589b511: mov rax, qword ptr [r14]
// asm:   0x589b514: mov rsi, qword ptr [rax + 0x190]
// asm:   0x589b51b: mov rdi, r14
// asm:   0x589b51e: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x589b524: mov rdi, rax
// asm:   0x589b527: xor esi, esi
// asm:   0x589b529: call 0x58a7a20  ; il2cpp_runtime_helper_058a7a20()
// asm:   0x589b52e: jmp 0x589b1ef
// asm:   0x589b533: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x589b538: mov edi, 8
// asm:   0x589b53d: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x589b542: mov rcx, qword ptr [rbx]
// asm:   0x589b545: mov qword ptr [rax], rcx
// asm:   0x589b548: lea rsi, [rip + 0x1591fb1]
// asm:   0x589b54f: mov rdi, rax
// asm:   0x589b552: xor edx, edx
// asm:   0x589b554: call 0x6e255c0  ; __cxa_throw()
// asm:   0x589b559: mov qword ptr [rsp], rax
// asm:   0x589b55d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x589b562: mov rdi, qword ptr [rsp]
// asm:   0x589b566: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x589b56b: mov rdi, rax
// asm:   0x589b56e: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ConfigureExperience
               (Map_Experience_o *experience,Settings_InGameSet_o *persisted,System_String_o *variant,
               bool changingVariant,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  void *pvVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar5;
  Settings_StringSetting_o *pSVar6;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Settings_InGameGeneralSettings_o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  Settings_SandboxGameCreateConfiguration_o *pSVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  MethodInfo *pMVar11;
  Settings_BaseSetting_o *setting;
  Settings_BaseSetting_o *setting_00;
  bool bVar12;
  Settings_InGameSet_o *pSVar13;
  Settings_PresetDefinition_o *__this_00;
  System_String_o **ppSVar14;
  Il2CppObject *pIVar15;
  ulong uVar16;
  System_Collections_Generic_List_UIRule__o *__this_01;
  System_Func_string__string__o *pSVar17;
  Settings_ExperienceRuleResult_o *pSVar18;
  System_String_o *pSVar19;
  MethodInfo *method_00;
  System_String_array *pSVar20;
  MethodInfo *method_01;
  Settings_InGameSet_o *pSVar21;
  ulong uVar22;
  MethodInfo *pMVar23;
  Il2CppClass *pIVar24;
  System_Collections_Generic_HashSet_string__o *local_c0;
  System_String_o *local_b0;
  undefined1 local_a8 [16];
  MethodInfo *local_98;
  long local_90;
  Settings_InGameSet_o *local_88;
  Settings_BaseSetting_o *local_80;
  Settings_BaseSetting_o *local_78;
  Il2CppObject *local_70;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  MethodInfo *local_58;
  undefined1 local_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  MethodInfo *local_38;
  
  if (Il2CppMethodInitialized_07545283 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
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
    Il2CppMethodInitialized_07545283 = '\x01';
  }
  pIVar24 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  local_70 = (Il2CppObject *)0x0;
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_38 = (MethodInfo *)0x0;
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (MethodInfo *)0x0;
  local_78 = (Settings_BaseSetting_o *)0x0;
  local_80 = (Settings_BaseSetting_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pIVar24 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_configurationMode = 0;
    if (Il2CppMethodInitialized_075452e2 != '\0') goto label_05899e1f;
label_05899f52:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e2 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pIVar24 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_configurationMode = 0;
    if (Il2CppMethodInitialized_075452e2 == '\0') goto label_05899f52;
label_05899e1f:
    uVar2 = (pIVar24->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar24);
    pIVar24 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  pvVar4 = pIVar24->static_fields;
  *(Map_Experience_o **)((long)pvVar4 + 0x58) = experience;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar4 + 0x58));
  if (Il2CppMethodInitialized_075452e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e3 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar5->_RuleResult_k__BackingField = (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar5->_RuleResult_k__BackingField);
  if (Il2CppMethodInitialized_075452e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e4 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar5->_LoadError_k__BackingField = (System_String_o *)0x0;
  pMVar23 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar5->_LoadError_k__BackingField);
  pSVar13 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__CreateOfficialWorkingSet(persisted,pMVar23);
  if (Il2CppMethodInitialized_075452e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e9 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar5->_Working_k__BackingField = pSVar13;
  Il2CppCodeGenWriteBarrier(&pGVar5->_Working_k__BackingField);
  if (experience == (Map_Experience_o *)0x0) {
    pSVar19 = (System_String_o *)0x0;
    uVar2 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar19 = (experience->fields).Name;
    uVar2 = (TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  __this_00 = Map_BuiltinLevels__LoadExperience(pSVar19,(MethodInfo *)0x0);
  if (variant == (System_String_o *)0x0) {
    if (persisted == (Settings_InGameSet_o *)0x0) {
      ppSVar14 = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
    else {
      pSVar6 = (persisted->fields).ExperienceVariant;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      ppSVar14 = &(pSVar6->fields)._value;
    }
    variant = *ppSVar14;
  }
  bVar12 = System_String__IsNullOrEmpty(variant,(MethodInfo *)0x0);
  local_b0 = variant;
  if ((bVar12) && (__this_00 != (Settings_PresetDefinition_o *)0x0)) {
    local_b0 = Settings_PresetDefinition__get_DefaultVariant(__this_00,(MethodInfo *)0x0);
  }
  bVar12 = true;
  local_88 = persisted;
  if (changingVariant) {
label_0589a100:
    pSVar13 = local_88;
    local_c0 = (System_Collections_Generic_HashSet_string__o *)0x0;
    if ((bVar12) && (__this_00 != (Settings_PresetDefinition_o *)0x0)) {
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      if (Il2CppMethodInitialized_07542886 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
        Il2CppMethodInitialized_07542886 = '\x01';
        uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
      local_c0 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
      System_Collections_Generic_HashSet_object____ctor_4fb2f30
                ((System_Collections_Generic_HashSet_object__o *)local_c0,
                 (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
                 (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
      pIVar15 = SZArrayNew(TypeInfo_string_array,2);
      if (pSVar13 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (pSVar13->fields).ExperienceVariant;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (pIVar15 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (*(int *)&pIVar15[1].monitor == 0) {
        ThrowIndexOutOfRangeException();
      }
      pIVar15[2].klass = (Il2CppClass *)(pSVar6->fields)._value;
      Il2CppCodeGenWriteBarrier(&pIVar15[2].klass);
      if (((ulong)pIVar15[1].monitor & 0xfffffffe) == 0) {
        ThrowIndexOutOfRangeException();
      }
      pIVar15[2].monitor = local_b0;
      Il2CppCodeGenWriteBarrier(&pIVar15[2].monitor);
      if (0 < (int)pIVar15[1].monitor) {
        uVar16 = (ulong)pIVar15[1].monitor & 0xffffffff;
        uVar22 = 0;
        do {
          if (uVar16 <= uVar22) {
            ThrowIndexOutOfRangeException();
          }
          pIVar24 = (&pIVar15[2].klass)[uVar22];
          bVar12 = System_String__IsNullOrEmpty((System_String_o *)pIVar24,(MethodInfo *)0x0);
          if (((!bVar12) &&
              (__this = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this_00->fields).Variants,
              __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
             (bVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                 (__this,(Il2CppObject *)pIVar24,&local_70,
                                  (MethodInfo_4AAF440 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_List_string_TryGetValue
                                 ), bVar12)) {
            __this_01 = Settings_RuleParser__Parse
                                  ((System_Collections_Generic_IEnumerable_string__o *)local_70,
                                   (System_Func_string__UIRuleValueType__o *)0x0,(MethodInfo *)0x0);
            if (__this_01 == (System_Collections_Generic_List_UIRule__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                       (System_Collections_Generic_List_object__o *)__this_01,
                       (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_UIRule_GetEnumerator);
            local_38 = local_98;
            local_48 = (undefined1  [8])local_a8._0_8_;
            pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)local_a8._8_8_;
            local_a8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
            local_a8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
            if (local_c0 == (System_Collections_Generic_HashSet_string__o *)0x0) {
              bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext);
              if (bVar12) {
                if (local_38 != (MethodInfo *)0x0) {
                  ThrowNullReferenceException();
                }
label_0589a3ab:
                ThrowNullReferenceException();
              }
            }
            else {
              while (bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                                         (MethodInfo_4C45C50 *)
                                         MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_MoveNext
                                        ), bVar12) {
                if (local_38 == (MethodInfo *)0x0) goto label_0589a3ab;
                System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)local_c0,
                           (Il2CppObject *)local_38->name,
                           (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_UIRule_Dispose);
          }
          uVar22 = uVar22 + 1;
          uVar16 = (ulong)*(uint *)&pIVar15[1].monitor;
        } while ((long)uVar22 < (long)(int)*(uint *)&pIVar15[1].monitor);
      }
      pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
      Settings_InGameSet___ctor(pSVar13,(MethodInfo *)0x0);
      if (local_c0 == (System_Collections_Generic_HashSet_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a8,
                 (System_Collections_Generic_HashSet_object__o *)local_c0,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
      local_58 = local_98;
      local_68 = (undefined1  [8])local_a8._0_8_;
      pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_a8._8_8_;
      local_a8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_90 = 0;
      local_a8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
      while (bVar12 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                                 (MethodInfo_4C456D0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext),
            pMVar23 = local_58, bVar12) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_075452cd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452cd = '\x01';
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
          goto label_0589a4cd;
label_0589a516:
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          pSVar21 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                    _Working_k__BackingField;
          if (Il2CppMethodInitialized_075452c6 != '\0') goto label_0589a4e1;
label_0589a539:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
          Il2CppMethodInitialized_075452c6 = '\x01';
          uVar2 = (TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor;
        }
        else {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
          goto label_0589a516;
label_0589a4cd:
          pSVar21 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                    _Working_k__BackingField;
          if (Il2CppMethodInitialized_075452c6 == '\0') goto label_0589a539;
label_0589a4e1:
          uVar2 = (TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor;
        }
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar12 = Settings_ExperienceRuleEngine__TryResolveSetting
                           (pSVar21,(System_String_o *)pMVar23,&local_78,(MethodInfo *)0x0);
        if (bVar12) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          if (Il2CppMethodInitialized_075452c6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
            Il2CppMethodInitialized_075452c6 = '\x01';
          }
          if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
          }
          bVar12 = Settings_ExperienceRuleEngine__TryResolveSetting
                             (pSVar13,(System_String_o *)pMVar23,&local_80,(MethodInfo *)0x0);
          setting_00 = local_78;
          setting = local_80;
          if (bVar12) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            if (Il2CppMethodInitialized_075452c8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_075452c8 = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            pIVar15 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingValue(setting,pMVar23);
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetSettingValue(setting_00,pIVar15,method_01);
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                 (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
                );
      if (local_90 != 0) {
        il2cpp_codegen_rethrow();
      }
    }
  }
  else {
    if (persisted != (Settings_InGameSet_o *)0x0) {
      pSVar6 = (persisted->fields).ExperienceVariant;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar12 = System_String__Equals_52ffe30((pSVar6->fields)._value,local_b0,5,(MethodInfo *)0x0);
      bVar12 = !bVar12;
      goto label_0589a100;
    }
    local_c0 = (System_Collections_Generic_HashSet_string__o *)0x0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  pSVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  pSVar21 = local_88;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)pSVar17,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_BuiltinLevels_FindMapCategory,(MethodInfo_4F19B50 *)0x0);
  if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
  }
  pMVar23 = (MethodInfo *)0x0;
  pSVar18 = Settings_ExperienceRuleEngine__Apply(__this_00,pSVar13,pSVar17,local_b0,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075452e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e3 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar5->_RuleResult_k__BackingField = pSVar18;
  Il2CppCodeGenWriteBarrier(&pGVar5->_RuleResult_k__BackingField);
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589a7d2;
label_0589a859:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar18 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589a859;
label_0589a7d2:
    pSVar18 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField;
  }
  if (pSVar18 == (Settings_ExperienceRuleResult_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  bVar12 = Settings_ExperienceRuleResult__get_IsValid(pSVar18,(MethodInfo *)0x0);
  if (bVar12) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_075452d6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452d6 = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__RestoreEditableValues
              (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _RuleResult_k__BackingField,pSVar21,local_c0,true,pMVar23);
    if (Il2CppMethodInitialized_075452cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_0589a8f7;
label_0589aa6d:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Working_k__BackingField;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589aa6d;
label_0589a8f7:
      pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Working_k__BackingField;
    }
    if (pSVar13 == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = (pSVar13->fields).General;
    if (pSVar7 == (Settings_InGameGeneralSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar7->fields).MapCategory;
    if (Il2CppMethodInitialized_075452cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_0589a936;
label_0589aabc:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Working_k__BackingField;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589aabc;
label_0589a936:
      pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Working_k__BackingField;
    }
    if (pSVar13 == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = (pSVar13->fields).General;
    if (pSVar7 == (Settings_InGameGeneralSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = (pSVar7->fields).MapName;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar19 = (pSVar8->fields)._value;
    if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar19 = Map_BuiltinLevels__FindMapCategory(pSVar19,(MethodInfo *)0x0);
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar19,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (pSVar9 == (Settings_SandboxGameCreateConfiguration_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_SandboxGameCreateConfiguration__Reset(pSVar9,(MethodInfo *)0x0);
    pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (Il2CppMethodInitialized_075452cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (pSVar9 == (Settings_SandboxGameCreateConfiguration_o *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_SandboxGameCreateConfiguration__Refresh
              (pSVar9,*(Settings_InGameSet_o **)
                       ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->
                              static_fields + 0x40),(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075452cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    pSVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)pSVar17,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_BuiltinLevels_FindMapCategory,(MethodInfo_4F19B50 *)0x0);
    if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
    }
    pMVar23 = (MethodInfo *)0x0;
    pSVar18 = Settings_ExperienceRuleEngine__Apply(__this_00,pSVar13,pSVar17,local_b0,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075452e3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452e3 = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pGVar5->_RuleResult_k__BackingField = pSVar18;
    Il2CppCodeGenWriteBarrier(&pGVar5->_RuleResult_k__BackingField);
    pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (pSVar9 == (Settings_SandboxGameCreateConfiguration_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x0;
    bVar12 = System_String__IsNullOrEmpty((pSVar9->fields)._LastError_k__BackingField,(MethodInfo *)0x0);
    if (!bVar12) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_075452d6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452d6 = '\x01';
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_0589ac86;
label_0589b22b:
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
        pSVar18 = pGVar5->_RuleResult_k__BackingField;
        pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_0589b22b;
label_0589ac86:
        pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
        pSVar18 = pGVar5->_RuleResult_k__BackingField;
        pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
      }
      MethodInfo_System_Collections_Generic_List_string_Add = pMVar11;
      if (pSVar18 == (Settings_ExperienceRuleResult_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (pGVar5->SandboxConfiguration == (Settings_SandboxGameCreateConfiguration_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar10 = (pSVar18->fields).Errors;
      if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
label_0589b297:
        ThrowNullReferenceException();
      }
      method_00 = (MethodInfo *)(pGVar5->SandboxConfiguration->fields)._LastError_k__BackingField;
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar20 = (pSVar10->fields)._items;
      if (pSVar20 == (System_String_array *)0x0) goto label_0589b297;
      uVar3 = (pSVar10->fields)._size;
      if (uVar3 < (uint)pSVar20->max_length) {
        (pSVar10->fields)._size = uVar3 + 1;
        pSVar20->m_Items[(int)uVar3] = (System_String_o *)method_00;
        Il2CppCodeGenWriteBarrier(pSVar20->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)method_00,
                   (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
      }
    }
  }
  if (pSVar21 == (Settings_InGameSet_o *)0x0) goto label_0589ae6c;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__RestoreEditableValues
            (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField,pSVar21,local_c0,false,pMVar23);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589adbb;
label_0589b088:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589b088;
label_0589adbb:
    pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (pSVar13 == (Settings_InGameSet_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (pSVar13->fields).General;
  if (pSVar7 == (Settings_InGameGeneralSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar6 = (pSVar7->fields).MapCategory;
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589adfa;
label_0589b0d7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589b0d7;
label_0589adfa:
    pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (pSVar13 == (Settings_InGameSet_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = (pSVar13->fields).General;
  if (pSVar7 == (Settings_InGameGeneralSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar8 = (pSVar7->fields).MapName;
  if (pSVar8 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar19 = (pSVar8->fields)._value;
  if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  method_00 = (MethodInfo *)Map_BuiltinLevels__FindMapCategory(pSVar19,(MethodInfo *)0x0);
  if (pSVar6 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)method_00,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
label_0589ae6c:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ValidateContentOptions
            (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField,method_00);
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar18 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField;
  }
  else {
    pSVar18 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields **)
                ((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xb8))->
              _RuleResult_k__BackingField;
  }
  if (pSVar18 == (Settings_ExperienceRuleResult_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar18 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField;
  }
  else {
    pSVar18 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields **)
                ((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xb8))->
              _RuleResult_k__BackingField;
  }
  if (pSVar18 == (Settings_ExperienceRuleResult_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar12 = Settings_ExperienceRuleResult__get_IsValid(pSVar18,(MethodInfo *)0x0);
  if (bVar12) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d6 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar18 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _RuleResult_k__BackingField;
  }
  else {
    pSVar18 = *(Settings_ExperienceRuleResult_o **)
               ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
               0x60);
  }
  if (pSVar18 == (Settings_ExperienceRuleResult_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar10 = (pSVar18->fields).Errors;
  if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar20 = (System_String_array *)
            System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_object__o *)pSVar10,
                       (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  pSVar19 = System_String__Join("\n",pSVar20,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075452e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e4 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar5->_LoadError_k__BackingField = pSVar19;
  Il2CppCodeGenWriteBarrier(&pGVar5->_LoadError_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectSandbox
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSandbox (const MethodInfo* method);
// 0x589d5c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589d8f8: jmp 0x589de57
// asm:   0x589dc03: jmp 0x589de57
// asm:   0x589dc91: jmp 0x589de57
// asm:   0x589dd1a: jmp 0x589de57

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSandbox(MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar2;
  void *pvVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameSet_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_BoolSetting_o *__this;
  Settings_InGameGeneralSettings_o *pSVar7;
  Settings_IntSetting_o *__this_00;
  Settings_InGameSet_o *__this_01;
  System_String_o *pSVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar9;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Il2CppClass *pIVar10;
  
  if (Il2CppMethodInitialized_07545284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    Il2CppMethodInitialized_07545284 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589d5ec;
label_0589d96f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452e7 != '\0') goto label_0589d5f9;
label_0589d981:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e7 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589d96f;
label_0589d5ec:
    if (Il2CppMethodInitialized_075452e7 == '\0') goto label_0589d981;
label_0589d5f9:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pIVar10 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_ShowFavorites_k__BackingField = false;
  pGVar2->_configurationMode = 1;
  if (Il2CppMethodInitialized_075452e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pIVar10 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (((Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)pIVar10)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar10);
    pIVar10 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  pvVar3 = pIVar10->static_fields;
  *(undefined8 *)((long)pvVar3 + 0x80) = 0;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar3 + 0x80));
  if (Il2CppMethodInitialized_075452e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pIVar10 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
       false;
  pSVar8 = "Sandbox";
  if (Il2CppMethodInitialized_075452e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e0 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pIVar10 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (((Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)pIVar10)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar10);
    pIVar10 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  pvVar3 = pIVar10->static_fields;
  *(System_String_o **)((long)pvVar3 + 0x48) = pSVar8;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar3 + 0x48));
  if (Il2CppMethodInitialized_075452e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e1 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Subcategory_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Subcategory_k__BackingField);
  if (Il2CppMethodInitialized_075452e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e2 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Experience_k__BackingField = (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Experience_k__BackingField);
  if (Il2CppMethodInitialized_075452e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e3 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_RuleResult_k__BackingField = (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_RuleResult_k__BackingField);
  if (Il2CppMethodInitialized_075452e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_LoadError_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_LoadError_k__BackingField);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameUI;
  if (Il2CppMethodInitialized_075452c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    Il2CppMethodInitialized_075452c2 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(__this_01,(MethodInfo *)0x0);
  if (pSVar5 != (Settings_InGameSet_o *)0x0) {
    pSVar8 = (*(pSVar5->klass->vtable)._8_SerializeToJsonString.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._8_SerializeToJsonString.method);
    if (__this_01 == (Settings_InGameSet_o *)0x0) goto label_0589de57;
    (*(__this_01->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this_01,pSVar8,(__this_01->klass->vtable)._9_DeserializeFromJsonString.method);
  }
  if (Il2CppMethodInitialized_075452e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e9 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Working_k__BackingField = __this_01;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Working_k__BackingField);
  if (pSVar4 != (Settings_InGameSet_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pMVar9 = extraout_RDX_00;
      if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589d894;
label_0589de27:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      pMVar9 = extraout_RDX_01;
    }
    else {
      pMVar9 = extraout_RDX;
      if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589de27;
label_0589d894:
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pMVar9 = extraout_RDX_02;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__CopyRoomSettings
              (pSVar4,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                      _Working_k__BackingField,pMVar9);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589d8d4;
label_0589db6b:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589d8e4;
label_0589db8e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589db6b;
label_0589d8d4:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589db8e;
label_0589d8e4:
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar4 == (Settings_InGameSet_o *)0x0) ||
     (pSVar6 = (pSVar4->fields).ExperienceName, pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_0589de57;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589dbf3;
label_0589dc27:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589dc27;
label_0589dbf3:
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar4 == (Settings_InGameSet_o *)0x0) ||
     (pSVar6 = (pSVar4->fields).ExperienceVariant, pSVar6 == (Settings_StringSetting_o *)0x0))
  goto label_0589de57;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589dc81;
label_0589dcb5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589dcb5;
label_0589dc81:
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar4 == (Settings_InGameSet_o *)0x0) ||
     (__this = (pSVar4->fields).Sandbox, __this == (Settings_BoolSetting_o *)0x0)) goto label_0589de57;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)__this,true,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589dd0a;
label_0589dd3e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589dd3e;
label_0589dd0a:
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar4 != (Settings_InGameSet_o *)0x0) &&
      (pSVar7 = (pSVar4->fields).General, pSVar7 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (__this_00 = (pSVar7->fields).Difficulty, __this_00 != (Settings_IntSetting_o *)0x0)) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_00,2,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar8 = "General";
    if (Il2CppMethodInitialized_075452e5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452e5 = '\x01';
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pGVar2->_SandboxSection_k__BackingField = pSVar8;
    Il2CppCodeGenWriteBarrier(&pGVar2->_SandboxSection_k__BackingField);
    pMVar9 = (MethodInfo *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (pMVar9 != (MethodInfo *)0x0) {
      Settings_SandboxGameCreateConfiguration__Reset
                ((Settings_SandboxGameCreateConfiguration_o *)pMVar9,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox(pMVar9);
      return;
    }
  }
label_0589de57:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectSandboxSection
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSandboxSection (int32_t index, const MethodInfo* method);
// 0x588af50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588b11a: jmp 0x588b213
// asm:   0x588b11f: xor eax, eax

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSandboxSection(int32_t index,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar3;
  Settings_WeatherSettings_o *pSVar4;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar5;
  Settings_IntSetting_o *__this;
  Settings_InGameSet_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  bool bVar8;
  System_String_array *pSVar9;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *pGVar10;
  
  if (Il2CppMethodInitialized_07545285 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    Il2CppMethodInitialized_07545285 = '\x01';
  }
  pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)pGVar10);
  if ((index < 0) || (!bVar8)) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal;
  if (pSVar9 == (System_String_array *)0x0) goto label_0588b213;
  if ((int)pSVar9->max_length <= index) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal;
    if (pSVar9 == (System_String_array *)0x0) goto label_0588b213;
  }
  if ((uint)pSVar9->max_length <= (uint)index) {
    ThrowIndexOutOfRangeException();
  }
  pSVar2 = pSVar9->m_Items[(uint)index];
  if (Il2CppMethodInitialized_075452e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e5 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar3->_SandboxSection_k__BackingField = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar3->_SandboxSection_k__BackingField);
  if (Il2CppMethodInitialized_075452cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cf = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar8 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _SandboxSection_k__BackingField,"Weather",(MethodInfo *)0x0);
  if (!bVar8) goto label_0588b1f4;
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if ((pSVar4 == (Settings_WeatherSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).WeatherSets, pSVar5 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
  goto label_0588b213;
  __this = (pSVar5->fields).SelectedSetIndex;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0588b196;
label_0588b0f6:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588b106;
label_0588b1b9:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0588b0f6;
label_0588b196:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588b1b9;
label_0588b106:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar6 != (Settings_InGameSet_o *)0x0) &&
      (pSVar7 = (pSVar6->fields).WeatherIndex, pSVar7 != (Settings_IntSetting_o *)0x0)) &&
     (__this != (Settings_IntSetting_o *)0x0)) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this,(pSVar7->fields)._value,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
label_0588b1f4:
    pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields((MethodInfo *)pGVar10);
    return true;
  }
label_0588b213:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetShowSandboxVariableNames
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetShowSandboxVariableNames (bool show, const MethodInfo* method);
// 0x588bbc0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetShowSandboxVariableNames(bool show,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545286 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545286 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)klass);
    if (bVar2) goto label_0588bc25;
  }
  else {
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)klass);
    if (bVar2) {
label_0588bc25:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames = show;
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetShowLockedSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetShowLockedSettings (bool show, const MethodInfo* method);
// 0x589ee70

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetShowLockedSettings(bool show,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545287 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545287 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings = show;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanSpawnPreset
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnPreset (const MethodInfo* method);
// 0x588c470
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588c4d0: jmp 0x588c797
// asm:   0x588c5f3: jmp 0x588c7a6
// asm:   0x588c676: jmp 0x588c69a

System_String_o * Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnPreset(MethodInfo *method)

{
  char cVar1;
  Settings_InGameSet_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar3;
  Settings_InGameTitanSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  bool bVar6;
  System_Single_array *actual;
  System_Single_array *pSVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar8;
  System_String_o **ppSVar9;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545288 == '\0') {
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
    Il2CppMethodInitialized_07545288 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588c56c;
label_0588c499:
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0588c4a6;
label_0588c57e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588c5a2;
label_0588c4b7:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588c499;
label_0588c56c:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0588c57e;
label_0588c4a6:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588c4b7;
label_0588c5a2:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  ppSVar9 = &"Default";
  if (pSVar2 == (Settings_InGameSet_o *)0x0) goto label_0588c797;
  ppSVar9 = &"Default";
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0588c606;
label_0588c5d6:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588c5e3;
label_0588c626:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pSVar2 = pGVar3->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0588c5d6;
label_0588c606:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588c626;
label_0588c5e3:
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pSVar2 = pGVar3->_Working_k__BackingField;
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar4 = (pSVar2->fields).Titan, pSVar4 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar5 = (pSVar4->fields).TitanSpawnEnabled, pSVar5 == (Settings_BoolSetting_o *)0x0)) {
label_0588c7a6:
    ThrowNullReferenceException();
  }
  if ((pSVar5->fields)._value == false) goto label_0588c797;
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    cVar1 = pGVar3->_titanSpawnPresetCustom;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (cVar1 == '\0') {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    actual = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnProbabilities((MethodInfo *)klass);
    pSVar7 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
    if (pSVar7 == (System_Single_array *)0x0) goto label_0588c7a6;
    if ((int)pSVar7->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar7->m_Items[0] = 100.0;
    bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Matches(actual,pSVar7,method_00);
    if (bVar6) {
      ppSVar9 = &"All Normal";
      goto label_0588c797;
    }
    pSVar7 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
              ((System_Array_o *)pSVar7,
               FieldRva_PrivateImplementationDetails_0A95B058D7E04CB679EC0BB7F95FA5C0DC8DD51BCB9AD7669DDBDD3EA54E9D23
               ,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pMVar8 = extraout_RDX_00;
    }
    bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Matches(actual,pSVar7,pMVar8);
    if (bVar6) {
      ppSVar9 = &"Variety";
      goto label_0588c797;
    }
    pSVar7 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
              ((System_Array_o *)pSVar7,
               FieldRva_PrivateImplementationDetails_E9A2C0082D51D723E68D8CF41DC35C2AADBFDECED5F50F2C2900AAFF99643D89
               ,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX_01;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pMVar8 = extraout_RDX_02;
    }
    bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Matches(actual,pSVar7,pMVar8);
    if (bVar6) {
      ppSVar9 = &"All Abnormals";
      goto label_0588c797;
    }
  }
  ppSVar9 = &"Custom";
label_0588c797:
  return *ppSVar9;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanSpawnPreset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnPreset (System_String_o* preset, const MethodInfo* method);
// 0x588c8d0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588c927: jmp 0x588cbe8
// asm:   0x588ca3f: jmp 0x588cbee
// asm:   0x588cbe3: jmp 0x588cb46

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnPreset
               (System_String_o *preset,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_BoolSetting_o *__this;
  bool bVar4;
  System_Single_array *values;
  System_RuntimeFieldHandle_Fields *pSVar5;
  System_RuntimeFieldHandle_o fldHandle;
  
  if (Il2CppMethodInitialized_07545289 == '\0') {
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
    Il2CppMethodInitialized_07545289 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588c8f8;
label_0588c9c2:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0588c905;
label_0588c9d4:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588c915;
label_0588c9f7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588c9c2;
label_0588c8f8:
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0588c9d4;
label_0588c905:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588c9f7;
label_0588c915:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (pSVar2 == (Settings_InGameSet_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0588ca23;
label_0588ca52:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588ca2f;
label_0588ca71:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0588ca52;
label_0588ca23:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588ca71;
label_0588ca2f:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar2 != (Settings_InGameSet_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) {
    __this = (pSVar3->fields).TitanSpawnEnabled;
    bVar4 = System_String__op_Inequality(preset,"Default",(MethodInfo *)0x0);
    if (__this != (Settings_BoolSetting_o *)0x0) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this,bVar4,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      bVar4 = System_String__op_Equality(preset,"Custom",(MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom = bVar4;
      bVar4 = System_String__op_Equality(preset,"All Normal",(MethodInfo *)0x0);
      if (bVar4) {
        fldHandle.fields.value = (System_RuntimeFieldHandle_Fields)6;
        values = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
        if (values == (System_Single_array *)0x0) goto label_0588cbee;
        if ((int)values->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        values->m_Items[0] = 100.0;
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      else {
        bVar4 = System_String__op_Equality(preset,"Variety",(MethodInfo *)0x0);
        if (bVar4) {
          values = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
          pSVar5 = (System_RuntimeFieldHandle_Fields *)
                   &
                   FieldRva_PrivateImplementationDetails_0A95B058D7E04CB679EC0BB7F95FA5C0DC8DD51BCB9AD7669DDBDD3EA54E9D23
          ;
        }
        else {
          bVar4 = System_String__op_Equality(preset,"All Abnormals",(MethodInfo *)0x0);
          if (!bVar4) {
            return;
          }
          values = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
          pSVar5 = (System_RuntimeFieldHandle_Fields *)
                   &
                   FieldRva_PrivateImplementationDetails_E9A2C0082D51D723E68D8CF41DC35C2AADBFDECED5F50F2C2900AAFF99643D89
          ;
        }
        fldHandle.fields.value = (System_RuntimeFieldHandle_Fields)pSVar5->value;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                  ((System_Array_o *)values,fldHandle,(MethodInfo *)0x0);
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbabilities
                (values,(MethodInfo *)fldHandle.fields.value);
      return;
    }
  }
label_0588cbee:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanSpawnProbabilities
// il2cpp: System_Single_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnProbabilities (const MethodInfo* method);
// 0x589eec0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589ef6f: jmp 0x589f348
// asm:   0x589f0b0: jmp 0x589f348
// asm:   0x589f13f: jmp 0x589f348
// asm:   0x589f1cb: jmp 0x589f348
// asm:   0x589f25a: jmp 0x589f348
// asm:   0x589f2e6: jmp 0x589f348

System_Single_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnProbabilities(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  System_Single_array *pSVar5;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754528a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754528a = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589eee8;
label_0589efb6:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589eef5;
label_0589efc8:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589efb6;
label_0589eee8:
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589efc8;
label_0589eef5:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField ==
      (Settings_InGameSet_o *)0x0) {
    pSVar5 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,0);
    return pSVar5;
  }
  pSVar5 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589ef4b;
label_0589f018:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589ef5b;
label_0589f03b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589f018;
label_0589ef4b:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589f03b;
label_0589ef5b:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if ((((pSVar2 == (Settings_InGameSet_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
      (pSVar4 = (pSVar3->fields).TitanSpawnNormal, pSVar4 == (Settings_FloatSetting_o *)0x0)) ||
     (pSVar5 == (System_Single_array *)0x0)) goto label_0589f348;
  if ((int)pSVar5->max_length == 0) goto label_0589f34d;
  pSVar5->m_Items[0] = (pSVar4->fields)._value;
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589f0a0;
label_0589f0d0:
    il2cpp_codegen_runtime_class_init(klass);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) goto label_0589f0d0;
label_0589f0a0:
    pSVar2 = klass->static_fields->_Working_k__BackingField;
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).TitanSpawnAbnormal, pSVar4 == (Settings_FloatSetting_o *)0x0))
  goto label_0589f348;
  if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_0589f34d;
  pSVar5->m_Items[1] = (pSVar4->fields)._value;
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589f12f;
label_0589f15f:
    il2cpp_codegen_runtime_class_init(klass);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) goto label_0589f15f;
label_0589f12f:
    pSVar2 = klass->static_fields->_Working_k__BackingField;
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).TitanSpawnJumper, pSVar4 == (Settings_FloatSetting_o *)0x0))
  goto label_0589f348;
  if ((uint)pSVar5->max_length < 3) goto label_0589f34d;
  pSVar5->m_Items[2] = (pSVar4->fields)._value;
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589f1bb;
label_0589f1eb:
    il2cpp_codegen_runtime_class_init(klass);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) goto label_0589f1eb;
label_0589f1bb:
    pSVar2 = klass->static_fields->_Working_k__BackingField;
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).TitanSpawnCrawler, pSVar4 == (Settings_FloatSetting_o *)0x0))
  goto label_0589f348;
  if ((pSVar5->max_length & 0xfffffffc) == 0) goto label_0589f34d;
  pSVar5->m_Items[3] = (pSVar4->fields)._value;
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589f24a;
label_0589f27a:
    il2cpp_codegen_runtime_class_init(klass);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) goto label_0589f27a;
label_0589f24a:
    pSVar2 = klass->static_fields->_Working_k__BackingField;
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).TitanSpawnThrower, pSVar4 == (Settings_FloatSetting_o *)0x0))
  goto label_0589f348;
  if ((uint)pSVar5->max_length < 5) goto label_0589f34d;
  pSVar5->m_Items[4] = (pSVar4->fields)._value;
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589f2d6;
label_0589f303:
    il2cpp_codegen_runtime_class_init(klass);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) goto label_0589f303;
label_0589f2d6:
    pSVar2 = klass->static_fields->_Working_k__BackingField;
  }
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).TitanSpawnPunk, pSVar4 != (Settings_FloatSetting_o *)0x0)) {
    if (5 < (uint)pSVar5->max_length) {
      pSVar5->m_Items[5] = (pSVar4->fields)._value;
      return pSVar5;
    }
label_0589f34d:
    ThrowIndexOutOfRangeException();
  }
label_0589f348:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanSpawnProbability
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbability (int32_t index, float value, const MethodInfo* method);
// 0x589f5c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589f622: jmp 0x589f72d
// asm:   0x589f6d2: jmp 0x589f72d
// asm:   0x589f728: jmp 0x589f825

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbability
               (int32_t index,float value,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *__this;
  Settings_FloatSetting_o *__this_00;
  Settings_FloatSetting_array *pSVar3;
  Il2CppClass *klass;
  float fVar4;
  
  if (Il2CppMethodInitialized_0754528b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_0754528b = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589f5f2;
label_0589f672:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589f5ff;
label_0589f684:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589f610;
label_0589f6a8:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589f672;
label_0589f5f2:
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589f684;
label_0589f5ff:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589f6a8;
label_0589f610:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  if (pSVar1 == (Settings_InGameSet_o *)0x0) {
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
         (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
    return;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnSettings((MethodInfo *)klass);
  }
  else {
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnSettings((MethodInfo *)klass);
  }
  if (index < 0) {
    return;
  }
  if (pSVar3 == (Settings_FloatSetting_array *)0x0) goto label_0589f825;
  if ((int)pSVar3->max_length <= index) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589f70b;
label_0589f744:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589f718;
label_0589f764:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589f744;
label_0589f70b:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589f764;
label_0589f718:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (__this = (pSVar2->fields).TitanSpawnEnabled, __this != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this,true,
               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom = true;
    if ((uint)pSVar3->max_length <= (uint)index) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = pSVar3->m_Items[(uint)index];
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar4 = System_Math__Min_54baee0(100.0,value,(MethodInfo *)0x0);
    fVar4 = System_Math__Max_54bad70(0.0,fVar4,(MethodInfo *)0x0);
    if (__this_00 != (Settings_FloatSetting_o *)0x0) {
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)__this_00,fVar4,
                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      return;
    }
  }
label_0589f825:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ResetTitanSpawnProbabilities
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ResetTitanSpawnProbabilities (const MethodInfo* method);
// 0x589fcd0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ResetTitanSpawnProbabilities(MethodInfo *method)

{
  System_Single_array *values;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754528c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_0754528c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom = true;
  method_00 = (MethodInfo *)&g_data_00000006;
  values = (System_Single_array *)SZArrayNew(TypeInfo_float_array,6);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbabilities(values,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AutofillTitanSpawnProbabilities
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AutofillTitanSpawnProbabilities (const MethodInfo* method);
// 0x589fd40
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589fe03: jmp 0x589fe1e
// asm:   0x589febb: jmp 0x589fee5
// asm:   0x58a0043: jmp 0x58a0079

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AutofillTitanSpawnProbabilities(MethodInfo *method)

{
  float fVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  int32_t iVar4;
  System_Single_array *values;
  System_Func_float__bool__o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar6;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  ulong uVar7;
  ulong uVar8;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_01;
  Il2CppClass *klass;
  float fVar9;
  
  if (Il2CppMethodInitialized_0754528d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Count_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_float_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AutofillTitanSpawnProbabilities_b__114_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AutofillTitanSpawnProbabilities_b__114_1
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_0754528d = '\x01';
  }
  method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  values = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnProbabilities((MethodInfo *)method_01);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pSVar5 = pGVar6->__9__114_0;
  }
  else {
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pSVar5 = pGVar6->__9__114_0;
  }
  if (pSVar5 == (System_Func_float__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar3 = (Il2CppObject *)pGVar6->__9;
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_float_bool);
    System_Func_float__bool____ctor
              (pSVar5,pIVar3,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AutofillTitanSpawnProbabilities_b__114_0
               ,(MethodInfo_4F1ABC0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar6->__9__114_0 = pSVar5;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__114_0);
  }
  iVar4 = System_Linq_Enumerable__Count_float_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)values,
                     (System_Func_TSource__bool__o *)pSVar5,
                     (MethodInfo_34E83C0 *)MethodInfo_System_Linq_Enumerable_Count_float);
  if (iVar4 == 0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pSVar5 = pGVar6->__9__114_1;
  }
  else {
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pSVar5 = pGVar6->__9__114_1;
  }
  if (pSVar5 == (System_Func_float__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar3 = (Il2CppObject *)pGVar6->__9;
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_float_bool);
    System_Func_float__bool____ctor
              (pSVar5,pIVar3,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AutofillTitanSpawnProbabilities_b__114_1
               ,(MethodInfo_4F1ABC0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar6->__9__114_1 = pSVar5;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__114_1);
  }
  source = System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)values,
                      (System_Func_TSource__bool__o *)pSVar5,
                      (MethodInfo_35034B0 *)MethodInfo_System_Linq_Enumerable_Where_float);
  method_00 = (MethodInfo *)0x0;
  fVar9 = System_Linq_Enumerable__Sum
                    ((System_Collections_Generic_IEnumerable_float__o *)source,(MethodInfo *)0x0);
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar9 = System_Math__Max_54bad70(0.0,100.0 - fVar9,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_titanSpawnPresetCustom = true;
  if (values == (System_Single_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (int)values->max_length) {
    uVar7 = values->max_length & 0xffffffff;
    uVar8 = 0;
    do {
      if (uVar7 <= uVar8) {
label_058a00b4:
        ThrowIndexOutOfRangeException();
      }
      fVar1 = values->m_Items[uVar8];
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        uVar2 = (uint)values->max_length;
      }
      else {
        uVar2 = (uint)values->max_length;
      }
      uVar7 = (ulong)uVar2;
      if (ABS(fVar1) < 0.0001) {
        if (uVar7 <= uVar8) goto label_058a00b4;
        values->m_Items[uVar8] = fVar9 / (float)iVar4;
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)uVar2);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbabilities(values,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanHealthEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanHealthEnabled (bool enabled, const MethodInfo* method);
// 0x58a00c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a015b: jmp 0x58a034d
// asm:   0x58a02a6: jmp 0x58a034d

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanHealthEnabled(bool enabled,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_IntSetting_o *__this;
  Settings_IntSetting_o *pSVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_0754528e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754528e = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a00ec;
label_058a01af:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058a00f9;
label_058a01c1:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a010a;
label_058a01e5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a01af;
label_058a00ec:
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058a01c1;
label_058a00f9:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a01e5;
label_058a010a:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (pSVar1 == (Settings_InGameSet_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058a0136;
label_058a0217:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a0147;
label_058a023b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058a0217;
label_058a0136:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a023b;
label_058a0147:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) goto label_058a034d;
  __this = (pSVar2->fields).TitanHealthMode;
  iVar4 = 0;
  if (enabled) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452cd != '\0') goto label_058a0289;
label_058a02b9:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_058a0296;
label_058a02d9:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    else {
      if (Il2CppMethodInitialized_075452cd == '\0') goto label_058a02b9;
label_058a0289:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_058a02d9;
label_058a0296:
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
        (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) ||
       (pSVar3 = (pSVar2->fields).TitanHealthMode, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_058a034d;
    iVar4 = (pSVar3->fields)._value;
    if ((((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar4 = System_Math__Max_54bad40(1,iVar4,(MethodInfo *)0x0);
  }
  if (__this != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this,iVar4,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    return;
  }
label_058a034d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanSpawnSettings
// il2cpp: Settings_FloatSetting_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnSettings (const MethodInfo* method);
// 0x589f830
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589f8ac: jmp 0x589fcb4
// asm:   0x589f971: jmp 0x589fcb4
// asm:   0x589fa22: jmp 0x589fcb4
// asm:   0x589fad0: jmp 0x589fcb4
// asm:   0x589fb81: jmp 0x589fcb4
// asm:   0x589fc2f: jmp 0x589fcb4

Settings_FloatSetting_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnSettings(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_FloatSetting_array *pSVar4;
  Il2CppObject *pIVar5;
  
  if (Il2CppMethodInitialized_0754528f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting_array);
    Il2CppMethodInitialized_0754528f = '\x01';
  }
  pSVar4 = (Settings_FloatSetting_array *)SZArrayNew(TypeInfo_Settings_FloatSetting_array,6);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589f8bf;
label_0589f890:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589f89c;
label_0589f8de:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589f890;
label_0589f8bf:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589f8de;
label_0589f89c:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar4 == (Settings_FloatSetting_array *)0x0)) goto label_0589fcb4;
  pSVar3 = (pSVar2->fields).TitanSpawnNormal;
  if ((pSVar3 != (Settings_FloatSetting_o *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) goto label_0589fcbe;
  if ((int)pSVar4->max_length == 0) goto label_0589fcb9;
  pSVar4->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589f995;
label_0589f961:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589f961;
label_0589f995:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) goto label_0589fcb4;
  pSVar3 = (pSVar2->fields).TitanSpawnAbnormal;
  if ((pSVar3 != (Settings_FloatSetting_o *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) goto label_0589fcbe;
  if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_0589fcb9;
  pSVar4->m_Items[1] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589fa46;
label_0589fa12:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589fa12;
label_0589fa46:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) goto label_0589fcb4;
  pSVar3 = (pSVar2->fields).TitanSpawnJumper;
  if ((pSVar3 != (Settings_FloatSetting_o *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) goto label_0589fcbe;
  if ((uint)pSVar4->max_length < 3) goto label_0589fcb9;
  pSVar4->m_Items[2] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589faf4;
label_0589fac0:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589fac0;
label_0589faf4:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) goto label_0589fcb4;
  pSVar3 = (pSVar2->fields).TitanSpawnCrawler;
  if ((pSVar3 != (Settings_FloatSetting_o *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) goto label_0589fcbe;
  if ((pSVar4->max_length & 0xfffffffc) == 0) goto label_0589fcb9;
  pSVar4->m_Items[3] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 3);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589fba5;
label_0589fb71:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589fb71;
label_0589fba5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar1 == (Settings_InGameSet_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 == (Settings_InGameTitanSettings_o *)0x0)) goto label_0589fcb4;
  pSVar3 = (pSVar2->fields).TitanSpawnThrower;
  if ((pSVar3 != (Settings_FloatSetting_o *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) goto label_0589fcbe;
  if ((uint)pSVar4->max_length < 5) goto label_0589fcb9;
  pSVar4->m_Items[4] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 4);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589fc53;
label_0589fc1f:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589fc1f;
label_0589fc53:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) {
    pSVar3 = (pSVar2->fields).TitanSpawnPunk;
    if ((pSVar3 == (Settings_FloatSetting_o *)0x0) ||
       (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar4->obj).klass)->_1).element_class),
       pIVar5 != (Il2CppObject *)0x0)) {
      if (5 < (uint)pSVar4->max_length) {
        pSVar4->m_Items[5] = pSVar3;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 5);
        return pSVar4;
      }
label_0589fcb9:
      ThrowIndexOutOfRangeException();
    }
label_0589fcbe:
    pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
  }
label_0589fcb4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanSpawnProbabilities
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbabilities (System_Single_array* values, const MethodInfo* method);
// 0x589f470
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589f496: cmp byte ptr [rip + 0x1ca5e30], 0
// asm:   0x589f4b0: jmp 0x589f59f

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbabilities
               (System_Single_array *values,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  Settings_FloatSetting_array *pSVar3;
  uint uVar4;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545290 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_07545290 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (((values != (System_Single_array *)0x0) && (*(long *)((long)klass->static_fields + 0x40) != 0)) &&
     (5 < (int)values->max_length)) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnSettings((MethodInfo *)klass);
    if (pSVar3 == (Settings_FloatSetting_array *)0x0) {
label_0589f5af:
      ThrowNullReferenceException();
    }
    uVar2 = (uint)pSVar3->max_length;
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if ((uVar2 <= uVar4) || ((uint)values->max_length <= uVar4)) {
          ThrowIndexOutOfRangeException();
        }
        if (pSVar3->m_Items[(int)uVar4] == (Settings_FloatSetting_o *)0x0) goto label_0589f5af;
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)pSVar3->m_Items[(int)uVar4],values->m_Items[(int)uVar4],
                   (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        uVar4 = uVar4 + 1;
        uVar2 = (uint)pSVar3->max_length;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Matches
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__Matches (System_Single_array* actual, System_Single_array* expected, const MethodInfo* method);
// 0x589f360
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589f3cf: nop 
// asm:   0x589f447: jmp 0x589f44f

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__Matches
               (System_Single_array *actual,System_Single_array *expected,MethodInfo *method)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_07545291 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07545291 = '\x01';
  }
  if ((actual == (System_Single_array *)0x0) || (expected == (System_Single_array *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar4 = (int)actual->max_length;
  if (iVar4 == (int)expected->max_length) {
    if (iVar4 < 1) {
      bVar3 = true;
    }
    else {
      uVar5 = actual->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if ((uVar5 <= uVar6) || ((uint)expected->max_length <= uVar6)) {
          ThrowIndexOutOfRangeException();
        }
        fVar7 = actual->m_Items[uVar6];
        fVar1 = expected->m_Items[uVar6];
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar7 = ABS(fVar7 - fVar1);
        bVar3 = fVar7 <= 0.001;
        if (0.001 < fVar7) {
          return bVar3;
        }
        uVar6 = uVar6 + 1;
        uVar2 = (uint)actual->max_length;
        uVar5 = (ulong)uVar2;
      } while ((long)uVar6 < (long)(int)uVar2);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ChangeSandboxField
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeSandboxField (int32_t index, System_String_o* value, System_String_o* mapCategory, const MethodInfo* method);
// 0x58930a0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeSandboxField
               (int32_t index,System_String_o *value,System_String_o *mapCategory,MethodInfo *method)

{
  Settings_TypedSetting_T__o *__this;
  Settings_SandboxGameCreateConfiguration_o *pSVar1;
  bool bVar2;
  System_Collections_Generic_List_AottgSandboxField__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  long lVar3;
  System_String_o *pSVar4;
  Settings_InGameSet_o *settings;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *pGVar5;
  
  if (Il2CppMethodInitialized_07545292 == '\0') {
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
    Il2CppMethodInitialized_07545292 = '\x01';
  }
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)pGVar5);
  if (index < 0) {
    return false;
  }
  if (!bVar2) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  if (__this_00 == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) goto label_058933b8;
  if (index < (__this_00->fields)._size) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal
      ;
      if (__this_00 == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) goto label_058933b8;
    }
    field = System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)__this_00,index,
                       (MethodInfo_395CF20 *)
                       MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item);
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetValue(field,value,method_00);
    if (bVar2) {
      if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
        bVar2 = System_String__op_Equality
                          ((field->fields)._Id_k__BackingField,"general.MapName",(MethodInfo *)0x0);
        if (!bVar2) {
label_0589332f:
          bVar2 = System_String__op_Equality
                            ((field->fields)._Id_k__BackingField,"general.MapCategory",(MethodInfo *)0x0);
          if (((bVar2) ||
              (bVar2 = System_String__op_Equality
                                 ((field->fields)._Id_k__BackingField,"general.MapName",(MethodInfo *)0x0)
              , bVar2)) ||
             (bVar2 = System_String__op_Equality
                                ((field->fields)._Id_k__BackingField,"general.GameMode",(MethodInfo *)0x0),
             bVar2)) {
            pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox((MethodInfo *)pGVar5);
          }
          else {
            pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields((MethodInfo *)pGVar5);
          }
          return true;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        lVar3 = il2cpp_runtime_helper_058a7670(0);
        if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
          __this = *(Settings_TypedSetting_T__o **)(*(long *)(lVar3 + 0x48) + 0x30);
          pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration
          ;
          lVar3 = il2cpp_runtime_helper_058a7670(0);
          if ((lVar3 != 0) &&
             ((*(long *)(lVar3 + 0x48) != 0 && (lVar3 = *(long *)(*(long *)(lVar3 + 0x48) + 0x38), lVar3 != 0)
              ))) {
            pSVar4 = *(System_String_o **)(lVar3 + 0x20);
            if (mapCategory == (System_String_o *)0x0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              lVar3 = il2cpp_runtime_helper_058a7670(0);
              if (((lVar3 == 0) || (*(long *)(lVar3 + 0x48) == 0)) ||
                 (lVar3 = *(long *)(*(long *)(lVar3 + 0x48) + 0x30), lVar3 == 0)) goto label_058933b8;
              mapCategory = *(System_String_o **)(lVar3 + 0x20);
            }
            if ((pSVar1 != (Settings_SandboxGameCreateConfiguration_o *)0x0) &&
               (pSVar4 = Settings_SandboxGameCreateConfiguration__FindMapCategory
                                   (pSVar1,pSVar4,mapCategory,(MethodInfo *)0x0),
               __this != (Settings_TypedSetting_T__o *)0x0)) {
              Settings_TypedSetting_object___set_Value
                        (__this,(Il2CppObject *)pSVar4,
                         (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       SandboxConfiguration;
              settings = (Settings_InGameSet_o *)il2cpp_runtime_helper_058a7670(0);
              if (pSVar1 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
                Settings_SandboxGameCreateConfiguration__ApplyMapChange(pSVar1,settings,(MethodInfo *)0x0);
                goto label_0589332f;
              }
            }
          }
        }
      }
label_058933b8:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ChangeMultiplayerField
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeMultiplayerField (int32_t index, System_String_o* value, const MethodInfo* method);
// 0x58a06a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a06cf: cmp byte ptr [rip + 0x1ca4b97], 0
// asm:   0x58a0713: xor ebp, ebp
// asm:   0x58a0715: test r15d, r15d
// asm:   0x58a071e: jmp 0x58a09fe

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeMultiplayerField
               (int32_t index,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Settings_TypedSetting_int__o *__this;
  bool bVar5;
  int iVar6;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar7;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  ulong uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *klass;
  long lVar9;
  int32_t value_00;
  
  if (Il2CppMethodInitialized_07545293 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Proximity");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"Global");
    Il2CppMethodInitialized_07545293 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_0754526d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754526d = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar2 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
    klass = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession = klass;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    obj = (Il2CppObject *)
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields((MethodInfo *)klass);
  }
  else {
    obj = (Il2CppObject *)
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields((MethodInfo *)klass);
  }
  if (Il2CppMethodInitialized_075452ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452ce = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if ((index < 0) ||
     (*(char *)((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
               0x20) == '\0')) {
    return false;
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar3 = obj->klass;
    uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar9) ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField) {
          pVVar7 = (VirtualInvokeData *)&pIVar3->vtable[*(int *)((long)&pIVar4->offset + lVar9)].methodPtr;
          goto label_058a08b1;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,0);
label_058a08b1:
    iVar6 = (*pVVar7->methodPtr)(obj,pVVar7->method);
    if (iVar6 <= index) {
      return false;
    }
    pIVar3 = obj->klass;
    uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyList_AottgSandboxField__c **)
             ((long)&pIVar4->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
          pVVar7 = (VirtualInvokeData *)&pIVar3->vtable[*(int *)((long)&pIVar4->offset + lVar9)].methodPtr;
          goto label_058a0928;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField
                        ,0);
label_058a0928:
    field = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)(*pVVar7->methodPtr)(obj,index,pVVar7->method);
    if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
      value_00 = 0;
      bVar5 = System_String__op_Equality
                        ((field->fields)._Id_k__BackingField,"misc.VoiceChat",(MethodInfo *)0x0);
      if (!bVar5) {
        method_00 = extraout_RDX;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          method_00 = extraout_RDX_00;
        }
        bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetValue(field,value,method_00);
        return bVar5;
      }
      bVar5 = System_String__op_Equality(value,"Global",(MethodInfo *)0x0);
      if (!bVar5) {
        bVar5 = System_String__op_Equality(value,"Proximity",(MethodInfo *)0x0);
        value_00 = 1;
        if (!bVar5) {
          bVar5 = System_String__op_Equality(value,"None",(MethodInfo *)0x0);
          value_00 = 2;
          if (!bVar5) {
            return false;
          }
        }
      }
      __this = (Settings_TypedSetting_int__o *)(field->fields)._Setting_k__BackingField;
      if (__this != (Settings_TypedSetting_int__o *)0x0) {
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting
           )) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        Settings_TypedSetting_int___set_Value
                  (__this,value_00,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleSandboxAddon
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleSandboxAddon (int32_t index, bool enabled, const MethodInfo* method);
// 0x58a0a40
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a0bd8: jmp 0x58a0ea9
// asm:   0x58a0cc9: jmp 0x58a0ea9
// asm:   0x58a0e35: test rbx, rbx
// asm:   0x58a0e38: je 0x58a0ea9

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleSandboxAddon
               (int32_t index,bool enabled,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_ListSetting_StringSetting__o *pSVar4;
  System_Collections_Generic_List_T__o *source;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *defaultValue;
  bool bVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0_o *__this_00;
  System_String_array *pSVar6;
  System_Func_StringSetting__bool__o *__this_01;
  long lVar7;
  System_Predicate_T__o *match;
  Settings_StringSetting_o *__this_02;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_01;
  
  if (Il2CppMethodInitialized_07545294 == '\0') {
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
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass121_0_ToggleSandboxAddon_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass121_0_ToggleSandboxAddon_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass121_0);
    Il2CppMethodInitialized_07545294 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass121_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0___ctor(__this_00,(MethodInfo *)0x0);
  method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_01);
  if (index < 0) {
    return false;
  }
  if (!bVar5) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
  if (pSVar6 == (System_String_array *)0x0) goto label_058a0ea9;
  if ((int)pSVar6->max_length <= index) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
    if (pSVar6 == (System_String_array *)0x0) goto label_058a0ea9;
  }
  if ((uint)pSVar6->max_length <= (uint)index) {
    ThrowIndexOutOfRangeException();
  }
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass121_0_o *)0x0)
  goto label_058a0ea9;
  (__this_00->fields).addonName = pSVar6->m_Items[(uint)index];
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).addonName);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a0bc8;
label_058a0c03:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a0c03;
label_058a0bc8:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).Addons, pSVar4 == (Settings_ListSetting_StringSetting__o *)0x0))
  goto label_058a0ea9;
  source = (pSVar4->fields)._value;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass121_0_ToggleSandboxAddon_b__0
             ,(MethodInfo_4F19300 *)0x0);
  bVar5 = System_Linq_Enumerable__Any_object__34dfce0
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__bool__o *)__this_01,
                     (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
  if ((bVar5) || (!enabled)) {
    if (bVar5 && !enabled) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      lVar7 = il2cpp_runtime_helper_058a7670(0);
      if (((lVar7 == 0) || (*(long *)(lVar7 + 0x48) == 0)) ||
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x48) + 0x58), lVar7 == 0)) goto label_058a0ea9;
      __this = *(System_Collections_Generic_List_object__o **)(lVar7 + 0x20);
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_StringSetting);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass121_0_ToggleSandboxAddon_b__1
                 ,(MethodInfo_3DC95B0 *)0x0);
      if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_058a0ea9;
      System_Collections_Generic_List_object___RemoveAll
                (__this,match,
                 (MethodInfo_395EF50 *)MethodInfo_System_Collections_Generic_List_StringSetting_RemoveAll);
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452cd != '\0') goto label_058a0ca5;
label_058a0d76:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_058a0cb5;
label_058a0d99:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    else {
      if (Il2CppMethodInitialized_075452cd == '\0') goto label_058a0d76;
label_058a0ca5:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_058a0d99;
label_058a0cb5:
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0))
    goto label_058a0ea9;
    pSVar4 = (pSVar3->fields).Addons;
    defaultValue = (__this_00->fields).addonName;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_5b7b730(__this_02,defaultValue,0x7fffffff,(MethodInfo *)0x0);
    if (pSVar4 == (Settings_ListSetting_StringSetting__o *)0x0) goto label_058a0ea9;
    Settings_ListSetting_object___AddItem
              ((Settings_ListSetting_T__o *)pSVar4,(Settings_BaseSetting_o *)__this_02,
               (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_StringSetting_AddItem);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    method_00 = (MethodInfo *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058a0e2c;
label_058a0e81:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    method_00 = (MethodInfo *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058a0e81;
label_058a0e2c:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (method_00 != (MethodInfo *)0x0) {
    Settings_SandboxGameCreateConfiguration__SyncAddonSettings
              ((Settings_SandboxGameCreateConfiguration_o *)method_00,
               *(Settings_InGameSet_o **)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                + 0x40),(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields(method_00);
    return true;
  }
label_058a0ea9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsSandboxAddonSelected
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSandboxAddonSelected (int32_t index, const MethodInfo* method);
// 0x5886000
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58860a2: jmp 0x5886119
// asm:   0x5886114: jmp 0x58861bd

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSandboxAddonSelected(int32_t index,MethodInfo *method)

{
  int iVar1;
  System_String_array *pSVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  Settings_ListSetting_StringSetting__o *pSVar5;
  System_Collections_Generic_List_T__o *source;
  bool bVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0_o *__this;
  System_Func_StringSetting__bool__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_07545295 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass122_0_IsSandboxAddonSelected_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass122_0);
    Il2CppMethodInitialized_07545295 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass122_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass122_0_o *)0x0)
  goto label_058861bd;
  (__this->fields).index = index;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_00);
  }
  else {
    bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox
                      ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if ((!bVar6) || (iVar1 = (__this->fields).index, iVar1 < 0)) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
  if (pSVar2 == (System_String_array *)0x0) goto label_058861bd;
  if ((int)pSVar2->max_length <= iVar1) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058860f8;
label_0588612e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05886104;
label_0588614d:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0588612e;
label_058860f8:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588614d;
label_05886104:
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar5 = (pSVar4->fields).Addons, pSVar5 != (Settings_ListSetting_StringSetting__o *)0x0)) {
    source = (pSVar5->fields)._value;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass122_0_IsSandboxAddonSelected_b__0
               ,(MethodInfo_4F19300 *)0x0);
    bVar6 = System_Linq_Enumerable__Any_object__34dfce0
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (System_Func_TSource__bool__o *)__this_00,
                       (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
    return bVar6;
  }
label_058861bd:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ReplaceSandboxWorking
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ReplaceSandboxWorking (Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x58a0ec0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a118a: jmp 0x58a14c6
// asm:   0x58a13bb: jmp 0x58a14c6
// asm:   0x58a1449: jmp 0x58a14c6

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ReplaceSandboxWorking
               (Settings_InGameSet_o *settings,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar2;
  void *pvVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *__this;
  Settings_InGameSet_o *pSVar5;
  System_String_o *pSVar6;
  Il2CppClass *klass;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545296 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    Il2CppMethodInitialized_07545296 = '\x01';
  }
  if (settings == (Settings_InGameSet_o *)0x0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452e6 != '\0') goto label_058a0f41;
label_058a11a7:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452e6 == '\0') goto label_058a11a7;
label_058a0f41:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_ShowRoomSettings_k__BackingField = false;
  pGVar2->_configurationMode = 1;
  pSVar6 = "Sandbox";
  if (Il2CppMethodInitialized_075452e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e0 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (((Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  pvVar3 = klass->static_fields;
  *(System_String_o **)((long)pvVar3 + 0x48) = pSVar6;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar3 + 0x48));
  if (Il2CppMethodInitialized_075452e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e1 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Subcategory_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Subcategory_k__BackingField);
  if (Il2CppMethodInitialized_075452e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e2 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Experience_k__BackingField = (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Experience_k__BackingField);
  if (Il2CppMethodInitialized_075452e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e3 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_RuleResult_k__BackingField = (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_RuleResult_k__BackingField);
  if (Il2CppMethodInitialized_075452e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_SelectedPresetName_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_SelectedPresetName_k__BackingField);
  pSVar6 = "General";
  if (Il2CppMethodInitialized_075452e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e5 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_SandboxSection_k__BackingField = pSVar6;
  Il2CppCodeGenWriteBarrier(&pGVar2->_SandboxSection_k__BackingField);
  if (Il2CppMethodInitialized_075452c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    Il2CppMethodInitialized_075452c2 = '\x01';
  }
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(pSVar5,(MethodInfo *)0x0);
  pSVar6 = (*(settings->klass->vtable)._8_SerializeToJsonString.methodPtr)
                     (settings,(settings->klass->vtable)._8_SerializeToJsonString.method);
  if (pSVar5 == (Settings_InGameSet_o *)0x0) goto label_058a14c6;
  (*(pSVar5->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
            (pSVar5,pSVar6,(pSVar5->klass->vtable)._9_DeserializeFromJsonString.method);
  if (Il2CppMethodInitialized_075452e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e9 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Working_k__BackingField = pSVar5;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Working_k__BackingField);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a1176;
label_058a1346:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a1346;
label_058a1176:
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar5 == (Settings_InGameSet_o *)0x0) ||
     (pSVar4 = (pSVar5->fields).ExperienceName, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_058a14c6;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a13ab;
label_058a13df:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a13df;
label_058a13ab:
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar5 == (Settings_InGameSet_o *)0x0) ||
     (pSVar4 = (pSVar5->fields).ExperienceVariant, pSVar4 == (Settings_StringSetting_o *)0x0))
  goto label_058a14c6;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a1439;
label_058a146a:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a146a;
label_058a1439:
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar5 != (Settings_InGameSet_o *)0x0) &&
     (__this = (pSVar5->fields).Sandbox, __this != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this,true,
               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    method_00 = (MethodInfo *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (method_00 != (MethodInfo *)0x0) {
      Settings_SandboxGameCreateConfiguration__Reset
                ((Settings_SandboxGameCreateConfiguration_o *)method_00,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox(method_00);
      return;
    }
  }
label_058a14c6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RefreshSandboxContent
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent (const MethodInfo* method);
// 0x58a14d0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  MethodInfo *method_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545297 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545297 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)klass);
  }
  else {
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)klass);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    method_00 = (MethodInfo *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (method_00 == (MethodInfo *)0x0) {
      ThrowNullReferenceException();
    }
    Settings_SandboxGameCreateConfiguration__Reset
              ((Settings_SandboxGameCreateConfiguration_o *)method_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox(method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FieldOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions (Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x5880380
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58805b5: jmp 0x5880e98
// asm:   0x5880658: jmp 0x5880bd2
// asm:   0x58809df: jmp 0x5880e98
// asm:   0x5880b55: jmp 0x5880e98

System_String_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions
          (Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_WeatherSettings_o *pSVar2;
  Settings_SetSettingsContainer_WeatherSet__o *__this;
  Settings_ExperienceRuleResult_o *pSVar3;
  Settings_UIRule_o *pSVar4;
  Settings_BaseSetting_o *pSVar5;
  Settings_InspectorSettingMetadata_o *pSVar6;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  System_Collections_Generic_List_ExperienceRuleField__o *source;
  Settings_InGameSet_o *pSVar7;
  Settings_InGameGeneralSettings_o *pSVar8;
  Settings_StringSetting_o *pSVar9;
  Il2CppObject *pIVar10;
  bool bVar11;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0_o *__this_00;
  System_String_array *pSVar12;
  System_Func_string__bool__o *__this_01;
  System_Func_T1__T2__TResult__o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_String_o *pSVar13;
  System_Func_ExperienceRuleField__bool__o *__this_03;
  Settings_ExperienceRuleField_o *pSVar14;
  System_Func_string__string__o *__this_04;
  long lVar15;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar16;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *pSVar17;
  System_Func_string__string__o **targetAddress;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0_Fields *targetAddress_00;
  
  if (Il2CppMethodInitialized_07545298 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string_71a8ee0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ExperienceRuleField_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_4);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass125_0_FieldOptions_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass125_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_UIRule_MatchesAllowedValues);
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"mode.");
    Il2CppMethodInitialized_07545298 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass125_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass125_0_o *)0x0)
  goto label_05880e98;
  targetAddress_00 = &__this_00->fields;
  (__this_00->fields).field = field;
  Il2CppCodeGenWriteBarrier(&targetAddress_00->field);
  pSVar14 = (__this_00->fields).field;
  if ((pSVar14 == (Settings_ExperienceRuleField_o *)0x0) ||
     ((pSVar14->fields).Rule == (Settings_UIRule_o *)0x0)) {
label_05880938:
    pSVar12 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar12;
  }
  bVar11 = Settings_WeatherSettings__IsWeatherSetting((pSVar14->fields).Id,(MethodInfo *)0x0);
  if (bVar11) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if (pSVar2 == (Settings_WeatherSettings_o *)0x0) {
      pSVar12 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
      pSVar14 = targetAddress_00->field;
    }
    else {
      __this = (pSVar2->fields).WeatherSets;
      if (__this == (Settings_SetSettingsContainer_WeatherSet__o *)0x0) goto label_05880e98;
      pSVar12 = Settings_SetSettingsContainer_object___GetSetNames
                          ((Settings_SetSettingsContainer_T__o *)__this,
                           (MethodInfo_40482D0 *)
                           MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
      pSVar14 = targetAddress_00->field;
    }
    if (pSVar14 == (Settings_ExperienceRuleField_o *)0x0) goto label_05880e98;
    pSVar4 = (pSVar14->fields).Rule;
    if (pSVar4 == (Settings_UIRule_o *)0x0) goto label_05880e98;
    pSVar17 = (pSVar4->fields).AllowedValues;
    if ((pSVar17 == (System_Collections_Generic_List_string__o *)0x0) || ((pSVar17->fields)._size < 1)) {
      return pSVar12;
    }
    __this_02 = (System_Func_T1__T2__TResult__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_int_bool);
    System_Func_object__int__bool____ctor
              (__this_02,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass125_0_FieldOptions_b__2
               ,(MethodInfo_4F20630 *)0x0);
    source_00 = System_Linq_Enumerable__Where_object__3502e60
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar12,
                           (System_Func_TSource__int__bool__o *)__this_02,
                           (MethodInfo_3502E60 *)MethodInfo_System_Linq_Enumerable_Where_string_71a8ee0);
    goto label_05880e78;
  }
  if (targetAddress_00->field == (Settings_ExperienceRuleField_o *)0x0) goto label_05880e98;
  bVar11 = System_String__Equals_52ffe30
                     ((targetAddress_00->field->fields).Id,"general.MapName",5,(MethodInfo *)0x0);
  pSVar14 = targetAddress_00->field;
  if (bVar11) {
    if ((pSVar14 == (Settings_ExperienceRuleField_o *)0x0) ||
       (pSVar4 = (pSVar14->fields).Rule, pSVar4 == (Settings_UIRule_o *)0x0)) goto label_05880e98;
    pSVar17 = (pSVar4->fields).AllowedValues;
    if ((pSVar17 == (System_Collections_Generic_List_string__o *)0x0) || ((pSVar17->fields)._size == 0)) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        if (Il2CppMethodInitialized_075452d6 != '\0') goto label_05880635;
label_05880969:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452d6 = '\x01';
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_05880646;
label_0588098d:
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _RuleResult_k__BackingField;
      }
      else {
        if (Il2CppMethodInitialized_075452d6 == '\0') goto label_05880969;
label_05880635:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_0588098d;
label_05880646:
        pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _RuleResult_k__BackingField;
      }
      if (pSVar3 != (Settings_ExperienceRuleResult_o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          if (Il2CppMethodInitialized_075452d6 != '\0') goto label_058809ba;
label_05880a32:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452d6 = '\x01';
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
          goto label_058809cb;
label_05880a56:
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _RuleResult_k__BackingField;
        }
        else {
          if (Il2CppMethodInitialized_075452d6 == '\0') goto label_05880a32;
label_058809ba:
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
          goto label_05880a56;
label_058809cb:
          pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _RuleResult_k__BackingField;
        }
        if (pSVar3 == (Settings_ExperienceRuleResult_o *)0x0) goto label_05880e98;
        source = (pSVar3->fields).Fields;
        if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
        }
        pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
        __this_03 = pGVar16->__9__125_3;
        if (__this_03 == (System_Func_ExperienceRuleField__bool__o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
            pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
          }
          pIVar10 = (Il2CppObject *)pGVar16->__9;
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ExperienceRuleField_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)__this_03,pIVar10,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_3,
                     (MethodInfo_4F19300 *)0x0);
          pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
          pGVar16->__9__125_3 = __this_03;
          Il2CppCodeGenWriteBarrier(&pGVar16->__9__125_3);
        }
        pSVar14 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__bool__o *)__this_03,
                             (MethodInfo_34ED9E0 *)
                             MethodInfo_System_Linq_Enumerable_FirstOrDefault_ExperienceRuleField);
        if (pSVar14 == (Settings_ExperienceRuleField_o *)0x0) goto label_05880bd2;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          if (Il2CppMethodInitialized_075452cd != '\0') goto label_05880b38;
label_05880b68:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452cd = '\x01';
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
          goto label_05880b45;
label_05880b88:
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
        }
        else {
          if (Il2CppMethodInitialized_075452cd == '\0') goto label_05880b68;
label_05880b38:
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
          goto label_05880b88;
label_05880b45:
          pSVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
        }
        if (((pSVar7 == (Settings_InGameSet_o *)0x0) ||
            (pSVar8 = (pSVar7->fields).General, pSVar8 == (Settings_InGameGeneralSettings_o *)0x0)) ||
           (pSVar9 = (pSVar8->fields).MapCategory, pSVar9 == (Settings_StringSetting_o *)0x0))
        goto label_05880e98;
        bVar11 = System_String__IsNullOrEmpty((pSVar9->fields)._value,(MethodInfo *)0x0);
        if (!bVar11) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          lVar15 = il2cpp_runtime_helper_058a7670(0);
          if (((lVar15 == 0) || (*(long *)(lVar15 + 0x48) == 0)) ||
             (lVar15 = *(long *)(*(long *)(lVar15 + 0x48) + 0x30), lVar15 == 0)) goto label_05880e98;
          pSVar13 = *(System_String_o **)(lVar15 + 0x20);
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          pSVar12 = Map_BuiltinLevels__GetMapNames(pSVar13,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
          }
          pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
          __this_04 = pGVar16->__9__125_4;
          if (__this_04 == (System_Func_string__string__o *)0x0) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
              pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
            }
            pIVar10 = (Il2CppObject *)pGVar16->__9;
            __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
            System_Func_object__object____ctor
                      ((System_Func_object__object__o *)__this_04,pIVar10,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_4,
                       (MethodInfo_4F19B50 *)0x0);
            pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
            pGVar16->__9__125_4 = __this_04;
            targetAddress = &pGVar16->__9__125_4;
            goto label_05880e39;
          }
          goto label_05880e41;
        }
      }
    }
label_05880bd2:
    if (targetAddress_00->field == (Settings_ExperienceRuleField_o *)0x0) {
label_05880e98:
      ThrowNullReferenceException();
    }
    pSVar4 = (targetAddress_00->field->fields).Rule;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar12 = Map_BuiltinLevels__QueryMapsNames(pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
      __this_04 = pGVar16->__9__125_0;
      if (__this_04 != (System_Func_string__string__o *)0x0) goto label_05880c2b;
label_05880c9a:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
        pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
      }
      pIVar10 = (Il2CppObject *)pGVar16->__9;
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_04,pIVar10,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_0,
                 (MethodInfo_4F19B50 *)0x0);
      pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
      pGVar16->__9__125_0 = __this_04;
      Il2CppCodeGenWriteBarrier(&pGVar16->__9__125_0);
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor != 0) goto label_05880c43;
label_05880d12:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      if (Il2CppMethodInitialized_07542886 != '\0') goto label_05880c50;
label_05880d24:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
      Il2CppMethodInitialized_07542886 = '\x01';
      uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
      __this_04 = pGVar16->__9__125_0;
      if (__this_04 == (System_Func_string__string__o *)0x0) goto label_05880c9a;
label_05880c2b:
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) goto label_05880d12;
label_05880c43:
      if (Il2CppMethodInitialized_07542886 == '\0') goto label_05880d24;
label_05880c50:
      uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  }
  else {
    if ((pSVar14 == (Settings_ExperienceRuleField_o *)0x0) ||
       (pSVar4 = (pSVar14->fields).Rule, pSVar4 == (Settings_UIRule_o *)0x0)) goto label_05880e98;
    pSVar17 = (pSVar4->fields).AllowedValues;
    if ((pSVar17 == (System_Collections_Generic_List_string__o *)0x0) || ((pSVar17->fields)._size == 0)) {
      pSVar5 = (pSVar14->fields).Setting;
      if (((pSVar5 != (Settings_BaseSetting_o *)0x0) &&
          (pSVar6 = (pSVar5->fields).InspectorMetadata, pSVar6 != (Settings_InspectorSettingMetadata_o *)0x0))
         && (pSVar17 = (pSVar6->fields).Dropbox, pSVar17 != (System_Collections_Generic_List_string__o *)0x0))
      {
        if (0 < (pSVar17->fields)._size) goto label_05880a07;
        pSVar13 = (pSVar14->fields).Id;
        if (pSVar13 != (System_String_o *)0x0) {
          bVar11 = System_String__StartsWith_53002b0(pSVar13,"mode.",5,(MethodInfo *)0x0);
          if (!bVar11) goto label_05880938;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          lVar15 = il2cpp_runtime_helper_058a7670(0);
          if (((lVar15 != 0) && (*(long *)(lVar15 + 0x50) != 0)) &&
             ((targetAddress_00->field != (Settings_ExperienceRuleField_o *)0x0 &&
              (pSVar13 = (targetAddress_00->field->fields).Id, pSVar13 != (System_String_o *)0x0)))) {
            settings = *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                        (*(long *)(lVar15 + 0x50) + 0x30);
            pSVar13 = System_String__Substring(pSVar13,5,(MethodInfo *)0x0);
            pSVar13 = System_String__Concat_52f0320(pSVar13,"Dropbox",(MethodInfo *)0x0);
            pSVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataOptions
                                (settings,pSVar13,method_00);
            return pSVar12;
          }
        }
      }
      goto label_05880e98;
    }
    bVar11 = System_String__Equals_52ffe30((pSVar14->fields).Id,"general.GameMode",5,(MethodInfo *)0x0);
    pSVar14 = targetAddress_00->field;
    if (!bVar11) {
      if (((pSVar14 != (Settings_ExperienceRuleField_o *)0x0) &&
          (pSVar4 = (pSVar14->fields).Rule, pSVar4 != (Settings_UIRule_o *)0x0)) &&
         (pSVar17 = (pSVar4->fields).AllowedValues,
         pSVar17 != (System_Collections_Generic_List_string__o *)0x0)) {
label_05880a07:
        pSVar12 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar17,
                             (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return pSVar12;
      }
      goto label_05880e98;
    }
    if (pSVar14 == (Settings_ExperienceRuleField_o *)0x0) goto label_05880e98;
    pSVar4 = (pSVar14->fields).Rule;
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar12 = Map_BuiltinLevels__QueryModeNames(pSVar4,(MethodInfo *)0x0);
    if (targetAddress_00->field == (Settings_ExperienceRuleField_o *)0x0) goto label_05880e98;
    pSVar4 = (targetAddress_00->field->fields).Rule;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)pSVar4,
               (intptr_t)MethodInfo_Settings_UIRule_MatchesAllowedValues,(MethodInfo_4F19300 *)0x0);
    pSVar12 = (System_String_array *)
              System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar12,
                         (System_Func_TSource__bool__o *)__this_01,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    }
    pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_04 = pGVar16->__9__125_1;
    if (__this_04 == (System_Func_string__string__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
        pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
      }
      pIVar10 = (Il2CppObject *)pGVar16->__9;
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_04,pIVar10,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_1,
                 (MethodInfo_4F19B50 *)0x0);
      pGVar16 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
      pGVar16->__9__125_1 = __this_04;
      targetAddress = &pGVar16->__9__125_1;
label_05880e39:
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
label_05880e41:
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    comparer = (System_OrdinalIgnoreCaseComparer_o *)il2cpp_runtime_helper_058a77c0(0);
  }
  source_00 = (System_Collections_Generic_IEnumerable_TSource__o *)
              System_Linq_Enumerable__OrderBy_object__object__34f2050
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar12,
                         (System_Func_TSource__TKey__o *)__this_04,
                         (System_Collections_Generic_IComparer_TKey__o *)comparer,
                         (MethodInfo_34F2050 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728
                        );
label_05880e78:
  pSVar12 = (System_String_array *)
            System_Linq_Enumerable__ToArray_object_
                      (source_00,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar12;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SandboxMapNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__SandboxMapNames (const MethodInfo* method);
// 0x58a1820
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a18d2: cmp byte ptr [rip + 0x1ca0fad], 0
// asm:   0x58a18d9: je 0x58a1a7e
// asm:   0x58a1950: cmp byte ptr [rip + 0x1ca0f2f], 0
// asm:   0x58a1957: je 0x58a1b56

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__SandboxMapNames(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_SandboxGameCreateConfiguration_o *pSVar2;
  Il2CppObject *object;
  System_String_array *pSVar3;
  System_Func_string__IEnumerable_string___o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Linq_IOrderedEnumerable_TSource__o *source_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar4;
  System_Func_TSource__TKey__o *__this_00;
  
  if (Il2CppMethodInitialized_07545299 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_SelectMany_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_GetMapNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_SandboxMapNames_b__126_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_07545299 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  }
  else {
    pSVar2 = *(Settings_SandboxGameCreateConfiguration_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              8);
  }
  if (pSVar2 == (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = Settings_SandboxGameCreateConfiguration__GetMapCategories(pSVar2,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_IEnumerable_string);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)pSVar2,
             (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_GetMapNames,
             (MethodInfo_4F19B50 *)0x0);
  source = System_Linq_Enumerable__SelectMany_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                      (System_Func_TSource__IEnumerable_TResult___o *)__this,
                      (MethodInfo_34F71F0 *)MethodInfo_System_Linq_Enumerable_SelectMany_string_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
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
  source_00 = System_Linq_Enumerable__Distinct_object__34e8be0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Collections_Generic_IEqualityComparer_TSource__o *)
                         TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                         (MethodInfo_34E8BE0 *)MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = (System_Func_TSource__TKey__o *)pGVar4->__9__126_0;
  }
  else {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = (System_Func_TSource__TKey__o *)pGVar4->__9__126_0;
  }
  if (__this_00 == (System_Func_TSource__TKey__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    object = (Il2CppObject *)pGVar4->__9;
    __this_00 = (System_Func_TSource__TKey__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_SandboxMapNames_b__126_0,
               (MethodInfo_4F19B50 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar4->__9__126_0 = (System_Func_string__string__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__126_0);
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
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
  source_01 = System_Linq_Enumerable__OrderBy_object__object__34f2050
                        (source_00,__this_00,
                         (System_Collections_Generic_IComparer_TKey__o *)
                         TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                         (MethodInfo_34F2050 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728
                        );
  pSVar3 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$PresetNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__PresetNames (const MethodInfo* method);
// 0x58a1b90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a1c97: cmp byte ptr [rip + 0x1ca0be8], 0
// asm:   0x58a1c9e: je 0x58a1dbc

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__PresetNames(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSettings_o *pSVar2;
  Settings_SetSettingsContainer_InGameSet__o *__this;
  Il2CppObject *object;
  System_String_array *pSVar3;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar4;
  System_Func_TSource__TKey__o *__this_00;
  
  if (Il2CppMethodInitialized_0754529a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_InGameSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_PresetNames_b__127_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_0754529a = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
  if (pSVar2 == (Settings_InGameSettings_o *)0x0) {
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar3;
  }
  __this = (pSVar2->fields).InGameSets;
  if (__this == (Settings_SetSettingsContainer_InGameSet__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = Settings_SetSettingsContainer_object___GetSetNames
                     ((Settings_SetSettingsContainer_T__o *)__this,
                      (MethodInfo_40482D0 *)MethodInfo_Settings_SetSettingsContainer_InGameSet_GetSetNames);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = (System_Func_TSource__TKey__o *)pGVar4->__9__127_0;
  }
  else {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = (System_Func_TSource__TKey__o *)pGVar4->__9__127_0;
  }
  if (__this_00 == (System_Func_TSource__TKey__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    object = (Il2CppObject *)pGVar4->__9;
    __this_00 = (System_Func_TSource__TKey__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_PresetNames_b__127_0,
               (MethodInfo_4F19B50 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar4->__9__127_0 = (System_Func_string__string__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__127_0);
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
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
  source = System_Linq_Enumerable__OrderBy_object__object__34f2050
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,__this_00,
                      (System_Collections_Generic_IComparer_TKey__o *)
                      TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34F2050 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728);
  pSVar3 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CustomPresetNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__CustomPresetNames (const MethodInfo* method);
// 0x58a1e00
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a1f5f: jmp 0x58a1f99
// asm:   0x58a203b: jmp 0x58a2059
// asm:   0x58a2116: cmp byte ptr [rip + 0x1ca0769], 0
// asm:   0x58a211d: je 0x58a221f

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__CustomPresetNames(MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSettings_o *pSVar2;
  Settings_SetSettingsContainer_InGameSet__o *pSVar3;
  Settings_ListSetting_T__o *__this;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_BaseSetting__o *source;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar5;
  System_Func_InGameSet__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Func_InGameSet__string__o *__this_01;
  System_Linq_IOrderedEnumerable_TSource__o *source_01;
  System_String_array *pSVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar7;
  System_Func_TSource__TKey__o *__this_02;
  
  if (Il2CppMethodInitialized_0754529b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_InGameSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_InGameSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_InGameSet_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_InGameSet_GetItems);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_CustomPresetNames_b__128_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_CustomPresetNames_b__128_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_CustomPresetNames_b__128_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_0754529b = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
  if (pSVar2 == (Settings_InGameSettings_o *)0x0) {
    pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar6;
  }
  pSVar3 = (pSVar2->fields).InGameSets;
  if ((pSVar3 == (Settings_SetSettingsContainer_InGameSet__o *)0x0) ||
     (__this = (pSVar3->fields).Sets, __this == (Settings_ListSetting_T__o *)0x0)) {
    ThrowNullReferenceException();
  }
  source = Settings_ListSetting_object___GetItems
                     (__this,(MethodInfo_515DED0 *)MethodInfo_Settings_ListSetting_InGameSet_GetItems);
  pSVar5 = System_Linq_Enumerable__Cast_object_
                     ((System_Collections_IEnumerable_o *)source,
                      (MethodInfo_34E0900 *)MethodInfo_System_Linq_Enumerable_Cast_InGameSet);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = pGVar7->__9__128_0;
  }
  else {
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = pGVar7->__9__128_0;
  }
  if (__this_00 == (System_Func_InGameSet__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar4 = (Il2CppObject *)pGVar7->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_InGameSet_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,pIVar4,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_CustomPresetNames_b__128_0
               ,(MethodInfo_4F19300 *)0x0);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar7->__9__128_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__128_0);
  }
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_InGameSet);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_01 = pGVar7->__9__128_1;
  }
  else {
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_01 = pGVar7->__9__128_1;
  }
  if (__this_01 == (System_Func_InGameSet__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar4 = (Il2CppObject *)pGVar7->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_InGameSet_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_01,pIVar4,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_CustomPresetNames_b__128_1
               ,(MethodInfo_4F19B50 *)0x0);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar7->__9__128_1 = __this_01;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__128_1);
  }
  pSVar5 = System_Linq_Enumerable__Select_object__object_
                     (source_00,(System_Func_TSource__TResult__o *)__this_01,
                      (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_InGameSet_string);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_02 = (System_Func_TSource__TKey__o *)pGVar7->__9__128_2;
  }
  else {
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_02 = (System_Func_TSource__TKey__o *)pGVar7->__9__128_2;
  }
  if (__this_02 == (System_Func_TSource__TKey__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar4 = (Il2CppObject *)pGVar7->__9;
    __this_02 = (System_Func_TSource__TKey__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_02,pIVar4,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_CustomPresetNames_b__128_2
               ,(MethodInfo_4F19B50 *)0x0);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar7->__9__128_2 = (System_Func_string__string__o *)__this_02;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__128_2);
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
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
  source_01 = System_Linq_Enumerable__OrderBy_object__object__34f2050
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,__this_02,
                         (System_Collections_Generic_IComparer_TKey__o *)
                         TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                         (MethodInfo_34F2050 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728
                        );
  pSVar6 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar6;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FavoriteExperienceId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperienceId (Map_Experience_o* experience, const MethodInfo* method);
// 0x58a2260

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperienceId
          (Map_Experience_o *experience,MethodInfo *method)

{
  Il2CppObject *source;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754529c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Uri_EscapeDataString);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_0754529c = '\x01';
  }
  source = SZArrayNew(TypeInfo_string_array,3);
  if ((experience == (Map_Experience_o *)0x0) || (source == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  if (*(int *)&source[1].monitor != 0) {
    source[2].klass = (Il2CppClass *)(experience->fields).Category;
    Il2CppCodeGenWriteBarrier(&source[2].klass);
    if (((ulong)source[1].monitor & 0xfffffffe) != 0) {
      source[2].monitor = (experience->fields).SubCategory;
      Il2CppCodeGenWriteBarrier(&source[2].monitor);
      if (2 < *(uint *)&source[1].monitor) {
        source[3].klass = (Il2CppClass *)(experience->fields).Name;
        Il2CppCodeGenWriteBarrier(&source[3].klass);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
        System_Func_object__object____ctor
                  ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_System_Uri_EscapeDataString,(MethodInfo_4F19B50 *)0x0);
        values = System_Linq_Enumerable__Select_object__object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__TResult__o *)__this,
                            (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
        pSVar1 = System_String__Join_5303350
                           ("|",(System_Collections_Generic_IEnumerable_string__o *)values,
                            (MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsFavorite
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsFavorite (Map_Experience_o* experience, const MethodInfo* method);
// 0x5890f40

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsFavorite
               (Map_Experience_o *experience,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_T__o *source;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0_o *__this;
  System_Func_StringSetting__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_0754529d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass130_0_IsFavorite_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass130_0);
    Il2CppMethodInitialized_0754529d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass130_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass130_0_o *)0x0) {
    (__this->fields).experience = experience;
    Il2CppCodeGenWriteBarrier(&(__this->fields).experience);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).FavoriteExperiences, pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)
       ) {
      source = (pSVar2->fields)._value;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass130_0_IsFavorite_b__0
                 ,(MethodInfo_4F19300 *)0x0);
      bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsFavoritePreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsFavoritePreset (System_String_o* name, const MethodInfo* method);
// 0x588b960

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsFavoritePreset(System_String_o *name,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *pSVar2;
  System_Collections_Generic_List_T__o *source;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0_o *__this;
  System_Func_StringSetting__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_0754529e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass131_0_IsFavoritePreset_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass131_0);
    Il2CppMethodInitialized_0754529e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass131_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass131_0_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).FavoriteSandboxPresets,
       pSVar2 != (Settings_ListSetting_StringSetting__o *)0x0)) {
      source = (pSVar2->fields)._value;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass131_0_IsFavoritePreset_b__0
                 ,(MethodInfo_4F19300 *)0x0);
      bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_StringSetting);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FavoriteExperiences
// il2cpp: Map_Experience_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperiences (const MethodInfo* method);
// 0x587e1a0

Map_Experience_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperiences(MethodInfo *method)

{
  System_Collections_Generic_List_Experience__o *source;
  System_Func_Experience__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Map_Experience_array *pMVar1;
  
  if (Il2CppMethodInitialized_0754529f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavorite);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Experience_bool);
    Il2CppMethodInitialized_0754529f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Experience_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavorite,
             (MethodInfo_4F19300 *)0x0);
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_Experience);
  pMVar1 = (Map_Experience_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source_00,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_Experience);
  return pMVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FavoritePresetNames
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoritePresetNames (const MethodInfo* method);
// 0x587e270

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoritePresetNames(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Func_string__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_075452a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavoritePreset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    Il2CppMethodInitialized_075452a0 = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__PresetNames((MethodInfo *)method_00);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavoritePreset,
             (MethodInfo_4F19300 *)0x0);
  source = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleFavorite
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite (Map_Experience_o* experience, const MethodInfo* method);
// 0x58910d0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite
               (Map_Experience_o *experience,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *favorites;
  System_String_o *id;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075452a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452a1 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar1 == (Settings_UISettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  favorites = (pSVar1->fields).FavoriteExperiences;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  id = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperienceId(experience,method);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite_57a23a0(favorites,id,5,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleFavoritePreset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavoritePreset (System_String_o* name, const MethodInfo* method);
// 0x5891c10

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavoritePreset
               (System_String_o *name,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *favorites;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075452a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452a2 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar1 == (Settings_UISettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  favorites = (pSVar1->fields).FavoriteSandboxPresets;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite_57a23a0(favorites,name,4,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleFavorite
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite (Settings_ListSetting_StringSetting__o* favorites, System_String_o* id, int32_t comparison, const MethodInfo* method);
// 0x58a23a0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite_57a23a0
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
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0_o *__this;
  System_Predicate_T__o *match;
  Settings_StringSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_075452a3 == '\0') {
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
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass136_0_ToggleFavorite_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass136_0);
    Il2CppMethodInitialized_075452a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass136_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass136_0_o *)0x0) {
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).comparison = comparison;
    if (favorites != (Settings_ListSetting_StringSetting__o *)0x0) {
      pSVar3 = (System_Collections_Generic_List_object__o *)(favorites->fields)._value;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_StringSetting);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass136_0_ToggleFavorite_b__0
                 ,(MethodInfo_3DC95B0 *)0x0);
      if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
        iVar7 = System_Collections_Generic_List_object___RemoveAll
                          (pSVar3,match,
                           (MethodInfo_395EF50 *)
                           MethodInfo_System_Collections_Generic_List_StringSetting_RemoveAll);
        if (iVar7 == 0) {
          pSVar3 = (System_Collections_Generic_List_object__o *)(favorites->fields)._value;
          defaultValue = (__this->fields).id;
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
          Settings_StringSetting___ctor_5b7b730(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
          pMVar6 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_058a2585;
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar3->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto label_058a2585;
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_00;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar3,(Il2CppObject *)__this_00,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
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
label_058a2585:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$OpenFavorites
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenFavorites (const MethodInfo* method);
// 0x58a2590
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a25ad: cmp byte ptr [rip + 0x1ca2d32], 0
// asm:   0x58a25b4: je 0x58a262c

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenFavorites(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075452a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452a4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         false;
  }
  else {
    *(undefined1 *)((long)klass->static_fields + 0x78) = 0;
  }
  if (Il2CppMethodInitialized_075452e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e7 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField =
         true;
    return;
  }
  *(undefined1 *)((long)klass->static_fields + 0x79) = 1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$LoadPreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__LoadPreset (System_String_o* name, const MethodInfo* method);
// 0x588ff40
// eh: try 0x5890084..0x58901ca -> pad 0x58901d5 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58901ef..0x58901f4 -> pad 0x5890217 cleanup
// eh: try 0x589021a..0x5890224 -> pad 0x589022c catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5890079: nop dword ptr [rax]
// asm:   0x58901cf: jmp 0x58901d7
// asm:   0x58901d1: jmp 0x58901d7
// asm:   0x58901d3: jmp 0x58901d7
// asm:   0x58901d5: jmp 0x58901d7
// asm:   0x58901d7: mov rbx, rax
// asm:   0x58901da: cmp edx, 1
// asm:   0x58901dd: jne 0x589021a
// asm:   0x58901df: mov rdi, rbx
// asm:   0x58901e2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58901e7: mov rbx, qword ptr [rax]
// asm:   0x58901ea: mov qword ptr [rsp + 0x18], rbx
// asm:   0x58901ef: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58901f4: lea rax, [rip + 0x19fd5ad]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x58901fb: mov rsi, qword ptr [rax]
// asm:   0x58901fe: mov rdi, rsp
// asm:   0x5890201: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5890206: test rbx, rbx
// asm:   0x5890209: je 0x5890164
// asm:   0x589020f: mov rdi, rbx
// asm:   0x5890212: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5890217: mov rbx, rax
// asm:   0x589021a: lea rdi, [rsp + 0x18]
// asm:   0x589021f: call 0x2fcf980  ; il2cpp_runtime_helper_02fcf980()
// asm:   0x5890224: mov rdi, rbx
// asm:   0x5890227: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x589022c: mov rdi, rax
// asm:   0x589022f: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__LoadPreset(System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Settings_InGameSettings_o *pSVar3;
  Settings_SetSettingsContainer_InGameSet__o *pSVar4;
  Settings_ListSetting_T__o *__this;
  Settings_StringSetting_o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar6;
  Il2CppObject *settings;
  bool bVar7;
  System_Collections_Generic_List_BaseSetting__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  undefined1 local_40 [16];
  Settings_InGameSet_o *local_30;
  
  if (Il2CppMethodInitialized_075452a5 == '\0') {
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
    Il2CppMethodInitialized_075452a5 = '\x01';
  }
  bVar7 = System_String__IsNullOrWhiteSpace(name,(MethodInfo *)0x0);
  if (bVar7) {
    return false;
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
  if (pSVar3 != (Settings_InGameSettings_o *)0x0) {
    pSVar4 = (pSVar3->fields).InGameSets;
    if (((pSVar4 == (Settings_SetSettingsContainer_InGameSet__o *)0x0) ||
        (__this = (pSVar4->fields).Sets, __this == (Settings_ListSetting_T__o *)0x0)) ||
       (__this_00 = Settings_ListSetting_object___GetItems
                              (__this,(MethodInfo_515DED0 *)MethodInfo_Settings_ListSetting_InGameSet_GetItems
                              ), __this_00 == (System_Collections_Generic_List_BaseSetting__o *)0x0)) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    local_58.fields._current = (Il2CppObject *)local_30;
    local_58.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_58.fields._index = local_40._8_4_;
    local_58.fields._version = local_40._12_4_;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_58;
    while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_58,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext),
          settings = local_58.fields._current, bVar7) {
      if ((Settings_InGameSet_o *)local_58.fields._current == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_Settings_InGameSet->_2).typeHierarchyDepth;
      if (((((Settings_InGameSet_c *)(local_58.fields._current)->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_InGameSet_c *)(local_58.fields._current)->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_InGameSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(local_58.fields._current);
      }
      pSVar5 = ((Settings_InGameSet_Fields *)((long)local_58.fields._current + 0x10))->Name;
      if (pSVar5 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = System_String__Equals_52ffe30((pSVar5->fields)._value,name,4,(MethodInfo *)0x0);
      if (bVar7) {
        method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (&local_58,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__ReplaceSandboxWorking
                    ((Settings_InGameSet_o *)settings,method_00);
        }
        else {
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__ReplaceSandboxWorking
                    ((Settings_InGameSet_o *)settings,method_00);
        }
        if (Il2CppMethodInitialized_075452e8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452e8 = '\x01';
          uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
                  cctor_finished_or_no_cctor;
        }
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
        pGVar6->_SelectedPresetName_k__BackingField = name;
        Il2CppCodeGenWriteBarrier(&pGVar6->_SelectedPresetName_k__BackingField);
        return true;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
              );
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SavePreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SavePreset (System_String_o* name, System_String_o** error, const MethodInfo* method);
// 0x58a26b0
// eh: try 0x58a2974..0x58a2cc8 -> pad 0x58a2cd3 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58a2ced..0x58a2cf2 -> pad 0x58a2d15 cleanup
// eh: try 0x58a2d18..0x58a2d22 -> pad 0x58a2d2a catch (...) [compiler noexcept guard]
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a2865: jmp 0x58a2a4c
// asm:   0x58a2b18: test rbx, rbx
// asm:   0x58a2b1d: jmp 0x58a2cc8
// asm:   0x58a2c2d: cmp byte ptr [rip + 0x1ca26b4], 0
// asm:   0x58a2c34: je 0x58a2c72
// asm:   0x58a2c43: mov rdi, qword ptr [rdi + 0xb8]
// asm:   0x58a2c4a: mov qword ptr [rdi + 0x80], r14
// asm:   0x58a2c51: sub rdi, -0x80
// asm:   0x58a2c55: mov rsi, r14
// asm:   0x58a2c58: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x58a2c5d: mov bl, 1
// asm:   0x58a2c5f: jmp 0x58a2a85
// asm:   0x58a2cb1: jmp 0x58a2afd
// asm:   0x58a2ccd: jmp 0x58a2cd5
// asm:   0x58a2ccf: jmp 0x58a2cd5
// asm:   0x58a2cd1: jmp 0x58a2cd5
// asm:   0x58a2cd3: jmp 0x58a2cd5
// asm:   0x58a2cd5: mov rbx, rax
// asm:   0x58a2cd8: cmp edx, 1
// asm:   0x58a2cdb: jne 0x58a2d18
// asm:   0x58a2cdd: mov rdi, rbx
// asm:   0x58a2ce0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58a2ce5: mov rbx, qword ptr [rax]
// asm:   0x58a2ce8: mov qword ptr [rsp + 0x20], rbx
// asm:   0x58a2ced: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58a2cf2: lea rax, [rip + 0x19eaaaf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x58a2cf9: mov rsi, qword ptr [rax]
// asm:   0x58a2cfc: mov rdi, rsp
// asm:   0x58a2cff: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x58a2d04: test rbx, rbx
// asm:   0x58a2d07: je 0x58a2ac9
// asm:   0x58a2d0d: mov rdi, rbx
// asm:   0x58a2d10: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58a2d15: mov rbx, rax
// asm:   0x58a2d18: lea rdi, [rsp + 0x20]
// asm:   0x58a2d1d: call 0x2fcf9b0  ; il2cpp_runtime_helper_02fcf9b0()
// asm:   0x58a2d22: mov rdi, rbx
// asm:   0x58a2d25: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58a2d2a: mov rdi, rax
// asm:   0x58a2d2d: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SavePreset
               (System_String_o *name,System_String_o **error,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Settings_InGameSettings_o *pSVar3;
  Settings_SetSettingsContainer_InGameSet__o *pSVar4;
  Settings_ListSetting_T__o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar8;
  bool bVar9;
  bool bVar10;
  System_String_o *pSVar11;
  System_String_o **ppSVar12;
  System_Collections_Generic_List_BaseSetting__o *__this;
  Settings_InGameSet_o *pSVar13;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *klass;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Settings_InGameSet_o *local_58;
  undefined1 local_48 [16];
  Settings_InGameSet_o *local_38;
  
  if (Il2CppMethodInitialized_075452a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
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
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.NameRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.SettingsUnavailable");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.SandboxRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.BuiltInProtected");
    Il2CppMethodInitialized_075452a6 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Settings_InGameSet_o *)0x0;
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error);
  if (name == (System_String_o *)0x0) {
    pSVar11 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar11 = System_String__Trim(name,(MethodInfo *)0x0);
  }
  bVar10 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    ppSVar12 = &"GameCreate.Presets.Save.NameRequired";
    goto label_058a2a6b;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058a2878;
label_058a284b:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a2857;
label_058a2897:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058a284b;
label_058a2878:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a2897;
label_058a2857:
    pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession = klass;
  if (pSVar13 != (Settings_InGameSet_o *)0x0) {
    if (*(uint32_t *)((long)klass + 0xe4) == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
      bVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)klass);
    }
    else {
      bVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)klass);
    }
    if (bVar10) {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
      if (pSVar3 != (Settings_InGameSettings_o *)0x0) {
        pSVar4 = (pSVar3->fields).InGameSets;
        if (((pSVar4 != (Settings_SetSettingsContainer_InGameSet__o *)0x0) &&
            (pSVar5 = (pSVar4->fields).Sets, pSVar5 != (Settings_ListSetting_T__o *)0x0)) &&
           (__this = Settings_ListSetting_object___GetItems
                               (pSVar5,(MethodInfo_515DED0 *)
                                       MethodInfo_Settings_ListSetting_InGameSet_GetItems),
           __this != (System_Collections_Generic_List_BaseSetting__o *)0x0)) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                     (System_Collections_Generic_List_object__o *)__this,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
          local_58 = local_38;
          local_68 = (undefined1  [8])local_48._0_8_;
          puStack_60 = (undefined1 *)local_48._8_8_;
          local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_48._8_8_ = local_68;
          do {
            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
            pSVar13 = local_58;
            if (!bVar10) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                         (MethodInfo_4C45C40 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
              pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
              Settings_InGameSet___ctor(pSVar13,(MethodInfo *)0x0);
              bVar9 = true;
              bVar10 = true;
              uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
              goto joined_r0x058a2afb;
            }
            if (local_58 == (Settings_InGameSet_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar1 = (TypeInfo_Settings_InGameSet->_2).typeHierarchyDepth;
            if (((local_58->klass->_2).typeHierarchyDepth < bVar1) ||
               ((local_58->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_InGameSet)) {
              il2cpp_codegen_raise_invalid_cast_exception(local_58);
            }
            pSVar6 = (local_58->fields).Name;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar10 = System_String__Equals_52ffe30((pSVar6->fields)._value,pSVar11,4,(MethodInfo *)0x0);
          } while (!bVar10);
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
          pSVar7 = (pSVar13->fields).Preset;
          if (pSVar7 != (Settings_BoolSetting_o *)0x0) {
            if ((pSVar7->fields)._value != false) {
              if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
              }
              ppSVar12 = &"GameCreate.Presets.Save.BuiltInProtected";
              goto label_058a2a6b;
            }
            bVar9 = false;
            bVar10 = false;
            uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
joined_r0x058a2afb:
            if (uVar2 == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              bVar10 = bVar9;
            }
            if (Il2CppMethodInitialized_075452cd == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              Il2CppMethodInitialized_075452cd = '\x01';
              uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
            }
            else {
              uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
            }
            if (uVar2 == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            if (pSVar13 != (Settings_InGameSet_o *)0x0) {
              (*(pSVar13->klass->vtable)._10_Copy.methodPtr)
                        (pSVar13,*(Settings_BaseSetting_o **)
                                  ((long)((Il2CppClass *)
                                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->
                                         static_fields + 0x40),(pSVar13->klass->vtable)._10_Copy.method);
              pSVar6 = (pSVar13->fields).Name;
              if (pSVar6 != (Settings_StringSetting_o *)0x0) {
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar11,
                           (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                pSVar7 = (pSVar13->fields).Preset;
                if (pSVar7 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar7,false,
                             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  if (bVar10) {
                    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
                    if (((pSVar3 == (Settings_InGameSettings_o *)0x0) ||
                        (pSVar4 = (pSVar3->fields).InGameSets,
                        pSVar4 == (Settings_SetSettingsContainer_InGameSet__o *)0x0)) ||
                       (pSVar5 = (pSVar4->fields).Sets, pSVar5 == (Settings_ListSetting_T__o *)0x0))
                    goto label_058a2cc8;
                    Settings_ListSetting_object___AddItem
                              (pSVar5,(Settings_BaseSetting_o *)pSVar13,
                               (MethodInfo_515E0E0 *)MethodInfo_Settings_ListSetting_InGameSet_AddItem);
                  }
                  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
                  if (pSVar3 != (Settings_InGameSettings_o *)0x0) {
                    (*(pSVar3->klass->vtable)._18_Save.methodPtr)
                              (pSVar3,(pSVar3->klass->vtable)._18_Save.method);
                    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                    }
                    if (Il2CppMethodInitialized_075452e8 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                      Il2CppMethodInitialized_075452e8 = '\x01';
                      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).
                              cctor_finished_or_no_cctor;
                    }
                    else {
                      uVar2 = *(uint32_t *)
                               ((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
                    }
                    if (uVar2 == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                    }
                    pGVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
                    pGVar8->_SelectedPresetName_k__BackingField = pSVar11;
                    Il2CppCodeGenWriteBarrier(&pGVar8->_SelectedPresetName_k__BackingField);
                    return true;
                  }
                }
              }
            }
          }
        }
label_058a2cc8:
        ThrowNullReferenceException();
      }
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      ppSVar12 = &"GameCreate.Presets.Save.SettingsUnavailable";
      goto label_058a2a6b;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  ppSVar12 = &"GameCreate.Presets.Save.SandboxRequired";
label_058a2a6b:
  pSVar11 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(*ppSVar12,(MethodInfo *)0x0);
  *error = pSVar11;
  Il2CppCodeGenWriteBarrier(error);
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$DeletePreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__DeletePreset (System_String_o* name, const MethodInfo* method);
// 0x58a2d40

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__DeletePreset(System_String_o *name,MethodInfo *method)

{
  Settings_InGameSettings_o *pSVar1;
  Settings_SetSettingsContainer_InGameSet__o *pSVar2;
  Settings_ListSetting_T__o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  Settings_UISettings_o *pSVar6;
  Settings_ListSetting_StringSetting__o *pSVar7;
  bool bVar8;
  int32_t iVar9;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0_o *__this;
  System_Collections_Generic_List_BaseSetting__o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_InGameSet__bool__o *__this_00;
  Settings_InGameSet_o *item;
  System_Predicate_T__o *match;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_075452a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_FirstOrDefault_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_InGameSet_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_InGameSet_GetItems);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InGameSet_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_InGameSet_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass140_0_DeletePreset_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass140_0_DeletePreset_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass140_0);
    Il2CppMethodInitialized_075452a7 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass140_0);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateSession___c__DisplayClass140_0_o *)0x0) {
    (__this->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields).name);
    bVar8 = System_String__IsNullOrWhiteSpace((__this->fields).name,(MethodInfo *)0x0);
    if (bVar8) {
      return false;
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
    if (pSVar1 == (Settings_InGameSettings_o *)0x0) {
      return false;
    }
    pSVar2 = (pSVar1->fields).InGameSets;
    if ((pSVar2 != (Settings_SetSettingsContainer_InGameSet__o *)0x0) &&
       (pSVar3 = (pSVar2->fields).Sets, pSVar3 != (Settings_ListSetting_T__o *)0x0)) {
      source = Settings_ListSetting_object___GetItems
                         (pSVar3,(MethodInfo_515DED0 *)MethodInfo_Settings_ListSetting_InGameSet_GetItems);
      source_00 = System_Linq_Enumerable__Cast_object_
                            ((System_Collections_IEnumerable_o *)source,
                             (MethodInfo_34E0900 *)MethodInfo_System_Linq_Enumerable_Cast_InGameSet);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_InGameSet_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass140_0_DeletePreset_b__0
                 ,(MethodInfo_4F19300 *)0x0);
      item = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (System_Func_TSource__bool__o *)__this_00,
                        (MethodInfo_34ED9E0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_InGameSet);
      if (item == (Settings_InGameSet_o *)0x0) {
        return false;
      }
      pSVar4 = (item->fields).Preset;
      if (pSVar4 != (Settings_BoolSetting_o *)0x0) {
        if ((pSVar4->fields)._value != false) {
          return false;
        }
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
        if ((((pSVar1 != (Settings_InGameSettings_o *)0x0) &&
             (pSVar2 = (pSVar1->fields).InGameSets,
             pSVar2 != (Settings_SetSettingsContainer_InGameSet__o *)0x0)) &&
            (pSVar3 = (pSVar2->fields).Sets, pSVar3 != (Settings_ListSetting_T__o *)0x0)) &&
           (pSVar5 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value,
           pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
          bVar8 = System_Collections_Generic_List_object___Remove
                            (pSVar5,(Il2CppObject *)item,
                             (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_InGameSet_Remove
                            );
          if (!bVar8) {
            return false;
          }
          pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameSettings;
          if (pSVar1 != (Settings_InGameSettings_o *)0x0) {
            (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
            pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
            if (pSVar6 == (Settings_UISettings_o *)0x0) goto label_058a3041;
            pSVar7 = (pSVar6->fields).FavoriteSandboxPresets;
            if (pSVar7 != (Settings_ListSetting_StringSetting__o *)0x0) {
              pSVar5 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value;
              match = (System_Predicate_T__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_StringSetting);
              System_Predicate_object____ctor
                        ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass140_0_DeletePreset_b__1
                         ,(MethodInfo_3DC95B0 *)0x0);
              if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
                iVar9 = System_Collections_Generic_List_object___RemoveAll
                                  (pSVar5,match,
                                   (MethodInfo_395EF50 *)
                                   MethodInfo_System_Collections_Generic_List_StringSetting_RemoveAll);
                if (0 < iVar9) {
                  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                  if (pSVar6 == (Settings_UISettings_o *)0x0) goto label_058a30aa;
                  (*(pSVar6->klass->vtable)._18_Save.methodPtr)
                            (pSVar6,(pSVar6->klass->vtable)._18_Save.method);
                }
label_058a3041:
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                }
                a = (System_String_o *)il2cpp_runtime_helper_058a7830(0);
                bVar8 = System_String__Equals_52ffe30(a,(__this->fields).name,4,(MethodInfo *)0x0);
                if (!bVar8) {
                  return true;
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                }
                il2cpp_runtime_helper_058a7aa0(0,0);
                return true;
              }
            }
          }
        }
      }
    }
  }
label_058a30aa:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Back
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__Back (const MethodInfo* method);
// 0x58a30b0
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a3117: cmp byte ptr [rip + 0x1ca21c8], 0
// asm:   0x58a311e: je 0x58a3291
// asm:   0x58a3252: cmp byte ptr [rip + 0x1ca208e], 0
// asm:   0x58a3259: je 0x58a339a
// asm:   0x58a3383: jmp 0x58a3415
// asm:   0x58a3441: jmp 0x58a3486
// asm:   0x58a3583: jmp 0x58a3cae
// asm:   0x58a36d4: jmp 0x58a3cae
// asm:   0x58a3763: jmp 0x58a3cae
// asm:   0x58a3875: cmp byte ptr [rip + 0x1ca1a64], 0
// asm:   0x58a387c: je 0x58a3a9d
// asm:   0x58a3a22: xor edi, edi
// asm:   0x58a3a24: xor esi, esi
// asm:   0x58a3a26: call 0x58a78a0  ; il2cpp_runtime_helper_058a78a0()
// asm:   0x58a3a2b: jmp 0x58a38f8
// asm:   0x58a3c31: xor edi, edi
// asm:   0x58a3c33: xor esi, esi
// asm:   0x58a3c35: call 0x58a78a0  ; il2cpp_runtime_helper_058a78a0()
// asm:   0x58a3c3a: jmp 0x58a38f6
// asm:   0x58a3ca9: jmp 0x58a3a11

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__Back(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  int iVar3;
  Settings_ExperienceRuleResult_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar5;
  Settings_InGameSet_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_BoolSetting_o *__this;
  bool bVar8;
  bool bVar9;
  Map_Experience_array *pMVar10;
  System_String_array *pSVar11;
  Map_Experience_o *pMVar12;
  System_String_o *pSVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar14;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  System_String_o *subcategory;
  Il2CppClass *pIVar15;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_075452a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    Il2CppMethodInitialized_075452a8 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a31ba;
label_058a30db:
    if (g_data_075452d0 != '\0') goto label_058a30e8;
label_058a31cc:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d0 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a31ef;
label_058a30f8:
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _ShowRoomSettings_k__BackingField;
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a30db;
label_058a31ba:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452d0 == '\0') goto label_058a31cc;
label_058a30e8:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a30f8;
label_058a31ef:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _ShowRoomSettings_k__BackingField;
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (cVar1 != '\0') {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_075452e6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452e6 = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    }
    else {
      uVar2 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
      pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
         (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)pIVar15;
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar15);
      pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField
           = false;
    }
    else {
      (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields **)((long)pIVar15 + 0xb8))->
      _ShowRoomSettings_k__BackingField = false;
    }
    if (Il2CppMethodInitialized_075452dd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452dd = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    }
    else {
      uVar2 = (pIVar15->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar15);
      pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    }
    return *(int *)((long)pIVar15->static_fields + 0x38) != 1;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452d1 == '\0') goto label_058a3312;
label_058a3223:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a3233;
label_058a3335:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _ShowFavorites_k__BackingField;
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452d1 != '\0') goto label_058a3223;
label_058a3312:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d1 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a3335;
label_058a3233:
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _ShowFavorites_k__BackingField;
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (cVar1 != '\0') {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_075452e7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452e7 = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField =
         false;
    return true;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452d2 == '\0') goto label_058a33d8;
label_058a3361:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a3371;
label_058a33fb:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Experience_k__BackingField;
  }
  else {
    if (g_data_075452d2 != '\0') goto label_058a3361;
label_058a33d8:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d2 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a33fb;
label_058a3371:
    pMVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
              _Experience_k__BackingField;
  }
  if (pMVar12 == (Map_Experience_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452d6 == '\0') goto label_058a3451;
label_058a3427:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_058a3433;
label_058a3470:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _RuleResult_k__BackingField;
      pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    }
    else {
      if (Il2CppMethodInitialized_075452d6 != '\0') goto label_058a3427;
label_058a3451:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452d6 = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_058a3470;
label_058a3433:
      pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _RuleResult_k__BackingField;
      pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
         (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)pIVar15;
    if (pSVar4 == (Settings_ExperienceRuleResult_o *)0x0) {
      if ((pIVar15->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(pIVar15);
      }
      bVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)pIVar15);
      if (!bVar8) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar13 = (System_String_o *)il2cpp_runtime_helper_058a76e0(0);
        bVar8 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        if (bVar8) {
          if (uVar2 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar13 = (System_String_o *)il2cpp_runtime_helper_058a7750(0);
          bVar8 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
          if (bVar8) {
            return false;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          il2cpp_runtime_helper_058a78a0(0,0);
          return true;
        }
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pMVar14 = (MethodInfo *)0x0;
        il2cpp_runtime_helper_058a7920(0,0);
        pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories(pMVar14);
        if (pSVar11 != (System_String_array *)0x0) {
          iVar3 = (int)pSVar11->max_length;
          goto joined_r0x058a3a0b;
        }
        goto label_058a3cae;
      }
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    bVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_00);
    pMVar14 = extraout_RDX_00;
    if (!bVar8) goto label_058a359d;
label_058a34c1:
    bVar8 = true;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a34d1;
label_058a3a49:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452e2 == '\0') goto label_058a3a5b;
label_058a34de:
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox
                      ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar14 = extraout_RDX;
    if (bVar8) goto label_058a34c1;
label_058a359d:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pMVar14 = extraout_RDX_01;
      if (Il2CppMethodInitialized_075452d4 == '\0') goto label_058a3adf;
label_058a35ba:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_058a35ca;
label_058a3b02:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Category_k__BackingField;
      pMVar14 = extraout_RDX_03;
      if (Il2CppMethodInitialized_075452d3 == '\0') goto label_058a3b22;
label_058a35e2:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_058a35ef;
label_058a3b41:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      subcategory = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                    _Subcategory_k__BackingField;
      pMVar14 = extraout_RDX_05;
      if (Il2CppMethodInitialized_07545279 == '\0') goto label_058a3b61;
label_058a3607:
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_075452d4 != '\0') goto label_058a35ba;
label_058a3adf:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452d4 = '\x01';
      pMVar14 = extraout_RDX_02;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_058a3b02;
label_058a35ca:
      pSVar13 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Category_k__BackingField;
      if (Il2CppMethodInitialized_075452d3 != '\0') goto label_058a35e2;
label_058a3b22:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452d3 = '\x01';
      pMVar14 = extraout_RDX_04;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_058a3b41;
label_058a35ef:
      subcategory = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                    _Subcategory_k__BackingField;
      if (Il2CppMethodInitialized_07545279 != '\0') goto label_058a3607;
label_058a3b61:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_07545279 = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      pMVar14 = extraout_RDX_06;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pMVar14 = extraout_RDX_07;
    }
    pMVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn(pSVar13,subcategory,pMVar14);
    if (pMVar10 == (Map_Experience_array *)0x0) goto label_058a3cae;
    if ((int)pMVar10->max_length == 1) {
      pMVar12 = pMVar10->m_Items[0];
    }
    else {
      pMVar12 = (Map_Experience_o *)0x0;
    }
    bVar8 = pMVar12 == (Map_Experience_o *)0x0;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a3a49;
label_058a34d1:
    if (Il2CppMethodInitialized_075452e2 != '\0') goto label_058a34de;
label_058a3a5b:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e2 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar5->_Experience_k__BackingField = (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar5->_Experience_k__BackingField);
  if (Il2CppMethodInitialized_075452e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar5->_RuleResult_k__BackingField = (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar5->_RuleResult_k__BackingField);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a365e;
label_058a356f:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a356f;
label_058a365e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
     (pSVar7 = (pSVar6->fields).ExperienceName, pSVar7 == (Settings_StringSetting_o *)0x0)) goto label_058a3cae;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a36f8;
label_058a36c4:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a36c4;
label_058a36f8:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
     (pSVar7 = (pSVar6->fields).ExperienceVariant, pSVar7 == (Settings_StringSetting_o *)0x0))
  goto label_058a3cae;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a3787;
label_058a3753:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a3753;
label_058a3787:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar6 == (Settings_InGameSet_o *)0x0) ||
     (__this = (pSVar6->fields).Sandbox, __this == (Settings_BoolSetting_o *)0x0)) goto label_058a3cae;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)__this,false,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_configurationMode = 0;
  if (Il2CppMethodInitialized_075452d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  if ((pIVar15->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar15);
    pIVar15 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  bVar9 = System_String__Equals_52ffe30
                    (pIVar15->static_fields->_Category_k__BackingField,"Sandbox",5,
                     (MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452e0 == '\0') goto label_058a3b9c;
label_058a3922:
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_075452e0 != '\0') goto label_058a3922;
label_058a3b9c:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452e0 = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pGVar5->_Category_k__BackingField = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pGVar5->_Category_k__BackingField);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a395c;
label_058a383a:
    if (g_data_075452d1 != '\0') goto label_058a3847;
label_058a396e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d1 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a3991;
label_058a3857:
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _ShowFavorites_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a383a;
label_058a395c:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452d1 == '\0') goto label_058a396e;
label_058a3847:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a3857;
label_058a3991:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _ShowFavorites_k__BackingField;
  }
  if (cVar1 != '\0') {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_075452e0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452e0 = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pGVar5->_Category_k__BackingField = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pGVar5->_Category_k__BackingField);
    if (Il2CppMethodInitialized_075452e1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452e1 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pGVar5->_Subcategory_k__BackingField = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pGVar5->_Subcategory_k__BackingField);
    return true;
  }
  if (bVar8) {
    return true;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452e1 == '\0') goto label_058a3c51;
label_058a39cf:
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452e1 != '\0') goto label_058a39cf;
label_058a3c51:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e1 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar5->_Subcategory_k__BackingField = (System_String_o *)0x0;
  pMVar14 = (MethodInfo *)&pGVar5->_Subcategory_k__BackingField;
  Il2CppCodeGenWriteBarrier((void **)pMVar14);
  pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories(pMVar14);
  if (pSVar11 != (System_String_array *)0x0) {
    iVar3 = (int)pSVar11->max_length;
joined_r0x058a3a0b:
    if (iVar3 != 1) {
      return true;
    }
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    il2cpp_runtime_helper_058a78a0(0,0);
    return true;
  }
label_058a3cae:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NavigateRoot
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateRoot (const MethodInfo* method);
// 0x58a3cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a3cdd: cmp byte ptr [rip + 0x1ca1602], 0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateRoot(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_075452a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452a9 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
       false;
  do {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Back((MethodInfo *)method_00);
  } while (bVar2);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NavigateCategory
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateCategory (const MethodInfo* method);
// 0x58a3d80
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a3da8: cmp byte ptr [rip + 0x1ca1537], 0
// asm:   0x58a3ef3: cmp byte ptr [rip + 0x1ca13da], 0
// asm:   0x58a3efa: je 0x58a3f32

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateCategory(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  MethodInfo *method_00;
  Il2CppClass *klass;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_01;
  
  if (Il2CppMethodInitialized_075452aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452aa = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         false;
  }
  else {
    *(undefined1 *)((long)klass->static_fields + 0x78) = 0;
  }
  if (Il2CppMethodInitialized_075452d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)((long)klass->static_fields + 0x48),(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_01);
    }
    else {
      bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox
                        ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    }
    if (!bVar2) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_075452d4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452d4 = '\x01';
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
                cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectCategory
                (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Category_k__BackingField,method_00);
      return true;
    }
    return false;
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NavigateSubcategory
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateSubcategory (const MethodInfo* method);
// 0x58a3f60
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a4175: jmp 0x58a4183
// asm:   0x58a422c: jmp 0x58a4560
// asm:   0x58a43b7: jmp 0x58a4560
// asm:   0x58a4497: cmp byte ptr [rip + 0x1ca0e42], 0
// asm:   0x58a449e: je 0x58a4530

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateSubcategory(MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  bool bVar5;
  Map_Experience_array *pMVar6;
  System_String_array *pSVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  System_String_o *subcategory;
  Il2CppClass *klass;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  Map_Experience_o *pMVar9;
  System_String_o *category;
  
  if (Il2CppMethodInitialized_075452ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_075452ab = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a4044;
label_058a3f8c:
    if (Il2CppMethodInitialized_075452e6 != '\0') goto label_058a3f99;
label_058a4056:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e6 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a4079;
label_058a3fa9:
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         false;
    if (Il2CppMethodInitialized_075452d3 != '\0') goto label_058a3fc1;
label_058a4099:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d3 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a3f8c;
label_058a4044:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452e6 == '\0') goto label_058a4056;
label_058a3f99:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a3fa9;
label_058a4079:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         false;
    if (Il2CppMethodInitialized_075452d3 == '\0') goto label_058a4099;
label_058a3fc1:
    uVar1 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  bVar5 = System_String__IsNullOrEmpty
                    (*(System_String_o **)((long)klass->static_fields + 0x50),(MethodInfo *)0x0);
  if (bVar5) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_00);
    pMVar8 = extraout_RDX_00;
  }
  else {
    bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox
                      ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar8 = extraout_RDX;
  }
  if (bVar5) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar8 = extraout_RDX_01;
    if (Il2CppMethodInitialized_075452d4 == '\0') goto label_058a4243;
label_058a40f4:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a4104;
label_058a4266:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    category = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _Category_k__BackingField;
    pMVar8 = extraout_RDX_03;
    if (Il2CppMethodInitialized_075452d3 == '\0') goto label_058a4286;
label_058a411c:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a4129;
label_058a42a5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    subcategory = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                  _Subcategory_k__BackingField;
    pMVar8 = extraout_RDX_05;
    if (Il2CppMethodInitialized_07545279 == '\0') goto label_058a42c5;
label_058a4141:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452d4 != '\0') goto label_058a40f4;
label_058a4243:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    pMVar8 = extraout_RDX_02;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a4266;
label_058a4104:
    category = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _Category_k__BackingField;
    if (Il2CppMethodInitialized_075452d3 != '\0') goto label_058a411c;
label_058a4286:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d3 = '\x01';
    pMVar8 = extraout_RDX_04;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a42a5;
label_058a4129:
    subcategory = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                  _Subcategory_k__BackingField;
    if (Il2CppMethodInitialized_07545279 != '\0') goto label_058a4141;
label_058a42c5:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545279 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pMVar8 = extraout_RDX_06;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar8 = extraout_RDX_07;
  }
  pMVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn(category,subcategory,pMVar8);
  if (pMVar6 == (Map_Experience_array *)0x0) goto label_058a4560;
  if ((int)pMVar6->max_length == 1) {
    pMVar9 = pMVar6->m_Items[0];
  }
  else {
    pMVar9 = (Map_Experience_o *)0x0;
  }
  if (Il2CppMethodInitialized_075452e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Experience_k__BackingField = (Map_Experience_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_Experience_k__BackingField);
  if (Il2CppMethodInitialized_075452e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e3 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_RuleResult_k__BackingField = (Settings_ExperienceRuleResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar2->_RuleResult_k__BackingField);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a4341;
label_058a4218:
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a4218;
label_058a4341:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar3 == (Settings_InGameSet_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).ExperienceName, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_058a4560;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058a43db;
label_058a43a7:
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058a43a7;
label_058a43db:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar3 == (Settings_InGameSet_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).ExperienceVariant, pSVar4 == (Settings_StringSetting_o *)0x0))
  goto label_058a4560;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  if (pMVar9 == (Map_Experience_o *)0x0) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452e1 == '\0') goto label_058a44ee;
label_058a4449:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452e1 != '\0') goto label_058a4449;
label_058a44ee:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e1 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_Subcategory_k__BackingField = (System_String_o *)0x0;
  pMVar8 = (MethodInfo *)&pGVar2->_Subcategory_k__BackingField;
  Il2CppCodeGenWriteBarrier((void **)pMVar8);
  pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories(pMVar8);
  if (pSVar7 != (System_String_array *)0x0) {
    if ((int)pSVar7->max_length != 1) {
      return true;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_075452e0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452e0 = '\x01';
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
              cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pGVar2->_Category_k__BackingField = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pGVar2->_Category_k__BackingField);
    return true;
  }
label_058a4560:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$OpenRoomSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenRoomSettings (const MethodInfo* method);
// 0x58a4570
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a458d: cmp byte ptr [rip + 0x1ca0d3a], 0
// asm:   0x58a4594: je 0x58a45e5
// asm:   0x58a4622: cmp byte ptr [rip + 0x1ca0cbd], 0
// asm:   0x58a4629: je 0x58a4652

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenRoomSettings(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  
  if (Il2CppMethodInitialized_075452ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452ac = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452ce = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->
                            static_fields + 0x20);
  }
  if (cVar1 == '\0') {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e6 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         true;
    return;
  }
  *(undefined1 *)
   ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x78) = 1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$OpenExperiences
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenExperiences (const MethodInfo* method);
// 0x58a4690
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a46b5: cmp byte ptr [rip + 0x1ca0c2a], 0
// asm:   0x58a46bc: je 0x58a4784
// asm:   0x58a4737: jmp 0x58a484d

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__OpenExperiences(MethodInfo *method)

{
  uint32_t uVar1;
  void *pvVar2;
  Settings_InGameSet_o *pSVar3;
  Il2CppClass *klass;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075452ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_075452ad = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = *(uint32_t *)((long)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession + 0xe4);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowRoomSettings_k__BackingField =
         false;
  }
  else {
    ((Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass)->static_fields->
    _ShowRoomSettings_k__BackingField = false;
  }
  if (Il2CppMethodInitialized_075452e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452e7 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  pvVar2 = klass->static_fields;
  *(undefined1 *)((long)pvVar2 + 0x79) = 0;
  *(undefined4 *)((long)pvVar2 + 0x24) = 0;
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar3 = *(Settings_InGameSet_o **)((long)klass->static_fields + 0x40);
  }
  if ((pSVar3 == (Settings_InGameSet_o *)0x0) ||
     (method_00 = (MethodInfo *)(pSVar3->fields).Sandbox, method_00 == (MethodInfo *)0x0)) {
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)method_00,false,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__NavigateRoot(method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RefreshSandbox
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox (const MethodInfo* method);
// 0x58998c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589990e: test rbx, rbx
// asm:   0x5899911: jne 0x58999de
// asm:   0x5899917: jmp 0x5899c41

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandbox(MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar2;
  System_String_o *pSVar3;
  Il2CppObject *object;
  System_String_array *pSVar4;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar5;
  System_Func_TSource__TKey__o *__this;
  Settings_SandboxGameCreateConfiguration_o *pSVar6;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075452ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_RefreshSandbox_b__147_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_075452ae = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058998e9;
label_0589998e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_05899901;
label_058999ae:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589998e;
label_058998e9:
    pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058999ae;
label_05899901:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (pSVar6 == (Settings_SandboxGameCreateConfiguration_o *)0x0) goto label_05899c41;
  Settings_SandboxGameCreateConfiguration__Refresh
            (pSVar6,*(Settings_InGameSet_o **)
                     ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->
                            static_fields + 0x40),(MethodInfo *)0x0);
  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  if (pSVar6 == (Settings_SandboxGameCreateConfiguration_o *)0x0) goto label_05899c41;
  pSVar4 = Settings_SandboxGameCreateConfiguration__GetAddonNames(pSVar6,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this = (System_Func_TSource__TKey__o *)pGVar5->__9__147_0;
    if (__this != (System_Func_TSource__TKey__o *)0x0) goto label_05899a43;
label_05899b53:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    object = (Il2CppObject *)pGVar5->__9;
    __this = (System_Func_TSource__TKey__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_RefreshSandbox_b__147_0,
               (MethodInfo_4F19B50 *)0x0);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar5->__9__147_0 = (System_Func_string__string__o *)__this;
    Il2CppCodeGenWriteBarrier(&pGVar5->__9__147_0);
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor != 0) goto label_05899a5b;
label_05899bd1:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (Il2CppMethodInitialized_07542886 != '\0') goto label_05899a68;
label_05899be3:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this = (System_Func_TSource__TKey__o *)pGVar5->__9__147_0;
    if (__this == (System_Func_TSource__TKey__o *)0x0) goto label_05899b53;
label_05899a43:
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) goto label_05899bd1;
label_05899a5b:
    if (Il2CppMethodInitialized_07542886 == '\0') goto label_05899be3;
label_05899a68:
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  source = System_Linq_Enumerable__OrderBy_object__object__34f2050
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,__this,
                      (System_Collections_Generic_IComparer_TKey__o *)
                      TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34F2050 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728);
  pSVar4 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_sandboxAddonNames = pSVar4;
  Il2CppCodeGenWriteBarrier(&pGVar2->_sandboxAddonNames);
  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  if (pSVar6 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    pSVar3 = (pSVar6->fields)._LastError_k__BackingField;
    if (Il2CppMethodInitialized_075452e4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452e4 = '\x01';
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pGVar2->_LoadError_k__BackingField = pSVar3;
    method_00 = (MethodInfo *)&pGVar2->_LoadError_k__BackingField;
    Il2CppCodeGenWriteBarrier((void **)method_00);
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields(method_00);
    return;
  }
label_05899c41:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RebuildSandboxFields
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields (const MethodInfo* method);
// 0x589e170
// eh: try 0x589eb40..0x589ee0f -> pad 0x589ee1d (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x589ee3c..0x589ee41 -> pad 0x589ee46 cleanup
// eh: try 0x589ee49..0x589ee53 -> pad 0x589ee5b catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589e3f2: jmp 0x589ee05
// asm:   0x589e454: jmp 0x589ee05
// asm:   0x589e514: jmp 0x589ee05
// asm:   0x589e5a3: test rbx, rbx
// asm:   0x589e5a6: jne 0x589e5d9
// asm:   0x589e5a8: jmp 0x589ee05
// asm:   0x589e62e: jmp 0x589ee05
// asm:   0x589e6c9: jmp 0x589ee05
// asm:   0x589e7ba: jmp 0x589ee05
// asm:   0x589e7df: jmp 0x589e77d
// asm:   0x589e8cd: jmp 0x589ee05
// asm:   0x589eb79: nop dword ptr [rax]
// asm:   0x589ec9f: nop 
// asm:   0x589ed19: jmp 0x589ee05
// asm:   0x589ee0f: mov rdi, r14
// asm:   0x589ee12: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x589ee17: jmp 0x589ee21
// asm:   0x589ee19: jmp 0x589ee21
// asm:   0x589ee1b: jmp 0x589ee21
// asm:   0x589ee1d: jmp 0x589ee21
// asm:   0x589ee1f: jmp 0x589ee21
// asm:   0x589ee21: mov rbx, rax
// asm:   0x589ee24: cmp edx, 1
// asm:   0x589ee27: jne 0x589ee49
// asm:   0x589ee29: mov rdi, rbx
// asm:   0x589ee2c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x589ee31: mov r14, qword ptr [rax]
// asm:   0x589ee34: mov qword ptr [rsp + 0x18], r14
// asm:   0x589ee39: mov bpl, 1
// asm:   0x589ee3c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x589ee41: jmp 0x589ec6f
// asm:   0x589ee46: mov rbx, rax
// asm:   0x589ee49: lea rdi, [rsp + 0x18]
// asm:   0x589ee4e: call 0x2fcf9e0  ; il2cpp_runtime_helper_02fcf9e0()
// asm:   0x589ee53: mov rdi, rbx
// asm:   0x589ee56: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x589ee5b: mov rdi, rax
// asm:   0x589ee5e: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RebuildSandboxFields(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint32_t uVar2;
  System_Collections_Generic_List_AottgSandboxField__o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar4;
  Settings_InGameGeneralSettings_o *pSVar5;
  Settings_StringSetting_o *setting;
  Settings_SandboxGameCreateConfiguration_o *__this;
  Settings_IntSetting_o *setting_00;
  Settings_WeatherSettings_o *pSVar6;
  Settings_SetSettingsContainer_WeatherSet__o *__this_00;
  Settings_InGameModeSettings_o *pSVar7;
  Settings_InGameAddonSettings_o *pSVar8;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *source;
  Il2CppClass *pIVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  bool bVar11;
  System_String_o *pSVar12;
  System_String_array *pSVar13;
  MethodInfo *pMVar14;
  Il2CppObject *pIVar15;
  VirtualInvokeData *pVVar16;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar17;
  System_Func_T__TResult__o *__this_01;
  MethodInfo *in_RCX;
  ulong uVar18;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Settings_InGameSet_o *pSVar19;
  Gisketch_Aottg2UI_Game_AottgSandboxField_array *method_00;
  long lVar20;
  MethodInfo *in_R9;
  undefined1 auVar21 [16];
  Il2CppObject *local_50;
  int32_t local_44 [3];
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_075452af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_string_Dictionary_string_BaseSetting_string
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_KeyValuePair_string_Dictionary_string_BaseSetting_string);
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
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_RebuildSandboxFields_b__148_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"addon.");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"misc");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"mode");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Mode");
    Il2CppMethodInitialized_075452af = '\x01';
  }
  local_44[0] = 0;
  local_50 = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  method_00 = (Gisketch_Aottg2UI_Game_AottgSandboxField_array *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  if (pSVar3 == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) goto label_0589ee05;
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length) {
    method_00 = (pSVar3->fields)._items;
    in_RCX = (MethodInfo *)0x0;
    System_Array__Clear((System_Array_o *)method_00,0,length,(MethodInfo *)0x0);
  }
  bVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_00);
  if (!bVar11) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cf != '\0') goto label_0589e36a;
label_0589e46b:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cf = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452cf == '\0') goto label_0589e46b;
label_0589e36a:
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _SandboxSection_k__BackingField;
  pMVar14 = (MethodInfo *)"General";
  bVar11 = System_String__op_Equality(pSVar12,"General",(MethodInfo *)0x0);
  if (!bVar11) {
    bVar11 = System_String__op_Equality(pSVar12,"Mode",(MethodInfo *)0x0);
    if (!bVar11) {
      bVar11 = System_String__op_Equality(pSVar12,"Titans",(MethodInfo *)0x0);
      if (!bVar11) {
        bVar11 = System_String__op_Equality(pSVar12,"Misc",(MethodInfo *)0x0);
        if (!bVar11) {
          return;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589e4f0;
label_0589ed9d:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452cd = '\x01';
          uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589ed9d;
label_0589e4f0:
          uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
          pSVar19 = pGVar4->_Working_k__BackingField;
        }
        else {
          pGVar4 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields;
          pSVar19 = pGVar4->_Working_k__BackingField;
        }
        if (pSVar19 != (Settings_InGameSet_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddContainerFields
                    ("misc",(Settings_BaseSettingsContainer_o *)(pSVar19->fields).Misc,
                     pGVar4->MultiplayerMiscIds,(MethodInfo *)pSVar19);
          return;
        }
        goto label_0589ee05;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589ecfd;
label_0589ed2c:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452cd = '\x01';
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_0589ed09;
label_0589ed4b:
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                  _Working_k__BackingField;
      }
      else {
        if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589ed2c;
label_0589ecfd:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_0589ed4b;
label_0589ed09:
        pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                  _Working_k__BackingField;
      }
      if (pSVar19 != (Settings_InGameSet_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddContainerFields
                  ("titan",(Settings_BaseSettingsContainer_o *)(pSVar19->fields).Titan,
                   (System_Collections_Generic_HashSet_string__o *)0x0,in_RCX);
        return;
      }
      goto label_0589ee05;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pMVar14 = extraout_RDX_00;
      if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589e430;
label_0589e849:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      pMVar14 = extraout_RDX_01;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_0589e440;
label_0589e86c:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Working_k__BackingField;
      pMVar14 = extraout_RDX_02;
    }
    else {
      pMVar14 = extraout_RDX;
      if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589e849;
label_0589e430:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589e86c;
label_0589e440:
      pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Working_k__BackingField;
    }
    if ((pSVar19 == (Settings_InGameSet_o *)0x0) ||
       (pSVar7 = (pSVar19->fields).Mode, pSVar7 == (Settings_InGameModeSettings_o *)0x0)) goto label_0589ee05;
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddDynamicFields
              ("mode",(pSVar7->fields).Current,pMVar14);
    if (Il2CppMethodInitialized_075452cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_0589e8bd;
label_0589e8f1:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Working_k__BackingField;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589e8f1;
label_0589e8bd:
      pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _Working_k__BackingField;
    }
    if ((pSVar19 == (Settings_InGameSet_o *)0x0) ||
       (pSVar8 = (pSVar19->fields).Addons, pSVar8 == (Settings_InGameAddonSettings_o *)0x0))
    goto label_0589ee05;
    source = (pSVar8->fields).Current;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar17 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
      __this_01 = (System_Func_T__TResult__o *)pGVar17->__9__148_0;
      if (__this_01 != (System_Func_T__TResult__o *)0x0) goto label_0589e94d;
label_0589ea25:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
        pGVar17 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
      }
      pIVar15 = (Il2CppObject *)pGVar17->__9;
      __this_01 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_KeyValuePair_string_Dictionary_string_BaseSetting_string);
      System_Func_KeyValuePair_object__object___object____ctor
                (__this_01,pIVar15,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_RebuildSandboxFields_b__148_0,
                 (MethodInfo_4F10320 *)0x0);
      pGVar17 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
      pGVar17->__9__148_0 =
           (System_Func_KeyValuePair_string__Dictionary_string__BaseSetting____string__o *)__this_01;
      Il2CppCodeGenWriteBarrier(&pGVar17->__9__148_0);
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor != 0) goto label_0589e965;
label_0589eaa3:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      if (Il2CppMethodInitialized_07542886 != '\0') goto label_0589e972;
label_0589eab5:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
      Il2CppMethodInitialized_07542886 = '\x01';
      uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar17 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->static_fields;
      __this_01 = (System_Func_T__TResult__o *)pGVar17->__9__148_0;
      if (__this_01 == (System_Func_T__TResult__o *)0x0) goto label_0589ea25;
label_0589e94d:
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) goto label_0589eaa3;
label_0589e965:
      if (Il2CppMethodInitialized_07542886 == '\0') goto label_0589eab5;
label_0589e972:
      uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    pIVar15 = (Il2CppObject *)
              System_Linq_Enumerable__OrderBy_KeyValuePair_object__object___object__34f1fd0
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TKey__o *)__this_01,
                         (System_Collections_Generic_IComparer_TKey__o *)
                         TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                         (MethodInfo_34F1FD0 *)
                         MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_string_Dictionary_string_BaseSetting_string
                        );
    if (pIVar15 != (Il2CppObject *)0x0) {
      pIVar9 = pIVar15->klass;
      uVar18 = (ulong)(pIVar9->_2).interface_offsets_count;
      if (uVar18 != 0) {
        pIVar10 = (pIVar9->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_KeyValuePair_string__Dictionary_string__BaseSetting____c
                **)((long)&pIVar10->interfaceType + lVar20) ==
              TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_Dictionary_string_BaseSetting
             ) {
            pVVar16 = (VirtualInvokeData *)
                      &pIVar9->vtable[*(int *)((long)&pIVar10->offset + lVar20)].methodPtr;
            goto label_0589eafa;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar18 * 0x10 != lVar20);
      }
      pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar15,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_Dictionary_string_BaseSetting
                           ,0);
label_0589eafa:
      local_50 = (*pVVar16->methodPtr)(pIVar15,pVVar16->method);
      local_44[1] = 0;
      local_44[2] = 0;
      local_38 = &local_50;
      do {
        pIVar15 = local_50;
        if (local_50 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar9 = local_50->klass;
        uVar18 = (ulong)(pIVar9->_2).interface_offsets_count;
        if (uVar18 != 0) {
          pIVar10 = (pIVar9->_1).interfaceOffsets;
          lVar20 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar10->interfaceType + lVar20) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar16 = (VirtualInvokeData *)
                        &pIVar9->vtable[*(int *)((long)&pIVar10->offset + lVar20)].methodPtr;
              goto label_0589ebb3;
            }
            lVar20 = lVar20 + 0x10;
          } while (uVar18 * 0x10 != lVar20);
        }
        pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_50,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0589ebb3:
        bVar11 = (*pVVar16->methodPtr)(pIVar15,pVVar16->method);
        pIVar15 = local_50;
        if (!bVar11) {
          if (local_50 == (Il2CppObject *)0x0) {
            return;
          }
          pIVar9 = local_50->klass;
          uVar18 = (ulong)(pIVar9->_2).interface_offsets_count;
          if (uVar18 == 0) goto label_0589ecaf;
          pIVar10 = (pIVar9->_1).interfaceOffsets;
          lVar20 = 0;
          goto label_0589eca0;
        }
        if (local_50 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar9 = local_50->klass;
        uVar18 = (ulong)(pIVar9->_2).interface_offsets_count;
        if (uVar18 != 0) {
          pIVar10 = (pIVar9->_1).interfaceOffsets;
          lVar20 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_KeyValuePair_string__Dictionary_string__BaseSetting____c
                  **)((long)&pIVar10->interfaceType + lVar20) ==
                TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_Dictionary_string_BaseSetting
               ) {
              pVVar16 = (VirtualInvokeData *)
                        &pIVar9->vtable[*(int *)((long)&pIVar10->offset + lVar20)].methodPtr;
              goto label_0589ec33;
            }
            lVar20 = lVar20 + 0x10;
          } while (uVar18 * 0x10 != lVar20);
        }
        pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_50,(Il2CppClass *)
                                      TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_Dictionary_string_BaseSetting
                             ,0);
label_0589ec33:
        auVar21 = (*pVVar16->methodPtr)(pIVar15,pVVar16->method);
        pSVar12 = System_String__Concat_52f0320("addon.",auVar21._0_8_,(MethodInfo *)0x0);
        pMVar14 = extraout_RDX_03;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          pMVar14 = extraout_RDX_04;
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddDynamicFields(pSVar12,auVar21._8_8_,pMVar14);
      } while( true );
    }
    goto label_0589ee05;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel("general.MapName",pMVar14);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589e3de;
label_0589e53c:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589e53c;
label_0589e3de:
    pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar19 == (Settings_InGameSet_o *)0x0) ||
     (pSVar5 = (pSVar19->fields).General, pSVar5 == (Settings_InGameGeneralSettings_o *)0x0))
  goto label_0589ee05;
  setting = (pSVar5->fields).MapName;
  pSVar13 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SandboxMapNames
                      ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
            ("general.MapName",pSVar12,(Settings_BaseSetting_o *)setting,pSVar13,(System_String_o *)0x0,
             in_R9);
  __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (__this == (Settings_SandboxGameCreateConfiguration_o *)0x0) goto label_0589ee05;
  pSVar19 = *(Settings_InGameSet_o **)
             ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
             0x40);
  pSVar13 = Settings_SandboxGameCreateConfiguration__GetGameModes(__this,pSVar19,local_44,(MethodInfo *)0x0);
  pMVar14 = (MethodInfo *)
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel
                      ("general.GameMode",(MethodInfo *)pSVar19);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589e61e;
label_0589e652:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589e652;
label_0589e61e:
    pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar19 == (Settings_InGameSet_o *)0x0) ||
     (pSVar5 = (pSVar19->fields).General, pSVar5 == (Settings_InGameGeneralSettings_o *)0x0))
  goto label_0589ee05;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
            ("general.GameMode",(System_String_o *)pMVar14,
             (Settings_BaseSetting_o *)(pSVar5->fields).GameMode,pSVar13,(System_String_o *)0x0,in_R9);
  pSVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel("general.Difficulty",pMVar14);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589e6b9;
label_0589e6ed:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589e6ed;
label_0589e6b9:
    pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar19 == (Settings_InGameSet_o *)0x0) ||
     (pSVar5 = (pSVar19->fields).General, pSVar5 == (Settings_InGameGeneralSettings_o *)0x0))
  goto label_0589ee05;
  setting_00 = (pSVar5->fields).Difficulty;
  pSVar13 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingOptions("general.Difficulty",pMVar14);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
            ("general.Difficulty",pSVar12,(Settings_BaseSetting_o *)setting_00,pSVar13,(System_String_o *)0x0
             ,in_R9);
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (pSVar6 == (Settings_WeatherSettings_o *)0x0) {
    pMVar14 = (MethodInfo *)0x0;
    pSVar13 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    __this_00 = (pSVar6->fields).WeatherSets;
    if (__this_00 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0) goto label_0589ee05;
    pMVar14 = MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames;
    pSVar13 = Settings_SetSettingsContainer_object___GetSetNames
                        ((Settings_SetSettingsContainer_T__o *)__this_00,
                         (MethodInfo_40482D0 *)MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames
                        );
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel("general.Weather",pMVar14);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589e7aa;
label_0589e800:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589e800;
label_0589e7aa:
    pSVar19 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (pSVar19 != (Settings_InGameSet_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
              ("general.Weather",pSVar12,(Settings_BaseSetting_o *)(pSVar19->fields).WeatherIndex,pSVar13,
               (System_String_o *)0x0,in_R9);
    return;
  }
label_0589ee05:
  ThrowNullReferenceException();
  while (lVar20 = lVar20 + 0x10, uVar18 * 0x10 != lVar20) {
label_0589eca0:
    if (*(System_IDisposable_c **)((long)&pIVar10->interfaceType + lVar20) == TypeInfo_System_IDisposable) {
      pVVar16 = (VirtualInvokeData *)&pIVar9->vtable[*(int *)((long)&pIVar10->offset + lVar20)].methodPtr;
      goto label_0589eccd;
    }
  }
label_0589ecaf:
  pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath(local_50,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0589eccd:
  (*pVVar16->methodPtr)(pIVar15,pVVar16->method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AddContainerFields
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddContainerFields (System_String_o* prefix, Settings_BaseSettingsContainer_o* container, System_Collections_Generic_HashSet_string__o* excluded, const MethodInfo* method);
// 0x58a5080
// eh: try 0x58a521f..0x58a54a9 -> pad 0x58a54d2 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58a54ea..0x58a54ef -> pad 0x58a54f4 cleanup
// eh: try 0x58a54f7..0x58a5501 -> pad 0x58a5509 catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a515e: nop 
// asm:   0x58a51c8: lea r15, [rip + 0x19d4229]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58a51cf: jmp 0x58a51ee
// asm:   0x58a51e0: mov rbx, qword ptr [rsp + 8]
// asm:   0x58a51e5: test rbx, rbx
// asm:   0x58a51e8: je 0x58a548a
// asm:   0x58a520d: nop dword ptr [rax]
// asm:   0x58a54ae: mov rdi, r14
// asm:   0x58a54b1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58a54b6: jmp 0x58a54d2
// asm:   0x58a54b8: jmp 0x58a54d2
// asm:   0x58a54ba: jmp 0x58a54d2
// asm:   0x58a54bc: jmp 0x58a54d2
// asm:   0x58a54be: jmp 0x58a54d2
// asm:   0x58a54c0: jmp 0x58a54d2
// asm:   0x58a54c2: jmp 0x58a54d2
// asm:   0x58a54c4: jmp 0x58a54d2
// asm:   0x58a54c6: jmp 0x58a54d2
// asm:   0x58a54c8: jmp 0x58a54d2
// asm:   0x58a54ca: jmp 0x58a54d2
// asm:   0x58a54cc: jmp 0x58a54d2
// asm:   0x58a54ce: jmp 0x58a54d2
// asm:   0x58a54d0: jmp 0x58a54d2
// asm:   0x58a54d2: mov rbx, rax
// asm:   0x58a54d5: cmp edx, 1
// asm:   0x58a54d8: jne 0x58a54f7
// asm:   0x58a54da: mov rdi, rbx
// asm:   0x58a54dd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58a54e2: mov r14, qword ptr [rax]
// asm:   0x58a54e5: mov qword ptr [rsp + 0x20], r14
// asm:   0x58a54ea: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58a54ef: jmp 0x58a53fe
// asm:   0x58a54f4: mov rbx, rax
// asm:   0x58a54f7: lea rdi, [rsp + 0x20]
// asm:   0x58a54fc: call 0x2fcfa70  ; il2cpp_runtime_helper_02fcfa70()
// asm:   0x58a5501: mov rdi, rbx
// asm:   0x58a5504: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58a5509: mov rdi, rax
// asm:   0x58a550c: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddContainerFields
               (System_String_o *prefix,Settings_BaseSettingsContainer_o *container,
               System_Collections_Generic_HashSet_string__o *excluded,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  char cVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *pSVar9;
  Settings_BaseSetting_o *setting;
  System_String_o *label;
  System_String_array *options;
  ulong uVar10;
  MethodInfo *method_00;
  long lVar11;
  MethodInfo *in_R9;
  Il2CppObject *local_60;
  Il2CppObject *local_58;
  System_String_o *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  local_50 = prefix;
  if (Il2CppMethodInitialized_075452b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_075452b0 = '\x01';
  }
  local_60 = (Il2CppObject *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if (((container == (Settings_BaseSettingsContainer_o *)0x0) ||
      (pSVar2 = (container->fields).Settings,
      pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
     (pIVar7 = (Il2CppObject *)
               System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar2,(MethodInfo *)0x0),
     pIVar7 == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar3 = pIVar7->klass;
  uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
  if (uVar10 != 0) {
    pIVar4 = (pIVar3->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(System_Collections_IEnumerable_c **)((long)&pIVar4->interfaceType + lVar11) ==
          TypeInfo_System_Collections_IEnumerable) {
        pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
        goto label_058a5191;
      }
      lVar11 = lVar11 + 0x10;
    } while (uVar10 * 0x10 != lVar11);
  }
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_058a5191:
  pIVar7 = (Il2CppObject *)(*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  local_48 = 0;
  local_40 = &local_60;
  local_38 = &local_58;
  do {
    local_60 = pIVar7;
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar7->klass;
    uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar11) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
          goto label_058a5243;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058a5243:
    cVar5 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    pIVar7 = local_60;
    if (cVar5 == '\0') {
      pIVar7 = il2cpp_vm_Object_IsInst(local_60,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar7 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar3 = pIVar7->klass;
      uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
      local_58 = pIVar7;
      if (uVar10 == 0) goto label_058a544f;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar11 = 0;
      break;
    }
    if (local_60 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_60->klass;
    uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar11) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar11) + 1);
          goto label_058a52d7;
        }
        lVar11 = lVar11 + 0x10;
      } while (uVar10 * 0x10 != lVar11);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_058a52d7:
    pSVar9 = (System_String_o *)(*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    if ((pSVar9 != (System_String_o *)0x0) && (pSVar9->klass != g_data_07556758)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
    }
    if ((excluded == (System_Collections_Generic_HashSet_string__o *)0x0) ||
       (bVar6 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)excluded,(Il2CppObject *)pSVar9,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          ), pIVar7 = local_60, !bVar6)) {
      pSVar2 = (container->fields).Settings;
      if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      setting = (Settings_BaseSetting_o *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          (pSVar2,(Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      if (setting != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((setting->klass->_2).typeHierarchyDepth < bVar1) ||
           ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(setting);
        }
      }
      method_00 = (MethodInfo *)".";
      pSVar9 = System_String__Concat_5301f10(local_50,".",pSVar9,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported(setting,method_00);
      pIVar7 = local_60;
      if (bVar6) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        label = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel(pSVar9,method_00);
        options = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingOptions(pSVar9,method_00);
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
                  (pSVar9,label,setting,options,(System_String_o *)0x0,in_R9);
        pIVar7 = local_60;
      }
    }
  } while( true );
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar8 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
      goto label_058a546d;
    }
  }
label_058a544f:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058a546d:
  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SettingOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingOptions (System_String_o* id, const MethodInfo* method);
// 0x588a5f0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588a6fd: cmp byte ptr [rip + 0x1cbabaf], 0
// asm:   0x588a704: je 0x588a7c9
// asm:   0x588a834: cmp byte ptr [rip + 0x1cbaa77], 0
// asm:   0x588a83b: je 0x588a882

System_String_array *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingOptions(System_String_o *id,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_075452b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHealthMode");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadMode");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.HeadOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.PVPOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.General.DifficultyOptions");
    Il2CppMethodInitialized_075452b1 = '\x01';
  }
  bVar2 = System_String__op_Equality(id,"general.Difficulty",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocaleOptions("CreateGamePopup.General.DifficultyOptions",(MethodInfo *)0x0);
    return pSVar3;
  }
  bVar2 = System_String__op_Equality(id,"misc.VoiceChat",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_075452b3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.VoiceChatOptions");
      Il2CppMethodInitialized_075452b3 = '\x01';
      uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocaleOptions("CreateGamePopup.Misc.VoiceChatOptions",(MethodInfo *)0x0);
    return pSVar3;
  }
  bVar2 = System_String__op_Equality(id,"misc.PVP",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocaleOptions("CreateGamePopup.Misc.PVPOptions",(MethodInfo *)0x0);
    return pSVar3;
  }
  bVar2 = System_String__op_Equality(id,"titan.TitanHeadMode",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocaleOptions("CreateGamePopup.Titans.HeadOptions",(MethodInfo *)0x0);
    return pSVar3;
  }
  bVar2 = System_String__op_Equality(id,"titan.TitanHealthMode",(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar3;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.HealthOptions");
    Il2CppMethodInitialized_075452b2 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocaleOptions("CreateGamePopup.Titans.HealthOptions",(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanHealthOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanHealthOptions (const MethodInfo* method);
// 0x5886e90

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanHealthOptions(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_075452b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.HealthOptions");
    Il2CppMethodInitialized_075452b2 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleOptions("CreateGamePopup.Titans.HealthOptions",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$VoiceChatOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__VoiceChatOptions (const MethodInfo* method);
// 0x5886b20

System_String_array * Gisketch_Aottg2UI_Game_AottgGameCreateSession__VoiceChatOptions(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_075452b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.VoiceChatOptions");
    Il2CppMethodInitialized_075452b3 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleOptions("CreateGamePopup.Misc.VoiceChatOptions",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FieldLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel (System_String_o* id, const MethodInfo* method);
// 0x5885780

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_String_o *key;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075452b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452b4 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if (id == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)&g_data_0000002e;
    iVar2 = System_String__LastIndexOf(id,0x2e,(MethodInfo *)0x0);
    pSVar3 = id;
    if (-1 < iVar2) {
      method_00 = (MethodInfo *)(ulong)(iVar2 + 1U);
      pSVar3 = System_String__Substring(id,iVar2 + 1U,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Label(pSVar3,method_00);
    key = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabelKey(id,method_00);
    if (key != (System_String_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text_525ff30(key,pSVar3,(MethodInfo *)0x0)
      ;
      return pSVar3;
    }
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FieldDescription
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldDescription (System_String_o* id, const MethodInfo* method);
// 0x5889e50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5889f86: jmp 0x588a1fb
// asm:   0x588a00c: jmp 0x588a0e1
// asm:   0x588a05f: jmp 0x588a077
// asm:   0x588a196: jmp 0x588a1fb

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldDescription(System_String_o *id,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_InGameModeSettings_o *pSVar4;
  bool bVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *fallback;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  
  if (Il2CppMethodInitialized_075452b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"mode.");
    Il2CppMethodInitialized_075452b5 = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (!bVar5) {
    if (id == (System_String_o *)0x0) goto label_0588a1fb;
    bVar5 = System_String__StartsWith_53002b0(id,"mode.",5,(MethodInfo *)0x0);
    if (!bVar5) goto label_05889fda;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452cd == '\0') goto label_05889f9d;
label_05889f07:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_05889f17;
label_05889fc0:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    else {
      if (Il2CppMethodInitialized_075452cd != '\0') goto label_05889f07;
label_05889f9d:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_05889fc0;
label_05889f17:
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    if (pSVar1 != (Settings_InGameSet_o *)0x0) {
      if ("mode." == (System_String_o *)0x0) goto label_0588a1fb;
      pSVar6 = System_String__Substring(id,("mode."->fields)._stringLength,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pMVar8 = extraout_RDX_00;
        if (Il2CppMethodInitialized_075452cd == '\0') goto label_0588a117;
label_05889f62:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_05889f72;
label_0588a13a:
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
        pMVar8 = extraout_RDX_02;
      }
      else {
        pMVar8 = extraout_RDX;
        if (Il2CppMethodInitialized_075452cd != '\0') goto label_05889f62;
label_0588a117:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452cd = '\x01';
        pMVar8 = extraout_RDX_01;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_0588a13a;
label_05889f72:
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
      }
      if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
          (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
         (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_0588a1fb;
      pSVar7 = (pSVar3->fields)._value;
      if (Il2CppMethodInitialized_075452cd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452cd = '\x01';
        pMVar8 = extraout_RDX_03;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_0588a1b3;
label_0588a186:
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_0588a186;
label_0588a1b3:
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
        pMVar8 = extraout_RDX_04;
      }
      if ((pSVar1 != (Settings_InGameSet_o *)0x0) &&
         (pSVar4 = (pSVar1->fields).Mode, pSVar4 != (Settings_InGameModeSettings_o *)0x0)) {
        fallback = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ScriptTooltip
                             ((pSVar4->fields).Current,pSVar6,pMVar8);
        pSVar6 = UI_ContentLocale__ModeSettingTooltip(pSVar7,pSVar6,fallback,(MethodInfo *)0x0);
        return pSVar6;
      }
      goto label_0588a1fb;
    }
  }
label_05889fda:
  pMVar8 = (MethodInfo *)0x0;
  bVar5 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (!bVar5) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabelKey(id,pMVar8);
      pMVar8 = (MethodInfo *)"Tooltip";
    }
    else {
      pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabelKey(id,pMVar8);
      pMVar8 = (MethodInfo *)"Tooltip";
    }
    "Tooltip" = (System_String_o *)pMVar8;
    if (pSVar6 != (System_String_o *)0x0) {
      pSVar7 = System_String__Concat_52f0320(pSVar6,(System_String_o *)pMVar8,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__DescriptionText(pSVar7,pMVar8);
      }
      else {
        pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__DescriptionText(pSVar7,pMVar8);
      }
      if (pSVar7 != (System_String_o *)0x0) {
        return pSVar7;
      }
      bVar5 = System_String__EndsWith_52ff780(pSVar6,"Enabled",4,(MethodInfo *)0x0);
      if (bVar5) {
        if ("Enabled" == (System_String_o *)0x0) {
label_0588a1fb:
          ThrowNullReferenceException();
        }
        pSVar6 = System_String__Substring_53042f0
                           (pSVar6,0,(pSVar6->fields)._stringLength -
                                     ("Enabled"->fields)._stringLength,(MethodInfo *)0x0);
        pMVar8 = (MethodInfo *)"Tooltip";
        pSVar6 = System_String__Concat_52f0320(pSVar6,"Tooltip",(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__DescriptionText(pSVar6,pMVar8);
        if (pSVar6 != (System_String_o *)0x0) {
          return pSVar6;
        }
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$DescriptionText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__DescriptionText (System_String_o* key, const MethodInfo* method);
// 0x58a5960

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__DescriptionText(System_String_o *key,MethodInfo *method)

{
  System_String_o *subCategory;
  System_String_o *item;
  bool bVar1;
  System_Char_array *separator;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075452b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"English");
    Il2CppMethodInitialized_075452b6 = '\x01';
  }
  separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,1);
  if (separator != (System_Char_array *)0x0) {
    if ((int)separator->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    separator->m_Items[0] = 0x2e;
    if ((key != (System_String_o *)0x0) &&
       (pSVar2 = System_String__Split_5304fb0(key,separator,3,(MethodInfo *)0x0),
       pSVar2 != (System_String_array *)0x0)) {
      if ((int)pSVar2->max_length == 3) {
        pSVar3 = pSVar2->m_Items[0];
        subCategory = pSVar2->m_Items[1];
        item = pSVar2->m_Items[2];
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        bVar1 = UI_UIManager__HasLocale(pSVar3,subCategory,item,"English",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          }
          pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
      return (System_String_o *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FieldLabelKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabelKey (System_String_o* id, const MethodInfo* method);
// 0x58a5730

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabelKey(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *local_20;
  
  if (Il2CppMethodInitialized_075452b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Mode.");
    il2cpp_codegen_initialize_runtime_metadata(&"mode.");
    Il2CppMethodInitialized_075452b7 = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->FieldLabelKeys;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_058a5832:
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)id,(Il2CppObject **)&local_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  if (bVar1) {
    pSVar2 = local_20;
  }
  else {
    if (id == (System_String_o *)0x0) goto label_058a5832;
    pSVar2 = (System_String_o *)0x0;
    bVar1 = System_String__StartsWith_53002b0(id,"mode.",5,(MethodInfo *)0x0);
    if (bVar1) {
      if ("mode." == (System_String_o *)0x0) goto label_058a5832;
      pSVar2 = System_String__Substring(id,("mode."->fields)._stringLength,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_52f0320("CreateGamePopup.Mode.",pSVar2,(MethodInfo *)0x0);
    }
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$BuildMultiplayerFields
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgSandboxField__o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields (const MethodInfo* method);
// 0x5897e00
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5897e5b: jmp 0x5898060
// asm:   0x589800a: jmp 0x58987cb
// asm:   0x5898158: jmp 0x58987cb
// asm:   0x589822c: jmp 0x58987cb
// asm:   0x58982fd: jmp 0x58987cb
// asm:   0x58983d4: jmp 0x58987cb
// asm:   0x58984a8: jmp 0x58987cb
// asm:   0x589857c: jmp 0x58987cb
// asm:   0x5898650: jmp 0x58987cb
// asm:   0x5898727: jmp 0x58987cb

System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields(MethodInfo *method)

{
  char cVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_InGameMiscSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  MethodInfo *in_RAX;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  Il2CppClass *pIVar11;
  MethodInfo *pMVar12;
  
  if (Il2CppMethodInitialized_075452b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AccountRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"general.RoomName");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.Motd");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowVoteKicking");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMaxDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMinDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MaxPlayers");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Password");
    Il2CppMethodInitialized_075452b8 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05897e2c;
label_05897f0f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452ce != '\0') goto label_05897e39;
label_05897f21:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452ce = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05897e4a;
label_05897f45:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05897f0f;
label_05897e2c:
    if (Il2CppMethodInitialized_075452ce == '\0') goto label_05897f21;
label_05897e39:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05897f45;
label_05897e4a:
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer;
  }
  if (cVar1 == '\0') goto label_05898060;
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_05897f79;
label_05898021:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05897f8a;
label_05898045:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_05898021;
label_05897f79:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05898045;
label_05897f8a:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (pSVar2 == (Settings_InGameSet_o *)0x0) {
label_05898060:
    pIVar10 = SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField_array,0);
    return (System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *)pIVar10;
  }
  pMVar12 = (MethodInfo *)&g_data_00000009;
  pIVar10 = SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField_array,9);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel("general.RoomName",pMVar12);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05897ff6;
label_058980a3:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058980a3;
label_05897ff6:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0))
  goto label_058987cb;
  pSVar4 = (pSVar3->fields).RoomName;
  pIVar11 = (Il2CppClass *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
  Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
            ((Gisketch_Aottg2UI_Game_AottgSandboxField_o *)pIVar11,"general.RoomName",pSVar9,
             (Settings_BaseSetting_o *)pSVar4,(System_String_array *)0x0,(System_String_o *)0x0,in_RAX);
  if (pIVar10 == (Il2CppObject *)0x0) goto label_058987cb;
  if (*(int *)&pIVar10[1].monitor == 0) goto label_058987d0;
  pIVar10[2].klass = pIVar11;
  Il2CppCodeGenWriteBarrier(&pIVar10[2].klass);
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel
                     ("general.MaxPlayers",(MethodInfo *)pIVar11);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05898148;
label_0589817d:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589817d;
label_05898148:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0))
  goto label_058987cb;
  pSVar5 = (pSVar3->fields).MaxPlayers;
  pMVar12 = (MethodInfo *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
  Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
            ((Gisketch_Aottg2UI_Game_AottgSandboxField_o *)pMVar12,"general.MaxPlayers",pSVar9,
             (Settings_BaseSetting_o *)pSVar5,(System_String_array *)0x0,(System_String_o *)0x0,in_RAX);
  if (((ulong)pIVar10[1].monitor & 0xfffffffe) == 0) goto label_058987d0;
  pIVar10[2].monitor = pMVar12;
  Il2CppCodeGenWriteBarrier(&pIVar10[2].monitor);
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel("general.Password",pMVar12);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589821c;
label_05898251:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05898251;
label_0589821c:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0))
  goto label_058987cb;
  pSVar4 = (pSVar3->fields).Password;
  pIVar11 = (Il2CppClass *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
  Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
            ((Gisketch_Aottg2UI_Game_AottgSandboxField_o *)pIVar11,"general.Password",pSVar9,
             (Settings_BaseSetting_o *)pSVar4,(System_String_array *)0x0,(System_String_o *)0x0,in_RAX);
  if (*(uint *)&pIVar10[1].monitor < 3) goto label_058987d0;
  pIVar10[3].klass = pIVar11;
  Il2CppCodeGenWriteBarrier(&pIVar10[3].klass);
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel
                     ("misc.Motd",(MethodInfo *)pIVar11);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058982ed;
label_05898322:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05898322;
label_058982ed:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
     (pSVar6 = (pSVar2->fields).Misc, pSVar6 == (Settings_InGameMiscSettings_o *)0x0)) goto label_058987cb;
  pSVar4 = (pSVar6->fields).Motd;
  pMVar12 = (MethodInfo *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
  Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
            ((Gisketch_Aottg2UI_Game_AottgSandboxField_o *)pMVar12,"misc.Motd",pSVar9,
             (Settings_BaseSetting_o *)pSVar4,(System_String_array *)0x0,(System_String_o *)0x0,in_RAX);
  if (((ulong)pIVar10[1].monitor & 0xfffffffc) == 0) goto label_058987d0;
  pIVar10[3].monitor = pMVar12;
  Il2CppCodeGenWriteBarrier(&pIVar10[3].monitor);
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel("misc.AllowVoteKicking",pMVar12);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058983c4;
label_058983f9:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058983f9;
label_058983c4:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
     (pSVar6 = (pSVar2->fields).Misc, pSVar6 == (Settings_InGameMiscSettings_o *)0x0)) goto label_058987cb;
  pSVar7 = (pSVar6->fields).AllowVoteKicking;
  pIVar11 = (Il2CppClass *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
  Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
            ((Gisketch_Aottg2UI_Game_AottgSandboxField_o *)pIVar11,"misc.AllowVoteKicking",pSVar9,
             (Settings_BaseSetting_o *)pSVar7,(System_String_array *)0x0,(System_String_o *)0x0,in_RAX);
  if (*(uint *)&pIVar10[1].monitor < 5) goto label_058987d0;
  pIVar10[4].klass = pIVar11;
  Il2CppCodeGenWriteBarrier(&pIVar10[4].klass);
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel
                     ("misc.AccountRequired",(MethodInfo *)pIVar11);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05898498;
label_058984cd:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058984cd;
label_05898498:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
     (pSVar6 = (pSVar2->fields).Misc, pSVar6 == (Settings_InGameMiscSettings_o *)0x0)) goto label_058987cb;
  pSVar7 = (pSVar6->fields).AccountRequired;
  pMVar12 = (MethodInfo *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
  Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
            ((Gisketch_Aottg2UI_Game_AottgSandboxField_o *)pMVar12,"misc.AccountRequired",pSVar9,
             (Settings_BaseSetting_o *)pSVar7,(System_String_array *)0x0,(System_String_o *)0x0,in_RAX);
  if (*(uint *)&pIVar10[1].monitor < 6) goto label_058987d0;
  pIVar10[4].monitor = pMVar12;
  Il2CppCodeGenWriteBarrier(&pIVar10[4].monitor);
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel("misc.VoiceChat",pMVar12);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589856c;
label_058985a1:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058985a1;
label_0589856c:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
     (pSVar6 = (pSVar2->fields).Misc, pSVar6 == (Settings_InGameMiscSettings_o *)0x0)) goto label_058987cb;
  pSVar5 = (pSVar6->fields).VoiceChat;
  pIVar11 = (Il2CppClass *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
  Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
            ((Gisketch_Aottg2UI_Game_AottgSandboxField_o *)pIVar11,"misc.VoiceChat",pSVar9,
             (Settings_BaseSetting_o *)pSVar5,(System_String_array *)0x0,(System_String_o *)0x0,in_RAX);
  if (*(uint *)&pIVar10[1].monitor < 7) goto label_058987d0;
  pIVar10[5].klass = pIVar11;
  Il2CppCodeGenWriteBarrier(&pIVar10[5].klass);
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel
                     ("misc.ProximityMinDistance",(MethodInfo *)pIVar11);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05898640;
label_05898675:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05898675;
label_05898640:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar2 == (Settings_InGameSet_o *)0x0) ||
     (pSVar6 = (pSVar2->fields).Misc, pSVar6 == (Settings_InGameMiscSettings_o *)0x0)) goto label_058987cb;
  pSVar8 = (pSVar6->fields).ProximityMinDistance;
  pMVar12 = (MethodInfo *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
  Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
            ((Gisketch_Aottg2UI_Game_AottgSandboxField_o *)pMVar12,"misc.ProximityMinDistance",pSVar9,
             (Settings_BaseSetting_o *)pSVar8,(System_String_array *)0x0,(System_String_o *)0x0,in_RAX);
  if (((ulong)pIVar10[1].monitor & 0xfffffff8) == 0) goto label_058987d0;
  pIVar10[5].monitor = pMVar12;
  Il2CppCodeGenWriteBarrier(&pIVar10[5].monitor);
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel("misc.ProximityMaxDistance",pMVar12);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05898717;
label_0589874c:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0589874c;
label_05898717:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if ((pSVar2 != (Settings_InGameSet_o *)0x0) &&
     (pSVar6 = (pSVar2->fields).Misc, pSVar6 != (Settings_InGameMiscSettings_o *)0x0)) {
    pSVar8 = (pSVar6->fields).ProximityMaxDistance;
    pIVar11 = (Il2CppClass *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
    Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
              ((Gisketch_Aottg2UI_Game_AottgSandboxField_o *)pIVar11,"misc.ProximityMaxDistance",pSVar9,
               (Settings_BaseSetting_o *)pSVar8,(System_String_array *)0x0,(System_String_o *)0x0,in_RAX);
    if (8 < *(uint *)&pIVar10[1].monitor) {
      pIVar10[6].klass = pIVar11;
      Il2CppCodeGenWriteBarrier(&pIVar10[6].klass);
      return (System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *)pIVar10;
    }
label_058987d0:
    ThrowIndexOutOfRangeException();
  }
label_058987cb:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AddDynamicFields
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddDynamicFields (System_String_o* prefix, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x58a49e0
// eh: try 0x58a4d4f..0x58a5003 -> pad 0x58a503c (+22 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58a5054..0x58a5059 -> pad 0x58a505e cleanup
// eh: try 0x58a5061..0x58a506b -> pad 0x58a5073 catch (...) [compiler noexcept guard]
// asm: 49 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a4b30: cmp byte ptr [rip + 0x1c9dd4f], 0
// asm:   0x58a4b37: je 0x58a4c82
// asm:   0x58a4cf1: lea r14, [rip + 0x19d4700]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58a4cf8: lea r12, [rip + 0x19d08a1]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
// asm:   0x58a4cff: jmp 0x58a4d1d
// asm:   0x58a4d10: mov rbx, qword ptr [rsp]
// asm:   0x58a4d14: test rbx, rbx
// asm:   0x58a4d17: je 0x58a4fea
// asm:   0x58a4d3c: nop dword ptr [rax]
// asm:   0x58a5008: mov rdi, rbp
// asm:   0x58a500b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58a5010: jmp 0x58a503c
// asm:   0x58a5012: jmp 0x58a503c
// asm:   0x58a5014: jmp 0x58a503c
// asm:   0x58a5016: jmp 0x58a503c
// asm:   0x58a5018: jmp 0x58a503c
// asm:   0x58a501a: jmp 0x58a503c
// asm:   0x58a501c: jmp 0x58a503c
// asm:   0x58a501e: jmp 0x58a503c
// asm:   0x58a5020: jmp 0x58a503c
// asm:   0x58a5022: jmp 0x58a503c
// asm:   0x58a5024: jmp 0x58a503c
// asm:   0x58a5026: jmp 0x58a503c
// asm:   0x58a5028: jmp 0x58a503c
// asm:   0x58a502a: jmp 0x58a503c
// asm:   0x58a502c: jmp 0x58a503c
// asm:   0x58a502e: jmp 0x58a503c
// asm:   0x58a5030: jmp 0x58a503c
// asm:   0x58a5032: jmp 0x58a503c
// asm:   0x58a5034: jmp 0x58a503c
// asm:   0x58a5036: jmp 0x58a503c
// asm:   0x58a5038: jmp 0x58a503c
// asm:   0x58a503a: jmp 0x58a503c
// asm:   0x58a503c: mov rbx, rax
// asm:   0x58a503f: cmp edx, 1
// asm:   0x58a5042: jne 0x58a5061
// asm:   0x58a5044: mov rdi, rbx
// asm:   0x58a5047: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58a504c: mov rbp, qword ptr [rax]
// asm:   0x58a504f: mov qword ptr [rsp + 0x18], rbp
// asm:   0x58a5054: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58a5059: jmp 0x58a4f62
// asm:   0x58a505e: mov rbx, rax
// asm:   0x58a5061: lea rdi, [rsp + 0x18]
// asm:   0x58a5066: call 0x2fcfb10  ; il2cpp_runtime_helper_02fcfb10()
// asm:   0x58a506b: mov rdi, rbx
// asm:   0x58a506e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58a5073: mov rdi, rax
// asm:   0x58a5076: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddDynamicFields
               (System_String_o *prefix,System_Collections_Generic_Dictionary_string__BaseSetting__o *settings
               ,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Settings_InspectorSettingMetadata_o *pSVar4;
  System_Collections_Generic_List_string__o *__this;
  char cVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar9;
  System_Func_T__TResult__o *__this_00;
  System_String_array *options;
  System_String_o *id;
  System_String_o *pSVar10;
  System_String_o *label;
  ulong uVar11;
  Settings_BaseSetting_o *setting;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  long lVar13;
  MethodInfo *in_R9;
  undefined1 auVar14 [16];
  Il2CppObject *local_58;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *local_50;
  System_String_o *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  local_50 = settings;
  if (Il2CppMethodInitialized_075452b9 == '\0') {
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
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AddDynamicFields_b__163_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"mode");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_075452b9 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  if (local_50 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = (System_Func_T__TResult__o *)pGVar9->__9__163_0;
  }
  else {
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = (System_Func_T__TResult__o *)pGVar9->__9__163_0;
  }
  if (__this_00 == (System_Func_T__TResult__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar7 = (Il2CppObject *)pGVar9->__9;
    __this_00 = (System_Func_T__TResult__o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_BaseSetting_string);
    System_Func_KeyValuePair_object__object___object____ctor
              (__this_00,pIVar7,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AddDynamicFields_b__163_0,
               (MethodInfo_4F10320 *)0x0);
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar9->__9__163_0 = (System_Func_KeyValuePair_string__BaseSetting___string__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&pGVar9->__9__163_0);
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
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
  pIVar7 = (Il2CppObject *)
           System_Linq_Enumerable__OrderBy_KeyValuePair_object__object___object__34f1fd0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)local_50,
                      (System_Func_TSource__TKey__o *)__this_00,
                      (System_Collections_Generic_IComparer_TKey__o *)
                      TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34F1FD0 *)
                      MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_string_BaseSetting_string);
  if (pIVar7 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = pIVar7->klass;
  uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
  local_48 = prefix;
  if (uVar11 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar13 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_KeyValuePair_string__BaseSetting___c **)
           ((long)&pIVar3->interfaceType + lVar13) ==
          TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_BaseSetting) {
        pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
        goto label_058a4cc7;
      }
      lVar13 = lVar13 + 0x10;
    } while (uVar11 * 0x10 != lVar13);
  }
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar7,(Il2CppClass *)
                             TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_BaseSetting,0
                     );
label_058a4cc7:
  pIVar7 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  local_40 = 0;
  local_38 = (undefined1 *)&local_58;
  do {
    local_58 = pIVar7;
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIVar7->klass;
    uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar13) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
          goto label_058a4d73;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar11 * 0x10 != lVar13);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058a4d73:
    cVar5 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    pIVar7 = local_58;
    if (cVar5 == '\0') {
      if (local_58 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar2 = local_58->klass;
      uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar11 == 0) goto label_058a4faf;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar13 = 0;
      break;
    }
    if (local_58 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_58->klass;
    uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_KeyValuePair_string__BaseSetting___c **)
             ((long)&pIVar3->interfaceType + lVar13) ==
            TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_BaseSetting) {
          pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
          goto label_058a4df3;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar11 * 0x10 != lVar13);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_58,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_BaseSetting
                        ,0);
label_058a4df3:
    pMVar12 = pVVar8->method;
    auVar14 = (*pVVar8->methodPtr)(pIVar7);
    setting = auVar14._8_8_;
    method_00 = auVar14._0_8_;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported(setting,pMVar12);
    pIVar7 = local_58;
    if (bVar6) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsMetadataField
                        ((System_String_o *)method_00,pMVar12);
      pIVar7 = local_58;
      if (!bVar6) {
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
          pSVar10 = System_String__Concat_52f0320
                              ((System_String_o *)method_00,"Dropbox",(MethodInfo *)0x0);
          pMVar12 = extraout_RDX;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            pMVar12 = extraout_RDX_00;
          }
          options = Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataOptions(local_50,pSVar10,pMVar12);
        }
        else {
          options = (System_String_array *)
                    System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)__this,
                               (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray
                              );
        }
        pSVar10 = local_48;
        id = System_String__Concat_5301f10
                       (local_48,".",(System_String_o *)method_00,(MethodInfo *)0x0);
        pMVar12 = (MethodInfo *)"mode";
        bVar6 = System_String__op_Equality(pSVar10,"mode",(MethodInfo *)0x0);
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        if (bVar6) {
          method_00 = pMVar12;
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            method_00 = pMVar12;
          }
          pSVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldDescription(id,method_00);
        }
        else {
          pMVar12 = extraout_RDX_01;
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            pMVar12 = extraout_RDX_02;
          }
          pSVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ScriptTooltip
                              (local_50,(System_String_o *)method_00,pMVar12);
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        label = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel(id,method_00);
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField(id,label,setting,options,pSVar10,in_R9)
        ;
        pIVar7 = local_58;
      }
    }
  } while( true );
  while (lVar13 = lVar13 + 0x10, uVar11 * 0x10 != lVar13) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
      goto label_058a4fcd;
    }
  }
label_058a4faf:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(local_58,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058a4fcd:
  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AddSandboxField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField (System_String_o* id, System_String_o* label, Settings_BaseSetting_o* setting, System_String_array* options, System_String_o* tooltip, const MethodInfo* method);
// 0x58a4860

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__AddSandboxField
               (System_String_o *id,System_String_o *label,Settings_BaseSetting_o *setting,
               System_String_array *options,System_String_o *tooltip,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_AottgSandboxField__o *__this;
  Gisketch_Aottg2UI_Game_AottgSandboxField_array *pGVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *__this_00;
  MethodInfo *pMVar5;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  pMVar5 = (MethodInfo *)label;
  if (Il2CppMethodInitialized_075452ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add);
    Il2CppMethodInitialized_075452ba = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported(setting,pMVar5);
    }
    else {
      bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported(setting,pMVar5);
    }
    if (bVar4) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSandboxField);
      Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
                (__this_00,id,label,setting,options,tooltip,in_stack_ffffffffffffffb8);
      pMVar5 = MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add;
      if (__this != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar3 = (__this->fields)._items;
        if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgSandboxField_array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pGVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pGVar3->m_Items[(int)uVar2] = __this_00;
            Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
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
// 0x58a0360
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a0592: lea rcx, [rip + 0x19fe81f]  ; MethodInfo_Settings_TypedSetting_int_set_Value
// asm:   0x58a0599: mov rdx, qword ptr [rcx]
// asm:   0x58a059c: mov rdi, r15
// asm:   0x58a059f: mov esi, eax
// asm:   0x58a05a1: jmp 0x58a0685

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetValue
               (Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_TypedSetting_T__o *__this;
  Settings_TypedSetting_T__c *pSVar3;
  System_String_array *pSVar4;
  bool bVar5;
  int32_t value_00;
  System_Globalization_CultureInfo_o *pSVar6;
  float fVar7;
  double dVar8;
  bool local_25;
  float local_24;
  float local_20;
  float local_1c;
  
  if (Il2CppMethodInitialized_075452bb == '\0') {
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
    Il2CppMethodInitialized_075452bb = '\x01';
  }
  local_25 = false;
  local_20 = 0.0;
  local_24 = 0.0;
  if (field == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
label_058a0698:
    ThrowNullReferenceException();
  }
  __this = (Settings_TypedSetting_T__o *)(field->fields)._Setting_k__BackingField;
  if (__this == (Settings_TypedSetting_T__o *)0x0) {
label_058a04d8:
    bVar5 = false;
  }
  else {
    pSVar3 = __this->klass;
    bVar1 = (pSVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
        bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
          bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting))
          goto label_058a04d8;
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar6 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          bVar5 = System_Single__TryParse_54d11a0
                            (value,0xa7,(System_IFormatProvider_o *)pSVar6,&local_24,(MethodInfo *)0x0);
          if (!bVar5) {
            return false;
          }
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)__this,local_24,
                     (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        }
        else {
          value_00 = System_Array__IndexOf_object_
                               ((System_Object_array *)(field->fields)._Options_k__BackingField,
                                (Il2CppObject *)value,
                                (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
          pSVar4 = (field->fields)._Options_k__BackingField;
          if (pSVar4 == (System_String_array *)0x0) goto label_058a0698;
          if ((value_00 < 0) || (pSVar4->max_length == 0)) {
            if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
            }
            pSVar6 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            bVar5 = System_Single__TryParse_54d11a0
                              (value,0xa7,(System_IFormatProvider_o *)pSVar6,&local_20,(MethodInfo *)0x0);
            if (!bVar5) {
              return false;
            }
            fVar7 = local_20;
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              local_1c = local_20;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              fVar7 = local_1c;
            }
            dVar8 = (double)il2cpp_runtime_helper_02fb2080((double)fVar7);
            value_00 = (int32_t)dVar8;
          }
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)__this,value_00,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        }
      }
      else {
        if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075566f0);
        }
        bVar5 = System_Boolean__TryParse(value,&local_25,(MethodInfo *)0x0);
        if (!bVar5) {
          return false;
        }
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this,local_25,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      }
    }
    else {
      if (value == (System_String_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      Settings_TypedSetting_object___set_Value
                (__this,(Il2CppObject *)value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
    bVar5 = true;
  }
  return bVar5;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsSupported
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported (Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x58a5520

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSupported
               (Settings_BaseSetting_o *setting,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  
  if (Il2CppMethodInitialized_075452bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_075452bc = '\x01';
  }
  if (setting == (Settings_BaseSetting_o *)0x0) {
    return false;
  }
  pSVar3 = setting->klass;
  bVar1 = (pSVar3->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
  if ((((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) ||
      ((bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth, bVar2 <= bVar1 &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)))) ||
     ((bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth, bVar2 <= bVar1 &&
      ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)))) {
    return true;
  }
  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
  if (bVar1 < bVar2) {
    return false;
  }
  return (pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsMetadataField
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsMetadataField (System_String_o* key, const MethodInfo* method);
// 0x58a5ab0

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsMetadataField(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075452bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_075452bd = '\x01';
  }
  bVar1 = System_String__op_Equality(key,"Description",(MethodInfo *)0x0);
  if (!bVar1) {
    if (key == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__EndsWith_52ff780(key,"Tooltip",4,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__EndsWith_52ff780(key,"Dropbox",4,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$MetadataOptions
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataOptions (System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, System_String_o* key, const MethodInfo* method);
// 0x58a1570
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a169e: jmp 0x58a16bc
// asm:   0x58a175e: jmp 0x58a177c

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
  Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields *pGVar4;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075452be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_MetadataOptions_b__168_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_MetadataOptions_b__168_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
    Il2CppMethodInitialized_075452be = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    method = extraout_RDX_00;
  }
  value = Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataString(settings,key,method);
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar3;
  }
  if (value == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = System_String__Split(value,0x2c,0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this = pGVar4->__9__168_0;
  }
  else {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this = pGVar4->__9__168_0;
  }
  if (__this == (System_Func_string__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar4->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_MetadataOptions_b__168_0,
               (MethodInfo_4F19B50 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar4->__9__168_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__168_0);
  }
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                      (System_Func_TSource__TResult__o *)__this,
                      (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)
    ;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = pGVar4->__9__168_1;
  }
  else {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    __this_00 = pGVar4->__9__168_1;
  }
  if (__this_00 == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar4->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_MetadataOptions_b__168_1,
               (MethodInfo_4F19300 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c->static_fields;
    pGVar4->__9__168_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__168_1);
  }
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  pSVar3 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source_00,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ScriptTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__ScriptTooltip (System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, System_String_o* name, const MethodInfo* method);
// 0x58a5840

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__ScriptTooltip
          (System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,System_String_o *name,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_075452bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    Il2CppMethodInitialized_075452bf = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  if (settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                       (Il2CppObject *)name,&local_18,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    if (bVar1) {
      if ((local_18 != (Il2CppObject *)0x0) && (local_18[1].klass != (Il2CppClass *)0x0)) {
        bVar1 = System_String__IsNullOrEmpty
                          ((System_String_o *)((local_18[1].klass)->_1).name,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar2 = System_String__Concat_52f0320(name,"Tooltip",(MethodInfo *)0x0);
          method_00 = extraout_RDX;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            method_00 = extraout_RDX_00;
          }
          pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataString(settings,pSVar2,method_00);
          return pSVar2;
        }
        if ((local_18 != (Il2CppObject *)0x0) && (local_18[1].klass != (Il2CppClass *)0x0)) {
          return (System_String_o *)((local_18[1].klass)->_1).name;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$MetadataString
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataString (System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, System_String_o* key, const MethodInfo* method);
// 0x58a5b50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58a5c14: jmp 0x58a5beb

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__MetadataString
          (System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,System_String_o *key,
          MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_075452c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075452c0 = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  if (settings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)settings,(Il2CppObject *)key,
                     &local_18,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
  if ((bVar2) && (local_18 != (Il2CppObject *)0x0)) {
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (local_18->klass->_2).typeHierarchyDepth) &&
       (((local_18->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_Settings_StringSetting && (local_18[2].klass != (Il2CppClass *)0x0)))) {
      return (System_String_o *)local_18[2].klass;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__Label (System_String_o* value, const MethodInfo* method);
// 0x58a5620

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__Label(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_075452c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    Il2CppMethodInitialized_075452c1 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
label_058a572a:
    ThrowNullReferenceException();
  }
  iVar3 = (value->fields)._stringLength;
  if (0 < iVar3 + -1) {
    iVar3 = iVar3 + -2;
    do {
      if (value == (System_String_o *)0x0) goto label_058a572a;
      uVar2 = System_String__get_Chars(value,iVar3 + 1,(MethodInfo *)0x0);
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      bVar1 = System_Char__IsUpper(uVar2,(MethodInfo *)0x0);
      if (bVar1) {
        uVar2 = System_String__get_Chars(value,iVar3,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar1 = System_Char__IsUpper(uVar2,(MethodInfo *)0x0);
        if (!bVar1) {
          value = System_String__Insert(value,iVar3 + 1," ",(MethodInfo *)0x0);
        }
      }
      bVar1 = 0 < iVar3;
      iVar3 = iVar3 + -1;
    } while (bVar1);
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Clone
// il2cpp: Settings_InGameSet_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__Clone (Settings_InGameSet_o* source, const MethodInfo* method);
// 0x5899830

Settings_InGameSet_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__Clone(Settings_InGameSet_o *source,MethodInfo *method)

{
  Settings_InGameSet_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075452c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    Il2CppMethodInitialized_075452c2 = '\x01';
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
// 0x589ca80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589cb49: jmp 0x589cb90

Settings_InGameSet_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__CreateOfficialWorkingSet
          (Settings_InGameSet_o *source,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Settings_InGameAddonSettings_o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Settings_BoolSetting_o *__this_00;
  Settings_InGameSet_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075452c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_075452c3 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(__this_01,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (source == (Settings_InGameSet_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      method_00 = extraout_RDX_00;
      if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589cb59;
label_0589cb2d:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_0589cb39;
label_0589cb78:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      method_00 = extraout_RDX_02;
    }
    else {
      if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589cb2d;
label_0589cb59:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      method_00 = extraout_RDX_01;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0589cb78;
label_0589cb39:
      source = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
    }
    if ((source == (Settings_InGameSet_o *)0x0) &&
       (source = TypeInfo_Settings_SettingsManager->static_fields->InGameUI,
       source == (Settings_InGameSet_o *)0x0)) goto label_0589cbc3;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    method_00 = extraout_RDX_03;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__CopyRoomSettings(source,__this_01,method_00);
label_0589cbc3:
  if ((((__this_01 != (Settings_InGameSet_o *)0x0) &&
       (pSVar2 = (__this_01->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
      (pSVar3 = (pSVar2->fields).Addons, pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
     (pSVar4 = (pSVar3->fields)._value, pSVar4 != (System_Collections_Generic_List_T__o *)0x0)) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar5 = (__this_01->fields).Addons;
    if ((pSVar5 != (Settings_InGameAddonSettings_o *)0x0) &&
       (__this = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar5->fields).Current,
       __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (__this,(MethodInfo_4AAD690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_Clear
                );
      __this_00 = (__this_01->fields).Sandbox;
      if (__this_00 != (Settings_BoolSetting_o *)0x0) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_00,false,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CopyRoomSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CopyRoomSettings (Settings_InGameSet_o* source, Settings_InGameSet_o* target, const MethodInfo* method);
// 0x589de60

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CopyRoomSettings
               (Settings_InGameSet_o *source,Settings_InGameSet_o *target,MethodInfo *method)

{
  Settings_InGameGeneralSettings_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_InGameMiscSettings_o *pSVar7;
  Settings_InGameMiscSettings_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  Settings_FloatSetting_o *pSVar11;
  Settings_FloatSetting_o *pSVar12;
  
  if (Il2CppMethodInitialized_075452c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_075452c4 = '\x01';
  }
  if ((((target != (Settings_InGameSet_o *)0x0) &&
       (pSVar1 = (target->fields).General, pSVar1 != (Settings_InGameGeneralSettings_o *)0x0)) &&
      (source != (Settings_InGameSet_o *)0x0)) &&
     (((pSVar2 = (source->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0 &&
       (pSVar3 = (pSVar2->fields).RoomName, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
      (pSVar4 = (pSVar1->fields).RoomName, pSVar4 != (Settings_StringSetting_o *)0x0)))) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)(pSVar3->fields)._value,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pSVar1 = (target->fields).General;
    if (((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
        (pSVar2 = (source->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
       ((pSVar3 = (pSVar2->fields).Password, pSVar3 != (Settings_StringSetting_o *)0x0 &&
        (pSVar4 = (pSVar1->fields).Password, pSVar4 != (Settings_StringSetting_o *)0x0)))) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)(pSVar3->fields)._value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar1 = (target->fields).General;
      if ((((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
           (pSVar2 = (source->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
          (pSVar5 = (pSVar2->fields).MaxPlayers, pSVar5 != (Settings_IntSetting_o *)0x0)) &&
         (pSVar6 = (pSVar1->fields).MaxPlayers, pSVar6 != (Settings_IntSetting_o *)0x0)) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar6,(pSVar5->fields)._value,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pSVar7 = (target->fields).Misc;
        if (((pSVar7 != (Settings_InGameMiscSettings_o *)0x0) &&
            (pSVar8 = (source->fields).Misc, pSVar8 != (Settings_InGameMiscSettings_o *)0x0)) &&
           ((pSVar3 = (pSVar8->fields).Motd, pSVar3 != (Settings_StringSetting_o *)0x0 &&
            (pSVar4 = (pSVar7->fields).Motd, pSVar4 != (Settings_StringSetting_o *)0x0)))) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)(pSVar3->fields)._value,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar7 = (target->fields).Misc;
          if ((((pSVar7 != (Settings_InGameMiscSettings_o *)0x0) &&
               (pSVar8 = (source->fields).Misc, pSVar8 != (Settings_InGameMiscSettings_o *)0x0)) &&
              (pSVar9 = (pSVar8->fields).AllowVoteKicking, pSVar9 != (Settings_BoolSetting_o *)0x0)) &&
             (pSVar10 = (pSVar7->fields).AllowVoteKicking, pSVar10 != (Settings_BoolSetting_o *)0x0)) {
            Settings_TypedSetting_bool___set_Value
                      ((Settings_TypedSetting_bool__o *)pSVar10,(pSVar9->fields)._value,
                       (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
            pSVar7 = (target->fields).Misc;
            if ((((pSVar7 != (Settings_InGameMiscSettings_o *)0x0) &&
                 (pSVar8 = (source->fields).Misc, pSVar8 != (Settings_InGameMiscSettings_o *)0x0)) &&
                (pSVar5 = (pSVar8->fields).VoiceChat, pSVar5 != (Settings_IntSetting_o *)0x0)) &&
               (pSVar6 = (pSVar7->fields).VoiceChat, pSVar6 != (Settings_IntSetting_o *)0x0)) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar6,(pSVar5->fields)._value,
                         (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              pSVar7 = (target->fields).Misc;
              if (((pSVar7 != (Settings_InGameMiscSettings_o *)0x0) &&
                  (pSVar8 = (source->fields).Misc, pSVar8 != (Settings_InGameMiscSettings_o *)0x0)) &&
                 ((pSVar11 = (pSVar8->fields).ProximityMinDistance, pSVar11 != (Settings_FloatSetting_o *)0x0
                  && (pSVar12 = (pSVar7->fields).ProximityMinDistance,
                     pSVar12 != (Settings_FloatSetting_o *)0x0)))) {
                Settings_TypedSetting_float___set_Value
                          ((Settings_TypedSetting_float__o *)pSVar12,(pSVar11->fields)._value,
                           (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                pSVar7 = (target->fields).Misc;
                if (((pSVar7 != (Settings_InGameMiscSettings_o *)0x0) &&
                    (pSVar8 = (source->fields).Misc, pSVar8 != (Settings_InGameMiscSettings_o *)0x0)) &&
                   ((pSVar11 = (pSVar8->fields).ProximityMaxDistance,
                    pSVar11 != (Settings_FloatSetting_o *)0x0 &&
                    (pSVar12 = (pSVar7->fields).ProximityMaxDistance,
                    pSVar12 != (Settings_FloatSetting_o *)0x0)))) {
                  Settings_TypedSetting_float___set_Value
                            ((Settings_TypedSetting_float__o *)pSVar12,(pSVar11->fields)._value,
                             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                  pSVar7 = (target->fields).Misc;
                  if ((((pSVar7 != (Settings_InGameMiscSettings_o *)0x0) &&
                       (pSVar8 = (source->fields).Misc, pSVar8 != (Settings_InGameMiscSettings_o *)0x0)) &&
                      (pSVar9 = (pSVar8->fields).AccountRequired, pSVar9 != (Settings_BoolSetting_o *)0x0)) &&
                     (pSVar10 = (pSVar7->fields).AccountRequired, pSVar10 != (Settings_BoolSetting_o *)0x0)) {
                    Settings_TypedSetting_bool___set_Value
                              ((Settings_TypedSetting_bool__o *)pSVar10,(pSVar9->fields)._value,
                               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RestoreEditableValues
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RestoreEditableValues (Settings_ExperienceRuleResult_o* result, Settings_InGameSet_o* persisted, System_Collections_Generic_HashSet_string__o* resetIds, bool contentOnly, const MethodInfo* method);
// 0x589cd20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589cdfe: nop 
// asm:   0x589ce98: nop dword ptr [rax + rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__RestoreEditableValues
               (Settings_ExperienceRuleResult_o *result,Settings_InGameSet_o *persisted,
               System_Collections_Generic_HashSet_string__o *resetIds,bool contentOnly,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_BaseSetting_o *pSVar2;
  Settings_BaseSetting_o *setting;
  bool bVar3;
  Settings_ExperienceRuleField_o *pSVar4;
  Il2CppObject *value;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  int index;
  System_Collections_Generic_List_ExperienceRuleField__o *__this;
  Settings_BaseSetting_o *local_48;
  System_Collections_Generic_HashSet_string__o *local_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_075452c5 == '\0') {
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
    Il2CppMethodInitialized_075452c5 = '\x01';
  }
  local_48 = (Settings_BaseSetting_o *)0x0;
  if (((result == (Settings_ExperienceRuleResult_o *)0x0) || (persisted == (Settings_InGameSet_o *)0x0)) ||
     (bVar3 = Settings_ExperienceRuleResult__get_IsValid(result,(MethodInfo *)0x0), !bVar3)) {
    return;
  }
  __this = (result->fields).Fields;
  if (__this != (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) {
    index = 0;
    local_40 = resetIds;
    do {
      if ((__this->fields)._size <= index) {
        return;
      }
      pSVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Item);
      if (pSVar4 == (Settings_ExperienceRuleField_o *)0x0) break;
      if (((((pSVar4->fields).Visible != false) && ((pSVar4->fields).Editable != false)) &&
          ((resetIds == (System_Collections_Generic_HashSet_string__o *)0x0 ||
           (bVar3 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)resetIds,
                               (Il2CppObject *)(pSVar4->fields).Id,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains), !bVar3)))) &&
         (((!contentOnly ||
           (bVar3 = System_String__op_Inequality((pSVar4->fields).Id,"general.MapName",(MethodInfo *)0x0),
           !bVar3)) ||
          (bVar3 = System_String__op_Inequality((pSVar4->fields).Id,"general.GameMode",(MethodInfo *)0x0),
          !bVar3)))) {
        pMVar5 = (MethodInfo *)(pSVar4->fields).Id;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          if (Il2CppMethodInitialized_075452c6 != '\0') goto label_0589cecb;
label_0589cfe3:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
          Il2CppMethodInitialized_075452c6 = '\x01';
          uVar1 = (TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (Il2CppMethodInitialized_075452c6 == '\0') goto label_0589cfe3;
label_0589cecb:
          uVar1 = (TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar3 = Settings_ExperienceRuleEngine__TryResolveSetting
                          (persisted,(System_String_o *)pMVar5,&local_48,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar2 = (pSVar4->fields).Setting;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          local_38 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingValue(pSVar2,pMVar5);
          setting = local_48;
          pSVar2 = (pSVar4->fields).Setting;
          if (Il2CppMethodInitialized_075452c8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            Il2CppMethodInitialized_075452c8 = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          value = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingValue(setting,pMVar5);
          Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetSettingValue(pSVar2,value,method_00);
          if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
          }
          bVar3 = Settings_ExperienceRuleEngine__Validate(result,(MethodInfo *)0x0);
          resetIds = local_40;
          if (!bVar3) {
            pSVar2 = (pSVar4->fields).Setting;
            pMVar5 = extraout_RDX;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              pMVar5 = extraout_RDX_00;
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetSettingValue(pSVar2,local_38,pMVar5);
          }
        }
      }
      index = index + 1;
      __this = (result->fields).Fields;
    } while (__this != (System_Collections_Generic_List_ExperienceRuleField__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TryResolveSetting
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__TryResolveSetting (Settings_InGameSet_o* settings, System_String_o* id, Settings_BaseSetting_o** setting, const MethodInfo* method);
// 0x589cc60

bool Gisketch_Aottg2UI_Game_AottgGameCreateSession__TryResolveSetting
               (Settings_InGameSet_o *settings,System_String_o *id,Settings_BaseSetting_o **setting,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075452c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    Il2CppMethodInitialized_075452c6 = '\x01';
  }
  if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
  }
  bVar1 = Settings_ExperienceRuleEngine__TryResolveSetting(settings,id,setting,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SettingValue
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingValue (Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x58a5c20

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingValue
          (Settings_BaseSetting_o *setting,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  Il2CppObject *pIVar4;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  
  if (Il2CppMethodInitialized_075452c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075452c7 = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar3 = setting->klass;
    bVar1 = (pSVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      return (*(uint64_t *)((char *)setting + 0x20));
    }
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      local_11 = *(undefined1 *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 1);
      pIVar4 = il2cpp_vm_Object_Box(g_data_075566f0,&local_11);
      return pIVar4;
    }
    bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      local_c = *(undefined4 *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
      pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
      return pIVar4;
    }
    bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      local_10 = *(undefined4 *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
      pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_10);
      return pIVar4;
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CopySettingValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CopySettingValue (Settings_BaseSetting_o* target, Settings_BaseSetting_o* source, const MethodInfo* method);
// 0x589ccc0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__CopySettingValue
               (Settings_BaseSetting_o *target,Settings_BaseSetting_o *source,MethodInfo *method)

{
  Il2CppObject *value;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)source;
  if (Il2CppMethodInitialized_075452c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452c8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  value = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingValue(source,method_01);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetSettingValue(target,value,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetSettingValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetSettingValue (Settings_BaseSetting_o* setting, Il2CppObject* value, const MethodInfo* method);
// 0x58a5dc0

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetSettingValue
               (Settings_BaseSetting_o *setting,Il2CppObject *value,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  void *pvVar4;
  int32_t *piVar5;
  float *pfVar6;
  
  if (Il2CppMethodInitialized_075452c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_075452c9 = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar3 = setting->klass;
    bVar1 = (pSVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((((bVar2 <= bVar1) && (value != (Il2CppObject *)0x0)) &&
        ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) &&
       (value->klass == g_data_07556758)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)setting,value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      return;
    }
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if (((bVar2 <= bVar1) &&
        ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) &&
       ((value != (Il2CppObject *)0x0 && (value->klass == g_data_075566f0)))) {
      pvVar4 = il2cpp_vm_Object_Unbox(value);
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)setting,*(bool *)pvVar4,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      return;
    }
    bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((bVar2 <= bVar1) &&
        ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) &&
       ((value != (Il2CppObject *)0x0 && (value->klass == g_data_07556710)))) {
      piVar5 = il2cpp_vm_Object_Unbox(value);
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)setting,*piVar5,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      return;
    }
    bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if ((((bVar2 <= bVar1) &&
         ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) &&
        (value != (Il2CppObject *)0x0)) && (value->klass == g_data_07556740)) {
      pfVar6 = il2cpp_vm_Object_Unbox(value);
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)setting,*pfVar6,
                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ValidateContentOptions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ValidateContentOptions (Settings_ExperienceRuleResult_o* result, const MethodInfo* method);
// 0x589d030
// eh: try 0x589d16b..0x589d52b -> pad 0x589d544 (+23 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x589d574..0x589d579 -> pad 0x589d59e cleanup
// eh: try 0x589d5a1..0x589d5ab -> pad 0x589d5b3 catch (...) [compiler noexcept guard]
// asm: 46 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589d1fb: jmp 0x589d50d
// asm:   0x589d530: jmp 0x589d55c
// asm:   0x589d532: jmp 0x589d55c
// asm:   0x589d534: jmp 0x589d55c
// asm:   0x589d536: jmp 0x589d55c
// asm:   0x589d538: jmp 0x589d55c
// asm:   0x589d53a: jmp 0x589d55c
// asm:   0x589d53c: jmp 0x589d55c
// asm:   0x589d53e: jmp 0x589d55c
// asm:   0x589d540: jmp 0x589d55c
// asm:   0x589d542: jmp 0x589d55c
// asm:   0x589d544: jmp 0x589d55c
// asm:   0x589d546: jmp 0x589d55c
// asm:   0x589d548: jmp 0x589d55c
// asm:   0x589d54a: jmp 0x589d55c
// asm:   0x589d54c: jmp 0x589d55c
// asm:   0x589d54e: jmp 0x589d55c
// asm:   0x589d550: jmp 0x589d55c
// asm:   0x589d552: jmp 0x589d55c
// asm:   0x589d554: jmp 0x589d55c
// asm:   0x589d556: jmp 0x589d55c
// asm:   0x589d558: jmp 0x589d55c
// asm:   0x589d55a: jmp 0x589d55c
// asm:   0x589d55c: mov rbx, rax
// asm:   0x589d55f: cmp edx, 1
// asm:   0x589d562: jne 0x589d5a1
// asm:   0x589d564: mov rdi, rbx
// asm:   0x589d567: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x589d56c: mov rbx, qword ptr [rax]
// asm:   0x589d56f: mov qword ptr [rsp + 0x30], rbx
// asm:   0x589d574: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x589d579: lea rax, [rip + 0x19f0720]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose
// asm:   0x589d580: mov rsi, qword ptr [rax]
// asm:   0x589d583: lea rdi, [rsp + 0x10]
// asm:   0x589d588: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x589d58d: test rbx, rbx
// asm:   0x589d590: je 0x589d4ef
// asm:   0x589d596: mov rdi, rbx
// asm:   0x589d599: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x589d59e: mov rbx, rax
// asm:   0x589d5a1: lea rdi, [rsp + 0x30]
// asm:   0x589d5a6: call 0x2fcfba0  ; il2cpp_runtime_helper_02fcfba0()
// asm:   0x589d5ab: mov rdi, rbx
// asm:   0x589d5ae: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x589d5b3: mov rdi, rax
// asm:   0x589d5b6: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateSession__ValidateContentOptions
               (Settings_ExperienceRuleResult_o *result,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_ExperienceRuleField__o *__this;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  Settings_UIRule_o *pSVar7;
  Il2CppObject *field;
  bool bVar8;
  System_String_array *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  MethodInfo *pMVar12;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  Settings_ExperienceRuleField_o *local_38;
  
  if (Il2CppMethodInitialized_075452ca == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_075452ca = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if (result != (Settings_ExperienceRuleResult_o *)0x0) {
    __this = (result->fields).Fields;
    if (__this == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
    local_68.fields._current = (Il2CppObject *)local_38;
    local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    local_68.fields._index = local_48._8_4_;
    local_68.fields._version = local_48._12_4_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = &local_68;
label_0589d180:
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext);
    field = local_68.fields._current;
    if (bVar8) {
      if ((Settings_ExperienceRuleField_o *)local_68.fields._current == (Settings_ExperienceRuleField_o *)0x0)
      {
        ThrowNullReferenceException();
      }
      bVar8 = System_String__Equals_52ffe30
                        (((Settings_ExperienceRuleField_Fields *)((long)local_68.fields._current + 0x10))->Id,
                         "general.MapCategory",5,(MethodInfo *)0x0);
      if (bVar8) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_075452cd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452cd = '\x01';
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
          goto label_0589d21c;
label_0589d1eb:
          pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
        }
        else {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
          goto label_0589d1eb;
label_0589d21c:
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _Working_k__BackingField;
        }
        if (pSVar3 == (Settings_InGameSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (pSVar3->fields).General;
        if (pSVar4 == (Settings_InGameGeneralSettings_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar5 = (pSVar4->fields).MapCategory;
        if (pSVar5 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = (pSVar5->fields)._value;
        if ((((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar9 = Map_BuiltinLevels__GetMapNames(pSVar11,(MethodInfo *)0x0);
        if (pSVar9 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if (pSVar9->max_length == 0) {
          pSVar6 = (result->fields).Errors;
          pSVar11 = ((Settings_ExperienceRuleField_Fields *)((long)field + 0x10))->Id;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          if (Il2CppMethodInitialized_075452cb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
            il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.NoContent");
            Il2CppMethodInitialized_075452cb = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          }
          pSVar10 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                              ("GameCreate.Configuration.NoContent",(MethodInfo *)0x0);
          pSVar11 = System_String__Format(pSVar10,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
          pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
label_0589d51c:
            ThrowNullReferenceException();
          }
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (pSVar6->fields)._items;
          if (pSVar9 == (System_String_array *)0x0) goto label_0589d51c;
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pSVar9->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pSVar9->m_Items[(int)uVar2] = pSVar11;
            Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar11,
                       (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
          }
        }
      }
      pMVar12 = (MethodInfo *)"general.MapName";
      bVar8 = System_String__Equals_52ffe30
                        (((Settings_ExperienceRuleField_Fields *)((long)field + 0x10))->Id,
                         "general.MapName",5,(MethodInfo *)0x0);
      if ((bVar8) ||
         (pMVar12 = (MethodInfo *)"general.GameMode",
         bVar8 = System_String__Equals_52ffe30
                           (((Settings_ExperienceRuleField_Fields *)((long)field + 0x10))->Id,
                            "general.GameMode",5,(MethodInfo *)0x0), bVar8)) {
        pSVar7 = ((Settings_ExperienceRuleField_Fields *)((long)field + 0x10))->Rule;
        if (pSVar7 == (Settings_UIRule_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = (pSVar7->fields).AllowedValues;
        if ((pSVar6 != (System_Collections_Generic_List_string__o *)0x0) && (0 < (pSVar6->fields)._size)) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          }
          pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions
                             ((Settings_ExperienceRuleField_o *)field,pMVar12);
          if (pSVar9 == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          if (pSVar9->max_length == 0) {
            pSVar6 = (result->fields).Errors;
            pSVar11 = ((Settings_ExperienceRuleField_Fields *)((long)field + 0x10))->Id;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
            }
            if (Il2CppMethodInitialized_075452cb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
              il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.NoContent");
              Il2CppMethodInitialized_075452cb = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
            }
            pSVar10 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                                ("GameCreate.Configuration.NoContent",(MethodInfo *)0x0);
            pSVar11 = System_String__Format(pSVar10,(Il2CppObject *)pSVar11,(MethodInfo *)0x0);
            pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
              piVar1 = &(pSVar6->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar9 = (pSVar6->fields)._items;
              if (pSVar9 != (System_String_array *)0x0) {
                uVar2 = (pSVar6->fields)._size;
                if (uVar2 < (uint)pSVar9->max_length) {
                  (pSVar6->fields)._size = uVar2 + 1;
                  pSVar9->m_Items[(int)uVar2] = pSVar11;
                  Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar11,
                             (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
                }
                goto label_0589d180;
              }
            }
            ThrowNullReferenceException();
          }
        }
      }
      goto label_0589d180;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_68,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NoContentError
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateSession__NoContentError (System_String_o* id, const MethodInfo* method);
// 0x58a5fd0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateSession__NoContentError(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075452cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.NoContent");
    Il2CppMethodInitialized_075452cb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Configuration.NoContent",(MethodInfo *)0x0);
  pSVar1 = System_String__Format(pSVar1,(Il2CppObject *)id,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateSession___cctor (const MethodInfo* method);
// 0x58a6040

void Gisketch_Aottg2UI_Game_AottgGameCreateSession___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields *pGVar2;
  System_OrdinalIgnoreCaseComparer_o *pSVar3;
  System_Collections_Generic_List_Experience__o *__this;
  Settings_SandboxGameCreateConfiguration_o *__this_00;
  System_Collections_Generic_List_AottgSandboxField__o *__this_01;
  System_String_array *pSVar4;
  System_Collections_Generic_HashSet_string__o *__this_02;
  System_Collections_Generic_Dictionary_string__string__o *__this_03;
  
  if (Il2CppMethodInitialized_075452cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Experience_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SandboxGameCreateConfiguration);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.General.MaxPlayers");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.EndlessRespawnTime");
    il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.HumanHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.HookDamageMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHealthMode");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowShifters");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.DestructibleEnvironment");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Casual");
    il2cpp_codegen_initialize_runtime_metadata(&"Motd");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmorEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMin");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowStock");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowUnarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.Thrower");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.GunsAirReload");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.InvincibilityTime");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.CustomStats");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowStock");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AccountRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Category");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSmartMovement");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowPlayerTitans");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.RealismImpact");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.RealismMaxSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Mission");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.CustomPerks");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.GlobalMinimapDisable");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.APGPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.EndlessRespawnEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.InvincibilityTime");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowShifterSpecials");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.EndlessRespawnEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.ArmorEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowAHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowCivilian");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowUnarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.APGPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HookDamageMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowSpawnTime");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AccountRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.CustomPerks");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.ProximityMaxDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.HealthMode");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowAPG");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.WardedEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ShifterHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"general.RoomName");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismMaxSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.RealismHookLength");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.General.RoomName");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmorCrawlerEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismImpactThreshold");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.DecapitationMinDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanDecapitationMinDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMax");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanChanceWarded");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.HeadRandomMin");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.DestructibleEnvironment");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowAHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.StandardModels");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmor");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.Punk");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.Horses");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.Armor");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowVoteKicking");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.Motd");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnJumper");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowVoteKicking");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.HorseHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.ProximityMinDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMaxDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowPlayerTitans");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.Warded");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.General.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.EndlessRespawnTime");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.HeadMode");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Addons");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.ArmorCrawlerEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Competitive");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.MOTD");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.HeadRandomMax");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.General.GameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"ProximityMaxDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.MaxSize");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnAbnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowSpawnTime");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSizeEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismMode");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Addons");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.DecapitationEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowThunderspears");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismMaxReel");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSizeMin");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.SpawnEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowShifters");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.Jumper");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ThunderspearPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.ThunderspearPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.CustomStats");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadMode");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.RealismMode");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.Abnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowCivilian");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.MaxHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanDecapitationEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ClearKDROnRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.HorsebackCombat");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.Crawler");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMinDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.General.Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnPunk");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HumanHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"AllowVoteKicking");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.MinSize");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Map");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.GlobalMinimapDisable");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.SmartMovement");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.GunsAirReload");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnNormal");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.MinHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.Horses");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.ClearKDROnRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HorseHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowAPG");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSizeMax");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MaxPlayers");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.SizeEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.AllowShifterSpecials");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanStandardModels");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HorsebackCombat");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanWardedEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHealthMax");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowThunderspears");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnThrower");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.ShifterHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"ProximityMinDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHealthMin");
    il2cpp_codegen_initialize_runtime_metadata(&"AccountRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"Mode");
    Il2CppMethodInitialized_075452cc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Experience);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Experience_ctor);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->ExperiencesInternal);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration);
  Settings_SandboxGameCreateConfiguration___ctor(__this_00,(MethodInfo *)0x0);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->SandboxConfiguration = __this_00;
  Il2CppCodeGenWriteBarrier(&pGVar2->SandboxConfiguration);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgSandboxField);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgSandboxField_ctor);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->SandboxFieldsInternal = __this_01;
  Il2CppCodeGenWriteBarrier(&pGVar2->SandboxFieldsInternal);
  pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->_sandboxAddonNames = pSVar4;
  Il2CppCodeGenWriteBarrier(&pGVar2->_sandboxAddonNames);
  pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if (pSVar4 == (System_String_array *)0x0) goto label_058a7660;
  if ((int)pSVar4->max_length == 0) {
label_058a765b:
    ThrowIndexOutOfRangeException();
  }
  pSVar4->m_Items[0] = "General";
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
  if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_058a765b;
  pSVar4->m_Items[1] = "Mode";
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
  if ((uint)pSVar4->max_length < 3) goto label_058a765b;
  pSVar4->m_Items[2] = "Titans";
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2);
  if ((pSVar4->max_length & 0xfffffffc) == 0) goto label_058a765b;
  pSVar4->m_Items[3] = "Misc";
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 3);
  if ((uint)pSVar4->max_length < 5) goto label_058a765b;
  pSVar4->m_Items[4] = "Weather";
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 4);
  if ((uint)pSVar4->max_length < 6) goto label_058a765b;
  pSVar4->m_Items[5] = "Custom";
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 5);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->SandboxSectionsInternal = pSVar4;
  Il2CppCodeGenWriteBarrier(&pGVar2->SandboxSectionsInternal);
  pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if (pSVar4 == (System_String_array *)0x0) goto label_058a7660;
  if ((int)pSVar4->max_length == 0) goto label_058a765b;
  pSVar4->m_Items[0] = "Casual";
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
  if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_058a765b;
  pSVar4->m_Items[1] = "Competitive";
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
  if ((uint)pSVar4->max_length < 3) goto label_058a765b;
  pSVar4->m_Items[2] = "Mission";
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2);
  if ((pSVar4->max_length & 0xfffffffc) == 0) goto label_058a765b;
  pSVar4->m_Items[3] = "PVP";
  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 3);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
  pGVar2->CategoryOrder = pSVar4;
  Il2CppCodeGenWriteBarrier(&pGVar2->CategoryOrder);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (Il2CppMethodInitialized_07542886 != '\0') goto label_058a6b78;
label_058a75f7:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07542886 == '\0') goto label_058a75f7;
label_058a6b78:
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar3 = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this_02,
             (System_Collections_Generic_IEqualityComparer_T__o *)pSVar3,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if (__this_02 != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_02,(Il2CppObject *)"Motd"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_02,(Il2CppObject *)"AllowVoteKicking"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_02,(Il2CppObject *)"VoiceChat"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_02,(Il2CppObject *)"ProximityMinDistance"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_02,(Il2CppObject *)"ProximityMaxDistance"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_02,(Il2CppObject *)"AccountRequired"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
    pGVar2->MultiplayerMiscIds = __this_02;
    Il2CppCodeGenWriteBarrier(&pGVar2->MultiplayerMiscIds);
    if (Il2CppMethodInitialized_07542886 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
      Il2CppMethodInitialized_07542886 = '\x01';
      uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    pSVar3 = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (System_Collections_Generic_IEqualityComparer_TKey__o *)pSVar3,
               (MethodInfo_4AAC9C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38);
    if (__this_03 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"general.MapCategory",(Il2CppObject *)"Common.Category",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"general.MapName",(Il2CppObject *)"Common.Map",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"general.GameMode",(Il2CppObject *)"CreateGamePopup.General.GameMode",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"general.Difficulty",(Il2CppObject *)"CreateGamePopup.General.Difficulty",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"general.Weather",(Il2CppObject *)"CreateGamePopup.General.Weather",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"general.WeatherIndex",(Il2CppObject *)"CreateGamePopup.General.Weather",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"general.RoomName",(Il2CppObject *)"CreateGamePopup.General.RoomName",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"general.MaxPlayers",(Il2CppObject *)"CreateGamePopup.General.MaxPlayers",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"general.Password",(Il2CppObject *)"Common.Password",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"general.Addons",(Il2CppObject *)"GameCreate.Sandbox.Addons",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSpawnEnabled",(Il2CppObject *)"CreateGamePopup.Titans.SpawnEnabled",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSpawnNormal",(Il2CppObject *)"CreateGamePopup.Titans.Normal",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSpawnAbnormal",(Il2CppObject *)"CreateGamePopup.Titans.Abnormal",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSpawnJumper",(Il2CppObject *)"CreateGamePopup.Titans.Jumper",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSpawnCrawler",(Il2CppObject *)"CreateGamePopup.Titans.Crawler",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSpawnThrower",(Il2CppObject *)"CreateGamePopup.Titans.Thrower",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSpawnPunk",(Il2CppObject *)"CreateGamePopup.Titans.Punk",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSizeEnabled",(Il2CppObject *)"CreateGamePopup.Titans.SizeEnabled",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSizeMin",(Il2CppObject *)"CreateGamePopup.Titans.MinSize",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSizeMax",(Il2CppObject *)"CreateGamePopup.Titans.MaxSize",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanHealthMode",(Il2CppObject *)"CreateGamePopup.Titans.HealthMode",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanHealthMin",(Il2CppObject *)"CreateGamePopup.Titans.MinHealth",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanHealthMax",(Il2CppObject *)"CreateGamePopup.Titans.MaxHealth",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanHeadMode",(Il2CppObject *)"CreateGamePopup.Titans.HeadMode",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanHeadRandomMin",(Il2CppObject *)"CreateGamePopup.Titans.HeadRandomMin",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanHeadRandomMax",(Il2CppObject *)"CreateGamePopup.Titans.HeadRandomMax",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanDecapitationEnabled",(Il2CppObject *)"CreateGamePopup.Titans.DecapitationEnabled",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanDecapitationMinDamage",(Il2CppObject *)"CreateGamePopup.Titans.DecapitationMinDamage",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanArmorEnabled",(Il2CppObject *)"CreateGamePopup.Titans.ArmorEnabled",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanArmorCrawlerEnabled",(Il2CppObject *)"GameCreate.Sandbox.Titans.ArmorCrawlerEnabled",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanArmor",(Il2CppObject *)"CreateGamePopup.Titans.Armor",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanStandardModels",(Il2CppObject *)"CreateGamePopup.Titans.StandardModels",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanSmartMovement",(Il2CppObject *)"CreateGamePopup.Titans.SmartMovement",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanChanceWarded",(Il2CppObject *)"CreateGamePopup.Titans.Warded",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"titan.TitanWardedEnabled",(Il2CppObject *)"CreateGamePopup.Titans.WardedEnabled",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.PVP",(Il2CppObject *)"CreateGamePopup.Misc.PVP",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.EndlessRespawnEnabled",(Il2CppObject *)"CreateGamePopup.Misc.EndlessRespawnEnabled",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.EndlessRespawnTime",(Il2CppObject *)"CreateGamePopup.Misc.EndlessRespawnTime",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowSpawnTime",(Il2CppObject *)"CreateGamePopup.Misc.AllowSpawnTime",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.InvincibilityTime",(Il2CppObject *)"CreateGamePopup.Misc.InvincibilityTime",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.ThunderspearPVP",(Il2CppObject *)"CreateGamePopup.Misc.ThunderspearPVP",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.APGPVP",(Il2CppObject *)"CreateGamePopup.Misc.APGPVP",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowBlades",(Il2CppObject *)"CreateGamePopup.Misc.AllowBlades",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowAHSS",(Il2CppObject *)"CreateGamePopup.Misc.AllowAHSS",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowAPG",(Il2CppObject *)"CreateGamePopup.Misc.AllowAPG",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowThunderspears",(Il2CppObject *)"CreateGamePopup.Misc.AllowThunderspears",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowUnarmed",(Il2CppObject *)"CreateGamePopup.Misc.AllowUnarmed",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowCivilian",(Il2CppObject *)"CreateGamePopup.Misc.AllowCivilian",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowPlayerTitans",(Il2CppObject *)"CreateGamePopup.Misc.AllowPlayerTitans",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowShifterSpecials",(Il2CppObject *)"CreateGamePopup.Misc.AllowShifterSpecials",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowShifters",(Il2CppObject *)"CreateGamePopup.Misc.AllowShifters",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowVoteKicking",(Il2CppObject *)"CreateGamePopup.Misc.AllowVoteKicking",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.Horses",(Il2CppObject *)"CreateGamePopup.Misc.Horses",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.HorsebackCombat",(Il2CppObject *)"CreateGamePopup.Misc.HorsebackCombat",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.DestructibleEnvironment",(Il2CppObject *)"CreateGamePopup.Misc.DestructibleEnvironment",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.GunsAirReload",(Il2CppObject *)"CreateGamePopup.Misc.GunsAirReload",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AllowStock",(Il2CppObject *)"CreateGamePopup.Misc.AllowStock",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.ClearKDROnRestart",(Il2CppObject *)"CreateGamePopup.Misc.ClearKDROnRestart",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.GlobalMinimapDisable",(Il2CppObject *)"CreateGamePopup.Misc.GlobalMinimapDisable",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.RealismMode",(Il2CppObject *)"CreateGamePopup.Misc.RealismMode",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.RealismImpactThreshold",(Il2CppObject *)"CreateGamePopup.Misc.RealismImpact",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.RealismMaxReel",(Il2CppObject *)"CreateGamePopup.Misc.RealismHookLength",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.RealismMaxSpeed",(Il2CppObject *)"CreateGamePopup.Misc.RealismMaxSpeed",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.HookDamageMultiplier",(Il2CppObject *)"CreateGamePopup.Misc.HookDamageMultiplier",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.CustomStats",(Il2CppObject *)"CreateGamePopup.Misc.CustomStats",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.CustomPerks",(Il2CppObject *)"CreateGamePopup.Misc.CustomPerks",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.Motd",(Il2CppObject *)"CreateGamePopup.Misc.MOTD",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.VoiceChat",(Il2CppObject *)"CreateGamePopup.Misc.VoiceChat",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.ProximityMinDistance",(Il2CppObject *)"CreateGamePopup.Misc.ProximityMinDistance",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.ProximityMaxDistance",(Il2CppObject *)"CreateGamePopup.Misc.ProximityMaxDistance",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.HumanHealth",(Il2CppObject *)"CreateGamePopup.Misc.HumanHealth",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.ShifterHealth",(Il2CppObject *)"CreateGamePopup.Misc.ShifterHealth",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.HorseHealth",(Il2CppObject *)"CreateGamePopup.Misc.HorseHealth",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                 (Il2CppObject *)"misc.AccountRequired",(Il2CppObject *)"CreateGamePopup.Misc.AccountRequired",
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields;
      pGVar2->FieldLabelKeys = __this_03;
      Il2CppCodeGenWriteBarrier(&pGVar2->FieldLabelKeys);
      return;
    }
  }
label_058a7660:
  ThrowNullReferenceException();
}


