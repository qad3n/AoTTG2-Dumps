// Type: Utility.DataMigrator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/DataMigrator.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/DataMigrator.cs  [CHANGED since prior version]
// --------------------------------

// Utility.DataMigrator$$CopyDirectory
// il2cpp: void Utility_DataMigrator__CopyDirectory (System_IO_DirectoryInfo_o* source, System_IO_DirectoryInfo_o* destination, const MethodInfo* method);
// 0x415bed0

void Utility_DataMigrator__CopyDirectory
               (System_IO_DirectoryInfo_o *source,System_IO_DirectoryInfo_o *destination,
               MethodInfo *method)

{
  int iVar1;
  System_IO_FileInfo_o *__this;
  System_IO_DirectoryInfo_o *pSVar2;
  System_IO_FileInfo_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *path2;
  System_IO_DirectoryInfo_array *pSVar5;
  System_IO_DirectoryInfo_o *destination_00;
  MethodInfo *method_00;
  uint uVar6;
  uint uVar7;
  
  if (DAT_05704a2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Path);
    DAT_05704a2e = '\x01';
  }
  if ((source != (System_IO_DirectoryInfo_o *)0x0) &&
     (pSVar3 = System_IO_DirectoryInfo__GetFiles(source,(MethodInfo *)0x0),
     pSVar3 != (System_IO_FileInfo_array *)0x0)) {
    iVar1 = (int)pSVar3->max_length;
    if (destination == (System_IO_DirectoryInfo_o *)0x0) {
      if (0 < iVar1) goto LAB_0415c08a;
    }
    else if (0 < iVar1) {
      uVar7 = 0;
      if (iVar1 != 0) {
        do {
          __this = pSVar3->m_Items[(int)uVar7];
          pSVar4 = (System_String_o *)
                   (*(destination->klass->vtable)._8_get_FullName.methodPtr)
                             (destination,(destination->klass->vtable)._8_get_FullName.method);
          if (__this == (System_IO_FileInfo_o *)0x0) goto LAB_0415c08a;
          path2 = (System_String_o *)
                  (*(__this->klass->vtable)._9_get_Name.methodPtr)
                            (__this,(__this->klass->vtable)._9_get_Name.method);
          if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = System_IO_Path__Combine(pSVar4,path2,(MethodInfo *)0x0);
          System_IO_FileInfo__CopyTo(__this,pSVar4,1,(MethodInfo *)0x0);
          uVar7 = uVar7 + 1;
          uVar6 = (uint)pSVar3->max_length;
          if ((int)uVar6 <= (int)uVar7) goto LAB_0415bfec;
        } while (uVar7 < uVar6);
      }
LAB_0415c07c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_0415bfec:
    pSVar5 = System_IO_DirectoryInfo__GetDirectories(source,(MethodInfo *)0x0);
    if (pSVar5 != (System_IO_DirectoryInfo_array *)0x0) {
      uVar7 = (uint)pSVar5->max_length;
      if (destination == (System_IO_DirectoryInfo_o *)0x0) {
        if (0 < (int)uVar7) {
          pSVar2 = pSVar5->m_Items[0];
          if (pSVar2 != (System_IO_DirectoryInfo_o *)0x0) {
            (*(pSVar2->klass->vtable)._9_get_Name.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable)._9_get_Name.method);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          goto LAB_0415c08a;
        }
      }
      else if (0 < (int)uVar7) {
        uVar6 = 0;
        do {
          if (uVar7 <= uVar6) goto LAB_0415c07c;
          pSVar2 = pSVar5->m_Items[(int)uVar6];
          if (pSVar2 == (System_IO_DirectoryInfo_o *)0x0) goto LAB_0415c08a;
          pSVar4 = (System_String_o *)
                   (*(pSVar2->klass->vtable)._9_get_Name.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable)._9_get_Name.method);
          destination_00 =
               System_IO_DirectoryInfo__CreateSubdirectory(destination,pSVar4,(MethodInfo *)0x0);
          Utility_DataMigrator__CopyDirectory(pSVar2,destination_00,method_00);
          uVar6 = uVar6 + 1;
          uVar7 = (uint)pSVar5->max_length;
        } while ((int)uVar6 < (int)uVar7);
      }
      return;
    }
  }
LAB_0415c08a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.DataMigrator$$MigrateLinuxSaves
// il2cpp: void Utility_DataMigrator__MigrateLinuxSaves (const MethodInfo* method);
// 0x415c0b0

void Utility_DataMigrator__MigrateLinuxSaves(MethodInfo *method)

{
  System_String_o *path;
  bool_conflict bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_IO_DirectoryInfo_o *__this;
  System_IO_DirectoryInfo_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05704a2f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DirectoryInfo);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&"/Aottg2");
    DAT_05704a2f = '\x01';
  }
  pSVar3 = System_Environment__GetFolderPath(5,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,"/Aottg2",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8);
  bVar1 = System_IO_Directory__Exists(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    iVar2 = System_IO_File__GetAttributes(pSVar3,(MethodInfo *)0x0);
    if (iVar2 == 0x10) {
      bVar1 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        __this = (System_IO_DirectoryInfo_o *)il2cpp_runtime_glue(TypeInfo_DirectoryInfo);
        System_IO_DirectoryInfo___ctor(__this,pSVar3,(MethodInfo *)0x0);
        __this_00 = (System_IO_DirectoryInfo_o *)il2cpp_runtime_glue(TypeInfo_DirectoryInfo);
        System_IO_DirectoryInfo___ctor(__this_00,path,(MethodInfo *)0x0);
        Utility_DataMigrator__CopyDirectory(__this,__this_00,method_00);
      }
    }
  }
  return;
}


// Utility.DataMigrator$$.ctor
// il2cpp: void Utility_DataMigrator___ctor (Utility_DataMigrator_o* __this, const MethodInfo* method);
// 0x415c2b0

void Utility_DataMigrator___ctor(Utility_DataMigrator_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


