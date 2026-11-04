// Type: Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePresetCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Avatars
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars (const MethodInfo* method);
// 0x181e19d00
// eh: try 0x181e19eaa..0x181e1a17a -> pad 0x183320680 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e1a17a..0x181e1a196 -> pad 0x18022f7f0 cleanup
// eh: try 0x181e1a196..0x181e1a32a -> pad 0x183320680 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e19f27: mov rbx, r13
// asm:   0x181e19fa9: nop dword ptr [rax]
// asm:   0x181e1a17a: jmp 0x181e1a24c
// asm:   0x181e1a17f: mov r8, qword ptr [rsp + 0x50]
// asm:   0x181e1a184: cmp qword ptr [r8], 0
// asm:   0x181e1a188: je 0x181e1a19b
// asm:   0x181e1a18a: xor ecx, ecx
// asm:   0x181e1a18c: mov r8, qword ptr [r8]
// asm:   0x181e1a18f: mov rdx, qword ptr [rip + 0x227f16a]  ; TypeInfo_System_IDisposable
// asm:   0x181e1a196: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e1a19b: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181e1a1a0: test rcx, rcx
// asm:   0x181e1a1a3: jne 0x181e1a30b
// asm:   0x181e1a1a9: mov r12, qword ptr [rsp + 0x58]
// asm:   0x181e1a1ae: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x181e1a1b3: jmp 0x181e1a14e
// asm:   0x181e1a2b5: xor edx, edx
// asm:   0x181e1a2b7: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e1a2bc: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e1a2c1: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e1a2c6: test rcx, rcx
// asm:   0x181e1a2c9: jne 0x181e1a32a
// asm:   0x181e1a2cb: mov rbx, qword ptr [rsp + 0x108]
// asm:   0x181e1a30b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e1a32a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318fb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318fb5: push rbp
// asm:   0x183318fb6: sub rsp, 0x20
// asm:   0x183318fba: mov rbp, rdx
// asm:   0x183318fbd: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318fc4: mov rcx, qword ptr [rax]
// asm:   0x183318fc7: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183318fcb: movabs rax, 0
// asm:   0x183318fd5: add rsp, 0x20
// asm:   0x183318fd9: pop rbp
// asm:   0x183318fda: ret 
// asm:   0x183320680: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320685: push rbp
// asm:   0x183320686: sub rsp, 0x20
// asm:   0x18332068a: mov rbp, rdx
// asm:   0x18332068d: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320694: mov rcx, qword ptr [rax]
// asm:   0x183320697: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18332069b: movabs rax, 0
// asm:   0x1833206a5: add rsp, 0x20
// asm:   0x1833206a9: pop rbp
// asm:   0x1833206aa: ret 

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar5;
  System_Collections_Generic_List_AottgProfilePreset__o *__this;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  Il2CppObject *pIVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *value;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar12;
  ushort uVar13;
  int32_t local_res10 [2];
  Il2CppObject *local_res18;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *local_res20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  System_String_o *pSStack_b8;
  undefined8 local_b0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *local_a8;
  undefined8 local_a0;
  Il2CppObject **local_98;
  System_Collections_Generic_List_AottgProfilePreset__o *local_90;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_88;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  if (Il2CppMethodInitialized_184344cd3 == '\0') {
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
    Il2CppMethodInitialized_184344cd3 = '\x01';
  }
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)0x0;
  local_88.fields._startMs = 0;
  local_88.fields._enabled = false;
  local_88.fields._hotLoop = false;
  local_88.fields._26_6_ = 0;
  local_res18 = (Il2CppObject *)0x0;
  local_res10[0] = 0;
  local_res20 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar5 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_58,"ProfilePresetCatalog.Avatars","load",(MethodInfo *)0x0);
  local_88.fields._area = (pGVar5->fields)._area;
  local_88.fields._detail = (pGVar5->fields)._detail;
  local_88.fields._startMs = (pGVar5->fields)._startMs;
  local_88.fields._enabled = (pGVar5->fields)._enabled;
  local_88.fields._hotLoop = (pGVar5->fields)._hotLoop;
  local_88.fields._26_6_ = *(undefined6 *)&(pGVar5->fields).field_0x1a;
  local_b0 = 0;
  local_a8 = &local_88;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgProfilePreset);
  System_Collections_Generic_List_AottgProfilePreset____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor);
  a = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson("Data/Info/ProfileIconInfo",(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_Schema_XmlSchema_o *)0x0;
  if (bVar4) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"Icons");
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  local_90 = __this;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar7 = (Il2CppObject *)
             (*((Il2CppClass *)pSVar6->klass)->vtable[27].methodPtr)
                       (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[27].method);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    local_res18 = InterfaceInvoker0_Invoke
                            (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar7)
    ;
    local_a0 = 0;
    local_98 = &local_res18;
    while( true ) {
      if (local_res18 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
      pIVar7 = local_res18;
      if ((char)pvVar8 == '\0') break;
      if (local_res18 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_res18->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        pSVar6 = (System_Xml_Schema_XmlSchema_o *)0x0;
        do {
          if (pIVar3[(longlong)pSVar6].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar9 = pIVar2->vtable + pIVar3[(longlong)pSVar6].offset;
            goto label_181e1a036;
          }
          uVar13 = (short)pSVar6 + 1;
          pSVar6 = (System_Xml_Schema_XmlSchema_o *)(ulonglong)uVar13;
        } while (uVar13 < uVar1);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_res18,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,
                          0);
label_181e1a036:
      pIVar7 = (*pVVar9->methodPtr)(pIVar7,pVVar9->method);
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar10 = (System_String_o *)(*pIVar7->klass->vtable[9].methodPtr)(pIVar7);
      bVar4 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
      if (!bVar4) {
        pSVar11 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Label(pSVar10,(MethodInfo *)0x0);
        value = System_String__Concat_1969b70
                          ("UI/Icons/Profile/",pSVar10,"Icon",(MethodInfo *)0x0);
        uStack_c0 = (void *)0x0;
        pSStack_b8 = (System_String_o *)0x0;
        local_c8 = pSVar10;
        Il2CppCodeGenWriteBarrier((void **)&local_c8,pSVar10);
        uStack_c0 = pSVar11;
        Il2CppCodeGenWriteBarrier((void **)&uStack_c0,pSVar11);
        pSStack_b8 = value;
        Il2CppCodeGenWriteBarrier(&pSStack_b8,value);
        if (__this == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
          ThrowNullReferenceException();
        }
        local_58.fields._area._0_4_ = (undefined4)local_c8;
        local_58.fields._area._4_4_ = local_c8._4_4_;
        local_58.fields._detail._0_4_ = (undefined4)uStack_c0;
        local_58.fields._detail._4_4_ = uStack_c0._4_4_;
        local_58.fields._startMs = (int64_t)pSStack_b8;
        il2cpp_runtime_helper_18000e230(__this,&local_58,MethodInfo_System_Collections_Generic_List_AottgProfilePreset_Add);
      }
    }
    if (local_res18 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res18);
    }
  }
  if (__this == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields)._size < 1) {
    pGVar12 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreset_array,1);
    pSVar11 = "UI/Icons/Profile/Gisketch1Icon";
    pSVar10 = "Gisketch";
    uStack_c0 = (void *)0x0;
    pSStack_b8 = (System_String_o *)0x0;
    local_c8 = "Gisketch1";
    Il2CppCodeGenWriteBarrier((void **)&local_c8,"Gisketch1");
    uStack_c0 = pSVar10;
    Il2CppCodeGenWriteBarrier((void **)&uStack_c0,pSVar10);
    pSStack_b8 = pSVar11;
    Il2CppCodeGenWriteBarrier(&pSStack_b8,pSVar11);
    if (pGVar12 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pGVar12->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pGVar12->m_Items[0].fields.Key = local_c8;
    pGVar12->m_Items[0].fields.Label = uStack_c0;
    pGVar12->m_Items[0].fields.Sprite = pSStack_b8;
    Il2CppCodeGenWriteBarrier((void **)pGVar12->m_Items,(void *)0x0);
  }
  else {
    pGVar12 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
              System_Collections_Generic_List_AottgProfilePreset___ToArray
                        ((System_Collections_Generic_List_T__o *)__this,
                         (MethodInfo_929FE0 *)
                         MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ToArray);
    if (pGVar12 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
  }
  local_res10[0] = (int32_t)pGVar12->max_length;
  pSVar10 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_1969e50("count=",pSVar10,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfilePresetCatalog.Avatars",pSVar10,(MethodInfo *)0x0);
  local_res20 = pGVar12;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_88,(MethodInfo *)0x0);
  return pGVar12;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Banners
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners (const MethodInfo* method);
// 0x181e1a410
// eh: try 0x181e1a5c6..0x181e1a8a5 -> pad 0x183320680 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e1a8a5..0x181e1a8c1 -> pad 0x18022f7f0 cleanup
// eh: try 0x181e1a8c1..0x181e1aa5a -> pad 0x183320680 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1a643: mov rbx, r13
// asm:   0x181e1a71f: nop 
// asm:   0x181e1a8a5: jmp 0x181e1a977
// asm:   0x181e1a8aa: mov r8, qword ptr [rsp + 0x50]
// asm:   0x181e1a8af: cmp qword ptr [r8], 0
// asm:   0x181e1a8b3: je 0x181e1a8c6
// asm:   0x181e1a8b5: xor ecx, ecx
// asm:   0x181e1a8b7: mov r8, qword ptr [r8]
// asm:   0x181e1a8ba: mov rdx, qword ptr [rip + 0x227ea3f]  ; TypeInfo_System_IDisposable
// asm:   0x181e1a8c1: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e1a8c6: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181e1a8cb: test rcx, rcx
// asm:   0x181e1a8ce: jne 0x181e1aa3b
// asm:   0x181e1a8d4: mov r12, qword ptr [rsp + 0x58]
// asm:   0x181e1a8d9: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x181e1a8de: jmp 0x181e1a879
// asm:   0x181e1a9e0: xor edx, edx
// asm:   0x181e1a9e2: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e1a9e7: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e1a9ec: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e1a9f1: test rcx, rcx
// asm:   0x181e1a9f4: jne 0x181e1aa5a
// asm:   0x181e1a9f6: mov rbx, qword ptr [rsp + 0x108]
// asm:   0x181e1aa3b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e1aa5a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318fb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318fb5: push rbp
// asm:   0x183318fb6: sub rsp, 0x20
// asm:   0x183318fba: mov rbp, rdx
// asm:   0x183318fbd: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183318fc4: mov rcx, qword ptr [rax]
// asm:   0x183318fc7: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183318fcb: movabs rax, 0
// asm:   0x183318fd5: add rsp, 0x20
// asm:   0x183318fd9: pop rbp
// asm:   0x183318fda: ret 
// asm:   0x183320680: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320685: push rbp
// asm:   0x183320686: sub rsp, 0x20
// asm:   0x18332068a: mov rbp, rdx
// asm:   0x18332068d: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320694: mov rcx, qword ptr [rax]
// asm:   0x183320697: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18332069b: movabs rax, 0
// asm:   0x1833206a5: add rsp, 0x20
// asm:   0x1833206a9: pop rbp
// asm:   0x1833206aa: ret 

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar5;
  System_Collections_Generic_List_AottgProfilePreset__o *__this;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  Il2CppObject *pIVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *value;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar12;
  ushort uVar13;
  int32_t local_res10 [2];
  Il2CppObject *local_res18;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *local_res20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  System_String_o *pSStack_b8;
  undefined8 local_b0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *local_a8;
  undefined8 local_a0;
  Il2CppObject **local_98;
  System_Collections_Generic_List_AottgProfilePreset__o *local_90;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_88;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  if (Il2CppMethodInitialized_184344cd4 == '\0') {
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
    Il2CppMethodInitialized_184344cd4 = '\x01';
  }
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)0x0;
  local_88.fields._startMs = 0;
  local_88.fields._enabled = false;
  local_88.fields._hotLoop = false;
  local_88.fields._26_6_ = 0;
  local_res18 = (Il2CppObject *)0x0;
  local_res10[0] = 0;
  local_res20 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar5 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_58,"ProfilePresetCatalog.Banners","load",(MethodInfo *)0x0);
  local_88.fields._area = (pGVar5->fields)._area;
  local_88.fields._detail = (pGVar5->fields)._detail;
  local_88.fields._startMs = (pGVar5->fields)._startMs;
  local_88.fields._enabled = (pGVar5->fields)._enabled;
  local_88.fields._hotLoop = (pGVar5->fields)._hotLoop;
  local_88.fields._26_6_ = *(undefined6 *)&(pGVar5->fields).field_0x1a;
  local_b0 = 0;
  local_a8 = &local_88;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgProfilePreset);
  System_Collections_Generic_List_AottgProfilePreset____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor);
  a = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson("Data/Info/BannerInfo",(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar6 = (System_Xml_Schema_XmlSchema_o *)0x0;
  if (bVar4) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"Banners");
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  local_90 = __this;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar7 = (Il2CppObject *)
             (*((Il2CppClass *)pSVar6->klass)->vtable[27].methodPtr)
                       (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[27].method);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    local_res18 = InterfaceInvoker0_Invoke
                            (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar7)
    ;
    local_a0 = 0;
    local_98 = &local_res18;
    while( true ) {
      if (local_res18 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
      pIVar7 = local_res18;
      if ((char)pvVar8 == '\0') break;
      if (local_res18 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_res18->klass;
      uVar1 = (pIVar2->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        pSVar6 = (System_Xml_Schema_XmlSchema_o *)0x0;
        do {
          if (pIVar3[(longlong)pSVar6].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar9 = pIVar2->vtable + pIVar3[(longlong)pSVar6].offset;
            goto label_181e1a746;
          }
          uVar13 = (short)pSVar6 + 1;
          pSVar6 = (System_Xml_Schema_XmlSchema_o *)(ulonglong)uVar13;
        } while (uVar13 < uVar1);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_res18,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,
                          0);
label_181e1a746:
      pIVar7 = (*pVVar9->methodPtr)(pIVar7,pVVar9->method);
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar10 = (System_String_o *)(*pIVar7->klass->vtable[9].methodPtr)(pIVar7);
      bVar4 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
      if (!bVar4) {
        if (pSVar10 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = System_String__Replace_1970e80
                            (pSVar10,"Texture","",(MethodInfo *)0x0);
        pSVar11 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Label(pSVar11,(MethodInfo *)0x0);
        value = System_String__Concat_1969e50("UI/Backgrounds/",pSVar10,(MethodInfo *)0x0);
        uStack_c0 = (void *)0x0;
        pSStack_b8 = (System_String_o *)0x0;
        local_c8 = pSVar10;
        Il2CppCodeGenWriteBarrier((void **)&local_c8,pSVar10);
        uStack_c0 = pSVar11;
        Il2CppCodeGenWriteBarrier((void **)&uStack_c0,pSVar11);
        pSStack_b8 = value;
        Il2CppCodeGenWriteBarrier(&pSStack_b8,value);
        if (__this == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
          ThrowNullReferenceException();
        }
        local_58.fields._area._0_4_ = (undefined4)local_c8;
        local_58.fields._area._4_4_ = local_c8._4_4_;
        local_58.fields._detail._0_4_ = (undefined4)uStack_c0;
        local_58.fields._detail._4_4_ = uStack_c0._4_4_;
        local_58.fields._startMs = (int64_t)pSStack_b8;
        il2cpp_runtime_helper_18000e230(__this,&local_58,MethodInfo_System_Collections_Generic_List_AottgProfilePreset_Add);
      }
    }
    if (local_res18 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res18);
    }
  }
  if (__this == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields)._size < 1) {
    pGVar12 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreset_array,1);
    pSVar11 = "Main Background 2";
    pSVar10 = "UI/Backgrounds/MainBackground2Texture";
    uStack_c0 = (void *)0x0;
    pSStack_b8 = (System_String_o *)0x0;
    local_c8 = "MainBackground2Texture";
    Il2CppCodeGenWriteBarrier((void **)&local_c8,"MainBackground2Texture");
    uStack_c0 = pSVar11;
    Il2CppCodeGenWriteBarrier((void **)&uStack_c0,pSVar11);
    pSStack_b8 = pSVar10;
    Il2CppCodeGenWriteBarrier(&pSStack_b8,pSVar10);
    if (pGVar12 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pGVar12->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pGVar12->m_Items[0].fields.Key = local_c8;
    pGVar12->m_Items[0].fields.Label = uStack_c0;
    pGVar12->m_Items[0].fields.Sprite = pSStack_b8;
    Il2CppCodeGenWriteBarrier((void **)pGVar12->m_Items,(void *)0x0);
  }
  else {
    pGVar12 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
              System_Collections_Generic_List_AottgProfilePreset___ToArray
                        ((System_Collections_Generic_List_T__o *)__this,
                         (MethodInfo_929FE0 *)
                         MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ToArray);
    if (pGVar12 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
  }
  local_res10[0] = (int32_t)pGVar12->max_length;
  pSVar10 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_1969e50("count=",pSVar10,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfilePresetCatalog.Banners",pSVar10,(MethodInfo *)0x0);
  local_res20 = pGVar12;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_88,(MethodInfo *)0x0);
  return pGVar12;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$AvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite (System_String_o* key, const MethodInfo* method);
// 0x181e19c00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e19cb6: mov rsi, rbp

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  System_String_o *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344cd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/");
    Il2CppMethodInitialized_184344cd5 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars((MethodInfo *)0x0);
  pSVar3 = "Gisketch1";
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (!bVar1) {
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (uVar4 = 0; (int)uVar4 < (int)pGVar2->max_length; uVar4 = uVar4 + 1) {
      if ((uint)pGVar2->max_length <= uVar4) goto label_181e19cec;
      bVar1 = System_String__op_Equality(pGVar2->m_Items[(int)uVar4].fields.Key,key,(MethodInfo *)0x0);
      if (bVar1) goto label_181e19cb9;
    }
  }
  key = pSVar3;
  if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar2->max_length != 0)) {
    if ((int)pGVar2->max_length == 0) {
label_181e19cec:
      ThrowIndexOutOfRangeException();
    }
    key = pGVar2->m_Items[0].fields.Key;
  }
label_181e19cb9:
  pSVar3 = System_String__Concat_1969b70("UI/Icons/Profile/",key,"Icon",(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$BannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite (System_String_o* key, const MethodInfo* method);
// 0x181e1a330
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1a3da: mov rsi, rbp

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  System_String_o *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344cd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackground2Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Backgrounds/");
    Il2CppMethodInitialized_184344cd6 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners((MethodInfo *)0x0);
  pSVar3 = "MainBackground2Texture";
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (!bVar1) {
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (uVar4 = 0; (int)uVar4 < (int)pGVar2->max_length; uVar4 = uVar4 + 1) {
      if ((uint)pGVar2->max_length <= uVar4) goto label_181e1a409;
      bVar1 = System_String__op_Equality(pGVar2->m_Items[(int)uVar4].fields.Key,key,(MethodInfo *)0x0);
      if (bVar1) goto label_181e1a3dd;
    }
  }
  key = pSVar3;
  if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar2->max_length != 0)) {
    if ((int)pGVar2->max_length == 0) {
label_181e1a409:
      ThrowIndexOutOfRangeException();
    }
    key = pGVar2->m_Items[0].fields.Key;
  }
label_181e1a3dd:
  pSVar3 = System_String__Concat_1969e50("UI/Backgrounds/",key,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$PublicAvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicAvatarSprite (System_String_o* key, const MethodInfo* method);
// 0x181e1ae30

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicAvatarSprite(System_String_o *key,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  uint uVar3;
  System_String_o *local_res8 [4];
  
  local_res8[0] = (System_String_o *)0x0;
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars((MethodInfo *)0x0);
  local_res8[0] = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  Il2CppCodeGenWriteBarrier(local_res8,local_res8[0]);
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((!bVar1) && (pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0)) {
    for (uVar3 = 0; (int)uVar3 < (int)pGVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pGVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      value = pGVar2->m_Items[(int)uVar3].fields.Sprite;
      bVar1 = System_String__op_Equality(pGVar2->m_Items[(int)uVar3].fields.Key,key,(MethodInfo *)0x0);
      if (bVar1) {
        local_res8[0] = value;
        Il2CppCodeGenWriteBarrier(local_res8,value);
        return local_res8[0];
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$PublicBannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicBannerSprite (System_String_o* key, const MethodInfo* method);
// 0x181e1af00

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicBannerSprite(System_String_o *key,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  uint uVar3;
  System_String_o *local_res8 [4];
  
  local_res8[0] = (System_String_o *)0x0;
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners((MethodInfo *)0x0);
  local_res8[0] = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  Il2CppCodeGenWriteBarrier(local_res8,local_res8[0]);
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((!bVar1) && (pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0)) {
    for (uVar3 = 0; (int)uVar3 < (int)pGVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pGVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      value = pGVar2->m_Items[(int)uVar3].fields.Sprite;
      bVar1 = System_String__op_Equality(pGVar2->m_Items[(int)uVar3].fields.Key,key,(MethodInfo *)0x0);
      if (bVar1) {
        local_res8[0] = value;
        Il2CppCodeGenWriteBarrier(local_res8,value);
        return local_res8[0];
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstAvatarKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey (const MethodInfo* method);
// 0x181e1aa60

System_String_o * Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar1;
  
  if (Il2CppMethodInitialized_184344cd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
    Il2CppMethodInitialized_184344cd7 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars((MethodInfo *)0x0);
  if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar1->max_length != 0)) {
    if ((int)pGVar1->max_length != 0) {
      return pGVar1->m_Items[0].fields.Key;
    }
    ThrowIndexOutOfRangeException();
  }
  return "Gisketch1";
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstBannerKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey (const MethodInfo* method);
// 0x181e1aac0

System_String_o * Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar1;
  
  if (Il2CppMethodInitialized_184344cd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackground2Texture");
    Il2CppMethodInitialized_184344cd8 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners((MethodInfo *)0x0);
  if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar1->max_length != 0)) {
    if ((int)pGVar1->max_length != 0) {
      return pGVar1->m_Items[0].fields.Key;
    }
    ThrowIndexOutOfRangeException();
  }
  return "MainBackground2Texture";
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$TryPresetSprite
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite (System_String_o* key, Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o** sprite, const MethodInfo* method);
// 0x181e1afd0

bool Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite
               (System_String_o *key,Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,
               System_String_o **sprite,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  uint uVar3;
  
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  *sprite = pSVar1;
  Il2CppCodeGenWriteBarrier(sprite,pSVar1);
  bVar2 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((!bVar2) && (presets != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0)) {
    for (uVar3 = 0; (int)uVar3 < (int)presets->max_length; uVar3 = uVar3 + 1) {
      if ((uint)presets->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar1 = presets->m_Items[(int)uVar3].fields.Sprite;
      bVar2 = System_String__op_Equality(presets->m_Items[(int)uVar3].fields.Key,key,(MethodInfo *)0x0);
      if (bVar2) {
        *sprite = pSVar1;
        Il2CppCodeGenWriteBarrier(sprite,pSVar1);
        return true;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$AllowedKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey (System_String_o* key, Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o* fallback, const MethodInfo* method);
// 0x181e19b70

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey
          (System_String_o *key,Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,
          System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1) {
    if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      return fallback;
    }
  }
  else {
    if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (uVar2 = 0; (int)uVar2 < (int)presets->max_length; uVar2 = uVar2 + 1) {
      if ((uint)presets->max_length <= uVar2) goto label_181e19bf5;
      bVar1 = System_String__op_Equality(presets->m_Items[(int)uVar2].fields.Key,key,(MethodInfo *)0x0);
      if (bVar1) {
        return key;
      }
    }
  }
  if (presets->max_length != 0) {
    if ((int)presets->max_length == 0) {
label_181e19bf5:
      ThrowIndexOutOfRangeException();
    }
    fallback = presets->m_Items[0].fields.Key;
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstKey (Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o* fallback, const MethodInfo* method);
// 0x181e1ab20

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstKey
          (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,System_String_o *fallback,
          MethodInfo *method)

{
  if ((presets != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (presets->max_length != 0)) {
    if ((int)presets->max_length != 0) {
      return presets->m_Items[0].fields.Key;
    }
    ThrowIndexOutOfRangeException();
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$LoadJson
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson (System_String_o* path, const MethodInfo* method);
// 0x181e1abd0
// eh: try 0x181e1aca0..0x181e1ae1d -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1acdc: mov rsi, qword ptr [rip + 0x227840d]  ; " bytes="
// asm:   0x181e1ace3: mov rdi, qword ptr [rip + 0x22c343e]  ; "ProfilePresetCatalog.LoadJson"
// asm:   0x181e1adda: xor edx, edx
// asm:   0x181e1addc: lea rcx, [rsp + 0x48]
// asm:   0x181e1ade1: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e1ade6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e1adeb: test rcx, rcx
// asm:   0x181e1adee: jne 0x181e1ae1d
// asm:   0x181e1adf0: mov rbx, qword ptr [rsp + 0xa0]
// asm:   0x181e1ae1d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson(System_String_o *path,MethodInfo *method)

{
  System_String_o *area;
  bool bVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar2;
  UnityEngine_Object_o *x;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  int32_t local_res8 [2];
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_40;
  
  if (Il2CppMethodInitialized_184344cd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&" bytes=");
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePresetCatalog.LoadJson");
    Il2CppMethodInitialized_184344cd9 = '\x01';
  }
  local_40.fields._area = (System_String_o *)0x0;
  local_40.fields._detail = (System_String_o *)0x0;
  local_40.fields._startMs._0_4_ = 0;
  local_40.fields._startMs._4_2_ = 0;
  local_40.fields._startMs._6_2_ = 0;
  local_40.fields._enabled = false;
  local_40.fields._hotLoop = false;
  local_40.fields._26_6_ = 0;
  local_res8[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar2 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_60,"ProfilePresetCatalog.LoadJson",path,(MethodInfo *)0x0);
  local_40.fields._area = (pGVar2->fields)._area;
  local_40.fields._detail = (pGVar2->fields)._detail;
  local_40.fields._startMs = (pGVar2->fields)._startMs;
  local_40.fields._enabled = (pGVar2->fields)._enabled;
  local_40.fields._hotLoop = (pGVar2->fields)._hotLoop;
  local_40.fields._26_6_ = *(undefined6 *)&(pGVar2->fields).field_0x1a;
  local_60.fields._area = (System_String_o *)0x0;
  local_60.fields._detail = (System_String_o *)&local_40;
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (path,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  area = "ProfilePresetCatalog.LoadJson";
  pSVar4 = " bytes=";
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
      if (pSVar3 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_res8[0] = (pSVar3->fields)._stringLength;
      goto label_181e1acec;
    }
  }
  local_res8[0] = 0;
label_181e1acec:
  pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_1969b70(path,pSVar4,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    pSVar5 = SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
  }
  else {
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_40,(MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Label (System_String_o* key, const MethodInfo* method);
// 0x181e1ab50

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Label(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344cda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Main Background ");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackground");
    Il2CppMethodInitialized_184344cda = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (key != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace_1970e80(key,"MainBackground","Main Background ",(MethodInfo *)0x0)
    ;
    return pSVar2;
  }
  ThrowNullReferenceException();
}


