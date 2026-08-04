// Type: GameProgress.AchievementItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/AchievementItem.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementItem.cs
// --------------------------------

// GameProgress.AchievementItem$$GetQuestName
// il2cpp: System_String_o* GameProgress_AchievementItem__GetQuestName (GameProgress_AchievementItem_o* __this, const MethodInfo* method);
// 0x453a410

System_String_o *
GameProgress_AchievementItem__GetQuestName(GameProgress_AchievementItem_o *__this,MethodInfo *method)

{
  System_String_o *str0;
  Settings_IntSetting_o *pSVar1;
  uint in_EAX;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_o *str1;
  System_String_o *str3;
  System_String_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  MethodInfo *pMVar6;
  System_String_o *extraout_RAX;
  GameProgress_AchievementItem_o *__this_00;
  undefined8 uStack_28;
  
  __this_00 = __this;
  uStack_28._0_4_ = in_EAX;
  if (g_data_057aeefb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Silver");
    il2cpp_runtime_helper_023445d0(&"Bronze");
    il2cpp_runtime_helper_023445d0(&"Gold");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    __this_00 = (GameProgress_AchievementItem_o *)&"A";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeefb = '\x01';
  }
  pSVar4 = "A";
  uStack_28 = (ulong)(uint)uStack_28;
  pSVar5 = (__this->fields).Tier;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0453a583;
  __this_00 = (GameProgress_AchievementItem_o *)(pSVar5->fields)._value;
  pMVar6 = "Bronze";
  bVar2 = System_String__op_Equality
                    ((System_String_o *)__this_00,(System_String_o *)"Bronze",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar5 = (__this->fields).Tier;
    if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0453a583;
    __this_00 = (GameProgress_AchievementItem_o *)(pSVar5->fields)._value;
    pMVar6 = "Silver";
    bVar2 = System_String__op_Equality
                      ((System_String_o *)__this_00,(System_String_o *)"Silver",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar5 = (__this->fields).Tier;
      if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_0453a583;
      __this_00 = (GameProgress_AchievementItem_o *)(pSVar5->fields)._value;
      pMVar6 = "Gold";
      bVar2 = System_String__op_Equality
                        ((System_String_o *)__this_00,(System_String_o *)"Gold",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar3 = &"C";
        goto label_0453a52c;
      }
    }
    else {
      puVar3 = &"B";
label_0453a52c:
      pSVar4 = (System_String_o *)*puVar3;
    }
    pSVar5 = (__this->fields).Category;
  }
  else {
    pSVar5 = (__this->fields).Category;
    pSVar4 = "A";
  }
  if (pSVar5 != (Settings_StringSetting_o *)0x0) {
    str0 = (pSVar5->fields)._value;
    __this_00 = __this;
    str1 = GameProgress_QuestItem__GetConditionsHash((GameProgress_QuestItem_o *)__this,pMVar6);
    pSVar1 = (__this->fields).Amount;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      uStack_28 = CONCAT44((pSVar1->fields)._value,(uint)uStack_28);
      str3 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_3af7470(str0,str1,pSVar4,str3,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
label_0453a583:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeefc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057aeefc = '\x01';
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar5,pSVar4,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).Tier = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Tier);
  pMVar6 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)pMVar6,0,(MethodInfo *)0x0);
  (__this_00->fields).Active = (Settings_BoolSetting_o *)pMVar6;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Active);
  GameProgress_QuestItem___ctor((GameProgress_QuestItem_o *)__this_00,pMVar6);
  return extraout_RAX;
}


// GameProgress.AchievementItem$$.ctor
// il2cpp: void GameProgress_AchievementItem___ctor (GameProgress_AchievementItem_o* __this, const MethodInfo* method);
// 0x453a590

void GameProgress_AchievementItem___ctor(GameProgress_AchievementItem_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057aeefc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057aeefc = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Tier = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Tier);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960((Settings_BoolSetting_o *)method_00,0,(MethodInfo *)0x0);
  (__this->fields).Active = (Settings_BoolSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Active);
  GameProgress_QuestItem___ctor((GameProgress_QuestItem_o *)__this,method_00);
  return;
}


