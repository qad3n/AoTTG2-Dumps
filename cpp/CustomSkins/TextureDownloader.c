// Type: CustomSkins.TextureDownloader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/TextureDownloader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/TextureDownloader.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$.ctor
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__9___ctor (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42488a0

void CustomSkins_TextureDownloader_<DownloadTexture>d__9___ctor
               (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__9__System_IDisposable_Dispose (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x42493b0

void CustomSkins_TextureDownloader_<DownloadTexture>d__9__System_IDisposable_Dispose
               (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  code *vtable_dispatch;
  uint uVar3;
  UnityEngine_Networking_UnityWebRequest_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  UnityEngine_Networking_UnityWebRequest_o *pUVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  uVar3 = (__this->fields).__1__state + 4;
  if (0xd < uVar3) {
    return;
  }
  if ((0x782U >> (uVar3 & 0x1f) & 1) == 0) {
    if ((0x3801U >> (uVar3 & 0x1f) & 1) == 0) {
      return;
    }
    if (DAT_057051f7 == '\0') {
      il2cpp_init_method_metadata();
      DAT_057051f7 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar6 = (__this->fields)._uwr_5__3;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      return;
    }
    pUVar4 = pUVar6->klass;
    uVar2._0_1_ = (pUVar4->_2).rank;
    uVar2._1_1_ = (pUVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pUVar4->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar7) == TypeInfo_IDisposable) goto LAB_042494cd;
        lVar7 = lVar7 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar7);
    }
  }
  else {
    if (DAT_057051f6 == '\0') {
      il2cpp_init_method_metadata();
      DAT_057051f6 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar6 = (__this->fields)._uwr_5__3;
    if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      return;
    }
    pUVar4 = pUVar6->klass;
    uVar1._0_1_ = (pUVar4->_2).rank;
    uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pUVar4->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar7) == TypeInfo_IDisposable) goto LAB_042494cd;
        lVar7 = lVar7 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar7);
    }
  }
  auVar8 = il2cpp_runtime_glue(pUVar6,TypeInfo_IDisposable,0);
LAB_042494df:
  vtable_dispatch = (code *)*auVar8._0_8_;
  (*vtable_dispatch)(pUVar6,auVar8._0_8_[1],auVar8._8_8_,vtable_dispatch);
  return;
LAB_042494cd:
  auVar8._8_8_ = pIVar5;
  auVar8._0_8_ = &(pUVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar7);
  goto LAB_042494df;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$MoveNext
// il2cpp: bool CustomSkins_TextureDownloader__DownloadTexture_d__9__MoveNext (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x42494f0

bool_conflict
CustomSkins_TextureDownloader_<DownloadTexture>d__9__MoveNext
          (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  UnityEngine_Networking_UnityWebRequest_c *pUVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  CustomSkins_TextureDownloader__DownloadTexture_d__9_o *url;
  System_String_o *uri;
  int32_t iVar7;
  bool_conflict bVar8;
  VirtualInvokeData *pVVar9;
  uint64_t uVar10;
  UnityEngine_Networking_UnityWebRequest_o *pUVar11;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar12;
  UnityEngine_Texture2D_o *pUVar13;
  MethodInfo *method_00;
  int iVar14;
  uint7 uVar15;
  undefined7 uVar16;
  long lVar17;
  
  if (DAT_057051f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata();
    DAT_057051f5 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    bVar8 = (__this->fields).mipmap;
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057051f2 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Texture2D);
      DAT_057051f2 = '\x01';
    }
    pUVar13 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor(pUVar13,4,4,4,(uint)(byte)bVar8,(MethodInfo *)0x0);
    (__this->fields)._blankTexture_5__2 = pUVar13;
    il2cpp_runtime_glue(&(__this->fields)._blankTexture_5__2,pUVar13);
    (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._blankTexture_5__2;
    il2cpp_runtime_glue(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    bVar8 = (bool_conflict)CONCAT71((int7)((ulong)pUVar13 >> 8),1);
    break;
  case 1:
    (__this->fields).__1__state = -1;
    url = (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *)(__this->fields).url;
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = CustomSkins_TextureDownloader__ValidTextureURL((System_String_o *)url,method);
    if ((char)bVar8 == '\0') goto switchD_04249543_default;
    iVar14 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
    goto joined_r0x042497f2;
  case 2:
    (__this->fields).__1__state = -1;
    iVar14 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
    url = __this;
joined_r0x042497f2:
    if (iVar14 == 0) {
      il2cpp_init_class();
    }
    if (DAT_057051ee == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
      DAT_057051ee = '\x01';
    }
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_init_class();
      iVar14 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18);
    }
    else {
      iVar14 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18);
    }
    if (iVar14 < 1) {
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057051ef == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
        DAT_057051ef = '\x01';
      }
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar14 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + 1;
      *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar14;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar7 = System_Math__Min(iVar14,1,(MethodInfo *)0x0);
      *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar7;
      uri = (__this->fields).url;
      uVar15 = (uint7)(uint3)((uint)iVar14 >> 8);
      if ((char)(__this->fields).mipmap == '\0') {
        pUVar11 = UnityEngine_Networking_UnityWebRequest__Get(uri,(MethodInfo *)0x0);
        (__this->fields)._uwr_5__3 = pUVar11;
        il2cpp_runtime_glue(&(__this->fields)._uwr_5__3);
        (__this->fields).__1__state = -4;
        pUVar11 = (__this->fields)._uwr_5__3;
        if (pUVar11 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar12 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar11,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar12;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar12);
        (__this->fields).__1__state = 7;
        bVar8 = (bool_conflict)CONCAT71(uVar15,1);
      }
      else {
        pUVar11 = UnityEngine_Networking_UnityWebRequestTexture__GetTexture(uri,(MethodInfo *)0x0);
        (__this->fields)._uwr_5__3 = pUVar11;
        il2cpp_runtime_glue(&(__this->fields)._uwr_5__3);
        (__this->fields).__1__state = -3;
        pUVar11 = (__this->fields)._uwr_5__3;
        if (pUVar11 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar12 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar11,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar12;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar12);
        (__this->fields).__1__state = 3;
        bVar8 = (bool_conflict)CONCAT71(uVar15,1);
      }
    }
    else {
      (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._blankTexture_5__2;
      il2cpp_runtime_glue(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
      bVar8 = (bool_conflict)CONCAT71((int7)((ulong)url >> 8),1);
    }
    break;
  case 3:
    (__this->fields).__1__state = -3;
    pUVar11 = (__this->fields)._uwr_5__3;
    if (pUVar11 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar7 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar11,(MethodInfo *)0x0);
    if (iVar7 == 1) {
      pUVar11 = (__this->fields)._uwr_5__3;
      if (pUVar11 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar10 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes
                         (pUVar11,(MethodInfo *)0x0);
      if (uVar10 <= (ulong)(long)(__this->fields).maxSize) {
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057051f0 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
          DAT_057051f0 = '\x01';
        }
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar14 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + -1;
        *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar14;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar7 = System_Math__Max(iVar14,0,(MethodInfo *)0x0);
        *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar7;
        pUVar13 = UnityEngine_Networking_DownloadHandlerTexture__GetContent
                            ((__this->fields)._uwr_5__3,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        uVar16 = (undefined7)((ulong)pUVar13 >> 8);
        if ((char)bVar8 != '\0') {
          (__this->fields).__2__current = (Il2CppObject *)pUVar13;
          il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar13);
          (__this->fields).__1__state = 5;
          return (bool_conflict)CONCAT71(uVar16,1);
        }
        (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._blankTexture_5__2;
        il2cpp_runtime_glue(&(__this->fields).__2__current);
        (__this->fields).__1__state = 6;
        return (bool_conflict)CONCAT71(uVar16,1);
      }
    }
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057051f0 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
      DAT_057051f0 = '\x01';
    }
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar14 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + -1;
    *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar14;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar7 = System_Math__Max(iVar14,0,(MethodInfo *)0x0);
    *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar7;
    (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._blankTexture_5__2;
    il2cpp_runtime_glue(&(__this->fields).__2__current);
    (__this->fields).__1__state = 4;
    bVar8 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1);
    break;
  case 4:
    (__this->fields).__1__state = -3;
    if (DAT_057051f6 == '\0') {
      il2cpp_init_method_metadata();
      DAT_057051f6 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar11 = (__this->fields)._uwr_5__3;
    if (pUVar11 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar5 = pUVar11->klass;
      uVar3._0_1_ = (pUVar5->_2).rank;
      uVar3._1_1_ = (pUVar5->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar6 = (pUVar5->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar17) == TypeInfo_IDisposable) {
            pVVar9 = &(pUVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar17);
            goto LAB_04249eac;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar17);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar11,TypeInfo_IDisposable,0);
LAB_04249eac:
      (*pVVar9->methodPtr)(pUVar11,pVVar9->method);
    }
  default:
switchD_04249543_default:
    bVar8 = 0;
    break;
  case 5:
  case 6:
    (__this->fields).__1__state = -3;
    if (DAT_057051f6 == '\0') {
      il2cpp_init_method_metadata();
      DAT_057051f6 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar11 = (__this->fields)._uwr_5__3;
    if (pUVar11 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar5 = pUVar11->klass;
      uVar1._0_1_ = (pUVar5->_2).rank;
      uVar1._1_1_ = (pUVar5->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar6 = (pUVar5->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar17) == TypeInfo_IDisposable) {
            pVVar9 = &(pUVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar17);
            goto LAB_04249c11;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar17);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar11,TypeInfo_IDisposable,0);
LAB_04249c11:
      (*pVVar9->methodPtr)(pUVar11,pVVar9->method);
    }
    (__this->fields)._uwr_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    bVar8 = 0;
    il2cpp_runtime_glue(&(__this->fields)._uwr_5__3,0);
    break;
  case 7:
    (__this->fields).__1__state = -4;
    pUVar11 = (__this->fields)._uwr_5__3;
    if (pUVar11 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar7 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar11,(MethodInfo *)0x0);
    if (iVar7 == 1) {
      pUVar11 = (__this->fields)._uwr_5__3;
      if (pUVar11 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar10 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes
                         (pUVar11,(MethodInfo *)0x0);
      if (uVar10 <= (ulong)(long)(__this->fields).maxSize) {
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057051f0 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
          DAT_057051f0 = '\x01';
        }
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar14 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + -1;
        *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar14;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar7 = System_Math__Max(iVar14,0,(MethodInfo *)0x0);
        *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar7;
        pUVar13 = CustomSkins_TextureDownloader__DecodeTexture
                            ((__this->fields)._uwr_5__3,(uint)(byte)(__this->fields).mipmap,
                             method_00);
        (__this->fields).__2__current = (Il2CppObject *)pUVar13;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar13);
        (__this->fields).__1__state = 9;
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1);
      }
    }
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057051f0 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
      DAT_057051f0 = '\x01';
    }
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar14 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + -1;
    *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar14;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar7 = System_Math__Max(iVar14,0,(MethodInfo *)0x0);
    *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar7;
    (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._blankTexture_5__2;
    il2cpp_runtime_glue(&(__this->fields).__2__current);
    (__this->fields).__1__state = 8;
    bVar8 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1);
    break;
  case 8:
    (__this->fields).__1__state = -4;
    if (DAT_057051f7 == '\0') {
      il2cpp_init_method_metadata();
      DAT_057051f7 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar11 = (__this->fields)._uwr_5__3;
    if (pUVar11 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar5 = pUVar11->klass;
      uVar4._0_1_ = (pUVar5->_2).rank;
      uVar4._1_1_ = (pUVar5->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar6 = (pUVar5->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar17) == TypeInfo_IDisposable) {
            pVVar9 = &(pUVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar17);
            goto LAB_04249ec9;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar17);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar11,TypeInfo_IDisposable,0);
LAB_04249ec9:
      (*pVVar9->methodPtr)(pUVar11,pVVar9->method);
    }
    goto switchD_04249543_default;
  case 9:
    (__this->fields).__1__state = -4;
    if (DAT_057051f7 == '\0') {
      il2cpp_init_method_metadata();
      DAT_057051f7 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar11 = (__this->fields)._uwr_5__3;
    if (pUVar11 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar5 = pUVar11->klass;
      uVar2._0_1_ = (pUVar5->_2).rank;
      uVar2._1_1_ = (pUVar5->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar6 = (pUVar5->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar17) == TypeInfo_IDisposable) {
            pVVar9 = &(pUVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar17);
            goto LAB_04249e75;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar17);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pUVar11,TypeInfo_IDisposable,0);
LAB_04249e75:
      (*pVVar9->methodPtr)(pUVar11,pVVar9->method);
    }
    (__this->fields)._uwr_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    bVar8 = 0;
    il2cpp_runtime_glue(&(__this->fields)._uwr_5__3,0);
  }
  return bVar8;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$<>m__Finally1
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__9____m__Finally1 (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x424a0c0

void CustomSkins_TextureDownloader_<DownloadTexture>d__9__<>m__Finally1
               (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtable_dispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_057051f6 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057051f6 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields)._uwr_5__3;
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
        goto LAB_0424a14f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_glue(pUVar2,TypeInfo_IDisposable,0);
LAB_0424a14f:
  vtable_dispatch = (code *)*auVar6._0_8_;
  (*vtable_dispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtable_dispatch);
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$<>m__Finally2
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__9____m__Finally2 (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x424a160

void CustomSkins_TextureDownloader_<DownloadTexture>d__9__<>m__Finally2
               (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtable_dispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_057051f7 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057051f7 = '\x01';
  }
  (__this->fields).__1__state = -1;
  pUVar2 = (__this->fields)._uwr_5__3;
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
        goto LAB_0424a1ef;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_glue(pUVar2,TypeInfo_IDisposable,0);
LAB_0424a1ef:
  vtable_dispatch = (code *)*auVar6._0_8_;
  (*vtable_dispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtable_dispatch);
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_TextureDownloader__DownloadTexture_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x424a200

Il2CppObject *
CustomSkins_TextureDownloader_<DownloadTexture>d__9__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__9__System_Collections_IEnumerator_Reset (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x424a210

void CustomSkins_TextureDownloader_<DownloadTexture>d__9__System_Collections_IEnumerator_Reset
               (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

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


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_TextureDownloader__DownloadTexture_d__9__System_Collections_IEnumerator_get_Current (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x424a250

Il2CppObject *
CustomSkins_TextureDownloader_<DownloadTexture>d__9__System_Collections_IEnumerator_get_Current
          (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TextureDownloader$$ResetConcurrentDownloads
// il2cpp: void CustomSkins_TextureDownloader__ResetConcurrentDownloads (const MethodInfo* method);
// 0x423fc80

void CustomSkins_TextureDownloader__ResetConcurrentDownloads(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057051e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_057051e9 = '\x01';
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  if (iVar1 != 0) {
    *(undefined4 *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = 0;
    return;
  }
  il2cpp_init_class();
  *(undefined4 *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = 0;
  return;
}


// CustomSkins.TextureDownloader$$ValidTextureURL
// il2cpp: bool CustomSkins_TextureDownloader__ValidTextureURL (System_String_o* url, const MethodInfo* method);
// 0x4246230

bool_conflict
CustomSkins_TextureDownloader__ValidTextureURL(System_String_o *url,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *a;
  MethodInfo *method_00;
  bool_conflict bVar3;
  
  if (DAT_057051ea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinLoader);
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_057051ea = '\x01';
  }
  if (url == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar3 = 0;
  a = System_String__ToLower(url,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality
                    (a,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)**(undefined8 **)(TypeInfo_BaseCustomSkinLoader + 0xb8);
    bVar2 = System_String__op_Equality(a,(System_String_o *)method_00,(MethodInfo *)0x0);
    bVar3 = 1;
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_init_class();
        bVar2 = CustomSkins_TextureDownloader__CheckFileEnding(a,method_00);
        cVar1 = (char)bVar2;
      }
      else {
        bVar2 = CustomSkins_TextureDownloader__CheckFileEnding(a,method_00);
        cVar1 = (char)bVar2;
      }
      if (cVar1 != '\0') {
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = CustomSkins_TextureDownloader__CheckValidHost(a,method_00);
        return bVar2;
      }
      bVar3 = 0;
    }
  }
  return bVar3;
}


// CustomSkins.TextureDownloader$$CheckFileEnding
// il2cpp: bool CustomSkins_TextureDownloader__CheckFileEnding (System_String_o* url, const MethodInfo* method);
// 0x4248650

bool_conflict
CustomSkins_TextureDownloader__CheckFileEnding(System_String_o *url,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  ulong uVar3;
  
  if (DAT_057051eb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_057051eb = '\x01';
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) goto LAB_042486e6;
LAB_04248674:
    lVar1 = *(long *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) != 0) goto LAB_04248674;
LAB_042486e6:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 8);
  }
  if (lVar1 != 0) {
    if (url == (System_String_o *)0x0) {
      if (0 < *(int *)(lVar1 + 0x18)) goto LAB_04248714;
    }
    else {
      uVar3 = 0;
      while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18)) {
        if (*(uint *)(lVar1 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar2 = System_String__EndsWith
                          (url,*(System_String_o **)(lVar1 + 0x20 + uVar3 * 8),(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        if ((char)bVar2 != '\0') {
          return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
        }
      }
    }
    return 0;
  }
LAB_04248714:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.TextureDownloader$$CheckValidHost
// il2cpp: bool CustomSkins_TextureDownloader__CheckValidHost (System_String_o* url, const MethodInfo* method);
// 0x4248720

bool_conflict CustomSkins_TextureDownloader__CheckValidHost(System_String_o *url,MethodInfo *method)

{
  long lVar1;
  System_String_o *value;
  bool_conflict bVar2;
  ulong uVar3;
  bool_conflict bVar4;
  undefined8 unaff_R14;
  
  if (DAT_057051ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    il2cpp_init_method_metadata(&"file://");
    DAT_057051ec = '\x01';
  }
  if (url != (System_String_o *)0x0) {
    bVar2 = System_String__StartsWith(url,"file://",(MethodInfo *)0x0);
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if ((char)bVar2 != '\0') {
      return bVar4;
    }
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x10);
    if (lVar1 != 0) {
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar3 = 0;
        if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
          do {
            if (url == (System_String_o *)0x0) goto LAB_04248894;
            value = *(System_String_o **)(lVar1 + 0x20 + uVar3 * 8);
            bVar2 = System_String__StartsWith(url,value,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (value == (System_String_o *)0x0) goto LAB_04248894;
              url = System_String__Remove(url,0,(value->fields)._stringLength,(MethodInfo *)0x0);
            }
            uVar3 = uVar3 + 1;
            if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar3) goto LAB_04248823;
          } while (uVar3 < *(uint *)(lVar1 + 0x18));
        }
LAB_04248899:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_04248823:
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = **(long **)(TypeInfo_TextureDownloader + 0xb8);
      if (lVar1 != 0) {
        if (url == (System_String_o *)0x0) {
          if (0 < *(int *)(lVar1 + 0x18)) goto LAB_04248894;
LAB_0424887f:
          bVar4 = 0;
        }
        else {
          uVar3 = 0;
          do {
            if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar3) goto LAB_0424887f;
            if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_04248899;
            bVar2 = System_String__StartsWith
                              (url,*(System_String_o **)(lVar1 + 0x20 + uVar3 * 8),(MethodInfo *)0x0
                              );
            uVar3 = uVar3 + 1;
          } while ((char)bVar2 == '\0');
        }
        return bVar4;
      }
    }
  }
LAB_04248894:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.TextureDownloader$$DownloadTexture
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_TextureDownloader__DownloadTexture (UnityEngine_MonoBehaviour_o* obj, System_String_o* url, bool mipmap, int32_t maxSize, const MethodInfo* method);
// 0x42475d0

System_Collections_IEnumerator_o *
CustomSkins_TextureDownloader__DownloadTexture
          (UnityEngine_MonoBehaviour_o *obj,System_String_o *url,bool_conflict mipmap,
          int32_t maxSize,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057051ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DownloadTexture_d__9);
    DAT_057051ed = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DownloadTexture_d__9);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].monitor = url;
    il2cpp_runtime_glue(&__this[2].monitor,url);
    *(char *)&__this[2].klass = (char)mipmap;
    *(int32_t *)&__this[3].klass = maxSize;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.TextureDownloader$$CanStartTextureDownload
// il2cpp: bool CustomSkins_TextureDownloader__CanStartTextureDownload (const MethodInfo* method);
// 0x42488c0

bool_conflict CustomSkins_TextureDownloader__CanStartTextureDownload(MethodInfo *method)

{
  if (DAT_057051ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_057051ee = '\x01';
  }
  if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_TextureDownloader + 0xb8) >> 8),
                  *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) < 1);
}


// CustomSkins.TextureDownloader$$OnStartTextureDownload
// il2cpp: void CustomSkins_TextureDownloader__OnStartTextureDownload (const MethodInfo* method);
// 0x4248910

void CustomSkins_TextureDownloader__OnStartTextureDownload(MethodInfo *method)

{
  int32_t iVar1;
  int val1;
  
  if (DAT_057051ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_057051ef = '\x01';
  }
  if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  val1 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + 1;
  *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = val1;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = System_Math__Min(val1,1,(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar1;
  return;
}


// CustomSkins.TextureDownloader$$OnStopTextureDownload
// il2cpp: void CustomSkins_TextureDownloader__OnStopTextureDownload (const MethodInfo* method);
// 0x42489b0

void CustomSkins_TextureDownloader__OnStopTextureDownload(MethodInfo *method)

{
  int32_t iVar1;
  int val1;
  
  if (DAT_057051f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_057051f0 = '\x01';
  }
  if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  val1 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + -1;
  *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = val1;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = System_Math__Max(val1,0,(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar1;
  return;
}


// CustomSkins.TextureDownloader$$IsPowerOfTwo
// il2cpp: bool CustomSkins_TextureDownloader__IsPowerOfTwo (int32_t num, const MethodInfo* method);
// 0x4248a40

bool_conflict CustomSkins_TextureDownloader__IsPowerOfTwo(int32_t num,MethodInfo *method)

{
  return CONCAT31((int3)(num - 1U >> 8),(num & num - 1U) == 0 && 3 < num);
}


// CustomSkins.TextureDownloader$$GetClosestPowerOfTwo
// il2cpp: int32_t CustomSkins_TextureDownloader__GetClosestPowerOfTwo (int32_t num, const MethodInfo* method);
// 0x4248a60

int32_t CustomSkins_TextureDownloader__GetClosestPowerOfTwo(int32_t num,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int iVar3;
  
  if (DAT_057051f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_057051f1 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar2 = System_Math__Min(num,0x7ff,(MethodInfo *)0x0);
  iVar1 = 4;
  do {
    iVar3 = iVar1;
    iVar1 = iVar3 * 2;
  } while (iVar3 < iVar2);
  return iVar3;
}


// CustomSkins.TextureDownloader$$CreateBlankTexture
// il2cpp: UnityEngine_Texture2D_o* CustomSkins_TextureDownloader__CreateBlankTexture (bool mipmap, const MethodInfo* method);
// 0x4248ac0

UnityEngine_Texture2D_o *
CustomSkins_TextureDownloader__CreateBlankTexture(bool_conflict mipmap,MethodInfo *method)

{
  UnityEngine_Texture2D_o *__this;
  
  if (DAT_057051f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_057051f2 = '\x01';
  }
  __this = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
  UnityEngine_Texture2D___ctor(__this,4,4,4,mipmap & 0xff,(MethodInfo *)0x0);
  return __this;
}


// CustomSkins.TextureDownloader$$DecodeTexture
// il2cpp: UnityEngine_Texture2D_o* CustomSkins_TextureDownloader__DecodeTexture (UnityEngine_Networking_UnityWebRequest_o* uwr, bool mipmap, const MethodInfo* method);
// 0x4248b20

UnityEngine_Texture2D_o *
CustomSkins_TextureDownloader__DecodeTexture
          (UnityEngine_Networking_UnityWebRequest_o *uwr,bool_conflict mipmap,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Networking_DownloadHandler_o *__this_00;
  System_Byte_array *data;
  
  if (DAT_057051f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_057051f3 = '\x01';
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_057051f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_057051f2 = '\x01';
  }
  __this = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
  UnityEngine_Texture2D___ctor(__this,4,4,4,mipmap & 0xff,(MethodInfo *)0x0);
  if (uwr != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    __this_00 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(uwr,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
      data = UnityEngine_Networking_DownloadHandler__get_data(__this_00,(MethodInfo *)0x0);
      UnityEngine_ImageConversion__LoadImage(__this,data,(MethodInfo *)0x0);
      return __this;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.TextureDownloader$$.ctor
// il2cpp: void CustomSkins_TextureDownloader___ctor (CustomSkins_TextureDownloader_o* __this, const MethodInfo* method);
// 0x4248d60

void CustomSkins_TextureDownloader___ctor
               (CustomSkins_TextureDownloader_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.TextureDownloader$$.cctor
// il2cpp: void CustomSkins_TextureDownloader___cctor (const MethodInfo* method);
// 0x4248d70

void CustomSkins_TextureDownloader___cctor(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (DAT_057051f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    il2cpp_init_method_metadata(&"i.reddit.it/");
    il2cpp_init_method_metadata(&"photobucket.com/");
    il2cpp_init_method_metadata(&"postimg./");
    il2cpp_init_method_metadata(&".jpg");
    il2cpp_init_method_metadata(&"gyazo.com/");
    il2cpp_init_method_metadata(&"i.ibb.co/");
    il2cpp_init_method_metadata(&"http://");
    il2cpp_init_method_metadata(&"image.ibb.co/");
    il2cpp_init_method_metadata(&"s27.postimg.io/");
    il2cpp_init_method_metadata(&"deviantart.com/");
    il2cpp_init_method_metadata(&".jpeg");
    il2cpp_init_method_metadata(&"imgse.com/");
    il2cpp_init_method_metadata(&"tiebapic.baidu.com/");
    il2cpp_init_method_metadata(&"www.");
    il2cpp_init_method_metadata(&"i.postimg.cc/");
    il2cpp_init_method_metadata(&"s25.postimg.gg/");
    il2cpp_init_method_metadata(&".png");
    il2cpp_init_method_metadata(&"https://");
    il2cpp_init_method_metadata(&"imgur.com/");
    il2cpp_init_method_metadata(&"cdn.discordapp.com/attachments/");
    il2cpp_init_method_metadata(&"puu.sh/");
    il2cpp_init_method_metadata(&"images-ext-2.discordapp.net/external/");
    il2cpp_init_method_metadata(&"media.discordapp.net/attachments/");
    il2cpp_init_method_metadata(&"s1.ax1x.com/");
    il2cpp_init_method_metadata(&"aotcorehome.files.wordpress.com/");
    il2cpp_init_method_metadata(&"1.bp.blogspot.com/");
    il2cpp_init_method_metadata(&"i.imgur.com/");
    DAT_057051f4 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,0x17);
  if (lVar2 == 0) goto LAB_0424939f;
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = "i.imgur.com/";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = "imgur.com/";
      il2cpp_runtime_glue(lVar2 + 0x28);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = "image.ibb.co/";
        il2cpp_runtime_glue(lVar2 + 0x30);
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = "i.ibb.co/";
          il2cpp_runtime_glue(lVar2 + 0x38);
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = "i.reddit.it/";
            il2cpp_runtime_glue(lVar2 + 0x40);
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = "cdn.discordapp.com/attachments/";
              il2cpp_runtime_glue(lVar2 + 0x48);
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = "media.discordapp.net/attachments/";
                il2cpp_runtime_glue(lVar2 + 0x50);
                if (7 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x58) = "images-ext-2.discordapp.net/external/";
                  il2cpp_runtime_glue(lVar2 + 0x58);
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) = "i.reddit.it/";
                    il2cpp_runtime_glue(lVar2 + 0x60);
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = "gyazo.com/";
                      il2cpp_runtime_glue(lVar2 + 0x68);
                      if (10 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x70) = "puu.sh/";
                        il2cpp_runtime_glue(lVar2 + 0x70);
                        if (0xb < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x78) = "i.postimg.cc/";
                          il2cpp_runtime_glue(lVar2 + 0x78);
                          if (0xc < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x80) = "postimg./";
                            il2cpp_runtime_glue(lVar2 + 0x80);
                            if (0xd < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x88) = "deviantart.com/";
                              il2cpp_runtime_glue(lVar2 + 0x88);
                              if (0xe < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x90) = "photobucket.com/";
                                il2cpp_runtime_glue(lVar2 + 0x90);
                                if (0xf < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x98) = "aotcorehome.files.wordpress.com/";
                                  il2cpp_runtime_glue(lVar2 + 0x98);
                                  if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0xa0) = "s1.ax1x.com/";
                                    il2cpp_runtime_glue(lVar2 + 0xa0);
                                    if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0xa8) = "s27.postimg.io/";
                                      il2cpp_runtime_glue(lVar2 + 0xa8);
                                      if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0xb0) = "1.bp.blogspot.com/";
                                        il2cpp_runtime_glue(lVar2 + 0xb0);
                                        if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0xb8) = "tiebapic.baidu.com/";
                                          il2cpp_runtime_glue(lVar2 + 0xb8);
                                          if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0xc0) = "s25.postimg.gg/";
                                            il2cpp_runtime_glue(lVar2 + 0xc0);
                                            if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 200) = "aotcorehome.files.wordpress.com/";
                                              il2cpp_runtime_glue(lVar2 + 200);
                                              if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 0xd0) = "imgse.com/";
                                                il2cpp_runtime_glue(lVar2 + 0xd0);
                                                **(long **)(TypeInfo_TextureDownloader + 0xb8) = lVar2;
                                                il2cpp_runtime_glue(*(undefined8 *)
                                                                    (TypeInfo_TextureDownloader + 0xb8),lVar2);
                                                lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
                                                if (lVar2 == 0) {
LAB_0424939f:
                    /* WARNING: Subroutine does not return */
                                                  il2cpp_raise_exception();
                                                }
                                                if (*(int *)(lVar2 + 0x18) != 0) {
                                                  *(undefined8 *)(lVar2 + 0x20) = ".jpg";
                                                  il2cpp_runtime_glue(lVar2 + 0x20);
                                                  if (1 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x28) = ".png";
                                                    il2cpp_runtime_glue(lVar2 + 0x28);
                                                    if (2 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x30) = ".jpeg";
                                                      il2cpp_runtime_glue(lVar2 + 0x30);
                                                      lVar1 = *(long *)(TypeInfo_TextureDownloader + 0xb8);
                                                      *(long *)(lVar1 + 8) = lVar2;
                                                      il2cpp_runtime_glue(lVar1 + 8,lVar2);
                                                      lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
                                                      if (lVar2 == 0) goto LAB_0424939f;
                                                      if (*(int *)(lVar2 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar2 + 0x20) = "https://"
                                                        ;
                                                        il2cpp_runtime_glue(lVar2 + 0x20);
                                                        if (1 < *(uint *)(lVar2 + 0x18)) {
                                                          *(undefined8 *)(lVar2 + 0x28) =
                                                               "http://";
                                                          il2cpp_runtime_glue(lVar2 + 0x28);
                                                          if (2 < *(uint *)(lVar2 + 0x18)) {
                                                            *(undefined8 *)(lVar2 + 0x30) =
                                                                 "www.";
                                                            il2cpp_runtime_glue(lVar2 + 0x30);
                                                            lVar1 = *(long *)(TypeInfo_TextureDownloader + 0xb8);
                                                            *(long *)(lVar1 + 0x10) = lVar2;
                                                            il2cpp_runtime_glue(lVar1 + 0x10,lVar2);
                                                            *(undefined4 *)
                                                             (*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18)
                                                                 = 0;
                                                            return;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


