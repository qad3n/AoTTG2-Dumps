// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileStatsPanel.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass0_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o* __this, const MethodInfo* method);
// 0x41fbc10

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_<>c__DisplayClass0_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass0_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* rows, const MethodInfo* method);
// 0x41fced0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_<>c__DisplayClass0_0__<Build>b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *rows,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows
            (rows,(__this->fields).stat,(__this->fields).achievements,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x41fcec0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_<>c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass3_0$$<Stat>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0___Stat_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41fcef0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_<>c__DisplayClass3_0__<Stat>b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (DAT_05704fc3 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"subtext");
    il2cpp_init_method_metadata(&"header");
    DAT_05704fc3 = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,(__this->fields).label,"subtext",(System_String_o *)0x0,
                        (System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar2);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,(__this->fields).value,"header",(System_String_o *)0x0,
                          (System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                         );
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
        il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Build (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41fb9a0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  Il2CppObject *__this_00;
  GameProgress_AchievementCount_o *pGVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Il2CppClass *method_00;
  
  if (DAT_05704fbf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass0_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stats are unavailable until game progress is loaded.");
    il2cpp_init_method_metadata(&"profile-stats-unavailable");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"profile-stats-list");
    DAT_05704fbf = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass0_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  else {
    lVar1 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  }
  if (lVar1 == 0) {
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Callout(ui,2,"Stats are unavailable until game progress is loaded.","profile-stats-unavailable",(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (Il2CppObject *)0x0) {
    method_00 = *(Il2CppClass **)(lVar1 + 0x30);
    __this_00[1].klass = method_00;
    il2cpp_runtime_glue(__this_00 + 1);
    if (*(GameProgress_AchievementContainer_o **)(lVar1 + 0x20) !=
        (GameProgress_AchievementContainer_o *)0x0) {
      pGVar2 = GameProgress_AchievementContainer__GetAchievementCount
                         (*(GameProgress_AchievementContainer_o **)(lVar1 + 0x20),
                          (MethodInfo *)method_00);
      __this_00[1].monitor = pGVar2;
      il2cpp_runtime_glue(&__this_00[1].monitor,pGVar2);
      build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"default",build,"profile-stats-list",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$BuildRows
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows (Gisketch_Aottg2UI_Code_AottgUi_o* ui, GameProgress_GameStatContainer_o* stat, GameProgress_AchievementCount_o* achievements, const MethodInfo* method);
// 0x41fc0d0

/* WARNING: Removing unreachable block (ram,0x041fca60) */

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,GameProgress_GameStatContainer_o *stat,
               GameProgress_AchievementCount_o *achievements,MethodInfo *method)

{
  ushort uVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  int iVar6;
  char cVar7;
  int32_t iVar8;
  undefined8 in_RAX;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_TimeSpan_o ts;
  Il2CppObject *__this;
  VirtualInvokeData *pVVar11;
  long *plVar12;
  MethodInfo *pMVar13;
  undefined8 *puVar14;
  System_String_o **ppSVar15;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  int32_t __this_00;
  long lVar16;
  long lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  int32_t local_38;
  float local_34;
  
  local_34 = (float)((ulong)in_RAX >> 0x20);
  pMVar13 = (MethodInfo *)achievements;
  if (DAT_05704fc0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_ValueTuple_string__string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_ValueTuple_string__string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Silver");
    il2cpp_init_method_metadata(&"Blade");
    il2cpp_init_method_metadata(&"Exp");
    il2cpp_init_method_metadata(&"Other");
    il2cpp_init_method_metadata(&"Total");
    il2cpp_init_method_metadata(&"Bronze");
    il2cpp_init_method_metadata(&"Gold");
    il2cpp_init_method_metadata(&"DAMAGE");
    il2cpp_init_method_metadata(&"ACHIEVEMENTS");
    il2cpp_init_method_metadata(&"Playtime");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Thunder Spear");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"APG");
    il2cpp_init_method_metadata(&"Level");
    il2cpp_init_method_metadata(&"AHSS");
    il2cpp_init_method_metadata(&"GENERAL");
    il2cpp_init_method_metadata(&"Highest Speed");
    il2cpp_init_method_metadata(&"HUMANS KILLED");
    il2cpp_init_method_metadata(&"TITANS KILLED");
    DAT_05704fc0 = '\x01';
    pMVar13 = extraout_RDX;
  }
  local_38 = 0;
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(ui,"GENERAL",pMVar13);
  if ((stat != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar2 = (stat->fields).Level, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    local_38 = (pSVar2->fields)._value;
    __this_00 = (int32_t)&local_38;
    pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
              (ui,"Level",pSVar9,(MethodInfo *)&"Level");
    pSVar2 = (stat->fields).Exp;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      _local_38 = CONCAT44(local_34,(pSVar2->fields)._value);
      pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
      pMVar13 = TypeInfo_GameProgressManager;
      if (*(int *)((long)&TypeInfo_GameProgressManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      iVar8 = GameProgress_GameProgressManager__GetExpToNext(pMVar13);
      local_38 = iVar8;
      pSVar10 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
      pSVar9 = System_String__Concat(pSVar9,"/",pSVar10,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                (ui,"Exp",pSVar9,(MethodInfo *)&"Exp");
      pSVar3 = (stat->fields).PlayTime;
      if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
        fVar18 = (pSVar3->fields)._value;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          local_34 = fVar18;
          il2cpp_init_class();
          fVar18 = local_34;
        }
        ts = System_TimeSpan__FromSeconds((double)fVar18,(MethodInfo *)0x0);
        pSVar9 = Utility_Format__GetReadableTimespan(ts,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                  (ui,"Playtime",pSVar9,(MethodInfo *)&"Playtime");
        pSVar3 = (stat->fields).HighestSpeed;
        if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
          local_38 = (int32_t)(pSVar3->fields)._value;
          pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                    (ui,"Highest Speed",pSVar9,(MethodInfo *)&"Highest Speed");
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(ui,"ACHIEVEMENTS",method_00);
          if (achievements != (GameProgress_AchievementCount_o *)0x0) {
            iVar6 = (int)achievements;
            pSVar9 = System_Int32__ToString(iVar6 + 0x10,(MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString(iVar6 + 0x14,(MethodInfo *)0x0);
            pSVar9 = System_String__Concat(pSVar9,"/",pSVar10,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                      (ui,"Bronze",pSVar9,(MethodInfo *)&"Bronze");
            pSVar9 = System_Int32__ToString(iVar6 + 0x18,(MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString(iVar6 + 0x1c,(MethodInfo *)0x0);
            pSVar9 = System_String__Concat(pSVar9,"/",pSVar10,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                      (ui,"Silver",pSVar9,(MethodInfo *)&"Silver");
            pSVar9 = System_Int32__ToString(iVar6 + 0x20,(MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString(iVar6 + 0x24,(MethodInfo *)0x0);
            pSVar9 = System_String__Concat(pSVar9,"/",pSVar10,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                      (ui,"Gold",pSVar9,(MethodInfo *)&"Gold");
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(ui,"DAMAGE",method_01);
            pIVar4 = (Il2CppClass *)(stat->fields).Damage;
            if (pIVar4 != (Il2CppClass *)0x0) {
              if (DAT_05705029 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_GetStatLabels_d__17);
                DAT_05705029 = '\x01';
              }
              __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetStatLabels_d__17);
              System_Object___ctor(__this,(MethodInfo *)0x0);
              *(undefined4 *)&__this[1].klass = 0xfffffffe;
              iVar8 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
              *(int32_t *)&__this[2].monitor = iVar8;
              if (__this != (Il2CppObject *)0x0) {
                __this[3].klass = pIVar4;
                il2cpp_runtime_glue(__this + 3,pIVar4);
                pIVar4 = __this->klass;
                uVar1._0_1_ = (pIVar4->_2).rank;
                uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
                if ((ulong)uVar1 != 0) {
                  pIVar5 = (pIVar4->_1).interfaceOffsets;
                  lVar16 = 0;
                  do {
                    if (*(long *)((long)&pIVar5->interfaceType + lVar16) == TypeInfo_IEnumerable_ValueTuple_string__string) {
                      pVVar11 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar16);
                      goto LAB_041fc561;
                    }
                    lVar16 = lVar16 + 0x10;
                  } while ((ulong)uVar1 << 4 != lVar16);
                }
                pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(__this,TypeInfo_IEnumerable_ValueTuple_string__string,0);
LAB_041fc561:
                plVar12 = (long *)(*pVVar11->methodPtr)(__this,pVVar11->method);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                do {
                  lVar16 = *plVar12;
                  if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
                    lVar17 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator) {
                        pMVar13 = (MethodInfo *)
                                  ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 +
                                   lVar16 + 0x138);
                        goto LAB_041fc5e3;
                      }
                      lVar17 = lVar17 + 0x10;
                    } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
                  }
                  pMVar13 = (MethodInfo *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator,0);
LAB_041fc5e3:
                  cVar7 = (*pMVar13->methodPointer)(plVar12,pMVar13->virtualMethodPointer);
                  if (cVar7 == '\0') goto LAB_041fc6b4;
                  lVar16 = *plVar12;
                  if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
                    lVar17 = 0;
                    do {
                      if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) == TypeInfo_IEnumerator_ValueTuple_string__string) {
                        pMVar13 = (MethodInfo *)
                                  ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 + lVar17) * 0x10 +
                                   lVar16 + 0x138);
                        goto LAB_041fc653;
                      }
                      lVar17 = lVar17 + 0x10;
                    } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
                  }
                  pMVar13 = (MethodInfo *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator_ValueTuple_string__string,0);
LAB_041fc653:
                  auVar19 = (*pMVar13->methodPointer)(plVar12,pMVar13->virtualMethodPointer);
                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                            (ui,auVar19._0_8_,auVar19._8_8_,pMVar13);
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  goto LAB_041fca5b;
LAB_041fc6b4:
  method_02 = extraout_RDX_00;
  if (plVar12 != (long *)0x0) {
    lVar16 = *plVar12;
    pMVar13 = (MethodInfo *)0x0;
    if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
      pMVar13 = (MethodInfo *)((ulong)*(ushort *)(lVar16 + 0x12e) << 4);
      lVar17 = 0;
      do {
        if (*(long *)(lVar17 + *(long *)(lVar16 + 0xb0)) == TypeInfo_IDisposable) {
          pMVar13 = (MethodInfo *)((long)*(int *)(lVar17 + 8 + *(long *)(lVar16 + 0xb0)) * 0x10);
          puVar14 = (undefined8 *)((long)&pMVar13[3].parameters + lVar16);
          goto LAB_041fc70d;
        }
        lVar17 = lVar17 + 0x10;
      } while (pMVar13 != (MethodInfo *)lVar17);
    }
    puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IDisposable,0);
LAB_041fc70d:
    (*(code *)*puVar14)(plVar12,puVar14[1]);
    method_02 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(ui,"TITANS KILLED",method_02);
  pSVar2 = (stat->fields).TitansKilledTotal;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    local_38 = (pSVar2->fields)._value;
    pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat(ui,"Total",pSVar9,pMVar13);
    pSVar2 = (stat->fields).TitansKilledBlade;
    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
      local_38 = (pSVar2->fields)._value;
      pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
      ppSVar15 = &"Blade";
      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                (ui,"Blade",pSVar9,(MethodInfo *)&"Blade");
      pSVar2 = (stat->fields).TitansKilledAHSS;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        local_38 = (pSVar2->fields)._value;
        pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                  (ui,"AHSS",pSVar9,(MethodInfo *)ppSVar15);
        pSVar2 = (stat->fields).TitansKilledAPG;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          local_38 = (pSVar2->fields)._value;
          pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                    (ui,"APG",pSVar9,(MethodInfo *)ppSVar15);
          pSVar2 = (stat->fields).TitansKilledThunderspear;
          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
            local_38 = (pSVar2->fields)._value;
            pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                      (ui,"Thunder Spear",pSVar9,(MethodInfo *)ppSVar15);
            pSVar2 = (stat->fields).TitansKilledOther;
            if (pSVar2 != (Settings_IntSetting_o *)0x0) {
              local_38 = (pSVar2->fields)._value;
              pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
              ppSVar15 = &"Other";
              Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                        (ui,"Other",pSVar9,(MethodInfo *)&"Other");
              Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(ui,"HUMANS KILLED",method_03);
              pSVar2 = (stat->fields).HumansKilledTotal;
              if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                local_38 = (pSVar2->fields)._value;
                pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                          (ui,"Total",pSVar9,(MethodInfo *)ppSVar15);
                pSVar2 = (stat->fields).HumansKilledBlade;
                if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                  local_38 = (pSVar2->fields)._value;
                  pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                  ppSVar15 = &"Blade";
                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                            (ui,"Blade",pSVar9,(MethodInfo *)&"Blade");
                  pSVar2 = (stat->fields).HumansKilledAHSS;
                  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                    local_38 = (pSVar2->fields)._value;
                    pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                              (ui,"AHSS",pSVar9,(MethodInfo *)ppSVar15);
                    pSVar2 = (stat->fields).HumansKilledAPG;
                    if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                      local_38 = (pSVar2->fields)._value;
                      pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                (ui,"APG",pSVar9,(MethodInfo *)ppSVar15);
                      pSVar2 = (stat->fields).HumansKilledThunderspear;
                      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                        local_38 = (pSVar2->fields)._value;
                        pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                  (ui,"Thunder Spear",pSVar9,(MethodInfo *)ppSVar15);
                        pSVar2 = (stat->fields).HumansKilledTitan;
                        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                          local_38 = (pSVar2->fields)._value;
                          pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                    (ui,"Titan",pSVar9,(MethodInfo *)&"Titan");
                          pSVar2 = (stat->fields).HumansKilledOther;
                          if (pSVar2 != (Settings_IntSetting_o *)0x0) {
                            _local_38 = CONCAT44(local_34,(pSVar2->fields)._value);
                            pSVar9 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                      (ui,"Other",pSVar9,(MethodInfo *)&"Other");
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_041fca5b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Header
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, const MethodInfo* method);
// 0x41fca80

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (DAT_05704fc1 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"header");
    DAT_05704fc1 = '\x01';
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,label,"header",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Stat
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, System_String_o* value, const MethodInfo* method);
// 0x41fcba0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,System_String_o *value,
               MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704fc2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Stat_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_0);
    il2cpp_init_method_metadata(&"SpaceBetween");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"row");
    DAT_05704fc2 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)label;
    il2cpp_runtime_glue(__this + 1,label);
    __this[1].monitor = value;
    il2cpp_runtime_glue(&__this[1].monitor,value);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,16.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"row",build,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x41f94a0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


