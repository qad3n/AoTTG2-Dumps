// Type: CustomSkins.TextureDownloader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomSkins/TextureDownloader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/TextureDownloader.cs
// --------------------------------

// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$.ctor
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__10___ctor (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x59663e0

void CustomSkins_TextureDownloader__DownloadTexture_d__10___ctor
               (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__10__System_IDisposable_Dispose (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x5966c40

void CustomSkins_TextureDownloader__DownloadTexture_d__10__System_IDisposable_Dispose
               (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  uint uVar3;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = (__this->fields).__1__state + 3;
  if ((uVar3 < 9) && ((0x1c1U >> (uVar3 & 0x1f) & 1) != 0)) {
    if (Il2CppMethodInitialized_07545961 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07545961 = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = (__this->fields)._uwr_5__3;
    if (obj != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar1 = (Il2CppClass *)obj->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
            goto label_05966cdf;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05966cdf:
      (*pVVar4->methodPtr)((Il2CppObject *)obj,pVVar4->method);
      return;
    }
  }
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$MoveNext
// il2cpp: bool CustomSkins_TextureDownloader__DownloadTexture_d__10__MoveNext (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x5966cf0
// eh: try 0x5966d7c..0x59672cf -> pad 0x59672d7 (+25 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x596730f..0x5967314 -> pad 0x596732e cleanup
// eh: try 0x5967331..0x596733b -> pad 0x5967343 catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59672cf: jmp 0x59672f7
// asm:   0x59672d1: jmp 0x59672f7
// asm:   0x59672d3: jmp 0x59672f7
// asm:   0x59672d5: jmp 0x59672f7
// asm:   0x59672d7: jmp 0x59672f7
// asm:   0x59672d9: jmp 0x59672f7
// asm:   0x59672db: jmp 0x59672f7
// asm:   0x59672dd: jmp 0x59672f7
// asm:   0x59672df: jmp 0x59672f7
// asm:   0x59672e1: jmp 0x59672f7
// asm:   0x59672e3: jmp 0x59672f7
// asm:   0x59672e5: jmp 0x59672f7
// asm:   0x59672e7: jmp 0x59672f7
// asm:   0x59672e9: jmp 0x59672f7
// asm:   0x59672eb: jmp 0x59672f7
// asm:   0x59672ed: jmp 0x59672f7
// asm:   0x59672ef: jmp 0x59672f7
// asm:   0x59672f1: jmp 0x59672f7
// asm:   0x59672f3: jmp 0x59672f7
// asm:   0x59672f5: jmp 0x59672f7
// asm:   0x59672f7: mov rbx, rax
// asm:   0x59672fa: cmp edx, 1
// asm:   0x59672fd: jne 0x5967331
// asm:   0x59672ff: mov rdi, rbx
// asm:   0x5967302: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5967307: mov rbx, qword ptr [rax]
// asm:   0x596730a: mov qword ptr [rsp + 0x10], rbx
// asm:   0x596730f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5967314: test rbx, rbx
// asm:   0x5967317: je 0x5967259
// asm:   0x596731d: mov rdi, qword ptr [rsp]
// asm:   0x5967321: call 0x2fd3de0  ; il2cpp_runtime_helper_02fd3de0()
// asm:   0x5967326: mov rdi, rbx
// asm:   0x5967329: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x596732e: mov rbx, rax
// asm:   0x5967331: lea rdi, [rsp + 0x10]
// asm:   0x5967336: call 0x2fd3b90  ; il2cpp_runtime_helper_02fd3b90()
// asm:   0x596733b: mov rdi, rbx
// asm:   0x596733e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5967343: mov rdi, rax
// asm:   0x5967346: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomSkins_TextureDownloader__DownloadTexture_d__10__MoveNext
               (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,MethodInfo *method)

{
  System_String_o *url;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  CustomSkins_TextureDownloader__DownloadTexture_d__10_o **ppCVar3;
  bool bVar4;
  int32_t iVar5;
  uint64_t uVar6;
  VirtualInvokeData *pVVar7;
  UnityEngine_Networking_UnityWebRequest_o *pUVar8;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar9;
  UnityEngine_Texture2D_o *pUVar10;
  ulong uVar11;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  int iVar12;
  long lVar13;
  CustomSkins_TextureDownloader__DownloadTexture_d__10_o *pCStack_38;
  UnityEngine_Networking_DownloadedTextureParams_Fields UStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  
  pCStack_38 = __this;
  if (Il2CppMethodInitialized_07545960 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_07545960 = '\x01';
    in_RDX = extraout_RDX;
  }
  puStack_20 = (undefined1 *)&pCStack_38;
  UStack_30.flags = 0;
  UStack_30.mipmapCount = 0;
  uStack_28 = 0;
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    bVar4 = (__this->fields).mipmap;
    puStack_20 = (undefined1 *)&pCStack_38;
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      puStack_20 = (undefined1 *)&pCStack_38;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    if (Il2CppMethodInitialized_0754595e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
      Il2CppMethodInitialized_0754595e = '\x01';
    }
    pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
    UnityEngine_Texture2D___ctor_68efe30(pUVar10,4,4,4,bVar4,(MethodInfo *)0x0);
    (pCStack_38->fields)._blankTexture_5__2 = pUVar10;
    Il2CppCodeGenWriteBarrier(&(pCStack_38->fields)._blankTexture_5__2);
    (pCStack_38->fields).__2__current = (Il2CppObject *)(pCStack_38->fields)._blankTexture_5__2;
    iVar5 = 1;
    Il2CppCodeGenWriteBarrier(&(pCStack_38->fields).__2__current);
    goto label_059672ac;
  case 1:
    (__this->fields).__1__state = -1;
    url = (__this->fields).url;
    bVar4 = (__this->fields).allowLocalFile;
    puStack_20 = (undefined1 *)&pCStack_38;
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      puStack_20 = (undefined1 *)&pCStack_38;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
      in_RDX = extraout_RDX_00;
    }
    bVar4 = CustomSkins_TextureDownloader__ValidTextureURL(url,bVar4,in_RDX);
    if (!bVar4) {
      return false;
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    puStack_20 = (undefined1 *)&pCStack_38;
    break;
  case 3:
    (__this->fields).__1__state = -3;
    puStack_20 = (undefined1 *)&pCStack_38;
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      puStack_20 = (undefined1 *)&pCStack_38;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    if (Il2CppMethodInitialized_0754595d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
      Il2CppMethodInitialized_0754595d = '\x01';
    }
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    iVar12 = TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads + -1;
    TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = iVar12;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar5 = System_Math__Max_54bad40(iVar12,0,(MethodInfo *)0x0);
    TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = iVar5;
    pUVar8 = (pCStack_38->fields)._uwr_5__3;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar5 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar8,(MethodInfo *)0x0);
    if (iVar5 == 1) {
      pUVar8 = (pCStack_38->fields)._uwr_5__3;
      if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar6 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes(pUVar8,(MethodInfo *)0x0);
      if (uVar6 <= (ulong)(long)(pCStack_38->fields).maxSize) {
        pUVar10 = UnityEngine_Networking_DownloadHandlerTexture__GetContent
                            ((pCStack_38->fields)._uwr_5__3,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if (pCStack_38 == (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *)0x0) {
            ThrowNullReferenceException();
          }
        }
        else {
          pUVar10 = (pCStack_38->fields)._blankTexture_5__2;
        }
        (pCStack_38->fields).__2__current = (Il2CppObject *)pUVar10;
        iVar5 = 5;
        Il2CppCodeGenWriteBarrier(&(pCStack_38->fields).__2__current);
        goto label_059672ac;
      }
    }
    (pCStack_38->fields).__2__current = (Il2CppObject *)(pCStack_38->fields)._blankTexture_5__2;
    iVar5 = 4;
    Il2CppCodeGenWriteBarrier(&(pCStack_38->fields).__2__current);
    goto label_059672ac;
  case 4:
    (__this->fields).__1__state = -3;
    puStack_20 = (undefined1 *)&pCStack_38;
    if (Il2CppMethodInitialized_07545961 == '\0') {
      puStack_20 = (undefined1 *)&pCStack_38;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07545961 = '\x01';
    }
    (__this->fields).__1__state = -1;
    pUVar8 = (__this->fields)._uwr_5__3;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      return false;
    }
    pIVar1 = (Il2CppClass *)pUVar8->klass;
    uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar13) == TypeInfo_System_IDisposable)
        {
          pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar13);
          goto label_05967250;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar11 * 0x10 != lVar13);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pUVar8,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05967250:
    (*pVVar7->methodPtr)((Il2CppObject *)pUVar8,pVVar7->method);
    return false;
  case 5:
    (__this->fields).__1__state = -3;
    ppCVar3 = &pCStack_38;
    if (Il2CppMethodInitialized_07545961 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_07545961 = '\x01';
      ppCVar3 = (CustomSkins_TextureDownloader__DownloadTexture_d__10_o **)puStack_20;
    }
    puStack_20 = (undefined1 *)ppCVar3;
    (__this->fields).__1__state = -1;
    pUVar8 = (__this->fields)._uwr_5__3;
    if (pUVar8 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      pIVar1 = (Il2CppClass *)pUVar8->klass;
      uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar13) == TypeInfo_System_IDisposable
             ) {
            pVVar7 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar13);
            goto label_0596726f;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar11 * 0x10 != lVar13);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)pUVar8,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0596726f:
      (*pVVar7->methodPtr)((Il2CppObject *)pUVar8,pVVar7->method);
    }
    (pCStack_38->fields)._uwr_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pCStack_38->fields)._uwr_5__3);
    return false;
  default:
    return false;
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  if (Il2CppMethodInitialized_0754595b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_0754595b = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    iVar12 = TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads;
  }
  else {
    iVar12 = TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads;
  }
  if (iVar12 < 1) {
    if ((((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    if (Il2CppMethodInitialized_0754595c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
      Il2CppMethodInitialized_0754595c = '\x01';
    }
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    iVar12 = TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads + 1;
    TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = iVar12;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar5 = System_Math__Min_54baeb0(iVar12,1,(MethodInfo *)0x0);
    TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = iVar5;
    UStack_30 = (UnityEngine_Networking_DownloadedTextureParams_Fields)
                UnityEngine_Networking_DownloadedTextureParams__get_Default((MethodInfo *)0x0);
    UnityEngine_Networking_DownloadedTextureParams__set_mipmapChain
              ((UnityEngine_Networking_DownloadedTextureParams_o *)&UStack_30,(pCStack_38->fields).mipmap,
               (MethodInfo *)0x0);
    UnityEngine_Networking_DownloadedTextureParams__set_readable
              ((UnityEngine_Networking_DownloadedTextureParams_o *)&UStack_30,false,(MethodInfo *)0x0);
    pUVar8 = UnityEngine_Networking_UnityWebRequestTexture__GetTexture
                       ((pCStack_38->fields).url,(UnityEngine_Networking_DownloadedTextureParams_o)UStack_30,
                        (MethodInfo *)0x0);
    (pCStack_38->fields)._uwr_5__3 = pUVar8;
    Il2CppCodeGenWriteBarrier(&(pCStack_38->fields)._uwr_5__3);
    (pCStack_38->fields).__1__state = -3;
    pUVar8 = (pCStack_38->fields)._uwr_5__3;
    if (pUVar8 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar9 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar8,(MethodInfo *)0x0);
    (pCStack_38->fields).__2__current = (Il2CppObject *)pUVar9;
    iVar5 = 3;
    Il2CppCodeGenWriteBarrier(&(pCStack_38->fields).__2__current);
  }
  else {
    (pCStack_38->fields).__2__current = (Il2CppObject *)(pCStack_38->fields)._blankTexture_5__2;
    iVar5 = 2;
    Il2CppCodeGenWriteBarrier(&(pCStack_38->fields).__2__current);
  }
label_059672ac:
  (pCStack_38->fields).__1__state = iVar5;
  return true;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$<>m__Finally1
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__10____m__Finally1 (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x5967350

void CustomSkins_TextureDownloader__DownloadTexture_d__10____m__Finally1
               (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,MethodInfo *method)

{
  UnityEngine_Networking_UnityWebRequest_o *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07545961 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_07545961 = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = (__this->fields)._uwr_5__3;
  if (obj == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pIVar1 = (Il2CppClass *)obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_059673df;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059673df:
  (*pVVar3->methodPtr)((Il2CppObject *)obj,pVVar3->method);
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_TextureDownloader__DownloadTexture_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x59673f0

Il2CppObject *
CustomSkins_TextureDownloader__DownloadTexture_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__10__System_Collections_IEnumerator_Reset (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x5967400

void CustomSkins_TextureDownloader__DownloadTexture_d__10__System_Collections_IEnumerator_Reset
               (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomSkins_TextureDownloader_DownloadTexture_d__10_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_TextureDownloader__DownloadTexture_d__10__System_Collections_IEnumerator_get_Current (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x5967440

Il2CppObject *
CustomSkins_TextureDownloader__DownloadTexture_d__10__System_Collections_IEnumerator_get_Current
          (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TextureDownloader$$ResetConcurrentDownloads
// il2cpp: void CustomSkins_TextureDownloader__ResetConcurrentDownloads (const MethodInfo* method);
// 0x595f8d0

void CustomSkins_TextureDownloader__ResetConcurrentDownloads(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545955 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_07545955 = '\x01';
    uVar1 = (TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = 0;
    return;
  }
  *(undefined4 *)((long)((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader)->static_fields + 0x18) = 0;
  return;
}


// CustomSkins.TextureDownloader$$ValidTextureURL
// il2cpp: bool CustomSkins_TextureDownloader__ValidTextureURL (System_String_o* url, bool allowLocalFile, const MethodInfo* method);
// 0x5963160

bool CustomSkins_TextureDownloader__ValidTextureURL
               (System_String_o *url,bool allowLocalFile,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545956 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    il2cpp_codegen_initialize_runtime_metadata(&"file:");
    Il2CppMethodInitialized_07545956 = '\x01';
  }
  bVar2 = false;
  bVar1 = System_String__IsNullOrEmpty(url,(MethodInfo *)0x0);
  if (!bVar1) {
    if (url == (System_String_o *)0x0) {
label_059632a6:
      ThrowNullReferenceException();
    }
    a = System_String__ToLowerInvariant(url,(MethodInfo *)0x0);
    if ((TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
    }
    bVar1 = System_String__op_Equality
                      (a,TypeInfo_CustomSkins_BaseCustomSkinLoader->static_fields->TransparentURL,
                       (MethodInfo *)0x0);
    bVar2 = true;
    if (!bVar1) {
      if (a == (System_String_o *)0x0) goto label_059632a6;
      method_00 = (MethodInfo *)"file:";
      bVar1 = System_String__StartsWith(a,"file:",(MethodInfo *)0x0);
      if (bVar1) {
        if (allowLocalFile) {
          if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
          }
          bVar1 = CustomSkins_TextureDownloader__CheckValidLocalFileURL(a,method_00);
          return bVar1;
        }
      }
      else if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
        bVar1 = CustomSkins_TextureDownloader__CheckFileEnding(a,method_00);
        if (bVar1) goto label_0596326e;
      }
      else {
        bVar1 = CustomSkins_TextureDownloader__CheckFileEnding(a,method_00);
        if (bVar1) {
label_0596326e:
          if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
          }
          bVar1 = CustomSkins_TextureDownloader__CheckValidHost(a,method_00);
          return bVar1;
        }
      }
      bVar2 = false;
    }
  }
  return bVar2;
}


// CustomSkins.TextureDownloader$$CheckValidLocalFileURL
// il2cpp: bool CustomSkins_TextureDownloader__CheckValidLocalFileURL (System_String_o* url, const MethodInfo* method);
// 0x5965c80
// eh: try 0x5965f02..0x59660e8 -> pad 0x5966104 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5966119..0x5966170 -> pad 0x5966170 (+1 call sites) cleanup
// eh: try 0x5966173..0x5966178 -> pad 0x5966180 catch (...) [compiler noexcept guard]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5965d10: jmp 0x5965da9
// asm:   0x5965d6f: nop 
// asm:   0x5965d9c: jmp 0x596613c
// asm:   0x59660e8: jmp 0x5966106
// asm:   0x59660ea: jmp 0x5966106
// asm:   0x59660ec: jmp 0x5966106
// asm:   0x59660ee: jmp 0x5966106
// asm:   0x59660f0: jmp 0x5966106
// asm:   0x59660f2: jmp 0x5966106
// asm:   0x59660f4: jmp 0x5966106
// asm:   0x59660f6: jmp 0x5966106
// asm:   0x59660f8: jmp 0x5966106
// asm:   0x59660fa: jmp 0x5966106
// asm:   0x59660fc: jmp 0x5966106
// asm:   0x59660fe: jmp 0x5966106
// asm:   0x5966100: jmp 0x5966106
// asm:   0x5966102: jmp 0x5966106
// asm:   0x5966104: jmp 0x5966106
// asm:   0x5966106: mov rbx, rax
// asm:   0x5966109: cmp edx, 1
// asm:   0x596610c: jne 0x5966178
// asm:   0x596610e: mov rdi, rbx
// asm:   0x5966111: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5966116: mov rbx, rax
// asm:   0x5966119: lea rdi, [rip + 0x1911fa0]  ; TypeInfo_System_Exception
// asm:   0x5966120: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5966125: mov rcx, qword ptr [rbx]
// asm:   0x5966128: mov rsi, qword ptr [rcx]
// asm:   0x596612b: mov rdi, rax
// asm:   0x596612e: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5966133: test al, al
// asm:   0x5966135: je 0x596614f
// asm:   0x5966137: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x596614f: mov edi, 8
// asm:   0x5966154: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5966159: mov rcx, qword ptr [rbx]
// asm:   0x596615c: mov qword ptr [rax], rcx
// asm:   0x596615f: lea rsi, [rip + 0x14c739a]
// asm:   0x5966166: mov rdi, rax
// asm:   0x5966169: xor edx, edx
// asm:   0x596616b: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5966170: mov rbx, rax
// asm:   0x5966173: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5966178: mov rdi, rbx
// asm:   0x596617b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5966180: mov rdi, rax
// asm:   0x5966183: call 0x2ab61e0  ; __clang_call_terminate()

bool CustomSkins_TextureDownloader__CheckValidLocalFileURL(System_String_o *url,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  bool bVar3;
  uint16_t uVar4;
  int iVar5;
  ulong uVar6;
  System_String_o *pSVar7;
  ulong uVar8;
  System_Uri_o *local_30;
  
  if (Il2CppMethodInitialized_07545957 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"file:///");
    Il2CppMethodInitialized_07545957 = '\x01';
  }
  local_30 = (System_Uri_o *)0x0;
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    if (Il2CppMethodInitialized_07545958 == '\0') goto label_05965d23;
label_05965cf4:
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor != 0) goto label_05965d00;
label_05965d42:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    pSVar2 = TypeInfo_CustomSkins_TextureDownloader->static_fields->ValidFileEndings;
  }
  else {
    if (Il2CppMethodInitialized_07545958 != '\0') goto label_05965cf4;
label_05965d23:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_07545958 = '\x01';
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) goto label_05965d42;
label_05965d00:
    pSVar2 = TypeInfo_CustomSkins_TextureDownloader->static_fields->ValidFileEndings;
  }
  if (pSVar2 == (System_String_array *)0x0) {
label_05965da9:
    ThrowNullReferenceException();
  }
  iVar5 = (int)pSVar2->max_length;
  if (url == (System_String_o *)0x0) {
    if (0 < iVar5) goto label_05965da9;
  }
  else if (0 < iVar5) {
    uVar6 = pSVar2->max_length & 0xffffffff;
    uVar8 = 0;
    do {
      if (uVar6 <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      bVar3 = System_String__EndsWith(url,pSVar2->m_Items[uVar8],(MethodInfo *)0x0);
      if (bVar3) {
        if ((url->fields)._stringLength < 0xb) {
          return false;
        }
        bVar3 = System_String__StartsWith(url,"file:///",(MethodInfo *)0x0);
        if (!bVar3) {
          return false;
        }
        uVar4 = System_String__get_Chars(url,8,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar3 = System_Char__IsLetter(uVar4,(MethodInfo *)0x0);
        if (!bVar3) {
          return false;
        }
        uVar4 = System_String__get_Chars(url,9,(MethodInfo *)0x0);
        if (uVar4 != 0x3a) {
          return false;
        }
        uVar4 = System_String__get_Chars(url,10,(MethodInfo *)0x0);
        if (uVar4 != 0x2f) {
          return false;
        }
        if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
        }
        bVar3 = System_Uri__TryCreate(url,1,&local_30,(MethodInfo *)0x0);
        if (!bVar3) {
          return false;
        }
        if (local_30 != (System_Uri_o *)0x0) {
          bVar3 = System_Uri__get_IsFile(local_30,(MethodInfo *)0x0);
          if (!bVar3) {
            return false;
          }
          if (local_30 != (System_Uri_o *)0x0) {
            bVar3 = System_Uri__get_IsUnc(local_30,(MethodInfo *)0x0);
            if (bVar3) {
              return false;
            }
            if (local_30 != (System_Uri_o *)0x0) {
              pSVar7 = System_Uri__get_Host(local_30,(MethodInfo *)0x0);
              bVar3 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
              if (!bVar3) {
                return false;
              }
              if (local_30 == (System_Uri_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar7 = System_Uri__get_LocalPath(local_30,(MethodInfo *)0x0);
              if (pSVar7 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pSVar7->fields)._stringLength < 3) {
                return false;
              }
              uVar4 = System_String__get_Chars(pSVar7,0,(MethodInfo *)0x0);
              if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_07556750);
              }
              bVar3 = System_Char__IsLetter(uVar4,(MethodInfo *)0x0);
              if (!bVar3) {
                return false;
              }
              uVar4 = System_String__get_Chars(pSVar7,1,(MethodInfo *)0x0);
              if (uVar4 != 0x3a) {
                return false;
              }
              uVar4 = System_String__get_Chars(pSVar7,2,(MethodInfo *)0x0);
              if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
              }
              if (uVar4 != TypeInfo_System_IO_Path->static_fields->DirectorySeparatorChar) {
                uVar4 = System_String__get_Chars(pSVar7,2,(MethodInfo *)0x0);
                if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
                }
                if (uVar4 != TypeInfo_System_IO_Path->static_fields->AltDirectorySeparatorChar) {
                  return false;
                }
              }
              if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
              }
              pSVar7 = System_IO_Path__GetFullPath(pSVar7,(MethodInfo *)0x0);
              pSVar7 = System_IO_Path__GetPathRoot(pSVar7,(MethodInfo *)0x0);
              if (pSVar7 == (System_String_o *)0x0) {
                return false;
              }
              if ((pSVar7->fields)._stringLength != 3) {
                return false;
              }
              uVar4 = System_String__get_Chars(pSVar7,0,(MethodInfo *)0x0);
              if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_07556750);
              }
              bVar3 = System_Char__IsLetter(uVar4,(MethodInfo *)0x0);
              if (!bVar3) {
                return false;
              }
              uVar4 = System_String__get_Chars(pSVar7,1,(MethodInfo *)0x0);
              if (uVar4 != 0x3a) {
                return false;
              }
              uVar4 = System_String__get_Chars(pSVar7,2,(MethodInfo *)0x0);
              if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
              }
              if (uVar4 == TypeInfo_System_IO_Path->static_fields->DirectorySeparatorChar) {
                return true;
              }
              uVar4 = System_String__get_Chars(pSVar7,2,(MethodInfo *)0x0);
              if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
              }
              return uVar4 == TypeInfo_System_IO_Path->static_fields->AltDirectorySeparatorChar;
            }
          }
        }
        goto label_05965da9;
      }
      uVar8 = uVar8 + 1;
      uVar1 = (uint)pSVar2->max_length;
      uVar6 = (ulong)uVar1;
    } while ((long)uVar8 < (long)(int)uVar1);
  }
  return false;
}


// CustomSkins.TextureDownloader$$CheckFileEnding
// il2cpp: bool CustomSkins_TextureDownloader__CheckFileEnding (System_String_o* url, const MethodInfo* method);
// 0x5966190
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59661c4: jmp 0x5966260

bool CustomSkins_TextureDownloader__CheckFileEnding(System_String_o *url,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_07545958 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_07545958 = '\x01';
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor != 0) goto label_059661b4;
label_059661ef:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    pSVar2 = TypeInfo_CustomSkins_TextureDownloader->static_fields->ValidFileEndings;
  }
  else {
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) goto label_059661ef;
label_059661b4:
    pSVar2 = TypeInfo_CustomSkins_TextureDownloader->static_fields->ValidFileEndings;
  }
  if (pSVar2 == (System_String_array *)0x0) {
label_05966260:
    ThrowNullReferenceException();
  }
  iVar4 = (int)pSVar2->max_length;
  if (url == (System_String_o *)0x0) {
    if (0 < iVar4) goto label_05966260;
  }
  else if (0 < iVar4) {
    uVar5 = pSVar2->max_length & 0xffffffff;
    uVar6 = 0;
    while( true ) {
      if (uVar5 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      bVar3 = System_String__EndsWith(url,pSVar2->m_Items[uVar6],(MethodInfo *)0x0);
      if (bVar3) break;
      uVar6 = uVar6 + 1;
      uVar1 = (uint)pSVar2->max_length;
      uVar5 = (ulong)uVar1;
      if ((long)(int)uVar1 <= (long)uVar6) {
        return false;
      }
    }
    return true;
  }
  return false;
}


// CustomSkins.TextureDownloader$$CheckValidHost
// il2cpp: bool CustomSkins_TextureDownloader__CheckValidHost (System_String_o* url, const MethodInfo* method);
// 0x5966270
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59662a8: jmp 0x59663cb
// asm:   0x5966352: jmp 0x59663cb
// asm:   0x5966354: mov rdi, qword ptr [r15]
// asm:   0x59663b9: jmp 0x59663c1

bool CustomSkins_TextureDownloader__CheckValidHost(System_String_o *url,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_String_o *value;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_07545959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_07545959 = '\x01';
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor != 0) goto label_05966298;
label_059662d3:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    pSVar2 = TypeInfo_CustomSkins_TextureDownloader->static_fields->URLPrefixes;
  }
  else {
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) goto label_059662d3;
label_05966298:
    pSVar2 = TypeInfo_CustomSkins_TextureDownloader->static_fields->URLPrefixes;
  }
  if (pSVar2 != (System_String_array *)0x0) {
    if (0 < (int)pSVar2->max_length) {
      uVar5 = pSVar2->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if (uVar5 <= uVar6) goto label_059663d0;
        if (url == (System_String_o *)0x0) goto label_059663cb;
        value = pSVar2->m_Items[uVar6];
        bVar3 = System_String__StartsWith(url,value,(MethodInfo *)0x0);
        if (bVar3) {
          if (value == (System_String_o *)0x0) goto label_059663cb;
          url = System_String__Remove(url,0,(value->fields)._stringLength,(MethodInfo *)0x0);
        }
        uVar6 = uVar6 + 1;
        uVar1 = (uint)pSVar2->max_length;
        uVar5 = (ulong)uVar1;
      } while ((long)uVar6 < (long)(int)uVar1);
    }
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    pSVar2 = TypeInfo_CustomSkins_TextureDownloader->static_fields->ValidHosts;
    if (pSVar2 != (System_String_array *)0x0) {
      iVar4 = (int)pSVar2->max_length;
      if (url == (System_String_o *)0x0) {
        if (0 < iVar4) goto label_059663cb;
      }
      else if (0 < iVar4) {
        uVar5 = pSVar2->max_length & 0xffffffff;
        uVar6 = 0;
        while (uVar6 < uVar5) {
          bVar3 = System_String__StartsWith(url,pSVar2->m_Items[uVar6],(MethodInfo *)0x0);
          if (bVar3) {
            return true;
          }
          uVar6 = uVar6 + 1;
          uVar1 = (uint)pSVar2->max_length;
          uVar5 = (ulong)uVar1;
          if ((long)(int)uVar1 <= (long)uVar6) {
            return false;
          }
        }
label_059663d0:
        ThrowIndexOutOfRangeException();
      }
      return false;
    }
  }
label_059663cb:
  ThrowNullReferenceException();
}


// CustomSkins.TextureDownloader$$DownloadTexture
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_TextureDownloader__DownloadTexture (UnityEngine_MonoBehaviour_o* obj, System_String_o* url, bool mipmap, int32_t maxSize, bool allowLocalFile, const MethodInfo* method);
// 0x59648c0

System_Collections_IEnumerator_o *
CustomSkins_TextureDownloader__DownloadTexture
          (UnityEngine_MonoBehaviour_o *obj,System_String_o *url,bool mipmap,int32_t maxSize,
          bool allowLocalFile,MethodInfo *method)

{
  CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this;
  
  if (Il2CppMethodInitialized_0754595a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader_DownloadTexture_d__10);
    Il2CppMethodInitialized_0754595a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader_DownloadTexture_d__10);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).url = url;
  Il2CppCodeGenWriteBarrier(&(__this->fields).url);
  (__this->fields).mipmap = mipmap;
  (__this->fields).maxSize = maxSize;
  (__this->fields).allowLocalFile = allowLocalFile;
  return (System_Collections_IEnumerator_o *)__this;
}


// CustomSkins.TextureDownloader$$CanStartTextureDownload
// il2cpp: bool CustomSkins_TextureDownloader__CanStartTextureDownload (const MethodInfo* method);
// 0x5966400

bool CustomSkins_TextureDownloader__CanStartTextureDownload(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754595b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_0754595b = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  return TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads < 1;
}


// CustomSkins.TextureDownloader$$OnStartTextureDownload
// il2cpp: void CustomSkins_TextureDownloader__OnStartTextureDownload (const MethodInfo* method);
// 0x5966450

void CustomSkins_TextureDownloader__OnStartTextureDownload(MethodInfo *method)

{
  int32_t iVar1;
  int val1;
  
  if (Il2CppMethodInitialized_0754595c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_0754595c = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  val1 = TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads + 1;
  TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = val1;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Min_54baeb0(val1,1,(MethodInfo *)0x0);
  TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = iVar1;
  return;
}


// CustomSkins.TextureDownloader$$OnStopTextureDownload
// il2cpp: void CustomSkins_TextureDownloader__OnStopTextureDownload (const MethodInfo* method);
// 0x59664f0

void CustomSkins_TextureDownloader__OnStopTextureDownload(MethodInfo *method)

{
  int32_t iVar1;
  int val1;
  
  if (Il2CppMethodInitialized_0754595d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_0754595d = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  val1 = TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads + -1;
  TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = val1;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Max_54bad40(val1,0,(MethodInfo *)0x0);
  TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = iVar1;
  return;
}


// CustomSkins.TextureDownloader$$CreateBlankTexture
// il2cpp: UnityEngine_Texture2D_o* CustomSkins_TextureDownloader__CreateBlankTexture (bool mipmap, const MethodInfo* method);
// 0x5966580

UnityEngine_Texture2D_o * CustomSkins_TextureDownloader__CreateBlankTexture(bool mipmap,MethodInfo *method)

{
  UnityEngine_Texture2D_o *__this;
  
  if (Il2CppMethodInitialized_0754595e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_0754595e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_68efe30(__this,4,4,4,mipmap,(MethodInfo *)0x0);
  return __this;
}


// CustomSkins.TextureDownloader$$.ctor
// il2cpp: void CustomSkins_TextureDownloader___ctor (CustomSkins_TextureDownloader_o* __this, const MethodInfo* method);
// 0x59665e0

void CustomSkins_TextureDownloader___ctor(CustomSkins_TextureDownloader_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.TextureDownloader$$.cctor
// il2cpp: void CustomSkins_TextureDownloader___cctor (const MethodInfo* method);
// 0x59665f0

void CustomSkins_TextureDownloader___cctor(MethodInfo *method)

{
  CustomSkins_TextureDownloader_StaticFields *pCVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_0754595f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    il2cpp_codegen_initialize_runtime_metadata(&"i.reddit.it/");
    il2cpp_codegen_initialize_runtime_metadata(&"photobucket.com/");
    il2cpp_codegen_initialize_runtime_metadata(&"postimg./");
    il2cpp_codegen_initialize_runtime_metadata(&".jpg");
    il2cpp_codegen_initialize_runtime_metadata(&"gyazo.com/");
    il2cpp_codegen_initialize_runtime_metadata(&"i.ibb.co/");
    il2cpp_codegen_initialize_runtime_metadata(&"http://");
    il2cpp_codegen_initialize_runtime_metadata(&"image.ibb.co/");
    il2cpp_codegen_initialize_runtime_metadata(&"s27.postimg.io/");
    il2cpp_codegen_initialize_runtime_metadata(&"deviantart.com/");
    il2cpp_codegen_initialize_runtime_metadata(&".jpeg");
    il2cpp_codegen_initialize_runtime_metadata(&"imgse.com/");
    il2cpp_codegen_initialize_runtime_metadata(&"tiebapic.baidu.com/");
    il2cpp_codegen_initialize_runtime_metadata(&"www.");
    il2cpp_codegen_initialize_runtime_metadata(&"i.postimg.cc/");
    il2cpp_codegen_initialize_runtime_metadata(&"s25.postimg.gg/");
    il2cpp_codegen_initialize_runtime_metadata(&".png");
    il2cpp_codegen_initialize_runtime_metadata(&"https://");
    il2cpp_codegen_initialize_runtime_metadata(&"imgur.com/");
    il2cpp_codegen_initialize_runtime_metadata(&"cdn.discordapp.com/attachments/");
    il2cpp_codegen_initialize_runtime_metadata(&"puu.sh/");
    il2cpp_codegen_initialize_runtime_metadata(&"images-ext-2.discordapp.net/external/");
    il2cpp_codegen_initialize_runtime_metadata(&"media.discordapp.net/attachments/");
    il2cpp_codegen_initialize_runtime_metadata(&"s1.ax1x.com/");
    il2cpp_codegen_initialize_runtime_metadata(&"aotcorehome.files.wordpress.com/");
    il2cpp_codegen_initialize_runtime_metadata(&"1.bp.blogspot.com/");
    il2cpp_codegen_initialize_runtime_metadata(&"i.imgur.com/");
    Il2CppMethodInitialized_0754595f = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0x17);
  if (pSVar2 == (System_String_array *)0x0) goto label_05966c31;
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "i.imgur.com/";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "imgur.com/";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "image.ibb.co/";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        if ((pSVar2->max_length & 0xfffffffc) != 0) {
          pSVar2->m_Items[3] = "i.ibb.co/";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
          if (4 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[4] = "i.reddit.it/";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4);
            if (5 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[5] = "cdn.discordapp.com/attachments/";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5);
              if (6 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[6] = "media.discordapp.net/attachments/";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6);
                if ((pSVar2->max_length & 0xfffffff8) != 0) {
                  pSVar2->m_Items[7] = "images-ext-2.discordapp.net/external/";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7);
                  if (8 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[8] = "i.reddit.it/";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 8);
                    if (9 < (uint)pSVar2->max_length) {
                      pSVar2->m_Items[9] = "gyazo.com/";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 9);
                      if (10 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[10] = "puu.sh/";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 10);
                        if (0xb < (uint)pSVar2->max_length) {
                          pSVar2->m_Items[0xb] = "i.postimg.cc/";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0xb);
                          if (0xc < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[0xc] = "postimg./";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0xc);
                            if (0xd < (uint)pSVar2->max_length) {
                              pSVar2->m_Items[0xd] = "deviantart.com/";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0xd);
                              if (0xe < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[0xe] = "photobucket.com/";
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0xe);
                                if ((pSVar2->max_length & 0xfffffff0) != 0) {
                                  pSVar2->m_Items[0xf] = "aotcorehome.files.wordpress.com/";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0xf);
                                  if (0x10 < (uint)pSVar2->max_length) {
                                    pSVar2->m_Items[0x10] = "s1.ax1x.com/";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x10);
                                    if (0x11 < (uint)pSVar2->max_length) {
                                      pSVar2->m_Items[0x11] = "s27.postimg.io/";
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x11);
                                      if (0x12 < (uint)pSVar2->max_length) {
                                        pSVar2->m_Items[0x12] = "1.bp.blogspot.com/";
                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x12);
                                        if (0x13 < (uint)pSVar2->max_length) {
                                          pSVar2->m_Items[0x13] = "tiebapic.baidu.com/";
                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x13);
                                          if (0x14 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[0x14] = "s25.postimg.gg/";
                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x14);
                                            if (0x15 < (uint)pSVar2->max_length) {
                                              pSVar2->m_Items[0x15] = "aotcorehome.files.wordpress.com/";
                                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x15);
                                              if (0x16 < (uint)pSVar2->max_length) {
                                                pSVar2->m_Items[0x16] = "imgse.com/";
                                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x16);
                                                TypeInfo_CustomSkins_TextureDownloader->static_fields->
                                                ValidHosts = pSVar2;
                                                Il2CppCodeGenWriteBarrier
                                                          (&TypeInfo_CustomSkins_TextureDownloader->
                                                            static_fields->ValidHosts);
                                                pSVar2 = (System_String_array *)
                                                         SZArrayNew(TypeInfo_string_array,3);
                                                if (pSVar2 == (System_String_array *)0x0) {
label_05966c31:
                                                  ThrowNullReferenceException();
                                                }
                                                if ((int)pSVar2->max_length != 0) {
                                                  pSVar2->m_Items[0] = ".jpg";
                                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                                  if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                                    pSVar2->m_Items[1] = ".png";
                                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                                    if (2 < (uint)pSVar2->max_length) {
                                                      pSVar2->m_Items[2] = ".jpeg";
                                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
                                                      pCVar1 = TypeInfo_CustomSkins_TextureDownloader->
                                                               static_fields;
                                                      pCVar1->ValidFileEndings = pSVar2;
                                                      Il2CppCodeGenWriteBarrier(&pCVar1->ValidFileEndings);
                                                      pSVar2 = (System_String_array *)
                                                               SZArrayNew(TypeInfo_string_array,3);
                                                      if (pSVar2 == (System_String_array *)0x0)
                                                      goto label_05966c31;
                                                      if ((int)pSVar2->max_length != 0) {
                                                        pSVar2->m_Items[0] = "https://";
                                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                                        if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                                          pSVar2->m_Items[1] = "http://";
                                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                                          if (2 < (uint)pSVar2->max_length) {
                                                            pSVar2->m_Items[2] = "www.";
                                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
                                                            pCVar1 = TypeInfo_CustomSkins_TextureDownloader->
                                                                     static_fields;
                                                            pCVar1->URLPrefixes = pSVar2;
                                                            Il2CppCodeGenWriteBarrier(&pCVar1->URLPrefixes);
                                                            TypeInfo_CustomSkins_TextureDownloader->
                                                            static_fields->CurrentConcurrentDownloads = 0;
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
  ThrowIndexOutOfRangeException();
}


