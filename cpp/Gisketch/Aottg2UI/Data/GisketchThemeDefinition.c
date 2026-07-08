// Type: Gisketch.Aottg2UI.Data.GisketchThemeDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Data/GisketchThemeDefinition.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Data.GisketchThemeDefinition$$FromJson
// il2cpp: Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson (System_String_o* json, const MethodInfo* method);
// 0x3af0580

Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *
Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(System_String_o *json,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *pGVar1;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  System_String_o *message;
  
  if (DAT_05701421 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchThemeDefinition_DeserializeObject_Gisket);
    il2cpp_init_method_metadata(&TypeInfo_JsonConvert);
    DAT_05701421 = '\x01';
  }
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)
           Newtonsoft_Json_JsonConvert__DeserializeObject<object>(json,MethodInfo_GisketchThemeDefinition_DeserializeObject_Gisket);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
    return pGVar1;
  }
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  message = (System_String_o *)il2cpp_init_method_metadata(&"Invalid Gisketch theme JSON.");
  System_ArgumentException___ctor(__this,message,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_GisketchThemeDefinition_FromJson);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// Gisketch.Aottg2UI.Data.GisketchThemeDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* __this, const MethodInfo* method);
// 0x3af0630

void Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor
               (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


