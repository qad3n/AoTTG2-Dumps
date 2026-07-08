// Type: GameProgress.AchievementItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/AchievementItem.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/AchievementItem.cs  [CHANGED since prior version]
// --------------------------------

// GameProgress.AchievementItem$$GetQuestName
// il2cpp: System_String_o* GameProgress_AchievementItem__GetQuestName (GameProgress_AchievementItem_o* __this, const MethodInfo* method);
// 0x42080f0

System_String_o *
GameProgress_AchievementItem__GetQuestName
          (GameProgress_AchievementItem_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *str0;
  Settings_IntSetting_o *pSVar2;
  uint in_EAX;
  bool_conflict bVar3;
  undefined8 *puVar4;
  System_String_o *str1;
  System_String_o *str3;
  System_String_o *pSVar5;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (DAT_05705020 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Silver");
    il2cpp_init_method_metadata(&"Bronze");
    il2cpp_init_method_metadata(&"Gold");
    il2cpp_init_method_metadata(&"B");
    il2cpp_init_method_metadata(&"C");
    il2cpp_init_method_metadata(&"A");
    DAT_05705020 = '\x01';
  }
  pSVar5 = "A";
  uStack_28 = (ulong)(uint)uStack_28;
  pSVar1 = (__this->fields).Tier;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) goto LAB_04208265;
  bVar3 = System_String__op_Equality((pSVar1->fields)._value,"Bronze",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar1 = (__this->fields).Tier;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto LAB_04208265;
    bVar3 = System_String__op_Equality((pSVar1->fields)._value,"Silver",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pSVar1 = (__this->fields).Tier;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto LAB_04208265;
      bVar3 = System_String__op_Equality((pSVar1->fields)._value,"Gold",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        puVar4 = &"C";
        goto LAB_0420820c;
      }
    }
    else {
      puVar4 = &"B";
LAB_0420820c:
      pSVar5 = (System_String_o *)*puVar4;
    }
    pSVar1 = (__this->fields).Category;
  }
  else {
    pSVar1 = (__this->fields).Category;
    pSVar5 = "A";
  }
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    str0 = (pSVar1->fields)._value;
    str1 = GameProgress_QuestItem__GetConditionsHash
                     ((GameProgress_QuestItem_o *)__this,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).Amount;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      uStack_28 = CONCAT44((pSVar2->fields)._value,(uint)uStack_28);
      str3 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(str0,str1,pSVar5,str3,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
LAB_04208265:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.AchievementItem$$.ctor
// il2cpp: void GameProgress_AchievementItem___ctor (GameProgress_AchievementItem_o* __this, const MethodInfo* method);
// 0x4208270

void GameProgress_AchievementItem___ctor(GameProgress_AchievementItem_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  Settings_BoolSetting_o *__this_01;
  
  if (DAT_05705021 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05705021 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Tier = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Tier);
  __this_01 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(__this_01,0,(MethodInfo *)0x0);
  (__this->fields).Active = __this_01;
  il2cpp_runtime_glue(&(__this->fields).Active);
  GameProgress_QuestItem___ctor((GameProgress_QuestItem_o *)__this,(MethodInfo *)0x0);
  return;
}


