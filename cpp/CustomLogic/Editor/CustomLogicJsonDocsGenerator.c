// Type: CustomLogic.Editor.CustomLogicJsonDocsGenerator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor/CustomLogicJsonDocsGenerator.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.CustomLogicJsonDocsGenerator$$.ctor
// il2cpp: void CustomLogic_Editor_CustomLogicJsonDocsGenerator___ctor (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_array* allTypes, const MethodInfo* method);
// 0x427cf20

void CustomLogic_Editor_CustomLogicJsonDocsGenerator___ctor
               (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o *__this,
               CustomLogic_Editor_Models_CLType_array *allTypes,MethodInfo *method)

{
  Newtonsoft_Json_JsonSerializerSettings_o *pNVar1;
  Newtonsoft_Json_Serialization_DefaultContractResolver_o *__this_00;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *pNVar2;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *pNVar3;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *pNVar4;
  
  if (g_data_057adc68 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CamelCaseNamingStrategy);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DefaultContractResolver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonSerializerSettings);
    g_data_057adc68 = '\x01';
  }
  pNVar1 = (Newtonsoft_Json_JsonSerializerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JsonSerializerSettings);
  Newtonsoft_Json_JsonSerializerSettings___ctor(pNVar1,(MethodInfo *)0x0);
  __this_00 = (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DefaultContractResolver);
  Newtonsoft_Json_Serialization_DefaultContractResolver___ctor(__this_00,(MethodInfo *)0x0);
  pNVar2 = (Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CamelCaseNamingStrategy);
  pNVar3 = (Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)0x0;
  pNVar4 = pNVar2;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy___ctor_3dc84d0(pNVar2,(MethodInfo *)0x0);
  if (__this_00 != (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)0x0) {
    pNVar4 = (Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)
             &(__this_00->fields)._IgnoreIsSpecifiedMembers_k__BackingField;
    *(Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o **)
     &(__this_00->fields)._IgnoreIsSpecifiedMembers_k__BackingField = pNVar2;
    il2cpp_runtime_helper_022b4080();
    pNVar3 = pNVar2;
    if (pNVar1 != (Newtonsoft_Json_JsonSerializerSettings_o *)0x0) {
      (pNVar1->fields)._Converters_k__BackingField =
           (System_Collections_Generic_IList_JsonConverter__o *)__this_00;
      il2cpp_runtime_helper_022b4080(&(pNVar1->fields)._Converters_k__BackingField,__this_00);
      (__this->fields)._settings = pNVar1;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._settings);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      (__this->fields).AllTypes = allTypes;
      il2cpp_runtime_helper_022b4080(&__this->fields,allTypes);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pNVar2 = pNVar3;
  if (g_data_057adc69 == '\0') {
    il2cpp_runtime_helper_023445d0(&".json");
    pNVar4 = (Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)&"json/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc69 = '\x01';
  }
  if (pNVar3 != (Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)0x0) {
    System_String__Concat_3af7150
              ("json/",*(System_String_o **)&(pNVar3->fields)._OverrideSpecifiedNames_k__BackingField,
               ".json",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057adc6a = '\x01';
  }
  pNVar1 = *(Newtonsoft_Json_JsonSerializerSettings_o **)
            &(pNVar4->fields)._OverrideSpecifiedNames_k__BackingField;
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Newtonsoft_Json_JsonConvert__SerializeObject_3d57b10((Il2CppObject *)pNVar2,1,pNVar1,(MethodInfo *)0x0);
  return;
}


// CustomLogic.Editor.CustomLogicJsonDocsGenerator$$GetRelativeFilePath
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicJsonDocsGenerator__GetRelativeFilePath (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_o* type, const MethodInfo* method);
// 0x427d030

System_String_o *
CustomLogic_Editor_CustomLogicJsonDocsGenerator__GetRelativeFilePath
          (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o *__this,CustomLogic_Editor_Models_CLType_o *type,
          MethodInfo *method)

{
  Newtonsoft_Json_JsonSerializerSettings_o *settings;
  System_String_o *pSVar1;
  CustomLogic_Editor_Models_CLType_o *value;
  
  value = type;
  if (g_data_057adc69 == '\0') {
    il2cpp_runtime_helper_023445d0(&".json");
    __this = (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o *)&"json/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc69 = '\x01';
  }
  if (type != (CustomLogic_Editor_Models_CLType_o *)0x0) {
    pSVar1 = System_String__Concat_3af7150
                       ("json/",(type->fields)._Name_k__BackingField,".json",(MethodInfo *)0x0);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057adc6a = '\x01';
  }
  settings = (__this->fields)._settings;
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = Newtonsoft_Json_JsonConvert__SerializeObject_3d57b10
                     ((Il2CppObject *)value,1,settings,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.Editor.CustomLogicJsonDocsGenerator$$Generate
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicJsonDocsGenerator__Generate (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_o* type, const MethodInfo* method);
// 0x427d090

System_String_o *
CustomLogic_Editor_CustomLogicJsonDocsGenerator__Generate
          (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o *__this,CustomLogic_Editor_Models_CLType_o *type,
          MethodInfo *method)

{
  Newtonsoft_Json_JsonSerializerSettings_o *settings;
  System_String_o *pSVar1;
  
  if (g_data_057adc6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057adc6a = '\x01';
  }
  settings = (__this->fields)._settings;
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = Newtonsoft_Json_JsonConvert__SerializeObject_3d57b10
                     ((Il2CppObject *)type,1,settings,(MethodInfo *)0x0);
  return pSVar1;
}


