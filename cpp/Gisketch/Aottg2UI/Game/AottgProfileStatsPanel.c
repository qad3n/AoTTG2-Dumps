// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileStatsPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass0_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o* __this, const MethodInfo* method);
// 0x452dba0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass0_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* rows, const MethodInfo* method);
// 0x452e800

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *rows,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  GameProgress_DamageSetting_o *__this_00;
  System_Collections_Generic_IEnumerable_ValueTuple_string__string___c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_String_c *pSVar10;
  GameProgress_GameStatContainer_o *pGVar11;
  int iVar12;
  char cVar13;
  int32_t iVar14;
  System_String_o *pSVar15;
  System_TimeSpan_o ts;
  System_String_o *pSVar16;
  System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *pSVar17;
  MethodInfo *pMVar18;
  undefined8 *puVar19;
  VirtualInvokeData *pVVar20;
  undefined8 uVar21;
  System_String_o **ppSVar22;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_String_o **unaff_RBX;
  int32_t __this_01;
  long lVar23;
  System_String_o **ppSVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined8 uStack_38;
  
  pGVar11 = (__this->fields).stat;
  ppSVar24 = (System_String_o **)(__this->fields).achievements;
  pMVar18 = (MethodInfo *)ppSVar24;
  uStack_38 = rows;
  if (g_data_057aee9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_ValueTuple_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_ValueTuple_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Silver");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"Exp");
    il2cpp_runtime_helper_023445d0(&"Other");
    il2cpp_runtime_helper_023445d0(&"Total");
    il2cpp_runtime_helper_023445d0(&"Bronze");
    il2cpp_runtime_helper_023445d0(&"Gold");
    il2cpp_runtime_helper_023445d0(&"DAMAGE");
    il2cpp_runtime_helper_023445d0(&"ACHIEVEMENTS");
    il2cpp_runtime_helper_023445d0(&"Playtime");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Thunder Spear");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"Level");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"GENERAL");
    il2cpp_runtime_helper_023445d0(&"Highest Speed");
    il2cpp_runtime_helper_023445d0(&"HUMANS KILLED");
    il2cpp_runtime_helper_023445d0(&"TITANS KILLED");
    g_data_057aee9b = '\x01';
    pMVar18 = extraout_RDX;
  }
  uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)((ulong)uStack_38 & 0xffffffff00000000);
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(rows,"GENERAL",pMVar18);
  if ((pGVar11 != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar6 = (pGVar11->fields).Level, pSVar6 != (Settings_IntSetting_o *)0x0)) {
    uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
    __this_01 = (int32_t)&uStack_38;
    pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat(rows,"Level",pSVar15,(MethodInfo *)&"Level")
    ;
    pSVar6 = (pGVar11->fields).Exp;
    if (pSVar6 != (Settings_IntSetting_o *)0x0) {
      uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
      unaff_RBX = (System_String_o **)System_Int32__ToString(__this_01,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar14 = GameProgress_GameProgressManager__GetExpToNext((MethodInfo *)0x0);
      uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)CONCAT44(uStack_38._4_4_,iVar14);
      pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
      pSVar15 = System_String__Concat_3af7150
                          ((System_String_o *)unaff_RBX,"/",pSVar15,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                (rows,"Exp",pSVar15,(MethodInfo *)&"Exp");
      pSVar7 = (pGVar11->fields).PlayTime;
      if (pSVar7 != (Settings_FloatSetting_o *)0x0) {
        fVar25 = (pSVar7->fields)._value;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)CONCAT44(fVar25,(undefined4)uStack_38);
          il2cpp_runtime_helper_02337ed0();
          fVar25 = uStack_38._4_4_;
        }
        ts = System_TimeSpan__FromSeconds((double)fVar25,(MethodInfo *)0x0);
        pSVar15 = Utility_Format__GetReadableTimespan(ts,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                  (rows,"Playtime",pSVar15,(MethodInfo *)&"Playtime");
        pSVar7 = (pGVar11->fields).HighestSpeed;
        if (pSVar7 != (Settings_FloatSetting_o *)0x0) {
          uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                      CONCAT44(uStack_38._4_4_,(int)(pSVar7->fields)._value);
          pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                    (rows,"Highest Speed",pSVar15,(MethodInfo *)&"Highest Speed");
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(rows,"ACHIEVEMENTS",method_00);
          if ((MethodInfo *)ppSVar24 != (MethodInfo *)0x0) {
            iVar12 = (int)ppSVar24;
            pSVar15 = System_Int32__ToString(iVar12 + 0x10,(MethodInfo *)0x0);
            pSVar16 = System_Int32__ToString(iVar12 + 0x14,(MethodInfo *)0x0);
            pSVar15 = System_String__Concat_3af7150(pSVar15,"/",pSVar16,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                      (rows,"Bronze",pSVar15,(MethodInfo *)&"Bronze");
            pSVar15 = System_Int32__ToString(iVar12 + 0x18,(MethodInfo *)0x0);
            pSVar16 = System_Int32__ToString(iVar12 + 0x1c,(MethodInfo *)0x0);
            pSVar15 = System_String__Concat_3af7150(pSVar15,"/",pSVar16,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                      (rows,"Silver",pSVar15,(MethodInfo *)&"Silver");
            unaff_RBX = (System_String_o **)System_Int32__ToString(iVar12 + 0x20,(MethodInfo *)0x0);
            ppSVar24 = (System_String_o **)((long)&((MethodInfo *)ppSVar24)->klass + 4);
            pSVar15 = System_Int32__ToString((int32_t)ppSVar24,(MethodInfo *)0x0);
            pSVar15 = System_String__Concat_3af7150
                                ((System_String_o *)unaff_RBX,"/",pSVar15,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                      (rows,"Gold",pSVar15,(MethodInfo *)&"Gold");
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(rows,"DAMAGE",method_01);
            __this_00 = (pGVar11->fields).Damage;
            if ((__this_00 != (GameProgress_DamageSetting_o *)0x0) &&
               (pSVar17 = GameProgress_DamageSetting__GetStatLabels(__this_00,(MethodInfo *)0x0),
               pSVar17 != (System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *)0x0)) {
              pSVar8 = pSVar17->klass;
              uVar1._0_1_ = (pSVar8->_2).rank;
              uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
              if ((ulong)uVar1 != 0) {
                pIVar9 = (pSVar8->_1).interfaceOffsets;
                lVar23 = 0;
                do {
                  if (*(long *)((long)&pIVar9->interfaceType + lVar23) == TypeInfo_IEnumerable_ValueTuple_string_string) {
                    pMVar18 = (MethodInfo *)(pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar23));
                    goto label_0452dff1;
                  }
                  lVar23 = lVar23 + 0x10;
                } while ((ulong)uVar1 << 4 != lVar23);
              }
              pMVar18 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pSVar17,TypeInfo_IEnumerable_ValueTuple_string_string,0);
label_0452dff1:
              unaff_RBX = (System_String_o **)
                          (*pMVar18->methodPointer)(pSVar17,(MethodInfo *)pMVar18->virtualMethodPointer);
              if ((System_String_o *)unaff_RBX != (System_String_o *)0x0) {
                ppSVar24 = (System_String_o **)0x0;
                do {
                  pSVar10 = ((System_String_o *)unaff_RBX)->klass;
                  uVar2._0_1_ = (pSVar10->_2).rank;
                  uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
                  if ((ulong)uVar2 != 0) {
                    pIVar9 = (pSVar10->_1).interfaceOffsets;
                    lVar23 = 0;
                    do {
                      if (*(long *)((long)&pIVar9->interfaceType + lVar23) == TypeInfo_IEnumerator) {
                        pMVar18 = (MethodInfo *)
                                  (&(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar23));
                        goto label_0452e073;
                      }
                      lVar23 = lVar23 + 0x10;
                    } while ((ulong)uVar2 << 4 != lVar23);
                  }
                  pMVar18 = (MethodInfo *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,0);
label_0452e073:
                  cVar13 = (*pMVar18->methodPointer)(unaff_RBX,(MethodInfo *)pMVar18->virtualMethodPointer);
                  method_02 = extraout_RDX_00;
                  if (cVar13 == '\0') goto label_0452e144;
                  pSVar10 = ((System_String_o *)unaff_RBX)->klass;
                  uVar3._0_1_ = (pSVar10->_2).rank;
                  uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
                  if ((ulong)uVar3 != 0) {
                    pIVar9 = (pSVar10->_1).interfaceOffsets;
                    lVar23 = 0;
                    do {
                      if (*(long *)((long)&pIVar9->interfaceType + lVar23) == TypeInfo_IEnumerator_ValueTuple_string_string) {
                        pMVar18 = (MethodInfo *)
                                  (&(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar23));
                        goto label_0452e0e3;
                      }
                      lVar23 = lVar23 + 0x10;
                    } while ((ulong)uVar3 << 4 != lVar23);
                  }
                  pMVar18 = (MethodInfo *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator_ValueTuple_string_string,0);
label_0452e0e3:
                  auVar26 = (*pMVar18->methodPointer)(unaff_RBX,(MethodInfo *)pMVar18->virtualMethodPointer);
                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                            (rows,auVar26._0_8_,auVar26._8_8_,pMVar18);
                } while( true );
              }
              auVar27 = il2cpp_runtime_helper_022b2c90();
              uVar21 = auVar27._0_8_;
              if (auVar27._8_4_ != 1) {
                ppSVar24 = (System_String_o **)0x0;
                goto label_0452e4d6;
              }
              puVar19 = (undefined8 *)__cxa_begin_catch();
              ppSVar24 = (System_String_o **)*puVar19;
              __cxa_end_catch();
              method_02 = extraout_RDX_01;
label_0452e144:
              if ((System_String_o *)unaff_RBX != (System_String_o *)0x0) {
                pSVar10 = ((System_String_o *)unaff_RBX)->klass;
                uVar4._0_1_ = (pSVar10->_2).rank;
                uVar4._1_1_ = (pSVar10->_2).minimumAlignment;
                pMVar18 = (MethodInfo *)0x0;
                if ((ulong)uVar4 != 0) {
                  pIVar9 = (pSVar10->_1).interfaceOffsets;
                  pMVar18 = (MethodInfo *)((ulong)uVar4 << 4);
                  lVar23 = 0;
                  do {
                    if (*(long *)((long)&pIVar9->interfaceType + lVar23) == TypeInfo_IDisposable) {
                      pMVar18 = (MethodInfo *)((long)*(int *)((long)&pIVar9->offset + lVar23) * 0x10);
                      puVar19 = (undefined8 *)((long)&pMVar18[3].parameters + (long)pSVar10);
                      goto label_0452e19d;
                    }
                    lVar23 = lVar23 + 0x10;
                  } while (pMVar18 != (MethodInfo *)lVar23);
                }
                puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IDisposable,0);
label_0452e19d:
                (*(code *)*puVar19)(unaff_RBX,puVar19[1]);
                method_02 = extraout_RDX_02;
              }
              if ((MethodInfo *)ppSVar24 != (MethodInfo *)0x0) goto label_0452e4f0;
              Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(rows,"TITANS KILLED",method_02);
              pSVar6 = (pGVar11->fields).TitansKilledTotal;
              if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                            CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                unaff_RBX = &"Total";
                Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat(rows,"Total",pSVar15,pMVar18);
                pSVar6 = (pGVar11->fields).TitansKilledBlade;
                if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                  uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                              CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                  pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                  ppSVar22 = &"Blade";
                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                            (rows,"Blade",pSVar15,(MethodInfo *)&"Blade");
                  pSVar6 = (pGVar11->fields).TitansKilledAHSS;
                  if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                    uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                    pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                              (rows,"AHSS",pSVar15,(MethodInfo *)ppSVar22);
                    pSVar6 = (pGVar11->fields).TitansKilledAPG;
                    if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                      uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                  CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                      pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                      ppSVar24 = &"APG";
                      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                (rows,"APG",pSVar15,(MethodInfo *)ppSVar22);
                      pSVar6 = (pGVar11->fields).TitansKilledThunderspear;
                      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                        uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                    CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                        pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                  (rows,"Thunder Spear",pSVar15,(MethodInfo *)ppSVar22);
                        pSVar6 = (pGVar11->fields).TitansKilledOther;
                        if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                          uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                      CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                          pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                          ppSVar22 = &"Other";
                          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                    (rows,"Other",pSVar15,(MethodInfo *)&"Other");
                          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(rows,"HUMANS KILLED",method_03);
                          pSVar6 = (pGVar11->fields).HumansKilledTotal;
                          if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                            uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                        CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                            pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                      (rows,"Total",pSVar15,(MethodInfo *)ppSVar22);
                            pSVar6 = (pGVar11->fields).HumansKilledBlade;
                            if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                              uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                          CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                              pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                              ppSVar22 = &"Blade";
                              Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                        (rows,"Blade",pSVar15,(MethodInfo *)&"Blade");
                              pSVar6 = (pGVar11->fields).HumansKilledAHSS;
                              if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                                uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                            CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                                pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                                Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                          (rows,"AHSS",pSVar15,(MethodInfo *)ppSVar22);
                                pSVar6 = (pGVar11->fields).HumansKilledAPG;
                                if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                                  uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                              CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                                  pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                            (rows,"APG",pSVar15,(MethodInfo *)ppSVar22);
                                  pSVar6 = (pGVar11->fields).HumansKilledThunderspear;
                                  if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                                    uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                                CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                                    pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                                    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                              (rows,"Thunder Spear",pSVar15,(MethodInfo *)ppSVar22);
                                    pSVar6 = (pGVar11->fields).HumansKilledTitan;
                                    if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                                      uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                                  CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                                      pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                                      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                                (rows,"Titan",pSVar15,(MethodInfo *)&"Titan");
                                      pSVar6 = (pGVar11->fields).HumansKilledOther;
                                      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                                        uStack_38 = (Gisketch_Aottg2UI_Code_AottgUi_o *)
                                                    CONCAT44(uStack_38._4_4_,(pSVar6->fields)._value);
                                        pSVar15 = System_Int32__ToString(__this_01,(MethodInfo *)0x0);
                                        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                                  (rows,"Other",pSVar15,(MethodInfo *)&"Other");
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
            }
          }
        }
      }
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_0452e4f0:
    uVar21 = il2cpp_runtime_helper_022fefe0();
    if ((System_String_o *)unaff_RBX != (System_String_o *)0x0) {
      pSVar10 = ((System_String_o *)unaff_RBX)->klass;
      uVar5._0_1_ = (pSVar10->_2).rank;
      uVar5._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pSVar10->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar23) == TypeInfo_IDisposable) {
            pVVar20 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar23);
            goto label_0452e4cd;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar23);
      }
      pVVar20 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IDisposable,0);
label_0452e4cd:
      (*pVVar20->methodPtr)(unaff_RBX,pVVar20->method);
    }
label_0452e4d6:
    if ((MethodInfo *)ppSVar24 == (MethodInfo *)0x0) {
      _Unwind_Resume(uVar21);
    }
    il2cpp_runtime_helper_022fefe0(ppSVar24);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x452e7f0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass3_0$$<Stat>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0___Stat_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x452e820

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0___Stat_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass3_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)__this;
  if (g_data_057aee9e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"subtext");
    method_00 = (MethodInfo *)&"header";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee9e = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,(__this->fields).label,"subtext",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    method_00 = "Column";
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,pGVar2);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,(__this->fields).value,"header",(System_String_o *)0x0,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      method_00 = "Column";
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,pGVar2);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Build (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x452d930

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  long lVar1;
  Il2CppObject *__this_00;
  GameProgress_AchievementCount_o *pGVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *__this_01;
  
  if (g_data_057aee9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass0_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stats are unavailable until game progress is loaded.");
    il2cpp_runtime_helper_023445d0(&"profile-stats-unavailable");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"profile-stats-list");
    g_data_057aee9a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass0_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_GameProgressManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)((long)TypeInfo_GameProgressManager[7].fields + 8);
    __this_01 = TypeInfo_GameProgressManager;
  }
  else {
    lVar1 = *(long *)((long)TypeInfo_GameProgressManager[7].fields + 8);
    __this_01 = TypeInfo_GameProgressManager;
  }
  TypeInfo_GameProgressManager = __this_01;
  if (lVar1 == 0) {
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Callout(ui,2,"Stats are unavailable until game progress is loaded.","profile-stats-unavailable",(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = *(Il2CppClass **)(lVar1 + 0x30);
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    __this_01 = (System_String_o *)0x0;
    if (*(GameProgress_AchievementContainer_o **)(lVar1 + 0x20) != (GameProgress_AchievementContainer_o *)0x0)
    {
      pGVar2 = GameProgress_AchievementContainer__GetAchievementCount
                         (*(GameProgress_AchievementContainer_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      __this_00[1].monitor = pGVar2;
      il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pGVar2);
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      __this_01 = "Column";
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,8.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"default",build,"profile-stats-list",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$BuildRows
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows (Gisketch_Aottg2UI_Code_AottgUi_o* ui, GameProgress_GameStatContainer_o* stat, GameProgress_AchievementCount_o* achievements, const MethodInfo* method);
// 0x452dbb0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,GameProgress_GameStatContainer_o *stat,
               GameProgress_AchievementCount_o *achievements,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  GameProgress_DamageSetting_o *__this;
  System_Collections_Generic_IEnumerable_ValueTuple_string__string___c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_String_c *pSVar10;
  int iVar11;
  char cVar12;
  int32_t iVar13;
  undefined8 in_RAX;
  System_String_o *pSVar14;
  System_TimeSpan_o ts;
  System_String_o *pSVar15;
  System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *pSVar16;
  MethodInfo *pMVar17;
  undefined8 *puVar18;
  VirtualInvokeData *pVVar19;
  undefined8 uVar20;
  System_String_o **ppSVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_String_o **unaff_RBX;
  int32_t __this_00;
  long lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  int32_t iStack_38;
  float fStack_34;
  
  fStack_34 = (float)((ulong)in_RAX >> 0x20);
  pMVar17 = (MethodInfo *)achievements;
  if (g_data_057aee9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameProgressManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_ValueTuple_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_ValueTuple_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Silver");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"Exp");
    il2cpp_runtime_helper_023445d0(&"Other");
    il2cpp_runtime_helper_023445d0(&"Total");
    il2cpp_runtime_helper_023445d0(&"Bronze");
    il2cpp_runtime_helper_023445d0(&"Gold");
    il2cpp_runtime_helper_023445d0(&"DAMAGE");
    il2cpp_runtime_helper_023445d0(&"ACHIEVEMENTS");
    il2cpp_runtime_helper_023445d0(&"Playtime");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Thunder Spear");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"Level");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"GENERAL");
    il2cpp_runtime_helper_023445d0(&"Highest Speed");
    il2cpp_runtime_helper_023445d0(&"HUMANS KILLED");
    il2cpp_runtime_helper_023445d0(&"TITANS KILLED");
    g_data_057aee9b = '\x01';
    pMVar17 = extraout_RDX;
  }
  iStack_38 = 0;
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(ui,"GENERAL",pMVar17);
  if ((stat != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar6 = (stat->fields).Level, pSVar6 != (Settings_IntSetting_o *)0x0)) {
    iStack_38 = (pSVar6->fields)._value;
    __this_00 = (int32_t)&iStack_38;
    pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat(ui,"Level",pSVar14,(MethodInfo *)&"Level");
    pSVar6 = (stat->fields).Exp;
    if (pSVar6 != (Settings_IntSetting_o *)0x0) {
      _iStack_38 = CONCAT44(fStack_34,(pSVar6->fields)._value);
      unaff_RBX = (System_String_o **)System_Int32__ToString(__this_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar13 = GameProgress_GameProgressManager__GetExpToNext((MethodInfo *)0x0);
      iStack_38 = iVar13;
      pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
      pSVar14 = System_String__Concat_3af7150
                          ((System_String_o *)unaff_RBX,"/",pSVar14,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat(ui,"Exp",pSVar14,(MethodInfo *)&"Exp")
      ;
      pSVar7 = (stat->fields).PlayTime;
      if (pSVar7 != (Settings_FloatSetting_o *)0x0) {
        fVar23 = (pSVar7->fields)._value;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          fStack_34 = fVar23;
          il2cpp_runtime_helper_02337ed0();
          fVar23 = fStack_34;
        }
        ts = System_TimeSpan__FromSeconds((double)fVar23,(MethodInfo *)0x0);
        pSVar14 = Utility_Format__GetReadableTimespan(ts,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                  (ui,"Playtime",pSVar14,(MethodInfo *)&"Playtime");
        pSVar7 = (stat->fields).HighestSpeed;
        if (pSVar7 != (Settings_FloatSetting_o *)0x0) {
          iStack_38 = (int32_t)(pSVar7->fields)._value;
          pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                    (ui,"Highest Speed",pSVar14,(MethodInfo *)&"Highest Speed");
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(ui,"ACHIEVEMENTS",method_00);
          if (achievements != (GameProgress_AchievementCount_o *)0x0) {
            iVar11 = (int)achievements;
            pSVar14 = System_Int32__ToString(iVar11 + 0x10,(MethodInfo *)0x0);
            pSVar15 = System_Int32__ToString(iVar11 + 0x14,(MethodInfo *)0x0);
            pSVar14 = System_String__Concat_3af7150(pSVar14,"/",pSVar15,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                      (ui,"Bronze",pSVar14,(MethodInfo *)&"Bronze");
            pSVar14 = System_Int32__ToString(iVar11 + 0x18,(MethodInfo *)0x0);
            pSVar15 = System_Int32__ToString(iVar11 + 0x1c,(MethodInfo *)0x0);
            pSVar14 = System_String__Concat_3af7150(pSVar14,"/",pSVar15,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                      (ui,"Silver",pSVar14,(MethodInfo *)&"Silver");
            unaff_RBX = (System_String_o **)System_Int32__ToString(iVar11 + 0x20,(MethodInfo *)0x0);
            achievements = (GameProgress_AchievementCount_o *)&(achievements->fields).TotalGold;
            pSVar14 = System_Int32__ToString((int32_t)achievements,(MethodInfo *)0x0);
            pSVar14 = System_String__Concat_3af7150
                                ((System_String_o *)unaff_RBX,"/",pSVar14,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                      (ui,"Gold",pSVar14,(MethodInfo *)&"Gold");
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(ui,"DAMAGE",method_01);
            __this = (stat->fields).Damage;
            if ((__this != (GameProgress_DamageSetting_o *)0x0) &&
               (pSVar16 = GameProgress_DamageSetting__GetStatLabels(__this,(MethodInfo *)0x0),
               pSVar16 != (System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *)0x0)) {
              pSVar8 = pSVar16->klass;
              uVar1._0_1_ = (pSVar8->_2).rank;
              uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
              if ((ulong)uVar1 != 0) {
                pIVar9 = (pSVar8->_1).interfaceOffsets;
                lVar22 = 0;
                do {
                  if (*(long *)((long)&pIVar9->interfaceType + lVar22) == TypeInfo_IEnumerable_ValueTuple_string_string) {
                    pMVar17 = (MethodInfo *)(pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar22));
                    goto label_0452dff1;
                  }
                  lVar22 = lVar22 + 0x10;
                } while ((ulong)uVar1 << 4 != lVar22);
              }
              pMVar17 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pSVar16,TypeInfo_IEnumerable_ValueTuple_string_string,0);
label_0452dff1:
              unaff_RBX = (System_String_o **)
                          (*pMVar17->methodPointer)(pSVar16,(MethodInfo *)pMVar17->virtualMethodPointer);
              if ((System_String_o *)unaff_RBX != (System_String_o *)0x0) {
                achievements = (GameProgress_AchievementCount_o *)0x0;
                do {
                  pSVar10 = ((System_String_o *)unaff_RBX)->klass;
                  uVar2._0_1_ = (pSVar10->_2).rank;
                  uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
                  if ((ulong)uVar2 != 0) {
                    pIVar9 = (pSVar10->_1).interfaceOffsets;
                    lVar22 = 0;
                    do {
                      if (*(long *)((long)&pIVar9->interfaceType + lVar22) == TypeInfo_IEnumerator) {
                        pMVar17 = (MethodInfo *)
                                  (&(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar22));
                        goto label_0452e073;
                      }
                      lVar22 = lVar22 + 0x10;
                    } while ((ulong)uVar2 << 4 != lVar22);
                  }
                  pMVar17 = (MethodInfo *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator,0);
label_0452e073:
                  cVar12 = (*pMVar17->methodPointer)(unaff_RBX,(MethodInfo *)pMVar17->virtualMethodPointer);
                  method_02 = extraout_RDX_00;
                  if (cVar12 == '\0') goto label_0452e144;
                  pSVar10 = ((System_String_o *)unaff_RBX)->klass;
                  uVar3._0_1_ = (pSVar10->_2).rank;
                  uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
                  if ((ulong)uVar3 != 0) {
                    pIVar9 = (pSVar10->_1).interfaceOffsets;
                    lVar22 = 0;
                    do {
                      if (*(long *)((long)&pIVar9->interfaceType + lVar22) == TypeInfo_IEnumerator_ValueTuple_string_string) {
                        pMVar17 = (MethodInfo *)
                                  (&(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar22));
                        goto label_0452e0e3;
                      }
                      lVar22 = lVar22 + 0x10;
                    } while ((ulong)uVar3 << 4 != lVar22);
                  }
                  pMVar17 = (MethodInfo *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IEnumerator_ValueTuple_string_string,0);
label_0452e0e3:
                  auVar24 = (*pMVar17->methodPointer)(unaff_RBX,(MethodInfo *)pMVar17->virtualMethodPointer);
                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat(ui,auVar24._0_8_,auVar24._8_8_,pMVar17);
                } while( true );
              }
              auVar25 = il2cpp_runtime_helper_022b2c90();
              uVar20 = auVar25._0_8_;
              if (auVar25._8_4_ != 1) {
                achievements = (GameProgress_AchievementCount_o *)0x0;
                goto label_0452e4d6;
              }
              puVar18 = (undefined8 *)__cxa_begin_catch();
              achievements = (GameProgress_AchievementCount_o *)*puVar18;
              __cxa_end_catch();
              method_02 = extraout_RDX_01;
label_0452e144:
              if ((System_String_o *)unaff_RBX != (System_String_o *)0x0) {
                pSVar10 = ((System_String_o *)unaff_RBX)->klass;
                uVar4._0_1_ = (pSVar10->_2).rank;
                uVar4._1_1_ = (pSVar10->_2).minimumAlignment;
                pMVar17 = (MethodInfo *)0x0;
                if ((ulong)uVar4 != 0) {
                  pIVar9 = (pSVar10->_1).interfaceOffsets;
                  pMVar17 = (MethodInfo *)((ulong)uVar4 << 4);
                  lVar22 = 0;
                  do {
                    if (*(long *)((long)&pIVar9->interfaceType + lVar22) == TypeInfo_IDisposable) {
                      pMVar17 = (MethodInfo *)((long)*(int *)((long)&pIVar9->offset + lVar22) * 0x10);
                      puVar18 = (undefined8 *)((long)&pMVar17[3].parameters + (long)pSVar10);
                      goto label_0452e19d;
                    }
                    lVar22 = lVar22 + 0x10;
                  } while (pMVar17 != (MethodInfo *)lVar22);
                }
                puVar18 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IDisposable,0);
label_0452e19d:
                (*(code *)*puVar18)(unaff_RBX,puVar18[1]);
                method_02 = extraout_RDX_02;
              }
              if (achievements != (GameProgress_AchievementCount_o *)0x0) goto label_0452e4f0;
              Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(ui,"TITANS KILLED",method_02);
              pSVar6 = (stat->fields).TitansKilledTotal;
              if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                iStack_38 = (pSVar6->fields)._value;
                pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                unaff_RBX = &"Total";
                Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat(ui,"Total",pSVar14,pMVar17);
                pSVar6 = (stat->fields).TitansKilledBlade;
                if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                  iStack_38 = (pSVar6->fields)._value;
                  pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                  ppSVar21 = &"Blade";
                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                            (ui,"Blade",pSVar14,(MethodInfo *)&"Blade");
                  pSVar6 = (stat->fields).TitansKilledAHSS;
                  if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                    iStack_38 = (pSVar6->fields)._value;
                    pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                              (ui,"AHSS",pSVar14,(MethodInfo *)ppSVar21);
                    pSVar6 = (stat->fields).TitansKilledAPG;
                    if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                      iStack_38 = (pSVar6->fields)._value;
                      pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                (ui,"APG",pSVar14,(MethodInfo *)ppSVar21);
                      pSVar6 = (stat->fields).TitansKilledThunderspear;
                      achievements = (GameProgress_AchievementCount_o *)&"APG";
                      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                        iStack_38 = (pSVar6->fields)._value;
                        pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                  (ui,"Thunder Spear",pSVar14,(MethodInfo *)ppSVar21);
                        pSVar6 = (stat->fields).TitansKilledOther;
                        if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                          iStack_38 = (pSVar6->fields)._value;
                          pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                          ppSVar21 = &"Other";
                          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                    (ui,"Other",pSVar14,(MethodInfo *)&"Other");
                          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header(ui,"HUMANS KILLED",method_03);
                          pSVar6 = (stat->fields).HumansKilledTotal;
                          if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                            iStack_38 = (pSVar6->fields)._value;
                            pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                      (ui,"Total",pSVar14,(MethodInfo *)ppSVar21);
                            pSVar6 = (stat->fields).HumansKilledBlade;
                            if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                              iStack_38 = (pSVar6->fields)._value;
                              pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                              ppSVar21 = &"Blade";
                              Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                        (ui,"Blade",pSVar14,(MethodInfo *)&"Blade");
                              pSVar6 = (stat->fields).HumansKilledAHSS;
                              if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                                iStack_38 = (pSVar6->fields)._value;
                                pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                                Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                          (ui,"AHSS",pSVar14,(MethodInfo *)ppSVar21);
                                pSVar6 = (stat->fields).HumansKilledAPG;
                                if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                                  iStack_38 = (pSVar6->fields)._value;
                                  pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                            (ui,"APG",pSVar14,(MethodInfo *)ppSVar21);
                                  pSVar6 = (stat->fields).HumansKilledThunderspear;
                                  if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                                    iStack_38 = (pSVar6->fields)._value;
                                    pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                                    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                              (ui,"Thunder Spear",pSVar14,(MethodInfo *)ppSVar21);
                                    pSVar6 = (stat->fields).HumansKilledTitan;
                                    if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                                      iStack_38 = (pSVar6->fields)._value;
                                      pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                                      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                                (ui,"Titan",pSVar14,(MethodInfo *)&"Titan");
                                      pSVar6 = (stat->fields).HumansKilledOther;
                                      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                                        _iStack_38 = CONCAT44(fStack_34,(pSVar6->fields)._value);
                                        pSVar14 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
                                        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
                                                  (ui,"Other",pSVar14,(MethodInfo *)&"Other");
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
            }
          }
        }
      }
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_0452e4f0:
    uVar20 = il2cpp_runtime_helper_022fefe0();
    if ((System_String_o *)unaff_RBX != (System_String_o *)0x0) {
      pSVar10 = ((System_String_o *)unaff_RBX)->klass;
      uVar5._0_1_ = (pSVar10->_2).rank;
      uVar5._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pSVar10->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar22) == TypeInfo_IDisposable) {
            pVVar19 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar9->offset + lVar22);
            goto label_0452e4cd;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar22);
      }
      pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IDisposable,0);
label_0452e4cd:
      (*pVVar19->methodPtr)(unaff_RBX,pVVar19->method);
    }
label_0452e4d6:
    if (achievements == (GameProgress_AchievementCount_o *)0x0) {
      _Unwind_Resume(uVar20);
    }
    il2cpp_runtime_helper_022fefe0(achievements);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Header
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, const MethodInfo* method);
// 0x452e510

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *__this;
  System_Action_AottgUi__o *build;
  System_String_c *extraout_RDX;
  System_String_Fields SVar4;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *__this_01;
  
  SVar4 = (System_String_Fields)label;
  __this_00 = ui;
  if (g_data_057aee9c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"header";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee9c = '\x01';
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,label,"header",(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    SVar4._stringLength = 0;
    SVar4._firstChar = 0;
    SVar4._6_2_ = 0;
    __this_00 = "Column";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar1->fields).search,pGVar3);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Stat_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"row");
    g_data_057aee9d = '\x01';
  }
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  __this_01 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (System_String_o *)0x0) {
    __this->fields = SVar4;
    il2cpp_runtime_helper_022b4080(&__this->fields,SVar4);
    __this[1].klass = extraout_RDX;
    il2cpp_runtime_helper_022b4080(__this + 1,extraout_RDX);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this_01 = "Row";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        16.0,pGVar2,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (__this_00,"row",build,(System_String_o *)0x0,pGVar3,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Stat
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, System_String_o* value, const MethodInfo* method);
// 0x452e630

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,System_String_o *value,
               MethodInfo *method)

{
  System_String_o *__this;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *__this_00;
  
  if (g_data_057aee9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Stat_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"row");
    g_data_057aee9d = '\x01';
  }
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (System_String_o *)0x0) {
    __this->fields = (System_String_Fields)label;
    il2cpp_runtime_helper_022b4080(&__this->fields,label);
    __this[1].klass = (System_String_c *)value;
    il2cpp_runtime_helper_022b4080(__this + 1,value);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this_00 = "Row";
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","Center",(System_String_o *)0x0,(System_String_o *)0x0,
                        16.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"row",build,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x452b6b0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


