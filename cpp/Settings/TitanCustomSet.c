// Type: Settings.TitanCustomSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/TitanCustomSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSet.cs
// --------------------------------

// Settings.TitanCustomSet$$IsRandomHair
// il2cpp: bool Settings_TitanCustomSet__IsRandomHair (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x5b49b00

bool Settings_TitanCustomSet__IsRandomHair(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547297 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_07547297 = '\x01';
  }
  pSVar1 = (__this->fields).Hair;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Random",(MethodInfo *)0x0);
  return bVar2;
}


// Settings.TitanCustomSet$$GetBody
// il2cpp: int32_t Settings_TitanCustomSet__GetBody (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x5b49b50

int32_t Settings_TitanCustomSet__GetBody(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_07547298 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547298 = '\x01';
  }
  pSVar2 = (__this->fields).Body;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar2->fields)._value;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}


// Settings.TitanCustomSet$$GetHead
// il2cpp: int32_t Settings_TitanCustomSet__GetHead (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x5b49b90

int32_t Settings_TitanCustomSet__GetHead(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_07547299 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547299 = '\x01';
  }
  pSVar2 = (__this->fields).Head;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar2->fields)._value;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}


// Settings.TitanCustomSet$$GetEye
// il2cpp: int32_t Settings_TitanCustomSet__GetEye (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x5b49bd0

int32_t Settings_TitanCustomSet__GetEye(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_0754729a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754729a = '\x01';
  }
  pSVar2 = (__this->fields).Eye;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar2->fields)._value;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}


// Settings.TitanCustomSet$$GetHair
// il2cpp: System_String_o* Settings_TitanCustomSet__GetHair (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x5b49c10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b49c32: jmp 0x5b49d3e

System_String_o * Settings_TitanCustomSet__GetHair(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_0754729b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754729b = '\x01';
    if (Il2CppMethodInitialized_07547297 == '\0') goto label_05b49c77;
label_05b49c29:
    pSVar1 = (__this->fields).Hair;
  }
  else {
    if (Il2CppMethodInitialized_07547297 != '\0') goto label_05b49c29;
label_05b49c77:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_07547297 = '\x01';
    pSVar1 = (__this->fields).Hair;
  }
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Random",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      __this_00 = TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05b49d3e;
      if (0 < (__this_00->fields)._size) {
        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
          __this_00 = TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs;
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05b49d3e;
        }
        pSVar3 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,0,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        return pSVar3;
      }
    }
    pSVar1 = (__this->fields).Hair;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      return (pSVar1->fields)._value;
    }
  }
label_05b49d3e:
  ThrowNullReferenceException();
}


// Settings.TitanCustomSet$$.ctor
// il2cpp: void Settings_TitanCustomSet___ctor (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x5b49d50

void Settings_TitanCustomSet___ctor(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *__this_00;
  Utility_Color255_o *pUVar3;
  Settings_ColorSetting_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754729c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_0754729c = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -1;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,-1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).Head = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Head);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -1;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,-1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).Body = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Body);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar2->fields).MinValue = -0x80000000;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar2,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar2->fields).MinValue = -1;
  (pSVar2->fields).MaxValue = 0x7fffffff;
  iVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar2,-1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = iVar1;
  (*(pSVar2->klass->vtable)._4_SetDefault.methodPtr)(pSVar2,(pSVar2->klass->vtable)._4_SetDefault.method);
  (__this->fields).Eye = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Eye);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,"Random",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Hair = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hair);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar3,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)__this_01,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (__this_01->fields).MinAlpha = 0;
  pUVar3 = (*(__this_01->klass->vtable)._11_SanitizeValue.methodPtr)
                     (__this_01,pUVar3,(__this_01->klass->vtable)._11_SanitizeValue.method);
  (__this_01->fields).DefaultValue = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)(__this_01->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).SkinColor = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinColor);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar3,0x80,0x80,0x80,0xff,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)method_00,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  *(int32_t *)&method_00->return_type = 0;
  pUVar3 = (*(((Settings_ColorSetting_c *)method_00->methodPointer)->vtable)._11_SanitizeValue.methodPtr)
                     (method_00,pUVar3,
                      (((Settings_ColorSetting_c *)method_00->methodPointer)->vtable)._11_SanitizeValue.method
                     );
  method_00->name = (char *)pUVar3;
  Il2CppCodeGenWriteBarrier(&method_00->name);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)method_00,(Il2CppObject *)method_00->name,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).HairColor = (Settings_ColorSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairColor);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,method_00);
  return;
}


