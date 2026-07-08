// Type: ApplicationManagers.AssetBundleManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/AssetBundleManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/AssetBundleManager.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__8___ctor (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41950d0

void ApplicationManagers_AssetBundleManager_<LoadBundle>d__8___ctor
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,int32_t __1__state
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_IDisposable_Dispose (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x4196e10

/* WARNING: Removing unreachable block (ram,0x04196f87) */

void ApplicationManagers_AssetBundleManager_<LoadBundle>d__8__System_IDisposable_Dispose
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method
               )

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  UnityEngine_Networking_DownloadHandler_o *pUVar4;
  UnityEngine_Networking_DownloadHandler_c *pUVar5;
  UnityEngine_Networking_UnityWebRequest_o *pUVar6;
  UnityEngine_Networking_UnityWebRequest_c *pUVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  VirtualInvokeData *pVVar9;
  long lVar10;
  
  uVar3 = (__this->fields).__1__state;
  if ((uVar3 & 0xfffffffe) == 0xfffffffc) {
    if ((uVar3 != 2) && (uVar3 != 0xfffffffc)) goto joined_r0x04196eee;
  }
  else if (uVar3 != 2) {
    return;
  }
  if (DAT_05704c36 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704c36 = '\x01';
  }
  (__this->fields).__1__state = -3;
  pUVar4 = (__this->fields).__7__wrap4;
  if (pUVar4 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
    pUVar5 = pUVar4->klass;
    uVar1._0_1_ = (pUVar5->_2).rank;
    uVar1._1_1_ = (pUVar5->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar8 = (pUVar5->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar10) == TypeInfo_IDisposable) {
          pVVar9 = &(pUVar5->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar10);
          goto LAB_04196edb;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar10);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar4,TypeInfo_IDisposable,0);
LAB_04196edb:
    (*pVVar9->methodPtr)(pUVar4,pVVar9->method);
  }
joined_r0x04196eee:
  if (DAT_05704c35 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704c35 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar6 = (__this->fields)._dlreq_5__4;
  if (pUVar6 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    pUVar7 = pUVar6->klass;
    uVar2._0_1_ = (pUVar7->_2).rank;
    uVar2._1_1_ = (pUVar7->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar8 = (pUVar7->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar10) == TypeInfo_IDisposable) {
          pVVar9 = &(pUVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar10);
          goto LAB_04196f6d;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar10);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar6,TypeInfo_IDisposable,0);
LAB_04196f6d:
    (*pVVar9->methodPtr)(pUVar6,pVVar9->method);
  }
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$MoveNext
// il2cpp: bool ApplicationManagers_AssetBundleManager__LoadBundle_d__8__MoveNext (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x4197080

bool_conflict
ApplicationManagers_AssetBundleManager_<LoadBundle>d__8__MoveNext
          (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  UnityEngine_Networking_DownloadHandler_o *pUVar8;
  UnityEngine_Networking_DownloadHandler_c *pUVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  UnityEngine_Networking_UnityWebRequest_c *pUVar11;
  UI_InGameMenu_o *pUVar12;
  UI_CustomAssetUrlPopup_o *pUVar13;
  Il2CppClass *pIVar14;
  bool_conflict bVar15;
  UnityEngine_Object_o *pUVar16;
  System_String_o *pSVar17;
  UnityEngine_Networking_UnityWebRequest_o *pUVar18;
  UnityEngine_Networking_DownloadHandlerFile_o *__this_00;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar19;
  Il2CppMethodPointer *ppIVar20;
  uint64_t uVar21;
  System_String_o *pSVar22;
  UnityEngine_AssetBundle_o *pUVar23;
  Il2CppObject **ppIVar24;
  long lVar25;
  
  if (DAT_05704c34 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_AssetBundle_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_DownloadHandlerFile);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityWebRequest);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"/");
    DAT_05704c34 = '\x01';
  }
  iVar6 = (__this->fields).__1__state;
  if (iVar6 == 2) {
    (__this->fields).__1__state = -4;
    pUVar19 = (__this->fields)._op_5__6;
  }
  else {
    if (iVar6 == 1) {
      (__this->fields).__1__state = -1;
      pUVar12 = (__this->fields)._menu_5__3;
    }
    else {
      if (iVar6 != 0) {
        return 0;
      }
      (__this->fields).__1__state = -1;
      pSVar17 = (__this->fields).bundle;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar15 = Utility_Util__IsValidFileName(pSVar17,method);
      if ((char)bVar15 == '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
      if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar15 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                         (pSVar7,(Il2CppObject *)(__this->fields).bundle,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar15 != '\0') {
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
        if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar16 = (UnityEngine_Object_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (pSVar7,(Il2CppObject *)(__this->fields).bundle,MethodInfo_AssetBundle_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar15 = UnityEngine_Object__op_Inequality
                           (pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          return 0;
        }
      }
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
      if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar7,(Il2CppObject *)(__this->fields).bundle,(Il2CppObject *)0x0,MethodInfo_Void_set_Item);
      if ((char)(__this->fields).editor != '\0') {
LAB_041972d8:
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
        pSVar17 = (__this->fields).bundle;
        pSVar22 = pSVar17;
        if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
          il2cpp_init_class();
          pSVar22 = (__this->fields).bundle;
        }
        pSVar22 = System_String__Concat
                            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),
                             "/",pSVar22,(MethodInfo *)0x0);
        pUVar23 = UnityEngine_AssetBundle__LoadFromFile(pSVar22,(MethodInfo *)0x0);
        if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar7,(Il2CppObject *)pSVar17,(Il2CppObject *)pUVar23,MethodInfo_Void_set_Item);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar17 = System_String__Concat
                          (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),"/"
                           ,(__this->fields).bundle,(MethodInfo *)0x0);
      bVar15 = System_IO_File__Exists(pSVar17,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') goto LAB_041972d8;
      if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar17 = System_String__Concat
                          (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),"/"
                           ,(__this->fields).bundle,(MethodInfo *)0x0);
      (__this->fields)._path_5__2 = pSVar17;
      il2cpp_runtime_glue(&(__this->fields)._path_5__2);
      bVar15 = System_IO_File__Exists((__this->fields)._path_5__2,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
        pSVar17 = (__this->fields).bundle;
        pUVar23 = UnityEngine_AssetBundle__LoadFromFile
                            ((__this->fields)._path_5__2,(MethodInfo *)0x0);
        if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar7,(Il2CppObject *)pSVar17,(Il2CppObject *)pUVar23,MethodInfo_Void_set_Item);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar15 = System_String__op_Equality
                         ((__this->fields).url,
                          (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                          (MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar14 = TypeInfo_InGameMenu;
      pUVar12 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar12 == (UI_InGameMenu_o *)0x0) {
        (__this->fields)._menu_5__3 = (UI_InGameMenu_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if (((pUVar12->klass->_2).naturalAligment < bVar1) ||
           ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pUVar12,TypeInfo_InGameMenu);
        }
        (__this->fields)._menu_5__3 = pUVar12;
        if (((pUVar12->klass->_2).naturalAligment < bVar1) ||
           ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar14)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pUVar12,pIVar14);
        }
      }
      il2cpp_runtime_glue(&(__this->fields)._menu_5__3);
      pSVar17 = (__this->fields).url;
      if (pSVar17 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (0x32 < (pSVar17->fields)._stringLength) {
        pSVar17 = System_String__Substring(pSVar17,0,0x32,(MethodInfo *)0x0);
      }
      pUVar12 = (__this->fields)._menu_5__3;
      if (pUVar12 == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar13 = (pUVar12->fields)._customAssetUrlPopup;
      if (pUVar13 == (UI_CustomAssetUrlPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UI_CustomAssetUrlPopup__Show(pUVar13,pSVar17,(MethodInfo *)0x0);
      pUVar12 = (__this->fields)._menu_5__3;
    }
    if (pUVar12 == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar13 = (pUVar12->fields)._customAssetUrlPopup;
    if (pUVar13 == (UI_CustomAssetUrlPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((char)(pUVar13->fields).Done == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      ppIVar24 = &(__this->fields).__2__current;
      il2cpp_runtime_glue(ppIVar24,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)ppIVar24 >> 8),1);
    }
    if (*(char *)((long)&(pUVar13->fields).Done + 1) == '\0') goto LAB_041977a1;
    pSVar17 = (__this->fields).url;
    pUVar18 = (UnityEngine_Networking_UnityWebRequest_o *)il2cpp_runtime_glue(TypeInfo_UnityWebRequest);
    UnityEngine_Networking_UnityWebRequest___ctor(pUVar18,pSVar17,(MethodInfo *)0x0);
    (__this->fields)._dlreq_5__4 = pUVar18;
    il2cpp_runtime_glue(&(__this->fields)._dlreq_5__4,pUVar18);
    (__this->fields).__1__state = -3;
    pSVar17 = (__this->fields)._path_5__2;
    pUVar18 = (__this->fields)._dlreq_5__4;
    __this_00 = (UnityEngine_Networking_DownloadHandlerFile_o *)il2cpp_runtime_glue(TypeInfo_DownloadHandlerFile);
    UnityEngine_Networking_DownloadHandlerFile___ctor(__this_00,pSVar17,(MethodInfo *)0x0);
    if (pUVar18 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Networking_UnityWebRequest__set_downloadHandler
              (pUVar18,(UnityEngine_Networking_DownloadHandler_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields).__7__wrap4 = (UnityEngine_Networking_DownloadHandler_o *)__this_00;
    il2cpp_runtime_glue(&(__this->fields).__7__wrap4);
    (__this->fields).__1__state = -4;
    pUVar18 = (__this->fields)._dlreq_5__4;
    if (pUVar18 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar19 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar18,(MethodInfo *)0x0);
    (__this->fields)._op_5__6 = pUVar19;
    il2cpp_runtime_glue(&(__this->fields)._op_5__6);
    (__this->fields)._maxBytes_5__7 = 1000000000;
    pUVar19 = (__this->fields)._op_5__6;
  }
  if (pUVar19 == (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar15 = UnityEngine_AsyncOperation__get_isDone
                     ((UnityEngine_AsyncOperation_o *)pUVar19,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    pUVar19 = (__this->fields)._op_5__6;
    if (pUVar19 == (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar18 = (pUVar19->fields)._webRequest_k__BackingField;
    if (pUVar18 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar21 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes(pUVar18,(MethodInfo *)0x0);
    if (uVar21 <= (__this->fields)._maxBytes_5__7) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      ppIVar24 = &(__this->fields).__2__current;
      il2cpp_runtime_glue(ppIVar24,0);
      (__this->fields).__1__state = 2;
      return (bool_conflict)CONCAT71((int7)((ulong)ppIVar24 >> 8),1);
    }
    if (DAT_05704c36 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704c36 = '\x01';
    }
    (__this->fields).__1__state = -3;
    pUVar8 = (__this->fields).__7__wrap4;
    if (pUVar8 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
      pUVar9 = pUVar8->klass;
      uVar3._0_1_ = (pUVar9->_2).rank;
      uVar3._1_1_ = (pUVar9->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar10 = (pUVar9->_1).interfaceOffsets;
        lVar25 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar25) == TypeInfo_IDisposable) {
            ppIVar20 = &(&(pUVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar25)].
                        methodPtr;
            goto LAB_041978eb;
          }
          lVar25 = lVar25 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar25);
      }
      ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar8,TypeInfo_IDisposable,0);
LAB_041978eb:
      (**ppIVar20)(pUVar8,(MethodInfo *)ppIVar20[1]);
    }
    if (DAT_05704c35 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704c35 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar18 = (__this->fields)._dlreq_5__4;
    if (pUVar18 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar11 = pUVar18->klass;
      uVar5._0_1_ = (pUVar11->_2).rank;
      uVar5._1_1_ = (pUVar11->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar10 = (pUVar11->_1).interfaceOffsets;
        lVar25 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar25) == TypeInfo_IDisposable) {
            ppIVar20 = &(&(pUVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar25)].
                        methodPtr;
            goto LAB_0419797d;
          }
          lVar25 = lVar25 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar25);
      }
      ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar18,TypeInfo_IDisposable,0);
LAB_0419797d:
      (**ppIVar20)(pUVar18,(MethodInfo *)ppIVar20[1]);
    }
    return 0;
  }
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  pSVar17 = (__this->fields).bundle;
  pUVar23 = UnityEngine_AssetBundle__LoadFromFile((__this->fields)._path_5__2,(MethodInfo *)0x0);
  if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__set_Item
            (pSVar7,(Il2CppObject *)pSVar17,(Il2CppObject *)pUVar23,MethodInfo_Void_set_Item);
  pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar16 = (UnityEngine_Object_o *)
            System_Collections_Generic_Dictionary<object__object>__get_Item
                      (pSVar7,(Il2CppObject *)(__this->fields).bundle,MethodInfo_AssetBundle_get_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar15 = UnityEngine_Object__op_Equality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    System_IO_File__Delete((__this->fields)._path_5__2,(MethodInfo *)0x0);
  }
  (__this->fields)._op_5__6 = (UnityEngine_Networking_UnityWebRequestAsyncOperation_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._op_5__6,0);
  if (DAT_05704c36 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704c36 = '\x01';
  }
  (__this->fields).__1__state = -3;
  pUVar8 = (__this->fields).__7__wrap4;
  if (pUVar8 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
    pUVar9 = pUVar8->klass;
    uVar2._0_1_ = (pUVar9->_2).rank;
    uVar2._1_1_ = (pUVar9->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar10 = (pUVar9->_1).interfaceOffsets;
      lVar25 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar25) == TypeInfo_IDisposable) {
          ppIVar20 = &(&(pUVar9->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar25)].
                      methodPtr;
          goto LAB_041976d4;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar25);
    }
    ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar8,TypeInfo_IDisposable,0);
LAB_041976d4:
    (**ppIVar20)(pUVar8,(MethodInfo *)ppIVar20[1]);
  }
  (__this->fields).__7__wrap4 = (UnityEngine_Networking_DownloadHandler_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields).__7__wrap4,0);
  if (DAT_05704c35 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704c35 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar18 = (__this->fields)._dlreq_5__4;
  if (pUVar18 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    pUVar11 = pUVar18->klass;
    uVar4._0_1_ = (pUVar11->_2).rank;
    uVar4._1_1_ = (pUVar11->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar10 = (pUVar11->_1).interfaceOffsets;
      lVar25 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar25) == TypeInfo_IDisposable) {
          ppIVar20 = &(&(pUVar11->vtable)._0_Equals)[*(int *)((long)&pIVar10->offset + lVar25)].
                      methodPtr;
          goto LAB_0419777d;
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar25);
    }
    ppIVar20 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pUVar18,TypeInfo_IDisposable,0);
LAB_0419777d:
    (**ppIVar20)(pUVar18,(MethodInfo *)ppIVar20[1]);
  }
  (__this->fields)._dlreq_5__4 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._dlreq_5__4,0);
LAB_041977a1:
  (__this->fields)._menu_5__3 = (UI_InGameMenu_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._menu_5__3,0);
  (__this->fields)._path_5__2 = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._path_5__2,0);
  return 0;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$<>m__Finally1
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__8____m__Finally1 (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x4197de0

void ApplicationManagers_AssetBundleManager_<LoadBundle>d__8__<>m__Finally1
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method
               )

{
  ushort uVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtable_dispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_05704c35 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704c35 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields)._dlreq_5__4;
  if (pUVar2 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pUVar3 = pUVar2->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pUVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = &(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar5);
        goto LAB_04197e6f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_glue(pUVar2,TypeInfo_IDisposable,0);
LAB_04197e6f:
  vtable_dispatch = (code *)*auVar6._0_8_;
  (*vtable_dispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtable_dispatch);
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$<>m__Finally2
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__8____m__Finally2 (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x4197d40

void ApplicationManagers_AssetBundleManager_<LoadBundle>d__8__<>m__Finally2
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method
               )

{
  ushort uVar1;
  UnityEngine_Networking_DownloadHandler_o *pUVar2;
  UnityEngine_Networking_DownloadHandler_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtable_dispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_05704c36 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704c36 = '\x01';
  }
  (__this->fields).__1__state = -3;
  pUVar2 = (__this->fields).__7__wrap4;
  if (pUVar2 == (UnityEngine_Networking_DownloadHandler_o *)0x0) {
    return;
  }
  pUVar3 = pUVar2->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pUVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = &(pUVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar5);
        goto LAB_04197dcf;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_glue(pUVar2,TypeInfo_IDisposable,0);
LAB_04197dcf:
  vtable_dispatch = (code *)*auVar6._0_8_;
  (*vtable_dispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtable_dispatch);
  return;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x4197e80

Il2CppObject *
ApplicationManagers_AssetBundleManager_<LoadBundle>d__8__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_Collections_IEnumerator_Reset (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x4197e90

void ApplicationManagers_AssetBundleManager_<LoadBundle>d__8__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method
               )

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AssetBundleManager.<LoadBundle>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AssetBundleManager__LoadBundle_d__8__System_Collections_IEnumerator_get_Current (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o* __this, const MethodInfo* method);
// 0x4197ed0

Il2CppObject *
ApplicationManagers_AssetBundleManager_<LoadBundle>d__8__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AssetBundleManager__LoadBundle_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AssetBundleManager$$Init
// il2cpp: void ApplicationManagers_AssetBundleManager__Init (const MethodInfo* method);
// 0x41944e0

void ApplicationManagers_AssetBundleManager__Init(MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  
  if (DAT_05704c29 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&MethodInfo_AssetBundleManager_CreateSingleton_AssetBundleMa);
    DAT_05704c29 = '\x01';
  }
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_AssetBundleManager + 0xb8),MethodInfo_AssetBundleManager_CreateSingleton_AssetBundleMa);
  **(undefined8 **)(TypeInfo_AssetBundleManager + 0xb8) = pIVar2;
  method_00 = *(MethodInfo **)(TypeInfo_AssetBundleManager + 0xb8);
  il2cpp_runtime_glue();
  ApplicationManagers_AssetBundleManager__ClearTemp(method_00);
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),(MethodInfo *)0x0)
  ;
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x70),(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0)
  ;
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AssetBundleManager$$OnApplicationQuit
// il2cpp: void ApplicationManagers_AssetBundleManager__OnApplicationQuit (ApplicationManagers_AssetBundleManager_o* __this, const MethodInfo* method);
// 0x4194d40

void ApplicationManagers_AssetBundleManager__OnApplicationQuit
               (ApplicationManagers_AssetBundleManager_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  if (DAT_05704c2a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    DAT_05704c2a = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AssetBundleManager[2].parameters + 4);
    method_00 = TypeInfo_AssetBundleManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AssetBundleManager[2].parameters + 4);
    method_00 = TypeInfo_AssetBundleManager;
  }
  TypeInfo_AssetBundleManager = method_00;
  if (iVar1 != 0) {
    ApplicationManagers_AssetBundleManager__ClearTemp(method_00);
    return;
  }
  il2cpp_init_class();
  ApplicationManagers_AssetBundleManager__ClearTemp(method_00);
  return;
}


// ApplicationManagers.AssetBundleManager$$ClearTemp
// il2cpp: void ApplicationManagers_AssetBundleManager__ClearTemp (const MethodInfo* method);
// 0x4194bd0

void ApplicationManagers_AssetBundleManager__ClearTemp(MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704c2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    DAT_05704c2b = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),(MethodInfo *)0x0)
  ;
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_IO_Directory__Delete
              (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x78),1,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.AssetBundleManager$$Clear
// il2cpp: void ApplicationManagers_AssetBundleManager__Clear (const MethodInfo* method);
// 0x4194da0

void ApplicationManagers_AssetBundleManager__Clear(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar5;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (DAT_05704c2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AssetBundle_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05704c2c = '\x01';
  }
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 8);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar1,MethodInfo_Void_Clear);
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = System_Collections_Generic_Dictionary<object__object>__get_Values
                            (pSVar1,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
      if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
      {
        System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                    *)local_40,__this_01,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
        pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
        pSVar4 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *
                 )local_40._8_8_;
        while( true ) {
          x = local_30;
          __this.fields._8_8_ = pSVar4;
          __this.fields._dictionary = pSVar3;
          __this.fields._currentValue = (Il2CppObject *)x;
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                            (__this,(MethodInfo_31D09E0 *)&stack0xffffffffffffffa8);
          if ((char)bVar2 == '\0') break;
          pUVar5 = x;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          local_30 = pUVar5;
          if ((char)bVar2 != '\0') {
            if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)x,1,(MethodInfo *)0x0);
            local_30 = pUVar5;
          }
        }
        __this_00.fields._8_8_ = pSVar4;
        __this_00.fields._dictionary = pSVar3;
        __this_00.fields._currentValue = (Il2CppObject *)x;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                  (__this_00,(MethodInfo_31D09D0 *)&stack0xffffffffffffffa8);
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Clear(pSVar1,MethodInfo_Void_Clear);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AssetBundleManager$$LoadBundle
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AssetBundleManager__LoadBundle (System_String_o* bundle, System_String_o* url, bool editor, const MethodInfo* method);
// 0x4195040

System_Collections_IEnumerator_o *
ApplicationManagers_AssetBundleManager__LoadBundle
          (System_String_o *bundle,System_String_o *url,bool_conflict editor,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704c2d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadBundle_d__8);
    DAT_05704c2d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadBundle_d__8);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)bundle;
    il2cpp_runtime_glue(__this + 2,bundle);
    __this[3].klass = (Il2CppClass *)url;
    il2cpp_runtime_glue(__this + 3,url);
    *(char *)&__this[2].monitor = (char)editor;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AssetBundleManager$$GetAssetListFromBundle
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_AssetBundleManager__GetAssetListFromBundle (System_String_o* bundle, const MethodInfo* method);
// 0x41950f0

System_Collections_Generic_List_string__o *
ApplicationManagers_AssetBundleManager__GetAssetListFromBundle
          (System_String_o *bundle,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_Collections_Generic_List_string__o *__this;
  UnityEngine_Object_o *x;
  UnityEngine_AssetBundle_o *__this_00;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  long lVar8;
  uint uVar9;
  
  if (DAT_05704c2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_AssetBundle_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"Custom/");
    il2cpp_init_method_metadata(&".prefab");
    DAT_05704c2e = '\x01';
  }
  __this = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)bundle,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_041954ff;
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_Dictionary<object__object>__get_Item
                    (pSVar2,(Il2CppObject *)bundle,MethodInfo_AssetBundle_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
        if (((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
            (__this_00 = (UnityEngine_AssetBundle_o *)
                         System_Collections_Generic_Dictionary<object__object>__get_Item
                                   (pSVar2,(Il2CppObject *)bundle,MethodInfo_AssetBundle_get_Item),
            __this_00 == (UnityEngine_AssetBundle_o *)0x0)) ||
           (pSVar5 = UnityEngine_AssetBundle__GetAllAssetNames(__this_00,(MethodInfo *)0x0),
           pSVar5 == (System_String_array *)0x0)) goto LAB_041954ff;
        uVar4 = (uint)pSVar5->max_length;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) {
          if (0 < (int)uVar4) {
            lVar8 = 0;
            do {
              if (uVar4 <= (uint)lVar8) goto LAB_041954db;
              if ((pSVar5->m_Items[lVar8] == (System_String_o *)0x0) ||
                 (pSVar6 = System_String__Trim(pSVar5->m_Items[lVar8],(MethodInfo *)0x0),
                 pSVar6 == (System_String_o *)0x0)) goto LAB_041954ff;
              bVar3 = System_String__EndsWith(pSVar6,".prefab",(MethodInfo *)0x0);
              if ((char)bVar3 != '\0') {
                bVar3 = System_String__Contains(pSVar6,0x2f,(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  pSVar5 = System_String__Split(pSVar6,0x2f,0,(MethodInfo *)0x0);
                  if (pSVar5 == (System_String_array *)0x0) goto LAB_041954ff;
                  if ((int)pSVar5->max_length == 0) goto LAB_041954db;
                  pSVar6 = *(System_String_o **)
                            ((long)pSVar5->m_Items +
                            ((long)((pSVar5->max_length << 0x20) + -0x100000000) >> 0x1d));
                  if (pSVar6 == (System_String_o *)0x0) goto LAB_041954ff;
                }
                pSVar6 = System_String__Substring
                                   (pSVar6,0,(pSVar6->fields)._stringLength + -7,(MethodInfo *)0x0);
                System_String__Concat("Custom/",bundle,"/",pSVar6,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              uVar4 = (uint)pSVar5->max_length;
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < (int)uVar4);
          }
        }
        else if (0 < (int)uVar4) {
          uVar9 = 0;
          if (uVar4 != 0) {
            do {
              if ((pSVar5->m_Items[(int)uVar9] == (System_String_o *)0x0) ||
                 (pSVar6 = System_String__Trim(pSVar5->m_Items[(int)uVar9],(MethodInfo *)0x0),
                 pSVar6 == (System_String_o *)0x0)) goto LAB_041954ff;
              bVar3 = System_String__EndsWith(pSVar6,".prefab",(MethodInfo *)0x0);
              if ((char)bVar3 == '\0') {
LAB_041952fa:
                uVar4 = (uint)pSVar5->max_length;
                if ((int)uVar4 <= (int)(uVar9 + 1)) {
                  return __this;
                }
              }
              else {
                bVar3 = System_String__Contains(pSVar6,0x2f,(MethodInfo *)0x0);
                if ((char)bVar3 != '\0') {
                  pSVar7 = System_String__Split(pSVar6,0x2f,0,(MethodInfo *)0x0);
                  if (pSVar7 == (System_String_array *)0x0) goto LAB_041954ff;
                  if ((int)pSVar7->max_length == 0) break;
                  pSVar6 = *(System_String_o **)
                            ((long)pSVar7->m_Items +
                            ((long)((pSVar7->max_length << 0x20) + -0x100000000) >> 0x1d));
                  if (pSVar6 == (System_String_o *)0x0) goto LAB_041954ff;
                }
                pSVar6 = System_String__Substring
                                   (pSVar6,0,(pSVar6->fields)._stringLength + -7,(MethodInfo *)0x0);
                pSVar6 = System_String__Concat
                                   ("Custom/",bundle,"/",pSVar6,(MethodInfo *)0x0);
                lVar8 = MethodInfo_Void_Add;
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar7 = (__this->fields)._items;
                if (pSVar7 == (System_String_array *)0x0) goto LAB_041954ff;
                uVar4 = (__this->fields)._size;
                if ((uint)pSVar7->max_length <= uVar4) {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,
                             (Il2CppObject *)pSVar6,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  goto LAB_041952fa;
                }
                (__this->fields)._size = uVar4 + 1;
                pSVar7->m_Items[(int)uVar4] = pSVar6;
                il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar4);
                uVar4 = (uint)pSVar5->max_length;
                if ((int)uVar4 <= (int)(uVar9 + 1)) {
                  return __this;
                }
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar4);
          }
LAB_041954db:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    return __this;
  }
LAB_041954ff:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AssetBundleManager$$GetAssetList
// il2cpp: System_Collections_Generic_List_string__o* ApplicationManagers_AssetBundleManager__GetAssetList (const MethodInfo* method);
// 0x4195540

System_Collections_Generic_List_string__o *
ApplicationManagers_AssetBundleManager__GetAssetList(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_string__o *__this_03;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  System_Collections_Generic_List_string__o *collection;
  MethodInfo *pMVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  System_String_o *bundle;
  System_String_o *pSVar5;
  
  if (DAT_05704c2f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704c2f = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  bundle = (System_String_o *)0x0;
  __this_03 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  if ((__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            (__this,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffb8,__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) {
      __this_01.fields._8_8_ = pIVar4;
      __this_01.fields._dictionary = pSVar3;
      __this_01.fields._currentKey = (Il2CppObject *)bundle;
      pMVar2 = MethodInfo_Boolean_MoveNext;
      bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                        (__this_01,(MethodInfo_31D0850 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 != '\0') {
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_AssetBundleManager__GetAssetListFromBundle(bundle,pMVar2);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_00.fields._8_8_ = pIVar4, __this_00.fields._dictionary = pSVar3,
            __this_00.fields._currentKey = (Il2CppObject *)bundle, pMVar2 = MethodInfo_Boolean_MoveNext,
            bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                              (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffffb8),
            (char)bVar1 != '\0') {
        pSVar5 = bundle;
        if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        collection = ApplicationManagers_AssetBundleManager__GetAssetListFromBundle(bundle,pMVar2);
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)__this_03,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_Void_AddRange);
        bundle = pSVar5;
      }
    }
    __this_02.fields._8_8_ = pIVar4;
    __this_02.fields._dictionary = pSVar3;
    __this_02.fields._currentKey = (Il2CppObject *)bundle;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31D0840 *)&stack0xffffffffffffffb8);
    return __this_03;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AssetBundleManager$$LoadedBundle
// il2cpp: bool ApplicationManagers_AssetBundleManager__LoadedBundle (System_String_o* bundle, const MethodInfo* method);
// 0x41957c0

bool_conflict
ApplicationManagers_AssetBundleManager__LoadedBundle(System_String_o *bundle,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  
  if (DAT_05704c30 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_AssetBundle_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704c30 = '\x01';
    iVar1 = *(int *)(TypeInfo_AssetBundleManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AssetBundleManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)bundle,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_Dictionary<object__object>__get_Item
                    (pSVar2,(Il2CppObject *)bundle,MethodInfo_AssetBundle_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AssetBundleManager$$LoadAsset
// il2cpp: UnityEngine_Object_o* ApplicationManagers_AssetBundleManager__LoadAsset (System_String_o* bundle, System_String_o* name, const MethodInfo* method);
// 0x41958f0

UnityEngine_Object_o *
ApplicationManagers_AssetBundleManager__LoadAsset
          (System_String_o *bundle,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_AssetBundle_o *__this;
  System_String_o *pSVar4;
  undefined8 uVar5;
  System_Exception_o *__this_00;
  
  if (DAT_05704c31 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_AssetBundle_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704c31 = '\x01';
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) goto LAB_04195988;
LAB_0419591c:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) != 0) goto LAB_0419591c;
LAB_04195988:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)bundle,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
LAB_04195a9c:
      pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Custom bundle not loaded: ");
      pSVar4 = System_String__Concat(pSVar4,bundle,(MethodInfo *)0x0);
      uVar5 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar5);
      System_Exception___ctor(__this_00,pSVar4,(MethodInfo *)0x0);
      uVar5 = il2cpp_init_method_metadata(&MethodInfo_Object_LoadAsset);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_00,uVar5);
    }
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = (UnityEngine_Object_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)bundle,MethodInfo_AssetBundle_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') goto LAB_04195a9c;
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x10);
      if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this = (UnityEngine_AssetBundle_o *)
                   System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar1,(Il2CppObject *)bundle,MethodInfo_AssetBundle_get_Item),
         __this != (UnityEngine_AssetBundle_o *)0x0)) {
        pUVar3 = UnityEngine_AssetBundle__LoadAsset(__this,name,(MethodInfo *)0x0);
        if ((pUVar3 != (UnityEngine_Object_o *)0x0) &&
           (name = (System_String_o *)TypeInfo_GameObject, pUVar3->klass != TypeInfo_GameObject)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pUVar3);
        }
        ApplicationManagers_AssetBundleManager__ValidateCustomPrefab
                  ((UnityEngine_GameObject_o *)pUVar3,(MethodInfo *)name);
        return pUVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AssetBundleManager$$ValidateCustomPrefab
// il2cpp: void ApplicationManagers_AssetBundleManager__ValidateCustomPrefab (UnityEngine_GameObject_o* prefab, const MethodInfo* method);
// 0x4195b00

/* WARNING: Removing unreachable block (ram,0x04195ed0) */
/* WARNING: Removing unreachable block (ram,0x04195ed8) */
/* WARNING: Removing unreachable block (ram,0x0419616a) */

void ApplicationManagers_AssetBundleManager__ValidateCustomPrefab
               (UnityEngine_GameObject_o *prefab,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  UnityEngine_Animation_o *__this;
  UnityEngine_Animation_c *pUVar5;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_RuntimeTypeHandle_o handle;
  char cVar8;
  uint uVar9;
  System_Type_o *pSVar10;
  UnityEngine_Component_array *pUVar11;
  System_Collections_IEnumerator_o *pSVar12;
  VirtualInvokeData *pVVar13;
  UnityEngine_AnimationState_o *__this_00;
  UnityEngine_AnimationClip_o *pUVar14;
  UnityEngine_AnimationEvent_array *pUVar15;
  long *plVar16;
  undefined8 *puVar17;
  UnityEngine_RuntimeAnimatorController_o *__this_01;
  UnityEngine_AnimationClip_array *pUVar18;
  System_String_o *pSVar19;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar20;
  System_Exception_o *__this_02;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  
  if (DAT_05704c32 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimationEvent);
    il2cpp_init_method_metadata(&TypeInfo_AnimationState);
    il2cpp_init_method_metadata(&TypeInfo_Animation);
    il2cpp_init_method_metadata(&TypeInfo_Animator);
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&TypeRef_Component);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    DAT_05704c32 = '\x01';
  }
  handle.fields.value = TypeRef_Component.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar10 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((prefab == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar11 = UnityEngine_GameObject__GetComponentsInChildren(prefab,pSVar10,(MethodInfo *)0x0),
     pUVar11 == (UnityEngine_Component_array *)0x0)) {
LAB_041960c9:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar4 = (int)pUVar11->max_length;
  if (iVar4 < 1) {
    return;
  }
  uVar24 = 0;
  if (iVar4 == 0) {
LAB_041960be:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04195c1b:
  __this = (UnityEngine_Animation_o *)pUVar11->m_Items[(int)uVar24];
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar22 = *(long *)(*(long *)(TypeInfo_AssetBundleManager + 0xb8) + 0x18);
  if (lVar22 == 0) goto LAB_041960c9;
  if (__this == (UnityEngine_Animation_o *)0x0) {
    if (*(int *)(lVar22 + 0x18) < 1) {
LAB_041960ce:
      il2cpp_glue_01f2f1a0(__this);
      pSVar10 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
      il2cpp_glue_01f2f1a0(pSVar10);
      pSVar19 = (System_String_o *)
                (*(pSVar10->klass->vtable)._8_unknown.methodPtr)
                          (pSVar10,(pSVar10->klass->vtable)._8_unknown.method);
      str0 = (System_String_o *)il2cpp_init_method_metadata(&"Disallowed component (");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&")");
      pSVar19 = System_String__Concat(str0,pSVar19,str2,(MethodInfo *)0x0);
      uVar20 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_02 = (System_Exception_o *)il2cpp_runtime_glue(uVar20);
      System_Exception___ctor(__this_02,pSVar19,(MethodInfo *)0x0);
      uVar20 = il2cpp_init_method_metadata(&MethodInfo_Void_ValidateCustomPrefab);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_02,uVar20);
    }
    goto LAB_041960c9;
  }
  lVar23 = 0;
  do {
    if ((int)*(uint *)(lVar22 + 0x18) <= (int)(uint)lVar23) goto LAB_041960ce;
    if (*(uint *)(lVar22 + 0x18) <= (uint)lVar23) goto LAB_041960be;
    plVar16 = *(long **)(lVar22 + 0x20 + lVar23 * 8);
    pSVar10 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    if (plVar16 == (long *)0x0) goto LAB_041960c9;
    cVar8 = (**(code **)(*plVar16 + 0x298))(plVar16,pSVar10,*(undefined8 *)(*plVar16 + 0x2a0));
    lVar23 = lVar23 + 1;
  } while (cVar8 == '\0');
  pUVar5 = __this->klass;
  if (pUVar5 == TypeInfo_Animation) {
    pSVar12 = UnityEngine_Animation__GetEnumerator(__this,(MethodInfo *)0x0);
    if (pSVar12 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      pSVar6 = pSVar12->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar22) == TypeInfo_IEnumerator) {
            pVVar13 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar22);
            goto LAB_04195d43;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar22);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar12,TypeInfo_IEnumerator,0);
LAB_04195d43:
      cVar8 = (*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if (cVar8 == '\0') goto LAB_04195e30;
      pSVar6 = pSVar12->klass;
      uVar3._0_1_ = (pSVar6->_2).rank;
      uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar22 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar22) == TypeInfo_IEnumerator) {
            pVVar13 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar22) + 1);
            goto LAB_04195dc8;
          }
          lVar22 = lVar22 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar22);
      }
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar12,TypeInfo_IEnumerator,1);
LAB_04195dc8:
      __this_00 = (UnityEngine_AnimationState_o *)(*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if (__this_00 == (UnityEngine_AnimationState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_00->klass != TypeInfo_AnimationState) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
      pUVar14 = UnityEngine_AnimationState__get_clip(__this_00,(MethodInfo *)0x0);
      pUVar15 = (UnityEngine_AnimationEvent_array *)il2cpp_glue_02274930(TypeInfo_AnimationEvent,0);
      if (pUVar14 == (UnityEngine_AnimationClip_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_AnimationClip__set_events(pUVar14,pUVar15,(MethodInfo *)0x0);
    } while( true );
  }
  bVar1 = (TypeInfo_Animator->_2).naturalAligment;
  if ((bVar1 <= (pUVar5->_2).naturalAligment) &&
     ((pUVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Animator)) {
    __this_01 = UnityEngine_Animator__get_runtimeAnimatorController
                          ((UnityEngine_Animator_o *)__this,(MethodInfo *)0x0);
    if ((__this_01 != (UnityEngine_RuntimeAnimatorController_o *)0x0) &&
       (pUVar18 = UnityEngine_RuntimeAnimatorController__get_animationClips
                            (__this_01,(MethodInfo *)0x0),
       pUVar18 != (UnityEngine_AnimationClip_array *)0x0)) {
      uVar9 = (uint)pUVar18->max_length;
      if (0 < (int)uVar9) {
        uVar21 = 0;
        do {
          if (uVar9 <= uVar21) goto LAB_041960be;
          pUVar14 = pUVar18->m_Items[(int)uVar21];
          pUVar15 = (UnityEngine_AnimationEvent_array *)il2cpp_glue_02274930(TypeInfo_AnimationEvent,0);
          if (pUVar14 == (UnityEngine_AnimationClip_o *)0x0) goto LAB_041960c9;
          UnityEngine_AnimationClip__set_events(pUVar14,pUVar15,(MethodInfo *)0x0);
          uVar21 = uVar21 + 1;
          uVar9 = (uint)pUVar18->max_length;
        } while ((int)uVar21 < (int)uVar9);
      }
      goto LAB_04195c00;
    }
    goto LAB_041960c9;
  }
LAB_04195c00:
  uVar24 = uVar24 + 1;
  uVar9 = (uint)pUVar11->max_length;
  if ((int)uVar9 <= (int)uVar24) {
    return;
  }
  if (uVar9 <= uVar24) goto LAB_041960be;
  goto LAB_04195c1b;
LAB_04195e30:
  plVar16 = (long *)il2cpp_runtime_glue();
  if (plVar16 != (long *)0x0) {
    lVar22 = *plVar16;
    if ((ulong)*(ushort *)(lVar22 + 0x12e) != 0) {
      lVar23 = 0;
      do {
        if (*(long *)(*(long *)(lVar22 + 0xb0) + lVar23) == TypeInfo_IDisposable) {
          puVar17 = (undefined8 *)
                    (lVar22 + (long)*(int *)(*(long *)(lVar22 + 0xb0) + 8 + lVar23) * 0x10 + 0x138);
          goto LAB_04195ead;
        }
        lVar23 = lVar23 + 0x10;
      } while ((ulong)*(ushort *)(lVar22 + 0x12e) << 4 != lVar23);
    }
    puVar17 = (undefined8 *)il2cpp_runtime_glue(plVar16,TypeInfo_IDisposable,0);
LAB_04195ead:
    (*(code *)*puVar17)(plVar16);
  }
  goto LAB_04195c00;
}


// ApplicationManagers.AssetBundleManager$$.ctor
// il2cpp: void ApplicationManagers_AssetBundleManager___ctor (ApplicationManagers_AssetBundleManager_o* __this, const MethodInfo* method);
// 0x4196180

void ApplicationManagers_AssetBundleManager___ctor
               (ApplicationManagers_AssetBundleManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AssetBundleManager$$.cctor
// il2cpp: void ApplicationManagers_AssetBundleManager___cctor (const MethodInfo* method);
// 0x4196190

void ApplicationManagers_AssetBundleManager___cctor(MethodInfo *method)

{
  uint *puVar1;
  System_RuntimeTypeHandle_o handle;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  long *plVar3;
  System_Type_o *pSVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (DAT_05704c33 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Animation);
    il2cpp_init_method_metadata(&TypeRef_Animator);
    il2cpp_init_method_metadata(&TypeRef_ArticulationBody);
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&TypeRef_AudioChorusFilter);
    il2cpp_init_method_metadata(&TypeRef_AudioClip);
    il2cpp_init_method_metadata(&TypeRef_AudioDistortionFilter);
    il2cpp_init_method_metadata(&TypeRef_AudioEchoFilter);
    il2cpp_init_method_metadata(&TypeRef_AudioHighPassFilter);
    il2cpp_init_method_metadata(&TypeRef_AudioListener);
    il2cpp_init_method_metadata(&TypeRef_AudioLowPassFilter);
    il2cpp_init_method_metadata(&TypeRef_AudioReverbFilter);
    il2cpp_init_method_metadata(&TypeRef_AudioReverbZone);
    il2cpp_init_method_metadata(&TypeRef_AudioSource);
    il2cpp_init_method_metadata(&TypeRef_CharacterController);
    il2cpp_init_method_metadata(&TypeRef_Cloth);
    il2cpp_init_method_metadata(&TypeRef_Collider);
    il2cpp_init_method_metadata(&TypeRef_ConstantForce);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_AssetBund);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__AssetBundle);
    il2cpp_init_method_metadata(&TypeRef_Joint);
    il2cpp_init_method_metadata(&TypeRef_LODGroup);
    il2cpp_init_method_metadata(&TypeRef_LensFlare);
    il2cpp_init_method_metadata(&TypeRef_Light);
    il2cpp_init_method_metadata(&TypeRef_LineRenderer);
    il2cpp_init_method_metadata(&TypeRef_MeshFilter);
    il2cpp_init_method_metadata(&TypeRef_ParticleSystem);
    il2cpp_init_method_metadata(&TypeRef_Projector);
    il2cpp_init_method_metadata(&TypeRef_Renderer);
    il2cpp_init_method_metadata(&TypeRef_Rigidbody);
    il2cpp_init_method_metadata(&TypeRef_Terrain);
    il2cpp_init_method_metadata(&TypeRef_TrailRenderer);
    il2cpp_init_method_metadata(&TypeRef_Transform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&TypeRef_VideoPlayer);
    DAT_05704c33 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__Object);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
  lVar5 = *(long *)(TypeInfo_AssetBundleManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar5 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar5 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__AssetBundle);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_AssetBund);
  lVar5 = *(long *)(TypeInfo_AssetBundleManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar5 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar5 + 0x10,pSVar2);
  plVar3 = (long *)il2cpp_glue_02274930(TypeInfo_Type);
  handle.fields.value = TypeRef_Transform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar4 != (System_Type_o *)0x0) {
    lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar5 == 0) goto LAB_04196df9;
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 4);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Collider,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    puVar1 = (uint *)(plVar3 + 3);
    if (*puVar1 < 2) goto LAB_04196df4;
    plVar3[5] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 5);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_MeshFilter,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 3) goto LAB_04196df4;
    plVar3[6] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 6);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Animation,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 4) goto LAB_04196df4;
    plVar3[7] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 7);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Animator,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 5) goto LAB_04196df4;
    plVar3[8] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 8);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioSource,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 6) goto LAB_04196df4;
    plVar3[9] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 9);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioClip,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 7) goto LAB_04196df4;
    plVar3[10] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 10);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioChorusFilter,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 8) goto LAB_04196df4;
    plVar3[0xb] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0xb);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioDistortionFilter,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 9) goto LAB_04196df4;
    plVar3[0xc] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0xc);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioEchoFilter,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 10) goto LAB_04196df4;
    plVar3[0xd] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0xd);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioHighPassFilter,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0xb) goto LAB_04196df4;
    plVar3[0xe] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0xe);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioListener,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0xc) goto LAB_04196df4;
    plVar3[0xf] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0xf);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioLowPassFilter,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0xd) goto LAB_04196df4;
    plVar3[0x10] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x10);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioReverbFilter,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0xe) goto LAB_04196df4;
    plVar3[0x11] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x11);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_AudioReverbZone,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0xf) goto LAB_04196df4;
    plVar3[0x12] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x12);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_ParticleSystem,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x10) goto LAB_04196df4;
    plVar3[0x13] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x13);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LensFlare,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x11) goto LAB_04196df4;
    plVar3[0x14] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x14);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LineRenderer,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x12) goto LAB_04196df4;
    plVar3[0x15] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x15);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Projector,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x13) goto LAB_04196df4;
    plVar3[0x16] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x16);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_TrailRenderer,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x14) goto LAB_04196df4;
    plVar3[0x17] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x17);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Renderer,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x15) goto LAB_04196df4;
    plVar3[0x18] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x18);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Terrain,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x16) goto LAB_04196df4;
    plVar3[0x19] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x19);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_ArticulationBody,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x17) goto LAB_04196df4;
    plVar3[0x1a] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x1a);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_CharacterController,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x18) goto LAB_04196df4;
    plVar3[0x1b] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x1b);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Cloth,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x19) goto LAB_04196df4;
    plVar3[0x1c] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x1c);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_ConstantForce,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x1a) goto LAB_04196df4;
    plVar3[0x1d] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x1d);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Joint,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x1b) goto LAB_04196df4;
    plVar3[0x1e] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x1e);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Rigidbody,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x1c) goto LAB_04196df4;
    plVar3[0x1f] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x1f);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Light,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (*puVar1 < 0x1d) goto LAB_04196df4;
    plVar3[0x20] = (long)pSVar4;
    il2cpp_runtime_glue(plVar3 + 0x20);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LODGroup,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar5 == 0) goto LAB_04196df9;
    }
    if (0x1d < *puVar1) {
      plVar3[0x21] = (long)pSVar4;
      il2cpp_runtime_glue(plVar3 + 0x21);
      pSVar4 = System_Type__GetTypeFromHandle(TypeRef_VideoPlayer,(MethodInfo *)0x0);
      if (pSVar4 != (System_Type_o *)0x0) {
        lVar5 = il2cpp_runtime_glue(pSVar4,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar5 == 0) {
LAB_04196df9:
          uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar6,0);
        }
      }
      if (0x1e < *puVar1) {
        plVar3[0x22] = (long)pSVar4;
        il2cpp_runtime_glue(plVar3 + 0x22,pSVar4);
        lVar5 = *(long *)(TypeInfo_AssetBundleManager + 0xb8);
        *(long **)(lVar5 + 0x18) = plVar3;
        il2cpp_runtime_glue(lVar5 + 0x18,plVar3);
        return;
      }
    }
  }
LAB_04196df4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


