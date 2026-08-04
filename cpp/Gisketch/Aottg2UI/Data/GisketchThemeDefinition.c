// Type: Gisketch.Aottg2UI.Data.GisketchThemeDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Data/GisketchThemeDefinition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Data.GisketchThemeDefinition$$FromJson
// il2cpp: Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson (System_String_o* json, const MethodInfo* method);
// 0x3b5b300

Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *
Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(System_String_o *json,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *pGVar1;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  System_String_o *message;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *extraout_RAX;
  
  if (g_data_057a9d44 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchThemeDefinition_DeserializeObject_GisketchThemeD);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057a9d44 = '\x01';
  }
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)
           Newtonsoft_Json_JsonConvert__DeserializeObject_object_(json,MethodInfo_GisketchThemeDefinition_DeserializeObject_GisketchThemeD);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
    return pGVar1;
  }
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar2);
  message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid Gisketch theme JSON.");
  System_ArgumentException___ctor_3c12490(__this,message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchThemeDefinition_FromJson);
  il2cpp_runtime_helper_022b2b10();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Data.GisketchThemeDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* __this, const MethodInfo* method);
// 0x3b5b3b0

void Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor
               (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


