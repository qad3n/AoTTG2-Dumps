// Type: ApplicationManagers.SnapshotManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/SnapshotManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/SnapshotManager.cs
// --------------------------------

// ApplicationManagers.SnapshotManager$$Init
// il2cpp: void ApplicationManagers_SnapshotManager__Init (const MethodInfo* method);
// 0x182357b50

void ApplicationManagers_SnapshotManager__Init(MethodInfo *method)

{
  ApplicationManagers_SnapshotManager_o *value;
  
  if (Il2CppMethodInitialized_1843479c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_1843479c7 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_SnapshotManager)
  ;
  TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_instance,value);
  ApplicationManagers_SnapshotManager__ClearTemp((MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SnapshotManager$$OnApplicationQuit
// il2cpp: void ApplicationManagers_SnapshotManager__OnApplicationQuit (ApplicationManagers_SnapshotManager_o* __this, const MethodInfo* method);
// 0x182357be0

void ApplicationManagers_SnapshotManager__OnApplicationQuit
               (ApplicationManagers_SnapshotManager_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843479c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_1843479c8 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  ApplicationManagers_SnapshotManager__ClearTemp((MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SnapshotManager$$ClearTemp
// il2cpp: void ApplicationManagers_SnapshotManager__ClearTemp (const MethodInfo* method);
// 0x1823574c0
// eh: try 0x182357518..0x18235754a -> pad 0x1833197a0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235754c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182357551: test rcx, rcx
// asm:   0x182357554: je 0x1823575b8
// asm:   0x182357556: mov rax, qword ptr [rcx]
// asm:   0x182357559: mov rdx, qword ptr [rax + 0x190]
// asm:   0x182357560: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x182357566: mov rbx, rax
// asm:   0x182357569: lea rcx, [rip + 0x1d76820]  ; "Error deleting snapshot temp folder: {0}"
// asm:   0x182357570: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182357575: mov rcx, rax
// asm:   0x182357578: xor r8d, r8d
// asm:   0x18235757b: mov rdx, rbx
// asm:   0x18235757e: call 0x18196d190  ; System_String__Format()
// asm:   0x182357583: mov rbx, rax
// asm:   0x182357586: lea rcx, [rip + 0x1da3eab]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18235758d: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182357592: cmp dword ptr [rax + 0xe4], 0
// asm:   0x182357599: jne 0x1823575a3
// asm:   0x18235759b: mov rcx, rax
// asm:   0x18235759e: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1823575a3: xor edx, edx
// asm:   0x1823575a5: mov rcx, rbx
// asm:   0x1823575a8: add rsp, 0x40
// asm:   0x1823575ac: pop rbx
// asm:   0x1823575ad: jmp 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x1823575b8: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833197a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833197a5: push rbx
// asm:   0x1833197a6: push rbp
// asm:   0x1833197a7: push rdi
// asm:   0x1833197a8: sub rsp, 0x20
// asm:   0x1833197ac: mov rbp, rdx
// asm:   0x1833197af: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x1833197b3: mov rax, qword ptr [rdi]
// asm:   0x1833197b6: mov rbx, qword ptr [rax]
// asm:   0x1833197b9: lea rcx, [rip + 0xd5f798]  ; TypeInfo_System_Exception
// asm:   0x1833197c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833197c5: mov rcx, rax
// asm:   0x1833197c8: mov rdx, rbx
// asm:   0x1833197cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833197d0: test al, al
// asm:   0x1833197d2: mov rax, qword ptr [rdi]
// asm:   0x1833197d5: je 0x1833197e7
// asm:   0x1833197d7: mov qword ptr [rbp + 0x30], rax
// asm:   0x1833197db: movabs rax, 0
// asm:   0x1833197e5: jmp 0x1833197fc
// asm:   0x1833197e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833197eb: lea rdx, [rip + 0xcc2796]
// asm:   0x1833197f2: lea rcx, [rbp + 0x20]
// asm:   0x1833197f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833197fc: add rsp, 0x20
// asm:   0x183319800: pop rdi
// asm:   0x183319801: pop rbp
// asm:   0x183319802: pop rbx
// asm:   0x183319803: ret 

void ApplicationManagers_SnapshotManager__ClearTemp(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843479c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_1843479c9 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  bVar1 = System_IO_Directory__Exists
                    (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    System_IO_Directory__Delete
              (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath,true,
               (MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.SnapshotManager$$GetFileName
// il2cpp: System_String_o* ApplicationManagers_SnapshotManager__GetFileName (int32_t snapshotId, const MethodInfo* method);
// 0x1823577d0

System_String_o * ApplicationManagers_SnapshotManager__GetFileName(int32_t snapshotId,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *pSVar1;
  int32_t local_res8 [8];
  
  local_res8[0] = snapshotId;
  if (Il2CppMethodInitialized_1843479ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_1843479ca = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pSVar1 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotFilePrefix;
  str1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50(pSVar1,str1,(MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.SnapshotManager$$AddSnapshot
// il2cpp: void ApplicationManagers_SnapshotManager__AddSnapshot (UnityEngine_Texture2D_o* texture, int32_t damage, const MethodInfo* method);
// 0x182357200
// eh: try 0x182357244..0x1823574be -> pad 0x1833197a0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182357441: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182357446: test rcx, rcx
// asm:   0x182357449: je 0x1823574ac
// asm:   0x18235744b: mov rax, qword ptr [rcx]
// asm:   0x18235744e: mov rdx, qword ptr [rax + 0x190]
// asm:   0x182357455: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18235745b: mov rbx, rax
// asm:   0x18235745e: lea rcx, [rip + 0x1d7ea93]  ; "Exception while adding snapshot: {0}"
// asm:   0x182357465: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235746a: mov rcx, rax
// asm:   0x18235746d: xor r8d, r8d
// asm:   0x182357470: mov rdx, rbx
// asm:   0x182357473: call 0x18196d190  ; System_String__Format()
// asm:   0x182357478: mov rbx, rax
// asm:   0x18235747b: lea rcx, [rip + 0x1da3fb6]  ; TypeInfo_UnityEngine_Debug
// asm:   0x182357482: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182357487: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18235748e: jne 0x182357498
// asm:   0x182357490: mov rcx, rax
// asm:   0x182357493: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182357498: xor edx, edx
// asm:   0x18235749a: mov rcx, rbx
// asm:   0x18235749d: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x1823574ac: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833197a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833197a5: push rbx
// asm:   0x1833197a6: push rbp
// asm:   0x1833197a7: push rdi
// asm:   0x1833197a8: sub rsp, 0x20
// asm:   0x1833197ac: mov rbp, rdx
// asm:   0x1833197af: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x1833197b3: mov rax, qword ptr [rdi]
// asm:   0x1833197b6: mov rbx, qword ptr [rax]
// asm:   0x1833197b9: lea rcx, [rip + 0xd5f798]  ; TypeInfo_System_Exception
// asm:   0x1833197c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833197c5: mov rcx, rax
// asm:   0x1833197c8: mov rdx, rbx
// asm:   0x1833197cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833197d0: test al, al
// asm:   0x1833197d2: mov rax, qword ptr [rdi]
// asm:   0x1833197d5: je 0x1833197e7
// asm:   0x1833197d7: mov qword ptr [rbp + 0x30], rax
// asm:   0x1833197db: movabs rax, 0
// asm:   0x1833197e5: jmp 0x1833197fc
// asm:   0x1833197e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833197eb: lea rdx, [rip + 0xcc2796]
// asm:   0x1833197f2: lea rcx, [rbp + 0x20]
// asm:   0x1833197f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833197fc: add rsp, 0x20
// asm:   0x183319800: pop rdi
// asm:   0x183319801: pop rbp
// asm:   0x183319802: pop rbx
// asm:   0x183319803: ret 

void ApplicationManagers_SnapshotManager__AddSnapshot
               (UnityEngine_Texture2D_o *texture,int32_t damage,MethodInfo *method)

{
  uint uVar1;
  int32_t val2;
  System_Int32_array *pSVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_o *str1;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Byte_array *bytes;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_1843479cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_1843479cb = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  bVar3 = System_IO_Directory__Exists
                    (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath,
                     (MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath,(MethodInfo *)0x0
              );
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pSVar6 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath;
  local_res20[0] = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_currentSnapshotSaveId;
  if (Il2CppMethodInitialized_1843479ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_1843479ca = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pSVar5 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotFilePrefix;
  str1 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_1969e50(pSVar5,str1,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat_1969b70(pSVar6,"/",pSVar5,(MethodInfo *)0x0);
  bytes = ApplicationManagers_SnapshotManager__SerializeSnapshot(texture,(MethodInfo *)0x0);
  System_IO_File__WriteAllBytes(pSVar6,bytes,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_damages;
  if (pSVar2 != (System_Int32_array *)0x0) {
    uVar1 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_currentSnapshotSaveId;
    if (uVar1 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[(int)uVar1] = damage;
      TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_currentSnapshotSaveId =
           TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_currentSnapshotSaveId + 1;
      TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId =
           TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId + 1;
      iVar4 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId;
      val2 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->MaxSnapshots;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar4 = System_Math__Min_1b2c2d0(iVar4,val2,(MethodInfo *)0x0);
      TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId = iVar4;
      if (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->MaxSnapshots <=
          TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_currentSnapshotSaveId) {
        if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
        }
        TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_currentSnapshotSaveId = 0;
      }
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.SnapshotManager$$SerializeSnapshot
// il2cpp: System_Byte_array* ApplicationManagers_SnapshotManager__SerializeSnapshot (UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x182357d20

System_Byte_array *
ApplicationManagers_SnapshotManager__SerializeSnapshot(UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  _struct_53108 _Var1;
  int32_t iVar2;
  UnityEngine_Color32_array *pUVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if (Il2CppMethodInitialized_1843479cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    Il2CppMethodInitialized_1843479cc = '\x01';
  }
  if (texture != (UnityEngine_Texture2D_o *)0x0) {
    pUVar3 = UnityEngine_Texture2D__GetPixels32_2efa3b0(texture,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Color32_array *)0x0) {
      pSVar4 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,(int)pUVar3->max_length * 3 + 8);
      iVar2 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                        (texture,(texture->klass->vtable)._5_get_width.method);
      pSVar5 = System_BitConverter__GetBytes_1a78fe0(iVar2,(MethodInfo *)0x0);
      if (pSVar5 != (System_Byte_array *)0x0) {
        for (uVar8 = 0; (int)uVar8 < (int)pSVar5->max_length; uVar8 = uVar8 + 1) {
          if ((uint)pSVar5->max_length <= uVar8) goto label_182357eca;
          if (pSVar4 == (System_Byte_array *)0x0) goto label_182357ec4;
          if ((uint)pSVar4->max_length <= uVar8) goto label_182357eca;
          pSVar4->m_Items[(int)uVar8] = pSVar5->m_Items[(int)uVar8];
        }
        iVar2 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                          (texture,(texture->klass->vtable)._7_get_height.method);
        pSVar5 = System_BitConverter__GetBytes_1a78fe0(iVar2,(MethodInfo *)0x0);
        if (pSVar5 != (System_Byte_array *)0x0) {
          for (uVar7 = 0; (int)uVar7 < (int)pSVar5->max_length; uVar7 = uVar7 + 1) {
            if ((uint)pSVar5->max_length <= uVar7) goto label_182357eca;
            if (pSVar4 == (System_Byte_array *)0x0) goto label_182357ec4;
            if ((uint)pSVar4->max_length <= uVar8) goto label_182357eca;
            lVar6 = (longlong)(int)uVar8;
            uVar8 = uVar8 + 1;
            pSVar4->m_Items[lVar6] = pSVar5->m_Items[(int)uVar7];
          }
          uVar7 = 0;
          do {
            if ((int)pUVar3->max_length <= (int)uVar7) {
              return pSVar4;
            }
            if ((uint)pUVar3->max_length <= uVar7) {
label_182357eca:
              ThrowIndexOutOfRangeException();
            }
            _Var1 = pUVar3->m_Items[(int)uVar7].fields._overlap_0._at_a;
            if (pSVar4 == (System_Byte_array *)0x0) break;
            if ((uint)pSVar4->max_length <= uVar8) goto label_182357eca;
            pSVar4->m_Items[(int)uVar8] = _Var1._lead[0];
            if ((uint)pSVar4->max_length <= uVar8 + 1) goto label_182357eca;
            pSVar4->m_Items[(longlong)(int)uVar8 + 1] = _Var1._lead[1];
            lVar6 = (longlong)(int)uVar8;
            if ((uint)pSVar4->max_length <= uVar8 + 2) goto label_182357eca;
            uVar8 = uVar8 + 3;
            uVar7 = uVar7 + 1;
            pSVar4->m_Items[lVar6 + 2] = _Var1._lead[2];
          } while( true );
        }
      }
    }
  }
label_182357ec4:
  ThrowNullReferenceException();
}


// ApplicationManagers.SnapshotManager$$DeserializeSnapshot
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_SnapshotManager__DeserializeSnapshot (System_Byte_array* bytes, const MethodInfo* method);
// 0x1823575c0

UnityEngine_Texture2D_o *
ApplicationManagers_SnapshotManager__DeserializeSnapshot(System_Byte_array *bytes,MethodInfo *method)

{
  int32_t width;
  int32_t height;
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Color32_array *colors;
  int iVar1;
  uint uVar2;
  uint uVar3;
  _union_53103 local_res8;
  
  if (Il2CppMethodInitialized_1843479cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color32_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_1843479cd = '\x01';
  }
  width = System_BitConverter__ToInt32(bytes,0,(MethodInfo *)0x0);
  height = System_BitConverter__ToInt32(bytes,4,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_2efc630(__this,width,height,3,false,(MethodInfo *)0x0);
  if (bytes != (System_Byte_array *)0x0) {
    iVar1 = (int)bytes->max_length + -8;
    colors = (UnityEngine_Color32_array *)
             SZArrayNew(TypeInfo_UnityEngine_Color32_array,
                        iVar1 / 3 + (iVar1 >> 0x1f) +
                        (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f));
    if (colors != (UnityEngine_Color32_array *)0x0) {
      uVar2 = 8;
      for (uVar3 = 0; (int)uVar3 < (int)colors->max_length; uVar3 = uVar3 + 1) {
        if ((((uint)bytes->max_length <= uVar2) || ((uint)bytes->max_length <= uVar2 + 1)) ||
           ((uint)bytes->max_length <= uVar2 + 2)) {
label_182357720:
          ThrowIndexOutOfRangeException();
        }
        local_res8._0_2_ = (short)CONCAT21(0xff00,bytes->m_Items[(longlong)(int)uVar2 + 1]) << 8;
        local_res8._at_b.b = bytes->m_Items[(longlong)(int)uVar2 + 2];
        local_res8._at_a.a = 0xff;
        local_res8._at_r.r = (_struct_53105)(_struct_53105)bytes->m_Items[(int)uVar2];
        if ((uint)colors->max_length <= uVar3) goto label_182357720;
        uVar2 = uVar2 + 3;
        colors->m_Items[(int)uVar3].fields._overlap_0 = local_res8;
      }
      if (__this != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__SetPixels32_2efb6e0(__this,colors,(MethodInfo *)0x0);
        UnityEngine_Texture2D__Apply_2ef9fd0(__this,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.SnapshotManager$$SaveSnapshotFinish
// il2cpp: void ApplicationManagers_SnapshotManager__SaveSnapshotFinish (UnityEngine_Texture2D_o* texture, System_String_o* fileName, const MethodInfo* method);
// 0x182357c20

void ApplicationManagers_SnapshotManager__SaveSnapshotFinish
               (UnityEngine_Texture2D_o *texture,System_String_o *fileName,MethodInfo *method)

{
  bool bVar1;
  System_String_o *path;
  System_Byte_array *bytes;
  
  if (Il2CppMethodInitialized_1843479ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_1843479ce = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  bVar1 = System_IO_Directory__Exists
                    (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotPath,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    System_IO_Directory__CreateDirectory
              (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotPath,(MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  path = System_String__Concat_1969b70
                   (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotPath,
                    "/",fileName,(MethodInfo *)0x0);
  bytes = UnityEngine_ImageConversion__EncodeToPNG(texture,(MethodInfo *)0x0);
  System_IO_File__WriteAllBytes(path,bytes,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SnapshotManager$$GetDamage
// il2cpp: int32_t ApplicationManagers_SnapshotManager__GetDamage (int32_t index, const MethodInfo* method);
// 0x182357730

int32_t ApplicationManagers_SnapshotManager__GetDamage(int32_t index,MethodInfo *method)

{
  System_Int32_array *pSVar1;
  
  if (Il2CppMethodInitialized_1843479cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_1843479cf = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  if (index < TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId) {
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    pSVar1 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_damages;
    if (pSVar1 != (System_Int32_array *)0x0) {
      if ((uint)index < (uint)pSVar1->max_length) {
        return pSVar1->m_Items[index];
      }
      ThrowIndexOutOfRangeException();
    }
    ThrowNullReferenceException();
  }
  return 0;
}


// ApplicationManagers.SnapshotManager$$GetSnapshot
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_SnapshotManager__GetSnapshot (int32_t index, const MethodInfo* method);
// 0x182357890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182357a89: nop dword ptr [rax]

UnityEngine_Texture2D_o * ApplicationManagers_SnapshotManager__GetSnapshot(int32_t index,MethodInfo *method)

{
  bool bVar1;
  int32_t width;
  int32_t height;
  System_String_o *str1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *value;
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Color32_array *colors;
  int iVar4;
  uint uVar5;
  uint uVar6;
  _union_53103 local_res8 [2];
  
  if (Il2CppMethodInitialized_1843479d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_1843479d0 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  if (TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId <= index) {
    return (UnityEngine_Texture2D_o *)0x0;
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pSVar3 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath;
  local_res8[0] = (_union_53103)index;
  if (Il2CppMethodInitialized_1843479ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_1843479ca = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  pSVar2 = TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotFilePrefix;
  str1 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969e50(pSVar2,str1,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969b70(pSVar3,"/",pSVar2,(MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
  if (!bVar1) {
    return (UnityEngine_Texture2D_o *)0x0;
  }
  value = System_IO_File__ReadAllBytes(pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  if (Il2CppMethodInitialized_1843479cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color32_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_1843479cd = '\x01';
  }
  width = System_BitConverter__ToInt32(value,0,(MethodInfo *)0x0);
  height = System_BitConverter__ToInt32(value,4,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_2efc630(__this,width,height,3,false,(MethodInfo *)0x0);
  if (value != (System_Byte_array *)0x0) {
    iVar4 = (int)value->max_length + -8;
    colors = (UnityEngine_Color32_array *)
             SZArrayNew(TypeInfo_UnityEngine_Color32_array,
                        iVar4 / 3 + (iVar4 >> 0x1f) +
                        (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f));
    if (colors != (UnityEngine_Color32_array *)0x0) {
      uVar5 = 8;
      for (uVar6 = 0; (int)uVar6 < (int)colors->max_length; uVar6 = uVar6 + 1) {
        if ((((uint)value->max_length <= uVar5) || ((uint)value->max_length <= uVar5 + 1)) ||
           ((uint)value->max_length <= uVar5 + 2)) {
label_182357b3a:
          ThrowIndexOutOfRangeException();
        }
        local_res8[0]._at_g = (short)CONCAT21(0xff00,value->m_Items[(longlong)(int)uVar5 + 1]) << 8;
        local_res8[0]._at_b.b = value->m_Items[(longlong)(int)uVar5 + 2];
        local_res8[0]._at_a.a = 0xff;
        local_res8[0]._at_r.r = value->m_Items[(int)uVar5];
        if ((uint)colors->max_length <= uVar6) goto label_182357b3a;
        uVar5 = uVar5 + 3;
        *(_union_53103 *)(colors->m_Items + (int)uVar6) = local_res8[0];
      }
      if (__this != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__SetPixels32_2efb6e0(__this,colors,(MethodInfo *)0x0);
        UnityEngine_Texture2D__Apply_2ef9fd0(__this,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.SnapshotManager$$GetLength
// il2cpp: int32_t ApplicationManagers_SnapshotManager__GetLength (const MethodInfo* method);
// 0x182357840

int32_t ApplicationManagers_SnapshotManager__GetLength(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843479d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    Il2CppMethodInitialized_1843479d1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
  }
  return TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId;
}


// ApplicationManagers.SnapshotManager$$.ctor
// il2cpp: void ApplicationManagers_SnapshotManager___ctor (ApplicationManagers_SnapshotManager_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_SnapshotManager___ctor(ApplicationManagers_SnapshotManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.SnapshotManager$$.cctor
// il2cpp: void ApplicationManagers_SnapshotManager___cctor (const MethodInfo* method);
// 0x182357ed0

void ApplicationManagers_SnapshotManager___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Int32_array *value;
  
  if (Il2CppMethodInitialized_1843479d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Snapshot");
    il2cpp_codegen_initialize_runtime_metadata(&"/Temp");
    Il2CppMethodInitialized_1843479d2 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar1 = TypeInfo_Utility_FolderPaths->static_fields->Snapshots;
  TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotPath = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotPath,pSVar1)
  ;
  pSVar1 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Snapshots,"/Temp",
                      (MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotTempPath,pSVar1);
  TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotFilePrefix = "Snapshot";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_SnapshotManager->static_fields->SnapshotFilePrefix,
             "Snapshot");
  TypeInfo_ApplicationManagers_SnapshotManager->static_fields->MaxSnapshots = 500;
  TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_currentSnapshotSaveId = 0;
  TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_maxSnapshotSaveId = 0;
  value = (System_Int32_array *)
          SZArrayNew(TypeInfo_int_array,
                     TypeInfo_ApplicationManagers_SnapshotManager->static_fields->MaxSnapshots);
  TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_damages = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_SnapshotManager->static_fields->_damages,value);
  return;
}


