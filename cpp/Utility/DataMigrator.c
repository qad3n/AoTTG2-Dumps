// Type: Utility.DataMigrator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/DataMigrator.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/DataMigrator.cs
// --------------------------------

// Utility.DataMigrator$$CopyDirectory
// il2cpp: void Utility_DataMigrator__CopyDirectory (System_IO_DirectoryInfo_o* source, System_IO_DirectoryInfo_o* destination, const MethodInfo* method);
// 0x182334fa0

void Utility_DataMigrator__CopyDirectory
               (System_IO_DirectoryInfo_o *source,System_IO_DirectoryInfo_o *destination,MethodInfo *method)

{
  System_IO_FileInfo_o *__this;
  System_IO_DirectoryInfo_o *source_00;
  System_IO_FileInfo_array *pSVar1;
  Photon_Voice_Unity_Speaker_o *path1;
  UnityEngine_Accessibility_AccessibilityNode_o *pUVar2;
  System_String_o *destFileName;
  System_IO_DirectoryInfo_array *pSVar3;
  System_IO_DirectoryInfo_o *destination_00;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347817 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    Il2CppMethodInitialized_184347817 = '\x01';
  }
  if (source != (System_IO_DirectoryInfo_o *)0x0) {
    pSVar1 = System_IO_DirectoryInfo__GetFiles(source,(MethodInfo *)0x0);
    if (pSVar1 != (System_IO_FileInfo_array *)0x0) {
      for (uVar4 = 0; (int)uVar4 < (int)pSVar1->max_length; uVar4 = uVar4 + 1) {
        if ((uint)pSVar1->max_length <= uVar4) goto label_182335129;
        if (destination == (System_IO_DirectoryInfo_o *)0x0) goto label_18233512f;
        __this = pSVar1->m_Items[(int)uVar4];
        path1 = (*(destination->klass->vtable)._8_get_FullName.methodPtr)
                          (destination,(destination->klass->vtable)._8_get_FullName.method);
        if (__this == (System_IO_FileInfo_o *)0x0) goto label_18233512f;
        pUVar2 = (*(__this->klass->vtable)._9_get_Name.methodPtr)
                           (__this,(__this->klass->vtable)._9_get_Name.method);
        if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
        }
        destFileName = System_IO_Path__Combine
                                 ((System_String_o *)path1,(System_String_o *)pUVar2,(MethodInfo *)0x0);
        System_IO_FileInfo__CopyTo(__this,destFileName,true,(MethodInfo *)0x0);
      }
      pSVar3 = System_IO_DirectoryInfo__GetDirectories(source,(MethodInfo *)0x0);
      if (pSVar3 != (System_IO_DirectoryInfo_array *)0x0) {
        uVar4 = 0;
        do {
          if ((int)pSVar3->max_length <= (int)uVar4) {
            return;
          }
          if ((uint)pSVar3->max_length <= uVar4) {
label_182335129:
            ThrowIndexOutOfRangeException();
          }
          source_00 = pSVar3->m_Items[(int)uVar4];
          if (source_00 == (System_IO_DirectoryInfo_o *)0x0) break;
          pUVar2 = (*(source_00->klass->vtable)._9_get_Name.methodPtr)
                             (source_00,(source_00->klass->vtable)._9_get_Name.method);
          if (destination == (System_IO_DirectoryInfo_o *)0x0) break;
          destination_00 =
               System_IO_DirectoryInfo__CreateSubdirectory
                         (destination,(System_String_o *)pUVar2,(MethodInfo *)0x0);
          Utility_DataMigrator__CopyDirectory(source_00,destination_00,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
        } while( true );
      }
    }
  }
label_18233512f:
  ThrowNullReferenceException();
}


// Utility.DataMigrator$$MigrateLinuxSaves
// il2cpp: void Utility_DataMigrator__MigrateLinuxSaves (const MethodInfo* method);
// 0x182335140
// eh: try 0x182335183..0x182335241 -> pad 0x183331bd0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182335240: nop 
// asm:   0x182335243: lea rcx, [rip + 0x1dc61ee]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18233524a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18233524f: cmp dword ptr [rax + 0xe4], 0
// asm:   0x182335256: jne 0x182335260
// asm:   0x182335258: mov rcx, rax
// asm:   0x18233525b: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182335260: lea rcx, [rip + 0x1da0e51]  ; "Exception while migrating linux saves."
// asm:   0x182335267: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18233526c: mov rcx, rax
// asm:   0x18233526f: xor edx, edx
// asm:   0x182335271: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x183331bd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331bd5: push rbx
// asm:   0x183331bd6: push rbp
// asm:   0x183331bd7: push rdi
// asm:   0x183331bd8: sub rsp, 0x20
// asm:   0x183331bdc: mov rbp, rdx
// asm:   0x183331bdf: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183331be3: mov rax, qword ptr [rdi]
// asm:   0x183331be6: mov rbx, qword ptr [rax]
// asm:   0x183331be9: lea rcx, [rip + 0xd47368]  ; TypeInfo_System_Exception
// asm:   0x183331bf0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331bf5: mov rcx, rax
// asm:   0x183331bf8: mov rdx, rbx
// asm:   0x183331bfb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331c00: test al, al
// asm:   0x183331c02: je 0x183331c10
// asm:   0x183331c04: movabs rax, 0
// asm:   0x183331c0e: jmp 0x183331c28
// asm:   0x183331c10: mov rax, qword ptr [rdi]
// asm:   0x183331c13: mov qword ptr [rbp + 0x20], rax
// asm:   0x183331c17: lea rdx, [rip + 0xcaa36a]
// asm:   0x183331c1e: lea rcx, [rbp + 0x20]
// asm:   0x183331c22: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183331c28: add rsp, 0x20
// asm:   0x183331c2c: pop rdi
// asm:   0x183331c2d: pop rbp
// asm:   0x183331c2e: pop rbx
// asm:   0x183331c2f: ret 

void Utility_DataMigrator__MigrateLinuxSaves(MethodInfo *method)

{
  System_String_o *path;
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_IO_DirectoryInfo_o *__this;
  System_IO_DirectoryInfo_o *__this_00;
  
  if (Il2CppMethodInitialized_184347818 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_DirectoryInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/Aottg2");
    Il2CppMethodInitialized_184347818 = '\x01';
  }
  pSVar3 = System_Environment__GetFolderPath(5,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969e50(pSVar3,"/Aottg2",(MethodInfo *)0x0);
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  path = TypeInfo_Utility_FolderPaths->static_fields->Documents;
  bVar1 = System_IO_Directory__Exists(pSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = System_IO_File__GetAttributes(pSVar3,(MethodInfo *)0x0);
    if (iVar2 == 0x10) {
      bVar1 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
      if (!bVar1) {
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_DirectoryInfo);
        System_IO_DirectoryInfo___ctor(__this,pSVar3,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_DirectoryInfo);
        System_IO_DirectoryInfo___ctor(__this_00,path,(MethodInfo *)0x0);
        Utility_DataMigrator__CopyDirectory(__this,__this_00,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Utility.DataMigrator$$.ctor
// il2cpp: void Utility_DataMigrator___ctor (Utility_DataMigrator_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_DataMigrator___ctor(Utility_DataMigrator_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


