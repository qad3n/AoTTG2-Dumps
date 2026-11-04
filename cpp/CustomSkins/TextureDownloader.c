// Type: CustomSkins.TextureDownloader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomSkins/TextureDownloader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/TextureDownloader.cs
// --------------------------------

// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$.ctor
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__10___ctor (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomSkins_TextureDownloader__DownloadTexture_d__10___ctor(CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__10__System_IDisposable_Dispose (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x181e98220
// eh: try 0x181e98338..0x181e98370 -> pad 0x180356320 cleanup
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e982a8: lea rcx, [rsp + 0x38]
// asm:   0x181e982ad: call 0x181e7c0d0  ; il2cpp_runtime_helper_181e7c0d0()
// asm:   0x181e982b2: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e982b7: test rcx, rcx
// asm:   0x181e982ba: jne 0x181e9832c
// asm:   0x181e982bc: mov qword ptr [rsp + 0x30], 0
// asm:   0x181e982c5: lea rax, [rsp + 0x50]
// asm:   0x181e982ca: mov qword ptr [rsp + 0x38], rax
// asm:   0x181e982cf: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x181e982d4: cmp byte ptr [rip + 0x24accf6], 0
// asm:   0x181e982db: jne 0x181e982f0
// asm:   0x181e982dd: lea rcx, [rip + 0x220101c]  ; TypeInfo_System_IDisposable
// asm:   0x181e982e4: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x181e982e9: mov byte ptr [rip + 0x24acce1], 1
// asm:   0x181e982f0: mov dword ptr [rbx + 0x10], 0xffffffff
// asm:   0x181e982f7: cmp qword ptr [rbx + 0x40], 0
// asm:   0x181e982fc: je 0x181e98310
// asm:   0x181e982fe: xor ecx, ecx
// asm:   0x181e98300: mov r8, qword ptr [rbx + 0x40]
// asm:   0x181e98304: mov rdx, qword ptr [rip + 0x2200ff5]  ; TypeInfo_System_IDisposable
// asm:   0x181e9830b: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e98310: jmp 0x181e98326
// asm:   0x181e98312: lea rcx, [rsp + 0x38]
// asm:   0x181e98317: call 0x181e7c1a0  ; il2cpp_runtime_helper_181e7c1a0()
// asm:   0x181e9831c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e98321: test rcx, rcx
// asm:   0x181e98324: jne 0x181e98332
// asm:   0x181e9832c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e98332: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void CustomSkins_TextureDownloader__DownloadTexture_d__10__System_IDisposable_Dispose
               (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,MethodInfo *method)

{
  switch((__this->fields).__1__state) {
  case -4:
  case 7:
  case 8:
  case 9:
    if (Il2CppMethodInitialized_184344fd1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184344fd1 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._uwr_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._uwr_5__3);
    }
    break;
  case -3:
  case 3:
  case 4:
  case 5:
  case 6:
    if (Il2CppMethodInitialized_184344fd0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184344fd0 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._uwr_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._uwr_5__3);
    }
  }
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$MoveNext
// il2cpp: bool CustomSkins_TextureDownloader__DownloadTexture_d__10__MoveNext (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x181e97a10
// eh: try 0x181e97a5d..0x181e981a2 -> pad 0x183315930 (+12 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181e981b8..0x181e981e0 -> pad 0x180356490 cleanup
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e98165: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x181e9816a: test rbx, rbx
// asm:   0x181e9816d: jne 0x181e981a2
// asm:   0x181e9816f: movzx ebx, byte ptr [rsp + 0x60]
// asm:   0x181e981a2: lea rcx, [rsp + 0x30]
// asm:   0x181e981a7: call 0x181e7c180  ; il2cpp_runtime_helper_181e7c180()
// asm:   0x181e981ac: mov rcx, rbx
// asm:   0x181e981af: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool CustomSkins_TextureDownloader__DownloadTexture_d__10__MoveNext
               (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Networking_UnityWebRequest_o *pUVar4;
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *pUVar5;
  uint64_t uVar6;
  UnityEngine_Texture2D_o *pUVar7;
  
  if (Il2CppMethodInitialized_184344fcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344fcf = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    bVar2 = (__this->fields).mipmap;
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    pUVar7 = CustomSkins_TextureDownloader__CreateBlankTexture(bVar2,(MethodInfo *)0x0);
    (__this->fields)._blankTexture_5__2 = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._blankTexture_5__2,pUVar7);
    pUVar7 = (__this->fields)._blankTexture_5__2;
    (__this->fields).__2__current = (Il2CppObject *)pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar7);
    (__this->fields).__1__state = 1;
    bVar2 = true;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pSVar1 = (__this->fields).url;
    bVar2 = (__this->fields).allowLocalFile;
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    bVar2 = CustomSkins_TextureDownloader__ValidTextureURL(pSVar1,bVar2,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    goto label_181e97b4c;
  case 2:
    (__this->fields).__1__state = -1;
label_181e97b4c:
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    if (Il2CppMethodInitialized_184344fc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
      Il2CppMethodInitialized_184344fc8 = '\x01';
    }
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    if (TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads < 1) {
      if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
      }
      if (Il2CppMethodInitialized_184344fc9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
        Il2CppMethodInitialized_184344fc9 = '\x01';
      }
      if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
      }
      TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads =
           TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads + 1;
      iVar3 = TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar3 = System_Math__Min_1b2c2d0(iVar3,1,(MethodInfo *)0x0);
      TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = iVar3;
      pSVar1 = (__this->fields).url;
      if ((__this->fields).mipmap == false) {
        pUVar4 = UnityEngine_Networking_UnityWebRequest__Get(pSVar1,(MethodInfo *)0x0);
        (__this->fields)._uwr_5__3 = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._uwr_5__3,pUVar4);
        (__this->fields).__1__state = -4;
        pUVar4 = (__this->fields)._uwr_5__3;
        if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar5 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar4,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar5);
        (__this->fields).__1__state = 7;
        bVar2 = true;
      }
      else {
        pUVar4 = UnityEngine_Networking_UnityWebRequestTexture__GetTexture(pSVar1,(MethodInfo *)0x0);
        (__this->fields)._uwr_5__3 = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._uwr_5__3,pUVar4);
        (__this->fields).__1__state = -3;
        pUVar4 = (__this->fields)._uwr_5__3;
        if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar5 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(pUVar4,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar5);
        (__this->fields).__1__state = 3;
        bVar2 = true;
      }
    }
    else {
      pUVar7 = (__this->fields)._blankTexture_5__2;
      (__this->fields).__2__current = (Il2CppObject *)pUVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar7);
      (__this->fields).__1__state = 2;
      bVar2 = true;
    }
    break;
  case 3:
    (__this->fields).__1__state = -3;
    pUVar4 = (__this->fields)._uwr_5__3;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
    if (iVar3 == 1) {
      pUVar4 = (__this->fields)._uwr_5__3;
      if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar6 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes(pUVar4,(MethodInfo *)0x0);
      if (uVar6 <= (ulonglong)(longlong)(__this->fields).maxSize) {
        if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
        }
        CustomSkins_TextureDownloader__OnStopTextureDownload((MethodInfo *)0x0);
        pUVar7 = UnityEngine_Networking_DownloadHandlerTexture__GetContent
                           ((__this->fields)._uwr_5__3,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar2) {
          pUVar7 = (__this->fields)._blankTexture_5__2;
          (__this->fields).__2__current = (Il2CppObject *)pUVar7;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar7);
          (__this->fields).__1__state = 6;
          return true;
        }
        (__this->fields).__2__current = (Il2CppObject *)pUVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar7);
        (__this->fields).__1__state = 5;
        return true;
      }
    }
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    CustomSkins_TextureDownloader__OnStopTextureDownload((MethodInfo *)0x0);
    pUVar7 = (__this->fields)._blankTexture_5__2;
    (__this->fields).__2__current = (Il2CppObject *)pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar7);
    (__this->fields).__1__state = 4;
    bVar2 = true;
    break;
  case 4:
    (__this->fields).__1__state = -3;
    bVar2 = false;
    if (Il2CppMethodInitialized_184344fd0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184344fd0 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._uwr_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._uwr_5__3);
    }
    break;
  case 5:
  case 6:
    (__this->fields).__1__state = -3;
    if (Il2CppMethodInitialized_184344fd0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184344fd0 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._uwr_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._uwr_5__3);
    }
    (__this->fields)._uwr_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._uwr_5__3,(void *)0x0);
    goto label_181e98155;
  case 7:
    (__this->fields).__1__state = -4;
    pUVar4 = (__this->fields)._uwr_5__3;
    if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result(pUVar4,(MethodInfo *)0x0);
    if (iVar3 == 1) {
      pUVar4 = (__this->fields)._uwr_5__3;
      if (pUVar4 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
        ThrowNullReferenceException();
      }
      uVar6 = UnityEngine_Networking_UnityWebRequest__get_downloadedBytes(pUVar4,(MethodInfo *)0x0);
      if (uVar6 <= (ulonglong)(longlong)(__this->fields).maxSize) {
        if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
        }
        CustomSkins_TextureDownloader__OnStopTextureDownload((MethodInfo *)0x0);
        pUVar7 = CustomSkins_TextureDownloader__DecodeTexture
                           ((__this->fields)._uwr_5__3,(__this->fields).mipmap,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar7);
        (__this->fields).__1__state = 9;
        return true;
      }
    }
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    CustomSkins_TextureDownloader__OnStopTextureDownload((MethodInfo *)0x0);
    pUVar7 = (__this->fields)._blankTexture_5__2;
    (__this->fields).__2__current = (Il2CppObject *)pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar7);
    (__this->fields).__1__state = 8;
    bVar2 = true;
    break;
  case 8:
    (__this->fields).__1__state = -4;
    bVar2 = false;
    if (Il2CppMethodInitialized_184344fd1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184344fd1 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._uwr_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._uwr_5__3);
    }
    break;
  case 9:
    (__this->fields).__1__state = -4;
    if (Il2CppMethodInitialized_184344fd1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184344fd1 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields)._uwr_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._uwr_5__3);
    }
    (__this->fields)._uwr_5__3 = (UnityEngine_Networking_UnityWebRequest_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._uwr_5__3,(void *)0x0);
label_181e98155:
    bVar2 = false;
    break;
  default:
    bVar2 = false;
  }
  return bVar2;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$<>m__Finally1
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__10____m__Finally1 (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x181e98370

void CustomSkins_TextureDownloader__DownloadTexture_d__10____m__Finally1
               (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344fd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184344fd0 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields)._uwr_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._uwr_5__3);
    return;
  }
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$<>m__Finally2
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__10____m__Finally2 (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x181e983c0

void CustomSkins_TextureDownloader__DownloadTexture_d__10____m__Finally2
               (CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344fd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184344fd1 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields)._uwr_5__3 != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields)._uwr_5__3);
    return;
  }
  return;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_TextureDownloader__DownloadTexture_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_TextureDownloader__DownloadTexture_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TextureDownloader.<DownloadTexture>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_TextureDownloader__DownloadTexture_d__10__System_Collections_IEnumerator_Reset (CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, const MethodInfo* method);
// 0x181e981e0

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
// 0x180573e90

Il2CppObject*
CustomSkins_TextureDownloader__DownloadTexture_d__10__System_Collections_IEnumerator_get_Current(CustomSkins_TextureDownloader__DownloadTexture_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TextureDownloader$$ResetConcurrentDownloads
// il2cpp: void CustomSkins_TextureDownloader__ResetConcurrentDownloads (const MethodInfo* method);
// 0x181e95170

void CustomSkins_TextureDownloader__ResetConcurrentDownloads(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344fc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344fc2 = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = 0;
  return;
}


// CustomSkins.TextureDownloader$$ValidTextureURL
// il2cpp: bool CustomSkins_TextureDownloader__ValidTextureURL (System_String_o* url, bool allowLocalFile, const MethodInfo* method);
// 0x181e951d0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9541d: xor edx, edx
// asm:   0x181e9541f: mov rcx, rdi
// asm:   0x181e95422: call 0x181e948c0  ; CustomSkins_TextureDownloader__CheckValidLocalFileURL()
// asm:   0x181e95427: jmp 0x181e953f3

bool CustomSkins_TextureDownloader__ValidTextureURL
               (System_String_o *url,bool allowLocalFile,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *value;
  bool bVar2;
  System_String_o *a;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344fc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    il2cpp_codegen_initialize_runtime_metadata(&"file:");
    Il2CppMethodInitialized_184344fc3 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(url,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  if (url == (System_String_o *)0x0) goto label_181e95440;
  a = System_String__ToLowerInvariant(url,(MethodInfo *)0x0);
  if ((TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
  }
  bVar2 = System_String__op_Equality
                    (a,TypeInfo_CustomSkins_BaseCustomSkinLoader->static_fields->TransparentURL,
                     (MethodInfo *)0x0);
  if (bVar2) {
label_181e95429:
    bVar2 = true;
  }
  else {
    if (a == (System_String_o *)0x0) goto label_181e95440;
    bVar2 = System_String__StartsWith(a,"file:",(MethodInfo *)0x0);
    if (bVar2) {
      if (allowLocalFile) {
        if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
        }
        bVar2 = CustomSkins_TextureDownloader__CheckValidLocalFileURL(a,(MethodInfo *)0x0);
        return bVar2;
      }
    }
    else {
      if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
      }
      bVar2 = CustomSkins_TextureDownloader__CheckFileEnding(a,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
        }
        if (Il2CppMethodInitialized_184344fc6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
          Il2CppMethodInitialized_184344fc6 = '\x01';
        }
        if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
        }
        pSVar1 = TypeInfo_CustomSkins_TextureDownloader->static_fields->URLPrefixes;
        if (pSVar1 == (System_String_array *)0x0) {
label_181e95440:
          ThrowNullReferenceException();
        }
        for (uVar3 = 0; (int)uVar3 < (int)pSVar1->max_length; uVar3 = uVar3 + 1) {
          if ((uint)pSVar1->max_length <= uVar3) goto label_181e9543a;
          if (a == (System_String_o *)0x0) goto label_181e95440;
          value = pSVar1->m_Items[(int)uVar3];
          bVar2 = System_String__StartsWith(a,value,(MethodInfo *)0x0);
          if (bVar2) {
            if (value == (System_String_o *)0x0) goto label_181e95440;
            a = System_String__Remove(a,0,(value->fields)._stringLength,(MethodInfo *)0x0);
          }
        }
        if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
        }
        pSVar1 = TypeInfo_CustomSkins_TextureDownloader->static_fields->ValidHosts;
        if (pSVar1 == (System_String_array *)0x0) goto label_181e95440;
        for (uVar3 = 0; (int)uVar3 < (int)pSVar1->max_length; uVar3 = uVar3 + 1) {
          if ((uint)pSVar1->max_length <= uVar3) {
label_181e9543a:
            ThrowIndexOutOfRangeException();
          }
          if (a == (System_String_o *)0x0) goto label_181e95440;
          bVar2 = System_String__StartsWith(a,pSVar1->m_Items[(int)uVar3],(MethodInfo *)0x0);
          if (bVar2) goto label_181e95429;
        }
      }
    }
    bVar2 = false;
  }
  return bVar2;
}


// CustomSkins.TextureDownloader$$CheckValidLocalFileURL
// il2cpp: bool CustomSkins_TextureDownloader__CheckValidLocalFileURL (System_String_o* url, const MethodInfo* method);
// 0x181e948c0
// eh: try 0x181e94adf..0x181e94d1c -> pad 0x183331bd0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e94ce3: xor bl, bl
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

bool CustomSkins_TextureDownloader__CheckValidLocalFileURL(System_String_o *url,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  uint16_t uVar3;
  System_String_o *pSVar4;
  uint uVar5;
  System_Uri_o *local_res8;
  
  if (Il2CppMethodInitialized_184344fc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"file:///");
    Il2CppMethodInitialized_184344fc4 = '\x01';
  }
  local_res8 = (System_Uri_o *)0x0;
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  if (Il2CppMethodInitialized_184344fc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344fc5 = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  pSVar1 = TypeInfo_CustomSkins_TextureDownloader->static_fields->ValidFileEndings;
  if (pSVar1 != (System_String_array *)0x0) {
    uVar5 = 0;
    while( true ) {
      if ((int)pSVar1->max_length <= (int)uVar5) {
        return false;
      }
      if ((uint)pSVar1->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      if (url == (System_String_o *)0x0) goto label_181e94d0a;
      bVar2 = System_String__EndsWith(url,pSVar1->m_Items[(int)uVar5],(MethodInfo *)0x0);
      if (bVar2) break;
      uVar5 = uVar5 + 1;
    }
    if ((url->fields)._stringLength < 0xb) {
      return false;
    }
    bVar2 = System_String__StartsWith(url,"file:///",(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    uVar3 = System_String__get_Chars(url,8,(MethodInfo *)0x0);
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar2 = System_Char__IsLetter(uVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    uVar3 = System_String__get_Chars(url,9,(MethodInfo *)0x0);
    if (uVar3 != 0x3a) {
      return false;
    }
    uVar3 = System_String__get_Chars(url,10,(MethodInfo *)0x0);
    if (uVar3 != 0x2f) {
      return false;
    }
    if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
    }
    bVar2 = System_Uri__TryCreate(url,1,&local_res8,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    if (local_res8 != (System_Uri_o *)0x0) {
      bVar2 = System_Uri__get_IsFile(local_res8,(MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
      if (local_res8 != (System_Uri_o *)0x0) {
        bVar2 = System_Uri__get_IsUnc(local_res8,(MethodInfo *)0x0);
        if (bVar2) {
          return false;
        }
        if (local_res8 != (System_Uri_o *)0x0) {
          pSVar4 = System_Uri__get_Host(local_res8,(MethodInfo *)0x0);
          bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
          if (!bVar2) {
            return false;
          }
          if (local_res8 != (System_Uri_o *)0x0) {
            pSVar4 = System_Uri__get_LocalPath(local_res8,(MethodInfo *)0x0);
            if (pSVar4 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (2 < (pSVar4->fields)._stringLength) {
              uVar3 = System_String__get_Chars(pSVar4,0,(MethodInfo *)0x0);
              if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_184354e48);
              }
              bVar2 = System_Char__IsLetter(uVar3,(MethodInfo *)0x0);
              if ((bVar2) && (uVar3 = System_String__get_Chars(pSVar4,1,(MethodInfo *)0x0), uVar3 == 0x3a)) {
                uVar3 = System_String__get_Chars(pSVar4,2,(MethodInfo *)0x0);
                if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
                }
                if (uVar3 != TypeInfo_System_IO_Path->static_fields->DirectorySeparatorChar) {
                  uVar3 = System_String__get_Chars(pSVar4,2,(MethodInfo *)0x0);
                  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
                  }
                  if (uVar3 != TypeInfo_System_IO_Path->static_fields->AltDirectorySeparatorChar) {
                    return false;
                  }
                }
                if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
                }
                pSVar4 = System_IO_Path__GetFullPath(pSVar4,(MethodInfo *)0x0);
                pSVar4 = System_IO_Path__GetPathRoot(pSVar4,(MethodInfo *)0x0);
                if ((pSVar4 != (System_String_o *)0x0) && ((pSVar4->fields)._stringLength == 3)) {
                  uVar3 = System_String__get_Chars(pSVar4,0,(MethodInfo *)0x0);
                  if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(g_data_184354e48);
                  }
                  bVar2 = System_Char__IsLetter(uVar3,(MethodInfo *)0x0);
                  if ((bVar2) && (uVar3 = System_String__get_Chars(pSVar4,1,(MethodInfo *)0x0), uVar3 == 0x3a)
                     ) {
                    uVar3 = System_String__get_Chars(pSVar4,2,(MethodInfo *)0x0);
                    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
                    }
                    if (uVar3 != TypeInfo_System_IO_Path->static_fields->DirectorySeparatorChar) {
                      uVar3 = System_String__get_Chars(pSVar4,2,(MethodInfo *)0x0);
                      if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
                      }
                      return uVar3 == TypeInfo_System_IO_Path->static_fields->AltDirectorySeparatorChar;
                    }
                    return true;
                  }
                }
                return false;
              }
            }
            return false;
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
label_181e94d0a:
  ThrowNullReferenceException();
}


// CustomSkins.TextureDownloader$$CheckFileEnding
// il2cpp: bool CustomSkins_TextureDownloader__CheckFileEnding (System_String_o* url, const MethodInfo* method);
// 0x181e946b0

bool CustomSkins_TextureDownloader__CheckFileEnding(System_String_o *url,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344fc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344fc5 = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  pSVar1 = TypeInfo_CustomSkins_TextureDownloader->static_fields->ValidFileEndings;
  if (pSVar1 != (System_String_array *)0x0) {
    uVar3 = 0;
    while( true ) {
      if ((int)pSVar1->max_length <= (int)uVar3) {
        return false;
      }
      if ((uint)pSVar1->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if (url == (System_String_o *)0x0) break;
      bVar2 = System_String__EndsWith(url,pSVar1->m_Items[(int)uVar3],(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
      uVar3 = uVar3 + 1;
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.TextureDownloader$$CheckValidHost
// il2cpp: bool CustomSkins_TextureDownloader__CheckValidHost (System_String_o* url, const MethodInfo* method);
// 0x181e94770

bool CustomSkins_TextureDownloader__CheckValidHost(System_String_o *url,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *value;
  bool bVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344fc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344fc6 = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  pSVar1 = TypeInfo_CustomSkins_TextureDownloader->static_fields->URLPrefixes;
  if (pSVar1 != (System_String_array *)0x0) {
    for (uVar3 = 0; (int)uVar3 < (int)pSVar1->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar1->max_length <= uVar3) goto label_181e948b3;
      if (url == (System_String_o *)0x0) goto label_181e948ad;
      value = pSVar1->m_Items[(int)uVar3];
      bVar2 = System_String__StartsWith(url,value,(MethodInfo *)0x0);
      if (bVar2) {
        if (value == (System_String_o *)0x0) goto label_181e948ad;
        url = System_String__Remove(url,0,(value->fields)._stringLength,(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
    }
    pSVar1 = TypeInfo_CustomSkins_TextureDownloader->static_fields->ValidHosts;
    if (pSVar1 != (System_String_array *)0x0) {
      uVar3 = 0;
      do {
        if ((int)pSVar1->max_length <= (int)uVar3) {
          return false;
        }
        if ((uint)pSVar1->max_length <= uVar3) {
label_181e948b3:
          ThrowIndexOutOfRangeException();
        }
        if (url == (System_String_o *)0x0) break;
        bVar2 = System_String__StartsWith(url,pSVar1->m_Items[(int)uVar3],(MethodInfo *)0x0);
        if (bVar2) {
          return true;
        }
        uVar3 = uVar3 + 1;
      } while( true );
    }
  }
label_181e948ad:
  ThrowNullReferenceException();
}


// CustomSkins.TextureDownloader$$DownloadTexture
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_TextureDownloader__DownloadTexture (UnityEngine_MonoBehaviour_o* obj, System_String_o* url, bool mipmap, int32_t maxSize, bool allowLocalFile, const MethodInfo* method);
// 0x181e94f00

System_Collections_IEnumerator_o *
CustomSkins_TextureDownloader__DownloadTexture
          (UnityEngine_MonoBehaviour_o *obj,System_String_o *url,bool mipmap,int32_t maxSize,
          bool allowLocalFile,MethodInfo *method)

{
  CustomSkins_TextureDownloader__DownloadTexture_d__10_o *__this;
  
  if (Il2CppMethodInitialized_184344fc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader_DownloadTexture_d__10);
    Il2CppMethodInitialized_184344fc7 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader_DownloadTexture_d__10);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).url = url;
  Il2CppCodeGenWriteBarrier(&(__this->fields).url,url);
  (__this->fields).allowLocalFile = allowLocalFile;
  (__this->fields).mipmap = mipmap;
  (__this->fields).maxSize = maxSize;
  return (System_Collections_IEnumerator_o *)__this;
}


// CustomSkins.TextureDownloader$$CanStartTextureDownload
// il2cpp: bool CustomSkins_TextureDownloader__CanStartTextureDownload (const MethodInfo* method);
// 0x181e94650

bool CustomSkins_TextureDownloader__CanStartTextureDownload(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344fc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344fc8 = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  return TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads < 1;
}


// CustomSkins.TextureDownloader$$OnStartTextureDownload
// il2cpp: void CustomSkins_TextureDownloader__OnStartTextureDownload (const MethodInfo* method);
// 0x181e95010

void CustomSkins_TextureDownloader__OnStartTextureDownload(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184344fc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344fc9 = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads =
       TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads + 1;
  iVar1 = TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Min_1b2c2d0(iVar1,1,(MethodInfo *)0x0);
  TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = iVar1;
  return;
}


// CustomSkins.TextureDownloader$$OnStopTextureDownload
// il2cpp: void CustomSkins_TextureDownloader__OnStopTextureDownload (const MethodInfo* method);
// 0x181e950c0

void CustomSkins_TextureDownloader__OnStopTextureDownload(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184344fca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344fca = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads =
       TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads + -1;
  iVar1 = TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Max_1b2c0d0(iVar1,0,(MethodInfo *)0x0);
  TypeInfo_CustomSkins_TextureDownloader->static_fields->CurrentConcurrentDownloads = iVar1;
  return;
}


// CustomSkins.TextureDownloader$$IsPowerOfTwo
// il2cpp: bool CustomSkins_TextureDownloader__IsPowerOfTwo (int32_t num, const MethodInfo* method);
// 0x181e94ff0

bool CustomSkins_TextureDownloader__IsPowerOfTwo(int32_t num,MethodInfo *method)

{
  if (num < 4) {
    return false;
  }
  return (num & num - 1U) == 0;
}


// CustomSkins.TextureDownloader$$GetClosestPowerOfTwo
// il2cpp: int32_t CustomSkins_TextureDownloader__GetClosestPowerOfTwo (int32_t num, const MethodInfo* method);
// 0x181e94f80

int32_t CustomSkins_TextureDownloader__GetClosestPowerOfTwo(int32_t num,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  
  if (Il2CppMethodInitialized_184344fcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_184344fcb = '\x01';
  }
  iVar2 = 4;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Min_1b2c2d0(num,0x7ff,(MethodInfo *)0x0);
  if (4 < iVar1) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < iVar1);
  }
  return iVar2;
}


// CustomSkins.TextureDownloader$$CreateBlankTexture
// il2cpp: UnityEngine_Texture2D_o* CustomSkins_TextureDownloader__CreateBlankTexture (bool mipmap, const MethodInfo* method);
// 0x181e94d30

UnityEngine_Texture2D_o * CustomSkins_TextureDownloader__CreateBlankTexture(bool mipmap,MethodInfo *method)

{
  UnityEngine_Texture2D_o *__this;
  
  if (Il2CppMethodInitialized_184344fcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_184344fcc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_2efc630(__this,4,4,4,mipmap,(MethodInfo *)0x0);
  return __this;
}


// CustomSkins.TextureDownloader$$DecodeTexture
// il2cpp: UnityEngine_Texture2D_o* CustomSkins_TextureDownloader__DecodeTexture (UnityEngine_Networking_UnityWebRequest_o* uwr, bool mipmap, const MethodInfo* method);
// 0x181e94da0
// eh: try 0x181e94e38..0x181e94ef4 -> pad 0x1833318f0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e94e6f: cmp byte ptr [rsp + 0x68], 0
// asm:   0x181e94e74: je 0x181e94ed8
// asm:   0x181e94e76: lea rcx, [rip + 0x21e9de3]  ; TypeInfo_CustomSkins_TextureDownloader
// asm:   0x181e94e7d: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181e94e82: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181e94e89: jne 0x181e94e93
// asm:   0x181e94e8b: mov rcx, rax
// asm:   0x181e94e8e: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181e94e93: xor edx, edx
// asm:   0x181e94e95: xor ecx, ecx
// asm:   0x181e94e97: call 0x181e94d30  ; CustomSkins_TextureDownloader__CreateBlankTexture()
// asm:   0x181e94e9c: mov rbx, rax
// asm:   0x181e94e9f: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181e94ea4: test rcx, rcx
// asm:   0x181e94ea7: je 0x181e94ef4
// asm:   0x181e94ea9: xor edx, edx
// asm:   0x181e94eab: call 0x181536bf0  ; UnityEngine_UIElements_PanelSettings__get_themeStyleSheet()
// asm:   0x181e94eb0: test rax, rax
// asm:   0x181e94eb3: je 0x181e94ef4
// asm:   0x181e94eb5: xor edx, edx
// asm:   0x181e94eb7: mov rcx, rax
// asm:   0x181e94eba: call 0x181a96900  ; System_Delegate__get_Method()
// asm:   0x181e94ebf: mov rdx, rax
// asm:   0x181e94ec2: xor r8d, r8d
// asm:   0x181e94ec5: mov rcx, rbx
// asm:   0x181e94ec8: call 0x182f83110  ; UnityEngine_ImageConversion__LoadImage()
// asm:   0x181e94ecd: mov rax, rbx
// asm:   0x181e94ed0: add rsp, 0x40
// asm:   0x181e94ed4: pop rdi
// asm:   0x181e94ed5: pop rsi
// asm:   0x181e94ed6: pop rbx
// asm:   0x181e94ed7: ret 
// asm:   0x181e94ed8: mov rbx, qword ptr [rsp + 0x78]
// asm:   0x181e94ef4: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833318f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833318f5: push rbx
// asm:   0x1833318f6: push rbp
// asm:   0x1833318f7: sub rsp, 0x38
// asm:   0x1833318fb: mov rbp, rdx
// asm:   0x1833318fe: mov rbx, qword ptr [rbp + 0x38]
// asm:   0x183331902: mov rdx, qword ptr [rbx]
// asm:   0x183331905: mov rdx, qword ptr [rdx]
// asm:   0x183331908: mov rcx, qword ptr [rip + 0x10234c1]
// asm:   0x18333190f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331914: test al, al
// asm:   0x183331916: je 0x183331924
// asm:   0x183331918: movabs rax, 0
// asm:   0x183331922: jmp 0x18333193c
// asm:   0x183331924: mov rax, qword ptr [rbx]
// asm:   0x183331927: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333192b: lea rdx, [rip + 0xcaa656]
// asm:   0x183331932: lea rcx, [rbp + 0x30]
// asm:   0x183331936: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333193c: add rsp, 0x38
// asm:   0x183331940: pop rbp
// asm:   0x183331941: pop rbx
// asm:   0x183331942: ret 

UnityEngine_Texture2D_o *
CustomSkins_TextureDownloader__DecodeTexture
          (UnityEngine_Networking_UnityWebRequest_o *uwr,bool mipmap,MethodInfo *method)

{
  UnityEngine_Texture2D_o *__this;
  UnityEngine_Networking_DownloadHandler_o *__this_00;
  System_Byte_array *data;
  
  if (Il2CppMethodInitialized_184344fcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TextureDownloader);
    Il2CppMethodInitialized_184344fcd = '\x01';
  }
  if ((TypeInfo_CustomSkins_TextureDownloader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_TextureDownloader);
  }
  if (Il2CppMethodInitialized_184344fcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_184344fcc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  UnityEngine_Texture2D___ctor_2efc630(__this,4,4,4,mipmap,(MethodInfo *)0x0);
  if (uwr != (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    __this_00 = (UnityEngine_Networking_DownloadHandler_o *)
                UnityEngine_Tilemaps_Tile__get_sprite
                          ((Unity_Collections_NativeArray_Enumerator_T__o *)uwr,(MethodInfo_1536BF0 *)0x0);
    if (__this_00 != (UnityEngine_Networking_DownloadHandler_o *)0x0) {
      data = UnityEngine_Networking_DownloadHandler__get_data(__this_00,(MethodInfo *)0x0);
      UnityEngine_ImageConversion__LoadImage_2f83110(__this,data,(MethodInfo *)0x0);
      return __this;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomSkins.TextureDownloader$$.ctor
// il2cpp: void CustomSkins_TextureDownloader___ctor (CustomSkins_TextureDownloader_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomSkins_TextureDownloader___ctor(CustomSkins_TextureDownloader_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.TextureDownloader$$.cctor
// il2cpp: void CustomSkins_TextureDownloader___cctor (const MethodInfo* method);
// 0x181e95450

void CustomSkins_TextureDownloader___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_184344fce == '\0') {
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
    Il2CppMethodInitialized_184344fce = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0x17);
  pSVar1 = "i.imgur.com/";
  if (pSVar2 == (System_String_array *)0x0) goto label_181e95a57;
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "i.imgur.com/";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
    pSVar1 = "imgur.com/";
    if (1 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[1] = "imgur.com/";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
      pSVar1 = "image.ibb.co/";
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "image.ibb.co/";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
        pSVar1 = "i.ibb.co/";
        if (3 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[3] = "i.ibb.co/";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
          pSVar1 = "i.reddit.it/";
          if (4 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[4] = "i.reddit.it/";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
            pSVar1 = "cdn.discordapp.com/attachments/";
            if (5 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[5] = "cdn.discordapp.com/attachments/";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
              pSVar1 = "media.discordapp.net/attachments/";
              if (6 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[6] = "media.discordapp.net/attachments/";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6,pSVar1);
                pSVar1 = "images-ext-2.discordapp.net/external/";
                if (7 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[7] = "images-ext-2.discordapp.net/external/";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7,pSVar1);
                  pSVar1 = "i.reddit.it/";
                  if (8 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[8] = "i.reddit.it/";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 8,pSVar1);
                    pSVar1 = "gyazo.com/";
                    if (9 < (uint)pSVar2->max_length) {
                      pSVar2->m_Items[9] = "gyazo.com/";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 9,pSVar1);
                      pSVar1 = "puu.sh/";
                      if (10 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[10] = "puu.sh/";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 10,pSVar1);
                        pSVar1 = "i.postimg.cc/";
                        if (0xb < (uint)pSVar2->max_length) {
                          pSVar2->m_Items[0xb] = "i.postimg.cc/";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0xb,pSVar1);
                          pSVar1 = "postimg./";
                          if (0xc < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[0xc] = "postimg./";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0xc,pSVar1);
                            pSVar1 = "deviantart.com/";
                            if (0xd < (uint)pSVar2->max_length) {
                              pSVar2->m_Items[0xd] = "deviantart.com/";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0xd,pSVar1);
                              pSVar1 = "photobucket.com/";
                              if (0xe < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[0xe] = "photobucket.com/";
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0xe,pSVar1);
                                pSVar1 = "aotcorehome.files.wordpress.com/";
                                if (0xf < (uint)pSVar2->max_length) {
                                  pSVar2->m_Items[0xf] = "aotcorehome.files.wordpress.com/";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0xf,pSVar1);
                                  pSVar1 = "s1.ax1x.com/";
                                  if (0x10 < (uint)pSVar2->max_length) {
                                    pSVar2->m_Items[0x10] = "s1.ax1x.com/";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x10,pSVar1);
                                    pSVar1 = "s27.postimg.io/";
                                    if (0x11 < (uint)pSVar2->max_length) {
                                      pSVar2->m_Items[0x11] = "s27.postimg.io/";
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x11,pSVar1);
                                      pSVar1 = "1.bp.blogspot.com/";
                                      if (0x12 < (uint)pSVar2->max_length) {
                                        pSVar2->m_Items[0x12] = "1.bp.blogspot.com/";
                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x12,pSVar1);
                                        pSVar1 = "tiebapic.baidu.com/";
                                        if (0x13 < (uint)pSVar2->max_length) {
                                          pSVar2->m_Items[0x13] = "tiebapic.baidu.com/";
                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x13,pSVar1);
                                          pSVar1 = "s25.postimg.gg/";
                                          if (0x14 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[0x14] = "s25.postimg.gg/";
                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x14,pSVar1);
                                            pSVar1 = "aotcorehome.files.wordpress.com/";
                                            if (0x15 < (uint)pSVar2->max_length) {
                                              pSVar2->m_Items[0x15] = "aotcorehome.files.wordpress.com/";
                                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x15,pSVar1);
                                              pSVar1 = "imgse.com/";
                                              if (0x16 < (uint)pSVar2->max_length) {
                                                pSVar2->m_Items[0x16] = "imgse.com/";
                                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 0x16,pSVar1);
                                                TypeInfo_CustomSkins_TextureDownloader->static_fields->
                                                ValidHosts = pSVar2;
                                                Il2CppCodeGenWriteBarrier
                                                          (&TypeInfo_CustomSkins_TextureDownloader->
                                                            static_fields->ValidHosts,pSVar2);
                                                pSVar2 = (System_String_array *)
                                                         SZArrayNew(TypeInfo_string_array,3);
                                                pSVar1 = ".jpg";
                                                if (pSVar2 == (System_String_array *)0x0) {
label_181e95a57:
                                                  ThrowNullReferenceException();
                                                }
                                                if ((int)pSVar2->max_length != 0) {
                                                  pSVar2->m_Items[0] = ".jpg";
                                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                  pSVar1 = ".png";
                                                  if (1 < (uint)pSVar2->max_length) {
                                                    pSVar2->m_Items[1] = ".png";
                                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                                    pSVar1 = ".jpeg";
                                                    if (2 < (uint)pSVar2->max_length) {
                                                      pSVar2->m_Items[2] = ".jpeg";
                                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
                                                      TypeInfo_CustomSkins_TextureDownloader->static_fields->
                                                      ValidFileEndings = pSVar2;
                                                      Il2CppCodeGenWriteBarrier
                                                                (&TypeInfo_CustomSkins_TextureDownloader->
                                                                  static_fields->ValidFileEndings,pSVar2);
                                                      pSVar2 = (System_String_array *)
                                                               SZArrayNew(TypeInfo_string_array,3);
                                                      pSVar1 = "https://";
                                                      if (pSVar2 == (System_String_array *)0x0)
                                                      goto label_181e95a57;
                                                      if ((int)pSVar2->max_length != 0) {
                                                        pSVar2->m_Items[0] = "https://";
                                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                        pSVar1 = "http://";
                                                        if (1 < (uint)pSVar2->max_length) {
                                                          pSVar2->m_Items[1] = "http://";
                                                          Il2CppCodeGenWriteBarrier
                                                                    (pSVar2->m_Items + 1,pSVar1);
                                                          pSVar1 = "www.";
                                                          if (2 < (uint)pSVar2->max_length) {
                                                            pSVar2->m_Items[2] = "www.";
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pSVar2->m_Items + 2,pSVar1);
                                                            TypeInfo_CustomSkins_TextureDownloader->
                                                            static_fields->URLPrefixes = pSVar2;
                                                            Il2CppCodeGenWriteBarrier
                                                                      (&TypeInfo_CustomSkins_TextureDownloader
                                                                        ->static_fields->URLPrefixes,pSVar2);
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


