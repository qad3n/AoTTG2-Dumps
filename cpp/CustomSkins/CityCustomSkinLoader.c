// Type: CustomSkins.CityCustomSkinLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/CityCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/CityCustomSkinLoader.cs
// --------------------------------

// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$.ctor
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6___ctor (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6___ctor(CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_IDisposable_Dispose (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x181e7a010
// eh: try 0x181e7a184..0x181e7a1ac -> pad 0x180356210 cleanup
// asm: 46 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7a092: lea rcx, [rsp + 0x40]
// asm:   0x181e7a097: call 0x181e62240  ; il2cpp_runtime_helper_181e62240()
// asm:   0x181e7a09c: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e7a0a1: test rcx, rcx
// asm:   0x181e7a0a4: jne 0x181e7a172
// asm:   0x181e7a0aa: mov qword ptr [rsp + 0x38], 0
// asm:   0x181e7a0b3: lea rax, [rsp + 0x60]
// asm:   0x181e7a0b8: mov qword ptr [rsp + 0x40], rax
// asm:   0x181e7a0bd: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x181e7a0c2: cmp byte ptr [rip + 0x24caeb0], 0
// asm:   0x181e7a0c9: jne 0x181e7a0de
// asm:   0x181e7a0cb: lea rcx, [rip + 0x2206416]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x181e7a0d2: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x181e7a0d7: mov byte ptr [rip + 0x24cae9b], 1
// asm:   0x181e7a0de: mov dword ptr [rbx + 0x10], 0xffffffff
// asm:   0x181e7a0e5: lea rcx, [rbx + 0x50]
// asm:   0x181e7a0e9: mov rdx, qword ptr [rip + 0x22063f8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x181e7a0f0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e7a0f5: jmp 0x181e7a16c
// asm:   0x181e7a0f7: lea rcx, [rsp + 0x40]
// asm:   0x181e7a0fc: call 0x181e621f0  ; il2cpp_runtime_helper_181e621f0()
// asm:   0x181e7a101: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e7a106: test rcx, rcx
// asm:   0x181e7a109: jne 0x181e7a178
// asm:   0x181e7a10b: mov qword ptr [rsp + 0x38], 0
// asm:   0x181e7a114: lea rax, [rsp + 0x60]
// asm:   0x181e7a119: mov qword ptr [rsp + 0x40], rax
// asm:   0x181e7a11e: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x181e7a123: cmp byte ptr [rip + 0x24cae50], 0
// asm:   0x181e7a12a: jne 0x181e7a13f
// asm:   0x181e7a12c: lea rcx, [rip + 0x22063b5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x181e7a133: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x181e7a138: mov byte ptr [rip + 0x24cae3b], 1
// asm:   0x181e7a13f: mov dword ptr [rbx + 0x10], 0xffffffff
// asm:   0x181e7a146: lea rcx, [rbx + 0x50]
// asm:   0x181e7a14a: mov rdx, qword ptr [rip + 0x2206397]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x181e7a151: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e7a156: jmp 0x181e7a16c
// asm:   0x181e7a158: lea rcx, [rsp + 0x40]
// asm:   0x181e7a15d: call 0x181e62040  ; il2cpp_runtime_helper_181e62040()
// asm:   0x181e7a162: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e7a167: test rcx, rcx
// asm:   0x181e7a16a: jne 0x181e7a17e
// asm:   0x181e7a172: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e7a178: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e7a17e: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_IDisposable_Dispose
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  switch((__this->fields).__1__state) {
  case -5:
  case 4:
    if (Il2CppMethodInitialized_184344f7a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
      Il2CppMethodInitialized_184344f7a = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap5,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    break;
  case -4:
  case 3:
    if (Il2CppMethodInitialized_184344f79 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
      Il2CppMethodInitialized_184344f79 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap5,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    break;
  case -3:
  case 2:
    if (Il2CppMethodInitialized_184344f78 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
      Il2CppMethodInitialized_184344f78 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap5,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  }
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$MoveNext
// il2cpp: bool CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__MoveNext (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x181e793a0
// eh: try 0x181e79428..0x181e79fb4 -> pad 0x18333cfe0 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e7980d: nop dword ptr [rax]
// asm:   0x181e79c5f: nop 
// asm:   0x181e79e92: mov rbx, qword ptr [rsp + 0x70]
// asm:   0x181e79e97: test rbx, rbx
// asm:   0x181e79e9a: jne 0x181e79fb4
// asm:   0x181e79ea0: movzx eax, byte ptr [rsp + 0xe0]
// asm:   0x181e79fb4: lea rcx, [rsp + 0x78]
// asm:   0x181e79fb9: call 0x181e622e0  ; il2cpp_runtime_helper_181e622e0()
// asm:   0x181e79fbe: mov rcx, rbx
// asm:   0x181e79fc1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333cfe0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cfe5: push rbp
// asm:   0x18333cfe6: sub rsp, 0x40
// asm:   0x18333cfea: mov rbp, rdx
// asm:   0x18333cfed: mov rax, qword ptr [rbp + 0x40]
// asm:   0x18333cff1: mov rcx, qword ptr [rax]
// asm:   0x18333cff4: mov qword ptr [rbp + 0x70], rcx
// asm:   0x18333cff8: movabs rax, 0
// asm:   0x18333d002: add rsp, 0x40
// asm:   0x18333d006: pop rbp
// asm:   0x18333d007: ret 

bool CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__MoveNext
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  CustomSkins_CityCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *pCVar5;
  bool bVar6;
  uint uVar7;
  System_Char_array *pSVar8;
  System_String_array *pSVar9;
  System_String_o *pSVar10;
  UnityEngine_GameObject_o *pUVar11;
  System_Collections_Generic_List_Renderer__o *pSVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  CustomSkins_BaseCustomSkinPart_o *pCVar15;
  System_Collections_IEnumerator_o *pSVar16;
  UnityEngine_Coroutine_o *pUVar17;
  MethodInfo *in_R8;
  CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *local_res8 [2];
  undefined1 local_res18;
  int32_t local_res20 [2];
  System_Collections_Generic_List_Enumerator_T__o local_78;
  undefined8 local_58;
  CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o **local_50;
  
  local_res8[0] = __this;
  if (Il2CppMethodInitialized_184344f77 == '\0') {
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
    Il2CppMethodInitialized_184344f77 = '\x01';
  }
  local_res18 = 0;
  pSVar13 = (System_String_o *)0x0;
  local_58 = 0;
  local_50 = local_res8;
  __this_00 = (local_res8[0]->fields).__4__this;
  iVar2 = (local_res8[0]->fields).__1__state;
  if (iVar2 == 0) {
    (local_res8[0]->fields).__1__state = -1;
    if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(__this_00->klass->vtable)._9_FindAndIndexLevelObjects.methodPtr)
              (__this_00,(__this_00->klass->vtable)._9_FindAndIndexLevelObjects.method);
    pSVar3 = (local_res8[0]->fields).data;
    if (pSVar3 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar14 = (System_String_o *)pSVar3->m_Items[0];
    if (pSVar14 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = pSVar13;
    if ((Il2CppClass *)pSVar14->klass == g_data_184354e50) {
      pSVar10 = pSVar14;
    }
    if (pSVar10 == (System_String_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar14);
    }
    pSVar10 = pSVar13;
    if ((Il2CppClass *)pSVar14->klass == g_data_184354e50) {
      pSVar10 = pSVar14;
    }
    pSVar8 = System_String__ToCharArray(pSVar10,(MethodInfo *)0x0);
    (local_res8[0]->fields)._randomIndices_5__2 = pSVar8;
    Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields)._randomIndices_5__2,pSVar8);
    pSVar3 = (local_res8[0]->fields).data;
    if (pSVar3 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar3->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    pSVar14 = (System_String_o *)pSVar3->m_Items[1];
    if (pSVar14 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = pSVar13;
    if ((Il2CppClass *)pSVar14->klass == g_data_184354e50) {
      pSVar10 = pSVar14;
    }
    if (pSVar10 == (System_String_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar14);
    }
    pSVar10 = pSVar13;
    if ((Il2CppClass *)pSVar14->klass == g_data_184354e50) {
      pSVar10 = pSVar14;
    }
    pSVar9 = System_String__Split(pSVar10,0x2c,0,(MethodInfo *)0x0);
    (local_res8[0]->fields)._houseUrls_5__3 = pSVar9;
    Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields)._houseUrls_5__3,pSVar9);
    pSVar3 = (local_res8[0]->fields).data;
    if (pSVar3 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar3->max_length < 3) {
      ThrowIndexOutOfRangeException();
    }
    pSVar14 = (System_String_o *)pSVar3->m_Items[2];
    if (pSVar14 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = pSVar13;
    if ((Il2CppClass *)pSVar14->klass == g_data_184354e50) {
      pSVar10 = pSVar14;
    }
    if (pSVar10 == (System_String_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar14);
    }
    if ((Il2CppClass *)pSVar14->klass == g_data_184354e50) {
      pSVar13 = pSVar14;
    }
    in_R8 = (MethodInfo *)0x0;
    pSVar9 = System_String__Split(pSVar13,0x2c,0,(MethodInfo *)0x0);
    (local_res8[0]->fields)._miscUrls_5__4 = pSVar9;
    Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields)._miscUrls_5__4,pSVar9);
    (local_res8[0]->fields)._i_5__5 = 0;
label_181e79641:
    while( true ) {
      if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar4 = (__this_00->fields)._houseObjects;
      if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pSVar4->fields)._size <= (local_res8[0]->fields)._i_5__5) break;
      pSVar8 = (local_res8[0]->fields)._randomIndices_5__2;
      if (pSVar8 == (System_Char_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar7 = (local_res8[0]->fields)._i_5__5;
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      if ((uint)pSVar8->max_length <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      pSVar13 = System_Char__ToString(pSVar8->m_Items + (int)uVar7,(System_IFormatProvider_o *)0x0,in_R8);
      uVar7 = System_Int32__Parse(pSVar13,(MethodInfo *)0x0);
      pSVar4 = (__this_00->fields)._houseObjects;
      if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar11 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar4,(local_res8[0]->fields)._i_5__5
                           ,(MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
      pCVar15 = CustomSkins_CityCustomSkinLoader__GetCustomSkinPart(__this_00,0,pUVar11,(MethodInfo *)0x0);
      pSVar9 = (local_res8[0]->fields)._houseUrls_5__3;
      if (pSVar9 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((uint)pSVar9->max_length <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      if (pCVar15 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
        ThrowNullReferenceException();
      }
      in_R8 = (MethodInfo *)0x0;
      bVar6 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar15,pSVar9->m_Items[(int)uVar7],(MethodInfo *)0x0)
      ;
      if (!bVar6) {
        pSVar9 = (local_res8[0]->fields)._houseUrls_5__3;
        if (pSVar9 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if (uVar7 < (uint)pSVar9->max_length) {
          pSVar16 = CustomSkins_BaseCustomSkinPart__LoadSkin
                              (pCVar15,pSVar9->m_Items[(int)uVar7],(MethodInfo *)0x0);
          pUVar17 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                              ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar16,(MethodInfo *)0x0);
          (local_res8[0]->fields).__2__current = (Il2CppObject *)pUVar17;
          Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields).__2__current,pUVar17);
          (local_res8[0]->fields).__1__state = 1;
          return true;
        }
        ThrowIndexOutOfRangeException();
      }
      piVar1 = &(local_res8[0]->fields)._i_5__5;
      *piVar1 = *piVar1 + 1;
    }
    pSVar4 = (__this_00->fields)._groundObjects;
    if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_78,(System_Collections_Generic_List_T__o *)pSVar4,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    (local_res8[0]->fields).__7__wrap5.fields._list = local_78.fields._list;
    (local_res8[0]->fields).__7__wrap5.fields._index = local_78.fields._index;
    (local_res8[0]->fields).__7__wrap5.fields._version = local_78.fields._version;
    (local_res8[0]->fields).__7__wrap5.fields._current = (UnityEngine_GameObject_o *)local_78.fields._current;
    Il2CppCodeGenWriteBarrier((void **)&(local_res8[0]->fields).__7__wrap5,(void *)0x0);
    (local_res8[0]->fields).__1__state = -3;
label_181e79810:
    while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)
                              &(local_res8[0]->fields).__7__wrap5,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          pCVar5 = local_res8[0], bVar6) {
      if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar15 = CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
                          (__this_00,1,(local_res8[0]->fields).__7__wrap5.fields._current,(MethodInfo *)0x0);
      pSVar9 = (local_res8[0]->fields)._miscUrls_5__4;
      if (pSVar9 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)pSVar9->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pCVar15 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar15,pSVar9->m_Items[0],(MethodInfo *)0x0);
      if (!bVar6) {
        pSVar9 = (local_res8[0]->fields)._miscUrls_5__4;
        if (pSVar9 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((int)pSVar9->max_length != 0) {
          pSVar16 = CustomSkins_BaseCustomSkinPart__LoadSkin(pCVar15,pSVar9->m_Items[0],(MethodInfo *)0x0);
          pUVar17 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                              ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar16,(MethodInfo *)0x0);
          (local_res8[0]->fields).__2__current = (Il2CppObject *)pUVar17;
          Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields).__2__current,pUVar17);
          (local_res8[0]->fields).__1__state = 2;
          return true;
        }
        ThrowIndexOutOfRangeException();
      }
    }
    if (Il2CppMethodInitialized_184344f78 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
      Il2CppMethodInitialized_184344f78 = '\x01';
    }
    (pCVar5->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(pCVar5->fields).__7__wrap5,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    (local_res8[0]->fields).__7__wrap5.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (local_res8[0]->fields).__7__wrap5.fields._index = 0;
    (local_res8[0]->fields).__7__wrap5.fields._version = 0;
    (local_res8[0]->fields).__7__wrap5.fields._current = (UnityEngine_GameObject_o *)0x0;
    if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = (__this_00->fields)._wallObjects;
    if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_78,(System_Collections_Generic_List_T__o *)pSVar4,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    (local_res8[0]->fields).__7__wrap5.fields._list = local_78.fields._list;
    (local_res8[0]->fields).__7__wrap5.fields._index = local_78.fields._index;
    (local_res8[0]->fields).__7__wrap5.fields._version = local_78.fields._version;
    (local_res8[0]->fields).__7__wrap5.fields._current = (UnityEngine_GameObject_o *)local_78.fields._current;
    Il2CppCodeGenWriteBarrier((void **)&(local_res8[0]->fields).__7__wrap5,(void *)0x0);
    (local_res8[0]->fields).__1__state = -4;
  }
  else {
    if (iVar2 == 1) {
      (local_res8[0]->fields).__1__state = -1;
      piVar1 = &(local_res8[0]->fields)._i_5__5;
      *piVar1 = *piVar1 + 1;
      goto label_181e79641;
    }
    if (iVar2 == 2) {
      (local_res8[0]->fields).__1__state = -3;
      goto label_181e79810;
    }
    if (iVar2 != 3) {
      if (iVar2 != 4) {
        return false;
      }
      (local_res8[0]->fields).__1__state = -5;
      goto label_181e79c60;
    }
    (local_res8[0]->fields).__1__state = -4;
  }
  while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)
                            &(local_res8[0]->fields).__7__wrap5,
                            (MethodInfo_153A2A0 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
        pCVar5 = local_res8[0], bVar6) {
    if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar11 = (local_res8[0]->fields).__7__wrap5.fields._current;
    if (Il2CppMethodInitialized_184344f74 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
      Il2CppMethodInitialized_184344f74 = '\x01';
    }
    pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar12,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_00,pSVar12,pUVar11,(MethodInfo *)0x0);
    local_res20[0] = 2;
    pSVar13 = (*(__this_00->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._4_get_RendererIdPrefix.method);
    pSVar14 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat_1969e50(pSVar13,pSVar14,(MethodInfo *)0x0);
    pCVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    local_78.fields._index = 0;
    CustomSkins_BaseCustomSkinPart___ctor
              (pCVar15,(CustomSkins_BaseCustomSkinLoader_o *)__this_00,pSVar12,pSVar13,500000,
               (System_Nullable_Vector2__o *)&local_78,false,(MethodInfo *)0x0);
    pSVar9 = (local_res8[0]->fields)._miscUrls_5__4;
    if (pSVar9 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar9->max_length < 2) {
      ThrowIndexOutOfRangeException();
    }
    if (pCVar15 == (CustomSkins_BaseCustomSkinPart_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar15,pSVar9->m_Items[1],(MethodInfo *)0x0);
    if (!bVar6) {
      pSVar9 = (local_res8[0]->fields)._miscUrls_5__4;
      if (pSVar9 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (1 < (uint)pSVar9->max_length) {
        pSVar16 = CustomSkins_BaseCustomSkinPart__LoadSkin(pCVar15,pSVar9->m_Items[1],(MethodInfo *)0x0);
        pUVar17 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                            ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar16,(MethodInfo *)0x0);
        (local_res8[0]->fields).__2__current = (Il2CppObject *)pUVar17;
        Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields).__2__current,pUVar17);
        (local_res8[0]->fields).__1__state = 3;
        return true;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  if (Il2CppMethodInitialized_184344f79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    Il2CppMethodInitialized_184344f79 = '\x01';
  }
  (pCVar5->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(pCVar5->fields).__7__wrap5,
             MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  (local_res8[0]->fields).__7__wrap5.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (local_res8[0]->fields).__7__wrap5.fields._index = 0;
  (local_res8[0]->fields).__7__wrap5.fields._version = 0;
  (local_res8[0]->fields).__7__wrap5.fields._current = (UnityEngine_GameObject_o *)0x0;
  if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (__this_00->fields)._gateObjects;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            (&local_78,(System_Collections_Generic_List_T__o *)pSVar4,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  (local_res8[0]->fields).__7__wrap5.fields._list = local_78.fields._list;
  (local_res8[0]->fields).__7__wrap5.fields._index = local_78.fields._index;
  (local_res8[0]->fields).__7__wrap5.fields._version = local_78.fields._version;
  (local_res8[0]->fields).__7__wrap5.fields._current = (UnityEngine_GameObject_o *)local_78.fields._current;
  Il2CppCodeGenWriteBarrier((void **)&(local_res8[0]->fields).__7__wrap5,(void *)0x0);
  (local_res8[0]->fields).__1__state = -5;
label_181e79c60:
  while( true ) {
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)
                       &(local_res8[0]->fields).__7__wrap5,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    pCVar5 = local_res8[0];
    if (!bVar6) {
      if (Il2CppMethodInitialized_184344f7a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
        Il2CppMethodInitialized_184344f7a = '\x01';
      }
      (pCVar5->fields).__1__state = -1;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(pCVar5->fields).__7__wrap5,
                 MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
      (local_res8[0]->fields).__7__wrap5.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (local_res8[0]->fields).__7__wrap5.fields._index = 0;
      (local_res8[0]->fields).__7__wrap5.fields._version = 0;
      (local_res8[0]->fields).__7__wrap5.fields._current = (UnityEngine_GameObject_o *)0x0;
      return false;
    }
    if (__this_00 == (CustomSkins_CityCustomSkinLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar11 = (local_res8[0]->fields).__7__wrap5.fields._current;
    if (Il2CppMethodInitialized_184344f74 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
      Il2CppMethodInitialized_184344f74 = '\x01';
    }
    pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar12,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_00,pSVar12,pUVar11,(MethodInfo *)0x0);
    local_res20[0] = 3;
    pSVar13 = (*(__this_00->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._4_get_RendererIdPrefix.method);
    pSVar14 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat_1969e50(pSVar13,pSVar14,(MethodInfo *)0x0);
    pCVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    local_78.fields._index = 0;
    CustomSkins_BaseCustomSkinPart___ctor
              (pCVar15,(CustomSkins_BaseCustomSkinLoader_o *)__this_00,pSVar12,pSVar13,2000000,
               (System_Nullable_Vector2__o *)&local_78,false,(MethodInfo *)0x0);
    pSVar9 = (local_res8[0]->fields)._miscUrls_5__4;
    if (pSVar9 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((uint)pSVar9->max_length < 3) {
      ThrowIndexOutOfRangeException();
    }
    if (pCVar15 == (CustomSkins_BaseCustomSkinPart_o *)0x0) break;
    bVar6 = CustomSkins_BaseCustomSkinPart__LoadCache(pCVar15,pSVar9->m_Items[2],(MethodInfo *)0x0);
    if (!bVar6) {
      pSVar9 = (local_res8[0]->fields)._miscUrls_5__4;
      if (pSVar9 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (2 < (uint)pSVar9->max_length) {
        pSVar16 = CustomSkins_BaseCustomSkinPart__LoadSkin(pCVar15,pSVar9->m_Items[2],(MethodInfo *)0x0);
        pUVar17 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                            ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar16,(MethodInfo *)0x0);
        (local_res8[0]->fields).__2__current = (Il2CppObject *)pUVar17;
        Il2CppCodeGenWriteBarrier(&(local_res8[0]->fields).__2__current,pUVar17);
        (local_res8[0]->fields).__1__state = 4;
        return true;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$<>m__Finally1
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally1 (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x181e7a1b0

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally1
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    Il2CppMethodInitialized_184344f78 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap5,
             MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$<>m__Finally2
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally2 (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x181e7a200

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally2
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    Il2CppMethodInitialized_184344f79 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap5,
             MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$<>m__Finally3
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally3 (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x181e7a250

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6____m__Finally3
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    Il2CppMethodInitialized_184344f7a = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap5,
             MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  return;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_Reset (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x181e79fd0

void CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_Reset
               (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

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
                  MethodInfo_CustomSkins_CityCustomSkinLoader_LoadSkinsFromRPC_d__6_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomSkins.CityCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_get_Current (CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_get_Current(CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.CityCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_CityCustomSkinLoader__get_RendererIdPrefix (CustomSkins_CityCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e63ba0

System_String_o *
CustomSkins_CityCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_CityCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"city");
    Il2CppMethodInitialized_184344f72 = '\x01';
  }
  return "city";
}


// CustomSkins.CityCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_CityCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x181e63a00

System_Collections_IEnumerator_o *
CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_CityCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  CustomSkins_CityCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this_00;
  
  if (Il2CppMethodInitialized_184344f73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomSkins_CityCustomSkinLoader_LoadSkinsFromRPC_d__6);
    Il2CppMethodInitialized_184344f73 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomSkins_CityCustomSkinLoader_LoadSkinsFromRPC_d__6);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data,data);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.CityCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_CityCustomSkinLoader__GetCustomSkinPart (CustomSkins_CityCustomSkinLoader_o* __this, int32_t partId, UnityEngine_GameObject_o* levelObject, const MethodInfo* method);
// 0x181e63770

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_CityCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_CityCustomSkinLoader_o *__this,int32_t partId,UnityEngine_GameObject_o *levelObject,
          MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *renderers;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  CustomSkins_BaseCustomSkinPart_o *pCVar3;
  int32_t local_res10 [2];
  int32_t maxSize;
  System_Nullable_Vector2__Fields local_28;
  
  if (Il2CppMethodInitialized_184344f74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    Il2CppMethodInitialized_184344f74 = '\x01';
  }
  renderers = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)renderers,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  if (partId == 0) {
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,levelObject,(MethodInfo *)0x0);
    local_res10[0] = 0;
    pSVar1 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
    pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50(pSVar1,pSVar2,(MethodInfo *)0x0);
    pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value.fields.x = 0.0;
    local_28.value.fields.y = 0.0;
    CustomSkins_BaseCustomSkinPart___ctor
              (pCVar3,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar1,2000000,
               (System_Nullable_Vector2__o *)&local_28,false,(MethodInfo *)0x0);
    return pCVar3;
  }
  if (partId == 1) {
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,levelObject,(MethodInfo *)0x0);
    local_res10[0] = 1;
  }
  else {
    if (partId != 2) {
      if (partId != 3) {
        return (CustomSkins_BaseCustomSkinPart_o *)0x0;
      }
      CustomSkins_BaseCustomSkinLoader__AddAllRenderers
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,levelObject,(MethodInfo *)0x0);
      local_res10[0] = 3;
      pSVar1 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
      pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_1969e50(pSVar1,pSVar2,(MethodInfo *)0x0);
      pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
      maxSize = 2000000;
      goto label_181e6387b;
    }
    CustomSkins_BaseCustomSkinLoader__AddAllRenderers
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,levelObject,(MethodInfo *)0x0);
    local_res10[0] = 2;
  }
  pSVar1 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
  pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50(pSVar1,pSVar2,(MethodInfo *)0x0);
  pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
  maxSize = 500000;
label_181e6387b:
  local_28.value.fields.y = 0.0;
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value.fields.x = 0.0;
  CustomSkins_BaseCustomSkinPart___ctor
            (pCVar3,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar1,maxSize,
             (System_Nullable_Vector2__o *)&local_28,false,(MethodInfo *)0x0);
  return pCVar3;
}


// CustomSkins.CityCustomSkinLoader$$FindAndIndexLevelObjects
// il2cpp: void CustomSkins_CityCustomSkinLoader__FindAndIndexLevelObjects (CustomSkins_CityCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e63400
// eh: try 0x181e63601..0x181e636d2 -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x181e636d2..0x181e636fe -> pad 0x180355dd0 cleanup
// eh: try 0x181e636fe..0x181e6375e -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e636d2: jmp 0x181e636f3
// asm:   0x181e636dd: jmp 0x181e636f3
// asm:   0x181e636e8: jmp 0x181e636f3
// asm:   0x181e63719: mov rdx, qword ptr [rip + 0x224c728]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181e63720: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e63725: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e6372a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e6372f: test rcx, rcx
// asm:   0x181e63732: jne 0x181e6375e
// asm:   0x181e6375e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void CustomSkins_CityCustomSkinLoader__FindAndIndexLevelObjects
               (CustomSkins_CityCustomSkinLoader_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  System_String_o *a;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_Collections_Generic_List_GameObject__o *pSVar5;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184344f75 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"House1");
    il2cpp_codegen_initialize_runtime_metadata(&"Ground");
    il2cpp_codegen_initialize_runtime_metadata(&"Cuboid");
    il2cpp_codegen_initialize_runtime_metadata(&"Arch1");
    il2cpp_codegen_initialize_runtime_metadata(&"Gate");
    il2cpp_codegen_initialize_runtime_metadata(&"Tower1");
    Il2CppMethodInitialized_184344f75 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  pSVar5 = (__this->fields)._houseObjects;
  if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pSVar5 = (__this->fields)._groundObjects;
    if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar5->fields)._size;
      (pSVar5->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pSVar5 = (__this->fields)._wallObjects;
      if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar2 = (pSVar5->fields)._size;
        (pSVar5->fields)._size = 0;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        pSVar5 = (__this->fields)._gateObjects;
        if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          iVar2 = (pSVar5->fields)._size;
          (pSVar5->fields)._size = 0;
          if (0 < iVar2) {
            System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar2,(MethodInfo *)0x0);
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
                                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values
                                    ),
             __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
            System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_60,__this_01,
                       (MethodInfo_F1E4D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                      );
            local_48.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
            local_48.fields._index = local_60._8_4_;
            local_48.fields._version = local_60._12_4_;
            local_48.fields._currentValue = local_50;
            local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_60._8_8_ = &local_48;
            while( true ) {
              bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                (&local_48,
                                 (MethodInfo_155CFB0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                                );
              pIVar3 = local_48.fields._currentValue;
              if (!bVar4) {
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                          );
                return;
              }
              if (local_48.fields._currentValue == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              if (local_48.fields._currentValue[2].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              a = ((local_48.fields._currentValue[2].klass)->_1).this_arg.data;
              bVar4 = System_String__op_Equality(a,"House1",(MethodInfo *)0x0);
              if (((bVar4) ||
                  (bVar4 = System_String__op_Equality(a,"Arch1",(MethodInfo *)0x0), bVar4)) ||
                 (bVar4 = System_String__op_Equality(a,"Tower1",(MethodInfo *)0x0), bVar4))
              break;
              bVar4 = System_String__op_Equality(a,"Ground",(MethodInfo *)0x0);
              if (bVar4) {
                pSVar5 = (__this->fields)._groundObjects;
                if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                  ThrowNullReferenceException();
                }
                goto label_181e636f3;
              }
              bVar4 = System_String__op_Equality(a,"Cuboid",(MethodInfo *)0x0);
              if (bVar4) {
                pSVar5 = (__this->fields)._wallObjects;
                if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                  ThrowNullReferenceException();
                }
                goto label_181e636f3;
              }
              bVar4 = System_String__op_Equality(a,"Gate",(MethodInfo *)0x0);
              if (bVar4) {
                pSVar5 = (__this->fields)._gateObjects;
                if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                  ThrowNullReferenceException();
                }
label_181e636f3:
                il2cpp_runtime_helper_180012890(pSVar5,pIVar3[1].monitor);
              }
            }
            pSVar5 = (__this->fields)._houseObjects;
            if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) {
              ThrowNullReferenceException();
            }
            goto label_181e636f3;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.CityCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_CityCustomSkinLoader___ctor (CustomSkins_CityCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e63a90

void CustomSkins_CityCustomSkinLoader___ctor(CustomSkins_CityCustomSkinLoader_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *pSVar1;
  
  if (Il2CppMethodInitialized_184344f76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_184344f76 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._houseObjects = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._houseObjects,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._groundObjects = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._groundObjects,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._wallObjects = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._wallObjects,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._gateObjects = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gateObjects,pSVar1);
  CustomSkins_LevelCustomSkinLoader___ctor((CustomSkins_LevelCustomSkinLoader_o *)__this,(MethodInfo *)0x0);
  return;
}


