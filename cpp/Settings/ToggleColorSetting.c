// Type: Settings.ToggleColorSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ToggleColorSetting.cs
// Prior real C# source: none
// --------------------------------

// Settings.ToggleColorSetting$$.ctor
// il2cpp: void Settings_ToggleColorSetting___ctor (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x5c7cac0

void Settings_ToggleColorSetting___ctor(Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  Utility_Color255_o *__this_01;
  Settings_ColorSetting_o *__this_02;
  
  if (Il2CppMethodInitialized_0754798a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    Il2CppMethodInitialized_0754798a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(__this_00,false,(MethodInfo *)0x0);
  (__this->fields).Enabled = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Enabled);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(__this_01,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_5a451c0(__this_02,__this_01,0,(MethodInfo *)0x0);
  (__this->fields).Color = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Color);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.ToggleColorSetting$$.ctor
// il2cpp: void Settings_ToggleColorSetting___ctor (Settings_ToggleColorSetting_o* __this, bool defaultEnabled, Utility_Color255_o* defaultColor, const MethodInfo* method);
// 0x5c7cba0

void Settings_ToggleColorSetting___ctor_5b7cba0
               (Settings_ToggleColorSetting_o *__this,bool defaultEnabled,Utility_Color255_o *defaultColor,
               MethodInfo *method)

{
  Settings_BoolSetting_o **targetAddress;
  Settings_ColorSetting_o **targetAddress_00;
  Settings_BoolSetting_o *pSVar1;
  Utility_Color255_o *__this_00;
  Settings_ColorSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754798b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    Il2CppMethodInitialized_0754798b = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar1,false,(MethodInfo *)0x0);
  targetAddress = &(__this->fields).Enabled;
  (__this->fields).Enabled = pSVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(__this_00,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_5a451c0(pSVar2,__this_00,0,(MethodInfo *)0x0);
  targetAddress_00 = &(__this->fields).Color;
  (__this->fields).Color = pSVar2;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar1,defaultEnabled,(MethodInfo *)0x0);
  (__this->fields).Enabled = pSVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_5a451c0(pSVar2,defaultColor,0,(MethodInfo *)0x0);
  (__this->fields).Color = pSVar2;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  return;
}


// Settings.ToggleColorSetting$$SetDefault
// il2cpp: void Settings_ToggleColorSetting__SetDefault (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x5c7cd00

void Settings_ToggleColorSetting__SetDefault(Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  
  pSVar1 = (__this->fields).Enabled;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    (*(pSVar1->klass->vtable)._4_SetDefault.methodPtr)(pSVar1,(pSVar1->klass->vtable)._4_SetDefault.method);
    pSVar2 = (__this->fields).Color;
    if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
      vtableDispatch = (pSVar2->klass->vtable)._4_SetDefault.methodPtr;
      (*vtableDispatch)
                (pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.ToggleColorSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ToggleColorSetting__SerializeToJsonObject (Settings_ToggleColorSetting_o* __this, const MethodInfo* method);
// 0x5c7cd40

SimpleJSONFixed_JSONNode_o *
Settings_ToggleColorSetting__SerializeToJsonObject(Settings_ToggleColorSetting_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (Il2CppMethodInitialized_0754798c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    Il2CppMethodInitialized_0754798c = '\x01';
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
// 0x5c7ce20

void Settings_ToggleColorSetting__DeserializeFromJsonObject
               (Settings_ToggleColorSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONObject_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754798d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    Il2CppMethodInitialized_0754798d = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(json,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
label_05c7ce98:
    (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
    return;
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar3 = (*(json->klass->vtable)._16_get_IsArray.methodPtr)
                      (json,(json->klass->vtable)._16_get_IsArray.method);
    if (bVar3) {
      pSVar1 = (__this->fields).Color;
      if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
        (*(pSVar1->klass->vtable)._6_DeserializeFromJsonObject.methodPtr)
                  (pSVar1,json,(pSVar1->klass->vtable)._6_DeserializeFromJsonObject.method);
        pSVar2 = (__this->fields).Enabled;
        if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar2,true,
                     (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
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
      if (bVar3) goto label_05c7ce98;
      if (a != (SimpleJSONFixed_JSONObject_o *)0x0) {
        pSVar4 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                           (a,"Enabled",(a->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar2 = (__this->fields).Enabled;
          pSVar4 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                             (a,"Enabled",(a->klass->vtable)._7_get_Item.method);
          if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto label_05c7d073;
          (*(pSVar2->klass->vtable)._6_DeserializeFromJsonObject.methodPtr)
                    (pSVar2,pSVar4,(pSVar2->klass->vtable)._6_DeserializeFromJsonObject.method);
        }
        pSVar4 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                           (a,"Color",(a->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pSVar1 = (__this->fields).Color;
        pSVar4 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                           (a,"Color",(a->klass->vtable)._7_get_Item.method);
        if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
          (*(pSVar1->klass->vtable)._6_DeserializeFromJsonObject.methodPtr)
                    (pSVar1,pSVar4,(pSVar1->klass->vtable)._6_DeserializeFromJsonObject.method);
          return;
        }
      }
    }
  }
label_05c7d073:
  ThrowNullReferenceException();
}


