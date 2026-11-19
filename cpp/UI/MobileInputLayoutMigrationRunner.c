// Type: UI.MobileInputLayoutMigrationRunner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileInputLayoutMigrationRunner.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputLayoutMigrationRunner$$MigrateCustomLayouts
// il2cpp: void UI_MobileInputLayoutMigrationRunner__MigrateCustomLayouts (System_String_o* folder, int32_t currentVersion, const MethodInfo* method);
// 0x5c9a4d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9a554: jmp 0x5c9a5fa

void UI_MobileInputLayoutMigrationRunner__MigrateCustomLayouts
               (System_String_o *folder,int32_t currentVersion,MethodInfo *method)

{
  uint uVar1;
  System_String_o *path;
  bool bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  ulong uVar5;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07547a08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    il2cpp_codegen_initialize_runtime_metadata(&"*.json");
    Il2CppMethodInitialized_07547a08 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(folder,(MethodInfo *)0x0);
  if ((!bVar2) && (bVar2 = System_IO_Directory__Exists(folder,(MethodInfo *)0x0), bVar2)) {
    if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
      bVar2 = Settings_MobileInputBindingRegistry__get_IsReady((MethodInfo *)0x0);
      klass = (Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner;
    }
    else {
      bVar2 = Settings_MobileInputBindingRegistry__get_IsReady((MethodInfo *)0x0);
      klass = (Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner;
    }
    TypeInfo_UI_MobileInputLayoutMigrationRunner = (UI_MobileInputLayoutMigrationRunner_c *)klass;
    if (bVar2) {
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      UI_MobileInputLayoutMigrationRunner__RegisterLegacyAliases((MethodInfo *)klass);
      pSVar3 = System_IO_Directory__GetFiles(folder,"*.json",(MethodInfo *)0x0);
      if (pSVar3 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (0 < (int)pSVar3->max_length) {
        uVar4 = pSVar3->max_length & 0xffffffff;
        uVar5 = 0;
        method_00 = extraout_RDX;
        do {
          if (uVar4 <= uVar5) {
            ThrowIndexOutOfRangeException();
          }
          path = pSVar3->m_Items[uVar5];
          if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
            method_00 = extraout_RDX_01;
          }
          UI_MobileInputLayoutMigrationRunner__MigrateCustomLayout(path,currentVersion,method_00);
          uVar5 = uVar5 + 1;
          uVar1 = (uint)pSVar3->max_length;
          uVar4 = (ulong)uVar1;
          method_00 = extraout_RDX_00;
        } while ((long)uVar5 < (long)(int)uVar1);
      }
    }
  }
  return;
}


// UI.MobileInputLayoutMigrationRunner$$MigrateCustomLayout
// il2cpp: void UI_MobileInputLayoutMigrationRunner__MigrateCustomLayout (System_String_o* path, int32_t currentVersion, const MethodInfo* method);
// 0x5c9b000
// eh: try 0x5c9b040..0x5c9b0d6 -> pad 0x5c9b0ef (+5 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5c9b106..0x5c9b1ce -> pad 0x5c9b1d3 (+1 call sites) cleanup
// eh: try 0x5c9b1d6..0x5c9b1db -> pad 0x5c9b1e3 catch (...) [compiler noexcept guard]
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9b0e5: jmp 0x5c9b0ef
// asm:   0x5c9b0e7: jmp 0x5c9b0ef
// asm:   0x5c9b0e9: jmp 0x5c9b0ef
// asm:   0x5c9b0eb: jmp 0x5c9b0ef
// asm:   0x5c9b0ed: jmp 0x5c9b0ef
// asm:   0x5c9b0ef: mov rbx, rax
// asm:   0x5c9b0f2: cmp edx, 1
// asm:   0x5c9b0f5: jne 0x5c9b1db
// asm:   0x5c9b0fb: mov rdi, rbx
// asm:   0x5c9b0fe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c9b103: mov rbx, rax
// asm:   0x5c9b106: lea rdi, [rip + 0x15dcfb3]  ; TypeInfo_System_Exception
// asm:   0x5c9b10d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c9b112: mov rcx, qword ptr [rbx]
// asm:   0x5c9b115: mov rsi, qword ptr [rcx]
// asm:   0x5c9b118: mov rdi, rax
// asm:   0x5c9b11b: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5c9b120: test al, al
// asm:   0x5c9b122: je 0x5c9b1ad
// asm:   0x5c9b128: mov rbx, qword ptr [rbx]
// asm:   0x5c9b12b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c9b130: test rbx, rbx
// asm:   0x5c9b133: je 0x5c9b1ce
// asm:   0x5c9b139: mov rax, qword ptr [rbx]
// asm:   0x5c9b13c: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5c9b143: mov rdi, rbx
// asm:   0x5c9b146: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5c9b14c: mov rbx, rax
// asm:   0x5c9b14f: lea rdi, [rip + 0x1640b12]  ; "Failed to migrate mobile layout "
// asm:   0x5c9b156: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c9b15b: mov rbp, rax
// asm:   0x5c9b15e: lea rdi, [rip + 0x1636e1b]  ; ": "
// asm:   0x5c9b165: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c9b16a: mov rdi, rbp
// asm:   0x5c9b16d: mov rsi, r14
// asm:   0x5c9b170: mov rdx, rax
// asm:   0x5c9b173: mov rcx, rbx
// asm:   0x5c9b176: xor r8d, r8d
// asm:   0x5c9b179: call 0x5402810  ; System_String__Concat()
// asm:   0x5c9b17e: mov rbx, rax
// asm:   0x5c9b181: lea rdi, [rip + 0x15dc4c0]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5c9b188: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c9b18d: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5c9b194: jne 0x5c9b19e
// asm:   0x5c9b196: mov rdi, rax
// asm:   0x5c9b199: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5c9b19e: mov rdi, rbx
// asm:   0x5c9b1a1: xor esi, esi
// asm:   0x5c9b1a3: call 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5c9b1a8: jmp 0x5c9b0d6
// asm:   0x5c9b1ad: mov edi, 8
// asm:   0x5c9b1b2: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5c9b1b7: mov rcx, qword ptr [rbx]
// asm:   0x5c9b1ba: mov qword ptr [rax], rcx
// asm:   0x5c9b1bd: lea rsi, [rip + 0x119233c]
// asm:   0x5c9b1c4: mov rdi, rax
// asm:   0x5c9b1c7: xor edx, edx
// asm:   0x5c9b1c9: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5c9b1ce: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5c9b1d3: mov rbx, rax
// asm:   0x5c9b1d6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c9b1db: mov rdi, rbx
// asm:   0x5c9b1de: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c9b1e3: mov rdi, rax
// asm:   0x5c9b1e6: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileInputLayoutMigrationRunner__MigrateCustomLayout
               (System_String_o *path,int32_t currentVersion,MethodInfo *method)

{
  int32_t version;
  System_Collections_Generic_List_MobileInputControlLayout__o *controls;
  int32_t role;
  bool bVar1;
  uint in_EAX;
  System_String_o *pSVar2;
  UI_MobileInputLayout_o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07547a09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    Il2CppMethodInitialized_07547a09 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  pSVar2 = System_IO_File__ReadAllText(path,(MethodInfo *)0x0);
  __this = UnityEngine_JsonUtility__FromJson_object_
                     (pSVar2,(MethodInfo_356DE00 *)
                             MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout);
  if ((__this != (UI_MobileInputLayout_o *)0x0) && ((__this->fields).Version < currentVersion)) {
    bVar1 = UI_MobileInputLayout__TryGetRole(__this,(int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
    if (bVar1) {
      version = (__this->fields).Version;
      controls = (__this->fields).Controls;
      role = uStack_38._4_4_;
      method_00 = extraout_RDX;
      if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
        method_00 = extraout_RDX_00;
      }
      UI_MobileInputLayoutMigrationRunner__MigrateControls(controls,role,method_00);
      (__this->fields).Version = currentVersion;
      UI_MobileInputLayoutMigrationRunner__Backup(path,version,method_01);
      pSVar2 = UnityEngine_JsonUtility__ToJson_69c15e0((Il2CppObject *)__this,true,(MethodInfo *)0x0);
      System_IO_File__WriteAllText(path,pSVar2,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MobileInputLayoutMigrationRunner$$MigrateControls
// il2cpp: void UI_MobileInputLayoutMigrationRunner__MigrateControls (System_Collections_Generic_List_MobileInputControlLayout__o* controls, int32_t role, const MethodInfo* method);
// 0x5c9b1f0
// eh: try 0x5c9b2a0..0x5c9b2d0 -> pad 0x5c9b2f3 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c9b30b..0x5c9b310 -> pad 0x5c9b32f cleanup
// eh: try 0x5c9b332..0x5c9b33c -> pad 0x5c9b344 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9b2f1: jmp 0x5c9b2f3
// asm:   0x5c9b2f3: mov rbx, rax
// asm:   0x5c9b2f6: cmp edx, 1
// asm:   0x5c9b2f9: jne 0x5c9b332
// asm:   0x5c9b2fb: mov rdi, rbx
// asm:   0x5c9b2fe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c9b303: mov rbx, qword ptr [rax]
// asm:   0x5c9b306: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c9b30b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c9b310: lea rax, [rip + 0x15f3271]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose
// asm:   0x5c9b317: mov rsi, qword ptr [rax]
// asm:   0x5c9b31a: mov rdi, rsp
// asm:   0x5c9b31d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c9b322: test rbx, rbx
// asm:   0x5c9b325: je 0x5c9b2e4
// asm:   0x5c9b327: mov rdi, rbx
// asm:   0x5c9b32a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c9b32f: mov rbx, rax
// asm:   0x5c9b332: lea rdi, [rsp + 0x20]
// asm:   0x5c9b337: call 0x2fdac70  ; il2cpp_runtime_helper_02fdac70()
// asm:   0x5c9b33c: mov rdi, rbx
// asm:   0x5c9b33f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c9b344: mov rdi, rax
// asm:   0x5c9b347: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileInputLayoutMigrationRunner__MigrateControls
               (System_Collections_Generic_List_MobileInputControlLayout__o *controls,int32_t role,
               MethodInfo *method)

{
  Il2CppObject *control;
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547a0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    Il2CppMethodInitialized_07547a0a = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (controls != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)controls,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                        );
      control = local_58.fields._current;
      if (!bVar1) break;
      method_00 = extraout_RDX;
      if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
        method_00 = extraout_RDX_00;
      }
      UI_MobileInputLayoutMigrationRunner__MigrateControl
                ((UI_MobileInputControlLayout_o *)control,role,method_00);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
  }
  return;
}


// UI.MobileInputLayoutMigrationRunner$$MigrateControl
// il2cpp: void UI_MobileInputLayoutMigrationRunner__MigrateControl (UI_MobileInputControlLayout_o* control, int32_t role, const MethodInfo* method);
// 0x5c9b3e0

void UI_MobileInputLayoutMigrationRunner__MigrateControl
               (UI_MobileInputControlLayout_o *control,int32_t role,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547a0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    Il2CppMethodInitialized_07547a0b = '\x01';
    method = extraout_RDX;
  }
  if (control == (UI_MobileInputControlLayout_o *)0x0) {
    return;
  }
  pSVar1 = (control->fields).Actions;
  if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
    method = extraout_RDX_00;
  }
  pSVar1 = UI_MobileInputLayoutMigrationRunner__NormalizeActionString(pSVar1,role,method);
  (control->fields).Actions = pSVar1;
  Il2CppCodeGenWriteBarrier(&(control->fields).Actions);
  UI_MobileInputLayoutMigrationRunner__MigrateControls((control->fields).Children,role,method_00);
  return;
}


// UI.MobileInputLayoutMigrationRunner$$NormalizeActionString
// il2cpp: System_String_o* UI_MobileInputLayoutMigrationRunner__NormalizeActionString (System_String_o* actions, int32_t role, const MethodInfo* method);
// 0x5c9b470
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9b75d: jmp 0x5c9b7b3

System_String_o *
UI_MobileInputLayoutMigrationRunner__NormalizeActionString
          (System_String_o *actions,int32_t role,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_array *pSVar2;
  bool bVar3;
  uint uVar4;
  System_Collections_Generic_List_string__o *__this;
  System_Char_array *separator;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *pMVar7;
  uint uVar8;
  long lVar9;
  System_String_o *local_40;
  System_Collections_Generic_List_string__o *local_38;
  
  if (Il2CppMethodInitialized_07547a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_8B02B2C27AF613530575C89F7AED6B3E9F9F86109996B40CC363B81F33EDC924
              );
    il2cpp_codegen_initialize_runtime_metadata(&"+");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547a0c = '\x01';
  }
  local_40 = (System_String_o *)0x0;
  bVar3 = System_String__IsNullOrWhiteSpace(actions,(MethodInfo *)0x0);
  if (bVar3) {
    return actions;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
            ((System_Array_o *)separator,
             FieldRva_PrivateImplementationDetails_8B02B2C27AF613530575C89F7AED6B3E9F9F86109996B40CC363B81F33EDC924
             ,(MethodInfo *)0x0);
  if (actions != (System_String_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pSVar5 = System_String__Split_5305000(actions,separator,1,(MethodInfo *)0x0);
    if (pSVar5 != (System_String_array *)0x0) {
      uVar4 = (uint)pSVar5->max_length;
      local_38 = __this;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) {
        if ((int)uVar4 < 1) goto label_05c9b7b3;
        lVar9 = 0;
        do {
          if (uVar4 <= (uint)lVar9) goto label_05c9b7b8;
          if (pSVar5->m_Items[lVar9] == (System_String_o *)0x0) goto label_05c9b7b3;
          pSVar6 = System_String__Trim(pSVar5->m_Items[lVar9],(MethodInfo *)0x0);
          if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
          }
          bVar3 = UI_MobileInputLayoutMigrationRunner__TryNormalizeId(pSVar6,role,&local_40,method_00);
          if (bVar3) {
            method_00 = (MethodInfo *)0x0;
            bVar3 = System_String__Equals_52ffe30(local_40,"None",4,(MethodInfo *)0x0);
            if (!bVar3) goto label_05c9b7b3;
          }
          uVar4 = (uint)pSVar5->max_length;
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar4);
      }
      else if (0 < (int)uVar4) {
        uVar8 = 0;
        do {
          if (uVar4 <= uVar8) {
label_05c9b7b8:
            ThrowIndexOutOfRangeException();
          }
          if (pSVar5->m_Items[(int)uVar8] == (System_String_o *)0x0) goto label_05c9b7b3;
          pSVar6 = System_String__Trim(pSVar5->m_Items[(int)uVar8],(MethodInfo *)0x0);
          if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
          }
          bVar3 = UI_MobileInputLayoutMigrationRunner__TryNormalizeId(pSVar6,role,&local_40,method_00);
          if (bVar3) {
            method_00 = (MethodInfo *)0x0;
            bVar3 = System_String__Equals_52ffe30(local_40,"None",4,(MethodInfo *)0x0);
            if ((!bVar3) &&
               (bVar3 = System_Collections_Generic_List_object___Contains
                                  ((System_Collections_Generic_List_object__o *)local_38,
                                   (Il2CppObject *)local_40,
                                   (MethodInfo_395D6D0 *)
                                   MethodInfo_System_Collections_Generic_List_string_Contains),
               pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add, !bVar3)) {
              piVar1 = &(local_38->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar2 = (local_38->fields)._items;
              if (pSVar2 == (System_String_array *)0x0) goto label_05c9b7b3;
              uVar4 = (local_38->fields)._size;
              if (uVar4 < (uint)pSVar2->max_length) {
                method_00 = (MethodInfo *)(ulong)(uVar4 + 1);
                (local_38->fields)._size = uVar4 + 1;
                pSVar2->m_Items[(int)uVar4] = local_40;
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar4);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)local_38,(Il2CppObject *)local_40,
                           (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                method_00 = pMVar7;
              }
            }
          }
          uVar8 = uVar8 + 1;
          uVar4 = (uint)pSVar5->max_length;
        } while ((int)uVar8 < (int)uVar4);
      }
      if (local_38 != (System_Collections_Generic_List_string__o *)0x0) {
        if ((local_38->fields)._size == 0) {
          return "None";
        }
        pSVar5 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)local_38,
                            (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        pSVar6 = System_String__Join("+",pSVar5,(MethodInfo *)0x0);
        return pSVar6;
      }
    }
  }
label_05c9b7b3:
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutMigrationRunner$$TryNormalizeId
// il2cpp: bool UI_MobileInputLayoutMigrationRunner__TryNormalizeId (System_String_o* value, int32_t role, System_String_o** id, const MethodInfo* method);
// 0x5c9b7c0

bool UI_MobileInputLayoutMigrationRunner__TryNormalizeId
               (System_String_o *value,int32_t role,System_String_o **id,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar3;
  
  pMVar3 = (MethodInfo *)id;
  if (Il2CppMethodInitialized_07547a0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547a0d = '\x01';
    pMVar3 = extraout_RDX;
  }
  if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
    pMVar3 = extraout_RDX_00;
  }
  pSVar2 = UI_MobileInputLayoutMigrationRunner__NormalizeId(value,role,pMVar3);
  *id = pSVar2;
  Il2CppCodeGenWriteBarrier(id);
  pMVar3 = (MethodInfo *)"None";
  bVar1 = System_String__Equals_52ffe30(*id,"None",4,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  pSVar2 = *id;
  if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
  }
  bVar1 = UI_MobileInputLayoutMigrationRunner__IsValidActionIdString(pSVar2,pMVar3);
  return bVar1;
}


// UI.MobileInputLayoutMigrationRunner$$NormalizeId
// il2cpp: System_String_o* UI_MobileInputLayoutMigrationRunner__NormalizeId (System_String_o* value, int32_t role, const MethodInfo* method);
// 0x5c9b880

System_String_o *
UI_MobileInputLayoutMigrationRunner__NormalizeId(System_String_o *value,int32_t role,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *id;
  System_String_o **ppSVar5;
  Settings_MobileInputBinding_o *local_60;
  System_String_o *local_58;
  System_String_o *local_50;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_07547a0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"General.");
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"Human.");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07547a0e = '\x01';
  }
  local_50 = (System_String_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_60 = (Settings_MobileInputBinding_o *)0x0;
  bVar2 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if (bVar2) {
    return "None";
  }
  if (value == (System_String_o *)0x0) {
label_05c9bbff:
    ThrowNullReferenceException();
  }
  pSVar3 = System_String__Trim(value,(MethodInfo *)0x0);
  bVar2 = System_String__Equals_52ffe30(pSVar3,"None",4,(MethodInfo *)0x0);
  if (bVar2) {
    return "None";
  }
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  bVar2 = Settings_MobileInputBindingRegistry__TryGetBinding(pSVar3,&local_60,(MethodInfo *)0x0);
  if (bVar2) {
    return pSVar3;
  }
  local_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = role;
  pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_5301f10(pSVar4,":",pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_UI_MobileInputLayoutMigrationRunner->static_fields->_legacyAliases;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c9bbff;
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar1,(Il2CppObject *)pSVar4,(Il2CppObject **)&local_50,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  if (bVar2) {
    return local_50;
  }
  if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_UI_MobileInputLayoutMigrationRunner->static_fields->_legacyAliases;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c9bbff;
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar1,(Il2CppObject *)pSVar3,(Il2CppObject **)&local_58,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  if (bVar2) {
    return local_58;
  }
  local_48.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = role;
  pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  id = System_String__Concat_5301f10(pSVar4,".",pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  bVar2 = Settings_MobileInputBindingRegistry__TryGetBinding(id,&local_60,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = System_String__Concat_5301f10(pSVar4,".",pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  if (role != 5) {
    ppSVar5 = &"General.";
    pSVar4 = System_String__Concat_52f0320("General.",pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
    }
    bVar2 = Settings_MobileInputBindingRegistry__TryGetBinding(pSVar4,&local_60,(MethodInfo *)0x0);
    if (bVar2) goto label_05c9bbdd;
    ppSVar5 = &"Interaction.";
    pSVar4 = System_String__Concat_52f0320("Interaction.",pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
    }
    bVar2 = Settings_MobileInputBindingRegistry__TryGetBinding(pSVar4,&local_60,(MethodInfo *)0x0);
    if (bVar2) goto label_05c9bbdd;
  }
  ppSVar5 = &"Human.";
  pSVar4 = System_String__Concat_52f0320("Human.",pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  bVar2 = Settings_MobileInputBindingRegistry__TryGetBinding(pSVar4,&local_60,(MethodInfo *)0x0);
  if (!bVar2) {
    return pSVar3;
  }
label_05c9bbdd:
  pSVar3 = System_String__Concat_52f0320(*ppSVar5,pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// UI.MobileInputLayoutMigrationRunner$$RegisterLegacyAliases
// il2cpp: void UI_MobileInputLayoutMigrationRunner__RegisterLegacyAliases (const MethodInfo* method);
// 0x5c9a610
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9a649: jmp 0x5c9aad5

void UI_MobileInputLayoutMigrationRunner__RegisterLegacyAliases(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *method_18;
  MethodInfo *method_19;
  MethodInfo *method_20;
  MethodInfo *method_21;
  MethodInfo *method_22;
  MethodInfo *method_23;
  MethodInfo *method_24;
  MethodInfo *method_25;
  MethodInfo *method_26;
  MethodInfo *method_27;
  MethodInfo *method_28;
  MethodInfo *method_29;
  MethodInfo *method_30;
  MethodInfo *method_31;
  MethodInfo *method_32;
  MethodInfo *method_33;
  MethodInfo *method_34;
  
  if (Il2CppMethodInitialized_07547a0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackGrabMid");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackBrushHead");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackGrabGround");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackPunch");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackGrabHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackGrabAir");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackBiteL");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackSlapL");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackBrushHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.Sprint");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackSlapLowL");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackGrabAirFar");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanCoverNape");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanJump");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackBrushFront");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackSlapHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackSlapHighRight");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackGrabBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackBiteF");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.Sit");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackGrabUp");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackGrabAirFar");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackGrabCore");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackGrabAir");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackBrushBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackBrushChest");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackSlapHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackGrabBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackBiteR");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSit");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackHead");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter.AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackBiteFront");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackSlapR");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackBrushChest");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackSlam");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackHitFace");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackBrushBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackHitBack");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackSlapHighLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackHitBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackGrabHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackGrabBody");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackBrushFront");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackGrabCore");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackGrabGround");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackGrabBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackGrabHigh");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackGrabUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackDefault");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackGrabHigh");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackSlapLowLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanSprint");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackSlapRight");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackBiteLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackSlam");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanKick");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackSlapLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackBiteRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackSlapLowR");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackHitFace");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackSlapLowRight");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan.AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter.AttackGrabMid");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanAttackPunch");
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterAttackCombo");
    Il2CppMethodInitialized_07547a0f = '\x01';
    uVar2 = (TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar2 = (TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
    cVar1 = TypeInfo_UI_MobileInputLayoutMigrationRunner->static_fields->_aliasesLoaded;
    in_RDX = extraout_RDX_00;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner)->static_fields + 8);
  }
  if (cVar1 == '\0') {
    if ((((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
      in_RDX = extraout_RDX_01;
    }
    UI_MobileInputLayoutMigrationRunner__RegisterCommonAliases(1,"Human",in_RDX);
    UI_MobileInputLayoutMigrationRunner__RegisterCommonAliases(2,"Titan",method_00);
    UI_MobileInputLayoutMigrationRunner__RegisterCommonAliases(3,"AnnieShifter",method_01);
    UI_MobileInputLayoutMigrationRunner__RegisterCommonAliases(4,"ErenShifter",method_02);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanKick","Titan.Kick",method_03);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanJump","Titan.Jump",method_04);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanWalk","Titan.Walk",method_05);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanSit","Titan.Sit",method_06);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanSprint","Titan.Sprint",method_07);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanCoverNape","Titan.CoverNape1",method_08);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackPunch","Titan.AttackPunch",method_09);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackBellyFlop","Titan.AttackBellyFlop",method_10);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackSlapLeft","Titan.AttackSlapL",method_11);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackSlapRight","Titan.AttackSlapR",method_12);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackRockThrow","Titan.AttackRockThrow",method_13);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackBiteLeft","Titan.AttackBiteL",method_14);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackBiteFront","Titan.AttackBiteF",method_15);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackBiteRight","Titan.AttackBiteR",method_16);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackHitFace","Titan.AttackHitFace",method_17);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackHitBack","Titan.AttackHitBack",method_18);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackSlam","Titan.AttackSlam",method_19);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackStomp","Titan.AttackStomp",method_20);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackSwing","Titan.AttackSwing",method_21);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackGrabAirFar","Titan.AttackGrabAirFar",method_22);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackGrabAir","Titan.AttackGrabAir",method_23);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackGrabBody","Titan.AttackGrabBody",method_24);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackGrabCore","Titan.AttackGrabCore",method_25);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackGrabGround","Titan.AttackGrabGround",method_26);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackGrabHead","Titan.AttackGrabHead",method_27);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackGrabHigh","Titan.AttackGrabHigh",method_28);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackSlapHighLeft","Titan.AttackSlapHighL",method_29);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackSlapHighRight","Titan.AttackSlapHighR",method_30);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackSlapLowLeft","Titan.AttackSlapLowL",method_31);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackSlapLowRight","Titan.AttackSlapLowR",method_32);
    UI_MobileInputLayoutMigrationRunner__AddAlias("TitanAttackBrushChest","Titan.AttackBrushChest",method_33);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackCombo","AnnieShifter.AttackCombo",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"AttackDefault","AnnieShifter.AttackCombo",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackSwing","AnnieShifter.AttackSwing",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"AttackSpecial","AnnieShifter.AttackSwing",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackStomp","AnnieShifter.AttackStomp",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackBite","AnnieShifter.AttackBite",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackHead","AnnieShifter.AttackHead",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackBrushBack","AnnieShifter.AttackBrushBack",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackBrushFront","AnnieShifter.AttackBrushFront",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackBrushHead","AnnieShifter.AttackBrushHead",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackGrabBottom","AnnieShifter.AttackGrabBottom",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackGrabMid","AnnieShifter.AttackGrabMid",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(3,"ShifterAttackGrabUp","AnnieShifter.AttackGrabUp",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(4,"ShifterAttackCombo","ErenShifter.AttackCombo",in_RCX);
    method_34 = (MethodInfo *)0x4;
    UI_MobileInputLayoutMigrationRunner__AddRoleAlias(4,"AttackDefault","ErenShifter.AttackCombo",in_RCX);
    UI_MobileInputLayoutMigrationRunner__AddMapEditorAliases(method_34);
    TypeInfo_UI_MobileInputLayoutMigrationRunner->static_fields->_aliasesLoaded = true;
  }
  return;
}


// UI.MobileInputLayoutMigrationRunner$$RegisterCommonAliases
// il2cpp: void UI_MobileInputLayoutMigrationRunner__RegisterCommonAliases (int32_t role, System_String_o* group, const MethodInfo* method);
// 0x5c9bd20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9be85: jmp 0x5c9bea4

void UI_MobileInputLayoutMigrationRunner__RegisterCommonAliases
               (int32_t role,System_String_o *group,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *id;
  MethodInfo *in_RCX;
  System_String_o **method_00;
  
  if (Il2CppMethodInitialized_07547a10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    il2cpp_codegen_initialize_runtime_metadata(&".Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&".Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash");
    il2cpp_codegen_initialize_runtime_metadata(&".Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Human.Dash+Human.Dodge");
    Il2CppMethodInitialized_07547a10 = '\x01';
  }
  pSVar3 = System_String__Concat_52f0320(group,".Kick",(MethodInfo *)0x0);
  if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
  }
  UI_MobileInputLayoutMigrationRunner__AddRoleAlias(role,"Kick",pSVar3,in_RCX);
  pSVar3 = System_String__Concat_52f0320(group,".Jump",(MethodInfo *)0x0);
  UI_MobileInputLayoutMigrationRunner__AddRoleAlias
            (role,"Jump",pSVar3,(MethodInfo *)&"Jump");
  pSVar3 = System_String__Concat_52f0320(group,".Walk",(MethodInfo *)0x0);
  UI_MobileInputLayoutMigrationRunner__AddRoleAlias
            (role,"Walk",pSVar3,(MethodInfo *)&"Walk");
  bVar2 = System_String__op_Equality(group,"Human",(MethodInfo *)0x0);
  pSVar3 = "Dash";
  method_00 = &"Dash";
  if (bVar2) {
    uVar1 = (TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor;
    id = "Human.Dash+Human.Dodge";
  }
  else {
    id = System_String__Concat_52f0320(group,".Kick",(MethodInfo *)0x0);
    uVar1 = (TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
  }
  UI_MobileInputLayoutMigrationRunner__AddRoleAlias(role,pSVar3,id,(MethodInfo *)method_00);
  return;
}


// UI.MobileInputLayoutMigrationRunner$$AddMapEditorAliases
// il2cpp: void UI_MobileInputLayoutMigrationRunner__AddMapEditorAliases (const MethodInfo* method);
// 0x5c9c0c0
// eh: try 0x5c9c300..0x5c9c4d9 -> pad 0x5c9c4e8 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c9c50c..0x5c9c511 -> pad 0x5c9c516 cleanup
// eh: try 0x5c9c519..0x5c9c523 -> pad 0x5c9c52b catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9c2db: lea r13, [rip + 0x15dd116]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5c9c2e2: lea rbp, [rip + 0x15d4d37]  ; TypeInfo_System_Collections_Generic_IEnumerator_MobileInputBinding
// asm:   0x5c9c2e9: lea r14, [rip + 0x1645b50]  ; "MapEditor"
// asm:   0x5c9c2f0: jmp 0x5c9c318
// asm:   0x5c9c30b: mov rbx, qword ptr [rsp]
// asm:   0x5c9c30f: test rbx, rbx
// asm:   0x5c9c312: je 0x5c9c4ca
// asm:   0x5c9c47f: nop 
// asm:   0x5c9c4de: mov rdi, rbp
// asm:   0x5c9c4e1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c9c4e6: jmp 0x5c9c4f4
// asm:   0x5c9c4e8: jmp 0x5c9c4f4
// asm:   0x5c9c4ea: jmp 0x5c9c4f4
// asm:   0x5c9c4ec: jmp 0x5c9c4f4
// asm:   0x5c9c4ee: jmp 0x5c9c4f4
// asm:   0x5c9c4f0: jmp 0x5c9c4f4
// asm:   0x5c9c4f2: jmp 0x5c9c4f4
// asm:   0x5c9c4f4: mov rbx, rax
// asm:   0x5c9c4f7: cmp edx, 1
// asm:   0x5c9c4fa: jne 0x5c9c519
// asm:   0x5c9c4fc: mov rdi, rbx
// asm:   0x5c9c4ff: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c9c504: mov rbp, qword ptr [rax]
// asm:   0x5c9c507: mov qword ptr [rsp + 8], rbp
// asm:   0x5c9c50c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c9c511: jmp 0x5c9c450
// asm:   0x5c9c516: mov rbx, rax
// asm:   0x5c9c519: lea rdi, [rsp + 8]
// asm:   0x5c9c51e: call 0x2fdaca0  ; il2cpp_runtime_helper_02fdaca0()
// asm:   0x5c9c523: mov rdi, rbx
// asm:   0x5c9c526: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c9c52b: mov rdi, rax
// asm:   0x5c9c52e: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileInputLayoutMigrationRunner__AddMapEditorAliases(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  char cVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  System_String_o *legacy;
  MethodInfo *in_RCX;
  ulong uVar8;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long lVar9;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07547a11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_MobileInputBinding);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_MobileInputBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor.Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor.Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"Left");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor.Right");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor.Back");
    Il2CppMethodInitialized_07547a11 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
  }
  UI_MobileInputLayoutMigrationRunner__AddRoleAlias(5,"Forward","MapEditor.Forward",in_RCX);
  UI_MobileInputLayoutMigrationRunner__AddRoleAlias(5,"Back","MapEditor.Back",in_RCX);
  UI_MobileInputLayoutMigrationRunner__AddRoleAlias(5,"Left","MapEditor.Left",in_RCX);
  UI_MobileInputLayoutMigrationRunner__AddRoleAlias(5,"Right","MapEditor.Right",in_RCX);
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  pIVar5 = (Il2CppObject *)Settings_MobileInputBindingRegistry__GetAll((MethodInfo *)0x0);
  if (pIVar5 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = pIVar5->klass;
  uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar9 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_MobileInputBinding__c **)
           ((long)&pIVar2->interfaceType + lVar9) ==
          TypeInfo_System_Collections_Generic_IEnumerable_MobileInputBinding) {
        pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
        goto label_05c9c2b1;
      }
      lVar9 = lVar9 + 0x10;
    } while (uVar8 * 0x10 != lVar9);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_MobileInputBinding
                      ,0);
label_05c9c2b1:
  pIVar5 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  local_38 = (undefined1 *)&local_48;
  local_40 = 0;
  do {
    local_48 = pIVar5;
    if (pIVar5 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = pIVar5->klass;
    uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar9) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_05c9c373;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05c9c373:
    cVar3 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    pIVar5 = local_48;
    if (cVar3 == '\0') {
      if (local_48 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar1 = local_48->klass;
      uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar8 == 0) goto label_05c9c48f;
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar9 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = local_48->klass;
    uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_MobileInputBinding__c **)
             ((long)&pIVar2->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IEnumerator_MobileInputBinding) {
          pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_05c9c3f3;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IEnumerator_MobileInputBinding,0);
label_05c9c3f3:
    pIVar7 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    bVar4 = System_String__op_Equality(pIVar7[1].monitor,"MapEditor",(MethodInfo *)0x0);
    pIVar5 = local_48;
    if (bVar4) {
      legacy = System_String__Concat_52f0320
                         ("MapEditor",(System_String_o *)pIVar7[2].klass,(MethodInfo *)0x0);
      pIVar1 = pIVar7[1].klass;
      method_00 = extraout_RDX;
      if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
        method_00 = extraout_RDX_00;
      }
      UI_MobileInputLayoutMigrationRunner__AddAlias(legacy,(System_String_o *)pIVar1,method_00);
      pIVar5 = local_48;
    }
  } while( true );
  while (lVar9 = lVar9 + 0x10, uVar8 * 0x10 != lVar9) {
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar9) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
      goto label_05c9c4ad;
    }
  }
label_05c9c48f:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05c9c4ad:
  (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  return;
}


// UI.MobileInputLayoutMigrationRunner$$AddAlias
// il2cpp: void UI_MobileInputLayoutMigrationRunner__AddAlias (System_String_o* legacy, System_String_o* id, const MethodInfo* method);
// 0x5c9bec0

void UI_MobileInputLayoutMigrationRunner__AddAlias
               (System_String_o *legacy,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  Settings_MobileInputBinding_o *local_20;
  
  if (Il2CppMethodInitialized_07547a12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    Il2CppMethodInitialized_07547a12 = '\x01';
  }
  local_20 = (Settings_MobileInputBinding_o *)0x0;
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  bVar1 = Settings_MobileInputBindingRegistry__TryGetBinding(id,&local_20,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_MobileInputLayoutMigrationRunner->static_fields->_legacyAliases;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)legacy,(Il2CppObject *)id,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
  }
  return;
}


// UI.MobileInputLayoutMigrationRunner$$AddRoleAlias
// il2cpp: void UI_MobileInputLayoutMigrationRunner__AddRoleAlias (int32_t role, System_String_o* legacy, System_String_o* id, const MethodInfo* method);
// 0x5c9bf90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9bfcc: jmp 0x5c9c0a7

void UI_MobileInputLayoutMigrationRunner__AddRoleAlias
               (int32_t role,System_String_o *legacy,System_String_o *id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  System_Enum_o local_38;
  int32_t local_28;
  
  pMVar4 = (MethodInfo *)legacy;
  if (Il2CppMethodInitialized_07547a13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_07547a13 = '\x01';
    uVar1 = (TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileInputLayoutMigrationRunner->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
    bVar2 = UI_MobileInputLayoutMigrationRunner__IsValidActionIdString(id,pMVar4);
  }
  else {
    bVar2 = UI_MobileInputLayoutMigrationRunner__IsValidActionIdString(id,pMVar4);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutMigrationRunner);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_MobileInputLayoutMigrationRunner->static_fields->_legacyAliases;
    local_38.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
    local_38.monitor = (void *)0xffffffffffffffff;
    local_28 = role;
    pSVar3 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_5301f10(pSVar3,":",legacy,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)pSVar3,(Il2CppObject *)id,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
  }
  return;
}


// UI.MobileInputLayoutMigrationRunner$$IsValidActionIdString
// il2cpp: bool UI_MobileInputLayoutMigrationRunner__IsValidActionIdString (System_String_o* id, const MethodInfo* method);
// 0x5c9bc10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9bcbc: nop dword ptr [rax]
// asm:   0x5c9bcfe: jmp 0x5c9bd06

bool UI_MobileInputLayoutMigrationRunner__IsValidActionIdString(System_String_o *id,MethodInfo *method)

{
  uint uVar1;
  System_String_o *id_00;
  bool bVar2;
  System_Char_array *separator;
  System_String_array *pSVar3;
  il2cpp_array_size_t iVar4;
  ulong uVar5;
  Settings_MobileInputBinding_o *local_30;
  
  if (Il2CppMethodInitialized_07547a14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    Il2CppMethodInitialized_07547a14 = '\x01';
  }
  local_30 = (Settings_MobileInputBinding_o *)0x0;
  separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,1);
  if (separator != (System_Char_array *)0x0) {
    if ((int)separator->max_length == 0) {
label_05c9bd14:
      ThrowIndexOutOfRangeException();
    }
    separator->m_Items[0] = 0x2b;
    if ((id != (System_String_o *)0x0) &&
       (pSVar3 = System_String__Split_5305000(id,separator,1,(MethodInfo *)0x0),
       pSVar3 != (System_String_array *)0x0)) {
      iVar4 = pSVar3->max_length;
      if (iVar4 == 0) {
        bVar2 = false;
      }
      else if ((int)iVar4 < 1) {
        bVar2 = true;
      }
      else {
        uVar5 = 0;
        do {
          if ((iVar4 & 0xffffffff) <= uVar5) goto label_05c9bd14;
          id_00 = pSVar3->m_Items[uVar5];
          if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
          }
          bVar2 = Settings_MobileInputBindingRegistry__TryGetBinding(id_00,&local_30,(MethodInfo *)0x0);
          if (!bVar2) {
            return bVar2;
          }
          uVar5 = uVar5 + 1;
          uVar1 = (uint)pSVar3->max_length;
          iVar4 = (il2cpp_array_size_t)uVar1;
        } while ((long)uVar5 < (long)(int)uVar1);
      }
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLayoutMigrationRunner$$Backup
// il2cpp: void UI_MobileInputLayoutMigrationRunner__Backup (System_String_o* path, int32_t version, const MethodInfo* method);
// 0x5c9b350

void UI_MobileInputLayoutMigrationRunner__Backup(System_String_o *path,int32_t version,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07547a15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".bak.v");
    Il2CppMethodInitialized_07547a15 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_IO_File__Exists(path,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_5301f10(path,".bak.v",pSVar2,(MethodInfo *)0x0);
      bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
      if (!bVar1) {
        System_IO_File__Copy(path,pSVar2,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// UI.MobileInputLayoutMigrationRunner$$.cctor
// il2cpp: void UI_MobileInputLayoutMigrationRunner___cctor (const MethodInfo* method);
// 0x5c9c540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9c568: cmp byte ptr [rip + 0x18a7047], 0

void UI_MobileInputLayoutMigrationRunner___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalCaseSensitiveComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  
  if (Il2CppMethodInitialized_07547a16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutMigrationRunner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07547a16 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_075435b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_075435b6 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinal;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38
            );
  TypeInfo_UI_MobileInputLayoutMigrationRunner->static_fields->_legacyAliases = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileInputLayoutMigrationRunner->static_fields->_legacyAliases);
  return;
}


