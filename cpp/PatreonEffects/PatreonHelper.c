// Type: PatreonEffects.PatreonHelper
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/PatreonHelper.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.PatreonHelper$$HasTier
// il2cpp: bool PatreonEffects_PatreonHelper__HasTier (System_String_array* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x432fc70

bool_conflict
PatreonEffects_PatreonHelper__HasTier
          (System_String_array *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  System_String_array *value;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  System_String_array *a;
  Il2CppMethodPointer *ppIVar8;
  long *plVar9;
  System_String_o *pSVar10;
  System_String_o *value_00;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  System_String_o *b;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  int iVar17;
  byte bVar18;
  undefined1 auVar19 [12];
  
  if (((tierIds == (System_String_array *)0x0) || (uVar3 = tierIds->max_length, uVar3 == 0)) ||
     ((int)uVar3 < 1)) {
    return 0;
  }
  uVar13 = 0;
  b = targetTier;
  a = tierIds;
  if ((uVar3 & 0xffffffff) != 0) {
    do {
      value = (System_String_array *)tierIds->m_Items[uVar13];
      b = (System_String_o *)0x0;
      a = value;
      bVar7 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (value == (System_String_array *)0x0) goto label_0432fd06;
        a = (System_String_array *)System_String__Trim((System_String_o *)value,(MethodInfo *)0x0);
        b = targetTier;
        bVar7 = System_String__Equals_3af50f0((System_String_o *)a,targetTier,4,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar7 >> 8),1);
        }
      }
      uVar13 = uVar13 + 1;
      uVar2 = (uint)tierIds->max_length;
      if ((long)(int)uVar2 <= (long)uVar13) {
        return 0;
      }
    } while (uVar13 < uVar2);
  }
  il2cpp_runtime_helper_022b2ca0();
label_0432fd06:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae070 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae070 = '\x01';
  }
  if (a == (System_String_array *)0x0) {
    return 0;
  }
  pIVar4 = (a->obj).klass;
  uVar1._0_1_ = (pIVar4->_2).rank;
  uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar5 = (pIVar4->_1).interfaceOffsets;
    lVar14 = 0;
    do {
      if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IEnumerable) {
        ppIVar8 = &(&((System_String_VTable *)pIVar4->vtable)->_0_Equals)
                   [*(int *)((long)&pIVar5->offset + lVar14)].methodPtr;
        goto label_0432fdc8;
      }
      lVar14 = lVar14 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar14);
  }
  ppIVar8 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerable,0);
label_0432fdc8:
  plVar9 = (long *)(**ppIVar8)(a,(MethodInfo *)ppIVar8[1]);
  if (plVar9 == (long *)0x0) {
label_0433001b:
    il2cpp_runtime_helper_022b2c90();
    goto label_04330020;
  }
  targetTier = (System_String_o *)0x0;
  do {
    do {
      do {
        lVar14 = *plVar9;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
              ppIVar8 = (Il2CppMethodPointer *)
                        ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + lVar14 + 0x138);
              goto label_0432fe53;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
        }
        ppIVar8 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator,0);
label_0432fe53:
        cVar6 = (**ppIVar8)(plVar9,(MethodInfo *)ppIVar8[1]);
        if (cVar6 == '\0') {
          iVar17 = 7;
          targetTier = (System_String_o *)0x0;
          goto label_0432ff78;
        }
        lVar14 = *plVar9;
        if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
              ppIVar8 = (Il2CppMethodPointer *)
                        ((long)(*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) + 1) * 0x10 + lVar14 + 0x138);
              goto label_0432fed8;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
        }
        ppIVar8 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerator,1);
label_0432fed8:
        pSVar10 = (System_String_o *)(**ppIVar8)();
      } while (pSVar10 == (System_String_o *)0x0);
      value_00 = pSVar10;
      if (pSVar10->klass != g_data_057b9c00) {
        value_00 = targetTier;
      }
      bVar7 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        value_00 = (System_String_o *)(*(pSVar10->klass->vtable)._3_ToString.methodPtr)(pSVar10);
      }
      bVar7 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    } while ((char)bVar7 != '\0');
    if (value_00 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_0433001b;
    }
    pSVar10 = System_String__Trim(value_00,(MethodInfo *)0x0);
    ppIVar8 = (Il2CppMethodPointer *)0x0;
    bVar7 = System_String__Equals_3af50f0(pSVar10,b,4,(MethodInfo *)0x0);
  } while ((char)bVar7 == '\0');
  bVar18 = 1;
  iVar17 = 6;
  do {
    plVar11 = (long *)il2cpp_runtime_helper_023051f0(plVar9,TypeInfo_IDisposable);
    if (plVar11 != (long *)0x0) {
      lVar14 = *plVar11;
      ppIVar8 = (Il2CppMethodPointer *)0x0;
      if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
        ppIVar8 = (Il2CppMethodPointer *)((ulong)*(ushort *)(lVar14 + 0x12e) << 4);
        puVar16 = (undefined1 *)0x0;
        do {
          if (*(long *)(puVar16 + *(long *)(lVar14 + 0xb0)) == TypeInfo_IDisposable) {
            ppIVar8 = (Il2CppMethodPointer *)((long)*(int *)(puVar16 + *(long *)(lVar14 + 0xb0) + 8) * 0x10);
            puVar12 = (undefined8 *)((long)ppIVar8 + lVar14 + 0x138);
            goto label_0432ffed;
          }
          puVar16 = puVar16 + 0x10;
        } while (ppIVar8 != (Il2CppMethodPointer *)puVar16);
      }
      puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0432ffed:
      (*(code *)*puVar12)(plVar11,puVar12[1]);
    }
    if (targetTier == (System_String_o *)0x0) {
      return (bool_conflict)CONCAT71((int7)((ulong)ppIVar8 >> 8),iVar17 == 6 & bVar18);
    }
label_04330020:
    auVar19 = il2cpp_runtime_helper_022fefe0(targetTier);
    iVar17 = 0;
    if (auVar19._8_4_ != 1) break;
    puVar12 = (undefined8 *)__cxa_begin_catch(auVar19._0_8_);
    targetTier = (System_String_o *)*puVar12;
    __cxa_end_catch();
label_0432ff78:
    bVar18 = 0;
  } while( true );
  plVar9 = (long *)il2cpp_runtime_helper_023051f0(plVar9,TypeInfo_IDisposable);
  if (plVar9 != (long *)0x0) {
    lVar14 = *plVar9;
    if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
          puVar12 = (undefined8 *)
                    (lVar14 + (long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
          goto label_0433011d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar15);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_0433011d:
    (*(code *)*puVar12)(plVar9,puVar12[1]);
  }
  _Unwind_Resume(auVar19._0_8_);
}


// PatreonEffects.PatreonHelper$$HasTier
// il2cpp: bool PatreonEffects_PatreonHelper__HasTier (System_Collections_IEnumerable_o* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x432fd10

bool_conflict
PatreonEffects_PatreonHelper__HasTier_422fd10
          (System_Collections_IEnumerable_o *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_IEnumerable_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  System_String_o *pSVar8;
  System_String_o *value;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  int iVar14;
  System_String_o *unaff_R14;
  byte bVar15;
  undefined1 auVar16 [12];
  
  if (g_data_057ae070 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae070 = '\x01';
  }
  if (tierIds == (System_Collections_IEnumerable_o *)0x0) {
    return 0;
  }
  pSVar2 = tierIds->klass;
  uVar1._0_1_ = (pSVar2->_2).rank;
  uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(long *)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_IEnumerable) {
        pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
        goto label_0432fdc8;
      }
      lVar11 = lVar11 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar11);
  }
  pVVar6 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(tierIds,TypeInfo_IEnumerable,0);
label_0432fdc8:
  plVar7 = (long *)(*pVVar6->methodPtr)(tierIds,pVVar6->method);
  if (plVar7 == (long *)0x0) {
label_0433001b:
    il2cpp_runtime_helper_022b2c90();
    goto label_04330020;
  }
  unaff_R14 = (System_String_o *)0x0;
  do {
    do {
      do {
        lVar11 = *plVar7;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
              pVVar6 = (VirtualInvokeData *)
                       ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
              goto label_0432fe53;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
        }
        pVVar6 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IEnumerator,0);
label_0432fe53:
        cVar4 = (*pVVar6->methodPtr)(plVar7,pVVar6->method);
        if (cVar4 == '\0') {
          iVar14 = 7;
          unaff_R14 = (System_String_o *)0x0;
          goto label_0432ff78;
        }
        lVar11 = *plVar7;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
              pVVar6 = (VirtualInvokeData *)
                       ((long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) + 1) * 0x10 + lVar11 + 0x138);
              goto label_0432fed8;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
        }
        pVVar6 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IEnumerator,1);
label_0432fed8:
        pSVar8 = (System_String_o *)(*pVVar6->methodPtr)();
      } while (pSVar8 == (System_String_o *)0x0);
      value = pSVar8;
      if (pSVar8->klass != g_data_057b9c00) {
        value = unaff_R14;
      }
      bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        value = (System_String_o *)(*(pSVar8->klass->vtable)._3_ToString.methodPtr)(pSVar8);
      }
      bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    } while ((char)bVar5 != '\0');
    if (value == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_0433001b;
    }
    pSVar8 = System_String__Trim(value,(MethodInfo *)0x0);
    pVVar6 = (VirtualInvokeData *)0x0;
    bVar5 = System_String__Equals_3af50f0(pSVar8,targetTier,4,(MethodInfo *)0x0);
  } while ((char)bVar5 == '\0');
  bVar15 = 1;
  iVar14 = 6;
  do {
    plVar9 = (long *)il2cpp_runtime_helper_023051f0(plVar7,TypeInfo_IDisposable);
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      pVVar6 = (VirtualInvokeData *)0x0;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        pVVar6 = (VirtualInvokeData *)((ulong)*(ushort *)(lVar11 + 0x12e) << 4);
        puVar13 = (undefined1 *)0x0;
        do {
          if (*(long *)(puVar13 + *(long *)(lVar11 + 0xb0)) == TypeInfo_IDisposable) {
            pVVar6 = (VirtualInvokeData *)((long)*(int *)(puVar13 + *(long *)(lVar11 + 0xb0) + 8) * 0x10);
            puVar10 = (undefined8 *)((long)&pVVar6[0x13].method + lVar11);
            goto label_0432ffed;
          }
          puVar13 = puVar13 + 0x10;
        } while (pVVar6 != (VirtualInvokeData *)puVar13);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_0432ffed:
      (*(code *)*puVar10)(plVar9,puVar10[1]);
    }
    if (unaff_R14 == (System_String_o *)0x0) {
      return (bool_conflict)CONCAT71((int7)((ulong)pVVar6 >> 8),iVar14 == 6 & bVar15);
    }
label_04330020:
    auVar16 = il2cpp_runtime_helper_022fefe0(unaff_R14);
    iVar14 = 0;
    if (auVar16._8_4_ != 1) break;
    puVar10 = (undefined8 *)__cxa_begin_catch(auVar16._0_8_);
    unaff_R14 = (System_String_o *)*puVar10;
    __cxa_end_catch();
label_0432ff78:
    bVar15 = 0;
  } while( true );
  plVar7 = (long *)il2cpp_runtime_helper_023051f0(plVar7,TypeInfo_IDisposable);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
          puVar10 = (undefined8 *)
                    (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
          goto label_0433011d;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar7,TypeInfo_IDisposable,0);
label_0433011d:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  _Unwind_Resume(auVar16._0_8_);
}


// PatreonEffects.PatreonHelper$$TryGetRemoteBool
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteBool (Photon_Realtime_Player_o* player, System_String_o* key, bool* value, const MethodInfo* method);
// 0x4330150

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteBool
          (Photon_Realtime_Player_o *player,System_String_o *key,bool_conflict *value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 *puVar2;
  
  *(undefined1 *)value = 0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pIVar1 = PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
    if (pIVar1 == (Il2CppObject *)0x0) {
      return 0;
    }
    if (pIVar1->klass == g_data_057b9b98) {
      puVar2 = (undefined1 *)il2cpp_runtime_helper_02305440(pIVar1);
      *(undefined1 *)value = *puVar2;
      return 1;
    }
  }
  return 0;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteString
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteString (Photon_Realtime_Player_o* player, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x43301a0

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteString
          (Photon_Realtime_Player_o *player,System_String_o *key,System_String_o **value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *value_00;
  bool_conflict bVar2;
  
  *value = (System_String_o *)0x0;
  bVar2 = 0;
  il2cpp_runtime_helper_022b4080(value,0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = 0;
    value_00 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
    if ((value_00 != (System_String_o *)0x0) && (bVar2 = 0, value_00->klass == g_data_057b9c00)) {
      bVar2 = 0;
      bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        *value = value_00;
        il2cpp_runtime_helper_022b4080(value,value_00);
        bVar2 = 1;
      }
    }
  }
  return bVar2;
}


// PatreonEffects.PatreonHelper$$TryParseTierIdsString
// il2cpp: bool PatreonEffects_PatreonHelper__TryParseTierIdsString (System_String_o* raw, System_Collections_Generic_List_string__o** parsed, const MethodInfo* method);
// 0x4330230

bool_conflict
PatreonEffects_PatreonHelper__TryParseTierIdsString
          (System_String_o *raw,System_Collections_Generic_List_string__o **parsed,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  ulong uVar3;
  System_String_array *pSVar4;
  long lVar5;
  char cVar6;
  bool_conflict bVar7;
  int iVar8;
  int32_t iVar9;
  System_String_o *value;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_List_string__o *pSVar10;
  long *plVar11;
  System_String_array *pSVar12;
  System_Collections_Generic_List_string__o *pSVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_List_string__o *__this;
  undefined8 *puVar15;
  MethodInfo *extraout_RDX;
  undefined1 auVar16 [12];
  
  if (g_data_057ae071 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"[");
    il2cpp_runtime_helper_023445d0(&"]");
    g_data_057ae071 = '\x01';
    method = extraout_RDX;
  }
  *parsed = (System_Collections_Generic_List_string__o *)0x0;
  __this = (System_Collections_Generic_List_string__o *)0x0;
  il2cpp_runtime_helper_022b4080(parsed,0,method);
  bVar7 = System_String__IsNullOrEmpty(raw,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return 0;
  }
  if (raw != (System_String_o *)0x0) {
    __this = (System_Collections_Generic_List_string__o *)0x0;
    value = System_String__Trim(raw,(MethodInfo *)0x0);
    bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return 0;
    }
    if (value != (System_String_o *)0x0) {
      bVar7 = System_String__StartsWith(value,"[",(MethodInfo *)0x0);
      if (((char)bVar7 != '\0') &&
         (bVar7 = System_String__EndsWith(value,"]",(MethodInfo *)0x0), (char)bVar7 != '\0')) {
        a = SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04330523;
          cVar6 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)(a,(a->klass->vtable)._16_get_IsArray.method)
          ;
          __this = (System_Collections_Generic_List_string__o *)0x0;
          if (cVar6 != '\0') {
            pSVar10 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_System_String);
            __this = (System_Collections_Generic_List_string__o *)0x0;
            if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
              do {
                iVar8 = (*(a->klass->vtable)._11_get_Count.methodPtr)
                                  (a,(a->klass->vtable)._11_get_Count.method);
                if (iVar8 <= (int)__this) goto label_043304ee;
                plVar11 = (long *)(*(a->klass->vtable)._5_get_Item.methodPtr)
                                            (a,__this,(a->klass->vtable)._5_get_Item.method);
                if (plVar11 == (long *)0x0) goto label_04330514;
                pSVar14 = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11);
                bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
                __this = (System_Collections_Generic_List_string__o *)(ulong)((int)__this + 1);
              } while ((char)bVar7 != '\0');
              goto label_04330519;
            }
            while( true ) {
              iVar8 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method)
              ;
              if (iVar8 <= (int)__this) break;
              plVar11 = (long *)(*(a->klass->vtable)._5_get_Item.methodPtr)
                                          (a,__this,(a->klass->vtable)._5_get_Item.method);
              if (plVar11 == (long *)0x0) goto label_04330514;
              pSVar14 = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11);
              bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              lVar5 = MethodInfo_Void_Add;
              if ((char)bVar7 == '\0') {
                piVar1 = &(pSVar10->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar12 = (pSVar10->fields)._items;
                if (pSVar12 == (System_String_array *)0x0) goto label_0433051e;
                uVar2 = (pSVar10->fields)._size;
                if (uVar2 < (uint)pSVar12->max_length) {
                  (pSVar10->fields)._size = uVar2 + 1;
                  pSVar12->m_Items[(int)uVar2] = pSVar14;
                  il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar2,pSVar14);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar14,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
              }
              __this = (System_Collections_Generic_List_string__o *)(ulong)((int)__this + 1);
            }
label_043304ee:
            if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) goto label_04330528;
            if (0 < (pSVar10->fields)._size) {
              *parsed = pSVar10;
              il2cpp_runtime_helper_022b4080(parsed,pSVar10);
              return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
            }
          }
        }
      }
      goto label_04330675;
    }
  }
label_043308f4:
  il2cpp_runtime_helper_022b2c90();
label_043308f9:
  il2cpp_runtime_helper_022b2ca0();
label_043308fe:
  puVar15 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar15 = __this->klass;
  __cxa_throw(puVar15,&PTR_PTR_05215060,0);
label_04330514:
  il2cpp_runtime_helper_022b2c90();
label_04330519:
  il2cpp_runtime_helper_022b2c90();
label_0433051e:
  il2cpp_runtime_helper_022b2c90();
label_04330523:
  il2cpp_runtime_helper_022b2c90();
label_04330528:
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ != 1) {
    _Unwind_Resume(auVar16._0_8_);
  }
  __this = (System_Collections_Generic_List_string__o *)__cxa_begin_catch(auVar16._0_8_);
  cVar6 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,(__this->klass->_1).image);
  if (cVar6 == '\0') goto label_043308fe;
  __cxa_end_catch();
label_04330675:
  iVar9 = System_String__IndexOf(value,0x2c,(MethodInfo *)0x0);
  if (iVar9 < 0) {
label_04330853:
    __this = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_System_String);
    lVar5 = MethodInfo_Void_Add;
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar12 = (__this->fields)._items;
      if (pSVar12 != (System_String_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar12->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar12->m_Items[(int)uVar2] = value;
          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar2,value);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)value,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        *parsed = __this;
        pSVar10 = __this;
label_043308dc:
        il2cpp_runtime_helper_022b4080(parsed,pSVar10);
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
    goto label_043308f4;
  }
  pSVar12 = System_String__Split(value,0x2c,0,(MethodInfo *)0x0);
  pSVar10 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_System_String);
  if (pSVar12 == (System_String_array *)0x0) goto label_043308f4;
  uVar3 = pSVar12->max_length;
  pSVar13 = (System_Collections_Generic_List_string__o *)(uVar3 & 0xffffffff);
  if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < (int)uVar3) {
      __this = (System_Collections_Generic_List_string__o *)0x0;
      do {
        if (pSVar13 <= __this) goto label_043308f9;
        if (pSVar12->m_Items[(long)__this] == (System_String_o *)0x0) {
          bVar7 = System_String__IsNullOrEmpty
                            ((System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
          cVar6 = (char)bVar7;
        }
        else {
          pSVar14 = System_String__Trim(pSVar12->m_Items[(long)__this],(MethodInfo *)0x0);
          bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
          cVar6 = (char)bVar7;
        }
        if (cVar6 == '\0') goto label_043308f4;
        __this = (System_Collections_Generic_List_string__o *)((long)&__this->klass + 1);
        uVar2 = (uint)pSVar12->max_length;
        pSVar13 = (System_Collections_Generic_List_string__o *)(ulong)uVar2;
      } while ((long)__this < (long)(int)uVar2);
    }
label_04330830:
    if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) goto label_043308f4;
    if (0 < (pSVar10->fields)._size) {
      *parsed = pSVar10;
      goto label_043308dc;
    }
    goto label_04330853;
  }
  if ((int)uVar3 < 1) goto label_04330830;
  __this = (System_Collections_Generic_List_string__o *)0x0;
  if ((uVar3 & 0xffffffff) != 0) {
    do {
      if (pSVar12->m_Items[(long)__this] == (System_String_o *)0x0) {
        pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar14 = System_String__Trim(pSVar12->m_Items[(long)__this],(MethodInfo *)0x0);
      }
      bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      if ((char)bVar7 == '\0') {
        piVar1 = &(pSVar10->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar10->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) goto label_043308f4;
        uVar2 = (pSVar10->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar10->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = pSVar14;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar14,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
      __this = (System_Collections_Generic_List_string__o *)((long)&__this->klass + 1);
      uVar2 = (uint)pSVar12->max_length;
      if ((long)(int)uVar2 <= (long)__this) goto label_04330830;
    } while (__this < (System_Collections_Generic_List_string__o *)(ulong)uVar2);
  }
  goto label_043308f9;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteTierIds
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteTierIds (Photon_Realtime_Player_o* player, System_Collections_IEnumerable_o** tierIds, const MethodInfo* method);
// 0x4330940

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteTierIds
          (Photon_Realtime_Player_o *player,System_Collections_IEnumerable_o **tierIds,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *raw;
  System_Collections_Generic_List_string__o *pSVar2;
  MethodInfo *extraout_RDX;
  System_Collections_Generic_List_string__o *local_20;
  
  if (g_data_057ae072 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057ae072 = '\x01';
    method = extraout_RDX;
  }
  local_20 = (System_Collections_Generic_List_string__o *)0x0;
  *tierIds = (System_Collections_IEnumerable_o *)0x0;
  il2cpp_runtime_helper_022b4080(tierIds,0,method);
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return 0;
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  raw = (System_String_o *)
        PhotonExtensions__GetCustomProperty
                  (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0xc0),(MethodInfo *)0x0);
  if (raw != (System_String_o *)0x0) {
    if (raw->klass == g_data_057b9c00) {
      bVar1 = PatreonEffects_PatreonHelper__TryParseTierIdsString(raw,&local_20,(MethodInfo *)raw->klass);
      if ((char)bVar1 == '\0') {
        return 0;
      }
      *tierIds = (System_Collections_IEnumerable_o *)local_20;
      pSVar2 = local_20;
    }
    else {
      pSVar2 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023051f0(raw,TypeInfo_IEnumerable);
      if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) {
        return 0;
      }
      *tierIds = (System_Collections_IEnumerable_o *)pSVar2;
    }
    il2cpp_runtime_helper_022b4080(tierIds,pSVar2);
    return 1;
  }
  return 0;
}


// PatreonEffects.PatreonHelper$$ToTierLabel
// il2cpp: System_String_o* PatreonEffects_PatreonHelper__ToTierLabel (bool hasTier2, bool hasTier3, const MethodInfo* method);
// 0x4330a40

System_String_o *
PatreonEffects_PatreonHelper__ToTierLabel(bool_conflict hasTier2,bool_conflict hasTier3,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (g_data_057ae073 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Tier 2");
    il2cpp_runtime_helper_023445d0(&"Tier 3");
    g_data_057ae073 = '\x01';
  }
  if ((char)hasTier3 == '\0') {
    if ((char)hasTier2 == '\0') {
      return (System_String_o *)0x0;
    }
    puVar1 = &"Tier 2";
  }
  else {
    puVar1 = &"Tier 3";
  }
  return (System_String_o *)*puVar1;
}


// PatreonEffects.PatreonHelper$$TryGetLocalPatreonFlags
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags (bool* linked, bool* hasTier2, bool* hasTier3, const MethodInfo* method);
// 0x4330aa0

bool_conflict
PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
          (bool_conflict *linked,bool_conflict *hasTier2,bool_conflict *hasTier3,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  char cVar3;
  bool_conflict bVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  undefined8 *puStack_40;
  bool_conflict *pbStack_38;
  
  uVar6 = SUB81(method,0);
  uVar7 = (undefined7)((ulong)method >> 8);
  if (g_data_057ae074 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae074 = '\x01';
  }
  *(undefined1 *)linked = 0;
  *(undefined1 *)hasTier2 = 0;
  *(undefined1 *)hasTier3 = 0;
  if (*(int *)((long)TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_04330be6;
label_04330afe:
    if (*(int *)((long)TypeInfo_AccountManager + 0xe4) != 0) goto label_04330b0e;
label_04330c09:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(TypeInfo_AccountManager[0x17] + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_04330afe;
label_04330be6:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)TypeInfo_AccountManager + 0xe4) == 0) goto label_04330c09;
label_04330b0e:
    lVar1 = *(long *)(TypeInfo_AccountManager[0x17] + 0x38);
  }
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)((long)TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_04330c43;
label_04330b3a:
    if (*(int *)((long)TypeInfo_AccountManager + 0xe4) != 0) goto label_04330b4a;
label_04330c66:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(TypeInfo_AccountManager[0x17] + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_04330b3a;
label_04330c43:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)TypeInfo_AccountManager + 0xe4) == 0) goto label_04330c66;
label_04330b4a:
    lVar1 = *(long *)(TypeInfo_AccountManager[0x17] + 0x38);
  }
  if (lVar1 == 0) goto label_04330cd5;
  if (*(long *)(lVar1 + 0x48) == 0) {
    return 0;
  }
  if (*(int *)((long)TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_04330c96;
label_04330b83:
    if (*(int *)((long)TypeInfo_AccountManager + 0xe4) != 0) goto label_04330b93;
label_04330cb9:
    il2cpp_runtime_helper_02337ed0();
    lVar1 = *(long *)(TypeInfo_AccountManager[0x17] + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_04330b83;
label_04330c96:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)TypeInfo_AccountManager + 0xe4) == 0) goto label_04330cb9;
label_04330b93:
    lVar1 = *(long *)(TypeInfo_AccountManager[0x17] + 0x38);
  }
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x48) != 0)) {
    lVar1 = *(long *)(*(long *)(lVar1 + 0x48) + 0x58);
    if (lVar1 == 0) {
      return 0;
    }
    *(undefined1 *)linked = *(undefined1 *)(lVar1 + 0x10);
    *(undefined1 *)hasTier2 = *(undefined1 *)(lVar1 + 0x40);
    *(undefined1 *)hasTier3 = *(undefined1 *)(lVar1 + 0x41);
    return (bool_conflict)CONCAT71((int7)((ulong)lVar1 >> 8),1);
  }
label_04330cd5:
  puVar9 = TypeInfo_AccountManager;
  il2cpp_runtime_helper_022b2c90();
  puStack_40 = &TypeInfo_AccountManager;
  pbStack_38 = hasTier3;
  if (g_data_057ae075 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae075 = '\x01';
  }
  cStack_41 = '\0';
  cStack_42 = '\0';
  cStack_43 = '\0';
  *puVar9 = 0;
  il2cpp_runtime_helper_022b4080(puVar9,0);
  if (*(int *)((long)TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar5 = 0;
  bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    bVar4 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                      ((bool_conflict *)&cStack_41,(bool_conflict *)&cStack_42,(bool_conflict *)&cStack_43,
                       (MethodInfo *)CONCAT71(uVar7,uVar6));
    cVar3 = cStack_42;
    cVar2 = cStack_43;
    uVar5 = 0;
    if ((cStack_41 != '\0') && ((char)bVar4 != '\0')) {
      if (g_data_057ae073 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Tier 2");
        il2cpp_runtime_helper_023445d0(&"Tier 3");
        g_data_057ae073 = '\x01';
      }
      uVar8 = "Tier 2";
      if (cVar3 == '\0') {
        uVar8 = 0;
      }
      if (cVar2 != '\0') {
        uVar8 = "Tier 3";
      }
      *puVar9 = uVar8;
      il2cpp_runtime_helper_022b4080(puVar9);
      uVar5 = System_String__IsNullOrEmpty((System_String_o *)*puVar9,(MethodInfo *)0x0);
      uVar5 = uVar5 ^ 1;
    }
  }
  return uVar5;
}


// PatreonEffects.PatreonHelper$$TryGetLocalTierLabel
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetLocalTierLabel (System_String_o** tierLabel, const MethodInfo* method);
// 0x4330ce0

bool_conflict
PatreonEffects_PatreonHelper__TryGetLocalTierLabel(System_String_o **tierLabel,MethodInfo *method)

{
  char cVar1;
  char cVar2;
  bool_conflict bVar3;
  uint uVar4;
  MethodInfo *in_RCX;
  System_String_o *pSVar5;
  char local_1b;
  char local_1a;
  char local_19;
  
  if (g_data_057ae075 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae075 = '\x01';
  }
  local_19 = '\0';
  local_1a = '\0';
  local_1b = '\0';
  *tierLabel = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(tierLabel,0);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = 0;
  bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    bVar3 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                      ((bool_conflict *)&local_19,(bool_conflict *)&local_1a,(bool_conflict *)&local_1b,in_RCX
                      );
    cVar2 = local_1a;
    cVar1 = local_1b;
    uVar4 = 0;
    if ((local_19 != '\0') && ((char)bVar3 != '\0')) {
      if (g_data_057ae073 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Tier 2");
        il2cpp_runtime_helper_023445d0(&"Tier 3");
        g_data_057ae073 = '\x01';
      }
      pSVar5 = "Tier 2";
      if (cVar2 == '\0') {
        pSVar5 = (System_String_o *)0x0;
      }
      if (cVar1 != '\0') {
        pSVar5 = "Tier 3";
      }
      *tierLabel = pSVar5;
      il2cpp_runtime_helper_022b4080(tierLabel);
      uVar4 = System_String__IsNullOrEmpty(*tierLabel,(MethodInfo *)0x0);
      uVar4 = uVar4 ^ 1;
    }
  }
  return uVar4;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteTierLabel
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteTierLabel (Photon_Realtime_Player_o* player, System_String_o** tierLabel, const MethodInfo* method);
// 0x4330e00

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteTierLabel
          (Photon_Realtime_Player_o *player,System_String_o **tierLabel,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o *pSVar5;
  undefined1 auVar6 [16];
  System_Collections_IEnumerable_o *local_20;
  
  if (g_data_057ae076 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"28767500");
    il2cpp_runtime_helper_023445d0(&"28767505");
    g_data_057ae076 = '\x01';
    method = extraout_RDX;
  }
  local_20 = (System_Collections_IEnumerable_o *)0x0;
  *tierLabel = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(tierLabel,0,method);
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return 0;
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar4 = PhotonExtensions__GetCustomProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0xb8),(MethodInfo *)0x0);
  method_00 = extraout_RDX_00;
  if ((pIVar4 != (Il2CppObject *)0x0) && (method_00 = pIVar4->klass, method_00 == g_data_057b9b98)) {
    auVar6 = il2cpp_runtime_helper_02305440(pIVar4);
    method_00 = auVar6._8_8_;
    if (*auVar6._0_8_ == '\0') {
      return 0;
    }
  }
  bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,&local_20,(MethodInfo *)method_00);
  if ((char)bVar1 == '\0') {
    return 0;
  }
  bVar1 = PatreonEffects_PatreonHelper__HasTier_422fd10(local_20,"28767500",method_01);
  bVar2 = PatreonEffects_PatreonHelper__HasTier_422fd10(local_20,"28767505",method_02);
  if (g_data_057ae073 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Tier 2");
    il2cpp_runtime_helper_023445d0(&"Tier 3");
    g_data_057ae073 = '\x01';
  }
  pSVar5 = "Tier 2";
  if ((char)bVar1 == '\0') {
    pSVar5 = (System_String_o *)0x0;
  }
  if ((char)bVar2 != '\0') {
    pSVar5 = "Tier 3";
  }
  *tierLabel = pSVar5;
  il2cpp_runtime_helper_022b4080(tierLabel);
  uVar3 = System_String__IsNullOrEmpty(*tierLabel,(MethodInfo *)0x0);
  return uVar3 ^ 1;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteDisplayName
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteDisplayName (Photon_Realtime_Player_o* player, System_String_o** displayName, const MethodInfo* method);
// 0x4330f80

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteDisplayName
          (Photon_Realtime_Player_o *player,System_String_o **displayName,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  
  if (g_data_057ae077 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057ae077 = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98);
  *displayName = (System_String_o *)0x0;
  bVar3 = 0;
  il2cpp_runtime_helper_022b4080(displayName,0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = 0;
    pSVar2 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,pSVar2,(MethodInfo *)0x0);
    if ((pSVar2 != (System_String_o *)0x0) && (bVar3 = 0, pSVar2->klass == g_data_057b9c00)) {
      bVar3 = 0;
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        *displayName = pSVar2;
        il2cpp_runtime_helper_022b4080(displayName,pSVar2);
        bVar3 = 1;
      }
    }
  }
  return bVar3;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteAccountId
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteAccountId (Photon_Realtime_Player_o* player, System_String_o** accountId, const MethodInfo* method);
// 0x4331050

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteAccountId
          (Photon_Realtime_Player_o *player,System_String_o **accountId,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  
  if (g_data_057ae078 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057ae078 = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x90);
  *accountId = (System_String_o *)0x0;
  bVar3 = 0;
  il2cpp_runtime_helper_022b4080(accountId,0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = 0;
    pSVar2 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,pSVar2,(MethodInfo *)0x0);
    if ((pSVar2 != (System_String_o *)0x0) && (bVar3 = 0, pSVar2->klass == g_data_057b9c00)) {
      bVar3 = 0;
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        *accountId = pSVar2;
        il2cpp_runtime_helper_022b4080(accountId,pSVar2);
        bVar3 = 1;
      }
    }
  }
  return bVar3;
}


// PatreonEffects.PatreonHelper$$LocalPlayerHasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess (const MethodInfo* method);
// 0x4331120

bool_conflict PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess(MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RCX;
  uint uVar2;
  char local_b;
  char local_a;
  char local_9;
  
  if (g_data_057ae079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae079 = '\x01';
  }
  local_9 = '\0';
  local_a = '\0';
  local_b = '\0';
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar2 = 0;
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                      ((bool_conflict *)&local_9,(bool_conflict *)&local_a,(bool_conflict *)&local_b,in_RCX);
    uVar2 = 0;
    if ((local_9 != '\0') && ((char)bVar1 != '\0')) {
      uVar2 = (uint)(local_b != '\0' || local_a != '\0');
    }
  }
  return uVar2;
}


// PatreonEffects.PatreonHelper$$RemotePlayerHasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43311b0

bool_conflict
PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess
          (Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *extraout_RDX;
  Il2CppClass *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined1 auVar4 [16];
  System_Collections_IEnumerable_o *local_18;
  
  if (g_data_057ae07a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"28767500");
    il2cpp_runtime_helper_023445d0(&"28767505");
    g_data_057ae07a = '\x01';
  }
  local_18 = (System_Collections_IEnumerable_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = PhotonExtensions__GetCustomProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0xb8),(MethodInfo *)0x0)
    ;
    method_00 = extraout_RDX;
    if ((pIVar3 != (Il2CppObject *)0x0) && (method_00 = pIVar3->klass, method_00 == g_data_057b9b98)) {
      auVar4 = il2cpp_runtime_helper_02305440(pIVar3);
      method_00 = auVar4._8_8_;
      if (*auVar4._0_8_ == '\0') {
        return 0;
      }
    }
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,&local_18,(MethodInfo *)method_00);
    if ((char)bVar1 != '\0') {
      bVar1 = PatreonEffects_PatreonHelper__HasTier_422fd10(local_18,"28767500",method_01);
      bVar2 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
      if ((char)bVar1 == '\0') {
        bVar2 = PatreonEffects_PatreonHelper__HasTier_422fd10(local_18,"28767505",method_02);
      }
      return bVar2;
    }
  }
  return 0;
}


// PatreonEffects.PatreonHelper$$HasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__HasNameEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4327b00

bool_conflict
PatreonEffects_PatreonHelper__HasNameEffectAccess(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RCX;
  uint uVar2;
  char local_b;
  char local_a;
  char local_9;
  
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return 0;
  }
  if ((char)(player->fields).IsLocal != '\0') {
    if (g_data_057ae079 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae079 = '\x01';
    }
    local_9 = '\0';
    local_a = '\0';
    local_b = '\0';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar2 = 0;
    bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                        ((bool_conflict *)&local_9,(bool_conflict *)&local_a,(bool_conflict *)&local_b,in_RCX)
      ;
      uVar2 = 0;
      if ((local_9 != '\0') && ((char)bVar1 != '\0')) {
        uVar2 = (uint)(local_b != '\0' || local_a != '\0');
      }
    }
    return uVar2;
  }
  bVar1 = PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess(player,method);
  return bVar1;
}


// PatreonEffects.PatreonHelper$$LocalPlayerHasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess (const MethodInfo* method);
// 0x43312a0

bool_conflict PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess(MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RCX;
  uint uVar2;
  char local_b;
  char local_a;
  undefined1 local_9;
  
  if (g_data_057ae07b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae07b = '\x01';
  }
  local_a = '\0';
  local_9 = 0;
  local_b = '\0';
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar2 = 0;
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                      ((bool_conflict *)&local_a,(bool_conflict *)&local_9,(bool_conflict *)&local_b,in_RCX);
    uVar2 = 0;
    if ((local_a != '\0') && ((char)bVar1 != '\0')) {
      uVar2 = (uint)(local_b != '\0');
    }
  }
  return uVar2;
}


// PatreonEffects.PatreonHelper$$RemotePlayerHasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__RemotePlayerHasCharacterEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4331330

bool_conflict
PatreonEffects_PatreonHelper__RemotePlayerHasCharacterEffectAccess
          (Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *extraout_RDX;
  Il2CppClass *method_00;
  MethodInfo *method_01;
  undefined1 auVar3 [16];
  System_Collections_IEnumerable_o *local_18;
  
  if (g_data_057ae07c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&"28767505");
    g_data_057ae07c = '\x01';
  }
  local_18 = (System_Collections_IEnumerable_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar2 = PhotonExtensions__GetCustomProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0xb8),(MethodInfo *)0x0)
    ;
    method_00 = extraout_RDX;
    if ((pIVar2 != (Il2CppObject *)0x0) && (method_00 = pIVar2->klass, method_00 == g_data_057b9b98)) {
      auVar3 = il2cpp_runtime_helper_02305440(pIVar2);
      method_00 = auVar3._8_8_;
      if (*auVar3._0_8_ == '\0') {
        return 0;
      }
    }
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,&local_18,(MethodInfo *)method_00);
    if ((char)bVar1 != '\0') {
      bVar1 = PatreonEffects_PatreonHelper__HasTier_422fd10(local_18,"28767505",method_01);
      return bVar1;
    }
  }
  return 0;
}


// PatreonEffects.PatreonHelper$$HasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__HasCharacterEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4331400

bool_conflict
PatreonEffects_PatreonHelper__HasCharacterEffectAccess(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RCX;
  uint uVar2;
  char local_b;
  char local_a;
  undefined1 local_9;
  
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return 0;
  }
  if ((char)(player->fields).IsLocal != '\0') {
    if (g_data_057ae07b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae07b = '\x01';
    }
    local_a = '\0';
    local_9 = 0;
    local_b = '\0';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar2 = 0;
    bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                        ((bool_conflict *)&local_a,(bool_conflict *)&local_9,(bool_conflict *)&local_b,in_RCX)
      ;
      uVar2 = 0;
      if ((local_a != '\0') && ((char)bVar1 != '\0')) {
        uVar2 = (uint)(local_b != '\0');
      }
    }
    return uVar2;
  }
  bVar1 = PatreonEffects_PatreonHelper__RemotePlayerHasCharacterEffectAccess(player,method);
  return bVar1;
}


