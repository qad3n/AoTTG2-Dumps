// Type: ApplicationManagers.Credits.AottgCreditCategory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditCategory.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditCategory$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditCategory___ctor (ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_String_o* name, System_String_o* description, ApplicationManagers_Credits_AottgCreditContributor_array* contributors, ApplicationManagers_Credits_AottgCreditGroup_array* groups, const MethodInfo* method);
// 0x182363830

void ApplicationManagers_Credits_AottgCreditCategory___ctor
               (ApplicationManagers_Credits_AottgCreditCategory_o *__this,System_String_o *name,
               System_String_o *description,
               ApplicationManagers_Credits_AottgCreditContributor_array *contributors,
               ApplicationManagers_Credits_AottgCreditGroup_array *groups,MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar1;
  
  if (Il2CppMethodInitialized_184347a0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Credits_AottgCreditContributor_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_AottgCreditGroup);
    Il2CppMethodInitialized_184347a0f = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,name);
  (__this->fields)._Description_k__BackingField = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,description);
  if (contributors == (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0) {
    contributors = (ApplicationManagers_Credits_AottgCreditContributor_array *)
                   SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditContributor_array,0);
  }
  pSVar1 = System_Array__AsReadOnly_object_
                     ((System_Object_array *)contributors,
                      (MethodInfo_68BBD0 *)MethodInfo_System_Array_AsReadOnly_AottgCreditContributor);
  (__this->fields)._Contributors_k__BackingField =
       (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Contributors_k__BackingField,pSVar1);
  if (groups == (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0) {
    groups = (ApplicationManagers_Credits_AottgCreditGroup_array *)
             SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditGroup_array,0);
  }
  pSVar1 = System_Array__AsReadOnly_object_
                     ((System_Object_array *)groups,
                      (MethodInfo_68BBD0 *)MethodInfo_System_Array_AsReadOnly_AottgCreditGroup);
  (__this->fields)._Groups_k__BackingField =
       (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Groups_k__BackingField,pSVar1);
  return;
}


// ApplicationManagers.Credits.AottgCreditCategory$$get_Name
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditCategory__get_Name (ApplicationManagers_Credits_AottgCreditCategory_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
ApplicationManagers_Credits_AottgCreditCategory__get_Name(ApplicationManagers_Credits_AottgCreditCategory_o* __this, MethodInfo* method)

{
  return (__this->fields)._Name_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditCategory$$set_Name
// il2cpp: void ApplicationManagers_Credits_AottgCreditCategory__set_Name (ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_Credits_AottgCreditCategory__set_Name(ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Name_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,value);
  return;
}


// ApplicationManagers.Credits.AottgCreditCategory$$get_Description
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditCategory__get_Description (ApplicationManagers_Credits_AottgCreditCategory_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
ApplicationManagers_Credits_AottgCreditCategory__get_Description(ApplicationManagers_Credits_AottgCreditCategory_o* __this, MethodInfo* method)

{
  return (__this->fields)._Description_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditCategory$$set_Description
// il2cpp: void ApplicationManagers_Credits_AottgCreditCategory__set_Description (ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180c8de30

void
ApplicationManagers_Credits_AottgCreditCategory__set_Description(ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Description_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,value);
  return;
}


// ApplicationManagers.Credits.AottgCreditCategory$$get_Contributors
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* ApplicationManagers_Credits_AottgCreditCategory__get_Contributors (ApplicationManagers_Credits_AottgCreditCategory_o* __this, const MethodInfo* method);
// 0x1805852b0

System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o*
ApplicationManagers_Credits_AottgCreditCategory__get_Contributors(ApplicationManagers_Credits_AottgCreditCategory_o* __this, MethodInfo* method)

{
  return (__this->fields)._Contributors_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditCategory$$set_Contributors
// il2cpp: void ApplicationManagers_Credits_AottgCreditCategory__set_Contributors (ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* value, const MethodInfo* method);
// 0x180ace2f0

void
ApplicationManagers_Credits_AottgCreditCategory__set_Contributors(ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* value, MethodInfo* method)

{
  (__this->fields)._Contributors_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Contributors_k__BackingField,value);
  return;
}


// ApplicationManagers.Credits.AottgCreditCategory$$get_Groups
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o* ApplicationManagers_Credits_AottgCreditCategory__get_Groups (ApplicationManagers_Credits_AottgCreditCategory_o* __this, const MethodInfo* method);
// 0x180584c80

System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o*
ApplicationManagers_Credits_AottgCreditCategory__get_Groups(ApplicationManagers_Credits_AottgCreditCategory_o* __this, MethodInfo* method)

{
  return (__this->fields)._Groups_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditCategory$$set_Groups
// il2cpp: void ApplicationManagers_Credits_AottgCreditCategory__set_Groups (ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o* value, const MethodInfo* method);
// 0x180584ca0

void
ApplicationManagers_Credits_AottgCreditCategory__set_Groups(ApplicationManagers_Credits_AottgCreditCategory_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o* value, MethodInfo* method)

{
  (__this->fields)._Groups_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Groups_k__BackingField,value);
  return;
}


