// Type: Settings.ColorSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/ColorSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/ColorSetting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.ColorSetting$$.ctor
// il2cpp: void Settings_ColorSetting___ctor (Settings_ColorSetting_o* __this, const MethodInfo* method);
// 0x3f0d160

void Settings_ColorSetting___ctor(Settings_ColorSetting_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (DAT_05703c71 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    DAT_05703c71 = '\x01';
  }
  __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(__this_00,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,MethodInfo_TypedSetting_1_Utility_Color255);
  return;
}


// Settings.ColorSetting$$.ctor
// il2cpp: void Settings_ColorSetting___ctor (Settings_ColorSetting_o* __this, Utility_Color255_o* defaultValue, int32_t minAlpha, const MethodInfo* method);
// 0x3f0b5a0

void Settings_ColorSetting___ctor
               (Settings_ColorSetting_o *__this,Utility_Color255_o *defaultValue,int32_t minAlpha,
               MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)__this,MethodInfo_TypedSetting_1_Utility_Color255);
  (__this->fields).MinAlpha = minAlpha;
  pUVar1 = (Utility_Color255_o *)
           (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                     (__this,defaultValue,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = pUVar1;
  il2cpp_runtime_glue(&__this->fields,pUVar1);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)(__this->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  return;
}


// Settings.ColorSetting$$SanitizeValue
// il2cpp: Utility_Color255_o* Settings_ColorSetting__SanitizeValue (Settings_ColorSetting_o* __this, Utility_Color255_o* value, const MethodInfo* method);
// 0x3f0d1e0

Utility_Color255_o *
Settings_ColorSetting__SanitizeValue
          (Settings_ColorSetting_o *__this,Utility_Color255_o *value,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (value != (Utility_Color255_o *)0x0) {
    iVar1 = (value->fields).R;
    iVar2 = (value->fields).G;
    if (0xff < iVar1) {
      iVar1 = 0xff;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    (value->fields).R = iVar1;
    if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    (value->fields).G = iVar2;
    iVar1 = (value->fields).B;
    if (0xff < iVar1) {
      iVar1 = 0xff;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    (value->fields).B = iVar1;
    iVar1 = (value->fields).A;
    iVar2 = (__this->fields).MinAlpha;
    iVar3 = 0xff;
    if (iVar1 < 0x100) {
      iVar3 = iVar1;
    }
    if (iVar1 < iVar2) {
      iVar3 = iVar2;
    }
    (value->fields).A = iVar3;
    return value;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ColorSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ColorSetting__SerializeToJsonObject (Settings_ColorSetting_o* __this, const MethodInfo* method);
// 0x3f0d250

SimpleJSONFixed_JSONNode_o *
Settings_ColorSetting__SerializeToJsonObject(Settings_ColorSetting_o *__this,MethodInfo *method)

{
  int iVar1;
  Utility_Color255_o *pUVar2;
  SimpleJSONFixed_JSONArray_o *__this_00;
  SimpleJSONFixed_JSONNumber_o *pSVar3;
  
  if (DAT_05703c73 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    DAT_05703c73 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._value;
  if (pUVar2 != (Utility_Color255_o *)0x0) {
    iVar1 = (pUVar2->fields).R;
    pSVar3 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
    SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)iVar1,(MethodInfo *)0x0);
    if (__this_00 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      (*(__this_00->klass->vtable)._21_Add.methodPtr)
                (__this_00,pSVar3,(__this_00->klass->vtable)._21_Add.method);
      pUVar2 = (__this->fields)._value;
      if (pUVar2 != (Utility_Color255_o *)0x0) {
        iVar1 = (pUVar2->fields).G;
        pSVar3 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
        SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)iVar1,(MethodInfo *)0x0);
        (*(__this_00->klass->vtable)._21_Add.methodPtr)
                  (__this_00,pSVar3,(__this_00->klass->vtable)._21_Add.method);
        pUVar2 = (__this->fields)._value;
        if (pUVar2 != (Utility_Color255_o *)0x0) {
          iVar1 = (pUVar2->fields).B;
          pSVar3 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
          SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)iVar1,(MethodInfo *)0x0);
          (*(__this_00->klass->vtable)._21_Add.methodPtr)
                    (__this_00,pSVar3,(__this_00->klass->vtable)._21_Add.method);
          pUVar2 = (__this->fields)._value;
          if (pUVar2 != (Utility_Color255_o *)0x0) {
            iVar1 = (pUVar2->fields).A;
            pSVar3 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
            SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)iVar1,(MethodInfo *)0x0);
            (*(__this_00->klass->vtable)._21_Add.methodPtr)
                      (__this_00,pSVar3,(__this_00->klass->vtable)._21_Add.method);
            return (SimpleJSONFixed_JSONNode_o *)__this_00;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ColorSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_ColorSetting__DeserializeFromJsonObject (Settings_ColorSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f0d400

void Settings_ColorSetting__DeserializeFromJsonObject
               (Settings_ColorSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  long *plVar1;
  long *plVar2;
  Utility_Color255_o *__this_00;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703c74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c74 = '\x01';
    method = extraout_RDX;
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar1 = (long *)(*(json->klass->vtable)._45_get_AsArray.methodPtr)
                               (json,(json->klass->vtable)._45_get_AsArray.method,method);
    if (plVar1 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar1 + 0x188))(plVar1,0,*(undefined8 *)(*plVar1 + 400));
      if (plVar2 != (long *)0x0) {
        r = (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)(*plVar2 + 0x370));
        plVar2 = (long *)(**(code **)(*plVar1 + 0x188))(plVar1,1,*(undefined8 *)(*plVar1 + 400));
        if (plVar2 != (long *)0x0) {
          g = (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)(*plVar2 + 0x370));
          plVar2 = (long *)(**(code **)(*plVar1 + 0x188))(plVar1,2,*(undefined8 *)(*plVar1 + 400));
          if (plVar2 != (long *)0x0) {
            b = (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)(*plVar2 + 0x370));
            plVar1 = (long *)(**(code **)(*plVar1 + 0x188))(plVar1,3,*(undefined8 *)(*plVar1 + 400))
            ;
            if (plVar1 != (long *)0x0) {
              a = (**(code **)(*plVar1 + 0x368))(plVar1,*(undefined8 *)(*plVar1 + 0x370));
              __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
              Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
              Settings_TypedSetting<object>__set_Value
                        ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,MethodInfo_Void_set_Value
                        );
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


