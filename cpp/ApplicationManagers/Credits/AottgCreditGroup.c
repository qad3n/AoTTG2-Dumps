// Type: ApplicationManagers.Credits.AottgCreditGroup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditGroup.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditGroup$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditGroup___ctor (ApplicationManagers_Credits_AottgCreditGroup_o* __this, System_String_o* title, System_String_o* description, ApplicationManagers_Credits_AottgCreditContributor_array* contributors, const MethodInfo* method);
// 0x5e226d0

void ApplicationManagers_Credits_AottgCreditGroup___ctor
               (ApplicationManagers_Credits_AottgCreditGroup_o *__this,System_String_o *title,
               System_String_o *description,
               ApplicationManagers_Credits_AottgCreditContributor_array *contributors,MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar1;
  
  if (Il2CppMethodInitialized_075484bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Credits_AottgCreditContributor_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_AottgCreditContributor);
    Il2CppMethodInitialized_075484bf = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Title_k__BackingField = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Title_k__BackingField);
  (__this->fields)._Description_k__BackingField = description;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField);
  if (contributors == (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0) {
    contributors = (ApplicationManagers_Credits_AottgCreditContributor_array *)
                   SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditContributor_array,0);
  }
  pSVar1 = System_Array__AsReadOnly_object_
                     ((System_Object_array *)contributors,
                      (MethodInfo_34889C0 *)MethodInfo_System_Array_AsReadOnly_AottgCreditContributor);
  (__this->fields)._Contributors_k__BackingField =
       (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Contributors_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditGroup$$get_Title
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditGroup__get_Title (ApplicationManagers_Credits_AottgCreditGroup_o* __this, const MethodInfo* method);
// 0x5e22780

System_String_o *
ApplicationManagers_Credits_AottgCreditGroup__get_Title
          (ApplicationManagers_Credits_AottgCreditGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._Title_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditGroup$$set_Title
// il2cpp: void ApplicationManagers_Credits_AottgCreditGroup__set_Title (ApplicationManagers_Credits_AottgCreditGroup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e22790

void ApplicationManagers_Credits_AottgCreditGroup__set_Title
               (ApplicationManagers_Credits_AottgCreditGroup_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Title_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Title_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditGroup$$get_Description
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditGroup__get_Description (ApplicationManagers_Credits_AottgCreditGroup_o* __this, const MethodInfo* method);
// 0x5e227a0

System_String_o *
ApplicationManagers_Credits_AottgCreditGroup__get_Description
          (ApplicationManagers_Credits_AottgCreditGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._Description_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditGroup$$set_Description
// il2cpp: void ApplicationManagers_Credits_AottgCreditGroup__set_Description (ApplicationManagers_Credits_AottgCreditGroup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e227b0

void ApplicationManagers_Credits_AottgCreditGroup__set_Description
               (ApplicationManagers_Credits_AottgCreditGroup_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Description_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditGroup$$get_Contributors
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* ApplicationManagers_Credits_AottgCreditGroup__get_Contributors (ApplicationManagers_Credits_AottgCreditGroup_o* __this, const MethodInfo* method);
// 0x5e227c0

System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *
ApplicationManagers_Credits_AottgCreditGroup__get_Contributors
          (ApplicationManagers_Credits_AottgCreditGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._Contributors_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditGroup$$set_Contributors
// il2cpp: void ApplicationManagers_Credits_AottgCreditGroup__set_Contributors (ApplicationManagers_Credits_AottgCreditGroup_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* value, const MethodInfo* method);
// 0x5e227d0

void ApplicationManagers_Credits_AottgCreditGroup__set_Contributors
               (ApplicationManagers_Credits_AottgCreditGroup_o *__this,
               System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *value,MethodInfo *method)

{
  (__this->fields)._Contributors_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Contributors_k__BackingField);
  return;
}


