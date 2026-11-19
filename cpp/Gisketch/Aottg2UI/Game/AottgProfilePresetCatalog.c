// Type: Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePresetCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Avatars
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars (const MethodInfo* method);
// 0x58fc190
// eh: try 0x58fc34a..0x58fc9b5 -> pad 0x58fc973 (+35 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58fc9c0..0x58fc9ca -> pad 0x58fca18 catch (...) [compiler noexcept guard]
// eh: try 0x58fc9df..0x58fc9e4 -> pad 0x58fca03 cleanup
// eh: try 0x58fca06..0x58fca10 -> pad 0x58fca18 catch (...) [compiler noexcept guard]
// asm: 81 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58fc3d4: jmp 0x58fc3e4
// asm:   0x58fc44d: nop dword ptr [rax]
// asm:   0x58fc4ae: lea r14, [rip + 0x197cf43]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58fc4b5: lea r15, [rip + 0x1974b14]  ; TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
// asm:   0x58fc4bc: jmp 0x58fc4f8
// asm:   0x58fc4ea: mov rbp, qword ptr [rsp + 0x20]
// asm:   0x58fc4ef: test rbp, rbp
// asm:   0x58fc4f2: je 0x58fc914
// asm:   0x58fc789: nop dword ptr [rax]
// asm:   0x58fc7c6: test r14, r14
// asm:   0x58fc7c9: jne 0x58fc941
// asm:   0x58fc941: mov rdi, r14
// asm:   0x58fc944: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58fc953: jmp 0x58fc977
// asm:   0x58fc955: jmp 0x58fc977
// asm:   0x58fc957: jmp 0x58fc977
// asm:   0x58fc959: jmp 0x58fc977
// asm:   0x58fc95b: jmp 0x58fc977
// asm:   0x58fc95d: jmp 0x58fc977
// asm:   0x58fc95f: jmp 0x58fc977
// asm:   0x58fc961: jmp 0x58fc977
// asm:   0x58fc963: jmp 0x58fc977
// asm:   0x58fc965: jmp 0x58fc977
// asm:   0x58fc967: jmp 0x58fc977
// asm:   0x58fc969: jmp 0x58fc977
// asm:   0x58fc96b: jmp 0x58fc977
// asm:   0x58fc96d: jmp 0x58fc977
// asm:   0x58fc96f: jmp 0x58fc977
// asm:   0x58fc971: jmp 0x58fc977
// asm:   0x58fc973: jmp 0x58fc977
// asm:   0x58fc975: jmp 0x58fc977
// asm:   0x58fc977: mov rbp, rdx
// asm:   0x58fc97a: mov r14, rax
// asm:   0x58fc97d: jmp 0x58fc9ca
// asm:   0x58fc97f: jmp 0x58fc995
// asm:   0x58fc981: jmp 0x58fc995
// asm:   0x58fc983: jmp 0x58fc995
// asm:   0x58fc985: jmp 0x58fc995
// asm:   0x58fc987: jmp 0x58fc995
// asm:   0x58fc989: jmp 0x58fc995
// asm:   0x58fc98b: jmp 0x58fc995
// asm:   0x58fc98d: jmp 0x58fc995
// asm:   0x58fc98f: jmp 0x58fc995
// asm:   0x58fc991: jmp 0x58fc995
// asm:   0x58fc993: jmp 0x58fc995
// asm:   0x58fc995: mov rbp, rdx
// asm:   0x58fc998: mov r14, rax
// asm:   0x58fc99b: cmp ebp, 1
// asm:   0x58fc99e: jne 0x58fc9c0
// asm:   0x58fc9a0: mov rdi, r14
// asm:   0x58fc9a3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58fc9a8: mov r14, qword ptr [rax]
// asm:   0x58fc9ab: mov qword ptr [rsp + 0x50], r14
// asm:   0x58fc9b0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58fc9b5: jmp 0x58fc751
// asm:   0x58fc9ba: mov rbp, rdx
// asm:   0x58fc9bd: mov r14, rax
// asm:   0x58fc9c0: lea rdi, [rsp + 0x50]
// asm:   0x58fc9c5: call 0x2fd1840  ; il2cpp_runtime_helper_02fd1840()
// asm:   0x58fc9ca: cmp ebp, 1
// asm:   0x58fc9cd: jne 0x58fca06
// asm:   0x58fc9cf: mov rdi, r14
// asm:   0x58fc9d2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58fc9d7: mov rbp, qword ptr [rax]
// asm:   0x58fc9da: mov qword ptr [rsp + 0x60], rbp
// asm:   0x58fc9df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58fc9e4: xor ebx, ebx
// asm:   0x58fc9e6: lea rdi, [rsp + 0x70]
// asm:   0x58fc9eb: xor esi, esi
// asm:   0x58fc9ed: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x58fc9f2: test rbp, rbp
// asm:   0x58fc9f5: je 0x58fc8ff
// asm:   0x58fc9fb: mov rdi, rbp
// asm:   0x58fc9fe: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58fca03: mov r14, rax
// asm:   0x58fca06: lea rdi, [rsp + 0x60]
// asm:   0x58fca0b: call 0x2fd18d0  ; il2cpp_runtime_helper_02fd18d0()
// asm:   0x58fca10: mov rdi, r14
// asm:   0x58fca13: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58fca18: mov rdi, rax
// asm:   0x58fca1b: call 0x2ab61e0  ; __clang_call_terminate()

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o item;
  bool bVar6;
  char cVar7;
  System_Collections_Generic_List_AottgProfilePreset__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar14;
  ulong uVar15;
  MethodInfo *pMVar16;
  long lVar17;
  Il2CppObject *local_a8;
  int32_t local_9c;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_98;
  undefined8 local_78;
  Il2CppObject **local_70;
  undefined8 local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *local_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  if (Il2CppMethodInitialized_07545647 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreset_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgProfilePreset);
    il2cpp_codegen_initialize_runtime_metadata(&"Data/Info/ProfileIconInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
    il2cpp_codegen_initialize_runtime_metadata(&"count=");
    il2cpp_codegen_initialize_runtime_metadata(&"load");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/Gisketch1Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/");
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePresetCatalog.Avatars");
    Il2CppMethodInitialized_07545647 = '\x01';
  }
  local_58.fields._startMs = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  local_a8 = (Il2CppObject *)0x0;
  local_9c = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_98,"ProfilePresetCatalog.Avatars","load",(MethodInfo *)0x0);
  local_58.fields._startMs = local_98.fields._startMs;
  local_58.fields._enabled = local_98.fields._enabled;
  local_58.fields._hotLoop = local_98.fields._hotLoop;
  local_58.fields._26_6_ = local_98.fields._26_6_;
  local_58.fields._area = local_98.fields._area;
  local_58.fields._detail = local_98.fields._detail;
  local_68 = 0;
  local_60 = &local_58;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgProfilePreset);
  pMVar16 = MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor;
  System_Collections_Generic_List_AottgProfilePreset____ctor
            (__this,(MethodInfo_51CA920 *)MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson("Data/Info/ProfileIconInfo",pMVar16);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar8,"Icons",(pSVar8->klass->vtable)._7_get_Item.method);
    uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar9 = (Il2CppObject *)
             (*(pSVar8->klass->vtable)._27_get_Children.methodPtr)
                       (pSVar8,(pSVar8->klass->vtable)._27_get_Children.method);
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = pIVar9->klass;
    uVar15 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar5->interfaceType + lVar17) ==
            TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
          pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar17);
          goto label_058fc481;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar15 * 0x10 != lVar17);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058fc481:
    pIVar9 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    local_78 = 0;
    local_70 = &local_a8;
joined_r0x058fc4a8:
    do {
      local_a8 = pIVar9;
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = pIVar9->klass;
      uVar15 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar15 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar17) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar17);
            goto label_058fc553;
          }
          lVar17 = lVar17 + 0x10;
        } while (uVar15 * 0x10 != lVar17);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058fc553:
      cVar7 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
      pIVar9 = local_a8;
      if (cVar7 == '\0') {
        if (local_a8 == (Il2CppObject *)0x0) goto label_058fc7cf;
        pIVar4 = local_a8->klass;
        uVar15 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar15 == 0) goto label_058fc79f;
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar17 = 0;
        goto label_058fc790;
      }
      if (local_a8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = local_a8->klass;
      uVar15 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar15 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar5->interfaceType + lVar17)
              == TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar17);
            goto label_058fc5d3;
          }
          lVar17 = lVar17 + 0x10;
        } while (uVar15 * 0x10 != lVar17);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_a8,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0)
      ;
label_058fc5d3:
      pIVar9 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar11 = (System_String_o *)(*pIVar9->klass->vtable[9].methodPtr)(pIVar9);
      bVar6 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
      pIVar9 = local_a8;
    } while (bVar6);
    if (Il2CppMethodInitialized_0754564e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Main Background ");
      il2cpp_codegen_initialize_runtime_metadata(&"MainBackground");
      Il2CppMethodInitialized_0754564e = '\x01';
    }
    bVar6 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
    if (bVar6) {
      pSVar12 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      if (pSVar11 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar12 = System_String__Replace_5304550
                          (pSVar11,"MainBackground","Main Background ",(MethodInfo *)0x0);
    }
    pSVar13 = System_String__Concat_5301f10
                        ("UI/Icons/Profile/",pSVar11,"Icon",(MethodInfo *)0x0);
    local_98.fields._detail = (System_String_o *)0x0;
    local_98.fields._startMs = 0;
    local_98.fields._area = pSVar11;
    Il2CppCodeGenWriteBarrier((void **)&local_98);
    local_98.fields._detail = pSVar12;
    Il2CppCodeGenWriteBarrier(&local_98.fields._detail);
    local_98.fields._startMs = (int64_t)pSVar13;
    Il2CppCodeGenWriteBarrier((void **)&local_98.fields._startMs);
    pMVar16 = MethodInfo_System_Collections_Generic_List_AottgProfilePreset_Add;
    if (__this != (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar14 = (__this->fields)._items;
      if (pGVar14 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
        uVar3 = (__this->fields)._size;
        if (uVar3 < (uint)pGVar14->max_length) {
          (__this->fields)._size = uVar3 + 1;
          pGVar14->m_Items[(int)uVar3].fields.Sprite = (System_String_o *)local_98.fields._startMs;
          pGVar14->m_Items[(int)uVar3].fields.Key = local_98.fields._area;
          pGVar14->m_Items[(int)uVar3].fields.Label = local_98.fields._detail;
          Il2CppCodeGenWriteBarrier((void **)(pGVar14->m_Items + (int)uVar3));
          pIVar9 = local_a8;
        }
        else {
          item.fields.Label = local_98.fields._detail;
          item.fields.Key = local_98.fields._area;
          item.fields.Sprite = (System_String_o *)local_98.fields._startMs;
          System_Collections_Generic_List_AottgProfilePreset___AddWithResize
                    (__this,item,(MethodInfo_51CB2D0 *)pMVar16->klass->rgctx_data[0xe].method);
          pIVar9 = local_a8;
        }
        goto joined_r0x058fc4a8;
      }
    }
    ThrowNullReferenceException();
  }
  goto label_058fc7cf;
  while (lVar17 = lVar17 + 0x10, uVar15 * 0x10 != lVar17) {
label_058fc790:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar17) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar17);
      goto label_058fc7bd;
    }
  }
label_058fc79f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(local_a8,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058fc7bd:
  (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
label_058fc7cf:
  if (__this == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields)._size < 1) {
    pGVar14 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreset_array,1);
    pSVar12 = "UI/Icons/Profile/Gisketch1Icon";
    pSVar11 = "Gisketch";
    local_98.fields._detail = (System_String_o *)0x0;
    local_98.fields._startMs = 0;
    local_98.fields._area = "Gisketch1";
    Il2CppCodeGenWriteBarrier((void **)&local_98);
    local_98.fields._detail = pSVar11;
    Il2CppCodeGenWriteBarrier(&local_98.fields._detail);
    local_98.fields._startMs = (int64_t)pSVar12;
    Il2CppCodeGenWriteBarrier((void **)&local_98.fields._startMs);
    if (pGVar14 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pGVar14->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pGVar14->m_Items[0].fields.Sprite = (System_String_o *)local_98.fields._startMs;
    pGVar14->m_Items[0].fields.Key = local_98.fields._area;
    pGVar14->m_Items[0].fields.Label = local_98.fields._detail;
    Il2CppCodeGenWriteBarrier((void **)pGVar14->m_Items);
  }
  else {
    pGVar14 = System_Collections_Generic_List_AottgProfilePreset___ToArray
                        (__this,(MethodInfo_51CD970 *)
                                MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ToArray);
    if (pGVar14 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
  }
  local_9c = (int32_t)pGVar14->max_length;
  pSVar11 = System_Int32__ToString(&local_9c,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_52f0320("count=",pSVar11,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfilePresetCatalog.Avatars",pSVar11,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,(MethodInfo *)0x0);
  return pGVar14;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Banners
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners (const MethodInfo* method);
// 0x58fca20
// eh: try 0x58fcbe6..0x58fd27e -> pad 0x58fd238 (+37 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58fd289..0x58fd293 -> pad 0x58fd2e1 catch (...) [compiler noexcept guard]
// eh: try 0x58fd2a8..0x58fd2ad -> pad 0x58fd2cc cleanup
// eh: try 0x58fd2cf..0x58fd2d9 -> pad 0x58fd2e1 catch (...) [compiler noexcept guard]
// asm: 83 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58fcc70: jmp 0x58fcc80
// asm:   0x58fcce9: nop dword ptr [rax]
// asm:   0x58fcd4e: lea r14, [rip + 0x197c6a3]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58fcd55: lea r15, [rip + 0x1974274]  ; TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
// asm:   0x58fcd5c: jmp 0x58fcd98
// asm:   0x58fcd8a: mov rbp, qword ptr [rsp + 0x20]
// asm:   0x58fcd8f: test rbp, rbp
// asm:   0x58fcd92: je 0x58fd1d4
// asm:   0x58fd04f: nop 
// asm:   0x58fd086: test r14, r14
// asm:   0x58fd089: jne 0x58fd206
// asm:   0x58fd206: mov rdi, r14
// asm:   0x58fd209: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58fd218: jmp 0x58fd23c
// asm:   0x58fd21a: jmp 0x58fd23c
// asm:   0x58fd21c: jmp 0x58fd23c
// asm:   0x58fd21e: jmp 0x58fd23c
// asm:   0x58fd220: jmp 0x58fd23c
// asm:   0x58fd222: jmp 0x58fd23c
// asm:   0x58fd224: jmp 0x58fd23c
// asm:   0x58fd226: jmp 0x58fd23c
// asm:   0x58fd228: jmp 0x58fd23c
// asm:   0x58fd22a: jmp 0x58fd23c
// asm:   0x58fd22c: jmp 0x58fd23c
// asm:   0x58fd22e: jmp 0x58fd23c
// asm:   0x58fd230: jmp 0x58fd23c
// asm:   0x58fd232: jmp 0x58fd23c
// asm:   0x58fd234: jmp 0x58fd23c
// asm:   0x58fd236: jmp 0x58fd23c
// asm:   0x58fd238: jmp 0x58fd23c
// asm:   0x58fd23a: jmp 0x58fd23c
// asm:   0x58fd23c: mov rbp, rdx
// asm:   0x58fd23f: mov r14, rax
// asm:   0x58fd242: jmp 0x58fd293
// asm:   0x58fd244: jmp 0x58fd25e
// asm:   0x58fd246: jmp 0x58fd25e
// asm:   0x58fd248: jmp 0x58fd25e
// asm:   0x58fd24a: jmp 0x58fd25e
// asm:   0x58fd24c: jmp 0x58fd25e
// asm:   0x58fd24e: jmp 0x58fd25e
// asm:   0x58fd250: jmp 0x58fd25e
// asm:   0x58fd252: jmp 0x58fd25e
// asm:   0x58fd254: jmp 0x58fd25e
// asm:   0x58fd256: jmp 0x58fd25e
// asm:   0x58fd258: jmp 0x58fd25e
// asm:   0x58fd25a: jmp 0x58fd25e
// asm:   0x58fd25c: jmp 0x58fd25e
// asm:   0x58fd25e: mov rbp, rdx
// asm:   0x58fd261: mov r14, rax
// asm:   0x58fd264: cmp ebp, 1
// asm:   0x58fd267: jne 0x58fd289
// asm:   0x58fd269: mov rdi, r14
// asm:   0x58fd26c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58fd271: mov r14, qword ptr [rax]
// asm:   0x58fd274: mov qword ptr [rsp + 0x50], r14
// asm:   0x58fd279: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58fd27e: jmp 0x58fd017
// asm:   0x58fd283: mov rbp, rdx
// asm:   0x58fd286: mov r14, rax
// asm:   0x58fd289: lea rdi, [rsp + 0x50]
// asm:   0x58fd28e: call 0x2fd18f0  ; il2cpp_runtime_helper_02fd18f0()
// asm:   0x58fd293: cmp ebp, 1
// asm:   0x58fd296: jne 0x58fd2cf
// asm:   0x58fd298: mov rdi, r14
// asm:   0x58fd29b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58fd2a0: mov rbp, qword ptr [rax]
// asm:   0x58fd2a3: mov qword ptr [rsp + 0x60], rbp
// asm:   0x58fd2a8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58fd2ad: xor ebx, ebx
// asm:   0x58fd2af: lea rdi, [rsp + 0x70]
// asm:   0x58fd2b4: xor esi, esi
// asm:   0x58fd2b6: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x58fd2bb: test rbp, rbp
// asm:   0x58fd2be: je 0x58fd1bf
// asm:   0x58fd2c4: mov rdi, rbp
// asm:   0x58fd2c7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58fd2cc: mov r14, rax
// asm:   0x58fd2cf: lea rdi, [rsp + 0x60]
// asm:   0x58fd2d4: call 0x2fd1980  ; il2cpp_runtime_helper_02fd1980()
// asm:   0x58fd2d9: mov rdi, r14
// asm:   0x58fd2dc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58fd2e1: mov rdi, rax
// asm:   0x58fd2e4: call 0x2ab61e0  ; __clang_call_terminate()

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o item;
  bool bVar6;
  char cVar7;
  System_Collections_Generic_List_AottgProfilePreset__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  Il2CppObject *pIVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar14;
  ulong uVar15;
  MethodInfo *pMVar16;
  long lVar17;
  Il2CppObject *local_a8;
  int32_t local_9c;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_98;
  undefined8 local_78;
  Il2CppObject **local_70;
  undefined8 local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *local_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  if (Il2CppMethodInitialized_07545648 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreset_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgProfilePreset);
    il2cpp_codegen_initialize_runtime_metadata(&"Data/Info/BannerInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePresetCatalog.Banners");
    il2cpp_codegen_initialize_runtime_metadata(&"count=");
    il2cpp_codegen_initialize_runtime_metadata(&"load");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"Banners");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackground2Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"Main Background 2");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Backgrounds/");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Backgrounds/MainBackground2Texture");
    Il2CppMethodInitialized_07545648 = '\x01';
  }
  local_58.fields._startMs = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  local_a8 = (Il2CppObject *)0x0;
  local_9c = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_98,"ProfilePresetCatalog.Banners","load",(MethodInfo *)0x0);
  local_58.fields._startMs = local_98.fields._startMs;
  local_58.fields._enabled = local_98.fields._enabled;
  local_58.fields._hotLoop = local_98.fields._hotLoop;
  local_58.fields._26_6_ = local_98.fields._26_6_;
  local_58.fields._area = local_98.fields._area;
  local_58.fields._detail = local_98.fields._detail;
  local_68 = 0;
  local_60 = &local_58;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgProfilePreset);
  pMVar16 = MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor;
  System_Collections_Generic_List_AottgProfilePreset____ctor
            (__this,(MethodInfo_51CA920 *)MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson("Data/Info/BannerInfo",pMVar16);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar8,"Banners",(pSVar8->klass->vtable)._7_get_Item.method);
    uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    uVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar9 = (Il2CppObject *)
             (*(pSVar8->klass->vtable)._27_get_Children.methodPtr)
                       (pSVar8,(pSVar8->klass->vtable)._27_get_Children.method);
    if (pIVar9 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = pIVar9->klass;
    uVar15 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar5->interfaceType + lVar17) ==
            TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
          pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar17);
          goto label_058fcd21;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar15 * 0x10 != lVar17);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058fcd21:
    pIVar9 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
    local_78 = 0;
    local_70 = &local_a8;
joined_r0x058fcd48:
    do {
      local_a8 = pIVar9;
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = pIVar9->klass;
      uVar15 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar15 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar17) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar17);
            goto label_058fcdf3;
          }
          lVar17 = lVar17 + 0x10;
        } while (uVar15 * 0x10 != lVar17);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058fcdf3:
      cVar7 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
      pIVar9 = local_a8;
      if (cVar7 == '\0') {
        if (local_a8 == (Il2CppObject *)0x0) goto label_058fd08f;
        pIVar4 = local_a8->klass;
        uVar15 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar15 == 0) goto label_058fd05f;
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar17 = 0;
        goto label_058fd050;
      }
      if (local_a8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = local_a8->klass;
      uVar15 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar15 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)((long)&pIVar5->interfaceType + lVar17)
              == TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar17);
            goto label_058fce73;
          }
          lVar17 = lVar17 + 0x10;
        } while (uVar15 * 0x10 != lVar17);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_a8,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0)
      ;
label_058fce73:
      pIVar9 = (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar11 = (System_String_o *)(*pIVar9->klass->vtable[9].methodPtr)(pIVar9);
      bVar6 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
      pIVar9 = local_a8;
    } while (bVar6);
    if (pSVar11 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar12 = System_String__Replace_5304550
                        (pSVar11,"Texture","",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0754564e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Main Background ");
      il2cpp_codegen_initialize_runtime_metadata(&"MainBackground");
      Il2CppMethodInitialized_0754564e = '\x01';
    }
    bVar6 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
    if (bVar6) {
      pSVar12 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      if (pSVar12 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar12 = System_String__Replace_5304550
                          (pSVar12,"MainBackground","Main Background ",(MethodInfo *)0x0);
    }
    pSVar13 = System_String__Concat_52f0320("UI/Backgrounds/",pSVar11,(MethodInfo *)0x0);
    local_98.fields._detail = (System_String_o *)0x0;
    local_98.fields._startMs = 0;
    local_98.fields._area = pSVar11;
    Il2CppCodeGenWriteBarrier((void **)&local_98);
    local_98.fields._detail = pSVar12;
    Il2CppCodeGenWriteBarrier(&local_98.fields._detail);
    local_98.fields._startMs = (int64_t)pSVar13;
    Il2CppCodeGenWriteBarrier((void **)&local_98.fields._startMs);
    pMVar16 = MethodInfo_System_Collections_Generic_List_AottgProfilePreset_Add;
    if (__this != (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar14 = (__this->fields)._items;
      if (pGVar14 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
        uVar3 = (__this->fields)._size;
        if (uVar3 < (uint)pGVar14->max_length) {
          (__this->fields)._size = uVar3 + 1;
          pGVar14->m_Items[(int)uVar3].fields.Sprite = (System_String_o *)local_98.fields._startMs;
          pGVar14->m_Items[(int)uVar3].fields.Key = local_98.fields._area;
          pGVar14->m_Items[(int)uVar3].fields.Label = local_98.fields._detail;
          Il2CppCodeGenWriteBarrier((void **)(pGVar14->m_Items + (int)uVar3));
          pIVar9 = local_a8;
        }
        else {
          item.fields.Label = local_98.fields._detail;
          item.fields.Key = local_98.fields._area;
          item.fields.Sprite = (System_String_o *)local_98.fields._startMs;
          System_Collections_Generic_List_AottgProfilePreset___AddWithResize
                    (__this,item,(MethodInfo_51CB2D0 *)pMVar16->klass->rgctx_data[0xe].method);
          pIVar9 = local_a8;
        }
        goto joined_r0x058fcd48;
      }
    }
    ThrowNullReferenceException();
  }
  goto label_058fd08f;
  while (lVar17 = lVar17 + 0x10, uVar15 * 0x10 != lVar17) {
label_058fd050:
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar17) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar17);
      goto label_058fd07d;
    }
  }
label_058fd05f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(local_a8,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058fd07d:
  (*pVVar10->methodPtr)(pIVar9,pVVar10->method);
label_058fd08f:
  if (__this == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields)._size < 1) {
    pGVar14 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreset_array,1);
    pSVar12 = "UI/Backgrounds/MainBackground2Texture";
    pSVar11 = "Main Background 2";
    local_98.fields._detail = (System_String_o *)0x0;
    local_98.fields._startMs = 0;
    local_98.fields._area = "MainBackground2Texture";
    Il2CppCodeGenWriteBarrier((void **)&local_98);
    local_98.fields._detail = pSVar11;
    Il2CppCodeGenWriteBarrier(&local_98.fields._detail);
    local_98.fields._startMs = (int64_t)pSVar12;
    Il2CppCodeGenWriteBarrier((void **)&local_98.fields._startMs);
    if (pGVar14 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pGVar14->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pGVar14->m_Items[0].fields.Sprite = (System_String_o *)local_98.fields._startMs;
    pGVar14->m_Items[0].fields.Key = local_98.fields._area;
    pGVar14->m_Items[0].fields.Label = local_98.fields._detail;
    Il2CppCodeGenWriteBarrier((void **)pGVar14->m_Items);
  }
  else {
    pGVar14 = System_Collections_Generic_List_AottgProfilePreset___ToArray
                        (__this,(MethodInfo_51CD970 *)
                                MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ToArray);
    if (pGVar14 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
  }
  local_9c = (int32_t)pGVar14->max_length;
  pSVar11 = System_Int32__ToString(&local_9c,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_52f0320("count=",pSVar11,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfilePresetCatalog.Banners",pSVar11,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,(MethodInfo *)0x0);
  return pGVar14;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$AvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite (System_String_o* key, const MethodInfo* method);
// 0x5904c80

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  System_String_o *pSVar1;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)key;
  if (Il2CppMethodInitialized_07545649 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    method_00 = &"UI/Icons/Profile/";
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/");
    Il2CppMethodInitialized_07545649 = '\x01';
  }
  presets = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars((MethodInfo *)method_00);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey
                     (key,presets,"Gisketch1",(MethodInfo *)&"Gisketch1");
  pSVar1 = System_String__Concat_5301f10("UI/Icons/Profile/",pSVar1,"Icon",(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$BannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite (System_String_o* key, const MethodInfo* method);
// 0x5904da0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  System_String_o *pSVar1;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)key;
  if (Il2CppMethodInitialized_0754564a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackground2Texture");
    method_00 = &"UI/Backgrounds/";
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Backgrounds/");
    Il2CppMethodInitialized_0754564a = '\x01';
  }
  presets = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners((MethodInfo *)method_00);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey
                     (key,presets,"MainBackground2Texture",(MethodInfo *)&"MainBackground2Texture");
  pSVar1 = System_String__Concat_52f0320("UI/Backgrounds/",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$PublicAvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicAvatarSprite (System_String_o* key, const MethodInfo* method);
// 0x5904e00

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicAvatarSprite(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  MethodInfo *in_RCX;
  System_String_o **ppSVar2;
  System_String_o *pSStack_18;
  
  pSStack_18 = (System_String_o *)0x0;
  presets = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars((MethodInfo *)key);
  ppSVar2 = &pSStack_18;
  bVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite(key,presets,&pSStack_18,in_RCX);
  if (!bVar1) {
    ppSVar2 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  return *ppSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$PublicBannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicBannerSprite (System_String_o* key, const MethodInfo* method);
// 0x5904f10

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicBannerSprite(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  MethodInfo *in_RCX;
  System_String_o **ppSVar2;
  System_String_o *pSStack_18;
  
  pSStack_18 = (System_String_o *)0x0;
  presets = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners((MethodInfo *)key);
  ppSVar2 = &pSStack_18;
  bVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite(key,presets,&pSStack_18,in_RCX);
  if (!bVar1) {
    ppSVar2 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  return *ppSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstAvatarKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey (const MethodInfo* method);
// 0x5904f60

System_String_o * Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar1;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  
  if (g_data_0754564b == '\0') {
    ppSVar3 = &"Gisketch1";
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
    g_data_0754564b = '\x01';
    method = (MethodInfo *)ppSVar3;
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(method);
  pSVar2 = "Gisketch1";
  if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar1->max_length != 0)) {
    if ((int)pGVar1->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar2 = pGVar1->m_Items[0].fields.Key;
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstBannerKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey (const MethodInfo* method);
// 0x5904fe0

System_String_o * Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar1;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  
  if (g_data_0754564c == '\0') {
    ppSVar3 = &"MainBackground2Texture";
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackground2Texture");
    g_data_0754564c = '\x01';
    method = (MethodInfo *)ppSVar3;
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(method);
  pSVar2 = "MainBackground2Texture";
  if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar1->max_length != 0)) {
    if ((int)pGVar1->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar2 = pGVar1->m_Items[0].fields.Key;
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$TryPresetSprite
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite (System_String_o* key, Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o** sprite, const MethodInfo* method);
// 0x5904e50
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5904ead: nop dword ptr [rax]
// asm:   0x5904edf: xor r12d, r12d
// asm:   0x5904ee2: jmp 0x5904ef5

bool Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite
               (System_String_o *key,Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,
               System_String_o **sprite,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  bool bVar3;
  ulong uVar4;
  System_String_o **ppSVar5;
  ulong uVar6;
  
  *sprite = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(sprite);
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (((!bVar3) && (presets != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0)) &&
     (0 < (int)presets->max_length)) {
    uVar4 = presets->max_length & 0xffffffff;
    ppSVar5 = &presets->m_Items[0].fields.Sprite;
    uVar6 = 0;
    do {
      if (uVar4 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2 = *ppSVar5;
      bVar3 = System_String__op_Equality
                        (((Gisketch_Aottg2UI_Game_AottgProfilePreset_Fields *)(ppSVar5 + -2))->Key,key,
                         (MethodInfo *)0x0);
      if (bVar3) {
        *sprite = pSVar2;
        Il2CppCodeGenWriteBarrier(sprite);
        return true;
      }
      uVar6 = uVar6 + 1;
      uVar1 = (uint)presets->max_length;
      uVar4 = (ulong)uVar1;
      ppSVar5 = ppSVar5 + 3;
    } while ((long)uVar6 < (long)(int)uVar1);
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$AllowedKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey (System_String_o* key, Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o* fallback, const MethodInfo* method);
// 0x5904d00

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey
          (System_String_o *key,Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,
          System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar4;
  
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1) {
    if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      return fallback;
    }
    uVar2 = presets->max_length;
  }
  else {
    if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2 = presets->max_length;
    if (0 < (int)uVar2) {
      pGVar4 = presets->m_Items;
      uVar3 = 0;
      do {
        if ((uVar2 & 0xffffffff) <= uVar3) goto label_05904d8b;
        bVar1 = System_String__op_Equality((pGVar4->fields).Key,key,(MethodInfo *)0x0);
        if (bVar1) {
          return key;
        }
        uVar3 = uVar3 + 1;
        uVar2 = presets->max_length;
        pGVar4 = pGVar4 + 1;
      } while ((long)uVar3 < (long)(int)uVar2);
    }
  }
  if (uVar2 != 0) {
    if ((int)uVar2 == 0) {
label_05904d8b:
      ThrowIndexOutOfRangeException();
    }
    fallback = presets->m_Items[0].fields.Key;
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstKey (Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o* fallback, const MethodInfo* method);
// 0x5904fb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstKey
          (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,System_String_o *fallback,
          MethodInfo *method)

{
  if ((presets != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (presets->max_length != 0)) {
    if ((int)presets->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    fallback = presets->m_Items[0].fields.Key;
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$LoadJson
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson (System_String_o* path, const MethodInfo* method);
// 0x5904990
// eh: try 0x5904a64..0x5904b93 -> pad 0x5904ba9 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5904bc3..0x5904bc8 -> pad 0x5904be3 cleanup
// eh: try 0x5904be6..0x5904bf0 -> pad 0x5904bf8 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5904b93: jmp 0x5904bab
// asm:   0x5904b95: jmp 0x5904bab
// asm:   0x5904b97: jmp 0x5904bab
// asm:   0x5904b99: jmp 0x5904bab
// asm:   0x5904b9b: jmp 0x5904bab
// asm:   0x5904b9d: jmp 0x5904bab
// asm:   0x5904b9f: jmp 0x5904bab
// asm:   0x5904ba1: jmp 0x5904bab
// asm:   0x5904ba3: jmp 0x5904bab
// asm:   0x5904ba5: jmp 0x5904bab
// asm:   0x5904ba7: jmp 0x5904bab
// asm:   0x5904ba9: jmp 0x5904bab
// asm:   0x5904bab: mov rbx, rax
// asm:   0x5904bae: cmp edx, 1
// asm:   0x5904bb1: jne 0x5904be6
// asm:   0x5904bb3: mov rdi, rbx
// asm:   0x5904bb6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5904bbb: mov r14, qword ptr [rax]
// asm:   0x5904bbe: mov qword ptr [rsp + 0x38], r14
// asm:   0x5904bc3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5904bc8: xor ebx, ebx
// asm:   0x5904bca: lea rdi, [rsp + 0x10]
// asm:   0x5904bcf: xor esi, esi
// asm:   0x5904bd1: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x5904bd6: test r14, r14
// asm:   0x5904bd9: je 0x5904b72
// asm:   0x5904bdb: mov rdi, r14
// asm:   0x5904bde: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5904be3: mov rbx, rax
// asm:   0x5904be6: lea rdi, [rsp + 0x38]
// asm:   0x5904beb: call 0x2fd19a0  ; il2cpp_runtime_helper_02fd19a0()
// asm:   0x5904bf0: mov rdi, rbx
// asm:   0x5904bf3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5904bf8: mov rdi, rax
// asm:   0x5904bfb: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson(System_String_o *path,MethodInfo *method)

{
  System_String_o *area;
  bool bVar1;
  UnityEngine_Object_o *x;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  int32_t iVar5;
  int32_t local_7c;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (Il2CppMethodInitialized_0754564d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&" bytes=");
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePresetCatalog.LoadJson");
    Il2CppMethodInitialized_0754564d = '\x01';
  }
  local_78.fields._startMs._0_4_ = 0;
  local_78.fields._startMs._4_2_ = 0;
  local_78.fields._startMs._6_2_ = 0;
  local_78.fields._enabled = false;
  local_78.fields._hotLoop = false;
  local_78.fields._26_6_ = 0;
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)0x0;
  local_7c = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_50,"ProfilePresetCatalog.LoadJson",path,(MethodInfo *)0x0);
  local_78.fields._startMs = local_50.fields._startMs;
  local_78.fields._enabled = local_50.fields._enabled;
  local_78.fields._hotLoop = local_50.fields._hotLoop;
  local_78.fields._26_6_ = local_50.fields._26_6_;
  local_78.fields._area = local_50.fields._area;
  local_78.fields._detail = local_50.fields._detail;
  local_50.fields._area = (System_String_o *)0x0;
  local_50.fields._detail = (System_String_o *)&local_78;
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (path,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  iVar5 = 0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  area = "ProfilePresetCatalog.LoadJson";
  pSVar3 = " bytes=";
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar5 = 0;
    pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
      if (pSVar2 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar5 = (pSVar2->fields)._stringLength;
    }
  }
  local_7c = iVar5;
  pSVar2 = System_Int32__ToString(&local_7c,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_5301f10(path,pSVar3,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    pSVar4 = SimpleJSONFixed_JSON__Parse(pSVar3,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_78,(MethodInfo *)0x0);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Label (System_String_o* key, const MethodInfo* method);
// 0x5904c00

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Label(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754564e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Main Background ");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackground");
    Il2CppMethodInitialized_0754564e = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (key == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__Replace_5304550(key,"MainBackground","Main Background ",(MethodInfo *)0x0);
  return pSVar2;
}


