// Type: Settings.ExperienceScoreStore
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ExperienceScoreStore.cs
// Prior real C# source: none
// --------------------------------

// Settings.ExperienceScoreStore.ScoreFile$$.ctor
// il2cpp: void Settings_ExperienceScoreStore_ScoreFile___ctor (Settings_ExperienceScoreStore_ScoreFile_o* __this, const MethodInfo* method);
// 0x5b39120

void Settings_ExperienceScoreStore_ScoreFile___ctor
               (Settings_ExperienceScoreStore_ScoreFile_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ExperienceScoreRecord__o *__this_00;
  
  if (Il2CppMethodInitialized_07547249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ExperienceScoreRecord);
    Il2CppMethodInitialized_07547249 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceScoreRecord);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_ctor);
  (__this->fields).Records = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Records);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.ExperienceScoreStore.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Settings_ExperienceScoreStore___c__DisplayClass5_0___ctor (Settings_ExperienceScoreStore___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x5b391a0

void Settings_ExperienceScoreStore___c__DisplayClass5_0___ctor
               (Settings_ExperienceScoreStore___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.ExperienceScoreStore.<>c__DisplayClass5_0$$<Get>b__0
// il2cpp: bool Settings_ExperienceScoreStore___c__DisplayClass5_0___Get_b__0 (Settings_ExperienceScoreStore___c__DisplayClass5_0_o* __this, Settings_ExperienceScoreRecord_o* record, const MethodInfo* method);
// 0x5b391b0

bool Settings_ExperienceScoreStore___c__DisplayClass5_0___Get_b__0
               (Settings_ExperienceScoreStore___c__DisplayClass5_0_o *__this,
               Settings_ExperienceScoreRecord_o *record,MethodInfo *method)

{
  bool bVar1;
  
  if (record == (Settings_ExperienceScoreRecord_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality
                    ((record->fields).ExperienceID,(__this->fields).experienceID,(MethodInfo *)0x0);
  return bVar1;
}


// Settings.ExperienceScoreStore.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Settings_ExperienceScoreStore___c__DisplayClass6_0___ctor (Settings_ExperienceScoreStore___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x5b391d0

void Settings_ExperienceScoreStore___c__DisplayClass6_0___ctor
               (Settings_ExperienceScoreStore___c__DisplayClass6_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.ExperienceScoreStore.<>c__DisplayClass6_0$$<Save>b__0
// il2cpp: bool Settings_ExperienceScoreStore___c__DisplayClass6_0___Save_b__0 (Settings_ExperienceScoreStore___c__DisplayClass6_0_o* __this, Settings_ExperienceScoreRecord_o* existing, const MethodInfo* method);
// 0x5b391e0

bool Settings_ExperienceScoreStore___c__DisplayClass6_0___Save_b__0
               (Settings_ExperienceScoreStore___c__DisplayClass6_0_o *__this,
               Settings_ExperienceScoreRecord_o *existing,MethodInfo *method)

{
  bool bVar1;
  
  if (existing == (Settings_ExperienceScoreRecord_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality
                    ((existing->fields).ExperienceID,(__this->fields).experienceID,(MethodInfo *)0x0);
  return bVar1;
}


// Settings.ExperienceScoreStore$$.ctor
// il2cpp: void Settings_ExperienceScoreStore___ctor (Settings_ExperienceScoreStore_o* __this, System_String_o* directory, const MethodInfo* method);
// 0x59d6cc0

void Settings_ExperienceScoreStore___ctor
               (Settings_ExperienceScoreStore_o *__this,System_String_o *directory,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545c9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceScores.json");
    Il2CppMethodInitialized_07545c9a = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._directory = directory;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._directory);
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar1 = System_IO_Path__Combine(directory,"ExperienceScores.json",(MethodInfo *)0x0);
  (__this->fields)._path = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._path);
  return;
}


// Settings.ExperienceScoreStore$$Get
// il2cpp: Settings_ExperienceScoreRecord_o* Settings_ExperienceScoreStore__Get (Settings_ExperienceScoreStore_o* __this, System_String_o* experienceID, const MethodInfo* method);
// 0x59d6d60

Settings_ExperienceScoreRecord_o *
Settings_ExperienceScoreStore__Get
          (Settings_ExperienceScoreStore_o *__this,System_String_o *experienceID,MethodInfo *method)

{
  System_Collections_Generic_List_ExperienceScoreRecord__o *__this_00;
  bool bVar1;
  Settings_ExperienceScoreStore___c__DisplayClass5_0_o *__this_01;
  Settings_ExperienceScoreStore_ScoreFile_o *pSVar2;
  System_Predicate_T__o *match;
  Settings_ExperienceScoreRecord_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_02;
  System_String_o *message;
  System_String_o *paramName;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07545c9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_Find);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_ExperienceScoreRecord);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_ExperienceScoreStore_c__DisplayClass5_0_Get_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore_c__DisplayClass5_0);
    Il2CppMethodInitialized_07545c9b = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore_c__DisplayClass5_0);
  Settings_ExperienceScoreStore___c__DisplayClass5_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Settings_ExperienceScoreStore___c__DisplayClass5_0_o *)0x0) {
    (__this_01->fields).experienceID = experienceID;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).experienceID);
    pMVar4 = (MethodInfo *)0x0;
    bVar1 = System_String__IsNullOrWhiteSpace((__this_01->fields).experienceID,(MethodInfo *)0x0);
    if (bVar1) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_02 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"An experience ID is required.");
      paramName = il2cpp_codegen_get_runtime_metadata(&"experienceID");
      System_ArgumentException___ctor_5410fb0(__this_02,message,paramName,(MethodInfo *)0x0);
      pMVar4 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Get);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar4);
    }
    pSVar2 = Settings_ExperienceScoreStore__Load(__this,pMVar4);
    if (pSVar2 != (Settings_ExperienceScoreStore_ScoreFile_o *)0x0) {
      __this_00 = (pSVar2->fields).Records;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_ExperienceScoreRecord);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_Settings_ExperienceScoreStore_c__DisplayClass5_0_Get_b__0,
                 (MethodInfo_3DC95B0 *)0x0);
      if (__this_00 != (System_Collections_Generic_List_ExperienceScoreRecord__o *)0x0) {
        pSVar3 = System_Collections_Generic_List_object___Find
                           ((System_Collections_Generic_List_object__o *)__this_00,match,
                            (MethodInfo_395DA40 *)
                            MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_Find);
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.ExperienceScoreStore$$Save
// il2cpp: void Settings_ExperienceScoreStore__Save (Settings_ExperienceScoreStore_o* __this, System_String_o* experienceID, float score, System_String_o* unit, bool lowerIsBetter, const MethodInfo* method);
// 0x59d7930

void Settings_ExperienceScoreStore__Save
               (Settings_ExperienceScoreStore_o *__this,System_String_o *experienceID,float score,
               System_String_o *unit,bool lowerIsBetter,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_ExperienceScoreRecord__o *pSVar3;
  Settings_ExperienceScoreRecord_array *pSVar4;
  Settings_ExperienceScoreStore___c__DisplayClass6_0_o *__this_00;
  Settings_ExperienceScoreRecord_o *record;
  Settings_ExperienceScoreStore_ScoreFile_o *file;
  System_Predicate_T__o *match;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_07545c9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreRecord);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_ExperienceScoreRecord);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_ExperienceScoreStore_c__DisplayClass6_0_Save_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore_c__DisplayClass6_0);
    Il2CppMethodInitialized_07545c9c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore_c__DisplayClass6_0);
  Settings_ExperienceScoreStore___c__DisplayClass6_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Settings_ExperienceScoreStore___c__DisplayClass6_0_o *)0x0) {
    (__this_00->fields).experienceID = experienceID;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).experienceID);
    record = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceScoreRecord);
    System_Object___ctor((Il2CppObject *)record,(MethodInfo *)0x0);
    if (record != (Settings_ExperienceScoreRecord_o *)0x0) {
      (record->fields).ExperienceID = (__this_00->fields).experienceID;
      Il2CppCodeGenWriteBarrier(&(record->fields).ExperienceID);
      (record->fields).Score = score;
      (record->fields).Unit = unit;
      Il2CppCodeGenWriteBarrier(&(record->fields).Unit);
      (record->fields).LowerIsBetter = lowerIsBetter;
      if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
      }
      Settings_ExperienceScoreStore__Validate(record,(MethodInfo *)unit);
      file = Settings_ExperienceScoreStore__Load(__this,(MethodInfo *)unit);
      if (file != (Settings_ExperienceScoreStore_ScoreFile_o *)0x0) {
        pSVar3 = (file->fields).Records;
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_ExperienceScoreRecord);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,(Il2CppObject *)__this_00,
                   (intptr_t)MethodInfo_Settings_ExperienceScoreStore_c__DisplayClass6_0_Save_b__0,
                   (MethodInfo_3DC95B0 *)0x0);
        if (pSVar3 != (System_Collections_Generic_List_ExperienceScoreRecord__o *)0x0) {
          System_Collections_Generic_List_object___RemoveAll
                    ((System_Collections_Generic_List_object__o *)pSVar3,match,
                     (MethodInfo_395EF50 *)
                     MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_RemoveAll);
          pMVar5 = MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_Add;
          pSVar3 = (file->fields).Records;
          if (pSVar3 != (System_Collections_Generic_List_ExperienceScoreRecord__o *)0x0) {
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar3->fields)._items;
            if (pSVar4 != (Settings_ExperienceScoreRecord_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pSVar4->m_Items[(int)uVar2] = record;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
                pMVar5 = extraout_RDX;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)record,
                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                pMVar5 = extraout_RDX_00;
              }
              Settings_ExperienceScoreStore__Write(__this,file,pMVar5);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.ExperienceScoreStore$$Write
// il2cpp: void Settings_ExperienceScoreStore__Write (Settings_ExperienceScoreStore_o* __this, Settings_ExperienceScoreStore_ScoreFile_o* file, const MethodInfo* method);
// 0x59d7c20
// eh: try 0x59d7ceb..0x59d7d89 -> pad 0x59d7d93 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59d7dab..0x59d7db0 -> pad 0x59d7db2 cleanup
// eh: try 0x59d7db5..0x59d7dbf -> pad 0x59d7dc7 catch (...) [compiler noexcept guard]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d7d7c: mov rdi, rbx
// asm:   0x59d7d7f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59d7d89: jmp 0x59d7d93
// asm:   0x59d7d8b: jmp 0x59d7d93
// asm:   0x59d7d8d: jmp 0x59d7d93
// asm:   0x59d7d8f: jmp 0x59d7d93
// asm:   0x59d7d91: jmp 0x59d7d93
// asm:   0x59d7d93: mov rbx, rax
// asm:   0x59d7d96: cmp edx, 1
// asm:   0x59d7d99: jne 0x59d7db5
// asm:   0x59d7d9b: mov rdi, rbx
// asm:   0x59d7d9e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59d7da3: mov rbx, qword ptr [rax]
// asm:   0x59d7da6: mov qword ptr [rsp + 8], rbx
// asm:   0x59d7dab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d7db0: jmp 0x59d7d51
// asm:   0x59d7db2: mov rbx, rax
// asm:   0x59d7db5: lea rdi, [rsp + 8]
// asm:   0x59d7dba: call 0x2fd5a50  ; il2cpp_runtime_helper_02fd5a50()
// asm:   0x59d7dbf: mov rdi, rbx
// asm:   0x59d7dc2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59d7dc7: mov rdi, rax
// asm:   0x59d7dca: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_ExperienceScoreStore__Write
               (Settings_ExperienceScoreStore_o *__this,Settings_ExperienceScoreStore_ScoreFile_o *file,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  SimpleAES_o *__this_00;
  System_String_o *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  System_Guid_o local_30;
  
  if (Il2CppMethodInitialized_07545c9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    il2cpp_codegen_initialize_runtime_metadata(&".tmp");
    il2cpp_codegen_initialize_runtime_metadata(&"N");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07545c9d = '\x01';
  }
  System_IO_Directory__CreateDirectory((__this->fields)._directory,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._path;
  local_30 = System_Guid__NewGuid((MethodInfo *)0x0);
  pSVar2 = System_Guid__ToString_54b3fe0(&local_30,"N",(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_5302810
                     (pSVar3,".",pSVar2,".tmp",(MethodInfo *)0x0);
  local_38 = (undefined1 *)&local_48;
  local_40 = 0;
  local_48 = pSVar3;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
  SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
  pSVar2 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)file,(MethodInfo *)0x0);
  if (__this_00 == (SimpleAES_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = SimpleAES__Encrypt(__this_00,pSVar2,(MethodInfo *)0x0);
  System_IO_File__WriteAllText(pSVar3,pSVar2,(MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists((__this->fields)._path,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._path;
  if (bVar1) {
    System_IO_File__Replace(local_48,pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
  }
  else {
    System_IO_File__Move(local_48,pSVar3,(MethodInfo *)0x0);
  }
  bVar1 = System_IO_File__Exists(local_48,(MethodInfo *)0x0);
  if (bVar1) {
    System_IO_File__Delete(local_48,(MethodInfo *)0x0);
  }
  return;
}


// Settings.ExperienceScoreStore$$Load
// il2cpp: Settings_ExperienceScoreStore_ScoreFile_o* Settings_ExperienceScoreStore__Load (Settings_ExperienceScoreStore_o* __this, const MethodInfo* method);
// 0x59d6eb0
// eh: try 0x59d7060..0x59d74db -> pad 0x59d768a (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59d74f5..0x59d7502 -> pad 0x59d77f1 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_ArgumentException]
// eh: try 0x59d7513..0x59d7643 -> pad 0x59d77e5 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59d765b..0x59d7668 -> pad 0x59d767c catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_ArgumentException]
// eh: try 0x59d766d..0x59d771f -> pad 0x59d77e7 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59d77a4..0x59d77ca -> pad 0x59d77cf (+1 call sites) cleanup
// eh: try 0x59d77d4..0x59d77d9 -> pad 0x59d7925 catch (...) [compiler noexcept guard]
// eh: try 0x59d7815..0x59d781a -> pad 0x59d7913 cleanup
// eh: try 0x59d784a..0x59d78f4 -> pad 0x59d7903 (+4 call sites) catch Il2CppExceptionWrapper, cleanup
// eh: try 0x59d7909..0x59d7920 -> pad 0x59d7925 catch (...) [compiler noexcept guard]
// asm: 170 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d74cc: nop dword ptr [rax]
// asm:   0x59d7677: jmp 0x59d77e9
// asm:   0x59d767c: jmp 0x59d77f1
// asm:   0x59d7681: jmp 0x59d77e9
// asm:   0x59d7686: jmp 0x59d768a
// asm:   0x59d7688: jmp 0x59d768d
// asm:   0x59d768a: mov r12, r14
// asm:   0x59d768d: mov rbp, rdx
// asm:   0x59d7690: mov r15, rax
// asm:   0x59d7693: cmp ebp, 1
// asm:   0x59d7696: jne 0x59d77d9
// asm:   0x59d769c: mov rdi, r15
// asm:   0x59d769f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59d76a4: mov rbx, rax
// asm:   0x59d76a7: mov r14, qword ptr [rax]
// asm:   0x59d76aa: lea rdi, [rip + 0x18a0a0f]  ; TypeInfo_System_Exception
// asm:   0x59d76b1: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d76b6: test r14, r14
// asm:   0x59d76b9: je 0x59d77a9
// asm:   0x59d76bf: mov rcx, qword ptr [r14]
// asm:   0x59d76c2: movzx edx, byte ptr [rax + 0x130]
// asm:   0x59d76c9: cmp byte ptr [rcx + 0x130], dl
// asm:   0x59d76cf: jb 0x59d77a9
// asm:   0x59d76d5: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x59d76dc: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x59d76e1: jne 0x59d77a9
// asm:   0x59d76e7: lea rdi, [rip + 0x18a0df2]  ; TypeInfo_System_FormatException
// asm:   0x59d76ee: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d76f3: mov rcx, qword ptr [r14]
// asm:   0x59d76f6: movzx edx, byte ptr [rax + 0x130]
// asm:   0x59d76fd: cmp byte ptr [rcx + 0x130], dl
// asm:   0x59d7703: jb 0x59d7713
// asm:   0x59d7705: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x59d770c: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x59d7711: je 0x59d773f
// asm:   0x59d7713: lea rdi, [rip + 0x189f46e]  ; TypeInfo_System_Security_Cryptography_CryptographicException
// asm:   0x59d771a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d771f: mov rcx, qword ptr [r14]
// asm:   0x59d7722: movzx edx, byte ptr [rax + 0x130]
// asm:   0x59d7729: cmp byte ptr [rcx + 0x130], dl
// asm:   0x59d772f: jb 0x59d77a9
// asm:   0x59d7731: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x59d7738: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x59d773d: jne 0x59d77a9
// asm:   0x59d773f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d7744: mov rbx, qword ptr [r12 + 0x18]
// asm:   0x59d7749: lea rdi, [rip + 0x1900f10]  ; "Could not decrypt experience score file: "
// asm:   0x59d7750: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d7755: mov rdi, rax
// asm:   0x59d7758: mov rsi, rbx
// asm:   0x59d775b: xor edx, edx
// asm:   0x59d775d: call 0x53f0320  ; System_String__Concat()
// asm:   0x59d7762: mov rbx, rax
// asm:   0x59d7765: lea rdi, [rip + 0x18a27e4]  ; TypeInfo_System_IO_InvalidDataException
// asm:   0x59d776c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d7771: mov rdi, rax
// asm:   0x59d7774: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x59d7779: mov rbp, rax
// asm:   0x59d777c: mov rdi, rax
// asm:   0x59d777f: mov rsi, rbx
// asm:   0x59d7782: mov rdx, r14
// asm:   0x59d7785: xor ecx, ecx
// asm:   0x59d7787: call 0x638b0f0  ; System_IO_InvalidDataException___ctor()
// asm:   0x59d778c: jmp 0x59d7393
// asm:   0x59d7791: jmp 0x59d7795
// asm:   0x59d7793: jmp 0x59d7795
// asm:   0x59d7795: mov r15, rax
// asm:   0x59d7798: cmp edx, ebp
// asm:   0x59d779a: jne 0x59d77d4
// asm:   0x59d779c: mov rdi, r15
// asm:   0x59d779f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59d77a4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d77a9: mov edi, 8
// asm:   0x59d77ae: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x59d77b3: mov rcx, qword ptr [rbx]
// asm:   0x59d77b6: mov qword ptr [rax], rcx
// asm:   0x59d77b9: lea rsi, [rip + 0x1455d40]
// asm:   0x59d77c0: mov rdi, rax
// asm:   0x59d77c3: xor edx, edx
// asm:   0x59d77c5: call 0x6e255c0  ; __cxa_throw()
// asm:   0x59d77ca: jmp 0x59d78f4
// asm:   0x59d77cf: jmp 0x59d77d1
// asm:   0x59d77d1: mov r15, rax
// asm:   0x59d77d4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d77d9: mov rdi, r15
// asm:   0x59d77dc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59d77e1: jmp 0x59d77e9
// asm:   0x59d77e3: jmp 0x59d77e9
// asm:   0x59d77e5: jmp 0x59d77e9
// asm:   0x59d77e7: jmp 0x59d77e9
// asm:   0x59d77e9: mov rbx, rdx
// asm:   0x59d77ec: mov r15, rax
// asm:   0x59d77ef: jmp 0x59d77fc
// asm:   0x59d77f1: mov rbx, rdx
// asm:   0x59d77f4: mov r15, rax
// asm:   0x59d77f7: cmp ebx, 1
// asm:   0x59d77fa: je 0x59d783f
// asm:   0x59d77fc: cmp ebx, 1
// asm:   0x59d77ff: jne 0x59d7916
// asm:   0x59d7805: mov rdi, r15
// asm:   0x59d7808: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59d780d: mov rbx, qword ptr [rax]
// asm:   0x59d7810: mov qword ptr [rsp + 0x38], rbx
// asm:   0x59d7815: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d781a: lea rax, [rip + 0x18b6497]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_Dispose
// asm:   0x59d7821: mov rsi, qword ptr [rax]
// asm:   0x59d7824: lea rdi, [rsp + 0x20]
// asm:   0x59d7829: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59d782e: test rbx, rbx
// asm:   0x59d7831: je 0x59d75ed
// asm:   0x59d7837: mov rdi, rbx
// asm:   0x59d783a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59d783f: mov rdi, r15
// asm:   0x59d7842: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59d7847: mov rbx, rax
// asm:   0x59d784a: lea rdi, [rip + 0x189e02f]  ; TypeInfo_System_ArgumentException
// asm:   0x59d7851: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d7856: mov rcx, qword ptr [rbx]
// asm:   0x59d7859: mov rsi, qword ptr [rcx]
// asm:   0x59d785c: mov rdi, rax
// asm:   0x59d785f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x59d7864: test al, al
// asm:   0x59d7866: je 0x59d78d3
// asm:   0x59d7868: mov rbx, qword ptr [rbx]
// asm:   0x59d786b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d7870: mov rax, qword ptr [rsp + 0x10]
// asm:   0x59d7875: mov rbp, qword ptr [rax + 0x18]
// asm:   0x59d7879: lea rdi, [rip + 0x1907fd0]  ; "Invalid experience score file: "
// asm:   0x59d7880: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d7885: mov rdi, rax
// asm:   0x59d7888: mov rsi, rbp
// asm:   0x59d788b: xor edx, edx
// asm:   0x59d788d: call 0x53f0320  ; System_String__Concat()
// asm:   0x59d7892: mov rbp, rax
// asm:   0x59d7895: lea rdi, [rip + 0x18a26b4]  ; TypeInfo_System_IO_InvalidDataException
// asm:   0x59d789c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d78a1: mov rdi, rax
// asm:   0x59d78a4: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x59d78a9: mov r15, rax
// asm:   0x59d78ac: mov rdi, rax
// asm:   0x59d78af: mov rsi, rbp
// asm:   0x59d78b2: mov rdx, rbx
// asm:   0x59d78b5: xor ecx, ecx
// asm:   0x59d78b7: call 0x638b0f0  ; System_IO_InvalidDataException___ctor()
// asm:   0x59d78bc: lea rdi, [rip + 0x18d1a2d]  ; MethodInfo_Settings_ExperienceScoreStore_Load
// asm:   0x59d78c3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59d78c8: mov rdi, r15
// asm:   0x59d78cb: mov rsi, rax
// asm:   0x59d78ce: call 0x30d6220  ; il2cpp_codegen_raise_exception()
// asm:   0x59d78d3: mov edi, 8
// asm:   0x59d78d8: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x59d78dd: mov rcx, qword ptr [rbx]
// asm:   0x59d78e0: mov qword ptr [rax], rcx
// asm:   0x59d78e3: lea rsi, [rip + 0x1455c16]
// asm:   0x59d78ea: mov rdi, rax
// asm:   0x59d78ed: xor edx, edx
// asm:   0x59d78ef: call 0x6e255c0  ; __cxa_throw()
// asm:   0x59d78f4: jmp 0x59d77e9
// asm:   0x59d78f9: jmp 0x59d77e9
// asm:   0x59d78fe: jmp 0x59d77e9
// asm:   0x59d7903: mov rbx, rdx
// asm:   0x59d7906: mov r15, rax
// asm:   0x59d7909: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59d790e: jmp 0x59d77fc
// asm:   0x59d7913: mov r15, rax
// asm:   0x59d7916: lea rdi, [rsp + 0x38]
// asm:   0x59d791b: call 0x2fd5a90  ; il2cpp_runtime_helper_02fd5a90()
// asm:   0x59d7920: jmp 0x59d77d9
// asm:   0x59d7925: mov rdi, rax
// asm:   0x59d7928: call 0x2ab61e0  ; __clang_call_terminate()

Settings_ExperienceScoreStore_ScoreFile_o *
Settings_ExperienceScoreStore__Load(Settings_ExperienceScoreStore_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalCaseSensitiveComparer_o *comparer;
  System_Collections_Generic_List_ExperienceScoreRecord__o *__this_00;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  SimpleAES_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONArray_o *pSVar9;
  Il2CppClass *pIVar10;
  System_IO_InvalidDataException_o *pSVar11;
  MethodInfo *pMVar12;
  Settings_ExperienceScoreStore_ScoreFile_o *pSVar13;
  System_Collections_Generic_HashSet_string__o *__this_02;
  MethodInfo *method_00;
  System_String_o **metadataPointer;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  Il2CppObject *pIStack_a8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *local_a0;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSStack_98;
  System_Collections_Generic_List_T__o *local_90;
  int32_t iStack_88;
  int32_t iStack_84;
  SimpleJSONFixed_JSONNode_o *local_80;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  System_Int32_array *local_68;
  Il2CppObject *pIStack_60;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *local_58;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSStack_50;
  System_Collections_Generic_List_T__o *local_48;
  undefined8 uStack_40;
  SimpleJSONFixed_JSONNode_o *local_38;
  
  if (Il2CppMethodInitialized_07545c9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_JsonUtility_FromJson_ExperienceScoreStore_ScoreFile);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore_ScoreFile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"{");
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerIsBetter");
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceID");
    il2cpp_codegen_initialize_runtime_metadata(&"Unit");
    il2cpp_codegen_initialize_runtime_metadata(&"Records");
    Il2CppMethodInitialized_07545c9e = '\x01';
  }
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  local_58 = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0;
  local_68 = (System_Int32_array *)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38 = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__c *)0x0;
  local_d8._8_8_ = (void *)0x0;
  local_d8._16_8_ = (System_Int32_array *)0x0;
  bVar3 = System_IO_File__Exists((__this->fields)._path,(MethodInfo *)0x0);
  if (!bVar3) {
    pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore_ScoreFile);
    Settings_ExperienceScoreStore_ScoreFile___ctor(pSVar13,(MethodInfo *)0x0);
    return pSVar13;
  }
  pSVar5 = System_IO_File__ReadAllText((__this->fields)._path,(MethodInfo *)0x0);
  if ((pSVar5 == (System_String_o *)0x0) ||
     (pSVar6 = System_String__TrimStart(pSVar5,(MethodInfo *)0x0), pSVar6 == (System_String_o *)0x0)) {
label_059d761b:
    ThrowNullReferenceException();
  }
  bVar3 = System_String__StartsWith_53002b0(pSVar6,"{",4,(MethodInfo *)0x0);
  if (!bVar3) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
    SimpleAES___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 == (SimpleAES_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = SimpleAES__Decrypt(__this_01,pSVar5,(MethodInfo *)0x0);
  }
  pSVar7 = SimpleJSONFixed_JSON__Parse(pSVar5,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059d761b;
    bVar4 = (*(pSVar7->klass->vtable)._17_get_IsObject.methodPtr)
                      (pSVar7,(pSVar7->klass->vtable)._17_get_IsObject.method);
    if (bVar4) {
      pSVar8 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar7,"Records",(pSVar7->klass->vtable)._7_get_Item.method);
      if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059d761b;
      bVar4 = (*(pSVar8->klass->vtable)._16_get_IsArray.methodPtr)
                        (pSVar8,(pSVar8->klass->vtable)._16_get_IsArray.method);
      if (bVar4) {
        pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar7,"Records",(pSVar7->klass->vtable)._7_get_Item.method);
        if ((pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (pSVar9 = (*(pSVar7->klass->vtable)._45_get_AsArray.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._45_get_AsArray.method),
           pSVar9 == (SimpleJSONFixed_JSONArray_o *)0x0)) goto label_059d761b;
        (*(pSVar9->klass->vtable)._32_GetEnumerator.methodPtr)
                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)local_c0,pSVar9,
                   (pSVar9->klass->vtable)._32_GetEnumerator.method);
        local_38 = local_80;
        local_48 = local_90;
        uStack_40._0_4_ = iStack_88;
        uStack_40._4_4_ = iStack_84;
        local_58 = local_a0;
        pSStack_50 = pSStack_98;
        local_68 = (System_Int32_array *)local_c0._16_8_;
        pIStack_60 = pIStack_a8;
        local_78 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)local_c0._0_8_;
        pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_c0._8_8_;
        do {
          bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          if (!bVar4) {
            pSVar13 = (Settings_ExperienceScoreStore_ScoreFile_o *)
                      UnityEngine_JsonUtility__FromJson_object_
                                (pSVar5,(MethodInfo_356DE00 *)
                                        MethodInfo_UnityEngine_JsonUtility_FromJson_ExperienceScoreStore_ScoreFile
                                );
            if ((pSVar13 == (Settings_ExperienceScoreStore_ScoreFile_o *)0x0) ||
               ((pSVar13->fields).Records == (System_Collections_Generic_List_ExperienceScoreRecord__o *)0x0))
            {
              pSVar5 = (__this->fields)._path;
              goto label_059d762f;
            }
            if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
              if (g_data_075435b6 == '\0') goto label_059d7591;
label_059d741a:
              uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
            }
            else {
              if (g_data_075435b6 != '\0') goto label_059d741a;
label_059d7591:
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
              g_data_075435b6 = '\x01';
              uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
            }
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
            }
            comparer = TypeInfo_System_StringComparer->static_fields->s_ordinal;
            __this_02 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
            System_Collections_Generic_HashSet_object____ctor_4fb2f30
                      ((System_Collections_Generic_HashSet_object__o *)__this_02,
                       (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
                       (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708
                      );
            __this_00 = (pSVar13->fields).Records;
            if (__this_00 == (System_Collections_Generic_List_ExperienceScoreRecord__o *)0x0)
            goto label_059d761b;
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
                       (System_Collections_Generic_List_object__o *)__this_00,
                       (MethodInfo_395E050 *)
                       MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_GetEnumerator);
            local_d8._16_8_ = local_c0._16_8_;
            local_d8._0_8_ = local_c0._0_8_;
            local_d8._8_8_ = local_c0._8_8_;
            local_c0._0_8_ = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
            local_c0._8_8_ = local_d8;
            if (__this_02 != (System_Collections_Generic_HashSet_string__o *)0x0) {
              goto label_059d74d0;
            }
            pMVar12 = MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_MoveNext;
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_MoveNext
                              );
            uVar2 = local_d8._16_8_;
            if (!bVar4) goto label_059d75d9;
            if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
            }
            Settings_ExperienceScoreStore__Validate((Settings_ExperienceScoreRecord_o *)uVar2,pMVar12);
            if ((System_Int32_array *)uVar2 != (System_Int32_array *)0x0) {
              ThrowNullReferenceException();
            }
            goto label_059d766d;
          }
          aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059d761b;
          bVar4 = (*(pSVar7->klass->vtable)._17_get_IsObject.methodPtr)
                            (pSVar7,(pSVar7->klass->vtable)._17_get_IsObject.method);
          if (!bVar4) break;
          pSVar8 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar7,"ExperienceID",(pSVar7->klass->vtable)._7_get_Item.method);
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059d761b;
          bVar4 = (*(pSVar8->klass->vtable)._13_get_IsString.methodPtr)
                            (pSVar8,(pSVar8->klass->vtable)._13_get_IsString.method);
          if (!bVar4) break;
          pSVar8 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar7,"Score",(pSVar7->klass->vtable)._7_get_Item.method);
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059d761b;
          bVar4 = (*(pSVar8->klass->vtable)._12_get_IsNumber.methodPtr)
                            (pSVar8,(pSVar8->klass->vtable)._12_get_IsNumber.method);
          if (!bVar4) break;
          pSVar8 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar7,"Unit",(pSVar7->klass->vtable)._7_get_Item.method);
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059d761b;
          bVar4 = (*(pSVar8->klass->vtable)._13_get_IsString.methodPtr)
                            (pSVar8,(pSVar8->klass->vtable)._13_get_IsString.method);
          if (!bVar4) break;
          pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar7,"LowerIsBetter",(pSVar7->klass->vtable)._7_get_Item.method);
          if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059d761b;
          bVar4 = (*(pSVar7->klass->vtable)._14_get_IsBoolean.methodPtr)
                            (pSVar7,(pSVar7->klass->vtable)._14_get_IsBoolean.method);
        } while (bVar4);
        pSVar5 = (__this->fields)._path;
        metadataPointer = &"Invalid experience score record in: ";
        goto label_059d735a;
      }
    }
  }
  pSVar5 = (__this->fields)._path;
label_059d762f:
  metadataPointer = &"Invalid experience score file: ";
label_059d735a:
  pSVar6 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
  pSVar5 = System_String__Concat_52f0320(pSVar6,pSVar5,(MethodInfo *)0x0);
  pIVar10 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
  pSVar11 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar10);
  System_IO_InvalidDataException___ctor_628b0d0(pSVar11,pSVar5,(MethodInfo *)0x0);
  pMVar12 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Load);
  il2cpp_codegen_raise_exception((Il2CppObject *)pSVar11,pMVar12);
label_059d74d0:
  pMVar12 = MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_MoveNext;
  bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                     (MethodInfo_4C45C50 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_MoveNext);
  uVar2 = local_d8._16_8_;
  if (!bVar4) {
label_059d75d9:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_Dispose);
    if (bVar3) {
      Settings_ExperienceScoreStore__Write(__this,pSVar13,method_00);
    }
    return pSVar13;
  }
  if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
  }
  Settings_ExperienceScoreStore__Validate((Settings_ExperienceScoreRecord_o *)uVar2,pMVar12);
  if ((System_Int32_array *)uVar2 == (System_Int32_array *)0x0) {
label_059d766d:
    ThrowNullReferenceException();
  }
  bVar4 = System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this_02,
                     (Il2CppObject *)((Settings_ExperienceScoreRecord_Fields *)(uVar2 + 0x10))->ExperienceID,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  if (!bVar4) {
    pSVar5 = (__this->fields)._path;
    pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Duplicate experience score in: ");
    pSVar5 = System_String__Concat_52f0320(pSVar6,pSVar5,(MethodInfo *)0x0);
    pIVar10 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
    pSVar11 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar10);
    System_IO_InvalidDataException___ctor_628b0d0(pSVar11,pSVar5,(MethodInfo *)0x0);
    pMVar12 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Load);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar11,pMVar12);
  }
  goto label_059d74d0;
}


// Settings.ExperienceScoreStore$$Validate
// il2cpp: void Settings_ExperienceScoreStore__Validate (Settings_ExperienceScoreRecord_o* record, const MethodInfo* method);
// 0x59d7b40

void Settings_ExperienceScoreStore__Validate(Settings_ExperienceScoreRecord_o *record,MethodInfo *method)

{
  bool bVar1;
  Il2CppClass *pIVar2;
  System_ArgumentException_o *__this;
  System_String_o *pSVar3;
  MethodInfo *lastManagedFrame;
  System_String_o **metadataPointer;
  
  if (record != (Settings_ExperienceScoreRecord_o *)0x0) {
    bVar1 = System_String__IsNullOrWhiteSpace((record->fields).ExperienceID,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((~(uint)(record->fields).Score & 0x7f800000) == 0) {
        pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar2);
        metadataPointer = &"Experience scores must be finite numbers.";
      }
      else {
        bVar1 = System_String__IsNullOrWhiteSpace((record->fields).Unit,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar3 = (record->fields).Unit;
          if (pSVar3 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pSVar3->fields)._stringLength < 0x41) {
            return;
          }
        }
        pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar2);
        metadataPointer = &"Experience score units must contain between 1 and 64 characters.";
      }
      goto label_059d7be6;
    }
  }
  pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar2);
  metadataPointer = &"An experience ID is required.";
label_059d7be6:
  pSVar3 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
  System_ArgumentException___ctor_54186d0(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Validate);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// Settings.ExperienceScoreStore$$.cctor
// il2cpp: void Settings_ExperienceScoreStore___cctor (const MethodInfo* method);
// 0x59d7dd0

void Settings_ExperienceScoreStore___cctor(MethodInfo *method)

{
  System_String_o *directory;
  Settings_ExperienceScoreStore_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545c9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_07545c9f = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  directory = TypeInfo_Utility_FolderPaths->static_fields->GameProgress;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
  Settings_ExperienceScoreStore___ctor(__this,directory,method_00);
  TypeInfo_Settings_ExperienceScoreStore->static_fields->Local = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_ExperienceScoreStore->static_fields->Local);
  return;
}


