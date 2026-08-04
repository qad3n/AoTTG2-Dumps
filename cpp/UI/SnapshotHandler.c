// Type: UI.SnapshotHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SnapshotHandler.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/SnapshotHandler.cs
// --------------------------------

// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$.ctor
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4___ctor (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4323810

void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4___ctor
               (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.IDisposable.Dispose
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_IDisposable_Dispose (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x4323e00

void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_IDisposable_Dispose
               (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  return;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$MoveNext
// il2cpp: bool UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__MoveNext (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x4323e10

bool_conflict
UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__MoveNext
          (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t damage;
  long lVar2;
  UI_SnapshotHandler_o *__this_00;
  UnityEngine_WaitForSeconds_o *pUVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Texture2D_o *pUVar6;
  bool_conflict bVar7;
  undefined7 uVar8;
  MethodInfo *method_00;
  UI_InGameMenu_o *__this_01;
  
  __this_01 = (UI_InGameMenu_o *)__this;
  if (g_data_057ae011 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SnapshotManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    __this_01 = (UI_InGameMenu_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae011 = '\x01';
  }
  uVar8 = (undefined7)((ulong)__this >> 8);
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
    (__this->fields).__1__state = 1;
    bVar7 = (bool_conflict)CONCAT71(uVar8,1);
    break;
  case 1:
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((__this_00 != (UI_SnapshotHandler_o *)0x0) &&
        (__this_01 = (UI_InGameMenu_o *)(__this_00->fields).SnapshotCamera,
        __this_01 != (UI_InGameMenu_o *)0x0)) &&
       (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
       , pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      method_00 = (MethodInfo *)0x1;
      UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
      UI_SnapshotHandler__SetSnapshotPosition
                (__this_00,(UnityEngine_Vector3_o)(__this->fields).position.fields,method_00);
      pUVar6 = UI_SnapshotHandler__RTImage(__this_00,method_00);
      (__this->fields)._snapshot_5__2 = pUVar6;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._snapshot_5__2);
      __this_01 = (UI_InGameMenu_o *)(__this_00->fields).SnapshotCamera;
      if ((__this_01 != (UI_InGameMenu_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar4;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
        (__this->fields).__1__state = 2;
        return (bool_conflict)CONCAT71(uVar8,1);
      }
    }
    goto label_04324196;
  case 2:
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
    (__this->fields).__1__state = 3;
    bVar7 = (bool_conflict)CONCAT71(uVar8,1);
    break;
  case 3:
    (__this->fields).__1__state = -1;
    __this_01 = (UI_InGameMenu_o *)(__this->fields)._snapshot_5__2;
    if (__this_01 != (UI_InGameMenu_o *)0x0) {
      UnityEngine_Texture2D__Apply_4dd97c0((UnityEngine_Texture2D_o *)__this_01,(MethodInfo *)0x0);
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x60), lVar2 != 0)) {
        if (*(char *)(lVar2 + 0x11) == '\0') {
label_04324054:
          pUVar3 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(pUVar3,0.5,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pUVar3;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar3);
          (__this->fields).__1__state = 4;
          return (bool_conflict)CONCAT71(uVar8,1);
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_01 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_01 != (UI_InGameMenu_o *)0x0) {
          bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
          if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
            UI_InGameMenu__ShowSnapshot(__this_01,(__this->fields)._snapshot_5__2,(MethodInfo *)0x0);
            goto label_04324054;
          }
          goto label_0432419b;
        }
      }
    }
label_04324196:
    il2cpp_runtime_helper_022b2c90();
label_0432419b:
    il2cpp_runtime_helper_022b2fd0();
    return (bool_conflict)(__this_01->fields).m_CancellationTokenSource;
  case 4:
    (__this->fields).__1__state = -1;
    pUVar6 = (__this->fields)._snapshot_5__2;
    damage = (__this->fields).damage;
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_SnapshotManager__AddSnapshot(pUVar6,damage,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar3,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar3);
    (__this->fields).__1__state = 5;
    bVar7 = (bool_conflict)CONCAT71(uVar8,1);
    break;
  case 5:
    (__this->fields).__1__state = -1;
    pUVar6 = (__this->fields)._snapshot_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = 0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
    break;
  default:
    bVar7 = 0;
  }
  return bVar7;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x43241a0

Il2CppObject *
UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_Reset (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x43241b0

void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_Reset
               (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

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


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_get_Current (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x43241f0

Il2CppObject *
UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_get_Current
          (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotHandler$$Awake
// il2cpp: void UI_SnapshotHandler__Awake (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x4323530

void UI_SnapshotHandler__Awake(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  UnityEngine_GameObject_o *pUVar4;
  Cameras_BaseCamera_o *pCVar5;
  Cameras_InGameCamera_o *pCVar6;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  System_String_o *pSVar10;
  Il2CppClass *__this_02;
  Il2CppClass *pIVar11;
  Il2CppObject *__this_03;
  undefined4 in_XMM1_Da;
  undefined4 uVar12;
  
  if (g_data_057ae00d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameCamera_GetComponent_InGameCamera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCamera_AddComponent_BaseCamera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Snapshot/SnapshotCamera");
    g_data_057ae00d = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (Il2CppClass *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = "Prefabs/Snapshot/SnapshotCamera";
  pUVar4 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ((System_String_o *)__this_02,"Prefabs/Snapshot/SnapshotCamera",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  iVar7 = (int)pSVar10;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pCVar5 = (Cameras_BaseCamera_o *)UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_BaseCamera_AddComponent_BaseCamera);
    (__this->fields).SnapshotCamera = pCVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields).SnapshotCamera,pCVar5);
    pCVar6 = (Cameras_InGameCamera_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_InGameCamera_GetComponent_InGameCamera);
    (__this->fields).InGameCamera = pCVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).InGameCamera);
    iVar7 = (int)pCVar6;
    __this_02 = (Il2CppClass *)(__this->fields).SnapshotCamera;
    if (__this_02 != (Il2CppClass *)0x0) {
      iVar7 = 0;
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  pIVar11 = __this_02;
  uVar12 = in_XMM1_Da;
  iVar8 = iVar7;
  if (g_data_057ae00e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIVar11 = (Il2CppClass *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae00e = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x68), lVar1 != 0)) {
    if (iVar7 < *(int *)(lVar1 + 0x14)) {
      return;
    }
    if (g_data_057ae00f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__4);
      g_data_057ae00f = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__4);
    iVar8 = 0;
    pIVar11 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->_1).name = 0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).byval_arg.data = __this_02;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this_02);
      *(undefined8 *)&(__this_00->_1).byval_arg.bits = uVar3;
      *(undefined4 *)&(__this_00->_1).this_arg.data = in_XMM1_Da;
      *(int *)((long)&(__this_00->_1).this_arg.data + 4) = iVar7;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_02,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  pvVar2 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae00f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__4);
    g_data_057ae00f = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__4);
  uVar9 = 0;
  __this_03 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar11;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar11);
    __this_01[2].monitor = pvVar2;
    *(undefined4 *)&__this_01[3].klass = uVar12;
    *(int *)((long)&__this_01[3].klass + 4) = iVar8;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = uVar9;
  return;
}


// UI.SnapshotHandler$$TakeSnapshot
// il2cpp: void UI_SnapshotHandler__TakeSnapshot (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, int32_t damage, const MethodInfo* method);
// 0x4323660

void UI_SnapshotHandler__TakeSnapshot
               (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o position,int32_t damage,MethodInfo *method)

{
  long lVar1;
  void *pvVar2;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  int32_t iVar3;
  undefined4 uVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *__this_02;
  float fVar6;
  float fVar7;
  
  fVar6 = position.fields.z;
  pIVar5 = (Il2CppClass *)__this;
  fVar7 = fVar6;
  iVar3 = damage;
  if (g_data_057ae00e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIVar5 = (Il2CppClass *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae00e = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x68), lVar1 != 0)) {
    if (damage < *(int *)(lVar1 + 0x14)) {
      return;
    }
    if (g_data_057ae00f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__4);
      g_data_057ae00f = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__4);
    iVar3 = 0;
    pIVar5 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->_1).name = 0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).byval_arg.data = __this;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
      *(long *)&(__this_00->_1).byval_arg.bits = position.fields._0_8_;
      *(float *)&(__this_00->_1).this_arg.data = fVar6;
      *(int32_t *)((long)&(__this_00->_1).this_arg.data + 4) = damage;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  pvVar2 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae00f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__4);
    g_data_057ae00f = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__4);
  uVar4 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar5);
    __this_01[2].monitor = pvVar2;
    *(float *)&__this_01[3].klass = fVar7;
    *(int32_t *)((long)&__this_01[3].klass + 4) = iVar3;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar4;
  return;
}


// UI.SnapshotHandler$$TakeSnapshotCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_SnapshotHandler__TakeSnapshotCoroutine (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, int32_t damage, const MethodInfo* method);
// 0x4323770

System_Collections_IEnumerator_o *
UI_SnapshotHandler__TakeSnapshotCoroutine
          (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o position,int32_t damage,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae00f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__4);
    g_data_057ae00f = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__4);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = position.fields._0_8_;
    *(float *)&__this_00[3].klass = position.fields.z;
    *(int32_t *)((long)&__this_00[3].klass + 4) = damage;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.SnapshotHandler$$SetSnapshotPosition
// il2cpp: void UI_SnapshotHandler__SetSnapshotPosition (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x4323830

void UI_SnapshotHandler__SetSnapshotPosition
               (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Cameras_InGameCamera_o *pCVar3;
  UnityEngine_Skybox_o *__this_00;
  char cVar4;
  int32_t width;
  int32_t height;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Material_o *value;
  UnityEngine_RenderTexture_o *value_00;
  UnityEngine_RenderTexture_o *pUVar9;
  UnityEngine_Texture2D_o *pUVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  UI_SnapshotHandler_o *__this_02;
  float fVar14;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dd_00;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  UnityEngine_Color_o color;
  UnityEngine_Rect_o source;
  UnityEngine_Color_o color_00;
  UnityEngine_Vector3_o UVar21;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  pCVar1 = (__this->fields).SnapshotCamera;
  plVar13 = (long *)__this;
  if ((((pCVar1 != (Cameras_BaseCamera_o *)0x0) &&
       (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
      (pCVar3 = (__this->fields).InGameCamera, pCVar3 != (Cameras_InGameCamera_o *)0x0)) &&
     (plVar13 = (long *)(pCVar3->fields).Camera,
     (UI_SnapshotHandler_o *)plVar13 != (UI_SnapshotHandler_o *)0x0)) {
    __this_02 = (UI_SnapshotHandler_o *)(pUVar2->fields).Transform;
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)plVar13,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar21 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      local_28 = position.fields.x;
      fStack_24 = position.fields.y;
      local_38._0_4_ = UVar21.fields.x - local_28;
      local_38._4_4_ = UVar21.fields.y - fStack_24;
      fVar17 = UVar21.fields.z - position.fields.z;
      fStack_30 = extraout_XMM0_Dc - in_XMM0_Dc;
      fStack_2c = extraout_XMM0_Dd - in_XMM0_Dd;
      if (*(int *)((long)&TypeInfo_Math[4].fields.SnapshotCamera + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar18 = fVar17 * fVar17 +
               (float)local_38._4_4_ * (float)local_38._4_4_ + (float)local_38._0_4_ * (float)local_38._0_4_;
      if (fVar18 < 0.0) {
        fVar14 = sqrtf(fVar18);
      }
      else {
        fVar14 = SQRT(fVar18);
      }
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      plVar13 = (long *)TypeInfo_Math;
      if (*(int *)((long)&TypeInfo_Math[4].fields.SnapshotCamera + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (0.0 <= fVar18) goto label_04323986;
label_043239f3:
        fVar18 = sqrtf(fVar18);
        uVar15 = extraout_XMM0_Dc_00;
        uVar16 = extraout_XMM0_Dd_00;
        if (fVar18 <= 1e-05) goto label_043239a0;
label_04323a0e:
        fVar17 = fVar17 / fVar18;
        auVar19._4_4_ = fVar18;
        auVar19._0_4_ = fVar18;
        auVar19._8_4_ = uVar15;
        auVar19._12_4_ = uVar16;
        auVar19 = divps(_local_38,auVar19);
        uVar11 = auVar19._0_8_;
      }
      else {
        if (fVar18 < 0.0) goto label_043239f3;
label_04323986:
        uVar15 = 0;
        uVar16 = 0;
        fVar18 = SQRT(fVar18);
        if (1e-05 < fVar18) goto label_04323a0e;
label_043239a0:
        if (g_data_057a65d5 == '\0') {
          plVar13 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        uVar11 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar17 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      if (__this_02 != (UI_SnapshotHandler_o *)0x0) {
        fVar18 = 20.0;
        if (20.0 <= fVar14) {
          fVar18 = fVar14;
        }
        UVar21.fields.x = fVar18 * (float)uVar11 + local_28;
        UVar21.fields.y = fVar18 * (float)((ulong)uVar11 >> 0x20) + fStack_24;
        UVar21.fields.z = fVar18 * fVar17 + position.fields.z;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_02,UVar21,(MethodInfo *)0x0);
        UnityEngine_Transform__LookAt_4e0aa40((UnityEngine_Transform_o *)__this_02,position,(MethodInfo *)0x0)
        ;
        pCVar1 = (__this->fields).SnapshotCamera;
        plVar13 = (long *)__this_02;
        if (((pCVar1 != (Cameras_BaseCamera_o *)0x0) &&
            (pCVar3 = (__this->fields).InGameCamera, pCVar3 != (Cameras_InGameCamera_o *)0x0)) &&
           (plVar13 = (long *)(pCVar3->fields).Skybox,
           (UI_SnapshotHandler_o *)plVar13 != (UI_SnapshotHandler_o *)0x0)) {
          __this_00 = (pCVar1->fields).Skybox;
          value = UnityEngine_Skybox__get_material((UnityEngine_Skybox_o *)plVar13,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Skybox_o *)0x0) {
            UnityEngine_Skybox__set_material(__this_00,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae010 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae010 = '\x01';
  }
  pCVar1 = (((UI_SnapshotHandler_o *)plVar13)->fields).SnapshotCamera;
  if (pCVar1 != (Cameras_BaseCamera_o *)0x0) {
    plVar13 = (long *)(pCVar1->fields).Camera;
    value_00 = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
    if ((UI_SnapshotHandler_o *)plVar13 != (UI_SnapshotHandler_o *)0x0) {
      pUVar9 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)plVar13,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__set_active(pUVar9,(MethodInfo *)0x0);
      UnityEngine_Camera__Render((UnityEngine_Camera_o *)plVar13,(MethodInfo *)0x0);
      pUVar9 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)plVar13,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_RenderTexture_o *)0x0) {
        width = (*(pUVar9->klass->vtable)._5_get_width.methodPtr)(pUVar9);
        pUVar9 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)plVar13,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_RenderTexture_o *)0x0) {
          height = (*(pUVar9->klass->vtable)._7_get_height.methodPtr)
                             (pUVar9,(pUVar9->klass->vtable)._7_get_height.method);
          pUVar10 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
          UnityEngine_Texture2D___ctor_4dd9130(pUVar10,width,height,3,0,(MethodInfo *)0x0);
          pUVar9 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)plVar13,(MethodInfo *)0x0);
          if (pUVar9 != (UnityEngine_RenderTexture_o *)0x0) {
            iVar5 = (*(pUVar9->klass->vtable)._5_get_width.methodPtr)(pUVar9);
            pUVar9 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)plVar13,(MethodInfo *)0x0);
            if (pUVar9 != (UnityEngine_RenderTexture_o *)0x0) {
              iVar6 = (*(pUVar9->klass->vtable)._5_get_width.methodPtr)(pUVar9);
              if (pUVar10 == (UnityEngine_Texture2D_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
label_04323cca:
                il2cpp_runtime_helper_022b2c90();
              }
              else {
                color.fields.b = 1.0;
                color.fields.a = 1.0;
                color.fields.r = 1.0;
                color.fields.g = 1.0;
                UnityEngine_Texture2D__SetPixel(pUVar10,0,0,color,(MethodInfo *)0x0);
                pUVar9 = UnityEngine_Camera__get_targetTexture
                                   ((UnityEngine_Camera_o *)plVar13,(MethodInfo *)0x0);
                if (pUVar9 == (UnityEngine_RenderTexture_o *)0x0) goto label_04323cca;
                iVar7 = (*(pUVar9->klass->vtable)._5_get_width.methodPtr)(pUVar9);
                pUVar9 = UnityEngine_Camera__get_targetTexture
                                   ((UnityEngine_Camera_o *)plVar13,(MethodInfo *)0x0);
                if (pUVar9 != (UnityEngine_RenderTexture_o *)0x0) {
                  iVar8 = (*(pUVar9->klass->vtable)._7_get_height.methodPtr)
                                    (pUVar9,(pUVar9->klass->vtable)._7_get_height.method);
                  iVar5 = (int)((float)iVar5 * 0.04);
                  source.fields.m_XMin = (float)iVar5;
                  source.fields.m_Width = (float)(iVar7 - iVar5);
                  source.fields.m_Height = (float)(iVar8 - iVar5);
                  source.fields.m_YMin = source.fields.m_XMin;
                  UnityEngine_Texture2D__ReadPixels_4dd9b70
                            (pUVar10,source,(int)((float)iVar6 * 0.02),(int)((float)iVar6 * 0.02),
                             (MethodInfo *)0x0);
                  UnityEngine_RenderTexture__set_active(value_00,(MethodInfo *)0x0);
                  return;
                }
              }
              auVar20 = il2cpp_runtime_helper_022b2c90();
              if (auVar20._8_4_ != 1) {
                _Unwind_Resume(auVar20._0_8_);
              }
              plVar13 = (long *)__cxa_begin_catch(auVar20._0_8_);
              cVar4 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,
                                         (((UnityEngine_Transform_c *)((UI_SnapshotHandler_o *)plVar13)->klass
                                          )->_1).image);
              if (cVar4 == '\0') goto label_04323daa;
              __cxa_end_catch();
              uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
              pUVar10 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(uVar11);
              UnityEngine_Texture2D___ctor_4dd91d0(pUVar10,1,1,(MethodInfo *)0x0);
              if (pUVar10 != (UnityEngine_Texture2D_o *)0x0) {
                color_00.fields.b = 1.0;
                color_00.fields.a = 1.0;
                color_00.fields.r = 1.0;
                color_00.fields.g = 1.0;
                UnityEngine_Texture2D__SetPixel(pUVar10,0,0,color_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04323daa:
  puVar12 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar12 = (UnityEngine_Transform_c *)((UI_SnapshotHandler_o *)plVar13)->klass;
  __cxa_throw(puVar12,&PTR_PTR_05215060,0);
}


// UI.SnapshotHandler$$RTImage
// il2cpp: UnityEngine_Texture2D_o* UI_SnapshotHandler__RTImage (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x4323ab0

UnityEngine_Texture2D_o * UI_SnapshotHandler__RTImage(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  char cVar2;
  int32_t width;
  int32_t height;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UnityEngine_RenderTexture_o *value;
  UnityEngine_RenderTexture_o *pUVar7;
  UnityEngine_Texture2D_o *pUVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [12];
  UnityEngine_Color_o color;
  UnityEngine_Rect_o source;
  UnityEngine_Color_o color_00;
  
  if (g_data_057ae010 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae010 = '\x01';
  }
  pCVar1 = (__this->fields).SnapshotCamera;
  if (pCVar1 != (Cameras_BaseCamera_o *)0x0) {
    __this = (UI_SnapshotHandler_o *)(pCVar1->fields).Camera;
    value = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
    if (__this != (UI_SnapshotHandler_o *)0x0) {
      pUVar7 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)__this,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__set_active(pUVar7,(MethodInfo *)0x0);
      UnityEngine_Camera__Render((UnityEngine_Camera_o *)__this,(MethodInfo *)0x0);
      pUVar7 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)__this,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_RenderTexture_o *)0x0) {
        width = (*(pUVar7->klass->vtable)._5_get_width.methodPtr)(pUVar7);
        pUVar7 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)__this,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_RenderTexture_o *)0x0) {
          height = (*(pUVar7->klass->vtable)._7_get_height.methodPtr)
                             (pUVar7,(pUVar7->klass->vtable)._7_get_height.method);
          pUVar8 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
          UnityEngine_Texture2D___ctor_4dd9130(pUVar8,width,height,3,0,(MethodInfo *)0x0);
          pUVar7 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_RenderTexture_o *)0x0) {
            iVar3 = (*(pUVar7->klass->vtable)._5_get_width.methodPtr)(pUVar7);
            pUVar7 = UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)__this,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_RenderTexture_o *)0x0) {
              iVar4 = (*(pUVar7->klass->vtable)._5_get_width.methodPtr)(pUVar7);
              if (pUVar8 == (UnityEngine_Texture2D_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
label_04323cca:
                il2cpp_runtime_helper_022b2c90();
              }
              else {
                color.fields.b = 1.0;
                color.fields.a = 1.0;
                color.fields.r = 1.0;
                color.fields.g = 1.0;
                UnityEngine_Texture2D__SetPixel(pUVar8,0,0,color,(MethodInfo *)0x0);
                pUVar7 = UnityEngine_Camera__get_targetTexture
                                   ((UnityEngine_Camera_o *)__this,(MethodInfo *)0x0);
                if (pUVar7 == (UnityEngine_RenderTexture_o *)0x0) goto label_04323cca;
                iVar5 = (*(pUVar7->klass->vtable)._5_get_width.methodPtr)(pUVar7);
                pUVar7 = UnityEngine_Camera__get_targetTexture
                                   ((UnityEngine_Camera_o *)__this,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_RenderTexture_o *)0x0) {
                  iVar6 = (*(pUVar7->klass->vtable)._7_get_height.methodPtr)
                                    (pUVar7,(pUVar7->klass->vtable)._7_get_height.method);
                  iVar3 = (int)((float)iVar3 * 0.04);
                  source.fields.m_XMin = (float)iVar3;
                  source.fields.m_Width = (float)(iVar5 - iVar3);
                  source.fields.m_Height = (float)(iVar6 - iVar3);
                  source.fields.m_YMin = source.fields.m_XMin;
                  UnityEngine_Texture2D__ReadPixels_4dd9b70
                            (pUVar8,source,(int)((float)iVar4 * 0.02),(int)((float)iVar4 * 0.02),
                             (MethodInfo *)0x0);
                  UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
                  return pUVar8;
                }
              }
              auVar11 = il2cpp_runtime_helper_022b2c90();
              if (auVar11._8_4_ != 1) {
                _Unwind_Resume(auVar11._0_8_);
              }
              __this = (UI_SnapshotHandler_o *)__cxa_begin_catch(auVar11._0_8_);
              cVar2 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,(((UnityEngine_Camera_c *)__this->klass)->_1).image);
              if (cVar2 == '\0') goto label_04323daa;
              __cxa_end_catch();
              uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
              pUVar8 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(uVar9);
              UnityEngine_Texture2D___ctor_4dd91d0(pUVar8,1,1,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_Texture2D_o *)0x0) {
                color_00.fields.b = 1.0;
                color_00.fields.a = 1.0;
                color_00.fields.r = 1.0;
                color_00.fields.g = 1.0;
                UnityEngine_Texture2D__SetPixel(pUVar8,0,0,color_00,(MethodInfo *)0x0);
                return pUVar8;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04323daa:
  puVar10 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar10 = (UnityEngine_Camera_c *)__this->klass;
  __cxa_throw(puVar10,&PTR_PTR_05215060,0);
}


// UI.SnapshotHandler$$.ctor
// il2cpp: void UI_SnapshotHandler___ctor (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x4323df0

void UI_SnapshotHandler___ctor(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


