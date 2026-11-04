// Type: Cameras.MinimapCamera
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Cameras/MinimapCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// --------------------------------

// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$.ctor
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13___ctor (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13___ctor(Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.IDisposable.Dispose
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_IDisposable_Dispose (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, const MethodInfo* method);
// 0x180547020

void
Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_IDisposable_Dispose(Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, MethodInfo* method)

{
  return;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$MoveNext
// il2cpp: bool Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__MoveNext (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, const MethodInfo* method);
// 0x1822fe4b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822fe607: test rbx, rbx
// asm:   0x1822fe610: jmp 0x1822fe521

bool Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__MoveNext
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *__this,MethodInfo *method)

{
  int iVar1;
  Cameras_MinimapCamera_o *__this_00;
  UnityEngine_Texture2D_o *pUVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843476bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_1843476bb = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    pUVar2 = (__this->fields).texture;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (__this_00 == (Cameras_MinimapCamera_o *)0x0) goto label_1822fe71f;
    if (!bVar3) {
      local_18.z = (__this->fields).position.fields.z;
      local_18.x = (__this->fields).position.fields.x;
      local_18.y = (__this->fields).position.fields.y;
      bVar3 = Cameras_MinimapCamera__RTImage
                        (__this_00,(UnityEngine_Vector3_o *)&local_18,(__this->fields).height,
                         (__this->fields).texture,(__this->fields).minimap,(MethodInfo *)0x0);
      if (bVar3) {
        pIVar4 = (Il2CppObject *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar4,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar4);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      pIVar4 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar4);
      (__this->fields).__1__state = 2;
      return true;
    }
    if (iVar1 == 2) {
      pUVar2 = (__this->fields).texture;
      (__this->fields).__1__state = -1;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        pUVar2 = (__this->fields).texture;
        if (pUVar2 != (UnityEngine_Texture2D_o *)0x0) {
          UnityEngine_Texture2D__Apply_2ef9fd0(pUVar2,(MethodInfo *)0x0);
          pIVar4 = (Il2CppObject *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar4,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar4);
          (__this->fields).__1__state = 3;
          return true;
        }
        goto label_1822fe71f;
      }
    }
    else {
      if (iVar1 == 3) {
        (__this->fields).__1__state = -1;
        pIVar4 = (Il2CppObject *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar4,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar4);
        (__this->fields).__1__state = 4;
        return true;
      }
      if (iVar1 != 4) {
        return false;
      }
      (__this->fields).__1__state = -1;
    }
    if (__this_00 == (Cameras_MinimapCamera_o *)0x0) {
label_1822fe71f:
      ThrowNullReferenceException();
    }
  }
  (__this_00->fields)._takingSnapshot = false;
  return false;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__13$$System.Collections.IEnumerator.Reset
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_Collections_IEnumerator_Reset (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, const MethodInfo* method);
// 0x1822fe730

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
// 0x180573e90

Il2CppObject*
Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13__System_Collections_IEnumerator_get_Current(Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Cameras.MinimapCamera$$Awake
// il2cpp: void Cameras_MinimapCamera__Awake (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x1822f8980

void Cameras_MinimapCamera__Awake(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this_00;
  Cameras_MinimapCameraRender_o *value;
  UnityEngine_Transform_o *value_00;
  UnityEngine_Camera_o *value_01;
  UnityEngine_RenderTexture_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843476b5 == '\0') {
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
    Il2CppMethodInitialized_1843476b5 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_00 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (path,"Minimap/Prefabs/MinimapCamera",false,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__AddComponent_object_
                      (__this_00,
                       (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_MinimapCameraRender
                      );
    (__this->fields)._cameraRender = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cameraRender,value);
    value_00 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    (__this->fields)._cameraTransform = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cameraTransform,value_00);
    value_01 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Camera
                         );
    (__this->fields)._camera = value_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._camera,value_01);
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (TypeInfo_Utility_ResourcePaths->static_fields->UI,"Minimap/Textures/MinimapRenderTexture",false,
                        (MethodInfo_795F00 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_RenderTexture);
    (__this->fields)._minimapRenderTexture = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._minimapRenderTexture,pUVar1);
    pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (TypeInfo_Utility_ResourcePaths->static_fields->UI,"Minimap/Textures/MapRenderTexture",false,
                        (MethodInfo_795F00 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_RenderTexture);
    (__this->fields)._mapRenderTexture = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._mapRenderTexture,pUVar1);
    return;
  }
  ThrowNullReferenceException();
}


// Cameras.MinimapCamera$$Ready
// il2cpp: bool Cameras_MinimapCamera__Ready (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x181bc3220

bool
Cameras_MinimapCamera__Ready(Cameras_MinimapCamera_o* __this, MethodInfo* method)

{
  return (__this->fields)._takingSnapshot == false;
}


// Cameras.MinimapCamera$$RenderMap
// il2cpp: UnityEngine_RenderTexture_o* Cameras_MinimapCamera__RenderMap (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, const MethodInfo* method);
// 0x1822f9030

UnityEngine_RenderTexture_o *
Cameras_MinimapCamera__RenderMap
          (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o *position,float height,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if ((__this->fields)._takingSnapshot == false) {
    local_18.x = (position->fields).x;
    local_18.y = (position->fields).y;
    local_18.z = (position->fields).z;
    bVar1 = Cameras_MinimapCamera__RTImage
                      (__this,(UnityEngine_Vector3_o *)&local_18,height,(UnityEngine_Texture2D_o *)0x0,false,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return (__this->fields)._mapRenderTexture;
    }
  }
  return (UnityEngine_RenderTexture_o *)0x0;
}


// Cameras.MinimapCamera$$TakeSnapshot
// il2cpp: void Cameras_MinimapCamera__TakeSnapshot (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, bool immediate, const MethodInfo* method);
// 0x1822f9210

void Cameras_MinimapCamera__TakeSnapshot
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o *position,float height,
               UnityEngine_Texture2D_o *texture,bool minimap,bool immediate,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *routine;
  bool bVar3;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if ((__this->fields)._takingSnapshot == false) {
    if (immediate) {
      if (Il2CppMethodInitialized_1843476b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_1843476b6 = '\x01';
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        local_28[0].z = (position->fields).z;
        local_28[0].x = (position->fields).x;
        local_28[0].y = (position->fields).y;
        bVar3 = Cameras_MinimapCamera__RTImage
                          (__this,(UnityEngine_Vector3_o *)local_28,height,texture,minimap,(MethodInfo *)0x0);
        if (bVar3) {
          if (texture == (UnityEngine_Texture2D_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Texture2D__Apply_2ef9fd0(texture,(MethodInfo *)0x0);
        }
      }
    }
    else {
      bVar3 = Il2CppMethodInitialized_1843476b7 == '\0';
      (__this->fields)._takingSnapshot = true;
      if (bVar3) {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Cameras_MinimapCamera_TakeSnapshotCoroutine_d__13);
        Il2CppMethodInitialized_1843476b7 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Cameras_MinimapCamera_TakeSnapshotCoroutine_d__13);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      fVar2 = (position->fields).y;
      fVar1 = (position->fields).z;
      (routine->fields).position.fields.x = (position->fields).x;
      (routine->fields).position.fields.y = fVar2;
      (routine->fields).position.fields.z = fVar1;
      (routine->fields).height = height;
      (routine->fields).texture = texture;
      Il2CppCodeGenWriteBarrier(&(routine->fields).texture,texture);
      (routine->fields).minimap = minimap;
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


// Cameras.MinimapCamera$$TakeSnapshotImmediate
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotImmediate (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x1822f9140

void Cameras_MinimapCamera__TakeSnapshotImmediate
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o *position,float height,
               UnityEngine_Texture2D_o *texture,bool minimap,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843476b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476b6 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    local_28[0].z = (position->fields).z;
    local_28[0].x = (position->fields).x;
    local_28[0].y = (position->fields).y;
    bVar1 = Cameras_MinimapCamera__RTImage
                      (__this,(UnityEngine_Vector3_o *)local_28,height,texture,minimap,(MethodInfo *)0x0);
    if (bVar1) {
      if (texture == (UnityEngine_Texture2D_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Texture2D__Apply_2ef9fd0(texture,(MethodInfo *)0x0);
    }
  }
  return;
}


// Cameras.MinimapCamera$$TakeSnapshotCoroutine
// il2cpp: System_Collections_IEnumerator_o* Cameras_MinimapCamera__TakeSnapshotCoroutine (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x1822f9090

System_Collections_IEnumerator_o *
Cameras_MinimapCamera__TakeSnapshotCoroutine
          (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o *position,float height,
          UnityEngine_Texture2D_o *texture,bool minimap,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Cameras_MinimapCamera__TakeSnapshotCoroutine_d__13_o *__this_00;
  
  if (Il2CppMethodInitialized_1843476b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_MinimapCamera_TakeSnapshotCoroutine_d__13);
    Il2CppMethodInitialized_1843476b7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Cameras_MinimapCamera_TakeSnapshotCoroutine_d__13);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  fVar2 = (position->fields).y;
  fVar1 = (position->fields).z;
  (__this_00->fields).position.fields.x = (position->fields).x;
  (__this_00->fields).position.fields.y = fVar2;
  (__this_00->fields).position.fields.z = fVar1;
  (__this_00->fields).height = height;
  (__this_00->fields).texture = texture;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).texture,texture);
  (__this_00->fields).minimap = minimap;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Cameras.MinimapCamera$$RTImage
// il2cpp: bool Cameras_MinimapCamera__RTImage (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x1822f8c90
// eh: try 0x1822f8e36..0x1822f8f7f -> pad 0x1833401d0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x1822f8f8b..0x1822f8fba -> pad 0x1833187a0 catch Il2CppExceptionWrapper
// eh: try 0x1822f9001..0x1822f901c -> pad 0x1833401d0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 61 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f8f8b: lea rcx, [rip + 0x1e024a6]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1822f8f92: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1822f8f97: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1822f8f9e: jne 0x1822f8fa8
// asm:   0x1822f8fa0: mov rcx, rax
// asm:   0x1822f8fa3: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1822f8fa8: xor edx, edx
// asm:   0x1822f8faa: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822f8faf: call 0x182ec31f0  ; UnityEngine_Debug__LogException()
// asm:   0x1822f8fb4: xor bl, bl
// asm:   0x1822f8fb6: mov byte ptr [rsp + 0x30], bl
// asm:   0x1822f8fba: lea rcx, [rsp + 0x60]
// asm:   0x1822f8fbf: call 0x1822ea9d0  ; il2cpp_runtime_helper_1822ea9d0()
// asm:   0x1822f8fc4: jmp 0x1822f8fdf
// asm:   0x1822f8fc6: lea rcx, [rsp + 0x60]
// asm:   0x1822f8fcb: call 0x1822ea9d0  ; il2cpp_runtime_helper_1822ea9d0()
// asm:   0x1822f8fd0: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1822f8fd5: test rcx, rcx
// asm:   0x1822f8fd8: jne 0x1822f901c
// asm:   0x1822f8fda: movzx ebx, byte ptr [rsp + 0x30]
// asm:   0x1822f901c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833187a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833187a5: push rbp
// asm:   0x1833187a6: sub rsp, 0x30
// asm:   0x1833187aa: mov rbp, rdx
// asm:   0x1833187ad: mov rax, qword ptr [rbp + 0x80]
// asm:   0x1833187b4: mov rcx, qword ptr [rax]
// asm:   0x1833187b7: mov qword ptr [rbp + 0x58], rcx
// asm:   0x1833187bb: movabs rax, 0
// asm:   0x1833187c5: add rsp, 0x30
// asm:   0x1833187c9: pop rbp
// asm:   0x1833187ca: ret 
// asm:   0x1833401d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833401d5: push rbx
// asm:   0x1833401d6: push rbp
// asm:   0x1833401d7: push rdi
// asm:   0x1833401d8: sub rsp, 0x30
// asm:   0x1833401dc: mov rbp, rdx
// asm:   0x1833401df: mov rbx, qword ptr [rbp + 0x78]
// asm:   0x1833401e3: mov rax, qword ptr [rbx]
// asm:   0x1833401e6: mov rdi, qword ptr [rax]
// asm:   0x1833401e9: lea rcx, [rip + 0xd38d68]  ; TypeInfo_System_Exception
// asm:   0x1833401f0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833401f5: mov rdx, rdi
// asm:   0x1833401f8: mov rcx, rax
// asm:   0x1833401fb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340200: test al, al
// asm:   0x183340202: mov rax, qword ptr [rbx]
// asm:   0x183340205: je 0x183340217
// asm:   0x183340207: mov qword ptr [rbp + 0x40], rax
// asm:   0x18334020b: movabs rax, 0
// asm:   0x183340215: jmp 0x18334022c
// asm:   0x183340217: mov qword ptr [rbp + 0x70], rax
// asm:   0x18334021b: lea rdx, [rip + 0xc9bd66]
// asm:   0x183340222: lea rcx, [rbp + 0x70]
// asm:   0x183340226: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18334022c: add rsp, 0x30
// asm:   0x183340230: pop rdi
// asm:   0x183340231: pop rbp
// asm:   0x183340232: pop rbx
// asm:   0x183340233: ret 

bool Cameras_MinimapCamera__RTImage
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o *position,float height,
               UnityEngine_Texture2D_o *texture,bool minimap,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Camera_o *pUVar2;
  Cameras_MinimapCameraRender_o *__this_00;
  bool bVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Quaternion_o *pUVar4;
  UnityEngine_RenderTexture_o *value;
  int32_t iVar5;
  Cameras_MinimapCamera_o *local_res8;
  UnityEngine_Rect_Fields local_68;
  UnityEngine_RenderTexture_o *local_58;
  undefined1 local_50 [8];
  UnityEngine_RenderTexture_o **local_48;
  Cameras_MinimapCamera_o **local_40;
  
  local_res8 = __this;
  if (Il2CppMethodInitialized_1843476b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_MinimapCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476b8 = '\x01';
  }
  local_58 = (UnityEngine_RenderTexture_o *)0x0;
  pUVar1 = (local_res8->fields)._cameraTransform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      pUVar2 = (local_res8->fields)._camera;
      if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_orthographicSize(pUVar2,height * 0.5,(MethodInfo *)0x0);
        pUVar2 = (local_res8->fields)._camera;
        if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__set_farClipPlane(pUVar2,height + 1000.0,(MethodInfo *)0x0);
          pUVar1 = (local_res8->fields)._cameraTransform;
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            local_68.m_XMin = (position->fields).x;
            local_68.m_YMin = (position->fields).y;
            local_68.m_Width = (position->fields).z;
            UnityEngine_Transform__set_position(pUVar1,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
            pUVar1 = (local_res8->fields)._cameraTransform;
            local_68.m_XMin = 1.5707964;
            local_68.m_YMin = 0.0;
            local_68._8_8_ = (ulonglong)(uint)local_68.m_Height << 0x20;
            pUVar4 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Quaternion_o *)local_50,(UnityEngine_Vector3_o *)&local_68,
                                (MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              local_68.m_XMin = (pUVar4->fields).x;
              local_68.m_YMin = (pUVar4->fields).y;
              local_68.m_Width = (pUVar4->fields).z;
              local_68.m_Height = (pUVar4->fields).w;
              UnityEngine_Transform__set_rotation
                        (pUVar1,(UnityEngine_Quaternion_o *)&local_68,(MethodInfo *)0x0);
              __this_00 = (local_res8->fields)._cameraRender;
              if (__this_00 != (Cameras_MinimapCameraRender_o *)0x0) {
                Cameras_MinimapCameraRender__BeginRender(__this_00,(MethodInfo *)0x0);
                local_58 = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
                local_50._0_4_ = 0.0;
                local_50._4_4_ = 0.0;
                local_48 = &local_58;
                local_40 = &local_res8;
                if ((TypeInfo_Cameras_MinimapCamera->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_MinimapCamera);
                }
                pUVar2 = (local_res8->fields)._camera;
                if (minimap) {
                  if (pUVar2 == (UnityEngine_Camera_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  iVar5 = TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize;
                  UnityEngine_Camera__set_targetTexture
                            (pUVar2,(local_res8->fields)._minimapRenderTexture,(MethodInfo *)0x0);
                }
                else {
                  if (pUVar2 == (UnityEngine_Camera_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_Camera__set_targetTexture
                            (pUVar2,(local_res8->fields)._mapRenderTexture,(MethodInfo *)0x0);
                  if ((TypeInfo_Cameras_MinimapCamera->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_MinimapCamera);
                  }
                  iVar5 = TypeInfo_Cameras_MinimapCamera->static_fields->MapSize;
                }
                pUVar2 = (local_res8->fields)._camera;
                if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
                  value = UnityEngine_Camera__get_targetTexture(pUVar2,(MethodInfo *)0x0);
                  UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
                  pUVar2 = (local_res8->fields)._camera;
                  if (pUVar2 == (UnityEngine_Camera_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_Camera__Render(pUVar2,(MethodInfo *)0x0);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar3 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar3) {
                    if (texture == (UnityEngine_Texture2D_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    local_68.m_XMin = 0.0;
                    local_68.m_YMin = 0.0;
                    local_68.m_Height = (float)iVar5;
                    local_68.m_Width = (float)iVar5;
                    UnityEngine_Texture2D__ReadPixels_2efaf30
                              (texture,(UnityEngine_Rect_o *)&local_68,0,0,(MethodInfo *)0x0);
                  }
                  il2cpp_runtime_helper_1822ea9d0(&local_48);
                  return true;
                }
                ThrowNullReferenceException();
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MinimapCamera$$OnDestroy
// il2cpp: void Cameras_MinimapCamera__OnDestroy (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x1822f8b50

void Cameras_MinimapCamera__OnDestroy(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_RenderTexture_o *pUVar2;
  bool bVar3;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_1843476b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476b9 = '\x01';
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
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
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
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
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
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  }
  return;
}


// Cameras.MinimapCamera$$.ctor
// il2cpp: void Cameras_MinimapCamera___ctor (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x180528540

void
Cameras_MinimapCamera___ctor(Cameras_MinimapCamera_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Cameras.MinimapCamera$$.cctor
// il2cpp: void Cameras_MinimapCamera___cctor (const MethodInfo* method);
// 0x1822f93a0

void Cameras_MinimapCamera___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843476ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_MinimapCamera);
    Il2CppMethodInitialized_1843476ba = '\x01';
  }
  TypeInfo_Cameras_MinimapCamera->static_fields->MinimapSize = 300;
  TypeInfo_Cameras_MinimapCamera->static_fields->MapSize = 900;
  return;
}


