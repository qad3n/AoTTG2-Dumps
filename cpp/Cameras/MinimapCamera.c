// Type: Cameras.MinimapCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/MinimapCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// --------------------------------

// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$.ctor
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13___ctor (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5dd8b30

void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13___ctor
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.IDisposable.Dispose
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_IDisposable_Dispose (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, const MethodInfo* method);
// 0x5dd8f60

void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_IDisposable_Dispose
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$MoveNext
// il2cpp: bool Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__MoveNext (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, const MethodInfo* method);
// 0x5dd8f70

bool Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__MoveNext
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *__this,MethodInfo *method)

{
  uint uVar1;
  Cameras_MinimapCamera_o *__this_00;
  UnityEngine_Texture2D_o *pUVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  uint *method_00;
  
  if (Il2CppMethodInitialized_0754823b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_0754823b = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  if (4 < uVar1) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  method_00 = &switchD_05dd8fbf::switchdataD_010a5fe8;
  switch(uVar1) {
  case 0:
    (__this->fields).__1__state = -1;
    pUVar2 = (__this->fields).texture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if (__this_00 == (Cameras_MinimapCamera_o *)0x0) goto label_05dd917a;
      bVar3 = Cameras_MinimapCamera__RTImage
                        (__this_00,(UnityEngine_Vector3_o)(__this->fields).position.fields,
                         (__this->fields).height,(__this->fields).texture,(__this->fields).minimap,
                         (MethodInfo *)method_00);
      if (bVar3) {
        pIVar4 = (Il2CppObject *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto label_05dd916d;
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 2;
    return true;
  case 2:
    (__this->fields).__1__state = -1;
    pUVar2 = (__this->fields).texture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar2 = (__this->fields).texture;
      if (pUVar2 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__Apply_68f05d0(pUVar2,(MethodInfo *)0x0);
        pIVar4 = (Il2CppObject *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 3;
        return true;
      }
      goto label_05dd917a;
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 4;
    return true;
  case 4:
    (__this->fields).__1__state = -1;
  }
  if (__this_00 == (Cameras_MinimapCamera_o *)0x0) {
label_05dd917a:
    ThrowNullReferenceException();
  }
label_05dd916d:
  (__this_00->fields)._takingSnapshot = false;
  return false;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, const MethodInfo* method);
// 0x5dd9180

Il2CppObject *
Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.Collections.IEnumerator.Reset
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_Collections_IEnumerator_Reset (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, const MethodInfo* method);
// 0x5dd9190

void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_Collections_IEnumerator_Reset
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *__this,MethodInfo *method)

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
                  MethodInfo_Cameras_MinimapCamera_TakeSnapshotCoroutine_d__13_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_Collections_IEnumerator_get_Current (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, const MethodInfo* method);
// 0x5dd91d0

Il2CppObject *
Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_Collections_IEnumerator_get_Current
          (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Cameras.MinimapCamera$$Awake
// il2cpp: void Cameras_MinimapCamera__Awake (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x5dd8230

void Cameras_MinimapCamera__Awake(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this_00;
  Cameras_MinimapCameraRender_o *pCVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Camera_o *pUVar3;
  UnityEngine_RenderTexture_o *pUVar4;
  
  if (Il2CppMethodInitialized_07548235 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MinimapCameraRender);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Camera);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_RenderTexture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Textures/MinimapRenderTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Textures/MapRenderTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap/Prefabs/MinimapCamera");
    Il2CppMethodInitialized_07548235 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (path,"Minimap/Prefabs/MinimapCamera",false,false,
                         (MethodInfo_3665790 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = UnityEngine_GameObject__AddComponent_object_
                     (__this_00,
                      (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MinimapCameraRender
                     );
  (__this->fields)._cameraRender = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cameraRender);
  pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  (__this->fields)._cameraTransform = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cameraTransform);
  pUVar3 = UnityEngine_GameObject__GetComponent_object_
                     (__this_00,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Camera);
  (__this->fields)._camera = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._camera);
  UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (TypeInfo_Utility_ResourcePaths->static_fields->UI,"Minimap/Textures/MinimapRenderTexture",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_RenderTexture);
  (__this->fields)._minimapRenderTexture = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._minimapRenderTexture);
  pUVar4 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (TypeInfo_Utility_ResourcePaths->static_fields->UI,"Minimap/Textures/MapRenderTexture",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_RenderTexture);
  (__this->fields)._mapRenderTexture = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapRenderTexture);
  return;
}


// Cameras.MinimapCamera$$Ready
// il2cpp: bool Cameras_MinimapCamera__Ready (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x5dd8410

bool Cameras_MinimapCamera__Ready(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  return (__this->fields)._takingSnapshot == false;
}


// Cameras.MinimapCamera$$RenderMap
// il2cpp: UnityEngine_RenderTexture_o* Cameras_MinimapCamera__RenderMap (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, const MethodInfo* method);
// 0x5dd8420

UnityEngine_RenderTexture_o *
Cameras_MinimapCamera__RenderMap
          (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  UnityEngine_RenderTexture_o *pUVar2;
  
  if ((__this->fields)._takingSnapshot == false) {
    pUVar2 = (UnityEngine_RenderTexture_o *)0x0;
    bVar1 = Cameras_MinimapCamera__RTImage(__this,position,height,(UnityEngine_Texture2D_o *)0x0,false,in_RCX)
    ;
    if (bVar1) {
      pUVar2 = (__this->fields)._mapRenderTexture;
    }
  }
  else {
    pUVar2 = (UnityEngine_RenderTexture_o *)0x0;
  }
  return pUVar2;
}


// Cameras.MinimapCamera$$TakeSnapshot
// il2cpp: void Cameras_MinimapCamera__TakeSnapshot (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, bool immediate, const MethodInfo* method);
// 0x5dd8850

void Cameras_MinimapCamera__TakeSnapshot
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
               UnityEngine_Texture2D_o *texture,bool minimap,bool immediate,MethodInfo *method)

{
  bool bVar1;
  Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *__this_00;
  undefined7 in_register_00000009;
  
  if ((__this->fields)._takingSnapshot == false) {
    if (!immediate) {
      (__this->fields)._takingSnapshot = true;
      if (Il2CppMethodInitialized_07548237 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Cameras_MinimapCamera_TakeSnapshotCoroutine_d__13);
        Il2CppMethodInitialized_07548237 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Cameras_MinimapCamera_TakeSnapshotCoroutine_d__13);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      (__this_00->fields).position.fields.x = position.fields.x;
      (__this_00->fields).position.fields.y = position.fields.y;
      (__this_00->fields).position.fields.z = position.fields.z;
      (__this_00->fields).height = height;
      (__this_00->fields).texture = texture;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).texture);
      (__this_00->fields).minimap = minimap;
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
    if (Il2CppMethodInitialized_07548236 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07548236 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = Cameras_MinimapCamera__RTImage
                        (__this,position,height,texture,minimap,
                         (MethodInfo *)CONCAT71(in_register_00000009,immediate));
      if (bVar1) {
        if (texture == (UnityEngine_Texture2D_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Texture2D__Apply_68f05d0(texture,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Cameras.MinimapCamera$$TakeSnapshotImmediate
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotImmediate (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x5dd89c0

void Cameras_MinimapCamera__TakeSnapshotImmediate
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
               UnityEngine_Texture2D_o *texture,bool minimap,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548236 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548236 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = Cameras_MinimapCamera__RTImage(__this,position,height,texture,minimap,method);
    if (bVar1) {
      if (texture == (UnityEngine_Texture2D_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Texture2D__Apply_68f05d0(texture,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Cameras.MinimapCamera$$TakeSnapshotCoroutine
// il2cpp: System_Collections_IEnumerator_o* Cameras_MinimapCamera__TakeSnapshotCoroutine (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x5dd8a70

System_Collections_IEnumerator_o *
Cameras_MinimapCamera__TakeSnapshotCoroutine
          (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
          UnityEngine_Texture2D_o *texture,bool minimap,MethodInfo *method)

{
  Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *__this_00;
  
  if (Il2CppMethodInitialized_07548237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_MinimapCamera_TakeSnapshotCoroutine_d__13);
    Il2CppMethodInitialized_07548237 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Cameras_MinimapCamera_TakeSnapshotCoroutine_d__13);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).position.fields.x = position.fields.x;
  (__this_00->fields).position.fields.y = position.fields.y;
  (__this_00->fields).position.fields.z = position.fields.z;
  (__this_00->fields).height = height;
  (__this_00->fields).texture = texture;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).texture);
  (__this_00->fields).minimap = minimap;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Cameras.MinimapCamera$$RTImage
// il2cpp: bool Cameras_MinimapCamera__RTImage (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x5dd8460
// eh: try 0x5dd85f5..0x5dd8752 -> pad 0x5dd875c (+12 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5dd877c..0x5dd87f3 -> pad 0x5dd87fd (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5dd8803..0x5dd8808 -> pad 0x5dd8842 catch (...) [compiler noexcept guard]
// eh: try 0x5dd8821..0x5dd8826 -> pad 0x5dd882d cleanup
// eh: try 0x5dd8830..0x5dd883a -> pad 0x5dd8842 catch (...) [compiler noexcept guard]
// asm: 72 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dd86d5: xor ebp, ebp
// asm:   0x5dd8736: mov rdi, rbp
// asm:   0x5dd8739: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dd8752: jmp 0x5dd8762
// asm:   0x5dd8754: jmp 0x5dd8762
// asm:   0x5dd8756: jmp 0x5dd8762
// asm:   0x5dd8758: jmp 0x5dd8762
// asm:   0x5dd875a: jmp 0x5dd8762
// asm:   0x5dd875c: jmp 0x5dd8762
// asm:   0x5dd875e: jmp 0x5dd8762
// asm:   0x5dd8760: jmp 0x5dd8762
// asm:   0x5dd8762: mov rbp, rdx
// asm:   0x5dd8765: mov rbx, rax
// asm:   0x5dd8768: cmp ebp, 1
// asm:   0x5dd876b: jne 0x5dd8808
// asm:   0x5dd8771: mov rdi, rbx
// asm:   0x5dd8774: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dd8779: mov rbx, rax
// asm:   0x5dd877c: lea rdi, [rip + 0x149f93d]  ; TypeInfo_System_Exception
// asm:   0x5dd8783: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dd8788: mov rcx, qword ptr [rbx]
// asm:   0x5dd878b: mov rsi, qword ptr [rcx]
// asm:   0x5dd878e: mov rdi, rax
// asm:   0x5dd8791: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dd8796: test al, al
// asm:   0x5dd8798: je 0x5dd87d2
// asm:   0x5dd879a: mov rbx, qword ptr [rbx]
// asm:   0x5dd879d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd87a2: lea rdi, [rip + 0x149ee9f]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5dd87a9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dd87ae: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dd87b5: jne 0x5dd87bf
// asm:   0x5dd87b7: mov rdi, rax
// asm:   0x5dd87ba: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dd87bf: xor ebp, ebp
// asm:   0x5dd87c1: mov rdi, rbx
// asm:   0x5dd87c4: xor esi, esi
// asm:   0x5dd87c6: call 0x69bd800  ; UnityEngine_Debug__LogException()
// asm:   0x5dd87cb: xor ebx, ebx
// asm:   0x5dd87cd: jmp 0x5dd86d7
// asm:   0x5dd87d2: mov edi, 8
// asm:   0x5dd87d7: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dd87dc: mov rcx, qword ptr [rbx]
// asm:   0x5dd87df: mov qword ptr [rax], rcx
// asm:   0x5dd87e2: lea rsi, [rip + 0x1054d17]
// asm:   0x5dd87e9: mov rdi, rax
// asm:   0x5dd87ec: xor edx, edx
// asm:   0x5dd87ee: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dd87f3: jmp 0x5dd87f5
// asm:   0x5dd87f5: mov rbp, rdx
// asm:   0x5dd87f8: mov rbx, rax
// asm:   0x5dd87fb: jmp 0x5dd8808
// asm:   0x5dd87fd: mov rbp, rdx
// asm:   0x5dd8800: mov rbx, rax
// asm:   0x5dd8803: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd8808: mov eax, 1
// asm:   0x5dd880d: cmp ebp, eax
// asm:   0x5dd880f: jne 0x5dd8830
// asm:   0x5dd8811: mov rdi, rbx
// asm:   0x5dd8814: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dd8819: mov rbp, qword ptr [rax]
// asm:   0x5dd881c: mov qword ptr [rsp + 0x28], rbp
// asm:   0x5dd8821: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dd8826: xor ebx, ebx
// asm:   0x5dd8828: jmp 0x5dd86d7
// asm:   0x5dd882d: mov rbx, rax
// asm:   0x5dd8830: lea rdi, [rsp + 0x28]
// asm:   0x5dd8835: call 0x2fde7c0  ; il2cpp_runtime_helper_02fde7c0()
// asm:   0x5dd883a: mov rdi, rbx
// asm:   0x5dd883d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dd8842: mov rdi, rax
// asm:   0x5dd8845: call 0x2ab61e0  ; __clang_call_terminate()

bool Cameras_MinimapCamera__RTImage
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
               UnityEngine_Texture2D_o *texture,bool minimap,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Cameras_MinimapCameraRender_o *pCVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_RenderTexture_o *value;
  int32_t iVar6;
  MethodInfo *pMVar7;
  UnityEngine_Camera_o *pUVar8;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_o value_01;
  Cameras_MinimapCamera_o *local_60;
  float local_54;
  UnityEngine_RenderTexture_o *local_50;
  float local_44;
  undefined1 local_40 [16];
  Cameras_MinimapCamera_o **local_30;
  undefined1 local_28 [16];
  
  local_44 = position.fields.z;
  local_28._8_4_ = in_XMM0_Dc;
  local_28._0_8_ = position.fields._0_8_;
  local_28._12_4_ = in_XMM0_Dd;
  local_60 = __this;
  local_54 = height;
  if (Il2CppMethodInitialized_07548238 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_MinimapCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548238 = '\x01';
  }
  local_50 = (UnityEngine_RenderTexture_o *)0x0;
  pUVar1 = (__this->fields)._cameraTransform;
  if ((pUVar1 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto label_05dd872c;
  UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
  pUVar8 = (__this->fields)._camera;
  if (pUVar8 == (UnityEngine_Camera_o *)0x0) goto label_05dd872c;
  UnityEngine_Camera__set_orthographicSize(pUVar8,local_54 * 0.5,(MethodInfo *)0x0);
  pUVar8 = (__this->fields)._camera;
  if (pUVar8 == (UnityEngine_Camera_o *)0x0) goto label_05dd872c;
  UnityEngine_Camera__set_farClipPlane(pUVar8,local_54 + 1000.0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._cameraTransform;
  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_05dd872c;
  value_01.fields.z = local_44;
  value_01.fields.x = (float)local_28._0_4_;
  value_01.fields.y = (float)local_28._4_4_;
  UnityEngine_Transform__set_position(pUVar1,value_01,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._cameraTransform;
  local_40._0_4_ = 1.5707964;
  local_40._4_4_ = 0.0;
  local_40._8_8_ = local_40._8_8_ & 0xffffffff00000000;
  value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o *)local_40,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto label_05dd872c;
  pMVar7 = (MethodInfo *)0x0;
  UnityEngine_Transform__set_rotation(pUVar1,value_00,(MethodInfo *)0x0);
  pCVar2 = (local_60->fields)._cameraRender;
  if (pCVar2 == (Cameras_MinimapCameraRender_o *)0x0) goto label_05dd872c;
  Cameras_MinimapCameraRender__BeginRender(pCVar2,pMVar7);
  local_50 = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
  local_40._0_4_ = 0.0;
  local_40._4_4_ = 0.0;
  local_40._8_8_ = &local_50;
  local_30 = &local_60;
  if ((TypeInfo_Cameras_MinimapCamera->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_MinimapCamera);
    pUVar8 = (local_60->fields)._camera;
    if (!minimap) goto label_05dd8617;
label_05dd85df:
    if (pUVar8 == (UnityEngine_Camera_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar6 = TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize;
    UnityEngine_Camera__set_targetTexture(pUVar8,(local_60->fields)._minimapRenderTexture,(MethodInfo *)0x0);
  }
  else {
    pUVar8 = (local_60->fields)._camera;
    if (minimap) goto label_05dd85df;
label_05dd8617:
    if (pUVar8 == (UnityEngine_Camera_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Camera__set_targetTexture(pUVar8,(local_60->fields)._mapRenderTexture,(MethodInfo *)0x0);
    if ((TypeInfo_Cameras_MinimapCamera->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_MinimapCamera);
    }
    iVar6 = TypeInfo_Cameras_MinimapCamera->static_fields->MapSize;
  }
  pUVar8 = (local_60->fields)._camera;
  if (pUVar8 == (UnityEngine_Camera_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Camera__get_targetTexture(pUVar8,(MethodInfo *)0x0);
  UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
  pUVar8 = (local_60->fields)._camera;
  if (pUVar8 == (UnityEngine_Camera_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Camera__Render(pUVar8,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (texture == (UnityEngine_Texture2D_o *)0x0) {
      ThrowNullReferenceException();
    }
    auVar3._4_4_ = (float)iVar6;
    auVar3._0_4_ = (float)iVar6;
    auVar3._8_8_ = 0;
    UnityEngine_Texture2D__ReadPixels_68f0830
              (texture,(UnityEngine_Rect_o)(auVar3 << 0x40),0,0,(MethodInfo *)0x0);
  }
  pMVar7 = (MethodInfo *)0x0;
  UnityEngine_RenderTexture__set_active(local_50,(MethodInfo *)0x0);
  pCVar2 = (local_60->fields)._cameraRender;
  if (pCVar2 != (Cameras_MinimapCameraRender_o *)0x0) {
    Cameras_MinimapCameraRender__EndRender(pCVar2,pMVar7);
    pUVar1 = (local_60->fields)._cameraTransform;
    if ((pUVar1 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      return true;
    }
  }
label_05dd872c:
  ThrowNullReferenceException();
}


// Cameras.MinimapCamera$$OnDestroy
// il2cpp: void Cameras_MinimapCamera__OnDestroy (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x5dd8df0

void Cameras_MinimapCamera__OnDestroy(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_RenderTexture_o *pUVar2;
  bool bVar3;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07548239 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548239 = '\x01';
  }
  pUVar1 = (__this->fields)._cameraTransform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._cameraTransform;
    if (pUVar1 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields)._minimapRenderTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._minimapRenderTexture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields)._mapRenderTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._mapRenderTexture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Cameras.MinimapCamera$$.ctor
// il2cpp: void Cameras_MinimapCamera___ctor (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x5dd8f10

void Cameras_MinimapCamera___ctor(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Cameras.MinimapCamera$$.cctor
// il2cpp: void Cameras_MinimapCamera___cctor (const MethodInfo* method);
// 0x5dd8f20

void Cameras_MinimapCamera___cctor(MethodInfo *method)

{
  Cameras_MinimapCamera_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_0754823a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_MinimapCamera);
    Il2CppMethodInitialized_0754823a = '\x01';
  }
  pCVar1 = TypeInfo_Cameras_MinimapCamera->static_fields;
  pCVar1->MinimapSize = 300;
  pCVar1->MapSize = 900;
  return;
}


