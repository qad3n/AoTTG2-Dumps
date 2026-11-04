// Type: Settings.HumanCustomSet
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/HumanCustomSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/HumanCustomSet.cs
// --------------------------------

// Settings.HumanCustomSet$$Validate
// il2cpp: bool Settings_HumanCustomSet__Validate (Settings_HumanCustomSet_o* __this, const MethodInfo* method);
// 0x181f16680
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f16706: jmp 0x181f1670f
// asm:   0x181f16708: mov rcx, qword ptr [rip + 0x2178641]  ; TypeInfo_Characters_HumanSetup

bool Settings_HumanCustomSet__Validate(Settings_HumanCustomSet_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434543c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18434543c = '\x01';
  }
  pSVar2 = (__this->fields).Sex;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar2->fields)._value == 0) {
      pSVar2 = (__this->fields).Costume;
      if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_181f1675b;
      iVar1 = (pSVar2->fields)._value;
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      if (TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount <= iVar1) {
        return false;
      }
    }
    pSVar2 = (__this->fields).Sex;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      if ((pSVar2->fields)._value == 1) {
        pSVar2 = (__this->fields).Costume;
        if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_181f1675b;
        iVar1 = (pSVar2->fields)._value;
        if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
        }
        if (TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount <= iVar1) {
          return false;
        }
      }
      return true;
    }
  }
label_181f1675b:
  ThrowNullReferenceException();
}


// Settings.HumanCustomSet$$.ctor
// il2cpp: void Settings_HumanCustomSet___ctor (Settings_HumanCustomSet_o* __this, const MethodInfo* method);
// 0x181f16770

void Settings_HumanCustomSet___ctor(Settings_HumanCustomSet_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  Il2CppObject *pIVar2;
  Settings_FloatSetting_c *pSVar3;
  System_String_o *pSVar4;
  int32_t iVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_BoolSetting_o *__this_00;
  Utility_Color255_o *pUVar8;
  Settings_ColorSetting_o *pSVar9;
  Settings_FloatSetting_o *pSVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_18434543d == '\0') {
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
    Il2CppMethodInitialized_18434543d = '\x01';
  }
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar5;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).Sex = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sex,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar5;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).Eye = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Eye,pSVar6);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar4 = "FaceNone";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar4,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 0x7fffffff;
  (__this->fields).Face = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Face,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar4 = "GlassNone";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar4,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 0x7fffffff;
  (__this->fields).Glass = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Glass,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar4 = "HairM0";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar4,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 0x7fffffff;
  (__this->fields).Hair = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hair,pSVar7);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar5;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).Costume = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Costume,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar5;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).Boots = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Boots,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar5;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).Cape = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Cape,pSVar6);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)__this_00,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).HoodUp = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HoodUp,__this_00);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar6->klass;
  (pSVar6->fields).MinValue = -0x80000000;
  (pSVar6->fields).MaxValue = 0x7fffffff;
  iVar5 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar6,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = iVar5;
  (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
  (__this->fields).Logo = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Logo,pSVar6);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar4 = "HatNone";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar4,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 0x7fffffff;
  (__this->fields).Hat = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hat,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar4 = "HeadNone";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar4,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 0x7fffffff;
  (__this->fields).Head = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Head,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar4 = "BackNone";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar4,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 0x7fffffff;
  (__this->fields).Back = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Back,pSVar7);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,0xff,0xdc,0xc4,0xff,
             (MethodInfo *)0x0);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar9,pUVar8,0,(MethodInfo *)0x0);
  (__this->fields).SkinColor = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinColor,pSVar9);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,0x80,0x80,0x80,0xff,
             (MethodInfo *)0x0);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar9,pUVar8,0,(MethodInfo *)0x0);
  (__this->fields).HairColor = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairColor,pSVar9);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,0xff,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar9,pUVar8,0,(MethodInfo *)0x0);
  (__this->fields).ShirtColor = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShirtColor,pSVar9);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,0x62,0x51,0x41,0xff,
             (MethodInfo *)0x0);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar9,pUVar8,0,(MethodInfo *)0x0);
  (__this->fields).StrapsColor = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).StrapsColor,pSVar9);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,0xff,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar9,pUVar8,0,(MethodInfo *)0x0);
  (__this->fields).PantsColor = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PantsColor,pSVar9);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,0xb7,0x90,0x6b,0xff,
             (MethodInfo *)0x0);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar9,pUVar8,0,(MethodInfo *)0x0);
  (__this->fields).JacketColor = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).JacketColor,pSVar9);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,0x31,0x24,0x21,0xff,
             (MethodInfo *)0x0);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar9,pUVar8,0,(MethodInfo *)0x0);
  (__this->fields).BootsColor = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BootsColor,pSVar9);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar4 = "None";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar4,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 0x7fffffff;
  (__this->fields).HairEffect = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairEffect,pSVar7);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,0,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar9,pUVar8,0,(MethodInfo *)0x0);
  (__this->fields).HairEffectColor = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairEffectColor,pSVar9);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar4 = "None";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar4,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 0x7fffffff;
  (__this->fields).BladeEffect = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BladeEffect,pSVar7);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,0,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar9,pUVar8,0,(MethodInfo *)0x0);
  (__this->fields).BladeEffectColor = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BladeEffectColor,pSVar9);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 0x7fffffff;
  (__this->fields).Stats = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Stats,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinHair = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHair,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinEye = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinEye,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinGlass = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinGlass,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinFace = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinFace,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinSkin = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinSkin,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinCostume = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinCostume,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinLogo = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinLogo,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinGearL = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinGearL,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinGearR = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinGearR,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinGas = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinGas,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinHoodie = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHoodie,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinWeaponTrail = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinWeaponTrail,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinHorse = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHorse,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinThunderspearL = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinThunderspearL,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinThunderspearR = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinThunderspearR,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinHookL = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHookL,pSVar7);
  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar10->fields).MinValue = -3.4028235e+38;
  (pSVar10->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar10,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar3 = pSVar10->klass;
  (pSVar10->fields).MinValue = -3.4028235e+38;
  (pSVar10->fields).MaxValue = 3.4028235e+38;
  fVar11 = (*(pSVar3->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar10,1.0,(pSVar3->vtable)._11_SanitizeValue.method);
  pSVar3 = pSVar10->klass;
  (pSVar10->fields).DefaultValue = fVar11;
  (*(pSVar3->vtable)._4_SetDefault.methodPtr)(pSVar10,(pSVar3->vtable)._4_SetDefault.method);
  (__this->fields).SkinHookLTiling = pSVar10;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHookLTiling,pSVar10);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinHookR = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHookR,pSVar7);
  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (pSVar10->fields).MinValue = -3.4028235e+38;
  (pSVar10->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar10,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar3 = pSVar10->klass;
  (pSVar10->fields).MinValue = -3.4028235e+38;
  (pSVar10->fields).MaxValue = 3.4028235e+38;
  fVar11 = (*(pSVar3->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar10,1.0,(pSVar3->vtable)._11_SanitizeValue.method);
  pSVar3 = pSVar10->klass;
  (pSVar10->fields).DefaultValue = fVar11;
  (*(pSVar3->vtable)._4_SetDefault.methodPtr)(pSVar10,(pSVar3->vtable)._4_SetDefault.method);
  (__this->fields).SkinHookRTiling = pSVar10;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHookRTiling,pSVar10);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinHat = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHat,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinHead = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinHead,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinBack = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinBack,pSVar7);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar7->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar7,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar7->fields).MaxLength = 200;
  (__this->fields).SkinCloak = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinCloak,pSVar7);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


