// Type: Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileEntitlementCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog.<>c__DisplayClass36_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x4527c80

void Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog.<>c__DisplayClass36_0$$<HasRole>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___HasRole_b__0 (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o* __this, System_String_o* role, const MethodInfo* method);
// 0x4527c90

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___HasRole_b__0
          (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o *__this,
          System_String_o *role,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__Equals_3af50f0(role,(__this->fields).required,5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PresetGuildLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel (System_String_o* id, const MethodInfo* method);
// 0x45229d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
          (System_String_o *id,MethodInfo *method)

{
  code *vtableDispatch;
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  long *plVar5;
  System_String_o *pSVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  int iVar9;
  MethodInfo *value;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  MethodInfo *method_00;
  long lVar11;
  long *unaff_R12;
  undefined1 auVar12 [12];
  long lStack_50;
  
  if (g_data_057aee3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"label");
    il2cpp_runtime_helper_023445d0(&"PresetGuilds");
    g_data_057aee3e = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("PresetGuilds",id,in_RDX);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = (MethodInfo *)0x0;
  pSVar10 = pSVar4;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return id;
  }
  if ((pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (value = "label",
     plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar4,"label",(pSVar4->klass->vtable)._7_get_Item.method),
     pSVar10 = pSVar4, plVar5 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar5 + 0x1c8);
    pSVar6 = (System_String_o *)
             (*vtableDispatch)(plVar5,*(undefined8 *)(*plVar5 + 0x1d0),vtableDispatch);
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee51 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"id");
    g_data_057aee51 = '\x01';
  }
  method_00 = value;
  bVar3 = System_String__IsNullOrWhiteSpace((System_String_o *)value,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)0x0;
  if ((char)bVar3 == '\0') {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
      iVar9 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,pSVar10,(pSVar4->klass->vtable)._7_get_Item.method);
      iVar9 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar9 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar6 = (System_String_o *)0x0;
    if ((char)bVar3 == '\0') {
      if ((pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (plVar5 = (long *)(*(pSVar4->klass->vtable)._27_get_Children.methodPtr)
                                     (pSVar4,(pSVar4->klass->vtable)._27_get_Children.method),
         plVar5 == (long *)0x0)) {
label_04522e35:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        lVar1 = *plVar5;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar11 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IEnumerable_JSONNode) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + lVar1 + 0x138);
              goto label_04522c1f;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,TypeInfo_IEnumerable_JSONNode,0);
label_04522c1f:
        unaff_R12 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
        if (unaff_R12 != (long *)0x0) {
          lStack_50 = 0;
          do {
            lVar1 = *unaff_R12;
            if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
              lVar11 = 0;
              do {
                if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
                  puVar7 = (undefined8 *)
                           ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + lVar1 + 0x138);
                  goto label_04522cb3;
                }
                lVar11 = lVar11 + 0x10;
              } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
            }
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_04522cb3:
            cVar2 = (*(code *)*puVar7)(unaff_R12,puVar7[1]);
            if (cVar2 == '\0') {
              iVar9 = 9;
              goto label_04522d95;
            }
            lVar1 = *unaff_R12;
            if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
              lVar11 = 0;
              do {
                if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IEnumerator_JSONNode) {
                  puVar7 = (undefined8 *)
                           ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + lVar1 + 0x138);
                  goto label_04522d23;
                }
                lVar11 = lVar11 + 0x10;
              } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
            }
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator_JSONNode,0);
label_04522d23:
            pSVar8 = (System_String_o *)(*(code *)*puVar7)(unaff_R12,puVar7[1]);
            if (pSVar8 == (System_String_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
label_04522e30:
              il2cpp_runtime_helper_022b2c90();
              goto label_04522e35;
            }
            plVar5 = (long *)(*(pSVar8->klass->vtable)._7_CompareTo.methodPtr)
                                       (pSVar8,"id",(pSVar8->klass->vtable)._7_CompareTo.method);
            if (plVar5 == (long *)0x0) goto label_04522e30;
            pSVar6 = (System_String_o *)
                     (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
            bVar3 = System_String__Equals_3af50f0(pSVar6,(System_String_o *)value,5,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              iVar9 = 8;
              goto joined_r0x04522d8c;
            }
          } while( true );
        }
      }
      il2cpp_runtime_helper_022b2c90();
      do {
        auVar12 = il2cpp_runtime_helper_022fefe0();
        iVar9 = 0;
        if (auVar12._8_4_ != 1) {
          if (unaff_R12 == (long *)0x0) goto label_04522f26;
          lVar1 = *unaff_R12;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) == 0) goto label_04522eff;
          lVar11 = 0;
          goto label_04522ef0;
        }
        plVar5 = (long *)__cxa_begin_catch();
        lStack_50 = *plVar5;
        __cxa_end_catch();
label_04522d95:
        pSVar8 = (System_String_o *)0x0;
joined_r0x04522d8c:
        if (unaff_R12 != (long *)0x0) {
          lVar1 = *unaff_R12;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar11 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
                puVar7 = (undefined8 *)
                         (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
                goto label_04522dfd;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11);
          }
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_04522dfd:
          (*(code *)*puVar7)(unaff_R12,puVar7[1]);
        }
      } while (lStack_50 != 0);
      pSVar6 = (System_String_o *)0x0;
      if (iVar9 == 8) {
        pSVar6 = pSVar8;
      }
    }
  }
  return pSVar6;
  while (lVar11 = lVar11 + 0x10, (ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar11) {
label_04522ef0:
    if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
      puVar7 = (undefined8 *)(lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
      goto label_04522f1d;
    }
  }
label_04522eff:
  puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_04522f1d:
  (*(code *)*puVar7)(unaff_R12,puVar7[1]);
label_04522f26:
  _Unwind_Resume(auVar12._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$BadgeLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel (System_String_o* id, const MethodInfo* method);
// 0x4522f60

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel(System_String_o *id,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  code *vtableDispatch;
  System_String_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  char cVar8;
  bool_conflict bVar9;
  System_String_o *pSVar10;
  long *plVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  SimpleJSONFixed_JSONArray_o *__this;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_string__o *__this_00;
  undefined8 *puVar13;
  VirtualInvokeData *pVVar14;
  undefined8 uVar15;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar16;
  MethodInfo *method_01;
  System_String_o *pSVar17;
  SimpleJSONFixed_JSONNode_o *a;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [12];
  long lStack_60;
  SimpleJSONFixed_JSONArray_o *pSStack_58;
  
  if (g_data_057aee3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"Badges");
    il2cpp_runtime_helper_023445d0(&"label");
    g_data_057aee3f = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar10 = (System_String_o *)
            Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("Badges",id,in_RDX);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = pSVar10;
  bVar9 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return id;
  }
  if ((pSVar10 != (System_String_o *)0x0) &&
     (plVar11 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._7_get_Item.methodPtr)
                                  (pSVar10,"label",
                                   (((SimpleJSONFixed_JSONNode_c *)pSVar10->klass)->vtable)._7_get_Item.method
                                  ), pSVar17 = pSVar10, plVar11 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar11 + 0x1c8);
    pSVar10 = (System_String_o *)
              (*vtableDispatch)(plVar11,*(undefined8 *)(*plVar11 + 0x1d0),vtableDispatch);
    return pSVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = extraout_RDX_00;
  if (g_data_057aee40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"Badges");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Roles/");
    il2cpp_runtime_helper_023445d0(&"id");
    g_data_057aee40 = '\x01';
    pMVar16 = extraout_RDX_01;
  }
  pSVar12 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("Badges",pSVar17,pMVar16);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = pSVar12;
  bVar9 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if ((pSVar12 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar11 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar12,"id",(pSVar12->klass->vtable)._7_get_Item.method),
     a = pSVar12, plVar11 != (long *)0x0)) {
    pSVar10 = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
    pSVar10 = System_String__Concat_3ae5ba0("UI/Icons/Roles/",pSVar10,(MethodInfo *)0x0);
    return pSVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"Badges");
    il2cpp_runtime_helper_023445d0(&"id");
    g_data_057aee41 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return (System_String_o *)__this;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar16 = (a->klass->vtable)._27_get_Children.method;
    method_00 = (MethodInfo *)(*(a->klass->vtable)._27_get_Children.methodPtr)(a);
    __this_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
                          ((System_Collections_Generic_IEnumerable_JSONNode__o *)method_00,pMVar16);
    pSVar12 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar12 = (SimpleJSONFixed_JSONNode_o *)0x0;
      iVar5 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar12,"Badges",(pSVar12->klass->vtable)._7_get_Item.method);
      iVar5 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return (System_String_o *)__this;
    }
    if ((pSVar12 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar11 = (long *)(*(pSVar12->klass->vtable)._27_get_Children.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._27_get_Children.method),
       plVar11 != (long *)0x0)) {
      lVar19 = *plVar11;
      if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
        lVar18 = 0;
        do {
          if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar18) == TypeInfo_IEnumerable_JSONNode) {
            puVar13 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar18) * 0x10 + lVar19 + 0x138);
            goto label_0452331f;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar18);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IEnumerable_JSONNode,0);
label_0452331f:
      id = (System_String_o *)(*(code *)*puVar13)(plVar11,puVar13[1]);
      pSStack_58 = __this;
      if (id == (System_String_o *)0x0) goto label_04523569;
      lStack_60 = 0;
label_04523350:
      pSVar6 = id->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator) {
            pVVar14 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar19);
            goto label_045233a3;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar19);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(id,TypeInfo_IEnumerator,0);
label_045233a3:
      cVar8 = (*pVVar14->methodPtr)(id,pVVar14->method);
      if (cVar8 == '\0') goto label_04523648;
      pSVar6 = id->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IEnumerator_JSONNode) {
            pVVar14 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar19);
            goto label_04523413;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar19);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(id,TypeInfo_IEnumerator_JSONNode,0);
label_04523413:
      plVar11 = (long *)(*pVVar14->methodPtr)(id,pVVar14->method);
      if (plVar11 != (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                    (plVar11,"id",*(undefined8 *)(*plVar11 + 0x1b0));
        if (plVar11 == (long *)0x0) goto label_04523555;
        pSVar10 = (System_String_o *)
                  (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_0452355a;
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar10,
                           MethodInfo_Boolean_Contains);
        pSVar17 = "Badges";
        if ((char)bVar9 != '\0') {
          pMVar16 = extraout_RDX_02;
          if (g_data_057aee4f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            g_data_057aee4f = '\x01';
            pMVar16 = extraout_RDX_03;
          }
          pSVar12 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(pSVar17,pSVar10,pMVar16);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar16 = (MethodInfo *)0x0;
          bVar9 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((((char)bVar9 != '\0') &&
              (bVar9 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_44268e0
                                 (pSVar12,pMVar16), (char)bVar9 != '\0')) &&
             (bVar9 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains
                                (__this,pSVar10,method_01), (char)bVar9 == '\0')) {
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar10,(MethodInfo *)0x0);
            if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04523564;
            (*(__this->klass->vtable)._21_Add.methodPtr)
                      (__this,pSVar12,(__this->klass->vtable)._21_Add.method);
          }
        }
        goto label_04523350;
      }
      il2cpp_runtime_helper_022b2c90();
label_04523555:
      il2cpp_runtime_helper_022b2c90();
label_0452355a:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04523564:
  il2cpp_runtime_helper_022b2c90();
label_04523569:
  auVar20 = il2cpp_runtime_helper_022b2c90();
  uVar15 = auVar20._0_8_;
  if (auVar20._8_4_ != 1) {
    lStack_60 = 0;
    if (id == (System_String_o *)0x0) goto label_04523746;
    goto label_045236e7;
  }
  plVar11 = (long *)__cxa_begin_catch();
  lStack_60 = *plVar11;
  __cxa_end_catch();
label_04523648:
  if (id != (System_String_o *)0x0) {
    pSVar6 = id->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar19 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IDisposable) {
          pVVar14 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar19);
          goto label_045236ad;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar19);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(id,TypeInfo_IDisposable,0);
label_045236ad:
    (*pVVar14->methodPtr)(id,pVVar14->method);
  }
  if (lStack_60 == 0) {
    return (System_String_o *)pSStack_58;
  }
  do {
    uVar15 = il2cpp_runtime_helper_022fefe0();
    if (id != (System_String_o *)0x0) {
label_045236e7:
      pSVar6 = id->klass;
      uVar4._0_1_ = (pSVar6->_2).rank;
      uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar19) == TypeInfo_IDisposable) {
            pVVar14 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar19);
            goto label_0452373d;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar19);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(id,TypeInfo_IDisposable,0);
label_0452373d:
      (*pVVar14->methodPtr)(id,pVVar14->method);
    }
label_04523746:
    if (lStack_60 == 0) {
      _Unwind_Resume(uVar15);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$BadgeIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon (System_String_o* id, const MethodInfo* method);
// 0x4523030

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon(System_String_o *id,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *group;
  char cVar3;
  bool_conflict bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *__this;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_string__o *__this_00;
  undefined8 *puVar8;
  undefined8 uVar9;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar10;
  MethodInfo *method_01;
  SimpleJSONFixed_JSONNode_o *a;
  long lVar11;
  long *unaff_R14;
  undefined1 auVar12 [12];
  long lStack_48;
  SimpleJSONFixed_JSONArray_o *pSStack_40;
  
  if (g_data_057aee40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"Badges");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Roles/");
    il2cpp_runtime_helper_023445d0(&"id");
    g_data_057aee40 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("Badges",id,in_RDX);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = pSVar5;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar5,"id",(pSVar5->klass->vtable)._7_get_Item.method), a = pSVar5,
     plVar6 != (long *)0x0)) {
    pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    pSVar7 = System_String__Concat_3ae5ba0("UI/Icons/Roles/",pSVar7,(MethodInfo *)0x0);
    return pSVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"Badges");
    il2cpp_runtime_helper_023445d0(&"id");
    g_data_057aee41 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (System_String_o *)__this;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar10 = (a->klass->vtable)._27_get_Children.method;
    method_00 = (MethodInfo *)(*(a->klass->vtable)._27_get_Children.methodPtr)(a);
    __this_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
                          ((System_Collections_Generic_IEnumerable_JSONNode__o *)method_00,pMVar10);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,"Badges",(pSVar5->klass->vtable)._7_get_Item.method);
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return (System_String_o *)__this;
    }
    if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar6 = (long *)(*(pSVar5->klass->vtable)._27_get_Children.methodPtr)
                                   (pSVar5,(pSVar5->klass->vtable)._27_get_Children.method),
       plVar6 != (long *)0x0)) {
      lVar2 = *plVar6;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar11) == TypeInfo_IEnumerable_JSONNode) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar11) * 0x10 + lVar2 + 0x138);
            goto label_0452331f;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar11);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IEnumerable_JSONNode,0);
label_0452331f:
      unaff_R14 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
      pSStack_40 = __this;
      if (unaff_R14 == (long *)0x0) goto label_04523569;
      lStack_48 = 0;
label_04523350:
      lVar2 = *unaff_R14;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar11) * 0x10 + lVar2 + 0x138);
            goto label_045233a3;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar11);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IEnumerator,0);
label_045233a3:
      cVar3 = (*(code *)*puVar8)(unaff_R14,puVar8[1]);
      if (cVar3 == '\0') goto label_04523648;
      lVar2 = *unaff_R14;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar11) == TypeInfo_IEnumerator_JSONNode) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar11) * 0x10 + lVar2 + 0x138);
            goto label_04523413;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar11);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IEnumerator_JSONNode,0);
label_04523413:
      plVar6 = (long *)(*(code *)*puVar8)(unaff_R14,puVar8[1]);
      if (plVar6 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,"id",*(undefined8 *)(*plVar6 + 0x1b0));
        if (plVar6 == (long *)0x0) goto label_04523555;
        pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_0452355a;
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar7,
                           MethodInfo_Boolean_Contains);
        group = "Badges";
        if ((char)bVar4 != '\0') {
          pMVar10 = extraout_RDX_00;
          if (g_data_057aee4f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            g_data_057aee4f = '\x01';
            pMVar10 = extraout_RDX_01;
          }
          pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,pSVar7,pMVar10);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar10 = (MethodInfo *)0x0;
          bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((((char)bVar4 != '\0') &&
              (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_44268e0
                                 (pSVar5,pMVar10), (char)bVar4 != '\0')) &&
             (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains(__this,pSVar7,method_01)
             , (char)bVar4 == '\0')) {
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
            if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04523564;
            (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method)
            ;
          }
        }
        goto label_04523350;
      }
      il2cpp_runtime_helper_022b2c90();
label_04523555:
      il2cpp_runtime_helper_022b2c90();
label_0452355a:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04523564:
  il2cpp_runtime_helper_022b2c90();
label_04523569:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  uVar9 = auVar12._0_8_;
  if (auVar12._8_4_ != 1) {
    lStack_48 = 0;
    if (unaff_R14 == (long *)0x0) goto label_04523746;
    goto label_045236e7;
  }
  plVar6 = (long *)__cxa_begin_catch();
  lStack_48 = *plVar6;
  __cxa_end_catch();
label_04523648:
  if (unaff_R14 != (long *)0x0) {
    lVar2 = *unaff_R14;
    if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
          puVar8 = (undefined8 *)(lVar2 + (long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar11) * 0x10 + 0x138)
          ;
          goto label_045236ad;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar11);
    }
    puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IDisposable,0);
label_045236ad:
    (*(code *)*puVar8)(unaff_R14,puVar8[1]);
  }
  if (lStack_48 == 0) {
    return (System_String_o *)pSStack_40;
  }
  do {
    uVar9 = il2cpp_runtime_helper_022fefe0();
    if (unaff_R14 != (long *)0x0) {
label_045236e7:
      lVar2 = *unaff_R14;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
            puVar8 = (undefined8 *)
                     (lVar2 + (long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
            goto label_0452373d;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar11);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IDisposable,0);
label_0452373d:
      (*(code *)*puVar8)(unaff_R14,puVar8[1]);
    }
label_04523746:
    if (lStack_48 == 0) {
      _Unwind_Resume(uVar9);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (SimpleJSONFixed_JSONNode_o* requested, const MethodInfo* method);
// 0x4523120

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
          (SimpleJSONFixed_JSONNode_o *requested,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *group;
  char cVar3;
  bool_conflict bVar4;
  SimpleJSONFixed_JSONArray_o *__this;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_string__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_String_o *id;
  undefined8 uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar9;
  MethodInfo *method_01;
  long lVar10;
  long *unaff_R14;
  undefined1 auVar11 [12];
  long local_40;
  SimpleJSONFixed_JSONArray_o *local_38;
  
  if (g_data_057aee41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"Badges");
    il2cpp_runtime_helper_023445d0(&"id");
    g_data_057aee41 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(requested,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return __this;
  }
  if (requested != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar9 = (requested->klass->vtable)._27_get_Children.method;
    method_00 = (MethodInfo *)(*(requested->klass->vtable)._27_get_Children.methodPtr)(requested);
    __this_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
                          ((System_Collections_Generic_IEnumerable_JSONNode__o *)method_00,pMVar9);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,"Badges",(pSVar5->klass->vtable)._7_get_Item.method);
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return __this;
    }
    if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar6 = (long *)(*(pSVar5->klass->vtable)._27_get_Children.methodPtr)
                                   (pSVar5,(pSVar5->klass->vtable)._27_get_Children.method),
       plVar6 != (long *)0x0)) {
      lVar2 = *plVar6;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar10 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar10) == TypeInfo_IEnumerable_JSONNode) {
            puVar7 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar10) * 0x10 + lVar2 + 0x138);
            goto label_0452331f;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar10);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IEnumerable_JSONNode,0);
label_0452331f:
      unaff_R14 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      local_38 = __this;
      if (unaff_R14 == (long *)0x0) goto label_04523569;
      local_40 = 0;
label_04523350:
      lVar2 = *unaff_R14;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar10 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar10) == TypeInfo_IEnumerator) {
            puVar7 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar10) * 0x10 + lVar2 + 0x138);
            goto label_045233a3;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar10);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IEnumerator,0);
label_045233a3:
      cVar3 = (*(code *)*puVar7)(unaff_R14,puVar7[1]);
      if (cVar3 == '\0') goto label_04523648;
      lVar2 = *unaff_R14;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar10 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar10) == TypeInfo_IEnumerator_JSONNode) {
            puVar7 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar10) * 0x10 + lVar2 + 0x138);
            goto label_04523413;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar10);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IEnumerator_JSONNode,0);
label_04523413:
      plVar6 = (long *)(*(code *)*puVar7)(unaff_R14,puVar7[1]);
      if (plVar6 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,"id",*(undefined8 *)(*plVar6 + 0x1b0));
        if (plVar6 == (long *)0x0) goto label_04523555;
        id = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_0452355a;
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)id,
                           MethodInfo_Boolean_Contains);
        group = "Badges";
        if ((char)bVar4 != '\0') {
          pMVar9 = extraout_RDX;
          if (g_data_057aee4f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            g_data_057aee4f = '\x01';
            pMVar9 = extraout_RDX_00;
          }
          pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,pMVar9);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar9 = (MethodInfo *)0x0;
          bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((((char)bVar4 != '\0') &&
              (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_44268e0(pSVar5,pMVar9)
              , (char)bVar4 != '\0')) &&
             (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains(__this,id,method_01),
             (char)bVar4 == '\0')) {
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(id,(MethodInfo *)0x0);
            if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04523564;
            (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar5,(__this->klass->vtable)._21_Add.method)
            ;
          }
        }
        goto label_04523350;
      }
      il2cpp_runtime_helper_022b2c90();
label_04523555:
      il2cpp_runtime_helper_022b2c90();
label_0452355a:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04523564:
  il2cpp_runtime_helper_022b2c90();
label_04523569:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar11._0_8_;
  if (auVar11._8_4_ != 1) {
    local_40 = 0;
    if (unaff_R14 == (long *)0x0) goto label_04523746;
    goto label_045236e7;
  }
  plVar6 = (long *)__cxa_begin_catch();
  local_40 = *plVar6;
  __cxa_end_catch();
label_04523648:
  if (unaff_R14 != (long *)0x0) {
    lVar2 = *unaff_R14;
    if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
      lVar10 = 0;
      do {
        if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar10) == TypeInfo_IDisposable) {
          puVar7 = (undefined8 *)(lVar2 + (long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar10) * 0x10 + 0x138)
          ;
          goto label_045236ad;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar10);
    }
    puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IDisposable,0);
label_045236ad:
    (*(code *)*puVar7)(unaff_R14,puVar7[1]);
  }
  if (local_40 == 0) {
    return local_38;
  }
  do {
    uVar8 = il2cpp_runtime_helper_022fefe0();
    if (unaff_R14 != (long *)0x0) {
label_045236e7:
      lVar2 = *unaff_R14;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar10 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar10) == TypeInfo_IDisposable) {
            puVar7 = (undefined8 *)
                     (lVar2 + (long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar10) * 0x10 + 0x138);
            goto label_0452373d;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar10);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R14,TypeInfo_IDisposable,0);
label_0452373d:
      (*(code *)*puVar7)(unaff_R14,puVar7[1]);
    }
label_04523746:
    if (local_40 == 0) {
      _Unwind_Resume(uVar8);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (SimpleJSONFixed_JSONNode_o* requested, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x4524170

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4424170
          (SimpleJSONFixed_JSONNode_o *requested,System_Collections_Generic_IEnumerable_string__o *roles,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  SimpleJSONFixed_JSONNode_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  char cVar8;
  bool_conflict bVar9;
  SimpleJSONFixed_JSONArray_o *__this;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_string__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  long *plVar11;
  undefined8 *puVar12;
  VirtualInvokeData *pVVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_String_o *value;
  undefined8 uVar15;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [12];
  long local_48;
  SimpleJSONFixed_JSONArray_o *local_40;
  
  if (g_data_057aee42 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"Badges");
    il2cpp_runtime_helper_023445d0(&"id");
    g_data_057aee42 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = SimpleJSONFixed_JSONNode__op_Equality(requested,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return __this;
  }
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (requested != (SimpleJSONFixed_JSONNode_o *)0x0) {
    method_03 = (requested->klass->vtable)._27_get_Children.method;
    method_00 = (MethodInfo *)(*(requested->klass->vtable)._27_get_Children.methodPtr)(requested);
    __this_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
                          ((System_Collections_Generic_IEnumerable_JSONNode__o *)method_00,method_03);
    pSVar10 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
      iVar5 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar10,"Badges",(pSVar10->klass->vtable)._7_get_Item.method);
      iVar5 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return __this;
    }
    if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar11 = (long *)(*(pSVar10->klass->vtable)._27_get_Children.methodPtr)
                                    (pSVar10,(pSVar10->klass->vtable)._27_get_Children.method),
       plVar11 != (long *)0x0)) {
      lVar17 = *plVar11;
      if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar16) == TypeInfo_IEnumerable_JSONNode) {
            puVar12 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar16) * 0x10 + lVar17 + 0x138);
            goto label_04524368;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar16);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IEnumerable_JSONNode,0);
label_04524368:
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      local_40 = __this;
      if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0452455b;
      local_48 = 0;
label_045243a0:
      pSVar6 = pSVar10->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IEnumerator) {
            pVVar13 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar17);
            goto label_045243f3;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar17);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IEnumerator,0);
label_045243f3:
      cVar8 = (*pVVar13->methodPtr)(pSVar10,pVVar13->method);
      if (cVar8 == '\0') goto label_04524639;
      pSVar6 = pSVar10->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IEnumerator_JSONNode) {
            pVVar13 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar17);
            goto label_04524463;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar17);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IEnumerator_JSONNode,0);
label_04524463:
      pSVar14 = (SimpleJSONFixed_JSONNode_o *)(*pVVar13->methodPtr)(pSVar10,pVVar13->method);
      if (pSVar14 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        plVar11 = (long *)(*(pSVar14->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar14,"id",(pSVar14->klass->vtable)._7_get_Item.method);
        if (plVar11 == (long *)0x0) goto label_04524547;
        value = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_0452454c;
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)value,
                           MethodInfo_Boolean_Contains);
        if ((((char)bVar9 != '\0') &&
            (bVar9 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed_4424770
                               (pSVar14,roles,method_01), (char)bVar9 != '\0')) &&
           (bVar9 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains(__this,value,method_02),
           (char)bVar9 == '\0')) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = SimpleJSONFixed_JSONNode__op_Implicit(value,(MethodInfo *)0x0);
          if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_04524556;
          (*(__this->klass->vtable)._21_Add.methodPtr)(__this,pSVar14,(__this->klass->vtable)._21_Add.method);
        }
        goto label_045243a0;
      }
      il2cpp_runtime_helper_022b2c90();
label_04524547:
      il2cpp_runtime_helper_022b2c90();
label_0452454c:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04524556:
  il2cpp_runtime_helper_022b2c90();
label_0452455b:
  auVar18 = il2cpp_runtime_helper_022b2c90();
  uVar15 = auVar18._0_8_;
  if (auVar18._8_4_ != 1) {
    local_48 = 0;
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04524736;
    goto label_045246d0;
  }
  plVar11 = (long *)__cxa_begin_catch();
  local_48 = *plVar11;
  __cxa_end_catch();
label_04524639:
  if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar6 = pSVar10->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IDisposable) {
          pVVar13 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar17);
          goto label_0452469d;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar17);
    }
    pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IDisposable,0);
label_0452469d:
    (*pVVar13->methodPtr)(pSVar10,pVVar13->method);
  }
  if (local_48 == 0) {
    return local_40;
  }
  do {
    uVar15 = il2cpp_runtime_helper_022fefe0();
    if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
label_045246d0:
      pSVar6 = pSVar10->klass;
      uVar4._0_1_ = (pSVar6->_2).rank;
      uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IDisposable) {
            pVVar13 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar17);
            goto label_0452472d;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar17);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar10,TypeInfo_IDisposable,0);
label_0452472d:
      (*pVVar13->methodPtr)(pSVar10,pVVar13->method);
    }
label_04524736:
    if (local_48 == 0) {
      _Unwind_Resume(uVar15);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$OrderedBadgeIds
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds (System_Collections_Generic_IEnumerable_string__o* requested, const MethodInfo* method);
// 0x4524b90

System_String_array *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
          (System_Collections_Generic_IEnumerable_string__o *requested,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  char cVar6;
  bool_conflict bVar7;
  long in_RAX;
  System_Collections_Generic_HashSet_string__o *__this;
  MethodInfo *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  Il2CppObject *item;
  System_String_array *pSVar12;
  undefined8 uVar13;
  MethodInfo *method_00;
  long lVar14;
  long *unaff_R13;
  undefined1 auVar15 [12];
  long local_38;
  
  if (g_data_057aee43 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"Badges");
    il2cpp_runtime_helper_023445d0(&"id");
    g_data_057aee43 = '\x01';
  }
  lVar11 = MethodInfo_String_Empty_String;
  if (requested == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
      lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar14 + 0x135);
    }
    else {
      lVar14 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar14 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar14 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar14 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar14 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar11 + 0x135);
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar11 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar11 = il2cpp_runtime_helper_023009c0(lVar11);
    }
    return (System_String_array *)**(undefined8 **)(lVar11 + 0xb8);
  }
  __this = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet_44251f0(requested,method);
  __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  method_00 = __this_00;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
  if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar8,"Badges",(pSVar8->klass->vtable)._7_get_Item.method);
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  local_38 = in_RAX;
  if ((char)bVar7 == '\0') {
    if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (plVar9 = (long *)(*(pSVar8->klass->vtable)._27_get_Children.methodPtr)
                                   (pSVar8,(pSVar8->klass->vtable)._27_get_Children.method),
       plVar9 == (long *)0x0)) goto label_045251ce;
    lVar11 = *plVar9;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) * 0x10 + lVar11 + 0x138);
          goto label_04524e23;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerable_JSONNode,0);
label_04524e23:
    unaff_R13 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (unaff_R13 != (long *)0x0) {
      local_38 = 0;
label_04524e6a:
      lVar11 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) * 0x10 + lVar11 + 0x138);
            goto label_04524ec3;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_04524ec3:
      cVar6 = (*(code *)*puVar10)(unaff_R13,puVar10[1]);
      if (cVar6 == '\0') goto label_045250ab;
      lVar11 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IEnumerator_JSONNode) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) * 0x10 + lVar11 + 0x138);
            goto label_04524f33;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_JSONNode,0);
label_04524f33:
      plVar9 = (long *)(*(code *)*puVar10)(unaff_R13,puVar10[1]);
      if (plVar9 != (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,"id",*(undefined8 *)(*plVar9 + 0x1b0));
        if (plVar9 == (long *)0x0) goto label_04524fec;
        item = (Il2CppObject *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_04524ff1;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this,item,MethodInfo_Boolean_Contains);
        lVar11 = MethodInfo_Void_Add;
        if ((char)bVar7 != '\0') {
          if (__this_00 == (MethodInfo *)0x0) goto label_04524ff6;
          piVar1 = (int32_t *)((long)&__this_00->name + 4);
          *piVar1 = *piVar1 + 1;
          pSVar5 = ((System_Collections_Generic_List_object__Fields *)&__this_00->invoker_method)->_items;
          if (pSVar5 == (System_Object_array *)0x0) goto label_04524ffb;
          uVar4 = *(uint *)&__this_00->name;
          if (uVar4 < (uint)pSVar5->max_length) {
            *(uint *)&__this_00->name = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = item;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4,item);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        goto label_04524e6a;
      }
      il2cpp_runtime_helper_022b2c90();
label_04524fec:
      il2cpp_runtime_helper_022b2c90();
label_04524ff1:
      il2cpp_runtime_helper_022b2c90();
label_04524ff6:
      il2cpp_runtime_helper_022b2c90();
label_04524ffb:
      il2cpp_runtime_helper_022b2c90();
    }
    auVar15 = il2cpp_runtime_helper_022b2c90();
    uVar13 = auVar15._0_8_;
    if (auVar15._8_4_ != 1) {
      local_38 = 0;
      if (unaff_R13 == (long *)0x0) goto label_045251b6;
      goto label_04525157;
    }
    plVar9 = (long *)__cxa_begin_catch();
    local_38 = *plVar9;
    __cxa_end_catch();
label_045250ab:
    if (unaff_R13 != (long *)0x0) {
      lVar11 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
            puVar10 = (undefined8 *)
                      (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
            goto label_0452510d;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_0452510d:
      (*(code *)*puVar10)(unaff_R13,puVar10[1]);
    }
    if (local_38 != 0) goto label_045251d3;
  }
  if (__this_00 != (MethodInfo *)0x0) {
    pSVar12 = (System_String_array *)
              System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_String_ToArray);
    return pSVar12;
  }
label_045251ce:
  do {
    il2cpp_runtime_helper_022b2c90();
label_045251d3:
    uVar13 = il2cpp_runtime_helper_022fefe0();
    if (unaff_R13 != (long *)0x0) {
label_04525157:
      lVar11 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
            puVar10 = (undefined8 *)
                      (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
            goto label_045251ad;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_045251ad:
      (*(code *)*puVar10)(unaff_R13,puVar10[1]);
    }
label_045251b6:
    if (local_38 == 0) {
      _Unwind_Resume(uVar13);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedPresetGuild
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild (System_String_o* id, const MethodInfo* method);
// 0x4525670

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild
          (System_String_o *id,MethodInfo *method)

{
  System_String_o *group;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONString_o *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (g_data_057aee44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&"PresetGuilds");
    g_data_057aee44 = '\x01';
    in_RDX = extraout_RDX;
  }
  group = "PresetGuilds";
  if (g_data_057aee4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aee4f = '\x01';
    in_RDX = extraout_RDX_00;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,in_RDX);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_44268e0(pSVar2,method_00);
    if ((char)bVar1 != '\0') {
      __this = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
      SimpleJSONFixed_JSONString___ctor(__this,id,(MethodInfo *)0x0);
      return (SimpleJSONFixed_JSONNode_o *)__this;
    }
  }
  if (*(int *)(TypeInfo_JSONNull + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsSupporter
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsSupporter (const MethodInfo* method);
// 0x4525770

bool_conflict Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsSupporter(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  MethodInfo *in_RSI;
  
  if (g_data_057aee45 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"active_patron");
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    g_data_057aee45 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue("patronStatus",in_RSI);
    bVar3 = System_String__Equals_3af50f0((System_String_o *)method_00,"active_patron",5,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      bVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier(method_00);
      return bVar3;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedPresetGuilds
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuilds (const MethodInfo* method);
// 0x4525ab0

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuilds(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (g_data_057aee46 == '\0') {
    il2cpp_runtime_helper_023445d0(&"PresetGuilds");
    g_data_057aee46 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions("PresetGuilds",in_RSI);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisiblePresetGuilds
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds (const MethodInfo* method);
// 0x45260d0

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (g_data_057aee47 == '\0') {
    il2cpp_runtime_helper_023445d0(&"PresetGuilds");
    g_data_057aee47 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions("PresetGuilds",in_RSI);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (const MethodInfo* method);
// 0x4526690

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_4426690(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (g_data_057aee48 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Badges");
    g_data_057aee48 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions("Badges",in_RSI);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleBadges
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges (const MethodInfo* method);
// 0x45266c0

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (g_data_057aee49 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Badges");
    g_data_057aee49 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions("Badges",in_RSI);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PresetGuildIdForLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildIdForLabel (System_String_o* label, const MethodInfo* method);
// 0x45266f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildIdForLabel
          (System_String_o *label,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  bool_conflict bVar2;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this_04;
  long *plVar3;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  Il2CppMethodPointer pIVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  undefined1 local_50 [16];
  System_String_o *local_40;
  System_String_o *pSStack_38;
  
  if (g_data_057aee4a == '\0') {
    il2cpp_runtime_helper_023445d0(&"PresetGuilds");
    g_data_057aee4a = '\x01';
  }
  pSVar8 = "PresetGuilds";
  method_00 = (MethodInfo *)label;
  if (g_data_057aee4e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgProfileEntitlementOption_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Game_AottgProfileE);
    g_data_057aee4e = '\x01';
  }
  pIVar7 = (Il2CppObject *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_04 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions(pSVar8,method_00);
  if (__this_04 == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar6;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pIVar5;
      __this_02.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                (__this_02,(MethodInfo_31FB5A0 *)&stack0xffffffffffffff78);
      if (lVar1 == 0) goto label_04526833;
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pIVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
              (__this_03,(MethodInfo_31FB5A0 *)&stack0xffffffffffffff78);
    _Unwind_Resume(auVar4._0_8_);
  }
  System_Collections_Generic_List_AottgProfileEntitlementOption___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_04,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Game_AottgProfileE);
  while (pSVar8 = local_40, __this.fields._8_8_ = local_50._8_8_,
        __this.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_,
        __this.fields._current = (Il2CppObject *)pSVar8,
        bVar2 = System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___MoveNext
                          (__this,(MethodInfo_31FB5B0 *)&stack0xffffffffffffff78), (char)bVar2 != '\0') {
    pSVar9 = pSVar8;
    bVar2 = System_String__Equals_3af50f0(pSStack_38,label,5,(MethodInfo *)0x0);
    local_40 = pSVar9;
    if ((char)bVar2 != '\0') {
      __this_00.fields._8_8_ = local_50._8_8_;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
      __this_00.fields._current = (Il2CppObject *)pSVar9;
      System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                (__this_00,(MethodInfo_31FB5A0 *)&stack0xffffffffffffff78);
      return pSVar8;
    }
  }
  __this_01.fields._8_8_ = local_50._8_8_;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
  __this_01.fields._current = (Il2CppObject *)pSVar8;
  System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
            (__this_01,(MethodInfo_31FB5A0 *)&stack0xffffffffffffff78);
label_04526833:
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedOptions
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions (System_String_o* group, const MethodInfo* method);
// 0x4525ae0

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions
          (System_String_o *group,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *pGVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  SimpleJSONFixed_JSONNode_c *pSVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *pGVar12;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o item;
  char cVar13;
  bool_conflict bVar14;
  MethodInfo *__this;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  long *plVar16;
  undefined8 *puVar17;
  Il2CppMethodPointer *ppIVar18;
  SimpleJSONFixed_JSONNode_o *item_00;
  undefined8 uVar19;
  MethodInfo *pMVar20;
  long lVar21;
  long lVar22;
  MethodInfo *in_R8;
  undefined1 auVar23 [12];
  long local_88;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  System_String_o *local_48;
  bool_conflict bStack_40;
  undefined4 uStack_3c;
  
  if (g_data_057aee4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfileEntitlementOpt);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgProfileEntitlementOption);
    il2cpp_runtime_helper_023445d0(&"id");
    g_data_057aee4b = '\x01';
  }
  __this = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgProfileEntitlementOption);
  pMVar20 = __this;
  System_Collections_Generic_List_AottgProfileEntitlementOption____ctor
            ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfileEntitlementOpt);
  pSVar15 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(pMVar20);
  if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar8 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar15,group,(pSVar15->klass->vtable)._7_get_Item.method);
    iVar8 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar8 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = SimpleJSONFixed_JSONNode__op_Equality(pSVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
  }
  if ((pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar16 = (long *)(*(pSVar15->klass->vtable)._27_get_Children.methodPtr)
                                  (pSVar15,(pSVar15->klass->vtable)._27_get_Children.method),
     plVar16 != (long *)0x0)) {
    lVar22 = *plVar16;
    if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
      lVar21 = 0;
      do {
        if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar21) == TypeInfo_IEnumerable_JSONNode) {
          puVar17 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar21) * 0x10 + lVar22 + 0x138);
          goto label_04525c8f;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar21);
    }
    puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IEnumerable_JSONNode,0);
label_04525c8f:
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar17)(plVar16,puVar17[1]);
    if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04525ed0;
    local_88 = 0;
label_04525cfa:
    pSVar10 = pSVar15->klass;
    uVar4._0_1_ = (pSVar10->_2).rank;
    uVar4._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IEnumerator) {
          ppIVar18 = &(&(pSVar10->vtable)._0_Equals)[*(int *)((long)&pIVar11->offset + lVar22)].methodPtr;
          goto label_04525d53;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar22);
    }
    ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator,0);
label_04525d53:
    cVar13 = (**ppIVar18)(pSVar15,(MethodInfo *)ppIVar18[1]);
    if (cVar13 == '\0') goto label_04525fa5;
    pSVar10 = pSVar15->klass;
    uVar5._0_1_ = (pSVar10->_2).rank;
    uVar5._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar5 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IEnumerator_JSONNode) {
          ppIVar18 = &(&(pSVar10->vtable)._0_Equals)[*(int *)((long)&pIVar11->offset + lVar22)].methodPtr;
          goto label_04525dc3;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar5 << 4 != lVar22);
    }
    ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator_JSONNode,0);
label_04525dc3:
    item_00 = (SimpleJSONFixed_JSONNode_o *)(**ppIVar18)(pSVar15,(MethodInfo *)ppIVar18[1]);
    if (item_00 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      plVar16 = (long *)(*(item_00->klass->vtable)._7_get_Item.methodPtr)
                                  (item_00,"id",(item_00->klass->vtable)._7_get_Item.method);
      if (plVar16 == (long *)0x0) goto label_04525ebc;
      pMVar20 = *(MethodInfo **)(*plVar16 + 0x1d0);
      (**(code **)(*plVar16 + 0x1c8))(plVar16);
      bVar14 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_44268e0(item_00,pMVar20);
      if ((char)bVar14 != '\0') {
        Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option(&local_78,group,item_00,1,in_R8);
        lVar22 = MethodInfo_Void_Add;
        local_58 = local_78.fields.Id._0_4_;
        uStack_54 = local_78.fields.Id._4_4_;
        uStack_50 = local_78.fields.Label._0_4_;
        uStack_4c = local_78.fields.Label._4_4_;
        local_48 = local_78.fields.Icon;
        uVar19._0_4_ = local_78.fields.Enabled;
        uVar19._4_4_ = local_78.fields._28_4_;
        bStack_40 = local_78.fields.Enabled;
        uStack_3c = local_78.fields._28_4_;
        if (__this == (MethodInfo *)0x0) goto label_04525ec1;
        piVar1 = (int32_t *)((long)&__this->name + 4);
        *piVar1 = *piVar1 + 1;
        pGVar12 = ((System_Collections_Generic_List_AottgProfileEntitlementOption__Fields *)
                  &__this->invoker_method)->_items;
        if (pGVar12 == (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *)0x0) goto label_04525ec6;
        uVar9 = *(uint *)&__this->name;
        if (uVar9 < (uint)pGVar12->max_length) {
          *(uint *)&__this->name = uVar9 + 1;
          ppSVar2 = &pGVar12->m_Items[(int)uVar9].fields.Icon;
          *(undefined4 *)ppSVar2 = local_78.fields.Icon._0_4_;
          *(undefined4 *)((long)ppSVar2 + 4) = local_78.fields.Icon._4_4_;
          *(bool_conflict *)(ppSVar2 + 1) = local_78.fields.Enabled;
          *(undefined4 *)((long)ppSVar2 + 0xc) = local_78.fields._28_4_;
          pGVar3 = pGVar12->m_Items + (int)uVar9;
          *(undefined4 *)&(pGVar3->fields).Id = local_78.fields.Id._0_4_;
          *(undefined4 *)((long)&(pGVar3->fields).Id + 4) = local_78.fields.Id._4_4_;
          *(undefined4 *)&(pGVar3->fields).Label = local_78.fields.Label._0_4_;
          *(undefined4 *)((long)&(pGVar3->fields).Label + 4) = local_78.fields.Label._4_4_;
          il2cpp_runtime_helper_022b4080(pGVar12->m_Items + (int)uVar9,0);
        }
        else {
          item.fields.Id._4_4_ = local_78.fields.Id._4_4_;
          item.fields.Id._0_4_ = local_78.fields.Id._0_4_;
          item.fields.Label._4_4_ = local_78.fields.Label._4_4_;
          item.fields.Label._0_4_ = local_78.fields.Label._0_4_;
          item.fields.Icon = local_78.fields.Icon;
          item.fields.Enabled = local_78.fields.Enabled;
          item.fields._28_4_ = local_78.fields._28_4_;
          _bStack_40 = uVar19;
          System_Collections_Generic_List_AottgProfileEntitlementOption___AddWithResize
                    ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,item,
                     *(MethodInfo_3572970 **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
      }
      goto label_04525cfa;
    }
    il2cpp_runtime_helper_022b2c90();
label_04525ebc:
    il2cpp_runtime_helper_022b2c90();
label_04525ec1:
    il2cpp_runtime_helper_022b2c90();
label_04525ec6:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_04525ed0:
  auVar23 = il2cpp_runtime_helper_022b2c90();
  uVar19 = auVar23._0_8_;
  if (auVar23._8_4_ != 1) {
    local_88 = 0;
    if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04526096;
    goto label_04526032;
  }
  plVar16 = (long *)__cxa_begin_catch();
  local_88 = *plVar16;
  __cxa_end_catch();
label_04525fa5:
  if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar10 = pSVar15->klass;
    uVar6._0_1_ = (pSVar10->_2).rank;
    uVar6._1_1_ = (pSVar10->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar11 = (pSVar10->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IDisposable) {
          ppIVar18 = &(&(pSVar10->vtable)._0_Equals)[*(int *)((long)&pIVar11->offset + lVar22)].methodPtr;
          goto label_04525ffd;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar22);
    }
    ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_04525ffd:
    (**ppIVar18)(pSVar15,(MethodInfo *)ppIVar18[1]);
  }
  if (local_88 == 0) {
    return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
  }
  do {
    uVar19 = il2cpp_runtime_helper_022fefe0();
    if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04526032:
      pSVar10 = pSVar15->klass;
      uVar7._0_1_ = (pSVar10->_2).rank;
      uVar7._1_1_ = (pSVar10->_2).minimumAlignment;
      if ((ulong)uVar7 != 0) {
        pIVar11 = (pSVar10->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar11->interfaceType + lVar22) == TypeInfo_IDisposable) {
            ppIVar18 = &(&(pSVar10->vtable)._0_Equals)[*(int *)((long)&pIVar11->offset + lVar22)].methodPtr;
            goto label_0452608d;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar7 << 4 != lVar22);
      }
      ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_0452608d:
      (**ppIVar18)(pSVar15,(MethodInfo *)ppIVar18[1]);
    }
label_04526096:
    if (local_88 == 0) {
      _Unwind_Resume(uVar19);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleOptions
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions (System_String_o* group, const MethodInfo* method);
// 0x4526100

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions
          (System_String_o *group,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *pGVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  SimpleJSONFixed_JSONNode_c *pSVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *pGVar11;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o item;
  char cVar12;
  bool_conflict bVar13;
  uint uVar14;
  MethodInfo *__this;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  long *plVar16;
  undefined8 *puVar17;
  Il2CppMethodPointer *ppIVar18;
  SimpleJSONFixed_JSONNode_o *item_00;
  undefined8 uVar19;
  MethodInfo *pMVar20;
  long lVar21;
  long lVar22;
  MethodInfo *in_R8;
  undefined1 auVar23 [12];
  long local_88;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  bool_conflict bStack_40;
  undefined4 uStack_3c;
  
  if (g_data_057aee4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfileEntitlementOpt);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgProfileEntitlementOption);
    g_data_057aee4c = '\x01';
  }
  __this = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgProfileEntitlementOption);
  pMVar20 = __this;
  System_Collections_Generic_List_AottgProfileEntitlementOption____ctor
            ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfileEntitlementOpt);
  pSVar15 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(pMVar20);
  if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar8 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar15,group,(pSVar15->klass->vtable)._7_get_Item.method);
    iVar8 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar8 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = SimpleJSONFixed_JSONNode__op_Equality(pSVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
  }
  if ((pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar16 = (long *)(*(pSVar15->klass->vtable)._27_get_Children.methodPtr)
                                  (pSVar15,(pSVar15->klass->vtable)._27_get_Children.method),
     plVar16 != (long *)0x0)) {
    lVar22 = *plVar16;
    if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
      lVar21 = 0;
      do {
        if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar21) == TypeInfo_IEnumerable_JSONNode) {
          puVar17 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar21) * 0x10 + lVar22 + 0x138);
          goto label_0452629f;
        }
        lVar21 = lVar21 + 0x10;
      } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar21);
    }
    puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IEnumerable_JSONNode,0);
label_0452629f:
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar17)(plVar16,puVar17[1]);
    if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_045264c4;
    local_88 = 0;
label_045262fa:
    do {
      pSVar9 = pSVar15->klass;
      uVar4._0_1_ = (pSVar9->_2).rank;
      uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar10 = (pSVar9->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar22) == TypeInfo_IEnumerator) {
            ppIVar18 = &(&(pSVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar22)].methodPtr;
            goto label_04526353;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar22);
      }
      ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator,0);
label_04526353:
      cVar12 = (**ppIVar18)(pSVar15,(MethodInfo *)ppIVar18[1]);
      if (cVar12 == '\0') goto label_0452655d;
      pSVar9 = pSVar15->klass;
      uVar5._0_1_ = (pSVar9->_2).rank;
      uVar5._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar10 = (pSVar9->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar22) == TypeInfo_IEnumerator_JSONNode) {
            ppIVar18 = &(&(pSVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar22)].methodPtr;
            goto label_045263c3;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar22);
      }
      ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator_JSONNode,0);
label_045263c3:
      pMVar20 = (MethodInfo *)ppIVar18[1];
      item_00 = (SimpleJSONFixed_JSONNode_o *)(**ppIVar18)(pSVar15);
      uVar14 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_44268e0(item_00,pMVar20);
    } while (((char)uVar14 == '\0') &&
            ((bVar13 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement
                                 (item_00,pMVar20), (char)bVar13 == '\0' ||
             (bVar13 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement
                                 (item_00,pMVar20), (char)bVar13 != '\0'))));
    Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option(&local_78,group,item_00,uVar14 & 0xff,in_R8)
    ;
    lVar22 = MethodInfo_Void_Add;
    local_58 = local_78.fields.Id._0_4_;
    uStack_54 = local_78.fields.Id._4_4_;
    uStack_50 = local_78.fields.Label._0_4_;
    uStack_4c = local_78.fields.Label._4_4_;
    local_48 = local_78.fields.Icon._0_4_;
    uStack_44 = local_78.fields.Icon._4_4_;
    bStack_40 = local_78.fields.Enabled;
    uStack_3c = local_78.fields._28_4_;
    if (__this != (MethodInfo *)0x0) {
      piVar1 = (int32_t *)((long)&__this->name + 4);
      *piVar1 = *piVar1 + 1;
      pGVar11 = ((System_Collections_Generic_List_AottgProfileEntitlementOption__Fields *)
                &__this->invoker_method)->_items;
      if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *)0x0) goto label_045264ba;
      uVar14 = *(uint *)&__this->name;
      if (uVar14 < (uint)pGVar11->max_length) {
        *(uint *)&__this->name = uVar14 + 1;
        ppSVar2 = &pGVar11->m_Items[(int)uVar14].fields.Icon;
        *(undefined4 *)ppSVar2 = local_78.fields.Icon._0_4_;
        *(undefined4 *)((long)ppSVar2 + 4) = local_78.fields.Icon._4_4_;
        *(bool_conflict *)(ppSVar2 + 1) = local_78.fields.Enabled;
        *(undefined4 *)((long)ppSVar2 + 0xc) = local_78.fields._28_4_;
        pGVar3 = pGVar11->m_Items + (int)uVar14;
        *(undefined4 *)&(pGVar3->fields).Id = local_78.fields.Id._0_4_;
        *(undefined4 *)((long)&(pGVar3->fields).Id + 4) = local_78.fields.Id._4_4_;
        *(undefined4 *)&(pGVar3->fields).Label = local_78.fields.Label._0_4_;
        *(undefined4 *)((long)&(pGVar3->fields).Label + 4) = local_78.fields.Label._4_4_;
        il2cpp_runtime_helper_022b4080(pGVar11->m_Items + (int)uVar14,0);
      }
      else {
        item.fields.Id._4_4_ = local_78.fields.Id._4_4_;
        item.fields.Id._0_4_ = local_78.fields.Id._0_4_;
        item.fields.Label._4_4_ = local_78.fields.Label._4_4_;
        item.fields.Label._0_4_ = local_78.fields.Label._0_4_;
        item.fields.Icon = local_78.fields.Icon;
        item.fields.Enabled = local_78.fields.Enabled;
        item.fields._28_4_ = local_78.fields._28_4_;
        System_Collections_Generic_List_AottgProfileEntitlementOption___AddWithResize
                  ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,item,
                   *(MethodInfo_3572970 **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
      goto label_045262fa;
    }
    il2cpp_runtime_helper_022b2c90();
label_045264ba:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_045264c4:
  auVar23 = il2cpp_runtime_helper_022b2c90();
  uVar19 = auVar23._0_8_;
  if (auVar23._8_4_ != 1) {
    local_88 = 0;
    if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04526656;
    goto label_045265f2;
  }
  plVar16 = (long *)__cxa_begin_catch();
  local_88 = *plVar16;
  __cxa_end_catch();
label_0452655d:
  if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar9 = pSVar15->klass;
    uVar6._0_1_ = (pSVar9->_2).rank;
    uVar6._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar10 = (pSVar9->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar22) == TypeInfo_IDisposable) {
          ppIVar18 = &(&(pSVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar22)].methodPtr;
          goto label_045265bd;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar22);
    }
    ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_045265bd:
    (**ppIVar18)(pSVar15,(MethodInfo *)ppIVar18[1]);
  }
  if (local_88 == 0) {
    return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
  }
  do {
    uVar19 = il2cpp_runtime_helper_022fefe0();
    if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
label_045265f2:
      pSVar9 = pSVar15->klass;
      uVar7._0_1_ = (pSVar9->_2).rank;
      uVar7._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar7 != 0) {
        pIVar10 = (pSVar9->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar22) == TypeInfo_IDisposable) {
            ppIVar18 = &(&(pSVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar22)].methodPtr;
            goto label_0452664d;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar7 << 4 != lVar22);
      }
      ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_0452664d:
      (**ppIVar18)(pSVar15,(MethodInfo *)ppIVar18[1]);
    }
label_04526656:
    if (local_88 == 0) {
      _Unwind_Resume(uVar19);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Option
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option (System_String_o* group, SimpleJSONFixed_JSONNode_o* item, bool enabled, const MethodInfo* method);
// 0x4526980

Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option
          (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *__return_storage_ptr__,
          System_String_o *group,SimpleJSONFixed_JSONNode_o *item,bool_conflict enabled,MethodInfo *method)

{
  bool_conflict bVar1;
  long *plVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  undefined4 extraout_var;
  MethodInfo *method_00;
  MethodInfo **item_00;
  
  method_00 = (MethodInfo *)group;
  item_00 = (MethodInfo **)__return_storage_ptr__;
  if (g_data_057aee4d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Badges");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Roles/");
    il2cpp_runtime_helper_023445d0(&"label");
    item_00 = &"id";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee4d = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    method_00 = "id";
    item_00 = (MethodInfo **)item;
    plVar2 = (long *)(*(item->klass->vtable)._7_get_Item.methodPtr)
                               (item,"id",(item->klass->vtable)._7_get_Item.method);
    if (plVar2 != (long *)0x0) {
      str1 = (System_String_o *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      method_00 = "label";
      plVar2 = (long *)(*(item->klass->vtable)._7_get_Item.methodPtr)
                                 (item,"label",(item->klass->vtable)._7_get_Item.method);
      item_00 = (MethodInfo **)item;
      if (plVar2 != (long *)0x0) {
        pSVar3 = (System_String_o *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        bVar1 = System_String__op_Equality(group,"Badges",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pSVar4 = System_String__Concat_3ae5ba0("UI/Icons/Roles/",str1,(MethodInfo *)0x0);
        }
        (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
        (__return_storage_ptr__->fields).Icon = (System_String_o *)0x0;
        *(undefined8 *)&(__return_storage_ptr__->fields).Enabled = 0;
        (__return_storage_ptr__->fields).Id = str1;
        il2cpp_runtime_helper_022b4080(__return_storage_ptr__,str1);
        (__return_storage_ptr__->fields).Label = pSVar3;
        il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).Label,pSVar3);
        (__return_storage_ptr__->fields).Icon = pSVar4;
        il2cpp_runtime_helper_022b4080(&(__return_storage_ptr__->fields).Icon,pSVar4);
        *(char *)&(__return_storage_ptr__->fields).Enabled = (char)enabled;
        return __return_storage_ptr__;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement
                    ((SimpleJSONFixed_JSONNode_o *)item_00,method_00);
  if ((char)bVar1 != '\0') {
    bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement
                      ((SimpleJSONFixed_JSONNode_o *)item_00,method_00);
    return (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *)
           (CONCAT71((int7)(CONCAT44(extraout_var,bVar1) >> 8),(char)bVar1) ^ 1);
  }
  return (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdForLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdForLabel (System_String_o* group, System_String_o* label, const MethodInfo* method);
// 0x4526720

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdForLabel
          (System_String_o *group,System_String_o *label,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  bool_conflict bVar2;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this_04;
  long *plVar3;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  Il2CppMethodPointer pIVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  undefined1 auStack_50 [16];
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  
  method_00 = (MethodInfo *)label;
  if (g_data_057aee4e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgProfileEntitlementOption_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Game_AottgProfileE);
    g_data_057aee4e = '\x01';
  }
  pIVar7 = (Il2CppObject *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_04 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions(group,method_00);
  if (__this_04 == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar6;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pIVar5;
      __this_02.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                (__this_02,(MethodInfo_31FB5A0 *)&stack0xffffffffffffff78);
      if (lVar1 == 0) goto label_04526833;
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pIVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
              (__this_03,(MethodInfo_31FB5A0 *)&stack0xffffffffffffff78);
    _Unwind_Resume(auVar4._0_8_);
  }
  System_Collections_Generic_List_AottgProfileEntitlementOption___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,__this_04,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Game_AottgProfileE);
  while (pSVar8 = pSStack_40, __this.fields._8_8_ = auStack_50._8_8_,
        __this.fields._list = (System_Collections_Generic_List_T__o *)auStack_50._0_8_,
        __this.fields._current = (Il2CppObject *)pSVar8,
        bVar2 = System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___MoveNext
                          (__this,(MethodInfo_31FB5B0 *)&stack0xffffffffffffff78), (char)bVar2 != '\0') {
    pSVar9 = pSVar8;
    bVar2 = System_String__Equals_3af50f0(pSStack_38,label,5,(MethodInfo *)0x0);
    pSStack_40 = pSVar9;
    if ((char)bVar2 != '\0') {
      __this_00.fields._8_8_ = auStack_50._8_8_;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
      __this_00.fields._current = (Il2CppObject *)pSVar9;
      System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                (__this_00,(MethodInfo_31FB5A0 *)&stack0xffffffffffffff78);
      return pSVar8;
    }
  }
  __this_01.fields._8_8_ = auStack_50._8_8_;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
  __this_01.fields._current = (Il2CppObject *)pSVar8;
  System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
            (__this_01,(MethodInfo_31FB5A0 *)&stack0xffffffffffffff78);
label_04526833:
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed (System_String_o* group, System_String_o* id, const MethodInfo* method);
// 0x4523d30

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed
          (System_String_o *group,System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (g_data_057aee4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aee4f = '\x01';
    method = extraout_RDX;
  }
  a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_44268e0(a,method_00);
    return bVar1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x45268e0

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_44268e0
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (g_data_057aee50 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aee50 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(item,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    else {
      bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    if ((cVar1 != '\0') &&
       (bVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed(item,method_00),
       (char)bVar2 != '\0')) {
      bVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed(item,method_00);
      return bVar2;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleWhenLocked
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleWhenLocked (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x4526b00

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleWhenLocked
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement(item,method);
  if ((char)bVar1 != '\0') {
    uVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement(item,method);
    return uVar2 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Find
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find (System_String_o* group, System_String_o* id, const MethodInfo* method);
// 0x4522aa0

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find
          (System_String_o *group,System_String_o *id,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_String_o *a;
  int iVar8;
  MethodInfo *method_00;
  long lVar9;
  long *unaff_R12;
  undefined1 auVar10 [12];
  long local_38;
  
  if (g_data_057aee51 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"id");
    g_data_057aee51 = '\x01';
  }
  method_00 = (MethodInfo *)id;
  bVar3 = System_String__IsNullOrWhiteSpace(id,(MethodInfo *)0x0);
  pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((char)bVar3 == '\0') {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
      iVar8 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,group,(pSVar4->klass->vtable)._7_get_Item.method);
      iVar8 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar8 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
    if ((char)bVar3 == '\0') {
      if ((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (plVar6 = (long *)(*(pSVar5->klass->vtable)._27_get_Children.methodPtr)
                                     (pSVar5,(pSVar5->klass->vtable)._27_get_Children.method),
         plVar6 == (long *)0x0)) {
label_04522e35:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        lVar1 = *plVar6;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar9 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerable_JSONNode) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
              goto label_04522c1f;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IEnumerable_JSONNode,0);
label_04522c1f:
        unaff_R12 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (unaff_R12 != (long *)0x0) {
          local_38 = 0;
          do {
            lVar1 = *unaff_R12;
            if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
              lVar9 = 0;
              do {
                if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerator) {
                  puVar7 = (undefined8 *)
                           ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
                  goto label_04522cb3;
                }
                lVar9 = lVar9 + 0x10;
              } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
            }
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_04522cb3:
            cVar2 = (*(code *)*puVar7)(unaff_R12,puVar7[1]);
            if (cVar2 == '\0') {
              iVar8 = 9;
              goto label_04522d95;
            }
            lVar1 = *unaff_R12;
            if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
              lVar9 = 0;
              do {
                if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerator_JSONNode) {
                  puVar7 = (undefined8 *)
                           ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
                  goto label_04522d23;
                }
                lVar9 = lVar9 + 0x10;
              } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
            }
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator_JSONNode,0);
label_04522d23:
            pSVar5 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar7)(unaff_R12,puVar7[1]);
            if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
label_04522e30:
              il2cpp_runtime_helper_022b2c90();
              goto label_04522e35;
            }
            plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar5,"id",(pSVar5->klass->vtable)._7_get_Item.method);
            if (plVar6 == (long *)0x0) goto label_04522e30;
            a = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
            bVar3 = System_String__Equals_3af50f0(a,id,5,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              iVar8 = 8;
              goto joined_r0x04522d8c;
            }
          } while( true );
        }
      }
      il2cpp_runtime_helper_022b2c90();
      do {
        auVar10 = il2cpp_runtime_helper_022fefe0();
        iVar8 = 0;
        if (auVar10._8_4_ != 1) {
          if (unaff_R12 == (long *)0x0) goto label_04522f26;
          lVar1 = *unaff_R12;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) == 0) goto label_04522eff;
          lVar9 = 0;
          goto label_04522ef0;
        }
        plVar6 = (long *)__cxa_begin_catch();
        local_38 = *plVar6;
        __cxa_end_catch();
label_04522d95:
        pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
joined_r0x04522d8c:
        if (unaff_R12 != (long *)0x0) {
          lVar1 = *unaff_R12;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar9 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
                puVar7 = (undefined8 *)
                         (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
                goto label_04522dfd;
              }
              lVar9 = lVar9 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
          }
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_04522dfd:
          (*(code *)*puVar7)(unaff_R12,puVar7[1]);
        }
      } while (local_38 != 0);
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (iVar8 == 8) {
        pSVar4 = pSVar5;
      }
    }
  }
  return pSVar4;
  while (lVar9 = lVar9 + 0x10, (ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9) {
label_04522ef0:
    if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
      puVar7 = (undefined8 *)(lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
      goto label_04522f1d;
    }
  }
label_04522eff:
  puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_04522f1d:
  (*(code *)*puVar7)(unaff_R12,puVar7[1]);
label_04522f26:
  _Unwind_Resume(auVar10._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$RoleAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x4526b70

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  int iVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_array *roles;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  if (g_data_057aee52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"requiredRoles");
    g_data_057aee52 = '\x01';
  }
  plVar7 = (long *)0x0;
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04526f87:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(item->klass->vtable)._7_get_Item.methodPtr)
                  (item,"requiredRoles",(item->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    plVar7 = (long *)CONCAT71((int7)((ulong)item >> 8),1);
    if ((char)bVar2 != '\0') goto label_04526f25;
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04526f87;
    iVar3 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    if (iVar3 == 0) goto label_04526f25;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    roles = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    lVar4 = MethodInfo_String_Empty_String;
    if (roles == (System_String_array *)0x0) {
      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
        lVar8 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) != 0) goto label_04526cb7;
label_04526f4e:
        lVar8 = il2cpp_runtime_helper_023009c0();
        if (*(int *)(lVar8 + 0xe4) != 0) goto label_04526cc4;
label_04526f63:
        il2cpp_runtime_helper_02337ed0();
        lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
        bVar10 = *(byte *)(lVar4 + 0x135);
      }
      else {
        lVar8 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) goto label_04526f4e;
label_04526cb7:
        if (*(int *)(lVar8 + 0xe4) == 0) goto label_04526f63;
label_04526cc4:
        lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
        bVar10 = *(byte *)(lVar4 + 0x135);
      }
      if ((bVar10 & 1) == 0) {
        lVar4 = il2cpp_runtime_helper_023009c0(lVar4);
      }
      roles = (System_String_array *)**(undefined8 **)(lVar4 + 0xb8);
    }
    plVar5 = (long *)(*(a->klass->vtable)._27_get_Children.methodPtr)
                               (a,(a->klass->vtable)._27_get_Children.method);
    if (plVar5 == (long *)0x0) goto label_04526f87;
    lVar4 = *plVar5;
    if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
      lVar8 = 0;
      do {
        if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar8) == TypeInfo_IEnumerable_JSONNode) {
          puVar6 = (undefined8 *)((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar8) * 0x10 + lVar4 + 0x138);
          goto label_04526d61;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar8);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,TypeInfo_IEnumerable_JSONNode,0);
label_04526d61:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar4 = 0;
      do {
        lVar8 = *plVar7;
        if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
          lVar9 = 0;
          do {
            if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar9) == TypeInfo_IEnumerator) {
              puVar6 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar9) * 0x10 + lVar8 + 0x138);
              goto label_04526de3;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar9);
        }
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IEnumerator,0);
label_04526de3:
        cVar1 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (cVar1 == '\0') {
          iVar3 = 8;
          lVar4 = 0;
          goto label_04526ea4;
        }
        lVar8 = *plVar7;
        if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
          lVar9 = 0;
          do {
            if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar9) == TypeInfo_IEnumerator_JSONNode) {
              puVar6 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar9) * 0x10 + lVar8 + 0x138);
              goto label_04526e53;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar9);
        }
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IEnumerator_JSONNode,0);
label_04526e53:
        plVar5 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar5 == (long *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04526f87;
        }
        auVar11 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        bVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
                          ((System_Collections_Generic_IEnumerable_string__o *)roles,auVar11._0_8_,
                           auVar11._8_8_);
        if ((char)bVar2 != '\0') {
          bVar10 = 1;
          iVar3 = 7;
          goto joined_r0x04526e97;
        }
      } while( true );
    }
  }
  il2cpp_runtime_helper_022b2c90();
  do {
    auVar12 = il2cpp_runtime_helper_022fefe0();
    iVar3 = 0;
    if (auVar12._8_4_ != 1) {
      if (plVar7 == (long *)0x0) goto label_04527066;
      lVar4 = *plVar7;
      if ((ulong)*(ushort *)(lVar4 + 0x12e) == 0) goto label_0452703f;
      lVar8 = 0;
      goto label_04527030;
    }
    plVar5 = (long *)__cxa_begin_catch();
    lVar4 = *plVar5;
    __cxa_end_catch();
label_04526ea4:
    bVar10 = 0;
joined_r0x04526e97:
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
        lVar9 = 0;
        do {
          if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
            puVar6 = (undefined8 *)
                     (lVar8 + (long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
            goto label_04526f0d;
          }
          lVar9 = lVar9 + 0x10;
        } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar9);
      }
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IDisposable,0);
label_04526f0d:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
  } while (lVar4 != 0);
  plVar7 = (long *)CONCAT71((int7)((ulong)plVar7 >> 8),iVar3 == 7 & bVar10);
label_04526f25:
  return (bool_conflict)plVar7;
  while (lVar8 = lVar8 + 0x10, (ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar8) {
label_04527030:
    if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar8) == TypeInfo_IDisposable) {
      puVar6 = (undefined8 *)(lVar4 + (long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar8) * 0x10 + 0x138);
      goto label_0452705d;
    }
  }
label_0452703f:
  puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IDisposable,0);
label_0452705d:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
label_04527066:
  _Unwind_Resume(auVar12._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$RoleAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed (SimpleJSONFixed_JSONNode_o* item, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x4524770

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed_4424770
          (SimpleJSONFixed_JSONNode_o *item,System_Collections_Generic_IEnumerable_string__o *roles,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  char cVar7;
  bool_conflict bVar8;
  int iVar9;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar10;
  undefined8 *puVar11;
  VirtualInvokeData *pVVar12;
  bool_conflict bVar13;
  undefined8 unaff_RBP;
  long lVar14;
  long lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  
  if (g_data_057aee53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"requiredRoles");
    g_data_057aee53 = '\x01';
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(item->klass->vtable)._7_get_Item.methodPtr)
                  (item,"requiredRoles",(item->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    bVar13 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if ((char)bVar8 != '\0') {
      return bVar13;
    }
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      iVar9 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
      if (iVar9 == 0) {
        return bVar13;
      }
      plVar10 = (long *)(*(a->klass->vtable)._27_get_Children.methodPtr)
                                  (a,(a->klass->vtable)._27_get_Children.method);
      if (plVar10 != (long *)0x0) {
        lVar15 = *plVar10;
        if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
              puVar11 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar14) * 0x10 + lVar15 + 0x138);
              goto label_045248d1;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar14);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IEnumerable_JSONNode,0);
label_045248d1:
        a = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
          lVar15 = 0;
          do {
            pSVar5 = a->klass;
            uVar1._0_1_ = (pSVar5->_2).rank;
            uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
            if ((ulong)uVar1 != 0) {
              pIVar6 = (pSVar5->_1).interfaceOffsets;
              lVar14 = 0;
              do {
                if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_IEnumerator) {
                  pVVar12 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar14);
                  goto label_04524953;
                }
                lVar14 = lVar14 + 0x10;
              } while ((ulong)uVar1 << 4 != lVar14);
            }
            pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator,0);
label_04524953:
            cVar7 = (*pVVar12->methodPtr)(a,pVVar12->method);
            if (cVar7 == '\0') {
              iVar9 = 7;
              lVar15 = 0;
              goto label_04524a12;
            }
            pSVar5 = a->klass;
            uVar2._0_1_ = (pSVar5->_2).rank;
            uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar6 = (pSVar5->_1).interfaceOffsets;
              lVar14 = 0;
              do {
                if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_IEnumerator_JSONNode) {
                  pVVar12 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar14);
                  goto label_045249c3;
                }
                lVar14 = lVar14 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar14);
            }
            pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator_JSONNode,0);
label_045249c3:
            plVar10 = (long *)(*pVVar12->methodPtr)(a,pVVar12->method);
            if (plVar10 == (long *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04524a95;
            }
            auVar17 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
            bVar8 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
                              (roles,auVar17._0_8_,auVar17._8_8_);
            if ((char)bVar8 != '\0') {
              bVar16 = 1;
              iVar9 = 6;
              goto joined_r0x04524a06;
            }
          } while( true );
        }
        goto label_04524a9a;
      }
    }
  }
label_04524a95:
  il2cpp_runtime_helper_022b2c90();
label_04524a9a:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar18 = il2cpp_runtime_helper_022fefe0();
    iVar9 = 0;
    if (auVar18._8_4_ != 1) break;
    plVar10 = (long *)__cxa_begin_catch();
    lVar15 = *plVar10;
    __cxa_end_catch();
label_04524a12:
    bVar16 = 0;
joined_r0x04524a06:
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = a->klass;
      uVar3._0_1_ = (pSVar5->_2).rank;
      uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_IDisposable) {
            pVVar12 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar14);
            goto label_04524a6d;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar14);
      }
      pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04524a6d:
      (*pVVar12->methodPtr)(a,pVVar12->method);
    }
    if (lVar15 == 0) {
      return (uint)(iVar9 == 6 & bVar16);
    }
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = a->klass;
    uVar4._0_1_ = (pSVar5->_2).rank;
    uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IDisposable) {
          pVVar12 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar15);
          goto label_04524b5d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar15);
    }
    pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04524b5d:
    (*pVVar12->methodPtr)(a,pVVar12->method);
  }
  _Unwind_Resume(auVar18._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PatreonAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x45270a0

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  int iVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  MethodInfo *pMVar7;
  bool_conflict bVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long *unaff_R12;
  long lVar12;
  undefined1 auVar13 [12];
  
  if (g_data_057aee54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"requiredPatreonTierIds");
    il2cpp_runtime_helper_023445d0(&"active_patron");
    il2cpp_runtime_helper_023445d0(&"patronStatus");
    il2cpp_runtime_helper_023445d0(&"*");
    g_data_057aee54 = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(item->klass->vtable)._7_get_Item.methodPtr)
                  (item,"requiredPatreonTierIds",(item->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    bVar8 = (bool_conflict)CONCAT71((int7)((ulong)item >> 8),1);
    if ((char)bVar2 != '\0') {
      return bVar8;
    }
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pMVar7 = (a->klass->vtable)._11_get_Count.method;
      iVar3 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a);
      if (iVar3 == 0) {
        return bVar8;
      }
      pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue("patronStatus",pMVar7);
      bVar2 = System_String__Equals_3af50f0(pSVar4,"active_patron",5,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return 0;
      }
      plVar5 = (long *)(*(a->klass->vtable)._27_get_Children.methodPtr)
                                 (a,(a->klass->vtable)._27_get_Children.method);
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar10 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar10) == TypeInfo_IEnumerable_JSONNode) {
              puVar6 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar10) * 0x10 + lVar12 + 0x138);
              goto label_04527251;
            }
            lVar10 = lVar10 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar10);
        }
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,TypeInfo_IEnumerable_JSONNode,0);
label_04527251:
        unaff_R12 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (unaff_R12 != (long *)0x0) {
          lVar12 = 0;
          do {
            lVar10 = *unaff_R12;
            if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
              lVar11 = 0;
              do {
                if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
                  puVar6 = (undefined8 *)
                           ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
                  goto label_045272d3;
                }
                lVar11 = lVar11 + 0x10;
              } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
            }
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_045272d3:
            cVar1 = (*(code *)*puVar6)(unaff_R12,puVar6[1]);
            if (cVar1 == '\0') {
              iVar3 = 9;
              lVar12 = 0;
              goto label_045273c0;
            }
            lVar10 = *unaff_R12;
            if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
              lVar11 = 0;
              do {
                if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator_JSONNode) {
                  puVar6 = (undefined8 *)
                           ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
                  goto label_04527343;
                }
                lVar11 = lVar11 + 0x10;
              } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
            }
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator_JSONNode,0);
label_04527343:
            plVar5 = (long *)(*(code *)*puVar6)(unaff_R12,puVar6[1]);
            if (plVar5 == (long *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_0452744a;
            }
            pMVar7 = (MethodInfo *)(**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
            bVar2 = System_String__op_Equality((System_String_o *)pMVar7,"*",(MethodInfo *)0x0);
            if (((char)bVar2 != '\0') &&
               (bVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier(pMVar7),
               (char)bVar2 != '\0')) break;
            pMVar7 = *(MethodInfo **)(*plVar5 + 0x1d0);
            pSVar4 = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5);
            bVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier(pSVar4,pMVar7);
          } while ((char)bVar2 == '\0');
          bVar9 = 1;
          iVar3 = 8;
          goto joined_r0x045273b4;
        }
        goto label_0452744f;
      }
    }
  }
label_0452744a:
  il2cpp_runtime_helper_022b2c90();
label_0452744f:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar13 = il2cpp_runtime_helper_022fefe0();
    iVar3 = 0;
    if (auVar13._8_4_ != 1) break;
    plVar5 = (long *)__cxa_begin_catch();
    lVar12 = *plVar5;
    __cxa_end_catch();
label_045273c0:
    bVar9 = 0;
joined_r0x045273b4:
    if (unaff_R12 != (long *)0x0) {
      lVar10 = *unaff_R12;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
            puVar6 = (undefined8 *)
                     (lVar10 + (long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
            goto label_0452741d;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
      }
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_0452741d:
      (*(code *)*puVar6)(unaff_R12,puVar6[1]);
    }
    if (lVar12 == 0) {
      return (uint)(iVar3 == 8 & bVar9);
    }
  }
  if (unaff_R12 != (long *)0x0) {
    lVar12 = *unaff_R12;
    if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
      lVar10 = 0;
      do {
        if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar10) == TypeInfo_IDisposable) {
          puVar6 = (undefined8 *)
                   (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar10) * 0x10 + 0x138);
          goto label_0452753d;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar10);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IDisposable,0);
label_0452753d:
    (*(code *)*puVar6)(unaff_R12,puVar6[1]);
  }
  _Unwind_Resume(auVar13._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasRoleRequirement
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x4527630

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  char cVar7;
  bool_conflict bVar8;
  int iVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  System_Func_TSource__bool__o *predicate;
  long *plVar12;
  undefined8 *puVar13;
  VirtualInvokeData *pVVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  System_String_o *value;
  long lVar16;
  long lVar17;
  byte bVar18;
  undefined1 auVar19 [12];
  
  pSVar15 = item;
  if (g_data_057aee55 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)&"requiredRoles";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee55 = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)
              (*(item->klass->vtable)._7_get_Item.methodPtr)
                        (item,"requiredRoles",(item->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar15 = pSVar10;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return 0;
    }
    if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      iVar9 = (*(pSVar10->klass->vtable)._11_get_Count.methodPtr)
                        (pSVar10,(pSVar10->klass->vtable)._11_get_Count.method);
      return (uint)(0 < iVar9);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasRole_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass36_0);
    g_data_057aee5e = '\x01';
  }
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass36_0);
  value = pSVar11;
  System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  if (pSVar11 != (System_String_o *)0x0) {
    *(MethodInfo **)&(pSVar11->fields)._stringLength = method;
    il2cpp_runtime_helper_022b4080(&pSVar11->fields);
    bVar8 = System_String__IsNullOrWhiteSpace
                      (*(System_String_o **)&(pSVar11->fields)._stringLength,(MethodInfo *)0x0);
    if ((pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) && ((char)bVar8 == '\0')) {
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
      System_Func_object__bool____ctor();
      bVar8 = System_Linq_Enumerable__Any_object__2504f10
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar15,predicate,MethodInfo_Boolean_Any_String);
      return bVar8;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"tierIds");
    g_data_057aee59 = '\x01';
  }
  bVar8 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_045278e5:
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return 0;
    }
    if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar12 = (long *)(*(pSVar10->klass->vtable)._27_get_Children.methodPtr)
                                    (pSVar10,(pSVar10->klass->vtable)._27_get_Children.method),
       plVar12 != (long *)0x0)) {
      lVar17 = *plVar12;
      if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar16) == TypeInfo_IEnumerable_JSONNode) {
            puVar13 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar16) * 0x10 + lVar17 + 0x138);
            goto label_04527991;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar16);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IEnumerable_JSONNode,0);
label_04527991:
      pSVar15 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        lVar17 = 0;
        do {
          pSVar5 = pSVar15->klass;
          uVar1._0_1_ = (pSVar5->_2).rank;
          uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerator) {
                pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar16);
                goto label_04527a13;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar16);
          }
          pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator,0);
label_04527a13:
          cVar7 = (*pVVar14->methodPtr)(pSVar15,pVVar14->method);
          if (cVar7 == '\0') {
            iVar9 = 9;
            lVar17 = 0;
            goto label_04527adb;
          }
          pSVar5 = pSVar15->klass;
          uVar2._0_1_ = (pSVar5->_2).rank;
          uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerator_JSONNode) {
                pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar16);
                goto label_04527a83;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar16);
          }
          pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator_JSONNode,0);
label_04527a83:
          plVar12 = (long *)(*pVVar14->methodPtr)(pSVar15,pVVar14->method);
          if (plVar12 == (long *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04527b66;
          }
          pSVar11 = (System_String_o *)
                    (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
          bVar8 = System_String__Equals_3af50f0(pSVar11,value,5,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            bVar18 = 1;
            iVar9 = 8;
            goto joined_r0x04527ace;
          }
        } while( true );
      }
      goto label_04527b6b;
    }
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar10,"tierIds",(pSVar10->klass->vtable)._7_get_Item.method);
      goto label_045278e5;
    }
  }
label_04527b66:
  il2cpp_runtime_helper_022b2c90();
label_04527b6b:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar19 = il2cpp_runtime_helper_022fefe0();
    iVar9 = 0;
    if (auVar19._8_4_ != 1) break;
    plVar12 = (long *)__cxa_begin_catch();
    lVar17 = *plVar12;
    __cxa_end_catch();
label_04527adb:
    bVar18 = 0;
joined_r0x04527ace:
    if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = pSVar15->klass;
      uVar3._0_1_ = (pSVar5->_2).rank;
      uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IDisposable) {
            pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar16);
            goto label_04527b3d;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar16);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_04527b3d:
      (*pVVar14->methodPtr)(pSVar15,pVVar14->method);
    }
    if (lVar17 == 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)pSVar15 >> 8),iVar9 == 8 & bVar18);
    }
  }
  if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = pSVar15->klass;
    uVar4._0_1_ = (pSVar5->_2).rank;
    uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar17) == TypeInfo_IDisposable) {
          pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar17);
          goto label_04527c3d;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar17);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_04527c3d:
    (*pVVar14->methodPtr)(pSVar15,pVVar14->method);
  }
  _Unwind_Resume(auVar19._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasPatreonRequirement
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x4527580

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  char cVar7;
  bool_conflict bVar8;
  int iVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  System_Func_TSource__bool__o *predicate;
  long *plVar12;
  undefined8 *puVar13;
  VirtualInvokeData *pVVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  System_String_o *value;
  long lVar16;
  long lVar17;
  byte bVar18;
  undefined1 auVar19 [12];
  
  pSVar15 = item;
  if (g_data_057aee56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)&"requiredPatreonTierIds";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee56 = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)
              (*(item->klass->vtable)._7_get_Item.methodPtr)
                        (item,"requiredPatreonTierIds",(item->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar15 = pSVar10;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return 0;
    }
    if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      iVar9 = (*(pSVar10->klass->vtable)._11_get_Count.methodPtr)
                        (pSVar10,(pSVar10->klass->vtable)._11_get_Count.method);
      return (uint)(0 < iVar9);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = pSVar15;
  if (g_data_057aee55 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)&"requiredRoles";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee55 = '\x01';
  }
  if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar15,"requiredRoles",(pSVar15->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar10 = pSVar15;
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return 0;
    }
    if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      iVar9 = (*(pSVar15->klass->vtable)._11_get_Count.methodPtr)
                        (pSVar15,(pSVar15->klass->vtable)._11_get_Count.method);
      return (uint)(0 < iVar9);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasRole_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass36_0);
    g_data_057aee5e = '\x01';
  }
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass36_0);
  value = pSVar11;
  System_Object___ctor((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  if (pSVar11 != (System_String_o *)0x0) {
    *(MethodInfo **)&(pSVar11->fields)._stringLength = method;
    il2cpp_runtime_helper_022b4080(&pSVar11->fields);
    bVar8 = System_String__IsNullOrWhiteSpace
                      (*(System_String_o **)&(pSVar11->fields)._stringLength,(MethodInfo *)0x0);
    if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) && ((char)bVar8 == '\0')) {
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
      System_Func_object__bool____ctor();
      bVar8 = System_Linq_Enumerable__Any_object__2504f10
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,predicate,MethodInfo_Boolean_Any_String);
      return bVar8;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"tierIds");
    g_data_057aee59 = '\x01';
  }
  bVar8 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_045278e5:
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return 0;
    }
    if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar12 = (long *)(*(pSVar10->klass->vtable)._27_get_Children.methodPtr)
                                    (pSVar10,(pSVar10->klass->vtable)._27_get_Children.method),
       plVar12 != (long *)0x0)) {
      lVar17 = *plVar12;
      if ((ulong)*(ushort *)(lVar17 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar16) == TypeInfo_IEnumerable_JSONNode) {
            puVar13 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar16) * 0x10 + lVar17 + 0x138);
            goto label_04527991;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar16);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IEnumerable_JSONNode,0);
label_04527991:
      pSVar15 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        lVar17 = 0;
        do {
          pSVar5 = pSVar15->klass;
          uVar1._0_1_ = (pSVar5->_2).rank;
          uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerator) {
                pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar16);
                goto label_04527a13;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar16);
          }
          pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator,0);
label_04527a13:
          cVar7 = (*pVVar14->methodPtr)(pSVar15,pVVar14->method);
          if (cVar7 == '\0') {
            iVar9 = 9;
            lVar17 = 0;
            goto label_04527adb;
          }
          pSVar5 = pSVar15->klass;
          uVar2._0_1_ = (pSVar5->_2).rank;
          uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IEnumerator_JSONNode) {
                pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar16);
                goto label_04527a83;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar16);
          }
          pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerator_JSONNode,0);
label_04527a83:
          plVar12 = (long *)(*pVVar14->methodPtr)(pSVar15,pVVar14->method);
          if (plVar12 == (long *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04527b66;
          }
          pSVar11 = (System_String_o *)
                    (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
          bVar8 = System_String__Equals_3af50f0(pSVar11,value,5,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            bVar18 = 1;
            iVar9 = 8;
            goto joined_r0x04527ace;
          }
        } while( true );
      }
      goto label_04527b6b;
    }
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar10,"tierIds",(pSVar10->klass->vtable)._7_get_Item.method);
      goto label_045278e5;
    }
  }
label_04527b66:
  il2cpp_runtime_helper_022b2c90();
label_04527b6b:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar19 = il2cpp_runtime_helper_022fefe0();
    iVar9 = 0;
    if (auVar19._8_4_ != 1) break;
    plVar12 = (long *)__cxa_begin_catch();
    lVar17 = *plVar12;
    __cxa_end_catch();
label_04527adb:
    bVar18 = 0;
joined_r0x04527ace:
    if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = pSVar15->klass;
      uVar3._0_1_ = (pSVar5->_2).rank;
      uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar16) == TypeInfo_IDisposable) {
            pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar16);
            goto label_04527b3d;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar16);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_04527b3d:
      (*pVVar14->methodPtr)(pSVar15,pVVar14->method);
    }
    if (lVar17 == 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)pSVar15 >> 8),iVar9 == 8 & bVar18);
    }
  }
  if (pSVar15 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = pSVar15->klass;
    uVar4._0_1_ = (pSVar5->_2).rank;
    uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar17) == TypeInfo_IDisposable) {
          pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar17);
          goto label_04527c3d;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar17);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IDisposable,0);
label_04527c3d:
    (*pVVar14->methodPtr)(pSVar15,pVVar14->method);
  }
  _Unwind_Resume(auVar19._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PatreonValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue (System_String_o* key, const MethodInfo* method);
// 0x4525830

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue(System_String_o *key,MethodInfo *method)

{
  code *vtableDispatch;
  bool_conflict bVar1;
  int iVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  long *plVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar6;
  MethodInfo *method_00;
  
  if (g_data_057aee57 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aee57 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
label_04525967:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar3,key,(pSVar3->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto label_04525967;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      plVar4 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar3,key,(pSVar3->klass->vtable)._7_get_Item.method);
      if (plVar4 != (long *)0x0) {
        vtableDispatch = *(code **)(*plVar4 + 0x1c8);
        pSVar5 = (System_String_o *)
                 (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1d0),vtableDispatch);
        return pSVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"tierIds");
    g_data_057aee58 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04525aa6;
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                  (pSVar3,"tierIds",(pSVar3->klass->vtable)._7_get_Item.method);
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (System_String_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04525aa6:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee46 == '\0') {
        il2cpp_runtime_helper_023445d0(&"PresetGuilds");
        g_data_057aee46 = '\x01';
      }
      pSVar6 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions("PresetGuilds",method_00);
      return (System_String_o *)pSVar6;
    }
    iVar2 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    pSVar5 = (System_String_o *)(ulong)(0 < iVar2);
  }
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasAnyPatreonTier
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier (const MethodInfo* method);
// 0x4525990

bool_conflict Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier(MethodInfo *method)

{
  bool_conflict bVar1;
  int iVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar4;
  uint uVar5;
  MethodInfo *method_00;
  
  if (g_data_057aee58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"tierIds");
    g_data_057aee58 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04525aa6;
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                  (pSVar3,"tierIds",(pSVar3->klass->vtable)._7_get_Item.method);
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar5 = 0;
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04525aa6:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee46 == '\0') {
        il2cpp_runtime_helper_023445d0(&"PresetGuilds");
        g_data_057aee46 = '\x01';
      }
      pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions("PresetGuilds",method_00);
      return (bool_conflict)pSVar4;
    }
    iVar2 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    uVar5 = (uint)(0 < iVar2);
  }
  return uVar5;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasPatreonTier
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier (System_String_o* id, const MethodInfo* method);
// 0x45277d0

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier(System_String_o *id,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  char cVar7;
  bool_conflict bVar8;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  long *plVar10;
  undefined8 *puVar11;
  VirtualInvokeData *pVVar12;
  System_String_o *a_00;
  long lVar13;
  long lVar14;
  int iVar15;
  byte bVar16;
  undefined1 auVar17 [12];
  
  if (g_data_057aee59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"tierIds");
    g_data_057aee59 = '\x01';
  }
  bVar8 = System_String__IsNullOrWhiteSpace(id,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_045278e5:
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return 0;
    }
    if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar10 = (long *)(*(pSVar9->klass->vtable)._27_get_Children.methodPtr)
                                    (pSVar9,(pSVar9->klass->vtable)._27_get_Children.method),
       plVar10 != (long *)0x0)) {
      lVar14 = *plVar10;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar13) == TypeInfo_IEnumerable_JSONNode) {
            puVar11 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar13) * 0x10 + lVar14 + 0x138);
            goto label_04527991;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar13);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IEnumerable_JSONNode,0);
label_04527991:
      a = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
        lVar14 = 0;
        do {
          pSVar5 = a->klass;
          uVar1._0_1_ = (pSVar5->_2).rank;
          uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar13) == TypeInfo_IEnumerator) {
                pVVar12 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar13);
                goto label_04527a13;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar13);
          }
          pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator,0);
label_04527a13:
          cVar7 = (*pVVar12->methodPtr)(a,pVVar12->method);
          if (cVar7 == '\0') {
            iVar15 = 9;
            lVar14 = 0;
            goto label_04527adb;
          }
          pSVar5 = a->klass;
          uVar2._0_1_ = (pSVar5->_2).rank;
          uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar13) == TypeInfo_IEnumerator_JSONNode) {
                pVVar12 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar13);
                goto label_04527a83;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar13);
          }
          pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator_JSONNode,0);
label_04527a83:
          plVar10 = (long *)(*pVVar12->methodPtr)(a,pVVar12->method);
          if (plVar10 == (long *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04527b66;
          }
          a_00 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0))
          ;
          bVar8 = System_String__Equals_3af50f0(a_00,id,5,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            bVar16 = 1;
            iVar15 = 8;
            goto joined_r0x04527ace;
          }
        } while( true );
      }
      goto label_04527b6b;
    }
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar9 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar9,"tierIds",(pSVar9->klass->vtable)._7_get_Item.method);
      goto label_045278e5;
    }
  }
label_04527b66:
  il2cpp_runtime_helper_022b2c90();
label_04527b6b:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar17 = il2cpp_runtime_helper_022fefe0();
    iVar15 = 0;
    if (auVar17._8_4_ != 1) break;
    plVar10 = (long *)__cxa_begin_catch();
    lVar14 = *plVar10;
    __cxa_end_catch();
label_04527adb:
    bVar16 = 0;
joined_r0x04527ace:
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = a->klass;
      uVar3._0_1_ = (pSVar5->_2).rank;
      uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar13) == TypeInfo_IDisposable) {
            pVVar12 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar13);
            goto label_04527b3d;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar13);
      }
      pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04527b3d:
      (*pVVar12->methodPtr)(a,pVVar12->method);
    }
    if (lVar14 == 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)a >> 8),iVar15 == 8 & bVar16);
    }
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = a->klass;
    uVar4._0_1_ = (pSVar5->_2).rank;
    uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_IDisposable) {
          pVVar12 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar14);
          goto label_04527c3d;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar14);
    }
    pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04527c3d:
    (*pVVar12->methodPtr)(a,pVVar12->method);
  }
  _Unwind_Resume(auVar17._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Root
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root (const MethodInfo* method);
// 0x4523c90

SimpleJSONFixed_JSONNode_o * Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  undefined4 extraout_var;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  System_String_o *id;
  System_String_o *group;
  
  if (g_data_057aee5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_runtime_helper_023445d0(&"Data/Info/ProfileEntitlementInfo");
    g_data_057aee5a = '\x01';
  }
  pSVar2 = (System_String_o *)UnityEngine_Resources__Load_object_("Data/Info/ProfileEntitlementInfo",MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  id = (System_String_o *)0x0;
  group = pSVar2;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)pSVar2,(MethodInfo *)0x0);
    pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
    return pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = extraout_RDX;
  if (g_data_057aee4f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aee4f = '\x01';
    pMVar4 = extraout_RDX_00;
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,pMVar4);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed_44268e0(pSVar3,pMVar4);
    return (SimpleJSONFixed_JSONNode_o *)CONCAT44(extraout_var,bVar1);
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Contains
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains (SimpleJSONFixed_JSONArray_o* array, System_String_o* value, const MethodInfo* method);
// 0x4523db0

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains
          (SimpleJSONFixed_JSONArray_o *array,System_String_o *value,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  SimpleJSONFixed_JSONArray_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  System_String_o *a;
  MethodInfo *extraout_RDX;
  long lVar12;
  long lVar13;
  int iVar14;
  byte bVar15;
  undefined1 auVar16 [12];
  
  if (g_data_057aee5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    g_data_057aee5b = '\x01';
    method = extraout_RDX;
  }
  if ((array == (SimpleJSONFixed_JSONArray_o *)0x0) ||
     (plVar8 = (long *)(*(array->klass->vtable)._27_get_Children.methodPtr)
                                 (array,(array->klass->vtable)._27_get_Children.method,method),
     plVar8 == (long *)0x0)) {
label_04524054:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    lVar13 = *plVar8;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar12) == TypeInfo_IEnumerable_JSONNode) {
          puVar9 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar12) * 0x10 + lVar13 + 0x138);
          goto label_04523e81;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar12);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IEnumerable_JSONNode,0);
label_04523e81:
    array = (SimpleJSONFixed_JSONArray_o *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (array != (SimpleJSONFixed_JSONArray_o *)0x0) {
      lVar13 = 0;
      do {
        pSVar5 = array->klass;
        uVar1._0_1_ = (pSVar5->_2).rank;
        uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar6 = (pSVar5->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar10 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar12);
              goto label_04523f03;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar12);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(array,TypeInfo_IEnumerator,0);
label_04523f03:
        uVar11 = (*pVVar10->methodPtr)(array,pVVar10->method);
        if ((char)uVar11 == '\0') {
          iVar14 = 5;
          lVar13 = 0;
          goto label_04523fcb;
        }
        pSVar5 = array->klass;
        uVar2._0_1_ = (pSVar5->_2).rank;
        uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar6 = (pSVar5->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar12) == TypeInfo_IEnumerator_JSONNode) {
              pVVar10 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar12);
              goto label_04523f73;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar12);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(array,TypeInfo_IEnumerator_JSONNode,0);
label_04523f73:
        plVar8 = (long *)(*pVVar10->methodPtr)(array,pVVar10->method);
        if (plVar8 == (long *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04524054;
        }
        a = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        uVar7 = System_String__Equals_3af50f0(a,value,5,(MethodInfo *)0x0);
        uVar11 = (ulong)uVar7;
        if ((char)uVar7 != '\0') {
          bVar15 = 1;
          iVar14 = 4;
          goto joined_r0x04523fbe;
        }
      } while( true );
    }
  }
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar16 = il2cpp_runtime_helper_022fefe0();
    iVar14 = 0;
    if (auVar16._8_4_ != 1) break;
    plVar8 = (long *)__cxa_begin_catch();
    lVar13 = *plVar8;
    uVar11 = __cxa_end_catch();
label_04523fcb:
    bVar15 = 0;
joined_r0x04523fbe:
    if (array != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pSVar5 = array->klass;
      uVar3._0_1_ = (pSVar5->_2).rank;
      uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar12) == TypeInfo_IDisposable) {
            pVVar10 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar12);
            goto label_0452402d;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar12);
      }
      pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(array,TypeInfo_IDisposable,0);
label_0452402d:
      uVar11 = (*pVVar10->methodPtr)(array,pVVar10->method);
    }
    if (lVar13 == 0) {
      return (bool_conflict)CONCAT71((int7)(uVar11 >> 8),iVar14 == 4 & bVar15);
    }
  }
  if (array != (SimpleJSONFixed_JSONArray_o *)0x0) {
    pSVar5 = array->klass;
    uVar4._0_1_ = (pSVar5->_2).rank;
    uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar13) == TypeInfo_IDisposable) {
          pVVar10 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar13);
          goto label_0452412d;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar13);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(array,TypeInfo_IDisposable,0);
label_0452412d:
    (*pVVar10->methodPtr)(array,pVVar10->method);
  }
  _Unwind_Resume(auVar16._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdSet
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet (System_Collections_Generic_IEnumerable_JSONNode__o* ids, const MethodInfo* method);
// 0x4523780

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
          (System_Collections_Generic_IEnumerable_JSONNode__o *ids,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_IEnumerable_JSONNode__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_HashSet_object__o *__this;
  VirtualInvokeData *pVVar7;
  undefined8 *puVar8;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  Il2CppObject *item;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *unaff_R13;
  undefined1 auVar13 [12];
  
  if (g_data_057aee5c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057aee5c = '\x01';
    if (*(int *)(TypeInfo_StringComparer + 0xe4) != 0) goto label_045237b2;
label_045238df:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c88 != '\0') goto label_045237bf;
label_045238f1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) goto label_045238df;
label_045237b2:
    if (g_data_057a9c88 == '\0') goto label_045238f1;
label_045237bf:
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_33e0600(__this,comparer,MethodInfo_HashSet_1_System_String);
  if (ids != (System_Collections_Generic_IEnumerable_JSONNode__o *)0x0) {
    pSVar3 = ids->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_IEnumerable_JSONNode) {
          pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar10);
          goto label_04523934;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar10);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(ids,TypeInfo_IEnumerable_JSONNode,0);
label_04523934:
    unaff_R13 = (long *)(*pVVar7->methodPtr)(ids,pVVar7->method);
    if (unaff_R13 == (long *)0x0) goto label_04523b5c;
label_04523960:
    do {
      lVar10 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
            goto label_045239c3;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_045239c3:
      cVar5 = (*(code *)*puVar8)(unaff_R13,puVar8[1]);
      if (cVar5 == '\0') {
        lVar10 = 0;
        goto label_04523aca;
      }
      lVar10 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator_JSONNode) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
            goto label_04523a33;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_JSONNode,0);
label_04523a33:
      a = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar8)(unaff_R13);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    } while ((char)bVar6 == '\0');
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      value = (System_String_o *)(*(a->klass->vtable)._9_get_Value.methodPtr)(a);
      bVar6 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        item = (Il2CppObject *)
               (*(a->klass->vtable)._9_get_Value.methodPtr)(a,(a->klass->vtable)._9_get_Value.method);
        if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04523b52;
        System_Collections_Generic_HashSet_object___Add(__this,item,MethodInfo_Boolean_Add);
      }
      goto label_04523960;
    }
    il2cpp_runtime_helper_022b2c90();
label_04523b52:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_04523b5c:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar13 = il2cpp_runtime_helper_022fefe0();
    if (auVar13._8_4_ != 1) break;
    plVar9 = (long *)__cxa_begin_catch();
    lVar10 = *plVar9;
    __cxa_end_catch();
label_04523aca:
    if (unaff_R13 != (long *)0x0) {
      lVar11 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
            puVar8 = (undefined8 *)
                     (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
            goto label_04523b2d;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_04523b2d:
      (*(code *)*puVar8)(unaff_R13,puVar8[1]);
    }
    if (lVar10 == 0) {
      return (System_Collections_Generic_HashSet_string__o *)__this;
    }
  }
  if (unaff_R13 != (long *)0x0) {
    lVar10 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
          puVar8 = (undefined8 *)
                   (lVar10 + (long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
          goto label_04523c4d;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_04523c4d:
    (*(code *)*puVar8)(unaff_R13,puVar8[1]);
  }
  _Unwind_Resume(auVar13._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdSet
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet (System_Collections_Generic_IEnumerable_string__o* ids, const MethodInfo* method);
// 0x45251f0

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet_44251f0
          (System_Collections_Generic_IEnumerable_string__o *ids,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_IEnumerable_string__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_HashSet_object__o *__this;
  VirtualInvokeData *pVVar7;
  undefined8 *puVar8;
  System_String_o *value;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *unaff_R13;
  undefined1 auVar13 [12];
  
  if (g_data_057aee5d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057aee5d = '\x01';
    if (*(int *)(TypeInfo_StringComparer + 0xe4) != 0) goto label_04525222;
label_04525343:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c88 != '\0') goto label_0452522f;
label_04525355:
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) goto label_04525343;
label_04525222:
    if (g_data_057a9c88 == '\0') goto label_04525355;
label_0452522f:
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_33e0600(__this,comparer,MethodInfo_HashSet_1_System_String);
  if (ids != (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    pSVar3 = ids->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_IEnumerable_string) {
          pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar10);
          goto label_04525398;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar10);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(ids,TypeInfo_IEnumerable_string,0);
label_04525398:
    unaff_R13 = (long *)(*pVVar7->methodPtr)(ids,pVVar7->method);
    if (unaff_R13 == (long *)0x0) goto label_04525567;
label_045253d0:
    do {
      lVar10 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
            goto label_04525433;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_04525433:
      cVar5 = (*(code *)*puVar8)(unaff_R13,puVar8[1]);
      if (cVar5 == '\0') {
        lVar10 = 0;
        goto label_045254df;
      }
      lVar10 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator_string) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
            goto label_045254a3;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_string,0);
label_045254a3:
      value = (System_String_o *)(*(code *)*puVar8)(unaff_R13);
      bVar6 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
    } while ((char)bVar6 != '\0');
    if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add(__this,(Il2CppObject *)value,MethodInfo_Boolean_Add);
      goto label_045253d0;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_04525567:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar13 = il2cpp_runtime_helper_022fefe0();
    if (auVar13._8_4_ != 1) break;
    plVar9 = (long *)__cxa_begin_catch();
    lVar10 = *plVar9;
    __cxa_end_catch();
label_045254df:
    if (unaff_R13 != (long *)0x0) {
      lVar11 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
            puVar8 = (undefined8 *)
                     (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
            goto label_0452553d;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_0452553d:
      (*(code *)*puVar8)(unaff_R13,puVar8[1]);
    }
    if (lVar10 == 0) {
      return (System_Collections_Generic_HashSet_string__o *)__this;
    }
  }
  if (unaff_R13 != (long *)0x0) {
    lVar10 = *unaff_R13;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
          puVar8 = (undefined8 *)
                   (lVar10 + (long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
          goto label_0452562d;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_0452562d:
    (*(code *)*puVar8)(unaff_R13,puVar8[1]);
  }
  _Unwind_Resume(auVar13._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasRole
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole (System_Collections_Generic_IEnumerable_string__o* roles, System_String_o* required, const MethodInfo* method);
// 0x45276e0

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
          (System_Collections_Generic_IEnumerable_string__o *roles,System_String_o *required,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  SimpleJSONFixed_JSONNode_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  char cVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  System_Func_TSource__bool__o *predicate;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  long *plVar11;
  undefined8 *puVar12;
  VirtualInvokeData *pVVar13;
  System_String_o *value;
  long lVar14;
  long lVar15;
  int iVar16;
  byte bVar17;
  undefined1 auVar18 [12];
  
  if (g_data_057aee5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasRole_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass36_0);
    g_data_057aee5e = '\x01';
  }
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass36_0);
  value = pSVar9;
  System_Object___ctor((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
  if (pSVar9 != (System_String_o *)0x0) {
    *(System_String_o **)&(pSVar9->fields)._stringLength = required;
    il2cpp_runtime_helper_022b4080(&pSVar9->fields);
    bVar8 = System_String__IsNullOrWhiteSpace
                      (*(System_String_o **)&(pSVar9->fields)._stringLength,(MethodInfo *)0x0);
    if ((roles != (System_Collections_Generic_IEnumerable_string__o *)0x0) && ((char)bVar8 == '\0')) {
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
      System_Func_object__bool____ctor();
      bVar8 = System_Linq_Enumerable__Any_object__2504f10
                        ((System_Collections_Generic_IEnumerable_TSource__o *)roles,predicate,MethodInfo_Boolean_Any_String);
      return bVar8;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee59 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"tierIds");
    g_data_057aee59 = '\x01';
  }
  bVar8 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_045278e5:
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return 0;
    }
    if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar11 = (long *)(*(pSVar10->klass->vtable)._27_get_Children.methodPtr)
                                    (pSVar10,(pSVar10->klass->vtable)._27_get_Children.method),
       plVar11 != (long *)0x0)) {
      lVar15 = *plVar11;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
            puVar12 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar14) * 0x10 + lVar15 + 0x138);
            goto label_04527991;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar14);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IEnumerable_JSONNode,0);
label_04527991:
      a = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
        lVar15 = 0;
        do {
          pSVar5 = a->klass;
          uVar1._0_1_ = (pSVar5->_2).rank;
          uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar14 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_IEnumerator) {
                pVVar13 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar14);
                goto label_04527a13;
              }
              lVar14 = lVar14 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar14);
          }
          pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator,0);
label_04527a13:
          cVar7 = (*pVVar13->methodPtr)(a,pVVar13->method);
          if (cVar7 == '\0') {
            iVar16 = 9;
            lVar15 = 0;
            goto label_04527adb;
          }
          pSVar5 = a->klass;
          uVar2._0_1_ = (pSVar5->_2).rank;
          uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar6 = (pSVar5->_1).interfaceOffsets;
            lVar14 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_IEnumerator_JSONNode) {
                pVVar13 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar14);
                goto label_04527a83;
              }
              lVar14 = lVar14 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar14);
          }
          pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator_JSONNode,0);
label_04527a83:
          plVar11 = (long *)(*pVVar13->methodPtr)(a,pVVar13->method);
          if (plVar11 == (long *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04527b66;
          }
          pSVar9 = (System_String_o *)
                   (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
          bVar8 = System_String__Equals_3af50f0(pSVar9,value,5,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            bVar17 = 1;
            iVar16 = 8;
            goto joined_r0x04527ace;
          }
        } while( true );
      }
      goto label_04527b6b;
    }
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar10,"tierIds",(pSVar10->klass->vtable)._7_get_Item.method);
      goto label_045278e5;
    }
  }
label_04527b66:
  il2cpp_runtime_helper_022b2c90();
label_04527b6b:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar18 = il2cpp_runtime_helper_022fefe0();
    iVar16 = 0;
    if (auVar18._8_4_ != 1) break;
    plVar11 = (long *)__cxa_begin_catch();
    lVar15 = *plVar11;
    __cxa_end_catch();
label_04527adb:
    bVar17 = 0;
joined_r0x04527ace:
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = a->klass;
      uVar3._0_1_ = (pSVar5->_2).rank;
      uVar3._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar14) == TypeInfo_IDisposable) {
            pVVar13 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar14);
            goto label_04527b3d;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar14);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04527b3d:
      (*pVVar13->methodPtr)(a,pVVar13->method);
    }
    if (lVar15 == 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)a >> 8),iVar16 == 8 & bVar17);
    }
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = a->klass;
    uVar4._0_1_ = (pSVar5->_2).rank;
    uVar4._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IDisposable) {
          pVVar13 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar15);
          goto label_04527c3d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar15);
    }
    pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04527c3d:
    (*pVVar13->methodPtr)(a,pVVar13->method);
  }
  _Unwind_Resume(auVar18._0_8_);
}


