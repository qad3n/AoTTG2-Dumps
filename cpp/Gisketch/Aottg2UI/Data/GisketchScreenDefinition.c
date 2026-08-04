// Type: Gisketch.Aottg2UI.Data.GisketchScreenDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Data/GisketchScreenDefinition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Data.GisketchScreenDefinition$$FromJson
// il2cpp: Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* Gisketch_Aottg2UI_Data_GisketchScreenDefinition__FromJson (System_String_o* json, const MethodInfo* method);
// 0x3b5b1a0

Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *
Gisketch_Aottg2UI_Data_GisketchScreenDefinition__FromJson(System_String_o *json,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar2;
  undefined8 uVar3;
  System_ArgumentException_o *__this;
  System_String_o *message;
  
  if (g_data_057a9d43 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_DeserializeObject_GisketchScree);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057a9d43 = '\x01';
  }
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)
           Newtonsoft_Json_JsonConvert__DeserializeObject_object_(json,MethodInfo_GisketchScreenDefinition_DeserializeObject_GisketchScree);
  if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) &&
     ((pGVar2->fields).root != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    return pGVar2;
  }
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar3);
  message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid Gisketch screen JSON.");
  System_ArgumentException___ctor_3c12490(__this,message,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_FromJson);
  il2cpp_runtime_helper_022b2b10(__this,uVar3);
  lVar1 = *(long *)&(__this->fields)._remoteStackIndex;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xf0), lVar1 != 0)) {
    return *(Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o **)(lVar1 + 0x10);
  }
  return (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Data.GisketchScreenDefinition$$GetRootMotion
// il2cpp: System_String_o* Gisketch_Aottg2UI_Data_GisketchScreenDefinition__GetRootMotion (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* __this, const MethodInfo* method);
// 0x3b5b250

System_String_o *
Gisketch_Aottg2UI_Data_GisketchScreenDefinition__GetRootMotion
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  
  pGVar1 = (__this->fields).root;
  if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (pGVar2 = (pGVar1->fields).bind, pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0))
  {
    return (pGVar2->fields).text;
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Data.GisketchScreenDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Data_GisketchScreenDefinition___ctor (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* __this, const MethodInfo* method);
// 0x3b5b290

void Gisketch_Aottg2UI_Data_GisketchScreenDefinition___ctor
               (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


