// Type: Settings.Vector3Setting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/Vector3Setting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/Vector3Setting.cs
// --------------------------------

// Settings.Vector3Setting$$.ctor
// il2cpp: void Settings_Vector3Setting___ctor (Settings_Vector3Setting_o* __this, const MethodInfo* method);
// 0x181f2c1d0

void Settings_Vector3Setting___ctor(Settings_Vector3Setting_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843454c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_ctor_4096b20);
    Il2CppMethodInitialized_1843454c1 = '\x01';
  }
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  Settings_TypedSetting_Vector3____ctor_e8f240
            ((Settings_TypedSetting_Vector3__o *)__this,(UnityEngine_Vector3_o *)&local_18,
             (MethodInfo_E8F240 *)MethodInfo_Settings_TypedSetting_Vector3_ctor_4096b20);
  return;
}


// Settings.Vector3Setting$$.ctor
// il2cpp: void Settings_Vector3Setting___ctor (Settings_Vector3Setting_o* __this, UnityEngine_Vector3_o defaultValue, const MethodInfo* method);
// 0x181f2c120

void Settings_Vector3Setting___ctor_1f2c120
               (Settings_Vector3Setting_o *__this,UnityEngine_Vector3_o *defaultValue,MethodInfo *method)

{
  undefined8 *puVar1;
  UnityEngine_Vector3_Fields local_28;
  undefined1 local_18 [16];
  
  if (Il2CppMethodInitialized_1843454c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    Il2CppMethodInitialized_1843454c2 = '\x01';
  }
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_Vector3_ctor);
  local_28.x = (defaultValue->fields).x;
  local_28.y = (defaultValue->fields).y;
  local_28.z = (defaultValue->fields).z;
  puVar1 = (undefined8 *)
           (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                     (local_18,__this,&local_28,(__this->klass->vtable)._11_SanitizeValue.method);
  local_28.z = *(float *)(puVar1 + 1);
  local_28._0_8_ = *puVar1;
  (__this->fields).DefaultValue.fields.x = local_28.x;
  (__this->fields).DefaultValue.fields.y = local_28.y;
  (__this->fields).DefaultValue.fields.z = local_28.z;
  Settings_TypedSetting_Vector3___set_Value
            ((Settings_TypedSetting_Vector3__o *)__this,(UnityEngine_Vector3_o *)&local_28,
             (MethodInfo_E8F4F0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
  return;
}


// Settings.Vector3Setting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_Vector3Setting__SerializeToJsonObject (Settings_Vector3Setting_o* __this, const MethodInfo* method);
// 0x181f2bfe0

SimpleJSONFixed_JSONNode_o *
Settings_Vector3Setting__SerializeToJsonObject(Settings_Vector3Setting_o *__this,MethodInfo *method)

{
  float fVar1;
  SimpleJSONFixed_JSONArray_o *__this_00;
  SimpleJSONFixed_JSONNumber_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843454c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    Il2CppMethodInitialized_1843454c3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
  fVar1 = (__this->fields)._value.fields.x;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(pSVar2,(double)fVar1,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONArray_o *)0x0) {
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,(SimpleJSONFixed_JSONNode_o *)pSVar2,(__this_00->klass->vtable)._21_Add.method);
    fVar1 = (__this->fields)._value.fields.y;
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    SimpleJSONFixed_JSONNumber___ctor(pSVar2,(double)fVar1,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,(SimpleJSONFixed_JSONNode_o *)pSVar2,(__this_00->klass->vtable)._21_Add.method);
    fVar1 = (__this->fields)._value.fields.z;
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    SimpleJSONFixed_JSONNumber___ctor(pSVar2,(double)fVar1,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,(SimpleJSONFixed_JSONNode_o *)pSVar2,(__this_00->klass->vtable)._21_Add.method);
    return (SimpleJSONFixed_JSONNode_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Settings.Vector3Setting$$DeserializeFromJsonObject
// il2cpp: void Settings_Vector3Setting__DeserializeFromJsonObject (Settings_Vector3Setting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f2bea0

void Settings_Vector3Setting__DeserializeFromJsonObject
               (Settings_Vector3Setting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  SimpleJSONFixed_JSONArray_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_1843454c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    Il2CppMethodInitialized_1843454c4 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(json->klass->vtable)._45_get_AsArray.methodPtr)
                       (json,(json->klass->vtable)._45_get_AsArray.method);
    if (pSVar1 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                         (pSVar1,0,(pSVar1->klass->vtable)._5_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        fVar3 = (float)(**(code **)((longlong)pSVar2->klass + 0x388))
                                 (pSVar2,*(undefined8 *)((longlong)pSVar2->klass + 0x390));
        pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                           (pSVar1,1,(pSVar1->klass->vtable)._5_get_Item.method);
        if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          fVar4 = (float)(**(code **)((longlong)pSVar2->klass + 0x388))
                                   (pSVar2,*(undefined8 *)((longlong)pSVar2->klass + 0x390));
          pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                             (pSVar1,2,(pSVar1->klass->vtable)._5_get_Item.method);
          if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            local_38[0].fields.x = fVar3;
            local_38[0].fields.y = fVar4;
            local_38[0].fields.z =
                 (float)(**(code **)((longlong)pSVar2->klass + 0x388))
                                  (pSVar2,*(undefined8 *)((longlong)pSVar2->klass + 0x390));
            Settings_TypedSetting_Vector3___set_Value
                      ((Settings_TypedSetting_Vector3__o *)__this,local_38,
                       (MethodInfo_E8F4F0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


