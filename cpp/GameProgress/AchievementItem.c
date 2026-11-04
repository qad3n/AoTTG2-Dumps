// Type: GameProgress.AchievementItem
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/AchievementItem.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementItem.cs
// --------------------------------

// GameProgress.AchievementItem$$GetQuestName
// il2cpp: System_String_o* GameProgress_AchievementItem__GetQuestName (GameProgress_AchievementItem_o* __this, const MethodInfo* method);
// 0x181e28b60
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e28c75: mov rdi, qword ptr [rip + 0x229878c]  ; "B"
// asm:   0x181e28c7c: jmp 0x181e28c85
// asm:   0x181e28c7e: mov rdi, qword ptr [rip + 0x22509bb]  ; "A"

System_String_o *
GameProgress_AchievementItem__GetQuestName(GameProgress_AchievementItem_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  bool bVar3;
  System_String_o *str1;
  System_String_o *str3;
  System_String_o *pSVar4;
  System_String_o *str2;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184344d9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Silver");
    il2cpp_codegen_initialize_runtime_metadata(&"Bronze");
    il2cpp_codegen_initialize_runtime_metadata(&"Gold");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"C");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    Il2CppMethodInitialized_184344d9b = '\x01';
  }
  pSVar4 = "A";
  pSVar1 = (__this->fields).Tier;
  local_res8[0] = 0;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    bVar3 = System_String__op_Equality((pSVar1->fields)._value,"Bronze",(MethodInfo *)0x0);
    str2 = "A";
    if (!bVar3) {
      pSVar1 = (__this->fields).Tier;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_181e28cea;
      bVar3 = System_String__op_Equality((pSVar1->fields)._value,"Silver",(MethodInfo *)0x0);
      str2 = "B";
      if (!bVar3) {
        pSVar1 = (__this->fields).Tier;
        if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_181e28cea;
        bVar3 = System_String__op_Equality((pSVar1->fields)._value,"Gold",(MethodInfo *)0x0);
        str2 = pSVar4;
        if (bVar3) {
          str2 = "C";
        }
      }
    }
    pSVar1 = (__this->fields).Category;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      pSVar4 = (pSVar1->fields)._value;
      str1 = GameProgress_QuestItem__GetConditionsHash((GameProgress_QuestItem_o *)__this,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).Amount;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        local_res8[0] = (pSVar2->fields)._value;
        str3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat_1969590(pSVar4,str1,str2,str3,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
label_181e28cea:
  ThrowNullReferenceException();
}


// GameProgress.AchievementItem$$.ctor
// il2cpp: void GameProgress_AchievementItem___ctor (GameProgress_AchievementItem_o* __this, const MethodInfo* method);
// 0x181e28cf0

void GameProgress_AchievementItem___ctor(GameProgress_AchievementItem_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  Settings_BoolSetting_o *__this_01;
  
  if (Il2CppMethodInitialized_184344d9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184344d9c = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Tier = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Tier,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(__this_01,false,(MethodInfo *)0x0);
  (__this->fields).Active = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Active,__this_01);
  GameProgress_QuestItem___ctor((GameProgress_QuestItem_o *)__this,(MethodInfo *)0x0);
  return;
}


