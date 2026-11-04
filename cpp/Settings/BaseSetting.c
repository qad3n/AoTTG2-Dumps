// Type: Settings.BaseSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/BaseSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetting.cs
// --------------------------------

// Settings.BaseSetting$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_BaseSetting__GetDefaultValue (Settings_BaseSetting_o* __this, const MethodInfo* method);
// 0x18059b2e0

Il2CppObject*
Settings_BaseSetting__GetDefaultValue(Settings_BaseSetting_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// Settings.BaseSetting$$SerializeToJsonString
// il2cpp: System_String_o* Settings_BaseSetting__SerializeToJsonString (Settings_BaseSetting_o* __this, const MethodInfo* method);
// 0x181f0ec10

System_String_o *
Settings_BaseSetting__SerializeToJsonString(Settings_BaseSetting_o *__this,MethodInfo *method)

{
  longlong *plVar1;
  System_String_o *pSVar2;
  
  plVar1 = (longlong *)
           (*(__this->klass->vtable)._5_unknown.methodPtr)(__this,(__this->klass->vtable)._5_unknown.method);
  if (plVar1 != (longlong *)0x0) {
    pSVar2 = (System_String_o *)(**(code **)(*plVar1 + 0x318))(plVar1,4,*(undefined8 *)(*plVar1 + 800));
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Settings.BaseSetting$$DeserializeFromJsonString
// il2cpp: void Settings_BaseSetting__DeserializeFromJsonString (Settings_BaseSetting_o* __this, System_String_o* json, const MethodInfo* method);
// 0x181f0ebd0

void Settings_BaseSetting__DeserializeFromJsonString
               (Settings_BaseSetting_o *__this,System_String_o *json,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  
  pSVar1 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._6_unknown.methodPtr)(__this,pSVar1,(__this->klass->vtable)._6_unknown.method);
  return;
}


// Settings.BaseSetting$$Copy
// il2cpp: void Settings_BaseSetting__Copy (Settings_BaseSetting_o* __this, Settings_BaseSetting_o* other, const MethodInfo* method);
// 0x181f0eb80

void Settings_BaseSetting__Copy
               (Settings_BaseSetting_o *__this,Settings_BaseSetting_o *other,MethodInfo *method)

{
  undefined8 uVar1;
  
  if (other != (Settings_BaseSetting_o *)0x0) {
    uVar1 = (*(other->klass->vtable)._5_unknown.methodPtr)(other,(other->klass->vtable)._5_unknown.method);
    (*(__this->klass->vtable)._6_unknown.methodPtr)(__this,uVar1,(__this->klass->vtable)._6_unknown.method);
    return;
  }
  ThrowNullReferenceException();
}


// Settings.BaseSetting$$.ctor
// il2cpp: void Settings_BaseSetting___ctor (Settings_BaseSetting_o* __this, const MethodInfo* method);
// 0x181f0ec50

void Settings_BaseSetting___ctor(Settings_BaseSetting_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_InspectorSettingMetadata_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  
  if (Il2CppMethodInitialized_18434547f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InspectorSettingMetadata);
    Il2CppMethodInitialized_18434547f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InspectorSettingMetadata);
  if (Il2CppMethodInitialized_184345480 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184345480 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this_00->fields).Tooltip = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Tooltip,pSVar1);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this_00->fields).Dropbox = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Dropbox,__this_01);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this_00->fields).Header = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Header,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this_00->fields).GroupId = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).GroupId,pSVar1);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this_00->fields).GroupHeader = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).GroupHeader,pSVar1);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).InspectorMetadata = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InspectorMetadata,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


