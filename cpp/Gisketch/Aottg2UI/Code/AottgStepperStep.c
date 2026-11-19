// Type: Gisketch.Aottg2UI.Code.AottgStepperStep
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgStepperStep.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgStepperStep$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgStepperStep___ctor (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, System_String_o* id, System_String_o* title, System_String_o* text, const MethodInfo* method);
// 0x5367b60

void Gisketch_Aottg2UI_Code_AottgStepperStep___ctor
               (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,System_String_o *id,System_String_o *title,
               System_String_o *text,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField);
  (__this->fields)._Title_k__BackingField = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Title_k__BackingField);
  (__this->fields)._Text_k__BackingField = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Text_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Id (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x5367bc0

System_String_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Id
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Title (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x5367bd0

System_String_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Title
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Title_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Text (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x5367be0

System_String_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Text
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Text_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Children
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Children (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x5367bf0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Children
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Children_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$set_Children
// il2cpp: void Gisketch_Aottg2UI_Code_AottgStepperStep__set_Children (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* value, const MethodInfo* method);
// 0x5367c00

void Gisketch_Aottg2UI_Code_AottgStepperStep__set_Children
               (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value,MethodInfo *method)

{
  (__this->fields)._Children_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Children_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$ToDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o* Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x5367c10

Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075429f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition)
    ;
    Il2CppMethodInitialized_075429f6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition);
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).id = (__this->fields)._Id_k__BackingField;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
  (__this_00->fields).title = (__this->fields)._Title_k__BackingField;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).title);
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._Text_k__BackingField,(MethodInfo *)0x0);
  (__this_00->fields).text = (&(__this->fields)._Title_k__BackingField)[!bVar1];
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
  (__this_00->fields).children = (__this->fields)._Children_k__BackingField;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).children);
  return __this_00;
}


