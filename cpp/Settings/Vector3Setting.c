// Type: Settings.Vector3Setting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/Vector3Setting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/Vector3Setting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.Vector3Setting$$.ctor
// il2cpp: void Settings_Vector3Setting___ctor (Settings_Vector3Setting_o* __this, const MethodInfo* method);
// 0x3f11c30

void Settings_Vector3Setting___ctor(Settings_Vector3Setting_o *__this,MethodInfo *method)

{
  if (DAT_05703ca0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_UnityEngine_Vector3);
    DAT_05703ca0 = '\x01';
  }
  Settings_TypedSetting<Vector3>___ctor
            ((Settings_TypedSetting_Vector3__o *)__this,(UnityEngine_Vector3_o)ZEXT412(0),
             MethodInfo_TypedSetting_1_UnityEngine_Vector3);
  return;
}


// Settings.Vector3Setting$$.ctor
// il2cpp: void Settings_Vector3Setting___ctor (Settings_Vector3Setting_o* __this, UnityEngine_Vector3_o defaultValue, const MethodInfo* method);
// 0x3f11c70

void Settings_Vector3Setting___ctor
               (Settings_Vector3Setting_o *__this,UnityEngine_Vector3_o defaultValue,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_o value;
  float local_18;
  
  fVar1 = defaultValue.fields.z;
  if (DAT_05703ca1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703ca1 = '\x01';
  }
  Settings_TypedSetting<Vector3>___ctor((Settings_TypedSetting_Vector3__o *)__this,MethodInfo_TypedSetting_1_UnityEngine_Vector3);
  local_18 = defaultValue.fields.x;
  value.fields._0_8_ =
       (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                 (local_18,__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue.fields.x = (float)(int)value.fields._0_8_;
  (__this->fields).DefaultValue.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields).DefaultValue.fields.z = fVar1;
  value.fields.z = fVar1;
  Settings_TypedSetting<Vector3>__set_Value
            ((Settings_TypedSetting_Vector3__o *)__this,value,MethodInfo_Void_set_Value);
  return;
}


// Settings.Vector3Setting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_Vector3Setting__SerializeToJsonObject (Settings_Vector3Setting_o* __this, const MethodInfo* method);
// 0x3f11d00

SimpleJSONFixed_JSONNode_o *
Settings_Vector3Setting__SerializeToJsonObject(Settings_Vector3Setting_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  SimpleJSONFixed_JSONArray_o *__this_00;
  SimpleJSONFixed_JSONNumber_o *pSVar3;
  
  if (DAT_05703ca2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Value);
    DAT_05703ca2 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
  fVar1 = (__this->fields)._value.fields.x;
  pSVar3 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)fVar1,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONArray_o *)0x0) {
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,pSVar3,(__this_00->klass->vtable)._21_Add.method);
    uVar2 = (__this->fields)._value.fields.y;
    pSVar3 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
    SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)(float)uVar2,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,pSVar3,(__this_00->klass->vtable)._21_Add.method);
    fVar1 = (__this->fields)._value.fields.z;
    pSVar3 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
    SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)fVar1,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,pSVar3,(__this_00->klass->vtable)._21_Add.method);
    return (SimpleJSONFixed_JSONNode_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.Vector3Setting$$DeserializeFromJsonObject
// il2cpp: void Settings_Vector3Setting__DeserializeFromJsonObject (Settings_Vector3Setting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f11e50

void Settings_Vector3Setting__DeserializeFromJsonObject
               (Settings_Vector3Setting_o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo *method)

{
  long *plVar1;
  long *plVar2;
  MethodInfo *extraout_RDX;
  undefined4 uVar3;
  float fVar4;
  UnityEngine_Vector3_o value;
  
  if (DAT_05703ca3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703ca3 = '\x01';
    method = extraout_RDX;
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar1 = (long *)(*(json->klass->vtable)._45_get_AsArray.methodPtr)
                               (json,(json->klass->vtable)._45_get_AsArray.method,method);
    if (plVar1 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar1 + 0x188))(plVar1,0,*(undefined8 *)(*plVar1 + 400));
      if (plVar2 != (long *)0x0) {
        value.fields.x = (**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
        plVar2 = (long *)(**(code **)(*plVar1 + 0x188))(plVar1,1,*(undefined8 *)(*plVar1 + 400));
        if (plVar2 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
          plVar1 = (long *)(**(code **)(*plVar1 + 0x188))(plVar1,2,*(undefined8 *)(*plVar1 + 400));
          if (plVar1 != (long *)0x0) {
            fVar4 = (float)(**(code **)(*plVar1 + 0x388))(plVar1,*(undefined8 *)(*plVar1 + 0x390));
            value.fields.y = (float)uVar3;
            value.fields.z = fVar4;
            Settings_TypedSetting<Vector3>__set_Value
                      ((Settings_TypedSetting_Vector3__o *)__this,value,MethodInfo_Void_set_Value);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


