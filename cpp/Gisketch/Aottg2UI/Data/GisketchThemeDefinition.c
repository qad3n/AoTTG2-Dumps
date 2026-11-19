// Type: Gisketch.Aottg2UI.Data.GisketchThemeDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Data/GisketchThemeDefinition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Data.GisketchThemeDefinition$$FromJson
// il2cpp: Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson (System_String_o* json, const MethodInfo* method);
// 0x5361150

Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *
Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(System_String_o *json,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *pGVar1;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_075429b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Newtonsoft_Json_JsonConvert_DeserializeObject_GisketchThemeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Newtonsoft_Json_JsonConvert);
    Il2CppMethodInitialized_075429b8 = '\x01';
  }
  if ((TypeInfo_Newtonsoft_Json_JsonConvert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Newtonsoft_Json_JsonConvert);
  }
  pGVar1 = Newtonsoft_Json_JsonConvert__DeserializeObject_object_
                     (json,(MethodInfo_356B9D0 *)
                           MethodInfo_Newtonsoft_Json_JsonConvert_DeserializeObject_GisketchThemeDefinition);
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Invalid Gisketch theme JSON.");
    System_ArgumentException___ctor_54186d0(__this,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_Gisketch_Aottg2UI_Data_GisketchThemeDefinition_FromJson);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  return pGVar1;
}


// Gisketch.Aottg2UI.Data.GisketchThemeDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o* __this, const MethodInfo* method);
// 0x5361200

void Gisketch_Aottg2UI_Data_GisketchThemeDefinition___ctor
               (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


