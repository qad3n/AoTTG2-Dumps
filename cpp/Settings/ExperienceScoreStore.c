// Type: Settings.ExperienceScoreStore
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/ExperienceScoreStore.cs
// Prior real C# source: none
// --------------------------------

// Settings.ExperienceScoreStore.ScoreFile$$.ctor
// il2cpp: void Settings_ExperienceScoreStore_ScoreFile___ctor (Settings_ExperienceScoreStore_ScoreFile_o* __this, const MethodInfo* method);
// 0x181dceee0

void Settings_ExperienceScoreStore_ScoreFile___ctor
               (Settings_ExperienceScoreStore_ScoreFile_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ExperienceScoreRecord__o *__this_00;
  
  if (Il2CppMethodInitialized_184344a2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ExperienceScoreRecord);
    Il2CppMethodInitialized_184344a2d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceScoreRecord);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_ctor);
  (__this->fields).Records = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Records,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.ExperienceScoreStore.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Settings_ExperienceScoreStore___c__DisplayClass5_0___ctor (Settings_ExperienceScoreStore___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_ExperienceScoreStore___c__DisplayClass5_0___ctor(Settings_ExperienceScoreStore___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.ExperienceScoreStore.<>c__DisplayClass5_0$$<Get>b__0
// il2cpp: bool Settings_ExperienceScoreStore___c__DisplayClass5_0___Get_b__0 (Settings_ExperienceScoreStore___c__DisplayClass5_0_o* __this, Settings_ExperienceScoreRecord_o* record, const MethodInfo* method);
// 0x181c31620

bool
Settings_ExperienceScoreStore___c__DisplayClass5_0___Get_b__0(Settings_ExperienceScoreStore___c__DisplayClass5_0_o* __this, Settings_ExperienceScoreRecord_o* record, MethodInfo* method)

{
  bool bVar1;
  
  if (d != (Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((d->fields)._ContractTypeName_k__BackingField,(__this->fields).experienceID,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Settings.ExperienceScoreStore.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Settings_ExperienceScoreStore___c__DisplayClass6_0___ctor (Settings_ExperienceScoreStore___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_ExperienceScoreStore___c__DisplayClass6_0___ctor(Settings_ExperienceScoreStore___c__DisplayClass6_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.ExperienceScoreStore.<>c__DisplayClass6_0$$<Save>b__0
// il2cpp: bool Settings_ExperienceScoreStore___c__DisplayClass6_0___Save_b__0 (Settings_ExperienceScoreStore___c__DisplayClass6_0_o* __this, Settings_ExperienceScoreRecord_o* existing, const MethodInfo* method);
// 0x181c31620

bool
Settings_ExperienceScoreStore___c__DisplayClass6_0___Save_b__0(Settings_ExperienceScoreStore___c__DisplayClass6_0_o* __this, Settings_ExperienceScoreRecord_o* existing, MethodInfo* method)

{
  bool bVar1;
  
  if (d != (Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((d->fields)._ContractTypeName_k__BackingField,(__this->fields).experienceID,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Settings.ExperienceScoreStore$$.ctor
// il2cpp: void Settings_ExperienceScoreStore___ctor (Settings_ExperienceScoreStore_o* __this, System_String_o* directory, const MethodInfo* method);
// 0x181dbf890

void Settings_ExperienceScoreStore___ctor
               (Settings_ExperienceScoreStore_o *__this,System_String_o *directory,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344a27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceScores.json");
    Il2CppMethodInitialized_184344a27 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._directory = directory;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._directory,directory);
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  value = System_IO_Path__Combine(directory,"ExperienceScores.json",(MethodInfo *)0x0);
  (__this->fields)._path = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._path,value);
  return;
}


// Settings.ExperienceScoreStore$$Get
// il2cpp: Settings_ExperienceScoreRecord_o* Settings_ExperienceScoreStore__Get (Settings_ExperienceScoreStore_o* __this, System_String_o* experienceID, const MethodInfo* method);
// 0x181dbe6b0

Settings_ExperienceScoreRecord_o *
Settings_ExperienceScoreStore__Get
          (Settings_ExperienceScoreStore_o *__this,System_String_o *experienceID,MethodInfo *method)

{
  System_Collections_Generic_List_ExperienceScoreRecord__o *__this_00;
  bool bVar1;
  Settings_ExperienceScoreStore___c__DisplayClass5_0_o *object;
  Settings_ExperienceScoreStore_ScoreFile_o *pSVar2;
  System_Predicate_T__o *match;
  UnityEngine_Rendering_ProbeVolumeStreamableAsset_StreamableCellDesc_o UVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  System_String_o *paramName;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184344a28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_Find);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_ExperienceScoreRecord);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_ExperienceScoreStore_c__DisplayClass5_0_Get_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore_c__DisplayClass5_0);
    Il2CppMethodInitialized_184344a28 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore_c__DisplayClass5_0)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Settings_ExperienceScoreStore___c__DisplayClass5_0_o *)0x0) {
    (object->fields).experienceID = experienceID;
    Il2CppCodeGenWriteBarrier(&(object->fields).experienceID,experienceID);
    bVar1 = System_String__IsNullOrWhiteSpace((object->fields).experienceID,(MethodInfo *)0x0);
    if (bVar1) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      paramName = il2cpp_codegen_get_runtime_metadata(&"experienceID");
      message = il2cpp_codegen_get_runtime_metadata(&"An experience ID is required.");
      System_ArgumentException___ctor_1a77d80(__this_01,message,paramName,(MethodInfo *)0x0);
      lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Get);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    pSVar2 = Settings_ExperienceScoreStore__Load(__this,(MethodInfo *)0x0);
    if (pSVar2 != (Settings_ExperienceScoreStore_ScoreFile_o *)0x0) {
      __this_00 = (pSVar2->fields).Records;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_ExperienceScoreRecord);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_Settings_ExperienceScoreStore_c__DisplayClass5_0_Get_b__0,
                 (MethodInfo_B61EB0 *)0x0);
      if (__this_00 != (System_Collections_Generic_List_ExperienceScoreRecord__o *)0x0) {
        UVar3 = System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___Find
                          ((System_Collections_Generic_List_T__o *)__this_00,match,
                           (MethodInfo_91E910 *)
                           MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_Find);
        return (Settings_ExperienceScoreRecord_o *)UVar3.fields;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.ExperienceScoreStore$$Save
// il2cpp: void Settings_ExperienceScoreStore__Save (Settings_ExperienceScoreStore_o* __this, System_String_o* experienceID, float score, System_String_o* unit, bool lowerIsBetter, const MethodInfo* method);
// 0x181dbf230

void Settings_ExperienceScoreStore__Save
               (Settings_ExperienceScoreStore_o *__this,System_String_o *experienceID,float score,
               System_String_o *unit,bool lowerIsBetter,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *value;
  System_Collections_Generic_List_ExperienceScoreRecord__o *pSVar3;
  Settings_ExperienceScoreRecord_array *pSVar4;
  MethodInfo *pMVar5;
  Settings_ExperienceScoreStore___c__DisplayClass6_0_o *object;
  Settings_ExperienceScoreRecord_o *record;
  Settings_ExperienceScoreStore_ScoreFile_o *file;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_184344a29 == '\0') {
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
    Il2CppMethodInitialized_184344a29 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore_c__DisplayClass6_0)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Settings_ExperienceScoreStore___c__DisplayClass6_0_o *)0x0) {
    (object->fields).experienceID = experienceID;
    Il2CppCodeGenWriteBarrier(&(object->fields).experienceID,experienceID);
    record = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceScoreRecord);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)record,(MethodInfo *)0x0);
    if (record != (Settings_ExperienceScoreRecord_o *)0x0) {
      value = (object->fields).experienceID;
      (record->fields).ExperienceID = value;
      Il2CppCodeGenWriteBarrier(&(record->fields).ExperienceID,value);
      (record->fields).Score = score;
      (record->fields).Unit = unit;
      Il2CppCodeGenWriteBarrier(&(record->fields).Unit,unit);
      (record->fields).LowerIsBetter = lowerIsBetter;
      if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
      }
      Settings_ExperienceScoreStore__Validate(record,(MethodInfo *)0x0);
      file = Settings_ExperienceScoreStore__Load(__this,(MethodInfo *)0x0);
      if (file != (Settings_ExperienceScoreStore_ScoreFile_o *)0x0) {
        pSVar3 = (file->fields).Records;
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_ExperienceScoreRecord);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_Settings_ExperienceScoreStore_c__DisplayClass6_0_Save_b__0,
                   (MethodInfo_B61EB0 *)0x0);
        if (pSVar3 != (System_Collections_Generic_List_ExperienceScoreRecord__o *)0x0) {
          System_Collections_Generic_List_object___RemoveAll
                    ((System_Collections_Generic_List_object__o *)pSVar3,match,
                     (MethodInfo_946210 *)
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
                if ((uint)pSVar4->max_length <= uVar2) {
                  ThrowIndexOutOfRangeException();
                }
                pSVar4->m_Items[(int)uVar2] = record;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,record);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)record,
                           (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              Settings_ExperienceScoreStore__Write(__this,file,(MethodInfo *)0x0);
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
// 0x181dbf5b0
// eh: try 0x181dbf681..0x181dbf76a -> pad 0x183315a20 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dbf717: jmp 0x181dbf75a
// asm:   0x181dbf744: jmp 0x181dbf75a
// asm:   0x181dbf746: lea rcx, [rsp + 0x40]
// asm:   0x181dbf74b: call 0x181db8f70  ; il2cpp_runtime_helper_181db8f70()
// asm:   0x181dbf750: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181dbf755: test rcx, rcx
// asm:   0x181dbf758: jne 0x181dbf76a
// asm:   0x181dbf76a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Settings_ExperienceScoreStore__Write
               (Settings_ExperienceScoreStore_o *__this,Settings_ExperienceScoreStore_ScoreFile_o *file,
               MethodInfo *method)

{
  bool bVar1;
  System_Guid_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  SimpleAES_o *__this_00;
  System_String_o *local_res8 [4];
  undefined1 local_50 [16];
  System_Guid_Fields local_40 [2];
  
  if (Il2CppMethodInitialized_184344a2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    il2cpp_codegen_initialize_runtime_metadata(&".tmp");
    il2cpp_codegen_initialize_runtime_metadata(&"N");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_184344a2a = '\x01';
  }
  local_res8[0] = (System_String_o *)0x0;
  local_40[0]._a = 0;
  local_40[0]._b = 0;
  local_40[0]._c = 0;
  local_40[0]._d = '\0';
  local_40[0]._e = '\0';
  local_40[0]._f = '\0';
  local_40[0]._g = '\0';
  local_40[0]._h = '\0';
  local_40[0]._i = '\0';
  local_40[0]._j = '\0';
  local_40[0]._k = '\0';
  System_IO_Directory__CreateDirectory((__this->fields)._directory,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._path;
  pSVar2 = System_Guid__NewGuid((System_Guid_o *)local_50,(MethodInfo *)0x0);
  local_40[0]._a = (pSVar2->fields)._a;
  local_40[0]._b = (pSVar2->fields)._b;
  local_40[0]._c = (pSVar2->fields)._c;
  local_40[0]._d = (pSVar2->fields)._d;
  local_40[0]._e = (pSVar2->fields)._e;
  local_40[0]._f = (pSVar2->fields)._f;
  local_40[0]._g = (pSVar2->fields)._g;
  local_40[0]._h = (pSVar2->fields)._h;
  local_40[0]._i = (pSVar2->fields)._i;
  local_40[0]._j = (pSVar2->fields)._j;
  local_40[0]._k = (pSVar2->fields)._k;
  pSVar3 = System_Guid__ToString_1b24e80((System_Guid_o *)local_40,"N",(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_1969590
                     (pSVar4,".",pSVar3,".tmp",(MethodInfo *)0x0);
  local_50._0_4_ = 0;
  local_50._4_2_ = 0;
  local_50._6_2_ = 0;
  local_50._8_8_ = local_res8;
  local_res8[0] = pSVar4;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
  SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
  pSVar3 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)file,(MethodInfo *)0x0);
  if (__this_00 == (SimpleAES_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = SimpleAES__Encrypt(__this_00,pSVar3,(MethodInfo *)0x0);
  System_IO_File__WriteAllText(pSVar4,pSVar3,(MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists((__this->fields)._path,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._path;
  if (bVar1) {
    System_IO_File__Replace(local_res8[0],pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
    bVar1 = System_IO_File__Exists(local_res8[0],(MethodInfo *)0x0);
    if (bVar1) {
      System_IO_File__Delete(local_res8[0],(MethodInfo *)0x0);
    }
  }
  else {
    System_IO_File__Move(local_res8[0],pSVar4,(MethodInfo *)0x0);
    bVar1 = System_IO_File__Exists(local_res8[0],(MethodInfo *)0x0);
    if (bVar1) {
      System_IO_File__Delete(local_res8[0],(MethodInfo *)0x0);
    }
  }
  return;
}


// Settings.ExperienceScoreStore$$Load
// il2cpp: Settings_ExperienceScoreStore_ScoreFile_o* Settings_ExperienceScoreStore__Load (Settings_ExperienceScoreStore_o* __this, const MethodInfo* method);
// 0x181dbe800
// eh: try 0x181dbe9bf..0x181dbee7a -> pad 0x18333beb0 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181dbee7a..0x181dbee9a -> pad 0x18333c010 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_ArgumentException]
// eh: try 0x181dbee9a..0x181dbf163 -> pad 0x183335570 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 208 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dbec1e: mov r8, qword ptr [rsp + 0xc0]
// asm:   0x181dbeda6: jmp 0x181dbeb56
// asm:   0x181dbeec7: jmp 0x181dbee60
// asm:   0x181dbeeda: mov rdx, qword ptr [rip + 0x22c0107]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_Dispose
// asm:   0x181dbeee1: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dbeee6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dbeeeb: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181dbeef0: test rcx, rcx
// asm:   0x181dbeef3: jne 0x181dbf163
// asm:   0x181dbeef9: mov r15, qword ptr [rsp + 0x160]
// asm:   0x181dbef01: movzx r12d, byte ptr [rsp + 0x170]
// asm:   0x181dbef0a: mov r14, qword ptr [rsp + 0x178]
// asm:   0x181dbefba: mov rax, qword ptr [rsp + 0x160]
// asm:   0x181dbefc2: mov rbx, qword ptr [rax + 0x18]
// asm:   0x181dbefc6: lea rcx, [rip + 0x22c8873]  ; "Could not decrypt experience score file: "
// asm:   0x181dbefcd: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dbefd2: mov rcx, rax
// asm:   0x181dbefd5: xor r8d, r8d
// asm:   0x181dbefd8: mov rdx, rbx
// asm:   0x181dbefdb: call 0x181969e50  ; System_String__Concat()
// asm:   0x181dbefe0: mov rbx, rax
// asm:   0x181dbefe3: lea rcx, [rip + 0x22ef126]  ; TypeInfo_System_IO_InvalidDataException
// asm:   0x181dbefea: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dbefef: mov rcx, rax
// asm:   0x181dbeff2: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181dbeff7: mov rdi, rax
// asm:   0x181dbeffa: xor r9d, r9d
// asm:   0x181dbeffd: mov r8, qword ptr [rsp + 0x178]
// asm:   0x181dbf005: mov rdx, rbx
// asm:   0x181dbf008: mov rcx, rax
// asm:   0x181dbf00b: call 0x182902ef0  ; System_IO_InvalidDataException___ctor()
// asm:   0x181dbf010: lea rcx, [rip + 0x22cc471]  ; MethodInfo_Settings_ExperienceScoreStore_Load
// asm:   0x181dbf017: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dbf01c: mov rdx, rax
// asm:   0x181dbf01f: mov rcx, rdi
// asm:   0x181dbf022: call 0x1804170e0  ; il2cpp_codegen_raise_exception()
// asm:   0x181dbf0ed: lea rcx, [rsp + 0x68]
// asm:   0x181dbf0f2: call 0x180012a10  ; il2cpp_runtime_helper_180012a10()
// asm:   0x181dbf0f7: mov rsi, rax
// asm:   0x181dbf0fa: mov rcx, qword ptr [rsp + 0x160]
// asm:   0x181dbf102: mov rbx, qword ptr [rcx + 0x18]
// asm:   0x181dbf106: lea rcx, [rip + 0x22fe3bb]  ; "Invalid experience score file: "
// asm:   0x181dbf10d: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dbf112: xor r8d, r8d
// asm:   0x181dbf115: mov rdx, rbx
// asm:   0x181dbf118: mov rcx, rax
// asm:   0x181dbf11b: call 0x181969e50  ; System_String__Concat()
// asm:   0x181dbf120: mov rdi, rax
// asm:   0x181dbf123: lea rcx, [rip + 0x22eefe6]  ; TypeInfo_System_IO_InvalidDataException
// asm:   0x181dbf12a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dbf12f: mov rcx, rax
// asm:   0x181dbf132: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181dbf137: mov rbx, rax
// asm:   0x181dbf13a: xor r9d, r9d
// asm:   0x181dbf13d: mov r8, rsi
// asm:   0x181dbf140: mov rdx, rdi
// asm:   0x181dbf143: mov rcx, rax
// asm:   0x181dbf146: call 0x182902ef0  ; System_IO_InvalidDataException___ctor()
// asm:   0x181dbf14b: lea rcx, [rip + 0x22cc336]  ; MethodInfo_Settings_ExperienceScoreStore_Load
// asm:   0x181dbf152: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dbf157: mov rdx, rax
// asm:   0x181dbf15a: mov rcx, rbx
// asm:   0x181dbf15d: call 0x1804170e0  ; il2cpp_codegen_raise_exception()
// asm:   0x181dbf163: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183335570: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183335575: push rbp
// asm:   0x183335576: sub rsp, 0x20
// asm:   0x18333557a: mov rbp, rdx
// asm:   0x18333557d: mov rax, qword ptr [rbp + 0xd8]
// asm:   0x183335584: mov rcx, qword ptr [rax]
// asm:   0x183335587: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333558b: movabs rax, 0
// asm:   0x183335595: add rsp, 0x20
// asm:   0x183335599: pop rbp
// asm:   0x18333559a: ret 
// asm:   0x18333beb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333beb5: push rbx
// asm:   0x18333beb6: push rbp
// asm:   0x18333beb7: push rsi
// asm:   0x18333beb8: push rdi
// asm:   0x18333beb9: sub rsp, 0x28
// asm:   0x18333bebd: mov rbp, rdx
// asm:   0x18333bec0: mov rdi, qword ptr [rbp + 0x50]
// asm:   0x18333bec4: mov rsi, qword ptr [rdi]
// asm:   0x18333bec7: lea rcx, [rip + 0xd3d08a]  ; TypeInfo_System_Exception
// asm:   0x18333bece: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333bed3: test rsi, rsi
// asm:   0x18333bed6: je 0x18333bfc3
// asm:   0x18333bedc: mov r8, qword ptr [rsi]
// asm:   0x18333bedf: movzx ecx, byte ptr [rax + 0x130]
// asm:   0x18333bee6: cmp byte ptr [r8 + 0x130], cl
// asm:   0x18333beed: jb 0x18333bf08
// asm:   0x18333beef: movzx ecx, cl
// asm:   0x18333bef2: dec ecx
// asm:   0x18333bef4: movsxd rdx, ecx
// asm:   0x18333bef7: mov rcx, qword ptr [r8 + 0xc8]
// asm:   0x18333befe: cmp qword ptr [rcx + rdx*8], rax
// asm:   0x18333bf02: jne 0x18333bf08
// asm:   0x18333bf04: mov al, 1
// asm:   0x18333bf06: jmp 0x18333bf0a
// asm:   0x18333bf08: xor al, al
// asm:   0x18333bf0a: xor ebx, ebx
// asm:   0x18333bf0c: test al, al
// asm:   0x18333bf0e: cmovne rbx, rsi
// asm:   0x18333bf12: test rbx, rbx
// asm:   0x18333bf15: je 0x18333bfc3
// asm:   0x18333bf1b: mov qword ptr [rbp + 0x178], rbx
// asm:   0x18333bf22: lea rcx, [rip + 0xd442c7]  ; TypeInfo_System_FormatException
// asm:   0x18333bf29: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333bf2e: mov r8, qword ptr [rbx]
// asm:   0x18333bf31: movzx ecx, byte ptr [rax + 0x130]
// asm:   0x18333bf38: cmp byte ptr [r8 + 0x130], cl
// asm:   0x18333bf3f: jb 0x18333bf5a
// asm:   0x18333bf41: movzx ecx, cl
// asm:   0x18333bf44: dec ecx
// asm:   0x18333bf46: movsxd rdx, ecx
// asm:   0x18333bf49: mov rcx, qword ptr [r8 + 0xc8]
// asm:   0x18333bf50: cmp qword ptr [rcx + rdx*8], rax
// asm:   0x18333bf54: jne 0x18333bf5a
// asm:   0x18333bf56: mov cl, 1
// asm:   0x18333bf58: jmp 0x18333bf5c
// asm:   0x18333bf5a: xor cl, cl
// asm:   0x18333bf5c: xor eax, eax
// asm:   0x18333bf5e: test cl, cl
// asm:   0x18333bf60: cmovne rax, rbx
// asm:   0x18333bf64: test rax, rax
// asm:   0x18333bf67: je 0x18333bf70
// asm:   0x18333bf69: mov ecx, 1
// asm:   0x18333bf6e: jmp 0x18333bfba
// asm:   0x18333bf70: lea rcx, [rip + 0xdacd31]  ; TypeInfo_System_Security_Cryptography_CryptographicException
// asm:   0x18333bf77: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333bf7c: mov r8, qword ptr [rbx]
// asm:   0x18333bf7f: movzx ecx, byte ptr [rax + 0x130]
// asm:   0x18333bf86: cmp byte ptr [r8 + 0x130], cl
// asm:   0x18333bf8d: jb 0x18333bfa8
// asm:   0x18333bf8f: movzx ecx, cl
// asm:   0x18333bf92: dec ecx
// asm:   0x18333bf94: movsxd rdx, ecx
// asm:   0x18333bf97: mov rcx, qword ptr [r8 + 0xc8]
// asm:   0x18333bf9e: cmp qword ptr [rcx + rdx*8], rax
// asm:   0x18333bfa2: jne 0x18333bfa8
// asm:   0x18333bfa4: mov cl, 1
// asm:   0x18333bfa6: jmp 0x18333bfaa
// asm:   0x18333bfa8: xor cl, cl
// asm:   0x18333bfaa: xor eax, eax
// asm:   0x18333bfac: test cl, cl
// asm:   0x18333bfae: cmovne rax, rbx
// asm:   0x18333bfb2: xor ecx, ecx
// asm:   0x18333bfb4: test rax, rax
// asm:   0x18333bfb7: setne cl
// asm:   0x18333bfba: xor eax, eax
// asm:   0x18333bfbc: test ecx, ecx
// asm:   0x18333bfbe: setne al
// asm:   0x18333bfc1: jmp 0x18333bfc5
// asm:   0x18333bfc3: xor eax, eax
// asm:   0x18333bfc5: test eax, eax
// asm:   0x18333bfc7: setne al
// asm:   0x18333bfca: test al, al
// asm:   0x18333bfcc: je 0x18333bfeb
// asm:   0x18333bfce: mov rdx, qword ptr [rdi]
// asm:   0x18333bfd1: lea rcx, [rbp + 0x68]
// asm:   0x18333bfd5: call 0x180012a00  ; il2cpp_runtime_helper_180012a00()
// asm:   0x18333bfda: nop 
// asm:   0x18333bfdb: movabs rax, 0
// asm:   0x18333bfe5: jmp 0x18333c003
// asm:   0x18333bfeb: mov rax, qword ptr [rdi]
// asm:   0x18333bfee: mov qword ptr [rbp + 0x58], rax
// asm:   0x18333bff2: lea rdx, [rip + 0xc9ff8f]
// asm:   0x18333bff9: lea rcx, [rbp + 0x58]
// asm:   0x18333bffd: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333c003: add rsp, 0x28
// asm:   0x18333c007: pop rdi
// asm:   0x18333c008: pop rsi
// asm:   0x18333c009: pop rbp
// asm:   0x18333c00a: pop rbx
// asm:   0x18333c00b: ret 
// asm:   0x18333c010: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c015: push rbx
// asm:   0x18333c016: push rbp
// asm:   0x18333c017: push rdi
// asm:   0x18333c018: sub rsp, 0x20
// asm:   0x18333c01c: mov rbp, rdx
// asm:   0x18333c01f: mov rbx, qword ptr [rbp + 0xd0]
// asm:   0x18333c026: mov rax, qword ptr [rbx]
// asm:   0x18333c029: mov rdi, qword ptr [rax]
// asm:   0x18333c02c: lea rcx, [rip + 0xd8bd7d]  ; TypeInfo_System_ArgumentException
// asm:   0x18333c033: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333c038: mov rdx, rdi
// asm:   0x18333c03b: mov rcx, rax
// asm:   0x18333c03e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333c043: test al, al
// asm:   0x18333c045: je 0x18333c060
// asm:   0x18333c047: mov rdx, qword ptr [rbx]
// asm:   0x18333c04a: lea rcx, [rbp + 0x68]
// asm:   0x18333c04e: call 0x180012a00  ; il2cpp_runtime_helper_180012a00()
// asm:   0x18333c053: nop 
// asm:   0x18333c054: movabs rax, 0
// asm:   0x18333c05e: jmp 0x18333c078
// asm:   0x18333c060: mov rax, qword ptr [rbx]
// asm:   0x18333c063: mov qword ptr [rbp + 0x60], rax
// asm:   0x18333c067: lea rdx, [rip + 0xc9ff1a]
// asm:   0x18333c06e: lea rcx, [rbp + 0x60]
// asm:   0x18333c072: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333c078: add rsp, 0x20
// asm:   0x18333c07c: pop rdi
// asm:   0x18333c07d: pop rbp
// asm:   0x18333c07e: pop rbx
// asm:   0x18333c07f: ret 

Settings_ExperienceScoreStore_ScoreFile_o *
Settings_ExperienceScoreStore__Load(Settings_ExperienceScoreStore_o *__this,MethodInfo *method)

{
  System_Type_Fields record;
  bool bVar1;
  bool bVar2;
  char cVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  SimpleAES_o *__this_00;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  Settings_ExperienceScoreStore_ScoreFile_o *pSVar9;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_HashSet_string__o *__this_01;
  System_Collections_Generic_List_ExperienceScoreRecord__o *pSVar10;
  Il2CppClass *pIVar11;
  System_IO_InvalidDataException_o *pSVar12;
  MethodInfo *pMVar13;
  System_Type_o *pSVar14;
  undefined1 local_138 [8];
  System_Type_o *pSStack_130;
  System_RuntimeTypeHandle_o local_128;
  System_Type_o local_120 [2];
  undefined4 local_e8;
  undefined8 local_d8;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o SStack_d0;
  System_Collections_Generic_List_Enumerator_object__o local_a8 [2];
  undefined1 local_78 [80];
  
  if (Il2CppMethodInitialized_184344a2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
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
    Il2CppMethodInitialized_184344a2b = '\x01';
  }
  local_d8 = 0;
  SStack_d0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_d0.fields._version = 0;
  SStack_d0.fields._index = 0;
  SStack_d0.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_d0.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_d0.fields._getEnumeratorRetType = 0;
  SStack_d0.fields._36_4_ = 0;
  local_a8[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8[0].fields._index = 0;
  local_a8[0].fields._version = 0;
  local_a8[0].fields._current = (Il2CppObject *)0x0;
  local_120[0].klass = (System_Type_c *)0x0;
  local_120[0].monitor = (void *)0x0;
  local_120[0].fields._impl.fields.value = (System_RuntimeTypeHandle_o)(System_RuntimeTypeHandle_Fields)0x0;
  local_e8 = 0;
  bVar1 = System_IO_File__Exists((__this->fields)._path,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore_ScoreFile);
    if (Il2CppMethodInitialized_184344a2d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_List_ExperienceScoreRecord);
      Il2CppMethodInitialized_184344a2d = '\x01';
    }
    pSVar10 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceScoreRecord);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar10,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_ctor);
    (pSVar9->fields).Records = pSVar10;
    Il2CppCodeGenWriteBarrier(&(pSVar9->fields).Records,pSVar10);
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pSVar9,(MethodInfo *)0x0);
    return pSVar9;
  }
  pSVar4 = System_IO_File__ReadAllText((__this->fields)._path,(MethodInfo *)0x0);
  if ((pSVar4 != (System_String_o *)0x0) &&
     (pSVar5 = System_String__TrimStart(pSVar4,(MethodInfo *)0x0), pSVar5 != (System_String_o *)0x0)) {
    bVar1 = System_String__StartsWith_19722c0(pSVar5,"{",4,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
      SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (SimpleAES_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar4 = SimpleAES__Decrypt(__this_00,pSVar4,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_1843449eb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843449eb = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    a = SimpleJSONFixed_JSONNode__Parse(pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
label_181dbf1c7:
      pSVar4 = (__this->fields)._path;
      pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Invalid experience score file: ");
      pSVar4 = System_String__Concat_1969e50(pSVar5,pSVar4,(MethodInfo *)0x0);
      pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
      pSVar12 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar11);
      System_IO_InvalidDataException___ctor_2902f10(pSVar12,pSVar4,(MethodInfo *)0x0);
      pMVar13 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Load);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar12,pMVar13);
    }
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar2 = (*(a->klass->vtable)._17_get_IsObject.methodPtr)(a,(a->klass->vtable)._17_get_IsObject.method);
      if (!bVar2) goto label_181dbf1c7;
      pSVar6 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"Records");
      if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        cVar3 = (*((Il2CppClass *)pSVar6->klass)->vtable[16].methodPtr)
                          (pSVar6,*(undefined8 *)&((Il2CppClass *)pSVar6->klass)->vtable[16].method);
        if (cVar3 == '\0') goto label_181dbf1c7;
        pSVar6 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"Records");
        if ((pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
           (plVar7 = (longlong *)
                     (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[45].methodPtr)
                               (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[45].method),
           plVar7 != (longlong *)0x0)) {
          puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x338))(local_78,plVar7);
          local_d8 = *puVar8;
          SStack_d0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar8[1];
          SStack_d0.fields._8_8_ = puVar8[2];
          SStack_d0.fields._current.fields.key = (Il2CppObject *)puVar8[3];
          SStack_d0.fields._current.fields.value = (Il2CppObject *)puVar8[4];
          SStack_d0.fields._32_8_ = puVar8[5];
          local_a8[0].fields._list = (System_Collections_Generic_List_T__o *)puVar8[6];
          local_a8[0].fields._8_8_ = puVar8[7];
          local_a8[0].fields._current = (Il2CppObject *)puVar8[8];
          do {
            if (Il2CppMethodInitialized_184344986 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext);
              Il2CppMethodInitialized_184344986 = '\x01';
            }
            if ((int)local_d8 != 1) {
              if ((int)local_d8 == 2) {
                bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                  (&SStack_d0,
                                   (MethodInfo_1585360 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_MoveNext
                                  );
                goto label_181dbebbd;
              }
label_181dbedab:
              pSVar9 = (Settings_ExperienceScoreStore_ScoreFile_o *)
                       UnityEngine_JsonUtility__FromJson_object_
                                 (pSVar4,(MethodInfo_715EE0 *)
                                         MethodInfo_UnityEngine_JsonUtility_FromJson_ExperienceScoreStore_ScoreFile
                                 );
              if ((pSVar9 == (Settings_ExperienceScoreStore_ScoreFile_o *)0x0) ||
                 ((pSVar9->fields).Records == (System_Collections_Generic_List_ExperienceScoreRecord__o *)0x0)
                 ) {
                pSVar4 = (__this->fields)._path;
                pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Invalid experience score file: ");
                pSVar4 = System_String__Concat_1969e50(pSVar5,pSVar4,(MethodInfo *)0x0);
                pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
                pSVar12 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar11);
                System_IO_InvalidDataException___ctor_2902f10(pSVar12,pSVar4,(MethodInfo *)0x0);
                pMVar13 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Load);
                il2cpp_codegen_raise_exception((Il2CppObject *)pSVar12,pMVar13);
              }
              if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
              }
              comparer = (System_Collections_Generic_IEqualityComparer_T__o *)il2cpp_runtime_helper_181a59190(0);
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
              System_Collections_Generic_HashSet_object____ctor_176d450
                        ((System_Collections_Generic_HashSet_object__o *)__this_01,comparer,
                         (MethodInfo_176D450 *)
                         MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
              pSVar10 = (pSVar9->fields).Records;
              if (pSVar10 != (System_Collections_Generic_List_ExperienceScoreRecord__o *)0x0) {
                System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_138,
                           (System_Collections_Generic_List_T__o *)pSVar10,
                           (MethodInfo_91F180 *)
                           MethodInfo_System_Collections_Generic_List_ExperienceScoreRecord_GetEnumerator);
                local_120[0].klass = (System_Type_c *)local_138;
                local_120[0].monitor = pSStack_130;
                local_120[0].fields._impl.fields.value =
                     (System_RuntimeTypeHandle_o)(System_RuntimeTypeHandle_o)local_128.fields.value;
                local_138 = (undefined1  [8])0x0;
                pSStack_130 = local_120;
                while( true ) {
                  bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_object__o *)local_120,
                                     (MethodInfo_153A2A0 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_MoveNext
                                    );
                  record._impl.fields.value = local_120[0].fields._impl.fields.value;
                  if (!bVar2) {
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_120,
                               MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceScoreRecord_Dispose
                              );
                    if (!bVar1) {
                      return pSVar9;
                    }
                    Settings_ExperienceScoreStore__Write(__this,pSVar9,(MethodInfo *)0x0);
                    return pSVar9;
                  }
                  if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
                  }
                  Settings_ExperienceScoreStore__Validate
                            ((Settings_ExperienceScoreRecord_o *)record._impl.fields.value,(MethodInfo *)0x0);
                  if (record._impl.fields.value == (System_RuntimeTypeHandle_Fields)0x0) break;
                  if (__this_01 == (System_Collections_Generic_HashSet_string__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar2 = System_Collections_Generic_HashSet_object___Add
                                    ((System_Collections_Generic_HashSet_object__o *)__this_01,
                                     (Il2CppObject *)
                                     ((Settings_ExperienceScoreRecord_Fields *)
                                     ((longlong)record._impl.fields.value + 0x10))->ExperienceID,
                                     (MethodInfo_1757CE0 *)
                                     MethodInfo_System_Collections_Generic_HashSet_string_Add);
                  if (!bVar2) {
                    pSVar4 = (__this->fields)._path;
                    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Duplicate experience score in: ");
                    pSVar4 = System_String__Concat_1969e50(pSVar5,pSVar4,(MethodInfo *)0x0);
                    pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
                    pSVar12 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar11);
                    System_IO_InvalidDataException___ctor_2902f10(pSVar12,pSVar4,(MethodInfo *)0x0);
                    pMVar13 = il2cpp_codegen_get_runtime_metadata
                                        (&MethodInfo_Settings_ExperienceScoreStore_Load);
                    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar12,pMVar13);
                  }
                }
                ThrowNullReferenceException();
              }
              goto label_181dbf225;
            }
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (local_a8,(MethodInfo_153A2A0 *)
                                        MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_MoveNext
                              );
label_181dbebbd:
            if (bVar2 == false) goto label_181dbedab;
            if (Il2CppMethodInitialized_184344985 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_JSONNode_get_Current
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_Enumerator_JSONNode_get_Current);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
              Il2CppMethodInitialized_184344985 = '\x01';
            }
            pSVar14 = (System_Type_o *)local_a8[0].fields._current;
            if ((int)local_d8 == 1) {
label_181dbec26:
              local_138 = (undefined1  [8])0x0;
              pSStack_130 = (System_Type_o *)0x0;
              System_Collections_Generic_KeyValuePair_object__object____ctor
                        ((Unity_Properties_ConverterKey_o *)local_138,
                         (System_Type_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),pSVar14,
                         MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_ctor);
            }
            else {
              if ((int)local_d8 != 2) {
                pSVar14 = (System_Type_o *)0x0;
                goto label_181dbec26;
              }
              local_138 = (undefined1  [8])SStack_d0.fields._current.fields.key;
              pSStack_130 = (System_Type_o *)SStack_d0.fields._current.fields.value;
            }
            pSVar14 = pSStack_130;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            if (Il2CppMethodInitialized_18434497b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
              Il2CppMethodInitialized_18434497b = '\x01';
            }
            if (pSVar14 == (System_Type_o *)0x0) goto label_181dbf225;
            cVar3 = (*((Il2CppClass *)pSVar14->klass)->vtable[0x11].methodPtr)
                              (pSVar14,((Il2CppClass *)pSVar14->klass)->vtable[0x11].method);
            if (cVar3 == '\0') break;
            plVar7 = (longlong *)
                     (*((Il2CppClass *)pSVar14->klass)->vtable[7].methodPtr)
                               (pSVar14,"ExperienceID",
                                ((Il2CppClass *)pSVar14->klass)->vtable[7].method);
            if (plVar7 == (longlong *)0x0) goto label_181dbf225;
            cVar3 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
            if (cVar3 == '\0') break;
            plVar7 = (longlong *)
                     (*((Il2CppClass *)pSVar14->klass)->vtable[7].methodPtr)
                               (pSVar14,"Score",
                                ((Il2CppClass *)pSVar14->klass)->vtable[7].method);
            if (plVar7 == (longlong *)0x0) goto label_181dbf225;
            cVar3 = (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
            if (cVar3 == '\0') break;
            plVar7 = (longlong *)
                     (*((Il2CppClass *)pSVar14->klass)->vtable[7].methodPtr)
                               (pSVar14,"Unit",
                                ((Il2CppClass *)pSVar14->klass)->vtable[7].method);
            if (plVar7 == (longlong *)0x0) goto label_181dbf225;
            cVar3 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
            if (cVar3 == '\0') break;
            plVar7 = (longlong *)
                     (*((Il2CppClass *)pSVar14->klass)->vtable[7].methodPtr)
                               (pSVar14,"LowerIsBetter",
                                ((Il2CppClass *)pSVar14->klass)->vtable[7].method);
            if (plVar7 == (longlong *)0x0) goto label_181dbf225;
            cVar3 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
          } while (cVar3 != '\0');
          pSVar4 = (__this->fields)._path;
          pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Invalid experience score record in: ");
          pSVar4 = System_String__Concat_1969e50(pSVar5,pSVar4,(MethodInfo *)0x0);
          pIVar11 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IO_InvalidDataException);
          pSVar12 = (System_IO_InvalidDataException_o *)il2cpp_codegen_object_new(pIVar11);
          System_IO_InvalidDataException___ctor_2902f10(pSVar12,pSVar4,(MethodInfo *)0x0);
          pMVar13 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Load);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar12,pMVar13);
        }
      }
    }
  }
label_181dbf225:
  ThrowNullReferenceException();
}


// Settings.ExperienceScoreStore$$Validate
// il2cpp: void Settings_ExperienceScoreStore__Validate (Settings_ExperienceScoreRecord_o* record, const MethodInfo* method);
// 0x181dbf460

void Settings_ExperienceScoreStore__Validate(Settings_ExperienceScoreRecord_o *record,MethodInfo *method)

{
  bool bVar1;
  Il2CppClass *pIVar2;
  System_ArgumentException_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  
  if (record != (Settings_ExperienceScoreRecord_o *)0x0) {
    bVar1 = System_String__IsNullOrWhiteSpace((record->fields).ExperienceID,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((0x7f800000 < (uint)ABS((record->fields).Score)) || (ABS((record->fields).Score) == INFINITY)) {
        pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        pSVar3 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar2);
        pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Experience scores must be finite numbers.");
        System_ArgumentException___ctor_1a77cc0(pSVar3,pSVar4,(MethodInfo *)0x0);
        pMVar5 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Validate);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar3,pMVar5);
      }
      bVar1 = System_String__IsNullOrWhiteSpace((record->fields).Unit,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar4 = (record->fields).Unit;
        if (pSVar4 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar4->fields)._stringLength < 0x41) {
          return;
        }
      }
      pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      pSVar3 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar2);
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Experience score units must contain between 1 and 64 characters.");
      System_ArgumentException___ctor_1a77cc0(pSVar3,pSVar4,(MethodInfo *)0x0);
      pMVar5 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Validate);
      il2cpp_codegen_raise_exception((Il2CppObject *)pSVar3,pMVar5);
    }
  }
  pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  pSVar3 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar2);
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"An experience ID is required.");
  System_ArgumentException___ctor_1a77cc0(pSVar3,pSVar4,(MethodInfo *)0x0);
  pMVar5 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_ExperienceScoreStore_Validate);
  il2cpp_codegen_raise_exception((Il2CppObject *)pSVar3,pMVar5);
}


// Settings.ExperienceScoreStore$$.cctor
// il2cpp: void Settings_ExperienceScoreStore___cctor (const MethodInfo* method);
// 0x181dbf770

void Settings_ExperienceScoreStore___cctor(MethodInfo *method)

{
  Settings_ExperienceScoreStore_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344a2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_184344a2c = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar1 = TypeInfo_Utility_FolderPaths->static_fields->GameProgress;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
  if (Il2CppMethodInitialized_184344a27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceScores.json");
    Il2CppMethodInitialized_184344a27 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._directory = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._directory,pSVar1);
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar1 = System_IO_Path__Combine(pSVar1,"ExperienceScores.json",(MethodInfo *)0x0);
  (__this->fields)._path = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._path,pSVar1);
  TypeInfo_Settings_ExperienceScoreStore->static_fields->Local = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_ExperienceScoreStore->static_fields->Local,__this);
  return;
}


