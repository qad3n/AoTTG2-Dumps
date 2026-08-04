// Type: CustomSkins.TextureDownloader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/TextureDownloader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/TextureDownloader.cs
// --------------------------------

// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$.ctor
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__9___ctor (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4095970

void CustomSkins_TextureDownloader__DownloadTexture_d__9___ctor
               (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__9__System_IDisposable_Dispose (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x4096480

void CustomSkins_TextureDownloader__DownloadTexture_d__9__System_IDisposable_Dispose
               (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  code *vtableDispatch;
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
    if (g_data_057ac450 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac450 = '\x01';
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
        if (*(long *)((long)&pIVar5->interfaceType + lVar7) == TypeInfo_IDisposable) goto label_0409659d;
        lVar7 = lVar7 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar7);
    }
  }
  else {
    if (g_data_057ac44f == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac44f = '\x01';
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
        if (*(long *)((long)&pIVar5->interfaceType + lVar7) == TypeInfo_IDisposable) goto label_0409659d;
        lVar7 = lVar7 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar7);
    }
  }
  auVar8 = il2cpp_runtime_helper_02300d20(pUVar6,TypeInfo_IDisposable,0);
label_040965af:
  vtableDispatch = (code *)*auVar8._0_8_;
  (*vtableDispatch)(pUVar6,auVar8._0_8_[1],auVar8._8_8_,vtableDispatch);
  return;
label_0409659d:
  auVar8._8_8_ = pIVar5;
  auVar8._0_8_ = &(pUVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar7);
  goto label_040965af;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$MoveNext
// il2cpp: bool CustomSkins_TextureDownloader__DownloadTexture_d__9__MoveNext (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x40965c0

bool_conflict
CustomSkins_TextureDownloader__DownloadTexture_d__9__MoveNext
          (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  UnityEngine_Networking_UnityWebRequest_o *pUVar5;
  UnityEngine_Networking_UnityWebRequest_c *pUVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  CustomSkins_TextureDownloader__DownloadTexture_d__9_o *url;
  System_String_o *uri;
  long lVar8;
  code *vtableDispatch;
  int32_t iVar9;
  bool_conflict bVar10;
  Il2CppMethodPointer *ppIVar11;
  uint64_t uVar12;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar13;
  UnityEngine_Texture2D_o *pUVar14;
  long *plVar15;
  undefined8 uVar16;
  MethodInfo *method_00;
  int iVar17;
  uint7 uVar18;
  undefined7 uVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  
  if (g_data_057ac44e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0();
    g_data_057ac44e = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    bVar10 = (__this->fields).mipmap;
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac44b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
      g_data_057ac44b = '\x01';
    }
    pUVar14 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor_4dd9130(pUVar14,4,4,4,(uint)(byte)bVar10,(MethodInfo *)0x0);
    (__this->fields)._blankTexture_5__2 = pUVar14;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._blankTexture_5__2,pUVar14);
    (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._blankTexture_5__2;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)pUVar14 >> 8),1);
  case 1:
    (__this->fields).__1__state = -1;
    url = (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *)(__this->fields).url;
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = CustomSkins_TextureDownloader__ValidTextureURL((System_String_o *)url,method);
    if ((char)bVar10 == '\0') {
      return 0;
    }
    iVar17 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
    goto joined_r0x040968c2;
  case 2:
    (__this->fields).__1__state = -1;
    iVar17 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
    url = __this;
joined_r0x040968c2:
    if (iVar17 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac447 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
      g_data_057ac447 = '\x01';
    }
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      iVar17 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18);
    }
    else {
      iVar17 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18);
    }
    if (0 < iVar17) {
      (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._blankTexture_5__2;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
      return (bool_conflict)CONCAT71((int7)((ulong)url >> 8),1);
    }
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac448 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
      g_data_057ac448 = '\x01';
    }
    if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar17 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + 1;
    *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar17;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar9 = System_Math__Min_3cb7d70(iVar17,1,(MethodInfo *)0x0);
    *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar9;
    uri = (__this->fields).url;
    uVar18 = (uint7)(uint3)((uint)iVar17 >> 8);
    if ((char)(__this->fields).mipmap == '\0') {
      method = (MethodInfo *)UnityEngine_Networking_UnityWebRequest__Get(uri,(MethodInfo *)0x0);
      (__this->fields)._uwr_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)method;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._uwr_5__3);
      (__this->fields).__1__state = -4;
      pUVar5 = (__this->fields)._uwr_5__3;
      if (pUVar5 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pUVar13 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar5,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar13;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar13);
        (__this->fields).__1__state = 7;
        return (bool_conflict)CONCAT71(uVar18,1);
      }
    }
    else {
      method = (MethodInfo *)UnityEngine_Networking_UnityWebRequestTexture__GetTexture(uri,(MethodInfo *)0x0);
      (__this->fields)._uwr_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)method;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._uwr_5__3);
      (__this->fields).__1__state = -3;
      pUVar5 = (__this->fields)._uwr_5__3;
      if (pUVar5 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        pUVar13 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar5,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar13;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar13);
        (__this->fields).__1__state = 3;
        return (bool_conflict)CONCAT71(uVar18,1);
      }
label_04096fe9:
      il2cpp_runtime_helper_022b2c90();
    }
    auVar22 = il2cpp_runtime_helper_022b2c90();
    uVar16 = auVar22._0_8_;
    if (auVar22._8_4_ == 1) {
      plVar15 = (long *)__cxa_begin_catch(uVar16);
      lVar20 = *plVar15;
      __cxa_end_catch();
      if (lVar20 == 0) {
        return 0;
      }
      il2cpp_runtime_helper_022349c0(__this);
      uVar16 = il2cpp_runtime_helper_022fefe0(lVar20);
      if (lVar20 != 0) {
        CustomSkins_TextureDownloader__DownloadTexture_d__9__System_IDisposable_Dispose(__this,method);
        lVar20 = il2cpp_runtime_helper_022fefe0(lVar20);
        bVar10 = il2cpp_runtime_helper_01f66400();
        if (g_data_057ac44f == '\0') {
          bVar10 = il2cpp_runtime_helper_023445d0();
          g_data_057ac44f = '\x01';
        }
        *(undefined4 *)(lVar20 + 0x10) = 0xffffffff;
        plVar15 = *(long **)(lVar20 + 0x40);
        if (plVar15 == (long *)0x0) {
          return bVar10;
        }
        lVar20 = *plVar15;
        if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
          lVar8 = *(long *)(lVar20 + 0xb0);
          lVar21 = 0;
          do {
            if (*(long *)(lVar8 + lVar21) == TypeInfo_IDisposable) {
              auVar23._8_8_ = lVar8;
              auVar23._0_8_ = lVar20 + (long)*(int *)(lVar8 + 8 + lVar21) * 0x10 + 0x138;
              goto label_0409721f;
            }
            lVar21 = lVar21 + 0x10;
          } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
        }
        auVar23 = il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_0409721f:
        vtableDispatch = (code *)*auVar23._0_8_;
        bVar10 = (*vtableDispatch)(plVar15,auVar23._0_8_[1],auVar23._8_8_,vtableDispatch);
        return bVar10;
      }
    }
    _Unwind_Resume(uVar16);
  case 3:
    (__this->fields).__1__state = -3;
    pUVar5 = (__this->fields)._uwr_5__3;
    if (pUVar5 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
label_04096fda:
      il2cpp_runtime_helper_022b2c90();
      goto label_04096fdf;
    }
    method = (MethodInfo *)0x0;
    iVar9 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar5,(MethodInfo *)0x0);
    if (iVar9 != 1) {
label_04096918:
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac449 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
        g_data_057ac449 = '\x01';
      }
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar17 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + -1;
      *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar17;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar9 = System_Math__Max_3cb7c30(iVar17,0,(MethodInfo *)0x0);
      *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar9;
      (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._blankTexture_5__2;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
      (__this->fields).__1__state = 4;
      return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar17 >> 8),1);
    }
    pUVar5 = (__this->fields)._uwr_5__3;
    if (pUVar5 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      uVar12 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes(pUVar5,(MethodInfo *)0x0);
      if (uVar12 <= (ulong)(long)(__this->fields).maxSize) {
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac449 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
          g_data_057ac449 = '\x01';
        }
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar17 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + -1;
        *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar17;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar9 = System_Math__Max_3cb7c30(iVar17,0,(MethodInfo *)0x0);
        *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar9;
        pUVar14 = UnityEngine_Networking_DownloadHandlerTexture__GetContent
                            ((__this->fields)._uwr_5__3,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        uVar19 = (undefined7)((ulong)pUVar14 >> 8);
        if ((char)bVar10 == '\0') {
          (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._blankTexture_5__2;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
          (__this->fields).__1__state = 6;
          return (bool_conflict)CONCAT71(uVar19,1);
        }
        (__this->fields).__2__current = (Il2CppObject *)pUVar14;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar14);
        (__this->fields).__1__state = 5;
        return (bool_conflict)CONCAT71(uVar19,1);
      }
      goto label_04096918;
    }
    goto label_04096fe4;
  case 4:
    (__this->fields).__1__state = -3;
    if (g_data_057ac44f == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac44f = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar5 = (__this->fields)._uwr_5__3;
    if (pUVar5 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar6 = pUVar5->klass;
      uVar3._0_1_ = (pUVar6->_2).rank;
      uVar3._1_1_ = (pUVar6->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar7 = (pUVar6->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IDisposable) {
            ppIVar11 = &(&(pUVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar20)].methodPtr;
            goto label_04096f7c;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar20);
      }
      ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar5,TypeInfo_IDisposable,0);
label_04096f7c:
      (**ppIVar11)(pUVar5,(MethodInfo *)ppIVar11[1]);
    }
    break;
  case 5:
  case 6:
    (__this->fields).__1__state = -3;
    if (g_data_057ac44f == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac44f = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar5 = (__this->fields)._uwr_5__3;
    if (pUVar5 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar6 = pUVar5->klass;
      uVar1._0_1_ = (pUVar6->_2).rank;
      uVar1._1_1_ = (pUVar6->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar7 = (pUVar6->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IDisposable) {
            ppIVar11 = &(&(pUVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar20)].methodPtr;
            goto label_04096ce1;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar20);
      }
      ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar5,TypeInfo_IDisposable,0);
label_04096ce1:
      (**ppIVar11)(pUVar5,(MethodInfo *)ppIVar11[1]);
    }
    (__this->fields)._uwr_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._uwr_5__3,0);
    return 0;
  case 7:
    (__this->fields).__1__state = -4;
    pUVar5 = (__this->fields)._uwr_5__3;
    if (pUVar5 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_04096fda;
    }
    method = (MethodInfo *)0x0;
    iVar9 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar5,(MethodInfo *)0x0);
    if (iVar9 != 1) {
label_040967ed:
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac449 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
        g_data_057ac449 = '\x01';
      }
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar17 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + -1;
      *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar17;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar9 = System_Math__Max_3cb7c30(iVar17,0,(MethodInfo *)0x0);
      *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar9;
      (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._blankTexture_5__2;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
      (__this->fields).__1__state = 8;
      return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar17 >> 8),1);
    }
    pUVar5 = (__this->fields)._uwr_5__3;
    if (pUVar5 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      uVar12 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes(pUVar5,(MethodInfo *)0x0);
      if (uVar12 <= (ulong)(long)(__this->fields).maxSize) {
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac449 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
          g_data_057ac449 = '\x01';
        }
        if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar17 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + -1;
        *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar17;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar9 = System_Math__Max_3cb7c30(iVar17,0,(MethodInfo *)0x0);
        *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar9;
        pUVar14 = CustomSkins_TextureDownloader__DecodeTexture
                            ((__this->fields)._uwr_5__3,(uint)(byte)(__this->fields).mipmap,method_00);
        (__this->fields).__2__current = (Il2CppObject *)pUVar14;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar14);
        (__this->fields).__1__state = 9;
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar17 >> 8),1);
      }
      goto label_040967ed;
    }
label_04096fdf:
    il2cpp_runtime_helper_022b2c90();
label_04096fe4:
    il2cpp_runtime_helper_022b2c90();
    goto label_04096fe9;
  case 8:
    (__this->fields).__1__state = -4;
    if (g_data_057ac450 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac450 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar5 = (__this->fields)._uwr_5__3;
    if (pUVar5 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar6 = pUVar5->klass;
      uVar4._0_1_ = (pUVar6->_2).rank;
      uVar4._1_1_ = (pUVar6->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar7 = (pUVar6->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IDisposable) {
            ppIVar11 = &(&(pUVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar20)].methodPtr;
            goto label_04096f99;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar20);
      }
      ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar5,TypeInfo_IDisposable,0);
label_04096f99:
      (**ppIVar11)(pUVar5,(MethodInfo *)ppIVar11[1]);
    }
    break;
  case 9:
    (__this->fields).__1__state = -4;
    if (g_data_057ac450 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac450 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar5 = (__this->fields)._uwr_5__3;
    if (pUVar5 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pUVar6 = pUVar5->klass;
      uVar2._0_1_ = (pUVar6->_2).rank;
      uVar2._1_1_ = (pUVar6->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pUVar6->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IDisposable) {
            ppIVar11 = &(&(pUVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar20)].methodPtr;
            goto label_04096f45;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar20);
      }
      ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pUVar5,TypeInfo_IDisposable,0);
label_04096f45:
      (**ppIVar11)(pUVar5,(MethodInfo *)ppIVar11[1]);
    }
    (__this->fields)._uwr_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._uwr_5__3,0);
    return 0;
  }
  return 0;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$<>m__Finally1
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__9____m__Finally1 (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x4097190

void CustomSkins_TextureDownloader__DownloadTexture_d__9____m__Finally1
               (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ac44f == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ac44f = '\x01';
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
        goto label_0409721f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pUVar2,TypeInfo_IDisposable,0);
label_0409721f:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$<>m__Finally2
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__9____m__Finally2 (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x4097230

void CustomSkins_TextureDownloader__DownloadTexture_d__9____m__Finally2
               (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Networking_UnityWebRequest_o *pUVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtableDispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ac450 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ac450 = '\x01';
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
        goto label_040972bf;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_helper_02300d20(pUVar2,TypeInfo_IDisposable,0);
label_040972bf:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(pUVar2,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_TextureDownloader__DownloadTexture_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x40972d0

Il2CppObject *
CustomSkins_TextureDownloader__DownloadTexture_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__9__System_Collections_IEnumerator_Reset (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x40972e0

void CustomSkins_TextureDownloader__DownloadTexture_d__9__System_Collections_IEnumerator_Reset
               (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_TextureDownloader__DownloadTexture_d__9__System_Collections_IEnumerator_get_Current (CustomSkins_TextureDownloader__DownloadTexture_d__9_o* __this, const MethodInfo* method);
// 0x4097320

Il2CppObject *
CustomSkins_TextureDownloader__DownloadTexture_d__9__System_Collections_IEnumerator_get_Current
          (CustomSkins_TextureDownloader__DownloadTexture_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TextureDownloader$$ResetConcurrentDownloads
// il2cpp: void CustomSkins_TextureDownloader__ResetConcurrentDownloads (const MethodInfo* method);
// 0x40956b0

void CustomSkins_TextureDownloader__ResetConcurrentDownloads(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac442 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    g_data_057ac442 = '\x01';
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  if (iVar1 != 0) {
    *(undefined4 *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = 0;
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  *(undefined4 *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = 0;
  return;
}


// CustomSkins.TextureDownloader$$ValidTextureURL
// il2cpp: bool CustomSkins_TextureDownloader__ValidTextureURL (System_String_o* url, const MethodInfo* method);
// 0x4093290

bool_conflict CustomSkins_TextureDownloader__ValidTextureURL(System_String_o *url,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppRGCTXData *__this_00;
  long lVar2;
  System_String_o *value;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Texture_o *value_00;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar7;
  long *plVar8;
  MethodInfo *method_00;
  ulong uVar9;
  int32_t iVar10;
  MethodInfo *method_01;
  System_String_o *pSVar11;
  CustomSkins_BaseCustomSkinPart_o *__this_05;
  System_String_o *pSVar12;
  System_String_o *__this_06;
  bool_conflict bVar13;
  undefined8 unaff_R14;
  undefined1 auVar14 [12];
  undefined1 in_stack_ffffffffffffff40 [15];
  char in_stack_ffffffffffffff4f;
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  System_Collections_Generic_List_Enumerator_T__o SStack_90;
  Il2CppRGCTXData *pIStack_78;
  
  pSVar11 = url;
  if (g_data_057ac443 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    pSVar11 = (System_String_o *)&TypeInfo_TextureDownloader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac443 = '\x01';
  }
  if (url == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac43d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
      g_data_057ac43d = '\x01';
      iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
    }
    else {
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
    }
    if (g_data_057ac440 == '\0') {
      il2cpp_runtime_helper_023445d0(&",");
      g_data_057ac440 = '\x01';
    }
    pSVar12 = ",";
    pSVar5 = System_String__Concat_3af7150(pSVar11,",",(System_String_o *)method,(MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (__this,(Il2CppObject *)pSVar5,MethodInfo_Boolean_ContainsKey);
      return bVar4;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac43e == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
      g_data_057ac43e = '\x01';
      iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_00 = (Il2CppRGCTXData *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
    }
    else {
      __this_00 = (Il2CppRGCTXData *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
    }
    if (g_data_057ac440 == '\0') {
      il2cpp_runtime_helper_023445d0(&",");
      g_data_057ac440 = '\x01';
    }
    pSVar5 = ",";
    pSVar12 = System_String__Concat_3af7150(pSVar11,",",pSVar12,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppRGCTXData *)0x0) {
      pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                          (Il2CppObject *)pSVar12,MethodInfo_Material_get_Item);
      return (bool_conflict)pIVar6;
    }
    il2cpp_runtime_helper_022b2c90();
    pIStack_78 = __this_00;
    if (g_data_057ac429 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&"_MainTex");
      g_data_057ac429 = '\x01';
    }
    pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar4 != '\0') || (pSVar11[1].klass == (System_String_c *)0x0)) {
      return 0;
    }
    if (pSVar5 != (System_String_o *)0x0) {
      value_00 = UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)pSVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar4 != '\0') &&
         (bVar4 = UnityEngine_Material__HasProperty_4dcb5b0
                            ((UnityEngine_Material_o *)pSVar5,"_MainTex",(MethodInfo *)0x0),
         (char)bVar4 != '\0')) {
        value_00 = UnityEngine_Material__GetTexture
                             ((UnityEngine_Material_o *)pSVar5,"_MainTex",(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return 0;
      }
      if (pSVar11[1].klass != (System_String_c *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  (&SStack_90,(System_Collections_Generic_List_object__o *)pSVar11[1].klass,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
        x = (UnityEngine_Object_o *)0x0;
        pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_90.fields._list;
        do {
          in_stack_ffffffffffffff4f = (char)x;
          do {
            do {
              do {
                __this_01.fields._version._3_1_ = in_stack_ffffffffffffff4f;
                __this_01.fields._0_15_ = in_stack_ffffffffffffff40;
                __this_01.fields._current = (Il2CppObject *)pSVar15;
                bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50);
                if ((char)bVar4 == '\0') {
                  __this_02.fields._version._3_1_ = in_stack_ffffffffffffff4f;
                  __this_02.fields._0_15_ = in_stack_ffffffffffffff40;
                  __this_02.fields._current = (Il2CppObject *)pSVar15;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
                  goto label_0409383e;
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar4 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)SStack_90.fields._current,
                                   (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              } while ((char)bVar4 != '\0');
              if ((CustomSkins_BaseCustomSkinPart_o *)SStack_90.fields._current ==
                  (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_0409385c;
              }
              x = (UnityEngine_Object_o *)
                  UnityEngine_Renderer__get_material
                            ((UnityEngine_Renderer_o *)SStack_90.fields._current,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            } while ((char)bVar4 != '\0');
            __this_05 = (CustomSkins_BaseCustomSkinPart_o *)SStack_90.fields._current;
            pUVar7 = UnityEngine_Renderer__get_material
                               ((UnityEngine_Renderer_o *)SStack_90.fields._current,(MethodInfo *)0x0);
            bVar4 = CustomSkins_BaseCustomSkinPart__IsCharacterEffectMaterial(__this_05,pUVar7,method_00);
          } while ((char)bVar4 == '\0');
          pUVar7 = UnityEngine_Renderer__get_material
                             ((UnityEngine_Renderer_o *)SStack_90.fields._current,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_04093861;
          bVar4 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar7,"_MainTex",(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            pUVar7 = UnityEngine_Renderer__get_material
                               ((UnityEngine_Renderer_o *)SStack_90.fields._current,(MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_0409386b;
            UnityEngine_Material__set_mainTexture(pUVar7,value_00,(MethodInfo *)0x0);
          }
          else {
            pUVar7 = UnityEngine_Renderer__get_material
                               ((UnityEngine_Renderer_o *)SStack_90.fields._current,(MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_04093866;
            UnityEngine_Material__SetTexture(pUVar7,"_MainTex",value_00,(MethodInfo *)0x0);
          }
          x = (UnityEngine_Object_o *)CONCAT71((int7)((ulong)x >> 8),1);
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)SStack_90.fields._current,1,(MethodInfo *)0x0);
        } while( true );
      }
    }
label_0409385c:
    il2cpp_runtime_helper_022b2c90();
label_04093861:
    il2cpp_runtime_helper_022b2c90();
label_04093866:
    il2cpp_runtime_helper_022b2c90();
label_0409386b:
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ == 1) {
      plVar8 = (long *)__cxa_begin_catch(auVar14._0_8_);
      lVar2 = *plVar8;
      __cxa_end_catch();
      __this_03.fields._version._3_1_ = in_stack_ffffffffffffff4f;
      __this_03.fields._0_15_ = in_stack_ffffffffffffff40;
      __this_03.fields._current = (Il2CppObject *)pSVar15;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
      x = (UnityEngine_Object_o *)0x0;
      if (lVar2 == 0) {
label_0409383e:
        return (bool_conflict)CONCAT71((int7)((ulong)x >> 8),in_stack_ffffffffffffff4f != '\0');
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_04.fields._version._3_1_ = in_stack_ffffffffffffff4f;
    __this_04.fields._0_15_ = in_stack_ffffffffffffff40;
    __this_04.fields._current = (Il2CppObject *)pSVar15;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
    _Unwind_Resume(auVar14._0_8_);
  }
  pSVar11 = System_String__ToLower(url,(MethodInfo *)0x0);
  bVar4 = System_String__op_Equality
                    (pSVar11,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)**(undefined8 **)(TypeInfo_BaseCustomSkinLoader + 0xb8);
  bVar4 = System_String__op_Equality(pSVar11,(System_String_o *)method_01,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return 1;
  }
  if (*(int *)((long)&TypeInfo_TextureDownloader[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar4 = CustomSkins_TextureDownloader__CheckFileEnding(pSVar11,method_01);
    iVar10 = (int32_t)method_01;
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = CustomSkins_TextureDownloader__CheckFileEnding(pSVar11,method_01);
    iVar10 = (int32_t)method_01;
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_TextureDownloader[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = pSVar11;
  if (g_data_057ac445 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    pSVar12 = (System_String_o *)&"file://";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac445 = '\x01';
  }
  if (pSVar11 != (System_String_o *)0x0) {
    pSVar5 = "file://";
    bVar4 = System_String__StartsWith(pSVar11,"file://",(MethodInfo *)0x0);
    bVar13 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if ((char)bVar4 != '\0') {
      return bVar13;
    }
    if (*(int *)((long)&TypeInfo_TextureDownloader[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar10 = (int32_t)pSVar5;
    lVar2 = *(long *)((long)TypeInfo_TextureDownloader[7].fields + 0x10);
    pSVar12 = TypeInfo_TextureDownloader;
    if (lVar2 != 0) {
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar9 = 0;
        __this_06 = pSVar11;
        if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) != 0) {
          do {
            iVar10 = (int32_t)pSVar5;
            if (__this_06 == (System_String_o *)0x0) goto label_04095964;
            value = *(System_String_o **)(lVar2 + 0x20 + uVar9 * 8);
            pSVar5 = value;
            pSVar12 = __this_06;
            bVar4 = System_String__StartsWith(__this_06,value,(MethodInfo *)0x0);
            iVar10 = (int32_t)pSVar5;
            pSVar11 = __this_06;
            if ((char)bVar4 != '\0') {
              if (value == (System_String_o *)0x0) goto label_04095964;
              pSVar5 = (System_String_o *)0x0;
              pSVar11 = System_String__Remove(__this_06,0,(value->fields)._stringLength,(MethodInfo *)0x0);
              pSVar12 = __this_06;
            }
            iVar10 = (int32_t)pSVar5;
            uVar9 = uVar9 + 1;
            if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar9) goto label_040958f3;
            __this_06 = pSVar11;
          } while (uVar9 < *(uint *)(lVar2 + 0x18));
        }
        goto label_04095969;
      }
label_040958f3:
      if (*(int *)((long)&TypeInfo_TextureDownloader[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar10 = (int32_t)pSVar5;
      lVar2 = *(long *)TypeInfo_TextureDownloader[7].fields;
      pSVar12 = TypeInfo_TextureDownloader;
      if (lVar2 != 0) {
        if (pSVar11 != (System_String_o *)0x0) {
          uVar9 = 0;
          while( true ) {
            iVar10 = (int32_t)pSVar5;
            if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar9) {
              return 0;
            }
            if (*(uint *)(lVar2 + 0x18) <= uVar9) break;
            pSVar5 = *(System_String_o **)(lVar2 + 0x20 + uVar9 * 8);
            pSVar12 = pSVar11;
            bVar4 = System_String__StartsWith(pSVar11,pSVar5,(MethodInfo *)0x0);
            uVar9 = uVar9 + 1;
            if ((char)bVar4 != '\0') {
              return bVar13;
            }
          }
          goto label_04095969;
        }
        if (*(int *)(lVar2 + 0x18) < 1) {
          return 0;
        }
      }
    }
  }
label_04095964:
  il2cpp_runtime_helper_022b2c90();
label_04095969:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
  (pSVar12->fields)._stringLength = iVar10;
  return extraout_EAX;
}


// CustomSkins.TextureDownloader$$CheckFileEnding
// il2cpp: bool CustomSkins_TextureDownloader__CheckFileEnding (System_String_o* url, const MethodInfo* method);
// 0x4095720

bool_conflict CustomSkins_TextureDownloader__CheckFileEnding(System_String_o *url,MethodInfo *method)

{
  long lVar1;
  System_String_o *value;
  bool_conflict bVar2;
  bool_conflict extraout_EAX;
  System_String_o *__this;
  ulong uVar3;
  int32_t iVar4;
  System_String_o *value_00;
  System_String_o *__this_00;
  System_String_o *__this_01;
  bool_conflict bVar5;
  
  if (g_data_057ac444 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    g_data_057ac444 = '\x01';
    if (*(int *)((long)&TypeInfo_TextureDownloader[9].monitor + 4) == 0) goto label_040957b6;
label_04095744:
    iVar4 = (int32_t)method;
    lVar1 = *(long *)((long)TypeInfo_TextureDownloader[7].fields + 8);
    __this = TypeInfo_TextureDownloader;
  }
  else {
    if (*(int *)((long)&TypeInfo_TextureDownloader[9].monitor + 4) != 0) goto label_04095744;
label_040957b6:
    il2cpp_runtime_helper_02337ed0();
    iVar4 = (int32_t)method;
    lVar1 = *(long *)((long)TypeInfo_TextureDownloader[7].fields + 8);
    __this = TypeInfo_TextureDownloader;
  }
  TypeInfo_TextureDownloader = __this;
  if (lVar1 != 0) {
    iVar4 = (int32_t)method;
    if (url == (System_String_o *)0x0) {
      if (*(int *)(lVar1 + 0x18) < 1) {
        return 0;
      }
    }
    else {
      uVar3 = 0;
      while( true ) {
        iVar4 = (int32_t)method;
        if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar3) {
          return 0;
        }
        if (*(uint *)(lVar1 + 0x18) <= uVar3) break;
        method = *(MethodInfo **)(lVar1 + 0x20 + uVar3 * 8);
        __this = url;
        bVar2 = System_String__EndsWith(url,(System_String_o *)method,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        if ((char)bVar2 != '\0') {
          return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = __this;
  if (g_data_057ac445 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    __this_00 = (System_String_o *)&"file://";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac445 = '\x01';
  }
  if (__this != (System_String_o *)0x0) {
    value_00 = "file://";
    bVar2 = System_String__StartsWith(__this,"file://",(MethodInfo *)0x0);
    bVar5 = (bool_conflict)CONCAT71((int7)((ulong)url >> 8),1);
    if ((char)bVar2 != '\0') {
      return bVar5;
    }
    if (*(int *)((long)&TypeInfo_TextureDownloader[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar4 = (int32_t)value_00;
    lVar1 = *(long *)((long)TypeInfo_TextureDownloader[7].fields + 0x10);
    __this_00 = TypeInfo_TextureDownloader;
    if (lVar1 != 0) {
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar3 = 0;
        __this_01 = __this;
        if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
          do {
            iVar4 = (int32_t)value_00;
            if (__this_01 == (System_String_o *)0x0) goto label_04095964;
            value = *(System_String_o **)(lVar1 + 0x20 + uVar3 * 8);
            value_00 = value;
            __this_00 = __this_01;
            bVar2 = System_String__StartsWith(__this_01,value,(MethodInfo *)0x0);
            iVar4 = (int32_t)value_00;
            __this = __this_01;
            if ((char)bVar2 != '\0') {
              if (value == (System_String_o *)0x0) goto label_04095964;
              value_00 = (System_String_o *)0x0;
              __this = System_String__Remove(__this_01,0,(value->fields)._stringLength,(MethodInfo *)0x0);
              __this_00 = __this_01;
            }
            iVar4 = (int32_t)value_00;
            uVar3 = uVar3 + 1;
            if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar3) goto label_040958f3;
            __this_01 = __this;
          } while (uVar3 < *(uint *)(lVar1 + 0x18));
        }
        goto label_04095969;
      }
label_040958f3:
      if (*(int *)((long)&TypeInfo_TextureDownloader[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar4 = (int32_t)value_00;
      lVar1 = *(long *)TypeInfo_TextureDownloader[7].fields;
      __this_00 = TypeInfo_TextureDownloader;
      if (lVar1 != 0) {
        if (__this != (System_String_o *)0x0) {
          uVar3 = 0;
          while( true ) {
            iVar4 = (int32_t)value_00;
            if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar3) {
              return 0;
            }
            if (*(uint *)(lVar1 + 0x18) <= uVar3) break;
            value_00 = *(System_String_o **)(lVar1 + 0x20 + uVar3 * 8);
            __this_00 = __this;
            bVar2 = System_String__StartsWith(__this,value_00,(MethodInfo *)0x0);
            uVar3 = uVar3 + 1;
            if ((char)bVar2 != '\0') {
              return bVar5;
            }
          }
          goto label_04095969;
        }
        if (*(int *)(lVar1 + 0x18) < 1) {
          return 0;
        }
      }
    }
  }
label_04095964:
  il2cpp_runtime_helper_022b2c90();
label_04095969:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._stringLength = iVar4;
  return extraout_EAX;
}


// CustomSkins.TextureDownloader$$CheckValidHost
// il2cpp: bool CustomSkins_TextureDownloader__CheckValidHost (System_String_o* url, const MethodInfo* method);
// 0x40957f0

bool_conflict CustomSkins_TextureDownloader__CheckValidHost(System_String_o *url,MethodInfo *method)

{
  long lVar1;
  System_String_o *value;
  bool_conflict bVar2;
  bool_conflict extraout_EAX;
  ulong uVar3;
  int32_t iVar4;
  System_String_o *value_00;
  System_String_o *__this;
  System_String_o *__this_00;
  bool_conflict bVar5;
  undefined8 unaff_R14;
  
  iVar4 = (int32_t)method;
  __this = url;
  if (g_data_057ac445 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    __this = (System_String_o *)&"file://";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac445 = '\x01';
  }
  if (url != (System_String_o *)0x0) {
    value_00 = "file://";
    bVar2 = System_String__StartsWith(url,"file://",(MethodInfo *)0x0);
    bVar5 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if ((char)bVar2 != '\0') {
      return bVar5;
    }
    if (*(int *)((long)&TypeInfo_TextureDownloader[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar4 = (int32_t)value_00;
    lVar1 = *(long *)((long)TypeInfo_TextureDownloader[7].fields + 0x10);
    __this = TypeInfo_TextureDownloader;
    if (lVar1 != 0) {
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar3 = 0;
        __this_00 = url;
        if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
          do {
            iVar4 = (int32_t)value_00;
            if (__this_00 == (System_String_o *)0x0) goto label_04095964;
            value = *(System_String_o **)(lVar1 + 0x20 + uVar3 * 8);
            value_00 = value;
            __this = __this_00;
            bVar2 = System_String__StartsWith(__this_00,value,(MethodInfo *)0x0);
            iVar4 = (int32_t)value_00;
            url = __this_00;
            if ((char)bVar2 != '\0') {
              if (value == (System_String_o *)0x0) goto label_04095964;
              value_00 = (System_String_o *)0x0;
              url = System_String__Remove(__this_00,0,(value->fields)._stringLength,(MethodInfo *)0x0);
              __this = __this_00;
            }
            iVar4 = (int32_t)value_00;
            uVar3 = uVar3 + 1;
            if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar3) goto label_040958f3;
            __this_00 = url;
          } while (uVar3 < *(uint *)(lVar1 + 0x18));
        }
        goto label_04095969;
      }
label_040958f3:
      if (*(int *)((long)&TypeInfo_TextureDownloader[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar4 = (int32_t)value_00;
      lVar1 = *(long *)TypeInfo_TextureDownloader[7].fields;
      __this = TypeInfo_TextureDownloader;
      if (lVar1 != 0) {
        if (url != (System_String_o *)0x0) {
          uVar3 = 0;
          while( true ) {
            iVar4 = (int32_t)value_00;
            if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar3) {
              return 0;
            }
            if (*(uint *)(lVar1 + 0x18) <= uVar3) break;
            value_00 = *(System_String_o **)(lVar1 + 0x20 + uVar3 * 8);
            __this = url;
            bVar2 = System_String__StartsWith(url,value_00,(MethodInfo *)0x0);
            uVar3 = uVar3 + 1;
            if ((char)bVar2 != '\0') {
              return bVar5;
            }
          }
          goto label_04095969;
        }
        if (*(int *)(lVar1 + 0x18) < 1) {
          return 0;
        }
      }
    }
  }
label_04095964:
  il2cpp_runtime_helper_022b2c90();
label_04095969:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._stringLength = iVar4;
  return extraout_EAX;
}


// CustomSkins.TextureDownloader$$DownloadTexture
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_TextureDownloader__DownloadTexture (UnityEngine_MonoBehaviour_o* obj, System_String_o* url, bool mipmap, int32_t maxSize, const MethodInfo* method);
// 0x4094630

System_Collections_IEnumerator_o *
CustomSkins_TextureDownloader__DownloadTexture
          (UnityEngine_MonoBehaviour_o *obj,System_String_o *url,bool_conflict mipmap,int32_t maxSize,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *__this;
  System_String_o *pSVar4;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  Il2CppObject *value;
  System_String_o *str2;
  long lVar5;
  
  if (g_data_057ac446 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownloadTexture_d__9);
    g_data_057ac446 = '\x01';
  }
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DownloadTexture_d__9);
  str2 = (System_String_o *)0x0;
  pSVar4 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._stringLength = 0;
  if (__this != (System_String_o *)0x0) {
    __this[1].fields = (System_String_Fields)url;
    il2cpp_runtime_helper_022b4080(&__this[1].fields,url);
    *(char *)&__this[1].monitor = (char)mipmap;
    *(int32_t *)&__this[2].klass = maxSize;
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac43f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MaterialCache);
    g_data_057ac43f = '\x01';
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) != 0) goto label_040946ee;
label_04094769:
    il2cpp_runtime_helper_02337ed0();
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8)
    ;
  }
  else {
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) goto label_04094769;
label_040946ee:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8)
    ;
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary_object__object___get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (*(int *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 8) < iVar2) {
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040948ca;
      System_Collections_Generic_Dictionary_object__object___Clear
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_MaterialCache + 0xb8),MethodInfo_Void_Clear);
    }
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac440 == '\0') {
      il2cpp_runtime_helper_023445d0(&",");
      g_data_057ac440 = '\x01';
    }
    pSVar4 = System_String__Concat_3af7150(pSVar4,",",str2,(MethodInfo *)0x0);
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_MaterialCache + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_MaterialCache + 0xb8),(Il2CppObject *)pSVar4,MethodInfo_Boolean_ContainsKey);
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        if ((char)bVar3 == '\0') {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar1,(Il2CppObject *)pSVar4,value,MethodInfo_Void_Add);
          return extraout_RAX_00;
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)pSVar4,value,MethodInfo_Void_set_Item);
        return extraout_RAX;
      }
    }
  }
label_040948ca:
  lVar5 = 0;
  il2cpp_runtime_helper_022b2c90();
  return *(System_Collections_IEnumerator_o **)(lVar5 + 0x18);
}


// CustomSkins.TextureDownloader$$CanStartTextureDownload
// il2cpp: bool CustomSkins_TextureDownloader__CanStartTextureDownload (const MethodInfo* method);
// 0x4095990

bool_conflict CustomSkins_TextureDownloader__CanStartTextureDownload(MethodInfo *method)

{
  if (g_data_057ac447 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    g_data_057ac447 = '\x01';
  }
  if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_TextureDownloader + 0xb8) >> 8),
                  *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) < 1);
}


// CustomSkins.TextureDownloader$$OnStartTextureDownload
// il2cpp: void CustomSkins_TextureDownloader__OnStartTextureDownload (const MethodInfo* method);
// 0x40959e0

void CustomSkins_TextureDownloader__OnStartTextureDownload(MethodInfo *method)

{
  int32_t iVar1;
  int val1;
  
  if (g_data_057ac448 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    g_data_057ac448 = '\x01';
  }
  if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  val1 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + 1;
  *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = val1;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = System_Math__Min_3cb7d70(val1,1,(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar1;
  return;
}


// CustomSkins.TextureDownloader$$OnStopTextureDownload
// il2cpp: void CustomSkins_TextureDownloader__OnStopTextureDownload (const MethodInfo* method);
// 0x4095a80

void CustomSkins_TextureDownloader__OnStopTextureDownload(MethodInfo *method)

{
  int32_t iVar1;
  int val1;
  
  if (g_data_057ac449 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    g_data_057ac449 = '\x01';
  }
  if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  val1 = *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) + -1;
  *(int *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = val1;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = System_Math__Max_3cb7c30(val1,0,(MethodInfo *)0x0);
  *(int32_t *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = iVar1;
  return;
}


// CustomSkins.TextureDownloader$$IsPowerOfTwo
// il2cpp: bool CustomSkins_TextureDownloader__IsPowerOfTwo (int32_t num, const MethodInfo* method);
// 0x4095b10

bool_conflict CustomSkins_TextureDownloader__IsPowerOfTwo(int32_t num,MethodInfo *method)

{
  return CONCAT31((int3)(num - 1U >> 8),(num & num - 1U) == 0 && 3 < num);
}


// CustomSkins.TextureDownloader$$GetClosestPowerOfTwo
// il2cpp: int32_t CustomSkins_TextureDownloader__GetClosestPowerOfTwo (int32_t num, const MethodInfo* method);
// 0x4095b30

int32_t CustomSkins_TextureDownloader__GetClosestPowerOfTwo(int32_t num,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int iVar3;
  
  if (g_data_057ac44a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057ac44a = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = System_Math__Min_3cb7d70(num,0x7ff,(MethodInfo *)0x0);
  iVar1 = 4;
  do {
    iVar3 = iVar1;
    iVar1 = iVar3 * 2;
  } while (iVar3 < iVar2);
  return iVar3;
}


// CustomSkins.TextureDownloader$$CreateBlankTexture
// il2cpp: UnityEngine_Texture2D_o* CustomSkins_TextureDownloader__CreateBlankTexture (bool mipmap, const MethodInfo* method);
// 0x4095b90

UnityEngine_Texture2D_o *
CustomSkins_TextureDownloader__CreateBlankTexture(bool_conflict mipmap,MethodInfo *method)

{
  UnityEngine_Texture2D_o *__this;
  
  if (g_data_057ac44b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057ac44b = '\x01';
  }
  __this = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
  UnityEngine_Texture2D___ctor_4dd9130(__this,4,4,4,mipmap & 0xff,(MethodInfo *)0x0);
  return __this;
}


// CustomSkins.TextureDownloader$$DecodeTexture
// il2cpp: UnityEngine_Texture2D_o* CustomSkins_TextureDownloader__DecodeTexture (UnityEngine_Networking_UnityWebRequest_o* uwr, bool mipmap, const MethodInfo* method);
// 0x4095bf0

UnityEngine_Texture2D_o *
CustomSkins_TextureDownloader__DecodeTexture
          (UnityEngine_Networking_UnityWebRequest_o *uwr,bool_conflict mipmap,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Networking_DownloadHandler_o *pUVar3;
  System_Byte_array *pSVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [12];
  
  if (g_data_057ac44c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    g_data_057ac44c = '\x01';
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TextureDownloader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ac44b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057ac44b = '\x01';
  }
  __this = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
  UnityEngine_Texture2D___ctor_4dd9130(__this,4,4,4,mipmap & 0xff,(MethodInfo *)0x0);
  if (uwr == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar3 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(uwr,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
      pSVar4 = UnityEngine_Networking_DownloadHandler__get_data(pUVar3,(MethodInfo *)0x0);
      UnityEngine_ImageConversion__LoadImage_4e3d4f0(__this,pSVar4,(MethodInfo *)0x0);
      return __this;
    }
  }
  auVar9 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar9._0_8_;
  if (auVar9._8_4_ != 1) {
label_04095e1a:
    _Unwind_Resume(uVar8);
  }
  puVar5 = (undefined8 *)__cxa_begin_catch(uVar8);
  cVar2 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar5);
  if (cVar2 == '\0') {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar5;
    __cxa_throw(puVar7,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  if ((char)mipmap != '\0') {
    lVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar6);
    }
    if (g_data_057ac44b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
      g_data_057ac44b = '\x01';
    }
    __this = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor_4dd9130(__this,4,4,4,0,(MethodInfo *)0x0);
    if ((uwr == (UnityEngine_Networking_UnityWebRequest_o *)0x0) ||
       (pUVar3 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler(uwr,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Networking_DownloadHandler_o *)0x0)) {
      uVar8 = il2cpp_runtime_helper_022b2c90();
      __cxa_end_catch();
      goto label_04095e1a;
    }
    pSVar4 = UnityEngine_Networking_DownloadHandler__get_data(pUVar3,(MethodInfo *)0x0);
    UnityEngine_ImageConversion__LoadImage_4e3d4f0(__this,pSVar4,(MethodInfo *)0x0);
  }
  return __this;
}


// CustomSkins.TextureDownloader$$.ctor
// il2cpp: void CustomSkins_TextureDownloader___ctor (CustomSkins_TextureDownloader_o* __this, const MethodInfo* method);
// 0x4095e30

void CustomSkins_TextureDownloader___ctor(CustomSkins_TextureDownloader_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.TextureDownloader$$.cctor
// il2cpp: void CustomSkins_TextureDownloader___cctor (const MethodInfo* method);
// 0x4095e40

void CustomSkins_TextureDownloader___cctor(MethodInfo *method)

{
  code *vtableDispatch;
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (g_data_057ac44d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextureDownloader);
    il2cpp_runtime_helper_023445d0(&"i.reddit.it/");
    il2cpp_runtime_helper_023445d0(&"photobucket.com/");
    il2cpp_runtime_helper_023445d0(&"postimg./");
    il2cpp_runtime_helper_023445d0(&".jpg");
    il2cpp_runtime_helper_023445d0(&"gyazo.com/");
    il2cpp_runtime_helper_023445d0(&"i.ibb.co/");
    il2cpp_runtime_helper_023445d0(&"http://");
    il2cpp_runtime_helper_023445d0(&"image.ibb.co/");
    il2cpp_runtime_helper_023445d0(&"s27.postimg.io/");
    il2cpp_runtime_helper_023445d0(&"deviantart.com/");
    il2cpp_runtime_helper_023445d0(&".jpeg");
    il2cpp_runtime_helper_023445d0(&"imgse.com/");
    il2cpp_runtime_helper_023445d0(&"tiebapic.baidu.com/");
    il2cpp_runtime_helper_023445d0(&"www.");
    il2cpp_runtime_helper_023445d0(&"i.postimg.cc/");
    il2cpp_runtime_helper_023445d0(&"s25.postimg.gg/");
    il2cpp_runtime_helper_023445d0(&".png");
    il2cpp_runtime_helper_023445d0(&"https://");
    il2cpp_runtime_helper_023445d0(&"imgur.com/");
    il2cpp_runtime_helper_023445d0(&"cdn.discordapp.com/attachments/");
    il2cpp_runtime_helper_023445d0(&"puu.sh/");
    il2cpp_runtime_helper_023445d0(&"images-ext-2.discordapp.net/external/");
    il2cpp_runtime_helper_023445d0(&"media.discordapp.net/attachments/");
    il2cpp_runtime_helper_023445d0(&"s1.ax1x.com/");
    il2cpp_runtime_helper_023445d0(&"aotcorehome.files.wordpress.com/");
    il2cpp_runtime_helper_023445d0(&"1.bp.blogspot.com/");
    il2cpp_runtime_helper_023445d0(&"i.imgur.com/");
    g_data_057ac44d = '\x01';
  }
  lVar3 = TypeInfo_string;
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,0x17);
  if (lVar2 == 0) goto label_0409646f;
  if (*(int *)(lVar2 + 0x18) == 0) {
label_0409646a:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    lVar3 = lVar2 + 0x20;
    *(undefined8 *)(lVar2 + 0x20) = "i.imgur.com/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 2) goto label_0409646a;
    lVar3 = lVar2 + 0x28;
    *(undefined8 *)(lVar2 + 0x28) = "imgur.com/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 3) goto label_0409646a;
    lVar3 = lVar2 + 0x30;
    *(undefined8 *)(lVar2 + 0x30) = "image.ibb.co/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 4) goto label_0409646a;
    lVar3 = lVar2 + 0x38;
    *(undefined8 *)(lVar2 + 0x38) = "i.ibb.co/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 5) goto label_0409646a;
    lVar3 = lVar2 + 0x40;
    *(undefined8 *)(lVar2 + 0x40) = "i.reddit.it/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 6) goto label_0409646a;
    lVar3 = lVar2 + 0x48;
    *(undefined8 *)(lVar2 + 0x48) = "cdn.discordapp.com/attachments/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 7) goto label_0409646a;
    lVar3 = lVar2 + 0x50;
    *(undefined8 *)(lVar2 + 0x50) = "media.discordapp.net/attachments/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 8) goto label_0409646a;
    lVar3 = lVar2 + 0x58;
    *(undefined8 *)(lVar2 + 0x58) = "images-ext-2.discordapp.net/external/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 9) goto label_0409646a;
    lVar3 = lVar2 + 0x60;
    *(undefined8 *)(lVar2 + 0x60) = "i.reddit.it/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 10) goto label_0409646a;
    lVar3 = lVar2 + 0x68;
    *(undefined8 *)(lVar2 + 0x68) = "gyazo.com/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0xb) goto label_0409646a;
    lVar3 = lVar2 + 0x70;
    *(undefined8 *)(lVar2 + 0x70) = "puu.sh/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0xc) goto label_0409646a;
    lVar3 = lVar2 + 0x78;
    *(undefined8 *)(lVar2 + 0x78) = "i.postimg.cc/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0xd) goto label_0409646a;
    lVar3 = lVar2 + 0x80;
    *(undefined8 *)(lVar2 + 0x80) = "postimg./";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0xe) goto label_0409646a;
    lVar3 = lVar2 + 0x88;
    *(undefined8 *)(lVar2 + 0x88) = "deviantart.com/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0xf) goto label_0409646a;
    lVar3 = lVar2 + 0x90;
    *(undefined8 *)(lVar2 + 0x90) = "photobucket.com/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0x10) goto label_0409646a;
    lVar3 = lVar2 + 0x98;
    *(undefined8 *)(lVar2 + 0x98) = "aotcorehome.files.wordpress.com/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0x11) goto label_0409646a;
    lVar3 = lVar2 + 0xa0;
    *(undefined8 *)(lVar2 + 0xa0) = "s1.ax1x.com/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0x12) goto label_0409646a;
    lVar3 = lVar2 + 0xa8;
    *(undefined8 *)(lVar2 + 0xa8) = "s27.postimg.io/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0x13) goto label_0409646a;
    lVar3 = lVar2 + 0xb0;
    *(undefined8 *)(lVar2 + 0xb0) = "1.bp.blogspot.com/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0x14) goto label_0409646a;
    lVar3 = lVar2 + 0xb8;
    *(undefined8 *)(lVar2 + 0xb8) = "tiebapic.baidu.com/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0x15) goto label_0409646a;
    lVar3 = lVar2 + 0xc0;
    *(undefined8 *)(lVar2 + 0xc0) = "s25.postimg.gg/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0x16) goto label_0409646a;
    lVar3 = lVar2 + 200;
    *(undefined8 *)(lVar2 + 200) = "aotcorehome.files.wordpress.com/";
    il2cpp_runtime_helper_022b4080();
    if (*(uint *)(lVar2 + 0x18) < 0x17) goto label_0409646a;
    *(undefined8 *)(lVar2 + 0xd0) = "imgse.com/";
    il2cpp_runtime_helper_022b4080(lVar2 + 0xd0);
    **(long **)(TypeInfo_TextureDownloader + 0xb8) = lVar2;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_TextureDownloader + 0xb8),lVar2);
    lVar3 = TypeInfo_string;
    lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        lVar3 = lVar2 + 0x20;
        *(undefined8 *)(lVar2 + 0x20) = ".jpg";
        il2cpp_runtime_helper_022b4080();
        if (1 < *(uint *)(lVar2 + 0x18)) {
          lVar3 = lVar2 + 0x28;
          *(undefined8 *)(lVar2 + 0x28) = ".png";
          il2cpp_runtime_helper_022b4080();
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) = ".jpeg";
            il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
            lVar3 = *(long *)(TypeInfo_TextureDownloader + 0xb8);
            *(long *)(lVar3 + 8) = lVar2;
            il2cpp_runtime_helper_022b4080(lVar3 + 8,lVar2);
            lVar3 = TypeInfo_string;
            lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
            if (lVar2 == 0) goto label_0409646f;
            if (*(int *)(lVar2 + 0x18) != 0) {
              lVar3 = lVar2 + 0x20;
              *(undefined8 *)(lVar2 + 0x20) = "https://";
              il2cpp_runtime_helper_022b4080();
              if (1 < *(uint *)(lVar2 + 0x18)) {
                lVar3 = lVar2 + 0x28;
                *(undefined8 *)(lVar2 + 0x28) = "http://";
                il2cpp_runtime_helper_022b4080();
                if (2 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x30) = "www.";
                  il2cpp_runtime_helper_022b4080(lVar2 + 0x30);
                  lVar3 = *(long *)(TypeInfo_TextureDownloader + 0xb8);
                  *(long *)(lVar3 + 0x10) = lVar2;
                  il2cpp_runtime_helper_022b4080(lVar3 + 0x10,lVar2);
                  *(undefined4 *)(*(long *)(TypeInfo_TextureDownloader + 0xb8) + 0x18) = 0;
                  return;
                }
              }
            }
          }
        }
      }
      goto label_0409646a;
    }
  }
label_0409646f:
  il2cpp_runtime_helper_022b2c90();
  uVar1 = *(int *)(lVar3 + 0x10) + 4;
  if (0xd < uVar1) {
    return;
  }
  if ((0x782U >> (uVar1 & 0x1f) & 1) == 0) {
    if ((0x3801U >> (uVar1 & 0x1f) & 1) == 0) {
      return;
    }
    if (g_data_057ac450 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac450 = '\x01';
    }
    *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
    plVar4 = *(long **)(lVar3 + 0x40);
    if (plVar4 == (long *)0x0) {
      return;
    }
    lVar3 = *plVar4;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar2 = *(long *)(lVar3 + 0xb0);
      lVar5 = 0;
      do {
        if (*(long *)(lVar2 + lVar5) == TypeInfo_IDisposable) goto label_0409659d;
        lVar5 = lVar5 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar5);
    }
  }
  else {
    if (g_data_057ac44f == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac44f = '\x01';
    }
    *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
    plVar4 = *(long **)(lVar3 + 0x40);
    if (plVar4 == (long *)0x0) {
      return;
    }
    lVar3 = *plVar4;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar2 = *(long *)(lVar3 + 0xb0);
      lVar5 = 0;
      do {
        if (*(long *)(lVar2 + lVar5) == TypeInfo_IDisposable) goto label_0409659d;
        lVar5 = lVar5 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar5);
    }
  }
  auVar6 = il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IDisposable,0);
label_040965af:
  vtableDispatch = (code *)*auVar6._0_8_;
  (*vtableDispatch)(plVar4,auVar6._0_8_[1],auVar6._8_8_,vtableDispatch);
  return;
label_0409659d:
  auVar6._8_8_ = lVar2;
  auVar6._0_8_ = lVar3 + (long)*(int *)(lVar2 + 8 + lVar5) * 0x10 + 0x138;
  goto label_040965af;
}


