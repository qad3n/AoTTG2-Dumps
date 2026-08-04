// Type: Gisketch.Aottg2UI.Code.AottgStepperStep
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgStepperStep.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgStepperStep$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgStepperStep___ctor (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, System_String_o* id, System_String_o* title, System_String_o* text, const MethodInfo* method);
// 0x3b615a0

void Gisketch_Aottg2UI_Code_AottgStepperStep___ctor
               (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,System_String_o *id,System_String_o *title,
               System_String_o *text,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._Title_k__BackingField = title;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Title_k__BackingField,title);
  (__this->fields)._Text_k__BackingField = text;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Text_k__BackingField,text);
  return;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Id (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x3b61600

System_String_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Id
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Title (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x3b61610

System_String_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Title
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Title_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Text (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x3b61620

System_String_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Text
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Text_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Children
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Children (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x3b61630

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Children
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  return (__this->fields)._Children_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$set_Children
// il2cpp: void Gisketch_Aottg2UI_Code_AottgStepperStep__set_Children (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* value, const MethodInfo* method);
// 0x3b61640

void Gisketch_Aottg2UI_Code_AottgStepperStep__set_Children
               (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value,MethodInfo *method)

{
  (__this->fields)._Children_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Children_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$ToDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o* Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x3b61650

Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *pGVar2;
  System_String_o *in_RCX;
  System_String_o *extraout_RDX;
  undefined4 uVar3;
  System_String_o *in_R8;
  System_String_o *in_R9;
  
  if (g_data_057a9d79 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchStepperStepDefinition);
    g_data_057a9d79 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchStepperStepDefinition);
  uVar3 = 0;
  pGVar2 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)0x0) {
    (__this_00->fields).id = (__this->fields)._Id_k__BackingField;
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    (__this_00->fields).title = (__this->fields)._Title_k__BackingField;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).title);
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._Text_k__BackingField,(MethodInfo *)0x0);
    (__this_00->fields).text = (&(__this->fields)._Title_k__BackingField)[(byte)((byte)bVar1 ^ 1)];
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).text);
    (__this_00->fields).children = (__this->fields)._Children_k__BackingField;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).children);
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pGVar2->fields).id = uVar3;
  (pGVar2->fields).title = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(pGVar2->fields).title,extraout_RDX);
  (pGVar2->fields).titleKey = in_RCX;
  il2cpp_runtime_helper_022b4080(&(pGVar2->fields).titleKey,in_RCX);
  (pGVar2->fields).text = in_R8;
  il2cpp_runtime_helper_022b4080(&(pGVar2->fields).text,in_R8);
  (pGVar2->fields).textKey = in_R9;
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)
           il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey,in_R9);
  return pGVar2;
}


