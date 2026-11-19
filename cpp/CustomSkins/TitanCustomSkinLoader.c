// Type: CustomSkins.TitanCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomSkins/TitanCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/TitanCustomSkinLoader.cs
// --------------------------------

// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$.ctor
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5___ctor (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x59628e0

void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5___ctor
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_IDisposable_Dispose (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, const MethodInfo* method);
// 0x5962f00

void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_IDisposable_Dispose
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$MoveNext
// il2cpp: bool CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__MoveNext (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, const MethodInfo* method);
// 0x5962f10
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5963087: lea rax, [rip + 0x191d492]  ; TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11
// asm:   0x596308e: mov rdi, qword ptr [rax]
// asm:   0x5963091: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5963096: mov r13, rax
// asm:   0x5963099: mov rdi, rax
// asm:   0x596309c: xor esi, esi
// asm:   0x596309e: call 0x5606160  ; System_Object___ctor()
// asm:   0x59630a3: mov dword ptr [r13 + 0x10], 0
// asm:   0x59630ab: lea rdi, [r13 + 0x28]
// asm:   0x59630af: mov qword ptr [r13 + 0x28], r15
// asm:   0x59630b3: mov rsi, r15
// asm:   0x59630b6: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x59630bb: lea rdi, [r13 + 0x20]
// asm:   0x59630bf: mov qword ptr [r13 + 0x20], r12
// asm:   0x59630c3: mov rsi, r12
// asm:   0x59630c6: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x59630cb: mov rdi, r14
// asm:   0x59630ce: mov rsi, r13
// asm:   0x59630d1: xor edx, edx
// asm:   0x59630d3: call 0x6a1c390  ; UnityEngine_MonoBehaviour__StartCoroutine()
// asm:   0x59630d8: lea rdi, [rbp + 0x18]
// asm:   0x59630dc: mov qword ptr [rbp + 0x18], rax
// asm:   0x59630e0: mov rsi, rax
// asm:   0x59630e3: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x59630e8: mov dword ptr [rbp + 0x10], 1
// asm:   0x59630ef: mov al, 1
// asm:   0x59630f1: jmp 0x596303d

bool CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__MoveNext
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  CustomSkins_TitanCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar3;
  System_String_o *pSVar4;
  bool bVar5;
  System_String_array *pSVar6;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  CustomSkins_BaseCustomSkinPart__LoadSkin_d__11_o *__this_02;
  UnityEngine_Coroutine_o *pUVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    goto label_0596302a;
  }
  if (iVar2 != 0) {
    return false;
  }
  (__this->fields).__1__state = -1;
  pSVar3 = (__this->fields).data;
  if (pSVar3 != (System_Object_array *)0x0) {
    if ((int)pSVar3->max_length == 0) {
label_059630fb:
      ThrowIndexOutOfRangeException();
    }
    pSVar4 = (System_String_o *)pSVar3->m_Items[0];
    if (pSVar4 != (System_String_o *)0x0) {
      if (pSVar4->klass != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      uVar8 = 0;
      pSVar6 = System_String__Split(pSVar4,0x2c,0,(MethodInfo *)0x0);
      (__this->fields)._skinUrls_5__2 = pSVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._skinUrls_5__2);
      (__this->fields)._partId_5__3 = 0;
      do {
        if (3 < (int)uVar8) {
          return false;
        }
        pSVar6 = (__this->fields)._skinUrls_5__2;
        if (pSVar6 == (System_String_array *)0x0) break;
        uVar1 = (uint)pSVar6->max_length;
        if ((int)uVar8 < (int)uVar1) {
          if (uVar1 <= uVar8) goto label_059630fb;
          bVar5 = System_String__IsNullOrEmpty(pSVar6->m_Items[(int)uVar8],(MethodInfo *)0x0);
          if (!bVar5) {
            if (__this_00 == (CustomSkins_TitanCustomSkinLoader_o *)0x0) break;
            auVar9 = (undefined1  [16])
                     (*(__this_00->klass->vtable)._6_GetCustomSkinPart.methodPtr)
                               (__this_00,(__this->fields)._partId_5__3,
                                (__this_00->klass->vtable)._6_GetCustomSkinPart.method);
            __this_01 = auVar9._0_8_;
            if (__this_01 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
              pSVar6 = (__this->fields)._skinUrls_5__2;
              if (pSVar6 == (System_String_array *)0x0) break;
              uVar8 = (__this->fields)._partId_5__3;
              if ((uint)pSVar6->max_length <= uVar8) goto label_059630fb;
              bVar5 = CustomSkins_BaseCustomSkinPart__LoadCache
                                (__this_01,pSVar6->m_Items[(int)uVar8],auVar9._8_8_);
              if (!bVar5) {
                pSVar6 = (__this->fields)._skinUrls_5__2;
                if (pSVar6 == (System_String_array *)0x0) break;
                uVar8 = (__this->fields)._partId_5__3;
                if (uVar8 < (uint)pSVar6->max_length) {
                  pSVar4 = pSVar6->m_Items[(int)uVar8];
                  if (Il2CppMethodInitialized_07545932 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11);
                    Il2CppMethodInitialized_07545932 = '\x01';
                  }
                  __this_02 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart_LoadSkin_d__11
                                        );
                  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
                  (__this_02->fields).__1__state = 0;
                  (__this_02->fields).__4__this = __this_01;
                  Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
                  (__this_02->fields).url = pSVar4;
                  Il2CppCodeGenWriteBarrier(&(__this_02->fields).url);
                  pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                                     ((UnityEngine_MonoBehaviour_o *)__this_00,
                                      (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
                  (__this->fields).__2__current = (Il2CppObject *)pUVar7;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                  (__this->fields).__1__state = 1;
                  return true;
                }
                goto label_059630fb;
              }
            }
          }
        }
label_0596302a:
        uVar8 = (__this->fields)._partId_5__3 + 1;
        (__this->fields)._partId_5__3 = uVar8;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, const MethodInfo* method);
// 0x5963100

Il2CppObject *
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_Collections_IEnumerator_Reset (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, const MethodInfo* method);
// 0x5963110

void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_Collections_IEnumerator_Reset
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o *__this,MethodInfo *method)

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
                  MethodInfo_CustomSkins_TitanCustomSkinLoader_LoadSkinsFromRPC_d__5_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_Collections_IEnumerator_get_Current (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, const MethodInfo* method);
// 0x5963150

Il2CppObject *
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_Collections_IEnumerator_get_Current
          (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TitanCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_TitanCustomSkinLoader__get_RendererIdPrefix (CustomSkins_TitanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x5962690

System_String_o *
CustomSkins_TitanCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_TitanCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545929 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    Il2CppMethodInitialized_07545929 = '\x01';
  }
  return "titan";
}


// CustomSkins.TitanCustomSkinLoader$$get_AllowLocalFileTextures
// il2cpp: bool CustomSkins_TitanCustomSkinLoader__get_AllowLocalFileTextures (CustomSkins_TitanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x59626c0

bool CustomSkins_TitanCustomSkinLoader__get_AllowLocalFileTextures
               (CustomSkins_TitanCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  Characters_DummyTitan_o *x;
  Characters_BasicTitan_o *x_00;
  
  if (Il2CppMethodInitialized_0754592a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_DummyTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_0754592a = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._owner;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_0596284e;
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_DummyTitan);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar3 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
      return !bVar3;
    }
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x_00 = (Characters_BasicTitan_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._owner;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_0596284e;
    x_00 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x_00 == (Characters_BasicTitan_o *)0x0) {
label_0596284e:
      ThrowNullReferenceException();
    }
    bVar3 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)x_00,(MethodInfo *)0x0);
    if (bVar3) {
      bVar3 = (*(x_00->klass->vtable)._74_IsMine.methodPtr)(x_00,(x_00->klass->vtable)._74_IsMine.method);
      return bVar3;
    }
  }
  return false;
}


// CustomSkins.TitanCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_TitanCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x5962860

System_Collections_IEnumerator_o *
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_TitanCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_0754592b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomSkins_TitanCustomSkinLoader_LoadSkinsFromRPC_d__5);
    Il2CppMethodInitialized_0754592b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomSkins_TitanCustomSkinLoader_LoadSkinsFromRPC_d__5);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.TitanCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_TitanCustomSkinLoader__GetCustomSkinPart (CustomSkins_TitanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x5962900

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_TitanCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_TitanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Collections_Generic_List_Renderer__o *renderers;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Object_o *x;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  CustomSkins_TitanCustomSkinPart_o *__this_00;
  uint *method_00;
  System_String_o **ppSVar6;
  System_Collections_Generic_List_Renderer__o *__this_01;
  CustomSkins_BaseCustomSkinLoader_o *pCVar7;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_0754592c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TitanCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&"Eyes");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head");
    il2cpp_codegen_initialize_runtime_metadata(&"HairSocket");
    Il2CppMethodInitialized_0754592c = '\x01';
  }
  pUVar3 = (__this->fields)._owner;
  if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar2 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
     pUVar2 == (UnityEngine_Transform_o *)0x0)) {
label_05962d8d:
    ThrowNullReferenceException();
  }
  __this_00 = (CustomSkins_TitanCustomSkinPart_o *)0x0;
  pUVar2 = UnityEngine_Transform__Find(pUVar2,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head",(MethodInfo *)0x0);
  renderers = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  __this_01 = renderers;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)renderers,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  method_00 = &switchD_05962a03::switchdataD_010a57f4;
  switch(partId) {
  case 0:
    pCVar7 = (CustomSkins_BaseCustomSkinLoader_o *)(__this->fields)._owner;
    if (pCVar7 == (CustomSkins_BaseCustomSkinLoader_o *)0x0) goto label_05962d8d;
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pCVar7,(MethodInfo *)0x0);
    ppSVar6 = &"Body";
    pUVar3 = CustomSkins_TitanCustomSkinLoader__FindChild
                       ((CustomSkins_TitanCustomSkinLoader_o *)pCVar7,pUVar2,"Body",
                        (MethodInfo *)&"Body");
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists(pCVar7,renderers,pUVar3,(MethodInfo *)ppSVar6);
    iStack_2c = 0;
    break;
  case 1:
    pCVar7 = (CustomSkins_BaseCustomSkinLoader_o *)(__this->fields)._owner;
    if (pCVar7 == (CustomSkins_BaseCustomSkinLoader_o *)0x0) goto label_05962d8d;
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pCVar7,(MethodInfo *)0x0);
    ppSVar6 = &"Head";
    pUVar3 = CustomSkins_TitanCustomSkinLoader__FindChild
                       ((CustomSkins_TitanCustomSkinLoader_o *)pCVar7,pUVar2,"Head",
                        (MethodInfo *)&"Head");
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists(pCVar7,renderers,pUVar3,(MethodInfo *)ppSVar6);
    iStack_2c = 1;
    break;
  case 2:
    pUVar3 = CustomSkins_TitanCustomSkinLoader__FindChild
                       ((CustomSkins_TitanCustomSkinLoader_o *)__this_01,pUVar2,"Eyes",
                        (MethodInfo *)&switchD_05962a03::switchdataD_010a57f4);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,pUVar3,(MethodInfo *)method_00);
    iStack_2c = 2;
    pSVar4 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
    pSVar5 = System_Int32__ToString(&iStack_2c,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_52f0320(pSVar4,pSVar5,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_TitanCustomSkinPart);
    if (Il2CppMethodInitialized_0754592f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_HasValue);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_Value);
      Il2CppMethodInitialized_0754592f = '\x01';
    }
    (__this_00->fields)._defaultTextureScale.fields = (UnityEngine_Vector2_Fields)0x3f8000003f800000;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields)._loader = (CustomSkins_BaseCustomSkinLoader_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._loader);
    (__this_00->fields)._renderers = renderers;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._renderers);
    (__this_00->fields)._rendererId = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._rendererId);
    (__this_00->fields)._maxSize = 500000;
    goto label_05962c19;
  case 3:
    x = (UnityEngine_Object_o *)
        CustomSkins_TitanCustomSkinLoader__FindChild
                  ((CustomSkins_TitanCustomSkinLoader_o *)__this_01,pUVar2,"HairSocket",
                   (MethodInfo *)&switchD_05962a03::switchdataD_010a57f4);
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this_01,renderers,(UnityEngine_GameObject_o *)x,
               (MethodInfo *)method_00);
    iStack_2c = 3;
    pSVar4 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
    pSVar5 = System_Int32__ToString(&iStack_2c,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_52f0320(pSVar4,pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar2 = (UnityEngine_Transform_o *)0x0;
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_05962d8d;
      pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_TitanCustomSkinPart);
    if (Il2CppMethodInitialized_0754592f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_HasValue);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_Value);
      Il2CppMethodInitialized_0754592f = '\x01';
    }
    (__this_00->fields)._defaultTextureScale.fields = (UnityEngine_Vector2_Fields)0x3f8000003f800000;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields)._loader = (CustomSkins_BaseCustomSkinLoader_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._loader);
    (__this_00->fields)._renderers = renderers;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._renderers);
    (__this_00->fields)._rendererId = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._rendererId);
    (__this_00->fields)._maxSize = 500000;
    (__this_00->fields)._textureScale.fields = (__this_00->fields)._defaultTextureScale.fields;
    (__this_00->fields)._useTransparentMaterial = false;
    (__this_00->fields)._rendererRoot = pUVar2;
    goto label_05962d78;
  default:
    goto switchD_05962a03_default;
  }
  pSVar4 = (*(__this->klass->vtable)._4_get_RendererIdPrefix.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_RendererIdPrefix.method);
  pSVar5 = System_Int32__ToString(&iStack_2c,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_52f0320(pSVar4,pSVar5,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_TitanCustomSkinPart);
  if (Il2CppMethodInitialized_0754592f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_Value);
    Il2CppMethodInitialized_0754592f = '\x01';
  }
  (__this_00->fields)._defaultTextureScale.fields = (UnityEngine_Vector2_Fields)0x3f8000003f800000;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._loader = (CustomSkins_BaseCustomSkinLoader_o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._loader);
  (__this_00->fields)._renderers = renderers;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._renderers);
  (__this_00->fields)._rendererId = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._rendererId);
  (__this_00->fields)._maxSize = 1000000;
label_05962c19:
  (__this_00->fields)._textureScale.fields = (__this_00->fields)._defaultTextureScale.fields;
  (__this_00->fields)._useTransparentMaterial = false;
  (__this_00->fields)._rendererRoot = (UnityEngine_Transform_o *)0x0;
label_05962d78:
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._rendererRoot);
switchD_05962a03_default:
  return (CustomSkins_BaseCustomSkinPart_o *)__this_00;
}


// CustomSkins.TitanCustomSkinLoader$$FindChild
// il2cpp: UnityEngine_GameObject_o* CustomSkins_TitanCustomSkinLoader__FindChild (CustomSkins_TitanCustomSkinLoader_o* __this, UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x5962da0

UnityEngine_GameObject_o *
CustomSkins_TitanCustomSkinLoader__FindChild
          (CustomSkins_TitanCustomSkinLoader_o *__this,UnityEngine_Transform_o *parent,System_String_o *name,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *x;
  UnityEngine_GameObject_o *pUVar2;
  
  if (Il2CppMethodInitialized_0754592d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754592d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (UnityEngine_GameObject_o *)0x0;
  }
  if (parent != (UnityEngine_Transform_o *)0x0) {
    x = UnityEngine_Transform__Find(parent,name,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    if (x != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      return pUVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_TitanCustomSkinLoader___ctor (CustomSkins_TitanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x5962e90

void CustomSkins_TitanCustomSkinLoader___ctor(CustomSkins_TitanCustomSkinLoader_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754592e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    Il2CppMethodInitialized_0754592e = '\x01';
    uVar1 = (TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


