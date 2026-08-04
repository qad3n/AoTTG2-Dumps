// Type: Settings.Vector3Setting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/Vector3Setting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/Vector3Setting.cs
// --------------------------------

// Settings.Vector3Setting$$.ctor
// il2cpp: void Settings_Vector3Setting___ctor (Settings_Vector3Setting_o* __this, const MethodInfo* method);
// 0x41fdb00

void Settings_Vector3Setting___ctor(Settings_Vector3Setting_o *__this,MethodInfo *method)

{
  if (g_data_057ad8c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_UnityEngine_Vector3);
    g_data_057ad8c8 = '\x01';
  }
  Settings_TypedSetting_Vector3____ctor_2a242e0
            ((Settings_TypedSetting_Vector3__o *)__this,(UnityEngine_Vector3_o)ZEXT412(0),_DAT_05597ab8);
  return;
}


// Settings.Vector3Setting$$.ctor
// il2cpp: void Settings_Vector3Setting___ctor (Settings_Vector3Setting_o* __this, UnityEngine_Vector3_o defaultValue, const MethodInfo* method);
// 0x4203e40

void Settings_Vector3Setting___ctor_4103e40
               (Settings_Vector3Setting_o *__this,UnityEngine_Vector3_o defaultValue,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_o value;
  float local_18;
  
  fVar1 = defaultValue.fields.z;
  if (g_data_057ad8c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad8c9 = '\x01';
  }
  Settings_TypedSetting_Vector3____ctor((Settings_TypedSetting_Vector3__o *)__this,MethodInfo_TypedSetting_1_UnityEngine_Vector3);
  local_18 = defaultValue.fields.x;
  value.fields._0_8_ =
       (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                 (local_18,__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue.fields.x = (float)(int)value.fields._0_8_;
  (__this->fields).DefaultValue.fields.y = (float)(int)((ulong)value.fields._0_8_ >> 0x20);
  (__this->fields).DefaultValue.fields.z = fVar1;
  value.fields.z = fVar1;
  Settings_TypedSetting_Vector3___set_Value((Settings_TypedSetting_Vector3__o *)__this,value,MethodInfo_Void_set_Value);
  return;
}


// Settings.Vector3Setting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_Vector3Setting__SerializeToJsonObject (Settings_Vector3Setting_o* __this, const MethodInfo* method);
// 0x4203ed0

SimpleJSONFixed_JSONNode_o *
Settings_Vector3Setting__SerializeToJsonObject(Settings_Vector3Setting_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  SimpleJSONFixed_JSONArray_o *__this_00;
  Settings_TypedSetting_Vector3__o *__this_01;
  SimpleJSONFixed_JSONNumber_o *pSVar2;
  long *plVar3;
  long *plVar4;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  Settings_TypedSetting_Vector3__o *__this_02;
  undefined4 uVar5;
  float fVar6;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ad8ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Value);
    g_data_057ad8ca = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
  fVar6 = (__this->fields)._value.fields.x;
  __this_01 = (Settings_TypedSetting_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  plVar3 = (long *)0x0;
  __this_02 = __this_01;
  SimpleJSONFixed_JSONNumber___ctor((SimpleJSONFixed_JSONNumber_o *)__this_01,(double)fVar6,(MethodInfo *)0x0)
  ;
  if (__this_00 != (SimpleJSONFixed_JSONArray_o *)0x0) {
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,__this_01,(__this_00->klass->vtable)._21_Add.method);
    uVar1 = (__this->fields)._value.fields.y;
    pSVar2 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
    SimpleJSONFixed_JSONNumber___ctor(pSVar2,(double)(float)uVar1,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,pSVar2,(__this_00->klass->vtable)._21_Add.method);
    fVar6 = (__this->fields)._value.fields.z;
    pSVar2 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
    SimpleJSONFixed_JSONNumber___ctor(pSVar2,(double)fVar6,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,pSVar2,(__this_00->klass->vtable)._21_Add.method);
    return (SimpleJSONFixed_JSONNode_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad8cb = '\x01';
  }
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x408))(plVar3,*(undefined8 *)(*plVar3 + 0x410));
    if (plVar3 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar3 + 0x188))(plVar3,0,*(undefined8 *)(*plVar3 + 400));
      if (plVar4 != (long *)0x0) {
        value.fields.x = (**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
        plVar4 = (long *)(**(code **)(*plVar3 + 0x188))(plVar3,1,*(undefined8 *)(*plVar3 + 400));
        if (plVar4 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
          plVar3 = (long *)(**(code **)(*plVar3 + 0x188))(plVar3,2,*(undefined8 *)(*plVar3 + 400));
          if (plVar3 != (long *)0x0) {
            fVar6 = (float)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
            value.fields.y = (float)uVar5;
            value.fields.z = fVar6;
            Settings_TypedSetting_Vector3___set_Value(__this_02,value,MethodInfo_Void_set_Value);
            return extraout_RAX;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8cc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Sound.json");
    g_data_057ad8cc = '\x01';
  }
  return "Sound.json";
}


// Settings.Vector3Setting$$DeserializeFromJsonObject
// il2cpp: void Settings_Vector3Setting__DeserializeFromJsonObject (Settings_Vector3Setting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x4204020

void Settings_Vector3Setting__DeserializeFromJsonObject
               (Settings_Vector3Setting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  long *plVar1;
  long *plVar2;
  MethodInfo *extraout_RDX;
  undefined4 uVar3;
  float fVar4;
  UnityEngine_Vector3_o value;
  
  if (g_data_057ad8cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ad8cb = '\x01';
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
            Settings_TypedSetting_Vector3___set_Value
                      ((Settings_TypedSetting_Vector3__o *)__this,value,MethodInfo_Void_set_Value);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8cc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Sound.json");
    g_data_057ad8cc = '\x01';
  }
  return;
}


