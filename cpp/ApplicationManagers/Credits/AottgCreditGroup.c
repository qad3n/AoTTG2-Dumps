// Type: ApplicationManagers.Credits.AottgCreditGroup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditGroup.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Credits.AottgCreditGroup$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditGroup___ctor (ApplicationManagers_Credits_AottgCreditGroup_o* __this, System_String_o* title, System_String_o* description, ApplicationManagers_Credits_AottgCreditContributor_array* contributors, const MethodInfo* method);
// 0x41ad180

void ApplicationManagers_Credits_AottgCreditGroup___ctor
               (ApplicationManagers_Credits_AottgCreditGroup_o *__this,System_String_o *title,
               System_String_o *description,
               ApplicationManagers_Credits_AottgCreditContributor_array *contributors,
               MethodInfo *method)

{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar1;
  
  if (DAT_05704d02 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditContributor);
    il2cpp_init_method_metadata(&MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Credits);
    DAT_05704d02 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Title_k__BackingField = title;
  il2cpp_runtime_glue(&__this->fields,title);
  (__this->fields)._Description_k__BackingField = description;
  il2cpp_runtime_glue(&(__this->fields)._Description_k__BackingField,description);
  if (contributors == (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0) {
    contributors = (ApplicationManagers_Credits_AottgCreditContributor_array *)
                   il2cpp_glue_02274930(TypeInfo_AottgCreditContributor,0);
  }
  pSVar1 = System_Array__AsReadOnly<object>((System_Object_array *)contributors,MethodInfo_ReadOnlyCollection_1_ApplicationManagers_Credits);
  (__this->fields)._Contributors_k__BackingField =
       (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._Contributors_k__BackingField,pSVar1);
  return;
}


// ApplicationManagers.Credits.AottgCreditGroup$$get_Title
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditGroup__get_Title (ApplicationManagers_Credits_AottgCreditGroup_o* __this, const MethodInfo* method);
// 0x41ad230

System_String_o *
ApplicationManagers_Credits_AottgCreditGroup__get_Title
          (ApplicationManagers_Credits_AottgCreditGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._Title_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditGroup$$set_Title
// il2cpp: void ApplicationManagers_Credits_AottgCreditGroup__set_Title (ApplicationManagers_Credits_AottgCreditGroup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41ad240

void ApplicationManagers_Credits_AottgCreditGroup__set_Title
               (ApplicationManagers_Credits_AottgCreditGroup_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Title_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// ApplicationManagers.Credits.AottgCreditGroup$$get_Description
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditGroup__get_Description (ApplicationManagers_Credits_AottgCreditGroup_o* __this, const MethodInfo* method);
// 0x41ad250

System_String_o *
ApplicationManagers_Credits_AottgCreditGroup__get_Description
          (ApplicationManagers_Credits_AottgCreditGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._Description_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditGroup$$set_Description
// il2cpp: void ApplicationManagers_Credits_AottgCreditGroup__set_Description (ApplicationManagers_Credits_AottgCreditGroup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41ad260

void ApplicationManagers_Credits_AottgCreditGroup__set_Description
               (ApplicationManagers_Credits_AottgCreditGroup_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Description_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Description_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditGroup$$get_Contributors
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* ApplicationManagers_Credits_AottgCreditGroup__get_Contributors (ApplicationManagers_Credits_AottgCreditGroup_o* __this, const MethodInfo* method);
// 0x41ad270

System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *
ApplicationManagers_Credits_AottgCreditGroup__get_Contributors
          (ApplicationManagers_Credits_AottgCreditGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._Contributors_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditGroup$$set_Contributors
// il2cpp: void ApplicationManagers_Credits_AottgCreditGroup__set_Contributors (ApplicationManagers_Credits_AottgCreditGroup_o* __this, System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* value, const MethodInfo* method);
// 0x41ad280

void ApplicationManagers_Credits_AottgCreditGroup__set_Contributors
               (ApplicationManagers_Credits_AottgCreditGroup_o *__this,
               System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *value,
               MethodInfo *method)

{
  (__this->fields)._Contributors_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Contributors_k__BackingField);
  return;
}


