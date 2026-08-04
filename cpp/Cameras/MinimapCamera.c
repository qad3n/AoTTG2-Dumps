// Type: Cameras.MinimapCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/MinimapCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// --------------------------------

// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$.ctor
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11___ctor (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x447ea90

void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11___ctor
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$System.IDisposable.Dispose
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_IDisposable_Dispose (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x447eb00

void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_IDisposable_Dispose
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,MethodInfo *method)

{
  return;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$MoveNext
// il2cpp: bool Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__MoveNext (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x447eb10

bool_conflict
Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__MoveNext
          (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,MethodInfo *method)

{
  uint uVar1;
  Cameras_MinimapCamera_o *__this_00;
  UnityEngine_Texture2D_o *__this_01;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  uint *method_00;
  Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *x;
  
  x = __this;
  if (g_data_057ae882 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    x = (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *)&TypeInfo_WaitForEndOfFrame;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae882 = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  if (4 < uVar1) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  method_00 = &switchD_0447eb5f::switchdataD_00d99a08;
  switch(uVar1) {
  case 0:
    (__this->fields).__1__state = -1;
    x = (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *)(__this->fields).texture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (__this_00 != (Cameras_MinimapCamera_o *)0x0) {
        Cameras_MinimapCamera__RTImage
                  (__this_00,(UnityEngine_Vector3_o)(__this->fields).position.fields,(__this->fields).height,
                   (__this->fields).texture,(uint)(byte)(__this->fields).minimap,(MethodInfo *)method_00);
        pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar3;
        uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar3);
        (__this->fields).__1__state = 1;
        goto label_0447ed11;
      }
      goto label_0447ed19;
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 2;
    goto label_0447ed11;
  case 2:
    (__this->fields).__1__state = -1;
    x = (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *)(__this->fields).texture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_01 = (__this->fields).texture;
      x = (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *)0x0;
      if (__this_01 == (UnityEngine_Texture2D_o *)0x0) goto label_0447ed19;
      UnityEngine_Texture2D__Apply_4dd97c0(__this_01,(MethodInfo *)0x0);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar3;
      uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar3);
      (__this->fields).__1__state = 3;
      goto label_0447ed11;
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 4;
label_0447ed11:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  case 4:
    (__this->fields).__1__state = -1;
  }
  if (__this_00 != (Cameras_MinimapCamera_o *)0x0) {
    *(undefined1 *)&(__this_00->fields)._takingSnapshot = 0;
    return 0;
  }
label_0447ed19:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(x->fields).__2__current;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x447ed20

Il2CppObject *
Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_Collections_IEnumerator_Reset (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x447ed30

void Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_Collections_IEnumerator_Reset
               (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,MethodInfo *method)

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


// Cameras.MinimapCamera.<TakeSnapshotCoroutine>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_Collections_IEnumerator_get_Current (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o* __this, const MethodInfo* method);
// 0x447ed70

Il2CppObject *
Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11__System_Collections_IEnumerator_get_Current
          (Cameras_MinimapCamera__TakeSnapshotCoroutine_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Cameras.MinimapCamera$$Awake
// il2cpp: void Cameras_MinimapCamera__Awake (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x447e2c0

void Cameras_MinimapCamera__Awake(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_RenderTexture_o *pUVar3;
  
  if (g_data_057ae87d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MinimapCameraRender_AddComponent_MinimapCameraRender);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_GetComponent_Camera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RenderTexture_InstantiateAsset_RenderTexture);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Minimap/Textures/MinimapRenderTexture");
    il2cpp_runtime_helper_023445d0(&"Minimap/Textures/MapRenderTexture");
    il2cpp_runtime_helper_023445d0(&"Minimap/Prefabs/MinimapCamera");
    g_data_057ae87d = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,"Minimap/Prefabs/MinimapCamera",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_MinimapCameraRender_AddComponent_MinimapCameraRender);
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    (__this->fields)._cameraTransform = pUVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._cameraTransform,pUVar1);
    pUVar2 = (UnityEngine_Camera_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Camera_GetComponent_Camera);
    (__this->fields)._camera = pUVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._camera);
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_RenderTexture_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       ((System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8),"Minimap/Textures/MinimapRenderTexture",0,MethodInfo_RenderTexture_InstantiateAsset_RenderTexture)
    ;
    (__this->fields)._minimapRenderTexture = pUVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._minimapRenderTexture,pUVar3);
    pUVar3 = (UnityEngine_RenderTexture_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       ((System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8),"Minimap/Textures/MapRenderTexture",0,MethodInfo_RenderTexture_InstantiateAsset_RenderTexture)
    ;
    (__this->fields)._mapRenderTexture = pUVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._mapRenderTexture,pUVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Cameras.MinimapCamera$$Ready
// il2cpp: bool Cameras_MinimapCamera__Ready (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x447e480

bool_conflict Cameras_MinimapCamera__Ready(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._takingSnapshot == '\0');
}


// Cameras.MinimapCamera$$TakeSnapshot
// il2cpp: void Cameras_MinimapCamera__TakeSnapshot (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, bool immediate, const MethodInfo* method);
// 0x447e490

void Cameras_MinimapCamera__TakeSnapshot
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
               UnityEngine_Texture2D_o *texture,bool_conflict minimap,bool_conflict immediate,
               MethodInfo *method)

{
  uint uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  bool_conflict bVar4;
  Cameras_MinimapCamera_o *pCVar5;
  Il2CppObject *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_RenderTexture_o *value;
  UnityEngine_RenderTexture_o *value_00;
  Cameras_MinimapCamera_o *__this_01;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 in_register_0000000c;
  MethodInfo *method_00;
  undefined1 extraout_DL;
  char extraout_DL_00;
  uint extraout_EDX;
  Il2CppClass *pIVar9;
  Il2CppClass *pIVar10;
  UnityEngine_Texture2D_o *__this_02;
  Il2CppObject *pIVar11;
  UnityEngine_Camera_o *__this_03;
  float fVar12;
  float fVar13;
  float fVar14;
  float height_00;
  UnityEngine_Quaternion_o value_01;
  undefined1 auVar15 [12];
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o value_02;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_0000000c,immediate);
  fVar12 = position.fields.z;
  if ((char)(__this->fields)._takingSnapshot != '\0') {
    return;
  }
  fVar13 = fVar12;
  if ((char)immediate == '\0') {
    *(undefined1 *)&(__this->fields)._takingSnapshot = 1;
    height_00 = height;
    if (g_data_057ae87f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__11);
      g_data_057ae87f = '\x01';
    }
    pCVar5 = (Cameras_MinimapCamera_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__11);
    pIVar9 = (Il2CppClass *)0x0;
    __this_01 = pCVar5;
    System_Object___ctor((Il2CppObject *)pCVar5,(MethodInfo *)0x0);
    *(undefined4 *)&(pCVar5->fields).m_CachedPtr = 0;
    if (pCVar5 != (Cameras_MinimapCamera_o *)0x0) {
      (pCVar5->fields)._camera = (UnityEngine_Camera_o *)__this;
      il2cpp_runtime_helper_022b4080(&(pCVar5->fields)._camera,__this);
      *(long *)&(pCVar5->fields)._takingSnapshot = position.fields._0_8_;
      *(float *)&(pCVar5->fields)._minimapRenderTexture = fVar12;
      *(float *)((long)&(pCVar5->fields)._minimapRenderTexture + 4) = height;
      (pCVar5->fields)._cameraTransform = (UnityEngine_Transform_o *)texture;
      il2cpp_runtime_helper_022b4080(&(pCVar5->fields)._cameraTransform,texture);
      *(char *)&(pCVar5->fields)._mapRenderTexture = (char)minimap;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pCVar5,
                 (MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (g_data_057ae87e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae87e = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    pIVar9 = (Il2CppClass *)texture;
    Cameras_MinimapCamera__RTImage(__this,position,height,texture,minimap & 0xff,method_00);
    __this_01 = __this;
    height_00 = height;
    if (texture != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply_4dd97c0(texture,(MethodInfo *)0x0);
      return;
    }
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae87e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae87e = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  position_00.fields.z = fVar13;
  position_00.fields.x = (float)(int)uVar7;
  position_00.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
  pIVar10 = pIVar9;
  pCVar5 = __this_01;
  Cameras_MinimapCamera__RTImage
            (__this_01,position_00,height_00,(UnityEngine_Texture2D_o *)pIVar9,extraout_EDX & 0xff,method_00);
  if (pIVar9 != (Il2CppClass *)0x0) {
    UnityEngine_Texture2D__Apply_4dd97c0((UnityEngine_Texture2D_o *)pIVar9,(MethodInfo *)0x0);
    return;
  }
  pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  fVar12 = height_00;
  fVar14 = fVar13;
  if (g_data_057ae87f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__11);
    g_data_057ae87f = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__11);
  __this_02 = (UnityEngine_Texture2D_o *)0x0;
  pIVar11 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = pCVar5;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pCVar5);
    __this_00[3].klass = pIVar9;
    *(float *)&__this_00[3].monitor = fVar13;
    *(float *)((long)&__this_00[3].monitor + 4) = height_00;
    __this_00[2].klass = pIVar10;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar10);
    *(undefined1 *)&__this_00[4].klass = extraout_DL;
    return;
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae880 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    g_data_057ae880 = '\x01';
  }
  if ((pIVar11[2].klass != (Il2CppClass *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pIVar11[2].klass,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
    if (pIVar11[2].monitor != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__set_orthographicSize(pIVar11[2].monitor,fVar12 * 0.5,(MethodInfo *)0x0);
      if (pIVar11[2].monitor != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_farClipPlane(pIVar11[2].monitor,fVar12 + 1000.0,(MethodInfo *)0x0);
        if (pIVar11[2].klass != (Il2CppClass *)0x0) {
          value_02.fields.z = fVar14;
          value_02.fields.x = (float)(int)uVar7;
          value_02.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
          UnityEngine_Transform__set_position
                    ((UnityEngine_Transform_o *)pIVar11[2].klass,value_02,(MethodInfo *)0x0);
          pIVar9 = pIVar11[2].klass;
          value_01 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)ZEXT812(0x3fc90fdb),(MethodInfo *)0x0);
          __this_01 = (Cameras_MinimapCamera_o *)0x0;
          if (pIVar9 != (Il2CppClass *)0x0) {
            UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)pIVar9,value_01,(MethodInfo *)0x0);
            value = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
            if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0(TypeInfo_MinimapCamera);
              __this_03 = pIVar11[2].monitor;
              if (extraout_DL_00 == '\0') goto label_0447e8e5;
label_0447e8b1:
              if (__this_03 == (UnityEngine_Camera_o *)0x0) {
label_0447e9b6:
                il2cpp_runtime_helper_022b2c90();
                goto label_0447e9bb;
              }
              uVar1 = **(uint **)(TypeInfo_MinimapCamera + 0xb8);
              UnityEngine_Camera__set_targetTexture(__this_03,pIVar11[3].monitor,(MethodInfo *)0x0);
label_0447e919:
              __this_01 = (Cameras_MinimapCamera_o *)(ulong)uVar1;
              if (pIVar11[2].monitor == (UnityEngine_Camera_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
label_0447e9ac:
                il2cpp_runtime_helper_022b2c90();
label_0447e9b1:
                il2cpp_runtime_helper_022b2c90();
                goto label_0447e9b6;
              }
              value_00 = UnityEngine_Camera__get_targetTexture(pIVar11[2].monitor,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__set_active(value_00,(MethodInfo *)0x0);
              if (pIVar11[2].monitor == (UnityEngine_Camera_o *)0x0) goto label_0447e9ac;
              UnityEngine_Camera__Render(pIVar11[2].monitor,(MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_Texture2D_o *)0x0) goto label_0447e9b1;
              auVar2._4_4_ = (float)(int)uVar1;
              auVar2._0_4_ = (float)(int)uVar1;
              auVar2._8_8_ = 0;
              UnityEngine_Texture2D__ReadPixels_4dd9b70
                        (__this_02,(UnityEngine_Rect_o)(auVar2 << 0x40),0,0,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
              pIVar9 = pIVar11[2].klass;
            }
            else {
              __this_03 = pIVar11[2].monitor;
              if (extraout_DL_00 != '\0') goto label_0447e8b1;
label_0447e8e5:
              if (__this_03 != (UnityEngine_Camera_o *)0x0) {
                UnityEngine_Camera__set_targetTexture
                          (__this_03,(UnityEngine_RenderTexture_o *)pIVar11[4].klass,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uVar1 = *(uint *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
                goto label_0447e919;
              }
label_0447e9bb:
              auVar15 = il2cpp_runtime_helper_022b2c90();
              if (auVar15._8_4_ != 1) {
                _Unwind_Resume(auVar15._0_8_);
              }
              __this_01 = (Cameras_MinimapCamera_o *)__cxa_begin_catch(auVar15._0_8_);
              uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
              cVar3 = il2cpp_runtime_helper_0233e000(uVar7);
              if (cVar3 == '\0') goto label_0447ea51;
              __cxa_end_catch();
              pIVar9 = pIVar11[2].klass;
            }
            if ((pIVar9 != (Il2CppClass *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pIVar9,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0447ea51:
  puVar8 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar8 = __this_01->klass;
  __cxa_throw(puVar8,&PTR_PTR_05215060,0);
}


// Cameras.MinimapCamera$$TakeSnapshotImmediate
// il2cpp: void Cameras_MinimapCamera__TakeSnapshotImmediate (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x447e610

void Cameras_MinimapCamera__TakeSnapshotImmediate
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
               UnityEngine_Texture2D_o *texture,bool_conflict minimap,MethodInfo *method)

{
  uint uVar1;
  undefined1 auVar2 [16];
  Il2CppClass *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  Il2CppObject *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_RenderTexture_o *value;
  UnityEngine_RenderTexture_o *value_00;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 extraout_DL;
  char extraout_DL_00;
  Il2CppClass *pIVar9;
  UnityEngine_Texture2D_o *__this_01;
  Cameras_MinimapCamera_o *pCVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Camera_o *__this_02;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Quaternion_o value_01;
  undefined1 auVar15 [12];
  UnityEngine_Vector3_o value_02;
  
  fVar12 = position.fields.z;
  if (g_data_057ae87e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae87e = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pIVar9 = (Il2CppClass *)texture;
  pCVar10 = __this;
  Cameras_MinimapCamera__RTImage(__this,position,height,texture,minimap & 0xff,method);
  if (texture != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__Apply_4dd97c0(texture,(MethodInfo *)0x0);
    return;
  }
  pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  fVar14 = height;
  fVar13 = fVar12;
  if (g_data_057ae87f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__11);
    g_data_057ae87f = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__11);
  __this_01 = (UnityEngine_Texture2D_o *)0x0;
  pIVar11 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = pCVar10;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pCVar10);
    __this_00[3].klass = pIVar3;
    *(float *)&__this_00[3].monitor = fVar12;
    *(float *)((long)&__this_00[3].monitor + 4) = height;
    __this_00[2].klass = pIVar9;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar9);
    *(undefined1 *)&__this_00[4].klass = extraout_DL;
    return;
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae880 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    g_data_057ae880 = '\x01';
  }
  if ((pIVar11[2].klass != (Il2CppClass *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pIVar11[2].klass,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
    if (pIVar11[2].monitor != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__set_orthographicSize(pIVar11[2].monitor,fVar14 * 0.5,(MethodInfo *)0x0);
      if (pIVar11[2].monitor != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_farClipPlane(pIVar11[2].monitor,fVar14 + 1000.0,(MethodInfo *)0x0);
        if (pIVar11[2].klass != (Il2CppClass *)0x0) {
          value_02.fields.z = fVar13;
          value_02.fields.x = (float)(int)uVar7;
          value_02.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
          UnityEngine_Transform__set_position
                    ((UnityEngine_Transform_o *)pIVar11[2].klass,value_02,(MethodInfo *)0x0);
          pIVar9 = pIVar11[2].klass;
          value_01 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)ZEXT812(0x3fc90fdb),(MethodInfo *)0x0);
          __this = (Cameras_MinimapCamera_o *)0x0;
          if (pIVar9 != (Il2CppClass *)0x0) {
            UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)pIVar9,value_01,(MethodInfo *)0x0);
            value = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
            if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0(TypeInfo_MinimapCamera);
              __this_02 = pIVar11[2].monitor;
              if (extraout_DL_00 != '\0') goto label_0447e8b1;
label_0447e8e5:
              if (__this_02 == (UnityEngine_Camera_o *)0x0) goto label_0447e9bb;
              UnityEngine_Camera__set_targetTexture
                        (__this_02,(UnityEngine_RenderTexture_o *)pIVar11[4].klass,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar1 = *(uint *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
label_0447e919:
              __this = (Cameras_MinimapCamera_o *)(ulong)uVar1;
              if (pIVar11[2].monitor == (UnityEngine_Camera_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
label_0447e9ac:
                il2cpp_runtime_helper_022b2c90();
label_0447e9b1:
                il2cpp_runtime_helper_022b2c90();
                goto label_0447e9b6;
              }
              value_00 = UnityEngine_Camera__get_targetTexture(pIVar11[2].monitor,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__set_active(value_00,(MethodInfo *)0x0);
              if (pIVar11[2].monitor == (UnityEngine_Camera_o *)0x0) goto label_0447e9ac;
              UnityEngine_Camera__Render(pIVar11[2].monitor,(MethodInfo *)0x0);
              if (__this_01 == (UnityEngine_Texture2D_o *)0x0) goto label_0447e9b1;
              auVar2._4_4_ = (float)(int)uVar1;
              auVar2._0_4_ = (float)(int)uVar1;
              auVar2._8_8_ = 0;
              UnityEngine_Texture2D__ReadPixels_4dd9b70
                        (__this_01,(UnityEngine_Rect_o)(auVar2 << 0x40),0,0,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
              pIVar9 = pIVar11[2].klass;
            }
            else {
              __this_02 = pIVar11[2].monitor;
              if (extraout_DL_00 == '\0') goto label_0447e8e5;
label_0447e8b1:
              if (__this_02 != (UnityEngine_Camera_o *)0x0) {
                uVar1 = **(uint **)(TypeInfo_MinimapCamera + 0xb8);
                UnityEngine_Camera__set_targetTexture(__this_02,pIVar11[3].monitor,(MethodInfo *)0x0);
                goto label_0447e919;
              }
label_0447e9b6:
              il2cpp_runtime_helper_022b2c90();
label_0447e9bb:
              auVar15 = il2cpp_runtime_helper_022b2c90();
              if (auVar15._8_4_ != 1) {
                _Unwind_Resume(auVar15._0_8_);
              }
              __this = (Cameras_MinimapCamera_o *)__cxa_begin_catch(auVar15._0_8_);
              uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
              cVar4 = il2cpp_runtime_helper_0233e000(uVar7);
              if (cVar4 == '\0') goto label_0447ea51;
              __cxa_end_catch();
              pIVar9 = pIVar11[2].klass;
            }
            if ((pIVar9 != (Il2CppClass *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pIVar9,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0447ea51:
  puVar8 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar8 = __this->klass;
  __cxa_throw(puVar8,&PTR_PTR_05215060,0);
}


// Cameras.MinimapCamera$$TakeSnapshotCoroutine
// il2cpp: System_Collections_IEnumerator_o* Cameras_MinimapCamera__TakeSnapshotCoroutine (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x447e6c0

System_Collections_IEnumerator_o *
Cameras_MinimapCamera__TakeSnapshotCoroutine
          (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
          UnityEngine_Texture2D_o *texture,bool_conflict minimap,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  undefined1 auVar3 [16];
  char cVar4;
  Il2CppObject *__this_00;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_RenderTexture_o *value;
  UnityEngine_RenderTexture_o *value_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined8 uVar6;
  undefined8 *puVar7;
  char extraout_DL;
  undefined8 *unaff_RBP;
  UnityEngine_Texture2D_o *__this_01;
  Il2CppObject *pIVar8;
  UnityEngine_Camera_o *__this_02;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Quaternion_o value_01;
  undefined1 auVar12 [12];
  UnityEngine_Vector3_o value_02;
  
  fVar9 = position.fields.z;
  fVar11 = height;
  fVar10 = fVar9;
  if (g_data_057ae87f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__11);
    g_data_057ae87f = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__11);
  __this_01 = (UnityEngine_Texture2D_o *)0x0;
  pIVar8 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    __this_00[3].klass = position.fields._0_8_;
    *(float *)&__this_00[3].monitor = fVar9;
    *(float *)((long)&__this_00[3].monitor + 4) = height;
    __this_00[2].klass = (Il2CppClass *)texture;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,texture);
    *(char *)&__this_00[4].klass = (char)minimap;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  uVar6 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae880 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    g_data_057ae880 = '\x01';
  }
  if ((pIVar8[2].klass != (Il2CppClass *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pIVar8[2].klass,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
    if (pIVar8[2].monitor != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__set_orthographicSize(pIVar8[2].monitor,fVar11 * 0.5,(MethodInfo *)0x0);
      if (pIVar8[2].monitor != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_farClipPlane(pIVar8[2].monitor,fVar11 + 1000.0,(MethodInfo *)0x0);
        if (pIVar8[2].klass != (Il2CppClass *)0x0) {
          value_02.fields.z = fVar10;
          value_02.fields.x = (float)(int)uVar6;
          value_02.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
          UnityEngine_Transform__set_position
                    ((UnityEngine_Transform_o *)pIVar8[2].klass,value_02,(MethodInfo *)0x0);
          pIVar2 = pIVar8[2].klass;
          value_01 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)ZEXT812(0x3fc90fdb),(MethodInfo *)0x0);
          unaff_RBP = (undefined8 *)0x0;
          if (pIVar2 != (Il2CppClass *)0x0) {
            UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)pIVar2,value_01,(MethodInfo *)0x0);
            value = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
            if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0(TypeInfo_MinimapCamera);
              __this_02 = pIVar8[2].monitor;
              if (extraout_DL != '\0') goto label_0447e8b1;
label_0447e8e5:
              if (__this_02 == (UnityEngine_Camera_o *)0x0) goto label_0447e9bb;
              UnityEngine_Camera__set_targetTexture
                        (__this_02,(UnityEngine_RenderTexture_o *)pIVar8[4].klass,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar1 = *(uint *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
label_0447e919:
              unaff_RBP = (undefined8 *)(ulong)uVar1;
              if (pIVar8[2].monitor == (UnityEngine_Camera_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
label_0447e9ac:
                il2cpp_runtime_helper_022b2c90();
label_0447e9b1:
                il2cpp_runtime_helper_022b2c90();
                goto label_0447e9b6;
              }
              value_00 = UnityEngine_Camera__get_targetTexture(pIVar8[2].monitor,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__set_active(value_00,(MethodInfo *)0x0);
              if (pIVar8[2].monitor == (UnityEngine_Camera_o *)0x0) goto label_0447e9ac;
              UnityEngine_Camera__Render(pIVar8[2].monitor,(MethodInfo *)0x0);
              if (__this_01 == (UnityEngine_Texture2D_o *)0x0) goto label_0447e9b1;
              auVar3._4_4_ = (float)(int)uVar1;
              auVar3._0_4_ = (float)(int)uVar1;
              auVar3._8_8_ = 0;
              UnityEngine_Texture2D__ReadPixels_4dd9b70
                        (__this_01,(UnityEngine_Rect_o)(auVar3 << 0x40),0,0,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
              pIVar2 = pIVar8[2].klass;
            }
            else {
              __this_02 = pIVar8[2].monitor;
              if (extraout_DL == '\0') goto label_0447e8e5;
label_0447e8b1:
              if (__this_02 != (UnityEngine_Camera_o *)0x0) {
                uVar1 = **(uint **)(TypeInfo_MinimapCamera + 0xb8);
                UnityEngine_Camera__set_targetTexture(__this_02,pIVar8[3].monitor,(MethodInfo *)0x0);
                goto label_0447e919;
              }
label_0447e9b6:
              il2cpp_runtime_helper_022b2c90();
label_0447e9bb:
              auVar12 = il2cpp_runtime_helper_022b2c90();
              if (auVar12._8_4_ != 1) {
                _Unwind_Resume(auVar12._0_8_);
              }
              unaff_RBP = (undefined8 *)__cxa_begin_catch(auVar12._0_8_);
              uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
              cVar4 = il2cpp_runtime_helper_0233e000(uVar6);
              if (cVar4 == '\0') goto label_0447ea51;
              __cxa_end_catch();
              pIVar2 = pIVar8[2].klass;
            }
            if ((pIVar2 != (Il2CppClass *)0x0) &&
               (pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pIVar2,(MethodInfo *)0x0),
               pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
              return extraout_RAX;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0447ea51:
  puVar7 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar7 = *unaff_RBP;
  __cxa_throw(puVar7,&PTR_PTR_05215060,0);
}


// Cameras.MinimapCamera$$RTImage
// il2cpp: void Cameras_MinimapCamera__RTImage (Cameras_MinimapCamera_o* __this, UnityEngine_Vector3_o position, float height, UnityEngine_Texture2D_o* texture, bool minimap, const MethodInfo* method);
// 0x447e790

void Cameras_MinimapCamera__RTImage
               (Cameras_MinimapCamera_o *__this,UnityEngine_Vector3_o position,float height,
               UnityEngine_Texture2D_o *texture,bool_conflict minimap,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Transform_o *pUVar2;
  undefined1 auVar3 [16];
  char cVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_RenderTexture_o *value;
  UnityEngine_RenderTexture_o *value_00;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  UnityEngine_Camera_o *pUVar8;
  UnityEngine_Quaternion_o value_01;
  undefined1 auVar9 [12];
  
  if (g_data_057ae880 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    g_data_057ae880 = '\x01';
  }
  pUVar2 = (__this->fields)._cameraTransform;
  if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
    pUVar8 = (__this->fields)._camera;
    if (pUVar8 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__set_orthographicSize(pUVar8,height * 0.5,(MethodInfo *)0x0);
      pUVar8 = (__this->fields)._camera;
      if (pUVar8 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_farClipPlane(pUVar8,height + 1000.0,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._cameraTransform;
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_position(pUVar2,position,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._cameraTransform;
          value_01 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)ZEXT812(0x3fc90fdb),(MethodInfo *)0x0);
          unaff_RBP = (undefined8 *)0x0;
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_rotation(pUVar2,value_01,(MethodInfo *)0x0);
            value = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
            if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0(TypeInfo_MinimapCamera);
              pUVar8 = (__this->fields)._camera;
              if ((char)minimap != '\0') goto label_0447e8b1;
label_0447e8e5:
              if (pUVar8 == (UnityEngine_Camera_o *)0x0) goto label_0447e9bb;
              UnityEngine_Camera__set_targetTexture
                        (pUVar8,(__this->fields)._mapRenderTexture,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar1 = *(uint *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
label_0447e919:
              unaff_RBP = (undefined8 *)(ulong)uVar1;
              pUVar8 = (__this->fields)._camera;
              if (pUVar8 == (UnityEngine_Camera_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
label_0447e9ac:
                il2cpp_runtime_helper_022b2c90();
label_0447e9b1:
                il2cpp_runtime_helper_022b2c90();
                goto label_0447e9b6;
              }
              value_00 = UnityEngine_Camera__get_targetTexture(pUVar8,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__set_active(value_00,(MethodInfo *)0x0);
              pUVar8 = (__this->fields)._camera;
              if (pUVar8 == (UnityEngine_Camera_o *)0x0) goto label_0447e9ac;
              UnityEngine_Camera__Render(pUVar8,(MethodInfo *)0x0);
              if (texture == (UnityEngine_Texture2D_o *)0x0) goto label_0447e9b1;
              auVar3._4_4_ = (float)(int)uVar1;
              auVar3._0_4_ = (float)(int)uVar1;
              auVar3._8_8_ = 0;
              UnityEngine_Texture2D__ReadPixels_4dd9b70
                        (texture,(UnityEngine_Rect_o)(auVar3 << 0x40),0,0,(MethodInfo *)0x0);
              UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
              pUVar2 = (__this->fields)._cameraTransform;
            }
            else {
              pUVar8 = (__this->fields)._camera;
              if ((char)minimap == '\0') goto label_0447e8e5;
label_0447e8b1:
              if (pUVar8 != (UnityEngine_Camera_o *)0x0) {
                uVar1 = **(uint **)(TypeInfo_MinimapCamera + 0xb8);
                UnityEngine_Camera__set_targetTexture
                          (pUVar8,(__this->fields)._minimapRenderTexture,(MethodInfo *)0x0);
                goto label_0447e919;
              }
label_0447e9b6:
              il2cpp_runtime_helper_022b2c90();
label_0447e9bb:
              auVar9 = il2cpp_runtime_helper_022b2c90();
              if (auVar9._8_4_ != 1) {
                _Unwind_Resume(auVar9._0_8_);
              }
              unaff_RBP = (undefined8 *)__cxa_begin_catch(auVar9._0_8_);
              uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
              cVar4 = il2cpp_runtime_helper_0233e000(uVar6);
              if (cVar4 == '\0') goto label_0447ea51;
              __cxa_end_catch();
              pUVar2 = (__this->fields)._cameraTransform;
            }
            if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
               (pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
               pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0447ea51:
  puVar7 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar7 = *unaff_RBP;
  __cxa_throw(puVar7,&PTR_PTR_05215060,0);
}


// Cameras.MinimapCamera$$.ctor
// il2cpp: void Cameras_MinimapCamera___ctor (Cameras_MinimapCamera_o* __this, const MethodInfo* method);
// 0x447eab0

void Cameras_MinimapCamera___ctor(Cameras_MinimapCamera_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Cameras.MinimapCamera$$.cctor
// il2cpp: void Cameras_MinimapCamera___cctor (const MethodInfo* method);
// 0x447eac0

void Cameras_MinimapCamera___cctor(MethodInfo *method)

{
  if (g_data_057ae881 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    g_data_057ae881 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MinimapCamera + 0xb8) = 0x3840000012c;
  return;
}


