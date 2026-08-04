// Type: ApplicationManagers.MiscInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/MiscInfo.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MiscInfo.cs
// --------------------------------

// ApplicationManagers.MiscInfo$$Init
// il2cpp: void ApplicationManagers_MiscInfo__Init (const MethodInfo* method);
// 0x44ba1c0

void ApplicationManagers_MiscInfo__Init(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057aea5d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"HelpInfo");
    il2cpp_runtime_helper_023445d0(&"CreditsInfo");
    il2cpp_runtime_helper_023445d0(&"SocialInfo");
    g_data_057aea5d = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_01;
  }
  pSVar2 = ApplicationManagers_ResourceManager__TryLoadText(pSVar2,"SocialInfo",in_RDX);
  pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_MiscInfo + 0xb8) = pSVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MiscInfo + 0xb8),pSVar3);
  pSVar2 = ApplicationManagers_ResourceManager__TryLoadText
                     (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18),"HelpInfo",method_00);
  pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_MiscInfo + 0xb8);
  *(SimpleJSONFixed_JSONNode_o **)(lVar1 + 8) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
  pSVar2 = ApplicationManagers_ResourceManager__TryLoadText
                     (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18),"CreditsInfo",method_01);
  pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_MiscInfo + 0xb8);
  *(SimpleJSONFixed_JSONNode_o **)(lVar1 + 0x10) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar3);
  return;
}


// ApplicationManagers.MiscInfo$$.ctor
// il2cpp: void ApplicationManagers_MiscInfo___ctor (ApplicationManagers_MiscInfo_o* __this, const MethodInfo* method);
// 0x44ba490

void ApplicationManagers_MiscInfo___ctor(ApplicationManagers_MiscInfo_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


