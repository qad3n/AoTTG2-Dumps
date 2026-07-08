// Type: Gisketch.Aottg2UI.Code.AottgStepperStep
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgStepperStep.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgStepperStep$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgStepperStep___ctor (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, System_String_o* id, System_String_o* title, System_String_o* text, const MethodInfo* method);
// 0x3af63e0

void Gisketch_Aottg2UI_Code_AottgStepperStep___ctor
               (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,System_String_o *id,
               System_String_o *title,System_String_o *text,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = id;
  il2cpp_runtime_glue(&__this->fields,id);
  (__this->fields)._Title_k__BackingField = title;
  il2cpp_runtime_glue(&(__this->fields)._Title_k__BackingField,title);
  (__this->fields)._Text_k__BackingField = text;
  il2cpp_runtime_glue(&(__this->fields)._Text_k__BackingField,text);
  return;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Id (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x3af6440

System_String_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Id
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Title (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x3af6450

System_String_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Title
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Title_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Text (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x3af6460

System_String_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Text
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Text_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Children
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Children (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x3af6470

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Children
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Children_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$set_Children
// il2cpp: void Gisketch_Aottg2UI_Code_AottgStepperStep__set_Children (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* value, const MethodInfo* method);
// 0x3af6480

void Gisketch_Aottg2UI_Code_AottgStepperStep__set_Children
               (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value,MethodInfo *method)

{
  (__this->fields)._Children_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Children_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$ToDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o* Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x3af6490

Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *__this_00;
  
  if (DAT_05701456 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchStepperStepDefinition);
    DAT_05701456 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)
              il2cpp_runtime_glue(TypeInfo_GisketchStepperStepDefinition);
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)0x0) {
    (__this_00->fields).id = (__this->fields)._Id_k__BackingField;
    il2cpp_runtime_glue(&__this_00->fields);
    (__this_00->fields).title = (__this->fields)._Title_k__BackingField;
    il2cpp_runtime_glue(&(__this_00->fields).title);
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._Text_k__BackingField,(MethodInfo *)0x0);
    (__this_00->fields).text = (&(__this->fields)._Title_k__BackingField)[(byte)((byte)bVar1 ^ 1)];
    il2cpp_runtime_glue(&(__this_00->fields).text);
    (__this_00->fields).children = (__this->fields)._Children_k__BackingField;
    il2cpp_runtime_glue(&(__this_00->fields).children);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


