// Type: Characters.TitanAttackKeyframe
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanAttackKeyframe.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/TitanAttackKeyframe.cs
// --------------------------------

// Characters.TitanAttackKeyframe$$.ctor
// il2cpp: void Characters_TitanAttackKeyframe___ctor (Characters_TitanAttackKeyframe_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x4323030

void Characters_TitanAttackKeyframe___ctor
               (Characters_TitanAttackKeyframe_o *__this,SimpleJSONFixed_JSONNode_o *data,MethodInfo *method)

{
  int32_t iVar1;
  long *plVar2;
  Characters_TitanAttackKeyframe_o *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float in_XMM1_Da;
  
  if (g_data_057ae00c == '\0') {
    il2cpp_runtime_helper_023445d0(&"x");
    il2cpp_runtime_helper_023445d0(&"f");
    il2cpp_runtime_helper_023445d0(&"y");
    il2cpp_runtime_helper_023445d0(&"z");
    il2cpp_runtime_helper_023445d0(&"r");
    g_data_057ae00c = '\x01';
  }
  pCVar3 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pCVar3 = (Characters_TitanAttackKeyframe_o *)data;
    plVar2 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                               (data,"f",(data->klass->vtable)._7_get_Item.method);
    if (plVar2 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x368))(plVar2,*(undefined8 *)(*plVar2 + 0x370));
      (__this->fields).Frame = iVar1;
      pCVar3 = (Characters_TitanAttackKeyframe_o *)data;
      plVar2 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"x",(data->klass->vtable)._7_get_Item.method);
      if (plVar2 != (long *)0x0) {
        fVar4 = (float)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
        pCVar3 = (Characters_TitanAttackKeyframe_o *)data;
        plVar2 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                   (data,"y",(data->klass->vtable)._7_get_Item.method);
        if (plVar2 != (long *)0x0) {
          fVar5 = (float)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
          pCVar3 = (Characters_TitanAttackKeyframe_o *)data;
          plVar2 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                     (data,"z",(data->klass->vtable)._7_get_Item.method);
          if (plVar2 != (long *)0x0) {
            fVar6 = (float)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
            (__this->fields)._localPosition.fields.x = fVar4;
            (__this->fields)._localPosition.fields.y = fVar5;
            (__this->fields)._localPosition.fields.z = fVar6;
            plVar2 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                       (data,"r",(data->klass->vtable)._7_get_Item.method);
            pCVar3 = (Characters_TitanAttackKeyframe_o *)data;
            in_XMM1_Da = fVar5;
            if (plVar2 != (long *)0x0) {
              fVar4 = (float)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
              (__this->fields)._radius = fVar4;
              return;
            }
          }
        }
      }
    }
  }
  uVar7 = il2cpp_runtime_helper_022b2c90();
  fVar4 = (float)((ulong)uVar7 >> 0x20);
  if ((float)uVar7 < (pCVar3->fields)._localPosition.fields.y) {
    return;
  }
  if (fVar4 < (pCVar3->fields)._localPosition.fields.z) {
    return;
  }
  if (in_XMM1_Da < (pCVar3->fields)._radius) {
    return;
  }
  if (*(float *)&pCVar3->field_0x24 < (float)uVar7) {
    return;
  }
  if (*(float *)&pCVar3[1].klass < fVar4) {
    return;
  }
  return;
}


// Characters.TitanAttackKeyframe$$CheckCollision
// il2cpp: bool Characters_TitanAttackKeyframe__CheckCollision (Characters_TitanAttackKeyframe_o* __this, UnityEngine_Transform_o* titan, UnityEngine_Vector3_o position, UnityEngine_Vector3_o velocity, float attackSpeed, float size, const MethodInfo* method);
// 0x43234a0

bool_conflict
Characters_TitanAttackKeyframe__CheckCollision
          (Characters_TitanAttackKeyframe_o *__this,UnityEngine_Transform_o *titan,
          UnityEngine_Vector3_o position,UnityEngine_Vector3_o velocity,float attackSpeed,float size,
          MethodInfo *method)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  undefined8 extraout_RAX;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  Characters_TitanAttackKeyframe_c *pCVar6;
  Il2CppClass *__this_00;
  UnityEngine_Coroutine_o *pUVar7;
  Il2CppObject *__this_01;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  System_String_o *pSVar11;
  Il2CppClass *__this_02;
  Il2CppClass *pIVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  float fStack_24;
  
  fVar14 = position.fields.z;
  if (titan != (UnityEngine_Transform_o *)0x0) {
    UVar16 = UnityEngine_Transform__TransformPoint
                       (titan,(__this->fields)._localPosition.fields,(MethodInfo *)0x0);
    fVar13 = size * (__this->fields)._radius;
    fStack_24 = position.fields.y;
    fStack_24 = fStack_24 - UVar16.fields.y;
    fVar14 = fVar14 - UVar16.fields.z;
    fVar15 = position.fields.x - UVar16.fields.x;
    return (bool_conflict)
           CONCAT71((int7)((ulong)extraout_RAX >> 8),
                    fVar15 * fVar15 + fStack_24 * fStack_24 + fVar14 * fVar14 <= fVar13 * fVar13);
  }
  il2cpp_runtime_helper_022b2c90(position.fields.x,fVar14,velocity.fields._0_8_,velocity.fields.z);
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
  pSVar11 = "Prefabs/Snapshot/SnapshotCamera";
  pUVar4 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ((System_String_o *)__this_02,"Prefabs/Snapshot/SnapshotCamera",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  iVar8 = (int)pSVar11;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pIVar5 = UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_BaseCamera_AddComponent_BaseCamera);
    *(Il2CppObject **)&(__this->fields)._radius = pIVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._radius,pIVar5);
    pCVar6 = (Characters_TitanAttackKeyframe_c *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_InGameCamera_GetComponent_InGameCamera);
    __this[1].klass = pCVar6;
    il2cpp_runtime_helper_022b4080(__this + 1);
    iVar8 = (int)pCVar6;
    __this_02 = *(Il2CppClass **)&(__this->fields)._radius;
    if (__this_02 != (Il2CppClass *)0x0) {
      iVar8 = 0;
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
        return extraout_EAX;
      }
    }
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  pIVar12 = __this_02;
  fVar13 = fVar14;
  iVar9 = iVar8;
  if (g_data_057ae00e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIVar12 = (Il2CppClass *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae00e = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x68), lVar1 != 0)) {
    if (iVar8 < *(int *)(lVar1 + 0x14)) {
      return (bool_conflict)lVar1;
    }
    if (g_data_057ae00f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__4);
      g_data_057ae00f = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__4);
    iVar9 = 0;
    pIVar12 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->_1).name = 0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).byval_arg.data = __this_02;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this_02);
      *(undefined8 *)&(__this_00->_1).byval_arg.bits = uVar3;
      *(float *)&(__this_00->_1).this_arg.data = fVar14;
      *(int *)((long)&(__this_00->_1).this_arg.data + 4) = iVar8;
      pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_02,
                          (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      return (bool_conflict)pUVar7;
    }
  }
  pvVar2 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae00f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TakeSnapshotCoroutine_d__4);
    g_data_057ae00f = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TakeSnapshotCoroutine_d__4);
  uVar10 = 0;
  pIVar5 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar12;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar12);
    __this_01[2].monitor = pvVar2;
    *(float *)&__this_01[3].klass = fVar13;
    *(int *)((long)&__this_01[3].klass + 4) = iVar9;
    return (bool_conflict)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar5[1].klass = uVar10;
  return extraout_EAX_00;
}


