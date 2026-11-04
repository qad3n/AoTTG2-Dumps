// Type: ApplicationManagers.MiscInfo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/MiscInfo.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MiscInfo.cs
// --------------------------------

// ApplicationManagers.MiscInfo$$Init
// il2cpp: void ApplicationManagers_MiscInfo__Init (const MethodInfo* method);
// 0x1823519c0

void ApplicationManagers_MiscInfo__Init(MethodInfo *method)

{
  System_String_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347990 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MiscInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"HelpInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"CreditsInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"SocialInfo");
    Il2CppMethodInitialized_184347990 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar1 = ApplicationManagers_ResourceManager__TryLoadText(pSVar1,"SocialInfo",(MethodInfo *)0x0);
  pSVar2 = SimpleJSONFixed_JSON__Parse(pSVar1,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_MiscInfo->static_fields->Social = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_MiscInfo->static_fields->Social,pSVar2);
  pSVar1 = ApplicationManagers_ResourceManager__TryLoadText
                     (TypeInfo_Utility_ResourcePaths->static_fields->Info,"HelpInfo",
                      (MethodInfo *)0x0);
  pSVar2 = SimpleJSONFixed_JSON__Parse(pSVar1,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help,pSVar2);
  pSVar1 = ApplicationManagers_ResourceManager__TryLoadText
                     (TypeInfo_Utility_ResourcePaths->static_fields->Info,"CreditsInfo",
                      (MethodInfo *)0x0);
  pSVar2 = SimpleJSONFixed_JSON__Parse(pSVar1,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_MiscInfo->static_fields->Credits = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_MiscInfo->static_fields->Credits,pSVar2);
  return;
}


// ApplicationManagers.MiscInfo$$.ctor
// il2cpp: void ApplicationManagers_MiscInfo___ctor (ApplicationManagers_MiscInfo_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_MiscInfo___ctor(ApplicationManagers_MiscInfo_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


