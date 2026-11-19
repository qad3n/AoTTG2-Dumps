// Type: ApplicationManagers.Credits.AottgCreditContributor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers.Credits/AottgCreditContributor.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditContributor$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditContributor___ctor (ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* name, System_String_o* accountId, const MethodInfo* method);
// 0x5e227e0

void ApplicationManagers_Credits_AottgCreditContributor___ctor
               (ApplicationManagers_Credits_AottgCreditContributor_o *__this,System_String_o *name,
               System_String_o *accountId,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
  (__this->fields)._AccountId_k__BackingField = accountId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditContributor$$get_Name
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditContributor__get_Name (ApplicationManagers_Credits_AottgCreditContributor_o* __this, const MethodInfo* method);
// 0x5e22820

System_String_o *
ApplicationManagers_Credits_AottgCreditContributor__get_Name
          (ApplicationManagers_Credits_AottgCreditContributor_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditContributor$$set_Name
// il2cpp: void ApplicationManagers_Credits_AottgCreditContributor__set_Name (ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e22830

void ApplicationManagers_Credits_AottgCreditContributor__set_Name
               (ApplicationManagers_Credits_AottgCreditContributor_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditContributor$$get_AccountId
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditContributor__get_AccountId (ApplicationManagers_Credits_AottgCreditContributor_o* __this, const MethodInfo* method);
// 0x5e22840

System_String_o *
ApplicationManagers_Credits_AottgCreditContributor__get_AccountId
          (ApplicationManagers_Credits_AottgCreditContributor_o *__this,MethodInfo *method)

{
  return (__this->fields)._AccountId_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditContributor$$set_AccountId
// il2cpp: void ApplicationManagers_Credits_AottgCreditContributor__set_AccountId (ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5e22850

void ApplicationManagers_Credits_AottgCreditContributor__set_AccountId
               (ApplicationManagers_Credits_AottgCreditContributor_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._AccountId_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField);
  return;
}


// ApplicationManagers.Credits.AottgCreditContributor$$get_IsLinked
// il2cpp: bool ApplicationManagers_Credits_AottgCreditContributor__get_IsLinked (ApplicationManagers_Credits_AottgCreditContributor_o* __this, const MethodInfo* method);
// 0x5e22860

bool ApplicationManagers_Credits_AottgCreditContributor__get_IsLinked
               (ApplicationManagers_Credits_AottgCreditContributor_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._AccountId_k__BackingField,(MethodInfo *)0x0);
  return !bVar1;
}


