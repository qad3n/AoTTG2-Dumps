// Type: ApplicationManagers.MiscInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/MiscInfo.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MiscInfo.cs
// --------------------------------

// ApplicationManagers.MiscInfo$$Init
// il2cpp: void ApplicationManagers_MiscInfo__Init (const MethodInfo* method);
// 0x5e09d20

void ApplicationManagers_MiscInfo__Init(MethodInfo *method)

{
  ApplicationManagers_MiscInfo_StaticFields *pAVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754844c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MiscInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"HelpInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"CreditsInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"SocialInfo");
    Il2CppMethodInitialized_0754844c = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    in_RDX = extraout_RDX_00;
  }
  pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    in_RDX = extraout_RDX_01;
  }
  pSVar2 = ApplicationManagers_ResourceManager__TryLoadText(pSVar2,"SocialInfo",in_RDX);
  pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_MiscInfo->static_fields->Social = pSVar3;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_MiscInfo->static_fields->Social);
  pSVar2 = ApplicationManagers_ResourceManager__TryLoadText
                     (TypeInfo_Utility_ResourcePaths->static_fields->Info,"HelpInfo",method_00);
  pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
  pAVar1 = TypeInfo_ApplicationManagers_MiscInfo->static_fields;
  pAVar1->Help = pSVar3;
  Il2CppCodeGenWriteBarrier(&pAVar1->Help);
  pSVar2 = ApplicationManagers_ResourceManager__TryLoadText
                     (TypeInfo_Utility_ResourcePaths->static_fields->Info,"CreditsInfo",method_01);
  pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
  pAVar1 = TypeInfo_ApplicationManagers_MiscInfo->static_fields;
  pAVar1->Credits = pSVar3;
  Il2CppCodeGenWriteBarrier(&pAVar1->Credits);
  return;
}


// ApplicationManagers.MiscInfo$$.ctor
// il2cpp: void ApplicationManagers_MiscInfo___ctor (ApplicationManagers_MiscInfo_o* __this, const MethodInfo* method);
// 0x5e18570

void ApplicationManagers_MiscInfo___ctor(ApplicationManagers_MiscInfo_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


