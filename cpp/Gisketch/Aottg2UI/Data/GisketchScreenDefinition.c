// Type: Gisketch.Aottg2UI.Data.GisketchScreenDefinition
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Data/GisketchScreenDefinition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Data.GisketchScreenDefinition$$FromJson
// il2cpp: Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* Gisketch_Aottg2UI_Data_GisketchScreenDefinition__FromJson (System_String_o* json, const MethodInfo* method);
// 0x1818d1fd0

Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *
Gisketch_Aottg2UI_Data_GisketchScreenDefinition__FromJson(System_String_o *json,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar1;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_18434203a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Newtonsoft_Json_JsonConvert_DeserializeObject_GisketchScreenDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Newtonsoft_Json_JsonConvert);
    Il2CppMethodInitialized_18434203a = '\x01';
  }
  if ((TypeInfo_Newtonsoft_Json_JsonConvert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Newtonsoft_Json_JsonConvert);
  }
  pGVar1 = Newtonsoft_Json_JsonConvert__DeserializeObject_object_
                     (json,(MethodInfo_714630 *)
                           MethodInfo_Newtonsoft_Json_JsonConvert_DeserializeObject_GisketchScreenDefinition);
  if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) &&
     ((pGVar1->fields).root != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    return pGVar1;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Invalid Gisketch screen JSON.");
  System_ArgumentException___ctor_1a77cc0(__this,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Gisketch_Aottg2UI_Data_GisketchScreenDefinition_FromJson);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// Gisketch.Aottg2UI.Data.GisketchScreenDefinition$$GetRootMotion
// il2cpp: System_String_o* Gisketch_Aottg2UI_Data_GisketchScreenDefinition__GetRootMotion (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* __this, const MethodInfo* method);
// 0x1818d2080

System_String_o *
Gisketch_Aottg2UI_Data_GisketchScreenDefinition__GetRootMotion
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (((__this->fields).root != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (pGVar1 = (__this->fields).root,
     (pGVar1->fields).motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) {
    return (((pGVar1->fields).motion)->fields).preset;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Data.GisketchScreenDefinition$$UsesCachedLifecycle
// il2cpp: bool Gisketch_Aottg2UI_Data_GisketchScreenDefinition__UsesCachedLifecycle (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* __this, const MethodInfo* method);
// 0x1818d20c0

bool Gisketch_Aottg2UI_Data_GisketchScreenDefinition__UsesCachedLifecycle
               (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this,MethodInfo *method)

{
  return (__this->fields).lifecycle != 1;
}


// Gisketch.Aottg2UI.Data.GisketchScreenDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Data_GisketchScreenDefinition___ctor (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Data_GisketchScreenDefinition___ctor(Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


