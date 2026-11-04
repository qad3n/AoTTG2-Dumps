// Type: Gisketch.Aottg2UI.Code.AottgStepperStep
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgStepperStep.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgStepperStep$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgStepperStep___ctor (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, System_String_o* id, System_String_o* title, System_String_o* text, const MethodInfo* method);
// 0x180e56de0

void
Gisketch_Aottg2UI_Code_AottgStepperStep___ctor(Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, System_String_o* id, System_String_o* title, System_String_o* text, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = version;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField,version);
  (__this->fields)._Title_k__BackingField = encoding;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Title_k__BackingField,encoding);
  (__this->fields)._Text_k__BackingField = standalone;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Text_k__BackingField,standalone);
  return;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Id (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Id(Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, MethodInfo* method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Title (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Title(Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, MethodInfo* method)

{
  return (__this->fields)._Title_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Text (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Text(Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, MethodInfo* method)

{
  return (__this->fields)._Text_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Children
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Code_AottgStepperStep__get_Children (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x180584c80

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array*
Gisketch_Aottg2UI_Code_AottgStepperStep__get_Children(Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, MethodInfo* method)

{
  return (__this->fields)._Children_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$set_Children
// il2cpp: void Gisketch_Aottg2UI_Code_AottgStepperStep__set_Children (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* value, const MethodInfo* method);
// 0x180584ca0

void
Gisketch_Aottg2UI_Code_AottgStepperStep__set_Children(Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* value, MethodInfo* method)

{
  (__this->fields)._Children_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Children_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Code.AottgStepperStep$$ToDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o* Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition (Gisketch_Aottg2UI_Code_AottgStepperStep_o* __this, const MethodInfo* method);
// 0x1818c6bd0

Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *
Gisketch_Aottg2UI_Code_AottgStepperStep__ToDefinition
          (Gisketch_Aottg2UI_Code_AottgStepperStep_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184342078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition)
    ;
    Il2CppMethodInitialized_184342078 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)0x0) {
    pSVar1 = (__this->fields)._Id_k__BackingField;
    (__this_00->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar1);
    pSVar1 = (__this->fields)._Title_k__BackingField;
    (__this_00->fields).title = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).title,pSVar1);
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._Text_k__BackingField,(MethodInfo *)0x0);
    pSVar1 = (&(__this->fields)._Title_k__BackingField)[!bVar2];
    (__this_00->fields).text = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar1);
    value = (__this->fields)._Children_k__BackingField;
    (__this_00->fields).children = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).children,value);
    return __this_00;
  }
  ThrowNullReferenceException();
}


