// Type: Settings.ToggleColorSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ToggleColorSetting.cs
// Prior real C# source: none
// --------------------------------

// Settings.ToggleColorSetting$$.ctor
// il2cpp: void Settings_ToggleColorSetting___ctor (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x181f29da0

void Settings_ToggleColorSetting___ctor(Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  Utility_Color255_o *defaultValue;
  Settings_ColorSetting_o *__this_01;
  
  if (Il2CppMethodInitialized_1843454bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    Il2CppMethodInitialized_1843454bd = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)__this_00,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).Enabled = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Enabled,__this_00);
  defaultValue = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)defaultValue,0xff,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(__this_01,defaultValue,0,(MethodInfo *)0x0);
  (__this->fields).Color = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Color,__this_01);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.ToggleColorSetting$$.ctor
// il2cpp: void Settings_ToggleColorSetting___ctor (Settings_ToggleColorSetting_o* __this, bool defaultEnabled, Utility_Color255_o* defaultColor, const MethodInfo* method);
// 0x181f29c10

void Settings_ToggleColorSetting___ctor_1f29c10
               (Settings_ToggleColorSetting_o *__this,bool defaultEnabled,Utility_Color255_o *defaultColor,
               MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Utility_Color255_o *defaultValue;
  Settings_ColorSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843454be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    Il2CppMethodInitialized_1843454be = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar1,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).Enabled = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Enabled,pSVar1);
  defaultValue = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)defaultValue,0xff,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar2,defaultValue,0,(MethodInfo *)0x0);
  (__this->fields).Color = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Color,pSVar2);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar1,defaultEnabled,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).Enabled = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Enabled,pSVar1);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar2,defaultColor,0,(MethodInfo *)0x0);
  (__this->fields).Color = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Color,pSVar2);
  return;
}


// Settings.ToggleColorSetting$$SetDefault
// il2cpp: void Settings_ToggleColorSetting__SetDefault (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x181f29bc0

void Settings_ToggleColorSetting__SetDefault(Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  
  pSVar1 = (__this->fields).Enabled;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar2 = (__this->fields).Color;
    if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
      (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.ToggleColorSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ToggleColorSetting__SerializeToJsonObject (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x181f29ad0

SimpleJSONFixed_JSONNode_o *
Settings_ToggleColorSetting__SerializeToJsonObject(Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843454bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    Il2CppMethodInitialized_1843454bf = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).Enabled;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    pSVar3 = (*(pSVar1->klass->vtable)._5_SerializeToJsonObject.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._5_SerializeToJsonObject.method);
    if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_00->klass->vtable)._20_Add.methodPtr)
                (__this_00,"Enabled",pSVar3,(__this_00->klass->vtable)._20_Add.method);
      pSVar2 = (__this->fields).Color;
      if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
        pSVar3 = (*(pSVar2->klass->vtable)._5_SerializeToJsonObject.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._5_SerializeToJsonObject.method);
        (*(__this_00->klass->vtable)._20_Add.methodPtr)
                  (__this_00,"Color",pSVar3,(__this_00->klass->vtable)._20_Add.method);
        return (SimpleJSONFixed_JSONNode_o *)__this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.ToggleColorSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_ToggleColorSetting__DeserializeFromJsonObject (Settings_ToggleColorSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f29840

void Settings_ToggleColorSetting__DeserializeFromJsonObject
               (Settings_ToggleColorSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONObject_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  
  if (Il2CppMethodInitialized_1843454c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    Il2CppMethodInitialized_1843454c0 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(json,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
    return;
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar3 = (*(json->klass->vtable)._16_get_IsArray.methodPtr)
                      (json,(json->klass->vtable)._16_get_IsArray.method);
    if (bVar3) {
      pSVar2 = (__this->fields).Color;
      if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
        (*(pSVar2->klass->vtable)._6_DeserializeFromJsonObject.methodPtr)
                  (pSVar2,json,(pSVar2->klass->vtable)._6_DeserializeFromJsonObject.method);
        pSVar1 = (__this->fields).Enabled;
        if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar1,true,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          return;
        }
      }
    }
    else {
      a = (*(json->klass->vtable)._46_get_AsObject.methodPtr)
                    (json,(json->klass->vtable)._46_get_AsObject.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        (*(__this->klass->vtable)._4_SetDefault.methodPtr)
                  (__this,(__this->klass->vtable)._4_SetDefault.method);
        return;
      }
      if (a != (SimpleJSONFixed_JSONObject_o *)0x0) {
        pSVar4 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"Enabled");
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar1 = (__this->fields).Enabled;
          pSVar4 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"Enabled");
          if (pSVar1 == (Settings_BoolSetting_o *)0x0) goto label_181f29ac1;
          (*(pSVar1->klass->vtable)._6_DeserializeFromJsonObject.methodPtr)
                    (pSVar1,(SimpleJSONFixed_JSONNode_o *)pSVar4,
                     (pSVar1->klass->vtable)._6_DeserializeFromJsonObject.method);
        }
        pSVar4 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"Color");
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar2 = (__this->fields).Color;
          pSVar4 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"Color");
          if (pSVar2 == (Settings_ColorSetting_o *)0x0) goto label_181f29ac1;
          (*(pSVar2->klass->vtable)._6_DeserializeFromJsonObject.methodPtr)
                    (pSVar2,(SimpleJSONFixed_JSONNode_o *)pSVar4,
                     (pSVar2->klass->vtable)._6_DeserializeFromJsonObject.method);
        }
        return;
      }
    }
  }
label_181f29ac1:
  ThrowNullReferenceException();
}


