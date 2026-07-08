// Type: ApplicationManagers.PastebinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/PastebinLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/PastebinLoader.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__11$$.ctor
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11___ctor (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41a4fa0

void ApplicationManagers_PastebinLoader_<LoadPastebinCoroutine>d__11___ctor
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__11$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11__System_IDisposable_Dispose (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x41a50b0

void ApplicationManagers_PastebinLoader_<LoadPastebinCoroutine>d__11__System_IDisposable_Dispose
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  UnityEngine_WWW_o *pUVar3;
  UnityEngine_WWW_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  code *vtable_dispatch;
  long lVar6;
  undefined1 auVar7 [16];
  
  iVar2 = (__this->fields).__1__state;
  if ((iVar2 == 1) || (iVar2 == -3)) {
    if (DAT_05704cb1 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704cb1 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar3 = (__this->fields)._www_5__6;
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
            goto LAB_041a514f;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_glue(pUVar3,TypeInfo_IDisposable,0);
LAB_041a514f:
      vtable_dispatch = (code *)*auVar7._0_8_;
      (*vtable_dispatch)(pUVar3,auVar7._0_8_[1],auVar7._8_8_,vtable_dispatch);
      return;
    }
  }
  return;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__11$$MoveNext
// il2cpp: bool ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11__MoveNext (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x41a5160

/* WARNING: Type propagation algorithm not settling */

bool_conflict
ApplicationManagers_PastebinLoader_<LoadPastebinCoroutine>d__11__MoveNext
          (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o *__this,
          MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  UnityEngine_WWW_c *pUVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  long lVar7;
  bool_conflict bVar8;
  System_String_array *pSVar9;
  SimpleJSONFixed_JSONNode_array *pSVar10;
  System_String_o *pSVar11;
  Il2CppMethodPointer *ppIVar12;
  UnityEngine_WWW_o *pUVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  
  if (DAT_05704cb0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_WWW);
    il2cpp_init_method_metadata(&"Failed to load pastebin link: ");
    DAT_05704cb0 = '\x01';
  }
  iVar4 = (__this->fields).__1__state;
  if (iVar4 == 1) {
    (__this->fields).__1__state = -3;
    pUVar13 = (__this->fields)._www_5__6;
    if (pUVar13 == (UnityEngine_WWW_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar11 = UnityEngine_WWW__get_error(pUVar13,(MethodInfo *)0x0);
    if (pSVar11 == (System_String_o *)0x0) {
      pSVar9 = (__this->fields)._urls_5__2;
      if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar17 = (__this->fields)._i_5__5;
      if (uVar17 == (int)pSVar9->max_length - 1U) {
        pUVar13 = (__this->fields)._www_5__6;
        if (pUVar13 == (UnityEngine_WWW_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar11 = UnityEngine_WWW__get_text(pUVar13,(MethodInfo *)0x0);
        (__this->fields)._changelog_5__3 = pSVar11;
        il2cpp_runtime_glue(&(__this->fields)._changelog_5__3,pSVar11);
      }
      else {
        pUVar13 = (__this->fields)._www_5__6;
        if (pUVar13 == (UnityEngine_WWW_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar10 = (__this->fields)._nodes_5__4;
        pSVar11 = UnityEngine_WWW__get_text(pUVar13,(MethodInfo *)0x0);
        pSVar14 = SimpleJSONFixed_JSON__Parse(pSVar11,(MethodInfo *)0x0);
        if (pSVar10 == (SimpleJSONFixed_JSONNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((pSVar14 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
           (lVar18 = il2cpp_runtime_glue(pSVar14,(((pSVar10->obj).klass)->_1).element_class),
           lVar18 == 0)) {
          uVar15 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar15,0);
        }
        if ((uint)pSVar10->max_length <= uVar17) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar10->m_Items[(int)uVar17] = pSVar14;
        il2cpp_runtime_glue(pSVar10->m_Items + (int)uVar17,pSVar14);
      }
      if (DAT_05704cb1 == '\0') {
        il2cpp_init_method_metadata();
        DAT_05704cb1 = '\x01';
      }
      (__this->fields).__1__state = -1;
      pUVar13 = (__this->fields)._www_5__6;
      if (pUVar13 != (UnityEngine_WWW_o *)0x0) {
        pUVar5 = pUVar13->klass;
        uVar3._0_1_ = (pUVar5->_2).rank;
        uVar3._1_1_ = (pUVar5->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar6 = (pUVar5->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar18) == TypeInfo_IDisposable) {
              ppIVar12 = &(&(pUVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar18)].
                          methodPtr;
              goto LAB_041a585f;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar18);
        }
        ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar13,TypeInfo_IDisposable,0);
LAB_041a585f:
        (**ppIVar12)(pUVar13,(MethodInfo *)ppIVar12[1]);
      }
      (__this->fields)._www_5__6 = (UnityEngine_WWW_o *)0x0;
      il2cpp_runtime_glue(&(__this->fields)._www_5__6,0);
      uVar17 = (__this->fields)._i_5__5 + 1;
      (__this->fields)._i_5__5 = uVar17;
      pSVar9 = (__this->fields)._urls_5__2;
joined_r0x041a5895:
      if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar1 = (uint)pSVar9->max_length;
      if ((int)uVar17 < (int)uVar1) {
        if (uVar17 < uVar1) {
          pSVar11 = pSVar9->m_Items[(int)uVar17];
          pUVar13 = (UnityEngine_WWW_o *)il2cpp_runtime_glue(TypeInfo_WWW);
          UnityEngine_WWW___ctor(pUVar13,pSVar11,(MethodInfo *)0x0);
          (__this->fields)._www_5__6 = pUVar13;
          il2cpp_runtime_glue(&(__this->fields)._www_5__6,pUVar13);
          (__this->fields).__1__state = -3;
          (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._www_5__6;
          il2cpp_runtime_glue(&(__this->fields).__2__current);
          (__this->fields).__1__state = 1;
          return (bool_conflict)CONCAT71((int7)((ulong)pSVar9 >> 8),1);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      pUVar13 = (__this->fields)._www_5__6;
      if (pUVar13 == (UnityEngine_WWW_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar11 = UnityEngine_WWW__get_error(pUVar13,(MethodInfo *)0x0);
      pSVar11 = System_String__Concat("Failed to load pastebin link: ",pSVar11,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
      if (DAT_05704cb1 == '\0') {
        il2cpp_init_method_metadata();
        DAT_05704cb1 = '\x01';
      }
      (__this->fields).__1__state = -1;
      pUVar13 = (__this->fields)._www_5__6;
      if (pUVar13 != (UnityEngine_WWW_o *)0x0) {
        pUVar5 = pUVar13->klass;
        uVar2._0_1_ = (pUVar5->_2).rank;
        uVar2._1_1_ = (pUVar5->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar6 = (pUVar5->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar6->interfaceType + lVar18) == TypeInfo_IDisposable) {
              ppIVar12 = &(&(pUVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar18)].
                          methodPtr;
              goto LAB_041a5684;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar18);
        }
        ppIVar12 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar13,TypeInfo_IDisposable,0);
LAB_041a5684:
        (**ppIVar12)(pUVar13,(MethodInfo *)ppIVar12[1]);
      }
    }
    pSVar10 = (__this->fields)._nodes_5__4;
    if (pSVar10 == (SimpleJSONFixed_JSONNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)pSVar10->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar14 = pSVar10->m_Items[0];
    if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar18 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
    *(SimpleJSONFixed_JSONNode_o **)(lVar18 + 0x10) = pSVar14;
    il2cpp_runtime_glue(lVar18 + 0x10,pSVar14);
    pSVar10 = (__this->fields)._nodes_5__4;
    if (pSVar10 == (SimpleJSONFixed_JSONNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((uint)pSVar10->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    **(undefined8 **)(TypeInfo_PastebinLoader + 0xb8) = pSVar10->m_Items[1];
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_PastebinLoader + 0xb8));
    lVar18 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
    *(System_String_o **)(lVar18 + 8) = (__this->fields)._changelog_5__3;
    il2cpp_runtime_glue(lVar18 + 8);
    pSVar14 = (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_PastebinLoader + 0xb8);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
        il2cpp_init_class();
        lVar18 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
        lVar7 = *(long *)(lVar18 + 8);
      }
      else {
        lVar18 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
        lVar7 = *(long *)(lVar18 + 8);
      }
      if (lVar7 != 0) {
        if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
          il2cpp_init_class();
          pSVar14 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x10);
          iVar4 = *(int *)(TypeInfo_JSONNode + 0xe4);
        }
        else {
          pSVar14 = *(SimpleJSONFixed_JSONNode_o **)(lVar18 + 0x10);
          iVar4 = *(int *)(TypeInfo_JSONNode + 0xe4);
        }
        if (iVar4 == 0) {
          il2cpp_init_class();
        }
        bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                          (pSVar14,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          *(undefined4 *)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x18) = 1;
          return 0;
        }
      }
    }
    if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    *(undefined4 *)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x18) = 2;
  }
  else if (iVar4 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    *(undefined4 *)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x18) = 0;
    pSVar9 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,4);
    if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)pSVar9->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar9->m_Items[0] = *(System_String_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x28);
    il2cpp_runtime_glue(pSVar9->m_Items);
    if ((uint)pSVar9->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar9->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x30);
    il2cpp_runtime_glue(pSVar9->m_Items + 1);
    if ((uint)pSVar9->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar9->m_Items[2] = *(System_String_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x40);
    il2cpp_runtime_glue(pSVar9->m_Items + 2);
    if ((uint)pSVar9->max_length < 4) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar9->m_Items[3] = *(System_String_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x38);
    il2cpp_runtime_glue(pSVar9->m_Items + 3);
    (__this->fields)._urls_5__2 = pSVar9;
    il2cpp_runtime_glue(&(__this->fields)._urls_5__2,pSVar9);
    (__this->fields)._changelog_5__3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    il2cpp_runtime_glue(&(__this->fields)._changelog_5__3);
    pSVar9 = (__this->fields)._urls_5__2;
    if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar10 = (SimpleJSONFixed_JSONNode_array *)il2cpp_glue_02274930(TypeInfo_JSONNode,(int)pSVar9->max_length);
    (__this->fields)._nodes_5__4 = pSVar10;
    il2cpp_runtime_glue(&(__this->fields)._nodes_5__4);
    pSVar9 = (__this->fields)._urls_5__2;
    if (pSVar9 != (System_String_array *)0x0) {
      lVar18 = 0x20;
      uVar16 = 0;
      do {
        if ((long)(int)pSVar9->max_length <= (long)uVar16) {
          (__this->fields)._i_5__5 = 0;
          uVar17 = 0;
          pSVar9 = (__this->fields)._urls_5__2;
          goto joined_r0x041a5895;
        }
        pSVar10 = (__this->fields)._nodes_5__4;
        if (pSVar10 == (SimpleJSONFixed_JSONNode_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((uint)pSVar10->max_length <= uVar16) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        *(undefined8 *)((long)pSVar10->m_Items + lVar18 + -0x20) = 0;
        il2cpp_runtime_glue((long)pSVar10->m_Items + lVar18 + -0x20);
        uVar16 = uVar16 + 1;
        pSVar9 = (__this->fields)._urls_5__2;
        lVar18 = lVar18 + 8;
      } while (pSVar9 != (System_String_array *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__11$$<>m__Finally1
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11____m__Finally1 (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x41a5bc0

void ApplicationManagers_PastebinLoader_<LoadPastebinCoroutine>d__11__<>m__Finally1
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_WWW_o *pUVar2;
  UnityEngine_WWW_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtable_dispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_05704cb1 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704cb1 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields)._www_5__6;
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
        goto LAB_041a5c4f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_glue(pUVar2,TypeInfo_IDisposable,0);
LAB_041a5c4f:
  vtable_dispatch = (code *)*auVar6._0_8_;
  (*vtable_dispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtable_dispatch);
  return;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x41a5c60

Il2CppObject *
ApplicationManagers_PastebinLoader_<LoadPastebinCoroutine>d__11__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11__System_Collections_IEnumerator_Reset (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x41a5c70

void ApplicationManagers_PastebinLoader_<LoadPastebinCoroutine>d__11__System_Collections_IEnumerator_Reset
               (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.PastebinLoader.<LoadPastebinCoroutine>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11__System_Collections_IEnumerator_get_Current (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x41a5cb0

Il2CppObject *
ApplicationManagers_PastebinLoader_<LoadPastebinCoroutine>d__11__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_PastebinLoader__LoadPastebinCoroutine_d__11_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.PastebinLoader$$Init
// il2cpp: void ApplicationManagers_PastebinLoader__Init (const MethodInfo* method);
// 0x41a4df0

void ApplicationManagers_PastebinLoader__Init(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05704cac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
    il2cpp_init_method_metadata(&MethodInfo_PastebinLoader_CreateSingleton_PastebinLoader);
    DAT_05704cac = '\x01';
  }
  if (*(int *)(TypeInfo_PastebinLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     (*(Il2CppObject **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x20),MethodInfo_PastebinLoader_CreateSingleton_PastebinLoader);
  lVar1 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x20) = pIVar2;
  il2cpp_runtime_glue(lVar1 + 0x20,pIVar2);
  return;
}


// ApplicationManagers.PastebinLoader$$LoadPastebin
// il2cpp: void ApplicationManagers_PastebinLoader__LoadPastebin (const MethodInfo* method);
// 0x41a4e70

void ApplicationManagers_PastebinLoader__LoadPastebin(MethodInfo *method)

{
  int iVar1;
  UnityEngine_MonoBehaviour_o *__this;
  Il2CppObject *__this_00;
  
  if (DAT_05704cad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
    DAT_05704cad = '\x01';
    iVar1 = *(int *)(TypeInfo_PastebinLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PastebinLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x20);
  }
  else {
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_PastebinLoader + 0xb8) + 0x20);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (DAT_05704cae == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_LoadPastebinCoroutine_d__11);
      DAT_05704cae = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadPastebinCoroutine_d__11);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    UnityEngine_MonoBehaviour__StartCoroutine
              (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.PastebinLoader$$LoadPastebinCoroutine
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_PastebinLoader__LoadPastebinCoroutine (ApplicationManagers_PastebinLoader_o* __this, const MethodInfo* method);
// 0x41a4f50

System_Collections_IEnumerator_o *
ApplicationManagers_PastebinLoader__LoadPastebinCoroutine
          (ApplicationManagers_PastebinLoader_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704cae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadPastebinCoroutine_d__11);
    DAT_05704cae = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadPastebinCoroutine_d__11);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.PastebinLoader$$.ctor
// il2cpp: void ApplicationManagers_PastebinLoader___ctor (ApplicationManagers_PastebinLoader_o* __this, const MethodInfo* method);
// 0x41a4fc0

void ApplicationManagers_PastebinLoader___ctor
               (ApplicationManagers_PastebinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.PastebinLoader$$.cctor
// il2cpp: void ApplicationManagers_PastebinLoader___cctor (const MethodInfo* method);
// 0x41a4fd0

void ApplicationManagers_PastebinLoader___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704caf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PastebinLoader);
    il2cpp_init_method_metadata(&"https://aottgrc.com/Aottg2/Version.json");
    il2cpp_init_method_metadata(&"https://pastebin.com/raw/txV4YVcr");
    il2cpp_init_method_metadata(&"https://pastebin.com/raw/Lw47FLT5");
    il2cpp_init_method_metadata(&"https://pastebin.com/raw/zptDi9T6");
    DAT_05704caf = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x28) = "https://pastebin.com/raw/txV4YVcr";
  il2cpp_runtime_glue(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "https://pastebin.com/raw/zptDi9T6";
  il2cpp_runtime_glue(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "https://pastebin.com/raw/Lw47FLT5";
  il2cpp_runtime_glue(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_PastebinLoader + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "https://aottgrc.com/Aottg2/Version.json";
  il2cpp_runtime_glue(lVar1 + 0x40);
  return;
}


