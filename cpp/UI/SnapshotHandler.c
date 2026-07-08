// Type: UI.SnapshotHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SnapshotHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Cameras/SnapshotHandler.cs  [CHANGED since prior version]
// --------------------------------

// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$.ctor
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4___ctor (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4016e10

void UI_SnapshotHandler_<TakeSnapshotCoroutine>d__4___ctor
               (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.IDisposable.Dispose
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_IDisposable_Dispose (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x4017400

void UI_SnapshotHandler_<TakeSnapshotCoroutine>d__4__System_IDisposable_Dispose
               (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  return;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$MoveNext
// il2cpp: bool UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__MoveNext (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x4017410

bool_conflict
UI_SnapshotHandler_<TakeSnapshotCoroutine>d__4__MoveNext
          (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t damage;
  long lVar2;
  UI_InGameMenu_o *__this_00;
  UI_SnapshotHandler_o *__this_01;
  Cameras_BaseCamera_o *pCVar3;
  UnityEngine_WaitForSeconds_o *pUVar4;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Texture2D_o *pUVar7;
  bool_conflict bVar8;
  undefined7 uVar9;
  MethodInfo *method_00;
  
  if (DAT_057042a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SnapshotManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_057042a3 = '\x01';
  }
  uVar9 = (undefined7)((ulong)__this >> 8);
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar5,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar5;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 1;
    bVar8 = (bool_conflict)CONCAT71(uVar9,1);
    break;
  case 1:
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((__this_01 != (UI_SnapshotHandler_o *)0x0) &&
        (pCVar3 = (__this_01->fields).SnapshotCamera, pCVar3 != (Cameras_BaseCamera_o *)0x0)) &&
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
      method_00 = (MethodInfo *)0x1;
      UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
      UI_SnapshotHandler__SetSnapshotPosition
                (__this_01,(UnityEngine_Vector3_o)(__this->fields).position.fields,method_00);
      pUVar7 = UI_SnapshotHandler__RTImage(__this_01,method_00);
      (__this->fields)._snapshot_5__2 = pUVar7;
      il2cpp_runtime_glue(&(__this->fields)._snapshot_5__2);
      pCVar3 = (__this_01->fields).SnapshotCamera;
      if ((pCVar3 != (Cameras_BaseCamera_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
        pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor
                  ((UnityEngine_WaitForEndOfFrame_o *)pIVar5,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar5;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar5);
        (__this->fields).__1__state = 2;
        return (bool_conflict)CONCAT71(uVar9,1);
      }
    }
    goto LAB_04017796;
  case 2:
    (__this->fields).__1__state = -1;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar5,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar5;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 3;
    bVar8 = (bool_conflict)CONCAT71(uVar9,1);
    break;
  case 3:
    (__this->fields).__1__state = -1;
    pUVar7 = (__this->fields)._snapshot_5__2;
    if (pUVar7 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply(pUVar7,(MethodInfo *)0x0);
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x60), lVar2 != 0)) {
        if (*(char *)(lVar2 + 0x11) != '\0') {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (__this_00 == (UI_InGameMenu_o *)0x0) goto LAB_04017796;
          bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
          if (((__this_00->klass->_2).naturalAligment < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          UI_InGameMenu__ShowSnapshot(__this_00,(__this->fields)._snapshot_5__2,(MethodInfo *)0x0);
        }
        pUVar4 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pUVar4,0.5,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar4;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar4);
        (__this->fields).__1__state = 4;
        return (bool_conflict)CONCAT71(uVar9,1);
      }
    }
LAB_04017796:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  case 4:
    (__this->fields).__1__state = -1;
    pUVar7 = (__this->fields)._snapshot_5__2;
    damage = (__this->fields).damage;
    if (*(int *)(TypeInfo_SnapshotManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_SnapshotManager__AddSnapshot(pUVar7,damage,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar4,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar4;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar4);
    (__this->fields).__1__state = 5;
    bVar8 = (bool_conflict)CONCAT71(uVar9,1);
    break;
  case 5:
    (__this->fields).__1__state = -1;
    pUVar7 = (__this->fields)._snapshot_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = 0;
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
    break;
  default:
    bVar8 = 0;
  }
  return bVar8;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x40177a0

Il2CppObject *
UI_SnapshotHandler_<TakeSnapshotCoroutine>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_Reset (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x40177b0

void UI_SnapshotHandler_<TakeSnapshotCoroutine>d__4__System_Collections_IEnumerator_Reset
               (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

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


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_get_Current (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x40177f0

Il2CppObject *
UI_SnapshotHandler_<TakeSnapshotCoroutine>d__4__System_Collections_IEnumerator_get_Current
          (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotHandler$$Awake
// il2cpp: void UI_SnapshotHandler__Awake (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x4016b30

void UI_SnapshotHandler__Awake(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *pUVar1;
  Cameras_BaseCamera_o *pCVar2;
  Cameras_InGameCamera_o *pCVar3;
  
  if (DAT_0570429f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_InGameCamera_GetComponent_InGameCamera);
    il2cpp_init_method_metadata(&MethodInfo_BaseCamera_AddComponent_BaseCamera);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Prefabs/Snapshot/SnapshotCamera");
    DAT_0570429f = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (path,"Prefabs/Snapshot/SnapshotCamera",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pCVar2 = (Cameras_BaseCamera_o *)
             UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_BaseCamera_AddComponent_BaseCamera);
    (__this->fields).SnapshotCamera = pCVar2;
    il2cpp_runtime_glue(&(__this->fields).SnapshotCamera,pCVar2);
    pCVar3 = (Cameras_InGameCamera_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_InGameCamera_GetComponent_InGameCamera);
    (__this->fields).InGameCamera = pCVar3;
    il2cpp_runtime_glue(&(__this->fields).InGameCamera);
    pCVar2 = (__this->fields).SnapshotCamera;
    if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotHandler$$TakeSnapshot
// il2cpp: void UI_SnapshotHandler__TakeSnapshot (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, int32_t damage, const MethodInfo* method);
// 0x4016c60

void UI_SnapshotHandler__TakeSnapshot
               (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o position,int32_t damage,
               MethodInfo *method)

{
  long lVar1;
  Il2CppObject *__this_00;
  
  if (DAT_057042a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_057042a0 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x68), lVar1 != 0)) {
    if (damage < *(int *)(lVar1 + 0x14)) {
      return;
    }
    if (DAT_057042a1 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_TakeSnapshotCoroutine_d__4);
      DAT_057042a1 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TakeSnapshotCoroutine_d__4);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      __this_00[2].monitor = position.fields._0_8_;
      *(float *)&__this_00[3].klass = position.fields.z;
      *(int32_t *)((long)&__this_00[3].klass + 4) = damage;
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotHandler$$TakeSnapshotCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_SnapshotHandler__TakeSnapshotCoroutine (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, int32_t damage, const MethodInfo* method);
// 0x4016d70

System_Collections_IEnumerator_o *
UI_SnapshotHandler__TakeSnapshotCoroutine
          (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o position,int32_t damage,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057042a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TakeSnapshotCoroutine_d__4);
    DAT_057042a1 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TakeSnapshotCoroutine_d__4);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = position.fields._0_8_;
    *(float *)&__this_00[3].klass = position.fields.z;
    *(int32_t *)((long)&__this_00[3].klass + 4) = damage;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotHandler$$SetSnapshotPosition
// il2cpp: void UI_SnapshotHandler__SetSnapshotPosition (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x4016e30

void UI_SnapshotHandler__SetSnapshotPosition
               (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Cameras_InGameCamera_o *pCVar3;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Skybox_o *__this_02;
  UnityEngine_Skybox_o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Material_o *value;
  float fVar4;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dd_00;
  float fVar7;
  float fVar8;
  undefined1 auVar10 [16];
  UnityEngine_Vector3_o UVar11;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  undefined8 uVar9;
  
  pCVar1 = (__this->fields).SnapshotCamera;
  if ((((pCVar1 == (Cameras_BaseCamera_o *)0x0) ||
       (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
      (pCVar3 = (__this->fields).InGameCamera, pCVar3 == (Cameras_InGameCamera_o *)0x0)) ||
     (__this_00 = (pCVar3->fields).Camera, __this_00 == (UnityEngine_Camera_o *)0x0))
  goto LAB_040170a9;
  __this_01 = (pUVar2->fields).Transform;
  __this_04 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (__this_04 == (UnityEngine_Transform_o *)0x0) goto LAB_040170a9;
  UVar11 = UnityEngine_Transform__get_position(__this_04,(MethodInfo *)0x0);
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  local_28 = position.fields.x;
  fStack_24 = position.fields.y;
  local_38._0_4_ = UVar11.fields.x - local_28;
  local_38._4_4_ = UVar11.fields.y - fStack_24;
  fVar7 = UVar11.fields.z - position.fields.z;
  fStack_30 = extraout_XMM0_Dc - in_XMM0_Dc;
  fStack_2c = extraout_XMM0_Dd - in_XMM0_Dd;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar8 = fVar7 * fVar7 +
          (float)local_38._4_4_ * (float)local_38._4_4_ +
          (float)local_38._0_4_ * (float)local_38._0_4_;
  if (fVar8 < 0.0) {
    fVar4 = sqrtf(fVar8);
  }
  else {
    fVar4 = SQRT(fVar8);
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    if (fVar8 < 0.0) goto LAB_04016ff3;
LAB_04016f86:
    uVar5 = 0;
    uVar6 = 0;
    fVar8 = SQRT(fVar8);
    if (fVar8 <= 1e-05) goto LAB_04016fa0;
LAB_0401700e:
    fVar7 = fVar7 / fVar8;
    auVar10._4_4_ = fVar8;
    auVar10._0_4_ = fVar8;
    auVar10._8_4_ = uVar5;
    auVar10._12_4_ = uVar6;
    auVar10 = divps(_local_38,auVar10);
    uVar9 = auVar10._0_8_;
  }
  else {
    if (0.0 <= fVar8) goto LAB_04016f86;
LAB_04016ff3:
    fVar8 = sqrtf(fVar8);
    uVar5 = extraout_XMM0_Dc_00;
    uVar6 = extraout_XMM0_Dd_00;
    if (1e-05 < fVar8) goto LAB_0401700e;
LAB_04016fa0:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar7 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
    fVar8 = 20.0;
    if (20.0 <= fVar4) {
      fVar8 = fVar4;
    }
    UVar11.fields.x = fVar8 * (float)uVar9 + local_28;
    UVar11.fields.y = fVar8 * (float)((ulong)uVar9 >> 0x20) + fStack_24;
    UVar11.fields.z = fVar8 * fVar7 + position.fields.z;
    UnityEngine_Transform__set_position(__this_01,UVar11,(MethodInfo *)0x0);
    UnityEngine_Transform__LookAt(__this_01,position,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).SnapshotCamera;
    if (((pCVar1 != (Cameras_BaseCamera_o *)0x0) &&
        (pCVar3 = (__this->fields).InGameCamera, pCVar3 != (Cameras_InGameCamera_o *)0x0)) &&
       (__this_02 = (pCVar3->fields).Skybox, __this_02 != (UnityEngine_Skybox_o *)0x0)) {
      __this_03 = (pCVar1->fields).Skybox;
      value = UnityEngine_Skybox__get_material(__this_02,(MethodInfo *)0x0);
      if (__this_03 != (UnityEngine_Skybox_o *)0x0) {
        UnityEngine_Skybox__set_material(__this_03,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_040170a9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotHandler$$RTImage
// il2cpp: UnityEngine_Texture2D_o* UI_SnapshotHandler__RTImage (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x40170b0

UnityEngine_Texture2D_o *
UI_SnapshotHandler__RTImage(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  UnityEngine_Camera_o *__this_00;
  int32_t width;
  int32_t height;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UnityEngine_RenderTexture_o *value;
  UnityEngine_RenderTexture_o *pUVar6;
  UnityEngine_Texture2D_o *__this_01;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o source;
  
  if (DAT_057042a2 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057042a2 = '\x01';
  }
  pCVar1 = (__this->fields).SnapshotCamera;
  if (pCVar1 != (Cameras_BaseCamera_o *)0x0) {
    __this_00 = (pCVar1->fields).Camera;
    value = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Camera_o *)0x0) {
      pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__set_active(pUVar6,(MethodInfo *)0x0);
      UnityEngine_Camera__Render(__this_00,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
        width = (*(pUVar6->klass->vtable)._5_get_width.methodPtr)(pUVar6);
        pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
          height = (*(pUVar6->klass->vtable)._7_get_height.methodPtr)
                             (pUVar6,(pUVar6->klass->vtable)._7_get_height.method);
          __this_01 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
          UnityEngine_Texture2D___ctor(__this_01,width,height,3,0,(MethodInfo *)0x0);
          pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
            iVar2 = (*(pUVar6->klass->vtable)._5_get_width.methodPtr)(pUVar6);
            pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
              iVar3 = (*(pUVar6->klass->vtable)._5_get_width.methodPtr)(pUVar6);
              if (__this_01 == (UnityEngine_Texture2D_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              color.fields.b = 1.0;
              color.fields.a = 1.0;
              color.fields.r = 1.0;
              color.fields.g = 1.0;
              UnityEngine_Texture2D__SetPixel(__this_01,0,0,color,(MethodInfo *)0x0);
              pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
                iVar4 = (*(pUVar6->klass->vtable)._5_get_width.methodPtr)(pUVar6);
                pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
                if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
                  iVar5 = (*(pUVar6->klass->vtable)._7_get_height.methodPtr)
                                    (pUVar6,(pUVar6->klass->vtable)._7_get_height.method);
                  iVar2 = (int)((float)iVar2 * 0.04);
                  source.fields.m_XMin = (float)iVar2;
                  source.fields.m_Width = (float)(iVar4 - iVar2);
                  source.fields.m_Height = (float)(iVar5 - iVar2);
                  source.fields.m_YMin = source.fields.m_XMin;
                  UnityEngine_Texture2D__ReadPixels
                            (__this_01,source,(int)((float)iVar3 * 0.02),(int)((float)iVar3 * 0.02),
                             (MethodInfo *)0x0);
                  UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
                  return __this_01;
                }
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SnapshotHandler$$.ctor
// il2cpp: void UI_SnapshotHandler___ctor (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x40173f0

void UI_SnapshotHandler___ctor(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


