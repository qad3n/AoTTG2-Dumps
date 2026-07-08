// Type: ApplicationManagers.Credits.AottgCreditContributor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditContributor.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Credits.AottgCreditContributor$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditContributor___ctor (ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* name, System_String_o* accountId, const MethodInfo* method);
// 0x41ad290

void ApplicationManagers_Credits_AottgCreditContributor___ctor
               (ApplicationManagers_Credits_AottgCreditContributor_o *__this,System_String_o *name,
               System_String_o *accountId,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  il2cpp_runtime_glue(&__this->fields,name);
  (__this->fields)._AccountId_k__BackingField = accountId;
  il2cpp_runtime_glue(&(__this->fields)._AccountId_k__BackingField,accountId);
  return;
}


// ApplicationManagers.Credits.AottgCreditContributor$$get_Name
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditContributor__get_Name (ApplicationManagers_Credits_AottgCreditContributor_o* __this, const MethodInfo* method);
// 0x41ad2d0

System_String_o *
ApplicationManagers_Credits_AottgCreditContributor__get_Name
          (ApplicationManagers_Credits_AottgCreditContributor_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditContributor$$set_Name
// il2cpp: void ApplicationManagers_Credits_AottgCreditContributor__set_Name (ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41ad2e0

void ApplicationManagers_Credits_AottgCreditContributor__set_Name
               (ApplicationManagers_Credits_AottgCreditContributor_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// ApplicationManagers.Credits.AottgCreditContributor$$get_AccountId
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditContributor__get_AccountId (ApplicationManagers_Credits_AottgCreditContributor_o* __this, const MethodInfo* method);
// 0x41ad2f0

System_String_o *
ApplicationManagers_Credits_AottgCreditContributor__get_AccountId
          (ApplicationManagers_Credits_AottgCreditContributor_o *__this,MethodInfo *method)

{
  return (__this->fields)._AccountId_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditContributor$$set_AccountId
// il2cpp: void ApplicationManagers_Credits_AottgCreditContributor__set_AccountId (ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* value, const MethodInfo* method);
// 0x41ad300

void ApplicationManagers_Credits_AottgCreditContributor__set_AccountId
               (ApplicationManagers_Credits_AottgCreditContributor_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._AccountId_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._AccountId_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditContributor$$get_IsLinked
// il2cpp: bool ApplicationManagers_Credits_AottgCreditContributor__get_IsLinked (ApplicationManagers_Credits_AottgCreditContributor_o* __this, const MethodInfo* method);
// 0x41ad310

bool_conflict
ApplicationManagers_Credits_AottgCreditContributor__get_IsLinked
          (ApplicationManagers_Credits_AottgCreditContributor_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = System_String__IsNullOrEmpty
                    ((__this->fields)._AccountId_k__BackingField,(MethodInfo *)0x0);
  return uVar1 ^ 1;
}


