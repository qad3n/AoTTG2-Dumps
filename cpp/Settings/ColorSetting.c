// Type: Settings.ColorSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/ColorSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ColorSetting.cs
// --------------------------------

// Settings.ColorSetting$$.ctor
// il2cpp: void Settings_ColorSetting___ctor (Settings_ColorSetting_o* __this, const MethodInfo* method);
// 0x5b55460

void Settings_ColorSetting___ctor(Settings_ColorSetting_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_075472d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor_719ed88);
    Il2CppMethodInitialized_075472d9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(__this_00,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
             (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_Color255_ctor_719ed88);
  return;
}


// Settings.ColorSetting$$.ctor
// il2cpp: void Settings_ColorSetting___ctor (Settings_ColorSetting_o* __this, Utility_Color255_o* defaultValue, int32_t minAlpha, const MethodInfo* method);
// 0x5b451c0

void Settings_ColorSetting___ctor_5a451c0
               (Settings_ColorSetting_o *__this,Utility_Color255_o *defaultValue,int32_t minAlpha,
               MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (__this->fields).MinAlpha = minAlpha;
  pUVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                     (__this,defaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)(__this->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  return;
}


// Settings.ColorSetting$$SanitizeValue
// il2cpp: Utility_Color255_o* Settings_ColorSetting__SanitizeValue (Settings_ColorSetting_o* __this, Utility_Color255_o* value, const MethodInfo* method);
// 0x5b554e0

Utility_Color255_o *
Settings_ColorSetting__SanitizeValue
          (Settings_ColorSetting_o *__this,Utility_Color255_o *value,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (value == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar5 = (value->fields).R;
  uVar7 = (value->fields).G;
  uVar4 = -(uint)((int)uVar5 < 0xff);
  uVar6 = -(uint)((int)uVar7 < 0xff);
  uVar5 = ~uVar4 & 0xff | uVar5 & uVar4;
  uVar7 = ~uVar6 & 0xff | uVar7 & uVar6;
  (value->fields).R = -(uint)(0 < (int)uVar5) & uVar5;
  (value->fields).G = -(uint)(0 < (int)uVar7) & uVar7;
  iVar2 = (value->fields).B;
  iVar1 = (value->fields).A;
  if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  (value->fields).B = iVar3;
  iVar2 = (__this->fields).MinAlpha;
  iVar3 = 0xff;
  if (iVar1 < 0xff) {
    iVar3 = iVar1;
  }
  if (iVar1 < iVar2) {
    iVar3 = iVar2;
  }
  (value->fields).A = iVar3;
  return value;
}


// Settings.ColorSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ColorSetting__SerializeToJsonObject (Settings_ColorSetting_o* __this, const MethodInfo* method);
// 0x5b55560

SimpleJSONFixed_JSONNode_o *
Settings_ColorSetting__SerializeToJsonObject(Settings_ColorSetting_o *__this,MethodInfo *method)

{
  int iVar1;
  Utility_Color255_o *pUVar2;
  SimpleJSONFixed_JSONArray_o *__this_00;
  SimpleJSONFixed_JSONNumber_o *pSVar3;
  
  if (Il2CppMethodInitialized_075472db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_075472db = '\x01';
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
// 0x5b55710

void Settings_ColorSetting__DeserializeFromJsonObject
               (Settings_ColorSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  SimpleJSONFixed_JSONArray_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_075472dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472dc = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(json->klass->vtable)._45_get_AsArray.methodPtr)
                       (json,(json->klass->vtable)._45_get_AsArray.method);
    if (pSVar1 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                         (pSVar1,0,(pSVar1->klass->vtable)._5_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        r = (**(code **)((long)pSVar2->klass + 0x368))(pSVar2,*(undefined8 *)((long)pSVar2->klass + 0x370));
        pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                           (pSVar1,1,(pSVar1->klass->vtable)._5_get_Item.method);
        if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          g = (**(code **)((long)pSVar2->klass + 0x368))(pSVar2,*(undefined8 *)((long)pSVar2->klass + 0x370));
          pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                             (pSVar1,2,(pSVar1->klass->vtable)._5_get_Item.method);
          if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            b = (**(code **)((long)pSVar2->klass + 0x368))
                          (pSVar2,*(undefined8 *)((long)pSVar2->klass + 0x370));
            pSVar2 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)
                               (pSVar1,3,(pSVar1->klass->vtable)._5_get_Item.method);
            if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              a = (**(code **)((long)pSVar2->klass + 0x368))
                            (pSVar2,*(undefined8 *)((long)pSVar2->klass + 0x370));
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
              Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
                         (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


