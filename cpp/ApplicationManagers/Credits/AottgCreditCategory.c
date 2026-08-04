// Type: ApplicationManagers.Credits.AottgCreditCategory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditCategory.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditCategory$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditCategory___ctor (ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_String_o* name, System_String_o* description, ApplicationManagers_Credits_AottgCreditContributor_array* contributors, ApplicationManagers_Credits_AottgCreditGroup_array* groups, const MethodInfo* method);
// 0x44c5f20

void ApplicationManagers_Credits_AottgCreditCategory___ctor
               (ApplicationManagers_Credits_AottgCreditCategory_o *__this,System_String_o *name,
               System_String_o *description,
               ApplicationManagers_Credits_AottgCreditContributor_array *contributors,
               ApplicationManagers_Credits_AottgCreditGroup_array *groups,MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar1;
  
  if (g_data_057aeacf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Credits_AottgCr);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Credits_AottgCr);
    g_data_057aeacf = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  il2cpp_runtime_helper_022b4080(&__this->fields,name);
  (__this->fields)._Description_k__BackingField = description;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Description_k__BackingField,description);
  if (contributors == (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0) {
    contributors = (ApplicationManagers_Credits_AottgCreditContributor_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditContributor,0);
  }
  pSVar1 = System_Array__AsReadOnly_object_((System_Object_array *)contributors,MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Credits_AottgCr);
  (__this->fields)._Contributors_k__BackingField =
       (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Contributors_k__BackingField,pSVar1);
  if (groups == (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0) {
    groups = (ApplicationManagers_Credits_AottgCreditGroup_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditGroup,0);
  }
  pSVar1 = System_Array__AsReadOnly_object_((System_Object_array *)groups,MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Credits_AottgCr);
  (__this->fields)._Groups_k__BackingField =
       (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Groups_k__BackingField,pSVar1);
  return;
}


// ApplicationManagers.Credits.AottgCreditCategory$$get_Name
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditCategory__get_Name (ApplicationManagers_Credits_AottgCreditCategory_o* __this, const MethodInfo* method);
// 0x44c6030

System_String_o *
ApplicationManagers_Credits_AottgCreditCategory__get_Name
          (ApplicationManagers_Credits_AottgCreditCategory_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditCategory$$set_Name
// il2cpp: void ApplicationManagers_Credits_AottgCreditCategory__set_Name (ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c6040

void ApplicationManagers_Credits_AottgCreditCategory__set_Name
               (ApplicationManagers_Credits_AottgCreditCategory_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// ApplicationManagers.Credits.AottgCreditCategory$$get_Description
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditCategory__get_Description (ApplicationManagers_Credits_AottgCreditCategory_o* __this, const MethodInfo* method);
// 0x44c6050

System_String_o *
ApplicationManagers_Credits_AottgCreditCategory__get_Description
          (ApplicationManagers_Credits_AottgCreditCategory_o *__this,MethodInfo *method)

{
  return (__this->fields)._Description_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditCategory$$set_Description
// il2cpp: void ApplicationManagers_Credits_AottgCreditCategory__set_Description (ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44c6060

void ApplicationManagers_Credits_AottgCreditCategory__set_Description
               (ApplicationManagers_Credits_AottgCreditCategory_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Description_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Description_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditCategory$$get_Contributors
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* ApplicationManagers_Credits_AottgCreditCategory__get_Contributors (ApplicationManagers_Credits_AottgCreditCategory_o* __this, const MethodInfo* method);
// 0x44c6070

System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *
ApplicationManagers_Credits_AottgCreditCategory__get_Contributors
          (ApplicationManagers_Credits_AottgCreditCategory_o *__this,MethodInfo *method)

{
  return (__this->fields)._Contributors_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditCategory$$set_Contributors
// il2cpp: void ApplicationManagers_Credits_AottgCreditCategory__set_Contributors (ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* value, const MethodInfo* method);
// 0x44c6080

void ApplicationManagers_Credits_AottgCreditCategory__set_Contributors
               (ApplicationManagers_Credits_AottgCreditCategory_o *__this,
               System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *value,MethodInfo *method)

{
  (__this->fields)._Contributors_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Contributors_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditCategory$$get_Groups
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o* ApplicationManagers_Credits_AottgCreditCategory__get_Groups (ApplicationManagers_Credits_AottgCreditCategory_o* __this, const MethodInfo* method);
// 0x44c6090

System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *
ApplicationManagers_Credits_AottgCreditCategory__get_Groups
          (ApplicationManagers_Credits_AottgCreditCategory_o *__this,MethodInfo *method)

{
  return (__this->fields)._Groups_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditCategory$$set_Groups
// il2cpp: void ApplicationManagers_Credits_AottgCreditCategory__set_Groups (ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o* value, const MethodInfo* method);
// 0x44c60a0

void ApplicationManagers_Credits_AottgCreditCategory__set_Groups
               (ApplicationManagers_Credits_AottgCreditCategory_o *__this,
               System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *value,MethodInfo *method)

{
  (__this->fields)._Groups_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Groups_k__BackingField);
  return;
}


