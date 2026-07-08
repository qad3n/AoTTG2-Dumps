// Type: PatreonEffects.PatreonHelper
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PatreonEffects/PatreonHelper.cs
// Prior source: NEW in this update
// --------------------------------

// PatreonEffects.PatreonHelper$$HasTier
// il2cpp: bool PatreonEffects_PatreonHelper__HasTier (System_String_array* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x403a990

bool_conflict
PatreonEffects_PatreonHelper__HasTier
          (System_String_array *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  uint uVar1;
  ulong uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  ulong uVar5;
  
  if (((tierIds == (System_String_array *)0x0) || (uVar2 = tierIds->max_length, uVar2 == 0)) ||
     ((int)uVar2 < 1)) {
    return 0;
  }
  uVar5 = 0;
  if ((uVar2 & 0xffffffff) != 0) {
    do {
      pSVar4 = tierIds->m_Items[uVar5];
      bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
        bVar3 = System_String__Equals(pSVar4,targetTier,4,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar3 >> 8),1);
        }
      }
      uVar5 = uVar5 + 1;
      uVar1 = (uint)tierIds->max_length;
      if ((long)(int)uVar1 <= (long)uVar5) {
        return 0;
      }
    } while (uVar5 < uVar1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.PatreonHelper$$HasTier
// il2cpp: bool PatreonEffects_PatreonHelper__HasTier (System_Collections_IEnumerable_o* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x403aa30

/* WARNING: Removing unreachable block (ram,0x0403ad40) */

bool_conflict
PatreonEffects_PatreonHelper__HasTier
          (System_Collections_IEnumerable_o *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_IEnumerable_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  System_String_o *value;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  byte bVar14;
  
  if (DAT_057043a9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata();
    DAT_057043a9 = '\x01';
  }
  if (tierIds == (System_Collections_IEnumerable_o *)0x0) {
    bVar5 = 0;
  }
  else {
    pSVar2 = tierIds->klass;
    uVar1._0_1_ = (pSVar2->_2).rank;
    uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_IEnumerable) {
          pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
          goto LAB_0403aae8;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar11);
    }
    pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(tierIds,TypeInfo_IEnumerable,0);
LAB_0403aae8:
    plVar7 = (long *)(*pVVar6->methodPtr)(tierIds,pVVar6->method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      do {
        do {
          lVar11 = *plVar7;
          if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
                puVar8 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 +
                         0x138);
                goto LAB_0403ab73;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
          }
          puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,0);
LAB_0403ab73:
          cVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if (cVar4 == '\0') {
            iVar13 = 7;
            bVar14 = 0;
            goto LAB_0403ac9b;
          }
          lVar11 = *plVar7;
          if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
            lVar12 = 0;
            do {
              if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
                puVar8 = (undefined8 *)
                         ((long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) + 1) * 0x10 +
                          lVar11 + 0x138);
                goto LAB_0403abf8;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
          }
          puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,1);
LAB_0403abf8:
          pSVar9 = (System_String_o *)(*(code *)*puVar8)();
        } while (pSVar9 == (System_String_o *)0x0);
        value = pSVar9;
        if (pSVar9->klass != DAT_057110b0) {
          value = (System_String_o *)0x0;
        }
        bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          value = (System_String_o *)(*(pSVar9->klass->vtable)._3_ToString.methodPtr)(pSVar9);
        }
        bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      } while ((char)bVar5 != '\0');
      if (value == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar9 = System_String__Trim(value,(MethodInfo *)0x0);
      puVar8 = (undefined8 *)0x0;
      bVar5 = System_String__Equals(pSVar9,targetTier,4,(MethodInfo *)0x0);
    } while ((char)bVar5 == '\0');
    bVar14 = 1;
    iVar13 = 6;
LAB_0403ac9b:
    plVar7 = (long *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable);
    if (plVar7 != (long *)0x0) {
      lVar11 = *plVar7;
      puVar8 = (undefined8 *)0x0;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        puVar8 = (undefined8 *)((ulong)*(ushort *)(lVar11 + 0x12e) << 4);
        puVar10 = (undefined8 *)0x0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + (long)puVar10) == TypeInfo_IDisposable) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + (long)puVar10) * 0x10);
            puVar10 = (undefined8 *)((long)puVar8 + lVar11 + 0x138);
            goto LAB_0403ad0d;
          }
          puVar10 = puVar10 + 2;
        } while (puVar8 != puVar10);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable,0);
LAB_0403ad0d:
      (*(code *)*puVar10)(plVar7,puVar10[1]);
    }
    bVar5 = (bool_conflict)CONCAT71((int7)((ulong)puVar8 >> 8),iVar13 == 6 & bVar14);
  }
  return bVar5;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteBool
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteBool (Photon_Realtime_Player_o* player, System_String_o* key, bool* value, const MethodInfo* method);
// 0x403ae70

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteBool
          (Photon_Realtime_Player_o *player,System_String_o *key,bool_conflict *value,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 *puVar2;
  
  *(undefined1 *)value = 0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pIVar1 = PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
    if (pIVar1 == (Il2CppObject *)0x0) {
      return 0;
    }
    if (pIVar1->klass == DAT_05711048) {
      puVar2 = (undefined1 *)il2cpp_glue_022c7330(pIVar1);
      *(undefined1 *)value = *puVar2;
      return 1;
    }
  }
  return 0;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteString
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteString (Photon_Realtime_Player_o* player, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x403aec0

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteString
          (Photon_Realtime_Player_o *player,System_String_o *key,System_String_o **value,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *value_00;
  bool_conflict bVar2;
  
  *value = (System_String_o *)0x0;
  bVar2 = 0;
  il2cpp_runtime_glue(value,0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = 0;
    value_00 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
    if ((value_00 != (System_String_o *)0x0) && (bVar2 = 0, value_00->klass == DAT_057110b0)) {
      bVar2 = 0;
      bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        *value = value_00;
        il2cpp_runtime_glue(value,value_00);
        bVar2 = 1;
      }
    }
  }
  return bVar2;
}


// PatreonEffects.PatreonHelper$$TryParseTierIdsString
// il2cpp: bool PatreonEffects_PatreonHelper__TryParseTierIdsString (System_String_o* raw, System_Collections_Generic_List_string__o** parsed, const MethodInfo* method);
// 0x403af50

bool_conflict
PatreonEffects_PatreonHelper__TryParseTierIdsString
          (System_String_o *raw,System_Collections_Generic_List_string__o **parsed,
          MethodInfo *method)

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
  MethodInfo *extraout_RDX;
  
  if (DAT_057043aa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"[");
    il2cpp_init_method_metadata(&"]");
    DAT_057043aa = '\x01';
    method = extraout_RDX;
  }
  *parsed = (System_Collections_Generic_List_string__o *)0x0;
  il2cpp_runtime_glue(parsed,0,method);
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
    if (value == (System_String_o *)0x0) goto LAB_0403b614;
    bVar7 = System_String__StartsWith(value,"[",(MethodInfo *)0x0);
    if (((char)bVar7 != '\0') &&
       (bVar7 = System_String__EndsWith(value,"]",(MethodInfo *)0x0), (char)bVar7 != '\0'))
    {
      a = SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        cVar6 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)
                          (a,(a->klass->vtable)._16_get_IsArray.method);
        __this = (System_Collections_Generic_List_string__o *)0x0;
        if (cVar6 != '\0') {
          pSVar10 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_System_String);
          __this = (System_Collections_Generic_List_string__o *)0x0;
          if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
            while( true ) {
              iVar8 = (*(a->klass->vtable)._11_get_Count.methodPtr)
                                (a,(a->klass->vtable)._11_get_Count.method);
              if (iVar8 <= (int)__this) break;
              plVar11 = (long *)(*(a->klass->vtable)._5_get_Item.methodPtr)
                                          (a,__this,(a->klass->vtable)._5_get_Item.method);
              if (plVar11 == (long *)0x0) {
LAB_0403b234:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar14 = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11);
              bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              __this = (System_Collections_Generic_List_string__o *)(ulong)((int)__this + 1);
              if ((char)bVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
          }
          else {
            while( true ) {
              iVar8 = (*(a->klass->vtable)._11_get_Count.methodPtr)
                                (a,(a->klass->vtable)._11_get_Count.method);
              if (iVar8 <= (int)__this) break;
              plVar11 = (long *)(*(a->klass->vtable)._5_get_Item.methodPtr)
                                          (a,__this,(a->klass->vtable)._5_get_Item.method);
              if (plVar11 == (long *)0x0) goto LAB_0403b234;
              pSVar14 = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11);
              bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              lVar5 = MethodInfo_Void_Add;
              if ((char)bVar7 == '\0') {
                piVar1 = &(pSVar10->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar12 = (pSVar10->fields)._items;
                if (pSVar12 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar2 = (pSVar10->fields)._size;
                if (uVar2 < (uint)pSVar12->max_length) {
                  (pSVar10->fields)._size = uVar2 + 1;
                  pSVar12->m_Items[(int)uVar2] = pSVar14;
                  il2cpp_runtime_glue(pSVar12->m_Items + (int)uVar2,pSVar14);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar10,
                             (Il2CppObject *)pSVar14,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
              }
              __this = (System_Collections_Generic_List_string__o *)(ulong)((int)__this + 1);
            }
          }
          if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (0 < (pSVar10->fields)._size) {
            *parsed = pSVar10;
            il2cpp_runtime_glue(parsed,pSVar10);
            return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
          }
        }
      }
    }
    iVar9 = System_String__IndexOf(value,0x2c,(MethodInfo *)0x0);
    if (-1 < iVar9) {
      pSVar12 = System_String__Split(value,0x2c,0,(MethodInfo *)0x0);
      pSVar10 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_System_String);
      if (pSVar12 == (System_String_array *)0x0) goto LAB_0403b614;
      uVar3 = pSVar12->max_length;
      pSVar13 = (System_Collections_Generic_List_string__o *)(uVar3 & 0xffffffff);
      if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
        if (0 < (int)uVar3) {
          __this = (System_Collections_Generic_List_string__o *)0x0;
          do {
            if (pSVar13 <= __this) goto LAB_0403b619;
            if (pSVar12->m_Items[(long)__this] == (System_String_o *)0x0) {
              bVar7 = System_String__IsNullOrEmpty
                                ((System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                                 (MethodInfo *)0x0);
              cVar6 = (char)bVar7;
            }
            else {
              pSVar14 = System_String__Trim(pSVar12->m_Items[(long)__this],(MethodInfo *)0x0);
              bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              cVar6 = (char)bVar7;
            }
            if (cVar6 == '\0') goto LAB_0403b614;
            __this = (System_Collections_Generic_List_string__o *)((long)&__this->klass + 1);
            uVar2 = (uint)pSVar12->max_length;
            pSVar13 = (System_Collections_Generic_List_string__o *)(ulong)uVar2;
          } while ((long)__this < (long)(int)uVar2);
        }
      }
      else if (0 < (int)uVar3) {
        __this = (System_Collections_Generic_List_string__o *)0x0;
        if ((uVar3 & 0xffffffff) != 0) {
          do {
            if (pSVar12->m_Items[(long)__this] == (System_String_o *)0x0) {
              pSVar14 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
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
              if (pSVar4 == (System_String_array *)0x0) goto LAB_0403b614;
              uVar2 = (pSVar10->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                (pSVar10->fields)._size = uVar2 + 1;
                pSVar4->m_Items[(int)uVar2] = pSVar14;
                il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar10,
                           (Il2CppObject *)pSVar14,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
            }
            __this = (System_Collections_Generic_List_string__o *)((long)&__this->klass + 1);
            uVar2 = (uint)pSVar12->max_length;
            if ((long)(int)uVar2 <= (long)__this) goto LAB_0403b550;
          } while (__this < (System_Collections_Generic_List_string__o *)(ulong)uVar2);
        }
LAB_0403b619:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_0403b550:
      if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0403b614;
      if (0 < (pSVar10->fields)._size) {
        *parsed = pSVar10;
        goto LAB_0403b5fc;
      }
    }
    __this = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
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
          il2cpp_runtime_glue(pSVar12->m_Items + (int)uVar2,value);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)value,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        *parsed = __this;
        pSVar10 = __this;
LAB_0403b5fc:
        il2cpp_runtime_glue(parsed,pSVar10);
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
  }
LAB_0403b614:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.PatreonHelper$$TryGetRemoteTierIds
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteTierIds (Photon_Realtime_Player_o* player, System_Collections_IEnumerable_o** tierIds, const MethodInfo* method);
// 0x403b660

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteTierIds
          (Photon_Realtime_Player_o *player,System_Collections_IEnumerable_o **tierIds,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *raw;
  System_Collections_Generic_List_string__o *pSVar2;
  MethodInfo *extraout_RDX;
  System_Collections_Generic_List_string__o *local_20;
  
  if (DAT_057043ab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_057043ab = '\x01';
    method = extraout_RDX;
  }
  local_20 = (System_Collections_Generic_List_string__o *)0x0;
  *tierIds = (System_Collections_IEnumerable_o *)0x0;
  il2cpp_runtime_glue(tierIds,0,method);
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return 0;
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  raw = (System_String_o *)
        PhotonExtensions__GetCustomProperty
                  (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0xc0),
                   (MethodInfo *)0x0);
  if (raw != (System_String_o *)0x0) {
    if (raw->klass == DAT_057110b0) {
      bVar1 = PatreonEffects_PatreonHelper__TryParseTierIdsString
                        (raw,&local_20,(MethodInfo *)raw->klass);
      if ((char)bVar1 == '\0') {
        return 0;
      }
      *tierIds = (System_Collections_IEnumerable_o *)local_20;
      pSVar2 = local_20;
    }
    else {
      pSVar2 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(raw,TypeInfo_IEnumerable);
      if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) {
        return 0;
      }
      *tierIds = (System_Collections_IEnumerable_o *)pSVar2;
    }
    il2cpp_runtime_glue(tierIds,pSVar2);
    return 1;
  }
  return 0;
}


// PatreonEffects.PatreonHelper$$ToTierLabel
// il2cpp: System_String_o* PatreonEffects_PatreonHelper__ToTierLabel (bool hasTier2, bool hasTier3, const MethodInfo* method);
// 0x403b760

System_String_o *
PatreonEffects_PatreonHelper__ToTierLabel
          (bool_conflict hasTier2,bool_conflict hasTier3,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_057043ac == '\0') {
    il2cpp_init_method_metadata(&"Tier 2");
    il2cpp_init_method_metadata(&"Tier 3");
    DAT_057043ac = '\x01';
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
// 0x403b7c0

bool_conflict
PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
          (bool_conflict *linked,bool_conflict *hasTier2,bool_conflict *hasTier3,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057043ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager,hasTier2,hasTier3,(char)method);
    DAT_057043ad = '\x01';
  }
  *(undefined1 *)linked = 0;
  *(undefined1 *)hasTier2 = 0;
  *(undefined1 *)hasTier3 = 0;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e != '\0') goto LAB_0403b81e;
LAB_0403b90f:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_0403b82e;
LAB_0403b932:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e == '\0') goto LAB_0403b90f;
LAB_0403b81e:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0403b932;
LAB_0403b82e:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e != '\0') goto LAB_0403b85d;
LAB_0403b96f:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_0403b86d;
LAB_0403b992:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e == '\0') goto LAB_0403b96f;
LAB_0403b85d:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0403b992;
LAB_0403b86d:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) goto LAB_0403ba07;
  if (*(long *)(lVar1 + 0x48) == 0) {
    return 0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e != '\0') goto LAB_0403b8a9;
LAB_0403b9c5:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_0403b8b9;
LAB_0403b9e8:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e == '\0') goto LAB_0403b9c5;
LAB_0403b8a9:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0403b9e8;
LAB_0403b8b9:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
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
LAB_0403ba07:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.PatreonHelper$$TryGetLocalTierLabel
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetLocalTierLabel (System_String_o** tierLabel, const MethodInfo* method);
// 0x403ba10

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
  
  if (DAT_057043ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_057043ae = '\x01';
  }
  local_19 = '\0';
  local_1a = '\0';
  local_1b = '\0';
  *tierLabel = (System_String_o *)0x0;
  il2cpp_runtime_glue(tierLabel,0);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar4 = 0;
  bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    bVar3 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                      ((bool_conflict *)&local_19,(bool_conflict *)&local_1a,
                       (bool_conflict *)&local_1b,in_RCX);
    cVar2 = local_1a;
    cVar1 = local_1b;
    uVar4 = 0;
    if ((local_19 != '\0') && ((char)bVar3 != '\0')) {
      if (DAT_057043ac == '\0') {
        il2cpp_init_method_metadata(&"Tier 2");
        il2cpp_init_method_metadata(&"Tier 3");
        DAT_057043ac = '\x01';
      }
      pSVar5 = "Tier 2";
      if (cVar2 == '\0') {
        pSVar5 = (System_String_o *)0x0;
      }
      if (cVar1 != '\0') {
        pSVar5 = "Tier 3";
      }
      *tierLabel = pSVar5;
      il2cpp_runtime_glue(tierLabel);
      uVar4 = System_String__IsNullOrEmpty(*tierLabel,(MethodInfo *)0x0);
      uVar4 = uVar4 ^ 1;
    }
  }
  return uVar4;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteTierLabel
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteTierLabel (Photon_Realtime_Player_o* player, System_String_o** tierLabel, const MethodInfo* method);
// 0x403bb30

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
  
  if (DAT_057043af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"28767500");
    il2cpp_init_method_metadata(&"28767505");
    DAT_057043af = '\x01';
    method = extraout_RDX;
  }
  local_20 = (System_Collections_IEnumerable_o *)0x0;
  *tierLabel = (System_String_o *)0x0;
  il2cpp_runtime_glue(tierLabel,0,method);
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return 0;
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = PhotonExtensions__GetCustomProperty
                     (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0xb8),
                      (MethodInfo *)0x0);
  method_00 = extraout_RDX_00;
  if ((pIVar4 != (Il2CppObject *)0x0) && (method_00 = pIVar4->klass, method_00 == DAT_05711048)) {
    auVar6 = il2cpp_glue_022c7330(pIVar4);
    method_00 = auVar6._8_8_;
    if (*auVar6._0_8_ == '\0') {
      return 0;
    }
  }
  bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds
                    (player,&local_20,(MethodInfo *)method_00);
  if ((char)bVar1 == '\0') {
    return 0;
  }
  bVar1 = PatreonEffects_PatreonHelper__HasTier(local_20,"28767500",method_01);
  bVar2 = PatreonEffects_PatreonHelper__HasTier(local_20,"28767505",method_02);
  if (DAT_057043ac == '\0') {
    il2cpp_init_method_metadata(&"Tier 2");
    il2cpp_init_method_metadata(&"Tier 3");
    DAT_057043ac = '\x01';
  }
  pSVar5 = "Tier 2";
  if ((char)bVar1 == '\0') {
    pSVar5 = (System_String_o *)0x0;
  }
  if ((char)bVar2 != '\0') {
    pSVar5 = "Tier 3";
  }
  *tierLabel = pSVar5;
  il2cpp_runtime_glue(tierLabel);
  uVar3 = System_String__IsNullOrEmpty(*tierLabel,(MethodInfo *)0x0);
  return uVar3 ^ 1;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteDisplayName
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteDisplayName (Photon_Realtime_Player_o* player, System_String_o** displayName, const MethodInfo* method);
// 0x403bcb0

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteDisplayName
          (Photon_Realtime_Player_o *player,System_String_o **displayName,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  
  if (DAT_057043b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_057043b0 = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x98);
  *displayName = (System_String_o *)0x0;
  bVar3 = 0;
  il2cpp_runtime_glue(displayName,0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = 0;
    pSVar2 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,pSVar2,(MethodInfo *)0x0)
    ;
    if ((pSVar2 != (System_String_o *)0x0) && (bVar3 = 0, pSVar2->klass == DAT_057110b0)) {
      bVar3 = 0;
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        *displayName = pSVar2;
        il2cpp_runtime_glue(displayName,pSVar2);
        bVar3 = 1;
      }
    }
  }
  return bVar3;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteAccountId
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteAccountId (Photon_Realtime_Player_o* player, System_String_o** accountId, const MethodInfo* method);
// 0x403bd80

bool_conflict
PatreonEffects_PatreonHelper__TryGetRemoteAccountId
          (Photon_Realtime_Player_o *player,System_String_o **accountId,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  
  if (DAT_057043b1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_057043b1 = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x90);
  *accountId = (System_String_o *)0x0;
  bVar3 = 0;
  il2cpp_runtime_glue(accountId,0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = 0;
    pSVar2 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,pSVar2,(MethodInfo *)0x0)
    ;
    if ((pSVar2 != (System_String_o *)0x0) && (bVar3 = 0, pSVar2->klass == DAT_057110b0)) {
      bVar3 = 0;
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        *accountId = pSVar2;
        il2cpp_runtime_glue(accountId,pSVar2);
        bVar3 = 1;
      }
    }
  }
  return bVar3;
}


// PatreonEffects.PatreonHelper$$LocalPlayerHasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess (const MethodInfo* method);
// 0x403be50

bool_conflict PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess(MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RCX;
  uint uVar2;
  char local_b;
  char local_a;
  char local_9;
  
  if (DAT_057043b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_057043b2 = '\x01';
  }
  local_9 = '\0';
  local_a = '\0';
  local_b = '\0';
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar2 = 0;
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                      ((bool_conflict *)&local_9,(bool_conflict *)&local_a,(bool_conflict *)&local_b
                       ,in_RCX);
    uVar2 = 0;
    if ((local_9 != '\0') && ((char)bVar1 != '\0')) {
      uVar2 = (uint)(local_b != '\0' || local_a != '\0');
    }
  }
  return uVar2;
}


// PatreonEffects.PatreonHelper$$RemotePlayerHasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x403bee0

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
  
  if (DAT_057043b3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"28767500");
    il2cpp_init_method_metadata(&"28767505");
    DAT_057043b3 = '\x01';
  }
  local_18 = (System_Collections_IEnumerable_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = PhotonExtensions__GetCustomProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0xb8),
                        (MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((pIVar3 != (Il2CppObject *)0x0) && (method_00 = pIVar3->klass, method_00 == DAT_05711048)) {
      auVar4 = il2cpp_glue_022c7330(pIVar3);
      method_00 = auVar4._8_8_;
      if (*auVar4._0_8_ == '\0') {
        return 0;
      }
    }
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds
                      (player,&local_18,(MethodInfo *)method_00);
    if ((char)bVar1 != '\0') {
      bVar1 = PatreonEffects_PatreonHelper__HasTier(local_18,"28767500",method_01);
      bVar2 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
      if ((char)bVar1 == '\0') {
        bVar2 = PatreonEffects_PatreonHelper__HasTier(local_18,"28767505",method_02);
      }
      return bVar2;
    }
  }
  return 0;
}


// PatreonEffects.PatreonHelper$$HasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__HasNameEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4038580

bool_conflict
PatreonEffects_PatreonHelper__HasNameEffectAccess
          (Photon_Realtime_Player_o *player,MethodInfo *method)

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
    if (DAT_057043b4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_057043b4 = '\x01';
    }
    local_a = '\0';
    local_9 = 0;
    local_b = '\0';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar2 = 0;
    bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                        ((bool_conflict *)&local_a,(bool_conflict *)&local_9,
                         (bool_conflict *)&local_b,in_RCX);
      uVar2 = 0;
      if ((local_a != '\0') && ((char)bVar1 != '\0')) {
        uVar2 = (uint)(local_b != '\0');
      }
    }
    return uVar2;
  }
  bVar1 = PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess(player,method);
  return bVar1;
}


// PatreonEffects.PatreonHelper$$LocalPlayerHasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess (const MethodInfo* method);
// 0x403bfd0

bool_conflict PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess(MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RCX;
  uint uVar2;
  char local_b;
  char local_a;
  undefined1 local_9;
  
  if (DAT_057043b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_057043b4 = '\x01';
  }
  local_a = '\0';
  local_9 = 0;
  local_b = '\0';
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar2 = 0;
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                      ((bool_conflict *)&local_a,(bool_conflict *)&local_9,(bool_conflict *)&local_b
                       ,in_RCX);
    uVar2 = 0;
    if ((local_a != '\0') && ((char)bVar1 != '\0')) {
      uVar2 = (uint)(local_b != '\0');
    }
  }
  return uVar2;
}


// PatreonEffects.PatreonHelper$$RemotePlayerHasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__RemotePlayerHasCharacterEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x403c060

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
  
  if (DAT_057043b5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"28767505");
    DAT_057043b5 = '\x01';
  }
  local_18 = (System_Collections_IEnumerable_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = PhotonExtensions__GetCustomProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0xb8),
                        (MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((pIVar2 != (Il2CppObject *)0x0) && (method_00 = pIVar2->klass, method_00 == DAT_05711048)) {
      auVar3 = il2cpp_glue_022c7330(pIVar2);
      method_00 = auVar3._8_8_;
      if (*auVar3._0_8_ == '\0') {
        return 0;
      }
    }
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds
                      (player,&local_18,(MethodInfo *)method_00);
    if ((char)bVar1 != '\0') {
      bVar1 = PatreonEffects_PatreonHelper__HasTier(local_18,"28767505",method_01);
      return bVar1;
    }
  }
  return 0;
}


// PatreonEffects.PatreonHelper$$HasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__HasCharacterEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x403c130

bool_conflict
PatreonEffects_PatreonHelper__HasCharacterEffectAccess
          (Photon_Realtime_Player_o *player,MethodInfo *method)

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
    if (DAT_057043b4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_057043b4 = '\x01';
    }
    local_a = '\0';
    local_9 = 0;
    local_b = '\0';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar2 = 0;
    bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                        ((bool_conflict *)&local_a,(bool_conflict *)&local_9,
                         (bool_conflict *)&local_b,in_RCX);
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


