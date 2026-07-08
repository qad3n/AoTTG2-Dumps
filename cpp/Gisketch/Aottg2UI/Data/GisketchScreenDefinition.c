// Type: Gisketch.Aottg2UI.Data.GisketchScreenDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Data/GisketchScreenDefinition.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Data.GisketchScreenDefinition$$FromJson
// il2cpp: Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* Gisketch_Aottg2UI_Data_GisketchScreenDefinition__FromJson (System_String_o* json, const MethodInfo* method);
// 0x3af0420

Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *
Gisketch_Aottg2UI_Data_GisketchScreenDefinition__FromJson(System_String_o *json,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar1;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  System_String_o *message;
  
  if (DAT_05701420 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchScreenDefinition_DeserializeObject_Giske);
    il2cpp_init_method_metadata(&TypeInfo_JsonConvert);
    DAT_05701420 = '\x01';
  }
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)
           Newtonsoft_Json_JsonConvert__DeserializeObject<object>(json,MethodInfo_GisketchScreenDefinition_DeserializeObject_Giske);
  if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) &&
     ((pGVar1->fields).root != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    return pGVar1;
  }
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  message = (System_String_o *)il2cpp_init_method_metadata(&"Invalid Gisketch screen JSON.");
  System_ArgumentException___ctor(__this,message,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_GisketchScreenDefinition_FromJson);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// Gisketch.Aottg2UI.Data.GisketchScreenDefinition$$GetRootMotion
// il2cpp: System_String_o* Gisketch_Aottg2UI_Data_GisketchScreenDefinition__GetRootMotion (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* __this, const MethodInfo* method);
// 0x3af04d0

System_String_o *
Gisketch_Aottg2UI_Data_GisketchScreenDefinition__GetRootMotion
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  
  pGVar1 = (__this->fields).root;
  if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (pGVar2 = (pGVar1->fields).bind,
     pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0)) {
    return (pGVar2->fields).text;
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Data.GisketchScreenDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Data_GisketchScreenDefinition___ctor (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* __this, const MethodInfo* method);
// 0x3af0510

void Gisketch_Aottg2UI_Data_GisketchScreenDefinition___ctor
               (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


