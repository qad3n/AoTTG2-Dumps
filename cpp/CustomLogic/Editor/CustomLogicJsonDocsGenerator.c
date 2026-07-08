// Type: CustomLogic.Editor.CustomLogicJsonDocsGenerator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic.Editor/CustomLogicJsonDocsGenerator.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.Editor.CustomLogicJsonDocsGenerator$$.ctor
// il2cpp: void CustomLogic_Editor_CustomLogicJsonDocsGenerator___ctor (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_array* allTypes, const MethodInfo* method);
// 0x3f70a30

void CustomLogic_Editor_CustomLogicJsonDocsGenerator___ctor
               (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o *__this,
               CustomLogic_Editor_Models_CLType_array *allTypes,MethodInfo *method)

{
  Newtonsoft_Json_JsonSerializerSettings_o *__this_00;
  Newtonsoft_Json_Serialization_DefaultContractResolver_o *__this_01;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *__this_02;
  
  if (DAT_05703efa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CamelCaseNamingStrategy);
    il2cpp_init_method_metadata(&TypeInfo_DefaultContractResolver);
    il2cpp_init_method_metadata(&TypeInfo_JsonSerializerSettings);
    DAT_05703efa = '\x01';
  }
  __this_00 = (Newtonsoft_Json_JsonSerializerSettings_o *)il2cpp_runtime_glue(TypeInfo_JsonSerializerSettings);
  Newtonsoft_Json_JsonSerializerSettings___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)
              il2cpp_runtime_glue(TypeInfo_DefaultContractResolver);
  Newtonsoft_Json_Serialization_DefaultContractResolver___ctor(__this_01,(MethodInfo *)0x0);
  __this_02 = (Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)
              il2cpp_runtime_glue(TypeInfo_CamelCaseNamingStrategy);
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_01 != (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)0x0) {
    *(Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o **)
     &(__this_01->fields)._IgnoreIsSpecifiedMembers_k__BackingField = __this_02;
    il2cpp_runtime_glue(&(__this_01->fields)._IgnoreIsSpecifiedMembers_k__BackingField,__this_02);
    if (__this_00 != (Newtonsoft_Json_JsonSerializerSettings_o *)0x0) {
      (__this_00->fields)._Converters_k__BackingField =
           (System_Collections_Generic_IList_JsonConverter__o *)__this_01;
      il2cpp_runtime_glue(&(__this_00->fields)._Converters_k__BackingField,__this_01);
      (__this->fields)._settings = __this_00;
      il2cpp_runtime_glue(&(__this->fields)._settings);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      (__this->fields).AllTypes = allTypes;
      il2cpp_runtime_glue(&__this->fields,allTypes);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.CustomLogicJsonDocsGenerator$$GetRelativeFilePath
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicJsonDocsGenerator__GetRelativeFilePath (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_o* type, const MethodInfo* method);
// 0x3f70b40

System_String_o *
CustomLogic_Editor_CustomLogicJsonDocsGenerator__GetRelativeFilePath
          (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o *__this,
          CustomLogic_Editor_Models_CLType_o *type,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05703efb == '\0') {
    il2cpp_init_method_metadata(&".json");
    il2cpp_init_method_metadata(&"json/");
    DAT_05703efb = '\x01';
  }
  if (type != (CustomLogic_Editor_Models_CLType_o *)0x0) {
    pSVar1 = System_String__Concat
                       ("json/",(type->fields)._Name_k__BackingField,".json",
                        (MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.CustomLogicJsonDocsGenerator$$Generate
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicJsonDocsGenerator__Generate (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_o* type, const MethodInfo* method);
// 0x3f70ba0

System_String_o *
CustomLogic_Editor_CustomLogicJsonDocsGenerator__Generate
          (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o *__this,
          CustomLogic_Editor_Models_CLType_o *type,MethodInfo *method)

{
  Newtonsoft_Json_JsonSerializerSettings_o *settings;
  System_String_o *pSVar1;
  
  if (DAT_05703efc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JsonConvert);
    DAT_05703efc = '\x01';
  }
  settings = (__this->fields)._settings;
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = Newtonsoft_Json_JsonConvert__SerializeObject
                     ((Il2CppObject *)type,1,settings,(MethodInfo *)0x0);
  return pSVar1;
}


