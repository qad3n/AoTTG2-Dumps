// Type: ApplicationManagers.FullscreenHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/ApplicationManagers/FullscreenHandler.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/FullscreenHandler.cs
// --------------------------------

// ApplicationManagers.FullscreenHandler$$Init
// il2cpp: void ApplicationManagers_FullscreenHandler__Init (const MethodInfo* method);
// 0x5e08c90

void ApplicationManagers_FullscreenHandler__Init(MethodInfo *method)

{
  ApplicationManagers_FullscreenHandler_o *pAVar1;
  
  if (Il2CppMethodInitialized_07548426 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_FullscreenHandler);
    Il2CppMethodInitialized_07548426 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance
                      ,(MethodInfo_3680650 *)
                       MethodInfo_Utility_SingletonFactory_CreateSingleton_FullscreenHandler);
  TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance);
  return;
}


// ApplicationManagers.FullscreenHandler$$Apply
// il2cpp: void ApplicationManagers_FullscreenHandler__Apply (int32_t resolutionIndex, int32_t fullscreenLevel, const MethodInfo* method);
// 0x5e14f60

void ApplicationManagers_FullscreenHandler__Apply
               (int32_t resolutionIndex,int32_t fullscreenLevel,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_Resolution__o *__this;
  MethodInfo *method_00;
  ApplicationManagers_FullscreenHandler_c *method_01;
  UnityEngine_Resolution_Fields UVar2;
  
  method_00 = (MethodInfo *)(ulong)(uint)resolutionIndex;
  if (Il2CppMethodInitialized_07548427 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Resolution_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    Il2CppMethodInitialized_07548427 = '\x01';
  }
  bVar1 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
    }
    UVar2 = (UnityEngine_Resolution_Fields)
            Utility_MobileFullscreenUtility__ApplyResolution(resolutionIndex,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    }
    (TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_resolution).fields = UVar2;
    return;
  }
  method_01 = TypeInfo_ApplicationManagers_FullscreenHandler;
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  __this = ApplicationManagers_FullscreenHandler__GetResolutions((MethodInfo *)method_01);
  if (__this == (System_Collections_Generic_List_Resolution__o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar2 = (UnityEngine_Resolution_Fields)
          System_Collections_Generic_List_Resolution___get_Item
                    (__this,resolutionIndex,
                     (MethodInfo_3991D70 *)MethodInfo_System_Collections_Generic_List_Resolution_get_Item);
  (TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_resolution).fields = UVar2;
  ApplicationManagers_FullscreenHandler__SetFullscreen(fullscreenLevel,method_00);
  return;
}


// ApplicationManagers.FullscreenHandler$$SanitizeResolutionSetting
// il2cpp: int32_t ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting (int32_t resolutionIndex, const MethodInfo* method);
// 0x5e15700

int32_t ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting
                  (int32_t resolutionIndex,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_Resolution__o *pSVar2;
  int32_t iVar3;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07548428 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Resolution_get_Count);
    Il2CppMethodInitialized_07548428 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler;
  }
  TypeInfo_ApplicationManagers_FullscreenHandler = (ApplicationManagers_FullscreenHandler_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar2 = ApplicationManagers_FullscreenHandler__GetResolutions((MethodInfo *)klass);
  }
  else {
    pSVar2 = ApplicationManagers_FullscreenHandler__GetResolutions((MethodInfo *)klass);
  }
  if (pSVar2 == (System_Collections_Generic_List_Resolution__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar3 = 0;
  if (0 < resolutionIndex) {
    iVar3 = resolutionIndex;
  }
  if ((pSVar2->fields)._size <= resolutionIndex) {
    iVar3 = 0;
  }
  return iVar3;
}


// ApplicationManagers.FullscreenHandler$$GetResolutionOptions
// il2cpp: System_String_array* ApplicationManagers_FullscreenHandler__GetResolutionOptions (const MethodInfo* method);
// 0x5e15790
// eh: try 0x5e158ff..0x5e15a73 -> pad 0x5e15a8b (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e15aa3..0x5e15aa8 -> pad 0x5e15acd cleanup
// eh: try 0x5e15ad0..0x5e15ada -> pad 0x5e15ae2 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e15a73: jmp 0x5e15a8b
// asm:   0x5e15a75: jmp 0x5e15a8b
// asm:   0x5e15a77: jmp 0x5e15a8b
// asm:   0x5e15a79: jmp 0x5e15a8b
// asm:   0x5e15a7b: jmp 0x5e15a8b
// asm:   0x5e15a7d: jmp 0x5e15a8b
// asm:   0x5e15a7f: jmp 0x5e15a8b
// asm:   0x5e15a81: jmp 0x5e15a8b
// asm:   0x5e15a83: jmp 0x5e15a8b
// asm:   0x5e15a85: jmp 0x5e15a8b
// asm:   0x5e15a87: jmp 0x5e15a8b
// asm:   0x5e15a89: jmp 0x5e15a8b
// asm:   0x5e15a8b: mov r14, rax
// asm:   0x5e15a8e: cmp edx, 1
// asm:   0x5e15a91: jne 0x5e15ad0
// asm:   0x5e15a93: mov rdi, r14
// asm:   0x5e15a96: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e15a9b: mov rbx, qword ptr [rax]
// asm:   0x5e15a9e: mov qword ptr [rsp + 0x48], rbx
// asm:   0x5e15aa3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e15aa8: lea rax, [rip + 0x1478e51]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_Dispose
// asm:   0x5e15aaf: mov rsi, qword ptr [rax]
// asm:   0x5e15ab2: lea rdi, [rsp + 0x20]
// asm:   0x5e15ab7: call 0x4d4e2a0  ; System_Collections_Generic_List_Enumerator_Resolution___Dispose()
// asm:   0x5e15abc: test rbx, rbx
// asm:   0x5e15abf: je 0x5e159e7
// asm:   0x5e15ac5: mov rdi, rbx
// asm:   0x5e15ac8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e15acd: mov r14, rax
// asm:   0x5e15ad0: lea rdi, [rsp + 0x48]
// asm:   0x5e15ad5: call 0x2fe0410  ; il2cpp_runtime_helper_02fe0410()
// asm:   0x5e15ada: mov rdi, r14
// asm:   0x5e15add: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e15ae2: mov rdi, rax
// asm:   0x5e15ae5: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array * ApplicationManagers_FullscreenHandler__GetResolutionOptions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_Resolution__o *__this_00;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  ApplicationManagers_FullscreenHandler_c *method_00;
  int32_t local_8c;
  Il2CppObject *local_88;
  UnityEngine_RefreshRate_Fields UStack_80;
  undefined1 local_78 [8];
  undefined1 *puStack_70;
  Il2CppObject *local_68;
  UnityEngine_RefreshRate_Fields UStack_60;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  UnityEngine_RefreshRate_Fields UStack_38;
  
  if (Il2CppMethodInitialized_07548429 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Resolution_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&" x ");
    Il2CppMethodInitialized_07548429 = '\x01';
  }
  local_68 = (Il2CppObject *)0x0;
  UStack_60.numerator = 0;
  UStack_60.denominator = 0;
  local_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  local_88 = (Il2CppObject *)0x0;
  UStack_80.numerator = 0;
  UStack_80.denominator = 0;
  local_8c = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  method_00 = TypeInfo_ApplicationManagers_FullscreenHandler;
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  __this_00 = ApplicationManagers_FullscreenHandler__GetResolutions((MethodInfo *)method_00);
  if (__this_00 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    System_Collections_Generic_List_Resolution___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_00,
               (MethodInfo_3992F90 *)MethodInfo_System_Collections_Generic_List_Resolution_GetEnumerator);
    local_68 = local_40;
    UStack_60 = UStack_38;
    local_78 = (undefined1  [8])local_50._0_8_;
    puStack_70 = (undefined1 *)local_50._8_8_;
    local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_50._8_8_ = local_78;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
      bVar4 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
                         (MethodInfo_4C4E2B0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_MoveNext);
      if (bVar4) {
        local_88 = local_68;
        UStack_80 = UStack_60;
        local_8c = UnityEngine_Resolution__get_width((UnityEngine_Resolution_o *)&local_88,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString(&local_8c,(MethodInfo *)0x0);
        local_8c = UnityEngine_Resolution__get_height((UnityEngine_Resolution_o *)&local_88,(MethodInfo *)0x0)
        ;
        pSVar6 = System_Int32__ToString(&local_8c,(MethodInfo *)0x0);
        System_String__Concat_5301f10(pSVar5," x ",pSVar6,(MethodInfo *)0x0);
label_05e15a6e:
        ThrowNullReferenceException();
      }
    }
    else {
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
                           (MethodInfo_4C4E2B0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_MoveNext);
        if (!bVar4) break;
        local_88 = local_68;
        UStack_80 = UStack_60;
        local_8c = UnityEngine_Resolution__get_width((UnityEngine_Resolution_o *)&local_88,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString(&local_8c,(MethodInfo *)0x0);
        local_8c = UnityEngine_Resolution__get_height((UnityEngine_Resolution_o *)&local_88,(MethodInfo *)0x0)
        ;
        pSVar6 = System_Int32__ToString(&local_8c,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_5301f10(pSVar5," x ",pSVar6,(MethodInfo *)0x0);
        pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this->fields)._items;
        if (pSVar7 == (System_String_array *)0x0) goto label_05e15a6e;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_Resolution___Dispose
              ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
               (MethodInfo_4C4E2A0 *)MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_Dispose)
    ;
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar7;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.FullscreenHandler$$GetResolutions
// il2cpp: System_Collections_Generic_List_Resolution__o* ApplicationManagers_FullscreenHandler__GetResolutions (const MethodInfo* method);
// 0x5e15060
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e15399: nop dword ptr [rax]

System_Collections_Generic_List_Resolution__o *
ApplicationManagers_FullscreenHandler__GetResolutions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Resolution_array *pUVar3;
  UnityEngine_Resolution_o item;
  UnityEngine_Resolution_o item_00;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_Resolution__o *pSVar6;
  System_Collections_Generic_HashSet_string__o *__this;
  ulong uVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  int iVar10;
  UnityEngine_Resolution_o *pUVar11;
  ulong uVar12;
  int32_t local_74;
  UnityEngine_Resolution_array *local_70;
  UnityEngine_Resolution_Fields local_68;
  System_Collections_Generic_List_Resolution__o *local_50;
  UnityEngine_Resolution_Fields local_48;
  
  if (Il2CppMethodInitialized_0754842a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Resolution_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Resolution_Reverse)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Resolution_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Resolution_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Resolution);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_0754842a = '\x01';
  }
  local_68.m_Width = 0;
  local_68.m_Height = 0;
  local_68.m_RefreshRate.fields.numerator = 0;
  local_68.m_RefreshRate.fields.denominator = 0;
  local_74 = 0;
  bVar5 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
    }
    pSVar6 = Utility_MobileFullscreenUtility__GetResolutions((MethodInfo *)0x0);
    return pSVar6;
  }
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Resolution);
  System_Collections_Generic_List_Resolution____ctor
            (pSVar6,(MethodInfo_3991760 *)MethodInfo_System_Collections_Generic_List_Resolution_ctor);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  local_70 = UnityEngine_Screen__get_resolutions((MethodInfo *)0x0);
  if (local_70 != (UnityEngine_Resolution_array *)0x0) {
    local_50 = pSVar6;
    if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
      if (0 < (int)local_70->max_length) {
        local_68.m_Width = local_70->m_Items[0].fields.m_Width;
        local_68.m_Height = local_70->m_Items[0].fields.m_Height;
        local_68.m_RefreshRate.fields = local_70->m_Items[0].fields.m_RefreshRate.fields;
        local_74 = UnityEngine_Resolution__get_width((UnityEngine_Resolution_o *)&local_68,(MethodInfo *)0x0);
        pSVar8 = System_Int32__ToString(&local_74,(MethodInfo *)0x0);
        local_74 = UnityEngine_Resolution__get_height((UnityEngine_Resolution_o *)&local_68,(MethodInfo *)0x0)
        ;
        pSVar9 = System_Int32__ToString(&local_74,(MethodInfo *)0x0);
        System_String__Concat_5301f10(pSVar8,",",pSVar9,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
    }
    else {
      iVar10 = (int)local_70->max_length;
      uVar7 = local_70->max_length & 0xffffffff;
      if (pSVar6 == (System_Collections_Generic_List_Resolution__o *)0x0) {
        if (iVar10 < 1) goto label_05e154fc;
        pUVar11 = local_70->m_Items;
        uVar12 = 0;
        do {
          if (uVar7 <= uVar12) goto label_05e154f7;
          local_68.m_Width = (pUVar11->fields).m_Width;
          local_68.m_Height = (pUVar11->fields).m_Height;
          local_68.m_RefreshRate.fields = (pUVar11->fields).m_RefreshRate.fields;
          local_74 = UnityEngine_Resolution__get_width
                               ((UnityEngine_Resolution_o *)&local_68,(MethodInfo *)0x0);
          pSVar8 = System_Int32__ToString(&local_74,(MethodInfo *)0x0);
          local_74 = UnityEngine_Resolution__get_height
                               ((UnityEngine_Resolution_o *)&local_68,(MethodInfo *)0x0);
          pSVar9 = System_Int32__ToString(&local_74,(MethodInfo *)0x0);
          pSVar8 = System_String__Concat_5301f10(pSVar8,",",pSVar9,(MethodInfo *)0x0);
          bVar5 = System_Collections_Generic_HashSet_object___Contains
                            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar8,
                             (MethodInfo_4FB3720 *)
                             MethodInfo_System_Collections_Generic_HashSet_string_Contains);
          if (!bVar5) goto label_05e154fc;
          uVar12 = uVar12 + 1;
          uVar2 = (uint)local_70->max_length;
          uVar7 = (ulong)uVar2;
          pUVar11 = pUVar11 + 1;
        } while ((long)uVar12 < (long)(int)uVar2);
      }
      else if (0 < iVar10) {
        pUVar11 = local_70->m_Items;
        uVar12 = 0;
        do {
          if (uVar7 <= uVar12) {
label_05e154f7:
            ThrowIndexOutOfRangeException();
          }
          local_68.m_Width = (pUVar11->fields).m_Width;
          local_68.m_Height = (pUVar11->fields).m_Height;
          local_68.m_RefreshRate.fields = (pUVar11->fields).m_RefreshRate.fields;
          local_74 = UnityEngine_Resolution__get_width
                               ((UnityEngine_Resolution_o *)&local_68,(MethodInfo *)0x0);
          pSVar8 = System_Int32__ToString(&local_74,(MethodInfo *)0x0);
          local_74 = UnityEngine_Resolution__get_height
                               ((UnityEngine_Resolution_o *)&local_68,(MethodInfo *)0x0);
          pSVar9 = System_Int32__ToString(&local_74,(MethodInfo *)0x0);
          pSVar8 = System_String__Concat_5301f10(pSVar8,",",pSVar9,(MethodInfo *)0x0);
          bVar5 = System_Collections_Generic_HashSet_object___Contains
                            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar8,
                             (MethodInfo_4FB3720 *)
                             MethodInfo_System_Collections_Generic_HashSet_string_Contains);
          pMVar4 = MethodInfo_System_Collections_Generic_List_Resolution_Add;
          if (!bVar5) {
            item.fields.m_RefreshRate.fields = local_68.m_RefreshRate.fields;
            item.fields.m_Width = local_68.m_Width;
            item.fields.m_Height = local_68.m_Height;
            piVar1 = &(local_50->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (local_50->fields)._items;
            if (pUVar3 == (UnityEngine_Resolution_array *)0x0) goto label_05e154fc;
            uVar2 = (local_50->fields)._size;
            if (uVar2 < (uint)pUVar3->max_length) {
              (local_50->fields)._size = uVar2 + 1;
              pUVar3->m_Items[(int)uVar2].fields.m_Width = local_68.m_Width;
              pUVar3->m_Items[(int)uVar2].fields.m_Height = local_68.m_Height;
              pUVar3->m_Items[(int)uVar2].fields.m_RefreshRate.fields = local_68.m_RefreshRate.fields;
            }
            else {
              System_Collections_Generic_List_Resolution___AddWithResize
                        (local_50,item,(MethodInfo_39920B0 *)pMVar4->klass->rgctx_data[0xe].method);
            }
            System_Collections_Generic_HashSet_object___Add
                      ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar8,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
          }
          uVar12 = uVar12 + 1;
          uVar2 = (uint)local_70->max_length;
          uVar7 = (ulong)uVar2;
          pUVar11 = pUVar11 + 1;
        } while ((long)uVar12 < (long)(int)uVar2);
      }
    }
    pSVar6 = local_50;
    if (local_50 != (System_Collections_Generic_List_Resolution__o *)0x0) {
      System_Collections_Generic_List_Resolution___Reverse
                (local_50,(MethodInfo_39941A0 *)MethodInfo_System_Collections_Generic_List_Resolution_Reverse)
      ;
      if ((pSVar6->fields)._size == 0) {
        local_48.m_Width = 0;
        local_48.m_Height = 0;
        local_48.m_RefreshRate.fields.numerator = 0;
        local_48.m_RefreshRate.fields.denominator = 0;
        UnityEngine_Resolution__set_width((UnityEngine_Resolution_o *)&local_48,800,(MethodInfo *)0x0);
        pSVar6 = local_50;
        UnityEngine_Resolution__set_height((UnityEngine_Resolution_o *)&local_48,600,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_Resolution_Add;
        item_00.fields.m_RefreshRate.fields = local_48.m_RefreshRate.fields;
        item_00.fields.m_Width = local_48.m_Width;
        item_00.fields.m_Height = local_48.m_Height;
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (pSVar6->fields)._items;
        if (pUVar3 == (UnityEngine_Resolution_array *)0x0) goto label_05e154fc;
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2].fields.m_Width = local_48.m_Width;
          pUVar3->m_Items[(int)uVar2].fields.m_Height = local_48.m_Height;
          pUVar3->m_Items[(int)uVar2].fields.m_RefreshRate.fields = local_48.m_RefreshRate.fields;
        }
        else {
          System_Collections_Generic_List_Resolution___AddWithResize
                    (pSVar6,item_00,(MethodInfo_39920B0 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
      return pSVar6;
    }
  }
label_05e154fc:
  ThrowNullReferenceException();
}


// ApplicationManagers.FullscreenHandler$$SetFullscreen
// il2cpp: void ApplicationManagers_FullscreenHandler__SetFullscreen (int32_t fullscreen, const MethodInfo* method);
// 0x5e15510

void ApplicationManagers_FullscreenHandler__SetFullscreen(int32_t fullscreen,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  uint uVar5;
  uint fullscreenMode;
  
  if (Il2CppMethodInitialized_0754842b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_0754842b = '\x01';
  }
  fullscreenMode = 3;
  if (fullscreen != 0) {
    fullscreenMode = (uint)(fullscreen == 1);
  }
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  iVar4 = UnityEngine_Resolution__get_width
                    (&TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_resolution,
                     (MethodInfo *)0x0);
  if (iVar3 == iVar4) {
    iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    }
    iVar4 = UnityEngine_Resolution__get_height
                      (&TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_resolution,
                       (MethodInfo *)0x0);
    if (iVar3 == iVar4) {
      uVar5 = UnityEngine_Screen__get_fullScreenMode((MethodInfo *)0x0);
      if (uVar5 == fullscreenMode) goto label_05e15636;
    }
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  iVar3 = UnityEngine_Resolution__get_width
                    (&TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_resolution,
                     (MethodInfo *)0x0);
  iVar4 = UnityEngine_Resolution__get_height
                    (&TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_resolution,
                     (MethodInfo *)0x0);
  UnityEngine_Screen__SetResolution_68cf9d0(iVar3,iVar4,fullscreenMode,(MethodInfo *)0x0);
label_05e15636:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar1 == (UI_BaseMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_BaseMenu__ApplyScale
              (pUVar1,TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ApplicationManagers.FullscreenHandler$$GetTargetFrameRate
// il2cpp: int32_t ApplicationManagers_FullscreenHandler__GetTargetFrameRate (int32_t fpsCap, const MethodInfo* method);
// 0x5e15af0

int32_t ApplicationManagers_FullscreenHandler__GetTargetFrameRate(int32_t fpsCap,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ApplicationManagers_FullscreenHandler_c *method_00;
  
  if (Il2CppMethodInitialized_0754842c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    Il2CppMethodInitialized_0754842c = '\x01';
  }
  if (fpsCap < 1) {
    bVar1 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
    fpsCap = -1;
    if (bVar1) {
      if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
        method_00 = TypeInfo_ApplicationManagers_FullscreenHandler;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
        iVar2 = ApplicationManagers_FullscreenHandler__GetMaxRefreshRate((MethodInfo *)method_00);
        return iVar2;
      }
      iVar2 = ApplicationManagers_FullscreenHandler__GetMaxRefreshRate
                        ((MethodInfo *)TypeInfo_ApplicationManagers_FullscreenHandler);
      return iVar2;
    }
  }
  return fpsCap;
}


// ApplicationManagers.FullscreenHandler$$GetMaxRefreshRate
// il2cpp: int32_t ApplicationManagers_FullscreenHandler__GetMaxRefreshRate (const MethodInfo* method);
// 0x5e15b50

int32_t ApplicationManagers_FullscreenHandler__GetMaxRefreshRate(MethodInfo *method)

{
  uint uVar1;
  double dVar2;
  UnityEngine_RefreshRate_o UVar3;
  UnityEngine_Resolution_array *pUVar4;
  ulong uVar5;
  ulong uVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Resolution_o *pUVar7;
  double local_68;
  Il2CppMethodPointer local_60;
  Il2CppMethodPointer local_58;
  UnityEngine_RefreshRate_Fields UStack_50;
  UnityEngine_Resolution_o local_40;
  
  if (Il2CppMethodInitialized_0754842d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0754842d = '\x01';
  }
  local_58 = (Il2CppMethodPointer)0x0;
  UStack_50.numerator = 0;
  UStack_50.denominator = 0;
  local_40 = UnityEngine_Screen__get_currentResolution((MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  UVar3 = UnityEngine_Resolution__get_refreshRateRatio(&local_40,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Screen__get_resolutions((MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Resolution_array *)0x0) {
    ThrowNullReferenceException();
  }
  local_68 = (double)UVar3.fields.numerator / (double)((ulong)UVar3.fields >> 0x20);
  if (0 < (int)pUVar4->max_length) {
    uVar5 = pUVar4->max_length & 0xffffffff;
    pUVar7 = pUVar4->m_Items;
    uVar6 = 0;
    do {
      if (uVar5 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      local_58 = *(Il2CppMethodPointer *)&pUVar7->fields;
      UStack_50 = (pUVar7->fields).m_RefreshRate.fields;
      method_00 = (MethodInfo *)0x0;
      UVar3 = UnityEngine_Resolution__get_refreshRateRatio
                        ((UnityEngine_Resolution_o *)&local_58,(MethodInfo *)0x0);
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      local_68 = System_Math__Max_54bace0
                           (local_68,(double)UVar3.fields.numerator / (double)((ulong)UVar3.fields >> 0x20),
                            (MethodInfo *)0x0);
      uVar6 = uVar6 + 1;
      uVar1 = (uint)pUVar4->max_length;
      uVar5 = (ulong)uVar1;
      pUVar7 = pUVar7 + 1;
    } while ((long)uVar6 < (long)(int)uVar1);
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  method_01 = (MethodInfo *)&local_60;
  dVar2 = modf(local_68,(double *)method_01,method_00);
  if (0.0 <= local_68) {
    if ((dVar2 != 0.5) || (NAN(dVar2))) {
      local_60 = (Il2CppMethodPointer)floor(local_68 + 0.5,method_01);
    }
    else if (((long)(double)local_60 & 1U) != 0) {
      local_60 = (Il2CppMethodPointer)((double)local_60 + 1.0);
    }
  }
  else if ((dVar2 != -0.5) || (NAN(dVar2))) {
    local_60 = (Il2CppMethodPointer)ceil(local_68 + -0.5,method_01);
  }
  else if (((long)(double)local_60 & 1U) != 0) {
    local_60 = (Il2CppMethodPointer)((double)local_60 + -1.0);
  }
  return (int)(double)local_60;
}


// ApplicationManagers.FullscreenHandler$$UpdateFPS
// il2cpp: void ApplicationManagers_FullscreenHandler__UpdateFPS (const MethodInfo* method);
// 0x5e15d40
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e15e28: cmp byte ptr [rip + 0x17325fd], 0
// asm:   0x5e15e2f: je 0x5e15eef
// asm:   0x5e15e35: test r15d, r15d
// asm:   0x5e15e3e: jmp 0x5e15f07
// asm:   0x5e15e8a: cmp byte ptr [rip + 0x173259b], 0
// asm:   0x5e15e97: test ebx, ebx
// asm:   0x5e15e99: jg 0x5e15f9a
// asm:   0x5e15e9f: jmp 0x5e15f72
// asm:   0x5e15ec0: mov edi, ebx
// asm:   0x5e15f47: jmp 0x5e15fad
// asm:   0x5e15f98: mov ebx, eax

void ApplicationManagers_FullscreenHandler__UpdateFPS(MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  Settings_GraphicsSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  bool bVar6;
  int value;
  int val1;
  ApplicationManagers_FullscreenHandler_c *pAVar7;
  
  if (Il2CppMethodInitialized_0754842e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754842e = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (((pSVar3 == (Settings_GraphicsSettings_o *)0x0) ||
      (pSVar4 = (pSVar3->fields).FPSCap, pSVar4 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar5 = (pSVar3->fields).MenuFPSCap, pSVar5 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  val1 = (pSVar4->fields)._value;
  value = (pSVar5->fields)._value;
  iVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName;
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    if (TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused != false) goto label_05e15e15;
label_05e15e5b:
    if (iVar1 - 4U < 0xfffffffe) {
      if (value < 1) goto label_05e15ed3;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      val1 = value;
    }
    else {
      if (val1 < 1) {
label_05e15ed3:
        val1 = 0x3c;
        goto label_05e15f9a;
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
    }
    val1 = System_Math__Min_54baeb0(val1,0x3c,(MethodInfo *)0x0);
  }
  else {
    if (TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused == false) goto label_05e15e5b;
label_05e15e15:
    uVar2 = (TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor;
    if (iVar1 - 4U < 0xfffffffe) {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
      }
      if (Il2CppMethodInitialized_0754842c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
        Il2CppMethodInitialized_0754842c = '\x01';
      }
      if (value < 1) {
        bVar6 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
        value = -1;
        if (bVar6) {
          pAVar7 = TypeInfo_ApplicationManagers_FullscreenHandler;
          if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
          }
          value = ApplicationManagers_FullscreenHandler__GetMaxRefreshRate((MethodInfo *)pAVar7);
        }
      }
      uVar2 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05e15fab;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    }
    if (Il2CppMethodInitialized_0754842c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
      Il2CppMethodInitialized_0754842c = '\x01';
    }
    if (val1 < 1) {
      bVar6 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
      val1 = -1;
      if (bVar6) {
        pAVar7 = TypeInfo_ApplicationManagers_FullscreenHandler;
        if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
        }
        val1 = ApplicationManagers_FullscreenHandler__GetMaxRefreshRate((MethodInfo *)pAVar7);
      }
    }
  }
label_05e15f9a:
  uVar2 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  value = val1;
joined_r0x05e15fab:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  UnityEngine_Application__set_targetFrameRate(value,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.FullscreenHandler$$UpdateSound
// il2cpp: void ApplicationManagers_FullscreenHandler__UpdateSound (const MethodInfo* method);
// 0x5e15fd0

void ApplicationManagers_FullscreenHandler__UpdateSound(MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  ApplicationManagers_FullscreenHandler_c *method_00;
  ApplicationManagers_VoiceChatManager_c *method_01;
  float value;
  
  if (Il2CppMethodInitialized_0754842f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_0754842f = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).MuteMinimized, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_05e16167;
  if ((pSVar2->fields)._value == false) {
    pSVar3 = (pSVar1->fields).Volume;
    if (pSVar3 == (Settings_FloatSetting_o *)0x0) goto label_05e16167;
    method_00 = (ApplicationManagers_FullscreenHandler_c *)0x0;
    UnityEngine_AudioListener__set_volume((pSVar3->fields)._value,(MethodInfo *)0x0);
    TypeInfo_ApplicationManagers_MusicManager->static_fields->_muted = false;
    goto label_05e16132;
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    if (TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused == false) goto label_05e160f3;
label_05e16080:
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
       (pSVar3 = (pSVar1->fields).Volume, pSVar3 == (Settings_FloatSetting_o *)0x0)) {
label_05e16167:
      ThrowNullReferenceException();
    }
    value = (pSVar3->fields)._value;
  }
  else {
    if (TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused != false) goto label_05e16080;
label_05e160f3:
    value = 0.0;
  }
  UnityEngine_AudioListener__set_volume(value,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  method_00 = TypeInfo_ApplicationManagers_FullscreenHandler;
  TypeInfo_ApplicationManagers_MusicManager->static_fields->_muted =
       (bool)(TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused ^ 1);
label_05e16132:
  ApplicationManagers_MusicManager__ApplySoundSettings((MethodInfo *)method_00);
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    method_01 = TypeInfo_ApplicationManagers_VoiceChatManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)method_01);
    return;
  }
  ApplicationManagers_VoiceChatManager__ApplySoundSettings
            ((MethodInfo *)TypeInfo_ApplicationManagers_VoiceChatManager);
  return;
}


// ApplicationManagers.FullscreenHandler$$OnApplicationFocus
// il2cpp: void ApplicationManagers_FullscreenHandler__OnApplicationFocus (ApplicationManagers_FullscreenHandler_o* __this, bool hasFocus, const MethodInfo* method);
// 0x5e165a0

void ApplicationManagers_FullscreenHandler__OnApplicationFocus
               (ApplicationManagers_FullscreenHandler_o *__this,bool hasFocus,MethodInfo *method)

{
  ApplicationManagers_FullscreenHandler_c *method_00;
  
  if (Il2CppMethodInitialized_07548430 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    Il2CppMethodInitialized_07548430 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  method_00 = TypeInfo_ApplicationManagers_FullscreenHandler;
  TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused = hasFocus;
  ApplicationManagers_FullscreenHandler__UpdateSound((MethodInfo *)method_00);
  ApplicationManagers_FullscreenHandler__UpdateFPS((MethodInfo *)method_00);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
  return;
}


// ApplicationManagers.FullscreenHandler$$IsWindowed
// il2cpp: bool ApplicationManagers_FullscreenHandler__IsWindowed (const MethodInfo* method);
// 0x5e16630

bool ApplicationManagers_FullscreenHandler__IsWindowed(MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548431 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07548431 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 == (Settings_GraphicsSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).FullScreenMode, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value == 0;
}


// ApplicationManagers.FullscreenHandler$$Supported
// il2cpp: bool ApplicationManagers_FullscreenHandler__Supported (const MethodInfo* method);
// 0x5e16690

bool ApplicationManagers_FullscreenHandler__Supported(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07548432 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_07548432 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  return iVar1 == 2;
}


// ApplicationManagers.FullscreenHandler$$.ctor
// il2cpp: void ApplicationManagers_FullscreenHandler___ctor (ApplicationManagers_FullscreenHandler_o* __this, const MethodInfo* method);
// 0x5e166e0

void ApplicationManagers_FullscreenHandler___ctor
               (ApplicationManagers_FullscreenHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.FullscreenHandler$$.cctor
// il2cpp: void ApplicationManagers_FullscreenHandler___cctor (const MethodInfo* method);
// 0x5e166f0

void ApplicationManagers_FullscreenHandler___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548433 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    Il2CppMethodInitialized_07548433 = '\x01';
  }
  TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused = true;
  return;
}


