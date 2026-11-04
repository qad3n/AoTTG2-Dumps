// Type: CustomSkins.ForestCustomSkinLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/ForestCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/ForestCustomSkinLoader.cs
// --------------------------------

// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$.ctor
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4___ctor (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4___ctor(CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_IDisposable_Dispose (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x181e792c0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e79324: lea rcx, [rsp + 0x30]
// asm:   0x181e79329: call 0x181e62090  ; il2cpp_runtime_helper_181e62090()
// asm:   0x181e7932e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e79333: test rcx, rcx
// asm:   0x181e79336: jne 0x181e7933e
// asm:   0x181e7933e: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_IDisposable_Dispose
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 3)) {
    if (Il2CppMethodInitialized_184344f8a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
      Il2CppMethodInitialized_184344f8a = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap9,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  }
  return;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$MoveNext
// il2cpp: bool CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__MoveNext (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x181e78ad0
// eh: try 0x181e78b4e..0x181e79263 -> pad 0x183315930 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e78d9e: nop 
// asm:   0x181e79181: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x181e79186: test rbx, rbx
// asm:   0x181e79189: jne 0x181e79263
// asm:   0x181e7918f: movzx eax, byte ptr [rsp + 0x80]
// asm:   0x181e79263: lea rcx, [rsp + 0x30]
// asm:   0x181e79268: call 0x181e620e0  ; il2cpp_runtime_helper_181e620e0()
// asm:   0x181e7926d: mov rcx, rbx
// asm:   0x181e79270: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__MoveNext
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CustomSkins_ForestCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_GameObject__o *pSVar6;
  System_Int32_array *pSVar7;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  bool bVar10;
  System_Char_array *randomIndices;
  System_Int32_array *pSVar11;
  System_String_array *pSVar12;
  System_String_o *pSVar13;
  UnityEngine_GameObject_o *pUVar14;
  CustomSkins_BaseCustomSkinPart_o *value;
  CustomSkins_BaseCustomSkinPart_o *pCVar15;
  System_Collections_IEnumerator_o *pSVar16;
  UnityEngine_Coroutine_o *pUVar17;
  System_String_o *pSVar18;
  System_Collections_Generic_List_Enumerator_T__o local_30;
  
  if (Il2CppMethodInitialized_184344f89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    Il2CppMethodInitialized_184344f89 = '\x01';
  }
  pSVar18 = (System_String_o *)0x0;
  __this_00 = (__this->fields).__4__this;
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(__this_00->klass->vtable)._9_FindAndIndexLevelObjects.methodPtr)
              (__this_00,(__this_00->klass->vtable)._9_FindAndIndexLevelObjects.method);
    pSVar5 = (__this->fields).data;
    if (pSVar5 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar5->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar9 = (System_String_o *)pSVar5->m_Items[0];
    if (pSVar9 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar13 = pSVar18;
    if ((Il2CppClass *)pSVar9->klass == g_data_184354e50) {
      pSVar13 = pSVar9;
    }
    if (pSVar13 == (System_String_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
    }
    pSVar13 = pSVar18;
    if ((Il2CppClass *)pSVar9->klass == g_data_184354e50) {
      pSVar13 = pSVar9;
    }
    randomIndices = System_String__ToCharArray(pSVar13,(MethodInfo *)0x0);
    pSVar11 = CustomSkins_ForestCustomSkinLoader__SplitRandomIndices
                        (__this_00,randomIndices,0,(MethodInfo *)0x0);
    (__this->fields)._trunkRandomIndices_5__2 = pSVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._trunkRandomIndices_5__2,pSVar11);
    pSVar11 = CustomSkins_ForestCustomSkinLoader__SplitRandomIndices
                        (__this_00,randomIndices,1,(MethodInfo *)0x0);
    (__this->fields)._leafRandomIndices_5__3 = pSVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._leafRandomIndices_5__3,pSVar11);
    pSVar5 = (__this->fields).data;
    if (pSVar5 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar5->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    pSVar9 = (System_String_o *)pSVar5->m_Items[1];
    if (pSVar9 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar13 = pSVar18;
    if ((Il2CppClass *)pSVar9->klass == g_data_184354e50) {
      pSVar13 = pSVar9;
    }
    if (pSVar13 == (System_String_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
    }
    pSVar13 = pSVar18;
    if ((Il2CppClass *)pSVar9->klass == g_data_184354e50) {
      pSVar13 = pSVar9;
    }
    pSVar12 = System_String__Split(pSVar13,0x2c,0,(MethodInfo *)0x0);
    (__this->fields)._trunkUrls_5__4 = pSVar12;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._trunkUrls_5__4,pSVar12);
    pSVar5 = (__this->fields).data;
    if (pSVar5 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar5->max_length < 3) {
      ThrowIndexOutOfRangeException();
    }
    pSVar9 = (System_String_o *)pSVar5->m_Items[2];
    if (pSVar9 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar13 = pSVar18;
    if ((Il2CppClass *)pSVar9->klass == g_data_184354e50) {
      pSVar13 = pSVar9;
    }
    if (pSVar13 == (System_String_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
    }
    if ((Il2CppClass *)pSVar9->klass == g_data_184354e50) {
      pSVar18 = pSVar9;
    }
    pSVar12 = System_String__Split(pSVar18,0x2c,0,(MethodInfo *)0x0);
    (__this->fields)._leafUrls_5__5 = pSVar12;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._leafUrls_5__5,pSVar12);
    pSVar12 = (__this->fields)._leafUrls_5__5;
    if (pSVar12 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar12->max_length < 9) {
      ThrowIndexOutOfRangeException();
    }
    pSVar18 = pSVar12->m_Items[8];
    (__this->fields)._groundUrl_5__6 = pSVar18;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._groundUrl_5__6,pSVar18);
    (__this->fields)._i_5__7 = 0;
    goto label_181e78da0;
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    goto label_181e78ef1;
  }
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    do {
      (__this->fields)._leafUrl_5__8 = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._leafUrl_5__8,(void *)0x0);
      (__this->fields)._leafPart_5__9 = (CustomSkins_BaseCustomSkinPart_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._leafPart_5__9,(void *)0x0);
      piVar1 = &(__this->fields)._i_5__7;
      *piVar1 = *piVar1 + 1;
label_181e78da0:
      if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (__this_00->fields)._treeObjects;
      if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pSVar6->fields)._size <= (__this->fields)._i_5__7) {
        pSVar6 = (__this_00->fields)._groundObjects;
        if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (&local_30,(System_Collections_Generic_List_T__o *)pSVar6,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
        (__this->fields).__7__wrap9.fields._list = local_30.fields._list;
        (__this->fields).__7__wrap9.fields._index = local_30.fields._index;
        (__this->fields).__7__wrap9.fields._version = local_30.fields._version;
        (__this->fields).__7__wrap9.fields._current = (UnityEngine_GameObject_o *)local_30.fields._current;
        Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap9,(void *)0x0);
        (__this->fields).__1__state = -3;
        goto label_181e79070;
      }
      pSVar11 = (__this->fields)._trunkRandomIndices_5__2;
      if (pSVar11 == (System_Int32_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar3 = (__this->fields)._i_5__7;
      if ((uint)pSVar11->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar7 = (__this->fields)._leafRandomIndices_5__3;
      if (pSVar7 == (System_Int32_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar4 = (__this->fields)._i_5__7;
      if ((uint)pSVar7->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pSVar12 = (__this->fields)._trunkUrls_5__4;
      if (pSVar12 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((uint)pSVar12->max_length <= (uint)pSVar11->m_Items[(int)uVar3]) {
        ThrowIndexOutOfRangeException();
      }
      pSVar8 = (__this->fields)._leafUrls_5__5;
      if (pSVar8 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((uint)pSVar8->max_length <= (uint)pSVar7->m_Items[(int)uVar4]) {
        ThrowIndexOutOfRangeException();
      }
      pSVar18 = pSVar12->m_Items[pSVar11->m_Items[(int)uVar3]];
      pSVar9 = pSVar8->m_Items[pSVar7->m_Items[(int)uVar4]];
      (__this->fields)._leafUrl_5__8 = pSVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._leafUrl_5__8,pSVar9);
      pSVar6 = (__this_00->fields)._treeObjects;
      if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar14 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar6,(__this->fields)._i_5__7,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_GameObject_get_Item
                          );
      pCVar15 = CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart(__this_00,0,pUVar14,(MethodInfo *)0x0);
      pSVar6 = (__this_00->fields)._treeObjects;
      if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar14 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar6,(__this->fields)._i_5__7,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_GameObject_get_Item
                          );
      value = CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart(__this_00,1,pUVar14,(MethodInfo *)0x0);
      (__this->fields)._leafPart_5__9 = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._leafPart_5__9,value);
      if (pCVar15 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar10 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar15,pSVar18,(MethodInfo *)0x0);
      if (!bVar10) {
        pSVar16 = CustomSkins_BaseCustomSkinPart__LoadSkin(pCVar15,pSVar18,(MethodInfo *)0x0);
        pUVar17 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                            ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar16,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar17;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar17);
        (__this->fields).__1__state = 1;
        return true;
      }
label_181e78ef1:
      pCVar15 = (__this->fields)._leafPart_5__9;
      if (pCVar15 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar10 = CustomSkins_BaseCustomSkinPart__LoadCache
                         (pCVar15,(__this->fields)._leafUrl_5__8,(MethodInfo *)0x0);
    } while (bVar10);
    pCVar15 = (__this->fields)._leafPart_5__9;
    if (pCVar15 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar16 = CustomSkins_BaseCustomSkinPart__LoadSkin
                        (pCVar15,(__this->fields)._leafUrl_5__8,(MethodInfo *)0x0);
    if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar17 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar16,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar17);
    (__this->fields).__1__state = 2;
    bVar10 = true;
  }
  else if (iVar2 == 3) {
    (__this->fields).__1__state = -3;
label_181e79070:
    do {
      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap9
                          ,(MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      if (!bVar10) {
        if (Il2CppMethodInitialized_184344f8a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
          Il2CppMethodInitialized_184344f8a = '\x01';
        }
        (__this->fields).__1__state = -1;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap9,
                   MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
        (__this->fields).__7__wrap9.fields._list = (System_Collections_Generic_List_T__o *)0x0;
        (__this->fields).__7__wrap9.fields._index = 0;
        (__this->fields).__7__wrap9.fields._version = 0;
        (__this->fields).__7__wrap9.fields._current = (UnityEngine_GameObject_o *)0x0;
        return false;
      }
      if (__this_00 == (CustomSkins_ForestCustomSkinLoader_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar15 = CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart
                          (__this_00,2,(__this->fields).__7__wrap9.fields._current,(MethodInfo *)0x0);
      if (pCVar15 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar10 = CustomSkins_BaseCustomSkinPart__LoadCache
                         (pCVar15,(__this->fields)._groundUrl_5__6,(MethodInfo *)0x0);
    } while (bVar10);
    pSVar16 = CustomSkins_BaseCustomSkinPart__LoadSkin
                        (pCVar15,(__this->fields)._groundUrl_5__6,(MethodInfo *)0x0);
    pUVar17 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar16,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar17);
    (__this->fields).__1__state = 3;
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  return bVar10;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$<>m__Finally1
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4____m__Finally1 (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x181e79350

void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4____m__Finally1
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    Il2CppMethodInitialized_184344f8a = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap9,
             MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  return;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_Reset (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x181e79280

void CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_Reset
               (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomSkins_ForestCustomSkinLoader_LoadSkinsFromRPC_d__4_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomSkins.ForestCustomSkinLoader.<LoadSkinsFromRPC>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_get_Current (CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4__System_Collections_IEnumerator_get_Current(CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.ForestCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_ForestCustomSkinLoader__get_RendererIdPrefix (CustomSkins_ForestCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e66870

System_String_o *
CustomSkins_ForestCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_ForestCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"forest");
    Il2CppMethodInitialized_184344f83 = '\x01';
  }
  return "forest";
}


// CustomSkins.ForestCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_ForestCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x181e66620

System_Collections_IEnumerator_o *
CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_ForestCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  CustomSkins_ForestCustomSkinLoader__LoadSkinsFromRPC_d__4_o *__this_00;
  
  if (Il2CppMethodInitialized_184344f84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomSkins_ForestCustomSkinLoader_LoadSkinsFromRPC_d__4);
    Il2CppMethodInitialized_184344f84 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomSkins_ForestCustomSkinLoader_LoadSkinsFromRPC_d__4);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data,data);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.ForestCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart (CustomSkins_ForestCustomSkinLoader_o* __this, int32_t partId, UnityEngine_GameObject_o* levelObject, const MethodInfo* method);
// 0x181e661f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e662e9: nop dword ptr [rax]

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_ForestCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_ForestCustomSkinLoader_o *__this,int32_t partId,UnityEngine_GameObject_o *levelObject,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  UnityEngine_Renderer_o *item;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_Renderer__o *renderers;
  System_Object_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  CustomSkins_BaseCustomSkinPart_o *__this_00;
  uint uVar9;
  int32_t local_res10 [2];
  int32_t maxSize;
  System_Nullable_Vector2__Fields local_28;
  
  if (Il2CppMethodInitialized_184344f85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"tree0");
    Il2CppMethodInitialized_184344f85 = '\x01';
  }
  renderers = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)renderers,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  pSVar8 = "default";
  pSVar7 = "tree0";
  if (partId == 0) {
    if (Il2CppMethodInitialized_184344f6d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
      Il2CppMethodInitialized_184344f6d = '\x01';
    }
    if ((levelObject == (UnityEngine_GameObject_o *)0x0) ||
       (pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                           (levelObject,
                            (MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer),
       pSVar6 == (System_Object_array *)0x0)) goto label_181e66613;
    for (uVar9 = 0; (int)uVar9 < (int)pSVar6->max_length; uVar9 = uVar9 + 1) {
      if ((uint)pSVar6->max_length <= uVar9) goto label_181e66619;
      if (((UnityEngine_Object_o *)pSVar6->m_Items[(int)uVar9] == (UnityEngine_Object_o *)0x0) ||
         (pSVar8 = UnityEngine_Object__get_name
                             ((UnityEngine_Object_o *)pSVar6->m_Items[(int)uVar9],(MethodInfo *)0x0),
         pSVar8 == (System_String_o *)0x0)) goto label_181e66613;
      bVar5 = System_String__Contains(pSVar8,pSVar7,(MethodInfo *)0x0);
      if (bVar5) {
        if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_181e66613;
        il2cpp_runtime_helper_180012890(renderers);
      }
    }
    local_res10[0] = 0;
    pSVar7 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
    pSVar8 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_1969e50(pSVar7,pSVar8,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    maxSize = 2000000;
  }
  else {
    if (partId == 1) {
      if (Il2CppMethodInitialized_184344f6d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
        Il2CppMethodInitialized_184344f6d = '\x01';
      }
      if ((levelObject == (UnityEngine_GameObject_o *)0x0) ||
         (pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                             (levelObject,
                              (MethodInfo_6F5810 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer),
         pSVar6 == (System_Object_array *)0x0)) goto label_181e66613;
      for (uVar9 = 0; (int)uVar9 < (int)pSVar6->max_length; uVar9 = uVar9 + 1) {
        if ((uint)pSVar6->max_length <= uVar9) goto label_181e66619;
        if (((UnityEngine_Object_o *)pSVar6->m_Items[(int)uVar9] == (UnityEngine_Object_o *)0x0) ||
           (pSVar7 = UnityEngine_Object__get_name
                               ((UnityEngine_Object_o *)pSVar6->m_Items[(int)uVar9],(MethodInfo *)0x0),
           pSVar7 == (System_String_o *)0x0)) goto label_181e66613;
        bVar5 = System_String__Contains(pSVar7,pSVar8,(MethodInfo *)0x0);
        if (bVar5) {
          if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_181e66613;
          il2cpp_runtime_helper_180012890(renderers);
        }
      }
      local_res10[0] = 1;
    }
    else {
      if (partId != 2) {
        return (CustomSkins_BaseCustomSkinPart_o *)0x0;
      }
      if (Il2CppMethodInitialized_184344f6b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
        Il2CppMethodInitialized_184344f6b = '\x01';
      }
      if ((levelObject == (UnityEngine_GameObject_o *)0x0) ||
         (pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                             (levelObject,
                              (MethodInfo_6F5810 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer),
         pSVar6 == (System_Object_array *)0x0)) {
label_181e66613:
        ThrowNullReferenceException();
      }
      uVar9 = 0;
      while (pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add,
            (int)uVar9 < (int)pSVar6->max_length) {
        if ((uint)pSVar6->max_length <= uVar9) {
label_181e66619:
          ThrowIndexOutOfRangeException();
        }
        if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_181e66613;
        pUVar3 = (renderers->fields)._items;
        item = (UnityEngine_Renderer_o *)pSVar6->m_Items[(int)uVar9];
        piVar1 = &(renderers->fields)._version;
        *piVar1 = *piVar1 + 1;
        if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_181e66613;
        uVar2 = (renderers->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (renderers->fields)._size = uVar2 + 1;
          if ((uint)pUVar3->max_length <= uVar2) goto label_181e66619;
          pUVar3->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
          uVar9 = uVar9 + 1;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          uVar9 = uVar9 + 1;
        }
      }
      local_res10[0] = 2;
    }
    pSVar7 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
    pSVar8 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_1969e50(pSVar7,pSVar8,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    maxSize = 500000;
  }
  local_28.value.fields.y = 0.0;
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value.fields.x = 0.0;
  CustomSkins_BaseCustomSkinPart___ctor
            (__this_00,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar7,maxSize,
             (System_Nullable_Vector2__o *)&local_28,false,(MethodInfo *)0x0);
  return __this_00;
}


// CustomSkins.ForestCustomSkinLoader$$FindAndIndexLevelObjects
// il2cpp: void CustomSkins_ForestCustomSkinLoader__FindAndIndexLevelObjects (CustomSkins_ForestCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e65f70
// eh: try 0x181e660f0..0x181e66164 -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x181e66164..0x181e6617a -> pad 0x180355dd0 cleanup
// eh: try 0x181e6617a..0x181e661db -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e660ee: nop 
// asm:   0x181e66164: jmp 0x181e6616f
// asm:   0x181e66195: mov rdx, qword ptr [rip + 0x2249cac]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181e6619c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e661a1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e661a6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e661ab: test rcx, rcx
// asm:   0x181e661ae: jne 0x181e661db
// asm:   0x181e661db: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void CustomSkins_ForestCustomSkinLoader__FindAndIndexLevelObjects
               (CustomSkins_ForestCustomSkinLoader_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_Collections_Generic_List_GameObject__o *pSVar6;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_28;
  
  if (Il2CppMethodInitialized_184344f86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"Cuboid");
    il2cpp_codegen_initialize_runtime_metadata(&"Tree2");
    Il2CppMethodInitialized_184344f86 = '\x01';
  }
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._currentValue = (Il2CppObject *)0x0;
  pSVar6 = (__this->fields)._treeObjects;
  if (pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pSVar6 = (__this->fields)._groundObjects;
    if (pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar6->fields)._size;
      (pSVar6->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if ((__this_00 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) &&
         (__this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                 (MethodInfo_13C65A0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values),
         __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_40,__this_01,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                  );
        local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
        local_28.fields._index = local_40._8_4_;
        local_28.fields._version = local_40._12_4_;
        local_28.fields._currentValue = local_30;
        local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_40._8_8_ = &local_28;
label_181e660f0:
        bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (&local_28,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                          );
        pIVar4 = local_28.fields._currentValue;
        if (!bVar5) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                    );
          return;
        }
        if (local_28.fields._currentValue == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (local_28.fields._currentValue[2].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = System_String__op_Equality
                          (((local_28.fields._currentValue[2].klass)->_1).this_arg.data,"Tree2",
                           (MethodInfo *)0x0);
        if (!bVar5) goto code_r0x000181e66137;
        pSVar6 = (__this->fields)._treeObjects;
        if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) {
          ThrowNullReferenceException();
        }
        goto label_181e6616f;
      }
    }
  }
  ThrowNullReferenceException();
code_r0x000181e66137:
  pIVar3 = pIVar4[2].klass;
  if (pIVar3 == (Il2CppClass *)0x0) {
    ThrowNullReferenceException();
  }
  bVar5 = System_String__op_Equality((pIVar3->_1).this_arg.data,"Cuboid",(MethodInfo *)0x0);
  if (bVar5) {
    pSVar6 = (__this->fields)._groundObjects;
    if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) {
      ThrowNullReferenceException();
    }
label_181e6616f:
    il2cpp_runtime_helper_180012890(pSVar6,pIVar4[1].monitor);
  }
  goto label_181e660f0;
}


// CustomSkins.ForestCustomSkinLoader$$SplitRandomIndices
// il2cpp: System_Int32_array* CustomSkins_ForestCustomSkinLoader__SplitRandomIndices (CustomSkins_ForestCustomSkinLoader_o* __this, System_Char_array* randomIndices, int32_t offset, const MethodInfo* method);
// 0x181e666b0

System_Int32_array *
CustomSkins_ForestCustomSkinLoader__SplitRandomIndices
          (CustomSkins_ForestCustomSkinLoader_o *__this,System_Char_array *randomIndices,int32_t offset,
          MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  System_String_o *s;
  System_Int32_array *pSVar1;
  undefined4 in_register_00000084;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000084,offset);
  if (Il2CppMethodInitialized_184344f87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    Il2CppMethodInitialized_184344f87 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  if (randomIndices != (System_Char_array *)0x0) {
    do {
      if ((int)randomIndices->max_length <= offset) {
        pSVar1 = System_Linq_Enumerable__ToArray_int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                            (MethodInfo_6C7C70 *)MethodInfo_System_Linq_Enumerable_ToArray_int);
        return pSVar1;
      }
      if (offset < (int)randomIndices->max_length) {
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        if ((uint)randomIndices->max_length <= (uint)offset) {
          ThrowIndexOutOfRangeException();
        }
        s = System_Char__ToString(randomIndices->m_Items + offset,(System_IFormatProvider_o *)0x0,method_00);
        System_Int32__Parse(s,(MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) break;
        method_00 = MethodInfo_System_Collections_Generic_List_int_Add;
        il2cpp_runtime_helper_180026690(__this_00);
      }
      offset = offset + 2;
    } while( true );
  }
  ThrowNullReferenceException();
}


// CustomSkins.ForestCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_ForestCustomSkinLoader___ctor (CustomSkins_ForestCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e667c0

void CustomSkins_ForestCustomSkinLoader___ctor
               (CustomSkins_ForestCustomSkinLoader_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344f88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_184344f88 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._treeObjects = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._treeObjects,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._groundObjects = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._groundObjects,pSVar1);
  CustomSkins_LevelCustomSkinLoader___ctor((CustomSkins_LevelCustomSkinLoader_o *)__this,(MethodInfo *)0x0);
  return;
}


