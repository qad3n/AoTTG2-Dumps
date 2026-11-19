// Type: Settings.BaseSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/BaseSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetting.cs
// --------------------------------

// Settings.BaseSetting$$GetDefaultValue
// il2cpp: Il2CppObject* Settings_BaseSetting__GetDefaultValue (Settings_BaseSetting_o* __this, const MethodInfo* method);
// 0x5b54ee0

Il2CppObject * Settings_BaseSetting__GetDefaultValue(Settings_BaseSetting_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)0x0;
}


// Settings.BaseSetting$$SerializeToJsonString
// il2cpp: System_String_o* Settings_BaseSetting__SerializeToJsonString (Settings_BaseSetting_o* __this, const MethodInfo* method);
// 0x5b54ef0

System_String_o *
Settings_BaseSetting__SerializeToJsonString(Settings_BaseSetting_o *__this,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  System_String_o *pSVar3;
  
  plVar2 = (long *)(*(__this->klass->vtable)._5_unknown.methodPtr)
                             (__this,(__this->klass->vtable)._5_unknown.method);
  if (plVar2 == (long *)0x0) {
    ThrowNullReferenceException();
  }
  lVar1 = *plVar2;
  pSVar3 = (System_String_o *)
           (**(code **)(lVar1 + 0x318))(plVar2,4,*(undefined8 *)(lVar1 + 800),lVar1,*(code **)(lVar1 + 0x318))
  ;
  return pSVar3;
}


// Settings.BaseSetting$$DeserializeFromJsonString
// il2cpp: void Settings_BaseSetting__DeserializeFromJsonString (Settings_BaseSetting_o* __this, System_String_o* json, const MethodInfo* method);
// 0x5b54f30

void Settings_BaseSetting__DeserializeFromJsonString
               (Settings_BaseSetting_o *__this,System_String_o *json,MethodInfo *method)

{
  Settings_BaseSetting_c *pSVar1;
  Il2CppMethodPointer vtableDispatch;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  pSVar2 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  pSVar1 = __this->klass;
  vtableDispatch = (pSVar1->vtable)._6_unknown.methodPtr;
  (*vtableDispatch)(__this,pSVar2,(pSVar1->vtable)._6_unknown.method,pSVar1,vtableDispatch);
  return;
}


// Settings.BaseSetting$$Copy
// il2cpp: void Settings_BaseSetting__Copy (Settings_BaseSetting_o* __this, Settings_BaseSetting_o* other, const MethodInfo* method);
// 0x5b54f60

void Settings_BaseSetting__Copy
               (Settings_BaseSetting_o *__this,Settings_BaseSetting_o *other,MethodInfo *method)

{
  Settings_BaseSetting_c *pSVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined8 uVar2;
  
  if (other == (Settings_BaseSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar2 = (*(other->klass->vtable)._5_unknown.methodPtr)(other,(other->klass->vtable)._5_unknown.method);
  pSVar1 = __this->klass;
  vtableDispatch = (pSVar1->vtable)._6_unknown.methodPtr;
  (*vtableDispatch)(__this,uVar2,(pSVar1->vtable)._6_unknown.method,pSVar1,vtableDispatch);
  return;
}


// Settings.BaseSetting$$.ctor
// il2cpp: void Settings_BaseSetting___ctor (Settings_BaseSetting_o* __this, const MethodInfo* method);
// 0x5b54fa0

void Settings_BaseSetting___ctor(Settings_BaseSetting_o *__this,MethodInfo *method)

{
  Settings_InspectorSettingMetadata_o *__this_00;
  
  if (Il2CppMethodInitialized_075472cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InspectorSettingMetadata);
    Il2CppMethodInitialized_075472cb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InspectorSettingMetadata);
  Settings_InspectorSettingMetadata___ctor(__this_00,method);
  (__this->fields).InspectorMetadata = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InspectorMetadata);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


