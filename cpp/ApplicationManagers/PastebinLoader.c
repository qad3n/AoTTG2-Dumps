// Type: ApplicationManagers.PastebinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/PastebinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/PastebinLoader.cs
// --------------------------------

// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__9$$.ctor
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9___ctor (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44be120

void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9___ctor
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__9$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9__System_IDisposable_Dispose (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x44be210

void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9__System_IDisposable_Dispose
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  UnityEngine_WWW_o *pUVar3;
  UnityEngine_WWW_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtableDispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (g_data_057aea7f == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aea7f = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar3 = (__this->fields)._www_5__5;
    if (pUVar3 != (UnityEngine_WWW_o *)0x0) {
      pUVar4 = pUVar3->klass;
      uVar1._0_1_ = (pUVar4->_2).rank;
      uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pUVar4->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = pIVar5;
            auVar7._0_8_ = &(pUVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar6);
            goto label_044be2af;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_helper_02300d20(pUVar3,TypeInfo_IDisposable,0);
label_044be2af:
      vtableDispatch = (code *)*auVar7._0_8_;
      (*vtableDispatch)(pUVar3,auVar7._0_8_[1],auVar7._8_8_,vtableDispatch);
      return;
    }
  }
  return;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__9$$MoveNext
// il2cpp: bool ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9__MoveNext (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x44be2c0

bool_conflict
ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9__MoveNext
          (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o *__this,MethodInfo *method)

{
  System_String_array **ppSVar1;
  SimpleJSONFixed_JSONNode_array **ppSVar2;
  UnityEngine_WWW_o **ppUVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  UnityEngine_WWW_c *pUVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  bool_conflict bVar11;
  System_String_array *pSVar12;
  SimpleJSONFixed_JSONNode_array *pSVar13;
  System_String_o *pSVar14;
  Il2CppMethodPointer *ppIVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  UnityEngine_WWW_o *pUVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  bool bVar24;
  undefined1 auVar25 [12];
  
  if (g_data_057aea7e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WWW);
    il2cpp_runtime_helper_023445d0(&"Failed to load pastebin link: ");
    g_data_057aea7e = '\x01';
  }
  iVar8 = (__this->fields).__1__state;
  if (iVar8 == 1) {
label_044be4ac:
    (__this->fields).__1__state = -3;
    pUVar17 = (__this->fields)._www_5__5;
    if (pUVar17 == (UnityEngine_WWW_o *)0x0) {
label_044be8d4:
      il2cpp_runtime_helper_022b2c90();
label_044be8d9:
      il2cpp_runtime_helper_022b2c90();
label_044be8de:
      il2cpp_runtime_helper_022b2ca0();
label_044be8e3:
      il2cpp_runtime_helper_022b2ca0();
label_044be8e8:
      il2cpp_runtime_helper_022b2ca0();
      goto label_044be8ed;
    }
    pSVar14 = UnityEngine_WWW__get_error(pUVar17,(MethodInfo *)0x0);
    ppUVar3 = &(__this->fields)._www_5__5;
    if (pSVar14 != (System_String_o *)0x0) {
      if (*ppUVar3 != (UnityEngine_WWW_o *)0x0) {
        pSVar14 = UnityEngine_WWW__get_error(*ppUVar3,(MethodInfo *)0x0);
        pSVar14 = System_String__Concat_3ae5ba0("Failed to load pastebin link: ",pSVar14,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
        if (g_data_057aea7f == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aea7f = '\x01';
        }
        (__this->fields).__1__state = -1;
        pUVar17 = (__this->fields)._www_5__5;
        if (pUVar17 != (UnityEngine_WWW_o *)0x0) {
          pUVar9 = pUVar17->klass;
          uVar5._0_1_ = (pUVar9->_2).rank;
          uVar5._1_1_ = (pUVar9->_2).minimumAlignment;
          if ((ulong)uVar5 != 0) {
            pIVar10 = (pUVar9->_1).interfaceOffsets;
            lVar23 = 0;
            do {
              if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IDisposable) {
                ppIVar15 = &(&(pUVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar23)].methodPtr
                ;
                goto label_044be6ad;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)uVar5 << 4 != lVar23);
          }
          ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar17,TypeInfo_IDisposable,0);
label_044be6ad:
          (**ppIVar15)(pUVar17,(MethodInfo *)ppIVar15[1]);
        }
label_044be769:
        pSVar13 = (__this->fields)._nodes_5__3;
        if (pSVar13 == (SimpleJSONFixed_JSONNode_array *)0x0) {
label_044be8c0:
          il2cpp_runtime_helper_022b2c90();
label_044be8c5:
          il2cpp_runtime_helper_022b2ca0();
label_044be8ca:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          if ((int)pSVar13->max_length == 0) goto label_044be8c5;
          pSVar16 = pSVar13->m_Items[0];
          if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar23 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
          *(SimpleJSONFixed_JSONNode_o **)(lVar23 + 8) = pSVar16;
          il2cpp_runtime_helper_022b4080(lVar23 + 8,pSVar16);
          pSVar13 = (__this->fields)._nodes_5__3;
          if (pSVar13 == (SimpleJSONFixed_JSONNode_array *)0x0) goto label_044be8ca;
          if (1 < (uint)pSVar13->max_length) {
            **(undefined8 **)(TypeInfo_PastebinLoader + 0xb8) = pSVar13->m_Items[1];
            il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_PastebinLoader + 0xb8));
            pSVar16 = (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_PastebinLoader + 0xb8);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if ((char)bVar11 != '\0') {
              if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar16 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 8);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
              if ((char)bVar11 != '\0') {
                if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined4 *)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x10) = 1;
                return 0;
              }
            }
            if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined4 *)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x10) = 2;
            return 0;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
        goto label_044be8d4;
      }
      goto label_044be8f7;
    }
    pUVar17 = (__this->fields)._www_5__5;
    if (pUVar17 == (UnityEngine_WWW_o *)0x0) goto label_044be8fc;
    pSVar13 = (__this->fields)._nodes_5__3;
    uVar21 = (__this->fields)._i_5__4;
    pSVar14 = UnityEngine_WWW__get_text(pUVar17,(MethodInfo *)0x0);
    pSVar16 = SimpleJSONFixed_JSON__Parse(pSVar14,(MethodInfo *)0x0);
    if (pSVar13 == (SimpleJSONFixed_JSONNode_array *)0x0) goto label_044be901;
    if ((pSVar16 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (lVar23 = il2cpp_runtime_helper_023051f0(pSVar16,(((pSVar13->obj).klass)->_1).element_class), lVar23 == 0))
    goto label_044be910;
    if ((uint)pSVar13->max_length <= uVar21) goto label_044be906;
    pSVar13->m_Items[(int)uVar21] = pSVar16;
    il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar21,pSVar16);
    if (g_data_057aea7f == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057aea7f = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar17 = (__this->fields)._www_5__5;
    if (pUVar17 != (UnityEngine_WWW_o *)0x0) {
      pUVar9 = pUVar17->klass;
      uVar6._0_1_ = (pUVar9->_2).rank;
      uVar6._1_1_ = (pUVar9->_2).minimumAlignment;
      if ((ulong)uVar6 != 0) {
        pIVar10 = (pUVar9->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar23) == TypeInfo_IDisposable) {
            ppIVar15 = &(&(pUVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar23)].methodPtr;
            goto label_044be6cd;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar6 << 4 != lVar23);
      }
      ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar17,TypeInfo_IDisposable,0);
label_044be6cd:
      (**ppIVar15)(pUVar17,(MethodInfo *)ppIVar15[1]);
    }
    *ppUVar3 = (UnityEngine_WWW_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar3,0);
    uVar21 = (__this->fields)._i_5__4 + 1;
    (__this->fields)._i_5__4 = uVar21;
    pSVar12 = (__this->fields)._urls_5__2;
    if (pSVar12 != (System_String_array *)0x0) {
      uVar4 = (uint)pSVar12->max_length;
      bVar24 = uVar21 < uVar4;
      if ((int)uVar4 <= (int)uVar21) goto label_044be769;
label_044be704:
      if (bVar24) {
        pSVar14 = pSVar12->m_Items[(int)uVar21];
        pUVar17 = (UnityEngine_WWW_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WWW);
        UnityEngine_WWW___ctor(pUVar17,pSVar14,(MethodInfo *)0x0);
        (__this->fields)._www_5__5 = pUVar17;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._www_5__5,pUVar17);
        (__this->fields).__1__state = -3;
        (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._www_5__5;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar12 >> 8),1);
      }
      goto label_044be8f2;
    }
  }
  else {
    if (iVar8 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined4 *)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x10) = 0;
    pSVar12 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
    if (pSVar12 == (System_String_array *)0x0) goto label_044be8d9;
    if ((int)pSVar12->max_length == 0) goto label_044be8de;
    pSVar12->m_Items[0] = *(System_String_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x20);
    il2cpp_runtime_helper_022b4080(pSVar12->m_Items);
    if ((uint)pSVar12->max_length < 2) goto label_044be8e3;
    pSVar12->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x28);
    il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1);
    if ((uint)pSVar12->max_length < 3) goto label_044be8e8;
    pSVar12->m_Items[2] = *(System_String_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x30);
    il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 2);
    ppSVar1 = &(__this->fields)._urls_5__2;
    (__this->fields)._urls_5__2 = pSVar12;
    il2cpp_runtime_helper_022b4080(ppSVar1,pSVar12);
    if (*ppSVar1 != (System_String_array *)0x0) {
      pSVar13 = (SimpleJSONFixed_JSONNode_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_JSONNode,(int)(*ppSVar1)->max_length);
      ppSVar2 = &(__this->fields)._nodes_5__3;
      (__this->fields)._nodes_5__3 = pSVar13;
      il2cpp_runtime_helper_022b4080(ppSVar2);
      pSVar12 = *ppSVar1;
      if (pSVar12 != (System_String_array *)0x0) {
        lVar23 = 0x20;
        uVar20 = 0;
        do {
          if ((long)(int)pSVar12->max_length <= (long)uVar20) {
            (__this->fields)._i_5__4 = 0;
            uVar21 = 0;
            iVar8 = (int)pSVar12->max_length;
            bVar24 = iVar8 != 0;
            if (iVar8 < 1) goto label_044be769;
            goto label_044be704;
          }
          pSVar13 = *ppSVar2;
          if (pSVar13 == (SimpleJSONFixed_JSONNode_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
label_044be8bb:
            il2cpp_runtime_helper_022b2ca0();
            goto label_044be8c0;
          }
          if ((uint)pSVar13->max_length <= uVar20) goto label_044be8bb;
          *(undefined8 *)((long)pSVar13->m_Items + lVar23 + -0x20) = 0;
          il2cpp_runtime_helper_022b4080((long)pSVar13->m_Items + lVar23 + -0x20);
          uVar20 = uVar20 + 1;
          pSVar12 = *ppSVar1;
          lVar23 = lVar23 + 8;
        } while (pSVar12 != (System_String_array *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
      goto label_044be4ac;
    }
label_044be8ed:
    il2cpp_runtime_helper_022b2c90();
label_044be8f2:
    il2cpp_runtime_helper_022b2ca0();
label_044be8f7:
    il2cpp_runtime_helper_022b2c90();
label_044be8fc:
    il2cpp_runtime_helper_022b2c90();
label_044be901:
    il2cpp_runtime_helper_022b2c90();
label_044be906:
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
label_044be910:
  uVar18 = il2cpp_runtime_helper_0231b270();
  auVar25 = il2cpp_runtime_helper_022b2b10(uVar18,0);
  uVar18 = auVar25._0_8_;
  if (auVar25._8_4_ == 1) {
    plVar19 = (long *)__cxa_begin_catch(uVar18);
    lVar23 = *plVar19;
    __cxa_end_catch();
    if (lVar23 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02235d50(__this);
    uVar18 = il2cpp_runtime_helper_022fefe0();
    if (lVar23 != 0) {
      iVar8 = (__this->fields).__1__state;
      if ((iVar8 == 1) || (iVar8 == -3)) {
        if (g_data_057aea7f == '\0') {
          il2cpp_runtime_helper_023445d0();
          g_data_057aea7f = '\x01';
        }
        (__this->fields).__1__state = -1;
        pUVar17 = (__this->fields)._www_5__5;
        if (pUVar17 != (UnityEngine_WWW_o *)0x0) {
          pUVar9 = pUVar17->klass;
          uVar7._0_1_ = (pUVar9->_2).rank;
          uVar7._1_1_ = (pUVar9->_2).minimumAlignment;
          if ((ulong)uVar7 != 0) {
            pIVar10 = (pUVar9->_1).interfaceOffsets;
            lVar22 = 0;
            do {
              if (*(long *)((long)&pIVar10->interfaceType + lVar22) == TypeInfo_IDisposable) {
                ppIVar15 = &(&(pUVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar22)].methodPtr
                ;
                goto label_044beb58;
              }
              lVar22 = lVar22 + 0x10;
            } while ((ulong)uVar7 << 4 != lVar22);
          }
          ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar17,TypeInfo_IDisposable,0);
label_044beb58:
          (**ppIVar15)(pUVar17,(MethodInfo *)ppIVar15[1]);
        }
      }
      uVar18 = il2cpp_runtime_helper_022fefe0(lVar23);
    }
  }
  _Unwind_Resume(uVar18);
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__9$$<>m__Finally1
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9____m__Finally1 (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x44beb80

void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9____m__Finally1
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_WWW_o *pUVar2;
  UnityEngine_WWW_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057aea7f == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aea7f = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields)._www_5__5;
  if (pUVar2 == (UnityEngine_WWW_o *)0x0) {
    return;
  }
  pUVar3 = pUVar2->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pUVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = &(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar5);
        goto label_044bec0f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pUVar2,TypeInfo_IDisposable,0);
label_044bec0f:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x44bec20

Il2CppObject *
ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9__System_Collections_IEnumerator_Reset (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x44bec30

void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9__System_Collections_IEnumerator_Reset
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9__System_Collections_IEnumerator_get_Current (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x44bec70

Il2CppObject *
ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.PastebinLoader$$Init
// il2cpp: void ApplicationManagers_PastebinLoader__Init (const MethodInfo* method);
// 0x44bdf70

void ApplicationManagers_PastebinLoader__Init(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  
  if (g_data_057aea7a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PastebinLoader_CreateSingleton_PastebinLoader);
    g_data_057aea7a = '\x01';
  }
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     (*(Il2CppObject **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x18),MethodInfo_PastebinLoader_CreateSingleton_PastebinLoader);
  lVar1 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x18) = pIVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pIVar2);
  return;
}


// ApplicationManagers.PastebinLoader$$LoadPastebin
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebin (const MethodInfo* method);
// 0x44bdff0

void ApplicationManagers_PastebinLoader__LoadPastebin(MethodInfo *method)

{
  int iVar1;
  UnityEngine_MonoBehaviour_o *__this;
  Il2CppObject *pIVar2;
  
  if (g_data_057aea7b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    g_data_057aea7b = '\x01';
    iVar1 = *(int *)(TypeInfo_PastebinLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PastebinLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x18);
  }
  else {
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x18);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057aea7c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_LoadPastebinCoroutine_d__9);
      g_data_057aea7c = '\x01';
    }
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadPastebinCoroutine_d__9);
    System_Object___ctor(pIVar2,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar2[1].klass = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              (__this,(System_Collections_IEnumerator_o *)pIVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadPastebinCoroutine_d__9);
    g_data_057aea7c = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadPastebinCoroutine_d__9);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar2[1].klass = 0;
  return;
}


// ApplicationManagers.PastebinLoader$$LoadPastebinCoroutine
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_PastebinLoader__LoadPastebinCoroutine (ApplicationManagers_PastebinLoader_o* __this, const MethodInfo* method);
// 0x44be0d0

System_Collections_IEnumerator_o *
ApplicationManagers_PastebinLoader__LoadPastebinCoroutine
          (ApplicationManagers_PastebinLoader_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057aea7c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadPastebinCoroutine_d__9);
    g_data_057aea7c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadPastebinCoroutine_d__9);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.PastebinLoader$$.ctor
// il2cpp: void ApplicationManagers_PastebinLoader___ctor (ApplicationManagers_PastebinLoader_o* __this, const MethodInfo* method);
// 0x44be140

void ApplicationManagers_PastebinLoader___ctor
               (ApplicationManagers_PastebinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PastebinLoader$$.cctor
// il2cpp: void ApplicationManagers_PastebinLoader___cctor (const MethodInfo* method);
// 0x44be150

void ApplicationManagers_PastebinLoader___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aea7d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PastebinLoader);
    il2cpp_runtime_helper_023445d0(&"https://aottgrc.com/Aottg2/Version.json");
    il2cpp_runtime_helper_023445d0(&"https://pastebin.com/raw/txV4YVcr");
    il2cpp_runtime_helper_023445d0(&"https://pastebin.com/raw/zptDi9T6");
    g_data_057aea7d = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = "https://pastebin.com/raw/txV4YVcr";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "https://pastebin.com/raw/zptDi9T6";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "https://aottgrc.com/Aottg2/Version.json";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  return;
}


