// Type: CustomSkins.TitanCustomSkinLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomSkins/TitanCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/TitanCustomSkinLoader.cs
// --------------------------------

// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$.ctor
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5___ctor (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5___ctor(CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_IDisposable_Dispose (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, const MethodInfo* method);
// 0x180547020

void
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_IDisposable_Dispose(CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, MethodInfo* method)

{
  return;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$MoveNext
// il2cpp: bool CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__MoveNext (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, const MethodInfo* method);
// 0x181e99b60

bool CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__MoveNext
               (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  CustomSkins_TitanCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar4;
  System_String_o *pSVar5;
  bool bVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *value;
  
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    goto label_181e99c03;
  }
  pSVar4 = (__this->fields).data;
  (__this->fields).__1__state = -1;
  if (pSVar4 != (System_Object_array *)0x0) {
    if ((int)pSVar4->max_length == 0) {
label_181e99d13:
      ThrowIndexOutOfRangeException();
    }
    pSVar5 = (System_String_o *)pSVar4->m_Items[0];
    if (pSVar5 != (System_String_o *)0x0) {
      pSVar7 = (System_String_o *)0x0;
      if ((Il2CppClass *)pSVar5->klass == g_data_184354e50) {
        pSVar7 = pSVar5;
      }
      if (pSVar7 == (System_String_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar5);
      }
      pSVar7 = (System_String_o *)0x0;
      if ((Il2CppClass *)pSVar5->klass == g_data_184354e50) {
        pSVar7 = pSVar5;
      }
      pSVar8 = System_String__Split(pSVar7,0x2c,0,(MethodInfo *)0x0);
      (__this->fields)._skinUrls_5__2 = pSVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._skinUrls_5__2,pSVar8);
      (__this->fields)._partId_5__3 = 0;
      do {
        if (3 < (__this->fields)._partId_5__3) {
          return false;
        }
        pSVar8 = (__this->fields)._skinUrls_5__2;
        if (pSVar8 == (System_String_array *)0x0) break;
        if ((__this->fields)._partId_5__3 < (int)pSVar8->max_length) {
          pSVar8 = (__this->fields)._skinUrls_5__2;
          uVar3 = (__this->fields)._partId_5__3;
          if ((uint)pSVar8->max_length <= uVar3) goto label_181e99d13;
          bVar6 = System_String__IsNullOrEmpty(pSVar8->m_Items[(int)uVar3],(MethodInfo *)0x0);
          if (!bVar6) {
            if (__this_00 == (CustomSkins_TitanCustomSkinLoader_o *)0x0) break;
            __this_01 = (*(__this_00->klass->vtable)._6_GetCustomSkinPart.methodPtr)
                                  (__this_00,(__this->fields)._partId_5__3,
                                   (__this_00->klass->vtable)._6_GetCustomSkinPart.method);
            if (__this_01 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
              pSVar8 = (__this->fields)._skinUrls_5__2;
              if (pSVar8 == (System_String_array *)0x0) break;
              uVar3 = (__this->fields)._partId_5__3;
              if ((uint)pSVar8->max_length <= uVar3) goto label_181e99d13;
              bVar6 = CustomSkins_BaseCustomSkinPart__LoadCache
                                (__this_01,pSVar8->m_Items[(int)uVar3],(MethodInfo *)0x0);
              if (!bVar6) {
                pSVar8 = (__this->fields)._skinUrls_5__2;
                if (pSVar8 == (System_String_array *)0x0) break;
                uVar3 = (__this->fields)._partId_5__3;
                if (uVar3 < (uint)pSVar8->max_length) {
                  routine = CustomSkins_BaseCustomSkinPart__LoadSkin
                                      (__this_01,pSVar8->m_Items[(int)uVar3],(MethodInfo *)0x0);
                  value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                    ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
                  (__this->fields).__2__current = (Il2CppObject *)value;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
                  (__this->fields).__1__state = 1;
                  return true;
                }
                goto label_181e99d13;
              }
            }
          }
        }
label_181e99c03:
        piVar1 = &(__this->fields)._partId_5__3;
        *piVar1 = *piVar1 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TitanCustomSkinLoader.<LoadSkinsFromRPC>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_Collections_IEnumerator_Reset (CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, const MethodInfo* method);
// 0x181e99d20

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
// 0x180573e90

Il2CppObject*
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5__System_Collections_IEnumerator_get_Current(CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.TitanCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_TitanCustomSkinLoader__get_RendererIdPrefix (CustomSkins_TitanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e96130

System_String_o *
CustomSkins_TitanCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_TitanCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"titan");
    Il2CppMethodInitialized_184344f9b = '\x01';
  }
  return "titan";
}


// CustomSkins.TitanCustomSkinLoader$$get_AllowLocalFileTextures
// il2cpp: bool CustomSkins_TitanCustomSkinLoader__get_AllowLocalFileTextures (CustomSkins_TitanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e95f90

bool CustomSkins_TitanCustomSkinLoader__get_AllowLocalFileTextures
               (CustomSkins_TitanCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  Characters_DummyTitan_o *x;
  Characters_BasicTitan_o *x_00;
  
  if (Il2CppMethodInitialized_184344f9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_DummyTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344f9c = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._owner;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_181e9611c;
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_DummyTitan);
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
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._owner;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_181e9611c;
    x_00 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
  }
  else {
    x_00 = (Characters_BasicTitan_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x_00 == (Characters_BasicTitan_o *)0x0) {
label_181e9611c:
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
// 0x181e95eb0

System_Collections_IEnumerator_o *
CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_TitanCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  CustomSkins_TitanCustomSkinLoader__LoadSkinsFromRPC_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_184344f9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomSkins_TitanCustomSkinLoader_LoadSkinsFromRPC_d__5);
    Il2CppMethodInitialized_184344f9d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomSkins_TitanCustomSkinLoader_LoadSkinsFromRPC_d__5);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data,data);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.TitanCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_TitanCustomSkinLoader__GetCustomSkinPart (CustomSkins_TitanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x181e95b30
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e95e86: movss dword ptr [rbx + 0x2c], xmm0
// asm:   0x181e95e8b: mov rax, rbx
// asm:   0x181e95e8e: movss dword ptr [rbx + 0x30], xmm1
// asm:   0x181e95e93: mov byte ptr [rbx + 0x3c], 0
// asm:   0x181e95e97: jmp 0x181e95c26

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_TitanCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_TitanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_Collections_Generic_List_Renderer__o *renderers;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  CustomSkins_TitanCustomSkinPart_o *__this_00;
  UnityEngine_Vector2_o UVar4;
  int32_t iVar5;
  float fVar6;
  float fStackX_c;
  System_Nullable_Vector2__Fields local_18;
  
  if (Il2CppMethodInitialized_184344f9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_TitanCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&"Eyes");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head");
    il2cpp_codegen_initialize_runtime_metadata(&"HairSocket");
    Il2CppMethodInitialized_184344f9e = '\x01';
  }
  pUVar2 = (__this->fields)._owner;
  if ((pUVar2 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
     pUVar1 == (UnityEngine_Transform_o *)0x0)) {
label_181e95e9c:
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_Transform__Find(pUVar1,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head",(MethodInfo *)0x0);
  renderers = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)renderers,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  if (partId == 0) {
    pUVar2 = (__this->fields)._owner;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_181e95e9c;
    pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pUVar2 = CustomSkins_TitanCustomSkinLoader__FindChild
                       (__this,pUVar1,"Body",(MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pUVar2,(MethodInfo *)0x0);
    iVar5 = 0;
  }
  else {
    if (partId != 1) {
      if (partId == 2) {
        pUVar2 = CustomSkins_TitanCustomSkinLoader__FindChild
                           (__this,pUVar1,"Eyes",(MethodInfo *)0x0);
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pUVar2,(MethodInfo *)0x0);
        iVar5 = 2;
      }
      else {
        if (partId != 3) {
          return (CustomSkins_BaseCustomSkinPart_o *)0x0;
        }
        pUVar2 = CustomSkins_TitanCustomSkinLoader__FindChild
                           (__this,pUVar1,"HairSocket",(MethodInfo *)0x0);
        CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pUVar2,(MethodInfo *)0x0);
        iVar5 = 3;
      }
      pSVar3 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                         ((CustomSkins_BaseCustomSkinLoader_o *)__this,iVar5,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_TitanCustomSkinPart);
      local_18.value.fields.y = 0.0;
      local_18.hasValue = false;
      local_18._1_3_ = 0;
      local_18.value.fields.x = 0.0;
      if (Il2CppMethodInitialized_184344fa1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_HasValue);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_Value);
        Il2CppMethodInitialized_184344fa1 = '\x01';
      }
      (__this_00->fields)._defaultTextureScale.fields.x = 1.0;
      (__this_00->fields)._defaultTextureScale.fields.y = 1.0;
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._loader = (CustomSkins_BaseCustomSkinLoader_o *)__this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._loader,__this);
      (__this_00->fields)._renderers = renderers;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._renderers,renderers);
      (__this_00->fields)._rendererId = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._rendererId,pSVar3);
      (__this_00->fields)._maxSize = 500000;
      goto label_181e95e51;
    }
    pUVar2 = (__this->fields)._owner;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_181e95e9c;
    pUVar1 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pUVar2 = CustomSkins_TitanCustomSkinLoader__FindChild
                       (__this,pUVar1,"Head",(MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pUVar2,(MethodInfo *)0x0);
    iVar5 = 1;
  }
  pSVar3 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                     ((CustomSkins_BaseCustomSkinLoader_o *)__this,iVar5,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_TitanCustomSkinPart);
  local_18.value.fields.y = 0.0;
  local_18.hasValue = false;
  local_18._1_3_ = 0;
  local_18.value.fields.x = 0.0;
  if (Il2CppMethodInitialized_184344fa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector2_get_Value);
    Il2CppMethodInitialized_184344fa1 = '\x01';
  }
  (__this_00->fields)._defaultTextureScale.fields.x = 1.0;
  (__this_00->fields)._defaultTextureScale.fields.y = 1.0;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._loader = (CustomSkins_BaseCustomSkinLoader_o *)__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._loader,__this);
  (__this_00->fields)._renderers = renderers;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._renderers,renderers);
  (__this_00->fields)._rendererId = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._rendererId,pSVar3);
  (__this_00->fields)._maxSize = 1000000;
label_181e95e51:
  if (local_18.hasValue == false) {
    fVar6 = (((CustomSkins_BaseCustomSkinPart_o *)__this_00)->fields)._defaultTextureScale.fields.x;
    fStackX_c = (((CustomSkins_BaseCustomSkinPart_o *)__this_00)->fields)._defaultTextureScale.fields.y;
  }
  else {
    UVar4 = System_Nullable_Vector2___get_Value
                      ((System_Nullable_Vector2__o *)&local_18,
                       (MethodInfo_AE2BD0 *)MethodInfo_System_Nullable_Vector2_get_Value);
    fVar6 = UVar4.fields.x;
    fStackX_c = UVar4.fields.y;
  }
  (((CustomSkins_BaseCustomSkinPart_o *)__this_00)->fields)._textureScale.fields.x = fVar6;
  (((CustomSkins_BaseCustomSkinPart_o *)__this_00)->fields)._textureScale.fields.y = fStackX_c;
  (((CustomSkins_BaseCustomSkinPart_o *)__this_00)->fields)._useTransparentMaterial = false;
  return (CustomSkins_BaseCustomSkinPart_o *)__this_00;
}


// CustomSkins.TitanCustomSkinLoader$$FindChild
// il2cpp: UnityEngine_GameObject_o* CustomSkins_TitanCustomSkinLoader__FindChild (CustomSkins_TitanCustomSkinLoader_o* __this, UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x181e95a70

UnityEngine_GameObject_o *
CustomSkins_TitanCustomSkinLoader__FindChild
          (CustomSkins_TitanCustomSkinLoader_o *__this,UnityEngine_Transform_o *parent,System_String_o *name,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *x;
  UnityEngine_GameObject_o *pUVar2;
  
  if (Il2CppMethodInitialized_184344f9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344f9f = '\x01';
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
// 0x181e95f40

void CustomSkins_TitanCustomSkinLoader___ctor(CustomSkins_TitanCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344fa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    Il2CppMethodInitialized_184344fa0 = '\x01';
  }
  if ((TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
  }
  CustomSkins_BaseCustomSkinLoader___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


