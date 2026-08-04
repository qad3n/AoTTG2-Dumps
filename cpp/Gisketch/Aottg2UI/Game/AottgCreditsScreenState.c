// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreenState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsScreenState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$get_Credits
// il2cpp: ApplicationManagers_Credits_AottgCreditsResponse_o* Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_Credits (const MethodInfo* method);
// 0x44e9ca0

ApplicationManagers_Credits_AottgCreditsResponse_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_Credits(MethodInfo *method)

{
  if (g_data_057aec26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsScreenState);
    g_data_057aec26 = '\x01';
  }
  return (ApplicationManagers_Credits_AottgCreditsResponse_o *)**(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$set_Credits
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__set_Credits (ApplicationManagers_Credits_AottgCreditsResponse_o* value, const MethodInfo* method);
// 0x44e9ce0

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__set_Credits
               (ApplicationManagers_Credits_AottgCreditsResponse_o *value,MethodInfo *method)

{
  if (g_data_057aec27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsScreenState);
    g_data_057aec27 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8) = value;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsScreenState + 0xb8),value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$get_HasCategories
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories (const MethodInfo* method);
// 0x44e84b0

bool_conflict Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories(MethodInfo *method)

{
  undefined4 *puVar1;
  int32_t *piVar2;
  long *plVar3;
  System_String_o *icon;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this;
  undefined4 uVar4;
  int iVar5;
  bool_conflict extraout_EAX;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar9;
  System_String_o *label;
  System_String_o *textKey;
  MethodInfo *method_00;
  InvokerMethod pIVar10;
  long lVar11;
  long lVar12;
  System_String_o *id;
  ulong uVar13;
  long unaff_R15;
  undefined8 in_stack_ffffffffffffff20;
  MethodInfo *pMVar14;
  void *pvVar15;
  System_String_Fields SVar16;
  undefined8 uVar17;
  
  if (g_data_057aec28 == '\0') {
    method = (MethodInfo *)&TypeInfo_IReadOnlyCollection_AottgCreditCategory;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec28 = '\x01';
  }
  if (g_data_057aecb2 == '\0') {
    method = (MethodInfo *)&TypeInfo_AottgCreditsScreenState;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecb2 = '\x01';
  }
  if (**(long **)(TypeInfo_AottgCreditsScreenState + 0xb8) == 0) {
    return 0;
  }
  plVar3 = *(long **)(**(long **)(TypeInfo_AottgCreditsScreenState + 0xb8) + 0x10);
  if (plVar3 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec1a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi_AottgScreenSectionContext);
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenSection);
      il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditCategory);
      il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditCategory);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreditSections_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass9_0);
      il2cpp_runtime_helper_023445d0();
      g_data_057aec1a = '\x01';
    }
    if ((method != (MethodInfo *)0x0) && (pIVar10 = method->invoker_method, pIVar10 != (InvokerMethod)0x0)) {
      lVar8 = *(long *)pIVar10;
      if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar11) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
            puVar6 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar11) * 0x10 + lVar8 + 0x138);
            goto label_044e8681;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar11);
      }
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar10,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8681:
      uVar4 = (*(code *)*puVar6)(pIVar10,puVar6[1]);
      lVar8 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgScreenSection,uVar4);
      pIVar10 = method->invoker_method;
      if (pIVar10 != (InvokerMethod)0x0) {
        uVar13 = 0;
        pMVar14 = method;
        do {
          lVar11 = *(long *)pIVar10;
          if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
                puVar6 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
                goto label_044e8723;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
          }
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar10,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8723:
          iVar5 = (*(code *)*puVar6)(pIVar10);
          if ((long)iVar5 <= (long)uVar13) goto label_044e8973;
          __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass9_0);
          System_Object___ctor(__this_00,(MethodInfo *)0x0);
          unaff_R15 = lVar8;
          if (__this_00 == (Il2CppObject *)0x0) break;
          *(int *)&__this_00[1].monitor = (int)uVar13;
          pIVar10 = method->invoker_method;
          if (pIVar10 == (InvokerMethod)0x0) break;
          lVar11 = *(long *)pIVar10;
          if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IReadOnlyList_AottgCreditCategory) {
                puVar6 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
                method = pMVar14;
                goto label_044e87d3;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
          }
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar10,TypeInfo_IReadOnlyList_AottgCreditCategory,0);
          method = pMVar14;
label_044e87d3:
          pIVar9 = (Il2CppClass *)(*(code *)*puVar6)(pIVar10,uVar13 & 0xffffffff,puVar6[1]);
          __this_00[1].klass = pIVar9;
          il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar9);
          if (__this_00[1].klass == (Il2CppClass *)0x0) break;
          label = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId
                            ((System_String_o *)((__this_00[1].klass)->_1).name,
                             *(int32_t *)&__this_00[1].monitor,method_00);
          if (__this_00[1].klass == (Il2CppClass *)0x0) break;
          icon = (System_String_o *)((__this_00[1].klass)->_1).name;
          textKey = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
          uVar7 = 0x44e8848;
          System_Action_object__AottgScreenSectionContext____ctor();
          if (__this_00[1].klass == (Il2CppClass *)0x0) break;
          uVar17 = 0;
          SVar16._stringLength = 0;
          SVar16._firstChar = 0;
          SVar16._6_2_ = 0;
          pvVar15 = (void *)0x0;
          id = (System_String_o *)&stack0xffffffffffffff30;
          __this.fields.Id = (System_String_o *)((__this_00[1].klass)->_1).name;
          __this.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
          __this.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
          __this.fields.Label = (System_String_o *)0x0;
          __this.fields.TextKey = (System_String_o *)0x1;
          __this.fields.Icon = (System_String_o *)0x1;
          __this.fields.SearchTitle = (System_String_o *)0x0;
          __this.fields.Keywords = (System_String_o *)uVar7;
          __this.fields.AutoAddKeywords = (int)in_stack_ffffffffffffff20;
          __this.fields.HideSearch = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
          __this.fields._72_8_ = method;
          Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                    (__this,id,label,icon,"trophy",textKey,(System_String_o *)0x0,0,(System_String_o *)0x0
                     ,(System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,0,0,(MethodInfo *)0x0);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar13) {
            il2cpp_runtime_helper_022b2ca0();
            System_Object___ctor((Il2CppObject *)id,(MethodInfo *)0x0);
            return extraout_EAX;
          }
          *(undefined8 *)(lVar8 + 0x60 + uVar13 * 0x48) = 0;
          puVar1 = (undefined4 *)(lVar8 + 0x50 + uVar13 * 0x48);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1 = (undefined4 *)(lVar8 + 0x40 + uVar13 * 0x48);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = (int)uVar17;
          puVar1[3] = (int)((ulong)uVar17 >> 0x20);
          piVar2 = (int32_t *)(lVar8 + 0x30 + uVar13 * 0x48);
          *piVar2 = SVar16._stringLength;
          piVar2[1] = SVar16._4_4_;
          piVar2[2] = 0;
          piVar2[3] = 0;
          puVar1 = (undefined4 *)(lVar8 + 0x20 + uVar13 * 0x48);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = (int)pvVar15;
          puVar1[3] = (int)((ulong)pvVar15 >> 0x20);
          pMVar14 = method;
          il2cpp_runtime_helper_022b4080(lVar8 + 0x20 + uVar13 * 0x48,0);
          uVar13 = uVar13 + 1;
          pIVar10 = method->invoker_method;
        } while (pIVar10 != (InvokerMethod)0x0);
      }
    }
    lVar8 = unaff_R15;
    il2cpp_runtime_helper_022b2c90();
label_044e8973:
    return (bool_conflict)lVar8;
  }
  lVar8 = *plVar3;
  if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
    lVar11 = 0;
    do {
      if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar11) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
        puVar6 = (undefined8 *)((long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar11) * 0x10 + lVar8 + 0x138);
        goto label_044e8575;
      }
      lVar11 = lVar11 + 0x10;
    } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar11);
  }
  puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar3,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8575:
  uVar7 = (*(code *)*puVar6)(plVar3,puVar6[1]);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),0 < (int)uVar7);
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$Set
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Set (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x44e9d30

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Set
               (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  if (g_data_057aecb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsScreenState);
    g_data_057aecb3 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8) = credits;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsScreenState + 0xb8),credits);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$Clear
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Clear (const MethodInfo* method);
// 0x44e9d80

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Clear(MethodInfo *method)

{
  if (g_data_057aecb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsScreenState);
    g_data_057aecb3 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8) = 0;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsScreenState + 0xb8),0);
  return;
}


