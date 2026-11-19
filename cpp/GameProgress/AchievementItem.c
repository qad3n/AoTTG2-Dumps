// Type: GameProgress.AchievementItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/GameProgress/AchievementItem.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementItem.cs
// --------------------------------

// GameProgress.AchievementItem$$GetQuestName
// il2cpp: System_String_o* GameProgress_AchievementItem__GetQuestName (GameProgress_AchievementItem_o* __this, const MethodInfo* method);
// 0x591c1a0

System_String_o *
GameProgress_AchievementItem__GetQuestName(GameProgress_AchievementItem_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *str0;
  bool bVar2;
  System_String_o **ppSVar3;
  System_String_o *str1;
  System_String_o *str3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  int32_t iStack_24;
  
  if (Il2CppMethodInitialized_0754572b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Silver");
    il2cpp_codegen_initialize_runtime_metadata(&"Bronze");
    il2cpp_codegen_initialize_runtime_metadata(&"Gold");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"C");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    Il2CppMethodInitialized_0754572b = '\x01';
  }
  pSVar4 = "A";
  pSVar1 = (__this->fields).Tier;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_0591c308;
  method_00 = (MethodInfo *)"Bronze";
  bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Bronze",(MethodInfo *)0x0);
  if (bVar2) {
    pSVar4 = "A";
  }
  else {
    pSVar1 = (__this->fields).Tier;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_0591c308;
    method_00 = (MethodInfo *)"Silver";
    bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Silver",(MethodInfo *)0x0);
    if (bVar2) {
      ppSVar3 = &"B";
    }
    else {
      pSVar1 = (__this->fields).Tier;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_0591c308;
      method_00 = (MethodInfo *)"Gold";
      bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Gold",(MethodInfo *)0x0);
      if (!bVar2) goto label_0591c2b4;
      ppSVar3 = &"C";
    }
    pSVar4 = *ppSVar3;
  }
label_0591c2b4:
  pSVar1 = (__this->fields).Category;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    str0 = (pSVar1->fields)._value;
    str1 = GameProgress_QuestItem__GetConditionsHash((GameProgress_QuestItem_o *)__this,method_00);
    if ((__this->fields).Amount != (Settings_IntSetting_o *)0x0) {
      str3 = System_Int32__ToString(&iStack_24,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_5302810(str0,str1,pSVar4,str3,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
label_0591c308:
  ThrowNullReferenceException();
}


// GameProgress.AchievementItem$$.ctor
// il2cpp: void GameProgress_AchievementItem___ctor (GameProgress_AchievementItem_o* __this, const MethodInfo* method);
// 0x591c310

void GameProgress_AchievementItem___ctor(GameProgress_AchievementItem_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754572c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_0754572c = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Tier = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Tier);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0((Settings_BoolSetting_o *)method_00,false,(MethodInfo *)0x0);
  (__this->fields).Active = (Settings_BoolSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Active);
  GameProgress_QuestItem___ctor((GameProgress_QuestItem_o *)__this,method_00);
  return;
}


