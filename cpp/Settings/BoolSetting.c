// Type: Settings.BoolSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/BoolSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/BoolSetting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.BoolSetting$$.ctor
// il2cpp: void Settings_BoolSetting___ctor (Settings_BoolSetting_o* __this, const MethodInfo* method);
// 0x3f0d060

void Settings_BoolSetting___ctor(Settings_BoolSetting_o *__this,MethodInfo *method)

{
  if (DAT_05703c6d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Boolean);
    DAT_05703c6d = '\x01';
  }
  Settings_TypedSetting<bool>___ctor((Settings_TypedSetting_bool__o *)__this,0,MethodInfo_TypedSetting_1_System_Boolean);
  return;
}


// Settings.BoolSetting$$.ctor
// il2cpp: void Settings_BoolSetting___ctor (Settings_BoolSetting_o* __this, bool defaultValue, const MethodInfo* method);
// 0x3f08750

void Settings_BoolSetting___ctor
               (Settings_BoolSetting_o *__this,bool_conflict defaultValue,MethodInfo *method)

{
  if (DAT_05703c6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Boolean);
    DAT_05703c6e = '\x01';
  }
  Settings_TypedSetting<bool>___ctor
            ((Settings_TypedSetting_bool__o *)__this,defaultValue & 0xff,MethodInfo_TypedSetting_1_System_Boolean);
  return;
}


// Settings.BoolSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_BoolSetting__DeserializeFromJsonObject (Settings_BoolSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f0d0a0

void Settings_BoolSetting__DeserializeFromJsonObject
               (Settings_BoolSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  
  if (DAT_05703c6f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c6f = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(json->klass->vtable)._39_get_AsBool.methodPtr)
                      (json,(json->klass->vtable)._39_get_AsBool.method);
    Settings_TypedSetting<bool>__set_Value
              ((Settings_TypedSetting_bool__o *)__this,(uint)bVar1,MethodInfo_Void_set_Value);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.BoolSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_BoolSetting__SerializeToJsonObject (Settings_BoolSetting_o* __this, const MethodInfo* method);
// 0x3f0d100

SimpleJSONFixed_JSONNode_o *
Settings_BoolSetting__SerializeToJsonObject(Settings_BoolSetting_o *__this,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONBool_o *__this_00;
  
  if (DAT_05703c70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONBool);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05703c70 = '\x01';
  }
  bVar1 = *(byte *)((long)&(__this->fields).DefaultValue + 1);
  __this_00 = (SimpleJSONFixed_JSONBool_o *)il2cpp_runtime_glue(TypeInfo_JSONBool);
  SimpleJSONFixed_JSONBool___ctor(__this_00,(uint)bVar1,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


