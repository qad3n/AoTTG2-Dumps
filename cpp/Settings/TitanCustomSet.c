// Type: Settings.TitanCustomSet
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/TitanCustomSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSet.cs
// --------------------------------

// Settings.TitanCustomSet$$IsRandomHair
// il2cpp: bool Settings_TitanCustomSet__IsRandomHair (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x181f281b0

bool Settings_TitanCustomSet__IsRandomHair(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434544f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_18434544f = '\x01';
  }
  pSVar1 = (__this->fields).Hair;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Random",(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// Settings.TitanCustomSet$$GetBody
// il2cpp: int32_t Settings_TitanCustomSet__GetBody (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x181f27fa0

int32_t Settings_TitanCustomSet__GetBody(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184345450 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184345450 = '\x01';
  }
  pSVar1 = (__this->fields).Body;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar1->fields)._value < 0) {
      return 0;
    }
    return (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// Settings.TitanCustomSet$$GetHead
// il2cpp: int32_t Settings_TitanCustomSet__GetHead (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x181f28160

int32_t Settings_TitanCustomSet__GetHead(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184345451 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184345451 = '\x01';
  }
  pSVar1 = (__this->fields).Head;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar1->fields)._value < 0) {
      return 0;
    }
    return (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// Settings.TitanCustomSet$$GetEye
// il2cpp: int32_t Settings_TitanCustomSet__GetEye (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x181f27ff0

int32_t Settings_TitanCustomSet__GetEye(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184345452 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184345452 = '\x01';
  }
  pSVar1 = (__this->fields).Eye;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar1->fields)._value < 0) {
      return 0;
    }
    return (pSVar1->fields)._value;
  }
  ThrowNullReferenceException();
}


// Settings.TitanCustomSet$$GetHair
// il2cpp: System_String_o* Settings_TitanCustomSet__GetHair (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x181f28040

System_String_o * Settings_TitanCustomSet__GetHair(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184345453 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184345453 = '\x01';
  }
  if (Il2CppMethodInitialized_18434544f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_18434544f = '\x01';
  }
  pSVar1 = (__this->fields).Hair;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_181f28152;
  bVar3 = System_String__op_Equality((pSVar1->fields)._value,"Random",(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    pSVar2 = TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs;
    if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_181f28152;
    if (0 < (pSVar2->fields)._size) {
      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      pSVar2 = TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs;
      if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,0,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        return pSVar4;
      }
      goto label_181f28152;
    }
  }
  pSVar1 = (__this->fields).Hair;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    return (pSVar1->fields)._value;
  }
label_181f28152:
  ThrowNullReferenceException();
}


// Settings.TitanCustomSet$$.ctor
// il2cpp: void Settings_TitanCustomSet___ctor (Settings_TitanCustomSet_o* __this, const MethodInfo* method);
// 0x181f28210

void Settings_TitanCustomSet___ctor(Settings_TitanCustomSet_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  System_String_o *defaultValue;
  int32_t iVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_StringSetting_o *__this_00;
  Utility_Color255_o *pUVar4;
  Settings_ColorSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_184345454 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_184345454 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -1;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,-1,(pSVar1->vtable)._11_SanitizeValue.method)
  ;
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Head = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Head,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -1;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,-1,(pSVar1->vtable)._11_SanitizeValue.method)
  ;
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Body = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Body,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar3,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar3->klass;
  (pSVar3->fields).MinValue = -1;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar3,-1,(pSVar1->vtable)._11_SanitizeValue.method)
  ;
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Eye = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Eye,pSVar3);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  defaultValue = "Random";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (__this_00->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (__this_00->fields).MaxLength = 0x7fffffff;
  (__this->fields).Hair = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hair,__this_00);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar4,0xff,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).SkinColor = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinColor,pSVar5);
  pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar4,0x80,0x80,0x80,0xff,
             (MethodInfo *)0x0);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar5,pUVar4,0,(MethodInfo *)0x0);
  (__this->fields).HairColor = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairColor,pSVar5);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


