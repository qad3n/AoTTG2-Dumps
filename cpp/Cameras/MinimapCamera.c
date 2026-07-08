// Type: Cameras.MinimapCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Cameras/MinimapCamera.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Cameras/MinimapCamera.cs  [CHANGED since prior version]
// --------------------------------

// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$.ctor
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11___ctor (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x414ba80

void Cameras_MinimapCamera_<TakeSnapshotCoroutine>d__11___ctor
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$System.IDisposable.Dispose
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_IDisposable_Dispose (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x414baf0

void Cameras_MinimapCamera_<TakeSnapshotCoroutine>d__11__System_IDisposable_Dispose
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$MoveNext
// il2cpp: bool Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__MoveNext (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x414bb00

bool_conflict
Cameras_MinimapCamera_<TakeSnapshotCoroutine>d__11__MoveNext
          (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,MethodInfo *method)

{
  uint uVar1;
  Cameras_MinimapCamera_o *__this_00;
  UnityEngine_Texture2D_o *pUVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  uint *method_00;
  
  if (DAT_057049bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_057049bc = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  if (4 < uVar1) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  method_00 = &switchD_0414bb4f::switchdataD_00d82250;
  switch(uVar1) {
  case 0:
    (__this->fields).__1__state = -1;
    pUVar2 = (__this->fields).texture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      if (__this_00 != (Cameras_MinimapCamera_o *)0x0) {
        Cameras_MinimapCamera__RTImage
                  (__this_00,(UnityEngine_Vector3_o)(__this->fields).position.fields,
                   (__this->fields).height,(__this->fields).texture,
                   (uint)(byte)(__this->fields).minimap,(MethodInfo *)method_00);
        pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor
                  ((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar4;
        uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
        (__this->fields).__1__state = 1;
        goto LAB_0414bd01;
      }
      goto LAB_0414bd09;
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar4;
    uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
    (__this->fields).__1__state = 2;
    goto LAB_0414bd01;
  case 2:
    (__this->fields).__1__state = -1;
    pUVar2 = (__this->fields).texture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      pUVar2 = (__this->fields).texture;
      if (pUVar2 == (UnityEngine_Texture2D_o *)0x0) goto LAB_0414bd09;
      UnityEngine_Texture2D__Apply(pUVar2,(MethodInfo *)0x0);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
      (__this->fields).__1__state = 3;
      goto LAB_0414bd01;
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar4;
    uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
    (__this->fields).__1__state = 4;
LAB_0414bd01:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
  case 4:
    (__this->fields).__1__state = -1;
  }
  if (__this_00 != (Cameras_MinimapCamera_o *)0x0) {
    *(undefined1 *)&(__this_00->fields)._takingSnapshot = 0;
    return 0;
  }
LAB_0414bd09:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x414bd10

Il2CppObject *
Cameras_MinimapCamera_<TakeSnapshotCoroutine>d__11__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_Collections_IEnumerator_Reset (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x414bd20

void Cameras_MinimapCamera_<TakeSnapshotCoroutine>d__11__System_Collections_IEnumerator_Reset
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,MethodInfo *method)

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


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_Collections_IEnumerator_get_Current (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x414bd60

Il2CppObject *
Cameras_MinimapCamera_<TakeSnapshotCoroutine>d__11__System_Collections_IEnumerator_get_Current
          (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Cameras.MinimapCamera$$Awake
// il2cpp: void Cameras_MinimapCamera__Awake (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x414b2b0

void Cameras_MinimapCamera__Awake(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_RenderTexture_o *pUVar3;
  
  if (DAT_057049b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MinimapCameraRender_AddComponent_MinimapCameraRe);
    il2cpp_init_method_metadata(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_RenderTexture_InstantiateAsset_RenderTexture);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Minimap/Textures/MinimapRenderTexture");
    il2cpp_init_method_metadata(&"Minimap/Textures/MapRenderTexture");
    il2cpp_init_method_metadata(&"Minimap/Prefabs/MinimapCamera");
    DAT_057049b7 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (path,"Minimap/Prefabs/MinimapCamera",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_MinimapCameraRender_AddComponent_MinimapCameraRe);
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    (__this->fields)._cameraTransform = pUVar1;
    il2cpp_runtime_glue(&(__this->fields)._cameraTransform,pUVar1);
    pUVar2 = (UnityEngine_Camera_o *)
             UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Camera_GetComponent_Camera);
    (__this->fields)._camera = pUVar2;
    il2cpp_runtime_glue(&(__this->fields)._camera);
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_RenderTexture_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset<object>
                       ((System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8),"Minimap/Textures/MinimapRenderTexture",0,
                        MethodInfo_RenderTexture_InstantiateAsset_RenderTexture);
    (__this->fields)._minimapRenderTexture = pUVar3;
    il2cpp_runtime_glue(&(__this->fields)._minimapRenderTexture,pUVar3);
    pUVar3 = (UnityEngine_RenderTexture_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset<object>
                       ((System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8),"Minimap/Textures/MapRenderTexture",0,
                        MethodInfo_RenderTexture_InstantiateAsset_RenderTexture);
    (__this->fields)._mapRenderTexture = pUVar3;
    il2cpp_runtime_glue(&(__this->fields)._mapRenderTexture,pUVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MinimapCamera$$Ready
// il2cpp: bool Cameras_MinimapCamera__Ready (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x414b470

bool_conflict Cameras_MinimapCamera__Ready(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._takingSnapshot == '\0');
}


// Cameras.MinimapCamera$$TakeSnapshot
// il2cpp: void Cameras_MinimapCamera__TakeSnapshot (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, bool immediate, const MethodInfo* method);
// 0x414b480

void Cameras_MinimapCamera__TakeSnapshot
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
               UnityEngine_Texture2D_o *texture,bool_conflict minimap,bool_conflict immediate,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  undefined4 in_register_0000000c;
  
  if ((char)(__this->fields)._takingSnapshot != '\0') {
    return;
  }
  if ((char)immediate == '\0') {
    *(undefined1 *)&(__this->fields)._takingSnapshot = 1;
    if (DAT_057049b9 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_TakeSnapshotCoroutine_d__11);
      DAT_057049b9 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TakeSnapshotCoroutine_d__11);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].monitor = __this;
      il2cpp_runtime_glue(&__this_00[2].monitor,__this);
      __this_00[3].klass = position.fields._0_8_;
      *(float *)&__this_00[3].monitor = position.fields.z;
      *(float *)((long)&__this_00[3].monitor + 4) = height;
      __this_00[2].klass = (Il2CppClass *)texture;
      il2cpp_runtime_glue(__this_00 + 2,texture);
      *(char *)&__this_00[4].klass = (char)minimap;
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00
                 ,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (DAT_057049b8 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_057049b8 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if ((char)bVar1 != '\0') {
      return;
    }
    Cameras_MinimapCamera__RTImage
              (__this,position,height,texture,minimap & 0xff,
               (MethodInfo *)CONCAT44(in_register_0000000c,immediate));
    if (texture != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply(texture,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MinimapCamera$$TakeSnapshotImmediate
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotImmediate (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x414b600

void Cameras_MinimapCamera__TakeSnapshotImmediate
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
               UnityEngine_Texture2D_o *texture,bool_conflict minimap,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057049b8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049b8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  Cameras_MinimapCamera__RTImage(__this,position,height,texture,minimap & 0xff,method);
  if (texture != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__Apply(texture,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MinimapCamera$$TakeSnapshotCoroutine
// il2cpp: System_Collections_IEnumerator_o* Cameras_MinimapCamera__TakeSnapshotCoroutine (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x414b6b0

System_Collections_IEnumerator_o *
Cameras_MinimapCamera__TakeSnapshotCoroutine
          (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
          UnityEngine_Texture2D_o *texture,bool_conflict minimap,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057049b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TakeSnapshotCoroutine_d__11);
    DAT_057049b9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TakeSnapshotCoroutine_d__11);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[3].klass = position.fields._0_8_;
    *(float *)&__this_00[3].monitor = position.fields.z;
    *(float *)((long)&__this_00[3].monitor + 4) = height;
    __this_00[2].klass = (Il2CppClass *)texture;
    il2cpp_runtime_glue(__this_00 + 2,texture);
    *(char *)&__this_00[4].klass = (char)minimap;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MinimapCamera$$RTImage
// il2cpp: void Cameras_MinimapCamera__RTImage (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x414b780

void Cameras_MinimapCamera__RTImage
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
               UnityEngine_Texture2D_o *texture,bool_conflict minimap,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  undefined1 auVar2 [16];
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RenderTexture_o *value;
  UnityEngine_RenderTexture_o *value_00;
  int iVar4;
  UnityEngine_Camera_o *pUVar5;
  UnityEngine_Quaternion_o value_01;
  
  if (DAT_057049ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MinimapCamera);
    DAT_057049ba = '\x01';
  }
  pUVar1 = (__this->fields)._cameraTransform;
  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_0414ba3c;
  pUVar3 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0414ba3c;
  UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
  pUVar5 = (__this->fields)._camera;
  if (pUVar5 == (UnityEngine_Camera_o *)0x0) goto LAB_0414ba3c;
  UnityEngine_Camera__set_orthographicSize(pUVar5,height * 0.5,(MethodInfo *)0x0);
  pUVar5 = (__this->fields)._camera;
  if (pUVar5 == (UnityEngine_Camera_o *)0x0) goto LAB_0414ba3c;
  UnityEngine_Camera__set_farClipPlane(pUVar5,height + 1000.0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._cameraTransform;
  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_0414ba3c;
  UnityEngine_Transform__set_position(pUVar1,position,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._cameraTransform;
  value_01 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0x3fc90fdb),(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_Transform_o *)0x0) goto LAB_0414ba3c;
  UnityEngine_Transform__set_rotation(pUVar1,value_01,(MethodInfo *)0x0);
  value = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
    il2cpp_init_class(TypeInfo_MinimapCamera);
    pUVar5 = (__this->fields)._camera;
    if ((char)minimap == '\0') goto LAB_0414b8d5;
LAB_0414b8a1:
    if (pUVar5 == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar4 = **(int **)(TypeInfo_MinimapCamera + 0xb8);
    UnityEngine_Camera__set_targetTexture
              (pUVar5,(__this->fields)._minimapRenderTexture,(MethodInfo *)0x0);
  }
  else {
    pUVar5 = (__this->fields)._camera;
    if ((char)minimap != '\0') goto LAB_0414b8a1;
LAB_0414b8d5:
    if (pUVar5 == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Camera__set_targetTexture
              (pUVar5,(__this->fields)._mapRenderTexture,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar4 = *(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
  }
  pUVar5 = (__this->fields)._camera;
  if (pUVar5 == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value_00 = UnityEngine_Camera__get_targetTexture(pUVar5,(MethodInfo *)0x0);
  UnityEngine_RenderTexture__set_active(value_00,(MethodInfo *)0x0);
  pUVar5 = (__this->fields)._camera;
  if (pUVar5 == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UnityEngine_Camera__Render(pUVar5,(MethodInfo *)0x0);
  if (texture == (UnityEngine_Texture2D_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  auVar2._4_4_ = (float)iVar4;
  auVar2._0_4_ = (float)iVar4;
  auVar2._8_8_ = 0;
  UnityEngine_Texture2D__ReadPixels
            (texture,(UnityEngine_Rect_o)(auVar2 << 0x40),0,0,(MethodInfo *)0x0);
  UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._cameraTransform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0414ba3c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MinimapCamera$$.ctor
// il2cpp: void Cameras_MinimapCamera___ctor (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x414baa0

void Cameras_MinimapCamera___ctor(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Cameras.MinimapCamera$$.cctor
// il2cpp: void Cameras_MinimapCamera___cctor (const MethodInfo* method);
// 0x414bab0

void Cameras_MinimapCamera___cctor(MethodInfo *method)

{
  if (DAT_057049bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MinimapCamera);
    DAT_057049bb = '\x01';
  }
  **(undefined8 **)(TypeInfo_MinimapCamera + 0xb8) = 0x3840000012c;
  return;
}


