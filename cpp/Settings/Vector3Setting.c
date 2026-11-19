// Type: Settings.Vector3Setting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/Vector3Setting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/Vector3Setting.cs
// --------------------------------

// Settings.Vector3Setting$$.ctor
// il2cpp: void Settings_Vector3Setting___ctor (Settings_Vector3Setting_o* __this, const MethodInfo* method);
// 0x5c7d080

void Settings_Vector3Setting___ctor(Settings_Vector3Setting_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754798e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_ctor_719ee00);
    Il2CppMethodInitialized_0754798e = '\x01';
  }
  Settings_TypedSetting_Vector3____ctor_42da500
            ((Settings_TypedSetting_Vector3__o *)__this,(UnityEngine_Vector3_o)ZEXT412(0),
             (MethodInfo_42DA500 *)MethodInfo_Settings_TypedSetting_Vector3_ctor_719ee00);
  return;
}


// Settings.Vector3Setting$$.ctor
// il2cpp: void Settings_Vector3Setting___ctor (Settings_Vector3Setting_o* __this, UnityEngine_Vector3_o defaultValue, const MethodInfo* method);
// 0x5c7d0c0

void Settings_Vector3Setting___ctor_5b7d0c0
               (Settings_Vector3Setting_o *__this,UnityEngine_Vector3_o defaultValue,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_o value;
  float local_18;
  
  fVar1 = defaultValue.fields.z;
  if (Il2CppMethodInitialized_0754798f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    Il2CppMethodInitialized_0754798f = '\x01';
  }
  Settings_TypedSetting_Vector3____ctor
            ((Settings_TypedSetting_Vector3__o *)__this,
             (MethodInfo_42DA4F0 *)MethodInfo_Settings_TypedSetting_Vector3_ctor);
  local_18 = defaultValue.fields.x;
  value.fields._0_8_ =
       (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                 (local_18,__this,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue.fields.x = (float)(int)value.fields._0_8_;
  (__this->fields).DefaultValue.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields).DefaultValue.fields.z = fVar1;
  value.fields.z = fVar1;
  Settings_TypedSetting_Vector3___set_Value
            ((Settings_TypedSetting_Vector3__o *)__this,value,
             (MethodInfo_42DA4D0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
  return;
}


// Settings.Vector3Setting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_Vector3Setting__SerializeToJsonObject (Settings_Vector3Setting_o* __this, const MethodInfo* method);
// 0x5c7d150

SimpleJSONFixed_JSONNode_o *
Settings_Vector3Setting__SerializeToJsonObject(Settings_Vector3Setting_o *__this,MethodInfo *method)

{
  float fVar1;
  SimpleJSONFixed_JSONArray_o *__this_00;
  SimpleJSONFixed_JSONNumber_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547990 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    Il2CppMethodInitialized_07547990 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
  fVar1 = (__this->fields)._value.fields.x;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(pSVar2,(double)fVar1,(MethodInfo *)0x0);
  if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    ThrowNullReferenceException();
  }
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


// Settings.Vector3Setting$$DeserializeFromJsonObject
// il2cpp: void Settings_Vector3Setting__DeserializeFromJsonObject (Settings_Vector3Setting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5c7d2a0

void Settings_Vector3Setting__DeserializeFromJsonObject
               (Settings_Vector3Setting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  SimpleJSONFixed_JSONArray_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  undefined4 uVar3;
  float fVar4;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07547991 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    Il2CppMethodInitialized_07547991 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(json->klass->vtable)._45_get_AsArray.methodPtr)
                       (json,(json->klass->vtable)._45_get_AsArray.method);
    if (pSVar1 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                         (pSVar1,0,(pSVar1->klass->vtable)._5_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        value.fields.x =
             (**(code **)((long)pSVar2->klass + 0x388))(pSVar2,*(undefined8 *)((long)pSVar2->klass + 0x390));
        pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                           (pSVar1,1,(pSVar1->klass->vtable)._5_get_Item.method);
        if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          uVar3 = (**(code **)((long)pSVar2->klass + 0x388))
                            (pSVar2,*(undefined8 *)((long)pSVar2->klass + 0x390));
          pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                             (pSVar1,2,(pSVar1->klass->vtable)._5_get_Item.method);
          if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            fVar4 = (float)(**(code **)((long)pSVar2->klass + 0x388))
                                     (pSVar2,*(undefined8 *)((long)pSVar2->klass + 0x390));
            value.fields.y = (float)uVar3;
            value.fields.z = fVar4;
            Settings_TypedSetting_Vector3___set_Value
                      ((Settings_TypedSetting_Vector3__o *)__this,value,
                       (MethodInfo_42DA4D0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


