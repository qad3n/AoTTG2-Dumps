// Type: Utility.DataMigrator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/DataMigrator.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/DataMigrator.cs
// --------------------------------

// Utility.DataMigrator$$CopyDirectory
// il2cpp: void Utility_DataMigrator__CopyDirectory (System_IO_DirectoryInfo_o* source, System_IO_DirectoryInfo_o* destination, const MethodInfo* method);
// 0x448eee0

void Utility_DataMigrator__CopyDirectory
               (System_IO_DirectoryInfo_o *source,System_IO_DirectoryInfo_o *destination,MethodInfo *method)

{
  int iVar1;
  System_IO_FileInfo_o *__this;
  uint uVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  System_IO_FileInfo_array *pSVar5;
  System_String_o *pSVar6;
  System_IO_DirectoryInfo_array *pSVar7;
  System_String_o *pSVar8;
  System_IO_DirectoryInfo_o *pSVar9;
  System_IO_DirectoryInfo_o *pSVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *plVar11;
  uint uVar12;
  
  plVar11 = (long *)source;
  if (g_data_057ae8f4 == '\0') {
    plVar11 = &TypeInfo_Path;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8f4 = '\x01';
  }
  if ((source != (System_IO_DirectoryInfo_o *)0x0) &&
     (plVar11 = (long *)source, pSVar5 = System_IO_DirectoryInfo__GetFiles(source,(MethodInfo *)0x0),
     pSVar5 != (System_IO_FileInfo_array *)0x0)) {
    iVar1 = (int)pSVar5->max_length;
    if (destination == (System_IO_DirectoryInfo_o *)0x0) {
      if (iVar1 < 1) goto label_0448effc;
    }
    else {
      if (iVar1 < 1) {
label_0448effc:
        pSVar7 = System_IO_DirectoryInfo__GetDirectories(source,(MethodInfo *)0x0);
        plVar11 = (long *)source;
        if (pSVar7 == (System_IO_DirectoryInfo_array *)0x0) goto label_0448f09a;
        uVar2 = (uint)pSVar7->max_length;
        if (destination != (System_IO_DirectoryInfo_o *)0x0) {
          if (0 < (int)uVar2) {
            uVar12 = 0;
            do {
              if (uVar2 <= uVar12) goto label_0448f08c;
              pSVar9 = pSVar7->m_Items[(int)uVar12];
              if (pSVar9 == (System_IO_DirectoryInfo_o *)0x0) goto label_0448f09a;
              pSVar8 = (System_String_o *)
                       (*(pSVar9->klass->vtable)._9_get_Name.methodPtr)
                                 (pSVar9,(pSVar9->klass->vtable)._9_get_Name.method);
              pSVar10 = System_IO_DirectoryInfo__CreateSubdirectory(destination,pSVar8,(MethodInfo *)0x0);
              Utility_DataMigrator__CopyDirectory(pSVar9,pSVar10,method_00);
              uVar12 = uVar12 + 1;
              uVar2 = (uint)pSVar7->max_length;
              plVar11 = (long *)pSVar9;
            } while ((int)uVar12 < (int)uVar2);
          }
          return;
        }
        if ((int)uVar2 < 1) {
          return;
        }
      }
      else {
        pSVar7 = (System_IO_DirectoryInfo_array *)0x0;
        if (iVar1 != 0) {
          do {
            __this = pSVar5->m_Items[(int)pSVar7];
            plVar11 = (long *)destination;
            pSVar8 = (System_String_o *)
                     (*(destination->klass->vtable)._8_get_FullName.methodPtr)
                               (destination,(destination->klass->vtable)._8_get_FullName.method);
            if (__this == (System_IO_FileInfo_o *)0x0) goto label_0448f09a;
            pSVar6 = (System_String_o *)
                     (*(__this->klass->vtable)._9_get_Name.methodPtr)
                               (__this,(__this->klass->vtable)._9_get_Name.method);
            if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = System_IO_Path__Combine(pSVar8,pSVar6,(MethodInfo *)0x0);
            System_IO_FileInfo__CopyTo(__this,pSVar8,1,(MethodInfo *)0x0);
            uVar12 = (int)pSVar7 + 1;
            pSVar7 = (System_IO_DirectoryInfo_array *)(ulong)uVar12;
            uVar2 = (uint)pSVar5->max_length;
            if ((int)uVar2 <= (int)uVar12) goto label_0448effc;
          } while (uVar12 < uVar2);
        }
label_0448f08c:
        il2cpp_runtime_helper_022b2ca0();
      }
      plVar11 = (long *)pSVar7->m_Items[0];
      if ((System_IO_DirectoryInfo_o *)plVar11 != (System_IO_DirectoryInfo_o *)0x0) goto label_0448f09f;
    }
  }
label_0448f09a:
  il2cpp_runtime_helper_022b2c90();
label_0448f09f:
  (*(((System_IO_DirectoryInfo_o *)plVar11)->klass->vtable)._9_get_Name.methodPtr)();
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DirectoryInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&"/Aottg2");
    g_data_057ae8f5 = '\x01';
  }
  pSVar8 = System_Environment__GetFolderPath(5,(MethodInfo *)0x0);
  pSVar8 = System_String__Concat_3ae5ba0(pSVar8,"/Aottg2",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = (System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8);
  bVar3 = System_IO_Directory__Exists(pSVar8,(MethodInfo *)0x0);
  if ((((char)bVar3 != '\0') &&
      (iVar4 = System_IO_File__GetAttributes(pSVar8,(MethodInfo *)0x0), iVar4 == 0x10)) &&
     (bVar3 = System_IO_Directory__Exists(pSVar6,(MethodInfo *)0x0), (char)bVar3 == '\0')) {
    pSVar9 = (System_IO_DirectoryInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DirectoryInfo);
    System_IO_DirectoryInfo___ctor(pSVar9,pSVar8,(MethodInfo *)0x0);
    pSVar10 = (System_IO_DirectoryInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DirectoryInfo);
    System_IO_DirectoryInfo___ctor(pSVar10,pSVar6,(MethodInfo *)0x0);
    Utility_DataMigrator__CopyDirectory(pSVar9,pSVar10,method_01);
  }
  return;
}


// Utility.DataMigrator$$MigrateLinuxSaves
// il2cpp: void Utility_DataMigrator__MigrateLinuxSaves (const MethodInfo* method);
// 0x448f0c0

void Utility_DataMigrator__MigrateLinuxSaves(MethodInfo *method)

{
  System_String_o *path;
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_IO_DirectoryInfo_o *__this;
  System_IO_DirectoryInfo_o *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057ae8f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DirectoryInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&"/Aottg2");
    g_data_057ae8f5 = '\x01';
  }
  pSVar3 = System_Environment__GetFolderPath(5,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_3ae5ba0(pSVar3,"/Aottg2",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8);
  bVar1 = System_IO_Directory__Exists(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    iVar2 = System_IO_File__GetAttributes(pSVar3,(MethodInfo *)0x0);
    if (iVar2 == 0x10) {
      bVar1 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        __this = (System_IO_DirectoryInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DirectoryInfo);
        System_IO_DirectoryInfo___ctor(__this,pSVar3,(MethodInfo *)0x0);
        __this_00 = (System_IO_DirectoryInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DirectoryInfo);
        System_IO_DirectoryInfo___ctor(__this_00,path,(MethodInfo *)0x0);
        Utility_DataMigrator__CopyDirectory(__this,__this_00,method_00);
      }
    }
  }
  return;
}


// Utility.DataMigrator$$.ctor
// il2cpp: void Utility_DataMigrator___ctor (Utility_DataMigrator_o* __this, const MethodInfo* method);
// 0x448f2c0

void Utility_DataMigrator___ctor(Utility_DataMigrator_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


