// Type: Settings.HumanCustomSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HumanCustomSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/HumanCustomSet.cs
// --------------------------------

// Settings.HumanCustomSet$$Validate
// il2cpp: bool Settings_HumanCustomSet__Validate (Settings_HumanCustomSet_o* __this, const MethodInfo* method);
// 0x5b43c60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b43cd1: jmp 0x5b43ce7

bool Settings_HumanCustomSet__Validate(Settings_HumanCustomSet_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Settings_IntSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547284 = '\x01';
  }
  pSVar3 = (__this->fields).Sex;
  if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_05b43d45;
  if ((pSVar3->fields)._value == 0) {
    pSVar3 = (__this->fields).Costume;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_05b43d45;
    iVar2 = (pSVar3->fields)._value;
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      iVar1 = TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount;
    }
    else {
      iVar1 = TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount;
    }
    if (iVar1 <= iVar2) {
      return false;
    }
    pSVar3 = (__this->fields).Sex;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_05b43d45;
  }
  if ((pSVar3->fields)._value == 1) {
    pSVar3 = (__this->fields).Costume;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) {
label_05b43d45:
      ThrowNullReferenceException();
    }
    iVar2 = (pSVar3->fields)._value;
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      iVar1 = TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount;
    }
    else {
      iVar1 = TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount;
    }
    if (iVar1 <= iVar2) {
      return false;
    }
  }
  return true;
}


// Settings.HumanCustomSet$$.ctor
// il2cpp: void Settings_HumanCustomSet___ctor (Settings_HumanCustomSet_o* __this, const MethodInfo* method);
// 0x5b43d50

void Settings_HumanCustomSet___ctor(Settings_HumanCustomSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *__this_00;
  Utility_Color255_o *pUVar5;
  Settings_ColorSetting_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  MethodInfo *method_00;
  float fVar8;
  
  if (Il2CppMethodInitialized_07547285 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"HairM0");
    il2cpp_codegen_initialize_runtime_metadata(&"BackNone");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"HatNone");
    il2cpp_codegen_initialize_runtime_metadata(&"HeadNone");
    il2cpp_codegen_initialize_runtime_metadata(&"GlassNone");
    il2cpp_codegen_initialize_runtime_metadata(&"FaceNone");
    Il2CppMethodInitialized_07547285 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Sex = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sex);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Eye = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Eye);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,"FaceNone",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Face = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Face);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,"GlassNone",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Glass = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Glass);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,"HairM0",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Hair = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hair);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Costume = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Costume);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Boots = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Boots);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Cape = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Cape);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)__this_00,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).HoodUp = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HoodUp);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Logo = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Logo);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,"HatNone",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Hat = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hat);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,"HeadNone",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Head = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Head);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,"BackNone",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Back = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Back);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0xdc,0xc4,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).SkinColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinColor);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0x80,0x80,0x80,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).HairColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairColor);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).ShirtColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShirtColor);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0x62,0x51,0x41,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).StrapsColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).StrapsColor);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).PantsColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PantsColor);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0xb7,0x90,0x6b,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).JacketColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).JacketColor);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0x31,0x24,0x21,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).BootsColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BootsColor);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,"None",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HairEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairEffect);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).HairEffectColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairEffectColor);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,"None",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).BladeEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BladeEffect);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).BladeEffectColor = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BladeEffectColor);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Stats = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Stats);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHair = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHair);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinEye = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinEye);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinGlass = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinGlass);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinFace = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinFace);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinSkin = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinSkin);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinCostume = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinCostume);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinLogo = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinLogo);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinGearL = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinGearL);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinGearR = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinGearR);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinGas = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinGas);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHoodie = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHoodie);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinWeaponTrail = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinWeaponTrail);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHorse = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHorse);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinThunderspearL = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinThunderspearL);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinThunderspearR = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinThunderspearR);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHookL = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHookL);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar7->fields).MinValue = -3.4028235e+38;
  (pSVar7->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar7,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar7->fields).MinValue = -3.4028235e+38;
  (pSVar7->fields).MaxValue = 3.4028235e+38;
  fVar8 = (*(pSVar7->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar7,1.0,(pSVar7->klass->vtable)._11_SanitizeValue.method);
  (pSVar7->fields).DefaultValue = fVar8;
  (*(pSVar7->klass->vtable)._4_SetDefault.methodPtr)(pSVar7,(pSVar7->klass->vtable)._4_SetDefault.method);
  (__this->fields).SkinHookLTiling = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHookLTiling);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHookR = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHookR);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar7->fields).MinValue = -3.4028235e+38;
  (pSVar7->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar7,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar7->fields).MinValue = -3.4028235e+38;
  (pSVar7->fields).MaxValue = 3.4028235e+38;
  fVar8 = (*(pSVar7->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar7,1.0,(pSVar7->klass->vtable)._11_SanitizeValue.method);
  (pSVar7->fields).DefaultValue = fVar8;
  (*(pSVar7->klass->vtable)._4_SetDefault.methodPtr)(pSVar7,(pSVar7->klass->vtable)._4_SetDefault.method);
  (__this->fields).SkinHookRTiling = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHookRTiling);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHat = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHat);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinHead = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHead);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinBack = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinBack);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730((Settings_StringSetting_o *)method_00,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).SkinCloak = (Settings_StringSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinCloak);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,method_00);
  return;
}


