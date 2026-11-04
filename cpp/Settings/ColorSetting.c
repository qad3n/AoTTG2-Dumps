// Type: Settings.ColorSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ColorSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ColorSetting.cs
// --------------------------------

// Settings.ColorSetting$$.ctor
// il2cpp: void Settings_ColorSetting___ctor (Settings_ColorSetting_o* __this, const MethodInfo* method);
// 0x181f12100

void Settings_ColorSetting___ctor(Settings_ColorSetting_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_18434548d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor_4095e08);
    Il2CppMethodInitialized_18434548d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_00,0xff,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_Color255_ctor_4095e08);
  return;
}


// Settings.ColorSetting$$.ctor
// il2cpp: void Settings_ColorSetting___ctor (Settings_ColorSetting_o* __this, Utility_Color255_o* defaultValue, int32_t minAlpha, const MethodInfo* method);
// 0x181f12060

void Settings_ColorSetting___ctor_1f12060
               (Settings_ColorSetting_o *__this,Utility_Color255_o *defaultValue,int32_t minAlpha,
               MethodInfo *method)

{
  Settings_ColorSetting_c *pSVar1;
  Utility_Color255_o *value;
  
  if (Il2CppMethodInitialized_18434548e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_18434548e = '\x01';
  }
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  pSVar1 = __this->klass;
  (__this->fields).MinAlpha = minAlpha;
  value = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (__this,defaultValue,(pSVar1->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue,value);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)(__this->fields).DefaultValue,
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  return;
}


// Settings.ColorSetting$$SanitizeValue
// il2cpp: Utility_Color255_o* Settings_ColorSetting__SanitizeValue (Settings_ColorSetting_o* __this, Utility_Color255_o* value, const MethodInfo* method);
// 0x181f11e20

Utility_Color255_o *
Settings_ColorSetting__SanitizeValue
          (Settings_ColorSetting_o *__this,Utility_Color255_o *value,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (value != (Utility_Color255_o *)0x0) {
    iVar3 = (value->fields).R;
    if (iVar3 < 0x100) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0xff;
    }
    iVar1 = (value->fields).G;
    (value->fields).R = iVar3;
    if (iVar1 < 0x100) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0xff;
    }
    (value->fields).G = iVar1;
    iVar3 = (value->fields).B;
    if (iVar3 < 0x100) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0xff;
    }
    iVar1 = (value->fields).A;
    (value->fields).B = iVar3;
    iVar3 = (__this->fields).MinAlpha;
    if (((iVar1 < iVar3) || (iVar2 = 0xff, iVar1 < 0x100)) && (iVar2 = iVar1, iVar1 < iVar3)) {
      iVar2 = iVar3;
    }
    (value->fields).A = iVar2;
    return value;
  }
  ThrowNullReferenceException();
}


// Settings.ColorSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ColorSetting__SerializeToJsonObject (Settings_ColorSetting_o* __this, const MethodInfo* method);
// 0x181f11eb0

SimpleJSONFixed_JSONNode_o *
Settings_ColorSetting__SerializeToJsonObject(Settings_ColorSetting_o *__this,MethodInfo *method)

{
  int iVar1;
  Utility_Color255_o *pUVar2;
  SimpleJSONFixed_JSONArray_o *__this_00;
  SimpleJSONFixed_JSONNumber_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434548f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_18434548f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._value;
  if (pUVar2 != (Utility_Color255_o *)0x0) {
    iVar1 = (pUVar2->fields).R;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
    SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)iVar1,(MethodInfo *)0x0);
    if (__this_00 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      (*(__this_00->klass->vtable)._21_Add.methodPtr)
                (__this_00,(SimpleJSONFixed_JSONNode_o *)pSVar3,(__this_00->klass->vtable)._21_Add.method);
      pUVar2 = (__this->fields)._value;
      if (pUVar2 != (Utility_Color255_o *)0x0) {
        iVar1 = (pUVar2->fields).G;
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
        SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)iVar1,(MethodInfo *)0x0);
        (*(__this_00->klass->vtable)._21_Add.methodPtr)
                  (__this_00,(SimpleJSONFixed_JSONNode_o *)pSVar3,(__this_00->klass->vtable)._21_Add.method);
        pUVar2 = (__this->fields)._value;
        if (pUVar2 != (Utility_Color255_o *)0x0) {
          iVar1 = (pUVar2->fields).B;
          pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
          SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)iVar1,(MethodInfo *)0x0);
          (*(__this_00->klass->vtable)._21_Add.methodPtr)
                    (__this_00,(SimpleJSONFixed_JSONNode_o *)pSVar3,(__this_00->klass->vtable)._21_Add.method)
          ;
          pUVar2 = (__this->fields)._value;
          if (pUVar2 != (Utility_Color255_o *)0x0) {
            iVar1 = (pUVar2->fields).A;
            pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
            SimpleJSONFixed_JSONNumber___ctor(pSVar3,(double)iVar1,(MethodInfo *)0x0);
            (*(__this_00->klass->vtable)._21_Add.methodPtr)
                      (__this_00,(SimpleJSONFixed_JSONNode_o *)pSVar3,
                       (__this_00->klass->vtable)._21_Add.method);
            return (SimpleJSONFixed_JSONNode_o *)__this_00;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.ColorSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_ColorSetting__DeserializeFromJsonObject (Settings_ColorSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f11c70

void Settings_ColorSetting__DeserializeFromJsonObject
               (Settings_ColorSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t tryStart;
  int32_t tryEnd;
  int32_t finallyStart;
  int32_t finallyEnd;
  SimpleJSONFixed_JSONArray_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_184345490 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_184345490 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(json->klass->vtable)._45_get_AsArray.methodPtr)
                       (json,(json->klass->vtable)._45_get_AsArray.method);
    if (pSVar1 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                         (pSVar1,0,(pSVar1->klass->vtable)._5_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        tryStart = (**(code **)((longlong)pSVar2->klass + 0x368))
                             (pSVar2,*(undefined8 *)((longlong)pSVar2->klass + 0x370));
        pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                           (pSVar1,1,(pSVar1->klass->vtable)._5_get_Item.method);
        if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          tryEnd = (**(code **)((longlong)pSVar2->klass + 0x368))
                             (pSVar2,*(undefined8 *)((longlong)pSVar2->klass + 0x370));
          pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                             (pSVar1,2,(pSVar1->klass->vtable)._5_get_Item.method);
          if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            finallyStart = (**(code **)((longlong)pSVar2->klass + 0x368))
                                     (pSVar2,*(undefined8 *)((longlong)pSVar2->klass + 0x370));
            pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                               (pSVar1,3,(pSVar1->klass->vtable)._5_get_Item.method);
            if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              finallyEnd = (**(code **)((longlong)pSVar2->klass + 0x368))
                                     (pSVar2,*(undefined8 *)((longlong)pSVar2->klass + 0x370));
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
              Utility_Color255___ctor
                        ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_00,tryStart,tryEnd,
                         finallyStart,finallyEnd,(MethodInfo *)0x0);
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
                         (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


