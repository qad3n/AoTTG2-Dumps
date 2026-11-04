// Type: CustomLogic.Editor.CustomLogicJsonDocsGenerator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor/CustomLogicJsonDocsGenerator.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.CustomLogicJsonDocsGenerator$$.ctor
// il2cpp: void CustomLogic_Editor_CustomLogicJsonDocsGenerator___ctor (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_array* allTypes, const MethodInfo* method);
// 0x1820e4610

void CustomLogic_Editor_CustomLogicJsonDocsGenerator___ctor
               (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o *__this,
               CustomLogic_Editor_Models_CLType_array *allTypes,MethodInfo *method)

{
  Newtonsoft_Json_JsonSerializerSettings_o *__this_00;
  Newtonsoft_Json_Serialization_DefaultContractResolver_o *__this_01;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *__this_02;
  
  if (Il2CppMethodInitialized_184346a31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Newtonsoft_Json_Serialization_CamelCaseNamingStrategy);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Newtonsoft_Json_Serialization_DefaultContractResolver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Newtonsoft_Json_JsonSerializerSettings);
    Il2CppMethodInitialized_184346a31 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Newtonsoft_Json_JsonSerializerSettings);
  Newtonsoft_Json_JsonSerializerSettings___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Newtonsoft_Json_Serialization_DefaultContractResolver);
  Newtonsoft_Json_Serialization_DefaultContractResolver___ctor(__this_01,(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Newtonsoft_Json_Serialization_CamelCaseNamingStrategy);
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy___ctor
            ((System_Runtime_CompilerServices_IsReadOnlyAttribute_2_o *)__this_02,(MethodInfo *)0x0);
  if (__this_01 != (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)0x0) {
    (__this_01->fields)._NamingStrategy_k__BackingField =
         (Newtonsoft_Json_Serialization_NamingStrategy_o *)__this_02;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields)._NamingStrategy_k__BackingField,__this_02);
    if (__this_00 != (Newtonsoft_Json_JsonSerializerSettings_o *)0x0) {
      (__this_00->fields)._ContractResolver_k__BackingField =
           (Newtonsoft_Json_Serialization_IContractResolver_o *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._ContractResolver_k__BackingField,__this_01);
      (__this->fields)._settings = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._settings,__this_00);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
      (__this->fields).AllTypes = allTypes;
      Il2CppCodeGenWriteBarrier(&(__this->fields).AllTypes,allTypes);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicJsonDocsGenerator$$GetRelativeFilePath
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicJsonDocsGenerator__GetRelativeFilePath (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_o* type, const MethodInfo* method);
// 0x1820e45b0

System_String_o *
CustomLogic_Editor_CustomLogicJsonDocsGenerator__GetRelativeFilePath
          (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o *__this,CustomLogic_Editor_Models_CLType_o *type,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346a32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".json");
    il2cpp_codegen_initialize_runtime_metadata(&"json/");
    Il2CppMethodInitialized_184346a32 = '\x01';
  }
  if (type != (CustomLogic_Editor_Models_CLType_o *)0x0) {
    pSVar1 = System_String__Concat_1969b70
                       ("json/",(type->fields)._Name_k__BackingField,".json",
                        (MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicJsonDocsGenerator$$Generate
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicJsonDocsGenerator__Generate (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_o* type, const MethodInfo* method);
// 0x1820e4540

System_String_o *
CustomLogic_Editor_CustomLogicJsonDocsGenerator__Generate
          (CustomLogic_Editor_CustomLogicJsonDocsGenerator_o *__this,CustomLogic_Editor_Models_CLType_o *type,
          MethodInfo *method)

{
  Newtonsoft_Json_JsonSerializerSettings_o *settings;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346a33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Newtonsoft_Json_JsonConvert);
    Il2CppMethodInitialized_184346a33 = '\x01';
  }
  settings = (__this->fields)._settings;
  if ((TypeInfo_Newtonsoft_Json_JsonConvert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Newtonsoft_Json_JsonConvert);
  }
  pSVar1 = Newtonsoft_Json_JsonConvert__SerializeObject_1bc9bf0
                     ((Il2CppObject *)type,1,settings,(MethodInfo *)0x0);
  return pSVar1;
}


