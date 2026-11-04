// Type: ApplicationManagers.Credits.AottgCreditContributor
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditContributor.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditContributor$$.ctor
// il2cpp: void ApplicationManagers_Credits_AottgCreditContributor___ctor (ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* name, System_String_o* accountId, const MethodInfo* method);
// 0x180c8dad0

void
ApplicationManagers_Credits_AottgCreditContributor___ctor(ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* name, System_String_o* accountId, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = _country;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,_country);
  (__this->fields)._AccountId_k__BackingField = _language;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField,_language);
  return;
}


// ApplicationManagers.Credits.AottgCreditContributor$$get_Name
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditContributor__get_Name (ApplicationManagers_Credits_AottgCreditContributor_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
ApplicationManagers_Credits_AottgCreditContributor__get_Name(ApplicationManagers_Credits_AottgCreditContributor_o* __this, MethodInfo* method)

{
  return (__this->fields)._Name_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditContributor$$set_Name
// il2cpp: void ApplicationManagers_Credits_AottgCreditContributor__set_Name (ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_Credits_AottgCreditContributor__set_Name(ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Name_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,value);
  return;
}


// ApplicationManagers.Credits.AottgCreditContributor$$get_AccountId
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditContributor__get_AccountId (ApplicationManagers_Credits_AottgCreditContributor_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
ApplicationManagers_Credits_AottgCreditContributor__get_AccountId(ApplicationManagers_Credits_AottgCreditContributor_o* __this, MethodInfo* method)

{
  return (__this->fields)._AccountId_k__BackingField;
}


// ApplicationManagers.Credits.AottgCreditContributor$$set_AccountId
// il2cpp: void ApplicationManagers_Credits_AottgCreditContributor__set_AccountId (ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180c8de30

void
ApplicationManagers_Credits_AottgCreditContributor__set_AccountId(ApplicationManagers_Credits_AottgCreditContributor_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._AccountId_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField,value);
  return;
}


// ApplicationManagers.Credits.AottgCreditContributor$$get_IsLinked
// il2cpp: bool ApplicationManagers_Credits_AottgCreditContributor__get_IsLinked (ApplicationManagers_Credits_AottgCreditContributor_o* __this, const MethodInfo* method);
// 0x182363930

bool ApplicationManagers_Credits_AottgCreditContributor__get_IsLinked
               (ApplicationManagers_Credits_AottgCreditContributor_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._AccountId_k__BackingField,(MethodInfo *)0x0);
  return !bVar1;
}


